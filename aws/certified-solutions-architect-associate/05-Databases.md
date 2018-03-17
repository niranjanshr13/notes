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

# RedShift (10x time faster)
 - Definition:
   - Data warehousing services.
   - Highly scale-able; 1PB.
   - Fast, and fully managed
   - $0.25 per hour.
   - $1000 per terabyte/ year. 
   - Cheaper than other services.
 - Configuration:
   - Start in Single Node (160Gb)
   - Multi-Node:
     - Leader Node: manages client connections and recives queries.
     - Compute Node: Store data and perform queries and computation. Up to 128 compute nodes.

 - Columnar Data Storage:
   - Organize data by column
   - Ideal for transaction processing, column based systems are ideal for data warehousing and analytics.
   - Require few I/O's, improving query performance.
 - Advance Compression:
   - Store much more data than row based data.
   - Most of data are same or have similar type to it. 
   - It will use its own compression technique to compress data.
   - It doesn't require indexes; causing less storage.
   - It will choose the compression scheme.

 - Massive Parallel Processing (MPP):
   - Automatically distributes data and query load across all nodes.
   - Make it easy to add nodes to your data warehouse.

 - Pricing:
   - Compute Node Hours:
     - Total no of hours you run across your compute node.
     - Billed 1 unit per node per hour.
     - Example:
       - 3 node * (24 * 30) = 2160 instance hours.
     - Will not be charged for leader node hours.
     - Only Compute node will be charged.
   - will be charged for Backup
   - data transfer (only within a VPC, not outside it)

 - Security
   - Transit = SSL
   - Rest = AES-256
   - By default take care of key management.
     - Manage own keys through HS
     - AWS Key Management Service.

 - Availability
   - Currently 1 AZ.
   - Can restore snapshots to new AZ in the event of an outrage.

# Elasticache:
 - Definition
   - web service that makes it easy to deploy, operate, and scale and in-memory cache in the cloud.
   - Improve speed by using in-memory caches, not using a disk-based storage.
   - Basically caching everything.
 - Types:
   - Memcached = Object cache system.
   - Redis = Key value store system.
     - Cross AZ redundancy

- Exam Tips:
 - Elasticache = Read heavy and not frequently changing.
 - Redshift = Management key running OLAP transactions.

# Aurora
 - Definition
   - Aurora is a MySQL compatibility,
   - relational database engine.
   - combine speed and availability of high-end comm. database
   - 5x faster than MySql
 - Scaling:
  - Starts with 10Gb.
  - Scale increments to 64Tb
  - Compute resource 32vCPUs and 244Gb of Memory.
  - 2 copies of you data in each availability zone.
  - minimum of 3 AZ. Total 6 copies of data.
  - Transparently handle the loss of up to two without affecting database write availability. + 3 copies without affecting read availability.
  - Storage is self-healing.
 - Replicas.
  - 2 Types:
   - Aurora Replicas (currently 15)
   - MySQL read Replicas (currently 5)



# Summary
 - RDS-OLTP
  - SQL
  - MySQL
  - PostgreSQL
  - Oracle
  - Aurora
  - Mariadb
 - DynamoDB - NoSQl
 - Redshift - OLAP
 - Elasticache - In memory caching.
  - Memcached
  - Redis
 - Multi-AZ
  - Fail-over to replica
  - Don't have to assign the end-point.
 - Read Replica:
  - If the app does read a lot, can create a replica to load-balance the reading.
  - Read replica by the writer.
  - 5 Replica.
 - Aurora:
  - Same as above.
 - DynamoDB vs RDS
  - Dynamodb doesnt have downtime can scale with any lag.
  - Dynamodb is on SSD and spread to 3 GEO-center.
  - Eventual Consistent Reads (Default), it is fast but no that fast.
  - Strongly Consistent Reads, it is god-speed.
  - RDS => just look at mysql you know it time to scale up.
 - Redshift Configuration
  - Single Node (160Gb)
  - Multi-Node
   - Leader Node (manage client connection and receives queries)
   - Compute Node (store data and perform queries) up-to 128 compute node.
 - Elasticache
  - In-memory cache.
   - Memcached
   - Redis
