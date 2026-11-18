// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// ~FTestBufferOwner @ 141c8ef60

void __thiscall `FBufferOwnerTest::TestBody'::__l2::FTestBufferOwner::~FTestBufferOwner(void *this)

{
  **(undefined1 **)((longlong)this + 0x30) = 1;
  *(undefined ***)this = &___7FBufferOwner__6B_;
  return;
}

// FreeBuffer @ 141c93fc0

void __thiscall `FBufferOwnerTest::TestBody'::__l2::FTestBufferOwner::FreeBuffer(void *this)

{
  **(undefined1 **)((longlong)this + 0x28) = 1;
  return;
}

// MaterializeBuffer @ 141c95570

void __thiscall `FBufferOwnerTest::TestBody'::__l2::FTestBufferOwner::MaterializeBuffer(void *this)

{
  LOCK();
  *(ulonglong *)((longlong)this + 0x18) = *(ulonglong *)((longlong)this + 0x18) | 0x4000000000000000
  ;
  UNLOCK();
  **(undefined1 **)((longlong)this + 0x20) = 1;
  return;
}

