// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a4eff70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EAutomationTestFlags __thiscall
FRigUnit_CurveExistsTest::GetTestFlags(FRigUnit_CurveExistsTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4eff80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigUnit_CurveExistsTest::IsStressTest(FRigUnit_CurveExistsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4eff90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall FRigUnit_CurveExistsTest::GetRequiredDeviceNum(FRigUnit_CurveExistsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4effa0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_CurveExistsTest::GetTestSourceFileName
          (FRigUnit_CurveExistsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Hierarchy\\RigUnit_CurveExists.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4effd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall FRigUnit_CurveExistsTest::GetTestSourceFileLine(FRigUnit_CurveExistsTest *this)

{
  return 0x14;
}

// GetTests @ 14a4f0150

/* WARNING: Removing unreachable block (ram,0x00014a4f023d) */
/* WARNING: Removing unreachable block (ram,0x00014a4f0308) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_CurveExistsTest::GetTests
          (FRigUnit_CurveExistsTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_CurveExists");
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

// RunTest @ 14a4f0330

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigUnit_CurveExistsTest::RunTest(FRigUnit_CurveExistsTest *this,FString *param_1)

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
        == &pUVar3->_padding_)) goto LAB_14a4f038f;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4f038f:
  URigHierarchy::Reset(this_00);
  (this->Unit).Exists = false;
  uStack_24 = CONCAT22(uStack_24._2_2_,0xffff);
  local_30 = local_30 & 0xffffff00;
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
                    /* WARNING: Could not recover jumptable at 0x00014a4f0406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar2;
}

// RunControlRigUnitTest @ 14a4f04a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_CurveExistsTest::RunControlRigUnitTest(FRigUnit_CurveExistsTest *this,FString *param_1)

{
  FName *pFVar1;
  FCachedRigElement *this_00;
  int iVar2;
  URigHierarchy *pUVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  URigHierarchyController *this_01;
  UClass *pUVar7;
  FName local_res8;
  undefined1 local_18 [8];
  uint uStack_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&CurveName,"Curve");
      _Init_thread_footer(&::_TSS0);
    }
  }
  this_01 = (URigHierarchyController *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  if (this_01 == (URigHierarchyController *)0x0) {
LAB_14a4f050f:
    this_01 = (URigHierarchyController *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar7->_padding_)) goto LAB_14a4f050f;
  }
  URigHierarchyController::AddCurve(this_01,(FRigElementKey *)local_18,CurveName,0.0,true,false);
  pFVar1 = &(this->Unit).Curve;
  (this->Unit).Curve = CurveName;
  this_00 = &(this->Unit).CachedCurveIndex;
  pUVar3 = *(URigHierarchy **)(*(longlong *)&this->field_0x370 + 0x1c8);
  if (pUVar3 == (URigHierarchy *)0x0) {
LAB_14a4f058d:
    bVar6 = false;
  }
  else {
    FVar4 = *pFVar1;
    local_18._4_4_ = FVar4.ComparisonIndex.Value;
    uStack_10 = FVar4.Number;
    local_18[0] = Curve;
    bVar6 = FCachedRigElement::UpdateCache(this_00,(FRigElementKey *)local_18,pUVar3);
    if (!bVar6) goto LAB_14a4f058d;
    bVar6 = true;
  }
  (this->Unit).Exists = bVar6;
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString((FString *)local_18,L"Expected curve to exist");
  (*pcVar5)(this,(this->Unit).Exists,local_18,0);
  if ((void *)CONCAT44(local_18._4_4_,local_18._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_18._4_4_,local_18._0_4_));
  }
  ::FName::FName(&local_res8,L"NonExistentCurve");
  (this->Unit).Curve = local_res8;
  pUVar3 = *(URigHierarchy **)(*(longlong *)&this->field_0x370 + 0x1c8);
  if (pUVar3 == (URigHierarchy *)0x0) {
LAB_14a4f0622:
    bVar6 = false;
  }
  else {
    FVar4 = *pFVar1;
    local_18._4_4_ = FVar4.ComparisonIndex.Value;
    uStack_10 = FVar4.Number;
    local_18[0] = Curve;
    bVar6 = FCachedRigElement::UpdateCache(this_00,(FRigElementKey *)local_18,pUVar3);
    if (!bVar6) goto LAB_14a4f0622;
    bVar6 = true;
  }
  (this->Unit).Exists = bVar6;
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString((FString *)local_18,L"Expected curve to not exist.");
  (*pcVar5)(this,(this->Unit).Exists == false,local_18,0);
  if ((void *)CONCAT44(local_18._4_4_,local_18._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_18._4_4_,local_18._0_4_));
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->Unit).Curve.ComparisonIndex = 0;
  (this->Unit).Curve.Number = 0;
  pUVar3 = *(URigHierarchy **)(*(longlong *)&this->field_0x370 + 0x1c8);
  if (pUVar3 != (URigHierarchy *)0x0) {
    FVar4 = (this->Unit).Curve;
    local_18._4_4_ = FVar4.ComparisonIndex.Value;
    uStack_10 = FVar4.Number;
    local_18[0] = Curve;
    bVar6 = FCachedRigElement::UpdateCache
                      (&(this->Unit).CachedCurveIndex,(FRigElementKey *)local_18,pUVar3);
    if (bVar6) {
      bVar6 = true;
      goto LAB_14a4f06c6;
    }
  }
  bVar6 = false;
LAB_14a4f06c6:
  (this->Unit).Exists = bVar6;
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString((FString *)local_18,L"Expected curve to not exist.");
  (*pcVar5)(this,(this->Unit).Exists == false,local_18,0);
  if ((void *)CONCAT44(local_18._4_4_,local_18._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_18._4_4_,local_18._0_4_));
  }
  return true;
}

// GetBeautifiedTestName @ 14a4f0760

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_CurveExistsTest::GetBeautifiedTestName
          (FRigUnit_CurveExistsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_CurveExists");
  return __return_storage_ptr__;
}

