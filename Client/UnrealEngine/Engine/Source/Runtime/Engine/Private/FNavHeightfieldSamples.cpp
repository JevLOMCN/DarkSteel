// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FNavHeightfieldSamples @ 14737ada0

FNavHeightfieldSamples * __thiscall
FNavHeightfieldSamples::FNavHeightfieldSamples(FNavHeightfieldSamples *this)

{
  *(undefined8 *)&this->Heights = 0;
  *(undefined8 *)&(this->Heights).field_0x8 = 0;
  *(undefined8 *)&(this->Heights).field_0x10 = 0;
  (this->Holes).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->Holes).NumBits = 0;
  (this->Holes).MaxBits = 0x80;
  return this;
}

// Empty @ 147390ad0

void __thiscall FNavHeightfieldSamples::Empty(FNavHeightfieldSamples *this)

{
  int iVar1;
  
  *(undefined4 *)&(this->Heights).field_0x10 = 0;
  if (*(int *)&(this->Heights).field_0x14 != 0) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (2,2,0,(ForAnyElementType *)this,0,(int *)&(this->Heights).field_0x14);
  }
  iVar1 = (this->Holes).MaxBits;
  (this->Holes).NumBits = 0;
  if ((-1 < iVar1) && (iVar1 < 0x81)) {
    return;
  }
  (this->Holes).MaxBits = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->Holes,0);
  return;
}

// GetResourceSizeEx @ 1473a10b0

void __thiscall
FNavHeightfieldSamples::GetResourceSizeEx(FNavHeightfieldSamples *this,FResourceSizeEx *param_1)

{
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(ulonglong)(((this->Holes).MaxBits + 0x1fU >> 5) << 2) +
                     ((longlong)*(int *)&(this->Heights).field_0x14 + 0x1c) * 2);
  return;
}

