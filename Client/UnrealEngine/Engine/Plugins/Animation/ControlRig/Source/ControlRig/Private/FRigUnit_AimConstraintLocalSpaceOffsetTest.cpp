// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a46e3c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EAutomationTestFlags __thiscall
FRigUnit_AimConstraintLocalSpaceOffsetTest::GetTestFlags
          (FRigUnit_AimConstraintLocalSpaceOffsetTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a46e3d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_AimConstraintLocalSpaceOffsetTest::IsStressTest
          (FRigUnit_AimConstraintLocalSpaceOffsetTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a46e3e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall
FRigUnit_AimConstraintLocalSpaceOffsetTest::GetRequiredDeviceNum
          (FRigUnit_AimConstraintLocalSpaceOffsetTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a46e420

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_AimConstraintLocalSpaceOffsetTest::GetTestSourceFileName
          (FRigUnit_AimConstraintLocalSpaceOffsetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Highlevel\\Hierarchy\\RigUnit_AimBone.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a46e4d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
FRigUnit_AimConstraintLocalSpaceOffsetTest::GetTestSourceFileLine
          (FRigUnit_AimConstraintLocalSpaceOffsetTest *this)

{
  return 0x2a3;
}

// GetTests @ 14a46e570

/* WARNING: Removing unreachable block (ram,0x00014a46e65d) */
/* WARNING: Removing unreachable block (ram,0x00014a46e728) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_AimConstraintLocalSpaceOffsetTest::GetTests
          (FRigUnit_AimConstraintLocalSpaceOffsetTest *this,
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
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_AimConstraintLocalSpaceOffset");
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

// RunTest @ 14a46e810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_AimConstraintLocalSpaceOffsetTest::RunTest
          (FRigUnit_AimConstraintLocalSpaceOffsetTest *this,FString *param_1)

{
  TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  longlong lVar8;
  undefined8 uVar9;
  FRigBaseElement *pFVar10;
  undefined3 uVar11;
  FNameEntryId FVar12;
  bool bVar13;
  EControlRigVectorKind EVar14;
  ERigElementType EVar15;
  undefined3 uVar16;
  float fVar17;
  undefined7 uVar18;
  undefined4 uVar19;
  undefined1 uVar20;
  URigHierarchy *this_00;
  UClass *pUVar21;
  FRigUnit_AimConstraintLocalSpaceOffset *pFVar22;
  undefined1 auStack_1c8 [32];
  FRigUnit_AimConstraintLocalSpaceOffset local_1a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  (**(code **)(this->_padding_ + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar21 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar5 = (int)pUVar21->_padding_;
    if ((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar21->_padding_)) goto LAB_14a46e881;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a46e881:
  URigHierarchy::Reset(this_00);
  pFVar22 = FRigUnit_AimConstraintLocalSpaceOffset::FRigUnit_AimConstraintLocalSpaceOffset
                      (&local_1a8);
  pTVar2 = &(this->Unit).Parents;
  uVar11 = *(undefined3 *)&(pFVar22->Child).field_0x1;
  FVar12.Value = (pFVar22->Child).Name.ComparisonIndex.Value;
  pTVar1 = &pFVar22->Parents;
  (this->Unit).Child.Type = (pFVar22->Child).Type;
  *(undefined3 *)&(this->Unit).Child.field_0x1 = uVar11;
  (this->Unit).Child.Name.ComparisonIndex = (FNameEntryId)FVar12.Value;
  (this->Unit).Child.Name.Number = (pFVar22->Child).Name.Number;
  (this->Unit).bMaintainOffset = pFVar22->bMaintainOffset;
  bVar13 = (pFVar22->Filter).bY;
  (this->Unit).Filter.bX = (pFVar22->Filter).bX;
  (this->Unit).Filter.bY = bVar13;
  (this->Unit).Filter.bZ = (pFVar22->Filter).bZ;
  dVar7 = (pFVar22->AimAxis).field0_0x0._s_0.Y;
  (this->Unit).AimAxis.field0_0x0._s_0.X = (pFVar22->AimAxis).field0_0x0._s_0.X;
  (this->Unit).AimAxis.field0_0x0._s_0.Y = dVar7;
  (this->Unit).AimAxis.field0_0x0._s_0.Z = (pFVar22->AimAxis).field0_0x0._s_0.Z;
  dVar7 = (pFVar22->UpAxis).field0_0x0._s_0.Y;
  (this->Unit).UpAxis.field0_0x0._s_0.X = (pFVar22->UpAxis).field0_0x0._s_0.X;
  (this->Unit).UpAxis.field0_0x0._s_0.Y = dVar7;
  (this->Unit).UpAxis.field0_0x0._s_0.Z = (pFVar22->UpAxis).field0_0x0._s_0.Z;
  dVar7 = (pFVar22->WorldUp).Target.field0_0x0._s_0.Y;
  (this->Unit).WorldUp.Target.field0_0x0._s_0.X = (pFVar22->WorldUp).Target.field0_0x0._s_0.X;
  (this->Unit).WorldUp.Target.field0_0x0._s_0.Y = dVar7;
  EVar14 = (pFVar22->WorldUp).Kind;
  uVar11 = *(undefined3 *)&(pFVar22->WorldUp).field_0x19;
  EVar15 = (pFVar22->WorldUp).Space.Type;
  uVar16 = *(undefined3 *)&(pFVar22->WorldUp).Space.field_0x1;
  (this->Unit).WorldUp.Target.field0_0x0._s_0.Z = (pFVar22->WorldUp).Target.field0_0x0._s_0.Z;
  (this->Unit).WorldUp.Kind = EVar14;
  *(undefined3 *)&(this->Unit).WorldUp.field_0x19 = uVar11;
  (this->Unit).WorldUp.Space.Type = EVar15;
  *(undefined3 *)&(this->Unit).WorldUp.Space.field_0x1 = uVar16;
  (this->Unit).WorldUp.Space.Name = (pFVar22->WorldUp).Space.Name;
  if (pTVar2 != pTVar1) {
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Unit).Parents.ArrayNum = (pFVar22->Parents).ArrayNum;
    (this->Unit).Parents.ArrayMax = (pFVar22->Parents).ArrayMax;
    (pFVar22->Parents).ArrayNum = 0;
    (pFVar22->Parents).ArrayMax = 0;
  }
  uVar11 = *(undefined3 *)&(pFVar22->AdvancedSettings).DebugSettings.field_0x1;
  fVar17 = (pFVar22->AdvancedSettings).DebugSettings.Scale;
  lVar8 = (pFVar22->AdvancedSettings).DebugSettings._padding_;
  pTVar3 = &pFVar22->ParentCaches;
  pTVar4 = &(this->Unit).ParentCaches;
  (this->Unit).AdvancedSettings.DebugSettings.bEnabled =
       (pFVar22->AdvancedSettings).DebugSettings.bEnabled;
  *(undefined3 *)&(this->Unit).AdvancedSettings.DebugSettings.field_0x1 = uVar11;
  (this->Unit).AdvancedSettings.DebugSettings.Scale = fVar17;
  (this->Unit).AdvancedSettings.DebugSettings._padding_ = lVar8;
  dVar7 = (pFVar22->AdvancedSettings).DebugSettings.WorldOffset.Rotation.XY.m128d_f64[1];
  (this->Unit).AdvancedSettings.DebugSettings.WorldOffset.Rotation.XY.m128d_f64[0] =
       (pFVar22->AdvancedSettings).DebugSettings.WorldOffset.Rotation.XY.m128d_f64[0];
  *(double *)
   ((longlong)(this->Unit).AdvancedSettings.DebugSettings.WorldOffset.Rotation.XY.m128d_f64 + 8) =
       dVar7;
  dVar7 = (pFVar22->AdvancedSettings).DebugSettings.WorldOffset.Rotation.ZW.m128d_f64[1];
  (this->Unit).AdvancedSettings.DebugSettings.WorldOffset.Rotation.ZW.m128d_f64[0] =
       (pFVar22->AdvancedSettings).DebugSettings.WorldOffset.Rotation.ZW.m128d_f64[0];
  *(double *)
   ((longlong)(this->Unit).AdvancedSettings.DebugSettings.WorldOffset.Rotation.ZW.m128d_f64 + 8) =
       dVar7;
  dVar7 = (pFVar22->AdvancedSettings).DebugSettings.WorldOffset.Translation.XY.m128d_f64[1];
  (this->Unit).AdvancedSettings.DebugSettings.WorldOffset.Translation.XY.m128d_f64[0] =
       (pFVar22->AdvancedSettings).DebugSettings.WorldOffset.Translation.XY.m128d_f64[0];
  *(double *)
   ((longlong)(this->Unit).AdvancedSettings.DebugSettings.WorldOffset.Translation.XY.m128d_f64 + 8)
       = dVar7;
  dVar7 = (pFVar22->AdvancedSettings).DebugSettings.WorldOffset.Translation.ZW.m128d_f64[1];
  (this->Unit).AdvancedSettings.DebugSettings.WorldOffset.Translation.ZW.m128d_f64[0] =
       (pFVar22->AdvancedSettings).DebugSettings.WorldOffset.Translation.ZW.m128d_f64[0];
  *(double *)
   ((longlong)(this->Unit).AdvancedSettings.DebugSettings.WorldOffset.Translation.ZW.m128d_f64 + 8)
       = dVar7;
  dVar7 = (pFVar22->AdvancedSettings).DebugSettings.WorldOffset.Scale3D.XY.m128d_f64[1];
  (this->Unit).AdvancedSettings.DebugSettings.WorldOffset.Scale3D.XY.m128d_f64[0] =
       (pFVar22->AdvancedSettings).DebugSettings.WorldOffset.Scale3D.XY.m128d_f64[0];
  *(double *)
   ((longlong)(this->Unit).AdvancedSettings.DebugSettings.WorldOffset.Scale3D.XY.m128d_f64 + 8) =
       dVar7;
  dVar7 = (pFVar22->AdvancedSettings).DebugSettings.WorldOffset.Scale3D.ZW.m128d_f64[1];
  (this->Unit).AdvancedSettings.DebugSettings.WorldOffset.Scale3D.ZW.m128d_f64[0] =
       (pFVar22->AdvancedSettings).DebugSettings.WorldOffset.Scale3D.ZW.m128d_f64[0];
  *(double *)
   ((longlong)(this->Unit).AdvancedSettings.DebugSettings.WorldOffset.Scale3D.ZW.m128d_f64 + 8) =
       dVar7;
  uVar18 = *(undefined7 *)&(pFVar22->AdvancedSettings).field_0x71;
  uVar9 = *(undefined8 *)&(pFVar22->AdvancedSettings).field_0x78;
  (this->Unit).AdvancedSettings.RotationOrderForFilter =
       (pFVar22->AdvancedSettings).RotationOrderForFilter;
  *(undefined7 *)&(this->Unit).AdvancedSettings.field_0x71 = uVar18;
  *(undefined8 *)&(this->Unit).AdvancedSettings.field_0x78 = uVar9;
  (this->Unit).Weight = pFVar22->Weight;
  uVar11 = *(undefined3 *)&(pFVar22->WorldUpSpaceCache).Key.field_0x1;
  FVar12.Value = (pFVar22->WorldUpSpaceCache).Key.Name.ComparisonIndex.Value;
  uVar9 = *(undefined8 *)&(pFVar22->WorldUpSpaceCache).Key.Name.Number;
  (this->Unit).WorldUpSpaceCache.Key.Type = (pFVar22->WorldUpSpaceCache).Key.Type;
  *(undefined3 *)&(this->Unit).WorldUpSpaceCache.Key.field_0x1 = uVar11;
  (this->Unit).WorldUpSpaceCache.Key.Name.ComparisonIndex = (FNameEntryId)FVar12.Value;
  *(undefined8 *)&(this->Unit).WorldUpSpaceCache.Key.Name.Number = uVar9;
  uVar19 = *(undefined4 *)&(pFVar22->WorldUpSpaceCache).field_0x14;
  pFVar10 = (pFVar22->WorldUpSpaceCache).Element;
  (this->Unit).WorldUpSpaceCache.ContainerVersion = (pFVar22->WorldUpSpaceCache).ContainerVersion;
  *(undefined4 *)&(this->Unit).WorldUpSpaceCache.field_0x14 = uVar19;
  (this->Unit).WorldUpSpaceCache.Element = pFVar10;
  uVar11 = *(undefined3 *)&(pFVar22->ChildCache).Key.field_0x1;
  FVar12.Value = (pFVar22->ChildCache).Key.Name.ComparisonIndex.Value;
  uVar9 = *(undefined8 *)&(pFVar22->ChildCache).Key.Name.Number;
  (this->Unit).ChildCache.Key.Type = (pFVar22->ChildCache).Key.Type;
  *(undefined3 *)&(this->Unit).ChildCache.Key.field_0x1 = uVar11;
  (this->Unit).ChildCache.Key.Name.ComparisonIndex = (FNameEntryId)FVar12.Value;
  *(undefined8 *)&(this->Unit).ChildCache.Key.Name.Number = uVar9;
  uVar19 = *(undefined4 *)&(pFVar22->ChildCache).field_0x14;
  pFVar10 = (pFVar22->ChildCache).Element;
  (this->Unit).ChildCache.ContainerVersion = (pFVar22->ChildCache).ContainerVersion;
  *(undefined4 *)&(this->Unit).ChildCache.field_0x14 = uVar19;
  (this->Unit).ChildCache.Element = pFVar10;
  if (pTVar4 != pTVar3) {
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Unit).ParentCaches.ArrayNum = (pFVar22->ParentCaches).ArrayNum;
    (this->Unit).ParentCaches.ArrayMax = (pFVar22->ParentCaches).ArrayMax;
    (pFVar22->ParentCaches).ArrayNum = 0;
    (pFVar22->ParentCaches).ArrayMax = 0;
  }
  (this->Unit).bIsInitialized = pFVar22->bIsInitialized;
  if (local_1a8.ParentCaches.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.ParentCaches.AllocatorInstance.Data);
  }
  if (local_1a8.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Parents.AllocatorInstance.Data);
  }
  uVar20 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar20;
}

// RunControlRigUnitTest @ 14a46eac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_AimConstraintLocalSpaceOffsetTest::RunControlRigUnitTest
          (FRigUnit_AimConstraintLocalSpaceOffsetTest *this,FString *param_1)

{
  TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong *this_00;
  FRigElementKey *pFVar2;
  FControlRigExecuteContext *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  undefined1 uVar17;
  int iVar18;
  URigHierarchy *pUVar19;
  UClass *pUVar20;
  FName *pFVar21;
  FScriptContainerElement *pFVar22;
  undefined8 uVar23;
  URigHierarchy *pUVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  double dVar29;
  double dVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStackY_6f8 [32];
  FRigElementKey local_6a8;
  undefined4 uStack_69c;
  FRigElementKey local_698;
  undefined4 uStack_68c;
  undefined4 local_688;
  FNameEntryId FStack_684;
  uint uStack_680;
  uint local_67c;
  FNameEntryId FStack_678;
  undefined4 uStack_674;
  uint local_670;
  FNameEntryId FStack_66c;
  undefined4 uStack_668;
  uint local_664;
  FNameEntryId FStack_660;
  undefined4 uStack_65c;
  FRigElementKey local_658;
  FRigElementKey local_648;
  FRigElementKey local_638;
  FName local_628 [2];
  FRigElementKey local_618;
  FRigElementKey local_608;
  FRigElementKey local_5f8;
  FRigElementKey local_5e8;
  FString local_5d8;
  FString local_5c8;
  FName local_5b8;
  FName local_5b0;
  FName local_5a8;
  FName local_5a0;
  FRigElementKey local_598;
  double local_588;
  double dStack_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 uStack_568;
  double local_560;
  double local_548;
  double local_530;
  TTransform<double> local_528;
  TTransform<double> local_4c8;
  TTransform<double> local_468;
  TTransform<double> local_408;
  TTransform<double> local_3a8;
  TTransform<double> local_348;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  double local_238;
  double dStack_230;
  undefined1 local_228 [16];
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  double dStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  double local_178;
  double dStack_170;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_6f8;
  pUVar19 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  pUVar24 = (URigHierarchy *)0x0;
  if (pUVar19 == (URigHierarchy *)0x0) {
LAB_14a46eb56:
    pUVar19 = pUVar24;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar18 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar20->_padding_)) goto LAB_14a46eb56;
  }
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  uVar33 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar34 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_664 = local_664 & 0xffffff00;
  FStack_660.Value = 0;
  uStack_65c = 0;
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[3];
  uVar31 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar32 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_2e8._8_4_ = uVar33;
  local_2e8._0_8_ = (double)fVar5;
  local_2e8._12_4_ = uVar34;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8._8_4_ = uVar31;
  local_2a8._0_8_ = (double)fVar6;
  local_2a8._12_4_ = uVar32;
  local_2d8 = (double)fVar7;
  dStack_2d0 = (double)fVar9;
  local_298 = (double)fVar8;
  dStack_290 = (double)fVar10;
  pFVar21 = ::FName::FName(&local_5b8,L"Child");
  local_618.Name.ComparisonIndex.Value = FStack_660.Value;
  local_618._0_4_ = local_664;
  local_528.Rotation.XY.m128d_f64[1]._0_4_ = uVar33;
  local_528.Rotation.XY.m128d_f64[0] = (double)fVar5;
  local_528.Rotation.XY.m128d_f64[1]._4_4_ = uVar34;
  local_528.Translation.XY.m128d_f64[0] = 0.0;
  local_528.Translation.XY.m128d_f64[1] = 0.0;
  local_528.Translation.ZW.m128d_f64[0] = 0.0;
  local_528.Translation.ZW.m128d_f64[1] = 0.0;
  local_528.Scale3D.XY.m128d_f64[1]._0_4_ = uVar31;
  local_528.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_528.Scale3D.XY.m128d_f64[1]._4_4_ = uVar32;
  local_618.Name.Number = 0;
  local_528.Rotation.ZW.m128d_f64[0] = (double)fVar7;
  local_528.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  local_528.Scale3D.ZW.m128d_f64[0] = (double)fVar8;
  local_528.Scale3D.ZW.m128d_f64[1] = (double)fVar10;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar19,&local_658,*pFVar21,&local_618,&local_528,true,User,
             false,false);
  pUVar19 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar19 == (URigHierarchy *)0x0) {
LAB_14a46ec6b:
    pUVar19 = pUVar24;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar18 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar20->_padding_)) goto LAB_14a46ec6b;
  }
  dVar12 = _UNK_15076bd28;
  dVar30 = ___xmm_40240000000000000000000000000000;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  uVar33 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar34 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[3];
  uVar31 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar32 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_278._8_4_ = uVar33;
  local_278._0_8_ = (double)fVar8;
  local_278._12_4_ = uVar34;
  local_268 = ___xmm_40240000000000000000000000000000;
  dStack_260 = _UNK_15076bd28;
  local_258 = 0;
  uStack_250 = 0;
  local_248._8_4_ = uVar31;
  local_248._0_8_ = (double)fVar6;
  local_248._12_4_ = uVar32;
  local_288 = (double)fVar5;
  dStack_280 = (double)fVar7;
  local_238 = (double)fVar9;
  dStack_230 = (double)fVar10;
  ::FName::FName(local_628,L"Child");
  FStack_684 = local_628[0].ComparisonIndex.Value;
  uStack_680 = local_628[0].Number;
  local_688 = CONCAT31(local_688._1_3_,1);
  pFVar21 = ::FName::FName(&local_5b0,L"ChildTarget");
  local_608.Name.ComparisonIndex.Value = FStack_684.Value;
  local_608._0_4_ = local_688;
  local_608.Name.Number = uStack_680;
  local_4c8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar33;
  local_4c8.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_4c8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar34;
  local_4c8.Translation.XY.m128d_f64[0] = dVar30;
  local_4c8.Translation.XY.m128d_f64[1] = dVar12;
  local_4c8.Translation.ZW.m128d_f64[0] = 0.0;
  local_4c8.Translation.ZW.m128d_f64[1] = 0.0;
  local_4c8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar31;
  local_4c8.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_4c8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar32;
  local_4c8.Rotation.XY.m128d_f64[0] = (double)fVar5;
  local_4c8.Rotation.XY.m128d_f64[1] = (double)fVar7;
  local_4c8.Scale3D.ZW.m128d_f64[0] = (double)fVar9;
  local_4c8.Scale3D.ZW.m128d_f64[1] = (double)fVar10;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar19,&local_598,*pFVar21,&local_608,&local_4c8,false,User
             ,false,false);
  pUVar19 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar19 == (URigHierarchy *)0x0) {
LAB_14a46ed9f:
    pUVar19 = pUVar24;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar18 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar20->_padding_)) goto LAB_14a46ed9f;
  }
  dVar29 = _UNK_151444f38;
  dVar11 = ___xmm_00000000000000004024000000000000;
  dVar12 = _UNK_15104e4d8;
  dVar30 = ___xmm_40240000000000004024000000000000;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  uVar33 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar34 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_67c = local_67c & 0xffffff00;
  FStack_678.Value = 0;
  uStack_674 = 0;
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[3];
  uVar31 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar32 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_228._8_4_ = uVar33;
  local_228._0_8_ = (double)fVar5;
  local_228._12_4_ = uVar34;
  local_208 = ___xmm_40240000000000004024000000000000;
  dStack_200 = _UNK_15104e4d8;
  local_1f8 = ___xmm_00000000000000004024000000000000;
  dStack_1f0 = _UNK_151444f38;
  local_1e8._8_4_ = uVar31;
  local_1e8._0_8_ = (double)fVar6;
  local_1e8._12_4_ = uVar32;
  local_218 = (double)fVar7;
  dStack_210 = (double)fVar9;
  local_1d8 = (double)fVar8;
  dStack_1d0 = (double)fVar10;
  pFVar21 = ::FName::FName(&local_5a8,L"Parent1");
  local_5f8.Name.ComparisonIndex.Value = FStack_678.Value;
  local_5f8._0_4_ = local_67c;
  local_468.Rotation.XY.m128d_f64[1]._0_4_ = uVar33;
  local_468.Rotation.XY.m128d_f64[0] = (double)fVar5;
  local_468.Rotation.XY.m128d_f64[1]._4_4_ = uVar34;
  local_468.Translation.XY.m128d_f64[0] = dVar30;
  local_468.Translation.XY.m128d_f64[1] = dVar12;
  local_468.Translation.ZW.m128d_f64[0] = dVar11;
  local_468.Translation.ZW.m128d_f64[1] = dVar29;
  local_468.Scale3D.XY.m128d_f64[1]._0_4_ = uVar31;
  local_468.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_468.Scale3D.XY.m128d_f64[1]._4_4_ = uVar32;
  local_5f8.Name.Number = 0;
  local_468.Rotation.ZW.m128d_f64[0] = (double)fVar7;
  local_468.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  local_468.Scale3D.ZW.m128d_f64[0] = (double)fVar8;
  local_468.Scale3D.ZW.m128d_f64[1] = (double)fVar10;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar19,&local_648,*pFVar21,&local_5f8,&local_468,true,User,
             false,false);
  pUVar19 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar19 == (URigHierarchy *)0x0) {
LAB_14a46eec4:
    pUVar19 = pUVar24;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar18 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar20->_padding_)) goto LAB_14a46eec4;
  }
  dVar15 = _UNK_15219d4d8;
  dVar14 = ___xmm_4024000000000000c024000000000000;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  uVar33 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar34 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_670 = local_670 & 0xffffff00;
  FStack_66c.Value = 0;
  uStack_668 = 0;
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[3];
  uVar31 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar32 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_1c8._8_4_ = uVar33;
  local_1c8._0_8_ = (double)fVar5;
  local_1c8._12_4_ = uVar34;
  local_1a8 = ___xmm_4024000000000000c024000000000000;
  dStack_1a0 = _UNK_15219d4d8;
  local_198 = dVar11;
  dStack_190 = dVar29;
  local_188._8_4_ = uVar31;
  local_188._0_8_ = (double)fVar6;
  local_188._12_4_ = uVar32;
  local_1b8 = (double)fVar7;
  dStack_1b0 = (double)fVar9;
  local_178 = (double)fVar8;
  dStack_170 = (double)fVar10;
  pFVar21 = ::FName::FName(&local_5a0,L"Parent2");
  local_5e8.Name.ComparisonIndex.Value = FStack_66c.Value;
  local_5e8._0_4_ = local_670;
  local_408.Rotation.XY.m128d_f64[1]._0_4_ = uVar33;
  local_408.Rotation.XY.m128d_f64[0] = (double)fVar5;
  local_408.Rotation.XY.m128d_f64[1]._4_4_ = uVar34;
  local_408.Translation.XY.m128d_f64[0] = dVar14;
  local_408.Translation.XY.m128d_f64[1] = dVar15;
  local_408.Translation.ZW.m128d_f64[0] = dVar11;
  local_408.Translation.ZW.m128d_f64[1] = dVar29;
  local_408.Scale3D.XY.m128d_f64[1]._0_4_ = uVar31;
  local_408.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_408.Scale3D.XY.m128d_f64[1]._4_4_ = uVar32;
  local_5e8.Name.Number = 0;
  local_408.Rotation.ZW.m128d_f64[0] = (double)fVar7;
  local_408.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  local_408.Scale3D.ZW.m128d_f64[0] = (double)fVar8;
  local_408.Scale3D.ZW.m128d_f64[1] = (double)fVar10;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar19,&local_638,*pFVar21,&local_5e8,&local_408,true,User,
             false,false);
  dStack_580 = _UNK_15061cbc8;
  local_588 = ___xmm_3ff00000000000000000000000000000;
  pTVar1 = &(this->Unit).Parents;
  (this->Unit).AimAxis.field0_0x0._s_0.X = ___xmm_3ff00000000000000000000000000000;
  (this->Unit).AimAxis.field0_0x0._s_0.Y = dStack_580;
  uStack_68c = 0x3f800000;
  (this->Unit).AimAxis.field0_0x0._s_0.Z = 0.0;
  dVar11 = __real_3ff0000000000000;
  local_578 = 0;
  local_560 = __real_3ff0000000000000;
  (this->Unit).UpAxis.field0_0x0._s_0.X = 0.0;
  (this->Unit).UpAxis.field0_0x0._s_0.Y = 0.0;
  (this->Unit).UpAxis.field0_0x0._s_0.Z = dVar11;
  (this->Unit).Child.Type = local_658.Type;
  *(undefined3 *)&(this->Unit).Child.field_0x1 = local_658._1_3_;
  (this->Unit).Child.Name.ComparisonIndex = (FNameEntryId)local_658.Name.ComparisonIndex.Value;
  (this->Unit).Child.Name.Number = local_658.Name.Number;
  pFVar2 = (FRigElementKey *)(pTVar1->AllocatorInstance).Data;
  local_698.Name.Number = local_648.Name.Number;
  local_698.Type = local_648.Type;
  local_698._1_3_ = local_648._1_3_;
  local_698.Name.ComparisonIndex.Value = local_648.Name.ComparisonIndex.Value;
  local_570 = 0;
  uStack_568 = 0;
  if ((pFVar2 <= &local_698) &&
     (&local_698 <
      (FRigElementKey *)((longlong)pFVar2 + (longlong)(this->Unit).Parents.ArrayMax * 0x10))) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar16) {
      pcVar4 = (code *)swi(3);
      uVar17 = (*pcVar4)();
      return (bool)uVar17;
    }
  }
  iVar18 = (this->Unit).Parents.ArrayNum;
  if (iVar18 == (this->Unit).Parents.ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar1->AllocatorInstance,&(this->Unit).Parents.ArrayMax);
  }
  uStack_69c = 0x3f800000;
  pFVar22 = (pTVar1->AllocatorInstance).Data + (longlong)iVar18 * 0x10;
  (this->Unit).Parents.ArrayNum = iVar18 + 1;
  *(undefined8 *)pFVar22 = local_698._0_8_;
  *(ulonglong *)(pFVar22 + 8) = CONCAT44(uStack_68c,local_698.Name.Number);
  pFVar2 = (FRigElementKey *)(pTVar1->AllocatorInstance).Data;
  local_6a8.Name.Number = local_638.Name.Number;
  local_6a8.Type = local_638.Type;
  local_6a8._1_3_ = local_638._1_3_;
  local_6a8.Name.ComparisonIndex.Value = local_638.Name.ComparisonIndex.Value;
  if ((pFVar2 <= &local_6a8) &&
     (&local_6a8 <
      (FRigElementKey *)((longlong)pFVar2 + (longlong)(this->Unit).Parents.ArrayMax * 0x10))) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar16) {
      pcVar4 = (code *)swi(3);
      uVar17 = (*pcVar4)();
      return (bool)uVar17;
    }
  }
  iVar18 = (this->Unit).Parents.ArrayNum;
  if (iVar18 == (this->Unit).Parents.ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar1->AllocatorInstance,&(this->Unit).Parents.ArrayMax);
  }
  (this->Unit).Parents.ArrayNum = iVar18 + 1;
  pFVar22 = (pTVar1->AllocatorInstance).Data + (longlong)iVar18 * 0x10;
  this_00 = &this->_padding_;
  *(undefined8 *)pFVar22 = local_6a8._0_8_;
  *(ulonglong *)(pFVar22 + 8) = CONCAT44(uStack_69c,local_6a8.Name.Number);
  pUVar19 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar19 == (URigHierarchy *)0x0) {
LAB_14a46f1c3:
    pUVar19 = pUVar24;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar18 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar20->_padding_)) goto LAB_14a46f1c3;
  }
  URigHierarchy::ResetPoseToInitial(pUVar19,Bone);
  pFVar3 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).bMaintainOffset = false;
  FRigUnit_AimConstraintLocalSpaceOffset::Execute(&this->Unit,pFVar3);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_5d8,L"unexpected translation for maintain offset off");
  pUVar19 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar19 == (URigHierarchy *)0x0) {
LAB_14a46f234:
    pUVar19 = pUVar24;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar18 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar20->_padding_)) goto LAB_14a46f234;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar19,&local_168,1,false);
  dVar11 = __real_3f847ae140000000;
  uVar28 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar26 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_548 = local_168.Translation.ZW.m128d_f64[0];
  uVar25 = local_168.Translation.XY.m128d_f64[0]._0_4_ &
           (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar27 = local_168.Translation.XY.m128d_f64[0]._4_4_ &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f847ae140000000 <= (double)CONCAT44(uVar27,uVar25) &&
        (double)CONCAT44(uVar27,uVar25) != __real_3f847ae140000000) ||
      (dVar29 = local_168.Translation.XY.m128d_f64[1] - __real_401c48c600000000,
      __real_3f847ae140000000 <
      (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar29,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (uVar25 = SUB84(local_168.Translation.ZW.m128d_f64[0] - __real_401c48c600000000,0) &
               (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar27 = (uint)((ulonglong)(local_168.Translation.ZW.m128d_f64[0] - __real_401c48c600000000) >>
                    0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f847ae140000000 <= (double)CONCAT44(uVar27,uVar25) &&
     (double)CONCAT44(uVar27,uVar25) != __real_3f847ae140000000)) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar4)(this,uVar23,&local_5d8);
  if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
  }
  pUVar19 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar19 == (URigHierarchy *)0x0) {
LAB_14a46f303:
    pUVar19 = pUVar24;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar18 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar20->_padding_)) goto LAB_14a46f303;
  }
  URigHierarchy::ResetPoseToInitial(pUVar19,Bone);
  pUVar19 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar19 == (URigHierarchy *)0x0) {
LAB_14a46f343:
    pUVar19 = pUVar24;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar18 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar20->_padding_)) goto LAB_14a46f343;
  }
  dVar13 = _UNK_151444f48;
  dVar29 = ___xmm_00000000000000004034000000000000;
  local_3a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_3a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_3a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_3a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_3a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_3a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_3a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_3a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_3a8.Translation.XY.m128d_f64[0] = dVar30;
  local_3a8.Translation.XY.m128d_f64[1] = dVar12;
  local_3a8.Translation.ZW.m128d_f64[0] = ___xmm_00000000000000004034000000000000;
  local_3a8.Translation.ZW.m128d_f64[1] = _UNK_151444f48;
  URigHierarchy::SetGlobalTransformByIndex(pUVar19,2,&local_3a8,false,true,false,false);
  pUVar19 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar19 == (URigHierarchy *)0x0) {
LAB_14a46f3f4:
    pUVar19 = pUVar24;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar18 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar20->_padding_)) goto LAB_14a46f3f4;
  }
  local_348.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_348.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_348.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_348.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_348.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_348.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_348.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_348.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_348.Translation.XY.m128d_f64[0] = dVar14;
  local_348.Translation.XY.m128d_f64[1] = dVar15;
  local_348.Translation.ZW.m128d_f64[0] = dVar29;
  local_348.Translation.ZW.m128d_f64[1] = dVar13;
  URigHierarchy::SetGlobalTransformByIndex(pUVar19,3,&local_348,false,true,false,false);
  pFVar3 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).bMaintainOffset = true;
  FRigUnit_AimConstraintLocalSpaceOffset::Execute(&this->Unit,pFVar3);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_5c8,L"unexpected translation for maintain offset on");
  pUVar19 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar19 != (URigHierarchy *)0x0) {
    pUVar20 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar18 = (int)pUVar20->_padding_;
    if ((iVar18 <= *(int *)(pUVar19->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar18 * 8) ==
        &pUVar20->_padding_)) goto LAB_14a46f4d0;
  }
  pUVar19 = pUVar24;
LAB_14a46f4d0:
  URigHierarchy::GetGlobalTransformByIndex(pUVar19,&local_108,1,false);
  local_530 = local_108.Translation.ZW.m128d_f64[0];
  uVar25 = local_108.Translation.XY.m128d_f64[0]._0_4_ & uVar26;
  uVar27 = local_108.Translation.XY.m128d_f64[0]._4_4_ & uVar28;
  if (((dVar11 <= (double)CONCAT44(uVar27,uVar25) && (double)CONCAT44(uVar27,uVar25) != dVar11) ||
      (dVar30 = local_108.Translation.XY.m128d_f64[1] - ___real_4022f95820000000,
      dVar11 < (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar28,SUB84(dVar30,0) & uVar26)
      )) || (uVar26 = SUB84(local_108.Translation.ZW.m128d_f64[0] - ___real_40094bc6a0000000,0) &
                      uVar26,
            uVar28 = (uint)((ulonglong)
                            (local_108.Translation.ZW.m128d_f64[0] - ___real_40094bc6a0000000) >>
                           0x20) & uVar28,
            dVar11 <= (double)CONCAT44(uVar28,uVar26) && (double)CONCAT44(uVar28,uVar26) != dVar11))
  {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar4)(this,uVar23,&local_5c8,0);
  if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a46f5f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_AimConstraintLocalSpaceOffsetTest::GetBeautifiedTestName
          (FRigUnit_AimConstraintLocalSpaceOffsetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"ControlRig.Units.FRigUnit_AimConstraintLocalSpaceOffset");
  return __return_storage_ptr__;
}

