// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// TVector<float><int> @ 1448423e0

TVector<float> * __thiscall
UE::Math::TVector<float>::TVector<float><int>(TVector<float> *this,TIntVector3<int> *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.X = (float)(param_1->field0_0x0)._s_0.X;
  iVar2 = (param_1->field0_0x0)._s_0.Z;
  (this->field0_0x0)._s_0.Y = (float)iVar1;
  (this->field0_0x0)._s_0.Z = (float)iVar2;
  return this;
}

// TVector<float><double> @ 1448d1110

TVector<float> * __thiscall
UE::Math::TVector<float>::TVector<float><double>(TVector<float> *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (float)(param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.X = (float)dVar2;
  (this->field0_0x0)._s_0.Z = (float)dVar1;
  return this;
}

// TVector<double><__int64> @ 1448d11e0

TVector<double> * __thiscall
UE::Math::TVector<double>::TVector<double><__int64>
          (TVector<double> *this,TIntVector3<__int64> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.X = (double)(param_1->field0_0x0)._s_0.X;
  lVar2 = (param_1->field0_0x0)._s_0.Z;
  (this->field0_0x0)._s_0.Y = (double)lVar1;
  (this->field0_0x0)._s_0.Z = (double)lVar2;
  return this;
}

// TVector<float><signed_char> @ 14546b2b0

TVector<float> * __thiscall
UE::Math::TVector<float>::TVector<float><signed_char>
          (TVector<float> *this,TIntVector3<signed_char> param_1)

{
  char cVar1;
  char cVar2;
  undefined5 in_register_00000013;
  
  cVar1 = *(char *)(CONCAT53(in_register_00000013,param_1.field0_0x0) + 1);
  cVar2 = *(char *)(CONCAT53(in_register_00000013,param_1.field0_0x0) + 2);
  (this->field0_0x0)._s_0.X = (float)(int)*(char *)CONCAT53(in_register_00000013,param_1.field0_0x0)
  ;
  (this->field0_0x0)._s_0.Y = (float)(int)cVar1;
  (this->field0_0x0)._s_0.Z = (float)(int)cVar2;
  return this;
}

