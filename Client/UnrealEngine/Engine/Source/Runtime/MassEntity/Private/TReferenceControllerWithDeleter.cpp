// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 6

// DestroyObject @ 147212430

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::Mass::ObserverManager::FCreationContext,SharedPointerInternals::DefaultDeleter<UE::Mass::ObserverManager::FCreationContext>,1>
::DestroyObject(TReferenceControllerWithDeleter<UE::Mass::ObserverManager::FCreationContext,SharedPointerInternals::DefaultDeleter<UE::Mass::ObserverManager::FCreationContext>,1>
                *this)

{
  FCreationContext *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FCreationContext *)0x0) {
    UE::Mass::ObserverManager::FCreationContext::~FCreationContext(this_00);
    ::operator_delete(this_00,0x18);
    return;
  }
  return;
}

// DestroyObject @ 147212470

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMassArchetypeData,SharedPointerInternals::DefaultDeleter<FMassArchetypeData>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMassArchetypeData,SharedPointerInternals::DefaultDeleter<FMassArchetypeData>,1>
                *this)

{
  if (this->Object != (FMassArchetypeData *)0x0) {
    FMassArchetypeData::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 147212490

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMassCommandBuffer,SharedPointerInternals::DefaultDeleter<FMassCommandBuffer>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMassCommandBuffer,SharedPointerInternals::DefaultDeleter<FMassCommandBuffer>,1>
                *this)

{
  FMassCommandBuffer *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FMassCommandBuffer *)0x0) {
    FMassCommandBuffer::~FMassCommandBuffer(this_00);
    ::operator_delete(this_00,0x60);
    return;
  }
  return;
}

// DestroyObject @ 1472124d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::Mass::ObserverManager::FObserverLock,SharedPointerInternals::DefaultDeleter<UE::Mass::ObserverManager::FObserverLock>,1>
::DestroyObject(TReferenceControllerWithDeleter<UE::Mass::ObserverManager::FObserverLock,SharedPointerInternals::DefaultDeleter<UE::Mass::ObserverManager::FObserverLock>,1>
                *this)

{
  if (this->Object != (FObserverLock *)0x0) {
    UE::Mass::ObserverManager::FObserverLock::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 1472124f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRWAccessDetector,SharedPointerInternals::DefaultDeleter<FRWAccessDetector>,1>
::DestroyObject(TReferenceControllerWithDeleter<FRWAccessDetector,SharedPointerInternals::DefaultDeleter<FRWAccessDetector>,1>
                *this)

{
  atomic<unsigned_int> *paVar1;
  code *pcVar2;
  bool bVar3;
  
  paVar1 = &this->Object->AtomicValue;
  if (paVar1 == (atomic<unsigned_int> *)0x0) {
    return;
  }
  if (*paVar1 != (atomic<unsigned_int>)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicValue.load(std::memory_order_relaxed) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x3a,L"Detector cannot be destroyed while other threads access it");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ::operator_delete(paVar1,4);
  return;
}

// DestroyObject @ 147212550

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::Mass::FTypeManager,SharedPointerInternals::DefaultDeleter<UE::Mass::FTypeManager>,1>
::DestroyObject(TReferenceControllerWithDeleter<UE::Mass::FTypeManager,SharedPointerInternals::DefaultDeleter<UE::Mass::FTypeManager>,1>
                *this)

{
  if (this->Object != (FTypeManager *)0x0) {
    UE::Mass::FTypeManager::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

