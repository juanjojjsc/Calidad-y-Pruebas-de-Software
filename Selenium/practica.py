#Juan Jose Santos A01022009

from selenium import webdriver
from selenium.webdriver.common.by import By

driver = webdriver.Firefox()

driver.get("https://www.rmit.edu.au/about/our-education/academic-schools/graduate-school-of-business-and-law/research/phds-with-the-graduate-school-of-business-and-law/research-supervisors")

emails = [""]
names = driver.find_elements(By.CSS_SELECTOR, "h3")
for name in names:
    print(name.text)
    email = name.text.replace(" ", "") + "@rmit.edu.au"
    email.lower()
    print(email)
    emails.append(email)
