// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 7

// FEntityData @ 1471d5f10

FEntityData * __thiscall
UE::Mass::FSingleThreadedEntityStorage::FEntityData::FEntityData(FEntityData *this)

{
  (this->CurrentArchetype).Object = (FMassArchetypeData *)0x0;
  (this->CurrentArchetype).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->SerialNumber = 0;
  return this;
}

// ~FEntityData @ 1471dfb60

void __thiscall UE::Mass::FConcurrentEntityStorage::FEntityData::~FEntityData(FEntityData *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentArchetype).SharedReferenceCount.ReferenceController);
  return;
}

// ~FEntityData @ 1471dfb70

void __thiscall UE::Mass::FSingleThreadedEntityStorage::FEntityData::~FEntityData(FEntityData *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentArchetype).SharedReferenceCount.ReferenceController);
  return;
}

// operator== @ 1471e27a0

bool __thiscall
UE::Mass::FConcurrentEntityStorage::FEntityData::operator==(FEntityData *this,FEntityData *param_1)

{
  if ((this->CurrentArchetype).Object == (param_1->CurrentArchetype).Object) {
    if ((((ZPULL(*(undefined4 *)&this->field_0x10,0,0x1e) ^
          ZPULL(*(undefined4 *)&param_1->field_0x10,0,0x1e)) & 0x3fffffff) == 0) &&
       (((uint)(*(undefined4 *)&param_1->field_0x10 ^ *(undefined4 *)&this->field_0x10) >> 0x1e & 1)
        == 0)) {
      return true;
    }
  }
  return false;
}

// GetSerialNumber @ 147226e80

int __thiscall UE::Mass::FConcurrentEntityStorage::FEntityData::GetSerialNumber(FEntityData *this)

{
  return this->GenerationId;
}

// IsValid @ 1472339d0

bool __thiscall UE::Mass::FSingleThreadedEntityStorage::FEntityData::IsValid(FEntityData *this)

{
  if ((this->SerialNumber != 0) && ((this->CurrentArchetype).Object != (FMassArchetypeData *)0x0)) {
    return true;
  }
  return false;
}

// Reset @ 147248bc0

void __thiscall UE::Mass::FSingleThreadedEntityStorage::FEntityData::Reset(FEntityData *this)

{
  FMassArchetypeData *local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = (FMassArchetypeData *)0x0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != (FEntityData *)&local_18) {
    (this->CurrentArchetype).Object = (FMassArchetypeData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CurrentArchetype).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  this->SerialNumber = 0;
  return;
}

