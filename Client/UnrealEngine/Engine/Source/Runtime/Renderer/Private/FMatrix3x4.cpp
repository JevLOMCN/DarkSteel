// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// SetMatrix @ 1450efae0

void __thiscall FMatrix3x4::SetMatrix(FMatrix3x4 *this,TMatrix<double> *param_1)

{
  *(ulonglong *)this->M[0] = CONCAT44((float)param_1->M[0][1],(float)param_1->M[0][0]);
  *(ulonglong *)(this->M[0] + 2) = CONCAT44((float)param_1->M[0][3],(float)param_1->M[0][2]);
  *(ulonglong *)this->M[1] = CONCAT44((float)param_1->M[1][1],(float)param_1->M[1][0]);
  *(ulonglong *)(this->M[1] + 2) = CONCAT44((float)param_1->M[1][3],(float)param_1->M[1][2]);
  *(ulonglong *)this->M[2] = CONCAT44((float)param_1->M[2][1],(float)param_1->M[2][0]);
  *(ulonglong *)(this->M[2] + 2) = CONCAT44((float)param_1->M[2][3],(float)param_1->M[2][2]);
  return;
}

