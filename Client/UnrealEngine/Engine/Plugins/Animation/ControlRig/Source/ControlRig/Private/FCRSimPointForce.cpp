// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a202ee0

UScriptStruct * __cdecl FCRSimPointForce::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCRSimPointForce.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FCRSimPointForce.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCRSimPointForce,(UObject *)pUVar1,
                         L"CRSimPointForce");
  }
  return Z_Registration_Info_UScriptStruct_FCRSimPointForce.OuterSingleton;
}

// Calculate @ 14a243130

TVector<double> * __thiscall
FCRSimPointForce::Calculate
          (FCRSimPointForce *this,TVector<double> *__return_storage_ptr__,FRigVMSimPoint *param_1,
          float param_2)

{
  double dVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  TVector<double> *pTVar5;
  double dVar6;
  TVector<double> local_28;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  bVar2 = __real_322bcc77 < param_1->Mass;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if ((bVar2) && (this->ForceType == Direction)) {
    if (this->bNormalize == false) {
      dVar6 = (this->Vector).field0_0x0._s_0.Y;
      dVar1 = (this->Vector).field0_0x0._s_0.Z;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Vector).field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
    }
    else {
      pTVar5 = UE::Math::TVector<double>::GetSafeNormal
                         (&this->Vector,&local_28,__real_3e45798ee0000000,
                          &UE::Math::TVector<double>::ZeroVector);
      dVar6 = (pTVar5->field0_0x0)._s_0.Y;
      dVar1 = (pTVar5->field0_0x0)._s_0.Z;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar5->field0_0x0)._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
    }
    dVar6 = (double)this->Coefficient;
    dVar1 = dVar6 * (__return_storage_ptr__->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         dVar6 * (__return_storage_ptr__->field0_0x0)._s_0.Z;
    auVar3._8_4_ = SUB84(dVar1,0);
    auVar3._0_8_ = dVar6 * (__return_storage_ptr__->field0_0x0)._s_0.X;
    auVar3._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
  }
  return __return_storage_ptr__;
}

