// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 10

// GetTestFlags @ 14a483500

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EAutomationTestFlags __thiscall
FRigUnit_SetBoneRotationTest::GetTestFlags(FRigUnit_SetBoneRotationTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a483550

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigUnit_SetBoneRotationTest::IsStressTest(FRigUnit_SetBoneRotationTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4835e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall
FRigUnit_SetBoneRotationTest::GetRequiredDeviceNum(FRigUnit_SetBoneRotationTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a483630

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_SetBoneRotationTest::GetTestSourceFileName
          (FRigUnit_SetBoneRotationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Hierarchy\\RigUnit_SetBoneRotation.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a483660

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
FRigUnit_SetBoneRotationTest::GetTestSourceFileLine(FRigUnit_SetBoneRotationTest *this)

{
  return 0x54;
}

// GetTests @ 14a483900

/* WARNING: Removing unreachable block (ram,0x00014a4839ed) */
/* WARNING: Removing unreachable block (ram,0x00014a483ab8) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetBoneRotationTest::GetTests
          (FRigUnit_SetBoneRotationTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_SetBoneRotation");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 14a483ae0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_SetBoneRotationTest::RunTest(FRigUnit_SetBoneRotationTest *this,FString *param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 uVar5;
  URigHierarchy *this_00;
  UClass *pUVar6;
  uint local_28;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  
  (**(code **)(this->_padding_ + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar6 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) goto LAB_14a483b42;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a483b42:
  URigHierarchy::Reset(this_00);
  dVar4 = UE::Math::TQuat<double>::Identity.W;
  dVar3 = UE::Math::TQuat<double>::Identity.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->Unit).Rotation.X = UE::Math::TQuat<double>::Identity.X;
  (this->Unit).Rotation.Y = dVar2;
  uStack_1c = CONCAT22(uStack_1c._2_2_,0xffff);
  (this->Unit).Rotation.Z = dVar3;
  (this->Unit).Rotation.W = dVar4;
  (this->Unit).Space = LocalSpace;
  (this->Unit).Bone.ComparisonIndex = 0;
  (this->Unit).Bone.Number = 0;
  (this->Unit).Weight = 1.0;
  (this->Unit).bPropagateToChildren = true;
  local_28 = local_28 & 0xffffff00;
  *(uint *)&(this->Unit).CachedBone.Key = local_28;
  (this->Unit).CachedBone.Key.Name.ComparisonIndex.Value = 0;
  (this->Unit).CachedBone.Key.Name.Number = 0;
  *(undefined4 *)&(this->Unit).CachedBone.Index = uStack_1c;
  (this->Unit).CachedBone.ContainerVersion = -1;
  *(undefined4 *)&(this->Unit).CachedBone.field_0x14 = uStack_14;
  *(undefined4 *)&(this->Unit).CachedBone.Element = 0;
  *(undefined4 *)((longlong)&(this->Unit).CachedBone.Element + 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014a483bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar5;
}

// RunControlRigUnitTest @ 14a483cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_SetBoneRotationTest::RunControlRigUnitTest
          (FRigUnit_SetBoneRotationTest *this,FString *param_1)

{
  longlong *this_00;
  FCachedRigElement *pFVar1;
  int iVar2;
  FControlRigExecuteContext *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  URigHierarchy *pUVar17;
  UClass *pUVar18;
  FName *pFVar19;
  URigHierarchy *pUVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar27;
  double dVar26;
  undefined1 auStackY_218 [32];
  FString local_1c8;
  FName local_1b8;
  FScriptContainerElement *local_1b0;
  uint local_1a8;
  FScriptContainerElement *local_1a0;
  uint local_198;
  FRigElementKey local_190 [2];
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pUVar17 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  pUVar20 = (URigHierarchy *)0x0;
  if (pUVar17 == (URigHierarchy *)0x0) {
LAB_14a483d70:
    pUVar17 = pUVar20;
  }
  else {
    pUVar18 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar2 = (int)pUVar18->_padding_;
    if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar18->_padding_)) goto LAB_14a483d70;
  }
  dVar16 = _UNK_15219d478;
  dVar25 = ___xmm_3feff5c31b23742b0000000000000000;
  dVar13 = _UNK_15219d3d8;
  dVar26 = ___xmm_0000000000000000bfa996dea963be74;
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[1];
  local_1c8.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)
       (((ulonglong)local_1c8.Data.AllocatorInstance.Data >> 8 & 0xffffff) << 8);
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar19 = ::FName::FName(&local_1b8,L"Root");
  local_178.Rotation.XY.m128d_f64[0] = dVar26;
  local_178.Rotation.XY.m128d_f64[1] = dVar13;
  local_178.Rotation.ZW.m128d_f64[0] = dVar25;
  local_178.Rotation.ZW.m128d_f64[1] = dVar16;
  local_178.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_178.Translation.XY.m128d_f64[0] = (double)fVar11;
  local_178.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_178.Translation.ZW.m128d_f64[1] = (double)fVar9;
  local_178.Translation.ZW.m128d_f64[0] = (double)fVar5;
  local_178.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar8,0);
  local_178.Scale3D.XY.m128d_f64[0] = (double)fVar12;
  local_178.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  local_178.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar10,0);
  local_178.Scale3D.ZW.m128d_f64[0] = (double)fVar6;
  local_178.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
  local_1c8.Data.ArrayNum = 0;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar17,(FRigElementKey *)&local_1b0,*pFVar19,
             (FRigElementKey *)&local_1c8,&local_178,true,User,false,false);
  pUVar17 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar17 == (URigHierarchy *)0x0) {
LAB_14a483e58:
    pUVar17 = pUVar20;
  }
  else {
    pUVar18 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar2 = (int)pUVar18->_padding_;
    if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar18->_padding_)) goto LAB_14a483e58;
  }
  dVar16 = _UNK_15219d458;
  dVar25 = ___xmm_3fef01549f7deea10000000000000000;
  dVar13 = _UNK_15219d3f8;
  dVar26 = ___xmm_0000000000000000bfcfaaeed4f31577;
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar19 = ::FName::FName(&local_1b8,L"BoneA");
  local_178.Rotation.XY.m128d_f64[0] = dVar26;
  local_178.Rotation.XY.m128d_f64[1] = dVar13;
  local_178.Rotation.ZW.m128d_f64[0] = dVar25;
  local_178.Rotation.ZW.m128d_f64[1] = dVar16;
  local_178.Translation.XY.m128d_f64[1] = (double)fVar7;
  local_178.Translation.XY.m128d_f64[0] = (double)fVar11;
  local_178.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar9,0);
  local_178.Translation.ZW.m128d_f64[0] = (double)fVar5;
  local_178.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  local_178.Scale3D.XY.m128d_f64[1] = (double)fVar8;
  local_178.Scale3D.XY.m128d_f64[0] = (double)fVar12;
  local_178.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar10,0);
  local_178.Scale3D.ZW.m128d_f64[0] = (double)fVar6;
  local_178.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
  local_1c8.Data.AllocatorInstance.Data = local_1b0;
  local_1c8.Data.ArrayNum = local_1a8;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar17,(FRigElementKey *)&local_1a0,*pFVar19,
             (FRigElementKey *)&local_1c8,&local_178,true,User,false,false);
  pUVar17 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar17 == (URigHierarchy *)0x0) {
LAB_14a483f3b:
    pUVar17 = pUVar20;
  }
  else {
    pUVar18 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar2 = (int)pUVar18->_padding_;
    if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar18->_padding_)) goto LAB_14a483f3b;
  }
  dVar16 = _UNK_15219d448;
  dVar25 = ___xmm_3fee0f575e26cc990000000000000000;
  dVar13 = _UNK_15219d408;
  dVar26 = ___xmm_0000000000000000bfd5f2099f35f912;
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar19 = ::FName::FName(&local_1b8,L"BoneB");
  local_178.Rotation.XY.m128d_f64[0] = dVar26;
  local_178.Rotation.XY.m128d_f64[1] = dVar13;
  local_178.Rotation.ZW.m128d_f64[0] = dVar25;
  local_178.Rotation.ZW.m128d_f64[1] = dVar16;
  local_178.Translation.XY.m128d_f64[1] = (double)fVar7;
  local_178.Translation.XY.m128d_f64[0] = (double)fVar11;
  local_178.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar9,0);
  local_178.Translation.ZW.m128d_f64[0] = (double)fVar5;
  local_178.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  local_178.Scale3D.XY.m128d_f64[1] = (double)fVar8;
  local_178.Scale3D.XY.m128d_f64[0] = (double)fVar12;
  local_178.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar10,0);
  local_178.Scale3D.ZW.m128d_f64[0] = (double)fVar6;
  local_178.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
  local_1c8.Data.AllocatorInstance.Data = local_1a0;
  local_1c8.Data.ArrayNum = local_198;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar17,local_190,*pFVar19,(FRigElementKey *)&local_1c8,
             &local_178,true,User,false,false);
  this_00 = &this->_padding_;
  pUVar17 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar17 == (URigHierarchy *)0x0) {
LAB_14a48401f:
    pUVar17 = pUVar20;
  }
  else {
    pUVar18 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar18->_padding_;
    if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar18->_padding_)) goto LAB_14a48401f;
  }
  URigHierarchy::ResetPoseToInitial(pUVar17,Bone);
  ::FName::FName(&local_1b8,L"Root");
  dVar25 = _UNK_15219d468;
  dVar13 = ___xmm_3fefc015527d5bd30000000000000000;
  dVar26 = _UNK_15219d3e8;
  pFVar3 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Rotation.X = ___xmm_0000000000000000bfbfeaaeee86ee36;
  (this->Unit).Rotation.Y = dVar26;
  (this->Unit).bPropagateToChildren = false;
  pFVar1 = &(this->Unit).CachedBone;
  (this->Unit).Rotation.Z = dVar13;
  (this->Unit).Rotation.W = dVar25;
  (this->Unit).Bone = local_1b8;
  (this->Unit).Space = GlobalSpace;
  FRigUnit_SetBoneRotation::StaticExecute
            (pFVar3,&(this->Unit).Bone,&(this->Unit).Rotation,(this->Unit).Space,(this->Unit).Weight
             ,(this->Unit).bPropagateToChildren,pFVar1);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pUVar17 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar17 == (URigHierarchy *)0x0) {
LAB_14a4840f6:
    pUVar17 = (URigHierarchy *)0x0;
  }
  else {
    pUVar18 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar18->_padding_;
    if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar18->_padding_)) goto LAB_14a4840f6;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_178,0,false);
  dVar13 = __real_bff0000000000000;
  dVar26 = __real_3ff0000000000000;
  uVar21 = SUB84(__real_bff0000000000000,0);
  uVar27 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  dVar25 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= local_178.Rotation.ZW.m128d_f64[1]) &&
     (dVar25 = local_178.Rotation.ZW.m128d_f64[1],
     __real_3ff0000000000000 <= local_178.Rotation.ZW.m128d_f64[1])) {
    dVar25 = __real_3ff0000000000000;
  }
  acos(dVar25);
  ::FString::PrintfImpl(&local_1c8,L"unexpected angle %.04f");
  pUVar17 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar17 == (URigHierarchy *)0x0) {
LAB_14a484183:
    pUVar17 = (URigHierarchy *)0x0;
  }
  else {
    pUVar18 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar18->_padding_;
    if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar18->_padding_)) goto LAB_14a484183;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_118,0,false);
  dVar25 = dVar13;
  if ((dVar13 <= local_118.Rotation.ZW.m128d_f64[1]) &&
     (dVar25 = local_118.Rotation.ZW.m128d_f64[1], dVar26 <= local_118.Rotation.ZW.m128d_f64[1])) {
    dVar25 = dVar26;
  }
  dVar22 = acos(dVar25);
  dVar16 = __real_3f50624de0000000;
  dVar25 = __real_3fd0000000000000;
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar22 = (dVar22 + dVar22) - __real_3fd0000000000000;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                 __real_3f50624de0000000,&local_1c8);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pUVar17 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar17 == (URigHierarchy *)0x0) {
LAB_14a484237:
    pUVar17 = (URigHierarchy *)0x0;
  }
  else {
    pUVar18 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar18->_padding_;
    if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar18->_padding_)) goto LAB_14a484237;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_118,1,false);
  dVar22 = dVar13;
  if ((dVar13 <= local_118.Rotation.ZW.m128d_f64[1]) &&
     (dVar22 = local_118.Rotation.ZW.m128d_f64[1], dVar26 <= local_118.Rotation.ZW.m128d_f64[1])) {
    dVar22 = dVar26;
  }
  acos(dVar22);
  ::FString::PrintfImpl(&local_1c8,L"unexpected angle %.04f");
  pUVar17 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar17 == (URigHierarchy *)0x0) {
LAB_14a4842b7:
    pUVar17 = (URigHierarchy *)0x0;
  }
  else {
    pUVar18 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar18->_padding_;
    if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar18->_padding_)) goto LAB_14a4842b7;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_178,1,false);
  dVar22 = dVar13;
  if ((dVar13 <= local_178.Rotation.ZW.m128d_f64[1]) &&
     (dVar22 = local_178.Rotation.ZW.m128d_f64[1], dVar26 <= local_178.Rotation.ZW.m128d_f64[1])) {
    dVar22 = dVar26;
  }
  dVar23 = acos(dVar22);
  dVar22 = __real_3fe0000000000000;
  dVar23 = (dVar23 + dVar23) - __real_3fe0000000000000;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & uVar15,
                                  SUB84(dVar23,0) & uVar14) <= dVar16,&local_1c8);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pUVar17 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar17 == (URigHierarchy *)0x0) {
LAB_14a48435c:
    pUVar17 = (URigHierarchy *)0x0;
  }
  else {
    pUVar18 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar18->_padding_;
    if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar18->_padding_)) goto LAB_14a48435c;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_118,2,false);
  dVar23 = dVar13;
  if ((dVar13 <= local_118.Rotation.ZW.m128d_f64[1]) &&
     (dVar23 = local_118.Rotation.ZW.m128d_f64[1], dVar26 <= local_118.Rotation.ZW.m128d_f64[1])) {
    dVar23 = dVar26;
  }
  acos(dVar23);
  ::FString::PrintfImpl(&local_1c8,L"unexpected angle %.04f");
  pUVar17 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar17 == (URigHierarchy *)0x0) {
LAB_14a4843dc:
    pUVar17 = (URigHierarchy *)0x0;
  }
  else {
    pUVar18 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar18->_padding_;
    if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar18->_padding_)) goto LAB_14a4843dc;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_178,2,false);
  dVar23 = dVar13;
  if ((dVar13 <= local_178.Rotation.ZW.m128d_f64[1]) &&
     (dVar23 = local_178.Rotation.ZW.m128d_f64[1], dVar26 <= local_178.Rotation.ZW.m128d_f64[1])) {
    dVar23 = dVar26;
  }
  dVar24 = acos(dVar23);
  dVar23 = __real_3fe6666660000000;
  dVar24 = (dVar24 + dVar24) - __real_3fe6666660000000;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar15,
                                  SUB84(dVar24,0) & uVar14) <= dVar16,&local_1c8,0);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pUVar17 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar17 == (URigHierarchy *)0x0) {
LAB_14a48447a:
    pUVar17 = (URigHierarchy *)0x0;
  }
  else {
    pUVar18 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar18->_padding_;
    if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar18->_padding_)) goto LAB_14a48447a;
  }
  URigHierarchy::ResetPoseToInitial(pUVar17,Bone);
  pFVar3 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Space = LocalSpace;
  FRigUnit_SetBoneRotation::StaticExecute
            (pFVar3,&(this->Unit).Bone,&(this->Unit).Rotation,(this->Unit).Space,(this->Unit).Weight
             ,(this->Unit).bPropagateToChildren,pFVar1);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pUVar17 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar17 == (URigHierarchy *)0x0) {
LAB_14a484507:
    pUVar17 = (URigHierarchy *)0x0;
  }
  else {
    pUVar18 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar18->_padding_;
    if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar18->_padding_)) goto LAB_14a484507;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_118,0,false);
  dVar24 = dVar13;
  if ((dVar13 <= local_118.Rotation.ZW.m128d_f64[1]) &&
     (dVar24 = local_118.Rotation.ZW.m128d_f64[1], dVar26 <= local_118.Rotation.ZW.m128d_f64[1])) {
    dVar24 = dVar26;
  }
  acos(dVar24);
  ::FString::PrintfImpl(&local_1c8,L"unexpected angle %.04f");
  pUVar17 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar17 == (URigHierarchy *)0x0) {
LAB_14a484584:
    pUVar17 = (URigHierarchy *)0x0;
  }
  else {
    pUVar18 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar18->_padding_;
    if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar18->_padding_)) goto LAB_14a484584;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_178,0,false);
  dVar24 = dVar13;
  if ((dVar13 <= local_178.Rotation.ZW.m128d_f64[1]) &&
     (dVar24 = local_178.Rotation.ZW.m128d_f64[1], dVar26 <= local_178.Rotation.ZW.m128d_f64[1])) {
    dVar24 = dVar26;
  }
  dVar24 = acos(dVar24);
  dVar24 = (dVar24 + dVar24) - dVar25;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar15,
                                  SUB84(dVar24,0) & uVar14) <= dVar16,&local_1c8);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pUVar17 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar17 == (URigHierarchy *)0x0) {
LAB_14a48461d:
    pUVar17 = (URigHierarchy *)0x0;
  }
  else {
    pUVar18 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar18->_padding_;
    if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar18->_padding_)) goto LAB_14a48461d;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_118,1,false);
  dVar24 = dVar13;
  if ((dVar13 <= local_118.Rotation.ZW.m128d_f64[1]) &&
     (dVar24 = local_118.Rotation.ZW.m128d_f64[1], dVar26 <= local_118.Rotation.ZW.m128d_f64[1])) {
    dVar24 = dVar26;
  }
  acos(dVar24);
  ::FString::PrintfImpl(&local_1c8,L"unexpected angle %.04f");
  pUVar17 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar17 != (URigHierarchy *)0x0) {
    pUVar18 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar18->_padding_;
    if ((iVar2 <= *(int *)(pUVar17->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar18->_padding_)) goto LAB_14a48469f;
  }
  pUVar17 = (URigHierarchy *)0x0;
LAB_14a48469f:
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_178,1,false);
  dVar24 = dVar13;
  if ((dVar13 <= local_178.Rotation.ZW.m128d_f64[1]) &&
     (dVar24 = local_178.Rotation.ZW.m128d_f64[1], dVar26 <= local_178.Rotation.ZW.m128d_f64[1])) {
    dVar24 = dVar26;
  }
  dVar24 = acos(dVar24);
  dVar22 = (dVar24 + dVar24) - dVar22;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar15,
                                  SUB84(dVar22,0) & uVar14) <= dVar16,&local_1c8);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_118,2,false);
  dVar22 = dVar13;
  if ((dVar13 <= local_118.Rotation.ZW.m128d_f64[1]) &&
     (dVar22 = local_118.Rotation.ZW.m128d_f64[1], dVar26 <= local_118.Rotation.ZW.m128d_f64[1])) {
    dVar22 = dVar26;
  }
  acos(dVar22);
  ::FString::PrintfImpl(&local_1c8,L"unexpected angle %.04f");
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_178,2,false);
  dVar22 = dVar13;
  if ((dVar13 <= local_178.Rotation.ZW.m128d_f64[1]) &&
     (dVar22 = local_178.Rotation.ZW.m128d_f64[1], dVar26 <= local_178.Rotation.ZW.m128d_f64[1])) {
    dVar22 = dVar26;
  }
  dVar22 = acos(dVar22);
  dVar22 = (dVar22 + dVar22) - dVar23;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar15,
                                  SUB84(dVar22,0) & uVar14) <= dVar16);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::ResetPoseToInitial(pUVar17,Bone);
  (this->Unit).bPropagateToChildren = true;
  Execute(this);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_118,0,false);
  dVar22 = dVar13;
  if ((dVar13 <= local_118.Rotation.ZW.m128d_f64[1]) &&
     (dVar22 = local_118.Rotation.ZW.m128d_f64[1], dVar26 <= local_118.Rotation.ZW.m128d_f64[1])) {
    dVar22 = dVar26;
  }
  acos(dVar22);
  ::FString::PrintfImpl(&local_1c8,L"unexpected angle %.04f");
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_178,0,false);
  dVar22 = dVar13;
  if ((dVar13 <= local_178.Rotation.ZW.m128d_f64[1]) &&
     (dVar22 = local_178.Rotation.ZW.m128d_f64[1], dVar26 <= local_178.Rotation.ZW.m128d_f64[1])) {
    dVar22 = dVar26;
  }
  dVar22 = acos(dVar22);
  dVar22 = (dVar22 + dVar22) - dVar25;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar15,
                                  SUB84(dVar22,0) & uVar14) <= dVar16,&local_1c8);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_118,1,false);
  dVar22 = dVar13;
  if ((dVar13 <= local_118.Rotation.ZW.m128d_f64[1]) &&
     (dVar22 = local_118.Rotation.ZW.m128d_f64[1], dVar26 <= local_118.Rotation.ZW.m128d_f64[1])) {
    dVar22 = dVar26;
  }
  acos(dVar22);
  ::FString::PrintfImpl(&local_1c8,L"unexpected angle %.04f");
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_178,1,false);
  dVar22 = dVar13;
  if ((dVar13 <= local_178.Rotation.ZW.m128d_f64[1]) &&
     (dVar22 = local_178.Rotation.ZW.m128d_f64[1], dVar26 <= local_178.Rotation.ZW.m128d_f64[1])) {
    dVar22 = dVar26;
  }
  dVar22 = acos(dVar22);
  dVar22 = (dVar22 + dVar22) - ___real_3fe4ccccc0000000;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar15,
                                  SUB84(dVar22,0) & uVar14) <= dVar16,&local_1c8);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_118,2,false);
  dVar22 = dVar13;
  if ((dVar13 <= local_118.Rotation.ZW.m128d_f64[1]) &&
     (dVar22 = local_118.Rotation.ZW.m128d_f64[1], dVar26 <= local_118.Rotation.ZW.m128d_f64[1])) {
    dVar22 = dVar26;
  }
  acos(dVar22);
  ::FString::PrintfImpl(&local_1c8,L"unexpected angle %.04f");
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_178,2,false);
  dVar22 = dVar13;
  if ((dVar13 <= local_178.Rotation.ZW.m128d_f64[1]) &&
     (dVar22 = local_178.Rotation.ZW.m128d_f64[1], dVar26 <= local_178.Rotation.ZW.m128d_f64[1])) {
    dVar22 = dVar26;
  }
  dVar22 = acos(dVar22);
  dVar22 = (dVar22 + dVar22) - ___real_3feb333340000000;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar15,
                                  SUB84(dVar22,0) & uVar14) <= dVar16);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::ResetPoseToInitial(pUVar17,Bone);
  ::FName::FName(&local_1b8,L"BoneA");
  (this->Unit).Bone = local_1b8;
  (this->Unit).Space = GlobalSpace;
  (this->Unit).bPropagateToChildren = false;
  Execute(this);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_118,0,false);
  dVar22 = dVar13;
  if ((dVar13 <= local_118.Rotation.ZW.m128d_f64[1]) &&
     (dVar22 = local_118.Rotation.ZW.m128d_f64[1], dVar26 <= local_118.Rotation.ZW.m128d_f64[1])) {
    dVar22 = dVar26;
  }
  acos(dVar22);
  ::FString::PrintfImpl(&local_1c8,L"unexpected angle %.04f");
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_178,0,false);
  dVar22 = dVar13;
  if ((dVar13 <= local_178.Rotation.ZW.m128d_f64[1]) &&
     (dVar22 = local_178.Rotation.ZW.m128d_f64[1], dVar26 <= local_178.Rotation.ZW.m128d_f64[1])) {
    dVar22 = dVar26;
  }
  dVar24 = acos(dVar22);
  dVar22 = __real_3fb99999a0000000;
  dVar24 = (dVar24 + dVar24) - __real_3fb99999a0000000;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar15,
                                  SUB84(dVar24,0) & uVar14) <= dVar16,&local_1c8);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_118,1,false);
  dVar24 = dVar13;
  if ((dVar13 <= local_118.Rotation.ZW.m128d_f64[1]) &&
     (dVar24 = local_118.Rotation.ZW.m128d_f64[1], dVar26 <= local_118.Rotation.ZW.m128d_f64[1])) {
    dVar24 = dVar26;
  }
  acos(dVar24);
  ::FString::PrintfImpl(&local_1c8,L"unexpected angle %.04f");
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_178,1,false);
  dVar24 = dVar13;
  if ((dVar13 <= local_178.Rotation.ZW.m128d_f64[1]) &&
     (dVar24 = local_178.Rotation.ZW.m128d_f64[1], dVar26 <= local_178.Rotation.ZW.m128d_f64[1])) {
    dVar24 = dVar26;
  }
  dVar24 = acos(dVar24);
  dVar25 = (dVar24 + dVar24) - dVar25;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar15,
                                  SUB84(dVar25,0) & uVar14) <= dVar16,&local_1c8);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_118,2,false);
  dVar25 = dVar13;
  if ((dVar13 <= local_118.Rotation.ZW.m128d_f64[1]) &&
     (dVar25 = local_118.Rotation.ZW.m128d_f64[1], dVar26 <= local_118.Rotation.ZW.m128d_f64[1])) {
    dVar25 = dVar26;
  }
  acos(dVar25);
  ::FString::PrintfImpl(&local_1c8,L"unexpected angle %.04f");
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_178,2,false);
  dVar25 = dVar13;
  if ((dVar13 <= local_178.Rotation.ZW.m128d_f64[1]) &&
     (dVar25 = local_178.Rotation.ZW.m128d_f64[1], dVar26 <= local_178.Rotation.ZW.m128d_f64[1])) {
    dVar25 = dVar26;
  }
  dVar25 = acos(dVar25);
  dVar25 = (dVar25 + dVar25) - dVar23;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar15,
                                  SUB84(dVar25,0) & uVar14) <= dVar16);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::ResetPoseToInitial(pUVar17,Bone);
  (this->Unit).Space = LocalSpace;
  Execute(this);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_118,0,false);
  dVar25 = dVar13;
  if ((dVar13 <= local_118.Rotation.ZW.m128d_f64[1]) &&
     (dVar25 = local_118.Rotation.ZW.m128d_f64[1], dVar26 <= local_118.Rotation.ZW.m128d_f64[1])) {
    dVar25 = dVar26;
  }
  acos(dVar25);
  ::FString::PrintfImpl(&local_1c8,L"unexpected angle %.04f");
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_178,0,false);
  dVar25 = dVar13;
  if ((dVar13 <= local_178.Rotation.ZW.m128d_f64[1]) &&
     (dVar25 = local_178.Rotation.ZW.m128d_f64[1], dVar26 <= local_178.Rotation.ZW.m128d_f64[1])) {
    dVar25 = dVar26;
  }
  dVar25 = acos(dVar25);
  dVar25 = (dVar25 + dVar25) - dVar22;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar15,
                                  SUB84(dVar25,0) & uVar14) <= dVar16,&local_1c8);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_118,1,false);
  dVar25 = dVar13;
  if ((dVar13 <= local_118.Rotation.ZW.m128d_f64[1]) &&
     (dVar25 = local_118.Rotation.ZW.m128d_f64[1], dVar26 <= local_118.Rotation.ZW.m128d_f64[1])) {
    dVar25 = dVar26;
  }
  acos(dVar25);
  ::FString::PrintfImpl(&local_1c8,L"unexpected angle %.04f");
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_178,1,false);
  dVar25 = dVar13;
  if ((dVar13 <= local_178.Rotation.ZW.m128d_f64[1]) &&
     (dVar25 = local_178.Rotation.ZW.m128d_f64[1], dVar26 <= local_178.Rotation.ZW.m128d_f64[1])) {
    dVar25 = dVar26;
  }
  dVar24 = acos(dVar25);
  dVar25 = __real_3fd6666660000000;
  dVar24 = (dVar24 + dVar24) - __real_3fd6666660000000;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar15,
                                  SUB84(dVar24,0) & uVar14) <= dVar16,&local_1c8);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_118,2,false);
  dVar24 = dVar13;
  if ((dVar13 <= local_118.Rotation.ZW.m128d_f64[1]) &&
     (dVar24 = local_118.Rotation.ZW.m128d_f64[1], dVar26 <= local_118.Rotation.ZW.m128d_f64[1])) {
    dVar24 = dVar26;
  }
  acos(dVar24);
  ::FString::PrintfImpl(&local_1c8,L"unexpected angle %.04f");
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_178,2,false);
  dVar24 = dVar13;
  if ((dVar13 <= local_178.Rotation.ZW.m128d_f64[1]) &&
     (dVar24 = local_178.Rotation.ZW.m128d_f64[1], dVar26 <= local_178.Rotation.ZW.m128d_f64[1])) {
    dVar24 = dVar26;
  }
  dVar24 = acos(dVar24);
  dVar23 = (dVar24 + dVar24) - dVar23;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & uVar15,
                                  SUB84(dVar23,0) & uVar14) <= dVar16);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::ResetPoseToInitial(pUVar17,Bone);
  (this->Unit).bPropagateToChildren = true;
  Execute(this);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_118,0,false);
  dVar23 = dVar13;
  if ((dVar13 <= local_118.Rotation.ZW.m128d_f64[1]) &&
     (dVar23 = local_118.Rotation.ZW.m128d_f64[1], dVar26 <= local_118.Rotation.ZW.m128d_f64[1])) {
    dVar23 = dVar26;
  }
  acos(dVar23);
  ::FString::PrintfImpl(&local_1c8,L"unexpected angle %.04f");
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_178,0,false);
  dVar23 = dVar13;
  if ((dVar13 <= local_178.Rotation.ZW.m128d_f64[1]) &&
     (dVar23 = local_178.Rotation.ZW.m128d_f64[1], dVar26 <= local_178.Rotation.ZW.m128d_f64[1])) {
    dVar23 = dVar26;
  }
  dVar23 = acos(dVar23);
  dVar22 = (dVar23 + dVar23) - dVar22;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar15,
                                  SUB84(dVar22,0) & uVar14) <= dVar16,&local_1c8);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_118,1,false);
  dVar22 = dVar13;
  if ((dVar13 <= local_118.Rotation.ZW.m128d_f64[1]) &&
     (dVar22 = local_118.Rotation.ZW.m128d_f64[1], dVar26 <= local_118.Rotation.ZW.m128d_f64[1])) {
    dVar22 = dVar26;
  }
  acos(dVar22);
  ::FString::PrintfImpl(&local_1c8,L"unexpected angle %.04f");
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_178,1,false);
  dVar22 = dVar13;
  if ((dVar13 <= local_178.Rotation.ZW.m128d_f64[1]) &&
     (dVar22 = local_178.Rotation.ZW.m128d_f64[1], dVar26 <= local_178.Rotation.ZW.m128d_f64[1])) {
    dVar22 = dVar26;
  }
  dVar22 = acos(dVar22);
  dVar25 = (dVar22 + dVar22) - dVar25;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar15,
                                  SUB84(dVar25,0) & uVar14) <= dVar16,&local_1c8);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_118,2,false);
  dVar25 = dVar13;
  if ((dVar13 <= local_118.Rotation.ZW.m128d_f64[1]) &&
     (dVar25 = local_118.Rotation.ZW.m128d_f64[1], dVar26 <= local_118.Rotation.ZW.m128d_f64[1])) {
    dVar25 = dVar26;
  }
  acos(dVar25);
  ::FString::PrintfImpl(&local_1c8,L"unexpected angle %.04f");
  pUVar17 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar17,&local_178,2,false);
  if (dVar13 <= local_178.Rotation.ZW.m128d_f64[1]) {
    dVar13 = local_178.Rotation.ZW.m128d_f64[1];
    if (dVar26 <= local_178.Rotation.ZW.m128d_f64[1]) {
      dVar13 = dVar26;
    }
    uVar21 = SUB84(dVar13,0);
    uVar27 = (undefined4)((ulonglong)dVar13 >> 0x20);
  }
  dVar26 = acos((double)CONCAT44(uVar27,uVar21));
  dVar26 = (dVar26 + dVar26) - ___real_3fe19999a0000000;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar15,
                                  SUB84(dVar26,0) & uVar14) <= dVar16,&local_1c8,0);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4852d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_SetBoneRotationTest::GetBeautifiedTestName
          (FRigUnit_SetBoneRotationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_SetBoneRotation");
  return __return_storage_ptr__;
}

// Execute @ 14a52c5f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetBoneRotationTest::Execute(FRigUnit_SetBoneRotationTest *this)

{
  FRigUnit_SetBoneRotation::StaticExecute
            ((FControlRigExecuteContext *)this->_padding_,&(this->Unit).Bone,&(this->Unit).Rotation,
             (this->Unit).Space,(this->Unit).Weight,(this->Unit).bPropagateToChildren,
             &(this->Unit).CachedBone);
  return;
}

