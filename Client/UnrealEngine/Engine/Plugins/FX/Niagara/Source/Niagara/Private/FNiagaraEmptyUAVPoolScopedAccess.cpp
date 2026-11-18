// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FNiagaraEmptyUAVPoolScopedAccess @ 149276420

FNiagaraEmptyUAVPoolScopedAccess * __thiscall
FNiagaraEmptyUAVPoolScopedAccess::FNiagaraEmptyUAVPoolScopedAccess
          (FNiagaraEmptyUAVPoolScopedAccess *this,FNiagaraEmptyUAVPool *param_1)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraEmptyUAVPoolScopedAccess *pFVar3;
  
  this->EmptyUAVPool = param_1;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmptyUAVPool.cpp"
                       ,0xe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraEmptyUAVPoolScopedAccess *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->EmptyUAVPool == (FNiagaraEmptyUAVPool *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EmptyUAVPool",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmptyUAVPool.cpp"
                       ,0xf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraEmptyUAVPoolScopedAccess *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->EmptyUAVPool->UAVAccessCounter = this->EmptyUAVPool->UAVAccessCounter + 1;
  return this;
}

// ~FNiagaraEmptyUAVPoolScopedAccess @ 14927a6a0

void __thiscall
FNiagaraEmptyUAVPoolScopedAccess::~FNiagaraEmptyUAVPoolScopedAccess
          (FNiagaraEmptyUAVPoolScopedAccess *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmptyUAVPool.cpp"
                       ,0x15,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->EmptyUAVPool->UAVAccessCounter = this->EmptyUAVPool->UAVAccessCounter - 1;
  if (this->EmptyUAVPool->UAVAccessCounter == 0) {
    FNiagaraEmptyUAVPool::ResetEmptyUAVPools(this->EmptyUAVPool);
    return;
  }
  return;
}

