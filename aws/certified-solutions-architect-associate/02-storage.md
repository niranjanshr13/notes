#S3 
 - object based storage. 
   - key = filename of the object
   - value = data of the file
   - version id = which version is this.
   - metadata = info about the data.
   - subresources
     - access control list(ACL)
     - torrent
 - Other things
   - now compute server
   - must unique filename globally in a bucket.
   - allow to upload files.
   - no server is behind it.
   - 0-5TB limit.
   - unlimited storage
   - file is stored on a bucket.
   - stored in a specific url
     - s3-ru-west-1.amazonaws.com/filename
   
 - 1 data is spread across multiple devices.
 - basic
   - http 200 for success write.
 - read after write
   - not write in a file immediately
   - take a fraction to sync on other multiple copies.
 - storage tiers
   - ![storage-tiers](s3-storage-tiers.png) 

# Types of S3
## S3-IA
 - similar to s3 but should be used as infrequently accessed.
## S3-Reduced Redundancy Storage
 - data should be easily regenerate
 - cost low.
 - mostly thumbnails.

S3-Cross Region Replication (Disaster Recovery)
 - Both source and destination's Version must be enabled.
 - Regions must be unique
 - File in a existing bucket are not replicated automatically. All subsequent updated files will be replicated automatically
 - Can't replicate to multiple buckets or use daisy chaining.
 - Delete markers are replicated. (more like a versioning)
 - Deleting individual versions or delete markers will not be replicated.


S3- Lifecycle Management Lab
 - Event after certain period of time, it is done to save cost.
 - Move to infrequent S3 (save a little bit) or to the glacier (save a lot)
   - everything is focused on the creation time.
   - infrequent S3 (delete marker only commit to the version).
   - glacier delete ( this has the permanent delete after x days.)
   - glacier has a minimum of 90 day limit. ( if the rule implies to less than 90 day, it will cost the same as the 90 day.)

# Glaciers
 - storage for archival.
 - Cost = $0.01 / gigabyte / month
 - retrieval time = 3-5 hours.
 - Charged for:
   - Storage
   - Requests
   - Storage Management Pricing
   - Data Transfer Pricing
   - Transfer Acceleration
     - give a speed bump to the end-user.
     - take advantage by using cloudfront.


# CloudFront
 - Term
   - *Edge Location = Contain where it will be cached, it is not a AWS Region
     - It is both read & write.
     - Object are cache for the life of the TTL.
     - can clear the cache early, but will be charged.
   - *Origin = S3 bucket, EC2 instance, Elastic Load balancer, Route 53 (DNS)
   - *Distribution = CDN which consist of the coll. of Edge Locations.
     - Web Distribution = Used for website.
     - RTMP = used for media streaming
 - CDN
   - A cache server around the world (nearest edge location) which sole purpose it transmit data to the user.
 - Cloudfront Distribution
   - Blacklist/Whitelist geo-location
   - custom cloudfront sub-domain.
   - default ttl = 1day
   - behavior = a glob(regex) to allow certain file to push through the cloud-front
   - Custom error page
 - Security (Encryption)
   - by default = private
   - acls
   - bucket policy
   - log all the request made.
   - type of encyption
     - transit = ssl/tls
     - at rest
       - server side encyption
         - s3 managed key - sse-s3 = encrypt with unique key, encrpyion the keychain with another master key. (rotation key) = sha512
         - aws key management service, managed keys - SSE-KMS = key trailing, who is using the key and when it was used.
         - server side encryption  with cusomer provided keys - SSE-C = managed key by the user.
       - client side encryption


# Storage Gateway:
 - connect with local storage and provide the seemless and secure to the aws infrastructure.
 - Types of Storage Gateway
  - File Gateway(NFS)
  - Volume Gateway(iscsi)
   - stored volumes
   - cache volumes
  - Tape Gateway (VTL) 


# Snowball
 - type of Snowball
 	- Snowball
 	- Snowball Edge
 	- Snowmobile
 - Import and Export to S3
 
# S3 Transfer Acceleration
 - Utilized the CloudFront Edge Network,
   - send the data to nearest data center, to upload to s3.
   - typical url = name.s3-accelerate.amazonaws.com


```
Create a static page in aws.
 - just the check the bucket properties for the static.
 - index.html
 - error.html
```

# Storage Tiers

| ||Standard | Standard - Infrequent Access| Reduced Redundancy|
| --------- |:-------------:| -----:|----:|
| Durability| 99.999999999% | 99.999999999%| 99.99%|
| Availability| 99.99%| 99.9%| 99.99%|
| Concurrent facility fault tolerance| 2| 2| 1|
| SSL support| Yes| Yes| Yes|
| First byte latency| Millisecond| Millisecond| Millisecond |
| Life-cycle Management Policies| Yes|Yes|Yes|



# Summary:
	- s3 is object based.
	- 0 - 5TB
	- Unlimited storage
	- file are stored in bucket
	- s3 is universal namespace; meaning if someone use the x' name, you can't use that name
	- s3-eu-west-1.amazonaws.com/acloud
	- read after write.
	- can take a small time because the file hasn't propagate.
	- s3 storage classes/tiers
		- s3 = default, fast and frequently.
		- s3 - IA = same as s3, but unfrequently.
		- s3 - reduced redundancy storage = less durability
		- glacier = archieve data, 3-5 hour wait.
	- fundamental of s3
		- key (name)
		- value (data)
		- version id (versions)
			- if it once enable, can't be disabled; only suspended.
			- lifecycle rule.
			- can integrate MFA for deleting capability 
		- metadata (data about data)
		- ACL
