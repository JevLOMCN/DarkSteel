// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// FRigVMRegistryHandle @ 14a0bf380

FRigVMRegistryHandle * __thiscall
FRigVMRegistryHandle::FRigVMRegistryHandle
          (FRigVMRegistryHandle *this,FRigVMRegistry_NoLock *param_1)

{
  this->Registry = param_1;
  return this;
}

// FRigVMRegistryHandle @ 14a0bf390

FRigVMRegistryHandle * __thiscall
FRigVMRegistryHandle::FRigVMRegistryHandle(FRigVMRegistryHandle *this)

{
  this->Registry = (FRigVMRegistry_NoLock *)0x0;
  return this;
}

// operator-> @ 14a0c8a30

FRigVMRegistry_NoLock * __thiscall FRigVMRegistryHandle::operator->(FRigVMRegistryHandle *this)

{
  return this->Registry;
}

// operator-> @ 14a0c8a40

FRigVMRegistry_NoLock * __thiscall FRigVMRegistryHandle::operator->(FRigVMRegistryHandle *this)

{
  return this->Registry;
}

// GetRegistry @ 14a0eb620

FRigVMRegistry_NoLock * __thiscall FRigVMRegistryHandle::GetRegistry(FRigVMRegistryHandle *this)

{
  return this->Registry;
}

// GetRegistry @ 14a0eb630

FRigVMRegistry_NoLock * __thiscall FRigVMRegistryHandle::GetRegistry(FRigVMRegistryHandle *this)

{
  return this->Registry;
}

// IsValid @ 14a0f9fd0

bool __thiscall FRigVMRegistryHandle::IsValid(FRigVMRegistryHandle *this)

{
  return this->Registry != (FRigVMRegistry_NoLock *)0x0;
}

