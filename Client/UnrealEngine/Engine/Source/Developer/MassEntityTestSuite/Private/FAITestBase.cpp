// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// FAITestBase @ 1470f2970

FAITestBase * __thiscall FAITestBase::FAITestBase(FAITestBase *this)

{
  this->bTearedDown = 0;
  this->_padding_ = (longlong)&___7FAITestBase__6B_;
  (this->SpawnedObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnedObjects).ArrayNum = 0;
  (this->SpawnedObjects).ArrayMax = 0;
  this->TestRunner = (FAutomationTestBase *)0x0;
  return this;
}

