// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// ~FNDINeighborGrid3DInstanceData_RT @ 1491ad3e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNDINeighborGrid3DInstanceData_RT::~FNDINeighborGrid3DInstanceData_RT
          (FNDINeighborGrid3DInstanceData_RT *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  
  FNiagaraPooledRWBuffer::Release(&this->NeighborhoodCountBuffer);
  pFVar2 = (this->NeighborhoodCountBuffer).Buffer.Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  FNiagaraPooledRWBuffer::Release(&this->NeighborhoodBuffer);
  pFVar2 = (this->NeighborhoodBuffer).Buffer.Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  return;
}

// ResizeBuffers @ 1491df2d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDINeighborGrid3DInstanceData_RT::ResizeBuffers
          (FNDINeighborGrid3DInstanceData_RT *this,FRDGBuilder *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = (this->NumCells).field0_0x0._s_0.Z;
  iVar2 = (this->NumCells).field0_0x0._s_0.Y;
  this->bNeedsRealloc = false;
  uVar5 = iVar1 * iVar2 * (this->NumCells).field0_0x0._s_0.X;
  uVar4 = uVar5 * this->MaxNeighborsPerCell;
  if (uVar5 <= (uint)GMaxNiagaraNeighborGridCells) {
    FNiagaraPooledRWBuffer::Release(&this->NeighborhoodCountBuffer);
    FNiagaraPooledRWBuffer::Release(&this->NeighborhoodBuffer);
    uVar3 = 1;
    if (1 < uVar5) {
      uVar3 = uVar5;
    }
    FNiagaraPooledRWBuffer::InitializeInternal
              (&this->NeighborhoodCountBuffer,param_1,L"NiagaraNeighborGrid3D::NeighborCount",
               PF_R32_SINT,4,uVar3,Static);
    uVar5 = 1;
    if (1 < uVar4) {
      uVar5 = uVar4;
    }
    FNiagaraPooledRWBuffer::InitializeInternal
              (&this->NeighborhoodBuffer,param_1,L"NiagaraNeighborGrid3D::NeighborsGrid",PF_R32_SINT
               ,4,uVar5,Static);
  }
  return;
}

