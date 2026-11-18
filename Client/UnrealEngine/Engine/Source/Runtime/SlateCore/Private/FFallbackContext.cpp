// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// ToString @ 1424a85e0

FString * __thiscall
FLegacySlateFontInfoCache::FFallbackContext::ToString
          (FFallbackContext *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FFontData *this_00;
  UObjectBaseUtility *this_01;
  FScriptContainerElement *_Src;
  bool bVar2;
  bool bVar3;
  FString *pFVar4;
  int iVar5;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  this_00 = this->FontData;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  if (this_00 == (FFontData *)0x0) {
    ::FString::operator=(&local_48,L"<unknown>");
  }
  else {
    this_01 = (UObjectBaseUtility *)(this_00->FontFaceAsset).field0_0x0.DebugPtr;
    if (this_01 == (UObjectBaseUtility *)0x0) {
      pFVar4 = FFontData::GetFontFilename(this_00);
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      bVar3 = false;
      bVar2 = true;
      iVar1 = (pFVar4->Data).ArrayNum;
      _Src = (pFVar4->Data).AllocatorInstance.Data;
      local_58.Data.ArrayNum = iVar1;
      if (iVar1 == 0) {
        local_58.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,(ForAnyElementType *)&local_58,iVar1,&local_58.Data.ArrayMax);
        memcpy(local_58.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
      }
      pFVar4 = &local_58;
    }
    else {
      pFVar4 = UObjectBaseUtility::GetPathName(this_01,&local_38,(UObject *)0x0);
      bVar3 = true;
      bVar2 = false;
    }
    iVar1 = (pFVar4->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    ::FString::AssignRange(&local_48,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar5);
    if ((bVar2) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  if (this->Codepoint == L'\0') {
    ::FString::operator=(&local_68,L"<unknown>");
  }
  else {
    ::FString::PrintfImpl(&local_58,L"%c (U+%04x)");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    local_68.Data.ArrayMax = local_58.Data.ArrayMax;
    local_68.Data.ArrayNum = local_58.Data.ArrayNum;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"Font: \'%s\', Character: \'%s\'");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

