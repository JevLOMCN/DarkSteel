// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FPrimitiveOcclusionHistory @ 14551e870

FPrimitiveOcclusionHistory * __thiscall
FPrimitiveOcclusionHistory::FPrimitiveOcclusionHistory(FPrimitiveOcclusionHistory *this)

{
  this->LastTestFrameNumber = 0xffffffff;
  this->LastConsideredFrameNumber = 0xffffffff;
  (this->PrimitiveId).PrimIDValue = 0;
  this->HZBTestIndex = 0;
  this->LastProvenVisibleTime = 0.0;
  this->LastConsideredTime = 0.0;
  this->LastPixelsPercentage = 0.0;
  this->CustomIndex = 0;
  this->field_0x54 = 0;
  this->bGroupedQuery[0] = false;
  this->bGroupedQuery[1] = false;
  this->bGroupedQuery[2] = false;
  *(undefined2 *)(this->bGroupedQuery + 3) = 0;
  this->PendingOcclusionQuery[0] = (FRHIRenderQuery *)0x0;
  this->PendingOcclusionQueryFrames[0] = 0;
  this->PendingOcclusionQueryFrames[1] = 0;
  this->PendingOcclusionQuery[1] = (FRHIRenderQuery *)0x0;
  this->PendingOcclusionQuery[2] = (FRHIRenderQuery *)0x0;
  this->PendingOcclusionQueryFrames[2] = 0;
  this->PendingOcclusionQueryFrames[3] = 0;
  this->PendingOcclusionQuery[3] = (FRHIRenderQuery *)0x0;
  return this;
}

// GetQueryForReading @ 145544090

FRHIRenderQuery * __thiscall
FPrimitiveOcclusionHistory::GetQueryForReading
          (FPrimitiveOcclusionHistory *this,uint param_1,int param_2,int param_3,bool *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  FPrimitiveOcclusionHistory *pFVar4;
  int iVar5;
  uint *puVar6;
  
  if (this->bNeedsScanOnRead == false) {
    iVar2 = (int)param_1 % param_2;
  }
  else {
    iVar5 = 0;
    uVar3 = 0xffffffff;
    iVar2 = -1;
    if (0 < param_2) {
      puVar6 = this->PendingOcclusionQueryFrames;
      pFVar4 = this;
      do {
        pFVar4 = (FPrimitiveOcclusionHistory *)pFVar4->PendingOcclusionQuery;
        if (((*(FRHIRenderQuery **)pFVar4 != (FRHIRenderQuery *)0x0) &&
            (uVar1 = *puVar6, (int)(param_1 - uVar1) <= param_3)) && (uVar1 < uVar3)) {
          uVar3 = uVar1;
          iVar2 = iVar5;
        }
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar5 < param_2);
    }
  }
  if (iVar2 != -1) {
    if ((this->PendingOcclusionQuery[iVar2] != (FRHIRenderQuery *)0x0) &&
       ((int)(param_1 - this->PendingOcclusionQueryFrames[iVar2]) <= param_3)) {
      *param_4 = this->bGroupedQuery[iVar2];
      return this->PendingOcclusionQuery[iVar2];
    }
  }
  *param_4 = false;
  return (FRHIRenderQuery *)0x0;
}

