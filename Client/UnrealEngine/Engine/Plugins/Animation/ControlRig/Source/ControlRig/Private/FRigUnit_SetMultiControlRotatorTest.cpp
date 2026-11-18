// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a4d57e0

EAutomationTestFlags __thiscall
FRigUnit_SetMultiControlRotatorTest::GetTestFlags(FRigUnit_SetMultiControlRotatorTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4d57f0

bool __thiscall
FRigUnit_SetMultiControlRotatorTest::IsStressTest(FRigUnit_SetMultiControlRotatorTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4d5800

uint __thiscall
FRigUnit_SetMultiControlRotatorTest::GetRequiredDeviceNum(FRigUnit_SetMultiControlRotatorTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4d5810

FString * __thiscall
FRigUnit_SetMultiControlRotatorTest::GetTestSourceFileName
          (FRigUnit_SetMultiControlRotatorTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Hierarchy\\RigUnit_SetControlTransform.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4d5840

int __thiscall
FRigUnit_SetMultiControlRotatorTest::GetTestSourceFileLine
          (FRigUnit_SetMultiControlRotatorTest *this)

{
  return 0x1f9;
}

// GetTests @ 14a4d58d0

/* WARNING: Removing unreachable block (ram,0x00014a4d59bd) */
/* WARNING: Removing unreachable block (ram,0x00014a4d5a88) */

void __thiscall
FRigUnit_SetMultiControlRotatorTest::GetTests
          (FRigUnit_SetMultiControlRotatorTest *this,
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
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_SetMultiControlRotator");
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

// RunTest @ 14a4d5ac0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_SetMultiControlRotatorTest::RunTest
          (FRigUnit_SetMultiControlRotatorTest *this,FString *param_1)

{
  TArray<FRigUnit_SetMultiControlRotator_Entry,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRigUnit_SetMultiControlRotator_Entry,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 uVar7;
  URigHierarchy *this_00;
  UClass *pUVar8;
  FRigUnit_SetMultiControlRotator *pFVar9;
  FRigUnit_SetMultiControlRotator local_58;
  
  (**(code **)(*(longlong *)this + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar8 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar5 = (int)pUVar8->_padding_;
    if ((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar8->_padding_)) goto LAB_14a4d5b24;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4d5b24:
  URigHierarchy::Reset(this_00);
  pFVar9 = FRigUnit_SetMultiControlRotator::FRigUnit_SetMultiControlRotator(&local_58);
  pTVar3 = &(this->Unit).Entries;
  pTVar1 = &pFVar9->Entries;
  if (pTVar3 != pTVar1) {
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Unit).Entries.ArrayNum = (pFVar9->Entries).ArrayNum;
    (this->Unit).Entries.ArrayMax = (pFVar9->Entries).ArrayMax;
    (pFVar9->Entries).ArrayNum = 0;
    (pFVar9->Entries).ArrayMax = 0;
  }
  pTVar2 = &pFVar9->CachedControlIndices;
  pTVar4 = &(this->Unit).CachedControlIndices;
  (this->Unit).Weight = pFVar9->Weight;
  if (pTVar4 != pTVar2) {
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Unit).CachedControlIndices.ArrayNum = (pFVar9->CachedControlIndices).ArrayNum;
    (this->Unit).CachedControlIndices.ArrayMax = (pFVar9->CachedControlIndices).ArrayMax;
    (pFVar9->CachedControlIndices).ArrayNum = 0;
    (pFVar9->CachedControlIndices).ArrayMax = 0;
  }
  if (local_58.CachedControlIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.CachedControlIndices.AllocatorInstance.Data);
  }
  if (local_58.Entries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Entries.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x00014a4d5bee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar7;
}

// RunControlRigUnitTest @ 14a4d5c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_SetMultiControlRotatorTest::RunControlRigUnitTest
          (FRigUnit_SetMultiControlRotatorTest *this,FString *param_1)

{
  int *piVar1;
  TArray<FRigUnit_SetMultiControlRotator_Entry,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  __m128d _Var5;
  __m128d _Var6;
  __m128d _Var7;
  __m128d _Var8;
  __m128d _Var9;
  __m128d _Var10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  URigHierarchy *pUVar14;
  UClass *pUVar15;
  FRigControlSettings *pFVar16;
  FName *pFVar17;
  longlong lVar18;
  TRotator<double> *pTVar19;
  undefined8 uVar20;
  URigHierarchy *pUVar21;
  undefined1 auStackY_db8 [32];
  FName local_d68;
  FName FStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined1 local_d48;
  undefined7 uStack_d47;
  uint local_d40;
  FNameEntryId FStack_d3c;
  undefined4 uStack_d38;
  uint local_d34;
  FNameEntryId FStack_d30;
  undefined4 uStack_d2c;
  undefined4 local_d28;
  FNameEntryId FStack_d24;
  uint uStack_d20;
  undefined4 local_d1c;
  FNameEntryId FStack_d18;
  uint uStack_d14;
  FName local_d10;
  FName local_d08;
  FName local_d00;
  FName local_cf8 [2];
  FRigElementKey local_ce8;
  FRigElementKey local_cd8;
  FRigElementKey local_cc8;
  FRigElementKey local_cb8;
  FString local_ca8;
  FString local_c98;
  FString local_c88;
  TVector<double>_u_0 local_c78;
  TVector<double>_u_0 local_c60;
  FName local_c48;
  FName local_c40;
  FRigElementKey local_c38;
  FName local_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  FName local_c10;
  undefined8 uStack_c08;
  undefined8 local_c00;
  FRigElementKey local_bf8;
  FRigControlValueStorage local_be8;
  FRigControlValueStorage local_b58;
  TTransform<double> local_ac8;
  TTransform<double> local_a68;
  TTransform<double> local_a08;
  TTransform<double> local_9a8;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined4 local_8c8;
  undefined8 local_8c4;
  undefined8 uStack_8bc;
  undefined8 local_8b4;
  undefined8 uStack_8ac;
  undefined8 local_8a4;
  undefined8 uStack_89c;
  undefined8 local_894;
  undefined8 uStack_88c;
  undefined8 local_884;
  undefined8 uStack_87c;
  undefined8 local_874;
  undefined8 uStack_86c;
  undefined8 local_864;
  undefined8 uStack_85c;
  undefined8 local_854;
  undefined8 uStack_84c;
  undefined4 local_844;
  TRotator<double> local_840;
  TRotator<double> local_828;
  FRigControlValue local_810;
  FRigControlValue local_78c;
  FRigControlSettings local_708;
  FRigControlSettings local_4e8;
  FRigControlSettings local_2c8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_db8;
  FRigControlSettings::FRigControlSettings(&local_2c8);
  local_2c8.ControlType = Rotator;
  pUVar14 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  pUVar21 = (URigHierarchy *)0x0;
  if (pUVar14 == (URigHierarchy *)0x0) {
LAB_14a4d5ca9:
    pUVar14 = pUVar21;
  }
  else {
    pUVar15 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar15->_padding_)) goto LAB_14a4d5ca9;
  }
  _Var10.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  _Var9.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var8.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  _Var7.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  _Var6.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  _Var5.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_948 = 0;
  uStack_940 = 0;
  local_8c8 = 0;
  local_938 = 0;
  uStack_930 = 0;
  local_928 = 0;
  uStack_920 = 0;
  local_918 = 0;
  uStack_910 = 0;
  local_908 = 0;
  uStack_900 = 0;
  local_8f8 = 0;
  uStack_8f0 = 0;
  local_8e8 = 0;
  uStack_8e0 = 0;
  local_8d8 = 0;
  uStack_8d0 = 0;
  pFVar16 = FRigControlSettings::FRigControlSettings(&local_708,&local_2c8);
  local_d40 = local_d40 & 0xffffff00;
  FStack_d3c.Value = 0;
  uStack_d38 = 0;
  pFVar17 = ::FName::FName(&local_c48,L"Control1");
  local_ce8.Name.ComparisonIndex.Value = FStack_d3c.Value;
  local_ce8._0_4_ = local_d40;
  local_ac8.Rotation.XY.m128d_f64 = _Var5.m128d_f64;
  local_ac8.Rotation.ZW.m128d_f64 = _Var6.m128d_f64;
  local_ac8.Translation.XY.m128d_f64 = _Var7.m128d_f64;
  local_ac8.Translation.ZW.m128d_f64 = _Var8.m128d_f64;
  local_ac8.Scale3D.XY.m128d_f64 = _Var9.m128d_f64;
  local_ac8.Scale3D.ZW.m128d_f64 = _Var10.m128d_f64;
  local_a68.Rotation.XY.m128d_f64 = _Var5.m128d_f64;
  local_a68.Rotation.ZW.m128d_f64 = _Var6.m128d_f64;
  local_a68.Translation.XY.m128d_f64 = _Var7.m128d_f64;
  local_a68.Translation.ZW.m128d_f64 = _Var8.m128d_f64;
  local_a68.Scale3D.XY.m128d_f64 = _Var9.m128d_f64;
  local_a68.Scale3D.ZW.m128d_f64 = _Var10.m128d_f64;
  local_be8.Float00 = 0.0;
  local_be8.Float01 = 0.0;
  local_be8.Float02 = 0.0;
  local_be8.Float03 = 0.0;
  local_be8.Float10 = 0.0;
  local_be8.Float11 = 0.0;
  local_be8.Float12 = 0.0;
  local_be8.Float13 = 0.0;
  local_be8.Float20 = 0.0;
  local_be8.Float21 = 0.0;
  local_be8.Float22 = 0.0;
  local_be8.Float23 = 0.0;
  local_be8.Float30 = 0.0;
  local_be8.Float31 = 0.0;
  local_be8.Float32 = 0.0;
  local_be8.Float33 = 0.0;
  local_be8.Float00_2 = 0.0;
  local_be8.Float01_2 = 0.0;
  local_be8.Float02_2 = 0.0;
  local_be8.Float03_2 = 0.0;
  local_be8.Float10_2 = 0.0;
  local_be8.Float11_2 = 0.0;
  local_be8.Float12_2 = 0.0;
  local_be8.Float13_2 = 0.0;
  local_be8.Float20_2 = 0.0;
  local_be8.Float21_2 = 0.0;
  local_be8.Float22_2 = 0.0;
  local_be8.Float23_2 = 0.0;
  local_be8.Float30_2 = 0.0;
  local_be8.Float31_2 = 0.0;
  local_be8.Float32_2 = 0.0;
  local_be8.Float33_2 = 0.0;
  local_be8.bValid = false;
  local_be8._129_3_ = 0;
  local_ce8.Name.Number = 0;
  URigHierarchyController::AddControl
            ((URigHierarchyController *)pUVar14,&local_c38,*pFVar17,&local_ce8,pFVar16,
             (FRigControlValue *)&local_be8,&local_a68,&local_ac8,true,false);
  pUVar14 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  if (pUVar14 == (URigHierarchy *)0x0) {
LAB_14a4d5e8a:
    pUVar14 = pUVar21;
  }
  else {
    pUVar15 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar15->_padding_)) goto LAB_14a4d5e8a;
  }
  _Var10.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  _Var9.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var8.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  _Var7.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  _Var6.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  _Var5.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_844 = 0;
  local_8c4 = 0;
  uStack_8bc = 0;
  local_8b4 = 0;
  uStack_8ac = 0;
  local_8a4 = 0;
  uStack_89c = 0;
  local_894 = 0;
  uStack_88c = 0;
  local_884 = 0;
  uStack_87c = 0;
  local_874 = 0;
  uStack_86c = 0;
  local_864 = 0;
  uStack_85c = 0;
  local_854 = 0;
  uStack_84c = 0;
  pFVar16 = FRigControlSettings::FRigControlSettings(&local_4e8,&local_2c8);
  local_d34 = local_d34 & 0xffffff00;
  FStack_d30.Value = 0;
  uStack_d2c = 0;
  pFVar17 = ::FName::FName(&local_c40,L"Control2");
  local_cd8.Name.ComparisonIndex.Value = FStack_d30.Value;
  local_cd8._0_4_ = local_d34;
  local_a08.Rotation.XY.m128d_f64 = _Var5.m128d_f64;
  local_a08.Rotation.ZW.m128d_f64 = _Var6.m128d_f64;
  local_a08.Translation.XY.m128d_f64 = _Var7.m128d_f64;
  local_a08.Translation.ZW.m128d_f64 = _Var8.m128d_f64;
  local_a08.Scale3D.XY.m128d_f64 = _Var9.m128d_f64;
  local_a08.Scale3D.ZW.m128d_f64 = _Var10.m128d_f64;
  local_9a8.Rotation.XY.m128d_f64 = _Var5.m128d_f64;
  local_9a8.Rotation.ZW.m128d_f64 = _Var6.m128d_f64;
  local_9a8.Translation.XY.m128d_f64 = _Var7.m128d_f64;
  local_9a8.Translation.ZW.m128d_f64 = _Var8.m128d_f64;
  local_9a8.Scale3D.XY.m128d_f64 = _Var9.m128d_f64;
  local_9a8.Scale3D.ZW.m128d_f64 = _Var10.m128d_f64;
  local_b58.Float00 = 0.0;
  local_b58.Float01 = 0.0;
  local_b58.Float02 = 0.0;
  local_b58.Float03 = 0.0;
  local_b58.Float10 = 0.0;
  local_b58.Float11 = 0.0;
  local_b58.Float12 = 0.0;
  local_b58.Float13 = 0.0;
  local_b58.Float20 = 0.0;
  local_b58.Float21 = 0.0;
  local_b58.Float22 = 0.0;
  local_b58.Float23 = 0.0;
  local_b58.Float30 = 0.0;
  local_b58.Float31 = 0.0;
  local_b58.Float32 = 0.0;
  local_b58.Float33 = 0.0;
  local_b58.Float00_2 = 0.0;
  local_b58.Float01_2 = 0.0;
  local_b58.Float02_2 = 0.0;
  local_b58.Float03_2 = 0.0;
  local_b58.Float10_2 = 0.0;
  local_b58.Float11_2 = 0.0;
  local_b58.Float12_2 = 0.0;
  local_b58.Float13_2 = 0.0;
  local_b58.Float20_2 = 0.0;
  local_b58.Float21_2 = 0.0;
  local_b58.Float22_2 = 0.0;
  local_b58.Float23_2 = 0.0;
  local_b58.Float30_2 = 0.0;
  local_b58.Float31_2 = 0.0;
  local_b58.Float32_2 = 0.0;
  local_b58.Float33_2 = 0.0;
  local_b58.bValid = false;
  local_b58._129_3_ = 0;
  local_cd8.Name.Number = 0;
  URigHierarchyController::AddControl
            ((URigHierarchyController *)pUVar14,&local_bf8,*pFVar17,&local_cd8,pFVar16,
             (FRigControlValue *)&local_b58,&local_9a8,&local_a08,true,false);
  pTVar2 = &(this->Unit).Entries;
  iVar13 = (this->Unit).Entries.ArrayMax;
  piVar1 = &(this->Unit).Entries.ArrayMax;
  (this->Unit).Entries.ArrayNum = 0;
  if (iVar13 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  ::FName::FName(&local_d10,L"Control1");
  pFVar17 = (FName *)(pTVar2->AllocatorInstance).Data;
  local_d68 = local_d10;
  local_c18 = 0;
  uStack_d50 = 0;
  local_d48 = 0;
  local_c28 = ___xmm_00000000000000004056800000000000;
  uStack_c20 = _UNK_150b45b78;
  FStack_d60 = ___xmm_00000000000000004056800000000000;
  uStack_d58 = _UNK_150b45b78;
  if ((pFVar17 <= &local_d68) && (&local_d68 < pFVar17 + (longlong)*piVar1 * 5)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return (bool)uVar12;
    }
  }
  iVar13 = (this->Unit).Entries.ArrayNum;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  lVar18 = (longlong)iVar13;
  (this->Unit).Entries.ArrayNum = iVar13 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(FName *)(pFVar3 + lVar18 * 0x28) = local_d68;
  ((FName *)(pFVar3 + lVar18 * 0x28))[1] = FStack_d60;
  *(undefined8 *)(pFVar3 + lVar18 * 0x28 + 0x10) = uStack_d58;
  *(undefined8 *)(pFVar3 + lVar18 * 0x28 + 0x10 + 8) = uStack_d50;
  *(ulonglong *)(pFVar3 + lVar18 * 0x28 + 0x20) = CONCAT71(uStack_d47,local_d48);
  ::FName::FName(&local_d08,L"Control2");
  pFVar17 = (FName *)(pTVar2->AllocatorInstance).Data;
  local_d68 = local_d08;
  local_c00 = 0;
  uStack_d50 = 0;
  local_d48 = 0;
  local_c10 = ___xmm_40568000000000000000000000000000;
  uStack_c08 = _UNK_1513b2f18;
  FStack_d60 = ___xmm_40568000000000000000000000000000;
  uStack_d58 = _UNK_1513b2f18;
  if ((pFVar17 <= &local_d68) && (&local_d68 < pFVar17 + (longlong)*piVar1 * 5)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return (bool)uVar12;
    }
  }
  iVar13 = (this->Unit).Entries.ArrayNum;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  lVar18 = (longlong)iVar13;
  (this->Unit).Entries.ArrayNum = iVar13 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(FName *)(pFVar3 + lVar18 * 0x28) = local_d68;
  ((FName *)(pFVar3 + lVar18 * 0x28))[1] = FStack_d60;
  *(undefined8 *)(pFVar3 + lVar18 * 0x28 + 0x10) = uStack_d58;
  *(undefined8 *)(pFVar3 + lVar18 * 0x28 + 0x10 + 8) = uStack_d50;
  *(ulonglong *)(pFVar3 + lVar18 * 0x28 + 0x20) = CONCAT71(uStack_d47,local_d48);
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_ca8,L"unexpected number of entries");
  (*pcVar4)(this,(this->Unit).Entries.ArrayNum == 2,&local_ca8,0);
  if (local_ca8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ca8.Data.AllocatorInstance.Data);
  }
  FRigUnit_SetMultiControlRotator::Execute
            (&this->Unit,*(FControlRigExecuteContext **)&this->field_0x370);
  pUVar14 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar14 == (URigHierarchy *)0x0) {
LAB_14a4d62d0:
    pUVar14 = pUVar21;
  }
  else {
    pUVar15 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar15->_padding_)) goto LAB_14a4d62d0;
  }
  ::FName::FName(&local_d00,L"Control1");
  FStack_d24 = local_d00.ComparisonIndex.Value;
  uStack_d20 = local_d00.Number;
  local_d28 = CONCAT31(local_d28._1_3_,4);
  local_cc8.Name.ComparisonIndex.Value = FStack_d24.Value;
  local_cc8._0_4_ = local_d28;
  local_cc8.Name.Number = uStack_d20;
  iVar13 = URigHierarchy::GetIndex(pUVar14,&local_cc8,true);
  URigHierarchy::GetControlValueByIndex(pUVar14,&local_810,iVar13,Current);
  local_c60._s_0.X = (double)local_810.FloatStorage.Float00;
  local_c60._s_0.Y = (double)local_810.FloatStorage.Float01;
  local_c60._s_0.Z = (double)local_810.FloatStorage.Float02;
  pUVar14 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar14 != (URigHierarchy *)0x0) {
    pUVar15 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((iVar13 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
        &pUVar15->_padding_)) goto LAB_14a4d638d;
  }
  pUVar14 = pUVar21;
LAB_14a4d638d:
  ::FName::FName(local_cf8,L"Control2");
  FStack_d18 = local_cf8[0].ComparisonIndex.Value;
  uStack_d14 = local_cf8[0].Number;
  local_d1c = CONCAT31(local_d1c._1_3_,4);
  local_cb8.Name.ComparisonIndex.Value = FStack_d18.Value;
  local_cb8._0_4_ = local_d1c;
  local_cb8.Name.Number = uStack_d14;
  iVar13 = URigHierarchy::GetIndex(pUVar14,&local_cb8,true);
  URigHierarchy::GetControlValueByIndex(pUVar14,&local_78c,iVar13,Current);
  local_c78._s_0.X = (double)local_78c.FloatStorage.Float00;
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  local_c78._s_0.Y = (double)local_78c.FloatStorage.Float01;
  local_c78._s_0.Z = (double)local_78c.FloatStorage.Float02;
  ::FString::FString(&local_c98,L"unexpected control value");
  pTVar19 = UE::Math::TRotator<double>::MakeFromEuler(&local_840,(TVector<double> *)&local_c60._s_0)
  ;
  if (((pTVar19->Pitch == 0.0) && (pTVar19->Yaw == 0.0)) && (pTVar19->Roll == 0.0)) {
    uVar20 = 0;
  }
  else {
    uVar20 = 1;
  }
  (*pcVar4)(this,uVar20,&local_c98,0);
  if (local_c98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c98.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_c88,L"unexpected control value");
  pTVar19 = UE::Math::TRotator<double>::MakeFromEuler(&local_828,(TVector<double> *)&local_c78._s_0)
  ;
  if (((pTVar19->Pitch == 0.0) && (pTVar19->Yaw == 0.0)) && (pTVar19->Roll == 0.0)) {
    uVar20 = 0;
  }
  else {
    uVar20 = 1;
  }
  (*pcVar4)(this,uVar20,&local_c88,0);
  if (local_c88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c88.Data.AllocatorInstance.Data);
  }
  if (local_2c8.FilteredChannels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.FilteredChannels.AllocatorInstance.Data);
  }
  if (local_2c8.PreviouslyDrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.PreviouslyDrivenControls.AllocatorInstance.Data);
  }
  if (local_2c8.DrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.DrivenControls.AllocatorInstance.Data);
  }
  if (local_2c8.Customization.RemovedSpaces.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_2c8.Customization.RemovedSpaces.AllocatorInstance.Data);
  }
  if (local_2c8.Customization.AvailableSpaces.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Customization.AvailableSpaces.AllocatorInstance.Data);
  }
  if (local_2c8.LimitEnabled.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.LimitEnabled.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4d6580

FString * __thiscall
FRigUnit_SetMultiControlRotatorTest::GetBeautifiedTestName
          (FRigUnit_SetMultiControlRotatorTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_SetMultiControlRotator");
  return __return_storage_ptr__;
}

