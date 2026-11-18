// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a4ca640

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EAutomationTestFlags __thiscall
FRigUnit_ScaleConstraintLocalSpaceOffsetTest::GetTestFlags
          (FRigUnit_ScaleConstraintLocalSpaceOffsetTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4ca650

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_ScaleConstraintLocalSpaceOffsetTest::IsStressTest
          (FRigUnit_ScaleConstraintLocalSpaceOffsetTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4ca8d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall
FRigUnit_ScaleConstraintLocalSpaceOffsetTest::GetRequiredDeviceNum
          (FRigUnit_ScaleConstraintLocalSpaceOffsetTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4ca8e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_ScaleConstraintLocalSpaceOffsetTest::GetTestSourceFileName
          (FRigUnit_ScaleConstraintLocalSpaceOffsetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Highlevel\\Hierarchy\\RigUnit_TransformConstraint.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4ca970

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
FRigUnit_ScaleConstraintLocalSpaceOffsetTest::GetTestSourceFileLine
          (FRigUnit_ScaleConstraintLocalSpaceOffsetTest *this)

{
  return 0x7f2;
}

// GetTests @ 14a4caab0

/* WARNING: Removing unreachable block (ram,0x00014a4cab9d) */
/* WARNING: Removing unreachable block (ram,0x00014a4cac68) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ScaleConstraintLocalSpaceOffsetTest::GetTests
          (FRigUnit_ScaleConstraintLocalSpaceOffsetTest *this,
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
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_ScaleConstraintLocalSpaceOffset");
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

// RunTest @ 14a4cacd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_ScaleConstraintLocalSpaceOffsetTest::RunTest
          (FRigUnit_ScaleConstraintLocalSpaceOffsetTest *this,FString *param_1)

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
  FRigUnit_ScaleConstraintLocalSpaceOffset *pFVar15;
  FRigUnit_ScaleConstraintLocalSpaceOffset local_88;
  
  (**(code **)(*(longlong *)this + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar14 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar5 = (int)pUVar14->_padding_;
    if ((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar14->_padding_)) goto LAB_14a4cad37;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4cad37:
  URigHierarchy::Reset(this_00);
  pFVar15 = FRigUnit_ScaleConstraintLocalSpaceOffset::FRigUnit_ScaleConstraintLocalSpaceOffset
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
                    /* WARNING: Could not recover jumptable at 0x00014a4cae51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar13 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar13;
}

// RunControlRigUnitTest @ 14a4cae60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_ScaleConstraintLocalSpaceOffsetTest::RunControlRigUnitTest
          (FRigUnit_ScaleConstraintLocalSpaceOffsetTest *this,FString *param_1)

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
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint uVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  bool bVar34;
  undefined1 uVar35;
  int iVar36;
  URigHierarchy *pUVar37;
  UClass *pUVar38;
  FName *pFVar39;
  FScriptContainerElement *pFVar40;
  URigHierarchy *pUVar41;
  TQuat<double> *pTVar42;
  undefined8 uVar43;
  double dVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined1 auStackY_d08 [32];
  FRigElementKey local_cb8;
  undefined4 uStack_cac;
  FRigElementKey local_ca8;
  undefined4 uStack_c9c;
  FRigElementKey local_c98;
  undefined4 uStack_c8c;
  FRigElementKey local_c88;
  undefined4 uStack_c7c;
  uint local_c78;
  FNameEntryId FStack_c74;
  undefined4 uStack_c70;
  uint local_c6c;
  FNameEntryId FStack_c68;
  undefined4 uStack_c64;
  uint local_c60;
  FNameEntryId FStack_c5c;
  undefined4 uStack_c58;
  uint local_c54;
  FNameEntryId FStack_c50;
  undefined4 uStack_c4c;
  undefined4 local_c48;
  FNameEntryId FStack_c44;
  uint uStack_c40;
  undefined4 local_c3c;
  FNameEntryId FStack_c38;
  uint uStack_c34;
  undefined4 local_c30;
  FNameEntryId FStack_c2c;
  uint uStack_c28;
  FName local_c24;
  FName local_c1c;
  FName local_c14;
  FRigElementKey local_c08;
  FRigElementKey local_bf8;
  FRigElementKey local_be8;
  FRigElementKey local_bd8;
  FRigElementKey local_bc8;
  FRigElementKey local_bb8;
  FRigElementKey local_ba8;
  FRigElementKey local_b98;
  FRigElementKey local_b88;
  FRigElementKey local_b78;
  FRigElementKey local_b68;
  FRigElementKey local_b58;
  FRigElementKey local_b48;
  FString local_b38;
  FString local_b28;
  FString local_b18;
  FString local_b08;
  FString local_af8;
  FName local_ae8;
  FName local_ae0;
  FName local_ad8;
  FName local_ad0;
  FName local_ac8;
  FName local_ac0;
  FName local_ab8 [2];
  double local_aa8;
  double dStack_aa0;
  double local_a98;
  double dStack_a90;
  double local_a88;
  double dStack_a80;
  double local_a78;
  double local_a70;
  double dStack_a68;
  double local_a60;
  TVector<double>_u_0 local_a58;
  TVector<double>_u_0 local_a40;
  TVector<double>_u_0 local_a28;
  TVector<double>_u_0 local_a10;
  FRigElementKey local_9f8 [2];
  double local_9d8;
  double local_9c0;
  double local_9a8;
  TTransform<double> local_998;
  TTransform<double> local_938;
  TTransform<double> local_8d8;
  TTransform<double> local_878;
  TTransform<double> local_818;
  TTransform<double> local_7b8;
  TTransform<double> local_758;
  TTransform<double> local_6f8;
  TTransform<double> local_698;
  double local_638;
  double dStack_630;
  double local_628;
  double dStack_620;
  double local_618;
  double dStack_610;
  double local_608;
  undefined8 uStack_600;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  undefined8 uStack_5e0;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  double dStack_5c0;
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  undefined8 uStack_5a0;
  double local_598;
  double dStack_590;
  double local_588;
  double dStack_580;
  double local_578;
  double dStack_570;
  double local_568;
  double dStack_560;
  double local_558;
  double dStack_550;
  double local_548;
  undefined8 uStack_540;
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
  undefined8 uStack_4e0;
  double local_4d8;
  double dStack_4d0;
  double local_4c8;
  double dStack_4c0;
  undefined1 local_4b8 [16];
  double local_4a8;
  double dStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  double local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
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
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  TQuat<double> local_338;
  TQuat<double> local_318;
  TQuat<double> local_2f8;
  TQuat<double> local_2d8;
  TTransform<double> local_2b8;
  TTransform<double> local_258;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_d08;
  this_00 = &this->field_0x5f8;
  pUVar37 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  pUVar41 = (URigHierarchy *)0x0;
  if (pUVar37 == (URigHierarchy *)0x0) {
LAB_14a4caf16:
    pUVar37 = pUVar41;
  }
  else {
    pUVar38 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar36 = (int)pUVar38->_padding_;
    if ((*(int *)(pUVar37->_padding_ + 0x38) < iVar36) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar37->_padding_ + 0x30) + (longlong)iVar36 * 8) !=
        &pUVar38->_padding_)) goto LAB_14a4caf16;
  }
  dVar15 = UE::Math::TQuat<double>::Identity.W;
  dVar14 = UE::Math::TQuat<double>::Identity.Z;
  dVar13 = UE::Math::TQuat<double>::Identity.Y;
  dVar44 = UE::Math::TQuat<double>::Identity.X;
  uVar33 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar32 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar31 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_c78 = local_c78 & 0xffffff00;
  FStack_c74.Value = 0;
  uStack_c70 = 0;
  local_618 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_610 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_5f8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_5f0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_638 = UE::Math::TQuat<double>::Identity.X;
  dStack_630 = UE::Math::TQuat<double>::Identity.Y;
  local_628 = UE::Math::TQuat<double>::Identity.Z;
  dStack_620 = UE::Math::TQuat<double>::Identity.W;
  local_608 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_600 = 0;
  local_5e8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uStack_5e0 = 0;
  pFVar39 = ::FName::FName(&local_ae8,L"Child");
  local_bc8.Name.ComparisonIndex.Value = FStack_c74.Value;
  local_bc8._0_4_ = local_c78;
  local_818.Rotation.XY.m128d_f64[0] = dVar44;
  local_818.Rotation.XY.m128d_f64[1] = dVar13;
  local_818.Rotation.ZW.m128d_f64[0] = dVar14;
  local_818.Rotation.ZW.m128d_f64[1] = dVar15;
  local_818.Translation.XY.m128d_f64[0] = (double)uVar43;
  local_818.Translation.XY.m128d_f64[1] = (double)uVar29;
  local_818.Translation.ZW.m128d_f64[0] = (double)uVar30;
  local_818.Translation.ZW.m128d_f64[1] = 0.0;
  local_818.Scale3D.XY.m128d_f64[0] = (double)uVar31;
  local_818.Scale3D.XY.m128d_f64[1] = (double)uVar32;
  local_818.Scale3D.ZW.m128d_f64[0] = (double)uVar33;
  local_818.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_bc8.Name.Number = 0;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar37,&local_ba8,*pFVar39,&local_bc8,&local_818,true,User,
             false,false);
  pUVar37 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar37 == (URigHierarchy *)0x0) {
LAB_14a4cb03a:
    pUVar37 = pUVar41;
  }
  else {
    pUVar38 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar36 = (int)pUVar38->_padding_;
    if ((*(int *)(pUVar37->_padding_ + 0x38) < iVar36) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar37->_padding_ + 0x30) + (longlong)iVar36 * 8) !=
        &pUVar38->_padding_)) goto LAB_14a4cb03a;
  }
  dVar25 = UE::Math::TQuat<double>::Identity.W;
  dVar20 = UE::Math::TQuat<double>::Identity.Z;
  dVar19 = UE::Math::TQuat<double>::Identity.Y;
  dVar16 = UE::Math::TQuat<double>::Identity.X;
  uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar15 = _UNK_150925008;
  dVar14 = ___xmm_00000000000000004010000000000000;
  dVar13 = _UNK_15076bb98;
  dVar44 = ___xmm_40100000000000004010000000000000;
  local_c6c = local_c6c & 0xffffff00;
  local_5b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_5b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_5d8 = UE::Math::TQuat<double>::Identity.X;
  dStack_5d0 = UE::Math::TQuat<double>::Identity.Y;
  local_5c8 = UE::Math::TQuat<double>::Identity.Z;
  dStack_5c0 = UE::Math::TQuat<double>::Identity.W;
  local_5a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_5a0 = 0;
  local_598 = ___xmm_40100000000000004010000000000000;
  dStack_590 = _UNK_15076bb98;
  local_588 = ___xmm_00000000000000004010000000000000;
  dStack_580 = _UNK_150925008;
  FStack_c68.Value = 0;
  uStack_c64 = 0;
  pFVar39 = ::FName::FName(&local_ae0,L"Parent1");
  local_bd8.Name.ComparisonIndex.Value = FStack_c68.Value;
  local_bd8._0_4_ = local_c6c;
  local_7b8.Rotation.XY.m128d_f64[0] = dVar16;
  local_7b8.Rotation.XY.m128d_f64[1] = dVar19;
  local_7b8.Rotation.ZW.m128d_f64[0] = dVar20;
  local_7b8.Rotation.ZW.m128d_f64[1] = dVar25;
  local_7b8.Translation.XY.m128d_f64[0] = (double)uVar43;
  local_7b8.Translation.XY.m128d_f64[1] = (double)uVar29;
  local_7b8.Translation.ZW.m128d_f64[0] = (double)uVar30;
  local_7b8.Translation.ZW.m128d_f64[1] = 0.0;
  local_7b8.Scale3D.XY.m128d_f64[0] = dVar44;
  local_7b8.Scale3D.XY.m128d_f64[1] = dVar13;
  local_7b8.Scale3D.ZW.m128d_f64[0] = dVar14;
  local_7b8.Scale3D.ZW.m128d_f64[1] = dVar15;
  local_bd8.Name.Number = 0;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar37,&local_b98,*pFVar39,&local_bd8,&local_7b8,true,User,
             false,false);
  pUVar37 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar37 == (URigHierarchy *)0x0) {
LAB_14a4cb15a:
    pUVar37 = pUVar41;
  }
  else {
    pUVar38 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar36 = (int)pUVar38->_padding_;
    if ((*(int *)(pUVar37->_padding_ + 0x38) < iVar36) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar37->_padding_ + 0x30) + (longlong)iVar36 * 8) !=
        &pUVar38->_padding_)) goto LAB_14a4cb15a;
  }
  dVar25 = UE::Math::TQuat<double>::Identity.W;
  dVar20 = UE::Math::TQuat<double>::Identity.Z;
  dVar19 = UE::Math::TQuat<double>::Identity.Y;
  dVar16 = UE::Math::TQuat<double>::Identity.X;
  uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar15 = _UNK_150689688;
  dVar14 = ___xmm_3ff00000000000003ff0000000000000;
  dVar13 = _UNK_150689518;
  dVar44 = ___xmm_00000000000000003ff0000000000000;
  local_c60 = local_c60 & 0xffffff00;
  local_558 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_550 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_578 = UE::Math::TQuat<double>::Identity.X;
  dStack_570 = UE::Math::TQuat<double>::Identity.Y;
  local_568 = UE::Math::TQuat<double>::Identity.Z;
  dStack_560 = UE::Math::TQuat<double>::Identity.W;
  local_548 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_540 = 0;
  local_aa8 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_aa0 = _UNK_150689688;
  local_a98 = ___xmm_00000000000000003ff0000000000000;
  dStack_a90 = _UNK_150689518;
  local_538 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_530 = _UNK_150689688;
  local_528 = ___xmm_00000000000000003ff0000000000000;
  dStack_520 = _UNK_150689518;
  FStack_c5c.Value = 0;
  uStack_c58 = 0;
  pFVar39 = ::FName::FName(&local_ad8,L"Parent2");
  local_bb8.Name.ComparisonIndex.Value = FStack_c5c.Value;
  local_bb8._0_4_ = local_c60;
  local_758.Rotation.XY.m128d_f64[0] = dVar16;
  local_758.Rotation.XY.m128d_f64[1] = dVar19;
  local_758.Rotation.ZW.m128d_f64[0] = dVar20;
  local_758.Rotation.ZW.m128d_f64[1] = dVar25;
  local_758.Translation.XY.m128d_f64[0] = (double)uVar43;
  local_758.Translation.XY.m128d_f64[1] = (double)uVar29;
  local_758.Translation.ZW.m128d_f64[0] = (double)uVar30;
  local_758.Translation.ZW.m128d_f64[1] = 0.0;
  local_758.Scale3D.XY.m128d_f64[0] = dVar14;
  local_758.Scale3D.XY.m128d_f64[1] = dVar15;
  local_758.Scale3D.ZW.m128d_f64[0] = dVar44;
  local_758.Scale3D.ZW.m128d_f64[1] = dVar13;
  local_bb8.Name.Number = 0;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar37,&local_b88,*pFVar39,&local_bb8,&local_758,true,User,
             false,false);
  pTVar2 = &(this->Unit).Parents;
  (this->Unit).Child.Type = local_ba8.Type;
  *(undefined3 *)&(this->Unit).Child.field_0x1 = local_ba8._1_3_;
  (this->Unit).Child.Name.ComparisonIndex = (FNameEntryId)local_ba8.Name.ComparisonIndex.Value;
  (this->Unit).Child.Name.Number = local_ba8.Name.Number;
  pFVar3 = (FRigElementKey *)(pTVar2->AllocatorInstance).Data;
  local_ca8.Name.Number = local_b98.Name.Number;
  local_ca8.Type = local_b98.Type;
  local_ca8._1_3_ = local_b98._1_3_;
  local_ca8.Name.ComparisonIndex.Value = local_b98.Name.ComparisonIndex.Value;
  uStack_c9c = 0x3f800000;
  if ((pFVar3 <= &local_ca8) &&
     (&local_ca8 <
      (FRigElementKey *)((longlong)pFVar3 + (longlong)(this->Unit).Parents.ArrayMax * 0x10))) {
    bVar34 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar34) {
      pcVar5 = (code *)swi(3);
      uVar35 = (*pcVar5)();
      return (bool)uVar35;
    }
  }
  iVar36 = (this->Unit).Parents.ArrayNum;
  piVar1 = &(this->Unit).Parents.ArrayMax;
  if (iVar36 == *piVar1) {
    iVar36 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  uStack_c8c = 0x3f800000;
  pFVar40 = (pTVar2->AllocatorInstance).Data + (longlong)iVar36 * 0x10;
  (this->Unit).Parents.ArrayNum = iVar36 + 1;
  *(undefined8 *)pFVar40 = local_ca8._0_8_;
  *(ulonglong *)(pFVar40 + 8) = CONCAT44(uStack_c9c,local_ca8.Name.Number);
  pFVar3 = (FRigElementKey *)(pTVar2->AllocatorInstance).Data;
  local_c98.Name.Number = local_b88.Name.Number;
  local_c98.Type = local_b88.Type;
  local_c98._1_3_ = local_b88._1_3_;
  local_c98.Name.ComparisonIndex.Value = local_b88.Name.ComparisonIndex.Value;
  if ((pFVar3 <= &local_c98) &&
     (&local_c98 < (FRigElementKey *)((longlong)pFVar3 + (longlong)*piVar1 * 0x10))) {
    bVar34 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar34) {
      pcVar5 = (code *)swi(3);
      uVar35 = (*pcVar5)();
      return (bool)uVar35;
    }
  }
  iVar36 = (this->Unit).Parents.ArrayNum;
  if (iVar36 == *piVar1) {
    iVar36 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Unit).Parents.ArrayNum = iVar36 + 1;
  this_01 = &this->field_0x5d0;
  pFVar40 = (pTVar2->AllocatorInstance).Data + (longlong)iVar36 * 0x10;
  *(undefined8 *)pFVar40 = local_c98._0_8_;
  *(ulonglong *)(pFVar40 + 8) = CONCAT44(uStack_c8c,local_c98.Name.Number);
  pUVar37 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_01);
  if (pUVar37 == (URigHierarchy *)0x0) {
LAB_14a4cb42c:
    pUVar37 = pUVar41;
  }
  else {
    pUVar38 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar36 = (int)pUVar38->_padding_;
    if ((*(int *)(pUVar37->_padding_ + 0x38) < iVar36) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar37->_padding_ + 0x30) + (longlong)iVar36 * 8) !=
        &pUVar38->_padding_)) goto LAB_14a4cb42c;
  }
  URigHierarchy::ResetPoseToInitial(pUVar37,Bone);
  pFVar4 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = false;
  FRigUnit_ScaleConstraintLocalSpaceOffset::Execute(&this->Unit,pFVar4);
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_b08,L"unexpected scale for maintain offset off");
  pUVar37 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_01);
  if (pUVar37 == (URigHierarchy *)0x0) {
LAB_14a4cb4a0:
    pUVar37 = (URigHierarchy *)0x0;
  }
  else {
    pUVar38 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar36 = (int)pUVar38->_padding_;
    if ((*(int *)(pUVar37->_padding_ + 0x38) < iVar36) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar37->_padding_ + 0x30) + (longlong)iVar36 * 8) !=
        &pUVar38->_padding_)) goto LAB_14a4cb4a0;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar37,&local_2b8,0,false);
  dVar44 = __real_4000000000000000;
  uVar18 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar17 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_a78 = local_2b8.Scale3D.ZW.m128d_f64[0];
  local_a88 = local_2b8.Scale3D.XY.m128d_f64[0];
  dStack_a80 = local_2b8.Scale3D.XY.m128d_f64[1];
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)
                                (local_2b8.Scale3D.XY.m128d_f64[0] - __real_4000000000000000) >>
                               0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_2b8.Scale3D.XY.m128d_f64[0] - __real_4000000000000000,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)
                               (local_2b8.Scale3D.XY.m128d_f64[1] - __real_4000000000000000) >> 0x20
                              ) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_2b8.Scale3D.XY.m128d_f64[1] - __real_4000000000000000,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)
                              (local_2b8.Scale3D.ZW.m128d_f64[0] - __real_4000000000000000) >> 0x20)
                       & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_2b8.Scale3D.ZW.m128d_f64[0] - __real_4000000000000000,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    uVar43 = 0;
  }
  else {
    uVar43 = 1;
  }
  (*pcVar5)(this,uVar43,&local_b08);
  if (local_b08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b08.Data.AllocatorInstance.Data);
  }
  pUVar37 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_01);
  if (pUVar37 == (URigHierarchy *)0x0) {
LAB_14a4cb585:
    pUVar37 = (URigHierarchy *)0x0;
  }
  else {
    pUVar38 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar36 = (int)pUVar38->_padding_;
    if ((*(int *)(pUVar37->_padding_ + 0x38) < iVar36) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar37->_padding_ + 0x30) + (longlong)iVar36 * 8) !=
        &pUVar38->_padding_)) goto LAB_14a4cb585;
  }
  URigHierarchy::ResetPoseToInitial(pUVar37,Bone);
  pUVar37 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_01);
  if (pUVar37 == (URigHierarchy *)0x0) {
LAB_14a4cb5c5:
    pUVar37 = (URigHierarchy *)0x0;
  }
  else {
    pUVar38 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar36 = (int)pUVar38->_padding_;
    if ((*(int *)(pUVar37->_padding_ + 0x38) < iVar36) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar37->_padding_ + 0x30) + (longlong)iVar36 * 8) !=
        &pUVar38->_padding_)) goto LAB_14a4cb5c5;
  }
  local_4f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_4f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_6f8.Translation.XY.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_6f8.Translation.XY.m128d_f64[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_518 = UE::Math::TQuat<double>::Identity.X;
  dStack_510 = UE::Math::TQuat<double>::Identity.Y;
  local_508 = UE::Math::TQuat<double>::Identity.Z;
  dStack_500 = UE::Math::TQuat<double>::Identity.W;
  local_4e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_4e0 = 0;
  local_4d8 = ___xmm_3fe00000000000003fe0000000000000;
  dStack_4d0 = _UNK_150689678;
  local_4c8 = ___xmm_00000000000000003fe0000000000000;
  dStack_4c0 = _UNK_150978bb8;
  local_6f8.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
  local_6f8.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
  local_6f8.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
  local_6f8.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
  local_6f8.Translation.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_6f8.Translation.ZW.m128d_f64[1] = 0.0;
  local_6f8.Scale3D.XY.m128d_f64[0] = ___xmm_3fe00000000000003fe0000000000000;
  local_6f8.Scale3D.XY.m128d_f64[1] = _UNK_150689678;
  local_6f8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003fe0000000000000;
  local_6f8.Scale3D.ZW.m128d_f64[1] = _UNK_150978bb8;
  URigHierarchy::SetGlobalTransformByIndex(pUVar37,2,&local_6f8,false,true,false,false);
  pFVar4 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = true;
  FRigUnit_ScaleConstraintLocalSpaceOffset::Execute(&this->Unit,pFVar4);
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_af8,L"unexpected scale for maintain offset on");
  pUVar37 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_01);
  if (pUVar37 == (URigHierarchy *)0x0) {
LAB_14a4cb6d7:
    pUVar37 = (URigHierarchy *)0x0;
  }
  else {
    pUVar38 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar36 = (int)pUVar38->_padding_;
    if ((*(int *)(pUVar37->_padding_ + 0x38) < iVar36) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar37->_padding_ + 0x30) + (longlong)iVar36 * 8) !=
        &pUVar38->_padding_)) goto LAB_14a4cb6d7;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar37,&local_258,0,false);
  local_a60 = local_258.Scale3D.ZW.m128d_f64[0];
  local_a70 = local_258.Scale3D.XY.m128d_f64[0];
  dStack_a68 = local_258.Scale3D.XY.m128d_f64[1];
  if (((__real_3f50624de0000000 <
        (double)CONCAT44((uint)((ulonglong)
                                (local_258.Scale3D.XY.m128d_f64[0] - __real_3fe69fbe76c8b439) >>
                               0x20) & uVar18,
                         SUB84(local_258.Scale3D.XY.m128d_f64[0] - __real_3fe69fbe76c8b439,0) &
                         uVar17)) ||
      (__real_3f50624de0000000 <
       (double)CONCAT44((uint)((ulonglong)
                               (local_258.Scale3D.XY.m128d_f64[1] - __real_3fe69fbe80000000) >> 0x20
                              ) & uVar18,
                        SUB84(local_258.Scale3D.XY.m128d_f64[1] - __real_3fe69fbe80000000,0) &
                        uVar17))) ||
     (__real_3f50624de0000000 <
      (double)CONCAT44((uint)((ulonglong)
                              (local_258.Scale3D.ZW.m128d_f64[0] - __real_3fe69fbe80000000) >> 0x20)
                       & uVar18,SUB84(local_258.Scale3D.ZW.m128d_f64[0] - __real_3fe69fbe80000000,0)
                                & uVar17))) {
    uVar43 = 0;
  }
  else {
    uVar43 = 1;
  }
  (*pcVar5)(this,uVar43,&local_af8,0);
  if (local_af8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_af8.Data.AllocatorInstance.Data);
  }
  iVar36 = *piVar1;
  pUVar37 = (URigHierarchy *)0x0;
  (this->Unit).Parents.ArrayNum = 0;
  if (iVar36 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pUVar41 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar41 == (URigHierarchy *)0x0) {
LAB_14a4cb7df:
    pUVar41 = pUVar37;
  }
  else {
    pUVar38 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar36 = (int)pUVar38->_padding_;
    if ((*(int *)(pUVar41->_padding_ + 0x38) < iVar36) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar41->_padding_ + 0x30) + (longlong)iVar36 * 8) !=
        &pUVar38->_padding_)) goto LAB_14a4cb7df;
  }
  pUVar41 = URigHierarchyController::GetHierarchy((URigHierarchyController *)pUVar41);
  URigHierarchy::Reset(pUVar41);
  pUVar41 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar41 == (URigHierarchy *)0x0) {
LAB_14a4cb825:
    pUVar41 = pUVar37;
  }
  else {
    pUVar38 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar36 = (int)pUVar38->_padding_;
    if ((*(int *)(pUVar41->_padding_ + 0x38) < iVar36) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar41->_padding_ + 0x30) + (longlong)iVar36 * 8) !=
        &pUVar38->_padding_)) goto LAB_14a4cb825;
  }
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[0];
  uVar45 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar46 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_c54 = local_c54 & 0xffffff00;
  FStack_c50.Value = 0;
  uStack_c4c = 0;
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_4b8._8_4_ = uVar45;
  local_4b8._0_8_ = (double)fVar11;
  local_4b8._12_4_ = uVar46;
  local_498 = 0;
  uStack_490 = 0;
  local_488 = 0;
  uStack_480 = 0;
  local_4a8 = (double)fVar6;
  dStack_4a0 = (double)fVar8;
  local_478 = (double)fVar12;
  dStack_470 = (double)fVar9;
  local_468 = (double)fVar7;
  dStack_460 = (double)fVar10;
  pFVar39 = ::FName::FName(&local_ad0,L"Root");
  local_b78.Name.ComparisonIndex.Value = FStack_c50.Value;
  local_b78._0_4_ = local_c54;
  local_878.Rotation.XY.m128d_f64[1]._0_4_ = uVar45;
  local_878.Rotation.XY.m128d_f64[0] = (double)fVar11;
  local_878.Rotation.XY.m128d_f64[1]._4_4_ = uVar46;
  local_878.Translation.XY.m128d_f64[0] = 0.0;
  local_878.Translation.XY.m128d_f64[1] = 0.0;
  local_878.Translation.ZW.m128d_f64[0] = 0.0;
  local_878.Translation.ZW.m128d_f64[1] = 0.0;
  local_b78.Name.Number = 0;
  local_878.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_878.Rotation.ZW.m128d_f64[1] = (double)fVar8;
  local_878.Scale3D.XY.m128d_f64[0] = (double)fVar12;
  local_878.Scale3D.XY.m128d_f64[1] = (double)fVar9;
  local_878.Scale3D.ZW.m128d_f64[0] = (double)fVar7;
  local_878.Scale3D.ZW.m128d_f64[1] = (double)fVar10;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar41,local_9f8,*pFVar39,&local_b78,&local_878,true,User,
             false,false);
  pUVar41 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar41 == (URigHierarchy *)0x0) {
LAB_14a4cb945:
    pUVar41 = pUVar37;
  }
  else {
    pUVar38 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar36 = (int)pUVar38->_padding_;
    if ((*(int *)(pUVar41->_padding_ + 0x38) < iVar36) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar41->_padding_ + 0x30) + (longlong)iVar36 * 8) !=
        &pUVar38->_padding_)) goto LAB_14a4cb945;
  }
  local_a58._s_0.Z = 0.0;
  local_a58._s_0.X = 0.0;
  local_a58._s_0.Y = 0.0;
  pTVar42 = AnimationCore::QuatFromEuler(&local_338,(TVector<double> *)&local_a58._s_0,XZY,false);
  dVar28 = _UNK_15219d398;
  dVar27 = ___xmm_00000000000000004018000000000000;
  dVar26 = _UNK_15149cb08;
  dVar25 = ___xmm_00000000000000004049000000000000;
  dVar20 = _UNK_15076bbe8;
  dVar19 = ___xmm_40140000000000004010000000000000;
  dVar13 = pTVar42->X;
  dVar14 = pTVar42->Y;
  dVar15 = pTVar42->Z;
  dVar16 = pTVar42->W;
  local_438 = 0;
  uStack_430 = 0;
  local_428 = ___xmm_00000000000000004049000000000000;
  dStack_420 = _UNK_15149cb08;
  local_418 = ___xmm_40140000000000004010000000000000;
  dStack_410 = _UNK_15076bbe8;
  local_408 = ___xmm_00000000000000004018000000000000;
  dStack_400 = _UNK_15219d398;
  local_458 = dVar13;
  dStack_450 = dVar14;
  local_448 = dVar15;
  dStack_440 = dVar16;
  ::FName::FName(&local_c24,L"Root");
  FStack_c44 = local_c24.ComparisonIndex.Value;
  uStack_c40 = local_c24.Number;
  local_c48 = CONCAT31(local_c48._1_3_,1);
  pFVar39 = ::FName::FName(&local_ac8,L"Parent1");
  local_b68.Name.ComparisonIndex.Value = FStack_c44.Value;
  local_b68._0_4_ = local_c48;
  local_b68.Name.Number = uStack_c40;
  local_698.Translation.XY.m128d_f64[0] = 0.0;
  local_698.Translation.XY.m128d_f64[1] = 0.0;
  local_698.Translation.ZW.m128d_f64[0] = dVar25;
  local_698.Translation.ZW.m128d_f64[1] = dVar26;
  local_698.Scale3D.XY.m128d_f64[0] = dVar19;
  local_698.Scale3D.XY.m128d_f64[1] = dVar20;
  local_698.Scale3D.ZW.m128d_f64[0] = dVar27;
  local_698.Scale3D.ZW.m128d_f64[1] = dVar28;
  local_698.Rotation.XY.m128d_f64[0] = dVar13;
  local_698.Rotation.XY.m128d_f64[1] = dVar14;
  local_698.Rotation.ZW.m128d_f64[0] = dVar15;
  local_698.Rotation.ZW.m128d_f64[1] = dVar16;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar41,&local_bf8,*pFVar39,&local_b68,&local_698,false,User
             ,false,false);
  pUVar41 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar41 == (URigHierarchy *)0x0) {
LAB_14a4cbaa0:
    pUVar41 = pUVar37;
  }
  else {
    pUVar38 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar36 = (int)pUVar38->_padding_;
    if ((*(int *)(pUVar41->_padding_ + 0x38) < iVar36) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar41->_padding_ + 0x30) + (longlong)iVar36 * 8) !=
        &pUVar38->_padding_)) goto LAB_14a4cbaa0;
  }
  local_a40._s_0.Z = 0.0;
  local_a40._s_0.X = 0.0;
  local_a40._s_0.Y = 0.0;
  pTVar42 = AnimationCore::QuatFromEuler(&local_318,(TVector<double> *)&local_a40._s_0,XZY,false);
  dVar24 = _UNK_150f34e28;
  dVar23 = ___xmm_40590000000000000000000000000000;
  dVar22 = _UNK_15076acf8;
  dVar21 = ___xmm_00000000000000004008000000000000;
  dVar20 = _UNK_150744178;
  dVar19 = ___xmm_40000000000000003ff0000000000000;
  dVar13 = pTVar42->X;
  dVar14 = pTVar42->Y;
  dVar15 = pTVar42->Z;
  dVar16 = pTVar42->W;
  local_3d8 = ___xmm_40590000000000000000000000000000;
  dStack_3d0 = _UNK_150f34e28;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_3b8 = ___xmm_40000000000000003ff0000000000000;
  dStack_3b0 = _UNK_150744178;
  local_3a8 = ___xmm_00000000000000004008000000000000;
  dStack_3a0 = _UNK_15076acf8;
  local_3f8 = dVar13;
  dStack_3f0 = dVar14;
  local_3e8 = dVar15;
  dStack_3e0 = dVar16;
  ::FName::FName(&local_c1c,L"Root");
  FStack_c38 = local_c1c.ComparisonIndex.Value;
  uStack_c34 = local_c1c.Number;
  local_c3c = CONCAT31(local_c3c._1_3_,1);
  pFVar39 = ::FName::FName(&local_ac0,L"Parent2");
  local_b58.Name.ComparisonIndex.Value = FStack_c38.Value;
  local_b58._0_4_ = local_c3c;
  local_b58.Name.Number = uStack_c34;
  local_998.Translation.XY.m128d_f64[0] = dVar23;
  local_998.Translation.XY.m128d_f64[1] = dVar24;
  local_998.Translation.ZW.m128d_f64[0] = 0.0;
  local_998.Translation.ZW.m128d_f64[1] = 0.0;
  local_998.Scale3D.XY.m128d_f64[0] = dVar19;
  local_998.Scale3D.XY.m128d_f64[1] = dVar20;
  local_998.Scale3D.ZW.m128d_f64[0] = dVar21;
  local_998.Scale3D.ZW.m128d_f64[1] = dVar22;
  local_998.Rotation.XY.m128d_f64[0] = dVar13;
  local_998.Rotation.XY.m128d_f64[1] = dVar14;
  local_998.Rotation.ZW.m128d_f64[0] = dVar15;
  local_998.Rotation.ZW.m128d_f64[1] = dVar16;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar41,&local_be8,*pFVar39,&local_b58,&local_998,false,User
             ,false,false);
  pUVar41 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar41 == (URigHierarchy *)0x0) {
LAB_14a4cbbfd:
    pUVar41 = pUVar37;
  }
  else {
    pUVar38 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar36 = (int)pUVar38->_padding_;
    if ((*(int *)(pUVar41->_padding_ + 0x38) < iVar36) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar41->_padding_ + 0x30) + (longlong)iVar36 * 8) !=
        &pUVar38->_padding_)) goto LAB_14a4cbbfd;
  }
  local_a28._s_0.Z = 0.0;
  local_a28._s_0.X = 0.0;
  local_a28._s_0.Y = 0.0;
  pTVar42 = AnimationCore::QuatFromEuler(&local_2f8,(TVector<double> *)&local_a28._s_0,XZY,false);
  dVar22 = dStack_a90;
  dVar21 = local_a98;
  dVar20 = dStack_aa0;
  dVar19 = local_aa8;
  local_378 = 0;
  uStack_370 = 0;
  dVar13 = pTVar42->X;
  dVar14 = pTVar42->Y;
  dVar15 = pTVar42->Z;
  dVar16 = pTVar42->W;
  local_368 = dVar25;
  dStack_360 = dVar26;
  local_358 = local_aa8;
  dStack_350 = dStack_aa0;
  local_348 = local_a98;
  dStack_340 = dStack_a90;
  local_398 = dVar13;
  dStack_390 = dVar14;
  local_388 = dVar15;
  dStack_380 = dVar16;
  ::FName::FName(&local_c14,L"Parent2");
  FStack_c2c = local_c14.ComparisonIndex.Value;
  uStack_c28 = local_c14.Number;
  local_c30 = CONCAT31(local_c30._1_3_,1);
  pFVar39 = ::FName::FName(local_ab8,L"Child");
  local_b48.Name.ComparisonIndex.Value = FStack_c2c.Value;
  local_b48._0_4_ = local_c30;
  local_b48.Name.Number = uStack_c28;
  local_938.Translation.XY.m128d_f64[0] = 0.0;
  local_938.Translation.XY.m128d_f64[1] = 0.0;
  local_938.Translation.ZW.m128d_f64[0] = dVar25;
  local_938.Translation.ZW.m128d_f64[1] = dVar26;
  local_938.Scale3D.XY.m128d_f64[0] = dVar19;
  local_938.Scale3D.XY.m128d_f64[1] = dVar20;
  local_938.Scale3D.ZW.m128d_f64[0] = dVar21;
  local_938.Scale3D.ZW.m128d_f64[1] = dVar22;
  local_938.Rotation.XY.m128d_f64[0] = dVar13;
  local_938.Rotation.XY.m128d_f64[1] = dVar14;
  local_938.Rotation.ZW.m128d_f64[0] = dVar15;
  local_938.Rotation.ZW.m128d_f64[1] = dVar16;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar41,&local_c08,*pFVar39,&local_b48,&local_938,false,User
             ,false,false);
  (this->Unit).Child.Type = local_c08.Type;
  *(undefined3 *)&(this->Unit).Child.field_0x1 = local_c08._1_3_;
  (this->Unit).Child.Name.ComparisonIndex = (FNameEntryId)local_c08.Name.ComparisonIndex.Value;
  (this->Unit).Child.Name.Number = local_c08.Name.Number;
  pFVar3 = (FRigElementKey *)(pTVar2->AllocatorInstance).Data;
  local_c88.Name.Number = local_bf8.Name.Number;
  local_c88.Type = local_bf8.Type;
  local_c88._1_3_ = local_bf8._1_3_;
  local_c88.Name.ComparisonIndex.Value = local_bf8.Name.ComparisonIndex.Value;
  uStack_c7c = 0x3f800000;
  if ((pFVar3 <= &local_c88) &&
     (&local_c88 < (FRigElementKey *)((longlong)pFVar3 + (longlong)*piVar1 * 0x10))) {
    bVar34 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar34) {
      pcVar5 = (code *)swi(3);
      uVar35 = (*pcVar5)();
      return (bool)uVar35;
    }
  }
  iVar36 = (this->Unit).Parents.ArrayNum;
  if (iVar36 == *piVar1) {
    iVar36 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  uStack_cac = 0x3f800000;
  pFVar40 = (pTVar2->AllocatorInstance).Data + (longlong)iVar36 * 0x10;
  (this->Unit).Parents.ArrayNum = iVar36 + 1;
  *(undefined8 *)pFVar40 = local_c88._0_8_;
  *(ulonglong *)(pFVar40 + 8) = CONCAT44(uStack_c7c,local_c88.Name.Number);
  pFVar3 = (FRigElementKey *)(pTVar2->AllocatorInstance).Data;
  local_cb8.Name.Number = local_be8.Name.Number;
  local_cb8.Type = local_be8.Type;
  local_cb8._1_3_ = local_be8._1_3_;
  local_cb8.Name.ComparisonIndex.Value = local_be8.Name.ComparisonIndex.Value;
  if ((pFVar3 <= &local_cb8) &&
     (&local_cb8 < (FRigElementKey *)((longlong)pFVar3 + (longlong)*piVar1 * 0x10))) {
    bVar34 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar34) {
      pcVar5 = (code *)swi(3);
      uVar35 = (*pcVar5)();
      return (bool)uVar35;
    }
  }
  iVar36 = (this->Unit).Parents.ArrayNum;
  if (iVar36 == *piVar1) {
    iVar36 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Unit).Parents.ArrayNum = iVar36 + 1;
  pFVar40 = (pTVar2->AllocatorInstance).Data + (longlong)iVar36 * 0x10;
  *(undefined8 *)pFVar40 = local_cb8._0_8_;
  *(ulonglong *)(pFVar40 + 8) = CONCAT44(uStack_cac,local_cb8.Name.Number);
  pFVar4 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = false;
  FRigUnit_ScaleConstraintLocalSpaceOffset::Execute(&this->Unit,pFVar4);
  pUVar41 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_01);
  if (pUVar41 != (URigHierarchy *)0x0) {
    pUVar38 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar36 = (int)pUVar38->_padding_;
    if ((iVar36 <= *(int *)(pUVar41->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar41->_padding_ + 0x30) + (longlong)iVar36 * 8) ==
        &pUVar38->_padding_)) goto LAB_14a4cbeed;
  }
  pUVar41 = pUVar37;
LAB_14a4cbeed:
  URigHierarchy::GetLocalTransformByIndex(pUVar41,&local_1f8,3,false);
  local_9d8 = local_1f8.Scale3D.ZW.m128d_f64[0];
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_b38,L"unexpected scale for local space offset test 1");
  dVar14 = __real_3ff69fbe80000000;
  dVar13 = __real_3fb99999a0000000;
  if (((__real_3fb99999a0000000 <
        (double)CONCAT44((uint)((ulonglong)(local_1f8.Scale3D.XY.m128d_f64[0] - dVar44) >> 0x20) &
                         uVar18,SUB84(local_1f8.Scale3D.XY.m128d_f64[0] - dVar44,0) & uVar17)) ||
      (__real_3fb99999a0000000 <
       (double)CONCAT44((uint)((ulonglong)
                               (local_1f8.Scale3D.XY.m128d_f64[1] - ___real_3ff947ae20000000) >>
                              0x20) & uVar18,
                        SUB84(local_1f8.Scale3D.XY.m128d_f64[1] - ___real_3ff947ae20000000,0) &
                        uVar17))) ||
     (__real_3fb99999a0000000 <
      (double)CONCAT44((uint)((ulonglong)(local_9d8 - __real_3ff69fbe80000000) >> 0x20) & uVar18,
                       SUB84(local_9d8 - __real_3ff69fbe80000000,0) & uVar17))) {
    uVar43 = 0;
  }
  else {
    uVar43 = 1;
  }
  (*pcVar5)(this,uVar43,&local_b38);
  if (local_b38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b38.Data.AllocatorInstance.Data);
  }
  pFVar4 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = true;
  FRigUnit_ScaleConstraintLocalSpaceOffset::Execute(&this->Unit,pFVar4);
  pUVar37 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_01);
  URigHierarchy::GetLocalTransformByIndex(pUVar37,&local_198,3,false);
  local_9c0 = local_198.Scale3D.ZW.m128d_f64[0];
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_b28,L"unexpected scale for local space offset test 2");
  dVar44 = __real_3ff0000000000000;
  if (((dVar13 < (double)CONCAT44((uint)((ulonglong)
                                         (local_198.Scale3D.XY.m128d_f64[0] -
                                         __real_3ff0000000000000) >> 0x20) & uVar18,
                                  SUB84(local_198.Scale3D.XY.m128d_f64[0] - __real_3ff0000000000000,
                                        0) & uVar17)) ||
      (dVar13 < (double)CONCAT44((uint)((ulonglong)
                                        (local_198.Scale3D.XY.m128d_f64[1] - __real_3ff0000000000000
                                        ) >> 0x20) & uVar18,
                                 SUB84(local_198.Scale3D.XY.m128d_f64[1] - __real_3ff0000000000000,0
                                      ) & uVar17))) ||
     (dVar13 < (double)CONCAT44((uint)((ulonglong)(local_9c0 - __real_3ff0000000000000) >> 0x20) &
                                uVar18,SUB84(local_9c0 - __real_3ff0000000000000,0) & uVar17))) {
    uVar43 = 0;
  }
  else {
    uVar43 = 1;
  }
  (*pcVar5)(this,uVar43,&local_b28);
  if (local_b28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b28.Data.AllocatorInstance.Data);
  }
  pUVar37 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_01);
  local_a10._s_0.Z = 0.0;
  local_a10._s_0.X = 0.0;
  local_a10._s_0.Y = 0.0;
  pTVar42 = AnimationCore::QuatFromEuler(&local_2d8,(TVector<double> *)&local_a10._s_0,XZY,false);
  local_8d8.Translation.XY.m128d_f64[0] = 0.0;
  local_8d8.Translation.XY.m128d_f64[1] = 0.0;
  local_8d8.Translation.ZW.m128d_f64[0] = dVar25;
  local_8d8.Translation.ZW.m128d_f64[1] = dVar26;
  local_8d8.Rotation.XY.m128d_f64[0] = pTVar42->X;
  local_8d8.Rotation.XY.m128d_f64[1] = pTVar42->Y;
  local_8d8.Rotation.ZW.m128d_f64[0] = pTVar42->Z;
  local_8d8.Rotation.ZW.m128d_f64[1] = pTVar42->W;
  local_8d8.Scale3D.XY.m128d_f64[0] = ___xmm_40240000000000004010000000000000;
  local_8d8.Scale3D.XY.m128d_f64[1] = _UNK_15219d4c8;
  local_8d8.Scale3D.ZW.m128d_f64[0] = dVar27;
  local_8d8.Scale3D.ZW.m128d_f64[1] = dVar28;
  URigHierarchy::SetLocalTransform(pUVar37,1,&local_8d8,true,false,false);
  pFVar4 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = true;
  FRigUnit_ScaleConstraintLocalSpaceOffset::Execute(&this->Unit,pFVar4);
  pUVar37 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_01);
  URigHierarchy::GetLocalTransformByIndex(pUVar37,&local_138,3,false);
  local_9a8 = local_138.Scale3D.ZW.m128d_f64[0];
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_b18,L"unexpected scale for local space offset test 3");
  local_138.Scale3D.XY.m128d_f64[0] = local_138.Scale3D.XY.m128d_f64[0] - dVar44;
  if (((dVar13 < (double)CONCAT44((uint)((ulonglong)local_138.Scale3D.XY.m128d_f64[0] >> 0x20) &
                                  uVar18,SUB84(local_138.Scale3D.XY.m128d_f64[0],0) & uVar17)) ||
      (dVar13 < (double)CONCAT44((uint)((ulonglong)(local_138.Scale3D.XY.m128d_f64[1] - dVar14) >>
                                       0x20) & uVar18,
                                 SUB84(local_138.Scale3D.XY.m128d_f64[1] - dVar14,0) & uVar17))) ||
     (dVar44 = local_9a8 - dVar44,
     dVar13 < (double)CONCAT44((uint)((ulonglong)dVar44 >> 0x20) & uVar18,SUB84(dVar44,0) & uVar17))
     ) {
    uVar43 = 0;
  }
  else {
    uVar43 = 1;
  }
  (*pcVar5)(this,uVar43,&local_b18,0);
  if (local_b18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b18.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4cc250

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_ScaleConstraintLocalSpaceOffsetTest::GetBeautifiedTestName
          (FRigUnit_ScaleConstraintLocalSpaceOffsetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"ControlRig.Units.FRigUnit_ScaleConstraintLocalSpaceOffset");
  return __return_storage_ptr__;
}

