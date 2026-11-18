// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a4a9e60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EAutomationTestFlags __thiscall
FRigUnit_UnsetCurveValueTest::GetTestFlags(FRigUnit_UnsetCurveValueTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4a9e80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigUnit_UnsetCurveValueTest::IsStressTest(FRigUnit_UnsetCurveValueTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4a9ec0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall
FRigUnit_UnsetCurveValueTest::GetRequiredDeviceNum(FRigUnit_UnsetCurveValueTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4a9ee0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_UnsetCurveValueTest::GetTestSourceFileName
          (FRigUnit_UnsetCurveValueTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Hierarchy\\RigUnit_UnsetCurveValue.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4a9f10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
FRigUnit_UnsetCurveValueTest::GetTestSourceFileLine(FRigUnit_UnsetCurveValueTest *this)

{
  return 0x19;
}

// GetTests @ 14a4aa120

/* WARNING: Removing unreachable block (ram,0x00014a4aa20d) */
/* WARNING: Removing unreachable block (ram,0x00014a4aa2d8) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_UnsetCurveValueTest::GetTests
          (FRigUnit_UnsetCurveValueTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_UnsetCurveValue");
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

// RunTest @ 14a4aa4f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_UnsetCurveValueTest::RunTest(FRigUnit_UnsetCurveValueTest *this,FString *param_1)

{
  int iVar1;
  undefined1 uVar2;
  URigHierarchy *this_00;
  UClass *pUVar3;
  uint local_30;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  (**(code **)(*(longlong *)this + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar3 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14a4aa54f;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4aa54f:
  URigHierarchy::Reset(this_00);
  local_30 = local_30 & 0xffffff00;
  uStack_24 = CONCAT22(uStack_24._2_2_,0xffff);
  (this->Unit).Curve.ComparisonIndex = 0;
  (this->Unit).Curve.Number = 0;
  *(uint *)&(this->Unit).CachedCurveIndex.Key = local_30;
  (this->Unit).CachedCurveIndex.Key.Name.ComparisonIndex.Value = 0;
  (this->Unit).CachedCurveIndex.Key.Name.Number = 0;
  *(undefined4 *)&(this->Unit).CachedCurveIndex.Index = uStack_24;
  (this->Unit).CachedCurveIndex.ContainerVersion = -1;
  *(undefined4 *)&(this->Unit).CachedCurveIndex.field_0x14 = uStack_1c;
  *(undefined4 *)&(this->Unit).CachedCurveIndex.Element = 0;
  *(undefined4 *)((longlong)&(this->Unit).CachedCurveIndex.Element + 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014a4aa5bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar2;
}

// RunControlRigUnitTest @ 14a4ab8e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_UnsetCurveValueTest::RunControlRigUnitTest
          (FRigUnit_UnsetCurveValueTest *this,FString *param_1)

{
  ushort uVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  URigHierarchyController *this_00;
  UClass *pUVar7;
  FName *pFVar8;
  URigHierarchy *pUVar9;
  FName local_res8;
  FRigElementKey local_38;
  FRigElementKey local_28;
  FString local_18;
  
  this_00 = (URigHierarchyController *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  if (this_00 == (URigHierarchyController *)0x0) {
LAB_14a4ab92e:
    this_00 = (URigHierarchyController *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8)
        != &pUVar7->_padding_)) goto LAB_14a4ab92e;
  }
  pFVar8 = ::FName::FName(&local_res8,L"Curve");
  URigHierarchyController::AddCurve(this_00,&local_28,*pFVar8,0.0,true,false);
  pUVar9 = (URigHierarchy *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar9 == (URigHierarchy *)0x0) {
LAB_14a4ab995:
    pUVar9 = (URigHierarchy *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar6 * 8)
        != &pUVar7->_padding_)) goto LAB_14a4ab995;
  }
  URigHierarchy::ResetCurveValues(pUVar9);
  ::FName::FName(&local_res8,L"Curve");
  (this->Unit).Curve = local_res8;
  pUVar9 = *(URigHierarchy **)(*(longlong *)&this->field_0x370 + 0x1c8);
  if (pUVar9 != (URigHierarchy *)0x0) {
    FVar2 = (this->Unit).Curve;
    local_38.Name.ComparisonIndex = FVar2.ComparisonIndex.Value;
    local_38.Name.Number = FVar2.Number;
    local_38.Type = Curve;
    bVar4 = FCachedRigElement::UpdateCache(&(this->Unit).CachedCurveIndex,&local_38,pUVar9);
    if (bVar4) {
      uVar1 = (this->Unit).CachedCurveIndex.Index;
      uVar5 = 0xffffffff;
      if (uVar1 != 0xffff) {
        uVar5 = (uint)uVar1;
      }
      URigHierarchy::UnsetCurveValueByIndex(pUVar9,uVar5,false);
    }
  }
  pcVar3 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_18,L"unexpected value");
  pUVar9 = (URigHierarchy *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar9 != (URigHierarchy *)0x0) {
    pUVar7 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((iVar6 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar7->_padding_)) goto LAB_14a4aba6c;
  }
  pUVar9 = (URigHierarchy *)0x0;
LAB_14a4aba6c:
  local_38._0_4_ = local_28._0_4_;
  local_38.Name.ComparisonIndex.Value = local_28.Name.ComparisonIndex.Value;
  local_38.Name.Number = local_28.Name.Number;
  iVar6 = URigHierarchy::GetIndex(pUVar9,&local_38,true);
  bVar4 = URigHierarchy::IsCurveValueSetByIndex(pUVar9,iVar6);
  (*pcVar3)(this,!bVar4,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4abb60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_UnsetCurveValueTest::GetBeautifiedTestName
          (FRigUnit_UnsetCurveValueTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_UnsetCurveValue");
  return __return_storage_ptr__;
}

