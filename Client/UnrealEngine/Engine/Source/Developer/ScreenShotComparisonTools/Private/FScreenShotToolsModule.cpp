// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 3

// GetScreenShotManager @ 148c38880

TSharedPtr<IScreenShotManager,1> * __thiscall
FScreenShotToolsModule::GetScreenShotManager
          (FScreenShotToolsModule *this,TSharedPtr<IScreenShotManager,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->ScreenShotManager).Object;
  pTVar1 = (this->ScreenShotManager).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// ShutdownModule @ 148c388b0

void __thiscall FScreenShotToolsModule::ShutdownModule(FScreenShotToolsModule *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ScreenShotManager != (TSharedPtr<IScreenShotManager,1> *)&local_18) {
    (this->ScreenShotManager).Object = (IScreenShotManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ScreenShotManager).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// StartupModule @ 148c38900

void __thiscall FScreenShotToolsModule::StartupModule(FScreenShotToolsModule *this)

{
  FScreenShotManager *this_00;
  TRawPtrProxy<FScreenShotManager> local_res8 [4];
  
  if ((this->ScreenShotManager).Object == (IScreenShotManager *)0x0) {
    this_00 = ::operator_new(0x90);
    local_res8[0].Object = (FScreenShotManager *)0x0;
    if (this_00 != (FScreenShotManager *)0x0) {
      local_res8[0].Object = FScreenShotManager::FScreenShotManager(this_00);
    }
    TSharedPtr<IScreenShotManager,1>::operator=<FScreenShotManager>
              (&this->ScreenShotManager,local_res8);
  }
  return;
}

