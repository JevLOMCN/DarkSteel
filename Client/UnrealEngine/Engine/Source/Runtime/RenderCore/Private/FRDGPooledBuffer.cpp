// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// FRDGPooledBuffer @ 145d8cbd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPooledBuffer * __thiscall
FRDGPooledBuffer::FRDGPooledBuffer
          (FRDGPooledBuffer *this,TRefCountPtr<FRHIBuffer> param_1,FRDGBufferDesc *param_2,
          uint param_3,wchar_t *param_4)

{
  code *pcVar1;
  bool bVar2;
  FRDGPooledBuffer *pFVar3;
  longlong local_res8;
  
  local_res8 = (param_1.Reference)->_padding_;
  (param_1.Reference)->_padding_ = 0;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGPooledBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  FRDGPooledBuffer(this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                   (FRHIBuffer *)&local_res8,param_2,param_3,param_4);
  this->_padding_ = (longlong)&___7FRDGPooledBuffer__6B_;
  if ((FRHIResource *)(param_1.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_1.Reference)->_padding_);
  }
  return this;
}

// SetDebugLabelName @ 145dcbe60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRDGPooledBuffer::SetDebugLabelName
          (FRDGPooledBuffer *this,FRHICommandListBase *param_1,wchar_t *param_2)

{
  FRHIBuffer *pFVar1;
  int iVar2;
  
  if ((param_2 == (wchar_t *)0x0) || (iVar2 = wcscmp(this->Name,param_2), iVar2 != 0)) {
    pFVar1 = (this->Buffer).Reference;
    this->Name = param_2;
    (**(code **)(GDynamicRHI->_padding_ + 0x210))(GDynamicRHI,param_1,pFVar1,param_2);
    iVar2 = (this->ViewCache).SRVs.ArrayNum + (this->ViewCache).UAVs.ArrayNum;
  }
  else {
    iVar2 = (this->ViewCache).SRVs.ArrayNum + (this->ViewCache).UAVs.ArrayNum;
    if (this->NameUpdatedViewCacheNum == iVar2) {
      return;
    }
  }
  this->NameUpdatedViewCacheNum = iVar2;
  FRHIBufferViewCache::SetDebugName(&this->ViewCache,param_1,param_2);
  return;
}

