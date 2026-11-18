// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Execute @ 145c9f140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandDispatchComputeShaderBundle::Execute
          (FRHICommandDispatchComputeShaderBundle *this,FRHICommandListBase *param_1)

{
  ERHIPipeline EVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  IRHIComputeContext *pIVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FRHIComputePipelineState *pFVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  uVar10 = 0;
  if (0 < (this->Dispatches).ArrayNum) {
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < (this->Dispatches).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar3 = (this->Dispatches).AllocatorInstance.Data;
      if ((*(int *)(pFVar3 + lVar11) != -1) &&
         (*(FComputePipelineState **)(pFVar3 + lVar11 + 8) != (FComputePipelineState *)0x0)) {
        pFVar9 = ExecuteSetComputePipelineState(*(FComputePipelineState **)(pFVar3 + lVar11 + 8));
        *(FRHIComputePipelineState **)(pFVar3 + lVar11 + 0x20) = pFVar9;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x88;
    } while ((int)uVar10 < (this->Dispatches).ArrayNum);
  }
  EVar1 = param_1->ActivePipelines;
  if ((EVar1 == None) || ((EVar1 & EVar1 - Graphics) != None)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSingleRHIPipeline(ActivePipelines)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2b7,
                       L"Exactly one pipeline must be active to call GetComputeContext(). Current pipeline mask is \'0x%02x\'."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (param_1->ComputeContext == (IRHIComputeContext *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ComputeContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2b8,
                       L"There is no active compute context on this command list. There may be a missing call to SwitchPipeline()."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pIVar4 = param_1->ComputeContext;
  bVar6 = this->bEmulated;
  pcVar5 = *(code **)(pIVar4->_padding_ + 0x70);
  pFVar3 = (this->Dispatches).AllocatorInstance.Data;
  iVar2 = (this->Dispatches).ArrayNum;
  if (iVar2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_28 = *(undefined4 *)&(this->SharedBindlessParameters).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(this->SharedBindlessParameters).DataPtr + 4);
  iStack_20 = (this->SharedBindlessParameters).ArrayNum;
  uStack_1c = *(undefined4 *)&(this->SharedBindlessParameters).field_0xc;
  local_48 = SUB84(pFVar3,0);
  uStack_44 = (undefined4)((ulonglong)pFVar3 >> 0x20);
  local_38 = local_48;
  uStack_34 = uStack_44;
  iStack_30 = iVar2;
  (*pcVar5)(pIVar4,this->ShaderBundle,this->RecordArgBuffer,&local_28,&local_38,bVar6);
  return;
}

