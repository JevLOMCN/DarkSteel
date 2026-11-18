// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// DoWork @ 148833fe0

void __thiscall FTextureStreamIn::FAbortPollMipsTask::DoWork(FAbortPollMipsTask *this)

{
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar1;
  int iVar2;
  FTextureStreamIn *pFVar3;
  code *pcVar4;
  bool bVar5;
  ETaskState EVar6;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar7;
  undefined1 local_res8 [8];
  
  if ((this->PendingUpdate).Reference == (FTextureStreamIn *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                       ,0x269,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar6 = FRenderAssetUpdate::DoLock((FRenderAssetUpdate *)(this->PendingUpdate).Reference);
  pFVar3 = (this->PendingUpdate).Reference;
  FVar7 = (pFVar3->MipDataProviders).AllocatorInstance.SecondaryData;
  iVar2 = (pFVar3->MipDataProviders).ArrayNum;
  if (FVar7 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                )0x0) {
    FVar7 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
             )&pFVar3->MipDataProviders;
  }
  FVar1 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
           )((longlong)FVar7 + (longlong)iVar2 * 8);
  while( true ) {
    if ((pFVar3->MipDataProviders).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar7 == FVar1) break;
    if (*(longlong *)FVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MipDataProvider",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                         ,0x270,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (this->bIsPollingMipData == false) {
      if (this->bIsPostprocessingGPUMipData != false) {
        (**(code **)(**(longlong **)FVar7 + 0x38))();
      }
      FVar7 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
               )((longlong)FVar7 + 8);
    }
    else {
      (**(code **)(**(longlong **)FVar7 + 0x30))();
      FVar7 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
               )((longlong)FVar7 + 8);
    }
  }
  FRenderAssetUpdate::DoUnlock((FRenderAssetUpdate *)(this->PendingUpdate).Reference,EVar6);
  return;
}

