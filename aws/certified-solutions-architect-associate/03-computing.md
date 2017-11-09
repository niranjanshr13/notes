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

# continue from 05-27
