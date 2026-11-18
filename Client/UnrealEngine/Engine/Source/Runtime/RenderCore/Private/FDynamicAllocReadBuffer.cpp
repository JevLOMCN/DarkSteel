// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// Lock @ 145d464d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicAllocReadBuffer::Lock(FDynamicAllocReadBuffer *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  
  piVar1 = &(this->SubAllocations).ArrayMax;
  pFVar3 = (this->SubAllocations).AllocatorInstance.Data;
  iVar2 = (this->SubAllocations).ArrayNum;
  if ((this->SubAllocations).ArrayMax < 0) {
    DestructItems<TRefCountPtr<FRHIShaderResourceView>,int>
              ((TRefCountPtr<FRHIShaderResourceView> *)pFVar3,iVar2);
    (this->SubAllocations).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->SubAllocations).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TRefCountPtr<FRHIShaderResourceView>,int>
              ((TRefCountPtr<FRHIShaderResourceView> *)pFVar3,iVar2);
    (this->SubAllocations).ArrayNum = 0;
  }
  if (this->_padding_ != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MappedBuffer == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIUtilities.h"
                       ,0x24f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidRef(Buffer)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIUtilities.h"
                       ,0x250,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pvVar6 = FRHICommandListBase::LockBuffer
                     (param_1,(FRHIBuffer *)this->_padding_,0,(uint)this->_padding_,RLM_WriteOnly);
  this->_padding_ = (longlong)pvVar6;
  return;
}

