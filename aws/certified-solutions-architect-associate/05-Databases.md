# Database

- RDS - OLTP
  - SQL
  - MySql / Mariadb
  - PostgreSQL
  - Oracle
- DynamoDB - NoSQl
- Redshift - OLAP
- Elasticache - In Memory  Caching.
 - Memcached
 - Redis 
 - DMS

# RDS Back-UP
 - Backup
   - Automate Backup:
    - retention can be between 1 and 35 days.
    - Fully daily snapshots + transaction logs.
    - Recovery, AWS pick the recent day.
    - Can pick any moment
    - Enable by default
    - I/O might be affected when backup.
    - While recovery from totally different instance, DNS will change.
   - Snapshots
    - Done Manually.
    - Stored data even the RDS Instance is deleted.
    - While recovery from totally different instance, DNS will change.
 - Encryption
   - Encryption at rest is supported to RDS.
 - Multi-AZ
   - Automatic Failover.
   - Exact copy in another AZ.
   - Only should be used for Disaster Recovery.
 - Read Replica:
   - Has a similar Multi-AZ concept, but use multiple instance to read a data.
   - Must have automatic backup on to deploy Read Replica.
   - Can scale up to 5 copies(not necessary copy but increase speed on read the data.)
   - Supported: MySQL (MariaDB), PostSQL
   - Replica or replica can cause slow down
   - Each Replica has its own DNS.
   - Can't have replica that have Multi-AZ
   - Can Read Replica of Multi-AZ. 
 - DynamoDB vs RDS:
   - DynamoDB can be scale up on the fly, without any down time.
   - RDS takes time.

# DynamoDB
 - NoSQL
 - Very Faaasssttt.
 - Great fit for low end device, because it i Faaasssttt....
 - Stored in SSD Storage.
 - Spread 3 GEO distinct data centres.
 - Eventual Consistent Read.
   - Data is reached within a second.
 - Strongly Consistent Reads
   - read which are write immeditetly.
 - Pricing:
   - Write = 0.0065 per hour for every 10 units.
   - Read = 0.0065 per hour for every 50 units.
   - Storage = 0.25/GB.



# Continue from 07-67
