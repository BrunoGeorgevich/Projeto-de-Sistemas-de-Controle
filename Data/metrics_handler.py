file = open('metrics.txt','r')
data = file.read()

controllers = data.split('\n\n-------------------------------------\n\n')

formatted_controllers = {'I_PD':{'ITAE':[],'MSE':[],'IAE':[],'ISE':[]},'I_PD_F':{'ITAE':[],'MSE':[],'IAE':[],'ISE':[]},'PI_D':{'ITAE':[],'MSE':[],'IAE':[], 'ISE':[]}, 'P':{'ITAE':[],'MSE':[],'IAE':[],'ISE':[]}, 'PI':{'ITAE':[],'MSE':[],'IAE':[],'ISE':[]},'PD':{'ITAE':[], 'MSE':[],'IAE':[],'ISE':[]}, 'PID':{'ITAE':[], 'MSE':[], 'IAE':[],'ISE':[]}}

for controller in controllers:
	controller_data = controller.split('\n')
	formatted_controllers[controller_data[0]][controller_data[1]] = controller_data[2].replace(']','').replace(' ','').split('[')[1:]
	formatted_controllers[controller_data[0]][controller_data[4]] = controller_data[5].replace(']','').replace(' ','').split('[')[1:]
	formatted_controllers[controller_data[0]][controller_data[7]] = controller_data[8].replace(']','').replace(' ','').split('[')[1:]
	formatted_controllers[controller_data[0]][controller_data[10]] = controller_data[11].replace(']','').replace(' ','').split('[')[1:]


for i in range(2):
	print("\\begin{table}[]")
	print("\\begin{tabular}{lllll}") 
	print("              & ITAE & MSE & ISE & IAE \\\\") 
	controller_name = 'I_PD'
	print("I-PD          &   {}   &  {}  &  {}   &  {}   \\\\".format(formatted_controllers[controller_name]['ITAE'][i], formatted_controllers[controller_name]['MSE'][i], formatted_controllers[controller_name]['ISE'][i], formatted_controllers[controller_name]['IAE'][i])) 
	controller_name = 'I_PD_F'
	print("I-PD Filtrado &   {}   &  {}  &  {}   &  {}   \\\\".format(formatted_controllers[controller_name]['ITAE'][i], formatted_controllers[controller_name]['MSE'][i], formatted_controllers[controller_name]['ISE'][i], formatted_controllers[controller_name]['IAE'][i]))
	controller_name = 'PI_D'
	print("PI-D          &   {}   &  {}  &  {}   &  {}   \\\\".format(formatted_controllers[controller_name]['ITAE'][i], formatted_controllers[controller_name]['MSE'][i], formatted_controllers[controller_name]['ISE'][i], formatted_controllers[controller_name]['IAE'][i]))
	controller_name = 'P'
	print("P             &   {}   &  {}  &  {}   &  {}   \\\\".format(formatted_controllers[controller_name]['ITAE'][i], formatted_controllers[controller_name]['MSE'][i], formatted_controllers[controller_name]['ISE'][i], formatted_controllers[controller_name]['IAE'][i]))
	controller_name = 'PI'
	print("PI            &   {}   &  {}  &  {}   &  {}   \\\\".format(formatted_controllers[controller_name]['ITAE'][i], formatted_controllers[controller_name]['MSE'][i], formatted_controllers[controller_name]['ISE'][i], formatted_controllers[controller_name]['IAE'][i]))
	controller_name = 'PD'
	print("PD            &   {}   &  {}  &  {}   &  {}   \\\\".format(formatted_controllers[controller_name]['ITAE'][i], formatted_controllers[controller_name]['MSE'][i], formatted_controllers[controller_name]['ISE'][i], formatted_controllers[controller_name]['IAE'][i]))
	controller_name = 'PID'
	print("PID           &   {}   &  {}  &  {}   &  {}   \\\\".format(formatted_controllers[controller_name]['ITAE'][i], formatted_controllers[controller_name]['MSE'][i], formatted_controllers[controller_name]['ISE'][i], formatted_controllers[controller_name]['IAE'][i]))
	print("\end{tabular}")
	print("\end{table}")
	
	
