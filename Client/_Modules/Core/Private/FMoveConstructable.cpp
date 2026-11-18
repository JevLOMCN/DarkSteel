// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FMoveConstructable @ 141d693d0

FMoveConstructable * __thiscall
`UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable::FMoveConstructable
          (void *this)

{
  LOCK();
  ConstructionsNum = (atomic<unsigned_int>)((int)ConstructionsNum + 1);
  UNLOCK();
  return this;
}

// ~FMoveConstructable @ 141d6d2c0

void __thiscall
`UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable::~FMoveConstructable
          (void *this)

{
  LOCK();
  DestructionsNum = (atomic<unsigned_int>)((int)DestructionsNum + 1);
  UNLOCK();
  return;
}

