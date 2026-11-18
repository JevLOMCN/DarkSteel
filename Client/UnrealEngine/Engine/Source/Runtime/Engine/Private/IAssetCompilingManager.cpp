// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ~IAssetCompilingManager @ 147abf560

void __thiscall IAssetCompilingManager::~IAssetCompilingManager(IAssetCompilingManager *this)

{
  *this = (IAssetCompilingManager)&___7IAssetCompilingManager__6B_;
  return;
}

// FinishCompilationForObjects @ 147adf970

void __thiscall
IAssetCompilingManager::FinishCompilationForObjects
          (IAssetCompilingManager *this,TArrayView<UObject_*_const,int> *param_1)

{
  return;
}

// MarkCompilationAsCanceled @ 147af9e70

void __thiscall
IAssetCompilingManager::MarkCompilationAsCanceled
          (IAssetCompilingManager *this,TArrayView<UObject_*_const,int> *param_1)

{
  return;
}

// ProcessAsyncTasks @ 147aff610

void __thiscall
IAssetCompilingManager::ProcessAsyncTasks
          (IAssetCompilingManager *this,FProcessAsyncTaskParams *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147aff616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x48))(this,param_1->bLimitExecutionTime);
  return;
}

