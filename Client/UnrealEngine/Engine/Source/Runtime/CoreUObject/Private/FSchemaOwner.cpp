// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FSchemaOwner @ 142011890

FSchemaOwner * __thiscall UE::GC::FSchemaOwner::FSchemaOwner(FSchemaOwner *this,FSchemaView param_1)

{
  int *piVar1;
  
  this->SchemaView = param_1.Handle;
  if ((param_1.Handle & 0xfffffffffffffffe) != 0) {
    LOCK();
    piVar1 = (int *)((param_1.Handle & 0xfffffffffffffffe) - 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return this;
}

// Reset @ 14208e1d0

void __thiscall UE::GC::FSchemaOwner::Reset(FSchemaOwner *this)

{
  if ((this->SchemaView & 0xfffffffffffffffe) != 0) {
    DropSchemaReference((FSchemaView)this->SchemaView);
  }
  this->SchemaView = 0;
  return;
}

// Set @ 14208e9a0

void __thiscall UE::GC::FSchemaOwner::Set(FSchemaOwner *this,FSchemaView param_1)

{
  ulonglong uVar1;
  
  uVar1 = param_1.Handle & 0xfffffffffffffffe;
  if ((this->SchemaView & 0xfffffffffffffffe) != uVar1) {
    if (uVar1 != 0) {
      LOCK();
      *(int *)(uVar1 - 4) = *(int *)(uVar1 - 4) + 1;
      UNLOCK();
    }
    if ((this->SchemaView & 0xfffffffffffffffe) != 0) {
      DropSchemaReference((FSchemaView)this->SchemaView);
    }
    this->SchemaView = param_1.Handle;
  }
  return;
}

