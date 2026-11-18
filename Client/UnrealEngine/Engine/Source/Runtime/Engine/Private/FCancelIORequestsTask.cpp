// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// DoWork @ 14734bc50

void __thiscall FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::DoWork(FCancelIORequestsTask *this)

{
  FSkeletalMeshStreamIn_IO *pFVar1;
  FBulkDataBatchRequest FVar2;
  code *pcVar3;
  bool bVar4;
  ETaskState EVar5;
  int iVar6;
  
  if ((this->PendingUpdate).Reference == (FSkeletalMeshStreamIn_IO *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                       ,0x19f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar5 = FRenderAssetUpdate::DoLock((FRenderAssetUpdate *)(this->PendingUpdate).Reference);
  pFVar1 = (this->PendingUpdate).Reference;
  FVar2 = pFVar1->BulkDataRequest;
  if (FVar2 != (FBulkDataBatchRequest)0x0) {
    iVar6 = (**(code **)(*(longlong *)FVar2 + 0x20))();
    if ((iVar6 == 1) && (FVar2 = pFVar1->BulkDataRequest, FVar2 != (FBulkDataBatchRequest)0x0)) {
      (**(code **)(*(longlong *)FVar2 + 0x28))();
    }
  }
  FRenderAssetUpdate::DoUnlock((FRenderAssetUpdate *)(this->PendingUpdate).Reference,EVar5);
  return;
}

// DoWork @ 148794e40

void __thiscall FStaticMeshStreamIn_IO::FCancelIORequestsTask::DoWork(FCancelIORequestsTask *this)

{
  undefined4 uVar1;
  FStaticMeshStreamIn_IO *pFVar2;
  FBulkDataBatchRequest FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if ((this->PendingUpdate).Reference == (FStaticMeshStreamIn_IO *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                       ,399,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = (this->PendingUpdate).Reference;
  EnterCriticalSection((LPCRITICAL_SECTION)&pFVar2->field_0x18);
  uVar1 = *(undefined4 *)&pFVar2->field_0x60;
  *(undefined4 *)&pFVar2->field_0x60 = 3;
  pFVar2 = (this->PendingUpdate).Reference;
  FVar3 = pFVar2->BulkDataRequest;
  if (FVar3 != (FBulkDataBatchRequest)0x0) {
    iVar6 = (**(code **)(*(longlong *)FVar3 + 0x20))();
    if ((iVar6 == 1) && (FVar3 = pFVar2->BulkDataRequest, FVar3 != (FBulkDataBatchRequest)0x0)) {
      (**(code **)(*(longlong *)FVar3 + 0x28))();
    }
  }
  pFVar2 = (this->PendingUpdate).Reference;
  *(undefined4 *)&pFVar2->field_0x60 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000148794eda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar2->field_0x18);
  return;
}

// DoWork @ 1488340f0

void __thiscall FTexture2DStreamIn_IO::FCancelIORequestsTask::DoWork(FCancelIORequestsTask *this)

{
  FTexture2DStreamIn_IO *pFVar1;
  FBulkDataBatchRequest FVar2;
  code *pcVar3;
  bool bVar4;
  ETaskState EVar5;
  int iVar6;
  
  if ((this->PendingUpdate).Reference == (FTexture2DStreamIn_IO *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn_IO.cpp"
                       ,0xd9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar5 = FRenderAssetUpdate::DoLock((FRenderAssetUpdate *)(this->PendingUpdate).Reference);
  pFVar1 = (this->PendingUpdate).Reference;
  FVar2 = pFVar1->BatchRequest;
  if (FVar2 != (FBulkDataBatchRequest)0x0) {
    iVar6 = (**(code **)(*(longlong *)FVar2 + 0x20))();
    if ((iVar6 == 1) && (FVar2 = pFVar1->BatchRequest, FVar2 != (FBulkDataBatchRequest)0x0)) {
      (**(code **)(*(longlong *)FVar2 + 0x28))();
    }
  }
  FRenderAssetUpdate::DoUnlock((FRenderAssetUpdate *)(this->PendingUpdate).Reference,EVar5);
  return;
}

