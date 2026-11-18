// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ProcessBatched @ 144bd6730

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstanceCullingDeferredContext::ProcessBatched
          (FInstanceCullingDeferredContext *this,
          TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
          *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (this->bProcessed == false) {
    FInstanceCullingMergedContext::MergeBatches((FInstanceCullingMergedContext *)this);
    if (this->MeshDrawCommandStatsIndirectArgsReadbackBuffer != (FRHIGPUBufferReadback *)0x0) {
      iVar5 = (int)this->_padding_;
      uVar7 = 0;
      if (0 < iVar5) {
        lVar10 = 0;
        lVar11 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar7 < iVar5) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar8 = *(longlong *)(*(longlong *)(this->_padding_ + lVar11) + 0x120);
          if (lVar8 != 0) {
            uVar4 = 0;
            if ((int)uVar7 < (int)this->_padding_) {
              uVar4 = ~uVar7 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar1 = *(undefined4 *)(lVar10 + this->_padding_);
            *(FRHIGPUBufferReadback **)(lVar8 + 0x70) =
                 this->MeshDrawCommandStatsIndirectArgsReadbackBuffer;
            *(undefined4 *)(lVar8 + 0x78) = uVar1;
          }
          iVar5 = (int)this->_padding_;
          uVar7 = uVar7 + 1;
          lVar11 = lVar11 + 0x18;
          lVar10 = lVar10 + 0x28;
        } while ((int)uVar7 < iVar5);
      }
    }
    uVar7 = 0;
    this->bProcessed = true;
    if ((int)this->_padding_ != 0) {
      do {
        lVar10 = this->_padding_;
        uVar9 = ~uVar7 >> 0x1f;
        uVar4 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar11 = (longlong)(int)uVar7;
        *(int *)(*(longlong *)((param_1->AllocatorInstance).Data + lVar11 * 8) + 0x120) =
             (int)lVar10;
        uVar4 = 0;
        if ((int)uVar7 < (int)this->_padding_) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar10 = this->_padding_;
        lVar8 = lVar11 * 0x20;
        if ((*(int *)(lVar10 + 0xc + lVar8) != 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentBatchNumItems == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                               ,0xdc,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar1 = *(undefined4 *)(*(longlong *)(lVar10 + lVar8) + 0x10);
        uVar4 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)(*(longlong *)((param_1->AllocatorInstance).Data + lVar11 * 8) + 0x70) =
             uVar1;
        uVar4 = 0;
        if ((int)uVar7 < (int)this->_padding_) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar10 = this->_padding_;
        if ((*(int *)(lVar10 + 0xc + lVar8) != 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentBatchNumItems == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                               ,0xe2,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar1 = *(undefined4 *)(*(longlong *)(lVar10 + lVar8) + 0x20);
        uVar4 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)(*(longlong *)((param_1->AllocatorInstance).Data + lVar11 * 8) + 0x74) =
             uVar1;
        uVar4 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar7 = uVar7 + 1;
        *(undefined4 *)(*(longlong *)((param_1->AllocatorInstance).Data + lVar11 * 8) + 0x78) = 1;
      } while (uVar7 < (uint)this->_padding_);
    }
    pFVar6 = (param_1->AllocatorInstance).Data;
  }
  else {
    pFVar6 = (param_1->AllocatorInstance).Data;
  }
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return;
}

