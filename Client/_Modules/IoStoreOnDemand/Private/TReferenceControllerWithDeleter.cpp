// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 4

// DestroyObject @ 1445c8230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::IoStore::FHttpIoDispatcherBackend,SharedPointerInternals::DefaultDeleter<UE::IoStore::FHttpIoDispatcherBackend>,1>
::DestroyObject(TReferenceControllerWithDeleter<UE::IoStore::FHttpIoDispatcherBackend,SharedPointerInternals::DefaultDeleter<UE::IoStore::FHttpIoDispatcherBackend>,1>
                *this)

{
  FHttpIoDispatcherBackend *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FHttpIoDispatcherBackend *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445c8241. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x60))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1445c8250

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IAsyncReadFileHandle,`UE::IoStore::FCas::OpenAsyncRead'::__l11::<lambda_1>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  UE::IoStore::FCas::OnFileHandleDeleted
            (*(FCas **)((longlong)this + 0x10),(FCasBlockId)*(uint *)((longlong)this + 0x18));
  return;
}

// DestroyObject @ 1445c8290

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IFileHandle,`UE::IoStore::FCas::OpenRead'::__l5::<lambda_1>,1>::
DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  UE::IoStore::FCas::OnFileHandleDeleted
            (*(FCas **)((longlong)this + 0x10),(FCasBlockId)*(uint *)((longlong)this + 0x18));
  return;
}

// DestroyObject @ 1445c82d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::IoStore::IOnDemandIoDispatcherBackend,SharedPointerInternals::DefaultDeleter<UE::IoStore::IOnDemandIoDispatcherBackend>,1>
::DestroyObject(TReferenceControllerWithDeleter<UE::IoStore::IOnDemandIoDispatcherBackend,SharedPointerInternals::DefaultDeleter<UE::IoStore::IOnDemandIoDispatcherBackend>,1>
                *this)

{
  IOnDemandIoDispatcherBackend *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (IOnDemandIoDispatcherBackend *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445c82e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x60))(pIVar1,1);
    return;
  }
  return;
}

