# EC2 (Elastic Compute Cloud)
 - On Demand
  - Fixed rate/hour, no commitment. 
  - No up-front payment
 - Reserved.
  - Application with steady state or predictable usages
  - Upfront cost; to lower the cost.
  - Reserve capacity for longer term, 1 or 3 year.
 - Spot (think about stock market.)
  - bid whatever the price for instance.
  - App with only feasible at low compute prices.
  *- if terminated by amazon, you will not charged for partial hour.
  *- but if the user terminate, you will be charged for any hour in which the instance ran. 
 - Dedicated Host
  - Physical EC2 server dedicated for your use.
  - useful for regulatory requirement that may not support multi-tenant virtualisation
  - licensing app, which can't be run on virtual environment.
  - purchase on-demand (hourly)
  - can purchase as a reserve for up to 70% off the on-demand price.

# Type of EC2 instances:

| Family        | Speciality | Use case|
| --------- |:-------------:| -----:|
| d2 (density)| dense storage| fileserver/hadoop|
| r4(ram(memory))| memory optimized| memory intensive app |
| m4(general purpose)| general purpose| application server |
| c4(compute)| compute optimzed | cpu intensive app/db |
| g2(graphics)| graphics intensive | video encoding/3d |
| i2(io)| io speed | nosql, data warehousing |
| f1(FPGA)| FPGA | hardware acc. for your code |
| t2(lowest cost, general)| low cost, general| webserver / small db |
| p2(graphic purpose)| graphics / general purpose gpu | machine learning |
| x1(extreme ram)| mem. optimized. | apache spark|


# Learning type trick:
 - DR MC GIFT PX
 - D = density
 - R = ram
 - M = main general purpose
 - C = compute
 - G = graphics
 - I = IO
 - F = FPGA
 - T = cheap general purpose
 - P = graphics
 - X = extreme memory

EBS: create a storage volumes and attach to ec2 instances / (block storage). can't mount in multiple ec2 instance.
EBS type:
 - ssd
	- general purpose ssd (GP2)
		- up to 10,000 iops
 		- balance both price & performance
 		- ratio of 3 iops per gb.
	- provisioned iops ssd (io1)
 		- designed nosql
 		- use if more than 10,000 iops needed.
 		- up to 20,000 iops per volume.
 - hdd
	- throughput optimized hdd (ST1)
		- frequently accessed workloads
		- big data
		- data warehouses
		- log process
		- can't be boot volume.
	- cold hdd (SC1)
		- lowest cost storage for infrequently accessed workloads
		- file server
		- can't be boot volume.
	- magnetic (standard)
		- lowest cost per gb in ebs.
		- bootable
		- access infrequently
		- storage cost is important


# Lab Summary:
 - Termination Protection is turned off by default
 - Root ebs volume to be deleted when the instance is terminate
 - EBS default root volume isn't encrypted.
 - Creating a custom ami can be encrypted.
 - Additional volume can be encrypted.
 - Change EBS type on the fly, except magnetic standard
 - Stop and snapshot (but not required)
 - Volume must be in the same AZ as the EC2 instances.

# Security Group
 - Applied immediately.
 - Outbound doesn't matter, if inbound is applied; it will work.
 - All ports are blocked by default.

# AMI
 - If snapshot is encrypted, its copy will also be encrypted.
 - Share snapshot with public but shouldn't be encrypted.

# Instance Store
 - Ephemeral Storage
 - It can't be stopped.
 - If the instance fail, all data is gone.
 - Can be reboot without loosing data.
 - It deleted, volume also get deleted. (not in EBS volume(instance))

# Elastic Load Balancers
 - Reported as: In-Service or Out-of-Service
 - Health Checks by get request.
 - Only DNS name, not IP address.
 - Classic Load Balancer (tcp layer)
 - Application Load Balancer (app layer)

# CloudWatch (Logging and Monitoring)
 - Standard Monitoring = 5 Minute
 - Detail Monitoring = 1 Minute
 - Dashboard: A custom dashboard what is happening.
 - Alarms: Notify when a particular thresholds hit.
 - Events: CloudWatch Events helps to respond to state changes in AWS resources.
 - Logs: Help aggregate, monitor, and store logs.


# AWS CLI
 - command line:
   - aws configure
   - aws s3 ls
 - IAM Role:
   - aws configure (commandline) isn't required.
   - can restrict particular service to the instance.
 - region:
   - aws s3 cp --recursive s3://randombucket-useast1 /tmp/ '--region' us-east-1
     - 'region' => aws cli s3 doesn't work with different region unless specify.

# Bootstrap
 - Configure Instance => Advance Drop-down.
   - Drop-down.
   - a bash script when the machine initially start(created)) 

# Metadata of Instance.
 - http://169.254.169.254/latest/meta-data/

# Auto-Scaling
 - Auto-Scaling
   - Launch Configuration
     - Create instance template (a group)
     - Rule if something happen.
       - Autogenerate another instance incase; something doesn't work
       - Alarm: Send Email.
       - Health Check and does its magic.
 
# Placement Group
 - A logical grouping of instances within a single AZ.
 - Low Latency; high throughput; 10Gbps.
 - EC2 Placement Group:
   - Single point of failure.
   - Can't be spread in multiple AZ.
   - Must have Unique Name
   - Only certain type of instance can be launched.
   - Recommend homogenous(same size and same family type)
   - Can't merge placement group.
   - Can't move instance but can create(snapshot) of AMI in Placement Group.

# EFS( Elastic Filesystem)
 - Filesystem for EC2 Instance
 - Elastic; expand and shrink on demand.
 - Support NFSv4 (1000 concurrent) ; NFS feature; group 
 - Pay for storage use.
 - no pre-provisioning
 - Scale upto 1PB.
 - Stored multiple AZ's within a region
 - Read after write.



```
# CloudTrail (Auditing, what user are doing with AWS)
```

# EXAM TIPS:
know difference btwn:
 on demand
 spot
 reserved
 dedicated Host
 ebs


# continue from 05-50
