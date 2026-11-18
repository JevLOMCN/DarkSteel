// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 6

// ~IISMPartitionInstanceManager @ 145eda230

void __thiscall
IISMPartitionInstanceManager::~IISMPartitionInstanceManager(IISMPartitionInstanceManager *this)

{
  *this = (IISMPartitionInstanceManager)&___7IISMPartitionInstanceManager__6B_;
  return;
}

// CanDeleteISMPartitionInstance @ 145edf250

bool __thiscall
IISMPartitionInstanceManager::CanDeleteISMPartitionInstance
          (IISMPartitionInstanceManager *this,FISMClientInstanceId *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145edf253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this + 0x20))();
  return (bool)uVar1;
}

// CanDuplicateISMPartitionInstance @ 145edf270

bool __thiscall
IISMPartitionInstanceManager::CanDuplicateISMPartitionInstance
          (IISMPartitionInstanceManager *this,FISMClientInstanceId *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145edf273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this + 0x20))();
  return (bool)uVar1;
}

// GetISMPartitionInstanceDisplayName @ 145ee36a0

FText * __thiscall
IISMPartitionInstanceManager::GetISMPartitionInstanceDisplayName
          (IISMPartitionInstanceManager *this,FText *__return_storage_ptr__,
          FISMClientInstanceId *param_1)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetISMPartitionInstanceTooltip @ 145ee36e0

FText * __thiscall
IISMPartitionInstanceManager::GetISMPartitionInstanceTooltip
          (IISMPartitionInstanceManager *this,FText *__return_storage_ptr__,
          FISMClientInstanceId *param_1)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// _getUObject @ 145eef320

UObject * __thiscall IISMPartitionInstanceManager::_getUObject(IISMPartitionInstanceManager *this)

{
  return (UObject *)0x0;
}

