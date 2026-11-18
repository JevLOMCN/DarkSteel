// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a4a9d20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EAutomationTestFlags __thiscall
FRigUnit_PositionConstraintLocalSpaceOffsetTest::GetTestFlags
          (FRigUnit_PositionConstraintLocalSpaceOffsetTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4a9e10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_PositionConstraintLocalSpaceOffsetTest::IsStressTest
          (FRigUnit_PositionConstraintLocalSpaceOffsetTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4a9e70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall
FRigUnit_PositionConstraintLocalSpaceOffsetTest::GetRequiredDeviceNum
          (FRigUnit_PositionConstraintLocalSpaceOffsetTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4a9e90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_PositionConstraintLocalSpaceOffsetTest::GetTestSourceFileName
          (FRigUnit_PositionConstraintLocalSpaceOffsetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Highlevel\\Hierarchy\\RigUnit_TransformConstraint.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4a9ed0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
FRigUnit_PositionConstraintLocalSpaceOffsetTest::GetTestSourceFileLine
          (FRigUnit_PositionConstraintLocalSpaceOffsetTest *this)

{
  return 0x3ae;
}

// GetTests @ 14a4a9f40

/* WARNING: Removing unreachable block (ram,0x00014a4aa02d) */
/* WARNING: Removing unreachable block (ram,0x00014a4aa0f8) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_PositionConstraintLocalSpaceOffsetTest::GetTests
          (FRigUnit_PositionConstraintLocalSpaceOffsetTest *this,
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
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_PositionConstraintLocalSpaceOffset");
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

// RunTest @ 14a4aa320

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_PositionConstraintLocalSpaceOffsetTest::RunTest
          (FRigUnit_PositionConstraintLocalSpaceOffsetTest *this,FString *param_1)

{
  TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined8 uVar7;
  FRigBaseElement *pFVar8;
  undefined3 uVar9;
  FNameEntryId FVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  URigHierarchy *this_00;
  UClass *pUVar14;
  FRigUnit_PositionConstraintLocalSpaceOffset *pFVar15;
  FRigUnit_PositionConstraintLocalSpaceOffset local_88;
  
  (**(code **)(*(longlong *)this + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar14 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar5 = (int)pUVar14->_padding_;
    if ((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar14->_padding_)) goto LAB_14a4aa387;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4aa387:
  URigHierarchy::Reset(this_00);
  pFVar15 = FRigUnit_PositionConstraintLocalSpaceOffset::FRigUnit_PositionConstraintLocalSpaceOffset
                      (&local_88);
  pTVar3 = &(this->Unit).Parents;
  uVar9 = *(undefined3 *)&(pFVar15->Child).field_0x1;
  FVar10.Value = (pFVar15->Child).Name.ComparisonIndex.Value;
  pTVar1 = &pFVar15->Parents;
  (this->Unit).Child.Type = (pFVar15->Child).Type;
  *(undefined3 *)&(this->Unit).Child.field_0x1 = uVar9;
  (this->Unit).Child.Name.ComparisonIndex = (FNameEntryId)FVar10.Value;
  (this->Unit).Child.Name.Number = (pFVar15->Child).Name.Number;
  (this->Unit).bMaintainOffset = pFVar15->bMaintainOffset;
  bVar11 = (pFVar15->Filter).bY;
  (this->Unit).Filter.bX = (pFVar15->Filter).bX;
  (this->Unit).Filter.bY = bVar11;
  (this->Unit).Filter.bZ = (pFVar15->Filter).bZ;
  if (pTVar3 != pTVar1) {
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Unit).Parents.ArrayNum = (pFVar15->Parents).ArrayNum;
    (this->Unit).Parents.ArrayMax = (pFVar15->Parents).ArrayMax;
    (pFVar15->Parents).ArrayNum = 0;
    (pFVar15->Parents).ArrayMax = 0;
  }
  pTVar2 = &pFVar15->ParentCaches;
  (this->Unit).Weight = pFVar15->Weight;
  uVar9 = *(undefined3 *)&(pFVar15->ChildCache).Key.field_0x1;
  FVar10.Value = (pFVar15->ChildCache).Key.Name.ComparisonIndex.Value;
  uVar7 = *(undefined8 *)&(pFVar15->ChildCache).Key.Name.Number;
  (this->Unit).ChildCache.Key.Type = (pFVar15->ChildCache).Key.Type;
  *(undefined3 *)&(this->Unit).ChildCache.Key.field_0x1 = uVar9;
  (this->Unit).ChildCache.Key.Name.ComparisonIndex = (FNameEntryId)FVar10.Value;
  *(undefined8 *)&(this->Unit).ChildCache.Key.Name.Number = uVar7;
  uVar12 = *(undefined4 *)&(pFVar15->ChildCache).field_0x14;
  pFVar8 = (pFVar15->ChildCache).Element;
  pTVar4 = &(this->Unit).ParentCaches;
  (this->Unit).ChildCache.ContainerVersion = (pFVar15->ChildCache).ContainerVersion;
  *(undefined4 *)&(this->Unit).ChildCache.field_0x14 = uVar12;
  (this->Unit).ChildCache.Element = pFVar8;
  if (pTVar4 != pTVar2) {
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Unit).ParentCaches.ArrayNum = (pFVar15->ParentCaches).ArrayNum;
    (this->Unit).ParentCaches.ArrayMax = (pFVar15->ParentCaches).ArrayMax;
    (pFVar15->ParentCaches).ArrayNum = 0;
    (pFVar15->ParentCaches).ArrayMax = 0;
  }
  if (local_88.ParentCaches.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.ParentCaches.AllocatorInstance.Data);
  }
  if (local_88.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Parents.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x00014a4aa4a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar13 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar13;
}

// RunControlRigUnitTest @ 14a4aa5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_PositionConstraintLocalSpaceOffsetTest::RunControlRigUnitTest
          (FRigUnit_PositionConstraintLocalSpaceOffsetTest *this,FString *param_1)

{
  int *piVar1;
  undefined1 *this_00;
  TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *this_01;
  FRigElementKey *pFVar3;
  FControlRigExecuteContext *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  URigHierarchy *pUVar20;
  UClass *pUVar21;
  FName *pFVar22;
  FScriptContainerElement *pFVar23;
  URigHierarchy *pUVar24;
  TQuat<double> *pTVar25;
  undefined8 uVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStackY_b18 [32];
  FRigElementKey local_ac8;
  undefined4 uStack_abc;
  FRigElementKey local_ab8;
  undefined4 uStack_aac;
  FRigElementKey local_aa8;
  undefined4 uStack_a9c;
  FRigElementKey local_a98;
  undefined4 uStack_a8c;
  FRigElementKey local_a88;
  undefined4 uStack_a7c;
  undefined4 local_a78;
  FNameEntryId FStack_a74;
  uint uStack_a70;
  uint local_a6c;
  FNameEntryId FStack_a68;
  undefined4 uStack_a64;
  uint local_a60;
  FNameEntryId FStack_a5c;
  undefined4 uStack_a58;
  undefined4 local_a54;
  FNameEntryId FStack_a50;
  uint uStack_a4c;
  uint local_a48;
  FNameEntryId FStack_a44;
  undefined4 uStack_a40;
  uint local_a3c;
  FNameEntryId FStack_a38;
  undefined4 uStack_a34;
  uint local_a30;
  FNameEntryId FStack_a2c;
  undefined4 uStack_a28;
  FName local_a24;
  FRigElementKey local_a18;
  FRigElementKey local_a08;
  FRigElementKey local_9f8;
  FRigElementKey local_9e8;
  FName local_9d8 [2];
  FRigElementKey local_9c8;
  FRigElementKey local_9b8;
  FRigElementKey local_9a8;
  FRigElementKey local_998;
  FRigElementKey local_988;
  FRigElementKey local_978;
  FRigElementKey local_968;
  FRigElementKey local_958;
  FRigElementKey local_948;
  FRigElementKey local_938;
  FString local_928;
  FString local_918;
  FString local_908;
  FName local_8f8;
  FName local_8f0;
  FName local_8e8;
  FName local_8e0;
  FName local_8d8;
  FName local_8d0;
  FName local_8c8;
  double local_8c0;
  double dStack_8b8;
  double local_8b0;
  double local_8a8;
  double dStack_8a0;
  double local_898;
  TVector<double>_u_0 local_890;
  double local_868;
  TTransform<double> local_858;
  TTransform<double> local_7f8;
  TTransform<double> local_798;
  TTransform<double> local_738;
  TTransform<double> local_6d8;
  TTransform<double> local_678;
  TTransform<double> local_618;
  TTransform<double> local_5b8;
  TTransform<double> local_558;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  double dStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  double local_498;
  double dStack_490;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  TQuat<double> local_1f8;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_b18;
  this_00 = &this->field_0x5f8;
  pUVar20 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  pUVar24 = (URigHierarchy *)0x0;
  if (pUVar20 == (URigHierarchy *)0x0) {
LAB_14a4aa676:
    pUVar20 = pUVar24;
  }
  else {
    pUVar21 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar19 = (int)pUVar21->_padding_;
    if ((*(int *)(pUVar20->_padding_ + 0x38) < iVar19) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
        &pUVar21->_padding_)) goto LAB_14a4aa676;
  }
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[1];
  local_a48 = local_a48 & 0xffffff00;
  FStack_a44.Value = 0;
  uStack_a40 = 0;
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[0];
  uVar30 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar31 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar28 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar29 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_4a8._8_4_ = uVar28;
  local_4a8._0_8_ = (double)fVar7;
  local_4a8._12_4_ = uVar29;
  local_4d8 = 0;
  uStack_4d0 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4b8._8_4_ = uVar30;
  local_4b8._0_8_ = (double)fVar11;
  local_4b8._12_4_ = uVar31;
  local_4f8 = (double)fVar10;
  dStack_4f0 = (double)fVar8;
  local_4e8 = (double)fVar6;
  dStack_4e0 = (double)fVar9;
  pFVar22 = ::FName::FName(&local_8f8,L"Child");
  local_9c8.Name.ComparisonIndex.Value = FStack_a44.Value;
  local_9c8._0_4_ = local_a48;
  local_7f8.Translation.XY.m128d_f64[0] = 0.0;
  local_7f8.Translation.XY.m128d_f64[1] = 0.0;
  local_7f8.Translation.ZW.m128d_f64[0] = 0.0;
  local_7f8.Translation.ZW.m128d_f64[1] = 0.0;
  local_7f8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar30;
  local_7f8.Scale3D.XY.m128d_f64[0] = (double)fVar11;
  local_7f8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar31;
  local_7f8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar28;
  local_7f8.Scale3D.ZW.m128d_f64[0] = (double)fVar7;
  local_7f8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar29;
  local_9c8.Name.Number = 0;
  local_7f8.Rotation.XY.m128d_f64[0] = (double)fVar10;
  local_7f8.Rotation.XY.m128d_f64[1] = (double)fVar8;
  local_7f8.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_7f8.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar20,&local_988,*pFVar22,&local_9c8,&local_7f8,true,User,
             false,false);
  pUVar20 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar20 == (URigHierarchy *)0x0) {
LAB_14a4aa78d:
    pUVar20 = pUVar24;
  }
  else {
    pUVar21 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar19 = (int)pUVar21->_padding_;
    if ((*(int *)(pUVar20->_padding_ + 0x38) < iVar19) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
        &pUVar21->_padding_)) goto LAB_14a4aa78d;
  }
  dVar16 = _UNK_151444f88;
  dVar15 = ___xmm_40340000000000004034000000000000;
  dVar14 = _UNK_151444f48;
  dVar27 = ___xmm_00000000000000004034000000000000;
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[1];
  local_a3c = local_a3c & 0xffffff00;
  FStack_a38.Value = 0;
  uStack_a34 = 0;
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[0];
  uVar30 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar31 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar28 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar29 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_448._8_4_ = uVar28;
  local_448._0_8_ = (double)fVar7;
  local_448._12_4_ = uVar29;
  local_478 = ___xmm_40340000000000004034000000000000;
  dStack_470 = _UNK_151444f88;
  local_468 = ___xmm_00000000000000004034000000000000;
  dStack_460 = _UNK_151444f48;
  local_458._8_4_ = uVar30;
  local_458._0_8_ = (double)fVar11;
  local_458._12_4_ = uVar31;
  local_498 = (double)fVar10;
  dStack_490 = (double)fVar8;
  local_488 = (double)fVar6;
  dStack_480 = (double)fVar9;
  pFVar22 = ::FName::FName(&local_8f0,L"Parent1");
  local_9b8.Name.ComparisonIndex.Value = FStack_a38.Value;
  local_9b8._0_4_ = local_a3c;
  local_798.Translation.XY.m128d_f64[0] = dVar15;
  local_798.Translation.XY.m128d_f64[1] = dVar16;
  local_798.Translation.ZW.m128d_f64[0] = dVar27;
  local_798.Translation.ZW.m128d_f64[1] = dVar14;
  local_798.Scale3D.XY.m128d_f64[1]._0_4_ = uVar30;
  local_798.Scale3D.XY.m128d_f64[0] = (double)fVar11;
  local_798.Scale3D.XY.m128d_f64[1]._4_4_ = uVar31;
  local_798.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar28;
  local_798.Scale3D.ZW.m128d_f64[0] = (double)fVar7;
  local_798.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar29;
  local_9b8.Name.Number = 0;
  local_798.Rotation.XY.m128d_f64[0] = (double)fVar10;
  local_798.Rotation.XY.m128d_f64[1] = (double)fVar8;
  local_798.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_798.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar20,&local_978,*pFVar22,&local_9b8,&local_798,true,User,
             false,false);
  pUVar20 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar20 == (URigHierarchy *)0x0) {
LAB_14a4aa8b2:
    pUVar20 = pUVar24;
  }
  else {
    pUVar21 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar19 = (int)pUVar21->_padding_;
    if ((*(int *)(pUVar20->_padding_ + 0x38) < iVar19) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
        &pUVar21->_padding_)) goto LAB_14a4aa8b2;
  }
  dVar16 = _UNK_151e77bc8;
  dVar15 = ___xmm_00000000000000004044000000000000;
  dVar14 = _UNK_151bce3f8;
  dVar27 = ___xmm_40440000000000004044000000000000;
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[1];
  local_a30 = local_a30 & 0xffffff00;
  FStack_a2c.Value = 0;
  uStack_a28 = 0;
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[0];
  uVar30 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar31 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar28 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar29 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_3e8._8_4_ = uVar28;
  local_3e8._0_8_ = (double)fVar7;
  local_3e8._12_4_ = uVar29;
  local_418 = ___xmm_40440000000000004044000000000000;
  dStack_410 = _UNK_151bce3f8;
  local_408 = ___xmm_00000000000000004044000000000000;
  dStack_400 = _UNK_151e77bc8;
  local_3f8._8_4_ = uVar30;
  local_3f8._0_8_ = (double)fVar11;
  local_3f8._12_4_ = uVar31;
  local_438 = (double)fVar10;
  dStack_430 = (double)fVar8;
  local_428 = (double)fVar6;
  dStack_420 = (double)fVar9;
  pFVar22 = ::FName::FName(&local_8e8,L"Parent2");
  local_9a8.Name.ComparisonIndex.Value = FStack_a2c.Value;
  local_9a8._0_4_ = local_a30;
  local_738.Translation.XY.m128d_f64[0] = dVar27;
  local_738.Translation.XY.m128d_f64[1] = dVar14;
  local_738.Translation.ZW.m128d_f64[0] = dVar15;
  local_738.Translation.ZW.m128d_f64[1] = dVar16;
  local_738.Scale3D.XY.m128d_f64[1]._0_4_ = uVar30;
  local_738.Scale3D.XY.m128d_f64[0] = (double)fVar11;
  local_738.Scale3D.XY.m128d_f64[1]._4_4_ = uVar31;
  local_738.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar28;
  local_738.Scale3D.ZW.m128d_f64[0] = (double)fVar7;
  local_738.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar29;
  local_9a8.Name.Number = 0;
  local_738.Rotation.XY.m128d_f64[0] = (double)fVar10;
  local_738.Rotation.XY.m128d_f64[1] = (double)fVar8;
  local_738.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_738.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar20,&local_968,*pFVar22,&local_9a8,&local_738,true,User,
             false,false);
  pUVar20 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar20 == (URigHierarchy *)0x0) {
LAB_14a4aa9d7:
    pUVar20 = pUVar24;
  }
  else {
    pUVar21 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar19 = (int)pUVar21->_padding_;
    if ((*(int *)(pUVar20->_padding_ + 0x38) < iVar19) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
        &pUVar21->_padding_)) goto LAB_14a4aa9d7;
  }
  dVar16 = _UNK_15219d3b8;
  dVar15 = ___xmm_0000000000000000404e000000000000;
  dVar14 = _UNK_15076bf58;
  dVar27 = ___xmm_404e000000000000404e000000000000;
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[1];
  local_a6c = local_a6c & 0xffffff00;
  FStack_a68.Value = 0;
  uStack_a64 = 0;
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[0];
  uVar30 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar31 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar28 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar29 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_388._8_4_ = uVar28;
  local_388._0_8_ = (double)fVar7;
  local_388._12_4_ = uVar29;
  local_3b8 = ___xmm_404e000000000000404e000000000000;
  dStack_3b0 = _UNK_15076bf58;
  local_3a8 = ___xmm_0000000000000000404e000000000000;
  dStack_3a0 = _UNK_15219d3b8;
  local_398._8_4_ = uVar30;
  local_398._0_8_ = (double)fVar11;
  local_398._12_4_ = uVar31;
  local_3d8 = (double)fVar10;
  dStack_3d0 = (double)fVar8;
  local_3c8 = (double)fVar6;
  dStack_3c0 = (double)fVar9;
  pFVar22 = ::FName::FName(&local_8e0,L"Parent3");
  local_998.Name.ComparisonIndex.Value = FStack_a68.Value;
  local_998._0_4_ = local_a6c;
  local_6d8.Translation.XY.m128d_f64[0] = dVar27;
  local_6d8.Translation.XY.m128d_f64[1] = dVar14;
  local_6d8.Translation.ZW.m128d_f64[0] = dVar15;
  local_6d8.Translation.ZW.m128d_f64[1] = dVar16;
  local_6d8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar30;
  local_6d8.Scale3D.XY.m128d_f64[0] = (double)fVar11;
  local_6d8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar31;
  local_6d8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar28;
  local_6d8.Scale3D.ZW.m128d_f64[0] = (double)fVar7;
  local_6d8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar29;
  local_998.Name.Number = 0;
  local_6d8.Rotation.XY.m128d_f64[0] = (double)fVar10;
  local_6d8.Rotation.XY.m128d_f64[1] = (double)fVar8;
  local_6d8.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_6d8.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar20,&local_958,*pFVar22,&local_998,&local_6d8,true,User,
             false,false);
  pTVar2 = &(this->Unit).Parents;
  (this->Unit).Child.Type = local_988.Type;
  *(undefined3 *)&(this->Unit).Child.field_0x1 = local_988._1_3_;
  (this->Unit).Child.Name.ComparisonIndex = (FNameEntryId)local_988.Name.ComparisonIndex.Value;
  (this->Unit).Child.Name.Number = local_988.Name.Number;
  pFVar3 = (FRigElementKey *)(pTVar2->AllocatorInstance).Data;
  local_a98.Name.Number = local_978.Name.Number;
  local_a98.Type = local_978.Type;
  local_a98._1_3_ = local_978._1_3_;
  local_a98.Name.ComparisonIndex.Value = local_978.Name.ComparisonIndex.Value;
  uStack_a8c = 0x3f800000;
  if ((pFVar3 <= &local_a98) &&
     (&local_a98 <
      (FRigElementKey *)((longlong)pFVar3 + (longlong)(this->Unit).Parents.ArrayMax * 0x10))) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar5 = (code *)swi(3);
      uVar18 = (*pcVar5)();
      return (bool)uVar18;
    }
  }
  iVar19 = (this->Unit).Parents.ArrayNum;
  piVar1 = &(this->Unit).Parents.ArrayMax;
  if (iVar19 == *piVar1) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  uStack_aac = 0x3f800000;
  pFVar23 = (pTVar2->AllocatorInstance).Data + (longlong)iVar19 * 0x10;
  (this->Unit).Parents.ArrayNum = iVar19 + 1;
  *(undefined8 *)pFVar23 = local_a98._0_8_;
  *(ulonglong *)(pFVar23 + 8) = CONCAT44(uStack_a8c,local_a98.Name.Number);
  pFVar3 = (FRigElementKey *)(pTVar2->AllocatorInstance).Data;
  local_ab8.Name.Number = local_968.Name.Number;
  local_ab8.Type = local_968.Type;
  local_ab8._1_3_ = local_968._1_3_;
  local_ab8.Name.ComparisonIndex.Value = local_968.Name.ComparisonIndex.Value;
  if ((pFVar3 <= &local_ab8) &&
     (&local_ab8 < (FRigElementKey *)((longlong)pFVar3 + (longlong)*piVar1 * 0x10))) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar5 = (code *)swi(3);
      uVar18 = (*pcVar5)();
      return (bool)uVar18;
    }
  }
  iVar19 = (this->Unit).Parents.ArrayNum;
  if (iVar19 == *piVar1) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  uStack_abc = 0x3f800000;
  pFVar23 = (pTVar2->AllocatorInstance).Data + (longlong)iVar19 * 0x10;
  (this->Unit).Parents.ArrayNum = iVar19 + 1;
  *(undefined8 *)pFVar23 = local_ab8._0_8_;
  *(ulonglong *)(pFVar23 + 8) = CONCAT44(uStack_aac,local_ab8.Name.Number);
  pFVar3 = (FRigElementKey *)(pTVar2->AllocatorInstance).Data;
  local_ac8.Name.Number = local_958.Name.Number;
  local_ac8.Type = local_958.Type;
  local_ac8._1_3_ = local_958._1_3_;
  local_ac8.Name.ComparisonIndex.Value = local_958.Name.ComparisonIndex.Value;
  if ((pFVar3 <= &local_ac8) &&
     (&local_ac8 < (FRigElementKey *)((longlong)pFVar3 + (longlong)*piVar1 * 0x10))) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar5 = (code *)swi(3);
      uVar18 = (*pcVar5)();
      return (bool)uVar18;
    }
  }
  iVar19 = (this->Unit).Parents.ArrayNum;
  if (iVar19 == *piVar1) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Unit).Parents.ArrayNum = iVar19 + 1;
  this_01 = &this->field_0x5d0;
  pFVar23 = (pTVar2->AllocatorInstance).Data + (longlong)iVar19 * 0x10;
  *(undefined8 *)pFVar23 = local_ac8._0_8_;
  *(ulonglong *)(pFVar23 + 8) = CONCAT44(uStack_abc,local_ac8.Name.Number);
  pUVar20 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_01);
  if (pUVar20 == (URigHierarchy *)0x0) {
LAB_14a4aad67:
    pUVar20 = pUVar24;
  }
  else {
    pUVar21 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar19 = (int)pUVar21->_padding_;
    if ((*(int *)(pUVar20->_padding_ + 0x38) < iVar19) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
        &pUVar21->_padding_)) goto LAB_14a4aad67;
  }
  URigHierarchy::ResetPoseToInitial(pUVar20,Bone);
  pFVar4 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = false;
  FRigUnit_PositionConstraintLocalSpaceOffset::Execute(&this->Unit,pFVar4);
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_928,L"unexpected translation for maintain offset off");
  pUVar20 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_01);
  if (pUVar20 == (URigHierarchy *)0x0) {
LAB_14a4aaddb:
    pUVar20 = (URigHierarchy *)0x0;
  }
  else {
    pUVar21 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar19 = (int)pUVar21->_padding_;
    if ((*(int *)(pUVar20->_padding_ + 0x38) < iVar19) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
        &pUVar21->_padding_)) goto LAB_14a4aaddb;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar20,&local_1d8,0,false);
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_8b0 = local_1d8.Translation.ZW.m128d_f64[0];
  local_8c0 = local_1d8.Translation.XY.m128d_f64[0];
  dStack_8b8 = local_1d8.Translation.XY.m128d_f64[1];
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)
                                (local_1d8.Translation.XY.m128d_f64[0] - __real_4044000000000000) >>
                               0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_1d8.Translation.XY.m128d_f64[0] - __real_4044000000000000,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)
                               (local_1d8.Translation.XY.m128d_f64[1] - __real_4044000000000000) >>
                              0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_1d8.Translation.XY.m128d_f64[1] - __real_4044000000000000,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)
                              (local_1d8.Translation.ZW.m128d_f64[0] - __real_4044000000000000) >>
                             0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_1d8.Translation.ZW.m128d_f64[0] - __real_4044000000000000,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    uVar26 = 0;
  }
  else {
    uVar26 = 1;
  }
  (*pcVar5)(this,uVar26,&local_928);
  if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_928.Data.AllocatorInstance.Data);
  }
  pUVar20 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_01);
  if (pUVar20 == (URigHierarchy *)0x0) {
LAB_14a4aaebc:
    pUVar20 = (URigHierarchy *)0x0;
  }
  else {
    pUVar21 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar19 = (int)pUVar21->_padding_;
    if ((*(int *)(pUVar20->_padding_ + 0x38) < iVar19) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
        &pUVar21->_padding_)) goto LAB_14a4aaebc;
  }
  URigHierarchy::ResetPoseToInitial(pUVar20,Bone);
  pUVar20 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_01);
  if (pUVar20 == (URigHierarchy *)0x0) {
LAB_14a4aaefc:
    pUVar20 = (URigHierarchy *)0x0;
  }
  else {
    pUVar21 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar19 = (int)pUVar21->_padding_;
    if ((*(int *)(pUVar20->_padding_ + 0x38) < iVar19) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
        &pUVar21->_padding_)) goto LAB_14a4aaefc;
  }
  uVar28 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar29 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_678.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_678.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_678.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_678.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_678.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_678.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_378._8_4_ = uVar28;
  local_378._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_378._12_4_ = uVar29;
  local_358 = ___xmm_c044000000000000c044000000000000;
  dStack_350 = _UNK_15219d578;
  local_348 = ___xmm_0000000000000000c044000000000000;
  dStack_340 = _UNK_15219d418;
  local_678.Rotation.XY.m128d_f64[1]._0_4_ = uVar28;
  local_678.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_678.Rotation.XY.m128d_f64[1]._4_4_ = uVar29;
  local_678.Translation.XY.m128d_f64[0] = ___xmm_c044000000000000c044000000000000;
  local_678.Translation.XY.m128d_f64[1] = _UNK_15219d578;
  local_678.Translation.ZW.m128d_f64[0] = ___xmm_0000000000000000c044000000000000;
  local_678.Translation.ZW.m128d_f64[1] = _UNK_15219d418;
  local_368 = local_678.Rotation.ZW.m128d_f64[0];
  dStack_360 = local_678.Rotation.ZW.m128d_f64[1];
  local_338 = local_678.Scale3D.XY.m128d_f64[0];
  dStack_330 = local_678.Scale3D.XY.m128d_f64[1];
  local_328 = local_678.Scale3D.ZW.m128d_f64[0];
  dStack_320 = local_678.Scale3D.ZW.m128d_f64[1];
  URigHierarchy::SetGlobalTransformByIndex(pUVar20,2,&local_678,false,true,false,false);
  pFVar4 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = true;
  FRigUnit_PositionConstraintLocalSpaceOffset::Execute(&this->Unit,pFVar4);
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_918,L"unexpected translation for maintain offset on");
  pUVar20 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_01);
  if (pUVar20 == (URigHierarchy *)0x0) {
LAB_14a4ab010:
    pUVar20 = (URigHierarchy *)0x0;
  }
  else {
    pUVar21 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar19 = (int)pUVar21->_padding_;
    if ((*(int *)(pUVar20->_padding_ + 0x38) < iVar19) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
        &pUVar21->_padding_)) goto LAB_14a4ab010;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar20,&local_178,0,false);
  local_898 = local_178.Translation.ZW.m128d_f64[0];
  local_8a8 = local_178.Translation.XY.m128d_f64[0];
  dStack_8a0 = local_178.Translation.XY.m128d_f64[1];
  if (((__real_3f847ae140000000 <
        (double)CONCAT44((uint)((ulonglong)
                                (local_178.Translation.XY.m128d_f64[0] - __real_c03aab8520000000) >>
                               0x20) & uVar13,
                         SUB84(local_178.Translation.XY.m128d_f64[0] - __real_c03aab8520000000,0) &
                         uVar12)) ||
      (__real_3f847ae140000000 <
       (double)CONCAT44((uint)((ulonglong)
                               (local_178.Translation.XY.m128d_f64[1] - __real_c03aab8520000000) >>
                              0x20) & uVar13,
                        SUB84(local_178.Translation.XY.m128d_f64[1] - __real_c03aab8520000000,0) &
                        uVar12))) ||
     (__real_3f847ae140000000 <
      (double)CONCAT44((uint)((ulonglong)
                              (local_178.Translation.ZW.m128d_f64[0] - __real_c03aab8520000000) >>
                             0x20) & uVar13,
                       SUB84(local_178.Translation.ZW.m128d_f64[0] - __real_c03aab8520000000,0) &
                       uVar12))) {
    uVar26 = 0;
  }
  else {
    uVar26 = 1;
  }
  (*pcVar5)(this,uVar26,&local_918,0);
  if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_918.Data.AllocatorInstance.Data);
  }
  iVar19 = *piVar1;
  pUVar20 = (URigHierarchy *)0x0;
  (this->Unit).Parents.ArrayNum = 0;
  if (iVar19 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4ab114:
    pUVar24 = pUVar20;
  }
  else {
    pUVar21 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar19 = (int)pUVar21->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar19) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
        &pUVar21->_padding_)) goto LAB_14a4ab114;
  }
  pUVar24 = URigHierarchyController::GetHierarchy((URigHierarchyController *)pUVar24);
  URigHierarchy::Reset(pUVar24);
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4ab15a:
    pUVar24 = pUVar20;
  }
  else {
    pUVar21 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar19 = (int)pUVar21->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar19) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
        &pUVar21->_padding_)) goto LAB_14a4ab15a;
  }
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[1];
  local_a60 = local_a60 & 0xffffff00;
  FStack_a5c.Value = 0;
  uStack_a58 = 0;
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[0];
  uVar30 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar31 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar28 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar29 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_2c8._8_4_ = uVar28;
  local_2c8._0_8_ = (double)fVar7;
  local_2c8._12_4_ = uVar29;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d8._8_4_ = uVar30;
  local_2d8._0_8_ = (double)fVar11;
  local_2d8._12_4_ = uVar31;
  local_318 = (double)fVar10;
  dStack_310 = (double)fVar8;
  local_308 = (double)fVar6;
  dStack_300 = (double)fVar9;
  pFVar22 = ::FName::FName(&local_8c8,L"Thigh");
  local_9e8.Name.ComparisonIndex.Value = FStack_a5c.Value;
  local_9e8._0_4_ = local_a60;
  local_618.Translation.XY.m128d_f64[0] = 0.0;
  local_618.Translation.XY.m128d_f64[1] = 0.0;
  local_618.Translation.ZW.m128d_f64[0] = 0.0;
  local_618.Translation.ZW.m128d_f64[1] = 0.0;
  local_618.Scale3D.XY.m128d_f64[1]._0_4_ = uVar30;
  local_618.Scale3D.XY.m128d_f64[0] = (double)fVar11;
  local_618.Scale3D.XY.m128d_f64[1]._4_4_ = uVar31;
  local_618.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar28;
  local_618.Scale3D.ZW.m128d_f64[0] = (double)fVar7;
  local_618.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar29;
  local_9e8.Name.Number = 0;
  local_618.Rotation.XY.m128d_f64[0] = (double)fVar10;
  local_618.Rotation.XY.m128d_f64[1] = (double)fVar8;
  local_618.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_618.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar24,&local_9f8,*pFVar22,&local_9e8,&local_618,true,User,
             false,false);
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4ab26a:
    pUVar24 = pUVar20;
  }
  else {
    pUVar21 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar19 = (int)pUVar21->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar19) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
        &pUVar21->_padding_)) goto LAB_14a4ab26a;
  }
  dVar16 = _UNK_15202fd38;
  dVar15 = ___xmm_0000000000000000c049000000000000;
  dVar14 = _UNK_151444f38;
  dVar27 = ___xmm_00000000000000004024000000000000;
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[0];
  uVar30 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar31 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar28 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar29 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_268._8_4_ = uVar28;
  local_268._0_8_ = (double)fVar7;
  local_268._12_4_ = uVar29;
  local_298 = ___xmm_00000000000000004024000000000000;
  dStack_290 = _UNK_151444f38;
  local_288 = ___xmm_0000000000000000c049000000000000;
  dStack_280 = _UNK_15202fd38;
  local_278._8_4_ = uVar30;
  local_278._0_8_ = (double)fVar11;
  local_278._12_4_ = uVar31;
  local_2b8 = (double)fVar10;
  dStack_2b0 = (double)fVar8;
  local_2a8 = (double)fVar6;
  dStack_2a0 = (double)fVar9;
  ::FName::FName(local_9d8,L"Thigh");
  FStack_a74 = local_9d8[0].ComparisonIndex.Value;
  uStack_a70 = local_9d8[0].Number;
  local_a78 = CONCAT31(local_a78._1_3_,1);
  pFVar22 = ::FName::FName(&local_8d8,L"Knee");
  local_948.Name.ComparisonIndex.Value = FStack_a74.Value;
  local_948._0_4_ = local_a78;
  local_948.Name.Number = uStack_a70;
  local_5b8.Translation.XY.m128d_f64[0] = dVar27;
  local_5b8.Translation.XY.m128d_f64[1] = dVar14;
  local_5b8.Translation.ZW.m128d_f64[0] = dVar15;
  local_5b8.Translation.ZW.m128d_f64[1] = dVar16;
  local_5b8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar30;
  local_5b8.Scale3D.XY.m128d_f64[0] = (double)fVar11;
  local_5b8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar31;
  local_5b8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar28;
  local_5b8.Scale3D.ZW.m128d_f64[0] = (double)fVar7;
  local_5b8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar29;
  local_5b8.Rotation.XY.m128d_f64[0] = (double)fVar10;
  local_5b8.Rotation.XY.m128d_f64[1] = (double)fVar8;
  local_5b8.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_5b8.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar24,&local_a08,*pFVar22,&local_948,&local_5b8,true,User,
             false,false);
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4ab3ab:
    pUVar24 = pUVar20;
  }
  else {
    pUVar21 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar19 = (int)pUVar21->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar19) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
        &pUVar21->_padding_)) goto LAB_14a4ab3ab;
  }
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[0];
  uVar30 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar31 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar28 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar29 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_208._8_4_ = uVar28;
  local_208._0_8_ = (double)fVar7;
  local_208._12_4_ = uVar29;
  local_238 = dVar15;
  dStack_230 = dVar16;
  local_228 = 0;
  uStack_220 = 0;
  local_218._8_4_ = uVar30;
  local_218._0_8_ = (double)fVar11;
  local_218._12_4_ = uVar31;
  local_258 = (double)fVar10;
  dStack_250 = (double)fVar8;
  local_248 = (double)fVar6;
  dStack_240 = (double)fVar9;
  ::FName::FName(&local_a24,L"Knee");
  FStack_a50 = local_a24.ComparisonIndex.Value;
  uStack_a4c = local_a24.Number;
  local_a54 = CONCAT31(local_a54._1_3_,1);
  pFVar22 = ::FName::FName(&local_8d0,L"Corrective");
  local_938.Name.ComparisonIndex.Value = FStack_a50.Value;
  local_938._0_4_ = local_a54;
  local_938.Name.Number = uStack_a4c;
  local_558.Translation.XY.m128d_f64[0] = dVar15;
  local_558.Translation.XY.m128d_f64[1] = dVar16;
  local_558.Translation.ZW.m128d_f64[0] = 0.0;
  local_558.Translation.ZW.m128d_f64[1] = 0.0;
  local_558.Scale3D.XY.m128d_f64[1]._0_4_ = uVar30;
  local_558.Scale3D.XY.m128d_f64[0] = (double)fVar11;
  local_558.Scale3D.XY.m128d_f64[1]._4_4_ = uVar31;
  local_558.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar28;
  local_558.Scale3D.ZW.m128d_f64[0] = (double)fVar7;
  local_558.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar29;
  local_558.Rotation.XY.m128d_f64[0] = (double)fVar10;
  local_558.Rotation.XY.m128d_f64[1] = (double)fVar8;
  local_558.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_558.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar24,&local_a18,*pFVar22,&local_938,&local_558,false,User
             ,false,false);
  (this->Unit).Child.Type = local_a18.Type;
  *(undefined3 *)&(this->Unit).Child.field_0x1 = local_a18._1_3_;
  (this->Unit).Child.Name.ComparisonIndex = (FNameEntryId)local_a18.Name.ComparisonIndex.Value;
  (this->Unit).Child.Name.Number = local_a18.Name.Number;
  pFVar3 = (FRigElementKey *)(pTVar2->AllocatorInstance).Data;
  local_a88.Name.Number = local_a08.Name.Number;
  local_a88.Type = local_a08.Type;
  local_a88._1_3_ = local_a08._1_3_;
  local_a88.Name.ComparisonIndex.Value = local_a08.Name.ComparisonIndex.Value;
  uStack_a7c = 0x3f800000;
  if ((pFVar3 <= &local_a88) &&
     (&local_a88 < (FRigElementKey *)((longlong)pFVar3 + (longlong)*piVar1 * 0x10))) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar5 = (code *)swi(3);
      uVar18 = (*pcVar5)();
      return (bool)uVar18;
    }
  }
  iVar19 = (this->Unit).Parents.ArrayNum;
  if (iVar19 == *piVar1) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  uStack_a9c = 0x3f800000;
  pFVar23 = (pTVar2->AllocatorInstance).Data + (longlong)iVar19 * 0x10;
  (this->Unit).Parents.ArrayNum = iVar19 + 1;
  *(undefined8 *)pFVar23 = local_a88._0_8_;
  *(ulonglong *)(pFVar23 + 8) = CONCAT44(uStack_a7c,local_a88.Name.Number);
  pFVar3 = (FRigElementKey *)(pTVar2->AllocatorInstance).Data;
  local_aa8.Name.Number = local_9f8.Name.Number;
  local_aa8.Type = local_9f8.Type;
  local_aa8._1_3_ = local_9f8._1_3_;
  local_aa8.Name.ComparisonIndex.Value = local_9f8.Name.ComparisonIndex.Value;
  if ((pFVar3 <= &local_aa8) &&
     (&local_aa8 < (FRigElementKey *)((longlong)pFVar3 + (longlong)*piVar1 * 0x10))) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar5 = (code *)swi(3);
      uVar18 = (*pcVar5)();
      return (bool)uVar18;
    }
  }
  iVar19 = (this->Unit).Parents.ArrayNum;
  if (iVar19 == *piVar1) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Unit).Parents.ArrayNum = iVar19 + 1;
  pFVar23 = (pTVar2->AllocatorInstance).Data + (longlong)iVar19 * 0x10;
  *(undefined8 *)pFVar23 = local_aa8._0_8_;
  *(ulonglong *)(pFVar23 + 8) = CONCAT44(uStack_a9c,local_aa8.Name.Number);
  (this->Unit).bMaintainOffset = true;
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_01);
  if (pUVar24 != (URigHierarchy *)0x0) {
    pUVar21 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar19 = (int)pUVar21->_padding_;
    if ((iVar19 <= *(int *)(pUVar24->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar19 * 8) ==
        &pUVar21->_padding_)) goto LAB_14a4ab663;
  }
  pUVar24 = pUVar20;
LAB_14a4ab663:
  local_890._s_0.X = ___xmm_40468000000000000000000000000000;
  local_890._s_0.Y = _UNK_151ba6428;
  local_890._s_0.Z = 0.0;
  pTVar25 = AnimationCore::QuatFromEuler(&local_1f8,(TVector<double> *)&local_890._s_0,XZY,false);
  local_858.Translation.XY.m128d_f64[0] = dVar27;
  local_858.Translation.XY.m128d_f64[1] = dVar14;
  local_858.Translation.ZW.m128d_f64[0] = dVar15;
  local_858.Translation.ZW.m128d_f64[1] = dVar16;
  local_858.Rotation.XY.m128d_f64[0] = pTVar25->X;
  local_858.Rotation.XY.m128d_f64[1] = pTVar25->Y;
  local_858.Rotation.ZW.m128d_f64[0] = pTVar25->Z;
  local_858.Rotation.ZW.m128d_f64[1] = pTVar25->W;
  local_858.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_858.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_858.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_858.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  URigHierarchy::SetLocalTransform(pUVar24,1,&local_858,true,false,false);
  FRigUnit_PositionConstraintLocalSpaceOffset::Execute
            (&this->Unit,*(FControlRigExecuteContext **)&this->field_0x370);
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_908,L"unexpected translation for local space offset test");
  pUVar20 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_01);
  URigHierarchy::GetGlobalTransformByIndex(pUVar20,&local_118,2,false);
  local_868 = local_118.Translation.ZW.m128d_f64[0];
  dVar27 = local_118.Translation.XY.m128d_f64[0] - ___real_c046400000000000;
  if (((__real_3fb99999a0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & uVar13,SUB84(dVar27,0) & uVar12)) ||
      (__real_3fb99999a0000000 <
       (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_ & uVar13,
                        local_118.Translation.XY.m128d_f64[1]._0_4_ & uVar12))) ||
     (__real_3fb99999a0000000 <
      (double)CONCAT44((uint)((ulonglong)
                              (local_118.Translation.ZW.m128d_f64[0] - ___real_c025b851e0000000) >>
                             0x20) & uVar13,
                       SUB84(local_118.Translation.ZW.m128d_f64[0] - ___real_c025b851e0000000,0) &
                       uVar12))) {
    uVar26 = 0;
  }
  else {
    uVar26 = 1;
  }
  (*pcVar5)(this,uVar26,&local_908,0);
  if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_908.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4ab8b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_PositionConstraintLocalSpaceOffsetTest::GetBeautifiedTestName
          (FRigUnit_PositionConstraintLocalSpaceOffsetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"ControlRig.Units.FRigUnit_PositionConstraintLocalSpaceOffset");
  return __return_storage_ptr__;
}

