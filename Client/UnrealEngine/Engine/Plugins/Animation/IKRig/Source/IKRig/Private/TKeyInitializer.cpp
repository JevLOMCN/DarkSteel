// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 2

// operator<FName,FIKRetargetPose>_TTuple<FName,FIKRetargetPose> @ 14df0a170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<FName,FIKRetargetPose> * __thiscall
TKeyInitializer<FName_const_&&>::operator<FName,FIKRetargetPose>_TTuple<FName,FIKRetargetPose>
          (TKeyInitializer<FName_const_&&> *this,
          TTuple<FName,FIKRetargetPose> *__return_storage_ptr__)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 auStackY_b8 [32];
  TVector<double>_u_0 local_88;
  ForAnyElementType local_70;
  undefined8 local_68;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  undefined8 uStack_40;
  undefined8 local_38;
  void *local_30;
  ulonglong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_20 = 0xffffffff;
  local_60.AllocatorInstance.InlineData[0] = '\0';
  local_60.AllocatorInstance.InlineData[1] = '\0';
  local_60.AllocatorInstance.InlineData[2] = '\0';
  local_60.AllocatorInstance.InlineData[3] = '\0';
  local_60.AllocatorInstance.InlineData[4] = '\0';
  local_60.AllocatorInstance.InlineData[5] = '\0';
  local_60.AllocatorInstance.InlineData[6] = '\0';
  local_60.AllocatorInstance.InlineData[7] = '\0';
  local_60.AllocatorInstance.InlineData[8] = '\0';
  local_60.AllocatorInstance.InlineData[9] = '\0';
  local_60.AllocatorInstance.InlineData[10] = '\0';
  local_60.AllocatorInstance.InlineData[0xb] = '\0';
  local_60.AllocatorInstance.InlineData[0xc] = '\0';
  local_60.AllocatorInstance.InlineData[0xd] = '\0';
  local_60.AllocatorInstance.InlineData[0xe] = '\0';
  local_60.AllocatorInstance.InlineData[0xf] = '\0';
  local_38 = 0;
  local_28 = 0;
  local_88._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_88._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1c = 0;
  local_88._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_60._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_40 = _UNK_150631d98;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_30 = (void *)0x0;
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  FIKRetargetPose::FIKRetargetPose
            ((FIKRetargetPose *)&__return_storage_ptr__->field_0x8,(FIKRetargetPose *)&local_88._s_0
            );
  local_28 = local_28 & 0xffffffff00000000;
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  uVar2 = local_68 >> 0x20;
  local_68 = local_68 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,&local_70,0,(int *)((longlong)&local_68 + 4));
  }
  iVar3 = local_60.MaxBits;
  uStack_40 = 0xffffffff;
  local_60._24_8_ = (ulonglong)(uint)local_60.MaxBits << 0x20;
  if (0x80 < (uint)iVar3) {
    local_60.NumBits = 0;
    local_60.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,0);
  }
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  return __return_storage_ptr__;
}

// operator<FName,FTargetChainSettings>_TTuple<FName,FTargetChainSettings> @ 14df0a2b0

TTuple<FName,FTargetChainSettings> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,FTargetChainSettings>_TTuple<FName,FTargetChainSettings>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,FTargetChainSettings> *__return_storage_ptr__)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 local_c8 [2];
  undefined2 uStack_c6;
  uint uStack_c0;
  uint uStack_b4;
  uint uStack_ac;
  uint local_a8;
  undefined7 uStack_2f;
  uint local_28;
  
  memset(local_c8,0,0xb8);
  dVar10 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar9 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  dVar8 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  uVar7 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar1 = this->Key->Number;
  uStack_c0 = uStack_c0 & 0xffffff00;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  uStack_b4 = uStack_b4 & 0xffffff00;
  local_a8 = CONCAT31(local_a8._1_3_,1);
  local_28 = local_28 & 0xffffff00;
  *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(0x3f800000,CONCAT22(uStack_c6,1));
  *(ulonglong *)&__return_storage_ptr__->field_0x10 = CONCAT44(0x3f800000,uStack_c0);
  *(ulonglong *)&__return_storage_ptr__->field_0x18 = (ulonglong)uStack_b4 << 0x20;
  *(ulonglong *)&__return_storage_ptr__->field_0x20 = (ulonglong)uStack_ac << 0x20;
  *(ulonglong *)&__return_storage_ptr__->field_0x28 = (ulonglong)local_a8;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0x3f800000;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = uVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = uVar6;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = uVar7;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = uVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = uVar3;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = uVar4;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = uVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = uVar3;
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = uVar4;
  *(double *)&__return_storage_ptr__->field_0x80 = dVar8;
  *(double *)&__return_storage_ptr__->field_0x88 = dVar9;
  *(double *)&__return_storage_ptr__->field_0x90 = dVar10;
  *(undefined8 *)&__return_storage_ptr__->field_0x98 = 0x3f8000003f800000;
  *(ulonglong *)&__return_storage_ptr__->field_0xa0 = CONCAT71(uStack_2f,1);
  *(ulonglong *)&__return_storage_ptr__->field_0xa8 = (ulonglong)local_28;
  *(undefined8 *)&__return_storage_ptr__->field_0xb0 = 0x4170000000000000;
  *(undefined8 *)&__return_storage_ptr__->field_0xb8 = 0x3f800000437a0000;
  return __return_storage_ptr__;
}

