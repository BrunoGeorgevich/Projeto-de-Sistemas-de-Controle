  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 8;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Tanques_quick_start_P)
    ;%
      section.nData     = 22;
      section.data(22)  = dumData; %prealloc
      
	  ;% Tanques_quick_start_P.L
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Tanques_quick_start_P.a
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% Tanques_quick_start_P.b
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 6;
	
	  ;% Tanques_quick_start_P.c
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 8;
	
	  ;% Tanques_quick_start_P.k
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 10;
	
	  ;% Tanques_quick_start_P.ke
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 12;
	
	  ;% Tanques_quick_start_P.RandomSource_MinVal
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 13;
	
	  ;% Tanques_quick_start_P.HILInitialize_analog_input_maxi
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 14;
	
	  ;% Tanques_quick_start_P.HILInitialize_analog_input_mini
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 15;
	
	  ;% Tanques_quick_start_P.HILInitialize_analog_output_max
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 16;
	
	  ;% Tanques_quick_start_P.HILInitialize_analog_output_min
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 17;
	
	  ;% Tanques_quick_start_P.HILInitialize_final_analog_outp
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 18;
	
	  ;% Tanques_quick_start_P.HILInitialize_final_pwm_outputs
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 19;
	
	  ;% Tanques_quick_start_P.HILInitialize_initial_analog_ou
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 20;
	
	  ;% Tanques_quick_start_P.HILInitialize_initial_pwm_outpu
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 21;
	
	  ;% Tanques_quick_start_P.HILInitialize_pwm_frequency
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 22;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_other_outputs
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 23;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_other_outpu_d
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 24;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_other_outpu_p
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 25;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_other_outpu_f
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 26;
	
	  ;% Tanques_quick_start_P.HILInitialize_watchdog_analog_o
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 27;
	
	  ;% Tanques_quick_start_P.HILInitialize_watchdog_pwm_outp
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 28;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% Tanques_quick_start_P.HILInitialize_hardware_clocks
	  section.data(1).logicalSrcIdx = 22;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Tanques_quick_start_P.HILInitialize_initial_encoder_c
	  section.data(2).logicalSrcIdx = 23;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Tanques_quick_start_P.HILInitialize_pwm_modes
	  section.data(3).logicalSrcIdx = 24;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Tanques_quick_start_P.HILInitialize_watchdog_digital_
	  section.data(4).logicalSrcIdx = 25;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% Tanques_quick_start_P.HILInitialize_analog_input_chan
	  section.data(1).logicalSrcIdx = 26;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Tanques_quick_start_P.HILInitialize_analog_output_cha
	  section.data(2).logicalSrcIdx = 27;
	  section.data(2).dtTransOffset = 2;
	
	  ;% Tanques_quick_start_P.HILWriteAnalog_channels
	  section.data(3).logicalSrcIdx = 28;
	  section.data(3).dtTransOffset = 4;
	
	  ;% Tanques_quick_start_P.HILReadAnalog_channels
	  section.data(4).logicalSrcIdx = 29;
	  section.data(4).dtTransOffset = 5;
	
	  ;% Tanques_quick_start_P.HILInitialize_encoder_channels
	  section.data(5).logicalSrcIdx = 30;
	  section.data(5).dtTransOffset = 7;
	
	  ;% Tanques_quick_start_P.HILInitialize_quadrature
	  section.data(6).logicalSrcIdx = 31;
	  section.data(6).dtTransOffset = 9;
	
	  ;% Tanques_quick_start_P.randP_seed
	  section.data(7).logicalSrcIdx = 32;
	  section.data(7).dtTransOffset = 10;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Tanques_quick_start_P.WrapToZero_Threshold
	  section.data(1).logicalSrcIdx = 33;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 35;
      section.data(35)  = dumData; %prealloc
      
	  ;% Tanques_quick_start_P.HILInitialize_active
	  section.data(1).logicalSrcIdx = 34;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Tanques_quick_start_P.HILInitialize_final_digital_out
	  section.data(2).logicalSrcIdx = 35;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Tanques_quick_start_P.HILInitialize_initial_digital_o
	  section.data(3).logicalSrcIdx = 36;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_analog_input_
	  section.data(4).logicalSrcIdx = 37;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_analog_inpu_h
	  section.data(5).logicalSrcIdx = 38;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_analog_output
	  section.data(6).logicalSrcIdx = 39;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_analog_outp_c
	  section.data(7).logicalSrcIdx = 40;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_analog_outp_o
	  section.data(8).logicalSrcIdx = 41;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_analog_outp_e
	  section.data(9).logicalSrcIdx = 42;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_analog_outp_b
	  section.data(10).logicalSrcIdx = 43;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_analog_outp_h
	  section.data(11).logicalSrcIdx = 44;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_analog_out_bm
	  section.data(12).logicalSrcIdx = 45;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_clock_frequen
	  section.data(13).logicalSrcIdx = 46;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_clock_frequ_i
	  section.data(14).logicalSrcIdx = 47;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_clock_params_
	  section.data(15).logicalSrcIdx = 48;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_clock_param_n
	  section.data(16).logicalSrcIdx = 49;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_digital_outpu
	  section.data(17).logicalSrcIdx = 50;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_digital_out_l
	  section.data(18).logicalSrcIdx = 51;
	  section.data(18).dtTransOffset = 17;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_digital_out_k
	  section.data(19).logicalSrcIdx = 52;
	  section.data(19).dtTransOffset = 18;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_digital_out_o
	  section.data(20).logicalSrcIdx = 53;
	  section.data(20).dtTransOffset = 19;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_digital_out_j
	  section.data(21).logicalSrcIdx = 54;
	  section.data(21).dtTransOffset = 20;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_digital_ou_ol
	  section.data(22).logicalSrcIdx = 55;
	  section.data(22).dtTransOffset = 21;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_digital_out_i
	  section.data(23).logicalSrcIdx = 56;
	  section.data(23).dtTransOffset = 22;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_encoder_count
	  section.data(24).logicalSrcIdx = 57;
	  section.data(24).dtTransOffset = 23;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_encoder_cou_e
	  section.data(25).logicalSrcIdx = 58;
	  section.data(25).dtTransOffset = 24;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_encoder_param
	  section.data(26).logicalSrcIdx = 59;
	  section.data(26).dtTransOffset = 25;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_encoder_par_a
	  section.data(27).logicalSrcIdx = 60;
	  section.data(27).dtTransOffset = 26;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_other_outpu_a
	  section.data(28).logicalSrcIdx = 61;
	  section.data(28).dtTransOffset = 27;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_pwm_outputs_a
	  section.data(29).logicalSrcIdx = 62;
	  section.data(29).dtTransOffset = 28;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_pwm_outputs_i
	  section.data(30).logicalSrcIdx = 63;
	  section.data(30).dtTransOffset = 29;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_pwm_outputs_j
	  section.data(31).logicalSrcIdx = 64;
	  section.data(31).dtTransOffset = 30;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_pwm_outputs_b
	  section.data(32).logicalSrcIdx = 65;
	  section.data(32).dtTransOffset = 31;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_pwm_outputs_o
	  section.data(33).logicalSrcIdx = 66;
	  section.data(33).dtTransOffset = 32;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_pwm_params_at
	  section.data(34).logicalSrcIdx = 67;
	  section.data(34).dtTransOffset = 33;
	
	  ;% Tanques_quick_start_P.HILInitialize_set_pwm_params__e
	  section.data(35).logicalSrcIdx = 68;
	  section.data(35).dtTransOffset = 34;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 41;
      section.data(41)  = dumData; %prealloc
      
	  ;% Tanques_quick_start_P.TransferFcn_A
	  section.data(1).logicalSrcIdx = 69;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Tanques_quick_start_P.TransferFcn_C
	  section.data(2).logicalSrcIdx = 70;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Tanques_quick_start_P.TransferFcn1_A
	  section.data(3).logicalSrcIdx = 71;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Tanques_quick_start_P.TransferFcn1_C
	  section.data(4).logicalSrcIdx = 72;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Tanques_quick_start_P.UnitDelay_InitialCondition
	  section.data(5).logicalSrcIdx = 73;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Tanques_quick_start_P.switch_input_signal_Value
	  section.data(6).logicalSrcIdx = 74;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Tanques_quick_start_P.SignalGenerator_Amplitude
	  section.data(7).logicalSrcIdx = 75;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Tanques_quick_start_P.SignalGenerator_Frequency
	  section.data(8).logicalSrcIdx = 76;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Tanques_quick_start_P.offset_Value
	  section.data(9).logicalSrcIdx = 77;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Tanques_quick_start_P.step_Value
	  section.data(10).logicalSrcIdx = 78;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Tanques_quick_start_P.RateTransition_X0
	  section.data(11).logicalSrcIdx = 79;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Tanques_quick_start_P.TankEntry_Value
	  section.data(12).logicalSrcIdx = 80;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Tanques_quick_start_P.ZeroConstant_Value
	  section.data(13).logicalSrcIdx = 81;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Tanques_quick_start_P.ControllerEnabler_Value
	  section.data(14).logicalSrcIdx = 82;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Tanques_quick_start_P.ControllerEntry_Value
	  section.data(15).logicalSrcIdx = 83;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Tanques_quick_start_P.PID_Kp_Gain
	  section.data(16).logicalSrcIdx = 84;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Tanques_quick_start_P.PID_Kd_Gain
	  section.data(17).logicalSrcIdx = 85;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Tanques_quick_start_P.Integrator_IC
	  section.data(18).logicalSrcIdx = 86;
	  section.data(18).dtTransOffset = 17;
	
	  ;% Tanques_quick_start_P.Integrator_UpperSat
	  section.data(19).logicalSrcIdx = 87;
	  section.data(19).dtTransOffset = 18;
	
	  ;% Tanques_quick_start_P.Integrator_LowerSat
	  section.data(20).logicalSrcIdx = 88;
	  section.data(20).dtTransOffset = 19;
	
	  ;% Tanques_quick_start_P.PID_Kp_Gain_b
	  section.data(21).logicalSrcIdx = 89;
	  section.data(21).dtTransOffset = 20;
	
	  ;% Tanques_quick_start_P.PID_Kd_Gain_a
	  section.data(22).logicalSrcIdx = 90;
	  section.data(22).dtTransOffset = 21;
	
	  ;% Tanques_quick_start_P.Integrator_IC_b
	  section.data(23).logicalSrcIdx = 91;
	  section.data(23).dtTransOffset = 22;
	
	  ;% Tanques_quick_start_P.IPD_Kp_Gain
	  section.data(24).logicalSrcIdx = 92;
	  section.data(24).dtTransOffset = 23;
	
	  ;% Tanques_quick_start_P.IPD_Kd_Gain
	  section.data(25).logicalSrcIdx = 93;
	  section.data(25).dtTransOffset = 24;
	
	  ;% Tanques_quick_start_P.Integrator_IC_p
	  section.data(26).logicalSrcIdx = 94;
	  section.data(26).dtTransOffset = 25;
	
	  ;% Tanques_quick_start_P.Integrator_UpperSat_i
	  section.data(27).logicalSrcIdx = 95;
	  section.data(27).dtTransOffset = 26;
	
	  ;% Tanques_quick_start_P.Integrator_LowerSat_g
	  section.data(28).logicalSrcIdx = 96;
	  section.data(28).dtTransOffset = 27;
	
	  ;% Tanques_quick_start_P.Switch_Threshold
	  section.data(29).logicalSrcIdx = 97;
	  section.data(29).dtTransOffset = 28;
	
	  ;% Tanques_quick_start_P.IPD_Ki_Gain
	  section.data(30).logicalSrcIdx = 98;
	  section.data(30).dtTransOffset = 29;
	
	  ;% Tanques_quick_start_P.PID_Ki_Gain
	  section.data(31).logicalSrcIdx = 99;
	  section.data(31).dtTransOffset = 30;
	
	  ;% Tanques_quick_start_P.PID_Ki_Gain_g
	  section.data(32).logicalSrcIdx = 100;
	  section.data(32).dtTransOffset = 31;
	
	  ;% Tanques_quick_start_P.amin_Value
	  section.data(33).logicalSrcIdx = 101;
	  section.data(33).dtTransOffset = 32;
	
	  ;% Tanques_quick_start_P.amax_Value
	  section.data(34).logicalSrcIdx = 102;
	  section.data(34).dtTransOffset = 33;
	
	  ;% Tanques_quick_start_P.RandomSource_MaxRTP
	  section.data(35).logicalSrcIdx = 103;
	  section.data(35).dtTransOffset = 34;
	
	  ;% Tanques_quick_start_P.VoltstocmTank1_Gain
	  section.data(36).logicalSrcIdx = 104;
	  section.data(36).dtTransOffset = 35;
	
	  ;% Tanques_quick_start_P.VoltstocmTank2_Gain
	  section.data(37).logicalSrcIdx = 105;
	  section.data(37).dtTransOffset = 36;
	
	  ;% Tanques_quick_start_P.currAmp_InitialValue
	  section.data(38).logicalSrcIdx = 106;
	  section.data(38).dtTransOffset = 37;
	
	  ;% Tanques_quick_start_P.integral_InitialValue
	  section.data(39).logicalSrcIdx = 107;
	  section.data(39).dtTransOffset = 38;
	
	  ;% Tanques_quick_start_P.pidPreviousTime_InitialValue
	  section.data(40).logicalSrcIdx = 108;
	  section.data(40).dtTransOffset = 39;
	
	  ;% Tanques_quick_start_P.previousError_InitialValue
	  section.data(41).logicalSrcIdx = 109;
	  section.data(41).dtTransOffset = 40;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% Tanques_quick_start_P.Constant_Value
	  section.data(1).logicalSrcIdx = 110;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Tanques_quick_start_P.FixPtConstant_Value
	  section.data(2).logicalSrcIdx = 111;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Tanques_quick_start_P.Output_InitialCondition
	  section.data(3).logicalSrcIdx = 112;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Tanques_quick_start_P.pmin_Value
	  section.data(4).logicalSrcIdx = 113;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Tanques_quick_start_P.pmax_Value
	  section.data(5).logicalSrcIdx = 114;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Tanques_quick_start_P.currPeriod_InitialValue
	  section.data(6).logicalSrcIdx = 115;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Tanques_quick_start_P.prevTime_InitialValue
	  section.data(7).logicalSrcIdx = 116;
	  section.data(7).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% Tanques_quick_start_P.HILWriteAnalog_Active
	  section.data(1).logicalSrcIdx = 117;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Tanques_quick_start_P.HILReadAnalog_Active
	  section.data(2).logicalSrcIdx = 118;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(8) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Tanques_quick_start_B)
    ;%
      section.nData     = 47;
      section.data(47)  = dumData; %prealloc
      
	  ;% Tanques_quick_start_B.TransferFcn
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Tanques_quick_start_B.TransferFcn1
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Tanques_quick_start_B.UnitDelay
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Tanques_quick_start_B.Constant5
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 4;
	
	  ;% Tanques_quick_start_B.switch_input_signal
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 5;
	
	  ;% Tanques_quick_start_B.offset
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 6;
	
	  ;% Tanques_quick_start_B.step
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 7;
	
	  ;% Tanques_quick_start_B.RateTransition
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 8;
	
	  ;% Tanques_quick_start_B.MultiportSwitch
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 9;
	
	  ;% Tanques_quick_start_B.TankEntry
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 10;
	
	  ;% Tanques_quick_start_B.TankHeightSwitch
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 11;
	
	  ;% Tanques_quick_start_B.Sum1
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 12;
	
	  ;% Tanques_quick_start_B.Sum4
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 13;
	
	  ;% Tanques_quick_start_B.ZeroConstant
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 14;
	
	  ;% Tanques_quick_start_B.ControllerEnabler
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 15;
	
	  ;% Tanques_quick_start_B.ControllerEntry
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 16;
	
	  ;% Tanques_quick_start_B.PID_Kp
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 17;
	
	  ;% Tanques_quick_start_B.PID_Kd
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 18;
	
	  ;% Tanques_quick_start_B.Derivative
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 19;
	
	  ;% Tanques_quick_start_B.Integrator
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 20;
	
	  ;% Tanques_quick_start_B.Sum3
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 21;
	
	  ;% Tanques_quick_start_B.PID_Kp_g
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 22;
	
	  ;% Tanques_quick_start_B.PID_Kd_h
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 23;
	
	  ;% Tanques_quick_start_B.Derivative_c
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 24;
	
	  ;% Tanques_quick_start_B.Integrator_j
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 25;
	
	  ;% Tanques_quick_start_B.Sum3_p
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 26;
	
	  ;% Tanques_quick_start_B.IPD_Kp
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 27;
	
	  ;% Tanques_quick_start_B.IPD_Kd
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 28;
	
	  ;% Tanques_quick_start_B.Derivative_g
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 29;
	
	  ;% Tanques_quick_start_B.Integrator_b
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 30;
	
	  ;% Tanques_quick_start_B.Sum3_j
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 31;
	
	  ;% Tanques_quick_start_B.ControllerSwitch
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 32;
	
	  ;% Tanques_quick_start_B.Switch
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 33;
	
	  ;% Tanques_quick_start_B.Constant
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 34;
	
	  ;% Tanques_quick_start_B.Constant1
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 36;
	
	  ;% Tanques_quick_start_B.IPD_Ki
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 38;
	
	  ;% Tanques_quick_start_B.PID_Ki
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 39;
	
	  ;% Tanques_quick_start_B.PID_Ki_k
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 40;
	
	  ;% Tanques_quick_start_B.Sum2
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 41;
	
	  ;% Tanques_quick_start_B.VoltstocmTank1
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 43;
	
	  ;% Tanques_quick_start_B.VoltstocmTank2
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 44;
	
	  ;% Tanques_quick_start_B.amp
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 45;
	
	  ;% Tanques_quick_start_B.y
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 46;
	
	  ;% Tanques_quick_start_B.y_n
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 47;
	
	  ;% Tanques_quick_start_B.y_m
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 49;
	
	  ;% Tanques_quick_start_B.tensao
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 50;
	
	  ;% Tanques_quick_start_B.tensao_h
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 51;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Tanques_quick_start_B.FixPtSwitch
	  section.data(1).logicalSrcIdx = 48;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 7;
    sectIdxOffset = 2;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Tanques_quick_start_DW)
    ;%
      section.nData     = 26;
      section.data(26)  = dumData; %prealloc
      
	  ;% Tanques_quick_start_DW.UnitDelay_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Tanques_quick_start_DW.HILInitialize_AIMinimums
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% Tanques_quick_start_DW.HILInitialize_AIMaximums
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% Tanques_quick_start_DW.HILInitialize_AOMinimums
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 6;
	
	  ;% Tanques_quick_start_DW.HILInitialize_AOMaximums
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 8;
	
	  ;% Tanques_quick_start_DW.HILInitialize_AOVoltages
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 10;
	
	  ;% Tanques_quick_start_DW.HILInitialize_FilterFrequency
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 12;
	
	  ;% Tanques_quick_start_DW.RateTransition_Buffer0
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 14;
	
	  ;% Tanques_quick_start_DW.TimeStampA
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 15;
	
	  ;% Tanques_quick_start_DW.LastUAtTimeA
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 16;
	
	  ;% Tanques_quick_start_DW.TimeStampB
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 17;
	
	  ;% Tanques_quick_start_DW.LastUAtTimeB
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 18;
	
	  ;% Tanques_quick_start_DW.TimeStampA_e
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 19;
	
	  ;% Tanques_quick_start_DW.LastUAtTimeA_c
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 20;
	
	  ;% Tanques_quick_start_DW.TimeStampB_g
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 21;
	
	  ;% Tanques_quick_start_DW.LastUAtTimeB_a
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 22;
	
	  ;% Tanques_quick_start_DW.TimeStampA_h
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 23;
	
	  ;% Tanques_quick_start_DW.LastUAtTimeA_d
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 24;
	
	  ;% Tanques_quick_start_DW.TimeStampB_c
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 25;
	
	  ;% Tanques_quick_start_DW.LastUAtTimeB_b
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 26;
	
	  ;% Tanques_quick_start_DW.HILReadAnalog_Buffer
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 27;
	
	  ;% Tanques_quick_start_DW.RandomSource_STATE_DWORK
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 29;
	
	  ;% Tanques_quick_start_DW.currAmp
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 64;
	
	  ;% Tanques_quick_start_DW.integral
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 65;
	
	  ;% Tanques_quick_start_DW.pidPreviousTime
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 66;
	
	  ;% Tanques_quick_start_DW.previousError
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 67;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Tanques_quick_start_DW.HILInitialize_Card
	  section.data(1).logicalSrcIdx = 26;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 18;
      section.data(18)  = dumData; %prealloc
      
	  ;% Tanques_quick_start_DW.AlturadoTanque1cm_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 27;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Tanques_quick_start_DW.AlturadoTanque2cm_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 28;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Tanques_quick_start_DW.HILWriteAnalog_PWORK
	  section.data(3).logicalSrcIdx = 29;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Tanques_quick_start_DW.Scope1_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 30;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Tanques_quick_start_DW.Scope7_PWORK.LoggedData
	  section.data(5).logicalSrcIdx = 31;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Tanques_quick_start_DW.SinaldeErro_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 32;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Tanques_quick_start_DW.SinaldeSadadaMalhaAberta_PWORK.LoggedData
	  section.data(7).logicalSrcIdx = 33;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Tanques_quick_start_DW.SinaldeSadadaMalhaFechada_PWORK.LoggedData
	  section.data(8).logicalSrcIdx = 34;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Tanques_quick_start_DW.SinaldeSadadoControlador_PWORK.LoggedData
	  section.data(9).logicalSrcIdx = 35;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Tanques_quick_start_DW.SinaldeSadadoIPD_PWORK.LoggedData
	  section.data(10).logicalSrcIdx = 36;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Tanques_quick_start_DW.SinaldeSadadoPID_PWORK.LoggedData
	  section.data(11).logicalSrcIdx = 37;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Tanques_quick_start_DW.SinaldeSadadoPID_PWORK_o.LoggedData
	  section.data(12).logicalSrcIdx = 38;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Tanques_quick_start_DW.TensonaBombaV_PWORK.LoggedData
	  section.data(13).logicalSrcIdx = 39;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Tanques_quick_start_DW.HILReadAnalog_PWORK
	  section.data(14).logicalSrcIdx = 40;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Tanques_quick_start_DW.controller_signals1_PWORK.LoggedData
	  section.data(15).logicalSrcIdx = 41;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Tanques_quick_start_DW.controller_signals_PWORK.LoggedData
	  section.data(16).logicalSrcIdx = 42;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Tanques_quick_start_DW.AcoesdeControle_PWORK.LoggedData
	  section.data(17).logicalSrcIdx = 43;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Tanques_quick_start_DW.Scope_PWORK.LoggedData
	  section.data(18).logicalSrcIdx = 44;
	  section.data(18).dtTransOffset = 17;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% Tanques_quick_start_DW.HILInitialize_ClockModes
	  section.data(1).logicalSrcIdx = 45;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Tanques_quick_start_DW.HILInitialize_QuadratureModes
	  section.data(2).logicalSrcIdx = 46;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Tanques_quick_start_DW.HILInitialize_InitialEICounts
	  section.data(3).logicalSrcIdx = 47;
	  section.data(3).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% Tanques_quick_start_DW.RandomSource_SEED_DWORK
	  section.data(1).logicalSrcIdx = 48;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Tanques_quick_start_DW.method
	  section.data(2).logicalSrcIdx = 49;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Tanques_quick_start_DW.state
	  section.data(3).logicalSrcIdx = 50;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Tanques_quick_start_DW.state_e
	  section.data(4).logicalSrcIdx = 51;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Tanques_quick_start_DW.state_i
	  section.data(5).logicalSrcIdx = 52;
	  section.data(5).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% Tanques_quick_start_DW.Output_DSTATE
	  section.data(1).logicalSrcIdx = 53;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Tanques_quick_start_DW.currPeriod
	  section.data(2).logicalSrcIdx = 54;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Tanques_quick_start_DW.prevTime
	  section.data(3).logicalSrcIdx = 55;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Tanques_quick_start_DW.state_not_empty
	  section.data(1).logicalSrcIdx = 56;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 3424791282;
  targMap.checksum1 = 893985185;
  targMap.checksum2 = 2093108743;
  targMap.checksum3 = 1369383145;

