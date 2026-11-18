// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a4b4620

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EAutomationTestFlags __thiscall
FRigUnit_GetInitialBoneTransformTest::GetTestFlags(FRigUnit_GetInitialBoneTransformTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4b4630

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_GetInitialBoneTransformTest::IsStressTest(FRigUnit_GetInitialBoneTransformTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4b4640

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall
FRigUnit_GetInitialBoneTransformTest::GetRequiredDeviceNum
          (FRigUnit_GetInitialBoneTransformTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4b4670

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_GetInitialBoneTransformTest::GetTestSourceFileName
          (FRigUnit_GetInitialBoneTransformTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Hierarchy\\RigUnit_GetInitialBoneTransform.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4b46a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
FRigUnit_GetInitialBoneTransformTest::GetTestSourceFileLine
          (FRigUnit_GetInitialBoneTransformTest *this)

{
  return 0x39;
}

// GetTests @ 14a4b46c0

/* WARNING: Removing unreachable block (ram,0x00014a4b47ad) */
/* WARNING: Removing unreachable block (ram,0x00014a4b4878) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetInitialBoneTransformTest::GetTests
          (FRigUnit_GetInitialBoneTransformTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_GetInitialBoneTransform");
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

// RunTest @ 14a4b49e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_GetInitialBoneTransformTest::RunTest
          (FRigUnit_GetInitialBoneTransformTest *this,FString *param_1)

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
  uint local_48;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  
  (**(code **)(this->_padding_ + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar15 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar15->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar15->_padding_)) goto LAB_14a4b4a42;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4b4a42:
  URigHierarchy::Reset(this_00);
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  uStack_3c = CONCAT22(uStack_3c._2_2_,0xffff);
  local_48 = local_48 & 0xffffff00;
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
  *(uint *)&(this->Unit).CachedBone.Key = local_48;
  (this->Unit).CachedBone.Key.Name.ComparisonIndex.Value = 0;
  (this->Unit).CachedBone.Key.Name.Number = 0;
  *(undefined4 *)&(this->Unit).CachedBone.Index = uStack_3c;
  (this->Unit).CachedBone.ContainerVersion = -1;
  *(undefined4 *)&(this->Unit).CachedBone.field_0x14 = uStack_34;
  *(undefined4 *)&(this->Unit).CachedBone.Element = 0;
  *(undefined4 *)((longlong)&(this->Unit).CachedBone.Element + 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014a4b4b2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar14 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar14;
}

// RunControlRigUnitTest @ 14a4b4b40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_GetInitialBoneTransformTest::RunControlRigUnitTest
          (FRigUnit_GetInitialBoneTransformTest *this,FString *param_1)

{
  FCachedRigElement *pFVar1;
  undefined1 auVar2 [16];
  int iVar3;
  FControlRigExecuteContext *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  URigHierarchyController *pUVar18;
  UClass *pUVar19;
  FName *pFVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  FName local_res8;
  FString local_138 [2];
  double local_118;
  FScriptContainerElement *local_110;
  uint local_108;
  TTransform<double> local_f8;
  FRigElementKey local_98 [10];
  
  pUVar18 = (URigHierarchyController *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar18 == (URigHierarchyController *)0x0) {
LAB_14a4b4bc1:
    pUVar18 = (URigHierarchyController *)0x0;
  }
  else {
    pUVar19 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar3 = (int)pUVar19->_padding_;
    if ((*(int *)(pUVar18->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar19->_padding_)) goto LAB_14a4b4bc1;
  }
  dVar16 = _UNK_150689518;
  dVar23 = ___xmm_00000000000000003ff0000000000000;
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_138[0].Data.AllocatorInstance.Data =
       (FScriptContainerElement *)
       (((ulonglong)local_138[0].Data.AllocatorInstance.Data >> 8 & 0xffffff) << 8);
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar20 = ::FName::FName(&local_res8,L"Root");
  local_f8.Rotation.XY.m128d_f64[1] = (double)fVar8;
  local_f8.Rotation.XY.m128d_f64[0] = (double)fVar6;
  local_f8.Translation.XY.m128d_f64[0] = dVar23;
  local_f8.Translation.XY.m128d_f64[1] = dVar16;
  local_f8.Translation.ZW.m128d_f64[0] = 0.0;
  local_f8.Translation.ZW.m128d_f64[1] = 0.0;
  local_f8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar9,0);
  local_f8.Scale3D.XY.m128d_f64[0] = (double)fVar7;
  local_f8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  local_f8.Scale3D.ZW.m128d_f64[1] = (double)fVar13;
  local_f8.Scale3D.ZW.m128d_f64[0] = (double)fVar11;
  local_138[0].Data.ArrayNum = 0;
  local_f8.Rotation.ZW.m128d_f64[0] = (double)fVar10;
  local_f8.Rotation.ZW.m128d_f64[1] = (double)fVar12;
  URigHierarchyController::AddBone
            (pUVar18,(FRigElementKey *)&local_110,*pFVar20,(FRigElementKey *)local_138,&local_f8,
             true,User,false,false);
  pUVar18 = (URigHierarchyController *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar18 != (URigHierarchyController *)0x0) {
    pUVar19 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar3 = (int)pUVar19->_padding_;
    if ((iVar3 <= *(int *)(pUVar18->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar19->_padding_)) goto LAB_14a4b4ca9;
  }
  pUVar18 = (URigHierarchyController *)0x0;
LAB_14a4b4ca9:
  dVar17 = _UNK_15076acf8;
  dVar22 = ___xmm_00000000000000004008000000000000;
  dVar16 = _UNK_150744178;
  dVar23 = ___xmm_40000000000000003ff0000000000000;
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar20 = ::FName::FName(&local_res8,L"BoneA");
  local_f8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar8,0);
  local_f8.Rotation.XY.m128d_f64[0] = (double)fVar6;
  local_f8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  local_f8.Translation.XY.m128d_f64[0] = dVar23;
  local_f8.Translation.XY.m128d_f64[1] = dVar16;
  local_f8.Translation.ZW.m128d_f64[0] = dVar22;
  local_f8.Translation.ZW.m128d_f64[1] = dVar17;
  local_f8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar9,0);
  local_f8.Scale3D.XY.m128d_f64[0] = (double)fVar7;
  local_f8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  local_f8.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar13,0);
  local_f8.Scale3D.ZW.m128d_f64[0] = (double)fVar11;
  local_f8.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  local_138[0].Data.AllocatorInstance.Data = local_110;
  local_138[0].Data.ArrayNum = local_108;
  local_f8.Rotation.ZW.m128d_f64[0] = (double)fVar10;
  local_f8.Rotation.ZW.m128d_f64[1] = (double)fVar12;
  URigHierarchyController::AddBone
            (pUVar18,local_98,*pFVar20,(FRigElementKey *)local_138,&local_f8,true,User,false,false);
  ::FName::FName(&local_res8,L"Root");
  pFVar1 = &(this->Unit).CachedBone;
  pFVar4 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Bone = local_res8;
  (this->Unit).Space = GlobalSpace;
  FRigUnit_GetInitialBoneTransform::StaticExecute
            (pFVar4,&(this->Unit).Bone,(this->Unit).Space,&(this->Unit).Transform,pFVar1);
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_138,L"unexpected global transform");
  dVar16 = __real_3f1a36e2e0000000;
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar23 = __real_3ff0000000000000;
  local_118 = (this->Unit).Transform.Translation.ZW.m128d_f64[0];
  auVar2 = *(undefined1 (*) [16])(this->Unit).Transform.Translation.XY.m128d_f64;
  dVar22 = auVar2._0_8_ - __real_3ff0000000000000;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44(auVar2._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar2._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)local_118 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_118,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    uVar21 = 0;
  }
  else {
    uVar21 = 1;
  }
  (*pcVar5)(this,uVar21,local_138,0);
  if (local_138[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138[0].Data.AllocatorInstance.Data);
  }
  pFVar4 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Space = LocalSpace;
  FRigUnit_GetInitialBoneTransform::StaticExecute
            (pFVar4,&(this->Unit).Bone,LocalSpace,&(this->Unit).Transform,pFVar1);
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_138,L"unexpected local transform");
  local_118 = (this->Unit).Transform.Translation.ZW.m128d_f64[0];
  auVar2 = *(undefined1 (*) [16])(this->Unit).Transform.Translation.XY.m128d_f64;
  dVar22 = auVar2._0_8_ - dVar23;
  if (((dVar16 < (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar15,
                                  SUB84(dVar22,0) & uVar14)) ||
      (dVar16 < (double)CONCAT44(auVar2._12_4_ & uVar15,auVar2._8_4_ & uVar14))) ||
     (dVar16 < (double)CONCAT44((uint)((ulonglong)local_118 >> 0x20) & uVar15,
                                SUB84(local_118,0) & uVar14))) {
    uVar21 = 0;
  }
  else {
    uVar21 = 1;
  }
  (*pcVar5)(this,uVar21,local_138,0);
  if (local_138[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138[0].Data.AllocatorInstance.Data);
  }
  ::FName::FName(&local_res8,L"BoneA");
  pFVar4 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Bone = local_res8;
  (this->Unit).Space = GlobalSpace;
  FRigUnit_GetInitialBoneTransform::StaticExecute
            (pFVar4,&(this->Unit).Bone,(this->Unit).Space,&(this->Unit).Transform,pFVar1);
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_138,L"unexpected global transform");
  dVar17 = __real_4008000000000000;
  dVar22 = __real_4000000000000000;
  local_118 = (this->Unit).Transform.Translation.ZW.m128d_f64[0];
  dVar23 = (this->Unit).Transform.Translation.XY.m128d_f64[0] - dVar23;
  if (((dVar16 < (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & uVar15,
                                  SUB84(dVar23,0) & uVar14)) ||
      (dVar23 = (this->Unit).Transform.Translation.XY.m128d_f64[1] - __real_4000000000000000,
      dVar16 < (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & uVar15,SUB84(dVar23,0) & uVar14)
      )) || (dVar16 < (double)CONCAT44((uint)((ulonglong)(local_118 - __real_4008000000000000) >>
                                             0x20) & uVar15,
                                       SUB84(local_118 - __real_4008000000000000,0) & uVar14))) {
    uVar21 = 0;
  }
  else {
    uVar21 = 1;
  }
  (*pcVar5)(this,uVar21,local_138,0);
  if (local_138[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138[0].Data.AllocatorInstance.Data);
  }
  pFVar4 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Space = LocalSpace;
  FRigUnit_GetInitialBoneTransform::StaticExecute
            (pFVar4,&(this->Unit).Bone,LocalSpace,&(this->Unit).Transform,pFVar1);
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_138,L"unexpected local transform");
  local_118 = (this->Unit).Transform.Translation.ZW.m128d_f64[0];
  auVar2 = *(undefined1 (*) [16])(this->Unit).Transform.Translation.XY.m128d_f64;
  if (((dVar16 < (double)CONCAT44(auVar2._4_4_ & uVar15,auVar2._0_4_ & uVar14)) ||
      (dVar22 = auVar2._8_8_ - dVar22,
      dVar16 < (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar15,SUB84(dVar22,0) & uVar14)
      )) || (dVar16 < (double)CONCAT44((uint)((ulonglong)(local_118 - dVar17) >> 0x20) & uVar15,
                                       SUB84(local_118 - dVar17,0) & uVar14))) {
    uVar21 = 0;
  }
  else {
    uVar21 = 1;
  }
  (*pcVar5)(this,uVar21,local_138,0);
  if (local_138[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138[0].Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4b50c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_GetInitialBoneTransformTest::GetBeautifiedTestName
          (FRigUnit_GetInitialBoneTransformTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_GetInitialBoneTransform");
  return __return_storage_ptr__;
}

