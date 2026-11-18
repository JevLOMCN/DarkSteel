// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 18

// FOpenColorIOTransformResource @ 14d769230

FOpenColorIOTransformResource * __thiscall
FOpenColorIOTransformResource::FOpenColorIOTransformResource(FOpenColorIOTransformResource *this)

{
  undefined1 *puVar1;
  
  this->_padding_ = (longlong)&___7FOpenColorIOTransformResource__6B_;
  (this->ShaderCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderCode).Data.ArrayNum = 0;
  (this->ShaderCode).Data.ArrayMax = 0;
  (this->CompileErrors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompileErrors).ArrayNum = 0;
  (this->CompileErrors).ArrayMax = 0;
  (this->GameThreadShaderMap).Reference = (FOpenColorIOShaderMap *)0x0;
  this->bContainsInlineShaders = 0;
  this->bLoadedCookedShaderMapId = 0;
  (this->ShaderParametersMetadata).Object = (FShaderParametersMetadata *)0x0;
  (this->ShaderParametersMetadata).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->RenderingThreadShaderMap = (FOpenColorIOShaderMap *)0x0;
  (this->ShaderCodeAndConfigHash).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderCodeAndConfigHash).Data.ArrayNum = 0;
  (this->ShaderCodeAndConfigHash).Data.ArrayMax = 0;
  (this->CookedShaderMapId).ShaderCodeAndConfigHash.Data.AllocatorInstance = (ForAnyElementType)0x0;
  (this->CookedShaderMapId).ShaderCodeAndConfigHash.Data.ArrayNum = 0;
  (this->CookedShaderMapId).ShaderCodeAndConfigHash.Data.ArrayMax = 0;
  (this->CookedShaderMapId).ShaderTypeDependencies.AllocatorInstance = (ForAnyElementType)0x0;
  (this->CookedShaderMapId).ShaderTypeDependencies.ArrayNum = 0;
  (this->CookedShaderMapId).ShaderTypeDependencies.ArrayMax = 0;
  (this->CookedShaderMapId).LayoutParams.Flags = 0;
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

// ~FOpenColorIOTransformResource @ 14d769c70

void __thiscall
FOpenColorIOTransformResource::~FOpenColorIOTransformResource(FOpenColorIOTransformResource *this)

{
  FScriptContainerElement *pFVar1;
  FOpenColorIOShaderMap *this_00;
  
  this->_padding_ = (longlong)&___7FOpenColorIOTransformResource__6B_;
  pFVar1 = (this->FriendlyName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->CookedShaderMapId).ShaderTypeDependencies);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->CookedShaderMapId).ShaderCodeAndConfigHash);
  pFVar1 = (this->ShaderCodeAndConfigHash).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ShaderParametersMetadata).SharedReferenceCount.ReferenceController);
  this_00 = (this->GameThreadShaderMap).Reference;
  if (this_00 != (FOpenColorIOShaderMap *)0x0) {
    FOpenColorIOShaderMap::Release(this_00);
  }
  DestructItems<FString,int>
            ((FString *)(this->CompileErrors).AllocatorInstance.Data,(this->CompileErrors).ArrayNum)
  ;
  pFVar1 = (this->CompileErrors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderCode).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// CacheShaders @ 14d76d6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOpenColorIOTransformResource::CacheShaders
          (FOpenColorIOTransformResource *this,FOpenColorIOShaderMapId *param_1,
          EShaderPlatform param_2,bool param_3,bool param_4)

{
  FOpenColorIOShaderMap **ppFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EShaderPlatform EVar5;
  uint uVar6;
  FOpenColorIOShaderMap *pFVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FOpenColorIOShaderMap *pFVar10;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar11;
  undefined ***pppuVar12;
  ulonglong uVar13;
  bool bVar14;
  uint uVar15;
  undefined1 auStackY_158 [32];
  TPairInitializer<FOpenColorIOShaderMapId_const_&,FOpenColorIOShaderMap_*_&&> local_f8;
  FOpenColorIOShaderMap *local_e8;
  FStatMessage local_e0;
  longlong local_d0;
  FOpenColorIOShaderMap **local_c8;
  FName local_c0;
  code *local_b8 [2];
  undefined **local_a8;
  FOpenColorIOTransformResource *pFStack_a0;
  FOpenColorIOShaderMap *local_98;
  undefined ***local_90;
  undefined1 local_88 [16];
  undefined **local_78;
  FOpenColorIOTransformResource *pFStack_70;
  FOpenColorIOShaderMap *local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  bVar14 = false;
  pFVar7 = (FOpenColorIOShaderMap *)0x0;
  if (this->bContainsInlineShaders == 0) {
    pFVar10 = FOpenColorIOShaderMap::FindId(param_1,param_2);
    pFVar7 = (this->GameThreadShaderMap).Reference;
    if (pFVar7 != pFVar10) {
      (this->GameThreadShaderMap).Reference = pFVar10;
      if (pFVar10 != (FOpenColorIOShaderMap *)0x0) {
        if ((pFVar10->bDeletedThroughDeferredCleanup != false) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("!bDeletedThroughDeferredCleanup",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOShaderMap.cpp"
                               ,0x247,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar10->NumRefs = pFVar10->NumRefs + 1;
      }
      if (pFVar7 != (FOpenColorIOShaderMap *)0x0) {
        FOpenColorIOShaderMap::Release(pFVar7);
      }
    }
    pFVar7 = (this->GameThreadShaderMap).Reference;
    if (pFVar7 != (FOpenColorIOShaderMap *)0x0) {
      FOpenColorIOShaderMap::IsComplete(pFVar7,this,true);
    }
  }
  else {
    pFVar10 = (this->GameThreadShaderMap).Reference;
    if (pFVar10 != (FOpenColorIOShaderMap *)0x0) {
      pFVar7 = FOpenColorIOShaderMap::FindId
                         ((FOpenColorIOShaderMapId *)(pFVar10->_padding_ + 0x70),param_2);
    }
    pFVar10 = (this->GameThreadShaderMap).Reference;
    if (pFVar7 == (FOpenColorIOShaderMap *)0x0) {
      if (pFVar10 != (FOpenColorIOShaderMap *)0x0) {
        if (pFVar10->bRegistered == 0) {
          FVar9 = StatPtr_STAT_Shaders_NumShaderMaps;
          if (StatPtr_STAT_Shaders_NumShaderMaps ==
              (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps>)0x0) {
            pFVar8 = ::FName::FName(&local_c0,"STAT_Shaders_NumShaderMaps");
            FVar9 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps>)
                    FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShaderMaps,
                               *pFVar8,L"Num ShaderMaps Loaded","STATGROUP_Shaders",
                               "STATCAT_Advanced",L"Shader Compression",true,false,ST_int64,false,
                               false,MCR_Invalid);
          }
          ppFVar1 = *(FOpenColorIOShaderMap ***)FVar9;
          uVar15 = (uint)ppFVar1;
          uVar6 = (uint)((ulonglong)ppFVar1 >> 0x20);
          local_f8.Key._0_4_ = uVar15;
          local_f8.Key._4_4_ = uVar6;
          if (((ppFVar1 != (FOpenColorIOShaderMap **)0x0) &&
              (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this_00 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_00 == (FThreadStats *)0x0) {
              this_01 = FThreadStatsPool::Get();
              this_00 = FThreadStatsPool::GetFromPool(this_01);
            }
            local_e0.NameAndInfo.Number = uVar6 & 0xffffafff | 0xa000;
            local_e0.StatData.Pad[0] = '\x01';
            local_e0.StatData.Pad[1] = '\0';
            local_e0.StatData.Pad[2] = '\0';
            local_e0.StatData.Pad[3] = '\0';
            local_e0.StatData.Pad[4] = '\0';
            local_e0.StatData.Pad[5] = '\0';
            local_e0.StatData.Pad[6] = '\0';
            local_e0.StatData.Pad[7] = '\0';
            local_f8.Value = ppFVar1;
            local_e0.NameAndInfo.Index.Value = uVar15;
            FThreadStats::AddStatMessage(this_00,&local_e0);
            FStatsTrace::Add((FName *)&local_f8.Value,1);
            if (this_00->ScopeCount == 0) {
              FThreadStats::Flush(this_00,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_00,false,false);
            }
          }
        }
        EVar5 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)pFVar10->_padding_);
        local_d0 = pFVar10->_padding_ + 0x70;
        local_c8 = &local_e8;
        local_e8 = pFVar10;
        TSet<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FOpenColorIOShaderMapId_const_&,FOpenColorIOShaderMap_*_&&>_>
                  ((TSet<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>,FDefaultSetAllocator>
                    *)(&FOpenColorIOShaderMap::GIdToOpenColorIOShaderMap + (ulonglong)EVar5 * 0x50),
                   &local_f8,(bool *)&local_d0);
        pFVar10->bRegistered = 1;
      }
    }
    else if (pFVar10 != pFVar7) {
      (this->GameThreadShaderMap).Reference = pFVar7;
      if ((pFVar7->bDeletedThroughDeferredCleanup != false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bDeletedThroughDeferredCleanup",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOShaderMap.cpp"
                             ,0x247,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar7->NumRefs = pFVar7->NumRefs + 1;
      if (pFVar10 != (FOpenColorIOShaderMap *)0x0) {
        FOpenColorIOShaderMap::Release(pFVar10);
      }
    }
  }
  pFVar7 = (this->GameThreadShaderMap).Reference;
  if ((pFVar7 == (FOpenColorIOShaderMap *)0x0) ||
     (bVar3 = FOpenColorIOShaderMap::IsComplete(pFVar7,this,false), !bVar3)) {
    if (4 < (byte)LogShaders._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
    pFVar7 = (this->GameThreadShaderMap).Reference;
    if (pFVar7 != (FOpenColorIOShaderMap *)0x0) {
      (this->GameThreadShaderMap).Reference = (FOpenColorIOShaderMap *)0x0;
      FOpenColorIOShaderMap::Release(pFVar7);
    }
  }
  else {
    bVar14 = true;
  }
  local_90 = (undefined ***)0x0;
  local_a8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FOpenColorIOTransformResource::CacheShaders'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_98 = (this->GameThreadShaderMap).Reference;
  local_b8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FOpenColorIOTransformResource::CacheShaders'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_a0 = this;
  this_02 = FRenderCommandList::GetInstanceTLS();
  if (this_02 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FOpenColorIOTransformResource::CacheShaders_::__l2::TSTR_FSetShaderMapOnColorSpaceTransformResources367>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_03 = FRenderCommandList::GetRenderThread(this_02);
    local_88._0_8_ = local_b8[0];
    local_60 = local_90;
    local_78 = local_a8;
    pFStack_70 = pFStack_a0;
    local_68 = local_98;
    local_b8[0] = (code *)0x0;
    local_58 = 2;
    pFVar11 = (FRenderCommandTag *)
              TRenderCommandTag<`FOpenColorIOTransformResource::CacheShaders'::__l2::TSTR_FSetShaderMapOnColorSpaceTransformResources367>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar11);
    uVar13 = (ulonglong)local_58;
    if ((2 < uVar13) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_88._0_8_ != (code *)0x0) {
        pppuVar12 = (undefined ***)(local_88 + 0x10);
        if (local_60 != (undefined ***)0x0) {
          pppuVar12 = local_60;
        }
        (*(code *)(*pppuVar12)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13])(local_88);
    }
  }
  if (local_b8[0] != (code *)0x0) {
    pppuVar12 = &local_a8;
    if (local_90 != (undefined ***)0x0) {
      pppuVar12 = local_90;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  return bVar14;
}

// CacheShaders @ 14d76db90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FOpenColorIOTransformResource::CacheShaders
          (FOpenColorIOTransformResource *this,EShaderPlatform param_1,ITargetPlatform *param_2,
          bool param_3,bool param_4)

{
  bool bVar1;
  FOpenColorIOShaderMapId local_38;
  
  local_38.FeatureLevel = SM5;
  local_38.ShaderCodeAndConfigHash.Data.AllocatorInstance = (ForAnyElementType)0x0;
  local_38.ShaderCodeAndConfigHash.Data.ArrayNum = 0;
  local_38.ShaderCodeAndConfigHash.Data.ArrayMax = 0;
  local_38.ShaderTypeDependencies.AllocatorInstance = (ForAnyElementType)0x0;
  local_38.ShaderTypeDependencies.ArrayNum = 0;
  local_38.ShaderTypeDependencies.ArrayMax = 0;
  local_38.LayoutParams.Flags = 0;
  local_38.LayoutParams.MaxFieldAlignment = 0xffffffff;
  (**(code **)(this->_padding_ + 0x10))();
  bVar1 = CacheShaders(this,&local_38,param_1,param_3,param_4);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_38.ShaderTypeDependencies);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_38.ShaderCodeAndConfigHash);
  return bVar1;
}

// DiscardShaderMap @ 14d76f1e0

void __thiscall FOpenColorIOTransformResource::DiscardShaderMap(FOpenColorIOTransformResource *this)

{
  FOpenColorIOShaderMap *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->RenderingThreadShaderMap != (FOpenColorIOShaderMap *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderingThreadShaderMap == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOShared.cpp"
                       ,0x99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->GameThreadShaderMap).Reference;
  if (this_00 != (FOpenColorIOShaderMap *)0x0) {
    (this->GameThreadShaderMap).Reference = (FOpenColorIOShaderMap *)0x0;
    FOpenColorIOShaderMap::Release(this_00);
    return;
  }
  return;
}

// GetDependentShaderTypes @ 14d770b70

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
FOpenColorIOTransformResource::GetDependentShaderTypes
          (FOpenColorIOTransformResource *this,EShaderPlatform param_1,
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
  FShaderType *local_48;
  FShaderPermutationParameters local_40;
  FName local_34;
  FOpenColorIOTransformResource *local_28;
  
  ppTVar6 = FShaderType::GetTypeList();
  pTVar7 = *ppTVar6;
  if (pTVar7 != (TLinkedList<FShaderType_*> *)0x0) {
    do {
      this_00 = (FShaderType *)0x0;
      if (pTVar7->Element->ShaderTypeForDynamicCast == OCIO) {
        this_00 = pTVar7->Element;
      }
      if (this_00 != (FShaderType *)0x0) {
        local_34 = this_00->TypeName;
        local_40.PermutationId = 0;
        local_40.Flags = HasEditorOnlyData;
        local_40.Platform = param_1;
        local_28 = this;
        bVar3 = FShaderType::ShouldCompilePermutation(this_00,&local_40);
        if ((bVar3) &&
           (cVar4 = (**(code **)(this->_padding_ + 8))(this,param_1,this_00), cVar4 != '\0')) {
          pFVar1 = (param_2->AllocatorInstance).Data;
          local_48 = this_00;
          if ((pFVar1 <= (FScriptContainerElement *)&local_48) &&
             (((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)param_2->ArrayMax * 8 &&
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
          *(FShaderType **)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_48;
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

// GetShaderMapId @ 14d772180

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
FOpenColorIOTransformResource::GetShaderMapId
          (FOpenColorIOTransformResource *this,EShaderPlatform param_1,ITargetPlatform *param_2,
          FOpenColorIOShaderMapId *param_3)

{
  TLinkedList<FShaderType_*> *pTVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  TLinkedList<FShaderType_*> **ppTVar6;
  TMemoryImagePtr<FScriptContainerElement>_u_0 _Dst;
  FShaderType *this_00;
  FIdentityFunctor local_res8 [8];
  FShaderType *local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_60;
  undefined8 local_58;
  FShaderPermutationParameters local_50;
  FName local_44;
  FOpenColorIOTransformResource *local_38;
  
  if (this->bLoadedCookedShaderMapId != 0) {
    FOpenColorIOShaderMapId::operator=(param_3,&this->CookedShaderMapId);
    return;
  }
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  ppTVar6 = FShaderType::GetTypeList();
  pTVar1 = *ppTVar6;
  do {
    if (pTVar1 == (TLinkedList<FShaderType_*> *)0x0) {
      AlgoImpl::
      IntroSortInternal<FShaderType_*,int,FIdentityFunctor,TDereferenceWrapper<FShaderType_*,FCompareShaderTypes>_>
                ((FShaderType **)local_70.Data,(int)local_68,local_res8[0],
                 (FCompareShaderTypes *)local_res8);
      param_3->FeatureLevel = this->FeatureLevel;
      iVar5 = (this->ShaderCodeAndConfigHash).Data.ArrayNum;
      _Src = (this->ShaderCodeAndConfigHash).Data.AllocatorInstance.Data;
      local_60.Packed = 0;
      local_58 = CONCAT44(local_58._4_4_,iVar5);
      if (iVar5 == 0) {
        local_58 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (2,2,iVar5,0,(ForAnyElementType *)&local_60.Frozen,iVar5,
                   (int *)((longlong)&local_58 + 4));
        _Dst = local_60;
        if ((local_60.Packed & 1) != 0) {
          _Dst.UnfrozenPtr =
               (FScriptContainerElement *)
               ((longlong)&local_60 + ((longlong)local_60.Packed >> 0x18));
        }
        memcpy(_Dst.UnfrozenPtr,_Src,(longlong)iVar5 * 2);
      }
      if ((TMemoryImagePtr<FScriptContainerElement>_u_0 *)&param_3->ShaderCodeAndConfigHash !=
          &local_60) {
        FMemoryImageAllocatorBase::MoveToEmpty
                  ((FMemoryImageAllocatorBase *)&param_3->ShaderCodeAndConfigHash,
                   (FMemoryImageAllocatorBase *)&local_60.Frozen);
        (param_3->ShaderCodeAndConfigHash).Data.ArrayNum = (int)local_58;
        (param_3->ShaderCodeAndConfigHash).Data.ArrayMax = local_58._4_4_;
        local_58 = 0;
      }
      FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
                ((FMemoryImageAllocatorBase *)&local_60.Frozen);
      if ((param_2 != (ITargetPlatform *)0x0) && (1 < (byte)LogShaders._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      FPlatformTypeLayoutParameters::InitializeForCurrent(&param_3->LayoutParams);
      if (local_70.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data);
      }
      return;
    }
    this_00 = (FShaderType *)0x0;
    if (pTVar1->Element->ShaderTypeForDynamicCast == OCIO) {
      this_00 = pTVar1->Element;
    }
    if (this_00 != (FShaderType *)0x0) {
      local_44 = this_00->TypeName;
      local_50.PermutationId = 0;
      local_50.Flags = HasEditorOnlyData;
      local_50.Platform = param_1;
      local_38 = this;
      bVar3 = FShaderType::ShouldCompilePermutation(this_00,&local_50);
      if ((bVar3) &&
         (cVar4 = (**(code **)(this->_padding_ + 8))(this,param_1,this_00), cVar4 != '\0')) {
        local_78 = this_00;
        if ((local_70.Data <= (FScriptContainerElement *)&local_78) &&
           (((FScriptContainerElement *)&local_78 < local_70.Data + (longlong)local_68._4_4_ * 8 &&
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
        iVar5 = (int)local_68;
        if ((int)local_68 == local_68._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_70,(int *)((longlong)&local_68 + 4));
        }
        local_68 = CONCAT44(local_68._4_4_,iVar5 + 1);
        *(FShaderType **)(local_70.Data + (longlong)iVar5 * 8) = local_78;
      }
    }
    pTVar1 = (TLinkedList<FShaderType_*> *)pTVar1->_padding_;
  } while( true );
}

// GetShaderParamMetadata @ 14d772430

TSharedPtr<FShaderParametersMetadata_const_,1> * __thiscall
FOpenColorIOTransformResource::GetShaderParamMetadata
          (FOpenColorIOTransformResource *this,
          TSharedPtr<FShaderParametersMetadata_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->ShaderParametersMetadata).Object;
  pTVar1 = (this->ShaderParametersMetadata).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// Invalidate @ 14d773420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FOpenColorIOTransformResource::Invalidate(FOpenColorIOTransformResource *this)

{
  FOpenColorIOShaderMap *this_00;
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *apcStack_88 [2];
  undefined **ppuStack_78;
  FOpenColorIOTransformResource *pFStack_70;
  undefined8 uStack_68;
  undefined ***pppuStack_60;
  undefined1 auStack_58 [16];
  undefined **ppuStack_48;
  FOpenColorIOTransformResource *pFStack_40;
  undefined8 uStack_38;
  undefined ***pppuStack_30;
  byte bStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = (this->GameThreadShaderMap).Reference;
  if (this_00 != (FOpenColorIOShaderMap *)0x0) {
    (this->GameThreadShaderMap).Reference = (FOpenColorIOShaderMap *)0x0;
    FOpenColorIOShaderMap::Release(this_00);
    pppuStack_60 = (undefined ***)0x0;
    ppuStack_78 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FOpenColorIOTransformResource::ReleaseShaderMap'::`5'::<lambda_1>,1,0>
                   ::_vftable_;
    apcStack_88[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FOpenColorIOTransformResource::ReleaseShaderMap'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
         ::Call;
    pFStack_70 = this;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FOpenColorIOTransformResource::ReleaseShaderMap_::__l5::TSTR_ReleaseShaderMap143>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)apcStack_88);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      auStack_58._0_8_ = apcStack_88[0];
      pppuStack_30 = pppuStack_60;
      ppuStack_48 = ppuStack_78;
      pFStack_40 = pFStack_70;
      uStack_38 = uStack_68;
      apcStack_88[0] = (code *)0x0;
      bStack_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FOpenColorIOTransformResource::ReleaseShaderMap'::__l5::TSTR_ReleaseShaderMap143>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)auStack_58,pFVar3);
      uVar5 = (ulonglong)bStack_28;
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
        if ((code *)auStack_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(auStack_58 + 0x10);
          if (pppuStack_30 != (undefined ***)0x0) {
            pppuVar4 = pppuStack_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(auStack_58);
      }
    }
    if (apcStack_88[0] != (code *)0x0) {
      pppuVar4 = &ppuStack_78;
      if (pppuStack_60 != (undefined ***)0x0) {
        pppuVar4 = pppuStack_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return;
}

// IsCompilationFinished @ 14d773460

bool __thiscall
FOpenColorIOTransformResource::IsCompilationFinished(FOpenColorIOTransformResource *this)

{
  FOpenColorIOShaderMap *pFVar1;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if ((pFVar1 != (FOpenColorIOShaderMap *)0x0) && (pFVar1->bCompilationFinalized != 0)) {
    return true;
  }
  return false;
}

// IsPersistent @ 14d773700

bool __thiscall FOpenColorIOTransformResource::IsPersistent(FOpenColorIOTransformResource *this)

{
  return true;
}

// IsSame @ 14d773740

bool __thiscall
FOpenColorIOTransformResource::IsSame
          (FOpenColorIOTransformResource *this,FOpenColorIOShaderMapId *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar3 = L"";
  if ((this->ShaderCodeAndConfigHash).Data.ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(this->ShaderCodeAndConfigHash).Data.AllocatorInstance.Data;
  }
  if (((param_1->ShaderCodeAndConfigHash).Data.ArrayNum != 0) &&
     (pwVar3 = *(wchar_t **)&(param_1->ShaderCodeAndConfigHash).Data.AllocatorInstance,
     ((ulonglong)pwVar3 & 1) != 0)) {
    pwVar3 = (wchar_t *)
             ((longlong)&(param_1->ShaderCodeAndConfigHash).Data.AllocatorInstance.field_0x0 +
             ((longlong)pwVar3 >> 0x18));
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar2);
  return iVar1 == 0;
}

// ReleaseShaderMap @ 14d774f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FOpenColorIOTransformResource::ReleaseShaderMap(FOpenColorIOTransformResource *this)

{
  FOpenColorIOShaderMap *this_00;
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
  FOpenColorIOTransformResource *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FOpenColorIOTransformResource *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = (this->GameThreadShaderMap).Reference;
  if (this_00 != (FOpenColorIOShaderMap *)0x0) {
    (this->GameThreadShaderMap).Reference = (FOpenColorIOShaderMap *)0x0;
    FOpenColorIOShaderMap::Release(this_00);
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FOpenColorIOTransformResource::ReleaseShaderMap'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FOpenColorIOTransformResource::ReleaseShaderMap'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = this;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FOpenColorIOTransformResource::ReleaseShaderMap_::__l5::TSTR_ReleaseShaderMap143>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
               TRenderCommandTag<`FOpenColorIOTransformResource::ReleaseShaderMap'::__l5::TSTR_ReleaseShaderMap143>
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

// SerializeShaderMap @ 14d7769e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FOpenColorIOTransformResource::SerializeShaderMap
          (FOpenColorIOTransformResource *this,FArchive *param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  code *pcVar4;
  FOpenColorIOShaderMap *this_00;
  wchar_t *pwVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  uint local_res10 [2];
  uint local_res18 [4];
  FOpenColorIOShaderMap *local_28 [2];
  
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
    if ((*puVar1 & 1) == 0) goto LAB_14d776a8a;
  }
  else {
    uVar7 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar2;
  }
  bVar8 = uVar7 != 0;
LAB_14d776a8a:
  if (bVar8 == false) {
    if ((*puVar1 & 1) != 0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
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
      if (this_00 == (FOpenColorIOShaderMap *)0x0) {
        this_00 = (FOpenColorIOShaderMap *)0x0;
      }
      else {
        FShaderMapBase::FShaderMapBase((FShaderMapBase *)this_00);
        this_00->bRegistered = 0;
        this_00->bCompilationFinalized = 1;
        this_00->bIsPersistent = 1;
        this_00->bCompiledSuccessfully = 1;
        this_00->_padding_ =
             (longlong)
             &FOpenColorIOShaderMap::
              _vftable__for__TShaderMap<FOpenColorIOShaderMapContent,FShaderMapPointerTable>__;
        this_00->_padding_ =
             (longlong)&FOpenColorIOShaderMap::_vftable__for__FDeferredCleanupInterface__;
        *(undefined1 **)&this_00->CompilingId = &DAT_00000001;
        this_00->bDeletedThroughDeferredCleanup = false;
        local_28[0] = this_00;
        if (((FOpenColorIOShaderMap::AllOpenColorIOShaderMaps.AllocatorInstance.Data <=
              (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 <
             FOpenColorIOShaderMap::AllOpenColorIOShaderMaps.AllocatorInstance.Data +
             (longlong)FOpenColorIOShaderMap::AllOpenColorIOShaderMaps.ArrayMax * 8)) &&
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
        if (FOpenColorIOShaderMap::AllOpenColorIOShaderMaps.ArrayNum ==
            FOpenColorIOShaderMap::AllOpenColorIOShaderMaps.ArrayMax) {
          FOpenColorIOShaderMap::AllOpenColorIOShaderMaps.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&FOpenColorIOShaderMap::AllOpenColorIOShaderMaps.AllocatorInstance,
                          &FOpenColorIOShaderMap::AllOpenColorIOShaderMaps.ArrayMax);
        }
        lVar6 = (longlong)FOpenColorIOShaderMap::AllOpenColorIOShaderMaps.ArrayNum;
        FOpenColorIOShaderMap::AllOpenColorIOShaderMaps.ArrayNum =
             FOpenColorIOShaderMap::AllOpenColorIOShaderMaps.ArrayNum + 1;
        *(FOpenColorIOShaderMap **)
         (FOpenColorIOShaderMap::AllOpenColorIOShaderMaps.AllocatorInstance.Data + lVar6 * 8) =
             local_28[0];
        if ((this_00->bDeletedThroughDeferredCleanup != false) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!bDeletedThroughDeferredCleanup",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOShaderMap.cpp"
                               ,0x247,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00->NumRefs = this_00->NumRefs + 1;
      }
      bVar8 = FOpenColorIOShaderMap::Serialize(this_00,param_1);
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
          TRefCountPtr<FOpenColorIOShaderMap>::operator=(&this->GameThreadShaderMap,this_00);
          *(FName *)(((this->GameThreadShaderMap).Reference)->_padding_ + 8) = this->AssetPath;
        }
      }
      if (this_00 != (FOpenColorIOShaderMap *)0x0) {
        FOpenColorIOShaderMap::Release(this_00);
      }
    }
  }
  return;
}

// SetInlineShaderMap @ 14d776d70

void __thiscall
FOpenColorIOTransformResource::SetInlineShaderMap
          (FOpenColorIOTransformResource *this,FOpenColorIOShaderMap *param_1)

{
  undefined1 *puVar1;
  FOpenColorIOShaderMap *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  pFVar2 = (this->GameThreadShaderMap).Reference;
  if (pFVar2 != param_1) {
    (this->GameThreadShaderMap).Reference = param_1;
    if (param_1 != (FOpenColorIOShaderMap *)0x0) {
      if (param_1->bDeletedThroughDeferredCleanup != false) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bDeletedThroughDeferredCleanup",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOShaderMap.cpp"
                           ,0x247,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      param_1->NumRefs = param_1->NumRefs + 1;
    }
    if (pFVar2 != (FOpenColorIOShaderMap *)0x0) {
      FOpenColorIOShaderMap::Release(pFVar2);
    }
  }
  pFVar2 = (this->GameThreadShaderMap).Reference;
  if (pFVar2 != (FOpenColorIOShaderMap *)0x0) {
    *(FName *)(pFVar2->_padding_ + 8) = this->AssetPath;
  }
  this->bContainsInlineShaders = 1;
  this->bLoadedCookedShaderMapId = 1;
  FOpenColorIOShaderMapId::operator=
            (&this->CookedShaderMapId,(FOpenColorIOShaderMapId *)(param_1->_padding_ + 0x70));
  return;
}

// SetRenderingThreadShaderMap @ 14d776e60

void __thiscall
FOpenColorIOTransformResource::SetRenderingThreadShaderMap
          (FOpenColorIOTransformResource *this,FOpenColorIOShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOShared.cpp"
                       ,0xf2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->RenderingThreadShaderMap = param_1;
  return;
}

// SetupResource @ 14d7770f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenColorIOTransformResource::SetupResource
          (FOpenColorIOTransformResource *this,Type param_1,FString *param_2,FString *param_3,
          FString *param_4,FString *param_5,FName *param_6,FShaderParametersMetadata *param_7)

{
  TSharedPtr<FShaderParametersMetadata_const_,1> *pTVar1;
  FString *pFVar2;
  ushort uVar3;
  FShaderParametersMetadata *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  size_t sVar9;
  longlong lVar10;
  FString *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  wchar_t *_Str;
  uint uVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  undefined1 auStackY_188 [32];
  FString local_158;
  FShaderParametersMetadata *local_148;
  FSharedReferencer<1> local_140;
  FString *local_138;
  FString *local_130;
  FString local_128;
  FString local_118;
  uchar local_108 [32];
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_130 = param_5;
  local_138 = param_3;
  pTVar8 = ::operator_new(0x18);
  local_148 = param_7;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFShaderParametersMetadata__U__DefaultDeleter_VFShaderParametersMetadata___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)param_7;
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->ShaderParametersMetadata;
  local_140.ReferenceController = pTVar8;
  if (pTVar1 != (TSharedPtr<FShaderParametersMetadata_const_,1> *)&local_148) {
    pTVar1->Object = param_7;
    local_148 = (FShaderParametersMetadata *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ShaderParametersMetadata).SharedReferenceCount,&local_140);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_140.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (((param_2->Data).ArrayNum < 2) && ((param_4->Data).ArrayNum < 2)) {
    return;
  }
  ::FString::ConcatFF(&local_128,param_2,param_4);
  local_108[0x10] = '\0';
  local_108[0x11] = '\0';
  local_108[0x12] = '\0';
  local_108[0x13] = '\0';
  local_68.Data = (FScriptContainerElement *)0x0;
  iVar7 = local_128.Data.ArrayNum + -1;
  if (local_128.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  local_108[0] = '\0';
  local_108[1] = '\0';
  local_108[2] = '\0';
  local_108[3] = '\0';
  local_108[4] = '\0';
  local_108[5] = '\0';
  local_108[6] = '\0';
  local_108[7] = '\0';
  local_108[8] = '\0';
  local_108[9] = '\0';
  local_108[10] = '\0';
  local_108[0xb] = '\0';
  local_108[0xc] = '\0';
  local_108[0xd] = '\0';
  local_108[0xe] = '\0';
  local_108[0xf] = '\0';
  if (local_128.Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)local_128.Data.AllocatorInstance.Data;
    if (local_128.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      local_60 = (FScriptContainerElement *)0x0;
      local_58 = 0;
      goto LAB_14d7772e7;
    }
  }
  sVar9 = wcslen(_Str);
  local_58 = (int)sVar9;
  uVar14 = local_58 + 1;
  FVar15.Data = (FScriptContainerElement *)0x0;
  if (0x80 < uVar14) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar14,1);
    FVar15.Data = local_68.Data;
  }
  lVar16 = (longlong)(int)uVar14;
  pFVar13 = local_e8;
  if (FVar15.Data != (FScriptContainerElement *)0x0) {
    pFVar13 = FVar15.Data;
  }
  bVar6 = false;
  local_60 = pFVar13;
  if (0 < (int)uVar14) {
    lVar10 = 0;
    lVar12 = lVar10;
    do {
      uVar3 = *(ushort *)((longlong)_Str + lVar12 * 2);
      pFVar13[lVar12] = SUB21(uVar3,0);
      lVar12 = lVar12 + 1;
      bVar6 = (bool)(bVar6 | 0x7f < uVar3);
    } while (lVar12 < lVar16);
    if (bVar6) {
      do {
        if (0x7f < *(ushort *)((longlong)_Str + lVar10 * 2)) {
          pFVar13[lVar10] = (FScriptContainerElement)0x3f;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar16);
    }
  }
  if ((pFVar13 + lVar16 == (FScriptContainerElement *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14d7772e7:
  FSHA1::HashBuffer(local_60,(longlong)iVar7,local_108);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.Data.ArrayNum = 0;
  local_158.Data.ArrayMax = 0;
  BytesToHex(local_108,0x14,&local_158);
  pFVar2 = &this->ShaderCodeAndConfigHash;
  if (pFVar2 != &local_158) {
    pFVar13 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_158.Data.AllocatorInstance.Data;
    (this->ShaderCodeAndConfigHash).Data.ArrayNum = local_158.Data.ArrayNum;
    (this->ShaderCodeAndConfigHash).Data.ArrayMax = local_158.Data.ArrayMax;
    local_158.Data.ArrayNum = 0;
    local_158.Data.ArrayMax = 0;
    local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  ::FString::operator=(&this->ShaderCode,local_138);
  pFVar11 = ::FString::Replace(local_130,&local_118,L"/",L"",IgnoreCase);
  pFVar2 = &this->FriendlyName;
  if (pFVar2 != pFVar11) {
    pFVar13 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->FriendlyName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
    (this->FriendlyName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  pFVar4 = pTVar1->Object;
  this->AssetPath = *param_6;
  if ((pFVar4 == (FShaderParametersMetadata *)0x0) && (1 < (byte)LogOpenColorIO._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenColorIO);
  }
  this->FeatureLevel = param_1;
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return;
}

// ShouldCache @ 14d777890

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
FOpenColorIOTransformResource::ShouldCache
          (FOpenColorIOTransformResource *this,EShaderPlatform param_1,FShaderType *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FShaderType *pFVar4;
  
  pFVar4 = (FShaderType *)0x0;
  if (param_2->ShaderTypeForDynamicCast == OCIO) {
    pFVar4 = param_2;
  }
  if (pFVar4 == (FShaderType *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InShaderType->GetOpenColorIOShaderType()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOShared.cpp"
                       ,0x36,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return true;
}

