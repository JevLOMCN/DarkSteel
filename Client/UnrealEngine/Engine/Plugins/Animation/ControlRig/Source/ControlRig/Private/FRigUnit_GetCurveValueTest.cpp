// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a4ac7c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EAutomationTestFlags __thiscall
FRigUnit_GetCurveValueTest::GetTestFlags(FRigUnit_GetCurveValueTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4ac810

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigUnit_GetCurveValueTest::IsStressTest(FRigUnit_GetCurveValueTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4ac890

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall FRigUnit_GetCurveValueTest::GetRequiredDeviceNum(FRigUnit_GetCurveValueTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4ac8f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_GetCurveValueTest::GetTestSourceFileName
          (FRigUnit_GetCurveValueTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Hierarchy\\RigUnit_GetCurveValue.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4ac920

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall FRigUnit_GetCurveValueTest::GetTestSourceFileLine(FRigUnit_GetCurveValueTest *this)

{
  return 0x1b;
}

// GetTests @ 14a4ac9b0

/* WARNING: Removing unreachable block (ram,0x00014a4aca9d) */
/* WARNING: Removing unreachable block (ram,0x00014a4acb68) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetCurveValueTest::GetTests
          (FRigUnit_GetCurveValueTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_GetCurveValue");
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

// RunTest @ 14a4acce0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_GetCurveValueTest::RunTest(FRigUnit_GetCurveValueTest *this,FString *param_1)

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
        == &pUVar3->_padding_)) goto LAB_14a4acd3f;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4acd3f:
  URigHierarchy::Reset(this_00);
  (this->Unit).Valid = true;
  uStack_24 = CONCAT22(uStack_24._2_2_,0xffff);
  (this->Unit).Value = 0.0;
  (this->Unit).Curve.ComparisonIndex = 0;
  (this->Unit).Curve.Number = 0;
  local_30 = local_30 & 0xffffff00;
  *(uint *)&(this->Unit).CachedCurveIndex.Key = local_30;
  (this->Unit).CachedCurveIndex.Key.Name.ComparisonIndex.Value = 0;
  (this->Unit).CachedCurveIndex.Key.Name.Number = 0;
  *(undefined4 *)&(this->Unit).CachedCurveIndex.Index = uStack_24;
  (this->Unit).CachedCurveIndex.ContainerVersion = -1;
  *(undefined4 *)&(this->Unit).CachedCurveIndex.field_0x14 = uStack_1c;
  *(undefined4 *)&(this->Unit).CachedCurveIndex.Element = 0;
  *(undefined4 *)((longlong)&(this->Unit).CachedCurveIndex.Element + 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014a4acdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar2;
}

// RunControlRigUnitTest @ 14a4ace20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_GetCurveValueTest::RunControlRigUnitTest(FRigUnit_GetCurveValueTest *this,FString *param_1)

{
  float *pfVar1;
  bool *pbVar2;
  FName *pFVar3;
  FCachedRigElement *pFVar4;
  longlong lVar5;
  FControlRigExecuteContext *pFVar6;
  code *pcVar7;
  float fVar8;
  int iVar9;
  URigHierarchyController *pUVar10;
  UClass *pUVar11;
  URigHierarchy *pUVar12;
  FRigElementKey local_78;
  FRigElementKey local_68;
  FString local_58;
  FRigElementKey local_48 [2];
  
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar5 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&ValidCurveName,"ValidCurve");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar5 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&InvalidCurveName,"InvalidCurve");
    _Init_thread_footer(&::_TSS1);
  }
  pUVar10 = (URigHierarchyController *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  if (pUVar10 == (URigHierarchyController *)0x0) {
LAB_14a4aceb7:
    pUVar10 = (URigHierarchyController *)0x0;
  }
  else {
    pUVar11 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar9 = (int)pUVar11->_padding_;
    if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar9 * 8)
        != &pUVar11->_padding_)) goto LAB_14a4aceb7;
  }
  fVar8 = __real_3f800000;
  URigHierarchyController::AddCurve(pUVar10,local_48,ValidCurveName,__real_3f800000,true,false);
  pUVar10 = (URigHierarchyController *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  if (pUVar10 == (URigHierarchyController *)0x0) {
LAB_14a4acf18:
    pUVar10 = (URigHierarchyController *)0x0;
  }
  else {
    pUVar11 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar9 = (int)pUVar11->_padding_;
    if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar9 * 8)
        != &pUVar11->_padding_)) goto LAB_14a4acf18;
  }
  URigHierarchyController::AddCurve(pUVar10,&local_68,InvalidCurveName,fVar8,true,false);
  pUVar12 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar12 == (URigHierarchy *)0x0) {
LAB_14a4acf71:
    pUVar12 = (URigHierarchy *)0x0;
  }
  else {
    pUVar11 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar9 = (int)pUVar11->_padding_;
    if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar9 * 8)
        != &pUVar11->_padding_)) goto LAB_14a4acf71;
  }
  URigHierarchy::ResetCurveValues(pUVar12);
  pUVar12 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar12 == (URigHierarchy *)0x0) {
LAB_14a4acfb2:
    pUVar12 = (URigHierarchy *)0x0;
  }
  else {
    pUVar11 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar9 = (int)pUVar11->_padding_;
    if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar9 * 8)
        != &pUVar11->_padding_)) goto LAB_14a4acfb2;
  }
  local_78._0_4_ = local_68._0_4_;
  local_78.Name.ComparisonIndex.Value = local_68.Name.ComparisonIndex.Value;
  local_78.Name.Number = local_68.Name.Number;
  iVar9 = URigHierarchy::GetIndex(pUVar12,&local_78,true);
  URigHierarchy::UnsetCurveValueByIndex(pUVar12,iVar9,false);
  pfVar1 = &(this->Unit).Value;
  pFVar6 = *(FControlRigExecuteContext **)&this->field_0x370;
  pbVar2 = &(this->Unit).Valid;
  pFVar3 = &(this->Unit).Curve;
  (this->Unit).Curve = ValidCurveName;
  pFVar4 = &(this->Unit).CachedCurveIndex;
  FRigUnit_GetCurveValue::StaticExecute(pFVar6,pFVar3,pbVar2,pfVar1,pFVar4);
  pcVar7 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_58,L"Expected curve hold a unset value");
  (*pcVar7)(this,(this->Unit).Valid == false,&local_58,0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FRigUnit_GetCurveValue::StaticExecute
            (*(FControlRigExecuteContext **)&this->field_0x370,pFVar3,pbVar2,pfVar1,pFVar4);
  pcVar7 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_58,L"Expected curve\'s value to be 1.0");
  (*pcVar7)(this,fVar8 != (this->Unit).Value,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pUVar12 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar12 != (URigHierarchy *)0x0) {
    pUVar11 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar9 = (int)pUVar11->_padding_;
    if ((iVar9 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar9 * 8)
        == &pUVar11->_padding_)) goto LAB_14a4ad0f2;
  }
  pUVar12 = (URigHierarchy *)0x0;
LAB_14a4ad0f2:
  local_78.Name.ComparisonIndex = ValidCurveName.ComparisonIndex.Value;
  local_78.Name.Number = ValidCurveName.Number;
  local_78.Type = Curve;
  local_58.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)CONCAT44(local_78.Name.ComparisonIndex.Value,local_78._0_4_);
  local_58.Data.ArrayNum = local_78.Name.Number;
  iVar9 = URigHierarchy::GetIndex(pUVar12,(FRigElementKey *)&local_58,true);
  fVar8 = __real_40000000;
  URigHierarchy::SetCurveValueByIndex(pUVar12,iVar9,__real_40000000,false);
  FRigUnit_GetCurveValue::StaticExecute
            (*(FControlRigExecuteContext **)&this->field_0x370,pFVar3,pbVar2,pfVar1,pFVar4);
  pcVar7 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_58,L"Expected curve hold a valid value");
  (*pcVar7)(this,(this->Unit).Valid,&local_58,0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FRigUnit_GetCurveValue::StaticExecute
            (*(FControlRigExecuteContext **)&this->field_0x370,pFVar3,pbVar2,pfVar1,pFVar4);
  pcVar7 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_58,L"Expected curve\'s value to be 2.0");
  (*pcVar7)(this,fVar8 == (this->Unit).Value,&local_58,0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar6 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).Curve = InvalidCurveName;
  FRigUnit_GetCurveValue::StaticExecute(pFVar6,pFVar3,pbVar2,pfVar1,pFVar4);
  pcVar7 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_58,L"Expected curve hold an invalid value");
  (*pcVar7)(this,(this->Unit).Valid == false,&local_58,0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar6 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).Curve = UndefinedCurveName;
  FRigUnit_GetCurveValue::StaticExecute(pFVar6,pFVar3,pbVar2,pfVar1,pFVar4);
  pcVar7 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_58,L"Expected undefined curve hold an invalid value");
  (*pcVar7)(this,(this->Unit).Valid == false,&local_58,0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4ad3e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_GetCurveValueTest::GetBeautifiedTestName
          (FRigUnit_GetCurveValueTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_GetCurveValue");
  return __return_storage_ptr__;
}

