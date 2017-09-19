require 'watir'
browser = Watir::Browser.new :firefox

browser.goto 'www.blazedemo.com'

opciones = browser.select_list(:name => "fromPort").options
cont = 0
opciones.each do |op|
    if (cont  == 2)
      op.select
    end
    cont += 1
end

opciones = browser.select_list(:name => "toPort").options
cont = 0
opciones.each do |op|
    if (cont  == 3)
      op.select
    end
    cont += 1
end

browser.button(:class => "btn").click

sleep(5)

browser.buttons(:class => "btn").last.click

sleep(5)


browser.text_field(:id => "inputName").set("JJ Santos")
browser.text_field(:id => "address").set("Av Mexico")
browser.text_field(:id => "city").set("Ciudad MX")
browser.text_field(:id => "state").set("CA")
browser.text_field(:id => "zipCode").set("4320")
opciones = browser.select_list(:id => "cardType").options[1].select
browser.text_field(:id => "creditCardNumber").set("1234567812345678")
browser.text_field(:id => "creditCardMonth").set("12")
browser.text_field(:id => "creditCardYear").set("2021")
browser.text_field(:id => "nameOnCard").set("JJ Santos")
browser.checkbox(:id => "rememberMe").set

browser.button(:class => "btn").click
