// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a470b80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EAutomationTestFlags __thiscall
FRigUnit_GetBoneTransformTest::GetTestFlags(FRigUnit_GetBoneTransformTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a470b90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigUnit_GetBoneTransformTest::IsStressTest(FRigUnit_GetBoneTransformTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a470ba0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall
FRigUnit_GetBoneTransformTest::GetRequiredDeviceNum(FRigUnit_GetBoneTransformTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a470bb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_GetBoneTransformTest::GetTestSourceFileName
          (FRigUnit_GetBoneTransformTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Hierarchy\\RigUnit_GetBoneTransform.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a470bf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
FRigUnit_GetBoneTransformTest::GetTestSourceFileLine(FRigUnit_GetBoneTransformTest *this)

{
  return 0x43;
}

// GetTests @ 14a470c80

/* WARNING: Removing unreachable block (ram,0x00014a470d6d) */
/* WARNING: Removing unreachable block (ram,0x00014a470e38) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetBoneTransformTest::GetTests
          (FRigUnit_GetBoneTransformTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_GetBoneTransform");
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

// RunTest @ 14a470e70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_GetBoneTransformTest::RunTest(FRigUnit_GetBoneTransformTest *this,FString *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 uVar14;
  URigHierarchy *this_00;
  UClass *pUVar15;
  uint local_58;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  
  (**(code **)(this->_padding_ + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar15 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar15->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar15->_padding_)) goto LAB_14a470ed2;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a470ed2:
  URigHierarchy::Reset(this_00);
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  uStack_4c = CONCAT22(uStack_4c._2_2_,0xffff);
  local_58 = local_58 & 0xffffff00;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Unit).Transform.Rotation.XY.m128d_f64 = auVar13;
  (this->Unit).Bone.ComparisonIndex = 0;
  (this->Unit).Bone.Number = 0;
  (this->Unit).Transform.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  (this->Unit).Transform.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  (this->Unit).Space = GlobalSpace;
  (this->Unit).bFirstUpdate = true;
  (this->Unit).Transform.Translation.XY.m128d_f64[0] = (double)fVar2;
  (this->Unit).Transform.Translation.XY.m128d_f64[1] = (double)fVar4;
  (this->Unit).Transform.Translation.ZW.m128d_f64[0] = (double)fVar7;
  (this->Unit).Transform.Translation.ZW.m128d_f64[1] = (double)fVar10;
  (this->Unit).Transform.Scale3D.XY.m128d_f64[0] = (double)fVar3;
  (this->Unit).Transform.Scale3D.XY.m128d_f64[1] = (double)fVar5;
  auVar12._8_4_ = SUB84((double)fVar11,0);
  auVar12._0_8_ = (double)fVar8;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  *(undefined1 (*) [16])(this->Unit).Transform.Scale3D.ZW.m128d_f64 = auVar12;
  *(uint *)&(this->Unit).CachedBone.Key = local_58;
  (this->Unit).CachedBone.Key.Name.ComparisonIndex.Value = 0;
  (this->Unit).CachedBone.Key.Name.Number = 0;
  *(undefined4 *)&(this->Unit).CachedBone.Index = uStack_4c;
  (this->Unit).CachedBone.ContainerVersion = -1;
  *(undefined4 *)&(this->Unit).CachedBone.field_0x14 = uStack_44;
  *(undefined4 *)&(this->Unit).CachedBone.Element = 0;
  *(undefined4 *)((longlong)&(this->Unit).CachedBone.Element + 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014a470fc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar14 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar14;
}

// RunControlRigUnitTest @ 14a470fd0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_GetBoneTransformTest::RunControlRigUnitTest
          (FRigUnit_GetBoneTransformTest *this,FString *param_1)

{
  bool *pbVar1;
  TTransform<double> *pTVar2;
  FCachedRigElement *pFVar3;
  undefined1 auVar4 [16];
  int iVar5;
  FControlRigExecuteContext *pFVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  URigHierarchyController *pUVar20;
  UClass *pUVar21;
  FName *pFVar22;
  undefined8 uVar23;
  double dVar24;
  double dVar25;
  FName local_res8;
  FString local_148 [2];
  double local_128;
  FScriptContainerElement *local_120;
  uint local_118;
  TTransform<double> local_108;
  FRigElementKey local_a8 [10];
  
  pUVar20 = (URigHierarchyController *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar20 == (URigHierarchyController *)0x0) {
LAB_14a471053:
    pUVar20 = (URigHierarchyController *)0x0;
  }
  else {
    pUVar21 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar5 = (int)pUVar21->_padding_;
    if ((*(int *)(pUVar20->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar21->_padding_)) goto LAB_14a471053;
  }
  dVar25 = _UNK_150689518;
  dVar18 = ___xmm_00000000000000003ff0000000000000;
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar14 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_148[0].Data.AllocatorInstance.Data =
       (FScriptContainerElement *)
       (((ulonglong)local_148[0].Data.AllocatorInstance.Data >> 8 & 0xffffff) << 8);
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar15 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar22 = ::FName::FName(&local_res8,L"Root");
  local_108.Rotation.XY.m128d_f64[1] = (double)fVar10;
  local_108.Rotation.XY.m128d_f64[0] = (double)fVar8;
  local_108.Translation.XY.m128d_f64[0] = dVar18;
  local_108.Translation.XY.m128d_f64[1] = dVar25;
  local_108.Translation.ZW.m128d_f64[0] = 0.0;
  local_108.Translation.ZW.m128d_f64[1] = 0.0;
  local_108.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar11,0);
  local_108.Scale3D.XY.m128d_f64[0] = (double)fVar9;
  local_108.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  local_108.Scale3D.ZW.m128d_f64[1] = (double)fVar15;
  local_108.Scale3D.ZW.m128d_f64[0] = (double)fVar13;
  local_148[0].Data.ArrayNum = 0;
  local_108.Rotation.ZW.m128d_f64[0] = (double)fVar12;
  local_108.Rotation.ZW.m128d_f64[1] = (double)fVar14;
  URigHierarchyController::AddBone
            (pUVar20,(FRigElementKey *)&local_120,*pFVar22,(FRigElementKey *)local_148,&local_108,
             true,User,false,false);
  pUVar20 = (URigHierarchyController *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar20 != (URigHierarchyController *)0x0) {
    pUVar21 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar5 = (int)pUVar21->_padding_;
    if ((iVar5 <= *(int *)(pUVar20->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar21->_padding_)) goto LAB_14a47113b;
  }
  pUVar20 = (URigHierarchyController *)0x0;
LAB_14a47113b:
  dVar19 = _UNK_15076acf8;
  dVar24 = ___xmm_00000000000000004008000000000000;
  dVar25 = _UNK_150744178;
  dVar18 = ___xmm_40000000000000003ff0000000000000;
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar14 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar15 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar22 = ::FName::FName(&local_res8,L"BoneA");
  local_108.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar10,0);
  local_108.Rotation.XY.m128d_f64[0] = (double)fVar8;
  local_108.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
  local_108.Translation.XY.m128d_f64[0] = dVar18;
  local_108.Translation.XY.m128d_f64[1] = dVar25;
  local_108.Translation.ZW.m128d_f64[0] = dVar24;
  local_108.Translation.ZW.m128d_f64[1] = dVar19;
  local_108.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar11,0);
  local_108.Scale3D.XY.m128d_f64[0] = (double)fVar9;
  local_108.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  local_108.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar15,0);
  local_108.Scale3D.ZW.m128d_f64[0] = (double)fVar13;
  local_108.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
  local_148[0].Data.AllocatorInstance.Data = local_120;
  local_148[0].Data.ArrayNum = local_118;
  local_108.Rotation.ZW.m128d_f64[0] = (double)fVar12;
  local_108.Rotation.ZW.m128d_f64[1] = (double)fVar14;
  URigHierarchyController::AddBone
            (pUVar20,local_a8,*pFVar22,(FRigElementKey *)local_148,&local_108,true,User,false,false)
  ;
  ::FName::FName(&local_res8,L"Unknown");
  pbVar1 = &(this->Unit).bFirstUpdate;
  pFVar6 = (FControlRigExecuteContext *)this->_padding_;
  pTVar2 = &(this->Unit).Transform;
  (this->Unit).Bone = local_res8;
  pFVar22 = &(this->Unit).Bone;
  (this->Unit).Space = GlobalSpace;
  pFVar3 = &(this->Unit).CachedBone;
  FRigUnit_GetBoneTransform::StaticExecute(pFVar6,pFVar22,(this->Unit).Space,pTVar2,pFVar3,pbVar1);
  pcVar7 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_148,L"unexpected global transform");
  dVar18 = __real_3f1a36e2e0000000;
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_128 = (this->Unit).Transform.Translation.ZW.m128d_f64[0];
  auVar4 = *(undefined1 (*) [16])(this->Unit).Transform.Translation.XY.m128d_f64;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44(auVar4._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         auVar4._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44(auVar4._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar4._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)local_128 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_128,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar7)(this,uVar23,local_148,0);
  if (local_148[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148[0].Data.AllocatorInstance.Data);
  }
  pFVar6 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Space = LocalSpace;
  FRigUnit_GetBoneTransform::StaticExecute(pFVar6,pFVar22,(this->Unit).Space,pTVar2,pFVar3,pbVar1);
  pcVar7 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_148,L"unexpected local transform");
  local_128 = (this->Unit).Transform.Translation.ZW.m128d_f64[0];
  auVar4 = *(undefined1 (*) [16])(this->Unit).Transform.Translation.XY.m128d_f64;
  if (((dVar18 < (double)CONCAT44(auVar4._4_4_ & uVar17,auVar4._0_4_ & uVar16)) ||
      (dVar18 < (double)CONCAT44(auVar4._12_4_ & uVar17,auVar4._8_4_ & uVar16))) ||
     (dVar18 < (double)CONCAT44((uint)((ulonglong)local_128 >> 0x20) & uVar17,
                                SUB84(local_128,0) & uVar16))) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar7)(this,uVar23,local_148,0);
  if (local_148[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148[0].Data.AllocatorInstance.Data);
  }
  ::FName::FName(&local_res8,L"Root");
  pFVar6 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Bone = local_res8;
  (this->Unit).Space = GlobalSpace;
  FRigUnit_GetBoneTransform::StaticExecute(pFVar6,pFVar22,(this->Unit).Space,pTVar2,pFVar3,pbVar1);
  pcVar7 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_148,L"unexpected global transform");
  dVar25 = __real_3ff0000000000000;
  local_128 = (this->Unit).Transform.Translation.ZW.m128d_f64[0];
  auVar4 = *(undefined1 (*) [16])(this->Unit).Transform.Translation.XY.m128d_f64;
  dVar24 = auVar4._0_8_ - __real_3ff0000000000000;
  if (((dVar18 < (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar17,
                                  SUB84(dVar24,0) & uVar16)) ||
      (dVar18 < (double)CONCAT44(auVar4._12_4_ & uVar17,auVar4._8_4_ & uVar16))) ||
     (dVar18 < (double)CONCAT44((uint)((ulonglong)local_128 >> 0x20) & uVar17,
                                SUB84(local_128,0) & uVar16))) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar7)(this,uVar23,local_148,0);
  if (local_148[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148[0].Data.AllocatorInstance.Data);
  }
  pFVar6 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Space = LocalSpace;
  FRigUnit_GetBoneTransform::StaticExecute(pFVar6,pFVar22,(this->Unit).Space,pTVar2,pFVar3,pbVar1);
  pcVar7 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_148,L"unexpected local transform");
  local_128 = (this->Unit).Transform.Translation.ZW.m128d_f64[0];
  auVar4 = *(undefined1 (*) [16])(this->Unit).Transform.Translation.XY.m128d_f64;
  dVar24 = auVar4._0_8_ - dVar25;
  if (((dVar18 < (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar17,
                                  SUB84(dVar24,0) & uVar16)) ||
      (dVar18 < (double)CONCAT44(auVar4._12_4_ & uVar17,auVar4._8_4_ & uVar16))) ||
     (dVar18 < (double)CONCAT44((uint)((ulonglong)local_128 >> 0x20) & uVar17,
                                SUB84(local_128,0) & uVar16))) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar7)(this,uVar23,local_148,0);
  if (local_148[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148[0].Data.AllocatorInstance.Data);
  }
  ::FName::FName(&local_res8,L"BoneA");
  pFVar6 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Bone = local_res8;
  (this->Unit).Space = GlobalSpace;
  FRigUnit_GetBoneTransform::StaticExecute(pFVar6,pFVar22,(this->Unit).Space,pTVar2,pFVar3,pbVar1);
  pcVar7 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_148,L"unexpected global transform");
  dVar19 = __real_4008000000000000;
  dVar24 = __real_4000000000000000;
  local_128 = (this->Unit).Transform.Translation.ZW.m128d_f64[0];
  dVar25 = (this->Unit).Transform.Translation.XY.m128d_f64[0] - dVar25;
  if (((dVar18 < (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar17,
                                  SUB84(dVar25,0) & uVar16)) ||
      (dVar25 = (this->Unit).Transform.Translation.XY.m128d_f64[1] - __real_4000000000000000,
      dVar18 < (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar17,SUB84(dVar25,0) & uVar16)
      )) || (dVar18 < (double)CONCAT44((uint)((ulonglong)(local_128 - __real_4008000000000000) >>
                                             0x20) & uVar17,
                                       SUB84(local_128 - __real_4008000000000000,0) & uVar16))) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar7)(this,uVar23,local_148,0);
  if (local_148[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148[0].Data.AllocatorInstance.Data);
  }
  pFVar6 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Space = LocalSpace;
  FRigUnit_GetBoneTransform::StaticExecute(pFVar6,pFVar22,(this->Unit).Space,pTVar2,pFVar3,pbVar1);
  pcVar7 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_148,L"unexpected local transform");
  local_128 = (this->Unit).Transform.Translation.ZW.m128d_f64[0];
  auVar4 = *(undefined1 (*) [16])(this->Unit).Transform.Translation.XY.m128d_f64;
  if (((dVar18 < (double)CONCAT44(auVar4._4_4_ & uVar17,auVar4._0_4_ & uVar16)) ||
      (dVar24 = auVar4._8_8_ - dVar24,
      dVar18 < (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar17,SUB84(dVar24,0) & uVar16)
      )) || (dVar18 < (double)CONCAT44((uint)((ulonglong)(local_128 - dVar19) >> 0x20) & uVar17,
                                       SUB84(local_128 - dVar19,0) & uVar16))) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar7)(this,uVar23,local_148,0);
  if (local_148[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148[0].Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4716d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_GetBoneTransformTest::GetBeautifiedTestName
          (FRigUnit_GetBoneTransformTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_GetBoneTransform");
  return __return_storage_ptr__;
}

