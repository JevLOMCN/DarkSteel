// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// AllocateAdaptiveVirtualTexture @ 145da0b60

/* WARNING: Enum "Type": Some values do not have unique names */

IAdaptiveVirtualTexture * __thiscall
IRendererModule::AllocateAdaptiveVirtualTexture
          (IRendererModule *this,FAdaptiveVTDescription *param_1,FAllocatedVTDescription *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  IAdaptiveVirtualTexture *pIVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*this + 0x150);
  bVar1 = IsInRenderingThread();
  if (!bVar1) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      pIVar2 = (IAdaptiveVirtualTexture *)(*UNRECOVERED_JUMPTABLE)();
      return pIVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145da0bdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar2 = (IAdaptiveVirtualTexture *)(*UNRECOVERED_JUMPTABLE)(this,0x154be5ed0,param_1,param_2);
  return pIVar2;
}

// AllocateVirtualTexture @ 145da2d70

/* WARNING: Enum "Type": Some values do not have unique names */

IAllocatedVirtualTexture * __thiscall
IRendererModule::AllocateVirtualTexture(IRendererModule *this,FAllocatedVTDescription *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  IAllocatedVirtualTexture *pIVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*this + 0x140);
  bVar1 = IsInRenderingThread();
  if (!bVar1) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      pIVar2 = (IAllocatedVirtualTexture *)(*UNRECOVERED_JUMPTABLE)();
      return pIVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145da2ddd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar2 = (IAllocatedVirtualTexture *)(*UNRECOVERED_JUMPTABLE)(this,0x154be5ed0,param_1);
  return pIVar2;
}

// RegisterVirtualTextureProducer @ 145dc53c0

/* WARNING: Enum "Type": Some values do not have unique names */

FVirtualTextureProducerHandle __thiscall
IRendererModule::RegisterVirtualTextureProducer
          (IRendererModule *this,FVTProducerDescription *param_1,IVirtualTexture *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  pcVar1 = *(code **)((longlong)*this + 0x160);
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FVirtualTextureProducerHandle)uVar3;
    }
  }
  (*pcVar1)(this,param_1,0x154be5ed0,param_2);
  return (FVirtualTextureProducerHandle)(uint)param_1;
}

