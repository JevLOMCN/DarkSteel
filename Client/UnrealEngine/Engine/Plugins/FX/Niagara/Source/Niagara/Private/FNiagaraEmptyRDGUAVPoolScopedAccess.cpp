// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FNiagaraEmptyRDGUAVPoolScopedAccess @ 1492763a0

FNiagaraEmptyRDGUAVPoolScopedAccess * __thiscall
FNiagaraEmptyRDGUAVPoolScopedAccess::FNiagaraEmptyRDGUAVPoolScopedAccess
          (FNiagaraEmptyRDGUAVPoolScopedAccess *this,FNiagaraEmptyUAVPool *param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraEmptyRDGUAVPoolScopedAccess *pFVar4;
  
  this->EmptyUAVPool = param_1;
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmptyUAVPool.cpp"
                       ,0x20,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNiagaraEmptyRDGUAVPoolScopedAccess *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (this->EmptyUAVPool == (FNiagaraEmptyUAVPool *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EmptyUAVPool",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmptyUAVPool.cpp"
                       ,0x21,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNiagaraEmptyRDGUAVPoolScopedAccess *)(*pcVar2)();
      return pFVar4;
    }
  }
  puVar1 = &this->EmptyUAVPool->RDGUAVAccessCounter;
  *puVar1 = *puVar1 + 1;
  return this;
}

// ~FNiagaraEmptyRDGUAVPoolScopedAccess @ 14927a630

void __thiscall
FNiagaraEmptyRDGUAVPoolScopedAccess::~FNiagaraEmptyRDGUAVPoolScopedAccess
          (FNiagaraEmptyRDGUAVPoolScopedAccess *this)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmptyUAVPool.cpp"
                       ,0x27,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1 = &this->EmptyUAVPool->RDGUAVAccessCounter;
  *puVar1 = *puVar1 - 1;
  if (this->EmptyUAVPool->RDGUAVAccessCounter == 0) {
    FNiagaraEmptyUAVPool::ResetEmptyRDGUAVPools(this->EmptyUAVPool);
    return;
  }
  return;
}

