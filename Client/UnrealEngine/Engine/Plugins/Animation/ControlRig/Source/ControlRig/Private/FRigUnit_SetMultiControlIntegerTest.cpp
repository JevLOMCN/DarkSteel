// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a4d09d0

EAutomationTestFlags __thiscall
FRigUnit_SetMultiControlIntegerTest::GetTestFlags(FRigUnit_SetMultiControlIntegerTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4d0a20

bool __thiscall
FRigUnit_SetMultiControlIntegerTest::IsStressTest(FRigUnit_SetMultiControlIntegerTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4d0a30

uint __thiscall
FRigUnit_SetMultiControlIntegerTest::GetRequiredDeviceNum(FRigUnit_SetMultiControlIntegerTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4d0a60

FString * __thiscall
FRigUnit_SetMultiControlIntegerTest::GetTestSourceFileName
          (FRigUnit_SetMultiControlIntegerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Hierarchy\\RigUnit_SetControlTransform.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4d0ad0

int __thiscall
FRigUnit_SetMultiControlIntegerTest::GetTestSourceFileLine
          (FRigUnit_SetMultiControlIntegerTest *this)

{
  return 0x1b9;
}

// GetTests @ 14a4d0ba0

/* WARNING: Removing unreachable block (ram,0x00014a4d0c8d) */
/* WARNING: Removing unreachable block (ram,0x00014a4d0d58) */

void __thiscall
FRigUnit_SetMultiControlIntegerTest::GetTests
          (FRigUnit_SetMultiControlIntegerTest *this,
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
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_SetMultiControlInteger");
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

// RunTest @ 14a4d0e00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_SetMultiControlIntegerTest::RunTest
          (FRigUnit_SetMultiControlIntegerTest *this,FString *param_1)

{
  int iVar1;
  TArray<FRigUnit_SetMultiControlInteger_Entry,TSizedDefaultAllocator<32>_> *pTVar2;
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
        == &pUVar7->_padding_)) goto LAB_14a4d0e67;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4d0e67:
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
  if (pTVar2 != (TArray<FRigUnit_SetMultiControlInteger_Entry,TSizedDefaultAllocator<32>_> *)
                &local_38) {
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
                    /* WARNING: Could not recover jumptable at 0x00014a4d0f95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar5;
}

// RunControlRigUnitTest @ 14a4d1030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_SetMultiControlIntegerTest::RunControlRigUnitTest
          (FRigUnit_SetMultiControlIntegerTest *this,FString *param_1)

{
  int *piVar1;
  TArray<FRigUnit_SetMultiControlInteger_Entry,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double adVar5 [2];
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  URigHierarchy *pUVar9;
  UClass *pUVar10;
  FRigControlSettings *pFVar11;
  FName *pFVar12;
  URigHierarchy *pUVar13;
  undefined1 auStackY_c98 [32];
  FName local_c48;
  undefined4 local_c40;
  undefined1 local_c38 [16];
  undefined1 local_c28 [16];
  undefined1 local_c18 [8];
  double dStack_c10;
  undefined1 local_c08 [8];
  double dStack_c00;
  undefined1 local_bf8 [16];
  uint local_be8;
  FNameEntryId FStack_be4;
  undefined4 uStack_be0;
  uint local_bdc;
  undefined4 uStack_bd8;
  undefined4 uStack_bd4;
  undefined4 local_bd0;
  FNameEntryId FStack_bcc;
  uint uStack_bc8;
  undefined4 local_bc4;
  FNameEntryId FStack_bc0;
  uint uStack_bbc;
  double local_bb8 [2];
  FName local_ba8;
  FName local_ba0;
  FName local_b98;
  FName local_b90;
  FRigElementKey local_b88;
  double local_b78 [2];
  FName local_b68;
  FName local_b60;
  FRigElementKey local_b58;
  FRigControlValueStorage local_b48;
  FRigControlValueStorage local_ab8;
  TTransform<double> local_a28;
  TTransform<double> local_9c8;
  TTransform<double> local_968;
  TTransform<double> local_908;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined4 local_828;
  undefined8 local_824;
  undefined8 uStack_81c;
  undefined8 local_814;
  undefined8 uStack_80c;
  undefined8 local_804;
  undefined8 uStack_7fc;
  undefined8 local_7f4;
  undefined8 uStack_7ec;
  undefined8 local_7e4;
  undefined8 uStack_7dc;
  undefined8 local_7d4;
  undefined8 uStack_7cc;
  undefined8 local_7c4;
  undefined8 uStack_7bc;
  undefined8 local_7b4;
  undefined8 uStack_7ac;
  undefined4 local_7a4;
  FRigControlValue local_7a0;
  FRigControlValue local_71c;
  FRigControlSettings local_698;
  FRigControlSettings local_478;
  FRigControlSettings local_258;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c98;
  FRigControlSettings::FRigControlSettings(&local_258);
  local_258.ControlType = Integer;
  pUVar9 = (URigHierarchy *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  pUVar13 = (URigHierarchy *)0x0;
  if (pUVar9 == (URigHierarchy *)0x0) {
LAB_14a4d10b2:
    pUVar9 = pUVar13;
  }
  else {
    pUVar10 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar8 = (int)pUVar10->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar8 * 8)
        != &pUVar10->_padding_)) goto LAB_14a4d10b2;
  }
  local_c38._0_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_c38._8_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_c28._0_8_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_c28._8_8_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_828 = 0;
  local_bf8._0_8_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_bf8._8_8_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_b78[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_b78[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_c08 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  dStack_c00 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_c18 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  dStack_c10 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  local_8a8 = 0;
  uStack_8a0 = 0;
  local_898 = 0;
  uStack_890 = 0;
  local_888 = 0;
  uStack_880 = 0;
  local_878 = 0;
  uStack_870 = 0;
  local_868 = 0;
  uStack_860 = 0;
  local_858 = 0;
  uStack_850 = 0;
  local_848 = 0;
  uStack_840 = 0;
  local_838 = 0;
  uStack_830 = 0;
  pFVar11 = FRigControlSettings::FRigControlSettings(&local_698,&local_258);
  local_be8 = local_be8 & 0xffffff00;
  FStack_be4.Value = 0;
  uStack_be0 = 0;
  pFVar12 = ::FName::FName(&local_b60,L"Control1");
  local_a28.Scale3D.XY.m128d_f64[0] = (double)local_c08;
  local_a28.Scale3D.XY.m128d_f64[1] = dStack_c00;
  local_a28.Scale3D.ZW.m128d_f64[0] = (double)local_c18;
  local_a28.Scale3D.ZW.m128d_f64[1] = dStack_c10;
  local_9c8.Scale3D.XY.m128d_f64[0] = (double)local_c08;
  local_9c8.Scale3D.XY.m128d_f64[1] = dStack_c00;
  local_9c8.Scale3D.ZW.m128d_f64[0] = (double)local_c18;
  local_9c8.Scale3D.ZW.m128d_f64[1] = dStack_c10;
  local_b88.Name.ComparisonIndex.Value = FStack_be4.Value;
  local_b88._0_4_ = local_be8;
  local_a28.Rotation.XY.m128d_f64[0] = (double)local_c38._0_8_;
  local_a28.Rotation.XY.m128d_f64[1] = (double)local_c38._8_8_;
  local_a28.Rotation.ZW.m128d_f64[0] = (double)local_c28._0_8_;
  local_a28.Rotation.ZW.m128d_f64[1] = (double)local_c28._8_8_;
  local_a28.Translation.XY.m128d_f64[0] = (double)local_bf8._0_8_;
  local_a28.Translation.XY.m128d_f64[1] = (double)local_bf8._8_8_;
  local_a28.Translation.ZW.m128d_f64[0] = local_b78[0];
  local_a28.Translation.ZW.m128d_f64[1] = local_b78[1];
  local_9c8.Rotation.XY.m128d_f64[0] = (double)local_c38._0_8_;
  local_9c8.Rotation.XY.m128d_f64[1] = (double)local_c38._8_8_;
  local_9c8.Rotation.ZW.m128d_f64[0] = (double)local_c28._0_8_;
  local_9c8.Rotation.ZW.m128d_f64[1] = (double)local_c28._8_8_;
  local_9c8.Translation.XY.m128d_f64[0] = (double)local_bf8._0_8_;
  local_9c8.Translation.XY.m128d_f64[1] = (double)local_bf8._8_8_;
  local_9c8.Translation.ZW.m128d_f64[0] = local_b78[0];
  local_9c8.Translation.ZW.m128d_f64[1] = local_b78[1];
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
  local_b88.Name.Number = 0;
  URigHierarchyController::AddControl
            ((URigHierarchyController *)pUVar9,&local_b58,*pFVar12,&local_b88,pFVar11,
             (FRigControlValue *)&local_b48,&local_9c8,&local_a28,true,false);
  pUVar9 = (URigHierarchy *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  if (pUVar9 == (URigHierarchy *)0x0) {
LAB_14a4d129b:
    pUVar9 = pUVar13;
  }
  else {
    pUVar10 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar8 = (int)pUVar10->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar8 * 8)
        != &pUVar10->_padding_)) goto LAB_14a4d129b;
  }
  local_c38._0_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_c38._8_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_c28._0_8_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_c28._8_8_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_7a4 = 0;
  local_bf8._0_8_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_bf8._8_8_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_c08 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  dStack_c00 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_c18 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  dStack_c10 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_bb8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_bb8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  local_824 = 0;
  uStack_81c = 0;
  local_814 = 0;
  uStack_80c = 0;
  local_804 = 0;
  uStack_7fc = 0;
  local_7f4 = 0;
  uStack_7ec = 0;
  local_7e4 = 0;
  uStack_7dc = 0;
  local_7d4 = 0;
  uStack_7cc = 0;
  local_7c4 = 0;
  uStack_7bc = 0;
  local_7b4 = 0;
  uStack_7ac = 0;
  pFVar11 = FRigControlSettings::FRigControlSettings(&local_478,&local_258);
  local_bdc = local_bdc & 0xffffff00;
  uStack_bd8 = 0;
  uStack_bd4 = 0;
  pFVar12 = ::FName::FName(&local_b68,L"Control2");
  adVar5 = local_bb8;
  local_968.Scale3D.XY.m128d_f64[0] = (double)local_c18;
  local_968.Scale3D.XY.m128d_f64[1] = dStack_c10;
  local_968.Scale3D.ZW.m128d_f64[0] = local_bb8[0];
  local_968.Scale3D.ZW.m128d_f64[1] = local_bb8[1];
  local_908.Scale3D.XY.m128d_f64[0] = (double)local_c18;
  local_908.Scale3D.XY.m128d_f64[1] = dStack_c10;
  local_908.Scale3D.ZW.m128d_f64[0] = local_bb8[0];
  local_908.Scale3D.ZW.m128d_f64[1] = local_bb8[1];
  local_bb8[0]._4_4_ = uStack_bd8;
  local_bb8[0]._0_4_ = local_bdc;
  local_968.Rotation.XY.m128d_f64[0] = (double)local_c38._0_8_;
  local_968.Rotation.XY.m128d_f64[1] = (double)local_c38._8_8_;
  local_968.Rotation.ZW.m128d_f64[0] = (double)local_c28._0_8_;
  local_968.Rotation.ZW.m128d_f64[1] = (double)local_c28._8_8_;
  local_968.Translation.XY.m128d_f64[0] = (double)local_bf8._0_8_;
  local_968.Translation.XY.m128d_f64[1] = (double)local_bf8._8_8_;
  local_968.Translation.ZW.m128d_f64[0] = (double)local_c08;
  local_968.Translation.ZW.m128d_f64[1] = dStack_c00;
  local_908.Rotation.XY.m128d_f64[0] = (double)local_c38._0_8_;
  local_908.Rotation.XY.m128d_f64[1] = (double)local_c38._8_8_;
  local_908.Rotation.ZW.m128d_f64[0] = (double)local_c28._0_8_;
  local_908.Rotation.ZW.m128d_f64[1] = (double)local_c28._8_8_;
  local_908.Translation.XY.m128d_f64[0] = (double)local_bf8._0_8_;
  local_908.Translation.XY.m128d_f64[1] = (double)local_bf8._8_8_;
  local_908.Translation.ZW.m128d_f64[0] = (double)local_c08;
  local_908.Translation.ZW.m128d_f64[1] = dStack_c00;
  local_ab8.Float00 = 0.0;
  local_ab8.Float01 = 0.0;
  local_ab8.Float02 = 0.0;
  local_ab8.Float03 = 0.0;
  local_ab8.Float10 = 0.0;
  local_ab8.Float11 = 0.0;
  local_ab8.Float12 = 0.0;
  local_ab8.Float13 = 0.0;
  local_ab8.Float20 = 0.0;
  local_ab8.Float21 = 0.0;
  local_ab8.Float22 = 0.0;
  local_ab8.Float23 = 0.0;
  local_ab8.Float30 = 0.0;
  local_ab8.Float31 = 0.0;
  local_ab8.Float32 = 0.0;
  local_ab8.Float33 = 0.0;
  local_ab8.Float00_2 = 0.0;
  local_ab8.Float01_2 = 0.0;
  local_ab8.Float02_2 = 0.0;
  local_ab8.Float03_2 = 0.0;
  local_ab8.Float10_2 = 0.0;
  local_ab8.Float11_2 = 0.0;
  local_ab8.Float12_2 = 0.0;
  local_ab8.Float13_2 = 0.0;
  local_ab8.Float20_2 = 0.0;
  local_ab8.Float21_2 = 0.0;
  local_ab8.Float22_2 = 0.0;
  local_ab8.Float23_2 = 0.0;
  local_ab8.Float30_2 = 0.0;
  local_ab8.Float31_2 = 0.0;
  local_ab8.Float32_2 = 0.0;
  local_ab8.Float33_2 = 0.0;
  local_ab8.bValid = false;
  local_ab8._129_3_ = 0;
  local_bb8[1]._4_4_ = adVar5[1]._4_4_;
  local_bb8[1]._0_4_ = 0;
  URigHierarchyController::AddControl
            ((URigHierarchyController *)pUVar9,(FRigElementKey *)local_b78,*pFVar12,
             (FRigElementKey *)local_bb8,pFVar11,(FRigControlValue *)&local_ab8,&local_908,
             &local_968,true,false);
  pTVar2 = &(this->Unit).Entries;
  iVar8 = (this->Unit).Entries.ArrayMax;
  piVar1 = &(this->Unit).Entries.ArrayMax;
  (this->Unit).Entries.ArrayNum = 0;
  if (iVar8 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  ::FName::FName(&local_ba8,L"Control1");
  pFVar12 = (FName *)(pTVar2->AllocatorInstance).Data;
  local_c48 = local_ba8;
  local_c40 = 10;
  if ((pFVar12 <= &local_c48) &&
     (&local_c48 < (FName *)((longlong)pFVar12 + (longlong)*piVar1 * 0xc))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  iVar8 = (this->Unit).Entries.ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Unit).Entries.ArrayNum = iVar8 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(FName *)(pFVar3 + (longlong)iVar8 * 0xc) = local_c48;
  *(undefined4 *)(pFVar3 + (longlong)iVar8 * 0xc + 8) = local_c40;
  ::FName::FName(&local_ba0,L"Control2");
  pFVar12 = (FName *)(pTVar2->AllocatorInstance).Data;
  local_c48 = local_ba0;
  local_c40 = 0x14;
  if ((pFVar12 <= &local_c48) &&
     (&local_c48 < (FName *)((longlong)pFVar12 + (longlong)*piVar1 * 0xc))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  iVar8 = (this->Unit).Entries.ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Unit).Entries.ArrayNum = iVar8 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(FName *)(pFVar3 + (longlong)iVar8 * 0xc) = local_c48;
  *(undefined4 *)(pFVar3 + (longlong)iVar8 * 0xc + 8) = local_c40;
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString((FString *)local_bf8,L"unexpected number of entries");
  (*pcVar4)(this,(this->Unit).Entries.ArrayNum == 2,local_bf8,0);
  if ((FScriptContainerElement *)local_bf8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_bf8._0_8_);
  }
  FRigUnit_SetMultiControlInteger::Execute
            (&this->Unit,*(FControlRigExecuteContext **)&this->field_0x370);
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString((FString *)local_c28,L"unexpected control value");
  pUVar9 = (URigHierarchy *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar9 == (URigHierarchy *)0x0) {
LAB_14a4d16c1:
    pUVar9 = pUVar13;
  }
  else {
    pUVar10 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar8 = (int)pUVar10->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar8 * 8)
        != &pUVar10->_padding_)) goto LAB_14a4d16c1;
  }
  ::FName::FName(&local_b98,L"Control1");
  adVar5 = _local_c18;
  FStack_bcc = local_b98.ComparisonIndex.Value;
  uStack_bc8 = local_b98.Number;
  local_bd0 = CONCAT31(local_bd0._1_3_,4);
  local_c18._4_4_ = FStack_bcc.Value;
  local_c18._0_4_ = local_bd0;
  dStack_c10._4_4_ = adVar5[1]._4_4_;
  dStack_c10._0_4_ = uStack_bc8;
  iVar8 = URigHierarchy::GetIndex(pUVar9,(FRigElementKey *)local_c18,true);
  URigHierarchy::GetControlValueByIndex(pUVar9,&local_7a0,iVar8,Current);
  (*pcVar4)(this,local_7a0.FloatStorage.Float00 == 1.4013e-44,local_c28,0);
  if ((FScriptContainerElement *)local_c28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c28._0_8_);
  }
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString((FString *)local_c38,L"unexpected control value");
  pUVar9 = (URigHierarchy *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar9 != (URigHierarchy *)0x0) {
    pUVar10 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar8 = (int)pUVar10->_padding_;
    if ((iVar8 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar8 * 8)
        == &pUVar10->_padding_)) goto LAB_14a4d178d;
  }
  pUVar9 = pUVar13;
LAB_14a4d178d:
  ::FName::FName(&local_b90,L"Control2");
  adVar5 = _local_c08;
  FStack_bc0 = local_b90.ComparisonIndex.Value;
  uStack_bbc = local_b90.Number;
  local_bc4 = CONCAT31(local_bc4._1_3_,4);
  local_c08._4_4_ = FStack_bc0.Value;
  local_c08._0_4_ = local_bc4;
  dStack_c00._4_4_ = adVar5[1]._4_4_;
  dStack_c00._0_4_ = uStack_bbc;
  iVar8 = URigHierarchy::GetIndex(pUVar9,(FRigElementKey *)local_c08,true);
  URigHierarchy::GetControlValueByIndex(pUVar9,&local_71c,iVar8,Current);
  (*pcVar4)(this,local_71c.FloatStorage.Float00 == 2.8026e-44,local_c38,0);
  if ((FScriptContainerElement *)local_c38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c38._0_8_);
  }
  if (local_258.FilteredChannels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.FilteredChannels.AllocatorInstance.Data);
  }
  if (local_258.PreviouslyDrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.PreviouslyDrivenControls.AllocatorInstance.Data);
  }
  if (local_258.DrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.DrivenControls.AllocatorInstance.Data);
  }
  if (local_258.Customization.RemovedSpaces.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_258.Customization.RemovedSpaces.AllocatorInstance.Data);
  }
  if (local_258.Customization.AvailableSpaces.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Customization.AvailableSpaces.AllocatorInstance.Data);
  }
  if (local_258.LimitEnabled.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.LimitEnabled.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4d18e0

FString * __thiscall
FRigUnit_SetMultiControlIntegerTest::GetBeautifiedTestName
          (FRigUnit_SetMultiControlIntegerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_SetMultiControlInteger");
  return __return_storage_ptr__;
}

