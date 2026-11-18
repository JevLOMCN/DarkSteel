// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// Lock @ 145cb2440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
FGenericRHIStagingBuffer::Lock(FGenericRHIStagingBuffer *this,uint param_1,uint param_2)

{
  FRHIBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  longlong lVar5;
  
  if ((this->ShadowBuffer).Reference == (FRHIBuffer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShadowBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIGPUReadback.cpp"
                       ,0x11,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  if ((char)this->_padding_ != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIGPUReadback.cpp"
                       ,0x12,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  *(undefined1 *)&this->_padding_ = 1;
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  pFVar1 = (this->ShadowBuffer).Reference;
  if ((((GRHICommandList.bLatchedBypass == false) ||
       ((GRHICommandList.CommandListImmediate._667_8_ & 0x20) == 0)) &&
      (GRHICommandList.CommandListImmediate._100_1_ != '\0')) &&
     ((GRHICommandList.bLatchedBypass == false ||
      ((GRHICommandList.CommandListImmediate._667_8_ & 0x20) == 0)))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsTopOfPipe() || Bypass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2ed,
                       L"Buffers may only be locked while recording RHI command lists, not during RHI command list execution."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  if ((GRHICommandList.CommandListImmediate._106_1_ != '\0') &&
     ((GRHICommandList.CommandListImmediate._106_1_ &
      GRHICommandList.CommandListImmediate._106_1_ - 1) != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  bVar3 = GRHICommandList.CommandListImmediate._106_1_ == '\0';
  if (bVar3) {
    FRHICommandListBase::ActivatePipelines
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,Graphics);
  }
  lVar5 = (**(code **)(GDynamicRHI->_padding_ + 0x148))
                    (GDynamicRHI,0x154be5ed0,pFVar1,param_1,param_2,0);
  if (bVar3) {
    FRHICommandListBase::ActivatePipelines
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,None);
  }
  return (void *)((ulonglong)this->Offset + lVar5);
}

// Unlock @ 145cc7e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FGenericRHIStagingBuffer::Unlock(FGenericRHIStagingBuffer *this)

{
  FRHIBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((char)this->_padding_ == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIGPUReadback.cpp"
                       ,0x19,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->ShadowBuffer).Reference;
  if ((((GRHICommandList.bLatchedBypass == false) ||
       ((GRHICommandList.CommandListImmediate._667_8_ & 0x20) == 0)) &&
      (GRHICommandList.CommandListImmediate._100_1_ != '\0')) &&
     ((GRHICommandList.bLatchedBypass == false ||
      ((GRHICommandList.CommandListImmediate._667_8_ & 0x20) == 0)))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsTopOfPipe() || Bypass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2f5,
                       L"Buffers may only be unlocked while recording RHI command lists, not during RHI command list execution."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((GRHICommandList.CommandListImmediate._106_1_ != '\0') &&
     ((GRHICommandList.CommandListImmediate._106_1_ &
      GRHICommandList.CommandListImmediate._106_1_ - 1) != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (GRHICommandList.CommandListImmediate._106_1_ == '\0') {
    FRHICommandListBase::ActivatePipelines
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,0x154be5ed0,pFVar1);
    FRHICommandListBase::ActivatePipelines
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,None);
    *(undefined1 *)&this->_padding_ = 0;
    return;
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,0x154be5ed0,pFVar1);
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

