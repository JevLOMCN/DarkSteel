// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// DestroyObject @ 14e00a3f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGroomCacheBuffers,1>::DestroyObject
          (TIntrusiveReferenceController<FGroomCacheBuffers,1> *this)

{
  FGroomCacheBuffers::~FGroomCacheBuffers((FGroomCacheBuffers *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e00a400

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGroomCacheStreamedBuffers,1>::DestroyObject
          (TIntrusiveReferenceController<FGroomCacheStreamedBuffers,1> *this)

{
  TTypeCompatibleBytes<FGroomCacheStreamedBuffers> *this_00;
  
  this_00 = &this->ObjectStorage;
  *(undefined ***)this_00->Pad = &___7FGroomCacheStreamedBuffers__6B_;
  FGroomCacheStreamedBuffers::ResetInternal((FGroomCacheStreamedBuffers *)this_00);
  FGroomCacheBuffers::~FGroomCacheBuffers((FGroomCacheBuffers *)this_00);
  return;
}

