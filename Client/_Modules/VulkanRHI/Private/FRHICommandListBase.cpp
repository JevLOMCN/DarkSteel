// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// AllocCommand @ 145adf960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
FRHICommandListBase::AllocCommand(FRHICommandListBase *this,int param_1,int param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  FRHICommandBase *pFVar5;
  uchar *puVar6;
  
  if (((this->MemManager).bShouldEnforceAllocMarks != false) && ((this->MemManager).NumMarks < 1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bShouldEnforceAllocMarks || NumMarks > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                       ,0x8a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  uVar1 = (longlong)param_2 - 1;
  pFVar5 = (FRHICommandBase *)((ulonglong)((this->MemManager).Top + uVar1) & ~uVar1);
  puVar6 = (uchar *)((longlong)&pFVar5->_padding_ + (longlong)param_1);
  if ((this->MemManager).End < puVar6) {
    FMemStackBase::AllocateNewChunk(&this->MemManager,param_1 + param_2);
    pFVar5 = (FRHICommandBase *)((ulonglong)((this->MemManager).Top + uVar1) & ~uVar1);
    puVar6 = (uchar *)((longlong)&pFVar5->_padding_ + (longlong)param_1);
  }
  (this->MemManager).Top = puVar6;
  this->NumCommands = this->NumCommands + 1;
  *this->CommandLink = pFVar5;
  this->CommandLink = &pFVar5->Next;
  return pFVar5;
}

