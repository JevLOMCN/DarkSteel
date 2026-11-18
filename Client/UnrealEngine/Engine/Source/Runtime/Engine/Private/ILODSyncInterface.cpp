// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetCurrentSyncLOD @ 1478d0bf0

int __thiscall ILODSyncInterface::GetCurrentSyncLOD(ILODSyncInterface *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001478d0bf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((longlong)*this + 0x48))();
  return iVar1;
}

// SetSyncLOD @ 1478f5580

void __thiscall ILODSyncInterface::SetSyncLOD(ILODSyncInterface *this,int param_1)

{
  (**(code **)((longlong)*this + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x0001478f55a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x30))(this,param_1);
  return;
}

// ~ILODSyncInterface @ 14792cd50

void __thiscall ILODSyncInterface::~ILODSyncInterface(ILODSyncInterface *this)

{
  *this = (ILODSyncInterface)&___7ILODSyncInterface__6B_;
  return;
}

// _getUObject @ 14797d7f0

UObject * __thiscall ILODSyncInterface::_getUObject(ILODSyncInterface *this)

{
  return (UObject *)0x0;
}

