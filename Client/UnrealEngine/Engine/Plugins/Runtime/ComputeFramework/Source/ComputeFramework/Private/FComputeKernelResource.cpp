// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 21

// FComputeKernelResource @ 1494c41a0

FComputeKernelResource * __thiscall
FComputeKernelResource::FComputeKernelResource(FComputeKernelResource *this)

{
  undefined1 *puVar1;
  
  this->_padding_ = (longlong)&___7FComputeKernelResource__6B_;
  (this->CompilationResults).Messages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompilationResults).Messages.ArrayNum = 0;
  (this->CompilationResults).Messages.ArrayMax = 0;
  (this->GameThreadShaderMap).Reference = (FComputeKernelShaderMap *)0x0;
  (this->ShaderEntryPoint).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderEntryPoint).Data.ArrayNum = 0;
  (this->ShaderEntryPoint).Data.ArrayMax = 0;
  (this->ShaderSource).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderSource).Data.ArrayNum = 0;
  (this->ShaderSource).Data.ArrayMax = 0;
  *(undefined8 *)&this->AdditionalSources = 0;
  *(undefined8 *)&(this->AdditionalSources).field_0x8 = 0;
  *(undefined8 *)&(this->AdditionalSources).field_0x20 = 0;
  this->RenderingThreadShaderMap = (FComputeKernelShaderMap *)0x0;
  this->ShaderCodeHash = 0;
  *(undefined4 *)&(this->AdditionalSources).field_0x28 = 0;
  *(undefined4 *)&(this->AdditionalSources).field_0x2c = 0x80;
  *(undefined4 *)&(this->AdditionalSources).field_0x34 = 0;
  *(undefined4 *)&(this->AdditionalSources).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AdditionalSources).field_0x40 = 0;
  *(undefined4 *)&(this->AdditionalSources).field_0x48 = 0;
  *(undefined8 *)&this->GeneratedSources = 0;
  *(undefined8 *)&(this->GeneratedSources).field_0x8 = 0;
  *(undefined8 *)&(this->GeneratedSources).field_0x20 = 0;
  *(undefined4 *)&(this->GeneratedSources).field_0x28 = 0;
  *(undefined4 *)&(this->GeneratedSources).field_0x2c = 0x80;
  *(undefined4 *)&(this->GeneratedSources).field_0x34 = 0;
  *(undefined4 *)&(this->GeneratedSources).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GeneratedSources).field_0x40 = 0;
  *(undefined4 *)&(this->GeneratedSources).field_0x48 = 0;
  (this->ShaderDefinitionSet).Object = (FComputeKernelDefinitionSet *)0x0;
  (this->ShaderDefinitionSet).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ShaderPermutationVector).Object = (FComputeKernelPermutationVector *)0x0;
  (this->ShaderPermutationVector).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ShaderParameterMetadataAllocations).Ptr = (FShaderParametersMetadataAllocations *)0x0;
  (this->OutstandingCompileShaderMapIds).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  this->KernelFlags = 0;
  (this->OutstandingCompileShaderMapIds).ArrayNum = 0;
  (this->OutstandingCompileShaderMapIds).ArrayMax = 1;
  this->bContainsInlineShaders = 0;
  this->bLoadedCookedShaderMapId = 0;
  (this->CookedShaderMapId).ShaderTypeDependencies.AllocatorInstance = (ForAnyElementType)0x0;
  (this->CookedShaderMapId).ShaderTypeDependencies.ArrayNum = 0;
  (this->CookedShaderMapId).ShaderTypeDependencies.ArrayMax = 0;
  (this->CookedShaderMapId).LayoutParams.Flags = 0;
  *(undefined8 *)&this->OnCompilationCompleteDelegate = 0;
  *(undefined8 *)&(this->OnCompilationCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnCompilationCompleteDelegate).field_0x10 = 0;
  (this->FriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FriendlyName).Data.ArrayNum = 0;
  (this->FriendlyName).Data.ArrayMax = 0;
  (this->AssetPath).ComparisonIndex = 0;
  (this->AssetPath).Number = 0;
  this->FeatureLevel = SM5;
  (this->CookedShaderMapId).FeatureLevel = SM5;
  (this->CookedShaderMapId).LayoutParams.MaxFieldAlignment = 0xffffffff;
  return this;
}

// ~FComputeKernelResource @ 1494c5900

void __thiscall FComputeKernelResource::~FComputeKernelResource(FComputeKernelResource *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<int> FVar2;
  void *pvVar3;
  FComputeKernelShaderMap *this_00;
  
  this->_padding_ = (longlong)&___7FComputeKernelResource__6B_;
  pFVar1 = (this->FriendlyName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCompilationCompleteDelegate);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->CookedShaderMapId).ShaderTypeDependencies);
  FVar2 = (this->OutstandingCompileShaderMapIds).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TDefaultDelete<FShaderParametersMetadataAllocations>::operator()
            ((TDefaultDelete<FShaderParametersMetadataAllocations> *)
             &this->ShaderParameterMetadataAllocations,
             (this->ShaderParameterMetadataAllocations).Ptr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ShaderPermutationVector).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ShaderDefinitionSet).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->GeneratedSources).field_0x48 = 0;
  pvVar3 = *(void **)&(this->GeneratedSources).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GeneratedSources);
  *(undefined4 *)&(this->AdditionalSources).field_0x48 = 0;
  pvVar3 = *(void **)&(this->AdditionalSources).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AdditionalSources);
  pFVar1 = (this->ShaderSource).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderEntryPoint).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->GameThreadShaderMap).Reference;
  if (this_00 != (FComputeKernelShaderMap *)0x0) {
    FComputeKernelShaderMap::Release(this_00);
  }
  DestructItems<FComputeKernelCompileMessage,int>
            ((FComputeKernelCompileMessage *)
             (this->CompilationResults).Messages.AllocatorInstance.Data,
             (this->CompilationResults).Messages.ArrayNum);
  pFVar1 = (this->CompilationResults).Messages.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// CacheShaders @ 1494ca4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FComputeKernelResource::CacheShaders
          (FComputeKernelResource *this,FComputeKernelShaderMapId *param_1,EShaderPlatform param_2,
          bool param_3,bool param_4)

{
  FComputeKernelShaderMap *pFVar1;
  FComputeKernelShaderMap **ppFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  EShaderPlatform EVar7;
  uint uVar8;
  FComputeKernelShaderMap *pFVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar12;
  undefined ***pppuVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStackY_188 [32];
  TPairInitializer<FComputeKernelShaderMapId_const_&,FComputeKernelShaderMap_*_&&> local_120;
  FComputeKernelShaderMap *local_110;
  FName local_108;
  FStatMessage local_100;
  FString local_f0;
  longlong local_e0;
  FComputeKernelShaderMap **local_d8;
  FString local_d0;
  FName local_c0;
  code *local_b8 [2];
  undefined **local_a8;
  FComputeKernelResource *pFStack_a0;
  FComputeKernelShaderMap *local_98;
  undefined ***local_90;
  code *local_88 [2];
  undefined **local_78;
  FComputeKernelResource *pFStack_70;
  FComputeKernelShaderMap *local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar6 = false;
  if (this->bContainsInlineShaders == 0) {
    pFVar9 = FComputeKernelShaderMap::FindId(param_1,param_2);
    pFVar1 = (this->GameThreadShaderMap).Reference;
    if (pFVar1 != pFVar9) {
      (this->GameThreadShaderMap).Reference = pFVar9;
      if (pFVar9 != (FComputeKernelShaderMap *)0x0) {
        if ((pFVar9->bDeletedThroughDeferredCleanup != false) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!bDeletedThroughDeferredCleanup",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelShaderMap.cpp"
                               ,0x26f,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        LOCK();
        pFVar9->NumRefs = pFVar9->NumRefs + 1;
        UNLOCK();
      }
      if (pFVar1 != (FComputeKernelShaderMap *)0x0) {
        FComputeKernelShaderMap::Release(pFVar1);
      }
    }
    pFVar1 = (this->GameThreadShaderMap).Reference;
    if (pFVar1 != (FComputeKernelShaderMap *)0x0) {
      FComputeKernelShaderMap::IsComplete(pFVar1,this,true);
    }
  }
  else {
    pFVar1 = (this->GameThreadShaderMap).Reference;
    pFVar9 = (FComputeKernelShaderMap *)0x0;
    if (pFVar1 != (FComputeKernelShaderMap *)0x0) {
      pFVar9 = FComputeKernelShaderMap::FindId
                         ((FComputeKernelShaderMapId *)(pFVar1->_padding_ + 0x70),param_2);
    }
    pFVar1 = (this->GameThreadShaderMap).Reference;
    if (pFVar9 == (FComputeKernelShaderMap *)0x0) {
      if (pFVar1 != (FComputeKernelShaderMap *)0x0) {
        if (pFVar1->bRegistered == 0) {
          FVar11 = StatPtr_STAT_Shaders_NumShaderMaps;
          if (StatPtr_STAT_Shaders_NumShaderMaps ==
              (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps>)0x0) {
            pFVar10 = ::FName::FName(&local_c0,"STAT_Shaders_NumShaderMaps");
            FVar11 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShaderMaps,
                                *pFVar10,L"Num ShaderMaps Loaded","STATGROUP_Shaders",
                                "STATCAT_Advanced",L"Shader Compression",true,false,ST_int64,false,
                                false,MCR_Invalid);
          }
          ppFVar2 = *(FComputeKernelShaderMap ***)FVar11;
          uVar15 = (uint)ppFVar2;
          uVar8 = (uint)((ulonglong)ppFVar2 >> 0x20);
          local_120.Key._0_4_ = uVar15;
          local_120.Key._4_4_ = uVar8;
          if (((ppFVar2 != (FComputeKernelShaderMap **)0x0) &&
              (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this_00 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_00 == (FThreadStats *)0x0) {
              this_01 = FThreadStatsPool::Get();
              this_00 = FThreadStatsPool::GetFromPool(this_01);
            }
            local_100.NameAndInfo.Number = uVar8 & 0xffffafff | 0xa000;
            local_100.StatData.Pad[0] = '\x01';
            local_100.StatData.Pad[1] = '\0';
            local_100.StatData.Pad[2] = '\0';
            local_100.StatData.Pad[3] = '\0';
            local_100.StatData.Pad[4] = '\0';
            local_100.StatData.Pad[5] = '\0';
            local_100.StatData.Pad[6] = '\0';
            local_100.StatData.Pad[7] = '\0';
            local_120.Value = ppFVar2;
            local_100.NameAndInfo.Index.Value = uVar15;
            FThreadStats::AddStatMessage(this_00,&local_100);
            FStatsTrace::Add((FName *)&local_120.Value,1);
            if (this_00->ScopeCount == 0) {
              FThreadStats::Flush(this_00,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_00,false,false);
            }
          }
        }
        EVar7 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)pFVar1->_padding_);
        local_e0 = pFVar1->_padding_ + 0x70;
        local_d8 = &local_110;
        local_110 = pFVar1;
        TSet<TTuple<FComputeKernelShaderMapId,FComputeKernelShaderMap_*>,TDefaultMapHashableKeyFuncs<FComputeKernelShaderMapId,FComputeKernelShaderMap_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FComputeKernelShaderMapId_const_&,FComputeKernelShaderMap_*_&&>_>
                  ((TSet<TTuple<FComputeKernelShaderMapId,FComputeKernelShaderMap_*>,TDefaultMapHashableKeyFuncs<FComputeKernelShaderMapId,FComputeKernelShaderMap_*,0>,FDefaultSetAllocator>
                    *)(&FComputeKernelShaderMap::GIdToComputeKernelShaderMap +
                      (ulonglong)EVar7 * 0x50),&local_120,(bool *)&local_e0);
        pFVar1->bRegistered = 1;
      }
    }
    else if (pFVar1 != pFVar9) {
      (this->GameThreadShaderMap).Reference = pFVar9;
      if ((pFVar9->bDeletedThroughDeferredCleanup != false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bDeletedThroughDeferredCleanup",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelShaderMap.cpp"
                             ,0x26f,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      LOCK();
      pFVar9->NumRefs = pFVar9->NumRefs + 1;
      UNLOCK();
      if (pFVar1 != (FComputeKernelShaderMap *)0x0) {
        FComputeKernelShaderMap::Release(pFVar1);
      }
    }
  }
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if ((pFVar1 == (FComputeKernelShaderMap *)0x0) ||
     (bVar4 = FComputeKernelShaderMap::IsComplete(pFVar1,this,false), !bVar4)) {
    if (4 < (byte)LogComputeFramework._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogComputeFramework);
    }
    pFVar1 = (this->GameThreadShaderMap).Reference;
    if (pFVar1 != (FComputeKernelShaderMap *)0x0) {
      (this->GameThreadShaderMap).Reference = (FComputeKernelShaderMap *)0x0;
      FComputeKernelShaderMap::Release(pFVar1);
    }
  }
  else {
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_2].bContainsValidPlatformInfo == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xa9,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    local_108 = FGenericDataDrivenShaderPlatformInfo::Infos[param_2].ShaderFormat;
    ::FName::ToString(&local_108,&local_f0);
    pcVar3 = *(code **)(this->_padding_ + 0x20);
    ::FString::PrintfImpl(&local_d0,L"%s: Loaded %s shaders from DDC.");
    (*pcVar3)(this,&local_d0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    bVar6 = true;
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  if (param_3) {
    local_90 = (undefined ***)0x0;
    local_a8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FComputeKernelResource::CacheShaders'::`55'::<lambda_1>,1,0>
                ::_vftable_;
    local_98 = (this->GameThreadShaderMap).Reference;
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FComputeKernelResource::CacheShaders'::__l55::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_a0 = this;
    this_02 = FRenderCommandList::GetInstanceTLS();
    if (this_02 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FComputeKernelResource::CacheShaders_::__l55::TSTR_FSetShaderMapOnComputeKernel408>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
    }
    else {
      this_03 = FRenderCommandList::GetRenderThread(this_02);
      local_88[0] = local_b8[0];
      local_60 = local_90;
      local_78 = local_a8;
      pFStack_70 = pFStack_a0;
      local_68 = local_98;
      local_b8[0] = (code *)0x0;
      local_58 = 2;
      pFVar12 = (FRenderCommandTag *)
                TRenderCommandTag<`FComputeKernelResource::CacheShaders'::__l55::TSTR_FSetShaderMapOnComputeKernel408>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar12);
      uVar14 = (ulonglong)local_58;
      if ((2 < uVar14) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if (local_88[0] != (code *)0x0) {
          pppuVar13 = (undefined ***)(local_88 + 2);
          if (local_60 != (undefined ***)0x0) {
            pppuVar13 = local_60;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14])
                  ((TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    *)local_88);
      }
    }
    if (local_b8[0] != (code *)0x0) {
      pppuVar13 = &local_a8;
      if (local_90 != (undefined ***)0x0) {
        pppuVar13 = local_90;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
  return bVar6;
}

// CacheShaders @ 1494caa50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FComputeKernelResource::CacheShaders
          (FComputeKernelResource *this,EShaderPlatform param_1,ITargetPlatform *param_2,
          bool param_3,bool param_4)

{
  bool bVar1;
  FComputeKernelShaderMapId local_38;
  
  local_38.FeatureLevel = SM5;
  local_38.ShaderTypeDependencies.AllocatorInstance = (ForAnyElementType)0x0;
  local_38.ShaderTypeDependencies.ArrayNum = 0;
  local_38.ShaderTypeDependencies.ArrayMax = 0;
  local_38.LayoutParams.Flags = 0;
  local_38.LayoutParams.MaxFieldAlignment = 0xffffffff;
  (**(code **)(this->_padding_ + 0x10))();
  bVar1 = CacheShaders(this,&local_38,param_1,param_3,param_4);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_38.ShaderTypeDependencies);
  return bVar1;
}

// DiscardShaderMap @ 1494ccb10

void __thiscall FComputeKernelResource::DiscardShaderMap(FComputeKernelResource *this)

{
  FComputeKernelShaderMap *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->RenderingThreadShaderMap != (FComputeKernelShaderMap *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderingThreadShaderMap == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelShared.cpp"
                       ,0xb5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->GameThreadShaderMap).Reference;
  if (this_00 != (FComputeKernelShaderMap *)0x0) {
    (this->GameThreadShaderMap).Reference = (FComputeKernelShaderMap *)0x0;
    FComputeKernelShaderMap::Release(this_00);
    return;
  }
  return;
}

// GetDependentShaderTypes @ 1494cf3e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

void __thiscall
FComputeKernelResource::GetDependentShaderTypes
          (FComputeKernelResource *this,EShaderPlatform param_1,
          TArray<FShaderType_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  TLinkedList<FShaderType_*> **ppTVar6;
  TLinkedList<FShaderType_*> *pTVar7;
  FShaderType *this_00;
  FIdentityFunctor local_res18 [8];
  FShaderType *local_38;
  FShaderPermutationParameters local_30 [2];
  
  ppTVar6 = FShaderType::GetTypeList();
  pTVar7 = *ppTVar6;
  if (pTVar7 != (TLinkedList<FShaderType_*> *)0x0) {
    do {
      this_00 = (FShaderType *)0x0;
      if (pTVar7->Element->ShaderTypeForDynamicCast == ComputeKernel) {
        this_00 = pTVar7->Element;
      }
      if (this_00 != (FShaderType *)0x0) {
        local_30[0].PermutationId = 0;
        local_30[0].Flags = HasEditorOnlyData;
        local_30[0].Platform = param_1;
        bVar3 = FShaderType::ShouldCompilePermutation(this_00,local_30);
        if ((bVar3) &&
           (cVar4 = (**(code **)(this->_padding_ + 8))(this,param_1,this_00), cVar4 != '\0')) {
          pFVar1 = (param_2->AllocatorInstance).Data;
          local_38 = this_00;
          if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
             (((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 8 &&
              (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)))) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar5 = param_2->ArrayNum;
          if (iVar5 == param_2->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar5 + 1;
          *(FShaderType **)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_38;
        }
      }
      pTVar7 = (TLinkedList<FShaderType_*> *)pTVar7->_padding_;
    } while (pTVar7 != (TLinkedList<FShaderType_*> *)0x0);
  }
  AlgoImpl::
  IntroSortInternal<FShaderType_*,int,FIdentityFunctor,TDereferenceWrapper<FShaderType_*,FCompareShaderTypes>_>
            ((FShaderType **)(param_2->AllocatorInstance).Data,param_2->ArrayNum,local_res18[0],
             (FCompareShaderTypes *)local_res18);
  return;
}

// GetNumPermutations @ 1494cfe20

int __thiscall FComputeKernelResource::GetNumPermutations(FComputeKernelResource *this)

{
  FComputeKernelPermutationVector *pFVar1;
  int iVar2;
  
  pFVar1 = (this->ShaderPermutationVector).Object;
  iVar2 = 1;
  if (pFVar1 != (FComputeKernelPermutationVector *)0x0) {
    iVar2 = 1 << ((byte)pFVar1->BitCount & 0x1f);
  }
  return iVar2;
}

// GetShader @ 1494d0f90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable> * __thiscall
FComputeKernelResource::GetShader
          (FComputeKernelResource *this,
          TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable> *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable> *pTVar3;
  
  if (GIsThreadedRendering) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GIsThreadedRendering || !IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelShared.cpp"
                         ,0x1bc,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  FComputeKernelShaderMap::GetShader<FComputeKernelShader>
            (this->RenderingThreadShaderMap,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetShaderGameThread @ 1494d1010

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable> * __thiscall
FComputeKernelResource::GetShaderGameThread
          (FComputeKernelResource *this,
          TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable> *__return_storage_ptr__,
          int param_1)

{
  FComputeKernelShaderMap *this_00;
  
  this_00 = (this->GameThreadShaderMap).Reference;
  if (this_00 != (FComputeKernelShaderMap *)0x0) {
    FComputeKernelShaderMap::GetShader<FComputeKernelShader>(this_00,__return_storage_ptr__,param_1)
    ;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ShaderContent = (FComputeKernelShader *)0x0;
  __return_storage_ptr__->ShaderMap = (FShaderMapBase *)0x0;
  return __return_storage_ptr__;
}

// GetShaderMapId @ 1494d1150

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

void __thiscall
FComputeKernelResource::GetShaderMapId
          (FComputeKernelResource *this,EShaderPlatform param_1,ITargetPlatform *param_2,
          FComputeKernelShaderMapId *param_3)

{
  TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_> *pTVar1;
  int *piVar2;
  TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_> *pTVar3;
  TLinkedList<FShaderType_*> *pTVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  TLinkedList<FShaderType_*> **ppTVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  FShaderType *this_00;
  FIdentityFunctor local_res8 [8];
  FShaderType *local_58;
  FShaderPermutationParameters local_50;
  ForAnyElementType local_40;
  undefined8 local_38;
  
  if (this->bLoadedCookedShaderMapId == 0) {
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    ppTVar9 = FShaderType::GetTypeList();
    for (pTVar4 = *ppTVar9; pTVar4 != (TLinkedList<FShaderType_*> *)0x0;
        pTVar4 = (TLinkedList<FShaderType_*> *)pTVar4->_padding_) {
      this_00 = (FShaderType *)0x0;
      if (pTVar4->Element->ShaderTypeForDynamicCast == ComputeKernel) {
        this_00 = pTVar4->Element;
      }
      if (this_00 != (FShaderType *)0x0) {
        local_50.PermutationId = 0;
        local_50.Flags = HasEditorOnlyData;
        local_50.Platform = param_1;
        bVar6 = FShaderType::ShouldCompilePermutation(this_00,&local_50);
        if ((bVar6) &&
           (cVar7 = (**(code **)(this->_padding_ + 8))(this,param_1,this_00), cVar7 != '\0')) {
          local_58 = this_00;
          if ((local_40.Data <= (FScriptContainerElement *)&local_58) &&
             (((FScriptContainerElement *)&local_58 < local_40.Data + (longlong)local_38._4_4_ * 8
              && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)))) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = (int)local_38;
          if ((int)local_38 == local_38._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_40,(int *)((longlong)&local_38 + 4));
          }
          local_38 = CONCAT44(local_38._4_4_,iVar8 + 1);
          *(FShaderType **)(local_40.Data + (longlong)iVar8 * 8) = local_58;
        }
      }
    }
    AlgoImpl::
    IntroSortInternal<FShaderType_*,int,FIdentityFunctor,TDereferenceWrapper<FShaderType_*,FCompareShaderTypes>_>
              ((FShaderType **)local_40.Data,(int)local_38,local_res8[0],
               (FCompareShaderTypes *)local_res8);
    param_3->FeatureLevel = this->FeatureLevel;
    param_3->ShaderCodeHash = this->ShaderCodeHash;
    if ((param_2 != (ITargetPlatform *)0x0) && (1 < (byte)LogComputeFramework._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogComputeFramework);
    }
    FPlatformTypeLayoutParameters::InitializeForCurrent(&param_3->LayoutParams);
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else {
    pTVar1 = &param_3->ShaderTypeDependencies;
    param_3->FeatureLevel = (this->CookedShaderMapId).FeatureLevel;
    param_3->ShaderCodeHash = (this->CookedShaderMapId).ShaderCodeHash;
    pTVar3 = &(this->CookedShaderMapId).ShaderTypeDependencies;
    if (pTVar1 != pTVar3) {
      FVar11 = pTVar3->AllocatorInstance;
      piVar2 = &(param_3->ShaderTypeDependencies).ArrayMax;
      iVar8 = (this->CookedShaderMapId).ShaderTypeDependencies.ArrayNum;
      if (((ulonglong)FVar11 & 1) != 0) {
        FVar11 = (ForAnyElementType)
                 ((longlong)&(pTVar3->AllocatorInstance).field_0x0 + ((longlong)FVar11 >> 0x18));
      }
      (param_3->ShaderTypeDependencies).ArrayNum = iVar8;
      if ((iVar8 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
        param_3->LayoutParams = (this->CookedShaderMapId).LayoutParams;
        return;
      }
      UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x20,8,iVar8,*piVar2,&pTVar1->AllocatorInstance,iVar8,piVar2);
      FVar10 = pTVar1->AllocatorInstance;
      if (((ulonglong)FVar10 & 1) != 0) {
        FVar10 = (ForAnyElementType)
                 ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar10 >> 0x18));
      }
      ConstructItems<FShaderTypeDependency,FShaderTypeDependency,int>
                ((void *)FVar10,(FShaderTypeDependency *)FVar11,iVar8);
    }
    param_3->LayoutParams = (this->CookedShaderMapId).LayoutParams;
  }
  return;
}

// Invalidate @ 1494d4290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FComputeKernelResource::Invalidate(FComputeKernelResource *this)

{
  FComputeKernelShaderMap *this_00;
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FComputeKernelResource *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FComputeKernelResource *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = (this->GameThreadShaderMap).Reference;
  if (this_00 != (FComputeKernelShaderMap *)0x0) {
    (this->GameThreadShaderMap).Reference = (FComputeKernelShaderMap *)0x0;
    FComputeKernelShaderMap::Release(this_00);
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FComputeKernelResource::ReleaseShaderMap'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FComputeKernelResource::ReleaseShaderMap'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = this;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FComputeKernelResource::ReleaseShaderMap_::__l5::TSTR_ReleaseShaderMap171>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FComputeKernelResource::ReleaseShaderMap'::__l5::TSTR_ReleaseShaderMap171>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return;
}

// IsCompilationFinished @ 1494d4400

bool __thiscall FComputeKernelResource::IsCompilationFinished(FComputeKernelResource *this)

{
  FComputeKernelShaderMap *pFVar1;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if ((pFVar1 != (FComputeKernelShaderMap *)0x0) && (pFVar1->bCompilationFinalized != 0)) {
    return true;
  }
  return (this->OutstandingCompileShaderMapIds).ArrayNum == 0;
}

// IsPersistent @ 1494d4720

bool __thiscall FComputeKernelResource::IsPersistent(FComputeKernelResource *this)

{
  return true;
}

// IsSame @ 1494d4730

bool __thiscall
FComputeKernelResource::IsSame(FComputeKernelResource *this,FComputeKernelShaderMapId *param_1)

{
  if ((param_1->ShaderCodeHash == this->ShaderCodeHash) &&
     (param_1->FeatureLevel == this->FeatureLevel)) {
    return true;
  }
  return false;
}

// NotifyCompilationFinished @ 1494d4860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FComputeKernelResource::NotifyCompilationFinished(FComputeKernelResource *this,FString *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  ForAnyElementType _Src;
  void *pvVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  FReadAccessScope local_88;
  undefined4 local_68 [2];
  FString local_60;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  if (4 < (byte)LogComputeFramework._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogComputeFramework);
  }
  local_38 = ___xmm_ffffffffffffffff0000000000000000;
  uStack_30 = _UNK_15076cb68;
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Data.ArrayNum = 0;
  local_60.Data.ArrayMax = 0;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = (void *)0x0;
  local_28 = 0xffffffff;
  local_68[0] = 1;
  if (&local_60 != param_1) {
    uVar3 = (param_1->Data).ArrayNum;
    pFVar4 = (param_1->Data).AllocatorInstance.Data;
    local_60.Data.ArrayMax = 0;
    local_60.Data.ArrayNum = uVar3;
    if (uVar3 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar3,0,(ForAnyElementType *)&local_60,uVar3,&local_60.Data.ArrayMax);
      memcpy(local_60.Data.AllocatorInstance.Data,pFVar4,(longlong)(int)uVar3 * 2);
    }
  }
  pFVar4 = (this->CompilationResults).Messages.AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)local_68) &&
      ((FScriptContainerElement *)local_68 <
       pFVar4 + (longlong)(this->CompilationResults).Messages.ArrayMax * 0x48)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (this->CompilationResults).Messages.ArrayNum;
  piVar1 = &(this->CompilationResults).Messages.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,(ForAnyElementType *)&this->CompilationResults,piVar1);
  }
  _Src.Data = local_60.Data.AllocatorInstance.Data;
  (this->CompilationResults).Messages.ArrayNum = iVar9 + 1;
  pFVar2 = (this->CompilationResults).Messages.AllocatorInstance.Data + (longlong)iVar9 * 0x48;
  *(undefined4 *)pFVar2 = local_68[0];
  pFVar4 = pFVar2 + 8;
  *(FScriptContainerElement **)&pFVar4->field_0x0 = (FScriptContainerElement *)0x0;
  lVar10 = (longlong)local_60.Data.ArrayNum;
  *(int *)(pFVar2 + 0x10) = local_60.Data.ArrayNum;
  if (local_60.Data.ArrayNum == 0) {
    *(int *)(pFVar2 + 0x14) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_60.Data.ArrayNum,0,(ForAnyElementType *)pFVar4,local_60.Data.ArrayNum,
               (int *)(pFVar2 + 0x14));
    memcpy(*(FScriptContainerElement **)&pFVar4->field_0x0,_Src.Data,lVar10 * 2);
  }
  pvVar7 = local_50;
  pFVar4 = pFVar2 + 0x18;
  *(FScriptContainerElement **)&pFVar4->field_0x0 = (FScriptContainerElement *)0x0;
  lVar10 = (longlong)(int)local_48;
  *(int *)(pFVar2 + 0x20) = (int)local_48;
  if ((int)local_48 == 0) {
    *(int *)(pFVar2 + 0x24) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_48,0,(ForAnyElementType *)pFVar4,(int)local_48,(int *)(pFVar2 + 0x24))
    ;
    memcpy(*(FScriptContainerElement **)&pFVar4->field_0x0,pvVar7,lVar10 * 2);
  }
  pvVar7 = local_40;
  pFVar4 = pFVar2 + 0x28;
  *(FScriptContainerElement **)&pFVar4->field_0x0 = (FScriptContainerElement *)0x0;
  lVar10 = (longlong)(int)local_38;
  *(int *)(pFVar2 + 0x30) = (int)local_38;
  if ((int)local_38 == 0) {
    *(int *)(pFVar2 + 0x34) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_38,0,(ForAnyElementType *)pFVar4,(int)local_38,(int *)(pFVar2 + 0x34))
    ;
    memcpy(*(FScriptContainerElement **)&pFVar4->field_0x0,pvVar7,lVar10 * 2);
  }
  *(undefined4 *)(pFVar2 + 0x38) = (undefined4)uStack_30;
  *(undefined4 *)(pFVar2 + 0x3c) = uStack_30._4_4_;
  *(undefined4 *)(pFVar2 + 0x40) = local_28;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnCompilationCompleteDelegate,&local_88);
  if ((*(int *)&(this->OnCompilationCompleteDelegate).field_0x10 != 0) &&
     (plVar5 = *(longlong **)&(this->OnCompilationCompleteDelegate).field_0x8,
     plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x68))(plVar5,this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_88);
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return;
}

// ReleaseShaderMap @ 1494d5fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FComputeKernelResource::ReleaseShaderMap(FComputeKernelResource *this)

{
  FComputeKernelShaderMap *this_00;
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FComputeKernelResource *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FComputeKernelResource *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = (this->GameThreadShaderMap).Reference;
  if (this_00 != (FComputeKernelShaderMap *)0x0) {
    (this->GameThreadShaderMap).Reference = (FComputeKernelShaderMap *)0x0;
    FComputeKernelShaderMap::Release(this_00);
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FComputeKernelResource::ReleaseShaderMap'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FComputeKernelResource::ReleaseShaderMap'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = this;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FComputeKernelResource::ReleaseShaderMap_::__l5::TSTR_ReleaseShaderMap171>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FComputeKernelResource::ReleaseShaderMap'::__l5::TSTR_ReleaseShaderMap171>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return;
}

// RemoveOutstandingCompileId @ 1494d6440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FComputeKernelResource::RemoveOutstandingCompileId(FComputeKernelResource *this,int param_1)

{
  int iVar1;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  iVar1 = TArray<int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Remove
                    (&this->OutstandingCompileShaderMapIds,local_res10);
  if ((-1 < iVar1) && (5 < (byte)LogComputeFramework._0_1_)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogComputeFramework);
  }
  return;
}

// SerializeShaderMap @ 1494d71a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FComputeKernelResource::SerializeShaderMap(FComputeKernelResource *this,FArchive *param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  code *pcVar4;
  FComputeKernelShaderMap *this_00;
  wchar_t *pwVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  uint local_res10 [2];
  uint local_res18 [4];
  FComputeKernelShaderMap *local_28 [2];
  
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  bVar8 = SUB41(uVar7,0);
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x28;
  puVar2 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar2) {
    local_res10[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res10[0] = uVar7;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar7 = local_res10[0];
    if ((*puVar1 & 1) == 0) goto LAB_1494d724a;
  }
  else {
    uVar7 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar2;
  }
  bVar8 = uVar7 != 0;
LAB_1494d724a:
  if (bVar8 == false) {
    if ((*puVar1 & 1) != 0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogComputeFramework);
      return;
    }
  }
  else if ((*(longlong *)&param_1->field_0x68 == 0) ||
          (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    puVar3 = *(ulonglong **)&param_1->field_0x8;
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      local_res18[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      if (1 < local_res18[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar7 = local_res18[0];
      if ((*puVar1 & 1) == 0) {
        return;
      }
    }
    else {
      uVar7 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
    if (uVar7 != 0) {
      this_00 = ::operator_new(0x58);
      if (this_00 == (FComputeKernelShaderMap *)0x0) {
        this_00 = (FComputeKernelShaderMap *)0x0;
      }
      else {
        FShaderMapBase::FShaderMapBase((FShaderMapBase *)this_00);
        this_00->bRegistered = 0;
        this_00->bCompilationFinalized = 1;
        this_00->bIsPersistent = 1;
        this_00->bCompiledSuccessfully = 1;
        this_00->_padding_ =
             (longlong)
             &FComputeKernelShaderMap::
              _vftable__for__TShaderMap<FComputeKernelShaderMapContent,FShaderMapPointerTable>__;
        this_00->_padding_ =
             (longlong)&FComputeKernelShaderMap::_vftable__for__FDeferredCleanupInterface__;
        *(undefined1 **)&this_00->CompilingId = &DAT_00000001;
        this_00->bDeletedThroughDeferredCleanup = false;
        local_28[0] = this_00;
        if (((FComputeKernelShaderMap::AllComputeKernelShaderMaps.AllocatorInstance.Data <=
              (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 <
             FComputeKernelShaderMap::AllComputeKernelShaderMaps.AllocatorInstance.Data +
             (longlong)FComputeKernelShaderMap::AllComputeKernelShaderMaps.ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (FComputeKernelShaderMap::AllComputeKernelShaderMaps.ArrayNum ==
            FComputeKernelShaderMap::AllComputeKernelShaderMaps.ArrayMax) {
          FComputeKernelShaderMap::AllComputeKernelShaderMaps.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&FComputeKernelShaderMap::AllComputeKernelShaderMaps.
                                 AllocatorInstance,
                          &FComputeKernelShaderMap::AllComputeKernelShaderMaps.ArrayMax);
        }
        lVar6 = (longlong)FComputeKernelShaderMap::AllComputeKernelShaderMaps.ArrayNum;
        FComputeKernelShaderMap::AllComputeKernelShaderMaps.ArrayNum =
             FComputeKernelShaderMap::AllComputeKernelShaderMaps.ArrayNum + 1;
        *(FComputeKernelShaderMap **)
         (FComputeKernelShaderMap::AllComputeKernelShaderMaps.AllocatorInstance.Data + lVar6 * 8) =
             local_28[0];
        if ((this_00->bDeletedThroughDeferredCleanup != false) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!bDeletedThroughDeferredCleanup",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelShaderMap.cpp"
                               ,0x26f,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        LOCK();
        this_00->NumRefs = this_00->NumRefs + 1;
        UNLOCK();
      }
      bVar8 = FComputeKernelShaderMap::Serialize(this_00,param_1);
      if (bVar8) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
             _thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                                 _thread_safe_static_guard_0__),
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__ == -1)) {
          pwVar5 = FCommandLine::Get();
          `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
               FParse::Param(pwVar5,L"nullrhi");
          _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__);
        }
        if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)
            ) && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                  bHasNullRHIOnCommandline == false)) {
          this->RenderingThreadShaderMap = this_00;
          TRefCountPtr<FComputeKernelShaderMap>::operator=(&this->GameThreadShaderMap,this_00);
          *(FName *)(((this->GameThreadShaderMap).Reference)->_padding_ + 8) = this->AssetPath;
        }
      }
      if (this_00 != (FComputeKernelShaderMap *)0x0) {
        FComputeKernelShaderMap::Release(this_00);
      }
    }
  }
  return;
}

// SetRenderingThreadShaderMap @ 1494d7580

void __thiscall
FComputeKernelResource::SetRenderingThreadShaderMap
          (FComputeKernelResource *this,FComputeKernelShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelShared.cpp"
                       ,0x123,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->RenderingThreadShaderMap = param_1;
  return;
}

// SetupResource @ 1494d75e0

void __thiscall
FComputeKernelResource::SetupResource
          (FComputeKernelResource *this,Type param_1,FString *param_2,FString *param_3,
          FString *param_4,FString *param_5,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_6,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                   *param_7,TSharedPtr<FComputeKernelDefinitionSet,1> *param_8,
          TSharedPtr<FComputeKernelPermutationVector,1> *param_9,
          TUniquePtr<FShaderParametersMetadataAllocations,TDefaultDelete<FShaderParametersMetadataAllocations>_>
          *param_10,FShaderParametersMetadata *param_11,FName *param_12)

{
  int *piVar1;
  TUniquePtr<FShaderParametersMetadataAllocations,TDefaultDelete<FShaderParametersMetadataAllocations>_>
  *this_00;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FComputeKernelDefinitionSet *pFVar4;
  FComputeKernelPermutationVector *pFVar5;
  FShaderParametersMetadataAllocations *pFVar6;
  FComputeKernelCompileMessage *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uVar9;
  int iVar10;
  wchar_t *pwVar11;
  
  this->FeatureLevel = param_1;
  ::FString::operator=(&this->FriendlyName,param_2);
  ::FString::operator=(&this->ShaderEntryPoint,param_3);
  iVar2 = (param_4->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
  }
  iVar10 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar10 = 0;
  }
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar11);
  this->ShaderCodeHash = (ulonglong)uVar9;
  ::FString::operator=(&this->ShaderSource,param_5);
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->AdditionalSources,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)param_6);
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->GeneratedSources,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)param_7);
  pTVar3 = (param_8->SharedReferenceCount).ReferenceController;
  pFVar4 = param_8->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = (this->ShaderDefinitionSet).SharedReferenceCount.ReferenceController;
  (this->ShaderDefinitionSet).Object = pFVar4;
  (this->ShaderDefinitionSet).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar3 = (param_9->SharedReferenceCount).ReferenceController;
  pFVar5 = param_9->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = (this->ShaderPermutationVector).SharedReferenceCount.ReferenceController;
  (this->ShaderPermutationVector).Object = pFVar5;
  (this->ShaderPermutationVector).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  this_00 = &this->ShaderParameterMetadataAllocations;
  if (this_00 != param_10) {
    pFVar6 = this_00->Ptr;
    this_00->Ptr = param_10->Ptr;
    param_10->Ptr = (FShaderParametersMetadataAllocations *)0x0;
    TDefaultDelete<FShaderParametersMetadataAllocations>::operator()
              ((TDefaultDelete<FShaderParametersMetadataAllocations> *)this_00,pFVar6);
  }
  piVar1 = &(this->CompilationResults).Messages.ArrayMax;
  this->ShaderParameterMetadata = param_11;
  pFVar7 = (FComputeKernelCompileMessage *)
           (this->CompilationResults).Messages.AllocatorInstance.Data;
  iVar2 = (this->CompilationResults).Messages.ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FComputeKernelCompileMessage,int>(pFVar7,iVar2);
    (this->CompilationResults).Messages.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,(ForAnyElementType *)&this->CompilationResults,0,piVar1);
    }
  }
  else {
    DestructItems<FComputeKernelCompileMessage,int>(pFVar7,iVar2);
    (this->CompilationResults).Messages.ArrayNum = 0;
  }
  this->AssetPath = *param_12;
  return;
}

// ShouldCache @ 1494d77a0

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

bool __thiscall
FComputeKernelResource::ShouldCache
          (FComputeKernelResource *this,EShaderPlatform param_1,FShaderType *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FShaderType *pFVar4;
  
  pFVar4 = (FShaderType *)0x0;
  if (param_2->ShaderTypeForDynamicCast == ComputeKernel) {
    pFVar4 = param_2;
  }
  if (pFVar4 == (FShaderType *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InShaderType->GetComputeKernelShaderType()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelShared.cpp"
                       ,0x3a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x1ae,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bSupportsComputeFramework;
}

