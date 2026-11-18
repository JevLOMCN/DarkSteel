// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// DoTask @ 1483fc210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
FShaderPreloadCollectionTask::DoTask
          (FShaderPreloadCollectionTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  int iVar1;
  FMaterialShaderMap *this_00;
  longlong *plVar2;
  int *piVar3;
  FTaskBase *this_01;
  longlong lVar4;
  code *pcVar5;
  FPSOPrecacheData *pFVar6;
  FShaderPreloadCollectionTask *pFVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *pTVar11;
  FWriteBuffer *pFVar12;
  int *piVar13;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar14;
  ForElementType<FSetElementId> FVar15;
  uint *puVar16;
  ForAnyElementType FVar17;
  ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> FVar18;
  FPSOPrecacheData *pFVar19;
  int *piVar20;
  FPSOPrecacheData *pFVar21;
  ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> FVar22;
  bool bVar23;
  bool bVar24;
  undefined1 auStackY_1b8 [32];
  undefined1 local_166;
  undefined1 local_165;
  int local_164;
  uint local_160;
  ForAnyElementType local_158;
  undefined8 local_150;
  undefined1 local_148 [4];
  uint local_144;
  FLLMScope local_140;
  FLLMScope local_13c;
  FLLMScope local_138;
  uint local_134;
  int local_130 [2];
  FPSOPrecacheData *local_128;
  uint *local_120;
  FPSOPrecacheData *local_118;
  FShaderPreloadCollectionTask *local_110;
  FMemScope local_108;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> local_100;
  FTaskTagScope local_f0;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> local_e0;
  TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_c8;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_78;
  TLogScope<0> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_110 = this;
  FLLMScope::FLLMScope(&local_138,PSO,false,None,Default,true);
  FMemScope::FMemScope(&local_108,PSO,true);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_13c,Assets,Default);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_140,AssetClasses,Default);
  bVar23 = -1 < MetadataChannel->Enabled;
  if (bVar23) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_48);
    *(undefined8 *)(local_48._8_8_ + 0x28) = *(undefined8 *)(local_48._8_8_ + 0x20);
  }
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId664,"FShaderPreloadCollectionTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PSOPrecacheMaterial.cpp"
               ,0x298);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId664);
  }
  FTaskTagScope::FTaskTagScope(&local_f0,EParallelGameThread);
  pFVar19 = (FPSOPrecacheData *)0x0;
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  local_c8.Elements._0_8_ = 0;
  local_c8.Elements._8_8_ = 0;
  local_c8.Elements._32_8_ = 0;
  local_c8.Elements._40_4_ = 0;
  local_c8.Elements._44_4_ = 0x80;
  local_c8.Elements._48_4_ = 0xffffffff;
  local_c8.Elements._52_4_ = 0;
  local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c8.HashSize = 0;
  this_00 = (((this->PrecacheParams).Material)->GameThreadShaderMap).Reference;
  local_128 = (FPSOPrecacheData *)0x0;
  local_144 = 0;
  local_160 = 0;
  pFVar21 = pFVar19;
  if (this_00 != (FMaterialShaderMap *)0x0) {
    pTVar11 = FMaterialShaderMap::CollectPSOPrecacheData(this_00,&local_100,&this->PrecacheParams);
    local_160 = 0;
    if (&local_e0 != pTVar11) {
      DestructItems<FPSOPrecacheData,int>((FPSOPrecacheData *)0x0,0);
      pFVar19 = (FPSOPrecacheData *)(pTVar11->AllocatorInstance).Data;
      (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_160 = pTVar11->ArrayNum;
      pFVar21 = (FPSOPrecacheData *)(ulonglong)local_160;
      pTVar11->ArrayNum = 0;
      pTVar11->ArrayMax = 0;
      local_144 = local_160;
      local_128 = pFVar19;
    }
    DestructItems<FPSOPrecacheData,int>
              ((FPSOPrecacheData *)local_100.AllocatorInstance.Data,local_100.ArrayNum);
    if ((FPSOPrecacheData *)local_100.AllocatorInstance.Data != (FPSOPrecacheData *)0x0) {
      FMemory::Free(local_100.AllocatorInstance.Data);
      local_160 = (uint)pFVar21;
    }
  }
  piVar20 = &(pFVar19->ShaderPreloadData).Shaders.ArrayNum;
  local_118 = pFVar19 + (int)pFVar21;
  pFVar19 = pFVar21;
  do {
    pFVar6 = local_118;
    if ((int)pFVar21 != (int)pFVar19) {
      local_166 = 0;
      `TCheckedPointerIterator<FPSOPrecacheData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_166);
    }
    pFVar7 = local_110;
    if ((FPSOPrecacheData *)(piVar20 + -0x48) == pFVar6) {
      iVar1 = (int)local_150;
      FVar22 = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)
               (local_158.Data + (longlong)(int)local_150 * 0x10);
      FVar17.Data = local_158.Data;
      while( true ) {
        if ((int)local_150 != iVar1) {
          `TCheckedPointerIterator<TShaderRefBase<FShader,FShaderMapPointerTable>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_148);
        }
        if ((ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)FVar17.Data == FVar22)
        break;
        local_78.ArrayMax = 4;
        local_78.AllocatorInstance.SecondaryData =
             (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        local_78.ArrayNum = 0;
        plVar2 = *(longlong **)(*(longlong *)((longlong)FVar17.Data + 8) + 8);
        (**(code **)(*plVar2 + 0x38))
                  (plVar2,*(undefined4 *)(*(longlong *)FVar17.Data + 0xd4),&local_78);
        UE::Tasks::Private::FTaskBase::
        AddPrerequisites<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>
                  ((FTaskBase *)(pFVar7->ShaderPreloadEvents).Reference,&local_78,true);
        FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_78;
        if (local_78.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar14 = local_78.AllocatorInstance.SecondaryData;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar14,local_78.ArrayNum);
        if (local_78.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
        }
        FVar17.Data = FVar17.Data + 0x10;
      }
      this_01 = (FTaskBase *)(pFVar7->ShaderPreloadEvents).Reference;
      if (this_01->ExtendedPriority == TaskEvent) {
        LOCK();
        this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
        UNLOCK();
      }
      UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0);
      pFVar19 = local_128;
      DestructItems<FPSOPrecacheData,int>(local_128,(int)pFVar21);
      if (pFVar19 != (FPSOPrecacheData *)0x0) {
        FMemory::Free(pFVar19);
      }
      local_c8.HashSize = 0;
      if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_c8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_c8.Elements);
      if ((ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)local_158.Data !=
          (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
        FMemory::Free(local_158.Data);
      }
      FTaskTagScope::~FTaskTagScope(&local_f0);
      if (bVar24) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar23) {
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar4 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pFVar12 = *(FWriteBuffer **)(lVar4 + 0x20);
        if ((int)pFVar12 - *(int *)&pFVar12->Cursor < 1) {
          pFVar12 = UE::Trace::Private::Writer_NextBuffer();
        }
        *pFVar12->Cursor = '\n';
        pFVar12->Cursor = pFVar12->Cursor + 1;
        pFVar12->Committed = pFVar12->Cursor;
      }
      FLLMScope::~FLLMScope(&local_140);
      FLLMScope::~FLLMScope(&local_13c);
      FMemScope::~FMemScope(&local_108);
      FLLMScope::~FLLMScope(&local_138);
      return;
    }
    FVar22 = *(ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> *)(piVar20 + -2);
    iVar1 = *piVar20;
    if (FVar22 == (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
      FVar22 = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)(piVar20 + -0xe);
    }
    FVar18 = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)
             ((longlong)FVar22 + (longlong)iVar1 * 0x10);
    while( true ) {
      if (*piVar20 != iVar1) {
        local_165 = 0;
        `TCheckedPointerIterator<TShaderRefBase<FShader,FShaderMapPointerTable>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_165);
      }
      if (FVar22 == FVar18) break;
      local_134 = (**(code **)(**(longlong **)(*(longlong *)((longlong)FVar22 + 8) + 8) + 0x50))();
      if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
        FVar15 = (ForElementType<FSetElementId>)&local_c8.Hash;
        if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar15 = local_c8.Hash.SecondaryData;
        }
        uVar9 = *(uint *)((longlong)FVar15 + (ulonglong)(local_c8.HashSize - 1U & local_134) * 4);
        while (uVar9 != 0xffffffff) {
          puVar16 = (uint *)((longlong)(int)uVar9 * 0x20 + local_c8.Elements._0_8_);
          if (*puVar16 == local_134) {
            if (puVar16 != (uint *)0x0) goto LAB_1483fc4fc;
            break;
          }
          uVar9 = puVar16[6];
        }
      }
      local_120 = &local_134;
      TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<int_&&>_>
                (&local_c8,(uint)local_130,(TKeyInitializer<int_&&> *)(ulonglong)local_134,
                 (bool *)&local_120);
      puVar16 = (uint *)((longlong)local_130[0] * 0x20 + local_c8.Elements._0_8_);
LAB_1483fc4fc:
      plVar2 = *(longlong **)(*(longlong *)((longlong)FVar22 + 8) + 8);
      local_164 = (**(code **)(*plVar2 + 0x58))(plVar2,*(undefined4 *)(*(longlong *)FVar22 + 0xd4));
      piVar3 = *(int **)(puVar16 + 2);
      for (piVar13 = piVar3; piVar13 != piVar3 + (int)puVar16[4]; piVar13 = piVar13 + 1) {
        if (*piVar13 == local_164) {
          if ((int)((longlong)piVar13 - (longlong)piVar3 >> 2) != -1) goto LAB_1483fc686;
          break;
        }
      }
      if (((piVar3 <= &local_164) && (&local_164 < piVar3 + (int)puVar16[5])) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = puVar16[4];
      if (uVar9 == puVar16[5]) {
        uVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)(puVar16 + 2),(int *)(puVar16 + 5));
      }
      puVar16[4] = uVar9 + 1;
      *(int *)(*(longlong *)(puVar16 + 2) + (longlong)(int)uVar9 * 4) = local_164;
      if (((local_158.Data <= (ulonglong)FVar22) &&
          ((ulonglong)FVar22 < local_158.Data + (longlong)local_150._4_4_ * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = (int)local_150;
      if ((int)local_150 == local_150._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_158,(int *)((longlong)&local_150 + 4));
      }
      local_150 = CONCAT44(local_150._4_4_,iVar10 + 1);
      lVar4 = *(longlong *)((longlong)FVar22 + 8);
      *(longlong *)(local_158.Data + (longlong)iVar10 * 0x10) = *(longlong *)FVar22;
      *(longlong *)(local_158.Data + (longlong)iVar10 * 0x10 + 8) = lVar4;
LAB_1483fc686:
      FVar22 = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)
               ((longlong)FVar22 + 0x10);
    }
    pFVar19 = (FPSOPrecacheData *)(ulonglong)local_160;
    piVar20 = piVar20 + 0x4e;
    pFVar21 = (FPSOPrecacheData *)(ulonglong)local_144;
  } while( true );
}

