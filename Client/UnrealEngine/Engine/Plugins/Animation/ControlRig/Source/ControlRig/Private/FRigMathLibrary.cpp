// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// Add<float> @ 14a4fea90

float __cdecl FRigMathLibrary::Add<float>(float param_1,float param_2)

{
  return param_1 + param_2;
}

// Add<UE::Math::TVector<double>_> @ 14a4feaa0

TVector<double> * __cdecl
FRigMathLibrary::Add<UE::Math::TVector<double>_>
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          )

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  
  dVar4 = (param_1->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (param_1->field0_0x0)._s_0.X + (param_2->field0_0x0)._s_0.X;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 + dVar2;
  return __return_storage_ptr__;
}

// Divide<float> @ 14a4ffd10

float __cdecl FRigMathLibrary::Divide<float>(float param_1,float param_2)

{
  return param_1 / param_2;
}

// Divide<UE::Math::TVector<double>_> @ 14a4ffd20

TVector<double> * __cdecl
FRigMathLibrary::Divide<UE::Math::TVector<double>_>
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          )

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  auVar3 = divpd(*(undefined1 (*) [16])&param_1->field0_0x0,
                 *(undefined1 (*) [16])&param_2->field0_0x0);
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 / dVar2;
  return __return_storage_ptr__;
}

// Multiply<float> @ 14a506820

float __cdecl FRigMathLibrary::Multiply<float>(float param_1,float param_2)

{
  return param_1 * param_2;
}

// Multiply<UE::Math::TVector<double>_> @ 14a506830

TVector<double> * __cdecl
FRigMathLibrary::Multiply<UE::Math::TVector<double>_>
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          )

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  
  dVar4 = (param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (param_1->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.X;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 * dVar2;
  return __return_storage_ptr__;
}

// Subtract<float> @ 14a50a4c0

float __cdecl FRigMathLibrary::Subtract<float>(float param_1,float param_2)

{
  return param_1 - param_2;
}

// Subtract<UE::Math::TVector<double>_> @ 14a50a4d0

TVector<double> * __cdecl
FRigMathLibrary::Subtract<UE::Math::TVector<double>_>
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          )

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  
  dVar4 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 - dVar2;
  return __return_storage_ptr__;
}

