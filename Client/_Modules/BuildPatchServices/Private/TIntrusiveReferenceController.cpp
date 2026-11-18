// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 19

// DestroyObject @ 1431d8e40

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,1>
                *this)

{
  TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
  ::
  ~TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
            ((TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1431d8e50

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_>,1>
           *this)

{
  FEvent *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  if ((this->ObjectStorage).Pad[0x68] != '\0') {
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x78));
  }
  pFVar1 = *(FEvent **)((this->ObjectStorage).Pad + 0x60);
  if (pFVar1 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(pFVar1);
    (this->ObjectStorage).Pad[0x60] = '\0';
    (this->ObjectStorage).Pad[0x61] = '\0';
    (this->ObjectStorage).Pad[0x62] = '\0';
    (this->ObjectStorage).Pad[99] = '\0';
    (this->ObjectStorage).Pad[100] = '\0';
    (this->ObjectStorage).Pad[0x65] = '\0';
    (this->ObjectStorage).Pad[0x66] = '\0';
    (this->ObjectStorage).Pad[0x67] = '\0';
  }
  if (*(longlong *)((this->ObjectStorage).Pad + 0x30) != 0) {
    puVar2 = *(uchar **)((this->ObjectStorage).Pad + 0x58);
    puVar3 = (this->ObjectStorage).Pad + 0x40;
    if (puVar2 != (uchar *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)(*(longlong *)puVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d8ea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1431d8ec0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<BuildPatchServices::FBuildPatchInstaller,1>::
DestroyObject(TIntrusiveReferenceController<BuildPatchServices::FBuildPatchInstaller,1> *this)

{
  BuildPatchServices::FBuildPatchInstaller::~FBuildPatchInstaller
            ((FBuildPatchInstaller *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14324a6d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>_>,1>
                *this)

{
  TFutureState<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>_>
  ::
  ~TFutureState<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>_>
            ((TFutureState<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14324a6e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_>,1>
                *this)

{
  TFutureState<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_>::
  ~TFutureState<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_>
            ((TFutureState<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14324a6f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<TTuple<FString,bool,FGuid>_>,1>::
DestroyObject(TIntrusiveReferenceController<TFutureState<TTuple<FString,bool,FGuid>_>,1> *this)

{
  TFutureState<TTuple<FString,bool,FGuid>_>::~TFutureState<TTuple<FString,bool,FGuid>_>
            ((TFutureState<TTuple<FString,bool,FGuid>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14324a700

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<BuildPatchServices::FDataFileResult>,1>::DestroyObject
          (TIntrusiveReferenceController<TFutureState<BuildPatchServices::FDataFileResult>,1> *this)

{
  FEvent *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  pFVar1 = *(FEvent **)((this->ObjectStorage).Pad + 0x60);
  if (pFVar1 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(pFVar1);
    (this->ObjectStorage).Pad[0x60] = '\0';
    (this->ObjectStorage).Pad[0x61] = '\0';
    (this->ObjectStorage).Pad[0x62] = '\0';
    (this->ObjectStorage).Pad[99] = '\0';
    (this->ObjectStorage).Pad[100] = '\0';
    (this->ObjectStorage).Pad[0x65] = '\0';
    (this->ObjectStorage).Pad[0x66] = '\0';
    (this->ObjectStorage).Pad[0x67] = '\0';
  }
  if (*(longlong *)((this->ObjectStorage).Pad + 0x30) != 0) {
    puVar2 = *(uchar **)((this->ObjectStorage).Pad + 0x58);
    puVar3 = (this->ObjectStorage).Pad + 0x40;
    if (puVar2 != (uchar *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)(*(longlong *)puVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014324a749. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14324a760

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<BuildPatchServices::FFileManifestList>,1>::DestroyObject
          (TIntrusiveReferenceController<TFutureState<BuildPatchServices::FFileManifestList>,1>
           *this)

{
  TFutureState<BuildPatchServices::FFileManifestList>::
  ~TFutureState<BuildPatchServices::FFileManifestList>
            ((TFutureState<BuildPatchServices::FFileManifestList> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14324a770

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<BuildPatchServices::FManifestResult>,1>::DestroyObject
          (TIntrusiveReferenceController<TFutureState<BuildPatchServices::FManifestResult>,1> *this)

{
  TFutureState<BuildPatchServices::FManifestResult>::
  ~TFutureState<BuildPatchServices::FManifestResult>
            ((TFutureState<BuildPatchServices::FManifestResult> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14324a780

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_>,1>
                *this)

{
  TFutureState<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_>::
  ~TFutureState<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_>
            ((TFutureState<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14324a790

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<TArray<FString,TSizedDefaultAllocator<32>_>_>,1>::
DestroyObject(TIntrusiveReferenceController<TFutureState<TArray<FString,TSizedDefaultAllocator<32>_>_>,1>
              *this)

{
  TFutureState<TArray<FString,TSizedDefaultAllocator<32>_>_>::
  ~TFutureState<TArray<FString,TSizedDefaultAllocator<32>_>_>
            ((TFutureState<TArray<FString,TSizedDefaultAllocator<32>_>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1432ce920

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,1>
                *this)

{
  TFutureState<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>::
  ~TFutureState<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
            ((TFutureState<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 1432ce930

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<TSharedPtr<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<TSharedPtr<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>,1>_>,1>
                *this)

{
  FEvent *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  if ((this->ObjectStorage).Pad[0x68] != '\0') {
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x78));
  }
  pFVar1 = *(FEvent **)((this->ObjectStorage).Pad + 0x60);
  if (pFVar1 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(pFVar1);
    (this->ObjectStorage).Pad[0x60] = '\0';
    (this->ObjectStorage).Pad[0x61] = '\0';
    (this->ObjectStorage).Pad[0x62] = '\0';
    (this->ObjectStorage).Pad[99] = '\0';
    (this->ObjectStorage).Pad[100] = '\0';
    (this->ObjectStorage).Pad[0x65] = '\0';
    (this->ObjectStorage).Pad[0x66] = '\0';
    (this->ObjectStorage).Pad[0x67] = '\0';
  }
  if (*(longlong *)((this->ObjectStorage).Pad + 0x30) != 0) {
    puVar2 = *(uchar **)((this->ObjectStorage).Pad + 0x58);
    puVar3 = (this->ObjectStorage).Pad + 0x40;
    if (puVar2 != (uchar *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)(*(longlong *)puVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432ce986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1432ce9a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TQueue<TTuple<FGuid,BuildPatchServices::FChunkUriResponse>,0>,1>::
DestroyObject(TIntrusiveReferenceController<TQueue<TTuple<FGuid,BuildPatchServices::FChunkUriResponse>,0>,1>
              *this)

{
  TQueue<TTuple<FGuid,BuildPatchServices::FChunkUriResponse>,0>::
  ~TQueue<TTuple<FGuid,BuildPatchServices::FChunkUriResponse>,0>
            ((TQueue<TTuple<FGuid,BuildPatchServices::FChunkUriResponse>,0> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1432ce9b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>,1>::
DestroyObject(TIntrusiveReferenceController<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>,1>
              *this)

{
  byte bVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  
  bVar1 = (this->ObjectStorage).Pad[0x10];
  if (2 < bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
    return;
  case 2:
    return;
  }
  pvVar2 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  if (pvVar2 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar2,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar2);
  }
  return;
}

// DestroyObject @ 1432cea10

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<BuildPatchServices::FBuildInstallerSharedContext,1>::DestroyObject
          (TIntrusiveReferenceController<BuildPatchServices::FBuildInstallerSharedContext,1> *this)

{
  BuildPatchServices::FBuildInstallerSharedContext::~FBuildInstallerSharedContext
            ((FBuildInstallerSharedContext *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1432cea20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<BuildPatchServices::FDownloadServiceImpl,1>::
DestroyObject(TIntrusiveReferenceController<BuildPatchServices::FDownloadServiceImpl,1> *this)

{
  BuildPatchServices::FDownloadServiceImpl::~FDownloadServiceImpl
            ((FDownloadServiceImpl *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1432cea30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<BuildPatchServices::FFileDownload,1>::
DestroyObject(TIntrusiveReferenceController<BuildPatchServices::FFileDownload,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7IDownload_BuildPatchServices__6B_;
  return;
}

// DestroyObject @ 1432cea60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<BuildPatchServices::FHttpDownload,1>::
DestroyObject(TIntrusiveReferenceController<BuildPatchServices::FHttpDownload,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
  *(undefined ***)(this->ObjectStorage).Pad = &___7IDownload_BuildPatchServices__6B_;
  return;
}

