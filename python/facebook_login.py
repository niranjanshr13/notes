# Selenium and PhantomJS, loggin in facebook and take screen shot; replace user_name & pass_word variable. 
from selenium import webdriver
driver = webdriver.PhantomJS()
user_name = 'username'
pass_word = 'password'
driver.get('http://www.facebook.com')
driver.find_element_by_xpath('//*[@id="email"]').send_keys(user_name)
driver.find_element_by_xpath('//*[@id="pass"]').send_keys(pass_word)
driver.find_element_by_xpath('//*[@id="u_0_n"]').click()
driver.save_screenshot('image.png')
driver.quit()
exit()
