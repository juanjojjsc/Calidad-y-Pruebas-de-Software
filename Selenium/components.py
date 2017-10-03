#Juan Jose Santos A01022009

from selenium import webdriver

driver = webdriver.Firefox()

driver.get("http://nitrowriters.com/form/form.html")

txtF = driver.find_element_by_id("my_text_field")
txtF.send_keys("append.")


from selenium.webdriver.common.by import By

txtF = driver.find_element(By.ID, "my_text_field")
txtF.send_keys("Este es un ejemplo")


descriptions = driver.find_elements(By.CLASS_NAME, "description")

for description in descriptions:
    print(description.text)


txtA = txtF = driver.find_element(By.TAG_NAME, "textarea")
txtA.send_keys("Text aaaaareaaaaaaaa.")

inputs = driver.find_elements(By.TAG_NAME, "input")
for inpt in inputs:
    if inpt.get_attribute("type") == "text":
        inpt.send_keys("el mismo texto everywhereee")


#Universal Selector
elements = driver.find_elements(By.CSS_SELECTOR, "* option")
print("Universal Selector:")
for element in elements:
    print(element.text)

#Grouping Selector
groupings = driver.find_elements(By.CSS_SELECTOR, "h1,h2,h3,p")
print("Grouping Selector:")
for grouping in groupings:
    print(grouping.text)

#Descendant Selector
descendant = driver.find_element(By.CSS_SELECTOR, "form div h2")
print("Descendant Selector:",descendant.text)

#Child Selector
childs = driver.find_elements(By.CSS_SELECTOR, "form div")
print("Child Selector:")
for child in childs:
    print(child.text)

#Adjacent Sibling
adjSibling = driver.find_element(By.CSS_SELECTOR, "h2 + *")
print("Adjacent Sibling Selector:",adjSibling.text)

#General Sibling
genSiblings = driver.find_elements(By.CSS_SELECTOR, ".checkbox ~ *")
print("General Sibling Selector:")
for genSibling in genSiblings:
    print(genSibling.text)

#Class Selector
classSel = driver.find_element(By.CSS_SELECTOR, ".description")
print("Class Selector:",classSel.text)

#ID Selector
idSel = driver.find_element(By.CSS_SELECTOR, "#form_container")
print("ID Selector:",idSel.text)

#Pseudo Class
pCL = driver.find_element(By.CSS_SELECTOR, "a:link")
print("Pseudo Class After Link:",pCL.text)

#link = driver.find_element(By.LINK_TEXT, "Go to SitePoint")
#print(link.text)
#link.click()
#driver.back()

#pCH = driver.find_element(By.CSS_SELECTOR, "a:visited")
#print("Pseudo Class After Hover:",pCH.text)
