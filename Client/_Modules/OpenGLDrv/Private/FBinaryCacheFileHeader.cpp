// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// ToString @ 145c32100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UE::OpenGL::FBinaryCacheFileHeader::ToString
          (FBinaryCacheFileHeader *this,FString *__return_storage_ptr__)

{
  ForAnyElementType FVar1;
  undefined1 auStackY_108 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  FStringFormatArg local_a8;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  FStringFormatArg::FStringFormatArg(&local_a8,this->Version);
  FStringFormatArg::FStringFormatArg(&local_88,(uint)this->bCacheUsesCompressedBinaries);
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  FGuid::AppendString(&this->BinaryCacheGuid,&local_b8,Digits);
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar1.Data = local_b8.Data.AllocatorInstance.Data;
  }
  FStringFormatArg::FStringFormatArg(&local_68,(wchar_t *)FVar1.Data);
  FStringFormatArg::FStringFormatArg(&local_48,this->ProgramCount);
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 4;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,4,0,&local_c8.AllocatorInstance,4,&local_c8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_c8.AllocatorInstance.Data,&local_a8,4)
  ;
  ::FString::FormatImpl(__return_storage_ptr__,L"{0}, {1}, {2}, {3}",&local_c8);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if ((FStringFormatArg *)local_c8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

