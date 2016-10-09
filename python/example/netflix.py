from selenium import webdriver
driver = webdriver.Firefox()
user_name = 'username'
pass_word = 'password'
image = user_name + '_' + pass_word + '.png'
driver.get('https://www.netflix.com/Login')
driver.find_element_by_xpath('//*[@id="appMountPoint"]/div/div[2]/div/div/div/div/form[1]/label[1]/input').send_keys(user_name)
driver.find_element_by_xpath('//*[@id="appMountPoint"]/div/div[2]/div/div/div/div/form[1]/label[2]/input').send_keys(pass_word)
driver.find_element_by_xpath('//*[@id="appMountPoint"]/div/div[2]/div/div/div/div/form[1]/button').click()
driver.save_screenshot(image)
driver.quit()
exit()
