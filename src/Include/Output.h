#ifndef OUTPUT_H
 #define OUTPUT_H

Output *Output_create(MAC_grid *grid, Parameters *params) ;
void Output_set_grid_data(Output *output, char which_quantity) ;
void Output_set_filename(Output *output, char *filename) ;
void Output_set_output_data(Output *output, void *data) ;
void Output_reset_write_grid_flag(Output *output) ;
void Output_set_write_grid_flag(Output *output) ;
void Output_set_append_data_flag(Output *output) ;
void Output_reset_append_data_flag(Output *output) ;
void Output_write_data(Output *output) ;
void Output_check_file_open(FILE *file, char *filename) ;
void Output_check_file_write(int n_items_desired, int n_items_actual) ;
void Output_write_grid_partition_info(Output *output, MAC_grid *grid, Parameters *params) ;
void Output_write_ascii_suspended_mass(Output *output, Concentration **c, Parameters *params, double time) ;
void Output_write_ascii_average_height(Output *output, Concentration **c, MAC_grid *grid, Parameters *params, int timestep) ;
void Output_write_ascii_deposit_height(Output *output, Concentration **c, MAC_grid *grid, Parameters *params, int timestep) ;
void Output_write_ascii_shrinked_deposit_height(Output *output, Concentration **c, Parameters *params, int timestep) ;
void Output_binary_3D_surface(Output *output, SurfaceType *surf, Parameters *params, int timestep) ;
void Output_write_surface_to_file(Output *output, SurfaceType *surf, MAC_grid *grid, Parameters *params, char which_quantity);
void Output_immersed_info(Output *output, MAC_grid *grid, Parameters *params, char which_quantity) ;
void Output_update_last_planes(Output *output, Vec G_data, Parameters *params) ;
void Output_immersed_control(Output *output, MAC_grid *grid, Parameters *params, char which_quantity) ;
void Output_destroy(Output *output) ;
void Output_write_ascii_front_location(Output *output, double front_location, Parameters *params, double time) ;
void Output_write_ascii_energies(Output *output, Concentration **c, Velocity *u, Parameters *params, double time) ;
void Output_write_ascii_shear_stress_bottom(Output *output, Velocity *u, MAC_grid *grid, Parameters *params, int timestep) ;
void Output_write_ascii_deposit_height_dumped(Output *output, Concentration **c, MAC_grid *grid, Parameters *params, int timestep) ;
void Output_set_precision(Output *output, int precision_type) ;
void Output_convert_3D_to_1D(Output *output, double ***data_3D, void *data_1D) ;
void Output_copy_local_grid_data(Output *output, MAC_grid *grid, char which_quantity) ;

void Output_grid_binaries(Output *output, MAC_grid *grid, char which_quantity)  ;
void Output_petsc_mat(Mat *mat, char *filename, short int output_type) ;

void Output_write_ascii_sed_rate(Output *output, Concentration **c, MAC_grid *grid, Parameters *params, double time) ;
void Output_immersed_control_new(Output *output, MAC_grid *grid, Parameters *params, char which_quantity) ;
void Output_write_ascii_shear_stress_bottom_test(Output *output, Velocity *u, MAC_grid *grid, Parameters *params, int timestep) ;

void Output_grid_q_hdf5(Output *output, MAC_grid *grid, char which_quantity) ;
void Output_grid_hdf5(double *coord, int N, char *gridname, PetscViewer H5viewer) ;

void Output_velocity(Output *output, Velocity *vel, int timestep, Parameters *params) ;
void Output_concentration(Output *output, Concentration *c, int timestep, Parameters *params) ;
void Output_pressure(Output *output, Pressure *p, int timestep, Parameters *params) ;
void Output_divergence(Output *output, Pressure *p, int timestep, Parameters *params) ;
void Output_flow_properties(Output *output, GVG_bag *data_bag) ;
void Output_surface(Output *output, SurfaceType *surf, Parameters *params, int timestep) ;

void Output_petsc_vec(Output *output, Vec q, char *dataname, char *filename) ;



#endif
