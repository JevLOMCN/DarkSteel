// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a4ccdb0

EAutomationTestFlags __thiscall
FRigUnit_SetMultiControlFloatTest::GetTestFlags(FRigUnit_SetMultiControlFloatTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4ccdc0

bool __thiscall
FRigUnit_SetMultiControlFloatTest::IsStressTest(FRigUnit_SetMultiControlFloatTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4ccde0

uint __thiscall
FRigUnit_SetMultiControlFloatTest::GetRequiredDeviceNum(FRigUnit_SetMultiControlFloatTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4ccdf0

FString * __thiscall
FRigUnit_SetMultiControlFloatTest::GetTestSourceFileName
          (FRigUnit_SetMultiControlFloatTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Hierarchy\\RigUnit_SetControlTransform.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4cce20

int __thiscall
FRigUnit_SetMultiControlFloatTest::GetTestSourceFileLine(FRigUnit_SetMultiControlFloatTest *this)

{
  return 0x17e;
}

// GetTests @ 14a4ccee0

/* WARNING: Removing unreachable block (ram,0x00014a4ccfcd) */
/* WARNING: Removing unreachable block (ram,0x00014a4cd098) */

void __thiscall
FRigUnit_SetMultiControlFloatTest::GetTests
          (FRigUnit_SetMultiControlFloatTest *this,
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
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_SetMultiControlFloat");
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

// RunTest @ 14a4cd5b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_SetMultiControlFloatTest::RunTest(FRigUnit_SetMultiControlFloatTest *this,FString *param_1)

{
  int iVar1;
  TArray<FRigUnit_SetMultiControlFloat_Entry,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  undefined1 uVar5;
  int iVar6;
  URigHierarchy *this_00;
  UClass *pUVar7;
  ForAnyElementType local_38;
  undefined8 local_30;
  float local_28;
  ForAnyElementType local_20;
  undefined8 local_18;
  
  (**(code **)(*(longlong *)this + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar7 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) goto LAB_14a4cd617;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4cd617:
  URigHierarchy::Reset(this_00);
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  local_28 = 1.0;
  local_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40c,&local_38,(int *)((longlong)&local_30 + 4));
  pTVar2 = &(this->Unit).Entries;
  iVar1 = iVar6 + 1;
  *(undefined8 *)(local_38.Data + (longlong)iVar6 * 0xc) = 0;
  *(undefined4 *)(local_38.Data + (longlong)iVar6 * 0xc + 8) = 0;
  local_30._0_4_ = iVar1;
  if (pTVar2 != (TArray<FRigUnit_SetMultiControlFloat_Entry,TSizedDefaultAllocator<32>_> *)&local_38
     ) {
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = local_38.Data;
    (this->Unit).Entries.ArrayNum = (int)local_30;
    (this->Unit).Entries.ArrayMax = local_30._4_4_;
    local_30._0_4_ = 0;
    local_30._4_4_ = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
  }
  pTVar3 = &(this->Unit).CachedControlIndices;
  (this->Unit).Weight = local_28;
  if (pTVar3 != (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *)&local_20) {
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar3->AllocatorInstance).Data = local_20.Data;
    (this->Unit).CachedControlIndices.ArrayNum = (int)local_18;
    (this->Unit).CachedControlIndices.ArrayMax = local_18._4_4_;
    local_18 = 0;
    local_20.Data = (FScriptContainerElement *)0x0;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x00014a4cd745. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar5;
}

// RunControlRigUnitTest @ 14a4cd760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_SetMultiControlFloatTest::RunControlRigUnitTest
          (FRigUnit_SetMultiControlFloatTest *this,FString *param_1)

{
  int *piVar1;
  TArray<FRigUnit_SetMultiControlFloat_Entry,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  __m128d _Var8;
  __m128d _Var9;
  __m128d _Var10;
  __m128d _Var11;
  __m128d _Var12;
  __m128d _Var13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  URigHierarchy *pUVar17;
  UClass *pUVar18;
  FRigControlSettings *pFVar19;
  FName *pFVar20;
  URigHierarchy *pUVar21;
  undefined1 auStackY_e68 [32];
  FName local_e18;
  undefined4 local_e10;
  uint local_e08;
  FNameEntryId FStack_e04;
  undefined4 uStack_e00;
  uint local_dfc;
  FNameEntryId FStack_df8;
  undefined4 uStack_df4;
  undefined4 local_df0;
  FNameEntryId FStack_dec;
  uint uStack_de8;
  undefined4 local_de4;
  FNameEntryId FStack_de0;
  uint uStack_ddc;
  undefined4 local_dd8;
  FNameEntryId FStack_dd4;
  uint uStack_dd0;
  FName local_dcc;
  FName local_dc4;
  FName local_dbc;
  FName local_db4;
  FName local_dac [2];
  FRigElementKey local_d98;
  FRigElementKey local_d88;
  FName local_d78 [2];
  FRigElementKey local_d68;
  FRigElementKey local_d58;
  FRigElementKey local_d48;
  FString local_d38;
  FString local_d28;
  FString local_d18;
  FString local_d08;
  FString local_cf8;
  FString local_ce8;
  FString local_cd8;
  FString local_cc8;
  FString local_cb8;
  FString local_ca8;
  FString local_c98;
  FString local_c88;
  FName local_c78;
  FName local_c70;
  FRigElementKey local_c68;
  FRigElementKey local_c5c;
  FRigControlValueStorage local_c48;
  FRigControlValueStorage local_bb8;
  TTransform<double> local_b28;
  TTransform<double> local_ac8;
  TTransform<double> local_a68;
  TTransform<double> local_a08;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined4 local_928;
  undefined8 local_924;
  undefined8 uStack_91c;
  undefined8 local_914;
  undefined8 uStack_90c;
  undefined8 local_904;
  undefined8 uStack_8fc;
  undefined8 local_8f4;
  undefined8 uStack_8ec;
  undefined8 local_8e4;
  undefined8 uStack_8dc;
  undefined8 local_8d4;
  undefined8 uStack_8cc;
  undefined8 local_8c4;
  undefined8 uStack_8bc;
  undefined8 local_8b4;
  undefined8 uStack_8ac;
  undefined4 local_8a4;
  FRigControlValue local_8a0;
  FRigControlValue local_81c;
  FRigControlValue local_798;
  FRigControlSettings local_708;
  FRigControlSettings local_4e8;
  FRigControlSettings local_2c8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_e68;
  FRigControlSettings::FRigControlSettings(&local_2c8);
  local_2c8.ControlType = Float;
  pUVar17 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  pUVar21 = (URigHierarchy *)0x0;
  if (pUVar17 == (URigHierarchy *)0x0) {
LAB_14a4cd80e:
    pUVar17 = pUVar21;
  }
  else {
    pUVar18 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar16 = (int)pUVar18->_padding_;
    if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar16) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar18->_padding_)) goto LAB_14a4cd80e;
  }
  _Var13.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  _Var12.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var11.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  _Var10.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  _Var9.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  _Var8.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_9a8 = 0;
  uStack_9a0 = 0;
  local_928 = 0;
  local_998 = 0;
  uStack_990 = 0;
  local_988 = 0;
  uStack_980 = 0;
  local_978 = 0;
  uStack_970 = 0;
  local_968 = 0;
  uStack_960 = 0;
  local_958 = 0;
  uStack_950 = 0;
  local_948 = 0;
  uStack_940 = 0;
  local_938 = 0;
  uStack_930 = 0;
  pFVar19 = FRigControlSettings::FRigControlSettings(&local_708,&local_2c8);
  local_dfc = local_dfc & 0xffffff00;
  FStack_df8.Value = 0;
  uStack_df4 = 0;
  pFVar20 = ::FName::FName(&local_c78,L"Control1");
  local_d68.Name.ComparisonIndex.Value = FStack_df8.Value;
  local_d68._0_4_ = local_dfc;
  local_b28.Rotation.XY.m128d_f64 = _Var8.m128d_f64;
  local_b28.Rotation.ZW.m128d_f64 = _Var9.m128d_f64;
  local_b28.Translation.XY.m128d_f64 = _Var10.m128d_f64;
  local_b28.Translation.ZW.m128d_f64 = _Var11.m128d_f64;
  local_b28.Scale3D.XY.m128d_f64 = _Var12.m128d_f64;
  local_b28.Scale3D.ZW.m128d_f64 = _Var13.m128d_f64;
  local_ac8.Rotation.XY.m128d_f64 = _Var8.m128d_f64;
  local_ac8.Rotation.ZW.m128d_f64 = _Var9.m128d_f64;
  local_ac8.Translation.XY.m128d_f64 = _Var10.m128d_f64;
  local_ac8.Translation.ZW.m128d_f64 = _Var11.m128d_f64;
  local_ac8.Scale3D.XY.m128d_f64 = _Var12.m128d_f64;
  local_ac8.Scale3D.ZW.m128d_f64 = _Var13.m128d_f64;
  local_c48.Float00 = 0.0;
  local_c48.Float01 = 0.0;
  local_c48.Float02 = 0.0;
  local_c48.Float03 = 0.0;
  local_c48.Float10 = 0.0;
  local_c48.Float11 = 0.0;
  local_c48.Float12 = 0.0;
  local_c48.Float13 = 0.0;
  local_c48.Float20 = 0.0;
  local_c48.Float21 = 0.0;
  local_c48.Float22 = 0.0;
  local_c48.Float23 = 0.0;
  local_c48.Float30 = 0.0;
  local_c48.Float31 = 0.0;
  local_c48.Float32 = 0.0;
  local_c48.Float33 = 0.0;
  local_c48.Float00_2 = 0.0;
  local_c48.Float01_2 = 0.0;
  local_c48.Float02_2 = 0.0;
  local_c48.Float03_2 = 0.0;
  local_c48.Float10_2 = 0.0;
  local_c48.Float11_2 = 0.0;
  local_c48.Float12_2 = 0.0;
  local_c48.Float13_2 = 0.0;
  local_c48.Float20_2 = 0.0;
  local_c48.Float21_2 = 0.0;
  local_c48.Float22_2 = 0.0;
  local_c48.Float23_2 = 0.0;
  local_c48.Float30_2 = 0.0;
  local_c48.Float31_2 = 0.0;
  local_c48.Float32_2 = 0.0;
  local_c48.Float33_2 = 0.0;
  local_c48.bValid = false;
  local_c48._129_3_ = 0;
  local_d68.Name.Number = 0;
  URigHierarchyController::AddControl
            ((URigHierarchyController *)pUVar17,&local_c68,*pFVar20,&local_d68,pFVar19,
             (FRigControlValue *)&local_c48,&local_ac8,&local_b28,true,false);
  pUVar17 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  if (pUVar17 == (URigHierarchy *)0x0) {
LAB_14a4cd9f2:
    pUVar17 = pUVar21;
  }
  else {
    pUVar18 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar16 = (int)pUVar18->_padding_;
    if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar16) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar18->_padding_)) goto LAB_14a4cd9f2;
  }
  _Var13.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  _Var12.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var11.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  _Var10.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  _Var9.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  _Var8.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_8a4 = 0;
  local_924 = 0;
  uStack_91c = 0;
  local_914 = 0;
  uStack_90c = 0;
  local_904 = 0;
  uStack_8fc = 0;
  local_8f4 = 0;
  uStack_8ec = 0;
  local_8e4 = 0;
  uStack_8dc = 0;
  local_8d4 = 0;
  uStack_8cc = 0;
  local_8c4 = 0;
  uStack_8bc = 0;
  local_8b4 = 0;
  uStack_8ac = 0;
  pFVar19 = FRigControlSettings::FRigControlSettings(&local_4e8,&local_2c8);
  local_e08 = local_e08 & 0xffffff00;
  FStack_e04.Value = 0;
  uStack_e00 = 0;
  pFVar20 = ::FName::FName(&local_c70,L"Control2");
  local_d58.Name.ComparisonIndex.Value = FStack_e04.Value;
  local_d58._0_4_ = local_e08;
  local_a68.Rotation.XY.m128d_f64 = _Var8.m128d_f64;
  local_a68.Rotation.ZW.m128d_f64 = _Var9.m128d_f64;
  local_a68.Translation.XY.m128d_f64 = _Var10.m128d_f64;
  local_a68.Translation.ZW.m128d_f64 = _Var11.m128d_f64;
  local_a68.Scale3D.XY.m128d_f64 = _Var12.m128d_f64;
  local_a68.Scale3D.ZW.m128d_f64 = _Var13.m128d_f64;
  local_a08.Rotation.XY.m128d_f64 = _Var8.m128d_f64;
  local_a08.Rotation.ZW.m128d_f64 = _Var9.m128d_f64;
  local_a08.Translation.XY.m128d_f64 = _Var10.m128d_f64;
  local_a08.Translation.ZW.m128d_f64 = _Var11.m128d_f64;
  local_a08.Scale3D.XY.m128d_f64 = _Var12.m128d_f64;
  local_a08.Scale3D.ZW.m128d_f64 = _Var13.m128d_f64;
  local_bb8.Float00 = 0.0;
  local_bb8.Float01 = 0.0;
  local_bb8.Float02 = 0.0;
  local_bb8.Float03 = 0.0;
  local_bb8.Float10 = 0.0;
  local_bb8.Float11 = 0.0;
  local_bb8.Float12 = 0.0;
  local_bb8.Float13 = 0.0;
  local_bb8.Float20 = 0.0;
  local_bb8.Float21 = 0.0;
  local_bb8.Float22 = 0.0;
  local_bb8.Float23 = 0.0;
  local_bb8.Float30 = 0.0;
  local_bb8.Float31 = 0.0;
  local_bb8.Float32 = 0.0;
  local_bb8.Float33 = 0.0;
  local_bb8.Float00_2 = 0.0;
  local_bb8.Float01_2 = 0.0;
  local_bb8.Float02_2 = 0.0;
  local_bb8.Float03_2 = 0.0;
  local_bb8.Float10_2 = 0.0;
  local_bb8.Float11_2 = 0.0;
  local_bb8.Float12_2 = 0.0;
  local_bb8.Float13_2 = 0.0;
  local_bb8.Float20_2 = 0.0;
  local_bb8.Float21_2 = 0.0;
  local_bb8.Float22_2 = 0.0;
  local_bb8.Float23_2 = 0.0;
  local_bb8.Float30_2 = 0.0;
  local_bb8.Float31_2 = 0.0;
  local_bb8.Float32_2 = 0.0;
  local_bb8.Float33_2 = 0.0;
  local_bb8.bValid = false;
  local_bb8._129_3_ = 0;
  local_d58.Name.Number = 0;
  URigHierarchyController::AddControl
            ((URigHierarchyController *)pUVar17,&local_c5c,*pFVar20,&local_d58,pFVar19,
             (FRigControlValue *)&local_bb8,&local_a08,&local_a68,true,false);
  pTVar2 = &(this->Unit).Entries;
  iVar16 = (this->Unit).Entries.ArrayMax;
  piVar1 = &(this->Unit).Entries.ArrayMax;
  (this->Unit).Entries.ArrayNum = 0;
  if (iVar16 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  ::FName::FName(local_dac,L"Control1");
  fVar6 = __real_41200000;
  pFVar20 = (FName *)(pTVar2->AllocatorInstance).Data;
  local_e18 = local_dac[0];
  local_e10 = 0x41200000;
  if (((pFVar20 <= &local_e18) &&
      (&local_e18 < (FName *)((longlong)pFVar20 + (longlong)*piVar1 * 0xc))) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  iVar16 = (this->Unit).Entries.ArrayNum;
  if (iVar16 == *piVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Unit).Entries.ArrayNum = iVar16 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(FName *)(pFVar3 + (longlong)iVar16 * 0xc) = local_e18;
  *(undefined4 *)(pFVar3 + (longlong)iVar16 * 0xc + 8) = local_e10;
  ::FName::FName(&local_dcc,L"Control2");
  fVar7 = __real_41a00000;
  pFVar20 = (FName *)(pTVar2->AllocatorInstance).Data;
  local_e18 = local_dcc;
  local_e10 = 0x41a00000;
  if (((pFVar20 <= &local_e18) &&
      (&local_e18 < (FName *)((longlong)pFVar20 + (longlong)*piVar1 * 0xc))) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  iVar16 = (this->Unit).Entries.ArrayNum;
  if (iVar16 == *piVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Unit).Entries.ArrayNum = iVar16 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(FName *)(pFVar3 + (longlong)iVar16 * 0xc) = local_e18;
  *(undefined4 *)(pFVar3 + (longlong)iVar16 * 0xc + 8) = local_e10;
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_cf8,L"unexpected number of entries");
  (*pcVar5)(this,(this->Unit).Entries.ArrayNum == 2,&local_cf8,0);
  if (local_cf8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cf8.Data.AllocatorInstance.Data);
  }
  FRigUnit_SetMultiControlFloat::Execute
            (&this->Unit,*(FControlRigExecuteContext **)&this->field_0x370);
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_ce8,L"unexpected control value");
  pUVar17 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar17 == (URigHierarchy *)0x0) {
LAB_14a4cde11:
    pUVar17 = pUVar21;
  }
  else {
    pUVar18 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar16 = (int)pUVar18->_padding_;
    if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar16) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar18->_padding_)) goto LAB_14a4cde11;
  }
  ::FName::FName(&local_dc4,L"Control1");
  FStack_dec = local_dc4.ComparisonIndex.Value;
  uStack_de8 = local_dc4.Number;
  local_df0 = CONCAT31(local_df0._1_3_,4);
  local_d48.Name.ComparisonIndex.Value = FStack_dec.Value;
  local_d48._0_4_ = local_df0;
  local_d48.Name.Number = uStack_de8;
  iVar16 = URigHierarchy::GetIndex(pUVar17,&local_d48,true);
  URigHierarchy::GetControlValueByIndex(pUVar17,&local_8a0,iVar16,Current);
  (*pcVar5)(this,local_8a0.FloatStorage.Float00 == fVar6,&local_ce8,0);
  if (local_ce8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ce8.Data.AllocatorInstance.Data);
  }
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_cd8,L"unexpected control value");
  pUVar17 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar17 == (URigHierarchy *)0x0) {
LAB_14a4cdeec:
    pUVar17 = pUVar21;
  }
  else {
    pUVar18 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar16 = (int)pUVar18->_padding_;
    if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar16) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar18->_padding_)) goto LAB_14a4cdeec;
  }
  ::FName::FName(&local_dbc,L"Control2");
  FStack_de0 = local_dbc.ComparisonIndex.Value;
  uStack_ddc = local_dbc.Number;
  local_de4 = CONCAT31(local_de4._1_3_,4);
  local_d98.Name.ComparisonIndex.Value = FStack_de0.Value;
  local_d98._0_4_ = local_de4;
  local_d98.Name.Number = uStack_ddc;
  iVar16 = URigHierarchy::GetIndex(pUVar17,&local_d98,true);
  URigHierarchy::GetControlValueByIndex(pUVar17,&local_81c,iVar16,Current);
  (*pcVar5)(this,local_81c.FloatStorage.Float00 == fVar7,&local_cd8,0);
  if (local_cd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cd8.Data.AllocatorInstance.Data);
  }
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_cc8,L"unexpected number of cache entries");
  (*pcVar5)(this,(this->Unit).CachedControlIndices.ArrayNum == 2,&local_cc8,0);
  if (local_cc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cc8.Data.AllocatorInstance.Data);
  }
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_cb8,L"unexpected cached control");
  if (((this->Unit).Entries.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((this->Unit).CachedControlIndices.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  (*pcVar5)(this,*(longlong *)((this->Unit).CachedControlIndices.AllocatorInstance.Data + 4) ==
                 *(longlong *)pFVar3,&local_cb8,0);
  if (local_cb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cb8.Data.AllocatorInstance.Data);
  }
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_ca8,L"unexpected cached control");
  if (((this->Unit).Entries.ArrayNum < 2) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((this->Unit).CachedControlIndices.ArrayNum < 2) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  (*pcVar5)(this,*(longlong *)((this->Unit).CachedControlIndices.AllocatorInstance.Data + 0x24) ==
                 *(longlong *)(pFVar3 + 0xc),&local_ca8,0);
  if (local_ca8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ca8.Data.AllocatorInstance.Data);
  }
  if (((this->Unit).CachedControlIndices.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  pFVar3 = (this->Unit).CachedControlIndices.AllocatorInstance.Data;
  if (((this->Unit).CachedControlIndices.ArrayNum < 2) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  pFVar4 = (this->Unit).CachedControlIndices.AllocatorInstance.Data;
  FRigUnit_SetMultiControlFloat::Execute
            (&this->Unit,*(FControlRigExecuteContext **)&this->field_0x370);
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_c98,L"unexpected cache reallocation");
  if (((this->Unit).CachedControlIndices.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  (*pcVar5)(this,pFVar3 == (this->Unit).CachedControlIndices.AllocatorInstance.Data,&local_c98,0);
  if (local_c98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c98.Data.AllocatorInstance.Data);
  }
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_c88,L"unexpected cache reallocation");
  if (((this->Unit).CachedControlIndices.ArrayNum < 2) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  (*pcVar5)(this,pFVar4 == (this->Unit).CachedControlIndices.AllocatorInstance.Data,&local_c88,0);
  if (local_c88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c88.Data.AllocatorInstance.Data);
  }
  iVar16 = *piVar1;
  (this->Unit).Entries.ArrayNum = 0;
  if (iVar16 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  ::FName::FName(&local_db4,L"Control2");
  fVar6 = __real_41f00000;
  pFVar20 = (FName *)(pTVar2->AllocatorInstance).Data;
  local_e18 = local_db4;
  local_e10 = 0x41f00000;
  if (((pFVar20 <= &local_e18) &&
      (&local_e18 < (FName *)((longlong)pFVar20 + (longlong)*piVar1 * 0xc))) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  iVar16 = (this->Unit).Entries.ArrayNum;
  if (iVar16 == *piVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Unit).Entries.ArrayNum = iVar16 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(FName *)(pFVar3 + (longlong)iVar16 * 0xc) = local_e18;
  *(undefined4 *)(pFVar3 + (longlong)iVar16 * 0xc + 8) = local_e10;
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_d38,L"unexpected number of entries");
  (*pcVar5)(this,(this->Unit).Entries.ArrayNum == 1,&local_d38,0);
  if (local_d38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d38.Data.AllocatorInstance.Data);
  }
  FRigUnit_SetMultiControlFloat::Execute
            (&this->Unit,*(FControlRigExecuteContext **)&this->field_0x370);
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_d28,L"unexpected control value");
  pUVar17 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar17 != (URigHierarchy *)0x0) {
    pUVar18 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar16 = (int)pUVar18->_padding_;
    if ((iVar16 <= *(int *)(pUVar17->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar16 * 8) ==
        &pUVar18->_padding_)) goto LAB_14a4ce488;
  }
  pUVar17 = (URigHierarchy *)0x0;
LAB_14a4ce488:
  ::FName::FName(local_d78,L"Control2");
  FStack_dd4 = local_d78[0].ComparisonIndex.Value;
  uStack_dd0 = local_d78[0].Number;
  local_dd8 = CONCAT31(local_dd8._1_3_,4);
  local_d88.Name.ComparisonIndex.Value = FStack_dd4.Value;
  local_d88._0_4_ = local_dd8;
  local_d88.Name.Number = uStack_dd0;
  iVar16 = URigHierarchy::GetIndex(pUVar17,&local_d88,true);
  URigHierarchy::GetControlValueByIndex(pUVar17,&local_798,iVar16,Current);
  (*pcVar5)(this,local_798.FloatStorage.Float00 == fVar6,&local_d28,0);
  if (local_d28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d28.Data.AllocatorInstance.Data);
  }
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_d18,L"unexpected number of cache entries");
  (*pcVar5)(this,(this->Unit).CachedControlIndices.ArrayNum == 1,&local_d18,0);
  if (local_d18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d18.Data.AllocatorInstance.Data);
  }
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_d08,L"unexpected cached control");
  if (((this->Unit).Entries.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((this->Unit).CachedControlIndices.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  pFVar4 = (this->Unit).CachedControlIndices.AllocatorInstance.Data;
  (*pcVar5)(this,CONCAT71((int7)((ulonglong)pFVar4 >> 8),
                          *(longlong *)(pFVar4 + 4) == *(longlong *)pFVar3),&local_d08,0);
  if (local_d08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d08.Data.AllocatorInstance.Data);
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

// GetBeautifiedTestName @ 14a4ce6e0

FString * __thiscall
FRigUnit_SetMultiControlFloatTest::GetBeautifiedTestName
          (FRigUnit_SetMultiControlFloatTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_SetMultiControlFloat");
  return __return_storage_ptr__;
}

