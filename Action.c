Action()
{

	web_url("blazedemo.com", 
		"URL=http://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	lr_think_time(11);

	web_submit_form("reserve.php", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=fromPort", "Value=Boston", ENDITEM, 
		"Name=toPort", "Value=London", ENDITEM, 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		"Url=/img/glyphicons-halflings.png", ENDITEM, 
		LAST);

	lr_think_time(7);

	web_submit_form("purchase.php", 
		"Ordinal=1", 
		"Snapshot=t3.inf", 
		ITEMDATA, 
		LAST);

	lr_think_time(7);

	web_submit_form("confirmation.php", 
		"Snapshot=t4.inf", 
		ITEMDATA, 
		"Name=inputName", "Value=", ENDITEM, 
		"Name=address", "Value=", ENDITEM, 
		"Name=city", "Value=", ENDITEM, 
		"Name=state", "Value=", ENDITEM, 
		"Name=zipCode", "Value=", ENDITEM, 
		"Name=cardType", "Value=Visa", ENDITEM, 
		"Name=creditCardNumber", "Value=", ENDITEM, 
		"Name=creditCardMonth", "Value=11", ENDITEM, 
		"Name=creditCardYear", "Value=2017", ENDITEM, 
		"Name=nameOnCard", "Value=", ENDITEM, 
		"Name=rememberMe", "Value=<OFF>", ENDITEM, 
		LAST);

	web_link("Travel The World", 
		"Text=Travel The World", 
		"Snapshot=t5.inf", 
		LAST);

	return 0;
}