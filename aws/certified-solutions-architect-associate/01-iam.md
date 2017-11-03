IAM
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
 	- groups = coll of User
 	- roles = assign aws resources to user/group
 	- policies = define one or more permissions

---
IAM 
 - manage users, groups, roles and their corresponding level of access to the AWS Platform.

Power User Access 
 - Access to all AWS services except for management of groups and users within IAM

root = admin access
configuration = one place to configure user, group and roles and such.
console = user + pass
programmatic / command line = access key + secret key
has 2 fa.
new user = no access to any aws.
policy = json
