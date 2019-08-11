transcript on
if {[file exists rtl_work]} {
	vdel -lib rtl_work -all
}
vlib rtl_work
vmap work rtl_work

vlog -vlog01compat -work work +incdir+/home/john/code/quartus_work/hdmi_driver {/home/john/code/quartus_work/hdmi_driver/reg_lut.v}
vlog -vlog01compat -work work +incdir+/home/john/code/quartus_work/hdmi_driver {/home/john/code/quartus_work/hdmi_driver/i2c_master_top.v}
vlog -vlog01compat -work work +incdir+/home/john/code/quartus_work/hdmi_driver {/home/john/code/quartus_work/hdmi_driver/hdmi_driver.v}

