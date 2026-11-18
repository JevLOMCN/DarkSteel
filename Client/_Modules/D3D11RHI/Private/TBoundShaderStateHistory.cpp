// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 2

// ~TBoundShaderStateHistory<10000,1> @ 14596e4b0

void __thiscall
TBoundShaderStateHistory<10000,1>::~TBoundShaderStateHistory<10000,1>
          (TBoundShaderStateHistory<10000,1> *this)

{
  TRefCountPtr<FRHIBoundShaderState> *pTVar1;
  longlong lVar2;
  TRefCountPtr<FRHIBoundShaderState> *pTVar3;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->BoundShaderStateHistoryLock);
  pTVar3 = (TRefCountPtr<FRHIBoundShaderState> *)&this->NextBoundShaderStateIndex;
  lVar2 = 10000;
  do {
    pTVar1 = pTVar3 + -1;
    pTVar3 = pTVar3 + -1;
    lVar2 = lVar2 + -1;
    if ((FRHIResource *)pTVar1->Reference != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pTVar1->Reference);
    }
  } while (lVar2 != 0);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ReleaseRHI @ 145997130

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TBoundShaderStateHistory<10000,1>::ReleaseRHI(TBoundShaderStateHistory<10000,1> *this)

{
  FRHIResource *this_00;
  TRefCountPtr<FRHIBoundShaderState> *pTVar1;
  longlong lVar2;
  
  if (GRHIGlobals.SupportsParallelRHIExecute) {
    EnterCriticalSection((LPCRITICAL_SECTION)&this->BoundShaderStateHistoryLock);
  }
  pTVar1 = this->BoundShaderStates;
  lVar2 = 10000;
  do {
    this_00 = (FRHIResource *)pTVar1->Reference;
    if (this_00 != (FRHIResource *)0x0) {
      pTVar1->Reference = (FRHIBoundShaderState *)0x0;
      FRHIResource::Release(this_00);
    }
    pTVar1 = pTVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if (GRHIGlobals.SupportsParallelRHIExecute != false) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->BoundShaderStateHistoryLock);
  }
  return;
}

