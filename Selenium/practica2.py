#Juan Jose Santos A01022009

from selenium import webdriver
from selenium.webdriver.common.by import By

driver = webdriver.Firefox()

driver.get("https://www.rmit.edu.au/about/our-education/academic-schools/graduate-school-of-business-and-law/research/phds-with-the-graduate-school-of-business-and-law/research-supervisors")

emails = [""]


names = driver.find_elements(By.CSS_SELECTOR, "h3")

i = 0
for name in names:
    names[i] = name.text
    print(names[i])
    email = name.text.replace(" ", "") + "@rmit.edu.au"
    email.casefold()
    print(email)
    emails.append(email)


for x in range(0,len(names)):
        driver.get("http://blazedemo.com/register")

        name = driver.find_element(By.ID, "name")
        name.send_keys(str(names[x]))

        email = driver.find_element(By.ID, "email")
        email.send_keys(str(emails[x]))
