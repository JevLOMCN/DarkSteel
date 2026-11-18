// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a472330

EAutomationTestFlags __thiscall
FRigUnit_DistributeRotationTest::GetTestFlags(FRigUnit_DistributeRotationTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a472430

bool __thiscall FRigUnit_DistributeRotationTest::IsStressTest(FRigUnit_DistributeRotationTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a472440

uint __thiscall
FRigUnit_DistributeRotationTest::GetRequiredDeviceNum(FRigUnit_DistributeRotationTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a472490

FString * __thiscall
FRigUnit_DistributeRotationTest::GetTestSourceFileName
          (FRigUnit_DistributeRotationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Highlevel\\Hierarchy\\RigUnit_DistributeRotation.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4724c0

int __thiscall
FRigUnit_DistributeRotationTest::GetTestSourceFileLine(FRigUnit_DistributeRotationTest *this)

{
  return 0x113;
}

// GetTests @ 14a472590

/* WARNING: Removing unreachable block (ram,0x00014a47267d) */
/* WARNING: Removing unreachable block (ram,0x00014a472748) */

void __thiscall
FRigUnit_DistributeRotationTest::GetTests
          (FRigUnit_DistributeRotationTest *this,
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
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_DistributeRotation");
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

// RunTest @ 14a4727c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_DistributeRotationTest::RunTest(FRigUnit_DistributeRotationTest *this,FString *param_1)

{
  int iVar1;
  undefined1 uVar2;
  URigHierarchy *this_00;
  UClass *pUVar3;
  FRigUnit_DistributeRotation local_a8;
  
  (**(code **)(this->_padding_ + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar3 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14a472826;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a472826:
  URigHierarchy::Reset(this_00);
  local_a8.Rotations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8._padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  local_a8.Rotations.ArrayNum = 0;
  local_a8.Rotations.ArrayMax = 0;
  local_a8._padding_ = (longlong)&___7FRigUnit_DistributeRotation__6B_;
  local_a8.WorkData.CachedItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.EndBone.ComparisonIndex.Value = 0;
  local_a8.EndBone.Number = 0;
  local_a8.StartBone.ComparisonIndex.Value = 0;
  local_a8.StartBone.Number = 0;
  local_a8.WorkData.CachedItems.ArrayNum = 0;
  local_a8.WorkData.CachedItems.ArrayMax = 0;
  local_a8.WorkData.ItemRotationA.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.WorkData.ItemRotationA.ArrayNum = 0;
  local_a8.WorkData.ItemRotationA.ArrayMax = 0;
  local_a8.WorkData.ItemRotationB.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.WorkData.ItemRotationB.ArrayNum = 0;
  local_a8.WorkData.ItemRotationB.ArrayMax = 0;
  local_a8.WorkData.ItemRotationT.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.WorkData.ItemRotationT.ArrayNum = 0;
  local_a8.WorkData.ItemRotationT.ArrayMax = 0;
  local_a8.WorkData.ItemLocalTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.WorkData.ItemLocalTransforms.ArrayNum = 0;
  local_a8.WorkData.ItemLocalTransforms.ArrayMax = 0;
  local_a8.RotationEaseType = Linear;
  local_a8.Weight = 1.0;
  local_a8.bPropagateToChildren = true;
  FRigUnit_DistributeRotation::operator=(&this->Unit,&local_a8);
  if (local_a8.WorkData.ItemLocalTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_a8.WorkData.ItemLocalTransforms.AllocatorInstance.Data);
  }
  if (local_a8.WorkData.ItemRotationT.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.WorkData.ItemRotationT.AllocatorInstance.Data);
  }
  if (local_a8.WorkData.ItemRotationB.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.WorkData.ItemRotationB.AllocatorInstance.Data);
  }
  if (local_a8.WorkData.ItemRotationA.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.WorkData.ItemRotationA.AllocatorInstance.Data);
  }
  if (local_a8.WorkData.CachedItems.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.WorkData.CachedItems.AllocatorInstance.Data);
  }
  if (local_a8.Rotations.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Rotations.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x00014a472916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar2;
}

// RunControlRigUnitTest @ 14a472970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_DistributeRotationTest::RunControlRigUnitTest
          (FRigUnit_DistributeRotationTest *this,FString *param_1)

{
  TArray<FRigUnit_DistributeRotation_Rotation,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  URigHierarchy *pUVar14;
  UClass *pUVar15;
  FName *pFVar16;
  TQuat<double> *pTVar17;
  TVector<double> *pTVar18;
  FScriptContainerElement *pFVar19;
  URigHierarchy *pUVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStackY_a48 [32];
  double local_9f8;
  double dStack_9f0;
  double local_9e8;
  double dStack_9e0;
  undefined4 local_9d8;
  undefined4 uStack_9d4;
  double dStack_9d0;
  FString local_9c8;
  uint local_9b0;
  FNameEntryId FStack_9ac;
  undefined4 uStack_9a8;
  FName local_9a4;
  FName local_99c [2];
  FRigElementKey local_988;
  FRigElementKey local_978;
  FRigElementKey local_968;
  FRigElementKey local_958;
  FRigElementKey local_948;
  FRigElementKey local_938;
  FRigElementKey local_928;
  FRigElementKey local_918;
  FRigElementKey local_908;
  FString local_8f8;
  FString local_8e8;
  FString local_8d8;
  FString local_8c8;
  FString local_8b8;
  FString local_8a8;
  FString local_898;
  FString local_888;
  FString local_878;
  FString local_868;
  FString local_858;
  FString local_848;
  FString local_838;
  FString local_828;
  FString local_818;
  FString local_808;
  FString local_7f8;
  FString local_7e8;
  FString local_7d8;
  FName local_7c8;
  FName local_7c0;
  FName local_7b8;
  FName local_7b0;
  FName local_7a8;
  TVector<double>_u_0 local_7a0;
  TQuat<double> local_788;
  TQuat<double> local_768;
  TQuat<double> local_748;
  TQuat<double> local_728;
  TQuat<double> local_708;
  FRigElementKey local_6e8;
  TTransform<double> local_6d8;
  TTransform<double> local_678;
  TTransform<double> local_618;
  TTransform<double> local_5b8;
  TTransform<double> local_558;
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  double local_4d8;
  double dStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  double local_4b8;
  double dStack_4b0;
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  double local_478;
  double dStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  double local_418;
  double dStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  double local_3f8;
  double dStack_3f0;
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  double local_3b8;
  double dStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  double local_398;
  double dStack_390;
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  TVector<double> local_318;
  TVector<double> local_300;
  TVector<double> local_2e8;
  TVector<double> local_2d0;
  TVector<double> local_2b8;
  TQuat<double> local_298;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_a48;
  pUVar14 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  pUVar20 = (URigHierarchy *)0x0;
  if (pUVar14 == (URigHierarchy *)0x0) {
LAB_14a472a04:
    pUVar14 = pUVar20;
  }
  else {
    pUVar15 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar15->_padding_)) goto LAB_14a472a04;
  }
  dVar8 = _UNK_150689518;
  dVar10 = ___xmm_00000000000000003ff0000000000000;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  uVar29 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar30 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_9b0 = local_9b0 & 0xffffff00;
  FStack_9ac.Value = 0;
  uStack_9a8 = 0;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  uVar27 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar28 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  uVar25 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar26 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar23 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar24 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_498._8_4_ = uVar29;
  local_498._0_8_ = (double)fVar5;
  local_498._12_4_ = uVar30;
  local_448._8_4_ = uVar23;
  local_448._0_8_ = (double)fVar4;
  local_448._12_4_ = uVar24;
  local_488._8_4_ = uVar27;
  local_488._0_8_ = (double)fVar3;
  local_488._12_4_ = uVar28;
  local_478 = ___xmm_00000000000000003ff0000000000000;
  dStack_470 = _UNK_150689518;
  local_468 = 0;
  uStack_460 = 0;
  local_458._8_4_ = uVar25;
  local_458._0_8_ = (double)fVar6;
  local_458._12_4_ = uVar26;
  pFVar16 = ::FName::FName(&local_7c8,L"Root");
  local_958.Name.ComparisonIndex.Value = FStack_9ac.Value;
  local_958._0_4_ = local_9b0;
  local_5b8.Rotation.XY.m128d_f64[1]._0_4_ = uVar29;
  local_5b8.Rotation.XY.m128d_f64[0] = (double)fVar5;
  local_5b8.Rotation.XY.m128d_f64[1]._4_4_ = uVar30;
  local_5b8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar27;
  local_5b8.Rotation.ZW.m128d_f64[0] = (double)fVar3;
  local_5b8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar28;
  local_5b8.Translation.XY.m128d_f64[0] = dVar10;
  local_5b8.Translation.XY.m128d_f64[1] = dVar8;
  local_5b8.Translation.ZW.m128d_f64[0] = 0.0;
  local_5b8.Translation.ZW.m128d_f64[1] = 0.0;
  local_5b8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar25;
  local_5b8.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_5b8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar26;
  local_5b8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar23;
  local_5b8.Scale3D.ZW.m128d_f64[0] = (double)fVar4;
  local_5b8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar24;
  local_958.Name.Number = 0;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar14,&local_948,*pFVar16,&local_958,&local_5b8,true,User,
             false,false);
  pUVar14 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar14 == (URigHierarchy *)0x0) {
LAB_14a472b25:
    pUVar14 = pUVar20;
  }
  else {
    pUVar15 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar15->_padding_)) goto LAB_14a472b25;
  }
  dVar8 = _UNK_15076ace8;
  dVar10 = ___xmm_00000000000000004000000000000000;
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[0];
  uVar27 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar28 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  uVar25 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar26 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar23 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar24 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_4f8._8_4_ = uVar27;
  local_4f8._0_8_ = (double)fVar6;
  local_4f8._12_4_ = uVar28;
  local_4a8._8_4_ = uVar23;
  local_4a8._0_8_ = (double)fVar4;
  local_4a8._12_4_ = uVar24;
  local_4e8._8_4_ = uVar25;
  local_4e8._0_8_ = (double)fVar3;
  local_4e8._12_4_ = uVar26;
  local_4d8 = ___xmm_00000000000000004000000000000000;
  dStack_4d0 = _UNK_15076ace8;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4b8 = (double)fVar7;
  dStack_4b0 = (double)fVar5;
  pFVar16 = ::FName::FName(&local_7c0,L"BoneA");
  local_618.Rotation.XY.m128d_f64[1]._0_4_ = uVar27;
  local_618.Rotation.XY.m128d_f64[0] = (double)fVar6;
  local_618.Rotation.XY.m128d_f64[1]._4_4_ = uVar28;
  local_618.Rotation.ZW.m128d_f64[1]._0_4_ = uVar25;
  local_618.Rotation.ZW.m128d_f64[0] = (double)fVar3;
  local_618.Rotation.ZW.m128d_f64[1]._4_4_ = uVar26;
  local_618.Translation.XY.m128d_f64[0] = dVar10;
  local_618.Translation.XY.m128d_f64[1] = dVar8;
  local_618.Translation.ZW.m128d_f64[0] = 0.0;
  local_618.Translation.ZW.m128d_f64[1] = 0.0;
  local_618.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar23;
  local_618.Scale3D.ZW.m128d_f64[0] = (double)fVar4;
  local_618.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar24;
  local_938.Type = local_948.Type;
  local_938._1_3_ = local_948._1_3_;
  local_938.Name.ComparisonIndex.Value = local_948.Name.ComparisonIndex.Value;
  local_938.Name.Number = local_948.Name.Number;
  local_618.Scale3D.XY.m128d_f64[0] = (double)fVar7;
  local_618.Scale3D.XY.m128d_f64[1] = (double)fVar5;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar14,&local_928,*pFVar16,&local_938,&local_618,true,User,
             false,false);
  pUVar14 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar14 == (URigHierarchy *)0x0) {
LAB_14a472c3f:
    pUVar14 = pUVar20;
  }
  else {
    pUVar15 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar15->_padding_)) goto LAB_14a472c3f;
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[0];
  uVar27 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar28 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  uVar25 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar26 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar23 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar24 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_438._8_4_ = uVar27;
  local_438._0_8_ = (double)fVar6;
  local_438._12_4_ = uVar28;
  local_3e8._8_4_ = uVar23;
  local_3e8._0_8_ = (double)fVar4;
  local_3e8._12_4_ = uVar24;
  local_428._8_4_ = uVar25;
  local_428._0_8_ = (double)fVar3;
  local_428._12_4_ = uVar26;
  local_418 = dVar10;
  dStack_410 = dVar8;
  local_408 = 0;
  uStack_400 = 0;
  local_3f8 = (double)fVar7;
  dStack_3f0 = (double)fVar5;
  pFVar16 = ::FName::FName(&local_7b8,L"BoneB");
  local_678.Rotation.XY.m128d_f64[1]._0_4_ = uVar27;
  local_678.Rotation.XY.m128d_f64[0] = (double)fVar6;
  local_678.Rotation.XY.m128d_f64[1]._4_4_ = uVar28;
  local_678.Rotation.ZW.m128d_f64[1]._0_4_ = uVar25;
  local_678.Rotation.ZW.m128d_f64[0] = (double)fVar3;
  local_678.Rotation.ZW.m128d_f64[1]._4_4_ = uVar26;
  local_678.Translation.XY.m128d_f64[0] = dVar10;
  local_678.Translation.XY.m128d_f64[1] = dVar8;
  local_678.Translation.ZW.m128d_f64[0] = 0.0;
  local_678.Translation.ZW.m128d_f64[1] = 0.0;
  local_678.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar23;
  local_678.Scale3D.ZW.m128d_f64[0] = (double)fVar4;
  local_678.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar24;
  local_918.Type = local_928.Type;
  local_918._1_3_ = local_928._1_3_;
  local_918.Name.ComparisonIndex.Value = local_928.Name.ComparisonIndex.Value;
  local_918.Name.Number = local_928.Name.Number;
  local_678.Scale3D.XY.m128d_f64[0] = (double)fVar7;
  local_678.Scale3D.XY.m128d_f64[1] = (double)fVar5;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar14,&local_908,*pFVar16,&local_918,&local_678,true,User,
             false,false);
  pUVar14 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar14 == (URigHierarchy *)0x0) {
LAB_14a472d50:
    pUVar14 = pUVar20;
  }
  else {
    pUVar15 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar15->_padding_)) goto LAB_14a472d50;
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[0];
  uVar27 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar28 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  uVar25 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar26 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar23 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar24 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_3d8._8_4_ = uVar27;
  local_3d8._0_8_ = (double)fVar6;
  local_3d8._12_4_ = uVar28;
  local_388._8_4_ = uVar23;
  local_388._0_8_ = (double)fVar4;
  local_388._12_4_ = uVar24;
  local_3c8._8_4_ = uVar25;
  local_3c8._0_8_ = (double)fVar3;
  local_3c8._12_4_ = uVar26;
  local_3b8 = dVar10;
  dStack_3b0 = dVar8;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_398 = (double)fVar7;
  dStack_390 = (double)fVar5;
  pFVar16 = ::FName::FName(&local_7b0,L"BoneC");
  local_6d8.Rotation.XY.m128d_f64[1]._0_4_ = uVar27;
  local_6d8.Rotation.XY.m128d_f64[0] = (double)fVar6;
  local_6d8.Rotation.XY.m128d_f64[1]._4_4_ = uVar28;
  local_6d8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar25;
  local_6d8.Rotation.ZW.m128d_f64[0] = (double)fVar3;
  local_6d8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar26;
  local_6d8.Translation.XY.m128d_f64[0] = dVar10;
  local_6d8.Translation.XY.m128d_f64[1] = dVar8;
  local_6d8.Translation.ZW.m128d_f64[0] = 0.0;
  local_6d8.Translation.ZW.m128d_f64[1] = 0.0;
  local_6d8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar23;
  local_6d8.Scale3D.ZW.m128d_f64[0] = (double)fVar4;
  local_6d8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar24;
  local_988.Type = local_908.Type;
  local_988._1_3_ = local_908._1_3_;
  local_988.Name.ComparisonIndex.Value = local_908.Name.ComparisonIndex.Value;
  local_988.Name.Number = local_908.Name.Number;
  local_6d8.Scale3D.XY.m128d_f64[0] = (double)fVar7;
  local_6d8.Scale3D.XY.m128d_f64[1] = (double)fVar5;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar14,&local_978,*pFVar16,&local_988,&local_6d8,true,User,
             false,false);
  pUVar14 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar14 == (URigHierarchy *)0x0) {
LAB_14a472e61:
    pUVar14 = pUVar20;
  }
  else {
    pUVar15 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar15->_padding_)) goto LAB_14a472e61;
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[0];
  uVar27 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar28 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  uVar25 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar26 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar23 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar24 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_378._8_4_ = uVar27;
  local_378._0_8_ = (double)fVar6;
  local_378._12_4_ = uVar28;
  local_328._8_4_ = uVar23;
  local_328._0_8_ = (double)fVar4;
  local_328._12_4_ = uVar24;
  local_368._8_4_ = uVar25;
  local_368._0_8_ = (double)fVar3;
  local_368._12_4_ = uVar26;
  local_358 = dVar10;
  dStack_350 = dVar8;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = (double)fVar7;
  dStack_330 = (double)fVar5;
  pFVar16 = ::FName::FName(&local_7a8,L"BoneD");
  local_558.Rotation.XY.m128d_f64[1]._0_4_ = uVar27;
  local_558.Rotation.XY.m128d_f64[0] = (double)fVar6;
  local_558.Rotation.XY.m128d_f64[1]._4_4_ = uVar28;
  local_558.Rotation.ZW.m128d_f64[1]._0_4_ = uVar25;
  local_558.Rotation.ZW.m128d_f64[0] = (double)fVar3;
  local_558.Rotation.ZW.m128d_f64[1]._4_4_ = uVar26;
  local_558.Translation.XY.m128d_f64[0] = dVar10;
  local_558.Translation.XY.m128d_f64[1] = dVar8;
  local_558.Translation.ZW.m128d_f64[0] = 0.0;
  local_558.Translation.ZW.m128d_f64[1] = 0.0;
  local_558.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar23;
  local_558.Scale3D.ZW.m128d_f64[0] = (double)fVar4;
  local_558.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar24;
  local_968.Type = local_978.Type;
  local_968._1_3_ = local_978._1_3_;
  local_968.Name.ComparisonIndex.Value = local_978.Name.ComparisonIndex.Value;
  local_968.Name.Number = local_978.Name.Number;
  local_558.Scale3D.XY.m128d_f64[0] = (double)fVar7;
  local_558.Scale3D.XY.m128d_f64[1] = (double)fVar5;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar14,&local_6e8,*pFVar16,&local_968,&local_558,true,User,
             false,false);
  ::FName::FName(&local_9a4,L"Root");
  (this->Unit).StartBone = local_9a4;
  ::FName::FName(local_99c,L"BoneD");
  pTVar1 = &(this->Unit).Rotations;
  (this->Unit).EndBone = local_99c[0];
  pFVar19 = (pTVar1->AllocatorInstance).Data;
  local_9f8 = UE::Math::TQuat<double>::Identity.X;
  dStack_9f0 = UE::Math::TQuat<double>::Identity.Y;
  local_9e8 = UE::Math::TQuat<double>::Identity.Z;
  dStack_9e0 = UE::Math::TQuat<double>::Identity.W;
  local_9d8 = 0;
  if ((pFVar19 <= (FScriptContainerElement *)&local_9f8) &&
     ((FScriptContainerElement *)&local_9f8 <
      pFVar19 + (longlong)(this->Unit).Rotations.ArrayMax * 0x30)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
  }
  iVar13 = (this->Unit).Rotations.ArrayNum;
  if (iVar13 == (this->Unit).Rotations.ArrayMax) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1030,&pTVar1->AllocatorInstance,&(this->Unit).Rotations.ArrayMax);
  }
  (this->Unit).Rotations.ArrayNum = iVar13 + 1;
  pFVar19 = (pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 0x30;
  *(double *)pFVar19 = local_9f8;
  *(double *)(pFVar19 + 8) = dStack_9f0;
  *(double *)(pFVar19 + 0x10) = local_9e8;
  *(double *)(pFVar19 + 0x18) = dStack_9e0;
  *(ulonglong *)(pFVar19 + 0x20) = CONCAT44(uStack_9d4,local_9d8);
  *(double *)(pFVar19 + 0x28) = dStack_9d0;
  pFVar19 = (pTVar1->AllocatorInstance).Data;
  local_9f8 = UE::Math::TQuat<double>::Identity.X;
  dStack_9f0 = UE::Math::TQuat<double>::Identity.Y;
  local_9e8 = UE::Math::TQuat<double>::Identity.Z;
  dStack_9e0 = UE::Math::TQuat<double>::Identity.W;
  local_9d8 = 0x3f800000;
  if ((pFVar19 <= (FScriptContainerElement *)&local_9f8) &&
     ((FScriptContainerElement *)&local_9f8 <
      pFVar19 + (longlong)(this->Unit).Rotations.ArrayMax * 0x30)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
  }
  iVar13 = (this->Unit).Rotations.ArrayNum;
  if (iVar13 == (this->Unit).Rotations.ArrayMax) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1030,&pTVar1->AllocatorInstance,&(this->Unit).Rotations.ArrayMax);
  }
  (this->Unit).Rotations.ArrayNum = iVar13 + 1;
  pFVar19 = (pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 0x30;
  *(double *)pFVar19 = local_9f8;
  *(double *)(pFVar19 + 8) = dStack_9f0;
  *(double *)(pFVar19 + 0x10) = local_9e8;
  *(double *)(pFVar19 + 0x18) = dStack_9e0;
  *(ulonglong *)(pFVar19 + 0x20) = CONCAT44(uStack_9d4,local_9d8);
  *(double *)(pFVar19 + 0x28) = dStack_9d0;
  local_7a0._s_0.X = ___xmm_40568000000000000000000000000000;
  local_7a0._s_0.Y = _UNK_1513b2f18;
  local_7a0._s_0.Z = 0.0;
  pTVar17 = AnimationCore::QuatFromEuler(&local_298,(TVector<double> *)&local_7a0._s_0,XYZ,false);
  fVar3 = __real_3f000000;
  pFVar19 = (pTVar1->AllocatorInstance).Data;
  local_9f8 = pTVar17->X;
  dStack_9f0 = pTVar17->Y;
  local_9e8 = pTVar17->Z;
  dStack_9e0 = pTVar17->W;
  local_9d8 = 0x3f000000;
  if ((pFVar19 <= (FScriptContainerElement *)&local_9f8) &&
     ((FScriptContainerElement *)&local_9f8 <
      pFVar19 + (longlong)(this->Unit).Rotations.ArrayMax * 0x30)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
  }
  iVar13 = (this->Unit).Rotations.ArrayNum;
  if (iVar13 == (this->Unit).Rotations.ArrayMax) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1030,&pTVar1->AllocatorInstance,&(this->Unit).Rotations.ArrayMax);
  }
  (this->Unit).Rotations.ArrayNum = iVar13 + 1;
  pFVar19 = (pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 0x30;
  *(double *)pFVar19 = local_9f8;
  *(double *)(pFVar19 + 8) = dStack_9f0;
  *(double *)(pFVar19 + 0x10) = local_9e8;
  *(double *)(pFVar19 + 0x18) = dStack_9e0;
  *(ulonglong *)(pFVar19 + 0x20) = CONCAT44(uStack_9d4,local_9d8);
  *(double *)(pFVar19 + 0x28) = dStack_9d0;
  FRigUnit_DistributeRotation::Execute(&this->Unit,(FControlRigExecuteContext *)this->_padding_);
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_8a8,L"unexpected bone a");
  if ((this->Unit).WorkData.ItemRotationA.ArrayNum < 1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
  }
  (*pcVar2)(this,*(int *)(this->Unit).WorkData.ItemRotationA.AllocatorInstance.Data == 0,&local_8a8)
  ;
  if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_898,L"unexpected bone b");
  if ((this->Unit).WorkData.ItemRotationB.ArrayNum < 1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
  }
  (*pcVar2)(this,*(int *)(this->Unit).WorkData.ItemRotationB.AllocatorInstance.Data == 0,&local_898)
  ;
  if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_898.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_888,L"unexpected bone t");
  if ((this->Unit).WorkData.ItemRotationT.ArrayNum < 1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
  }
  fVar4 = __real_3a83126f;
  (*pcVar2)(this,(float)(*(uint *)(this->Unit).WorkData.ItemRotationT.AllocatorInstance.Data &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_3a83126f,&local_888);
  if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_888.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_878,L"unexpected bone a");
  if ((this->Unit).WorkData.ItemRotationA.ArrayNum < 2) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
  }
  (*pcVar2)(this,*(int *)((this->Unit).WorkData.ItemRotationA.AllocatorInstance.Data + 4) == 0,
            &local_878);
  if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_878.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_868,L"unexpected bone b");
  if ((this->Unit).WorkData.ItemRotationB.ArrayNum < 2) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
  }
  (*pcVar2)(this,*(int *)((this->Unit).WorkData.ItemRotationB.AllocatorInstance.Data + 4) == 2,
            &local_868);
  if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_868.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_858,L"unexpected bone t");
  if ((this->Unit).WorkData.ItemRotationT.ArrayNum < 2) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
  }
  (*pcVar2)(this,(float)((uint)(*(float *)((this->Unit).WorkData.ItemRotationT.AllocatorInstance.
                                           Data + 4) - fVar3) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar4,&local_858);
  if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_858.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_848,L"unexpected bone a");
  if ((this->Unit).WorkData.ItemRotationA.ArrayNum < 3) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
  }
  (*pcVar2)(this,*(int *)((this->Unit).WorkData.ItemRotationA.AllocatorInstance.Data + 8) == 2,
            &local_848);
  if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_848.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_838,L"unexpected bone b");
  if ((this->Unit).WorkData.ItemRotationB.ArrayNum < 3) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
  }
  (*pcVar2)(this,*(int *)((this->Unit).WorkData.ItemRotationB.AllocatorInstance.Data + 8) == 2,
            &local_838);
  if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_838.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_828,L"unexpected bone t");
  if ((this->Unit).WorkData.ItemRotationT.ArrayNum < 3) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
  }
  (*pcVar2)(this,(float)(*(uint *)((this->Unit).WorkData.ItemRotationT.AllocatorInstance.Data + 8) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar4,&local_828);
  if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_828.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_818,L"unexpected bone a");
  if ((this->Unit).WorkData.ItemRotationA.ArrayNum < 4) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
  }
  (*pcVar2)(this,*(int *)((this->Unit).WorkData.ItemRotationA.AllocatorInstance.Data + 0xc) == 2,
            &local_818);
  if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_818.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_808,L"unexpected bone b");
  if ((this->Unit).WorkData.ItemRotationB.ArrayNum < 4) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
  }
  (*pcVar2)(this,*(int *)((this->Unit).WorkData.ItemRotationB.AllocatorInstance.Data + 0xc) == 1,
            &local_808);
  if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_808.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_7f8,L"unexpected bone t");
  if ((this->Unit).WorkData.ItemRotationT.ArrayNum < 4) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
  }
  (*pcVar2)(this,(float)((uint)(*(float *)((this->Unit).WorkData.ItemRotationT.AllocatorInstance.
                                           Data + 0xc) - fVar3) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar4,&local_7f8);
  if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_7e8,L"unexpected bone a");
  if ((this->Unit).WorkData.ItemRotationA.ArrayNum < 5) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
  }
  (*pcVar2)(this,*(int *)((this->Unit).WorkData.ItemRotationA.AllocatorInstance.Data + 0x10) == 1,
            &local_7e8);
  if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_7d8,L"unexpected bone b");
  if ((this->Unit).WorkData.ItemRotationB.ArrayNum < 5) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
  }
  (*pcVar2)(this,*(int *)((this->Unit).WorkData.ItemRotationB.AllocatorInstance.Data + 0x10) == 1,
            &local_7d8);
  if (local_7d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_9c8,L"unexpected bone t");
  if ((this->Unit).WorkData.ItemRotationT.ArrayNum < 5) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
  }
  (*pcVar2)(this,(float)(*(uint *)((this->Unit).WorkData.ItemRotationT.AllocatorInstance.Data + 0x10
                                  ) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar4);
  if (local_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9c8.Data.AllocatorInstance.Data);
  }
  pUVar14 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar14 == (URigHierarchy *)0x0) {
LAB_14a473aa2:
    pUVar14 = pUVar20;
  }
  else {
    pUVar15 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar15->_padding_)) goto LAB_14a473aa2;
  }
  URigHierarchy::GetLocalTransformByIndex(pUVar14,&local_278,0,false);
  local_788.X = local_278.Rotation.XY.m128d_f64[0];
  local_788.Y = local_278.Rotation.XY.m128d_f64[1];
  local_788.Z = local_278.Rotation.ZW.m128d_f64[0];
  local_788.W = local_278.Rotation.ZW.m128d_f64[1];
  pTVar18 = AnimationCore::EulerFromQuat(&local_2b8,&local_788,XYZ,false);
  uVar21 = *(uint *)((longlong)&pTVar18->field0_0x0 + 8);
  uVar22 = *(uint *)((longlong)&pTVar18->field0_0x0 + 0xc);
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_8f8,L"unexpected rotation Y");
  dVar10 = __real_3fb999999999999a;
  uVar21 = uVar21 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar22 = uVar22 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  (*pcVar2)(this,(double)CONCAT44(uVar22,uVar21) < __real_3fb999999999999a ||
                 (double)CONCAT44(uVar22,uVar21) == __real_3fb999999999999a,&local_8f8);
  if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
  }
  pUVar14 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar14 == (URigHierarchy *)0x0) {
LAB_14a473b74:
    pUVar14 = pUVar20;
  }
  else {
    pUVar15 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar15->_padding_)) goto LAB_14a473b74;
  }
  URigHierarchy::GetLocalTransformByIndex(pUVar14,&local_218,1,false);
  local_768.X = local_218.Rotation.XY.m128d_f64[0];
  local_768.Y = local_218.Rotation.XY.m128d_f64[1];
  local_768.Z = local_218.Rotation.ZW.m128d_f64[0];
  local_768.W = local_218.Rotation.ZW.m128d_f64[1];
  pTVar18 = AnimationCore::EulerFromQuat(&local_2d0,&local_768,XYZ,false);
  dVar8 = (pTVar18->field0_0x0)._s_0.Y;
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_8e8,L"unexpected rotation Y");
  dVar9 = __real_4046800000000000;
  dVar8 = dVar8 - __real_4046800000000000;
  uVar21 = SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar22 = (uint)((ulonglong)dVar8 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  (*pcVar2)(this,(double)CONCAT44(uVar22,uVar21) < dVar10 ||
                 (double)CONCAT44(uVar22,uVar21) == dVar10,&local_8e8);
  if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
  }
  pUVar14 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar14 == (URigHierarchy *)0x0) {
LAB_14a473c4f:
    pUVar14 = pUVar20;
  }
  else {
    pUVar15 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar15->_padding_)) goto LAB_14a473c4f;
  }
  URigHierarchy::GetLocalTransformByIndex(pUVar14,&local_1b8,2,false);
  local_748.X = local_1b8.Rotation.XY.m128d_f64[0];
  local_748.Y = local_1b8.Rotation.XY.m128d_f64[1];
  local_748.Z = local_1b8.Rotation.ZW.m128d_f64[0];
  local_748.W = local_1b8.Rotation.ZW.m128d_f64[1];
  pTVar18 = AnimationCore::EulerFromQuat(&local_2e8,&local_748,XYZ,false);
  dVar8 = (pTVar18->field0_0x0)._s_0.Y;
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_8d8,L"unexpected rotation Y");
  dVar8 = dVar8 - __real_4056800000000000;
  uVar21 = SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar22 = (uint)((ulonglong)dVar8 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  (*pcVar2)(this,(double)CONCAT44(uVar22,uVar21) < dVar10 ||
                 (double)CONCAT44(uVar22,uVar21) == dVar10,&local_8d8);
  if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
  }
  pUVar14 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar14 == (URigHierarchy *)0x0) {
LAB_14a473d24:
    pUVar14 = pUVar20;
  }
  else {
    pUVar15 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar15->_padding_)) goto LAB_14a473d24;
  }
  URigHierarchy::GetLocalTransformByIndex(pUVar14,&local_158,3,false);
  local_728.X = local_158.Rotation.XY.m128d_f64[0];
  local_728.Y = local_158.Rotation.XY.m128d_f64[1];
  local_728.Z = local_158.Rotation.ZW.m128d_f64[0];
  local_728.W = local_158.Rotation.ZW.m128d_f64[1];
  pTVar18 = AnimationCore::EulerFromQuat(&local_300,&local_728,XYZ,false);
  dVar8 = (pTVar18->field0_0x0)._s_0.Y;
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_8c8,L"unexpected rotation Y");
  dVar8 = dVar8 - dVar9;
  uVar21 = SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar22 = (uint)((ulonglong)dVar8 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  (*pcVar2)(this,(double)CONCAT44(uVar22,uVar21) < dVar10 ||
                 (double)CONCAT44(uVar22,uVar21) == dVar10,&local_8c8);
  if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
  }
  pUVar14 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar14 != (URigHierarchy *)0x0) {
    pUVar15 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((iVar13 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
        &pUVar15->_padding_)) goto LAB_14a473e02;
  }
  pUVar14 = pUVar20;
LAB_14a473e02:
  URigHierarchy::GetLocalTransformByIndex(pUVar14,&local_f8,4,false);
  local_708.X = local_f8.Rotation.XY.m128d_f64[0];
  local_708.Y = local_f8.Rotation.XY.m128d_f64[1];
  local_708.Z = local_f8.Rotation.ZW.m128d_f64[0];
  local_708.W = local_f8.Rotation.ZW.m128d_f64[1];
  pTVar18 = AnimationCore::EulerFromQuat(&local_318,&local_708,XYZ,false);
  uVar21 = *(uint *)((longlong)&pTVar18->field0_0x0 + 8);
  uVar22 = *(uint *)((longlong)&pTVar18->field0_0x0 + 0xc);
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_8b8,L"unexpected rotation Y");
  uVar21 = uVar21 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar22 = uVar22 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  (*pcVar2)(this,(double)CONCAT44(uVar22,uVar21) < dVar10 ||
                 (double)CONCAT44(uVar22,uVar21) == dVar10,&local_8b8,0);
  if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a473f40

FString * __thiscall
FRigUnit_DistributeRotationTest::GetBeautifiedTestName
          (FRigUnit_DistributeRotationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_DistributeRotation");
  return __return_storage_ptr__;
}

