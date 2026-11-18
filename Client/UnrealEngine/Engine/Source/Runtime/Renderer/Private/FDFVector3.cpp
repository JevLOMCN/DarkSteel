// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FDFVector3<double> @ 1448d1150

FDFVector3 * __thiscall FDFVector3::FDFVector3<double>(FDFVector3 *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *(undefined8 *)&(this->High).field0_0x0 = 0;
  (this->High).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&(this->Low).field0_0x0 = 0;
  (this->Low).field0_0x0._s_0.Z = 0.0;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  fVar4 = (float)dVar2;
  fVar5 = (float)dVar1;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  fVar6 = (float)dVar3;
  *(ulonglong *)&(this->High).field0_0x0 = CONCAT44(fVar5,fVar4);
  (this->High).field0_0x0._s_0.Z = fVar6;
  *(ulonglong *)&(this->Low).field0_0x0 =
       CONCAT44((float)(dVar1 - (double)fVar5),(float)(dVar2 - (double)fVar4));
  (this->Low).field0_0x0._s_0.Z = (float)(dVar3 - (double)fVar6);
  return this;
}

