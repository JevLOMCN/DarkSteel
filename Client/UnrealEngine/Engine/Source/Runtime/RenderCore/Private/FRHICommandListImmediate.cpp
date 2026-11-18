// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// UnmapStagingSurface @ 145d62070

void __thiscall
FRHICommandListImmediate::UnmapStagingSurface
          (FRHICommandListImmediate *this,FRHITexture *param_1,uint param_2)

{
  FLLMScope local_res20 [2];
  FMemScope local_18 [2];
  
  FLLMScope::FLLMScope(local_res20,Textures,false,None,Default,true);
  FMemScope::FMemScope(local_18,Textures,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x430))(GDynamicRHI,this,param_1,param_2);
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// Get @ 145db8650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHICommandListImmediate * __cdecl FRHICommandListImmediate::Get(FRHICommandListBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListImmediate *pFVar3;
  
  if ((param_1->PersistentState).bImmediate == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RHICmdList.IsImmediate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x122e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRHICommandListImmediate *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FRHICommandListImmediate *)param_1;
}

