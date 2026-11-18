// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// FModuleInstanceHandle @ 14a21f780

FModuleInstanceHandle * __thiscall
FModuleInstanceHandle::FModuleInstanceHandle
          (FModuleInstanceHandle *this,UModularRig *param_1,FName *param_2)

{
  undefined1 *this_00;
  UModularRig *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UModularRig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this_00 = &(this->ModularRig).SoftObjectPtr.field_0x18;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ModularRig).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ModularRig).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ModularRig).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ModularRig).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UModularRig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)this,(FObjectPtr)&local_res8);
  this->ModuleName = *param_2;
  return this;
}

// FModuleInstanceHandle @ 14a21f820

FModuleInstanceHandle * __thiscall
FModuleInstanceHandle::FModuleInstanceHandle
          (FModuleInstanceHandle *this,UModularRig *param_1,FString *param_2)

{
  undefined1 *this_00;
  bool bVar1;
  FName *pFVar2;
  FName local_res8;
  FRigHierarchyModulePath local_48;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UModularRig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this_00 = &(this->ModularRig).SoftObjectPtr.field_0x18;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ModularRig).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ModularRig).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ModularRig).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ModularRig).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = (FName)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UModularRig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)this,(FObjectPtr)&local_res8);
  (this->ModuleName).ComparisonIndex = 0;
  (this->ModuleName).Number = 0;
  ::FString::FString(&local_48.ModulePath,param_2);
  local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
  local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
  local_48.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_48.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
  local_48._44_8_ = 0xffffffffffffffff;
  local_48.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
  local_48.CachedElementFName.field0_0x0.TypedValue.ComparisonIndex.Value = (FNameEntryId)0xffffffff
  ;
  local_48.CachedElementFName.field0_0x0.TypedValue.Number = 0;
  bVar1 = FRigHierarchyModulePath::IsValid(&local_48);
  if (bVar1) {
    pFVar2 = FRigHierarchyModulePath::GetElementFName(&local_48);
    this->ModuleName = *pFVar2;
  }
  else if (1 < (param_2->Data).ArrayNum) {
    ::FName::FName(&local_res8,(wchar_t *)(param_2->Data).AllocatorInstance.Data);
    this->ModuleName = local_res8;
  }
  if ((local_48.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_48.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_48.CachedElementNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
  }
  if ((local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
  }
  if (local_48.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ModulePath.Data.AllocatorInstance.Data);
  }
  return this;
}

// FModuleInstanceHandle @ 14a21f980

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FModuleInstanceHandle * __thiscall
FModuleInstanceHandle::FModuleInstanceHandle
          (FModuleInstanceHandle *this,UModularRig *param_1,FRigModuleInstance *param_2)

{
  undefined1 *this_00;
  UModularRig *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UModularRig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this_00 = &(this->ModularRig).SoftObjectPtr.field_0x18;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ModularRig).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ModularRig).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ModularRig).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ModularRig).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UModularRig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)this,(FObjectPtr)&local_res8);
  this->ModuleName = param_2->Name;
  return this;
}

// Get @ 14a25da30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigModuleInstance * __thiscall FModuleInstanceHandle::Get(FModuleInstanceHandle *this)

{
  int iVar1;
  UModularRig *this_00;
  UClass *pUVar2;
  FRigModuleInstance *pFVar3;
  
  this_00 = (UModularRig *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this);
  if (this_00 != (UModularRig *)0x0) {
    pUVar2 = UModularRig::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      pFVar3 = UModularRig::FindModule(this_00,&this->ModuleName);
      return pFVar3;
    }
  }
  return (FRigModuleInstance *)0x0;
}

