#!/bin/bash
#SBATCH --job-name py
#SBATCH --account=hanquist
#SBATCH --nodes=1
#SBATCH --ntasks-per-node=12
#SBATCH --partition=cpu
#SBATCH --qos=normal
#SBATCH --time=72:00:00
cd $SLURM_SUBMIT_DIR
source ~/.bashrc
date
echo "Total MPI tasks: $SLURM_NTASKS"
srun --mpi=pmix python3 *py --parallel -f *cfg &> screen.dat
date
