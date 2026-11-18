// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 2

// FStructuredBufferPoolItem @ 14ea39560

FStructuredBufferPoolItem * __thiscall
FStructuredBufferPoolItem::FStructuredBufferPoolItem(FStructuredBufferPoolItem *this)

{
  code *pcVar1;
  bool bVar2;
  FEvent *pFVar3;
  FStructuredBufferPoolItem *pFVar4;
  
  (this->UploadBufferRef).Reference = (FRHIBuffer *)0x0;
  (this->ShaderAccessBufferRef).Reference = (FRHIBuffer *)0x0;
  (this->ShaderResourceView).Reference = (FRHIShaderResourceView *)0x0;
  pFVar3 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  this->AllocationReadyEvent = pFVar3;
  if (pFVar3 == (FEvent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocationReadyEvent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReaderGpu.cpp"
                       ,0x2e5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FStructuredBufferPoolItem *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

// ~FStructuredBufferPoolItem @ 14ea3b3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStructuredBufferPoolItem::~FStructuredBufferPoolItem(FStructuredBufferPoolItem *this)

{
  FRHIBuffer *pFVar1;
  FRHIShaderResourceView *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId746,"ExrReaderGpu.ReleasePoolItem",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReaderGpu.cpp"
               ,0x2ea);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId746);
  }
  bVar3 = IsInRenderingThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->UploadBufferRef).Reference;
  if (((((GRHICommandList.bLatchedBypass == false) ||
        ((GRHICommandList.CommandListImmediate._667_8_ & 0x20) == 0)) &&
       (GRHICommandList.CommandListImmediate._100_1_ != '\0')) &&
      ((GRHICommandList.bLatchedBypass == false ||
       ((GRHICommandList.CommandListImmediate._667_8_ & 0x20) == 0)))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsTopOfPipe() || Bypass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2f5,
                         L"Buffers may only be unlocked while recording RHI command lists, not during RHI command list execution."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((GRHICommandList.CommandListImmediate._106_1_ != '\0') &&
      ((GRHICommandList.CommandListImmediate._106_1_ &
       GRHICommandList.CommandListImmediate._106_1_ - 1) != 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (GRHICommandList.CommandListImmediate._106_1_ == '\0') {
    FRHICommandListBase::SwitchPipeline
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,0x154be5ed0,pFVar1);
    FRHICommandListBase::SwitchPipeline
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,0x154be5ed0,pFVar1);
  }
  this->UploadBufferMapped = (void *)0x0;
  FGenericPlatformProcess::ReturnSynchEventToPool(this->AllocationReadyEvent);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  this_00 = (this->ShaderResourceView).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pFVar1 = (this->ShaderAccessBufferRef).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->UploadBufferRef).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  return;
}

