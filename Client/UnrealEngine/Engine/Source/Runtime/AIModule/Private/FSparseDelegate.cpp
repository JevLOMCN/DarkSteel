// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// __Internal_AddUnique @ 146fe3fb0

void __thiscall
FSparseDelegate::__Internal_AddUnique
          (FSparseDelegate *this,UObject *param_1,FName param_2,
          TScriptDelegate<FNotThreadSafeDelegateMode> *param_3)

{
  bool bVar1;
  bool bVar2;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_38;
  FReadAccessScope local_20;
  
  bVar1 = this->bIsBound;
  local_38._padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_20);
  local_38.Object = param_3->Object;
  local_38.FunctionName = param_3->FunctionName;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  bVar2 = FSparseDelegateStorage::AddUnique(param_1,param_2,&local_38);
  this->bIsBound = (bool)(bVar2 | bVar1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return;
}

