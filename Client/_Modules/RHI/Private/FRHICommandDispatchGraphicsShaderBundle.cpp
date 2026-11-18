// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Execute @ 145c9f300

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandDispatchGraphicsShaderBundle::Execute
          (FRHICommandDispatchGraphicsShaderBundle *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  IRHIComputeContext *pIVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  uVar11 = 0;
  if (0 < (this->Dispatches).ArrayNum) {
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar11 < (this->Dispatches).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (this->Dispatches).AllocatorInstance.Data;
      if ((*(int *)(pFVar3 + lVar12) != -1) &&
         (lVar4 = *(longlong *)(pFVar3 + lVar12 + 8), lVar4 != 0)) {
        uVar5 = *(undefined8 *)(lVar4 + 0x38);
        FPipelineStateStats::UpdateStats(*(FPipelineStateStats **)(lVar4 + 8));
        LOCK();
        piVar1 = (int *)(lVar4 + 0x40);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 + -1 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                               ,0x4e5,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined8 *)(pFVar3 + lVar12 + 0x10) = uVar5;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x1a8;
    } while ((int)uVar11 < (this->Dispatches).ArrayNum);
  }
  pIVar10 = FRHICommandListBase::GetComputeContext(param_1);
  iStack_40 = (this->Dispatches).ArrayNum;
  bVar7 = this->bEmulated;
  pcVar6 = *(code **)(pIVar10->_padding_ + 0x78);
  pFVar3 = (this->Dispatches).AllocatorInstance.Data;
  if ((iStack_40 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_38 = *(undefined4 *)&(this->SharedBindlessParameters).DataPtr;
  uStack_34 = *(undefined4 *)((longlong)&(this->SharedBindlessParameters).DataPtr + 4);
  iStack_30 = (this->SharedBindlessParameters).ArrayNum;
  uStack_2c = *(undefined4 *)&(this->SharedBindlessParameters).field_0xc;
  local_58 = SUB84(pFVar3,0);
  uStack_54 = (undefined4)((ulonglong)pFVar3 >> 0x20);
  local_48 = local_58;
  uStack_44 = uStack_54;
  (*pcVar6)(pIVar10,this->ShaderBundle,this->RecordArgBuffer,&this->BundleState,&local_38,&local_48,
            bVar7);
  return;
}

