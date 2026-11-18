// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// operator= @ 14a9791f0

FMeshMorph * __thiscall
UE::Mutable::Private::FMeshMorph::operator=(FMeshMorph *this,FMeshMorph *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Names).ArrayMax;
    piVar1 = &(this->Names).ArrayMax;
    _Src = (param_1->Names).AllocatorInstance.Data;
    iVar3 = (param_1->Names).ArrayNum;
    (this->Names).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->Names).AllocatorInstance.Data,_Src,(longlong)iVar3 << 3);
      }
    }
  }
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->MaximumValuePerMorph,&param_1->MaximumValuePerMorph);
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->MinimumValuePerMorph,&param_1->MinimumValuePerMorph);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            (&this->BatchStartOffsetPerMorph,&param_1->BatchStartOffsetPerMorph);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            (&this->BatchesPerMorph,&param_1->BatchesPerMorph);
  this->NumTotalBatches = param_1->NumTotalBatches;
  this->PositionPrecision = param_1->PositionPrecision;
  this->TangentZPrecision = param_1->TangentZPrecision;
  return this;
}

