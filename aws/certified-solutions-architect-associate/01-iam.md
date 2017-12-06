# IAM
 - Consist of:
	- Centralised control of AWS account
	- Shared access to aws account
	- granular permission
	- identity federation
	- multi FA
	- provide temporary access to user and services where necessary
	- password rotation policy

 - Term 
 	- user
 	- groups = coll of user
 	- roles = assign aws resources to user/group
 	- policies = define one or more permissions

IAM = manage users, groups, roles and their corresponding level of access to the AWS Platform.
Power User Access = Access to all AWS services except for management of groups and users within IAM
root = admin access

## Configuration:
 - one place to configure user, group and roles and such.
 - Types:
   - Console = user + pass
   - Programmatic / cli = access key + secret key.
     - Secret key is only given only 1 time.
     - Has 2 fa for security
   - New User = no access to any aws.
   - Policy = json
