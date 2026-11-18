// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147ba4700

UScriptStruct * __cdecl FSoftComponentReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSoftComponentReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSoftComponentReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSoftComponentReference,(UObject *)pUVar1,
                         L"SoftComponentReference");
  }
  return Z_Registration_Info_UScriptStruct_FSoftComponentReference.OuterSingleton;
}

// FSoftComponentReference @ 147bb9fd0

FSoftComponentReference * __thiscall
FSoftComponentReference::FSoftComponentReference(FSoftComponentReference *this)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this_00 = &(this->OtherActor).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->OtherActor).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->OtherActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->OtherActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->OtherActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->OtherActor).SoftObjectPtr,(FObjectPtr)&local_res8);
  return this;
}

// GetComponent @ 147bdf2a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorComponent * __thiscall
FSoftComponentReference::GetComponent(FSoftComponentReference *this,AActor *param_1)

{
  AActor *pAVar1;
  UActorComponent *pUVar2;
  
  pAVar1 = TSoftObjectPtr<AActor>::Get(&this->OtherActor);
  if (pAVar1 != (AActor *)0x0) {
    param_1 = TSoftObjectPtr<AActor>::Get(&this->OtherActor);
  }
  pUVar2 = FBaseComponentReference::ExtractComponent((FBaseComponentReference *)this,param_1);
  return pUVar2;
}

// SerializeFromMismatchedTag @ 147c004c0

bool __thiscall
FSoftComponentReference::SerializeFromMismatchedTag
          (FSoftComponentReference *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  bool bVar1;
  UPackage *pUVar2;
  int iVar3;
  UObject *local_res10;
  longlong local_38;
  wchar_t *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  FWeakObjectPtr local_18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ComponentReferenceContextName,"ComponentReference");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res10 = (UObject *)CONCAT44(local_res10._4_4_,(param_1->TypeName).Index);
  bVar1 = UE::FPropertyTypeName::IsStruct
                    ((FPropertyTypeName *)&local_res10,ComponentReferenceContextName);
  if (bVar1) {
    local_38 = 0;
    local_30 = (wchar_t *)0x0;
    local_28 = 0;
    uStack_20 = 0;
    local_18[0].ObjectIndex = 0;
    local_18[0].ObjectSerialNumber = 0;
    local_res10 = (UObject *)0x0;
    FWeakObjectPtr::operator=(local_18,(FObjectPtr)&local_res10);
    if (Z_Registration_Info_UScriptStruct_FComponentReference.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar2 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FComponentReference.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FComponentReference,(UObject *)pUVar2,
                           L"ComponentReference");
    }
    UScriptStruct::SerializeItem
              (Z_Registration_Info_UScriptStruct_FComponentReference.OuterSingleton,param_2,
               &local_38,(void *)0x0);
    bVar1 = FWeakObjectPtr::IsValid(local_18);
    if (bVar1) {
      local_res10 = FWeakObjectPtr::Get(local_18);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res10);
      }
      FSoftObjectPtr::operator=(&(this->OtherActor).SoftObjectPtr,(FObjectPtr)&local_res10);
      this->_padding_ = local_38;
      iVar3 = (int)local_28 + -1;
      if ((int)local_28 == 0) {
        iVar3 = 0;
      }
      ::FString::AssignRange((FString *)&this->_padding_,local_30,iVar3);
    }
    if (local_30 != (wchar_t *)0x0) {
      FMemory::Free(local_30);
    }
    return true;
  }
  return false;
}

