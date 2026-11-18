// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 66

// Allocate<unsigned___int64_const_&,PSOCollectorStats::FShaderStateUsage> @ 1447078b0

/* WARNING: Removing unreachable block (ram,0x000144707c3d) */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
::FData::Allocate<unsigned___int64_const_&,PSOCollectorStats::FShaderStateUsage>
          (FData *this,ulong64 *param_1,FShaderStateUsage *param_2,FHashType param_3)

{
  TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  longlong lVar3;
  void *_Dst;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
  FVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint local_res20 [2];
  ulong64 local_68;
  FScriptContainerElement local_60;
  FScriptContainerElement local_5f;
  FScriptContainerElement *local_58;
  undefined8 local_50;
  int local_48;
  FVertexFactoryType *local_40;
  
  iVar7 = (this->FreeList).NumElements;
  local_res20[0] = param_3.Hash;
  if (iVar7 < 1) {
    local_68 = *param_1;
    uVar6 = (this->KeyVals).ArrayNum;
    local_60 = (FScriptContainerElement)param_2->bPrecached;
    local_5f = (FScriptContainerElement)param_2->bUsed;
    local_58 = (param_2->MaterialName).Data.AllocatorInstance.Data;
    (param_2->MaterialName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50._0_4_ = (param_2->MaterialName).Data.ArrayNum;
    local_50._4_4_ = (param_2->MaterialName).Data.ArrayMax;
    (param_2->MaterialName).Data.ArrayNum = 0;
    (param_2->MaterialName).Data.ArrayMax = 0;
    local_48 = param_2->PSOCollectorIndex;
    pFVar10 = (this->KeyVals).AllocatorInstance.Data;
    local_40 = param_2->VertexFactoryType;
    if (((pFVar10 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 < pFVar10 + (longlong)(this->KeyVals).ArrayMax * 0x30)
        ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
    iVar7 = (this->KeyVals).ArrayNum;
    piVar2 = &(this->KeyVals).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,(ForAnyElementType *)this,piVar2);
    }
    (this->KeyVals).ArrayNum = iVar7 + 1;
    pFVar10 = (this->KeyVals).AllocatorInstance.Data + (longlong)iVar7 * 0x30;
    *(ulong64 *)pFVar10 = local_68;
    pFVar10[8] = local_60;
    *(undefined8 *)(pFVar10 + 0x10) = 0;
    pFVar10[9] = local_5f;
    *(FScriptContainerElement **)(pFVar10 + 0x10) = local_58;
    *(undefined4 *)(pFVar10 + 0x18) = (undefined4)local_50;
    *(undefined4 *)(pFVar10 + 0x1c) = local_50._4_4_;
    *(int *)(pFVar10 + 0x20) = local_48;
    *(FVertexFactoryType **)(pFVar10 + 0x28) = local_40;
    local_50 = 0;
    local_58 = (FScriptContainerElement *)0x0;
    pFVar10 = (this->Hashes).AllocatorInstance.Data;
    if (((pFVar10 <= (FScriptContainerElement *)local_res20) &&
        ((FScriptContainerElement *)local_res20 < pFVar10 + (longlong)(this->Hashes).ArrayMax * 4))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
    iVar7 = (this->Hashes).ArrayNum;
    piVar2 = &(this->Hashes).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar2);
    }
    pFVar10 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar7 + 1;
    *(uint *)(pFVar10 + (longlong)iVar7 * 4) = local_res20[0];
    return uVar6;
  }
  pTVar1 = &this->FreeList;
  (this->FreeList).NumElements = iVar7 + -1;
  iVar7 = (this->FreeList).FreeList.ArrayNum;
  uVar9 = iVar7 - 1;
  uVar6 = 0;
  if ((int)uVar9 < iVar7) {
    uVar6 = ~uVar9 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  FVar8 = (this->FreeList).FreeList.AllocatorInstance.SecondaryData;
  iVar7 = (this->FreeList).FreeList.ArrayNum;
  if (FVar8 == (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                )0x0) {
    FVar8 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
             )pTVar1;
  }
  uVar6 = ((int *)((longlong)FVar8 + -8))[(longlong)iVar7 * 2];
  lVar3 = (longlong)FVar8 + (longlong)iVar7 * 8;
  if (uVar6 == *(uint *)(lVar3 + -4)) {
    if ((iVar7 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
    iVar7 = (this->FreeList).FreeList.ArrayNum;
    FVar8 = (this->FreeList).FreeList.AllocatorInstance.SecondaryData;
    uVar9 = iVar7 - 1;
    if (FVar8 == (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                  )0x0) {
      FVar8 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
               )pTVar1;
    }
    _Dst = (void *)((longlong)FVar8 + (longlong)(int)uVar9 * 8);
    iVar7 = ~uVar9 + iVar7;
    if (iVar7 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar7 << 3);
    }
    piVar2 = &(this->FreeList).FreeList.ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>_>
              (8,4,(ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                    *)pTVar1,(this->FreeList).FreeList.ArrayNum,&(this->FreeList).FreeList.ArrayMax)
    ;
  }
  else {
    *(uint *)(lVar3 + -8) = uVar6 + 1;
  }
  uVar9 = 0;
  if ((int)uVar6 < (this->KeyVals).ArrayNum) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar9 = local_res20[0];
  pFVar10 = (this->KeyVals).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x30;
  *(ulong64 *)pFVar10 = *param_1;
  pFVar10[8] = (FScriptContainerElement)param_2->bPrecached;
  pFVar10[9] = (FScriptContainerElement)param_2->bUsed;
  *(undefined8 *)(pFVar10 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar10 + 0x10) =
       (param_2->MaterialName).Data.AllocatorInstance.Data;
  (param_2->MaterialName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar10 + 0x18) = (param_2->MaterialName).Data.ArrayNum;
  *(int *)(pFVar10 + 0x1c) = (param_2->MaterialName).Data.ArrayMax;
  (param_2->MaterialName).Data.ArrayNum = 0;
  (param_2->MaterialName).Data.ArrayMax = 0;
  *(int *)(pFVar10 + 0x20) = param_2->PSOCollectorIndex;
  *(FVertexFactoryType **)(pFVar10 + 0x28) = param_2->VertexFactoryType;
  uVar11 = 0;
  if ((int)uVar6 < (this->Hashes).ArrayNum) {
    uVar11 = ~uVar6 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  *(uint *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) = uVar9;
  return uVar6;
}

// Empty @ 144753ec0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
::FData::Empty(FData *this)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar7 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar7;
    if (uVar7 == uVar2) {
      (this->KeyVals).ArrayNum = 0;
      DestructItems<Experimental::RobinHoodHashTable_Private::TKeyValue<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType>,int>
                ((TKeyValue<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType>
                  *)(this->KeyVals).AllocatorInstance.Data,0);
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa0,8,0,(ForAnyElementType *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      return;
    }
    uVar6 = 0;
    if ((int)uVar7 < (this->KeyVals).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    pFVar3 = (this->KeyVals).AllocatorInstance.Data;
    if (*(FShaderMapResource **)(pFVar3 + (longlong)(int)uVar7 * 0xa0 + 0x48) !=
        (FShaderMapResource *)0x0) {
      FShaderMapResource::Release
                (*(FShaderMapResource **)(pFVar3 + (longlong)(int)uVar7 * 0xa0 + 0x48));
    }
    if (*(FShaderMapResource **)(pFVar3 + (longlong)(int)uVar7 * 0xa0 + 0x40) !=
        (FShaderMapResource *)0x0) {
      FShaderMapResource::Release
                (*(FShaderMapResource **)(pFVar3 + (longlong)(int)uVar7 * 0xa0 + 0x40));
    }
    if (*(FShaderMapResource **)(pFVar3 + (longlong)(int)uVar7 * 0xa0 + 0x38) !=
        (FShaderMapResource *)0x0) {
      FShaderMapResource::Release
                (*(FShaderMapResource **)(pFVar3 + (longlong)(int)uVar7 * 0xa0 + 0x38));
    }
    if (*(FShaderMapResource **)(pFVar3 + (longlong)(int)uVar7 * 0xa0 + 0x30) !=
        (FShaderMapResource *)0x0) {
      FShaderMapResource::Release
                (*(FShaderMapResource **)(pFVar3 + (longlong)(int)uVar7 * 0xa0 + 0x30));
    }
    uVar7 = uVar7 + 1;
    if (uVar7 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar6 = 0;
        if ((int)uVar7 < (this->Hashes).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar7 * 4) ==
                -0x80000000) && (uVar7 = uVar7 + 1, uVar7 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Get @ 14475b900

TKeyValue<unsigned___int64,PSOCollectorStats::FShaderStateUsage> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<unsigned___int64,PSOCollectorStats::FShaderStateUsage> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<unsigned___int64,PSOCollectorStats::FShaderStateUsage> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<unsigned___int64,PSOCollectorStats::FShaderStateUsage> *)
         ((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 0x30);
}

// Next @ 1447815e0

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
::FData::Next(FData *this,FIteratorState param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  int in_R8D;
  
  uVar4 = in_R8D + 1;
  if ((uint)(this->KeyVals).ArrayNum <= uVar4) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
    return (FIteratorState)param_1.Index;
  }
  do {
    uVar3 = 0;
    if ((int)uVar4 < (this->Hashes).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FIteratorState)uVar4;
      }
    }
  } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) ==
            -0x80000000) && (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

// Allocate<FPrimitiveSceneProxy_const_*_const_&,FVolumetricMeshBatch> @ 144a52fa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,TDefaultMapHashableKeyFuncs<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,0>,TSizedDefaultAllocator<32>_>
::FData::Allocate<FPrimitiveSceneProxy_const_*_const_&,FVolumetricMeshBatch>
          (FData *this,FPrimitiveSceneProxy **param_1,FVolumetricMeshBatch *param_2,
          FHashType param_3)

{
  TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  longlong lVar3;
  void *_Dst;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FPrimitiveSceneProxy *pFVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
  FVar11;
  uint uVar12;
  uint uVar13;
  uint local_res20 [2];
  FPrimitiveSceneProxy *local_48;
  FMeshBatch *pFStack_40;
  FPrimitiveSceneProxy *pFStack_38;
  
  iVar10 = (this->FreeList).NumElements;
  local_res20[0] = param_3.Hash;
  if (iVar10 < 1) {
    local_48 = *param_1;
    pFStack_40 = param_2->Mesh;
    pFStack_38 = param_2->Proxy;
    pFVar4 = (this->KeyVals).AllocatorInstance.Data;
    uVar9 = (this->KeyVals).ArrayNum;
    if ((pFVar4 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 < pFVar4 + (longlong)(this->KeyVals).ArrayMax * 0x18))
    {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return uVar9;
      }
    }
    iVar10 = (this->KeyVals).ArrayNum;
    piVar2 = &(this->KeyVals).ArrayMax;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)this,piVar2);
    }
    (this->KeyVals).ArrayNum = iVar10 + 1;
    pFVar5 = (this->KeyVals).AllocatorInstance.Data;
    pFVar4 = pFVar5 + (longlong)iVar10 * 0x18;
    *(FPrimitiveSceneProxy **)pFVar4 = local_48;
    *(FMeshBatch **)(pFVar4 + 8) = pFStack_40;
    *(FPrimitiveSceneProxy **)(pFVar5 + (longlong)iVar10 * 0x18 + 0x10) = pFStack_38;
    pFVar4 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_res20) &&
       ((FScriptContainerElement *)local_res20 < pFVar4 + (longlong)(this->Hashes).ArrayMax * 4)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return uVar9;
      }
    }
    iVar10 = (this->Hashes).ArrayNum;
    piVar2 = &(this->Hashes).ArrayMax;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&(this->Hashes).AllocatorInstance,piVar2);
    }
    pFVar4 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar10 + 1;
    *(uint *)(pFVar4 + (longlong)iVar10 * 4) = local_res20[0];
    return uVar9;
  }
  pTVar1 = &this->FreeList;
  (this->FreeList).NumElements = iVar10 + -1;
  iVar10 = (this->FreeList).FreeList.ArrayNum;
  uVar12 = iVar10 - 1;
  uVar9 = 0;
  if ((int)uVar12 < iVar10) {
    uVar9 = ~uVar12 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return uVar9;
    }
  }
  FVar11 = (this->FreeList).FreeList.AllocatorInstance.SecondaryData;
  iVar10 = (this->FreeList).FreeList.ArrayNum;
  if (FVar11 == (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                 )0x0) {
    FVar11 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
              )pTVar1;
  }
  uVar9 = ((int *)((longlong)FVar11 + -8))[(longlong)iVar10 * 2];
  lVar3 = (longlong)FVar11 + (longlong)iVar10 * 8;
  if (uVar9 == *(uint *)(lVar3 + -4)) {
    if (iVar10 < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return uVar9;
      }
    }
    iVar10 = (this->FreeList).FreeList.ArrayNum;
    FVar11 = (this->FreeList).FreeList.AllocatorInstance.SecondaryData;
    uVar12 = iVar10 - 1;
    if (FVar11 == (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                   )0x0) {
      FVar11 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                )pTVar1;
    }
    _Dst = (void *)((longlong)FVar11 + (longlong)(int)uVar12 * 8);
    iVar10 = ~uVar12 + iVar10;
    if (iVar10 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar10 << 3);
    }
    piVar2 = &(this->FreeList).FreeList.ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>_>
              (8,4,(ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                    *)pTVar1,(this->FreeList).FreeList.ArrayNum,&(this->FreeList).FreeList.ArrayMax)
    ;
  }
  else {
    *(uint *)(lVar3 + -8) = uVar9 + 1;
  }
  uVar12 = 0;
  if ((int)uVar9 < (this->KeyVals).ArrayNum) {
    uVar12 = ~uVar9 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return uVar9;
    }
  }
  uVar12 = local_res20[0];
  pFVar4 = (this->KeyVals).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x18;
  *(FPrimitiveSceneProxy **)pFVar4 = *param_1;
  pFVar7 = param_2->Proxy;
  *(FMeshBatch **)(pFVar4 + 8) = param_2->Mesh;
  *(FPrimitiveSceneProxy **)(pFVar4 + 0x10) = pFVar7;
  uVar13 = 0;
  if ((int)uVar9 < (this->Hashes).ArrayNum) {
    uVar13 = ~uVar9 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return uVar9;
    }
  }
  *(uint *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar9 * 4) = uVar12;
  return uVar9;
}

// ~FData @ 144a5ad50

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,TDefaultMapHashableKeyFuncs<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,0>,TSizedDefaultAllocator<32>_>
::FData::~FData(FData *this)

{
  int *piVar1;
  uint uVar2;
  ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
  FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar8 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar8;
    if (uVar8 == uVar2) {
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      FVar3 = (this->FreeList).FreeList.AllocatorInstance.SecondaryData;
      if (FVar3 != (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                    )0x0) {
        FMemory::Free((void *)FVar3);
      }
      pFVar4 = (this->Hashes).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (this->KeyVals).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      return;
    }
    uVar7 = 0;
    if ((int)uVar8 < (this->KeyVals).ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    uVar8 = uVar8 + 1;
    if (uVar8 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar7 = 0;
        if ((int)uVar8 < (this->Hashes).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar8 * 4) ==
                -0x80000000) && (uVar8 = uVar8 + 1, uVar8 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Get @ 144a7ec50

TKeyValue<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,TDefaultMapHashableKeyFuncs<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,0>,TSizedDefaultAllocator<32>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch> *)
         ((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 0x18);
}

// Next @ 144a9bec0

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,TDefaultMapHashableKeyFuncs<FPrimitiveSceneProxy_const_*,FVolumetricMeshBatch,0>,TSizedDefaultAllocator<32>_>
::FData::Next(FData *this,FIteratorState param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  int in_R8D;
  
  uVar4 = in_R8D + 1;
  if ((uint)(this->KeyVals).ArrayNum <= uVar4) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
    return (FIteratorState)param_1.Index;
  }
  do {
    uVar3 = 0;
    if ((int)uVar4 < (this->Hashes).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FIteratorState)uVar4;
      }
    }
  } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) ==
            -0x80000000) && (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

// Pack @ 144a9bf70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPackedRenderCurveInstanceData * __thiscall
RenderCurve::FRenderCurveSceneExtension::FData::Pack
          (FData *this,FPackedRenderCurveInstanceData *__return_storage_ptr__,uint param_1)

{
  FPrimitiveSceneInfo *pFVar1;
  
  pFVar1 = this->PrimitiveSceneInfo;
  __return_storage_ptr__->ClusterOffset = param_1;
  __return_storage_ptr__->PersistentIndex = (pFVar1->PersistentIndex).Index;
  __return_storage_ptr__->InstanceSceneDataOffset = pFVar1->InstanceSceneDataOffset;
  __return_storage_ptr__->ClusterCount = (this->CurveResourceData->Header).ClusterCount;
  return __return_storage_ptr__;
}

// Get @ 144b22dd0

TKeyValue<FRHITexture_*,FRDGTexture_*> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FRHITexture_*,FRDGTexture_*,DefaultKeyFuncs<FRHITexture_*,0>,TRDGArrayAllocator<0>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FRHITexture_*,FRDGTexture_*> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FRHITexture_*,FRDGTexture_*> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (this->KeyVals).AllocatorInstance.Data + (int)param_1;
}

// Allocate<int,int> @ 144d32cc0

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>::
FData::Allocate<int,int>(FData *this,int *param_1,int *param_2,FHashType param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_res20 [2];
  int local_38;
  int iStack_34;
  
  local_res20[0] = param_3.Hash;
  if ((this->FreeList).NumElements < 1) {
    local_38 = *param_1;
    pFVar2 = (this->KeyVals).AllocatorInstance.Data;
    uVar6 = (this->KeyVals).ArrayNum;
    iStack_34 = *param_2;
    if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this->KeyVals).ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
    }
    iVar7 = (this->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)this,piVar1);
    }
    (this->KeyVals).ArrayNum = iVar7 + 1;
    *(ulonglong *)((this->KeyVals).AllocatorInstance.Data + (longlong)iVar7 * 8) =
         CONCAT44(iStack_34,local_38);
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_res20) &&
       ((FScriptContainerElement *)local_res20 < pFVar2 + (longlong)(this->Hashes).ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
    }
    iVar7 = (this->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar7 + 1;
    *(uint *)(pFVar2 + (longlong)iVar7 * 4) = local_res20[0];
    return uVar6;
  }
  uVar5 = TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Pop(&this->FreeList);
  uVar6 = 0;
  if ((int)uVar5 < (this->KeyVals).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  uVar6 = local_res20[0];
  pFVar2 = (this->KeyVals).AllocatorInstance.Data + (longlong)(int)uVar5 * 8;
  *(int *)pFVar2 = *param_1;
  *(int *)(pFVar2 + 4) = *param_2;
  uVar8 = 0;
  if ((int)uVar5 < (this->Hashes).ArrayNum) {
    uVar8 = ~uVar5 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  *(uint *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = uVar6;
  return uVar5;
}

// operator= @ 144d440c0

FData * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>::
FData::operator=(FData *this,FData *param_1)

{
  int *piVar1;
  TArray<Experimental::FHashType,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
  _Dst;
  ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
  _Src;
  
  if (this != param_1) {
    iVar3 = (param_1->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    pFVar5 = (param_1->KeyVals).AllocatorInstance.Data;
    (this->KeyVals).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar3,*piVar1,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->KeyVals).AllocatorInstance.Data,pFVar5,(longlong)iVar3 << 3);
      }
    }
  }
  pTVar2 = &this->Hashes;
  if (pTVar2 != &param_1->Hashes) {
    iVar3 = (param_1->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    pFVar5 = (param_1->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar3 << 2);
      }
    }
  }
  if (this != param_1) {
    iVar3 = (param_1->FreeList).FreeList.ArrayNum;
    piVar1 = &(this->FreeList).FreeList.ArrayMax;
    _Src = (param_1->FreeList).FreeList.AllocatorInstance.SecondaryData;
    iVar4 = *piVar1;
    (this->FreeList).FreeList.ArrayNum = iVar3;
    if (_Src == (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                 )0x0) {
      _Src = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
              )&param_1->FreeList;
    }
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>_>
                (8,4,iVar3,iVar4,
                 (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                  *)&this->FreeList,iVar3,piVar1);
      _Dst = (this->FreeList).FreeList.AllocatorInstance.SecondaryData;
      if (iVar3 != 0) {
        if (_Dst == (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                     )0x0) {
          _Dst = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                  )&this->FreeList;
        }
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar3 << 3);
      }
    }
  }
  (this->FreeList).NumElements = (param_1->FreeList).NumElements;
  return this;
}

// Allocate<FGraphicsMinimalPipelineStateInitializer_const_&,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState> @ 144edfa40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
::FData::
Allocate<FGraphicsMinimalPipelineStateInitializer_const_&,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState>
          (FData *this,FGraphicsMinimalPipelineStateInitializer *param_1,
          FRefCountedGraphicsMinimalPipelineState *param_2,FHashType param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FGraphicsMinimalPipelineStateInitializer *pFVar8;
  uint uVar9;
  uint local_res20 [2];
  FGraphicsMinimalPipelineStateInitializer local_d8;
  atomic<unsigned_int> local_38;
  int local_34;
  
  local_res20[0] = param_3.Hash;
  if ((this->FreeList).NumElements < 1) {
    uVar6 = (this->KeyVals).ArrayNum;
    FGraphicsMinimalPipelineStateInitializer::FGraphicsMinimalPipelineStateInitializer
              (&local_d8,param_1);
    local_38 = param_2->RefNum;
    pFVar8 = (FGraphicsMinimalPipelineStateInitializer *)(this->KeyVals).AllocatorInstance.Data;
    local_34 = param_2->DebugSalt;
    if ((pFVar8 <= &local_d8) &&
       (&local_d8 <
        (FGraphicsMinimalPipelineStateInitializer *)
        ((longlong)pFVar8 + (longlong)(this->KeyVals).ArrayMax * 0xa8))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
    }
    iVar7 = (this->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8a8,(ForAnyElementType *)this,piVar1);
    }
    (this->KeyVals).ArrayNum = iVar7 + 1;
    pFVar8 = (FGraphicsMinimalPipelineStateInitializer *)
             ((this->KeyVals).AllocatorInstance.Data + (longlong)iVar7 * 0xa8);
    FGraphicsMinimalPipelineStateInitializer::FGraphicsMinimalPipelineStateInitializer
              (pFVar8,&local_d8);
    *(atomic<unsigned_int> *)&pFVar8[1].BoundShaderState.VertexDeclarationRHI = local_38;
    *(int *)((longlong)&pFVar8[1].BoundShaderState.VertexDeclarationRHI + 4) = local_34;
    if (local_d8.BoundShaderState.MeshShaderResource.Reference != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(local_d8.BoundShaderState.MeshShaderResource.Reference);
    }
    if (local_d8.BoundShaderState.GeometryShaderResource.Reference != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(local_d8.BoundShaderState.GeometryShaderResource.Reference);
    }
    if (local_d8.BoundShaderState.PixelShaderResource.Reference != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(local_d8.BoundShaderState.PixelShaderResource.Reference);
    }
    if (local_d8.BoundShaderState.VertexShaderResource.Reference != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(local_d8.BoundShaderState.VertexShaderResource.Reference);
    }
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_res20) &&
       ((FScriptContainerElement *)local_res20 < pFVar2 + (longlong)(this->Hashes).ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
    }
    iVar7 = (this->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar7 + 1;
    *(uint *)(pFVar2 + (longlong)iVar7 * 4) = local_res20[0];
    return uVar6;
  }
  uVar5 = TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Pop(&this->FreeList);
  uVar6 = 0;
  if ((int)uVar5 < (this->KeyVals).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  pFVar8 = (FGraphicsMinimalPipelineStateInitializer *)
           ((this->KeyVals).AllocatorInstance.Data + (longlong)(int)uVar5 * 0xa8);
  FGraphicsMinimalPipelineStateInitializer::FGraphicsMinimalPipelineStateInitializer(pFVar8,param_1)
  ;
  uVar6 = local_res20[0];
  *(atomic<unsigned_int> *)&pFVar8[1].BoundShaderState.VertexDeclarationRHI = param_2->RefNum;
  *(int *)((longlong)&pFVar8[1].BoundShaderState.VertexDeclarationRHI + 4) = param_2->DebugSalt;
  uVar9 = 0;
  if ((int)uVar5 < (this->Hashes).ArrayNum) {
    uVar9 = ~uVar5 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  *(uint *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = uVar6;
  return uVar5;
}

// Allocate<FGraphicsMinimalPipelineStateInitializer_const_&,Experimental::RobinHoodHashTable_Private::FUnitType> @ 144edfd60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
::FData::
Allocate<FGraphicsMinimalPipelineStateInitializer_const_&,Experimental::RobinHoodHashTable_Private::FUnitType>
          (FData *this,FGraphicsMinimalPipelineStateInitializer *param_1,FUnitType *param_2,
          FHashType param_3)

{
  int *piVar1;
  FGraphicsMinimalPipelineStateInitializer *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint local_res20 [2];
  FGraphicsMinimalPipelineStateInitializer local_b8;
  
  local_res20[0] = param_3.Hash;
  if ((this->FreeList).NumElements < 1) {
    uVar7 = (this->KeyVals).ArrayNum;
    FGraphicsMinimalPipelineStateInitializer::FGraphicsMinimalPipelineStateInitializer
              (&local_b8,param_1);
    pFVar2 = (FGraphicsMinimalPipelineStateInitializer *)(this->KeyVals).AllocatorInstance.Data;
    if ((pFVar2 <= &local_b8) && (&local_b8 < pFVar2 + (this->KeyVals).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
    }
    iVar8 = (this->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8a0,(ForAnyElementType *)this,piVar1);
    }
    (this->KeyVals).ArrayNum = iVar8 + 1;
    FGraphicsMinimalPipelineStateInitializer::FGraphicsMinimalPipelineStateInitializer
              ((FGraphicsMinimalPipelineStateInitializer *)
               ((this->KeyVals).AllocatorInstance.Data + (longlong)iVar8 * 0xa0),&local_b8);
    if (local_b8.BoundShaderState.MeshShaderResource.Reference != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(local_b8.BoundShaderState.MeshShaderResource.Reference);
    }
    if (local_b8.BoundShaderState.GeometryShaderResource.Reference != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(local_b8.BoundShaderState.GeometryShaderResource.Reference);
    }
    if (local_b8.BoundShaderState.PixelShaderResource.Reference != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(local_b8.BoundShaderState.PixelShaderResource.Reference);
    }
    if (local_b8.BoundShaderState.VertexShaderResource.Reference != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(local_b8.BoundShaderState.VertexShaderResource.Reference);
    }
    pFVar3 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_res20) &&
       ((FScriptContainerElement *)local_res20 < pFVar3 + (longlong)(this->Hashes).ArrayMax * 4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
    }
    iVar8 = (this->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar8 + 1;
    *(uint *)(pFVar3 + (longlong)iVar8 * 4) = local_res20[0];
    return uVar7;
  }
  uVar6 = TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Pop(&this->FreeList);
  uVar7 = 0;
  if ((int)uVar6 < (this->KeyVals).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
  }
  FGraphicsMinimalPipelineStateInitializer::FGraphicsMinimalPipelineStateInitializer
            ((FGraphicsMinimalPipelineStateInitializer *)
             ((this->KeyVals).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xa0),param_1);
  uVar7 = local_res20[0];
  uVar9 = 0;
  if ((int)uVar6 < (this->Hashes).ArrayNum) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
  }
  *(uint *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) = uVar7;
  return uVar6;
}

// Allocate<FMeshDrawCommand_const_&,FMeshDrawCommandCount> @ 144ee0020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
::FData::Allocate<FMeshDrawCommand_const_&,FMeshDrawCommandCount>
          (FData *this,FMeshDrawCommand *param_1,FMeshDrawCommandCount *param_2,FHashType param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FMeshDrawCommand *this_00;
  FMeshDrawCommand *pFVar9;
  uint uVar10;
  uint local_res20 [2];
  undefined1 auStack_238 [32];
  FMeshDrawCommand *local_218;
  FMeshDrawCommand *local_210;
  longlong local_208;
  longlong local_200;
  undefined8 local_1f8;
  FMeshDrawCommand local_1e8;
  atomic<unsigned_int> local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_238;
  local_res20[0] = param_3.Hash;
  if ((this->FreeList).NumElements < 1) {
    uVar5 = (this->KeyVals).ArrayNum;
    FMeshDrawCommand::FMeshDrawCommand(&local_1e8,param_1);
    local_50 = param_2->Num;
    pFVar9 = (FMeshDrawCommand *)(this->KeyVals).AllocatorInstance.Data;
    if ((pFVar9 <= &local_1e8) &&
       (lVar8 = (longlong)(this->KeyVals).ArrayMax,
       &local_1e8 < (FMeshDrawCommand *)((longlong)pFVar9 + lVar8 * 0x1a0))) {
      local_200 = (longlong)(this->KeyVals).ArrayNum;
      local_1f8 = 0x1a0;
      local_218 = &local_1e8;
      local_210 = pFVar9;
      local_208 = lVar8;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    iVar7 = (this->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1a0,8,(ForAnyElementType *)this,piVar1);
    }
    (this->KeyVals).ArrayNum = iVar7 + 1;
    pFVar9 = (FMeshDrawCommand *)((this->KeyVals).AllocatorInstance.Data + (longlong)iVar7 * 0x1a0);
    FMeshDrawCommand::FMeshDrawCommand(pFVar9,&local_1e8);
    *(atomic<unsigned_int> *)pFVar9[1].ShaderBindings.ShaderLayouts.AllocatorInstance.InlineData =
         local_50;
    if (local_1e8.DebugData.MaterialRenderProxyName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.DebugData.MaterialRenderProxyName.Data.AllocatorInstance.Data);
    }
    if (local_1e8.VertexStreams.AllocatorInstance.SecondaryData !=
        (ForElementType<FVertexInputStream>)0x0) {
      FMemory::Free((void *)local_1e8.VertexStreams.AllocatorInstance.SecondaryData);
    }
    if (0x50 < local_1e8.ShaderBindings.Size) {
      operator_delete__(local_1e8.ShaderBindings.Data.InlineStorage[0]);
    }
    local_1e8.ShaderBindings.Size = 0;
    local_1e8.ShaderBindings.Data.InlineStorage[0] = (uchar *)0x0;
    if (local_1e8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData !=
        (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FMemory::Free((void *)local_1e8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData);
    }
    pFVar9 = (FMeshDrawCommand *)(this->Hashes).AllocatorInstance.Data;
    if ((pFVar9 <= (FMeshDrawCommand *)local_res20) &&
       (lVar8 = (longlong)(this->Hashes).ArrayMax,
       local_res20 <
       (uint *)((longlong)(pFVar9->ShaderBindings).ShaderLayouts.AllocatorInstance.InlineData +
               lVar8 * 4))) {
      local_200 = (longlong)(this->Hashes).ArrayNum;
      local_1f8 = 4;
      local_218 = (FMeshDrawCommand *)local_res20;
      local_210 = pFVar9;
      local_208 = lVar8;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    iVar7 = (this->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar7 + 1;
    *(uint *)(pFVar2 + (longlong)iVar7 * 4) = local_res20[0];
  }
  else {
    uVar5 = TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Pop
                      (&this->FreeList);
    iVar7 = (this->KeyVals).ArrayNum;
    pFVar9 = (FMeshDrawCommand *)(longlong)(int)uVar5;
    uVar6 = 0;
    if ((int)uVar5 < iVar7) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      local_218 = pFVar9;
      local_210 = (FMeshDrawCommand *)(longlong)iVar7;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    this_00 = (FMeshDrawCommand *)
              ((this->KeyVals).AllocatorInstance.Data + (longlong)pFVar9 * 0x1a0);
    FMeshDrawCommand::FMeshDrawCommand(this_00,param_1);
    uVar6 = local_res20[0];
    *(atomic<unsigned_int> *)this_00[1].ShaderBindings.ShaderLayouts.AllocatorInstance.InlineData =
         param_2->Num;
    iVar7 = (this->Hashes).ArrayNum;
    local_210 = (FMeshDrawCommand *)(longlong)iVar7;
    uVar10 = 0;
    if ((int)uVar5 < iVar7) {
      uVar10 = ~uVar5 >> 0x1f;
    }
    if (uVar10 == 0) {
      local_218 = pFVar9;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    *(uint *)((this->Hashes).AllocatorInstance.Data + (longlong)pFVar9 * 4) = uVar6;
  }
  return uVar5;
}

// Allocate<FMeshDrawCommand,FMeshDrawCommandCount> @ 144ee0340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
::FData::Allocate<FMeshDrawCommand,FMeshDrawCommandCount>
          (FData *this,FMeshDrawCommand *param_1,FMeshDrawCommandCount *param_2,FHashType param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FMeshDrawCommand *this_00;
  FMeshDrawCommand *pFVar9;
  uint uVar10;
  uint local_res20 [2];
  undefined1 auStack_238 [32];
  FMeshDrawCommand *local_218;
  FMeshDrawCommand *local_210;
  longlong local_208;
  longlong local_200;
  undefined8 local_1f8;
  FMeshDrawCommand local_1e8;
  atomic<unsigned_int> local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_238;
  local_res20[0] = param_3.Hash;
  if ((this->FreeList).NumElements < 1) {
    uVar5 = (this->KeyVals).ArrayNum;
    FMeshDrawCommand::FMeshDrawCommand(&local_1e8,param_1);
    local_50 = param_2->Num;
    pFVar9 = (FMeshDrawCommand *)(this->KeyVals).AllocatorInstance.Data;
    if ((pFVar9 <= &local_1e8) &&
       (lVar8 = (longlong)(this->KeyVals).ArrayMax,
       &local_1e8 < (FMeshDrawCommand *)((longlong)pFVar9 + lVar8 * 0x1a0))) {
      local_200 = (longlong)(this->KeyVals).ArrayNum;
      local_1f8 = 0x1a0;
      local_218 = &local_1e8;
      local_210 = pFVar9;
      local_208 = lVar8;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    iVar7 = (this->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1a0,8,(ForAnyElementType *)this,piVar1);
    }
    (this->KeyVals).ArrayNum = iVar7 + 1;
    pFVar9 = (FMeshDrawCommand *)((this->KeyVals).AllocatorInstance.Data + (longlong)iVar7 * 0x1a0);
    FMeshDrawCommand::FMeshDrawCommand(pFVar9,&local_1e8);
    *(atomic<unsigned_int> *)pFVar9[1].ShaderBindings.ShaderLayouts.AllocatorInstance.InlineData =
         local_50;
    if (local_1e8.DebugData.MaterialRenderProxyName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.DebugData.MaterialRenderProxyName.Data.AllocatorInstance.Data);
    }
    if (local_1e8.VertexStreams.AllocatorInstance.SecondaryData !=
        (ForElementType<FVertexInputStream>)0x0) {
      FMemory::Free((void *)local_1e8.VertexStreams.AllocatorInstance.SecondaryData);
    }
    if (0x50 < local_1e8.ShaderBindings.Size) {
      operator_delete__(local_1e8.ShaderBindings.Data.InlineStorage[0]);
    }
    local_1e8.ShaderBindings.Size = 0;
    local_1e8.ShaderBindings.Data.InlineStorage[0] = (uchar *)0x0;
    if (local_1e8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData !=
        (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FMemory::Free((void *)local_1e8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData);
    }
    pFVar9 = (FMeshDrawCommand *)(this->Hashes).AllocatorInstance.Data;
    if ((pFVar9 <= (FMeshDrawCommand *)local_res20) &&
       (lVar8 = (longlong)(this->Hashes).ArrayMax,
       local_res20 <
       (uint *)((longlong)(pFVar9->ShaderBindings).ShaderLayouts.AllocatorInstance.InlineData +
               lVar8 * 4))) {
      local_200 = (longlong)(this->Hashes).ArrayNum;
      local_1f8 = 4;
      local_218 = (FMeshDrawCommand *)local_res20;
      local_210 = pFVar9;
      local_208 = lVar8;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    iVar7 = (this->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar7 + 1;
    *(uint *)(pFVar2 + (longlong)iVar7 * 4) = local_res20[0];
  }
  else {
    uVar5 = TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Pop
                      (&this->FreeList);
    iVar7 = (this->KeyVals).ArrayNum;
    pFVar9 = (FMeshDrawCommand *)(longlong)(int)uVar5;
    uVar6 = 0;
    if ((int)uVar5 < iVar7) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      local_218 = pFVar9;
      local_210 = (FMeshDrawCommand *)(longlong)iVar7;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    this_00 = (FMeshDrawCommand *)
              ((this->KeyVals).AllocatorInstance.Data + (longlong)pFVar9 * 0x1a0);
    FMeshDrawCommand::FMeshDrawCommand(this_00,param_1);
    uVar6 = local_res20[0];
    *(atomic<unsigned_int> *)this_00[1].ShaderBindings.ShaderLayouts.AllocatorInstance.InlineData =
         param_2->Num;
    iVar7 = (this->Hashes).ArrayNum;
    local_210 = (FMeshDrawCommand *)(longlong)iVar7;
    uVar10 = 0;
    if ((int)uVar5 < iVar7) {
      uVar10 = ~uVar5 >> 0x1f;
    }
    if (uVar10 == 0) {
      local_218 = pFVar9;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    *(uint *)((this->Hashes).AllocatorInstance.Data + (longlong)pFVar9 * 4) = uVar6;
  }
  return uVar5;
}

// Empty @ 144f04a60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
::FData::Empty(FData *this)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar7 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar7;
    if (uVar7 == uVar2) {
      (this->KeyVals).ArrayNum = 0;
      DestructItems<Experimental::RobinHoodHashTable_Private::TKeyValue<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState>,int>
                ((TKeyValue<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState>
                  *)(this->KeyVals).AllocatorInstance.Data,0);
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa8,8,0,(ForAnyElementType *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      return;
    }
    uVar6 = 0;
    if ((int)uVar7 < (this->KeyVals).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    pFVar3 = (this->KeyVals).AllocatorInstance.Data;
    if (*(FShaderMapResource **)(pFVar3 + (longlong)(int)uVar7 * 0xa8 + 0x48) !=
        (FShaderMapResource *)0x0) {
      FShaderMapResource::Release
                (*(FShaderMapResource **)(pFVar3 + (longlong)(int)uVar7 * 0xa8 + 0x48));
    }
    if (*(FShaderMapResource **)(pFVar3 + (longlong)(int)uVar7 * 0xa8 + 0x40) !=
        (FShaderMapResource *)0x0) {
      FShaderMapResource::Release
                (*(FShaderMapResource **)(pFVar3 + (longlong)(int)uVar7 * 0xa8 + 0x40));
    }
    if (*(FShaderMapResource **)(pFVar3 + (longlong)(int)uVar7 * 0xa8 + 0x38) !=
        (FShaderMapResource *)0x0) {
      FShaderMapResource::Release
                (*(FShaderMapResource **)(pFVar3 + (longlong)(int)uVar7 * 0xa8 + 0x38));
    }
    if (*(FShaderMapResource **)(pFVar3 + (longlong)(int)uVar7 * 0xa8 + 0x30) !=
        (FShaderMapResource *)0x0) {
      FShaderMapResource::Release
                (*(FShaderMapResource **)(pFVar3 + (longlong)(int)uVar7 * 0xa8 + 0x30));
    }
    uVar7 = uVar7 + 1;
    if (uVar7 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar6 = 0;
        if ((int)uVar7 < (this->Hashes).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar7 * 4) ==
                -0x80000000) && (uVar7 = uVar7 + 1, uVar7 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Get @ 144f10460

TKeyValue<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState>
  *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState>
          *)((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 0xa8);
}

// Get @ 144f104e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

TKeyValue<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType>
  *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType>
          *)((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 0xa0);
}

// Get @ 144f10560

TKeyValue<FMeshDrawCommand,FMeshDrawCommandCount> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FMeshDrawCommand,FMeshDrawCommandCount> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FMeshDrawCommand,FMeshDrawCommandCount> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<FMeshDrawCommand,FMeshDrawCommandCount> *)
         ((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 0x1a0);
}

// Next @ 144f1dd80

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
::FData::Next(FData *this,FIteratorState param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  int in_R8D;
  
  uVar4 = in_R8D + 1;
  if ((uint)(this->KeyVals).ArrayNum <= uVar4) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
    return (FIteratorState)param_1.Index;
  }
  do {
    uVar3 = 0;
    if ((int)uVar4 < (this->Hashes).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FIteratorState)uVar4;
      }
    }
  } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) ==
            -0x80000000) && (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

// Next @ 144fccdb0

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::FData::Next(FData *this,FIteratorState param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  int in_R8D;
  
  uVar4 = in_R8D + 1;
  if ((uint)(this->KeyVals).ArrayNum <= uVar4) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
    return (FIteratorState)param_1.Index;
  }
  do {
    uVar3 = 0;
    if ((int)uVar4 < (this->Hashes).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FIteratorState)uVar4;
      }
    }
  } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) ==
            -0x80000000) && (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

// Allocate<FPrimitiveSceneInfo_const_*_const_&,FNaniteVisibility::FPrimitiveReferences> @ 14502bb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
::FData::Allocate<FPrimitiveSceneInfo_const_*_const_&,FNaniteVisibility::FPrimitiveReferences>
          (FData *this,FPrimitiveSceneInfo **param_1,FPrimitiveReferences *param_2,FHashType param_3
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FPrimitiveSceneInfo **ppFVar9;
  uint uVar10;
  FPrimitiveSceneInfo *local_res20;
  undefined1 auStack_e8 [32];
  FPrimitiveSceneInfo **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  FPrimitiveSceneInfo *local_98;
  FPrimitiveReferences local_90;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_res20._0_4_ = param_3.Hash;
  if ((this->FreeList).NumElements < 1) {
    local_98 = *param_1;
    uVar5 = (this->KeyVals).ArrayNum;
    FNaniteVisibility::FPrimitiveReferences::FPrimitiveReferences(&local_90,param_2);
    pFVar2 = (this->KeyVals).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_98) &&
       (lVar8 = (longlong)(this->KeyVals).ArrayMax,
       (FScriptContainerElement *)&local_98 < pFVar2 + lVar8 * 0x48)) {
      local_b0 = (longlong)(this->KeyVals).ArrayNum;
      local_a8 = 0x48;
      local_c8 = &local_98;
      local_c0 = pFVar2;
      local_b8 = lVar8;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    iVar7 = (this->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,(ForAnyElementType *)this,piVar1);
    }
    (this->KeyVals).ArrayNum = iVar7 + 1;
    pFVar2 = (this->KeyVals).AllocatorInstance.Data + (longlong)iVar7 * 0x48;
    *(FPrimitiveSceneInfo **)pFVar2 = local_98;
    FNaniteVisibility::FPrimitiveReferences::FPrimitiveReferences
              ((FPrimitiveReferences *)(pFVar2 + 8),&local_90);
    if (local_90.ShadingBins.AllocatorInstance.SecondaryData !=
        (ForElementType<FNaniteVisibility::FShadingBin>)0x0) {
      FMemory::Free((void *)local_90.ShadingBins.AllocatorInstance.SecondaryData);
    }
    if (local_90.RasterBins.AllocatorInstance.SecondaryData !=
        (ForElementType<FNaniteVisibility::FRasterBin>)0x0) {
      FMemory::Free((void *)local_90.RasterBins.AllocatorInstance.SecondaryData);
    }
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_res20) &&
       (lVar8 = (longlong)(this->Hashes).ArrayMax,
       (FScriptContainerElement *)&local_res20 < pFVar2 + lVar8 * 4)) {
      local_b0 = (longlong)(this->Hashes).ArrayNum;
      local_a8 = 4;
      local_c8 = &local_res20;
      local_c0 = pFVar2;
      local_b8 = lVar8;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    iVar7 = (this->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar7 + 1;
    *(uint *)(pFVar2 + (longlong)iVar7 * 4) = local_res20._0_4_;
  }
  else {
    uVar5 = TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Pop
                      (&this->FreeList);
    iVar7 = (this->KeyVals).ArrayNum;
    ppFVar9 = (FPrimitiveSceneInfo **)(longlong)(int)uVar5;
    uVar6 = 0;
    if ((int)uVar5 < iVar7) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      local_c8 = ppFVar9;
      local_c0 = (FScriptContainerElement *)(longlong)iVar7;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    pFVar2 = (this->KeyVals).AllocatorInstance.Data + (longlong)ppFVar9 * 0x48;
    *(FPrimitiveSceneInfo **)pFVar2 = *param_1;
    FNaniteVisibility::FPrimitiveReferences::FPrimitiveReferences
              ((FPrimitiveReferences *)(pFVar2 + 8),param_2);
    uVar6 = local_res20._0_4_;
    iVar7 = (this->Hashes).ArrayNum;
    local_c0 = (FScriptContainerElement *)(longlong)iVar7;
    uVar10 = 0;
    if ((int)uVar5 < iVar7) {
      uVar10 = ~uVar5 >> 0x1f;
    }
    if (uVar10 == 0) {
      local_c8 = ppFVar9;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    *(uint *)((this->Hashes).AllocatorInstance.Data + (longlong)ppFVar9 * 4) = uVar6;
  }
  return uVar5;
}

// Allocate<FNaniteRasterPipeline_const_&,FNaniteRasterEntry> @ 14502be60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::FData::Allocate<FNaniteRasterPipeline_const_&,FNaniteRasterEntry>
          (FData *this,FNaniteRasterPipeline *param_1,FNaniteRasterEntry *param_2,FHashType param_3)

{
  int *piVar1;
  FDisplacementFadeRange *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FDisplacementScaling FVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  FMaterialRenderProxy **ppFVar13;
  uint uVar14;
  FMaterialRenderProxy *local_res20;
  undefined1 auStack_138 [32];
  FMaterialRenderProxy **local_118;
  FScriptContainerElement *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  FMaterialRenderProxy *local_e8;
  FDisplacementScaling FStack_e0;
  FDisplacementFadeRange local_d8;
  FDisplacementFadeRange FStack_d0;
  undefined1 local_c8 [72];
  undefined4 local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_res20._0_4_ = param_3.Hash;
  if ((this->FreeList).NumElements < 1) {
    local_e8 = param_1->RasterMaterial;
    FStack_e0 = param_1->DisplacementScaling;
    uVar9 = (this->KeyVals).ArrayNum;
    local_d8 = param_1->DisplacementFadeRange;
    FStack_d0.StartSizePixels = *(float *)&param_1->field_0x18;
    FStack_d0.EndSizePixels = *(float *)&param_1->field_0x1c;
    FNaniteRasterEntry::FNaniteRasterEntry((FNaniteRasterEntry *)local_c8,param_2);
    pFVar3 = (this->KeyVals).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_e8) &&
       (lVar12 = (longlong)(this->KeyVals).ArrayMax,
       (FScriptContainerElement *)&local_e8 < pFVar3 + lVar12 * 0x98)) {
      local_100 = (longlong)(this->KeyVals).ArrayNum;
      local_f8 = 0x98;
      local_118 = &local_e8;
      local_110 = pFVar3;
      local_108 = lVar12;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return uVar9;
      }
    }
    iVar11 = (this->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x898,(ForAnyElementType *)this,piVar1);
    }
    (this->KeyVals).ArrayNum = iVar11 + 1;
    lVar12 = (longlong)iVar11 * 0x98;
    pFVar3 = (this->KeyVals).AllocatorInstance.Data;
    *(FMaterialRenderProxy **)(pFVar3 + lVar12) = local_e8;
    *(FDisplacementScaling *)(pFVar3 + lVar12 + 8) = FStack_e0;
    *(FDisplacementFadeRange *)(pFVar3 + lVar12 + 0x10) = local_d8;
    ((FDisplacementFadeRange *)(pFVar3 + lVar12 + 0x10))[1] = FStack_d0;
    FNaniteRasterEntry::FNaniteRasterEntry
              ((FNaniteRasterEntry *)(pFVar3 + lVar12 + 0x20),(FNaniteRasterEntry *)local_c8);
    local_80 = 0;
    if ((void *)local_c8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c8._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_c8);
    pFVar3 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_res20) &&
       (lVar12 = (longlong)(this->Hashes).ArrayMax,
       (FScriptContainerElement *)&local_res20 < pFVar3 + lVar12 * 4)) {
      local_100 = (longlong)(this->Hashes).ArrayNum;
      local_f8 = 4;
      local_118 = &local_res20;
      local_110 = pFVar3;
      local_108 = lVar12;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return uVar9;
      }
    }
    iVar11 = (this->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&(this->Hashes).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar11 + 1;
    *(uint *)(pFVar3 + (longlong)iVar11 * 4) = local_res20._0_4_;
  }
  else {
    uVar9 = TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Pop
                      (&this->FreeList);
    iVar11 = (this->KeyVals).ArrayNum;
    ppFVar13 = (FMaterialRenderProxy **)(longlong)(int)uVar9;
    uVar10 = 0;
    if ((int)uVar9 < iVar11) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if (uVar10 == 0) {
      local_118 = ppFVar13;
      local_110 = (FScriptContainerElement *)(longlong)iVar11;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return uVar9;
      }
    }
    pFVar3 = (this->KeyVals).AllocatorInstance.Data;
    FVar5 = param_1->DisplacementScaling;
    lVar12 = (longlong)ppFVar13 * 0x98;
    *(FMaterialRenderProxy **)(pFVar3 + lVar12) = param_1->RasterMaterial;
    *(FDisplacementScaling *)(pFVar3 + lVar12 + 8) = FVar5;
    uVar6 = *(undefined4 *)&param_1->field_0x18;
    uVar7 = *(undefined4 *)&param_1->field_0x1c;
    pFVar2 = (FDisplacementFadeRange *)(pFVar3 + lVar12 + 0x10);
    *pFVar2 = param_1->DisplacementFadeRange;
    pFVar2[1].StartSizePixels = (float)uVar6;
    pFVar2[1].EndSizePixels = (float)uVar7;
    FNaniteRasterEntry::FNaniteRasterEntry((FNaniteRasterEntry *)(pFVar3 + lVar12 + 0x20),param_2);
    uVar10 = local_res20._0_4_;
    iVar11 = (this->Hashes).ArrayNum;
    local_110 = (FScriptContainerElement *)(longlong)iVar11;
    uVar14 = 0;
    if ((int)uVar9 < iVar11) {
      uVar14 = ~uVar9 >> 0x1f;
    }
    if (uVar14 == 0) {
      local_118 = ppFVar13;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return uVar9;
      }
    }
    *(uint *)((this->Hashes).AllocatorInstance.Data + (longlong)ppFVar13 * 4) = uVar10;
  }
  return uVar9;
}

// Allocate<FNaniteShadingPipeline_const_&,FNaniteShadingEntry> @ 14502c160

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::FData::Allocate<FNaniteShadingPipeline_const_&,FNaniteShadingEntry>
          (FData *this,FNaniteShadingPipeline *param_1,FNaniteShadingEntry *param_2,
          FHashType param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FNaniteShadingPipeline *pFVar8;
  uint uVar9;
  uint local_res20 [2];
  FNaniteShadingPipeline local_98;
  TPimplPtr<FNaniteBasePassData,1> local_40;
  TPimplPtr<FNaniteLumenCardData,1> local_38;
  uint local_30;
  ushort local_2c;
  
  local_res20[0] = param_3.Hash;
  if ((this->FreeList).NumElements < 1) {
    uVar5 = (this->KeyVals).ArrayNum;
    FNaniteShadingPipeline::FNaniteShadingPipeline(&local_98,param_1);
    local_40 = (TPimplPtr<FNaniteBasePassData,1>)(param_2->ShadingPipeline).Object;
    local_38 = (TPimplPtr<FNaniteLumenCardData,1>)
               (param_2->ShadingPipeline).SharedReferenceCount.ReferenceController;
    (param_2->ShadingPipeline).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_2->ShadingPipeline).Object = (FNaniteShadingPipeline *)0x0;
    local_30 = param_2->ReferenceCount;
    pFVar8 = (FNaniteShadingPipeline *)(this->KeyVals).AllocatorInstance.Data;
    local_2c = param_2->BinIndex;
    if ((pFVar8 <= &local_98) &&
       (&local_98 <
        (FNaniteShadingPipeline *)((longlong)pFVar8 + (longlong)(this->KeyVals).ArrayMax * 0x70))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    iVar7 = (this->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x870,(ForAnyElementType *)this,piVar1);
    }
    (this->KeyVals).ArrayNum = iVar7 + 1;
    pFVar8 = (FNaniteShadingPipeline *)
             ((this->KeyVals).AllocatorInstance.Data + (longlong)iVar7 * 0x70);
    FNaniteShadingPipeline::FNaniteShadingPipeline(pFVar8,&local_98);
    pFVar8[1].BasePassData = local_40;
    pFVar8[1].LumenCardData = local_38;
    local_38 = (TPimplPtr<FNaniteLumenCardData,1>)0x0;
    local_40 = (TPimplPtr<FNaniteBasePassData,1>)0x0;
    *(uint *)&pFVar8[1].MaterialCacheData = local_30;
    *(ushort *)&pFVar8[1].MaterialCacheData.field_0x4 = local_2c;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    FNaniteShadingPipeline::~FNaniteShadingPipeline(&local_98);
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_res20) &&
       ((FScriptContainerElement *)local_res20 < pFVar2 + (longlong)(this->Hashes).ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    iVar7 = (this->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar7 + 1;
    *(uint *)(pFVar2 + (longlong)iVar7 * 4) = local_res20[0];
  }
  else {
    uVar5 = TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Pop
                      (&this->FreeList);
    uVar6 = 0;
    if ((int)uVar5 < (this->KeyVals).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    pFVar8 = (FNaniteShadingPipeline *)
             ((this->KeyVals).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x70);
    FNaniteShadingPipeline::FNaniteShadingPipeline(pFVar8,param_1);
    uVar6 = local_res20[0];
    pFVar8[1].BasePassData = (TPimplPtr<FNaniteBasePassData,1>)(param_2->ShadingPipeline).Object;
    pFVar8[1].LumenCardData =
         (TPimplPtr<FNaniteLumenCardData,1>)
         (param_2->ShadingPipeline).SharedReferenceCount.ReferenceController;
    (param_2->ShadingPipeline).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_2->ShadingPipeline).Object = (FNaniteShadingPipeline *)0x0;
    *(uint *)&pFVar8[1].MaterialCacheData = param_2->ReferenceCount;
    *(ushort *)&pFVar8[1].MaterialCacheData.field_0x4 = param_2->BinIndex;
    uVar9 = 0;
    if ((int)uVar5 < (this->Hashes).ArrayNum) {
      uVar9 = ~uVar5 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    *(uint *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = uVar6;
  }
  return uVar5;
}

// Allocate<FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType> @ 14502c490

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLumenShadingBinEntry,0>,TSizedDefaultAllocator<32>_>
::FData::Allocate<FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType>
          (FData *this,FLumenShadingBinEntry *param_1,FUnitType *param_2,FHashType param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint local_res20 [2];
  undefined8 local_28;
  undefined4 local_20;
  
  local_res20[0] = param_3.Hash;
  if ((this->FreeList).NumElements < 1) {
    local_20 = *(undefined4 *)&(param_1->ShadingBin).BinIndex;
    pFVar2 = (this->KeyVals).AllocatorInstance.Data;
    local_28._0_4_ = param_1->BuildIndex;
    local_28._4_4_ = (param_1->ShadingBin).BinId;
    uVar6 = (this->KeyVals).ArrayNum;
    if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 < pFVar2 + (longlong)(this->KeyVals).ArrayMax * 0xc)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
    }
    iVar7 = (this->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,(ForAnyElementType *)this,piVar1);
    }
    (this->KeyVals).ArrayNum = iVar7 + 1;
    pFVar2 = (this->KeyVals).AllocatorInstance.Data;
    *(undefined8 *)(pFVar2 + (longlong)iVar7 * 0xc) = local_28;
    *(undefined4 *)(pFVar2 + (longlong)iVar7 * 0xc + 8) = local_20;
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_res20) &&
       ((FScriptContainerElement *)local_res20 < pFVar2 + (longlong)(this->Hashes).ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
    }
    iVar7 = (this->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar7 + 1;
    *(uint *)(pFVar2 + (longlong)iVar7 * 4) = local_res20[0];
    return uVar6;
  }
  uVar5 = TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Pop(&this->FreeList);
  lVar8 = (longlong)(int)uVar5;
  uVar6 = 0;
  if ((int)uVar5 < (this->KeyVals).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  uVar6 = local_res20[0];
  pFVar2 = (this->KeyVals).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + lVar8 * 0xc) = *(undefined8 *)param_1;
  *(undefined4 *)(pFVar2 + lVar8 * 0xc + 8) = *(undefined4 *)&(param_1->ShadingBin).BinIndex;
  uVar9 = 0;
  if ((int)uVar5 < (this->Hashes).ArrayNum) {
    uVar9 = ~uVar5 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  *(uint *)((this->Hashes).AllocatorInstance.Data + lVar8 * 4) = uVar6;
  return uVar5;
}

// ~FData @ 145038130

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLumenShadingBinEntry,0>,TSizedDefaultAllocator<32>_>
::FData::~FData(FData *this)

{
  int *piVar1;
  uint uVar2;
  ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
  FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar8 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar8;
    if (uVar8 == uVar2) {
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      FVar3 = (this->FreeList).FreeList.AllocatorInstance.SecondaryData;
      if (FVar3 != (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                    )0x0) {
        FMemory::Free((void *)FVar3);
      }
      pFVar4 = (this->Hashes).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (this->KeyVals).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      return;
    }
    uVar7 = 0;
    if ((int)uVar8 < (this->KeyVals).ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    uVar8 = uVar8 + 1;
    if (uVar8 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar7 = 0;
        if ((int)uVar8 < (this->Hashes).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar8 * 4) ==
                -0x80000000) && (uVar8 = uVar8 + 1, uVar8 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Empty @ 145058f60

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::FData::Empty(FData *this)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar7 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar7;
    if (uVar7 == uVar2) {
      (this->KeyVals).ArrayNum = 0;
      DestructItems<Experimental::RobinHoodHashTable_Private::TKeyValue<FNaniteRasterPipeline,FNaniteRasterEntry>,int>
                ((TKeyValue<FNaniteRasterPipeline,FNaniteRasterEntry> *)
                 (this->KeyVals).AllocatorInstance.Data,0);
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x98,8,0,(ForAnyElementType *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      return;
    }
    uVar6 = 0;
    if ((int)uVar7 < (this->KeyVals).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    pFVar3 = (this->KeyVals).AllocatorInstance.Data;
    *(undefined4 *)(pFVar3 + (longlong)(int)uVar7 * 0x98 + 0x68) = 0;
    if (*(void **)(pFVar3 + (longlong)(int)uVar7 * 0x98 + 0x60) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar3 + (longlong)(int)uVar7 * 0x98 + 0x60));
    }
    TSparseArray<TSparseSetElement<TTuple<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(pFVar3 + (longlong)(int)uVar7 * 0x98 + 0x20));
    uVar7 = uVar7 + 1;
    if (uVar7 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar6 = 0;
        if ((int)uVar7 < (this->Hashes).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar7 * 4) ==
                -0x80000000) && (uVar7 = uVar7 + 1, uVar7 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Empty @ 145059120

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::FData::Empty(FData *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FNaniteShadingPipeline *this_00;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar6 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar6;
    if (uVar6 == uVar2) {
      (this->KeyVals).ArrayNum = 0;
      DestructItems<Experimental::RobinHoodHashTable_Private::TKeyValue<FNaniteShadingPipeline,FNaniteShadingEntry>,int>
                ((TKeyValue<FNaniteShadingPipeline,FNaniteShadingEntry> *)
                 (this->KeyVals).AllocatorInstance.Data,0);
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x70,8,0,(ForAnyElementType *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      return;
    }
    uVar5 = 0;
    if ((int)uVar6 < (this->KeyVals).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    this_00 = (FNaniteShadingPipeline *)
              ((this->KeyVals).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)this_00[1].LumenCardData);
    FNaniteShadingPipeline::~FNaniteShadingPipeline(this_00);
    uVar6 = uVar6 + 1;
    if (uVar6 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->Hashes).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) ==
                -0x80000000) && (uVar6 = uVar6 + 1, uVar6 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Get @ 145061a50

TKeyValue<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences> *)
         ((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 0x48);
}

// Get @ 145061ad0

TKeyValue<FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLumenShadingBinEntry,0>,TSizedDefaultAllocator<32>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType> *)
         ((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 0xc);
}

// Get @ 145061b50

TKeyValue<FNaniteRasterPipeline,FNaniteRasterEntry> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FNaniteRasterPipeline,FNaniteRasterEntry> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FNaniteRasterPipeline,FNaniteRasterEntry> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<FNaniteRasterPipeline,FNaniteRasterEntry> *)
         ((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 0x98);
}

// Get @ 145061bd0

TKeyValue<FNaniteShadingPipeline,FNaniteShadingEntry> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FNaniteShadingPipeline,FNaniteShadingEntry> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FNaniteShadingPipeline,FNaniteShadingEntry> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<FNaniteShadingPipeline,FNaniteShadingEntry> *)
         ((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 0x70);
}

// Get @ 145061c50

TKeyValue<FNaniteShadingPipeline,FNaniteShadingEntry> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FNaniteShadingPipeline,FNaniteShadingEntry> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FNaniteShadingPipeline,FNaniteShadingEntry> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<FNaniteShadingPipeline,FNaniteShadingEntry> *)
         ((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 0x70);
}

// Next @ 14506d390

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
::FData::Next(FData *this,FIteratorState param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  int in_R8D;
  
  uVar4 = in_R8D + 1;
  if ((uint)(this->KeyVals).ArrayNum <= uVar4) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
    return (FIteratorState)param_1.Index;
  }
  do {
    uVar3 = 0;
    if ((int)uVar4 < (this->Hashes).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FIteratorState)uVar4;
      }
    }
  } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) ==
            -0x80000000) && (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

// Next @ 14506d440

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FLumenShadingBinEntry,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLumenShadingBinEntry,0>,TSizedDefaultAllocator<32>_>
::FData::Next(FData *this,FIteratorState param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  int in_R8D;
  
  uVar4 = in_R8D + 1;
  if ((uint)(this->KeyVals).ArrayNum <= uVar4) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
    return (FIteratorState)param_1.Index;
  }
  do {
    uVar3 = 0;
    if ((int)uVar4 < (this->Hashes).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FIteratorState)uVar4;
      }
    }
  } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) ==
            -0x80000000) && (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

// Next @ 14506d4f0

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
::FData::Next(FData *this,FIteratorState param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  int in_R8D;
  
  uVar4 = in_R8D + 1;
  if ((uint)(this->KeyVals).ArrayNum <= uVar4) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
    return (FIteratorState)param_1.Index;
  }
  do {
    uVar3 = 0;
    if ((int)uVar4 < (this->Hashes).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FIteratorState)uVar4;
      }
    }
  } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) ==
            -0x80000000) && (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

// Allocate<int_const_&,FScene::FRayTracingCullingGroup_const_&> @ 1453d20f0

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
::FData::Allocate<int_const_&,FScene::FRayTracingCullingGroup_const_&>
          (FData *this,int *param_1,FRayTracingCullingGroup *param_2,FHashType param_3)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  uint local_res20 [2];
  undefined1 local_88 [96];
  
  local_res20[0] = param_3.Hash;
  if ((this->FreeList).NumElements < 1) {
    uVar8 = (this->KeyVals).ArrayNum;
    pFVar10 = (FScriptContainerElement *)
              TKeyValue<int,FScene::FRayTracingCullingGroup>::
              TKeyValue<int,FScene::FRayTracingCullingGroup><int_const_&,FScene::FRayTracingCullingGroup_const_&>
                        ((TKeyValue<int,FScene::FRayTracingCullingGroup> *)local_88,param_1,param_2)
    ;
    pFVar3 = (this->KeyVals).AllocatorInstance.Data;
    if ((pFVar3 <= pFVar10) && (pFVar10 < pFVar3 + (longlong)(this->KeyVals).ArrayMax * 0x58)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return uVar8;
      }
    }
    iVar9 = (this->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,(ForAnyElementType *)this,piVar1);
    }
    (this->KeyVals).ArrayNum = iVar9 + 1;
    pFVar3 = (this->KeyVals).AllocatorInstance.Data;
    lVar11 = (longlong)iVar9 * 0x58;
    *(undefined4 *)(pFVar3 + lVar11) = *(undefined4 *)&pFVar10->field_0x0;
    uVar5 = *(undefined8 *)(pFVar10 + 0x10);
    *(undefined8 *)(pFVar3 + lVar11 + 8) = *(undefined8 *)(pFVar10 + 8);
    *(undefined8 *)(pFVar3 + lVar11 + 8 + 8) = uVar5;
    uVar5 = *(undefined8 *)(pFVar10 + 0x20);
    *(undefined8 *)(pFVar3 + lVar11 + 0x18) = *(undefined8 *)(pFVar10 + 0x18);
    *(undefined8 *)(pFVar3 + lVar11 + 0x18 + 8) = uVar5;
    uVar5 = *(undefined8 *)(pFVar10 + 0x30);
    *(undefined8 *)(pFVar3 + lVar11 + 0x28) = *(undefined8 *)(pFVar10 + 0x28);
    *(undefined8 *)(pFVar3 + lVar11 + 0x28 + 8) = uVar5;
    *(undefined8 *)(pFVar3 + lVar11 + 0x38) = *(undefined8 *)(pFVar10 + 0x38);
    uVar2 = *(undefined4 *)(pFVar10 + 0x40);
    *(undefined8 *)(pFVar3 + lVar11 + 0x48) = 0;
    *(undefined4 *)(pFVar3 + lVar11 + 0x40) = uVar2;
    *(undefined8 *)(pFVar3 + lVar11 + 0x48) = *(undefined8 *)(pFVar10 + 0x48);
    *(undefined8 *)(pFVar10 + 0x48) = 0;
    *(undefined4 *)(pFVar3 + lVar11 + 0x50) = *(undefined4 *)(pFVar10 + 0x50);
    *(undefined4 *)(pFVar3 + lVar11 + 0x54) = *(undefined4 *)(pFVar10 + 0x54);
    *(undefined8 *)(pFVar10 + 0x50) = 0;
    if ((void *)local_88._72_8_ != (void *)0x0) {
      FMemory::Free((void *)local_88._72_8_);
    }
    pFVar3 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_res20) &&
       ((FScriptContainerElement *)local_res20 < pFVar3 + (longlong)(this->Hashes).ArrayMax * 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return uVar8;
      }
    }
    iVar9 = (this->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar9 + 1;
    *(uint *)(pFVar3 + (longlong)iVar9 * 4) = local_res20[0];
    return uVar8;
  }
  uVar7 = TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Pop(&this->FreeList);
  uVar8 = 0;
  if ((int)uVar7 < (this->KeyVals).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return uVar8;
    }
  }
  TKeyValue<int,FScene::FRayTracingCullingGroup>::
  TKeyValue<int,FScene::FRayTracingCullingGroup><int_const_&,FScene::FRayTracingCullingGroup_const_&>
            ((TKeyValue<int,FScene::FRayTracingCullingGroup> *)
             ((this->KeyVals).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x58),param_1,param_2)
  ;
  uVar8 = local_res20[0];
  uVar12 = 0;
  if ((int)uVar7 < (this->Hashes).ArrayNum) {
    uVar12 = ~uVar7 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return uVar8;
    }
  }
  *(uint *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar7 * 4) = uVar8;
  return uVar7;
}

// Allocate<FLightSceneInfo_*_const_&,Experimental::RobinHoodHashTable_Private::FUnitType> @ 1453d23c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
::FData::Allocate<FLightSceneInfo_*_const_&,Experimental::RobinHoodHashTable_Private::FUnitType>
          (FData *this,FLightSceneInfo **param_1,FUnitType *param_2,FHashType param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_res20 [2];
  FLightSceneInfo *local_28 [2];
  
  local_res20[0] = param_3.Hash;
  if ((this->FreeList).NumElements < 1) {
    local_28[0] = *param_1;
    pFVar2 = (this->KeyVals).AllocatorInstance.Data;
    uVar6 = (this->KeyVals).ArrayNum;
    if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->KeyVals).ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
    }
    iVar7 = (this->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->KeyVals).ArrayNum = iVar7 + 1;
    *(FLightSceneInfo **)((this->KeyVals).AllocatorInstance.Data + (longlong)iVar7 * 8) =
         local_28[0];
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_res20) &&
       ((FScriptContainerElement *)local_res20 < pFVar2 + (longlong)(this->Hashes).ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
    }
    iVar7 = (this->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar7 + 1;
    *(uint *)(pFVar2 + (longlong)iVar7 * 4) = local_res20[0];
    return uVar6;
  }
  uVar5 = TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Pop(&this->FreeList);
  uVar6 = 0;
  if ((int)uVar5 < (this->KeyVals).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  uVar6 = local_res20[0];
  *(FLightSceneInfo **)((this->KeyVals).AllocatorInstance.Data + (longlong)(int)uVar5 * 8) =
       *param_1;
  uVar8 = 0;
  if ((int)uVar5 < (this->Hashes).ArrayNum) {
    uVar8 = ~uVar5 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  *(uint *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = uVar6;
  return uVar5;
}

// Allocate<FPrimitiveSceneInfo_*_const_&,Experimental::RobinHoodHashTable_Private::FUnitType> @ 1453d2620

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
::FData::Allocate<FPrimitiveSceneInfo_*_const_&,Experimental::RobinHoodHashTable_Private::FUnitType>
          (FData *this,FPrimitiveSceneInfo **param_1,FUnitType *param_2,FHashType param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_res20 [2];
  FPrimitiveSceneInfo *local_28 [2];
  
  local_res20[0] = param_3.Hash;
  if ((this->FreeList).NumElements < 1) {
    local_28[0] = *param_1;
    pFVar2 = (this->KeyVals).AllocatorInstance.Data;
    uVar6 = (this->KeyVals).ArrayNum;
    if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->KeyVals).ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
    }
    iVar7 = (this->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->KeyVals).ArrayNum = iVar7 + 1;
    *(FPrimitiveSceneInfo **)((this->KeyVals).AllocatorInstance.Data + (longlong)iVar7 * 8) =
         local_28[0];
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_res20) &&
       ((FScriptContainerElement *)local_res20 < pFVar2 + (longlong)(this->Hashes).ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
    }
    iVar7 = (this->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar7 + 1;
    *(uint *)(pFVar2 + (longlong)iVar7 * 4) = local_res20[0];
    return uVar6;
  }
  uVar5 = TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Pop(&this->FreeList);
  uVar6 = 0;
  if ((int)uVar5 < (this->KeyVals).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  uVar6 = local_res20[0];
  *(FPrimitiveSceneInfo **)((this->KeyVals).AllocatorInstance.Data + (longlong)(int)uVar5 * 8) =
       *param_1;
  uVar8 = 0;
  if ((int)uVar5 < (this->Hashes).ArrayNum) {
    uVar8 = ~uVar5 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  *(uint *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = uVar6;
  return uVar5;
}

// Allocate<FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType> @ 1453d2880

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FScene::FRayTracingCullingGroup_*,0>,TSizedDefaultAllocator<32>_>
::FData::
Allocate<FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType>
          (FData *this,FRayTracingCullingGroup **param_1,FUnitType *param_2,FHashType param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_res20 [2];
  FRayTracingCullingGroup *local_28 [2];
  
  local_res20[0] = param_3.Hash;
  if ((this->FreeList).NumElements < 1) {
    local_28[0] = *param_1;
    pFVar2 = (this->KeyVals).AllocatorInstance.Data;
    uVar6 = (this->KeyVals).ArrayNum;
    if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->KeyVals).ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
    }
    iVar7 = (this->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->KeyVals).ArrayNum = iVar7 + 1;
    *(FRayTracingCullingGroup **)((this->KeyVals).AllocatorInstance.Data + (longlong)iVar7 * 8) =
         local_28[0];
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_res20) &&
       ((FScriptContainerElement *)local_res20 < pFVar2 + (longlong)(this->Hashes).ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
    }
    iVar7 = (this->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar7 + 1;
    *(uint *)(pFVar2 + (longlong)iVar7 * 4) = local_res20[0];
    return uVar6;
  }
  uVar5 = TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Pop(&this->FreeList);
  uVar6 = 0;
  if ((int)uVar5 < (this->KeyVals).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  uVar6 = local_res20[0];
  *(FRayTracingCullingGroup **)((this->KeyVals).AllocatorInstance.Data + (longlong)(int)uVar5 * 8) =
       *param_1;
  uVar8 = 0;
  if ((int)uVar5 < (this->Hashes).ArrayNum) {
    uVar8 = ~uVar5 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  *(uint *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = uVar6;
  return uVar5;
}

// ~FData @ 145404ec0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FScene::FRayTracingCullingGroup_*,0>,TSizedDefaultAllocator<32>_>
::FData::~FData(FData *this)

{
  int *piVar1;
  uint uVar2;
  ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
  FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar8 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar8;
    if (uVar8 == uVar2) {
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      FVar3 = (this->FreeList).FreeList.AllocatorInstance.SecondaryData;
      if (FVar3 != (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                    )0x0) {
        FMemory::Free((void *)FVar3);
      }
      pFVar4 = (this->Hashes).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (this->KeyVals).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      return;
    }
    uVar7 = 0;
    if ((int)uVar8 < (this->KeyVals).ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    uVar8 = uVar8 + 1;
    if (uVar8 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar7 = 0;
        if ((int)uVar8 < (this->Hashes).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar8 * 4) ==
                -0x80000000) && (uVar8 = uVar8 + 1, uVar8 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Empty @ 14542d280

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
::FData::Empty(FData *this)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar7 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar7;
    if (uVar7 == uVar2) {
      (this->KeyVals).ArrayNum = 0;
      DestructItems<Experimental::RobinHoodHashTable_Private::TKeyValue<int,FScene::FRayTracingCullingGroup>,int>
                ((TKeyValue<int,FScene::FRayTracingCullingGroup> *)
                 (this->KeyVals).AllocatorInstance.Data,0);
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,0,(ForAnyElementType *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      return;
    }
    uVar6 = 0;
    if ((int)uVar7 < (this->KeyVals).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    pvVar3 = *(void **)((this->KeyVals).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x58 + 0x48)
    ;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    uVar7 = uVar7 + 1;
    if (uVar7 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar6 = 0;
        if ((int)uVar7 < (this->Hashes).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar7 * 4) ==
                -0x80000000) && (uVar7 = uVar7 + 1, uVar7 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Empty @ 14542d430

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
::FData::Empty(FData *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar6 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar6;
    if (uVar6 == uVar2) {
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      return;
    }
    uVar5 = 0;
    if ((int)uVar6 < (this->KeyVals).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    uVar6 = uVar6 + 1;
    if (uVar6 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->Hashes).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) ==
                -0x80000000) && (uVar6 = uVar6 + 1, uVar6 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Empty @ 14542d5b0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
::FData::Empty(FData *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar6 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar6;
    if (uVar6 == uVar2) {
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      return;
    }
    uVar5 = 0;
    if ((int)uVar6 < (this->KeyVals).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    uVar6 = uVar6 + 1;
    if (uVar6 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->Hashes).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) ==
                -0x80000000) && (uVar6 = uVar6 + 1, uVar6 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Empty @ 14542d730

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
::FData::Empty(FData *this)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar8 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar8;
    if (uVar8 == uVar2) {
      (this->KeyVals).ArrayNum = 0;
      DestructItems<Experimental::RobinHoodHashTable_Private::TKeyValue<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences>,int>
                ((TKeyValue<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences> *)
                 (this->KeyVals).AllocatorInstance.Data,0);
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,0,(ForAnyElementType *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      return;
    }
    uVar7 = 0;
    if ((int)uVar8 < (this->KeyVals).ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    pFVar3 = (this->KeyVals).AllocatorInstance.Data;
    pvVar4 = *(void **)(pFVar3 + (longlong)(int)uVar8 * 0x48 + 0x30);
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    pvVar4 = *(void **)(pFVar3 + (longlong)(int)uVar8 * 0x48 + 0x18);
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    uVar8 = uVar8 + 1;
    if (uVar8 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar7 = 0;
        if ((int)uVar8 < (this->Hashes).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar8 * 4) ==
                -0x80000000) && (uVar8 = uVar8 + 1, uVar8 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Empty @ 14542d900

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
::FData::Empty(FData *this)

{
  int *piVar1;
  uint uVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FMeshDrawShaderBindings *this_00;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar7 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar7;
    if (uVar7 == uVar2) {
      (this->KeyVals).ArrayNum = 0;
      DestructItems<Experimental::RobinHoodHashTable_Private::TKeyValue<FMeshDrawCommand,FMeshDrawCommandCount>,int>
                ((TKeyValue<FMeshDrawCommand,FMeshDrawCommandCount> *)
                 (this->KeyVals).AllocatorInstance.Data,0);
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1a0,8,0,(ForAnyElementType *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      return;
    }
    uVar6 = 0;
    if ((int)uVar7 < (this->KeyVals).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    this_00 = (FMeshDrawShaderBindings *)
              ((this->KeyVals).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x1a0);
    puVar3 = this_00[2].Data.InlineStorage[7];
    if (puVar3 != (uchar *)0x0) {
      FMemory::Free(puVar3);
    }
    puVar3 = this_00[1].Data.InlineStorage[7];
    if (puVar3 != (uchar *)0x0) {
      FMemory::Free(puVar3);
    }
    FMeshDrawShaderBindings::~FMeshDrawShaderBindings(this_00);
    uVar7 = uVar7 + 1;
    if (uVar7 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar6 = 0;
        if ((int)uVar7 < (this->Hashes).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar7 * 4) ==
                -0x80000000) && (uVar7 = uVar7 + 1, uVar7 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Get @ 14543c6a0

TKeyValue<int,FScene::FRayTracingCullingGroup> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<int,FScene::FRayTracingCullingGroup> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<int,FScene::FRayTracingCullingGroup> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<int,FScene::FRayTracingCullingGroup> *)
         ((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 0x58);
}

// Get @ 14543c720

TKeyValue<FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType> *
__thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FScene::FRayTracingCullingGroup_*,0>,TSizedDefaultAllocator<32>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType>
  *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType>
          *)((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
}

// Get @ 14543c7a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

TKeyValue<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType> *)
         ((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
}

// Get @ 14543c820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

TKeyValue<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType> *)
         ((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
}

// Get @ 14543c8a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TKeyValue<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType> *)
         ((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
}

// Next @ 145444e80

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<int,FScene::FRayTracingCullingGroup,TDefaultMapHashableKeyFuncs<int,FScene::FRayTracingCullingGroup,0>,TSizedDefaultAllocator<32>_>
::FData::Next(FData *this,FIteratorState param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  int in_R8D;
  
  uVar4 = in_R8D + 1;
  if ((uint)(this->KeyVals).ArrayNum <= uVar4) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
    return (FIteratorState)param_1.Index;
  }
  do {
    uVar3 = 0;
    if ((int)uVar4 < (this->Hashes).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FIteratorState)uVar4;
      }
    }
  } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) ==
            -0x80000000) && (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

// Next @ 145444f30

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FScene::FRayTracingCullingGroup_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FScene::FRayTracingCullingGroup_*,0>,TSizedDefaultAllocator<32>_>
::FData::Next(FData *this,FIteratorState param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  int in_R8D;
  
  uVar4 = in_R8D + 1;
  if ((uint)(this->KeyVals).ArrayNum <= uVar4) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
    return (FIteratorState)param_1.Index;
  }
  do {
    uVar3 = 0;
    if ((int)uVar4 < (this->Hashes).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FIteratorState)uVar4;
      }
    }
  } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) ==
            -0x80000000) && (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

// Next @ 145444fe0

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
::FData::Next(FData *this,FIteratorState param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  int in_R8D;
  
  uVar4 = in_R8D + 1;
  if ((uint)(this->KeyVals).ArrayNum <= uVar4) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
    return (FIteratorState)param_1.Index;
  }
  do {
    uVar3 = 0;
    if ((int)uVar4 < (this->Hashes).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FIteratorState)uVar4;
      }
    }
  } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) ==
            -0x80000000) && (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

// Next @ 145445090

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
::FData::Next(FData *this,FIteratorState param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  int in_R8D;
  
  uVar4 = in_R8D + 1;
  if ((uint)(this->KeyVals).ArrayNum <= uVar4) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
    return (FIteratorState)param_1.Index;
  }
  do {
    uVar3 = 0;
    if ((int)uVar4 < (this->Hashes).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FIteratorState)uVar4;
      }
    }
  } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) ==
            -0x80000000) && (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

// Next @ 145445140

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
::FData::Next(FData *this,FIteratorState param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  int in_R8D;
  
  uVar4 = in_R8D + 1;
  if ((uint)(this->KeyVals).ArrayNum <= uVar4) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
    return (FIteratorState)param_1.Index;
  }
  do {
    uVar3 = 0;
    if ((int)uVar4 < (this->Hashes).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FIteratorState)uVar4;
      }
    }
  } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) ==
            -0x80000000) && (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

// Allocate<FSceneCulling::FBlockLocAligned_const_&,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock> @ 1454700f0

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
::FData::
Allocate<FSceneCulling::FBlockLocAligned_const_&,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock>
          (FData *this,FBlockLocAligned *param_1,FCellBlock *param_2,FHashType param_3)

{
  TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  void *_Dst;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
  FVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint local_res20 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  ulong64 local_38;
  undefined8 uStack_30;
  
  iVar9 = (this->FreeList).NumElements;
  local_res20[0] = param_3.Hash;
  if (iVar9 < 1) {
    uVar8 = (this->KeyVals).ArrayNum;
    local_38 = param_2->CoarseCellMask;
    uStack_30._0_4_ = param_2->GridOffset;
    uStack_30._4_4_ = param_2->NumItemChunks;
    pFVar3 = (this->KeyVals).AllocatorInstance.Data;
    local_48 = *(undefined8 *)&(param_1->Data).field0_0x0;
    uStack_40 = *(undefined8 *)((longlong)&(param_1->Data).field0_0x0 + 8);
    if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)(this->KeyVals).ArrayMax * 0x20))
    {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return uVar8;
      }
    }
    iVar9 = (this->KeyVals).ArrayNum;
    piVar2 = &(this->KeyVals).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1020,(ForAnyElementType *)this,piVar2);
    }
    (this->KeyVals).ArrayNum = iVar9 + 1;
    pFVar4 = (this->KeyVals).AllocatorInstance.Data;
    pFVar3 = pFVar4 + (longlong)iVar9 * 0x20;
    *(undefined8 *)pFVar3 = local_48;
    *(undefined8 *)(pFVar3 + 8) = uStack_40;
    pFVar4 = pFVar4 + (longlong)iVar9 * 0x20 + 0x10;
    *(ulong64 *)pFVar4 = local_38;
    *(undefined8 *)(pFVar4 + 8) = uStack_30;
    pFVar3 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_res20) &&
       ((FScriptContainerElement *)local_res20 < pFVar3 + (longlong)(this->Hashes).ArrayMax * 4)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return uVar8;
      }
    }
    iVar9 = (this->Hashes).ArrayNum;
    piVar2 = &(this->Hashes).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Hashes).AllocatorInstance,piVar2);
    }
    pFVar3 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar9 + 1;
    *(uint *)(pFVar3 + (longlong)iVar9 * 4) = local_res20[0];
    return uVar8;
  }
  pTVar1 = &this->FreeList;
  (this->FreeList).NumElements = iVar9 + -1;
  iVar9 = (this->FreeList).FreeList.ArrayNum;
  uVar12 = iVar9 - 1;
  uVar8 = 0;
  if ((int)uVar12 < iVar9) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return uVar8;
    }
  }
  FVar10 = (this->FreeList).FreeList.AllocatorInstance.SecondaryData;
  iVar9 = (this->FreeList).FreeList.ArrayNum;
  if (FVar10 == (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                 )0x0) {
    FVar10 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
              )pTVar1;
  }
  uVar8 = ((int *)((longlong)FVar10 + -8))[(longlong)iVar9 * 2];
  lVar11 = (longlong)FVar10 + (longlong)iVar9 * 8;
  if (uVar8 == *(uint *)(lVar11 + -4)) {
    if (iVar9 < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return uVar8;
      }
    }
    iVar9 = (this->FreeList).FreeList.ArrayNum;
    FVar10 = (this->FreeList).FreeList.AllocatorInstance.SecondaryData;
    uVar12 = iVar9 - 1;
    if (FVar10 == (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                   )0x0) {
      FVar10 = (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                )pTVar1;
    }
    _Dst = (void *)((longlong)FVar10 + (longlong)(int)uVar12 * 8);
    iVar9 = ~uVar12 + iVar9;
    if (iVar9 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar9 << 3);
    }
    piVar2 = &(this->FreeList).FreeList.ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>_>
              (8,4,(ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
                    *)pTVar1,(this->FreeList).FreeList.ArrayNum,&(this->FreeList).FreeList.ArrayMax)
    ;
  }
  else {
    *(uint *)(lVar11 + -8) = uVar8 + 1;
  }
  uVar12 = 0;
  if ((int)uVar8 < (this->KeyVals).ArrayNum) {
    uVar12 = ~uVar8 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return uVar8;
    }
  }
  uVar12 = local_res20[0];
  pFVar4 = (this->KeyVals).AllocatorInstance.Data;
  uVar6 = *(undefined8 *)((longlong)&(param_1->Data).field0_0x0 + 8);
  lVar11 = (longlong)(int)uVar8 * 0x20;
  pFVar3 = pFVar4 + lVar11;
  *(undefined8 *)pFVar3 = *(undefined8 *)&(param_1->Data).field0_0x0;
  *(undefined8 *)(pFVar3 + 8) = uVar6;
  uVar6 = *(undefined8 *)&param_2->GridOffset;
  pFVar4 = pFVar4 + lVar11 + 0x10;
  *(ulong64 *)pFVar4 = param_2->CoarseCellMask;
  *(undefined8 *)(pFVar4 + 8) = uVar6;
  uVar13 = 0;
  if ((int)uVar8 < (this->Hashes).ArrayNum) {
    uVar13 = ~uVar8 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return uVar8;
    }
  }
  *(uint *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar8 * 4) = uVar12;
  return uVar8;
}

// Empty @ 1454a0fe0

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
::FData::Empty(FData *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar6 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar6;
    if (uVar6 == uVar2) {
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,0x10,0,(ForAnyElementType *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      return;
    }
    uVar5 = 0;
    if ((int)uVar6 < (this->KeyVals).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    uVar6 = uVar6 + 1;
    if (uVar6 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->Hashes).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) ==
                -0x80000000) && (uVar6 = uVar6 + 1, uVar6 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Get @ 1454a72b0

TKeyValue<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock>
  *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock>
          *)((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 0x20);
}

// Get @ 1454a7330

TKeyValue<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock>
* __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock>
  *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock>
          *)((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 0x20);
}

// Next @ 1454ad350

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
::FData::Next(FData *this,FIteratorState param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  int in_R8D;
  
  uVar4 = in_R8D + 1;
  if ((uint)(this->KeyVals).ArrayNum <= uVar4) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
    return (FIteratorState)param_1.Index;
  }
  do {
    uVar3 = 0;
    if ((int)uVar4 < (this->Hashes).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FIteratorState)uVar4;
      }
    }
  } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) ==
            -0x80000000) && (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

// Allocate<FAnimBankDesc_const_&,FAnimBankRecord> @ 14565d600

uint __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
::FData::Allocate<FAnimBankDesc_const_&,FAnimBankRecord>
          (FData *this,FAnimBankDesc *param_1,FAnimBankRecord *param_2,FHashType param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FWeakObjectPtr *pFVar3;
  code *pcVar4;
  FWeakObjectPtr FVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint local_res20 [2];
  FWeakObjectPtr local_118;
  FWeakObjectPtr FStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  FAnimBankRecord local_f8;
  
  local_res20[0] = param_3.Hash;
  if ((this->FreeList).NumElements < 1) {
    local_118 = (param_1->BankAsset).WeakPtr;
    FStack_110 = (param_1->Asset).WeakPtr;
    uVar9 = (this->KeyVals).ArrayNum;
    local_108._0_4_ = param_1->SequenceIndex;
    local_108._4_4_ = param_1->Position;
    uStack_100 = *(undefined8 *)&param_1->PlayRate;
    FAnimBankRecord::FAnimBankRecord(&local_f8,param_2);
    pFVar3 = (FWeakObjectPtr *)(this->KeyVals).AllocatorInstance.Data;
    if ((pFVar3 <= &local_118) && (&local_118 < pFVar3 + (longlong)(this->KeyVals).ArrayMax * 0x1e))
    {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return uVar9;
      }
    }
    iVar10 = (this->KeyVals).ArrayNum;
    piVar1 = &(this->KeyVals).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x8f0,(ForAnyElementType *)this,piVar1);
    }
    (this->KeyVals).ArrayNum = iVar10 + 1;
    lVar11 = (longlong)iVar10 * 0xf0;
    pFVar2 = (this->KeyVals).AllocatorInstance.Data;
    *(FWeakObjectPtr *)(pFVar2 + lVar11) = local_118;
    ((FWeakObjectPtr *)(pFVar2 + lVar11))[1] = FStack_110;
    *(undefined8 *)(pFVar2 + lVar11 + 0x10) = local_108;
    *(undefined8 *)(pFVar2 + lVar11 + 0x10 + 8) = uStack_100;
    FAnimBankRecord::FAnimBankRecord((FAnimBankRecord *)(pFVar2 + lVar11 + 0x20),&local_f8);
    if (local_f8.RotationKeys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.RotationKeys.AllocatorInstance.Data);
    }
    if (local_f8.PositionKeys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.PositionKeys.AllocatorInstance.Data);
    }
    FSkinnedAssetMapping::~FSkinnedAssetMapping(&local_f8.AssetMapping);
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_res20) &&
       ((FScriptContainerElement *)local_res20 < pFVar2 + (longlong)(this->Hashes).ArrayMax * 4)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return uVar9;
      }
    }
    iVar10 = (this->Hashes).ArrayNum;
    piVar1 = &(this->Hashes).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&(this->Hashes).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->Hashes).AllocatorInstance.Data;
    (this->Hashes).ArrayNum = iVar10 + 1;
    *(uint *)(pFVar2 + (longlong)iVar10 * 4) = local_res20[0];
    return uVar9;
  }
  uVar8 = TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Pop(&this->FreeList);
  uVar9 = 0;
  if ((int)uVar8 < (this->KeyVals).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return uVar9;
    }
  }
  pFVar2 = (this->KeyVals).AllocatorInstance.Data;
  FVar5 = (param_1->Asset).WeakPtr;
  lVar11 = (longlong)(int)uVar8 * 0xf0;
  *(FWeakObjectPtr *)(pFVar2 + lVar11) = (param_1->BankAsset).WeakPtr;
  ((FWeakObjectPtr *)(pFVar2 + lVar11))[1] = FVar5;
  uVar6 = *(undefined8 *)&param_1->PlayRate;
  *(undefined8 *)(pFVar2 + lVar11 + 0x10) = *(undefined8 *)&param_1->SequenceIndex;
  *(undefined8 *)(pFVar2 + lVar11 + 0x10 + 8) = uVar6;
  FAnimBankRecord::FAnimBankRecord((FAnimBankRecord *)(pFVar2 + lVar11 + 0x20),param_2);
  uVar9 = local_res20[0];
  uVar12 = 0;
  if ((int)uVar8 < (this->Hashes).ArrayNum) {
    uVar12 = ~uVar8 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return uVar9;
    }
  }
  *(uint *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar8 * 4) = uVar9;
  return uVar8;
}

// Empty @ 14567ab90

void __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
::FData::Empty(FData *this)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint local_res8 [2];
  
  Next(this,(FIteratorState)(uint)local_res8);
  uVar2 = (this->KeyVals).ArrayNum;
  uVar7 = local_res8[0];
  while( true ) {
    local_res8[0] = uVar7;
    if (uVar7 == uVar2) {
      (this->KeyVals).ArrayNum = 0;
      DestructItems<Experimental::RobinHoodHashTable_Private::TKeyValue<FAnimBankDesc,FAnimBankRecord>,int>
                ((TKeyValue<FAnimBankDesc,FAnimBankRecord> *)(this->KeyVals).AllocatorInstance.Data,
                 0);
      piVar1 = &(this->KeyVals).ArrayMax;
      (this->KeyVals).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xf0,8,0,(ForAnyElementType *)this,0,piVar1);
      }
      TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty(&this->FreeList);
      piVar1 = &(this->Hashes).ArrayMax;
      (this->Hashes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->Hashes).AllocatorInstance,0,piVar1);
      }
      return;
    }
    uVar6 = 0;
    if ((int)uVar7 < (this->KeyVals).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    pFVar3 = (this->KeyVals).AllocatorInstance.Data;
    if (*(void **)(pFVar3 + (longlong)(int)uVar7 * 0xf0 + 0xd0) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar3 + (longlong)(int)uVar7 * 0xf0 + 0xd0));
    }
    if (*(void **)(pFVar3 + (longlong)(int)uVar7 * 0xf0 + 0xc0) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar3 + (longlong)(int)uVar7 * 0xf0 + 0xc0));
    }
    FSkinnedAssetMapping::~FSkinnedAssetMapping
              ((FSkinnedAssetMapping *)(pFVar3 + (longlong)(int)uVar7 * 0xf0 + 0x58));
    uVar7 = uVar7 + 1;
    if (uVar7 < (uint)(this->KeyVals).ArrayNum) {
      do {
        uVar6 = 0;
        if ((int)uVar7 < (this->Hashes).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar7 * 4) ==
                -0x80000000) && (uVar7 = uVar7 + 1, uVar7 < (uint)(this->KeyVals).ArrayNum));
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Get @ 145681f50

TKeyValue<FAnimBankDesc,FAnimBankRecord> * __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
::FData::Get(FData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FAnimBankDesc,FAnimBankRecord> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->KeyVals).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKeyValue<FAnimBankDesc,FAnimBankRecord> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TKeyValue<FAnimBankDesc,FAnimBankRecord> *)
         ((this->KeyVals).AllocatorInstance.Data + (longlong)(int)param_1 * 0xf0);
}

// Next @ 14568d4f0

FIteratorState __thiscall
Experimental::RobinHoodHashTable_Private::
TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
::FData::Next(FData *this,FIteratorState param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  int in_R8D;
  
  uVar4 = in_R8D + 1;
  if ((uint)(this->KeyVals).ArrayNum <= uVar4) {
    *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
    return (FIteratorState)param_1.Index;
  }
  do {
    uVar3 = 0;
    if ((int)uVar4 < (this->Hashes).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FIteratorState)uVar4;
      }
    }
  } while ((*(int *)((this->Hashes).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) ==
            -0x80000000) && (uVar4 = uVar4 + 1, uVar4 < (uint)(this->KeyVals).ArrayNum));
  *(uint *)CONCAT44(in_register_00000014,param_1.Index) = uVar4;
  return (FIteratorState)param_1.Index;
}

