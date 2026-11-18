// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 4

// FMassArchetypeEntityCollectionWithPayload @ 1470f46a0

FMassArchetypeEntityCollectionWithPayload * __thiscall
FMassArchetypeEntityCollectionWithPayload::FMassArchetypeEntityCollectionWithPayload
          (FMassArchetypeEntityCollectionWithPayload *this,FMassArchetypeEntityCollection *param_1)

{
  (this->Entities).Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entities).Ranges.AllocatorInstance.Data = (param_1->Ranges).AllocatorInstance.Data;
  (param_1->Ranges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entities).Ranges.ArrayNum = (param_1->Ranges).ArrayNum;
  (this->Entities).Ranges.ArrayMax = (param_1->Ranges).ArrayMax;
  (param_1->Ranges).ArrayNum = 0;
  (param_1->Ranges).ArrayMax = 0;
  (this->Entities).Archetype.ArchetypeHandle.DataPtr.Object =
       (param_1->Archetype).ArchetypeHandle.DataPtr.Object;
  (this->Entities).Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
       (param_1->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
  (param_1->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->Archetype).ArchetypeHandle.DataPtr.Object = (FMassArchetypeData *)0x0;
  (this->Entities).Archetype.HandleVersion = (param_1->Archetype).HandleVersion;
  (this->PayloadSlice).Source.Content.DataPtr = (FStructArrayView *)0x0;
  (this->PayloadSlice).Source.Content.ArrayNum = 0;
  (this->PayloadSlice).StartIndex = 0;
  (this->PayloadSlice).Count = 0;
  return this;
}

// ~FMassArchetypeEntityCollectionWithPayload @ 1470f8360

void __thiscall
FMassArchetypeEntityCollectionWithPayload::~FMassArchetypeEntityCollectionWithPayload
          (FMassArchetypeEntityCollectionWithPayload *this)

{
  FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&this->Entities);
  return;
}

// GetEntityCollection @ 1471201e0

FMassArchetypeEntityCollection * __thiscall
FMassArchetypeEntityCollectionWithPayload::GetEntityCollection
          (FMassArchetypeEntityCollectionWithPayload *this)

{
  return &this->Entities;
}

// GetPayload @ 1471203b0

FMassGenericPayloadViewSlice * __thiscall
FMassArchetypeEntityCollectionWithPayload::GetPayload
          (FMassArchetypeEntityCollectionWithPayload *this)

{
  return &this->PayloadSlice;
}

