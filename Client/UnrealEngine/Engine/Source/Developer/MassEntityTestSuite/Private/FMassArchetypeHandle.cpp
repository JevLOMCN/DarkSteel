// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 6

// FMassArchetypeHandle @ 1470f4700

FMassArchetypeHandle * __thiscall
FMassArchetypeHandle::FMassArchetypeHandle(FMassArchetypeHandle *this,FMassArchetypeHandle *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->DataPtr).Object = (param_1->DataPtr).Object;
  pTVar1 = (param_1->DataPtr).SharedReferenceCount.ReferenceController;
  (this->DataPtr).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// FMassArchetypeHandle @ 1470f4730

FMassArchetypeHandle * __thiscall
FMassArchetypeHandle::FMassArchetypeHandle(FMassArchetypeHandle *this)

{
  (this->DataPtr).Object = (FMassArchetypeData *)0x0;
  (this->DataPtr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FMassArchetypeHandle @ 1470f8390

void __thiscall FMassArchetypeHandle::~FMassArchetypeHandle(FMassArchetypeHandle *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DataPtr).SharedReferenceCount.ReferenceController);
  return;
}

// operator= @ 1470f94b0

FMassArchetypeHandle * __thiscall
FMassArchetypeHandle::operator=(FMassArchetypeHandle *this,FMassArchetypeHandle *param_1)

{
  if (this != param_1) {
    (this->DataPtr).Object = (param_1->DataPtr).Object;
    (param_1->DataPtr).Object = (FMassArchetypeData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DataPtr).SharedReferenceCount,&(param_1->DataPtr).SharedReferenceCount);
  }
  return this;
}

// operator== @ 1470f94f0

bool __thiscall
FMassArchetypeHandle::operator==(FMassArchetypeHandle *this,FMassArchetypeHandle *param_1)

{
  return (this->DataPtr).Object == (param_1->DataPtr).Object;
}

// IsValid @ 1471929b0

bool __thiscall FMassArchetypeHandle::IsValid(FMassArchetypeHandle *this)

{
  return (this->DataPtr).Object != (FMassArchetypeData *)0x0;
}

