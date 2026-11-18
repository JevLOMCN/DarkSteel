// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a49df00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EAutomationTestFlags __thiscall
FRigUnit_ParentConstraintTest::GetTestFlags(FRigUnit_ParentConstraintTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a49df10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigUnit_ParentConstraintTest::IsStressTest(FRigUnit_ParentConstraintTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a49df20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall
FRigUnit_ParentConstraintTest::GetRequiredDeviceNum(FRigUnit_ParentConstraintTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a49df70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_ParentConstraintTest::GetTestSourceFileName
          (FRigUnit_ParentConstraintTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Highlevel\\Hierarchy\\RigUnit_TransformConstraint.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a49dfa0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
FRigUnit_ParentConstraintTest::GetTestSourceFileLine(FRigUnit_ParentConstraintTest *this)

{
  return 0x176;
}

// GetTests @ 14a49e080

/* WARNING: Removing unreachable block (ram,0x00014a49e16d) */
/* WARNING: Removing unreachable block (ram,0x00014a49e238) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ParentConstraintTest::GetTests
          (FRigUnit_ParentConstraintTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_ParentConstraint");
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

// RunTest @ 14a49e280

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_ParentConstraintTest::RunTest(FRigUnit_ParentConstraintTest *this,FString *param_1)

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
  FFilterOptionPerAxis FVar11;
  bool bVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined1 uVar15;
  URigHierarchy *this_00;
  UClass *pUVar16;
  FRigUnit_ParentConstraint *pFVar17;
  FRigUnit_ParentConstraint local_88;
  
  (**(code **)(this->_padding_ + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar16 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar5 = (int)pUVar16->_padding_;
    if ((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar16->_padding_)) goto LAB_14a49e2e7;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a49e2e7:
  URigHierarchy::Reset(this_00);
  pFVar17 = FRigUnit_ParentConstraint::FRigUnit_ParentConstraint(&local_88);
  pTVar3 = &(this->Unit).Parents;
  uVar9 = *(undefined3 *)&(pFVar17->Child).field_0x1;
  FVar10.Value = (pFVar17->Child).Name.ComparisonIndex.Value;
  pTVar1 = &pFVar17->Parents;
  (this->Unit).Child.Type = (pFVar17->Child).Type;
  *(undefined3 *)&(this->Unit).Child.field_0x1 = uVar9;
  (this->Unit).Child.Name.ComparisonIndex = (FNameEntryId)FVar10.Value;
  (this->Unit).Child.Name.Number = (pFVar17->Child).Name.Number;
  (this->Unit).bMaintainOffset = pFVar17->bMaintainOffset;
  FVar11 = (pFVar17->Filter).RotationFilter;
  bVar12 = (pFVar17->Filter).ScaleFilter.bX;
  bVar13 = (pFVar17->Filter).ScaleFilter.bY;
  (this->Unit).Filter.TranslationFilter = (pFVar17->Filter).TranslationFilter;
  (this->Unit).Filter.RotationFilter = FVar11;
  (this->Unit).Filter.ScaleFilter.bX = bVar12;
  (this->Unit).Filter.ScaleFilter.bY = bVar13;
  (this->Unit).Filter.ScaleFilter.bZ = (pFVar17->Filter).ScaleFilter.bZ;
  if (pTVar3 != pTVar1) {
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Unit).Parents.ArrayNum = (pFVar17->Parents).ArrayNum;
    (this->Unit).Parents.ArrayMax = (pFVar17->Parents).ArrayMax;
    (pFVar17->Parents).ArrayNum = 0;
    (pFVar17->Parents).ArrayMax = 0;
  }
  pTVar2 = &pFVar17->ParentCaches;
  (this->Unit).AdvancedSettings = pFVar17->AdvancedSettings;
  (this->Unit).Weight = pFVar17->Weight;
  uVar9 = *(undefined3 *)&(pFVar17->ChildCache).Key.field_0x1;
  FVar10.Value = (pFVar17->ChildCache).Key.Name.ComparisonIndex.Value;
  uVar7 = *(undefined8 *)&(pFVar17->ChildCache).Key.Name.Number;
  (this->Unit).ChildCache.Key.Type = (pFVar17->ChildCache).Key.Type;
  *(undefined3 *)&(this->Unit).ChildCache.Key.field_0x1 = uVar9;
  (this->Unit).ChildCache.Key.Name.ComparisonIndex = (FNameEntryId)FVar10.Value;
  *(undefined8 *)&(this->Unit).ChildCache.Key.Name.Number = uVar7;
  uVar14 = *(undefined4 *)&(pFVar17->ChildCache).field_0x14;
  pFVar8 = (pFVar17->ChildCache).Element;
  pTVar4 = &(this->Unit).ParentCaches;
  (this->Unit).ChildCache.ContainerVersion = (pFVar17->ChildCache).ContainerVersion;
  *(undefined4 *)&(this->Unit).ChildCache.field_0x14 = uVar14;
  (this->Unit).ChildCache.Element = pFVar8;
  if (pTVar4 != pTVar2) {
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Unit).ParentCaches.ArrayNum = (pFVar17->ParentCaches).ArrayNum;
    (this->Unit).ParentCaches.ArrayMax = (pFVar17->ParentCaches).ArrayMax;
    (pFVar17->ParentCaches).ArrayNum = 0;
    (pFVar17->ParentCaches).ArrayMax = 0;
  }
  if (local_88.ParentCaches.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.ParentCaches.AllocatorInstance.Data);
  }
  if (local_88.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Parents.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x00014a49e411. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar15 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar15;
}

// RunControlRigUnitTest @ 14a49e470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_ParentConstraintTest::RunControlRigUnitTest
          (FRigUnit_ParentConstraintTest *this,FString *param_1)

{
  TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong *this_00;
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
  URigHierarchy *pUVar25;
  UClass *pUVar26;
  TQuat<double> *pTVar27;
  FName *pFVar28;
  FScriptContainerElement *pFVar29;
  FString *pFVar30;
  FString *pFVar31;
  undefined8 uVar32;
  URigHierarchy *pUVar33;
  longlong lVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
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
  uint uVar59;
  uint uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined1 auVar63 [16];
  double dVar64;
  double dVar65;
  undefined1 auStackY_c28 [32];
  TQuat<double> local_bd8;
  FRigElementKey local_bb8;
  undefined4 uStack_bac;
  FRigElementKey local_ba8;
  undefined4 uStack_b9c;
  FRigElementKey local_b98;
  undefined4 uStack_b8c;
  FRigElementKey local_b88;
  undefined4 uStack_b7c;
  uint local_b78;
  FNameEntryId FStack_b74;
  undefined4 uStack_b70;
  uint local_b6c;
  FNameEntryId FStack_b68;
  undefined4 uStack_b64;
  uint local_b60;
  FNameEntryId FStack_b5c;
  undefined4 uStack_b58;
  uint local_b54;
  FNameEntryId FStack_b50;
  undefined4 uStack_b4c;
  uint local_b48;
  FNameEntryId FStack_b44;
  undefined4 uStack_b40;
  FRigElementKey local_b38;
  FRigElementKey local_b28;
  FRigElementKey local_b18;
  FRigElementKey local_b08;
  FRigElementKey local_af8;
  FRigElementKey local_ae8;
  FRigElementKey local_ad8;
  FRigElementKey local_ac8;
  FRigElementKey local_ab8;
  FRigElementKey local_aa8;
  FString local_a98;
  FString local_a88;
  FString local_a78;
  FString local_a68;
  FString local_a58;
  FString local_a48;
  FName local_a38;
  FName local_a30;
  FName local_a28;
  FName local_a20 [5];
  FName local_9f8;
  TVector<double>_u_0 local_9f0;
  TVector<double>_u_0 local_9d8;
  TVector<double>_u_0 local_9c0;
  TVector<double>_u_0 local_9a8;
  TVector<double>_u_0 local_990;
  TVector<double>_u_0 local_978;
  TVector<double>_u_0 local_960;
  TVector<double>_u_0 local_948;
  TVector<double>_u_0 local_930;
  TVector<double>_u_0 local_918;
  TVector<double>_u_0 local_900;
  double local_8d8;
  double local_8c0;
  TTransform<double> local_8b8;
  TTransform<double> local_858;
  TTransform<double> local_7f8;
  TTransform<double> local_798;
  TTransform<double> local_738;
  TTransform<double> local_6d8;
  TTransform<double> local_678;
  double local_618;
  double dStack_610;
  double local_608;
  double dStack_600;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  double dStack_5c0;
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  double dStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  double local_578;
  double dStack_570;
  double local_568;
  double dStack_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  double local_538;
  double dStack_530;
  double local_528;
  double dStack_520;
  double local_518;
  double dStack_510;
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
  TQuat<double> local_438;
  TQuat<double> local_418;
  TQuat<double> local_3f8;
  TQuat<double> local_3d8;
  TQuat<double> local_3b8;
  TQuat<double> local_398;
  TQuat<double> local_378;
  TQuat<double> local_358;
  TQuat<double> local_338;
  TQuat<double> local_318;
  TTransform<double> local_2f8;
  TTransform<double> local_298;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_c28;
  pUVar25 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  pUVar33 = (URigHierarchy *)0x0;
  if (pUVar25 == (URigHierarchy *)0x0) {
LAB_14a49e50e:
    pUVar25 = pUVar33;
  }
  else {
    pUVar26 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar24 = (int)pUVar26->_padding_;
    if ((*(int *)(pUVar25->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar25->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar26->_padding_)) goto LAB_14a49e50e;
  }
  local_9f0._s_0.X = ___xmm_c024000000000000c024000000000000;
  local_9f0._s_0.Y = _UNK_1520301b8;
  local_9f0._s_0.Z = __real_c024000000000000;
  pTVar27 = AnimationCore::QuatFromEuler(&local_438,(TVector<double> *)&local_9f0._s_0,XZY,false);
  dVar19 = _UNK_150689688;
  dVar18 = ___xmm_3ff00000000000003ff0000000000000;
  dVar17 = _UNK_150689518;
  dVar16 = ___xmm_00000000000000003ff0000000000000;
  local_578 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_570 = _UNK_150689688;
  dVar8 = pTVar27->X;
  dVar9 = pTVar27->Y;
  dVar10 = pTVar27->Z;
  dVar11 = pTVar27->W;
  local_598 = 0;
  uStack_590 = 0;
  local_588 = 0;
  uStack_580 = 0;
  local_568 = ___xmm_00000000000000003ff0000000000000;
  dStack_560 = _UNK_150689518;
  local_b78 = local_b78 & 0xffffff00;
  FStack_b74.Value = 0;
  uStack_b70 = 0;
  local_5b8 = dVar8;
  dStack_5b0 = dVar9;
  local_5a8 = dVar10;
  dStack_5a0 = dVar11;
  pFVar28 = ::FName::FName(&local_9f8,L"Child");
  local_ae8.Name.ComparisonIndex.Value = FStack_b74.Value;
  local_ae8._0_4_ = local_b78;
  local_7f8.Translation.XY.m128d_f64[0] = 0.0;
  local_7f8.Translation.XY.m128d_f64[1] = 0.0;
  local_7f8.Translation.ZW.m128d_f64[0] = 0.0;
  local_7f8.Translation.ZW.m128d_f64[1] = 0.0;
  local_7f8.Scale3D.XY.m128d_f64[0] = dVar18;
  local_7f8.Scale3D.XY.m128d_f64[1] = dVar19;
  local_7f8.Scale3D.ZW.m128d_f64[0] = dVar16;
  local_7f8.Scale3D.ZW.m128d_f64[1] = dVar17;
  local_ae8.Name.Number = 0;
  local_7f8.Rotation.XY.m128d_f64[0] = dVar8;
  local_7f8.Rotation.XY.m128d_f64[1] = dVar9;
  local_7f8.Rotation.ZW.m128d_f64[0] = dVar10;
  local_7f8.Rotation.ZW.m128d_f64[1] = dVar11;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar25,&local_aa8,*pFVar28,&local_ae8,&local_7f8,true,User,
             false,false);
  pUVar25 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar25 == (URigHierarchy *)0x0) {
LAB_14a49e656:
    pUVar25 = pUVar33;
  }
  else {
    pUVar26 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar24 = (int)pUVar26->_padding_;
    if ((*(int *)(pUVar25->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar25->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar26->_padding_)) goto LAB_14a49e656;
  }
  local_9d8._s_0.X = ___xmm_c03e000000000000403e000000000000;
  local_9d8._s_0.Y = _UNK_15219d568;
  local_9d8._s_0.Z = __real_c03e000000000000;
  pTVar27 = AnimationCore::QuatFromEuler(&local_318,(TVector<double> *)&local_9d8._s_0,XZY,false);
  dVar21 = _UNK_151444f88;
  dVar20 = ___xmm_40340000000000004034000000000000;
  dVar65 = _UNK_151444f48;
  dVar64 = ___xmm_00000000000000004034000000000000;
  local_5f8 = ___xmm_40340000000000004034000000000000;
  dStack_5f0 = _UNK_151444f88;
  dVar8 = pTVar27->X;
  dVar9 = pTVar27->Y;
  dVar10 = pTVar27->Z;
  dVar11 = pTVar27->W;
  local_5e8 = ___xmm_00000000000000004034000000000000;
  dStack_5e0 = _UNK_151444f48;
  local_5d8 = dVar18;
  dStack_5d0 = dVar19;
  local_5c8 = dVar16;
  dStack_5c0 = dVar17;
  local_b6c = local_b6c & 0xffffff00;
  FStack_b68.Value = 0;
  uStack_b64 = 0;
  local_618 = dVar8;
  dStack_610 = dVar9;
  local_608 = dVar10;
  dStack_600 = dVar11;
  pFVar28 = ::FName::FName(&local_a38,L"Parent1");
  local_ad8.Name.ComparisonIndex.Value = FStack_b68.Value;
  local_ad8._0_4_ = local_b6c;
  local_858.Translation.XY.m128d_f64[0] = dVar20;
  local_858.Translation.XY.m128d_f64[1] = dVar21;
  local_858.Translation.ZW.m128d_f64[0] = dVar64;
  local_858.Translation.ZW.m128d_f64[1] = dVar65;
  local_858.Scale3D.XY.m128d_f64[0] = dVar18;
  local_858.Scale3D.XY.m128d_f64[1] = dVar19;
  local_858.Scale3D.ZW.m128d_f64[0] = dVar16;
  local_858.Scale3D.ZW.m128d_f64[1] = dVar17;
  local_ad8.Name.Number = 0;
  local_858.Rotation.XY.m128d_f64[0] = dVar8;
  local_858.Rotation.XY.m128d_f64[1] = dVar9;
  local_858.Rotation.ZW.m128d_f64[0] = dVar10;
  local_858.Rotation.ZW.m128d_f64[1] = dVar11;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar25,&local_b38,*pFVar28,&local_ad8,&local_858,true,User,
             false,false);
  pUVar25 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar25 == (URigHierarchy *)0x0) {
LAB_14a49e799:
    pUVar25 = pUVar33;
  }
  else {
    pUVar26 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar24 = (int)pUVar26->_padding_;
    if ((*(int *)(pUVar25->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar25->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar26->_padding_)) goto LAB_14a49e799;
  }
  local_9c0._s_0.X = ___xmm_c044000000000000c044000000000000;
  local_9c0._s_0.Y = _UNK_15219d578;
  local_9c0._s_0.Z = __real_4044000000000000;
  pTVar27 = AnimationCore::QuatFromEuler(&local_338,(TVector<double> *)&local_9c0._s_0,XZY,false);
  dVar21 = _UNK_151e77bc8;
  dVar20 = ___xmm_00000000000000004044000000000000;
  dVar65 = _UNK_151bce3f8;
  dVar64 = ___xmm_40440000000000004044000000000000;
  local_538 = ___xmm_40440000000000004044000000000000;
  dStack_530 = _UNK_151bce3f8;
  dVar8 = pTVar27->X;
  dVar9 = pTVar27->Y;
  dVar10 = pTVar27->Z;
  dVar11 = pTVar27->W;
  local_528 = ___xmm_00000000000000004044000000000000;
  dStack_520 = _UNK_151e77bc8;
  local_518 = dVar18;
  dStack_510 = dVar19;
  local_508 = dVar16;
  dStack_500 = dVar17;
  local_b60 = local_b60 & 0xffffff00;
  FStack_b5c.Value = 0;
  uStack_b58 = 0;
  local_558 = dVar8;
  dStack_550 = dVar9;
  local_548 = dVar10;
  dStack_540 = dVar11;
  pFVar28 = ::FName::FName(&local_a30,L"Parent2");
  local_ac8.Name.ComparisonIndex.Value = FStack_b5c.Value;
  local_ac8._0_4_ = local_b60;
  local_8b8.Translation.XY.m128d_f64[0] = dVar64;
  local_8b8.Translation.XY.m128d_f64[1] = dVar65;
  local_8b8.Translation.ZW.m128d_f64[0] = dVar20;
  local_8b8.Translation.ZW.m128d_f64[1] = dVar21;
  local_8b8.Scale3D.XY.m128d_f64[0] = dVar18;
  local_8b8.Scale3D.XY.m128d_f64[1] = dVar19;
  local_8b8.Scale3D.ZW.m128d_f64[0] = dVar16;
  local_8b8.Scale3D.ZW.m128d_f64[1] = dVar17;
  local_ac8.Name.Number = 0;
  local_8b8.Rotation.XY.m128d_f64[0] = dVar8;
  local_8b8.Rotation.XY.m128d_f64[1] = dVar9;
  local_8b8.Rotation.ZW.m128d_f64[0] = dVar10;
  local_8b8.Rotation.ZW.m128d_f64[1] = dVar11;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar25,&local_b28,*pFVar28,&local_ac8,&local_8b8,true,User,
             false,false);
  pUVar25 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar25 == (URigHierarchy *)0x0) {
LAB_14a49e8dc:
    pUVar25 = pUVar33;
  }
  else {
    pUVar26 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar24 = (int)pUVar26->_padding_;
    if ((*(int *)(pUVar25->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar25->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar26->_padding_)) goto LAB_14a49e8dc;
  }
  local_9a8._s_0.X = ___xmm_4049000000000000c049000000000000;
  local_9a8._s_0.Y = _UNK_150b2d2f8;
  local_9a8._s_0.Z = __real_c049000000000000;
  pTVar27 = AnimationCore::QuatFromEuler(&local_358,(TVector<double> *)&local_9a8._s_0,XZY,false);
  dVar21 = _UNK_15219d3b8;
  dVar20 = ___xmm_0000000000000000404e000000000000;
  dVar65 = _UNK_15076bf58;
  dVar64 = ___xmm_404e000000000000404e000000000000;
  local_4d8 = ___xmm_404e000000000000404e000000000000;
  dStack_4d0 = _UNK_15076bf58;
  dVar8 = pTVar27->X;
  dVar9 = pTVar27->Y;
  dVar10 = pTVar27->Z;
  dVar11 = pTVar27->W;
  local_4c8 = ___xmm_0000000000000000404e000000000000;
  dStack_4c0 = _UNK_15219d3b8;
  local_4b8 = dVar18;
  dStack_4b0 = dVar19;
  local_4a8 = dVar16;
  dStack_4a0 = dVar17;
  local_b54 = local_b54 & 0xffffff00;
  FStack_b50.Value = 0;
  uStack_b4c = 0;
  local_4f8 = dVar8;
  dStack_4f0 = dVar9;
  local_4e8 = dVar10;
  dStack_4e0 = dVar11;
  pFVar28 = ::FName::FName(&local_a28,L"Parent3");
  local_ab8.Name.ComparisonIndex.Value = FStack_b50.Value;
  local_ab8._0_4_ = local_b54;
  local_798.Translation.XY.m128d_f64[0] = dVar64;
  local_798.Translation.XY.m128d_f64[1] = dVar65;
  local_798.Translation.ZW.m128d_f64[0] = dVar20;
  local_798.Translation.ZW.m128d_f64[1] = dVar21;
  local_798.Scale3D.XY.m128d_f64[0] = dVar18;
  local_798.Scale3D.XY.m128d_f64[1] = dVar19;
  local_798.Scale3D.ZW.m128d_f64[0] = dVar16;
  local_798.Scale3D.ZW.m128d_f64[1] = dVar17;
  local_ab8.Name.Number = 0;
  local_798.Rotation.XY.m128d_f64[0] = dVar8;
  local_798.Rotation.XY.m128d_f64[1] = dVar9;
  local_798.Rotation.ZW.m128d_f64[0] = dVar10;
  local_798.Rotation.ZW.m128d_f64[1] = dVar11;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar25,&local_b18,*pFVar28,&local_ab8,&local_798,true,User,
             false,false);
  pUVar25 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  dVar8 = dVar64;
  dVar9 = dVar65;
  if (pUVar25 == (URigHierarchy *)0x0) {
LAB_14a49ea28:
    dVar65 = dVar9;
    dVar64 = dVar8;
    pUVar25 = pUVar33;
  }
  else {
    pUVar26 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar24 = (int)pUVar26->_padding_;
    dVar8 = ___xmm_404e000000000000404e000000000000;
    dVar9 = _UNK_15076bf58;
    if ((*(int *)(pUVar25->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar25->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar26->_padding_)) goto LAB_14a49ea28;
  }
  local_900._s_0.Z = __real_404e000000000000;
  local_900._s_0.X = dVar64;
  local_900._s_0.Y = dVar65;
  pTVar27 = AnimationCore::QuatFromEuler(&local_418,(TVector<double> *)&local_900._s_0,XZY,false);
  dVar21 = _UNK_15219d3c8;
  dVar20 = ___xmm_00000000000000004054000000000000;
  dVar65 = _UNK_1517983a8;
  dVar64 = ___xmm_40540000000000004054000000000000;
  local_478 = ___xmm_40540000000000004054000000000000;
  dStack_470 = _UNK_1517983a8;
  dVar8 = pTVar27->X;
  dVar9 = pTVar27->Y;
  dVar10 = pTVar27->Z;
  dVar11 = pTVar27->W;
  local_468 = ___xmm_00000000000000004054000000000000;
  dStack_460 = _UNK_15219d3c8;
  local_458 = dVar18;
  dStack_450 = dVar19;
  local_448 = dVar16;
  dStack_440 = dVar17;
  local_b48 = local_b48 & 0xffffff00;
  FStack_b44.Value = 0;
  uStack_b40 = 0;
  local_498 = dVar8;
  dStack_490 = dVar9;
  local_488 = dVar10;
  dStack_480 = dVar11;
  pFVar28 = ::FName::FName(local_a20,L"Parent4");
  local_af8.Name.ComparisonIndex.Value = FStack_b44.Value;
  local_af8._0_4_ = local_b48;
  local_738.Translation.XY.m128d_f64[0] = dVar64;
  local_738.Translation.XY.m128d_f64[1] = dVar65;
  local_738.Translation.ZW.m128d_f64[0] = dVar20;
  local_738.Translation.ZW.m128d_f64[1] = dVar21;
  local_738.Scale3D.XY.m128d_f64[0] = dVar18;
  local_738.Scale3D.XY.m128d_f64[1] = dVar19;
  local_738.Scale3D.ZW.m128d_f64[0] = dVar16;
  local_738.Scale3D.ZW.m128d_f64[1] = dVar17;
  local_af8.Name.Number = 0;
  local_738.Rotation.XY.m128d_f64[0] = dVar8;
  local_738.Rotation.XY.m128d_f64[1] = dVar9;
  local_738.Rotation.ZW.m128d_f64[0] = dVar10;
  local_738.Rotation.ZW.m128d_f64[1] = dVar11;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar25,&local_b08,*pFVar28,&local_af8,&local_738,true,User,
             false,false);
  pTVar1 = &(this->Unit).Parents;
  (this->Unit).Child.Type = local_aa8.Type;
  *(undefined3 *)&(this->Unit).Child.field_0x1 = local_aa8._1_3_;
  (this->Unit).Child.Name.ComparisonIndex = (FNameEntryId)local_aa8.Name.ComparisonIndex.Value;
  (this->Unit).Child.Name.Number = local_aa8.Name.Number;
  pFVar2 = (FRigElementKey *)(pTVar1->AllocatorInstance).Data;
  local_bb8.Name.Number = local_b38.Name.Number;
  local_bb8.Type = local_b38.Type;
  local_bb8._1_3_ = local_b38._1_3_;
  local_bb8.Name.ComparisonIndex.Value = local_b38.Name.ComparisonIndex.Value;
  uStack_bac = 0x3f800000;
  if (((pFVar2 <= &local_bb8) &&
      (&local_bb8 <
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
  uStack_b9c = 0x3f800000;
  pFVar29 = (pTVar1->AllocatorInstance).Data + (longlong)iVar24 * 0x10;
  (this->Unit).Parents.ArrayNum = iVar24 + 1;
  *(undefined8 *)pFVar29 = local_bb8._0_8_;
  *(ulonglong *)(pFVar29 + 8) = CONCAT44(uStack_bac,local_bb8.Name.Number);
  pFVar2 = (FRigElementKey *)(pTVar1->AllocatorInstance).Data;
  local_ba8.Name.Number = local_b28.Name.Number;
  local_ba8.Type = local_b28.Type;
  local_ba8._1_3_ = local_b28._1_3_;
  local_ba8.Name.ComparisonIndex.Value = local_b28.Name.ComparisonIndex.Value;
  if (((pFVar2 <= &local_ba8) &&
      (&local_ba8 <
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
  uStack_b8c = 0x3f800000;
  pFVar29 = (pTVar1->AllocatorInstance).Data + (longlong)iVar24 * 0x10;
  (this->Unit).Parents.ArrayNum = iVar24 + 1;
  *(undefined8 *)pFVar29 = local_ba8._0_8_;
  *(ulonglong *)(pFVar29 + 8) = CONCAT44(uStack_b9c,local_ba8.Name.Number);
  pFVar2 = (FRigElementKey *)(pTVar1->AllocatorInstance).Data;
  local_b98.Name.Number = local_b18.Name.Number;
  local_b98.Type = local_b18.Type;
  local_b98._1_3_ = local_b18._1_3_;
  local_b98.Name.ComparisonIndex.Value = local_b18.Name.ComparisonIndex.Value;
  if (((pFVar2 <= &local_b98) &&
      (&local_b98 <
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
  uStack_b7c = 0x3f800000;
  pFVar29 = (pTVar1->AllocatorInstance).Data + (longlong)iVar24 * 0x10;
  (this->Unit).Parents.ArrayNum = iVar24 + 1;
  *(undefined8 *)pFVar29 = local_b98._0_8_;
  *(ulonglong *)(pFVar29 + 8) = CONCAT44(uStack_b8c,local_b98.Name.Number);
  pFVar2 = (FRigElementKey *)(pTVar1->AllocatorInstance).Data;
  local_b88.Name.Number = local_b08.Name.Number;
  local_b88.Type = local_b08.Type;
  local_b88._1_3_ = local_b08._1_3_;
  local_b88.Name.ComparisonIndex.Value = local_b08.Name.ComparisonIndex.Value;
  if (((pFVar2 <= &local_b88) &&
      (&local_b88 <
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
  this_00 = &this->_padding_;
  pFVar29 = (pTVar1->AllocatorInstance).Data + (longlong)iVar24 * 0x10;
  *(undefined8 *)pFVar29 = local_b88._0_8_;
  *(ulonglong *)(pFVar29 + 8) = CONCAT44(uStack_b7c,local_b88.Name.Number);
  pUVar25 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar25 == (URigHierarchy *)0x0) {
LAB_14a49ee61:
    pUVar25 = pUVar33;
  }
  else {
    pUVar26 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar24 = (int)pUVar26->_padding_;
    if ((*(int *)(pUVar25->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar25->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar26->_padding_)) goto LAB_14a49ee61;
  }
  URigHierarchy::ResetPoseToInitial(pUVar25,Bone);
  pFVar3 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).bMaintainOffset = false;
  (this->Unit).AdvancedSettings.InterpolationType = Average;
  FRigUnit_ParentConstraint::Execute(&this->Unit,pFVar3);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_a68,L"unexpected translation for average interpolation type");
  pUVar25 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar25 == (URigHierarchy *)0x0) {
LAB_14a49eedc:
    pUVar25 = pUVar33;
  }
  else {
    pUVar26 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar24 = (int)pUVar26->_padding_;
    if ((*(int *)(pUVar25->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar25->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar26->_padding_)) goto LAB_14a49eedc;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar25,&local_2f8,0,false);
  uVar15 = _UNK_15061cc8c;
  uVar14 = _UNK_15061cc88;
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_8d8 = local_2f8.Translation.ZW.m128d_f64[0];
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)
                                (local_2f8.Translation.XY.m128d_f64[0] - __real_4049000000000000) >>
                               0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_2f8.Translation.XY.m128d_f64[0] - __real_4049000000000000,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (uVar59 = SUB84(local_2f8.Translation.XY.m128d_f64[1] - __real_4049000000000000,0) &
                (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar60 = (uint)((ulonglong)(local_2f8.Translation.XY.m128d_f64[1] - __real_4049000000000000)
                     >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar60,uVar59) &&
      (double)CONCAT44(uVar60,uVar59) != __real_3f1a36e2e0000000)) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)
                              (local_2f8.Translation.ZW.m128d_f64[0] - __real_4049000000000000) >>
                             0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_2f8.Translation.ZW.m128d_f64[0] - __real_4049000000000000,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    uVar32 = 0;
  }
  else {
    uVar32 = 1;
  }
  (*pcVar4)(this,uVar32);
  if (local_a68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a68.Data.AllocatorInstance.Data);
  }
  pUVar25 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar25 == (URigHierarchy *)0x0) {
LAB_14a49efb2:
    pUVar25 = pUVar33;
  }
  else {
    pUVar26 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar24 = (int)pUVar26->_padding_;
    if ((*(int *)(pUVar25->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar25->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar26->_padding_)) goto LAB_14a49efb2;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar25,&local_298,0,false);
  local_990._s_0.X = ___xmm_402e60c4a0000000bfeb439580000000;
  local_990._s_0.Y = _UNK_15219d4f8;
  local_990._s_0.Z = __real_bfe24dd300000000;
  AnimationCore::QuatFromEuler(&local_bd8,(TVector<double> *)&local_990._s_0,XZY,false);
  pFVar31 = &local_a78;
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pFVar30 = ::FString::FString(pFVar31,L"unexpected rotation for average interpolation type");
  dVar8 = __real_3f50624de0000000;
  uVar61 = SUB84(__real_3f50624de0000000,0);
  uVar62 = (undefined4)((ulonglong)__real_3f50624de0000000 >> 0x20);
  auVar35._8_4_ = uVar61;
  auVar35._0_8_ = __real_3f50624de0000000;
  auVar35._12_4_ = uVar62;
  auVar36._8_8_ =
       -(ulonglong)
        (auVar35._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_298.Rotation.XY.m128d_f64[1] - local_bd8.Y) >>
                               0x20) & uVar15,
                         SUB84(local_298.Rotation.XY.m128d_f64[1] - local_bd8.Y,0) & uVar14));
  auVar36._0_8_ =
       -(ulonglong)
        (__real_3f50624de0000000 <
        (double)CONCAT44((uint)((ulonglong)(local_298.Rotation.XY.m128d_f64[0] - local_bd8.X) >>
                               0x20) & uVar13,
                         SUB84(local_298.Rotation.XY.m128d_f64[0] - local_bd8.X,0) & uVar12));
  uVar60 = movmskpd((int)pFVar31,auVar36);
  auVar37._8_4_ = uVar61;
  auVar37._0_8_ = __real_3f50624de0000000;
  auVar37._12_4_ = uVar62;
  auVar38._8_8_ =
       -(ulonglong)
        (auVar37._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_298.Rotation.ZW.m128d_f64[1] - local_bd8.W) >>
                               0x20) & uVar15,
                         SUB84(local_298.Rotation.ZW.m128d_f64[1] - local_bd8.W,0) & uVar14));
  auVar38._0_8_ =
       -(ulonglong)
        (__real_3f50624de0000000 <
        (double)CONCAT44((uint)((ulonglong)(local_298.Rotation.ZW.m128d_f64[0] - local_bd8.Z) >>
                               0x20) & uVar13,
                         SUB84(local_298.Rotation.ZW.m128d_f64[0] - local_bd8.Z,0) & uVar12));
  iVar24 = movmskpd((int)pFVar30,auVar38);
  uVar59 = iVar24 * 4 | uVar60;
  if (uVar59 == 0) {
LAB_14a49f0ad:
    uVar32 = 1;
  }
  else {
    auVar39._8_4_ = uVar61;
    auVar39._0_8_ = __real_3f50624de0000000;
    auVar39._12_4_ = uVar62;
    lVar34 = -(ulonglong)
              (__real_3f50624de0000000 <
              (double)CONCAT44((uint)((ulonglong)(local_298.Rotation.ZW.m128d_f64[1] + local_bd8.W)
                                     >> 0x20) & uVar15,
                               SUB84(local_298.Rotation.ZW.m128d_f64[1] + local_bd8.W,0) & uVar14));
    auVar5._8_4_ = (int)lVar34;
    auVar5._0_8_ = -(ulonglong)
                    (__real_3f50624de0000000 <
                    (double)CONCAT44((uint)((ulonglong)
                                            (local_298.Rotation.ZW.m128d_f64[0] + local_bd8.Z) >>
                                           0x20) & uVar13,
                                     SUB84(local_298.Rotation.ZW.m128d_f64[0] + local_bd8.Z,0) &
                                     uVar12));
    auVar5._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
    uVar59 = movmskpd(uVar59,auVar5);
    auVar40._8_8_ =
         -(ulonglong)
          (auVar39._8_8_ <
          (double)CONCAT44((uint)((ulonglong)(local_bd8.Y + local_298.Rotation.XY.m128d_f64[1]) >>
                                 0x20) & uVar15,
                           SUB84(local_bd8.Y + local_298.Rotation.XY.m128d_f64[1],0) & uVar14));
    auVar40._0_8_ =
         -(ulonglong)
          (__real_3f50624de0000000 <
          (double)CONCAT44((uint)((ulonglong)(local_bd8.X + local_298.Rotation.XY.m128d_f64[0]) >>
                                 0x20) & uVar13,
                           SUB84(local_bd8.X + local_298.Rotation.XY.m128d_f64[0],0) & uVar12));
    iVar24 = movmskpd(uVar60,auVar40);
    if ((uVar59 & 0x3fffffff) == 0 && iVar24 == 0) goto LAB_14a49f0ad;
    uVar32 = 0;
  }
  (*pcVar4)(this,uVar32);
  if (local_a78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a78.Data.AllocatorInstance.Data);
  }
  pUVar25 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar25 == (URigHierarchy *)0x0) {
LAB_14a49f102:
    pUVar25 = pUVar33;
  }
  else {
    pUVar26 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar24 = (int)pUVar26->_padding_;
    if ((*(int *)(pUVar25->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar25->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar26->_padding_)) goto LAB_14a49f102;
  }
  URigHierarchy::ResetPoseToInitial(pUVar25,Bone);
  pFVar3 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).bMaintainOffset = false;
  (this->Unit).AdvancedSettings.InterpolationType = Shortest;
  FRigUnit_ParentConstraint::Execute(&this->Unit,pFVar3);
  pUVar25 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar25 == (URigHierarchy *)0x0) {
LAB_14a49f163:
    pUVar25 = pUVar33;
  }
  else {
    pUVar26 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar24 = (int)pUVar26->_padding_;
    if ((*(int *)(pUVar25->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar25->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar26->_padding_)) goto LAB_14a49f163;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar25,&local_238,0,false);
  local_978._s_0.X = ___xmm_4021bae1400000004030bd70a0000000;
  local_978._s_0.Y = _UNK_15219d4b8;
  local_978._s_0.Z = __real_c0163f7ce0000000;
  pTVar27 = AnimationCore::QuatFromEuler(&local_3f8,(TVector<double> *)&local_978._s_0,XZY,false);
  pFVar31 = &local_a58;
  local_bd8.X = pTVar27->X;
  local_bd8.Y = pTVar27->Y;
  local_bd8.Z = pTVar27->Z;
  local_bd8.W = pTVar27->W;
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pFVar30 = ::FString::FString(pFVar31,L"unexpected rotation for shortest interpolation type");
  auVar41._8_4_ = uVar61;
  auVar41._0_8_ = dVar8;
  auVar41._12_4_ = uVar62;
  auVar42._8_8_ =
       -(ulonglong)
        (auVar41._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_238.Rotation.XY.m128d_f64[1] - local_bd8.Y) >>
                               0x20) & uVar15,
                         SUB84(local_238.Rotation.XY.m128d_f64[1] - local_bd8.Y,0) & uVar14));
  auVar42._0_8_ =
       -(ulonglong)
        (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                         (local_238.Rotation.XY.m128d_f64[0] - local_bd8.X) >> 0x20)
                                  & uVar13,SUB84(local_238.Rotation.XY.m128d_f64[0] - local_bd8.X,0)
                                           & uVar12));
  uVar60 = movmskpd((int)pFVar31,auVar42);
  auVar43._8_4_ = uVar61;
  auVar43._0_8_ = dVar8;
  auVar43._12_4_ = uVar62;
  auVar44._8_8_ =
       -(ulonglong)
        (auVar43._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_238.Rotation.ZW.m128d_f64[1] - local_bd8.W) >>
                               0x20) & uVar15,
                         SUB84(local_238.Rotation.ZW.m128d_f64[1] - local_bd8.W,0) & uVar14));
  auVar44._0_8_ =
       -(ulonglong)
        (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                         (local_238.Rotation.ZW.m128d_f64[0] - local_bd8.Z) >> 0x20)
                                  & uVar13,SUB84(local_238.Rotation.ZW.m128d_f64[0] - local_bd8.Z,0)
                                           & uVar12));
  iVar24 = movmskpd((int)pFVar30,auVar44);
  uVar59 = iVar24 * 4 | uVar60;
  if (uVar59 == 0) {
LAB_14a49f269:
    uVar32 = 1;
  }
  else {
    auVar45._8_4_ = uVar61;
    auVar45._0_8_ = dVar8;
    auVar45._12_4_ = uVar62;
    lVar34 = -(ulonglong)
              (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                               (local_238.Rotation.ZW.m128d_f64[1] + local_bd8.W) >>
                                              0x20) & uVar15,
                                        SUB84(local_238.Rotation.ZW.m128d_f64[1] + local_bd8.W,0) &
                                        uVar14));
    auVar6._8_4_ = (int)lVar34;
    auVar6._0_8_ = -(ulonglong)
                    (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                                     (local_238.Rotation.ZW.m128d_f64[0] +
                                                     local_bd8.Z) >> 0x20) & uVar13,
                                              SUB84(local_238.Rotation.ZW.m128d_f64[0] + local_bd8.Z
                                                    ,0) & uVar12));
    auVar6._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
    uVar59 = movmskpd(uVar59,auVar6);
    auVar46._8_8_ =
         -(ulonglong)
          (auVar45._8_8_ <
          (double)CONCAT44((uint)((ulonglong)(local_bd8.Y + local_238.Rotation.XY.m128d_f64[1]) >>
                                 0x20) & uVar15,
                           SUB84(local_bd8.Y + local_238.Rotation.XY.m128d_f64[1],0) & uVar14));
    auVar46._0_8_ =
         -(ulonglong)
          (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                           (local_bd8.X + local_238.Rotation.XY.m128d_f64[0]) >>
                                          0x20) & uVar13,
                                    SUB84(local_bd8.X + local_238.Rotation.XY.m128d_f64[0],0) &
                                    uVar12));
    iVar24 = movmskpd(uVar60,auVar46);
    if ((uVar59 & 0x3fffffff) == 0 && iVar24 == 0) goto LAB_14a49f269;
    uVar32 = 0;
  }
  (*pcVar4)(this,uVar32,&local_a58);
  if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a58.Data.AllocatorInstance.Data);
  }
  pUVar25 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar25 == (URigHierarchy *)0x0) {
LAB_14a49f2be:
    pUVar25 = pUVar33;
  }
  else {
    pUVar26 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar24 = (int)pUVar26->_padding_;
    if ((*(int *)(pUVar25->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar25->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar26->_padding_)) goto LAB_14a49f2be;
  }
  URigHierarchy::ResetPoseToInitial(pUVar25,Bone);
  pUVar25 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar25 == (URigHierarchy *)0x0) {
LAB_14a49f2fe:
    pUVar25 = pUVar33;
  }
  else {
    pUVar26 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar24 = (int)pUVar26->_padding_;
    if ((*(int *)(pUVar25->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar25->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar26->_padding_)) goto LAB_14a49f2fe;
  }
  dVar9 = __real_c059000000000000;
  local_960._s_0.Z = __real_c059000000000000;
  local_960._s_0.X = ___xmm_40590000000000004059000000000000;
  local_960._s_0.Y = _UNK_1512468d8;
  pTVar27 = AnimationCore::QuatFromEuler(&local_3d8,(TVector<double> *)&local_960._s_0,XZY,false);
  dVar65 = _UNK_15219d578;
  dVar64 = ___xmm_c044000000000000c044000000000000;
  dVar11 = _UNK_15219d418;
  dVar10 = ___xmm_0000000000000000c044000000000000;
  local_6d8.Translation.XY.m128d_f64[0] = ___xmm_c044000000000000c044000000000000;
  local_6d8.Translation.XY.m128d_f64[1] = _UNK_15219d578;
  local_6d8.Rotation.XY.m128d_f64[0] = pTVar27->X;
  local_6d8.Rotation.XY.m128d_f64[1] = pTVar27->Y;
  local_6d8.Rotation.ZW.m128d_f64[0] = pTVar27->Z;
  local_6d8.Rotation.ZW.m128d_f64[1] = pTVar27->W;
  local_6d8.Translation.ZW.m128d_f64[0] = ___xmm_0000000000000000c044000000000000;
  local_6d8.Translation.ZW.m128d_f64[1] = _UNK_15219d418;
  local_6d8.Scale3D.XY.m128d_f64[0] = dVar18;
  local_6d8.Scale3D.XY.m128d_f64[1] = dVar19;
  local_6d8.Scale3D.ZW.m128d_f64[0] = dVar16;
  local_6d8.Scale3D.ZW.m128d_f64[1] = dVar17;
  URigHierarchy::SetGlobalTransform(pUVar25,2,&local_6d8,true,false);
  pFVar3 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).bMaintainOffset = true;
  (this->Unit).AdvancedSettings.InterpolationType = Average;
  FRigUnit_ParentConstraint::Execute(&this->Unit,pFVar3);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_a48,
                     L"unexpected translation for maintain offset and average interpolation type");
  pUVar25 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar25,&local_1d8,0,false);
  local_8c0 = local_1d8.Translation.ZW.m128d_f64[0];
  if (((__real_3f947ae140000000 <
        (double)CONCAT44((uint)((ulonglong)
                                (local_1d8.Translation.XY.m128d_f64[0] - ___real_c02151eb80000000)
                               >> 0x20) & uVar13,
                         SUB84(local_1d8.Translation.XY.m128d_f64[0] - ___real_c02151eb80000000,0) &
                         uVar12)) ||
      (uVar59 = SUB84(local_1d8.Translation.XY.m128d_f64[1] - ___real_401c0a3d80000000,0) & uVar12,
      uVar60 = (uint)((ulonglong)(local_1d8.Translation.XY.m128d_f64[1] - ___real_401c0a3d80000000)
                     >> 0x20) & uVar13,
      __real_3f947ae140000000 <= (double)CONCAT44(uVar60,uVar59) &&
      (double)CONCAT44(uVar60,uVar59) != __real_3f947ae140000000)) ||
     (__real_3f947ae140000000 <
      (double)CONCAT44((uint)((ulonglong)
                              (local_1d8.Translation.ZW.m128d_f64[0] - ___real_c02a000000000000) >>
                             0x20) & uVar13,
                       SUB84(local_1d8.Translation.ZW.m128d_f64[0] - ___real_c02a000000000000,0) &
                       uVar12))) {
    uVar32 = 0;
  }
  else {
    uVar32 = 1;
  }
  (*pcVar4)(this,uVar32);
  if (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a48.Data.AllocatorInstance.Data);
  }
  pUVar25 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar25,&local_178,0,false);
  local_948._s_0.X = ___xmm_c016b74bc00000004015a1cac0000000;
  local_948._s_0.Y = _UNK_15219d548;
  local_948._s_0.Z = __real_c0413851e0000000;
  pTVar27 = AnimationCore::QuatFromEuler(&local_3b8,(TVector<double> *)&local_948._s_0,XZY,false);
  pFVar31 = &local_a98;
  local_bd8.X = pTVar27->X;
  local_bd8.Y = pTVar27->Y;
  local_bd8.Z = pTVar27->Z;
  local_bd8.W = pTVar27->W;
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pFVar30 = ::FString::FString(pFVar31,
                               L"unexpected rotation for maintain offset and average interpolation type"
                              );
  auVar47._8_4_ = uVar61;
  auVar47._0_8_ = dVar8;
  auVar47._12_4_ = uVar62;
  auVar48._8_8_ =
       -(ulonglong)
        (auVar47._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_178.Rotation.ZW.m128d_f64[1] - local_bd8.W) >>
                               0x20) & uVar15,
                         SUB84(local_178.Rotation.ZW.m128d_f64[1] - local_bd8.W,0) & uVar14));
  auVar48._0_8_ =
       -(ulonglong)
        (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                         (local_178.Rotation.ZW.m128d_f64[0] - local_bd8.Z) >> 0x20)
                                  & uVar13,SUB84(local_178.Rotation.ZW.m128d_f64[0] - local_bd8.Z,0)
                                           & uVar12));
  iVar24 = movmskpd((int)pFVar31,auVar48);
  auVar49._8_4_ = uVar61;
  auVar49._0_8_ = dVar8;
  auVar49._12_4_ = uVar62;
  auVar50._8_8_ =
       -(ulonglong)
        (auVar49._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_178.Rotation.XY.m128d_f64[1] - local_bd8.Y) >>
                               0x20) & uVar15,
                         SUB84(local_178.Rotation.XY.m128d_f64[1] - local_bd8.Y,0) & uVar14));
  auVar50._0_8_ =
       -(ulonglong)
        (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                         (local_178.Rotation.XY.m128d_f64[0] - local_bd8.X) >> 0x20)
                                  & uVar13,SUB84(local_178.Rotation.XY.m128d_f64[0] - local_bd8.X,0)
                                           & uVar12));
  uVar59 = movmskpd((int)pFVar30,auVar50);
  uVar60 = iVar24 << 2 | uVar59;
  if (uVar60 == 0) {
LAB_14a49f57f:
    uVar32 = 1;
  }
  else {
    auVar51._8_4_ = uVar61;
    auVar51._0_8_ = dVar8;
    auVar51._12_4_ = uVar62;
    auVar52._8_8_ =
         -(ulonglong)
          (auVar51._8_8_ <
          (double)CONCAT44((uint)((ulonglong)(local_178.Rotation.ZW.m128d_f64[1] + local_bd8.W) >>
                                 0x20) & uVar15,
                           SUB84(local_178.Rotation.ZW.m128d_f64[1] + local_bd8.W,0) & uVar14));
    auVar52._0_8_ =
         -(ulonglong)
          (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                           (local_178.Rotation.ZW.m128d_f64[0] + local_bd8.Z) >>
                                          0x20) & uVar13,
                                    SUB84(local_178.Rotation.ZW.m128d_f64[0] + local_bd8.Z,0) &
                                    uVar12));
    uVar60 = movmskpd(uVar60,auVar52);
    lVar34 = -(ulonglong)
              (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                               (local_bd8.Y + local_178.Rotation.XY.m128d_f64[1]) >>
                                              0x20) & uVar15,
                                        SUB84(local_bd8.Y + local_178.Rotation.XY.m128d_f64[1],0) &
                                        uVar14));
    auVar7._8_4_ = (int)lVar34;
    auVar7._0_8_ = -(ulonglong)
                    (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                                     (local_bd8.X +
                                                     local_178.Rotation.XY.m128d_f64[0]) >> 0x20) &
                                              uVar13,SUB84(local_bd8.X +
                                                           local_178.Rotation.XY.m128d_f64[0],0) &
                                                     uVar12));
    auVar7._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
    iVar24 = movmskpd(uVar59,auVar7);
    if ((uVar60 & 0x3fffffff) == 0 && iVar24 == 0) goto LAB_14a49f57f;
    uVar32 = 0;
  }
  (*pcVar4)(this,uVar32,&local_a98);
  if (local_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a98.Data.AllocatorInstance.Data);
  }
  pUVar25 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::ResetPoseToInitial(pUVar25,Bone);
  pUVar25 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  local_930._s_0.Z = dVar9;
  local_930._s_0.X = ___xmm_40590000000000004059000000000000;
  local_930._s_0.Y = _UNK_1512468d8;
  pTVar27 = AnimationCore::QuatFromEuler(&local_398,(TVector<double> *)&local_930._s_0,XZY,false);
  local_678.Translation.XY.m128d_f64[0] = dVar64;
  local_678.Translation.XY.m128d_f64[1] = dVar65;
  local_678.Translation.ZW.m128d_f64[0] = dVar10;
  local_678.Translation.ZW.m128d_f64[1] = dVar11;
  local_678.Scale3D.XY.m128d_f64[0] = dVar18;
  local_678.Scale3D.XY.m128d_f64[1] = dVar19;
  local_678.Rotation.XY.m128d_f64[0] = pTVar27->X;
  local_678.Rotation.XY.m128d_f64[1] = pTVar27->Y;
  local_678.Rotation.ZW.m128d_f64[0] = pTVar27->Z;
  local_678.Rotation.ZW.m128d_f64[1] = pTVar27->W;
  local_678.Scale3D.ZW.m128d_f64[0] = dVar16;
  local_678.Scale3D.ZW.m128d_f64[1] = dVar17;
  URigHierarchy::SetGlobalTransform(pUVar25,2,&local_678,true,false);
  pFVar3 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).bMaintainOffset = true;
  (this->Unit).AdvancedSettings.InterpolationType = Shortest;
  FRigUnit_ParentConstraint::Execute(&this->Unit,pFVar3);
  pUVar25 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar25,&local_118,0,false);
  local_918._s_0.X = ___xmm_c020a9fbe0000000bff3581060000000;
  local_918._s_0.Y = _UNK_15219d558;
  local_918._s_0.Z = __real_c03905a1c0000000;
  pTVar27 = AnimationCore::QuatFromEuler(&local_378,(TVector<double> *)&local_918._s_0,XZY,false);
  pFVar31 = &local_a88;
  local_bd8.X = pTVar27->X;
  local_bd8.Y = pTVar27->Y;
  local_bd8.Z = pTVar27->Z;
  local_bd8.W = pTVar27->W;
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pFVar30 = ::FString::FString(pFVar31,
                               L"unexpected rotation for maintain offset and shortest interpolation type"
                              );
  auVar53._8_4_ = uVar61;
  auVar53._0_8_ = dVar8;
  auVar53._12_4_ = uVar62;
  auVar54._8_8_ =
       -(ulonglong)
        (auVar53._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_118.Rotation.ZW.m128d_f64[1] - local_bd8.W) >>
                               0x20) & uVar15,
                         SUB84(local_118.Rotation.ZW.m128d_f64[1] - local_bd8.W,0) & uVar14));
  auVar54._0_8_ =
       -(ulonglong)
        (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                         (local_118.Rotation.ZW.m128d_f64[0] - local_bd8.Z) >> 0x20)
                                  & uVar13,SUB84(local_118.Rotation.ZW.m128d_f64[0] - local_bd8.Z,0)
                                           & uVar12));
  iVar24 = movmskpd((int)pFVar31,auVar54);
  auVar55._8_4_ = uVar61;
  auVar55._0_8_ = dVar8;
  auVar55._12_4_ = uVar62;
  auVar56._8_8_ =
       -(ulonglong)
        (auVar55._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_118.Rotation.XY.m128d_f64[1] - local_bd8.Y) >>
                               0x20) & uVar15,
                         SUB84(local_118.Rotation.XY.m128d_f64[1] - local_bd8.Y,0) & uVar14));
  auVar56._0_8_ =
       -(ulonglong)
        (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                         (local_118.Rotation.XY.m128d_f64[0] - local_bd8.X) >> 0x20)
                                  & uVar13,SUB84(local_118.Rotation.XY.m128d_f64[0] - local_bd8.X,0)
                                           & uVar12));
  uVar59 = movmskpd((int)pFVar30,auVar56);
  uVar60 = iVar24 << 2 | uVar59;
  if (uVar60 != 0) {
    auVar57._8_4_ = uVar61;
    auVar57._0_8_ = dVar8;
    auVar57._12_4_ = uVar62;
    auVar58._8_8_ =
         -(ulonglong)
          (auVar57._8_8_ <
          (double)CONCAT44((uint)((ulonglong)(local_118.Rotation.ZW.m128d_f64[1] + local_bd8.W) >>
                                 0x20) & uVar15,
                           SUB84(local_118.Rotation.ZW.m128d_f64[1] + local_bd8.W,0) & uVar14));
    auVar58._0_8_ =
         -(ulonglong)
          (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                           (local_118.Rotation.ZW.m128d_f64[0] + local_bd8.Z) >>
                                          0x20) & uVar13,
                                    SUB84(local_118.Rotation.ZW.m128d_f64[0] + local_bd8.Z,0) &
                                    uVar12));
    uVar60 = movmskpd(uVar60,auVar58);
    auVar63._8_8_ =
         -(ulonglong)
          (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                           (local_bd8.Y + local_118.Rotation.XY.m128d_f64[1]) >>
                                          0x20) & uVar15,
                                    SUB84(local_bd8.Y + local_118.Rotation.XY.m128d_f64[1],0) &
                                    uVar14));
    auVar63._0_8_ =
         -(ulonglong)
          (dVar8 < (double)CONCAT44((uint)((ulonglong)
                                           (local_bd8.X + local_118.Rotation.XY.m128d_f64[0]) >>
                                          0x20) & uVar13,
                                    SUB84(local_bd8.X + local_118.Rotation.XY.m128d_f64[0],0) &
                                    uVar12));
    iVar24 = movmskpd(uVar59,auVar63);
    if ((uVar60 & 0x3fffffff) != 0 || iVar24 != 0) {
      uVar32 = 0;
      goto LAB_14a49f75f;
    }
  }
  uVar32 = 1;
LAB_14a49f75f:
  (*pcVar4)(this,uVar32,&local_a88,0);
  if (local_a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a88.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a49f7e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_ParentConstraintTest::GetBeautifiedTestName
          (FRigUnit_ParentConstraintTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_ParentConstraint");
  return __return_storage_ptr__;
}

