EC2 (Elastic Compute Cloud)
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

Type:

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


Learning type trick:
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


Lab Summary:
 - Termination Protection is turned off by default
 - root ebs volume to be deleted when the instance is terminate
 - EBS default root volume isn't encrypted.
 - creating a custom ami can be encrypted.
 - additional volume can be encrypted.



EXAM TIPS:
know difference btwn:
 on demand
 spot
 reserved
 dedicated Host
 ebs


# continue from 05-32
