// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// Initialize @ 14a4e46b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FControlRigUnitTestBase::Initialize(FControlRigUnitTestBase *this)

{
  int iVar1;
  UPackage *pUVar2;
  FRigVMExtendedExecuteContext *pFVar3;
  FControlRigExecuteContext *pFVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  URigHierarchy *this_00;
  FUObjectItem *this_01;
  longlong *plVar7;
  undefined1 auStack_348 [32];
  URigHierarchyController *local_328 [2];
  undefined1 local_318 [128];
  FRigVMExtendedExecuteContext local_298;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_348;
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar2,
                         L"ControlRigExecuteContext");
  }
  pFVar3 = FRigVMExtendedExecuteContext::FRigVMExtendedExecuteContext
                     (&local_298,
                      Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton);
  FRigVMExtendedExecuteContext::operator=((FRigVMExtendedExecuteContext *)&this->_padding_,pFVar3);
  FRigVMExtendedExecuteContext::~FRigVMExtendedExecuteContext(&local_298);
  pFVar4 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>
                     ((FRigVMExtendedExecuteContext *)&this->_padding_);
  FControlRigExecuteContext::operator=((FControlRigExecuteContext *)this->_padding_,pFVar4);
  pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Hierarchy);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14a4e48d7;
  }
  pUVar5 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_URigHierarchy_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_318,pUVar6);
  local_318._8_8_ = pUVar5;
  local_328[0] = (URigHierarchyController *)
                 StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_318);
  if (local_318._64_8_ != 0) {
    plVar7 = (longlong *)(local_318 + 0x50);
    if ((longlong *)local_318._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_318._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_328[0] != (URigHierarchyController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_328[0]);
  }
  FSoftObjectPtr::operator=(&(this->Hierarchy).SoftObjectPtr,(FObjectPtr)local_328);
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Hierarchy);
  if (this_00 == (URigHierarchy *)0x0) {
LAB_14a4e484a:
    this_00 = (URigHierarchy *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_14a4e484a;
  }
  local_328[0] = URigHierarchy::GetController(this_00,true);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_328[0] != (URigHierarchyController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_328[0]);
  }
  FSoftObjectPtr::operator=(&(this->Controller).SoftObjectPtr,(FObjectPtr)local_328);
  pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Hierarchy);
  if (pUVar5 == (UObject *)0x0) {
LAB_14a4e48b9:
    pUVar5 = (UObject *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14a4e48b9;
  }
  this_01 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar5->field_0xc);
  FUObjectItem::SetRootFlags(this_01,RootSet);
LAB_14a4e48d7:
  pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Hierarchy);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      *(UObject **)(this->_padding_ + 0x1c8) = pUVar5;
      return;
    }
  }
  *(undefined8 *)(this->_padding_ + 0x1c8) = 0;
  return;
}

// ~FControlRigUnitTestBase @ 14a517fd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FControlRigUnitTestBase::~FControlRigUnitTestBase(FControlRigUnitTestBase *this)

{
  int iVar1;
  void *pvVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FUObjectItem *this_00;
  
  this->_padding_ = (longlong)&___7FControlRigUnitTestBase__6B_;
  pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Hierarchy);
  if (pUVar3 == (UObject *)0x0) goto LAB_14a518078;
  pUVar4 = Z_Construct_UClass_URigHierarchy_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar4->_padding_)) goto LAB_14a518078;
  pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Hierarchy);
  if (pUVar3 == (UObject *)0x0) {
LAB_14a51805a:
    pUVar3 = (UObject *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14a51805a;
  }
  this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar3->field_0xc);
  FUObjectItem::ClearRootFlags(this_00,RootSet);
LAB_14a518078:
  pvVar2 = *(void **)&(this->Controller).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->Hierarchy).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7__FRigVMStructTestBase_UFControlRigExecuteContext____6B_;
  FControlRigExecuteContext::~FControlRigExecuteContext
            ((FControlRigExecuteContext *)&this->_padding_);
  FRigVMExtendedExecuteContext::~FRigVMExtendedExecuteContext
            ((FRigVMExtendedExecuteContext *)&this->_padding_);
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  return;
}

