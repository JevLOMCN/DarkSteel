// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 3

// StaticStruct @ 146eaff60

UScriptStruct * __cdecl FValueOrBlackboardKeyBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FValueOrBlackboardKeyBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FValueOrBlackboardKeyBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase,(UObject *)pUVar1,
                         L"ValueOrBlackboardKeyBase");
  }
  return Z_Registration_Info_UScriptStruct_FValueOrBlackboardKeyBase.OuterSingleton;
}

// GetKeyId @ 146ee5c40

FKey __thiscall
FValueOrBlackboardKeyBase::GetKeyId(FValueOrBlackboardKeyBase *this,UBehaviorTreeComponent *param_1)

{
  UBlackboardData *this_00;
  FKey FVar1;
  ushort uVar2;
  longlong in_R8;
  FName local_res8;
  
  uVar2 = (this->KeyId).Key;
  FVar1.Key = (ushort)param_1;
  if (uVar2 != 0xffff) {
    *(ushort *)&param_1->_padding_ = uVar2;
    return (FKey)FVar1.Key;
  }
  if (*(longlong *)(in_R8 + 200) != 0) {
    this_00 = *(UBlackboardData **)(*(longlong *)(in_R8 + 200) + 0xd0);
    uVar2 = 0xffff;
    if (this_00 != (UBlackboardData *)0x0) {
      UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)this);
      uVar2 = (ushort)local_res8.ComparisonIndex.Value;
    }
    (this->KeyId).Key = uVar2;
    *(ushort *)&param_1->_padding_ = uVar2;
    return (FKey)FVar1.Key;
  }
  *(undefined2 *)&param_1->_padding_ = 0xffff;
  return (FKey)FVar1.Key;
}

// ToStringKeyName @ 146f02b70

FString * __thiscall
FValueOrBlackboardKeyBase::ToStringKeyName
          (FValueOrBlackboardKeyBase *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FStringFormatArg local_28;
  
  pFVar1 = ::FName::ToString(&this->Key,&local_38);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  FStringFormatArg::FStringFormatArg(&local_28,pwVar2);
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_48.AllocatorInstance.Data,&local_28,1)
  ;
  ::FString::FormatImpl(__return_storage_ptr__,L"Key: {0}",&local_48);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FStringFormatArg *)local_48.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

