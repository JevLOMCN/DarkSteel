// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 2

// GetArrayType @ 14e951fc0

FName __cdecl FDataflowArrayTypePolicy::GetArrayType(FName param_1)

{
  FString *pFVar1;
  FName *pFVar2;
  int iVar3;
  FName local_res8;
  FName local_res10;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  FStringFormatArg local_28;
  
  pFVar1 = ::FName::ToString(&local_res10,&local_38);
  FStringFormatArg::FStringFormatArg(&local_28,pFVar1);
  local_58.ArrayNum = 1;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_58.AllocatorInstance,1,&local_58.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_58.AllocatorInstance.Data,&local_28,1)
  ;
  ::FString::FormatImpl(&local_48,L"TArray<{0}>",&local_58);
  iVar3 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  pFVar2 = ::FName::FName(&local_res8,iVar3,(wchar_t *)local_48.Data.AllocatorInstance.Data,
                          FNAME_Add);
  *(FName *)param_1 = *pFVar2;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if ((FStringFormatArg *)local_58.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  return param_1;
}

// SupportsType @ 14e95cbc0

bool __thiscall FDataflowArrayTypePolicy::SupportsType(FDataflowArrayTypePolicy *this,FName param_1)

{
  bool bVar1;
  FString *this_00;
  size_t sVar2;
  FName local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  this_00 = ::FName::ToString(local_res10,&local_18);
  sVar2 = wcslen(L"TArray<");
  bVar1 = ::FString::StartsWith(this_00,L"TArray<",(int)sVar2,IgnoreCase);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

