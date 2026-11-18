// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FInstanceBatcher @ 1448ed3e0

FInstanceBatcher * __thiscall
FInstanceBatcher::FInstanceBatcher(FInstanceBatcher *this,bool param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  FInstanceUploadBatch *pFVar3;
  
  this->CurrentBatch = (FInstanceUploadBatch *)0x0;
  piVar1 = &(this->UpdateBatchItems).ArrayMax;
  (this->UpdateBatches).AllocatorInstance.SecondaryData.Data = (FInstanceUploadBatch *)0x0;
  (this->UpdateBatches).ArrayNum = 0;
  (this->UpdateBatches).ArrayMax = 1;
  (this->UpdateBatchItems).AllocatorInstance.SecondaryData.Data = (FItem *)0x0;
  (this->UpdateBatchItems).ArrayNum = 0;
  *piVar1 = 0x100;
  (this->PerPrimitiveItemInfo).AllocatorInstance.Data = (FPrimitiveItemInfo *)0x0;
  (this->PerPrimitiveItemInfo).ArrayNum = 0;
  (this->PerPrimitiveItemInfo).ArrayMax = 0;
  this->CurrentBatchCost = 0;
  this->InstanceSceneDataUploadOffset = 0;
  this->InstancePayloadDataUploadOffset = 0;
  if (param_1) {
    this->MaxItems = 0x40;
    this->MaxCost = 0x80;
  }
  else {
    this->MaxItems = 0x7fffffff;
    this->MaxCost = 0x7fffffff;
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
    }
    if ((this->UpdateBatchItems).ArrayMax < param_2) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<256,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FInstanceUploadBatch::FItem>_>
                (0xc,4,param_2,&(this->UpdateBatchItems).AllocatorInstance,
                 (this->UpdateBatchItems).ArrayNum,piVar1);
    }
  }
  iVar2 = (this->UpdateBatches).ArrayNum;
  if (iVar2 == (this->UpdateBatches).ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FInstanceUploadBatch>_>
                      (0x408,&(this->UpdateBatches).AllocatorInstance,
                       &(this->UpdateBatches).ArrayMax);
  }
  (this->UpdateBatches).ArrayNum = iVar2 + 1;
  pFVar3 = (this->UpdateBatches).AllocatorInstance.SecondaryData.Data;
  if (pFVar3 == (FInstanceUploadBatch *)0x0) {
    pFVar3 = (FInstanceUploadBatch *)&this->UpdateBatches;
  }
  DefaultConstructItems<FInstanceUploadBatch,int>(pFVar3 + iVar2,1);
  this->CurrentBatch = pFVar3 + iVar2;
  return this;
}

