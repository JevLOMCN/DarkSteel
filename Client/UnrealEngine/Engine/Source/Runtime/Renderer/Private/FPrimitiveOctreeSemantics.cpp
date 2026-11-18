// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// SetOctreeNodeIndex @ 1452d39b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FPrimitiveOctreeSemantics::SetOctreeNodeIndex
          (FPrimitiveSceneInfoCompact *param_1,FOctreeElementId2 param_2)

{
  uint uVar1;
  FScene *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = param_1->PrimitiveSceneInfo->PackedIndex;
  if ((uVar1 != 0xffffffff) && (uVar1 != 0x7fffffff)) {
    pFVar2 = param_1->PrimitiveSceneInfo->Scene;
    uVar5 = 0;
    if ((int)uVar1 < (pFVar2->PrimitiveOctreeIndex).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(uint *)((pFVar2->PrimitiveOctreeIndex).AllocatorInstance.Data + (longlong)(int)uVar1 * 4) =
         param_2.NodeIndex;
  }
  return;
}

