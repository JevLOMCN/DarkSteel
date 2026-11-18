// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a4d3750

EAutomationTestFlags __thiscall
FRigUnit_SetMultiControlVector2DTest::GetTestFlags(FRigUnit_SetMultiControlVector2DTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4d3790

bool __thiscall
FRigUnit_SetMultiControlVector2DTest::IsStressTest(FRigUnit_SetMultiControlVector2DTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4d37e0

uint __thiscall
FRigUnit_SetMultiControlVector2DTest::GetRequiredDeviceNum
          (FRigUnit_SetMultiControlVector2DTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4d3820

FString * __thiscall
FRigUnit_SetMultiControlVector2DTest::GetTestSourceFileName
          (FRigUnit_SetMultiControlVector2DTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Hierarchy\\RigUnit_SetControlTransform.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4d3850

int __thiscall
FRigUnit_SetMultiControlVector2DTest::GetTestSourceFileLine
          (FRigUnit_SetMultiControlVector2DTest *this)

{
  return 0x1d8;
}

// GetTests @ 14a4d38a0

/* WARNING: Removing unreachable block (ram,0x00014a4d398d) */
/* WARNING: Removing unreachable block (ram,0x00014a4d3a58) */

void __thiscall
FRigUnit_SetMultiControlVector2DTest::GetTests
          (FRigUnit_SetMultiControlVector2DTest *this,
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
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_SetMultiControlVector2D");
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

// RunTest @ 14a4d3a80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_SetMultiControlVector2DTest::RunTest
          (FRigUnit_SetMultiControlVector2DTest *this,FString *param_1)

{
  int iVar1;
  TArray<FRigUnit_SetMultiControlVector2D_Entry,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  TVector2<double> TVar5;
  undefined1 uVar6;
  int iVar7;
  URigHierarchy *this_00;
  UClass *pUVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ForAnyElementType local_30;
  undefined8 local_28;
  float local_20;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  (**(code **)(*(longlong *)this + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar8 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar8->_padding_)) goto LAB_14a4d3ae7;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4d3ae7:
  URigHierarchy::Reset(this_00);
  TVar5 = UE::Math::TVector2<double>::ZeroVector;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  local_20 = 1.0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  iVar7 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x818,&local_30,(int *)((longlong)&local_28 + 4));
  uStack_50 = TVar5.field0_0x0._0_8_;
  pTVar2 = &(this->Unit).Entries;
  uStack_48 = TVar5.field0_0x0._8_8_;
  iVar1 = iVar7 + 1;
  *(undefined8 *)(local_30.Data + (longlong)iVar7 * 0x18) = 0;
  *(undefined8 *)(local_30.Data + (longlong)iVar7 * 0x18 + 8) = uStack_50;
  *(undefined8 *)(local_30.Data + (longlong)iVar7 * 0x18 + 0x10) = uStack_48;
  local_28._0_4_ = iVar1;
  if (pTVar2 != (TArray<FRigUnit_SetMultiControlVector2D_Entry,TSizedDefaultAllocator<32>_> *)
                &local_30) {
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = local_30.Data;
    (this->Unit).Entries.ArrayNum = (int)local_28;
    (this->Unit).Entries.ArrayMax = local_28._4_4_;
    local_28._0_4_ = 0;
    local_28._4_4_ = 0;
    local_30.Data = (FScriptContainerElement *)0x0;
  }
  pTVar3 = &(this->Unit).CachedControlIndices;
  (this->Unit).Weight = local_20;
  if (pTVar3 != (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *)&local_18) {
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar3->AllocatorInstance).Data = local_18.Data;
    (this->Unit).CachedControlIndices.ArrayNum = (int)local_10;
    (this->Unit).CachedControlIndices.ArrayMax = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x00014a4d3c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar6;
}

// RunControlRigUnitTest @ 14a4d3c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_SetMultiControlVector2DTest::RunControlRigUnitTest
          (FRigUnit_SetMultiControlVector2DTest *this,FString *param_1)

{
  int *piVar1;
  TArray<FRigUnit_SetMultiControlVector2D_Entry,TSizedDefaultAllocator<32>_> *pTVar2;
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
  undefined8 uVar18;
  URigHierarchy *pUVar19;
  undefined1 auStackY_d38 [32];
  FName local_ce8;
  FName FStack_ce0;
  undefined8 uStack_cd8;
  uint local_cd0;
  FNameEntryId FStack_ccc;
  undefined4 uStack_cc8;
  uint local_cc4;
  FNameEntryId FStack_cc0;
  undefined4 uStack_cbc;
  undefined4 local_cb8;
  FNameEntryId FStack_cb4;
  uint uStack_cb0;
  undefined4 local_cac;
  FNameEntryId FStack_ca8;
  uint uStack_ca4;
  FName local_ca0;
  FName local_c98;
  FName local_c90;
  FName local_c88 [2];
  FRigElementKey local_c78;
  FRigElementKey local_c68;
  FRigElementKey local_c58;
  FRigElementKey local_c48;
  FString local_c38;
  FString local_c28;
  FString local_c18;
  FName local_c08;
  FName local_c00;
  FRigElementKey local_bf8;
  FRigElementKey local_bec;
  FRigControlValueStorage local_bd8;
  FRigControlValueStorage local_b48;
  TTransform<double> local_ab8;
  TTransform<double> local_a58;
  TTransform<double> local_9f8;
  TTransform<double> local_998;
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
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined4 local_8b8;
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
  undefined8 local_844;
  undefined8 uStack_83c;
  undefined4 local_834;
  FName local_830;
  undefined8 uStack_828;
  FName local_820;
  undefined8 uStack_818;
  FRigControlValue local_810;
  FRigControlValue local_78c;
  FRigControlSettings local_708;
  FRigControlSettings local_4e8;
  FRigControlSettings local_2c8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_d38;
  FRigControlSettings::FRigControlSettings(&local_2c8);
  local_2c8.ControlType = Vector2D;
  pUVar14 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  pUVar19 = (URigHierarchy *)0x0;
  if (pUVar14 == (URigHierarchy *)0x0) {
LAB_14a4d3cd9:
    pUVar14 = pUVar19;
  }
  else {
    pUVar15 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar15->_padding_)) goto LAB_14a4d3cd9;
  }
  _Var10.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  _Var9.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var8.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  _Var7.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  _Var6.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  _Var5.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_938 = 0;
  uStack_930 = 0;
  local_8b8 = 0;
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
  local_8c8 = 0;
  uStack_8c0 = 0;
  pFVar16 = FRigControlSettings::FRigControlSettings(&local_708,&local_2c8);
  local_cd0 = local_cd0 & 0xffffff00;
  FStack_ccc.Value = 0;
  uStack_cc8 = 0;
  pFVar17 = ::FName::FName(&local_c08,L"Control1");
  local_c68.Name.ComparisonIndex.Value = FStack_ccc.Value;
  local_c68._0_4_ = local_cd0;
  local_ab8.Rotation.XY.m128d_f64 = _Var5.m128d_f64;
  local_ab8.Rotation.ZW.m128d_f64 = _Var6.m128d_f64;
  local_ab8.Translation.XY.m128d_f64 = _Var7.m128d_f64;
  local_ab8.Translation.ZW.m128d_f64 = _Var8.m128d_f64;
  local_ab8.Scale3D.XY.m128d_f64 = _Var9.m128d_f64;
  local_ab8.Scale3D.ZW.m128d_f64 = _Var10.m128d_f64;
  local_a58.Rotation.XY.m128d_f64 = _Var5.m128d_f64;
  local_a58.Rotation.ZW.m128d_f64 = _Var6.m128d_f64;
  local_a58.Translation.XY.m128d_f64 = _Var7.m128d_f64;
  local_a58.Translation.ZW.m128d_f64 = _Var8.m128d_f64;
  local_a58.Scale3D.XY.m128d_f64 = _Var9.m128d_f64;
  local_a58.Scale3D.ZW.m128d_f64 = _Var10.m128d_f64;
  local_bd8.Float00 = 0.0;
  local_bd8.Float01 = 0.0;
  local_bd8.Float02 = 0.0;
  local_bd8.Float03 = 0.0;
  local_bd8.Float10 = 0.0;
  local_bd8.Float11 = 0.0;
  local_bd8.Float12 = 0.0;
  local_bd8.Float13 = 0.0;
  local_bd8.Float20 = 0.0;
  local_bd8.Float21 = 0.0;
  local_bd8.Float22 = 0.0;
  local_bd8.Float23 = 0.0;
  local_bd8.Float30 = 0.0;
  local_bd8.Float31 = 0.0;
  local_bd8.Float32 = 0.0;
  local_bd8.Float33 = 0.0;
  local_bd8.Float00_2 = 0.0;
  local_bd8.Float01_2 = 0.0;
  local_bd8.Float02_2 = 0.0;
  local_bd8.Float03_2 = 0.0;
  local_bd8.Float10_2 = 0.0;
  local_bd8.Float11_2 = 0.0;
  local_bd8.Float12_2 = 0.0;
  local_bd8.Float13_2 = 0.0;
  local_bd8.Float20_2 = 0.0;
  local_bd8.Float21_2 = 0.0;
  local_bd8.Float22_2 = 0.0;
  local_bd8.Float23_2 = 0.0;
  local_bd8.Float30_2 = 0.0;
  local_bd8.Float31_2 = 0.0;
  local_bd8.Float32_2 = 0.0;
  local_bd8.Float33_2 = 0.0;
  local_bd8.bValid = false;
  local_bd8._129_3_ = 0;
  local_c68.Name.Number = 0;
  URigHierarchyController::AddControl
            ((URigHierarchyController *)pUVar14,&local_bf8,*pFVar17,&local_c68,pFVar16,
             (FRigControlValue *)&local_bd8,&local_a58,&local_ab8,true,false);
  pUVar14 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  if (pUVar14 == (URigHierarchy *)0x0) {
LAB_14a4d3eae:
    pUVar14 = pUVar19;
  }
  else {
    pUVar15 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar15->_padding_)) goto LAB_14a4d3eae;
  }
  _Var10.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  _Var9.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var8.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  _Var7.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  _Var6.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  _Var5.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_834 = 0;
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
  local_844 = 0;
  uStack_83c = 0;
  pFVar16 = FRigControlSettings::FRigControlSettings(&local_4e8,&local_2c8);
  local_cc4 = local_cc4 & 0xffffff00;
  FStack_cc0.Value = 0;
  uStack_cbc = 0;
  pFVar17 = ::FName::FName(&local_c00,L"Control2");
  local_c58.Name.ComparisonIndex.Value = FStack_cc0.Value;
  local_c58._0_4_ = local_cc4;
  local_9f8.Rotation.XY.m128d_f64 = _Var5.m128d_f64;
  local_9f8.Rotation.ZW.m128d_f64 = _Var6.m128d_f64;
  local_9f8.Translation.XY.m128d_f64 = _Var7.m128d_f64;
  local_9f8.Translation.ZW.m128d_f64 = _Var8.m128d_f64;
  local_9f8.Scale3D.XY.m128d_f64 = _Var9.m128d_f64;
  local_9f8.Scale3D.ZW.m128d_f64 = _Var10.m128d_f64;
  local_998.Rotation.XY.m128d_f64 = _Var5.m128d_f64;
  local_998.Rotation.ZW.m128d_f64 = _Var6.m128d_f64;
  local_998.Translation.XY.m128d_f64 = _Var7.m128d_f64;
  local_998.Translation.ZW.m128d_f64 = _Var8.m128d_f64;
  local_998.Scale3D.XY.m128d_f64 = _Var9.m128d_f64;
  local_998.Scale3D.ZW.m128d_f64 = _Var10.m128d_f64;
  local_b48.Float00 = 0.0;
  local_b48.Float01 = 0.0;
  local_b48.Float02 = 0.0;
  local_b48.Float03 = 0.0;
  local_b48.Float10 = 0.0;
  local_b48.Float11 = 0.0;
  local_b48.Float12 = 0.0;
  local_b48.Float13 = 0.0;
  local_b48.Float20 = 0.0;
  local_b48.Float21 = 0.0;
  local_b48.Float22 = 0.0;
  local_b48.Float23 = 0.0;
  local_b48.Float30 = 0.0;
  local_b48.Float31 = 0.0;
  local_b48.Float32 = 0.0;
  local_b48.Float33 = 0.0;
  local_b48.Float00_2 = 0.0;
  local_b48.Float01_2 = 0.0;
  local_b48.Float02_2 = 0.0;
  local_b48.Float03_2 = 0.0;
  local_b48.Float10_2 = 0.0;
  local_b48.Float11_2 = 0.0;
  local_b48.Float12_2 = 0.0;
  local_b48.Float13_2 = 0.0;
  local_b48.Float20_2 = 0.0;
  local_b48.Float21_2 = 0.0;
  local_b48.Float22_2 = 0.0;
  local_b48.Float23_2 = 0.0;
  local_b48.Float30_2 = 0.0;
  local_b48.Float31_2 = 0.0;
  local_b48.Float32_2 = 0.0;
  local_b48.Float33_2 = 0.0;
  local_b48.bValid = false;
  local_b48._129_3_ = 0;
  local_c58.Name.Number = 0;
  URigHierarchyController::AddControl
            ((URigHierarchyController *)pUVar14,&local_bec,*pFVar17,&local_c58,pFVar16,
             (FRigControlValue *)&local_b48,&local_998,&local_9f8,true,false);
  pTVar2 = &(this->Unit).Entries;
  iVar13 = (this->Unit).Entries.ArrayMax;
  piVar1 = &(this->Unit).Entries.ArrayMax;
  (this->Unit).Entries.ArrayNum = 0;
  if (iVar13 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  ::FName::FName(&local_ca0,L"Control1");
  pFVar17 = (FName *)(pTVar2->AllocatorInstance).Data;
  local_ce8 = local_ca0;
  local_830 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_828 = _UNK_150689688;
  FStack_ce0 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_cd8 = _UNK_150689688;
  if ((pFVar17 <= &local_ce8) && (&local_ce8 < pFVar17 + (longlong)*piVar1 * 3)) {
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
                       (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Unit).Entries.ArrayNum = iVar13 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  pFVar17 = (FName *)(pFVar3 + (longlong)iVar13 * 0x18);
  *pFVar17 = local_ce8;
  pFVar17[1] = FStack_ce0;
  *(undefined8 *)(pFVar3 + (longlong)iVar13 * 0x18 + 0x10) = uStack_cd8;
  ::FName::FName(&local_c98,L"Control2");
  pFVar17 = (FName *)(pTVar2->AllocatorInstance).Data;
  local_ce8 = local_c98;
  local_820 = ___xmm_40000000000000004000000000000000;
  uStack_818 = _UNK_150689698;
  FStack_ce0 = ___xmm_40000000000000004000000000000000;
  uStack_cd8 = _UNK_150689698;
  if ((pFVar17 <= &local_ce8) && (&local_ce8 < pFVar17 + (longlong)*piVar1 * 3)) {
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
                       (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Unit).Entries.ArrayNum = iVar13 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  pFVar17 = (FName *)(pFVar3 + (longlong)iVar13 * 0x18);
  *pFVar17 = local_ce8;
  pFVar17[1] = FStack_ce0;
  *(undefined8 *)(pFVar3 + (longlong)iVar13 * 0x18 + 0x10) = uStack_cd8;
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_c38,L"unexpected number of entries");
  (*pcVar4)(this,(this->Unit).Entries.ArrayNum == 2,&local_c38,0);
  if (local_c38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c38.Data.AllocatorInstance.Data);
  }
  FRigUnit_SetMultiControlVector2D::Execute
            (&this->Unit,*(FControlRigExecuteContext **)&this->field_0x370);
  pUVar14 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar14 == (URigHierarchy *)0x0) {
LAB_14a4d42b7:
    pUVar14 = pUVar19;
  }
  else {
    pUVar15 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar15->_padding_)) goto LAB_14a4d42b7;
  }
  ::FName::FName(&local_c90,L"Control1");
  FStack_cb4 = local_c90.ComparisonIndex.Value;
  uStack_cb0 = local_c90.Number;
  local_cb8 = CONCAT31(local_cb8._1_3_,4);
  local_c48.Name.ComparisonIndex.Value = FStack_cb4.Value;
  local_c48._0_4_ = local_cb8;
  local_c48.Name.Number = uStack_cb0;
  iVar13 = URigHierarchy::GetIndex(pUVar14,&local_c48,true);
  URigHierarchy::GetControlValueByIndex(pUVar14,&local_810,iVar13,Current);
  pUVar14 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar14 != (URigHierarchy *)0x0) {
    pUVar15 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((iVar13 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
        &pUVar15->_padding_)) goto LAB_14a4d4344;
  }
  pUVar14 = pUVar19;
LAB_14a4d4344:
  ::FName::FName(local_c88,L"Control2");
  FStack_ca8 = local_c88[0].ComparisonIndex.Value;
  uStack_ca4 = local_c88[0].Number;
  local_cac = CONCAT31(local_cac._1_3_,4);
  local_c78.Name.ComparisonIndex.Value = FStack_ca8.Value;
  local_c78._0_4_ = local_cac;
  local_c78.Name.Number = uStack_ca4;
  iVar13 = URigHierarchy::GetIndex(pUVar14,&local_c78,true);
  URigHierarchy::GetControlValueByIndex(pUVar14,&local_78c,iVar13,Current);
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_c28,L"unexpected control value");
  if ((local_810.FloatStorage.Float00 == __real_3f800000) &&
     ((double)local_810.FloatStorage.Float01 == __real_3ff0000000000000)) {
    uVar18 = 1;
  }
  else {
    uVar18 = 0;
  }
  (*pcVar4)(this,uVar18,&local_c28,0);
  if (local_c28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c28.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_c18,L"unexpected control value");
  if ((local_78c.FloatStorage.Float00 == __real_40000000) &&
     ((double)local_78c.FloatStorage.Float01 == __real_4000000000000000)) {
    uVar18 = 1;
  }
  else {
    uVar18 = 0;
  }
  (*pcVar4)(this,uVar18,&local_c18,0);
  if (local_c18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c18.Data.AllocatorInstance.Data);
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

// GetBeautifiedTestName @ 14a4d4580

FString * __thiscall
FRigUnit_SetMultiControlVector2DTest::GetBeautifiedTestName
          (FRigUnit_SetMultiControlVector2DTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_SetMultiControlVector2D");
  return __return_storage_ptr__;
}

