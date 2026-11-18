// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 4

// StaticStruct @ 14ad75910

UScriptStruct * __cdecl FMetasoundFrontendVersion::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendVersion.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendVersion.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendVersion,(UObject *)pUVar1,
                         L"MetasoundFrontendVersion");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendVersion.OuterSingleton;
}

// GetInvalid @ 14adbfba0

FMetasoundFrontendVersion * __cdecl FMetasoundFrontendVersion::GetInvalid(void)

{
  return &InvalidVersion;
}

// IsValid @ 14adc7ef0

bool __thiscall FMetasoundFrontendVersion::IsValid(FMetasoundFrontendVersion *this)

{
  if ((((this->Number).Major != InvalidVersion.Number.Major) ||
      ((this->Number).Minor != InvalidVersion.Number.Minor)) && (this->Name != InvalidVersion.Name))
  {
    return true;
  }
  return false;
}

// ToString @ 14add1e90

FString * __thiscall
FMetasoundFrontendVersion::ToString(FMetasoundFrontendVersion *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  pFVar1 = ::FName::ToString(&this->Name,&local_68);
  FStringFormatArg::FStringFormatArg(&local_48,pFVar1);
  pFVar1 = FMetasoundFrontendVersionNumber::ToString(&this->Number,&local_58);
  FStringFormatArg::FStringFormatArg(&local_28,pFVar1);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_78.AllocatorInstance,2,&local_78.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_78.AllocatorInstance.Data,&local_48,2)
  ;
  ::FString::FormatImpl(__return_storage_ptr__,L"{0} {1}",&local_78);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FStringFormatArg *)local_78.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

