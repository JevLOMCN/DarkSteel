// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ToString @ 147580700

FString * __thiscall
FMarkerTickContext::ToString(FMarkerTickContext *this,FString *__return_storage_ptr__)

{
  FName *pFVar1;
  int iVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  FString *__return_storage_ptr___00;
  FName *this_00;
  int iVar4;
  undefined1 local_res8 [8];
  FString *local_res10;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [2];
  
  pTVar3 = this->ValidMarkers;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  this_00 = (FName *)(pTVar3->AllocatorInstance).Data;
  iVar2 = pTVar3->ArrayNum;
  pFVar1 = this_00 + iVar2;
  local_res10 = __return_storage_ptr__;
  while( true ) {
    if (pTVar3->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar1) break;
    ::FName::ToString(this_00,&local_78);
    ::FString::PrintfImpl(&local_88,L"%s,");
    iVar4 = local_88.Data.ArrayNum + -1;
    if (local_88.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(&local_98,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar4);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    this_00 = this_00 + 1;
  }
  ::FName::ToString(&(this->MarkerSyncEndPostion).NextMarkerName,local_58);
  ::FName::ToString(&(this->MarkerSyncEndPostion).PreviousMarkerName,&local_68);
  ::FString::PrintfImpl(&local_78,L"[PreviousMarker %s, NextMarker %s] : %0.2f ");
  __return_storage_ptr___00 = local_res10;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  ::FName::ToString(&(this->MarkerSyncStartPostion).NextMarkerName,&local_68);
  ::FName::ToString(&(this->MarkerSyncStartPostion).PreviousMarkerName,local_58);
  ::FString::PrintfImpl(&local_88,L"[PreviousMarker %s, NextMarker %s] : %0.2f ");
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl
            (__return_storage_ptr___00,
             L" - Sync Start Position : %s\n - Sync End Position : %s\n - Markers : %s");
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr___00;
}

