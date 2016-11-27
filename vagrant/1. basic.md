Vagrant
=======
```
what and why
------------
It is like a docker but for the vm's 
```

```
Up and running
--------------
vagrant init precise64 https://files.vagrantup.com/precise64.box
vagrant up
```

```
Connecting
----------
vagrant ssh <--- osx and *nix

windows
-------
download putty and puttygen
- convert private key into putty private key
- login with private key.
```

```
Destroying Vagrant
------------------
vagrant destroy
```

```
Vagrantfile
------------
vagrant init precise64 https://files.vagrantup.com/precise64.box

* config.vm.synced_folder "src/","/server/website"      <--- this is a custom version. \ in default it would have in /<project-name>
* config.vm.synced_folder "src/","/server/website", disable:true  <--- this will disable sharing folder functions
* config.vm.synced_folder "src/","/server/website", owner:"root",group:"root"

```

```
Vagrant command
---------------
vagrant box list
vagrant box add
vagrant box remove
vagrant status
```
