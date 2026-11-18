// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 3

// StaticStruct @ 14a14a3d0

UScriptStruct * __cdecl FRigVMSimPoint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMSimPoint.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMSimPoint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMSimPoint,(UObject *)pUVar1,L"RigVMSimPoint"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FRigVMSimPoint.OuterSingleton;
}

// IntegrateSemiExplicitEuler @ 14a1aeb40

FRigVMSimPoint * __thiscall
FRigVMSimPoint::IntegrateSemiExplicitEuler
          (FRigVMSimPoint *this,FRigVMSimPoint *__return_storage_ptr__,TVector<double> *param_1,
          float param_2)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  fVar3 = this->Size;
  fVar4 = this->LinearDamping;
  fVar5 = this->InheritMotion;
  __return_storage_ptr__->Mass = this->Mass;
  __return_storage_ptr__->Size = fVar3;
  __return_storage_ptr__->LinearDamping = fVar4;
  __return_storage_ptr__->InheritMotion = fVar5;
  dVar1 = (this->Position).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Position).field0_0x0._s_0.X = (this->Position).field0_0x0._s_0.X;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->LinearVelocity).field0_0x0._s_0.X;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Z = (this->Position).field0_0x0._s_0.Z;
  (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.X = dVar1;
  dVar1 = (this->LinearVelocity).field0_0x0._s_0.Z;
  (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Y =
       (this->LinearVelocity).field0_0x0._s_0.Y;
  (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Z = dVar1;
  if (__real_322bcc77 < __return_storage_ptr__->Mass) {
    dVar2 = (double)param_2;
    dVar1 = __real_3ff0000000000000 / (double)__return_storage_ptr__->Mass;
    dVar7 = dVar2 * (param_1->field0_0x0)._s_0.Y * dVar1 +
            (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Y;
    dVar8 = dVar2 * (param_1->field0_0x0)._s_0.Z * dVar1 +
            (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Z;
    dVar6 = dVar2 * (param_1->field0_0x0)._s_0.X * dVar1 +
            (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.X;
    (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Y = dVar7;
    (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Z = dVar8;
    (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.X = dVar6;
    dVar1 = (double)this->LinearDamping;
    dVar7 = dVar7 - dVar1 * (this->LinearVelocity).field0_0x0._s_0.Y;
    dVar8 = dVar8 - dVar1 * (this->LinearVelocity).field0_0x0._s_0.Z;
    dVar6 = dVar6 - dVar1 * (this->LinearVelocity).field0_0x0._s_0.X;
    (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Y = dVar7;
    (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Z = dVar8;
    (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.X = dVar6;
    dVar1 = (__return_storage_ptr__->Position).field0_0x0._s_0.Z;
    (__return_storage_ptr__->Position).field0_0x0._s_0.Y =
         dVar7 * dVar2 + (__return_storage_ptr__->Position).field0_0x0._s_0.Y;
    dVar7 = (__return_storage_ptr__->Position).field0_0x0._s_0.X;
    (__return_storage_ptr__->Position).field0_0x0._s_0.Z = dVar8 * dVar2 + dVar1;
    (__return_storage_ptr__->Position).field0_0x0._s_0.X = dVar6 * dVar2 + dVar7;
  }
  return __return_storage_ptr__;
}

// IntegrateVerlet @ 14a1aec50

FRigVMSimPoint * __thiscall
FRigVMSimPoint::IntegrateVerlet
          (FRigVMSimPoint *this,FRigVMSimPoint *__return_storage_ptr__,TVector<double> *param_1,
          float param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  
  fVar8 = this->Size;
  fVar6 = this->LinearDamping;
  fVar5 = this->InheritMotion;
  __return_storage_ptr__->Mass = this->Mass;
  __return_storage_ptr__->Size = fVar8;
  __return_storage_ptr__->LinearDamping = fVar6;
  __return_storage_ptr__->InheritMotion = fVar5;
  dVar4 = (this->Position).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Position).field0_0x0._s_0.X = (this->Position).field0_0x0._s_0.X;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Y = dVar4;
  dVar4 = (this->LinearVelocity).field0_0x0._s_0.X;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Z = (this->Position).field0_0x0._s_0.Z;
  (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.X = dVar4;
  dVar4 = (this->LinearVelocity).field0_0x0._s_0.Z;
  (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Y =
       (this->LinearVelocity).field0_0x0._s_0.Y;
  (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Z = dVar4;
  if (__real_322bcc77 < __return_storage_ptr__->Mass) {
    fVar8 = param_2 * param_3;
    if (__real_3f800000 <= param_2 * param_3) {
      fVar8 = __real_3f800000;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    dVar4 = __real_3ff0000000000000 / (double)__return_storage_ptr__->Mass;
    fVar6 = __real_3f800000 - this->LinearDamping;
    dVar9 = (double)fVar8;
    if (__real_3f800000 <= fVar6) {
      fVar6 = __real_3f800000;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    dVar2 = (double)fVar6;
    dVar3 = ((dVar4 * (param_1->field0_0x0)._s_0.Y -
             (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Y) * dVar9 +
            (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Y) * dVar2;
    dVar1 = (double)param_3;
    dVar7 = ((dVar4 * (param_1->field0_0x0)._s_0.Z -
             (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Z) * dVar9 +
            (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Z) * dVar2;
    (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.X =
         ((dVar4 * (param_1->field0_0x0)._s_0.X -
          (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.X) * dVar9 +
         (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.X) * dVar2;
    (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Y = dVar3;
    (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Z = dVar7;
    dVar4 = (__return_storage_ptr__->Position).field0_0x0._s_0.Y;
    dVar9 = (__return_storage_ptr__->Position).field0_0x0._s_0.Z;
    (__return_storage_ptr__->Position).field0_0x0._s_0.X =
         dVar1 * (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.X +
         (__return_storage_ptr__->Position).field0_0x0._s_0.X;
    (__return_storage_ptr__->Position).field0_0x0._s_0.Y = dVar3 * dVar1 + dVar4;
    (__return_storage_ptr__->Position).field0_0x0._s_0.Z = dVar7 * dVar1 + dVar9;
  }
  return __return_storage_ptr__;
}

