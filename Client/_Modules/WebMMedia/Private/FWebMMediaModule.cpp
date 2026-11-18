// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMedia
// Functions: 3

// CreatePlayer @ 14f118d40

TSharedPtr<IMediaPlayer,1> * __thiscall
FWebMMediaModule::CreatePlayer
          (FWebMMediaModule *this,TSharedPtr<IMediaPlayer,1> *__return_storage_ptr__,
          IMediaEventSink *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FWebMMediaPlayer,1> *pTVar2;
  TSharedRef<FWebMMediaPlayer,1> local_18;
  
  pTVar2 = MakeShared<FWebMMediaPlayer,1,IMediaEventSink_&>(&local_18,param_1);
  __return_storage_ptr__->Object = (IMediaPlayer *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// StartupModule @ 14f118d90

void __thiscall FWebMMediaModule::StartupModule(FWebMMediaModule *this)

{
  return;
}

// ShutdownModule @ 14f118da0

void __thiscall FWebMMediaModule::ShutdownModule(FWebMMediaModule *this)

{
  return;
}

