// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsMoviePlayer
// Functions: 3

// StartupModule @ 14f127660

void __thiscall FWindowsMoviePlayerModule::StartupModule(FWindowsMoviePlayerModule *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  HRESULT HVar4;
  FMediaFoundationMovieStreamer *pFVar5;
  FMediaFoundationMovieStreamer *pFVar6;
  FMediaFoundationMovieStreamer *pFVar7;
  TRawPtrProxy<FMovieViewport> local_res10;
  TRawPtrProxy<FMediaFoundationMovieStreamer> local_res18 [2];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  TSharedPtr<IMovieStreamer,1> local_28;
  
  ::FString::FString(&local_68,L"shlwapi.dll");
  bVar2 = LoadMediaLibrary(this,&local_68);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,L"mf.dll");
  bVar3 = LoadMediaLibrary(this,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar7 = (FMediaFoundationMovieStreamer *)0x0;
  if (!bVar3) {
    bVar2 = false;
  }
  ::FString::FString(&local_48,L"mfplat.dll");
  bVar3 = LoadMediaLibrary(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    bVar2 = false;
  }
  ::FString::FString(&local_38,L"mfplay.dll");
  bVar3 = LoadMediaLibrary(this,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (bVar2 != false)) {
    HVar4 = MFStartup(0x20070,0);
    if ((HVar4 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(((HRESULT)(Hr)) >= 0)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WindowsMoviePlayer\\Source\\WindowsMoviePlayer\\Private\\WindowsMoviePlayer.cpp"
                           ,0x2d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar5 = ::operator_new(0xa0);
    if (pFVar5 != (FMediaFoundationMovieStreamer *)0x0) {
      *(longlong *)&pFVar5->OnCurrentMovieClipFinishedDelegate = 0;
      pFVar5->_padding_ = (longlong)&___7FMediaFoundationMovieStreamer__6B_;
      *(longlong *)&(pFVar5->OnCurrentMovieClipFinishedDelegate).field_0x8 = 0;
      ((TWeakPtr<FSlateTexture2DRHIRef,1> *)&(pFVar5->OnCurrentMovieClipFinishedDelegate).field_0x10
      )->Object = (FSlateTexture2DRHIRef *)0x0;
      ((FWeakReferencer<1> *)&(pFVar5->OnCurrentMovieClipFinishedDelegate).field_0x18)->
      ReferenceController = (TReferenceControllerBase<1> *)&DAT_00000002;
      *(TIntPoint<int>_u_0 *)&(pFVar5->StoredMoviePaths).AllocatorInstance = (TIntPoint<int>_u_0)0x0
      ;
      (pFVar5->StoredMoviePaths).ArrayNum = 0;
      (pFVar5->StoredMoviePaths).ArrayMax = 0;
      (pFVar5->TextureData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar5->TextureData).ArrayNum = 0;
      (pFVar5->TextureData).ArrayMax = 0;
      (pFVar5->MovieViewport).Object = (FMovieViewport *)0x0;
      (pFVar5->MovieViewport).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar5->Texture).Object = (FSlateTexture2DRHIRef *)0x0;
      (pFVar5->Texture).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar5->TextureFreeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar5->TextureFreeList).ArrayNum = 0;
      (pFVar5->TextureFreeList).ArrayMax = 0;
      (pFVar5->InputTarget).Reference = (FRHITexture *)0x0;
      pFVar5->VideoPlayer = (FVideoPlayer *)0x0;
      pFVar5->SampleGrabberCallback = (FSampleGrabberCallback *)0x0;
      pFVar5->bUseSound = true;
      pFVar6 = ::operator_new(0x30);
      if (pFVar6 != (FMediaFoundationMovieStreamer *)0x0) {
        *(longlong *)&pFVar6->OnCurrentMovieClipFinishedDelegate = 0;
        pFVar6->_padding_ = (longlong)&___7FMovieViewport__6B_;
        *(longlong *)&(pFVar6->OnCurrentMovieClipFinishedDelegate).field_0x8 = 0;
        ((TWeakPtr<FSlateTexture2DRHIRef,1> *)
        &(pFVar6->OnCurrentMovieClipFinishedDelegate).field_0x10)->Object =
             (FSlateTexture2DRHIRef *)0x0;
        ((FWeakReferencer<1> *)&(pFVar6->OnCurrentMovieClipFinishedDelegate).field_0x18)->
        ReferenceController = (TReferenceControllerBase<1> *)0x0;
        *(TIntPoint<int>_u_0 *)&(pFVar6->StoredMoviePaths).AllocatorInstance =
             (TIntPoint<int>_u_0)0x0;
        pFVar7 = pFVar6;
      }
      local_res10.Object = (FMovieViewport *)pFVar7;
      TSharedPtr<FMovieViewport,1>::operator=<FMovieViewport>(&pFVar5->MovieViewport,&local_res10);
      (pFVar5->PlaybackType).Value = '\0';
      pFVar7 = pFVar5;
    }
    local_res18[0].Object = pFVar7;
    TSharedPtr<FMediaFoundationMovieStreamer,1>::operator=<FMediaFoundationMovieStreamer>
              (&MovieStreamer,local_res18);
    local_28.Object = (IMovieStreamer *)MovieStreamer.Object;
    local_28.SharedReferenceCount.ReferenceController =
         MovieStreamer.SharedReferenceCount.ReferenceController;
    if (MovieStreamer.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
       ) {
      LOCK();
      (MovieStreamer.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(MovieStreamer.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
      ;
      UNLOCK();
    }
    TMulticastDelegate<void___cdecl(TSharedPtr<IMovieStreamer,1>),FDefaultDelegateUserPolicy>::
    Broadcast(&FCoreDelegates::RegisterMovieStreamerDelegate,&local_28);
  }
  return;
}

// ShutdownModule @ 14f1278c0

void __thiscall FWindowsMoviePlayerModule::ShutdownModule(FWindowsMoviePlayerModule *this)

{
  TSharedPtr<IMovieStreamer,1> local_18;
  
  if (MovieStreamer.Object != (FMediaFoundationMovieStreamer *)0x0) {
    local_18.Object = (IMovieStreamer *)MovieStreamer.Object;
    local_18.SharedReferenceCount.ReferenceController =
         MovieStreamer.SharedReferenceCount.ReferenceController;
    if (MovieStreamer.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
       ) {
      LOCK();
      (MovieStreamer.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(MovieStreamer.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
      ;
      UNLOCK();
    }
    TMulticastDelegate<void___cdecl(TSharedPtr<IMovieStreamer,1>),FDefaultDelegateUserPolicy>::
    Broadcast(&FCoreDelegates::UnRegisterMovieStreamerDelegate,&local_18);
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    MovieStreamer.Object = (FMediaFoundationMovieStreamer *)0x0;
    local_18.Object = (IMovieStreamer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&MovieStreamer.SharedReferenceCount,&local_18.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    MFShutdown();
    return;
  }
  return;
}

// LoadMediaLibrary @ 14f12afd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWindowsMoviePlayerModule::LoadMediaLibrary(FWindowsMoviePlayerModule *this,FString *param_1)

{
  DWORD DVar1;
  HMODULE pHVar2;
  wchar_t *lpLibFileName;
  
  if ((param_1->Data).ArrayNum == 0) {
    lpLibFileName = L"";
  }
  else {
    lpLibFileName = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pHVar2 = LoadLibraryW(lpLibFileName);
  if (pHVar2 == (HMODULE)0x0) {
    DVar1 = GetLastError();
    if (DVar1 == 0x7e) {
      if (4 < (byte)LogWindowsMoviePlayer._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`private:_bool___cdecl_FWindowsMoviePlayerModule::LoadMediaLibrary(FString_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogWindowsMoviePlayer);
        return false;
      }
    }
    else if (2 < (byte)LogWindowsMoviePlayer._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`private:_bool___cdecl_FWindowsMoviePlayerModule::LoadMediaLibrary(FString_const&___ptr64)___ptr64'
                  ::__l29::LOG_Static,(FLogCategoryBase *)&LogWindowsMoviePlayer);
    }
    return false;
  }
  return true;
}

