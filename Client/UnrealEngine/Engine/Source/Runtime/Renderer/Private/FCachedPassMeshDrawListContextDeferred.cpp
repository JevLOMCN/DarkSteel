// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// DeferredFinalizeMeshDrawCommands @ 144f015f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FCachedPassMeshDrawListContextDeferred::DeferredFinalizeMeshDrawCommands
          (FCachedPassMeshDrawListContextDeferred *this,
          TArrayView<FPrimitiveSceneInfo_*,int> *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FMeshDrawCommand *pFVar5;
  code *pcVar6;
  TArrayView<FPrimitiveSceneInfo_*,int> *pTVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  TKeyValue<FMeshDrawCommand,FMeshDrawCommandCount> *pTVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 local_res8 [8];
  TArrayView<FPrimitiveSceneInfo_*,int> *local_res10;
  uint local_res18;
  int local_res20;
  undefined1 local_88 [8];
  longlong local_80;
  bool local_78 [4];
  uint local_74;
  uint local_70;
  ulonglong local_68;
  longlong local_60;
  FSparseArrayAllocationInfo local_58;
  
  uVar13 = (ulonglong)param_2;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
    if (param_2 < param_3) {
      lVar12 = uVar13 * 8;
      do {
        pTVar7 = local_res10;
        uVar9 = 0;
        if ((int)(uint)uVar13 < local_res10->ArrayNum) {
          uVar9 = ~(uint)uVar13 >> 0x1f;
        }
        local_80 = lVar12;
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar14 = *(longlong *)((longlong)pTVar7->DataPtr + lVar12);
        iVar3 = *(int *)(lVar14 + 0x28);
        lVar16 = *(longlong *)(lVar14 + 0x20);
        lVar12 = lVar16 + (longlong)iVar3 * 0x24;
        while( true ) {
          if (*(int *)(lVar14 + 0x28) != iVar3) {
            local_88[0] = 0;
            `TCheckedPointerIterator<FCachedMeshDrawCommandInfo,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_88);
          }
          if (lVar16 == lVar12) break;
          if ((0x26 < (*(byte *)(lVar16 + 0x18) & 0x7f)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("CmdInfo.MeshPass < EMeshPass::Num",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                                 ,0x86c,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar15 = (ulonglong)(*(byte *)(lVar16 + 0x18) & 0x7f) * 0x40 + this->_padding_;
          if (((*(int *)(lVar16 + 8) < 0) ||
              ((this->DeferredCommands).ArrayNum <= *(int *)(lVar16 + 8))) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("CmdInfo.CommandIndex >= 0 && CmdInfo.CommandIndex < DeferredCommands.Num()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                                 ,0x86f,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((*(int *)(lVar16 + 0xc) != -1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("CmdInfo.StateBucketId == -1",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                                 ,0x870,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar9 = *(uint *)(lVar16 + 8);
          uVar10 = 0;
          if ((int)uVar9 < (this->DeferredCommands).ArrayNum) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (this->DeferredCommands).AllocatorInstance.Data;
          TSparseArrayBase<408,8,FDefaultSparseArrayAllocator>::AddUninitializedAtLowestFreeIndex
                    ((TSparseArrayBase<408,8,FDefaultSparseArrayAllocator> *)(lVar15 + 0x12d8),
                     &local_58,(int *)(lVar15 + 0x1310));
          if (local_58.Pointer != (FMeshDrawCommand *)0x0) {
            FMeshDrawCommand::FMeshDrawCommand
                      (local_58.Pointer,(FMeshDrawCommand *)(pFVar4 + (longlong)(int)uVar9 * 0x198))
            ;
          }
          *(int *)(lVar16 + 8) = local_58.Index;
          lVar16 = lVar16 + 0x24;
        }
        local_res18 = local_res18 + 1;
        uVar13 = (ulonglong)local_res18;
        lVar12 = local_80 + 8;
        local_80 = lVar12;
      } while ((int)local_res18 < local_res20);
    }
  }
  else if (param_2 < param_3) {
    lVar12 = uVar13 * 8;
    local_68 = uVar13;
    do {
      pTVar7 = local_res10;
      uVar9 = 0;
      if ((int)(uint)uVar13 < local_res10->ArrayNum) {
        uVar9 = ~(uint)uVar13 >> 0x1f;
      }
      local_80 = lVar12;
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar12 = *(longlong *)((longlong)pTVar7->DataPtr + lVar12);
      local_70 = *(uint *)(lVar12 + 0x28);
      uVar13 = (ulonglong)(int)local_70;
      lVar14 = *(longlong *)(lVar12 + 0x20);
      local_60 = lVar14 + uVar13 * 0x24;
      while( true ) {
        lVar16 = local_60;
        if (*(int *)(lVar12 + 0x28) != (int)uVar13) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FCachedMeshDrawCommandInfo,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (lVar14 == lVar16) break;
        if ((0x26 < (*(byte *)(lVar14 + 0x18) & 0x7f)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CmdInfo.MeshPass < EMeshPass::Num",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                               ,0x854,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar9 = *(uint *)(lVar14 + 0xc);
        lVar16 = (ulonglong)(*(byte *)(lVar14 + 0x18) & 0x7f) * 0x78 + this->_padding_;
        if ((((int)uVar9 < 0) || ((this->DeferredCommands).ArrayNum <= (int)uVar9)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("DeferredIndex >= 0 && DeferredIndex < DeferredCommands.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                               ,0x858,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((*(int *)(lVar14 + 8) != -1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CmdInfo.CommandIndex == -1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                               ,0x859,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar10 = 0;
        if ((int)uVar9 < (this->DeferredCommands).ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this->DeferredCommands).AllocatorInstance.Data;
        uVar10 = 0;
        if ((int)uVar9 < (this->DeferredCommandHashes).ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_78[0] = false;
        local_78[1] = false;
        local_78[2] = false;
        local_78[3] = false;
        Experimental::RobinHoodHashTable_Private::
        TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
        ::FindOrUpdateIdByHashInternal<0,FMeshDrawCommand,FMeshDrawCommandCount>
                  ((TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
                    *)(lVar16 + 0x90),(FHashType)(uint)&local_74,
                   (FMeshDrawCommand *)
                   (ulonglong)
                   *(uint *)((this->DeferredCommandHashes).AllocatorInstance.Data +
                            (longlong)(int)uVar9 * 4),
                   (FMeshDrawCommandCount *)(pFVar4 + (longlong)(int)uVar9 * 0x198),local_78);
        uVar9 = local_74;
        pTVar11 = Experimental::RobinHoodHashTable_Private::
                  TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
                  ::FData::Get((FData *)(lVar16 + 0x90),local_74);
        LOCK();
        puVar2 = &(pTVar11->Pair).field_0x198;
        *(int *)puVar2 = *(int *)puVar2 + 1;
        UNLOCK();
        uVar13 = (ulonglong)local_70;
        *(uint *)(lVar14 + 0xc) = uVar9;
        lVar14 = lVar14 + 0x24;
      }
      local_res18 = local_res18 + 1;
      uVar13 = (ulonglong)local_res18;
      local_68 = local_68 + 1;
      lVar12 = local_80 + 8;
      local_80 = lVar12;
    } while ((int)local_res18 < local_res20);
  }
  piVar1 = &(this->DeferredCommands).ArrayMax;
  pFVar5 = (FMeshDrawCommand *)(this->DeferredCommands).AllocatorInstance.Data;
  iVar3 = (this->DeferredCommands).ArrayNum;
  if ((this->DeferredCommands).ArrayMax < 0) {
    DestructItems<FMeshDrawCommand,int>(pFVar5,iVar3);
    (this->DeferredCommands).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x198,8,0,&(this->DeferredCommands).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FMeshDrawCommand,int>(pFVar5,iVar3);
    (this->DeferredCommands).ArrayNum = 0;
  }
  (this->DeferredCommandHashes).ArrayNum = 0;
  if ((this->DeferredCommandHashes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->DeferredCommandHashes).AllocatorInstance,0,
               &(this->DeferredCommandHashes).ArrayMax);
  }
  return;
}

// FinalizeCommand @ 144f0c340

/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FCachedPassMeshDrawListContextDeferred::FinalizeCommand
          (FCachedPassMeshDrawListContextDeferred *this,FMeshBatch *param_1,int param_2,
          FMeshDrawCommandPrimitiveIdInfo *param_3,ERasterizerFillMode param_4,
          ERasterizerCullMode param_5,FMeshDrawCommandSortKey param_6,
          EFVisibleMeshDrawCommandFlags param_7,FGraphicsMinimalPipelineStateInitializer *param_8,
          FMeshProcessorShaders *param_9,FMeshDrawCommand *param_10)

{
  int *piVar1;
  TArray<FMeshDrawCommand,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Experimental::FHashType,TSizedDefaultAllocator<32>_> *pTVar3;
  FMeshDrawCommand *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint local_18 [4];
  
  FCachedPassMeshDrawListContext::FinalizeCommandCommon
            ((FCachedPassMeshDrawListContext *)this,param_1,param_2,param_4,param_5,param_6,param_7,
             param_8,param_9,param_10);
  pTVar2 = &this->DeferredCommands;
  pFVar4 = (FMeshDrawCommand *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar4 <= param_10) && (param_10 < pFVar4 + (this->DeferredCommands).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (this->DeferredCommands).ArrayNum;
  piVar1 = &(this->DeferredCommands).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x198,8,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->DeferredCommands).ArrayNum = iVar8 + 1;
  FMeshDrawCommand::FMeshDrawCommand
            ((FMeshDrawCommand *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x198),
             param_10);
  if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
    *(int *)&this->_padding_ = iVar8;
  }
  else {
    pTVar3 = &this->DeferredCommandHashes;
    local_18[0] = FMeshDrawCommand::GetDynamicInstancingHash(param_10);
    pFVar5 = (pTVar3->AllocatorInstance).Data;
    local_18[0] = local_18[0] & 0x7fffffff;
    if ((pFVar5 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar5 + (longlong)(this->DeferredCommandHashes).ArrayMax * 4)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (this->DeferredCommandHashes).ArrayNum;
    piVar1 = &(this->DeferredCommandHashes).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->DeferredCommandHashes).ArrayNum = iVar9 + 1;
    *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_18[0];
    *(int *)((longlong)&this->_padding_ + 4) = iVar8;
  }
  return;
}

// ~FCachedPassMeshDrawListContextDeferred @ 145296290

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

void __thiscall
FCachedPassMeshDrawListContextDeferred::~FCachedPassMeshDrawListContextDeferred
          (FCachedPassMeshDrawListContextDeferred *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DeferredCommandHashes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMeshDrawCommand,int>
            ((FMeshDrawCommand *)(this->DeferredCommands).AllocatorInstance.Data,
             (this->DeferredCommands).ArrayNum);
  pFVar1 = (this->DeferredCommands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMeshDrawShaderBindings::~FMeshDrawShaderBindings((FMeshDrawShaderBindings *)&this->_padding_);
  this->_padding_ = (longlong)&___7FMeshPassDrawListContext__6B_;
  return;
}

// ReserveMemoryForCommands @ 1452d2710

void __thiscall
FCachedPassMeshDrawListContextDeferred::ReserveMemoryForCommands
          (FCachedPassMeshDrawListContextDeferred *this,int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if ((this->DeferredCommands).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x198,8,param_1,&(this->DeferredCommands).AllocatorInstance,
                 (this->DeferredCommands).ArrayNum,&(this->DeferredCommands).ArrayMax);
    }
    if (*(char *)((longlong)&this->_padding_ + 5) != '\0') {
      uVar1 = (this->DeferredCommands).ArrayMax;
      if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
      }
      if ((this->DeferredCommandHashes).ArrayMax < (int)uVar1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar1,&(this->DeferredCommandHashes).AllocatorInstance,
                   (this->DeferredCommandHashes).ArrayNum,&(this->DeferredCommandHashes).ArrayMax);
      }
    }
  }
  return;
}

