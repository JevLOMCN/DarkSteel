// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 4

// StaticStruct @ 146ac30b0

UScriptStruct * __cdecl FGameplayTagSource::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagSource.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UScriptStruct_FGameplayTagSource.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagSource,(UObject *)pUVar1,
                         L"GameplayTagSource");
  }
  return Z_Registration_Info_UScriptStruct_FGameplayTagSource.OuterSingleton;
}

// GetConfigFileName @ 146ade120

FString * __thiscall
FGameplayTagSource::GetConfigFileName(FGameplayTagSource *this,FString *__return_storage_ptr__)

{
  UGameplayTagsList *pUVar1;
  
  pUVar1 = (this->SourceTagList).field0_0x0.DebugPtr;
  if ((pUVar1 == (UGameplayTagsList *)0x0) &&
     (pUVar1 = (UGameplayTagsList *)(this->SourceRestrictedTagList).field0_0x0.DebugPtr,
     pUVar1 == (UGameplayTagsList *)0x0)) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,&pUVar1->ConfigFileName);
  return __return_storage_ptr__;
}

// GetDefaultName @ 146ade2d0

FName __cdecl FGameplayTagSource::GetDefaultName(void)

{
  FName in_RCX;
  
  *(FName *)in_RCX = NAME_DefaultGameplayTagsIni;
  return in_RCX;
}

// GetNativeName @ 146ade810

FName __cdecl FGameplayTagSource::GetNativeName(void)

{
  FName in_RCX;
  
  *(FName *)in_RCX = NAME_Native;
  return in_RCX;
}

