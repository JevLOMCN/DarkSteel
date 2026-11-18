// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a4ecbf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EAutomationTestFlags __thiscall
FRigUnit_SetCurveValueTest::GetTestFlags(FRigUnit_SetCurveValueTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4ecd50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigUnit_SetCurveValueTest::IsStressTest(FRigUnit_SetCurveValueTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4ecd60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall FRigUnit_SetCurveValueTest::GetRequiredDeviceNum(FRigUnit_SetCurveValueTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4ecde0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_SetCurveValueTest::GetTestSourceFileName
          (FRigUnit_SetCurveValueTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Hierarchy\\RigUnit_SetCurveValue.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4ecee0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall FRigUnit_SetCurveValueTest::GetTestSourceFileLine(FRigUnit_SetCurveValueTest *this)

{
  return 0x19;
}

// GetTests @ 14a4ecf40

/* WARNING: Removing unreachable block (ram,0x00014a4ed02d) */
/* WARNING: Removing unreachable block (ram,0x00014a4ed0f8) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetCurveValueTest::GetTests
          (FRigUnit_SetCurveValueTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_SetCurveValue");
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

// RunTest @ 14a4ed240

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_SetCurveValueTest::RunTest(FRigUnit_SetCurveValueTest *this,FString *param_1)

{
  int iVar1;
  undefined1 uVar2;
  URigHierarchy *this_00;
  UClass *pUVar3;
  uint local_28;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  
  (**(code **)(this->_padding_ + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar3 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14a4ed29f;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4ed29f:
  URigHierarchy::Reset(this_00);
  (this->Unit).Value = 0.0;
  uStack_1c = CONCAT22(uStack_1c._2_2_,0xffff);
  local_28 = local_28 & 0xffffff00;
  (this->Unit).Curve.ComparisonIndex = 0;
  (this->Unit).Curve.Number = 0;
  *(uint *)&(this->Unit).CachedCurveIndex.Key = local_28;
  (this->Unit).CachedCurveIndex.Key.Name.ComparisonIndex.Value = 0;
  (this->Unit).CachedCurveIndex.Key.Name.Number = 0;
  *(undefined4 *)&(this->Unit).CachedCurveIndex.Index = uStack_1c;
  (this->Unit).CachedCurveIndex.ContainerVersion = -1;
  *(undefined4 *)&(this->Unit).CachedCurveIndex.field_0x14 = uStack_14;
  *(undefined4 *)&(this->Unit).CachedCurveIndex.Element = 0;
  *(undefined4 *)((longlong)&(this->Unit).CachedCurveIndex.Element + 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014a4ed315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar2;
}

// RunControlRigUnitTest @ 14a4ed370

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_SetCurveValueTest::RunControlRigUnitTest(FRigUnit_SetCurveValueTest *this,FString *param_1)

{
  FControlRigExecuteContext *pFVar1;
  code *pcVar2;
  int iVar3;
  URigHierarchyController *pUVar4;
  UClass *pUVar5;
  FName *pFVar6;
  URigHierarchy *pUVar7;
  float fVar8;
  FName local_res8;
  FRigElementKey local_68;
  FRigElementKey local_58;
  FRigElementKey local_48;
  FString local_38;
  
  pUVar4 = (URigHierarchyController *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar4 == (URigHierarchyController *)0x0) {
LAB_14a4ed3c3:
    pUVar4 = (URigHierarchyController *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar5->_padding_)) goto LAB_14a4ed3c3;
  }
  pFVar6 = ::FName::FName(&local_res8,L"CurveA");
  URigHierarchyController::AddCurve(pUVar4,&local_68,*pFVar6,0.0,true,false);
  pUVar4 = (URigHierarchyController *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar4 == (URigHierarchyController *)0x0) {
LAB_14a4ed428:
    pUVar4 = (URigHierarchyController *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar5->_padding_)) goto LAB_14a4ed428;
  }
  pFVar6 = ::FName::FName(&local_res8,L"CurveB");
  URigHierarchyController::AddCurve(pUVar4,&local_48,*pFVar6,0.0,true,false);
  pUVar7 = (URigHierarchy *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar7 == (URigHierarchy *)0x0) {
LAB_14a4ed48d:
    pUVar7 = (URigHierarchy *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar5->_padding_)) goto LAB_14a4ed48d;
  }
  URigHierarchy::ResetCurveValues(pUVar7);
  ::FName::FName(&local_res8,L"CurveA");
  pFVar1 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Curve = local_res8;
  (this->Unit).Value = 3.0;
  FRigUnit_SetCurveValue::StaticExecute
            (pFVar1,&(this->Unit).Curve,(this->Unit).Value,&(this->Unit).CachedCurveIndex);
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_38,L"unexpected value");
  pUVar7 = (URigHierarchy *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar7 == (URigHierarchy *)0x0) {
LAB_14a4ed52c:
    pUVar7 = (URigHierarchy *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar5->_padding_)) goto LAB_14a4ed52c;
  }
  local_58.Type = local_68.Type;
  local_58._1_3_ = local_68._1_3_;
  local_58.Name.ComparisonIndex.Value = local_68.Name.ComparisonIndex.Value;
  local_58.Name.Number = local_68.Name.Number;
  iVar3 = URigHierarchy::GetIndex(pUVar7,&local_58,true);
  fVar8 = URigHierarchy::GetCurveValueByIndex(pUVar7,iVar3);
  (*pcVar2)(this,fVar8 == __real_40400000,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pUVar7 = (URigHierarchy *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar7 == (URigHierarchy *)0x0) {
LAB_14a4ed5b8:
    pUVar7 = (URigHierarchy *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar5->_padding_)) goto LAB_14a4ed5b8;
  }
  URigHierarchy::ResetCurveValues(pUVar7);
  ::FName::FName(&local_res8,L"CurveB");
  pFVar1 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Curve = local_res8;
  (this->Unit).Value = 13.0;
  FRigUnit_SetCurveValue::StaticExecute
            (pFVar1,&(this->Unit).Curve,(this->Unit).Value,&(this->Unit).CachedCurveIndex);
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_38,L"unexpected value");
  pUVar7 = (URigHierarchy *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar7 != (URigHierarchy *)0x0) {
    pUVar5 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((iVar3 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar5->_padding_)) goto LAB_14a4ed659;
  }
  pUVar7 = (URigHierarchy *)0x0;
LAB_14a4ed659:
  local_58.Type = local_48.Type;
  local_58._1_3_ = local_48._1_3_;
  local_58.Name.ComparisonIndex.Value = local_48.Name.ComparisonIndex.Value;
  local_58.Name.Number = local_48.Name.Number;
  iVar3 = URigHierarchy::GetIndex(pUVar7,&local_58,true);
  fVar8 = URigHierarchy::GetCurveValueByIndex(pUVar7,iVar3);
  (*pcVar2)(this,fVar8 == __real_41500000,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4ed6d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_SetCurveValueTest::GetBeautifiedTestName
          (FRigUnit_SetCurveValueTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_SetCurveValue");
  return __return_storage_ptr__;
}

