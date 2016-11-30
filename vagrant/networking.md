
Vagrant Network Private
-----------------------
```
vagrant dhcp
------------

vagrant.config("2") do |config|
  config.vm.network "private_network", type: "dhcp"
end

```

```
vagrant static ip
-----------------
vagrant.config("2") do |config|
  config.vm.network "private_network", ip: "192.168.0.2"
end
```

```
disable auto-configuration
--------------------------
vagrant.config("2") do |config|
  config.vm.network "private_network", ip: "192.168.0.3"
  auto_config: false
end
```

Vagrant Network Public
----------------------
```
dhcp
----
vagrant.config("2") do |config|
  config.vm.network "public_network"
end
---

static-ip
---------
config.vm.network "public_network", ip: "192.168.0.5"

default interface
-----------------
config.vm.network "public_network", bridge: 'device_name'

```
