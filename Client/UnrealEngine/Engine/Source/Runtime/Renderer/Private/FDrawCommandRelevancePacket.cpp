// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FDrawCommandRelevancePacket @ 14551db10

FDrawCommandRelevancePacket * __thiscall
FDrawCommandRelevancePacket::FDrawCommandRelevancePacket(FDrawCommandRelevancePacket *this)

{
  bool bVar1;
  int *piVar2;
  TArray<FStaticMeshBatch_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<EMeshDrawCommandCullingPayloadFlags,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = 0x27;
  lVar6 = 0x27;
  piVar2 = &this->VisibleCachedDrawCommands[0].ArrayMax;
  do {
    (((TArray<FVisibleMeshDrawCommand,TSizedDefaultAllocator<32>_> *)(piVar2 + -3))->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)(piVar2 + -1) = 0;
    piVar2 = piVar2 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  pTVar3 = this->DynamicBuildRequests;
  lVar6 = 0x27;
  do {
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar3->ArrayNum = 0;
    pTVar3->ArrayMax = 0;
    pTVar3 = pTVar3 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  pTVar4 = this->DynamicBuildFlags;
  do {
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar4->ArrayNum = 0;
    pTVar4->ArrayMax = 0;
    pTVar4 = pTVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  bVar1 = UseCachedMeshDrawCommands();
  this->bUseCachedMeshDrawCommands = bVar1;
  this->NumDynamicBuildRequestElements[0] = 0;
  this->NumDynamicBuildRequestElements[1] = 0;
  this->NumDynamicBuildRequestElements[2] = 0;
  this->NumDynamicBuildRequestElements[3] = 0;
  this->NumDynamicBuildRequestElements[4] = 0;
  this->NumDynamicBuildRequestElements[5] = 0;
  this->NumDynamicBuildRequestElements[6] = 0;
  this->NumDynamicBuildRequestElements[7] = 0;
  this->NumDynamicBuildRequestElements[8] = 0;
  this->NumDynamicBuildRequestElements[9] = 0;
  this->NumDynamicBuildRequestElements[10] = 0;
  this->NumDynamicBuildRequestElements[0xb] = 0;
  this->NumDynamicBuildRequestElements[0xc] = 0;
  this->NumDynamicBuildRequestElements[0xd] = 0;
  this->NumDynamicBuildRequestElements[0xe] = 0;
  this->NumDynamicBuildRequestElements[0xf] = 0;
  this->NumDynamicBuildRequestElements[0x10] = 0;
  this->NumDynamicBuildRequestElements[0x11] = 0;
  this->NumDynamicBuildRequestElements[0x12] = 0;
  this->NumDynamicBuildRequestElements[0x13] = 0;
  this->NumDynamicBuildRequestElements[0x14] = 0;
  this->NumDynamicBuildRequestElements[0x15] = 0;
  this->NumDynamicBuildRequestElements[0x16] = 0;
  this->NumDynamicBuildRequestElements[0x17] = 0;
  this->NumDynamicBuildRequestElements[0x18] = 0;
  this->NumDynamicBuildRequestElements[0x19] = 0;
  this->NumDynamicBuildRequestElements[0x1a] = 0;
  this->NumDynamicBuildRequestElements[0x1b] = 0;
  this->NumDynamicBuildRequestElements[0x1c] = 0;
  this->NumDynamicBuildRequestElements[0x1d] = 0;
  this->NumDynamicBuildRequestElements[0x1e] = 0;
  this->NumDynamicBuildRequestElements[0x1f] = 0;
  this->NumDynamicBuildRequestElements[0x20] = 0;
  this->NumDynamicBuildRequestElements[0x21] = 0;
  this->NumDynamicBuildRequestElements[0x22] = 0;
  this->NumDynamicBuildRequestElements[0x23] = 0;
  this->NumDynamicBuildRequestElements[0x24] = 0;
  this->NumDynamicBuildRequestElements[0x25] = 0;
  this->NumDynamicBuildRequestElements[0x26] = 0;
  return this;
}

// ~FDrawCommandRelevancePacket @ 145520740

void __thiscall
FDrawCommandRelevancePacket::~FDrawCommandRelevancePacket(FDrawCommandRelevancePacket *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  TArray<EMeshDrawCommandCullingPayloadFlags,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FStaticMeshBatch_const_*,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  TArray<FVisibleMeshDrawCommand,TSizedDefaultAllocator<32>_> *pTVar6;
  
  lVar2 = 0x27;
  pTVar3 = (TArray<EMeshDrawCommandCullingPayloadFlags,TSizedDefaultAllocator<32>_> *)
           this->NumDynamicBuildRequestElements;
  lVar5 = 0x27;
  do {
    pFVar1 = pTVar3[-1].AllocatorInstance.Data;
    pTVar3 = pTVar3 + -1;
    lVar5 = lVar5 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar5 != 0);
  pTVar4 = (TArray<FStaticMeshBatch_const_*,TSizedDefaultAllocator<32>_> *)this->DynamicBuildFlags;
  lVar5 = 0x27;
  do {
    pFVar1 = pTVar4[-1].AllocatorInstance.Data;
    pTVar4 = pTVar4 + -1;
    lVar5 = lVar5 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar5 != 0);
  pTVar6 = (TArray<FVisibleMeshDrawCommand,TSizedDefaultAllocator<32>_> *)this->DynamicBuildRequests
  ;
  do {
    pFVar1 = pTVar6[-1].AllocatorInstance.Data;
    pTVar6 = pTVar6 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// AddCommandsForMesh @ 145526790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */

void __thiscall
FDrawCommandRelevancePacket::AddCommandsForMesh
          (FDrawCommandRelevancePacket *this,int param_1,FPrimitiveSceneInfo *param_2,
          FStaticMeshBatchRelevance *param_3,FStaticMeshBatch *param_4,
          EMeshDrawCommandCullingPayloadFlags param_5,FScene *param_6,bool param_7,Type param_8)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement FVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  FScriptContainerElement *pFVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  FScene *pFVar11;
  Type TVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  TArray<FVisibleMeshDrawCommand,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<FStaticMeshBatch_const_*,TSizedDefaultAllocator<32>_> *pTVar17;
  TArray<EMeshDrawCommandCullingPayloadFlags,TSizedDefaultAllocator<32>_> *pTVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  FStaticMeshBatch *local_28 [2];
  
  pFVar11 = param_6;
  uVar14 = 0;
  if (param_1 < (param_6->PrimitiveFlagsCompact).ArrayNum) {
    uVar14 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  TVar12 = param_8;
  if ((((byte)(pFVar11->PrimitiveFlagsCompact).AllocatorInstance.Data[param_1] & 8) == 0) ||
     (pFVar11->PrimitivesAlwaysVisibleOffset == 0xffffffff)) {
    iVar15 = *(int *)&pFVar11->field_0x8;
    uVar19 = (ulonglong)param_8;
    if (this->bUseCachedMeshDrawCommands != false) {
      if ((WaterInfoTexturePass < param_8) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("ShadingPath < EShadingPath::Num && PassType < EMeshPass::Num",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                              ,0x942,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar20 = 0;
      if (2 < iVar15) {
        lVar20 = 0x27;
      }
      if ((((FPassProcessorManager::Flags[0][lVar20 + uVar19] & CachedMeshCommands) != None) &&
          (param_3->bSupportsCachingMeshDrawCommands != '\0')) && (param_7 != false)) {
        uVar14 = FStaticMeshBatchRelevance::GetStaticMeshCommandInfoIndex(param_3,TVar12);
        if ((int)uVar14 < 0) {
          return;
        }
        uVar21 = 0;
        if ((int)uVar14 < (param_2->StaticMeshCommandInfos).ArrayNum) {
          uVar21 = ~uVar14 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar16 = this->VisibleCachedDrawCommands + uVar19;
        pFVar1 = (param_2->StaticMeshCommandInfos).AllocatorInstance.Data +
                 (longlong)(int)uVar14 * 0x24;
        uVar14 = pTVar16->ArrayNum;
        if (uVar14 == pTVar16->ArrayMax) {
          uVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,&pTVar16->AllocatorInstance,&pTVar16->ArrayMax);
        }
        pTVar16->ArrayNum = uVar14 + 1;
        uVar21 = 0;
        if ((int)uVar14 < (int)(uVar14 + 1)) {
          uVar21 = ~uVar14 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar15 = pTVar16->ArrayNum;
        pFVar7 = (pTVar16->AllocatorInstance).Data;
        uVar14 = *(uint *)(pFVar1 + 0xc);
        if ((int)uVar14 < 0) {
          lVar20 = (longlong)*(int *)(pFVar1 + 8) * 0x198 +
                   *(longlong *)&pFVar11->CachedDrawLists[uVar19].MeshDrawCommands;
        }
        else {
          uVar21 = 0;
          if ((int)uVar14 < *(int *)&pFVar11->CachedMeshDrawCommandStateBuckets[uVar19].field_0x8) {
            uVar21 = ~uVar14 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar20 = (longlong)(int)uVar14 * 0x1a0 +
                   *(longlong *)(pFVar11->CachedMeshDrawCommandStateBuckets + uVar19);
        }
        uVar14 = *(uint *)(pFVar1 + 0x1c);
        FVar2 = pFVar1[0x20];
        iVar4 = (param_2->PersistentIndex).Index;
        iVar5 = param_2->PackedIndex;
        uVar21 = param_2->InstanceSceneDataOffset;
        uVar8 = *(undefined8 *)(pFVar1 + 0x10);
        uVar9 = *(undefined8 *)pFVar1;
        uVar6 = *(undefined4 *)(pFVar1 + 0xc);
        *(longlong *)(pFVar7 + (longlong)iVar15 * 0x48 + -0x48) = lVar20;
        *(int *)(pFVar7 + (longlong)iVar15 * 0x48 + -0x38) = iVar4;
        *(int *)(pFVar7 + (longlong)iVar15 * 0x48 + -0x34) = iVar5;
        *(uint *)(pFVar7 + (longlong)iVar15 * 0x48 + -0x30) = uVar21 & 0x7fffffff;
        FVar3 = pFVar7[(longlong)iVar15 * 0x48 + -0xc];
        uVar22 = (int)((uVar14 & 0xfffffff8) << 0x1a) >> 0x1a;
        uVar21 = (int)(uVar14 << 0x1d) >> 0x1d;
        *(undefined4 *)(pFVar7 + (longlong)iVar15 * 0x48 + -0x2c) = 0xffffffff;
        *(undefined4 *)(pFVar7 + (longlong)iVar15 * 0x48 + -0x28) = uVar6;
        *(undefined8 *)(pFVar7 + (longlong)iVar15 * 0x48 + -0x40) = uVar9;
        uVar14 = *(uint *)(pFVar7 + (longlong)iVar15 * 0x48 + -8);
        *(undefined8 *)(pFVar7 + (longlong)iVar15 * 0x48 + -0x14) = uVar8;
        *(undefined8 *)(pFVar7 + (longlong)iVar15 * 0x48 + -0x20) = 0;
        *(undefined4 *)(pFVar7 + (longlong)iVar15 * 0x48 + -0x18) = 0;
        *(uint *)(pFVar7 + (longlong)iVar15 * 0x48 + -8) =
             (uVar21 ^ uVar14) & 0xffffffc0 ^ (uVar22 ^ uVar21) & 0xffffffc7 ^ uVar22;
        pFVar7[(longlong)iVar15 * 0x48 + -4] =
             (FScriptContainerElement)
             ((byte)pFVar7[(longlong)iVar15 * 0x48 + -4] ^
             ((byte)pFVar7[(longlong)iVar15 * 0x48 + -4] ^ (byte)FVar2) & 0x3f);
        pFVar7[(longlong)iVar15 * 0x48 + -0xc] =
             (FScriptContainerElement)
             ((byte)pFVar7[(longlong)iVar15 * 0x48 + -0xc] ^ (param_5 ^ (byte)FVar3) & All);
        return;
      }
    }
    this->NumDynamicBuildRequestElements[uVar19] =
         this->NumDynamicBuildRequestElements[uVar19] + (uint)param_3->NumElements;
    pTVar17 = this->DynamicBuildRequests + uVar19;
    local_28[0] = param_4;
    pFVar1 = (pTVar17->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)local_28) &&
        ((FScriptContainerElement *)local_28 < pFVar1 + (longlong)pTVar17->ArrayMax * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar15 = pTVar17->ArrayNum;
    if (iVar15 == pTVar17->ArrayMax) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar17->AllocatorInstance,&pTVar17->ArrayMax);
    }
    pTVar17->ArrayNum = iVar15 + 1;
    pTVar18 = this->DynamicBuildFlags + uVar19;
    *(FStaticMeshBatch **)((pTVar17->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_28[0];
    pFVar1 = (pTVar18->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)&param_5) &&
        ((FScriptContainerElement *)&param_5 < pFVar1 + pTVar18->ArrayMax)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar15 = pTVar18->ArrayNum;
    if (iVar15 == pTVar18->ArrayMax) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x101,&pTVar18->AllocatorInstance,&pTVar18->ArrayMax);
    }
    pTVar18->ArrayNum = iVar15 + 1;
    (pTVar18->AllocatorInstance).Data[iVar15] = (FScriptContainerElement)param_5;
  }
  return;
}

