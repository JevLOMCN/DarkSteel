// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 3

// FMassArchetypeVersionedHandle @ 1471d75e0

FMassArchetypeVersionedHandle * __thiscall
FMassArchetypeVersionedHandle::FMassArchetypeVersionedHandle
          (FMassArchetypeVersionedHandle *this,FMassArchetypeHandle *param_1)

{
  FMassArchetypeData *pFVar1;
  
  (this->ArchetypeHandle).DataPtr.Object = (param_1->DataPtr).Object;
  (this->ArchetypeHandle).DataPtr.SharedReferenceCount.ReferenceController =
       (param_1->DataPtr).SharedReferenceCount.ReferenceController;
  (param_1->DataPtr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->DataPtr).Object = (FMassArchetypeData *)0x0;
  pFVar1 = (this->ArchetypeHandle).DataPtr.Object;
  if (pFVar1 != (FMassArchetypeData *)0x0) {
    this->HandleVersion = pFVar1->EntityOrderVersion;
    return this;
  }
  this->HandleVersion = 0;
  return this;
}

// FMassArchetypeVersionedHandle @ 1471d7620

FMassArchetypeVersionedHandle * __thiscall
FMassArchetypeVersionedHandle::FMassArchetypeVersionedHandle
          (FMassArchetypeVersionedHandle *this,FMassArchetypeHandle *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FMassArchetypeData *pFVar2;
  
  (this->ArchetypeHandle).DataPtr.Object = (param_1->DataPtr).Object;
  pTVar1 = (param_1->DataPtr).SharedReferenceCount.ReferenceController;
  (this->ArchetypeHandle).DataPtr.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar2 = (this->ArchetypeHandle).DataPtr.Object;
  if (pFVar2 != (FMassArchetypeData *)0x0) {
    this->HandleVersion = pFVar2->EntityOrderVersion;
    return this;
  }
  this->HandleVersion = 0;
  return this;
}

// IsUpToDate @ 147233990

bool __thiscall FMassArchetypeVersionedHandle::IsUpToDate(FMassArchetypeVersionedHandle *this)

{
  FMassArchetypeData *pFVar1;
  
  pFVar1 = (this->ArchetypeHandle).DataPtr.Object;
  if ((pFVar1 != (FMassArchetypeData *)0x0) && (pFVar1->EntityOrderVersion == this->HandleVersion))
  {
    return true;
  }
  return false;
}

