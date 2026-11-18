// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a4b0630

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EAutomationTestFlags __thiscall
FRigUnit_RotationConstraintTest::GetTestFlags(FRigUnit_RotationConstraintTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4b0640

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigUnit_RotationConstraintTest::IsStressTest(FRigUnit_RotationConstraintTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4b0690

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall
FRigUnit_RotationConstraintTest::GetRequiredDeviceNum(FRigUnit_RotationConstraintTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4b06a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_RotationConstraintTest::GetTestSourceFileName
          (FRigUnit_RotationConstraintTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Highlevel\\Hierarchy\\RigUnit_TransformConstraint.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4b0740

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
FRigUnit_RotationConstraintTest::GetTestSourceFileLine(FRigUnit_RotationConstraintTest *this)

{
  return 0x49d;
}

// GetTests @ 14a4b0760

/* WARNING: Removing unreachable block (ram,0x00014a4b084d) */
/* WARNING: Removing unreachable block (ram,0x00014a4b0918) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_RotationConstraintTest::GetTests
          (FRigUnit_RotationConstraintTest *this,
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
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_RotationConstraint");
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

// RunTest @ 14a4b0b70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_RotationConstraintTest::RunTest(FRigUnit_RotationConstraintTest *this,FString *param_1)

{
  TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined3 uVar5;
  FNameEntryId FVar6;
  bool bVar7;
  undefined1 uVar8;
  URigHierarchy *this_00;
  UClass *pUVar9;
  FRigUnit_RotationConstraint *pFVar10;
  FRigUnit_RotationConstraint local_48;
  
  (**(code **)(*(longlong *)this + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar9 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar3 = (int)pUVar9->_padding_;
    if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar9->_padding_)) goto LAB_14a4b0bd2;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4b0bd2:
  URigHierarchy::Reset(this_00);
  pFVar10 = FRigUnit_RotationConstraint::FRigUnit_RotationConstraint(&local_48);
  pTVar2 = &(this->Unit).Parents;
  uVar5 = *(undefined3 *)&(pFVar10->Child).field_0x1;
  FVar6.Value = (pFVar10->Child).Name.ComparisonIndex.Value;
  pTVar1 = &pFVar10->Parents;
  (this->Unit).Child.Type = (pFVar10->Child).Type;
  *(undefined3 *)&(this->Unit).Child.field_0x1 = uVar5;
  (this->Unit).Child.Name.ComparisonIndex = (FNameEntryId)FVar6.Value;
  (this->Unit).Child.Name.Number = (pFVar10->Child).Name.Number;
  (this->Unit).bMaintainOffset = pFVar10->bMaintainOffset;
  bVar7 = (pFVar10->Filter).bY;
  (this->Unit).Filter.bX = (pFVar10->Filter).bX;
  (this->Unit).Filter.bY = bVar7;
  (this->Unit).Filter.bZ = (pFVar10->Filter).bZ;
  if (pTVar2 != pTVar1) {
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Unit).Parents.ArrayNum = (pFVar10->Parents).ArrayNum;
    (this->Unit).Parents.ArrayMax = (pFVar10->Parents).ArrayMax;
    (pFVar10->Parents).ArrayNum = 0;
    (pFVar10->Parents).ArrayMax = 0;
  }
  (this->Unit).AdvancedSettings = pFVar10->AdvancedSettings;
  (this->Unit).Weight = pFVar10->Weight;
  if (local_48.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Parents.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x00014a4b0ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar8;
}

// RunControlRigUnitTest @ 14a4b0d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_RotationConstraintTest::RunControlRigUnitTest
          (FRigUnit_RotationConstraintTest *this,FString *param_1)

{
  TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *this_00;
  FRigElementKey *pFVar2;
  FControlRigExecuteContext *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  bool bVar22;
  undefined1 uVar23;
  int iVar24;
  uint uVar25;
  URigHierarchy *pUVar26;
  UClass *pUVar27;
  TQuat<double> *pTVar28;
  FName *pFVar29;
  FScriptContainerElement *pFVar30;
  FString *pFVar31;
  uint uVar32;
  FString *pFVar33;
  undefined8 uVar34;
  URigHierarchy *pUVar35;
  longlong lVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined4 uVar61;
  undefined4 uVar62;
  undefined1 auVar63 [16];
  double dVar64;
  double dVar65;
  undefined1 auStackY_b08 [32];
  TQuat<double> local_ab8;
  FRigElementKey local_a98;
  undefined4 uStack_a8c;
  FRigElementKey local_a88;
  undefined4 uStack_a7c;
  FRigElementKey local_a78;
  undefined4 uStack_a6c;
  FRigElementKey local_a68;
  undefined4 uStack_a5c;
  uint local_a58;
  FNameEntryId FStack_a54;
  undefined4 uStack_a50;
  uint local_a4c;
  FNameEntryId FStack_a48;
  undefined4 uStack_a44;
  uint local_a40;
  FNameEntryId FStack_a3c;
  undefined4 uStack_a38;
  uint local_a34;
  FNameEntryId FStack_a30;
  undefined4 uStack_a2c;
  uint local_a28;
  FNameEntryId FStack_a24;
  undefined4 uStack_a20;
  FRigElementKey local_a18;
  FRigElementKey local_a08;
  FRigElementKey local_9f8;
  FRigElementKey local_9e8;
  FRigElementKey local_9d8;
  FRigElementKey local_9c8;
  FRigElementKey local_9b8;
  FRigElementKey local_9a8;
  FRigElementKey local_998;
  FRigElementKey local_988;
  FString local_978;
  FString local_968;
  FString local_958;
  FString local_948;
  FName local_938;
  FName local_930;
  FName local_928;
  FName local_920 [5];
  TVector<double>_u_0 local_8f8;
  TVector<double>_u_0 local_8e0;
  TVector<double>_u_0 local_8c8;
  FName local_8b0;
  TVector<double>_u_0 local_8a8;
  TVector<double>_u_0 local_890;
  TVector<double>_u_0 local_878;
  TVector<double>_u_0 local_860;
  TVector<double>_u_0 local_848;
  TVector<double>_u_0 local_830;
  TVector<double>_u_0 local_818;
  TVector<double>_u_0 local_800;
  TTransform<double> local_7e8;
  TTransform<double> local_788;
  TTransform<double> local_728;
  TTransform<double> local_6c8;
  TTransform<double> local_668;
  TTransform<double> local_608;
  TTransform<double> local_5a8;
  double local_548;
  double dStack_540;
  double local_538;
  double dStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  double local_508;
  double dStack_500;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double dStack_4d0;
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  double dStack_4b0;
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  TQuat<double> local_368;
  TQuat<double> local_348;
  TQuat<double> local_328;
  TQuat<double> local_308;
  TQuat<double> local_2e8;
  TQuat<double> local_2c8;
  TQuat<double> local_2a8;
  TQuat<double> local_288;
  TQuat<double> local_268;
  TQuat<double> local_248;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_b08;
  pUVar26 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  pUVar35 = (URigHierarchy *)0x0;
  if (pUVar26 == (URigHierarchy *)0x0) {
LAB_14a4b0dac:
    pUVar26 = pUVar35;
  }
  else {
    pUVar27 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar24 = (int)pUVar27->_padding_;
    if ((*(int *)(pUVar26->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar26->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar27->_padding_)) goto LAB_14a4b0dac;
  }
  local_8f8._s_0.X = ___xmm_c024000000000000c024000000000000;
  local_8f8._s_0.Y = _UNK_1520301b8;
  local_8f8._s_0.Z = __real_c024000000000000;
  pTVar28 = AnimationCore::QuatFromEuler(&local_368,(TVector<double> *)&local_8f8._s_0,XZY,false);
  dVar19 = _UNK_150689688;
  dVar18 = ___xmm_3ff00000000000003ff0000000000000;
  dVar17 = _UNK_150689518;
  dVar16 = ___xmm_00000000000000003ff0000000000000;
  local_508 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_500 = _UNK_150689688;
  dVar8 = pTVar28->X;
  dVar9 = pTVar28->Y;
  dVar10 = pTVar28->Z;
  dVar11 = pTVar28->W;
  local_528 = 0;
  uStack_520 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_4f8 = ___xmm_00000000000000003ff0000000000000;
  dStack_4f0 = _UNK_150689518;
  local_a58 = local_a58 & 0xffffff00;
  FStack_a54.Value = 0;
  uStack_a50 = 0;
  local_548 = dVar8;
  dStack_540 = dVar9;
  local_538 = dVar10;
  dStack_530 = dVar11;
  pFVar29 = ::FName::FName(&local_8b0,L"Child");
  local_a08.Name.ComparisonIndex.Value = FStack_a54.Value;
  local_a08._0_4_ = local_a58;
  local_7e8.Translation.XY.m128d_f64[0] = 0.0;
  local_7e8.Translation.XY.m128d_f64[1] = 0.0;
  local_7e8.Translation.ZW.m128d_f64[0] = 0.0;
  local_7e8.Translation.ZW.m128d_f64[1] = 0.0;
  local_7e8.Scale3D.XY.m128d_f64[0] = dVar18;
  local_7e8.Scale3D.XY.m128d_f64[1] = dVar19;
  local_7e8.Scale3D.ZW.m128d_f64[0] = dVar16;
  local_7e8.Scale3D.ZW.m128d_f64[1] = dVar17;
  local_a08.Name.Number = 0;
  local_7e8.Rotation.XY.m128d_f64[0] = dVar8;
  local_7e8.Rotation.XY.m128d_f64[1] = dVar9;
  local_7e8.Rotation.ZW.m128d_f64[0] = dVar10;
  local_7e8.Rotation.ZW.m128d_f64[1] = dVar11;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar26,&local_9c8,*pFVar29,&local_a08,&local_7e8,true,User,
             false,false);
  pUVar26 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  if (pUVar26 == (URigHierarchy *)0x0) {
LAB_14a4b0ef1:
    pUVar26 = pUVar35;
  }
  else {
    pUVar27 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar24 = (int)pUVar27->_padding_;
    if ((*(int *)(pUVar26->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar26->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar27->_padding_)) goto LAB_14a4b0ef1;
  }
  local_8e0._s_0.X = ___xmm_c03e000000000000403e000000000000;
  local_8e0._s_0.Y = _UNK_15219d568;
  local_8e0._s_0.Z = __real_c03e000000000000;
  pTVar28 = AnimationCore::QuatFromEuler(&local_348,(TVector<double> *)&local_8e0._s_0,XZY,false);
  dVar21 = _UNK_151444f88;
  dVar20 = ___xmm_40340000000000004034000000000000;
  dVar65 = _UNK_151444f48;
  dVar64 = ___xmm_00000000000000004034000000000000;
  local_4c8 = ___xmm_40340000000000004034000000000000;
  dStack_4c0 = _UNK_151444f88;
  dVar8 = pTVar28->X;
  dVar9 = pTVar28->Y;
  dVar10 = pTVar28->Z;
  dVar11 = pTVar28->W;
  local_4b8 = ___xmm_00000000000000004034000000000000;
  dStack_4b0 = _UNK_151444f48;
  local_4a8 = dVar18;
  dStack_4a0 = dVar19;
  local_498 = dVar16;
  dStack_490 = dVar17;
  local_a4c = local_a4c & 0xffffff00;
  FStack_a48.Value = 0;
  uStack_a44 = 0;
  local_4e8 = dVar8;
  dStack_4e0 = dVar9;
  local_4d8 = dVar10;
  dStack_4d0 = dVar11;
  pFVar29 = ::FName::FName(&local_938,L"Parent1");
  local_9f8.Name.ComparisonIndex.Value = FStack_a48.Value;
  local_9f8._0_4_ = local_a4c;
  local_788.Translation.XY.m128d_f64[0] = dVar20;
  local_788.Translation.XY.m128d_f64[1] = dVar21;
  local_788.Translation.ZW.m128d_f64[0] = dVar64;
  local_788.Translation.ZW.m128d_f64[1] = dVar65;
  local_788.Scale3D.XY.m128d_f64[0] = dVar18;
  local_788.Scale3D.XY.m128d_f64[1] = dVar19;
  local_788.Scale3D.ZW.m128d_f64[0] = dVar16;
  local_788.Scale3D.ZW.m128d_f64[1] = dVar17;
  local_9f8.Name.Number = 0;
  local_788.Rotation.XY.m128d_f64[0] = dVar8;
  local_788.Rotation.XY.m128d_f64[1] = dVar9;
  local_788.Rotation.ZW.m128d_f64[0] = dVar10;
  local_788.Rotation.ZW.m128d_f64[1] = dVar11;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar26,&local_9b8,*pFVar29,&local_9f8,&local_788,true,User,
             false,false);
  pUVar26 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  if (pUVar26 == (URigHierarchy *)0x0) {
LAB_14a4b1034:
    pUVar26 = pUVar35;
  }
  else {
    pUVar27 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar24 = (int)pUVar27->_padding_;
    if ((*(int *)(pUVar26->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar26->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar27->_padding_)) goto LAB_14a4b1034;
  }
  local_8c8._s_0.X = ___xmm_c044000000000000c044000000000000;
  local_8c8._s_0.Y = _UNK_15219d578;
  local_8c8._s_0.Z = __real_4044000000000000;
  pTVar28 = AnimationCore::QuatFromEuler(&local_328,(TVector<double> *)&local_8c8._s_0,XZY,false);
  dVar21 = _UNK_151e77bc8;
  dVar20 = ___xmm_00000000000000004044000000000000;
  dVar65 = _UNK_151bce3f8;
  dVar64 = ___xmm_40440000000000004044000000000000;
  local_468 = ___xmm_40440000000000004044000000000000;
  dStack_460 = _UNK_151bce3f8;
  dVar8 = pTVar28->X;
  dVar9 = pTVar28->Y;
  dVar10 = pTVar28->Z;
  dVar11 = pTVar28->W;
  local_458 = ___xmm_00000000000000004044000000000000;
  dStack_450 = _UNK_151e77bc8;
  local_448 = dVar18;
  dStack_440 = dVar19;
  local_438 = dVar16;
  dStack_430 = dVar17;
  local_a40 = local_a40 & 0xffffff00;
  FStack_a3c.Value = 0;
  uStack_a38 = 0;
  local_488 = dVar8;
  dStack_480 = dVar9;
  local_478 = dVar10;
  dStack_470 = dVar11;
  pFVar29 = ::FName::FName(&local_930,L"Parent2");
  local_a18.Name.ComparisonIndex.Value = FStack_a3c.Value;
  local_a18._0_4_ = local_a40;
  local_728.Translation.XY.m128d_f64[0] = dVar64;
  local_728.Translation.XY.m128d_f64[1] = dVar65;
  local_728.Translation.ZW.m128d_f64[0] = dVar20;
  local_728.Translation.ZW.m128d_f64[1] = dVar21;
  local_728.Scale3D.XY.m128d_f64[0] = dVar18;
  local_728.Scale3D.XY.m128d_f64[1] = dVar19;
  local_728.Scale3D.ZW.m128d_f64[0] = dVar16;
  local_728.Scale3D.ZW.m128d_f64[1] = dVar17;
  local_a18.Name.Number = 0;
  local_728.Rotation.XY.m128d_f64[0] = dVar8;
  local_728.Rotation.XY.m128d_f64[1] = dVar9;
  local_728.Rotation.ZW.m128d_f64[0] = dVar10;
  local_728.Rotation.ZW.m128d_f64[1] = dVar11;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar26,&local_9a8,*pFVar29,&local_a18,&local_728,true,User,
             false,false);
  pUVar26 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  if (pUVar26 == (URigHierarchy *)0x0) {
LAB_14a4b1177:
    pUVar26 = pUVar35;
  }
  else {
    pUVar27 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar24 = (int)pUVar27->_padding_;
    if ((*(int *)(pUVar26->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar26->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar27->_padding_)) goto LAB_14a4b1177;
  }
  local_800._s_0.X = ___xmm_4049000000000000c049000000000000;
  local_800._s_0.Y = _UNK_150b2d2f8;
  local_800._s_0.Z = __real_c049000000000000;
  pTVar28 = AnimationCore::QuatFromEuler(&local_308,(TVector<double> *)&local_800._s_0,XZY,false);
  dVar21 = _UNK_15219d3b8;
  dVar20 = ___xmm_0000000000000000404e000000000000;
  dVar65 = _UNK_15076bf58;
  dVar64 = ___xmm_404e000000000000404e000000000000;
  local_408 = ___xmm_404e000000000000404e000000000000;
  dStack_400 = _UNK_15076bf58;
  dVar8 = pTVar28->X;
  dVar9 = pTVar28->Y;
  dVar10 = pTVar28->Z;
  dVar11 = pTVar28->W;
  local_3f8 = ___xmm_0000000000000000404e000000000000;
  dStack_3f0 = _UNK_15219d3b8;
  local_3e8 = dVar18;
  dStack_3e0 = dVar19;
  local_3d8 = dVar16;
  dStack_3d0 = dVar17;
  local_a34 = local_a34 & 0xffffff00;
  FStack_a30.Value = 0;
  uStack_a2c = 0;
  local_428 = dVar8;
  dStack_420 = dVar9;
  local_418 = dVar10;
  dStack_410 = dVar11;
  pFVar29 = ::FName::FName(&local_928,L"Parent3");
  local_9e8.Name.ComparisonIndex.Value = FStack_a30.Value;
  local_9e8._0_4_ = local_a34;
  local_6c8.Translation.XY.m128d_f64[0] = dVar64;
  local_6c8.Translation.XY.m128d_f64[1] = dVar65;
  local_6c8.Translation.ZW.m128d_f64[0] = dVar20;
  local_6c8.Translation.ZW.m128d_f64[1] = dVar21;
  local_6c8.Scale3D.XY.m128d_f64[0] = dVar18;
  local_6c8.Scale3D.XY.m128d_f64[1] = dVar19;
  local_6c8.Scale3D.ZW.m128d_f64[0] = dVar16;
  local_6c8.Scale3D.ZW.m128d_f64[1] = dVar17;
  local_9e8.Name.Number = 0;
  local_6c8.Rotation.XY.m128d_f64[0] = dVar8;
  local_6c8.Rotation.XY.m128d_f64[1] = dVar9;
  local_6c8.Rotation.ZW.m128d_f64[0] = dVar10;
  local_6c8.Rotation.ZW.m128d_f64[1] = dVar11;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar26,&local_998,*pFVar29,&local_9e8,&local_6c8,true,User,
             false,false);
  pUVar26 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  dVar8 = dVar64;
  dVar9 = dVar65;
  if (pUVar26 == (URigHierarchy *)0x0) {
LAB_14a4b12c3:
    dVar65 = dVar9;
    dVar64 = dVar8;
    pUVar26 = pUVar35;
  }
  else {
    pUVar27 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar24 = (int)pUVar27->_padding_;
    dVar8 = ___xmm_404e000000000000404e000000000000;
    dVar9 = _UNK_15076bf58;
    if ((*(int *)(pUVar26->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar26->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar27->_padding_)) goto LAB_14a4b12c3;
  }
  local_8a8._s_0.Z = __real_404e000000000000;
  local_8a8._s_0.X = dVar64;
  local_8a8._s_0.Y = dVar65;
  pTVar28 = AnimationCore::QuatFromEuler(&local_2e8,(TVector<double> *)&local_8a8._s_0,XZY,false);
  dVar21 = _UNK_15219d3c8;
  dVar20 = ___xmm_00000000000000004054000000000000;
  dVar65 = _UNK_1517983a8;
  dVar64 = ___xmm_40540000000000004054000000000000;
  local_3a8 = ___xmm_40540000000000004054000000000000;
  dStack_3a0 = _UNK_1517983a8;
  dVar8 = pTVar28->X;
  dVar9 = pTVar28->Y;
  dVar10 = pTVar28->Z;
  dVar11 = pTVar28->W;
  local_398 = ___xmm_00000000000000004054000000000000;
  dStack_390 = _UNK_15219d3c8;
  local_388 = dVar18;
  dStack_380 = dVar19;
  local_378 = dVar16;
  dStack_370 = dVar17;
  local_a28 = local_a28 & 0xffffff00;
  FStack_a24.Value = 0;
  uStack_a20 = 0;
  local_3c8 = dVar8;
  dStack_3c0 = dVar9;
  local_3b8 = dVar10;
  dStack_3b0 = dVar11;
  pFVar29 = ::FName::FName(local_920,L"Parent4");
  local_9d8.Name.ComparisonIndex.Value = FStack_a24.Value;
  local_9d8._0_4_ = local_a28;
  local_668.Translation.XY.m128d_f64[0] = dVar64;
  local_668.Translation.XY.m128d_f64[1] = dVar65;
  local_668.Translation.ZW.m128d_f64[0] = dVar20;
  local_668.Translation.ZW.m128d_f64[1] = dVar21;
  local_668.Scale3D.XY.m128d_f64[0] = dVar18;
  local_668.Scale3D.XY.m128d_f64[1] = dVar19;
  local_668.Scale3D.ZW.m128d_f64[0] = dVar16;
  local_668.Scale3D.ZW.m128d_f64[1] = dVar17;
  local_9d8.Name.Number = 0;
  local_668.Rotation.XY.m128d_f64[0] = dVar8;
  local_668.Rotation.XY.m128d_f64[1] = dVar9;
  local_668.Rotation.ZW.m128d_f64[0] = dVar10;
  local_668.Rotation.ZW.m128d_f64[1] = dVar11;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar26,&local_988,*pFVar29,&local_9d8,&local_668,true,User,
             false,false);
  pTVar1 = &(this->Unit).Parents;
  (this->Unit).Child.Type = local_9c8.Type;
  *(undefined3 *)&(this->Unit).Child.field_0x1 = local_9c8._1_3_;
  (this->Unit).Child.Name.ComparisonIndex = (FNameEntryId)local_9c8.Name.ComparisonIndex.Value;
  (this->Unit).Child.Name.Number = local_9c8.Name.Number;
  pFVar2 = (FRigElementKey *)(pTVar1->AllocatorInstance).Data;
  local_a98.Name.Number = local_9b8.Name.Number;
  local_a98.Type = local_9b8.Type;
  local_a98._1_3_ = local_9b8._1_3_;
  local_a98.Name.ComparisonIndex.Value = local_9b8.Name.ComparisonIndex.Value;
  uStack_a8c = 0x3f800000;
  if (((pFVar2 <= &local_a98) &&
      (&local_a98 <
       (FRigElementKey *)((longlong)pFVar2 + (longlong)(this->Unit).Parents.ArrayMax * 0x10))) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar22)) {
    pcVar4 = (code *)swi(3);
    uVar23 = (*pcVar4)();
    return (bool)uVar23;
  }
  iVar24 = (this->Unit).Parents.ArrayNum;
  if (iVar24 == (this->Unit).Parents.ArrayMax) {
    iVar24 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar1->AllocatorInstance,&(this->Unit).Parents.ArrayMax);
  }
  uStack_a7c = 0x3f800000;
  pFVar30 = (pTVar1->AllocatorInstance).Data + (longlong)iVar24 * 0x10;
  (this->Unit).Parents.ArrayNum = iVar24 + 1;
  *(undefined8 *)pFVar30 = local_a98._0_8_;
  *(ulonglong *)(pFVar30 + 8) = CONCAT44(uStack_a8c,local_a98.Name.Number);
  pFVar2 = (FRigElementKey *)(pTVar1->AllocatorInstance).Data;
  local_a88.Name.Number = local_9a8.Name.Number;
  local_a88.Type = local_9a8.Type;
  local_a88._1_3_ = local_9a8._1_3_;
  local_a88.Name.ComparisonIndex.Value = local_9a8.Name.ComparisonIndex.Value;
  if (((pFVar2 <= &local_a88) &&
      (&local_a88 <
       (FRigElementKey *)((longlong)pFVar2 + (longlong)(this->Unit).Parents.ArrayMax * 0x10))) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar22)) {
    pcVar4 = (code *)swi(3);
    uVar23 = (*pcVar4)();
    return (bool)uVar23;
  }
  iVar24 = (this->Unit).Parents.ArrayNum;
  if (iVar24 == (this->Unit).Parents.ArrayMax) {
    iVar24 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar1->AllocatorInstance,&(this->Unit).Parents.ArrayMax);
  }
  uStack_a6c = 0x3f800000;
  pFVar30 = (pTVar1->AllocatorInstance).Data + (longlong)iVar24 * 0x10;
  (this->Unit).Parents.ArrayNum = iVar24 + 1;
  *(undefined8 *)pFVar30 = local_a88._0_8_;
  *(ulonglong *)(pFVar30 + 8) = CONCAT44(uStack_a7c,local_a88.Name.Number);
  pFVar2 = (FRigElementKey *)(pTVar1->AllocatorInstance).Data;
  local_a78.Name.Number = local_998.Name.Number;
  local_a78.Type = local_998.Type;
  local_a78._1_3_ = local_998._1_3_;
  local_a78.Name.ComparisonIndex.Value = local_998.Name.ComparisonIndex.Value;
  if (((pFVar2 <= &local_a78) &&
      (&local_a78 <
       (FRigElementKey *)((longlong)pFVar2 + (longlong)(this->Unit).Parents.ArrayMax * 0x10))) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar22)) {
    pcVar4 = (code *)swi(3);
    uVar23 = (*pcVar4)();
    return (bool)uVar23;
  }
  iVar24 = (this->Unit).Parents.ArrayNum;
  if (iVar24 == (this->Unit).Parents.ArrayMax) {
    iVar24 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar1->AllocatorInstance,&(this->Unit).Parents.ArrayMax);
  }
  uStack_a5c = 0x3f800000;
  pFVar30 = (pTVar1->AllocatorInstance).Data + (longlong)iVar24 * 0x10;
  (this->Unit).Parents.ArrayNum = iVar24 + 1;
  *(undefined8 *)pFVar30 = local_a78._0_8_;
  *(ulonglong *)(pFVar30 + 8) = CONCAT44(uStack_a6c,local_a78.Name.Number);
  pFVar2 = (FRigElementKey *)(pTVar1->AllocatorInstance).Data;
  local_a68.Name.Number = local_988.Name.Number;
  local_a68.Type = local_988.Type;
  local_a68._1_3_ = local_988._1_3_;
  local_a68.Name.ComparisonIndex.Value = local_988.Name.ComparisonIndex.Value;
  if (((pFVar2 <= &local_a68) &&
      (&local_a68 <
       (FRigElementKey *)((longlong)pFVar2 + (longlong)(this->Unit).Parents.ArrayMax * 0x10))) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar22)) {
    pcVar4 = (code *)swi(3);
    uVar23 = (*pcVar4)();
    return (bool)uVar23;
  }
  iVar24 = (this->Unit).Parents.ArrayNum;
  if (iVar24 == (this->Unit).Parents.ArrayMax) {
    iVar24 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar1->AllocatorInstance,&(this->Unit).Parents.ArrayMax);
  }
  (this->Unit).Parents.ArrayNum = iVar24 + 1;
  this_00 = &this->field_0x5d0;
  pFVar30 = (pTVar1->AllocatorInstance).Data + (longlong)iVar24 * 0x10;
  *(undefined8 *)pFVar30 = local_a68._0_8_;
  *(ulonglong *)(pFVar30 + 8) = CONCAT44(uStack_a5c,local_a68.Name.Number);
  pUVar26 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar26 == (URigHierarchy *)0x0) {
LAB_14a4b16ff:
    pUVar26 = pUVar35;
  }
  else {
    pUVar27 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar24 = (int)pUVar27->_padding_;
    if ((*(int *)(pUVar26->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar26->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar27->_padding_)) goto LAB_14a4b16ff;
  }
  URigHierarchy::ResetPoseToInitial(pUVar26,Bone);
  pFVar3 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = false;
  (this->Unit).AdvancedSettings.InterpolationType = Average;
  FRigUnit_RotationConstraint::Execute(&this->Unit,pFVar3);
  pUVar26 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar26 == (URigHierarchy *)0x0) {
LAB_14a4b1760:
    pUVar26 = pUVar35;
  }
  else {
    pUVar27 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar24 = (int)pUVar27->_padding_;
    if ((*(int *)(pUVar26->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar26->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar27->_padding_)) goto LAB_14a4b1760;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar26,&local_228,0,false);
  local_890._s_0.X = ___xmm_402e60c4a0000000bfeb4bc6a0000000;
  local_890._s_0.Y = _UNK_15219d508;
  local_890._s_0.Z = __real_bfe24dd300000000;
  AnimationCore::QuatFromEuler(&local_ab8,(TVector<double> *)&local_890._s_0,XZY,false);
  pFVar33 = &local_978;
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  pFVar31 = ::FString::FString(pFVar33,L"unexpected rotation for average interpolation type");
  dVar8 = __real_3f50624de0000000;
  uVar15 = _UNK_15061cc8c;
  uVar14 = _UNK_15061cc88;
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar61 = SUB84(__real_3f50624de0000000,0);
  uVar62 = (undefined4)((ulonglong)__real_3f50624de0000000 >> 0x20);
  auVar37._8_4_ = uVar61;
  auVar37._0_8_ = __real_3f50624de0000000;
  auVar37._12_4_ = uVar62;
  auVar38._8_8_ =
       -(ulonglong)
        (auVar37._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_228.Rotation.XY.m128d_f64[1] - local_ab8.Y) >>
                               0x20) & _UNK_15061cc8c,
                         SUB84(local_228.Rotation.XY.m128d_f64[1] - local_ab8.Y,0) & _UNK_15061cc88)
        );
  auVar38._0_8_ =
       -(ulonglong)
        (__real_3f50624de0000000 <
        (double)CONCAT44((uint)((ulonglong)(local_228.Rotation.XY.m128d_f64[0] - local_ab8.X) >>
                               0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_228.Rotation.XY.m128d_f64[0] - local_ab8.X,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  uVar32 = movmskpd((int)pFVar33,auVar38);
  auVar39._8_4_ = uVar61;
  auVar39._0_8_ = __real_3f50624de0000000;
  auVar39._12_4_ = uVar62;
  auVar40._8_8_ =
       -(ulonglong)
        (auVar39._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_228.Rotation.ZW.m128d_f64[1] - local_ab8.W) >>
                               0x20) & _UNK_15061cc8c,
                         SUB84(local_228.Rotation.ZW.m128d_f64[1] - local_ab8.W,0) & _UNK_15061cc88)
        );
  auVar40._0_8_ =
       -(ulonglong)
        (__real_3f50624de0000000 <
        (double)CONCAT44((uint)((ulonglong)(local_228.Rotation.ZW.m128d_f64[0] - local_ab8.Z) >>
                               0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_228.Rotation.ZW.m128d_f64[0] - local_ab8.Z,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  iVar24 = movmskpd((int)pFVar31,auVar40);
  uVar25 = iVar24 * 4 | uVar32;
  if (uVar25 == 0) {
LAB_14a4b1863:
    uVar34 = 1;
  }
  else {
    auVar41._8_4_ = uVar61;
    auVar41._0_8_ = __real_3f50624de0000000;
    auVar41._12_4_ = uVar62;
    lVar36 = -(ulonglong)
              (__real_3f50624de0000000 <
              (double)CONCAT44((uint)((ulonglong)(local_228.Rotation.ZW.m128d_f64[1] + local_ab8.W)
                                     >> 0x20) & _UNK_15061cc8c,
                               SUB84(local_228.Rotation.ZW.m128d_f64[1] + local_ab8.W,0) &
                               _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar36;
    auVar5._0_8_ = -(ulonglong)
                    (__real_3f50624de0000000 <
                    (double)CONCAT44((uint)((ulonglong)
                                            (local_228.Rotation.ZW.m128d_f64[0] + local_ab8.Z) >>
                                           0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(local_228.Rotation.ZW.m128d_f64[0] + local_ab8.Z,0) &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar5._12_4_ = (int)((ulonglong)lVar36 >> 0x20);
    uVar25 = movmskpd(uVar25,auVar5);
    auVar42._8_8_ =
         -(ulonglong)
          (auVar41._8_8_ <
          (double)CONCAT44((uint)((ulonglong)(local_ab8.Y + local_228.Rotation.XY.m128d_f64[1]) >>
                                 0x20) & _UNK_15061cc8c,
                           SUB84(local_ab8.Y + local_228.Rotation.XY.m128d_f64[1],0) &
                           _UNK_15061cc88));
    auVar42._0_8_ =
         -(ulonglong)
          (__real_3f50624de0000000 <
          (double)CONCAT44((uint)((ulonglong)(local_ab8.X + local_228.Rotation.XY.m128d_f64[0]) >>
                                 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_ab8.X + local_228.Rotation.XY.m128d_f64[0],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    iVar24 = movmskpd(uVar32,auVar42);
    if ((uVar25 & 0x3fffffff) == 0 && iVar24 == 0) goto LAB_14a4b1863;
    uVar34 = 0;
  }
  (*pcVar4)(this,uVar34);
  if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_978.Data.AllocatorInstance.Data);
  }
  pUVar26 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar26 == (URigHierarchy *)0x0) {
LAB_14a4b18b8:
    pUVar26 = pUVar35;
  }
  else {
    pUVar27 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar24 = (int)pUVar27->_padding_;
    if ((*(int *)(pUVar26->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar26->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar27->_padding_)) goto LAB_14a4b18b8;
  }
  URigHierarchy::ResetPoseToInitial(pUVar26,Bone);
  pFVar3 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = false;
  (this->Unit).AdvancedSettings.InterpolationType = Shortest;
  FRigUnit_RotationConstraint::Execute(&this->Unit,pFVar3);
  pUVar26 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar26 == (URigHierarchy *)0x0) {
LAB_14a4b1919:
    pUVar26 = pUVar35;
  }
  else {
    pUVar27 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar24 = (int)pUVar27->_padding_;
    if ((*(int *)(pUVar26->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar26->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar27->_padding_)) goto LAB_14a4b1919;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar26,&local_1c8,0,false);
  local_878._s_0.X = ___xmm_4021bae1400000004030bd70a0000000;
  local_878._s_0.Y = _UNK_15219d4b8;
  local_878._s_0.Z = __real_c0163f7ce0000000;
  pTVar28 = AnimationCore::QuatFromEuler(&local_2c8,(TVector<double> *)&local_878._s_0,XZY,false);
  pFVar33 = &local_968;
  local_ab8.X = pTVar28->X;
  local_ab8.Y = pTVar28->Y;
  local_ab8.Z = pTVar28->Z;
  local_ab8.W = pTVar28->W;
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  pFVar31 = ::FString::FString(pFVar33,L"unexpected rotation for shortest interpolation type");
  auVar43._8_4_ = uVar61;
  auVar43._0_8_ = dVar8;
  auVar43._12_4_ = uVar62;
  auVar44._8_8_ =
       -(ulonglong)
        (auVar43._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_1c8.Rotation.XY.m128d_f64[1] - local_ab8.Y) >>
                               0x20) & uVar15,
                         SUB84(local_1c8.Rotation.XY.m128d_f64[1] - local_ab8.Y,0) & uVar14));
  auVar44._0_8_ =
       -(ulonglong)
        (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                         (local_1c8.Rotation.XY.m128d_f64[0] - local_ab8.X) >> 0x20)
                                  & uVar13,SUB84(local_1c8.Rotation.XY.m128d_f64[0] - local_ab8.X,0)
                                           & uVar12));
  uVar32 = movmskpd((int)pFVar33,auVar44);
  auVar45._8_4_ = uVar61;
  auVar45._0_8_ = dVar8;
  auVar45._12_4_ = uVar62;
  auVar46._8_8_ =
       -(ulonglong)
        (auVar45._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_1c8.Rotation.ZW.m128d_f64[1] - local_ab8.W) >>
                               0x20) & uVar15,
                         SUB84(local_1c8.Rotation.ZW.m128d_f64[1] - local_ab8.W,0) & uVar14));
  auVar46._0_8_ =
       -(ulonglong)
        (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                         (local_1c8.Rotation.ZW.m128d_f64[0] - local_ab8.Z) >> 0x20)
                                  & uVar13,SUB84(local_1c8.Rotation.ZW.m128d_f64[0] - local_ab8.Z,0)
                                           & uVar12));
  iVar24 = movmskpd((int)pFVar31,auVar46);
  uVar25 = iVar24 * 4 | uVar32;
  if (uVar25 == 0) {
LAB_14a4b1a1f:
    uVar34 = 1;
  }
  else {
    auVar47._8_4_ = uVar61;
    auVar47._0_8_ = dVar8;
    auVar47._12_4_ = uVar62;
    lVar36 = -(ulonglong)
              (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                               (local_1c8.Rotation.ZW.m128d_f64[1] + local_ab8.W) >>
                                              0x20) & uVar15,
                                        SUB84(local_1c8.Rotation.ZW.m128d_f64[1] + local_ab8.W,0) &
                                        uVar14));
    auVar6._8_4_ = (int)lVar36;
    auVar6._0_8_ = -(ulonglong)
                    (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                                     (local_1c8.Rotation.ZW.m128d_f64[0] +
                                                     local_ab8.Z) >> 0x20) & uVar13,
                                              SUB84(local_1c8.Rotation.ZW.m128d_f64[0] + local_ab8.Z
                                                    ,0) & uVar12));
    auVar6._12_4_ = (int)((ulonglong)lVar36 >> 0x20);
    uVar25 = movmskpd(uVar25,auVar6);
    auVar48._8_8_ =
         -(ulonglong)
          (auVar47._8_8_ <
          (double)CONCAT44((uint)((ulonglong)(local_ab8.Y + local_1c8.Rotation.XY.m128d_f64[1]) >>
                                 0x20) & uVar15,
                           SUB84(local_ab8.Y + local_1c8.Rotation.XY.m128d_f64[1],0) & uVar14));
    auVar48._0_8_ =
         -(ulonglong)
          (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                           (local_ab8.X + local_1c8.Rotation.XY.m128d_f64[0]) >>
                                          0x20) & uVar13,
                                    SUB84(local_ab8.X + local_1c8.Rotation.XY.m128d_f64[0],0) &
                                    uVar12));
    iVar24 = movmskpd(uVar32,auVar48);
    if ((uVar25 & 0x3fffffff) == 0 && iVar24 == 0) goto LAB_14a4b1a1f;
    uVar34 = 0;
  }
  (*pcVar4)(this,uVar34,&local_968);
  if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_968.Data.AllocatorInstance.Data);
  }
  pUVar26 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar26 == (URigHierarchy *)0x0) {
LAB_14a4b1a74:
    pUVar26 = pUVar35;
  }
  else {
    pUVar27 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar24 = (int)pUVar27->_padding_;
    if ((*(int *)(pUVar26->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar26->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar27->_padding_)) goto LAB_14a4b1a74;
  }
  URigHierarchy::ResetPoseToInitial(pUVar26,Bone);
  pUVar26 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar26 == (URigHierarchy *)0x0) {
LAB_14a4b1ab4:
    pUVar26 = pUVar35;
  }
  else {
    pUVar27 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar24 = (int)pUVar27->_padding_;
    if ((*(int *)(pUVar26->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar26->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar27->_padding_)) goto LAB_14a4b1ab4;
  }
  dVar9 = __real_c059000000000000;
  local_860._s_0.Z = __real_c059000000000000;
  local_860._s_0.X = ___xmm_40590000000000004059000000000000;
  local_860._s_0.Y = _UNK_1512468d8;
  pTVar28 = AnimationCore::QuatFromEuler(&local_2a8,(TVector<double> *)&local_860._s_0,XZY,false);
  dVar65 = _UNK_15219d578;
  dVar64 = ___xmm_c044000000000000c044000000000000;
  dVar11 = _UNK_15219d418;
  dVar10 = ___xmm_0000000000000000c044000000000000;
  local_608.Rotation.XY.m128d_f64[0] = pTVar28->X;
  local_608.Rotation.XY.m128d_f64[1] = pTVar28->Y;
  local_608.Rotation.ZW.m128d_f64[0] = pTVar28->Z;
  local_608.Rotation.ZW.m128d_f64[1] = pTVar28->W;
  local_608.Translation.XY.m128d_f64[0] = ___xmm_c044000000000000c044000000000000;
  local_608.Translation.XY.m128d_f64[1] = _UNK_15219d578;
  local_608.Translation.ZW.m128d_f64[0] = ___xmm_0000000000000000c044000000000000;
  local_608.Translation.ZW.m128d_f64[1] = _UNK_15219d418;
  local_608.Scale3D.XY.m128d_f64[0] = dVar18;
  local_608.Scale3D.XY.m128d_f64[1] = dVar19;
  local_608.Scale3D.ZW.m128d_f64[0] = dVar16;
  local_608.Scale3D.ZW.m128d_f64[1] = dVar17;
  URigHierarchy::SetGlobalTransformByIndex(pUVar26,2,&local_608,false,true,false,false);
  pFVar3 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = true;
  (this->Unit).AdvancedSettings.InterpolationType = Average;
  FRigUnit_RotationConstraint::Execute(&this->Unit,pFVar3);
  pUVar26 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar26 == (URigHierarchy *)0x0) {
LAB_14a4b1bb2:
    pUVar26 = pUVar35;
  }
  else {
    pUVar27 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar24 = (int)pUVar27->_padding_;
    if ((*(int *)(pUVar26->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar26->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar27->_padding_)) goto LAB_14a4b1bb2;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar26,&local_168,0,false);
  local_848._s_0.X = ___xmm_c016b74bc00000004015a1cac0000000;
  local_848._s_0.Y = _UNK_15219d548;
  local_848._s_0.Z = __real_c0413851e0000000;
  pTVar28 = AnimationCore::QuatFromEuler(&local_288,(TVector<double> *)&local_848._s_0,XZY,false);
  pFVar33 = &local_958;
  local_ab8.X = pTVar28->X;
  local_ab8.Y = pTVar28->Y;
  local_ab8.Z = pTVar28->Z;
  local_ab8.W = pTVar28->W;
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  pFVar31 = ::FString::FString(pFVar33,
                               L"unexpected rotation for maintain offset and average interpolation type"
                              );
  auVar49._8_4_ = uVar61;
  auVar49._0_8_ = dVar8;
  auVar49._12_4_ = uVar62;
  auVar50._8_8_ =
       -(ulonglong)
        (auVar49._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_168.Rotation.ZW.m128d_f64[1] - local_ab8.W) >>
                               0x20) & uVar15,
                         SUB84(local_168.Rotation.ZW.m128d_f64[1] - local_ab8.W,0) & uVar14));
  auVar50._0_8_ =
       -(ulonglong)
        (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                         (local_168.Rotation.ZW.m128d_f64[0] - local_ab8.Z) >> 0x20)
                                  & uVar13,SUB84(local_168.Rotation.ZW.m128d_f64[0] - local_ab8.Z,0)
                                           & uVar12));
  iVar24 = movmskpd((int)pFVar33,auVar50);
  auVar51._8_4_ = uVar61;
  auVar51._0_8_ = dVar8;
  auVar51._12_4_ = uVar62;
  auVar52._8_8_ =
       -(ulonglong)
        (auVar51._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_168.Rotation.XY.m128d_f64[1] - local_ab8.Y) >>
                               0x20) & uVar15,
                         SUB84(local_168.Rotation.XY.m128d_f64[1] - local_ab8.Y,0) & uVar14));
  auVar52._0_8_ =
       -(ulonglong)
        (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                         (local_168.Rotation.XY.m128d_f64[0] - local_ab8.X) >> 0x20)
                                  & uVar13,SUB84(local_168.Rotation.XY.m128d_f64[0] - local_ab8.X,0)
                                           & uVar12));
  uVar25 = movmskpd((int)pFVar31,auVar52);
  uVar32 = iVar24 << 2 | uVar25;
  if (uVar32 == 0) {
LAB_14a4b1cb0:
    uVar34 = 1;
  }
  else {
    auVar53._8_4_ = uVar61;
    auVar53._0_8_ = dVar8;
    auVar53._12_4_ = uVar62;
    auVar54._8_8_ =
         -(ulonglong)
          (auVar53._8_8_ <
          (double)CONCAT44((uint)((ulonglong)(local_168.Rotation.ZW.m128d_f64[1] + local_ab8.W) >>
                                 0x20) & uVar15,
                           SUB84(local_168.Rotation.ZW.m128d_f64[1] + local_ab8.W,0) & uVar14));
    auVar54._0_8_ =
         -(ulonglong)
          (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                           (local_168.Rotation.ZW.m128d_f64[0] + local_ab8.Z) >>
                                          0x20) & uVar13,
                                    SUB84(local_168.Rotation.ZW.m128d_f64[0] + local_ab8.Z,0) &
                                    uVar12));
    uVar32 = movmskpd(uVar32,auVar54);
    lVar36 = -(ulonglong)
              (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                               (local_ab8.Y + local_168.Rotation.XY.m128d_f64[1]) >>
                                              0x20) & uVar15,
                                        SUB84(local_ab8.Y + local_168.Rotation.XY.m128d_f64[1],0) &
                                        uVar14));
    auVar7._8_4_ = (int)lVar36;
    auVar7._0_8_ = -(ulonglong)
                    (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                                     (local_ab8.X +
                                                     local_168.Rotation.XY.m128d_f64[0]) >> 0x20) &
                                              uVar13,SUB84(local_ab8.X +
                                                           local_168.Rotation.XY.m128d_f64[0],0) &
                                                     uVar12));
    auVar7._12_4_ = (int)((ulonglong)lVar36 >> 0x20);
    iVar24 = movmskpd(uVar25,auVar7);
    if ((uVar32 & 0x3fffffff) == 0 && iVar24 == 0) goto LAB_14a4b1cb0;
    uVar34 = 0;
  }
  (*pcVar4)(this,uVar34,&local_958);
  if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_958.Data.AllocatorInstance.Data);
  }
  pUVar26 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::ResetPoseToInitial(pUVar26,Bone);
  pUVar26 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  local_830._s_0.Z = dVar9;
  local_830._s_0.X = ___xmm_40590000000000004059000000000000;
  local_830._s_0.Y = _UNK_1512468d8;
  pTVar28 = AnimationCore::QuatFromEuler(&local_268,(TVector<double> *)&local_830._s_0,XZY,false);
  local_5a8.Translation.XY.m128d_f64[0] = dVar64;
  local_5a8.Translation.XY.m128d_f64[1] = dVar65;
  local_5a8.Translation.ZW.m128d_f64[0] = dVar10;
  local_5a8.Translation.ZW.m128d_f64[1] = dVar11;
  local_5a8.Scale3D.XY.m128d_f64[0] = dVar18;
  local_5a8.Scale3D.XY.m128d_f64[1] = dVar19;
  local_5a8.Rotation.XY.m128d_f64[0] = pTVar28->X;
  local_5a8.Rotation.XY.m128d_f64[1] = pTVar28->Y;
  local_5a8.Rotation.ZW.m128d_f64[0] = pTVar28->Z;
  local_5a8.Rotation.ZW.m128d_f64[1] = pTVar28->W;
  local_5a8.Scale3D.ZW.m128d_f64[0] = dVar16;
  local_5a8.Scale3D.ZW.m128d_f64[1] = dVar17;
  URigHierarchy::SetGlobalTransform(pUVar26,2,&local_5a8,true,false);
  pFVar3 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = true;
  (this->Unit).AdvancedSettings.InterpolationType = Shortest;
  FRigUnit_RotationConstraint::Execute(&this->Unit,pFVar3);
  pUVar26 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar26,&local_108,0,false);
  local_818._s_0.X = ___xmm_c020a9fbe0000000bff3581060000000;
  local_818._s_0.Y = _UNK_15219d558;
  local_818._s_0.Z = __real_c03905a1c0000000;
  pTVar28 = AnimationCore::QuatFromEuler(&local_248,(TVector<double> *)&local_818._s_0,XZY,false);
  pFVar33 = &local_948;
  local_ab8.X = pTVar28->X;
  local_ab8.Y = pTVar28->Y;
  local_ab8.Z = pTVar28->Z;
  local_ab8.W = pTVar28->W;
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  pFVar31 = ::FString::FString(pFVar33,
                               L"unexpected rotation for maintain offset and shortest interpolation type"
                              );
  auVar55._8_4_ = uVar61;
  auVar55._0_8_ = dVar8;
  auVar55._12_4_ = uVar62;
  auVar56._8_8_ =
       -(ulonglong)
        (auVar55._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_108.Rotation.ZW.m128d_f64[1] - local_ab8.W) >>
                               0x20) & uVar15,
                         SUB84(local_108.Rotation.ZW.m128d_f64[1] - local_ab8.W,0) & uVar14));
  auVar56._0_8_ =
       -(ulonglong)
        (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                         (local_108.Rotation.ZW.m128d_f64[0] - local_ab8.Z) >> 0x20)
                                  & uVar13,SUB84(local_108.Rotation.ZW.m128d_f64[0] - local_ab8.Z,0)
                                           & uVar12));
  iVar24 = movmskpd((int)pFVar33,auVar56);
  auVar57._8_4_ = uVar61;
  auVar57._0_8_ = dVar8;
  auVar57._12_4_ = uVar62;
  auVar58._8_8_ =
       -(ulonglong)
        (auVar57._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_108.Rotation.XY.m128d_f64[1] - local_ab8.Y) >>
                               0x20) & uVar15,
                         SUB84(local_108.Rotation.XY.m128d_f64[1] - local_ab8.Y,0) & uVar14));
  auVar58._0_8_ =
       -(ulonglong)
        (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                         (local_108.Rotation.XY.m128d_f64[0] - local_ab8.X) >> 0x20)
                                  & uVar13,SUB84(local_108.Rotation.XY.m128d_f64[0] - local_ab8.X,0)
                                           & uVar12));
  uVar25 = movmskpd((int)pFVar31,auVar58);
  uVar32 = iVar24 << 2 | uVar25;
  if (uVar32 != 0) {
    auVar59._8_4_ = uVar61;
    auVar59._0_8_ = dVar8;
    auVar59._12_4_ = uVar62;
    auVar60._8_8_ =
         -(ulonglong)
          (auVar59._8_8_ <
          (double)CONCAT44((uint)((ulonglong)(local_108.Rotation.ZW.m128d_f64[1] + local_ab8.W) >>
                                 0x20) & uVar15,
                           SUB84(local_108.Rotation.ZW.m128d_f64[1] + local_ab8.W,0) & uVar14));
    auVar60._0_8_ =
         -(ulonglong)
          (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                           (local_108.Rotation.ZW.m128d_f64[0] + local_ab8.Z) >>
                                          0x20) & uVar13,
                                    SUB84(local_108.Rotation.ZW.m128d_f64[0] + local_ab8.Z,0) &
                                    uVar12));
    uVar32 = movmskpd(uVar32,auVar60);
    auVar63._8_8_ =
         -(ulonglong)
          (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                           (local_ab8.Y + local_108.Rotation.XY.m128d_f64[1]) >>
                                          0x20) & uVar15,
                                    SUB84(local_ab8.Y + local_108.Rotation.XY.m128d_f64[1],0) &
                                    uVar14));
    auVar63._0_8_ =
         -(ulonglong)
          (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                           (local_ab8.X + local_108.Rotation.XY.m128d_f64[0]) >>
                                          0x20) & uVar13,
                                    SUB84(local_ab8.X + local_108.Rotation.XY.m128d_f64[0],0) &
                                    uVar12));
    iVar24 = movmskpd(uVar25,auVar63);
    if ((uVar32 & 0x3fffffff) != 0 || iVar24 != 0) {
      uVar34 = 0;
      goto LAB_14a4b1e90;
    }
  }
  uVar34 = 1;
LAB_14a4b1e90:
  (*pcVar4)(this,uVar34,&local_948,0);
  if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_948.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4b1f50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_RotationConstraintTest::GetBeautifiedTestName
          (FRigUnit_RotationConstraintTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_RotationConstraint");
  return __return_storage_ptr__;
}

