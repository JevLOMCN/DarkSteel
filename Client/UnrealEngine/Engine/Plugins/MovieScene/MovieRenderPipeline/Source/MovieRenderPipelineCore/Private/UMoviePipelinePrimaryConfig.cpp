// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 23

// StaticClass @ 14dd5c810

UClass * __cdecl UMoviePipelinePrimaryConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelinePrimaryConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelinePrimaryConfig",
               &Z_Registration_Info_UClass_UMoviePipelinePrimaryConfig.InnerSingleton,
               StaticRegisterNativesUMoviePipelinePrimaryConfig,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelinePrimaryConfig>,
               InternalVTableHelperCtorCaller<UMoviePipelinePrimaryConfig>,local_res8,
               UMoviePipelineConfigBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelinePrimaryConfig.InnerSingleton;
}

// UMoviePipelinePrimaryConfig @ 14dd6b470

UMoviePipelinePrimaryConfig * __thiscall
UMoviePipelinePrimaryConfig::UMoviePipelinePrimaryConfig
          (UMoviePipelinePrimaryConfig *this,FVTableHelper *param_1)

{
  UMoviePipelineConfigBase::UMoviePipelineConfigBase((UMoviePipelineConfigBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelinePrimaryConfig__6B_;
  *(undefined8 *)&this->PerShotConfigMapping = 0;
  *(undefined8 *)&(this->PerShotConfigMapping).field_0x8 = 0;
  *(undefined8 *)&(this->PerShotConfigMapping).field_0x20 = 0;
  *(undefined4 *)&(this->PerShotConfigMapping).field_0x28 = 0;
  *(undefined4 *)&(this->PerShotConfigMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerShotConfigMapping).field_0x34 = 0;
  *(undefined4 *)&(this->PerShotConfigMapping).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PerShotConfigMapping).field_0x40 = 0;
  *(undefined4 *)&(this->PerShotConfigMapping).field_0x48 = 0;
  (this->OutputSetting).field0_0x0.DebugPtr = (UMoviePipelineOutputSetting *)0x0;
  (this->TransientSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientSettings).ArrayNum = 0;
  (this->TransientSettings).ArrayMax = 0;
  return this;
}

// UMoviePipelinePrimaryConfig @ 14dd6b4f0

UMoviePipelinePrimaryConfig * __thiscall
UMoviePipelinePrimaryConfig::UMoviePipelinePrimaryConfig(UMoviePipelinePrimaryConfig *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UMoviePipelineOutputSetting *pUVar4;
  FName local_res8;
  
  UMoviePipelineConfigBase::UMoviePipelineConfigBase((UMoviePipelineConfigBase *)this);
  this->_padding_ = (longlong)&___7UMoviePipelinePrimaryConfig__6B_;
  *(undefined8 *)&this->PerShotConfigMapping = 0;
  *(undefined8 *)&(this->PerShotConfigMapping).field_0x8 = 0;
  *(undefined8 *)&(this->PerShotConfigMapping).field_0x20 = 0;
  *(undefined4 *)&(this->PerShotConfigMapping).field_0x28 = 0;
  *(undefined4 *)&(this->PerShotConfigMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerShotConfigMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PerShotConfigMapping).field_0x34 = 0;
  *(undefined8 *)&(this->PerShotConfigMapping).field_0x40 = 0;
  *(undefined4 *)&(this->PerShotConfigMapping).field_0x48 = 0;
  (this->OutputSetting).field0_0x0.DebugPtr = (UMoviePipelineOutputSetting *)0x0;
  (this->TransientSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientSettings).ArrayNum = 0;
  (this->TransientSettings).ArrayMax = 0;
  pFVar2 = ::FName::FName(&local_res8,"DefaultOutputSetting");
  FVar1 = *pFVar2;
  pUVar3 = UMoviePipelineOutputSetting::StaticClass();
  pUVar4 = (UMoviePipelineOutputSetting *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UMoviePipelineOutputSetting *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->OutputSetting).field0_0x0.DebugPtr = pUVar4;
  return this;
}

// ~UMoviePipelinePrimaryConfig @ 14dd6c310

void __thiscall
UMoviePipelinePrimaryConfig::~UMoviePipelinePrimaryConfig(UMoviePipelinePrimaryConfig *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelinePrimaryConfig__6B_;
  pFVar1 = (this->TransientSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PerShotConfigMapping).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PerShotConfigMapping).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UMoviePipelineShotConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UMoviePipelineShotConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UMoviePipelineShotConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerShotConfigMapping);
  UMoviePipelineConfigBase::~UMoviePipelineConfigBase((UMoviePipelineConfigBase *)this);
  return;
}

// AddTransientSettingByClass @ 14dd75410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UMoviePipelinePrimaryConfig::AddTransientSettingByClass
          (UMoviePipelinePrimaryConfig *this,UClass *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UMoviePipelineSetting>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_108 [32];
  UObject **local_e8;
  FScriptContainerElement *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  UObject *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_b0 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = UMoviePipelineSetting::StaticClass();
  CheckIsClassChildOf_Internal(pUVar8,param_1);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,param_1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_NoFlags;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = this;
  pUVar9 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar10 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  cVar5 = (**(code **)(this->_padding_ + 0x2c8))(this,pUVar9);
  if (cVar5 != '\0') {
    pTVar2 = &this->TransientSettings;
    local_b8 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_b8) &&
       (lVar11 = (longlong)(this->TransientSettings).ArrayMax,
       (FScriptContainerElement *)&local_b8 < pFVar3 + lVar11 * 8)) {
      local_d0 = (longlong)(this->TransientSettings).ArrayNum;
      local_c8 = 8;
      local_e8 = &local_b8;
      local_e0 = pFVar3;
      local_d8 = lVar11;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = (this->TransientSettings).ArrayNum;
    piVar1 = &(this->TransientSettings).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->TransientSettings).ArrayNum = iVar7 + 1;
    *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_b8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_b8);
    }
  }
  return;
}

// CanSettingBeAdded @ 14dd7a740

bool __thiscall
UMoviePipelinePrimaryConfig::CanSettingBeAdded
          (UMoviePipelinePrimaryConfig *this,UMoviePipelineSetting *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1 == (UMoviePipelineSetting *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSetting",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelinePrimaryConfig.h"
                       ,0x4c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014dd7a77f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(param_1->_padding_ + 0x2e0))(param_1);
  return (bool)uVar3;
}

// CopyFrom @ 14dd7c720

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UMoviePipelinePrimaryConfig::CopyFrom
          (UMoviePipelinePrimaryConfig *this,UMoviePipelineConfigBase *param_1)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName *pFVar6;
  FName FVar7;
  UPackage *pUVar8;
  FString *pFVar9;
  UMoviePipelineOutputSetting *pUVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  FName local_res8;
  FName local_res10;
  undefined8 in_stack_ffffffffffffff98;
  uint uVar14;
  longlong lVar13;
  TStringView<wchar_t> local_48;
  FString local_38;
  
  uVar14 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  UMoviePipelineConfigBase::CopyFrom((UMoviePipelineConfigBase *)this,param_1);
  if ((UMoviePipelinePrimaryConfig *)param_1 == this) {
    return;
  }
  pUVar4 = StaticClass();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(param_1->_padding_ + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar4->_padding_) {
    return;
  }
  pUVar4 = StaticClass();
  iVar1 = (int)pUVar4->_padding_;
  if (((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar4->_padding_)) || (param_1 == (UMoviePipelineConfigBase *)0x0)) {
    pFVar9 = GetTypeName<UMoviePipelinePrimaryConfig>((FString *)&local_48);
    pwVar11 = L"";
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    pFVar9 = GetFullNameForCastLogError<UMoviePipelineConfigBase>(&local_38,param_1);
    if ((pFVar9->Data).ArrayNum != 0) {
      pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar11,pwVar12);
  }
  local_48.DataPtr = L"DefaultOutputSetting";
  local_48.Size = 0x14;
  pUVar4 = UMoviePipelineOutputSetting::StaticClass();
  pUVar5 = StaticFindObject(pUVar4,(UObject *)this,&local_48,None);
  if (pUVar5 != (UObject *)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"DEAD_MoviePipelineConfig_DefaultOutputSetting");
    FVar2 = *pFVar6;
    FVar7 = (FName)StaticClass();
    pUVar4 = (UClass *)GetTransientPackage();
    lVar13 = (ulonglong)uVar14 << 0x20;
    MakeUniqueObjectName((UObject *)&local_res8,pUVar4,FVar7,FVar2.ComparisonIndex.Value.Value);
    pcVar3 = *(code **)(*(longlong *)pUVar5 + 0x170);
    pUVar8 = GetTransientPackage();
    pFVar9 = ::FName::ToString(&local_res8,(FString *)&local_48);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    (*pcVar3)(pUVar5,pwVar11,pUVar8,0x10,lVar13);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  pFVar6 = ::FName::FName(&local_res8,"DefaultOutputSetting");
  pUVar10 = (UMoviePipelineOutputSetting *)
            StaticDuplicateObject
                      (*(UObject **)&param_1[1].ConfigOrigin.SoftObjectPtr.field_0x8,(UObject *)this
                       ,*pFVar6,RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                                RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                                RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|
                                RF_DuplicateTransient|RF_InheritableComponentTemplate|
                                RF_LoadCompleted|RF_TextExportTransient|RF_WasLoaded|
                                RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                                RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                                RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                                RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                                RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone
                                |RF_Public,(UClass *)0x0,Normal,
                       PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                       ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                       AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                       ReachabilityFlag0);
  if (pUVar10 != (UMoviePipelineOutputSetting *)0x0) {
    pUVar4 = UMoviePipelineOutputSetting::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_14dd7c908;
  }
  pUVar10 = (UMoviePipelineOutputSetting *)0x0;
LAB_14dd7c908:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (UMoviePipelineOutputSetting *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->OutputSetting).field0_0x0.DebugPtr = pUVar10;
  return;
}

// GetAllSettings @ 14dd85d40

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> * __thiscall
UMoviePipelinePrimaryConfig::GetAllSettings
          (UMoviePipelinePrimaryConfig *this,
          TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1,bool param_2)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> *pTVar9;
  ForAnyElementType FVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  char local_res18;
  char local_res20;
  longlong *local_98;
  longlong *local_90;
  FName local_88;
  ForAnyElementType local_80;
  int local_78;
  int local_74;
  longlong *local_70;
  int local_68;
  FString local_60 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res18 = param_1;
  local_res20 = param_2;
  (**(code **)(this->_padding_ + 0x2c0))(this,&local_70);
  iVar11 = local_68;
  cVar5 = local_res18;
  plVar1 = local_70 + local_68;
  plVar12 = local_70;
LAB_14dd85d90:
  do {
    if (local_68 != iVar11) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UMoviePipelineSetting_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar12 == plVar1) {
      if (local_70 != (longlong *)0x0) {
        FMemory::Free(local_70);
      }
      local_78 = (this->TransientSettings).ArrayNum;
      lVar13 = (longlong)local_78;
      pFVar2 = (this->TransientSettings).AllocatorInstance.Data;
      local_80.Data = (FScriptContainerElement *)0x0;
      if (local_78 == 0) {
        local_74 = 0;
        iVar11 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_78,0,&local_80,local_78,&local_74);
        memcpy(local_80.Data,pFVar2,lVar13 << 3);
        iVar11 = local_78;
      }
      cVar5 = local_res20;
      pFVar2 = local_80.Data + (longlong)iVar11 * 8;
      FVar10.Data = local_80.Data;
      iVar8 = iVar11;
      while( true ) {
        if (iVar8 != iVar11) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<UMoviePipelineSetting_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (FVar10.Data == pFVar2) break;
        local_98 = *(longlong **)FVar10.Data;
        if (((cVar5 != '\0') || (cVar6 = (**(code **)(*local_98 + 0x2e8))(local_98), cVar6 != '\0'))
           && ((local_res18 != '\0' ||
               (cVar6 = (**(code **)(*local_98 + 0x328))(local_98), cVar6 != '\0')))) {
          pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_98) &&
              ((FScriptContainerElement *)&local_98 <
               pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar9;
          }
          iVar8 = __return_storage_ptr__->ArrayNum;
          if (iVar8 == __return_storage_ptr__->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar8 + 1;
          *(longlong **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
               local_98;
        }
        FVar10.Data = FVar10.Data + 8;
        iVar8 = local_78;
      }
      if (local_80.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data);
      }
      return __return_storage_ptr__;
    }
    local_90 = (longlong *)*plVar12;
    if (local_90 == (longlong *)0x0) {
      if (1 < (byte)LogMovieRenderPipeline._0_1_) {
        local_88 = (FName)this->_padding_;
        ::FName::ToString(&local_88,local_60);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
          plVar12 = plVar12 + 1;
          goto LAB_14dd85d90;
        }
      }
    }
    else if ((cVar5 != '\0') || (cVar6 = (**(code **)(*local_90 + 0x328))(), cVar6 != '\0')) {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)&local_90) &&
         (((FScriptContainerElement *)&local_90 <
           pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8 &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)))) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      *(longlong **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           local_90;
    }
    plVar12 = plVar12 + 1;
  } while( true );
}

// GetConfigForShot @ 14dd87650

UMoviePipelineShotConfig * __thiscall
UMoviePipelinePrimaryConfig::GetConfigForShot(UMoviePipelinePrimaryConfig *this,FString *param_1)

{
  UMoviePipelineShotConfig *pUVar1;
  TTuple<FString,TObjectPtr<UMoviePipelineShotConfig>_> *pTVar2;
  
  pTVar2 = TSet<TTuple<FString,TObjectPtr<UMoviePipelineShotConfig>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UMoviePipelineShotConfig>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TObjectPtr<UMoviePipelineShotConfig>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UMoviePipelineShotConfig>,0>,FDefaultSetAllocator>
                   *)&this->PerShotConfigMapping,param_1);
  if (pTVar2 != (TTuple<FString,TObjectPtr<UMoviePipelineShotConfig>_> *)0x0) {
    pUVar1 = *(UMoviePipelineShotConfig **)&pTVar2->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UMoviePipelineShotConfig *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UMoviePipelineShotConfig *)0x0;
}

// GetEffectiveFrameRate @ 14dd87920

FFrameRate __thiscall
UMoviePipelinePrimaryConfig::GetEffectiveFrameRate
          (UMoviePipelinePrimaryConfig *this,ULevelSequence *param_1)

{
  code *pcVar1;
  bool bVar2;
  UMoviePipelineOutputSetting *pUVar3;
  FFrameRate FVar4;
  longlong lVar5;
  longlong *in_R8;
  
  pUVar3 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                     ((UMoviePipelineConfigBase *)this,false);
  if (pUVar3 == (UMoviePipelineOutputSetting *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelinePrimaryConfig.cpp"
                       ,0xa4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FFrameRate)(*pcVar1)();
      return FVar4;
    }
  }
  if (pUVar3->bUseCustomFrameRate != false) {
    param_1->_padding_ = (longlong)pUVar3->OutputFrameRate;
    return (FFrameRate)param_1;
  }
  if (in_R8 != (longlong *)0x0) {
    lVar5 = (**(code **)(*in_R8 + 0x2f8))();
    param_1->_padding_ = *(longlong *)(lVar5 + 0x140);
    return (FFrameRate)param_1;
  }
  *(undefined4 *)&param_1->_padding_ = 60000;
  *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 1;
  return (FFrameRate)param_1;
}

// GetEffectivePlaybackRange @ 14dd879e0

TRange<FFrameNumber> * __thiscall
UMoviePipelinePrimaryConfig::GetEffectivePlaybackRange
          (UMoviePipelinePrimaryConfig *this,TRange<FFrameNumber> *__return_storage_ptr__,
          ULevelSequence *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  TRangeBound<FFrameNumber> TVar4;
  FFrameRate FVar5;
  FFrameRate FVar6;
  bool bVar7;
  UMoviePipelineOutputSetting *pUVar8;
  TRange<FFrameNumber> *pTVar9;
  longlong lVar10;
  FFrameTime FVar11;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  
  pUVar8 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                     ((UMoviePipelineConfigBase *)this,false);
  if (pUVar8 == (UMoviePipelineOutputSetting *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelinePrimaryConfig.cpp"
                       ,0xb9,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TRange<FFrameNumber> *)(*pcVar3)();
      return pTVar9;
    }
  }
  if (param_1 == (ULevelSequence *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSequence",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelinePrimaryConfig.cpp"
                       ,0xba,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TRange<FFrameNumber> *)(*pcVar3)();
      return pTVar9;
    }
  }
  pcVar3 = *(code **)(param_1->_padding_ + 0x2f8);
  if (pUVar8->bUseCustomPlaybackRange != false) {
    (*pcVar3)();
    lVar10 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    FVar5.Denominator = 0;
    FVar5.Numerator = pUVar8->CustomStartFrame;
    FVar11 = FFrameRate::TransformTime((FFrameTime)local_28,FVar5,*(FFrameRate *)(lVar10 + 0x140));
    iVar1 = *(int *)FVar11;
    (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    lVar10 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    FVar6.Denominator = 0;
    FVar6.Numerator = pUVar8->CustomEndFrame;
    FVar11 = FFrameRate::TransformTime((FFrameTime)local_20,FVar6,*(FFrameRate *)(lVar10 + 0x140));
    iVar2 = *(int *)FVar11;
    (__return_storage_ptr__->LowerBound).Value.Value = iVar1;
    (__return_storage_ptr__->LowerBound).Type.Value = '\x01';
    (__return_storage_ptr__->UpperBound).Type.Value = '\0';
    (__return_storage_ptr__->UpperBound).Value.Value = iVar2;
    return __return_storage_ptr__;
  }
  lVar10 = (*pcVar3)(param_1);
  TVar4 = *(TRangeBound<FFrameNumber> *)(lVar10 + 0x130);
  __return_storage_ptr__->LowerBound = *(TRangeBound<FFrameNumber> *)(lVar10 + 0x128);
  __return_storage_ptr__->UpperBound = TVar4;
  return __return_storage_ptr__;
}

// GetFormatArguments @ 14dd87e30

void __thiscall
UMoviePipelinePrimaryConfig::GetFormatArguments
          (UMoviePipelinePrimaryConfig *this,FMoviePipelineFormatArgs *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  UMoviePipelineExecutorJob *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UMoviePipelineOutputSetting *pUVar9;
  FDateTime FVar10;
  FDateTime FVar11;
  FString *pFVar12;
  ulonglong uVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  int iVar16;
  double dVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  FString local_238;
  FString local_228;
  FString local_218;
  FFrameRate local_208;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_1b0;
  FTimespan local_1a0;
  FDateTime local_198;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString *local_150;
  FString *local_148;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString *local_f0;
  FString *local_e8;
  FString local_e0 [2];
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70 [3];
  
  local_res10[8] = param_2;
  ::FString::FString(&local_218,L"Level Name");
  ::FString::FString(&local_228,L"Sequence Name");
  ::FString::FString(&local_1c0,L"Job Name");
  ::FString::FString(&local_190,L"Job Comment");
  pUVar2 = (param_1->InJob).field0_0x0.DebugPtr;
  dVar17 = 0.0;
  if (pUVar2 == (UMoviePipelineExecutorJob *)0x0) goto LAB_14dd8808f;
  pFVar6 = FSoftObjectPath::GetAssetName(&pUVar2->Map,&local_c0);
  if (&local_218 != pFVar6) {
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    local_218.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    local_218.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  pFVar6 = FSoftObjectPath::GetAssetName
                     (&((param_1->InJob).field0_0x0.DebugPtr)->Sequence,&local_b0);
  if (&local_228 != pFVar6) {
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    local_228.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    local_228.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  pUVar2 = (param_1->InJob).field0_0x0.DebugPtr;
  iVar5 = (pUVar2->JobName).Data.ArrayNum;
  iVar16 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar16 = 0;
  }
  ::FString::AssignRange(&local_1c0,(wchar_t *)(pUVar2->JobName).Data.AllocatorInstance.Data,iVar16)
  ;
  pUVar2 = (param_1->InJob).field0_0x0.DebugPtr;
  iVar5 = (pUVar2->Comment).Data.ArrayNum;
  iVar16 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar16 = 0;
  }
  ::FString::AssignRange(&local_190,(wchar_t *)(pUVar2->Comment).Data.AllocatorInstance.Data,iVar16)
  ;
  pUVar7 = FSoftObjectPath::TryLoad
                     (&((param_1->InJob).field0_0x0.DebugPtr)->Sequence,
                      (FUObjectSerializeContext *)0x0);
  if (pUVar7 == (UObject *)0x0) {
LAB_14dd87ff6:
    pUVar7 = (UObject *)0x0;
  }
  else {
    pUVar8 = Z_Construct_UClass_ULevelSequence_NoRegister();
    iVar5 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar8->_padding_)) goto LAB_14dd87ff6;
  }
  pUVar9 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                     ((UMoviePipelineConfigBase *)this,false);
  if (pUVar9 == (UMoviePipelineOutputSetting *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelinePrimaryConfig.cpp"
                       ,0xa4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pUVar9->bUseCustomFrameRate == false) {
    if (pUVar7 == (UObject *)0x0) {
      iVar5 = 60000;
      iVar16 = 1;
    }
    else {
      lVar14 = (**(code **)(*(longlong *)pUVar7 + 0x2f8))(pUVar7);
      local_208 = *(FFrameRate *)(lVar14 + 0x140);
      iVar16 = local_208.Denominator;
      iVar5 = local_208.Numerator;
    }
  }
  else {
    local_208 = pUVar9->OutputFrameRate;
    iVar16 = local_208.Denominator;
    iVar5 = local_208.Numerator;
  }
  dVar17 = (double)iVar5 / (double)iVar16;
LAB_14dd8808f:
  ::FString::FString(&local_180,L"level_name");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,&local_180,&local_218);
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_170,L"sequence_name");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,&local_170,&local_228);
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_160,L"job_name");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,&local_160,&local_1c0);
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::SanitizeFloat(&local_a0,dVar17,1);
  ::FString::FString(&local_140,L"frame_rate");
  local_150 = &local_140;
  local_148 = pFVar6;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)local_res10,(bool *)&local_150);
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_130,L"unreal/levelName");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&param_1->FileMetadata,&local_130,&local_218);
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_120,L"unreal/sequenceName");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&param_1->FileMetadata,&local_120,&local_228);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_110,L"unreal/jobName");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&param_1->FileMetadata,&local_110,&local_1c0);
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_100,L"unreal/jobComment");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&param_1->FileMetadata,&local_100,&local_190);
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::SanitizeFloat(&local_90,dVar17,1);
  ::FString::FString(local_e0,L"unreal/frameRate");
  local_f0 = local_e0;
  local_e8 = pFVar6;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,
             (TPairInitializer<FString_&&,FString_&&> *)(local_res10 + 0x10),(bool *)&local_f0);
  if (local_e0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0[0].Data.AllocatorInstance.Data);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  FDateTime::UtcNow();
  FVar10 = FDateTime::Now();
  FVar11 = FDateTime::UtcNow();
  local_1a0.Ticks = *(longlong *)FVar10.Ticks - *(longlong *)FVar11.Ticks;
  UE::MoviePipeline::GetSharedFormatArguments
            (&param_1->FilenameArguments,&param_1->FileMetadata,&local_198,1,
             (param_1->InJob).field0_0x0.DebugPtr,&local_1a0);
  pUVar9 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                     ((UMoviePipelineConfigBase *)this,false);
  if (pUVar9 == (UMoviePipelineOutputSetting *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelinePrimaryConfig.cpp"
                       ,0x8c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::FString::PrintfImpl(&local_238,L"%0*d");
  pFVar6 = ::FString::FString(&local_80,L"ShotName");
  pFVar12 = ::FString::FString(local_70,L"CameraName");
  FVar15.Data = local_238.Data.AllocatorInstance.Data;
  lVar14 = (longlong)local_238.Data.ArrayNum;
  local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.Data.ArrayNum = local_238.Data.ArrayNum;
  if (local_238.Data.ArrayNum == 0) {
    local_200.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_238.Data.ArrayNum,0,(ForAnyElementType *)&local_200,local_238.Data.ArrayNum
               ,&local_200.Data.ArrayMax);
    memcpy(local_200.Data.AllocatorInstance.Data,FVar15.Data,lVar14 * 2);
  }
  iVar5 = local_238.Data.ArrayNum;
  FVar15.Data = local_238.Data.AllocatorInstance.Data;
  local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.Data.ArrayNum = local_238.Data.ArrayNum;
  if (local_238.Data.ArrayNum == 0) {
    local_1f0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_238.Data.ArrayNum,0,(ForAnyElementType *)&local_1f0,local_238.Data.ArrayNum
               ,&local_1f0.Data.ArrayMax);
    memcpy(local_1f0.Data.AllocatorInstance.Data,FVar15.Data,(longlong)iVar5 * 2);
  }
  iVar5 = local_238.Data.ArrayNum;
  FVar15.Data = local_238.Data.AllocatorInstance.Data;
  local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_238.Data.ArrayNum == 0) {
    local_1e0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_238.Data.ArrayNum,0,(ForAnyElementType *)&local_1e0,local_238.Data.ArrayNum
               ,&local_1e0.Data.ArrayMax);
    memcpy(local_1e0.Data.AllocatorInstance.Data,FVar15.Data,(longlong)iVar5 * 2);
  }
  FVar15.Data = local_238.Data.AllocatorInstance.Data;
  local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_238.Data.ArrayNum == 0) {
    local_1d0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_238.Data.ArrayNum,0,(ForAnyElementType *)&local_1d0,local_238.Data.ArrayNum
               ,&local_1d0.Data.ArrayMax);
    memcpy(local_1d0.Data.AllocatorInstance.Data,FVar15.Data,(longlong)local_238.Data.ArrayNum * 2);
  }
  MoviePipeline::GetOutputStateFormatArgs
            (&param_1->FilenameArguments,&param_1->FileMetadata,&local_1d0,&local_1e0,&local_1f0,
             &local_200,pFVar12,pFVar6);
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  GetAllSettings(this,&local_1b0,false,(bool)local_res10[8]);
  iVar5 = local_1b0.ArrayNum;
  uVar13 = (ulonglong)local_1b0.ArrayNum;
  pFVar1 = local_1b0.AllocatorInstance.Data + uVar13 * 8;
  FVar15.Data = local_1b0.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar13 != iVar5) {
      `TCheckedPointerIterator<UMoviePipelineSetting_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar15.Data == pFVar1) break;
    (**(code **)(**(longlong **)FVar15.Data + 0x310))(*(longlong **)FVar15.Data,param_1);
    uVar13 = (ulonglong)(uint)local_1b0.ArrayNum;
    FVar15.Data = FVar15.Data + 8;
  }
  if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.AllocatorInstance.Data);
  }
  return;
}

// GetOutputContainers @ 14dd8afc0

TArray<UMoviePipelineOutputBase_*,TSizedDefaultAllocator<32>_> * __thiscall
UMoviePipelinePrimaryConfig::GetOutputContainers
          (UMoviePipelinePrimaryConfig *this,
          TArray<UMoviePipelineOutputBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  TArray<UMoviePipelineOutputBase_*,TSizedDefaultAllocator<32>_> *pTVar9;
  ForAnyElementType FVar10;
  undefined1 local_res10 [8];
  longlong local_48;
  TArray<UMoviePipelineOutputBase_*,TSizedDefaultAllocator<32>_> local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UMoviePipelineConfigBase::FindSettings<UMoviePipelineOutputBase>
            ((UMoviePipelineConfigBase *)this,&local_40,false);
  iVar5 = local_40.ArrayNum;
  pFVar1 = local_40.AllocatorInstance.Data + (longlong)local_40.ArrayNum * 8;
  FVar10.Data = local_40.AllocatorInstance.Data;
LAB_14dd8b010:
  do {
    if (local_40.ArrayNum != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UMoviePipelineOutputBase_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar10.Data == pFVar1) {
      if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    lVar2 = *(longlong *)FVar10.Data;
    if (lVar2 != 0) {
      pUVar8 = Z_Construct_UClass_UMoviePipelineOutputBase_NoRegister();
      iVar7 = (int)pUVar8->_padding_;
      if ((iVar7 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar7 * 8)
          == &pUVar8->_padding_)) {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_48 = lVar2;
        if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
           ((FScriptContainerElement *)&local_48 <
            pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<UMoviePipelineOutputBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar9;
          }
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        FVar10.Data = FVar10.Data + 8;
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
             local_48;
        goto LAB_14dd8b010;
      }
    }
    local_48 = 0;
    FVar10.Data = FVar10.Data + 8;
  } while( true );
}

// GetPrivateStaticClass @ 14dd8c010

UClass * __cdecl UMoviePipelinePrimaryConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelinePrimaryConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelinePrimaryConfig",
               &Z_Registration_Info_UClass_UMoviePipelinePrimaryConfig.InnerSingleton,
               StaticRegisterNativesUMoviePipelinePrimaryConfig,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelinePrimaryConfig>,
               InternalVTableHelperCtorCaller<UMoviePipelinePrimaryConfig>,local_res8,
               UMoviePipelineConfigBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelinePrimaryConfig.InnerSingleton;
}

// GetUserSettings @ 14dd8d700

TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> * __thiscall
UMoviePipelinePrimaryConfig::GetUserSettings
          (UMoviePipelinePrimaryConfig *this,
          TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  void *_Src;
  TObjectPtr<UMoviePipelineOutputSetting>_u_0 *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> *pTVar6;
  TObjectPtr<UMoviePipelineOutputSetting>_u_0 local_18 [2];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (int)this->_padding_;
  _Src = (void *)this->_padding_;
  __return_storage_ptr__->ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar5,0,&__return_storage_ptr__->AllocatorInstance,iVar5,piVar1);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar5 << 3);
  }
  local_18[0] = (this->OutputSetting).field0_0x0;
  pTVar2 = (TObjectPtr<UMoviePipelineOutputSetting>_u_0 *)
           (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pTVar2 <= local_18) && (local_18 < pTVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(TObjectPtr<UMoviePipelineOutputSetting>_u_0 *)
   ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
  return __return_storage_ptr__;
}

// InitializeTransientSettings @ 14dd8f890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelinePrimaryConfig::InitializeTransientSettings(UMoviePipelinePrimaryConfig *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  longlong local_98;
  longlong *local_90;
  FName local_88;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_80;
  longlong *local_70;
  uint local_68;
  FString local_60 [2];
  
  if (0 < (this->TransientSettings).ArrayNum) {
    return;
  }
  pUVar7 = UMoviePipelineSetting::StaticClass();
  UE::MovieRenderPipeline::FindMoviePipelineSettingClasses(&local_80,pUVar7,true);
  (**(code **)(this->_padding_ + 0x2c0))(this,&local_70);
  uVar8 = (ulonglong)(int)local_68;
  local_res20 = local_68;
  plVar12 = local_70 + uVar8;
  plVar15 = local_70;
  iVar9 = local_80.ArrayNum;
  local_90 = plVar12;
  do {
    while( true ) {
      if (local_68 != (uint)uVar8) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UMoviePipelineSetting_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
        iVar9 = local_80.ArrayNum;
      }
      if (plVar15 == plVar12) {
        if (local_70 != (longlong *)0x0) {
          FMemory::Free(local_70);
          iVar9 = local_80.ArrayNum;
        }
        pFVar1 = local_80.AllocatorInstance.Data + (longlong)iVar9 * 8;
        FVar13.Data = local_80.AllocatorInstance.Data;
        iVar6 = iVar9;
        while( true ) {
          if (iVar6 != iVar9) {
            `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (FVar13.Data == pFVar1) break;
          AddTransientSettingByClass(this,*(UClass **)FVar13.Data);
          FVar13.Data = FVar13.Data + 8;
          iVar6 = local_80.ArrayNum;
        }
        if (local_80.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_80.AllocatorInstance.Data);
        return;
      }
      if (*plVar15 == 0) break;
      local_98 = *(longlong *)(*plVar15 + 0x10);
      if (((local_80.AllocatorInstance.Data <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 <
           local_80.AllocatorInstance.Data + (longlong)local_80.ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), iVar9 = local_80.ArrayNum, bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = false;
      uVar11 = 0;
      plVar12 = local_90;
      if (0 < iVar9) {
        lVar14 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar11 < iVar9) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             iVar9 = local_80.ArrayNum, bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar10 = uVar11;
          if (*(longlong *)(local_80.AllocatorInstance.Data + lVar14) == local_98) {
            lVar14 = lVar14 + -8;
            uVar10 = uVar11 - 1;
            bVar3 = true;
            uVar5 = 0;
            if ((int)uVar11 < iVar9) {
              uVar5 = ~uVar11 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               iVar9 = local_80.ArrayNum, bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar6 = (iVar9 - uVar11) + -1;
            if (1 < iVar6) {
              iVar6 = 1;
            }
            if (iVar6 != 0) {
              memmove(local_80.AllocatorInstance.Data + (longlong)(int)uVar11 * 8,
                      local_80.AllocatorInstance.Data + (longlong)(iVar9 - iVar6) * 8,
                      (longlong)iVar6 << 3);
              iVar9 = local_80.ArrayNum;
            }
            iVar9 = iVar9 + -1;
            local_80.ArrayNum = iVar9;
          }
          uVar11 = uVar10 + 1;
          lVar14 = lVar14 + 8;
        } while ((int)uVar11 < iVar9);
        plVar12 = local_90;
        if (bVar3) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&local_80.AllocatorInstance,iVar9,&local_80.ArrayMax);
          plVar12 = local_90;
          iVar9 = local_80.ArrayNum;
        }
      }
LAB_14dd8fb3e:
      uVar8 = (ulonglong)local_res20;
      plVar15 = plVar15 + 1;
    }
    if ((byte)LogMovieRenderPipeline._0_1_ < 2) goto LAB_14dd8fb3e;
    local_88 = (FName)this->_padding_;
    ::FName::ToString(&local_88,local_60);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
    plVar15 = plVar15 + 1;
    uVar8 = (ulonglong)local_res20;
    iVar9 = local_80.ArrayNum;
  } while( true );
}

// OnSettingAdded @ 14dd94d60

void __thiscall
UMoviePipelinePrimaryConfig::OnSettingAdded
          (UMoviePipelinePrimaryConfig *this,UMoviePipelineSetting *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 local_res8 [8];
  UObject *local_38 [2];
  
  (**(code **)(param_1->_padding_ + 0x300))(param_1);
  pFVar6 = (this->TransientSettings).AllocatorInstance.Data;
  iVar1 = (this->TransientSettings).ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->TransientSettings).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMoviePipelineSetting>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar2) {
      return;
    }
    local_38[0] = *(UObject **)pFVar6;
    if (*(longlong *)&local_38[0]->field_0x10 == param_1->_padding_) break;
    pFVar6 = pFVar6 + 8;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(local_38[0]);
  }
  pFVar2 = (this->TransientSettings).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 <
       pFVar2 + (longlong)(this->TransientSettings).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->TransientSettings).ArrayNum;
  if (iVar1 != 0) {
    pFVar2 = (this->TransientSettings).AllocatorInstance.Data;
    iVar10 = 0;
    bVar4 = *(UObject **)pFVar2 != local_38[0];
    lVar7 = 0;
    pUVar5 = local_38[0];
    iVar8 = 0;
    do {
      iVar9 = iVar8;
      do {
        lVar7 = lVar7 + 1;
        iVar9 = iVar9 + 1;
        if (iVar1 <= lVar7) break;
      } while (bVar4 == (*(UObject **)(pFVar2 + lVar7 * 8) != pUVar5));
      if (bVar4 != false) {
        if (iVar10 != iVar8) {
          memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar8 * 8,
                  (longlong)(iVar9 - iVar8) << 3);
          pUVar5 = local_38[0];
        }
        iVar10 = iVar10 + (iVar9 - iVar8);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar8 = iVar9;
    } while (lVar7 < iVar1);
    (this->TransientSettings).ArrayNum = iVar10;
  }
  return;
}

// OnSettingRemoved @ 14dd94f30

void __thiscall
UMoviePipelinePrimaryConfig::OnSettingRemoved
          (UMoviePipelinePrimaryConfig *this,UMoviePipelineSetting *param_1)

{
  if (0 < (this->TransientSettings).ArrayNum) {
    AddTransientSettingByClass(this,(UClass *)param_1->_padding_);
    return;
  }
  return;
}

// StaticRegisterNativesUMoviePipelinePrimaryConfig @ 14dda6710

void __cdecl UMoviePipelinePrimaryConfig::StaticRegisterNativesUMoviePipelinePrimaryConfig(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetAllSettings @ 14ddab2e0

void __cdecl
UMoviePipelinePrimaryConfig::execGetAllSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  int local_res10 [2];
  int local_res18 [2];
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_28;
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetAllSettings((UMoviePipelinePrimaryConfig *)param_1,&local_28,bVar3,local_res18[0] != 0
                         );
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetEffectiveFrameRate @ 14ddab5f0

void __cdecl
UMoviePipelinePrimaryConfig::execGetEffectiveFrameRate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  UMoviePipelineOutputSetting *pUVar5;
  longlong lVar6;
  FFrameRate FVar7;
  longlong *local_res10;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  plVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                     ((UMoviePipelineConfigBase *)param_1,false);
  if ((pUVar5 == (UMoviePipelineOutputSetting *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputSettings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelinePrimaryConfig.cpp"
                         ,0xa4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pUVar5->bUseCustomFrameRate == false) {
    if (plVar3 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar3 + 0x2f8))(plVar3);
      *(undefined8 *)param_3 = *(undefined8 *)(lVar6 + 0x140);
      return;
    }
    FVar7.Numerator = 60000;
    FVar7.Denominator = 1;
  }
  else {
    FVar7 = pUVar5->OutputFrameRate;
  }
  *(FFrameRate *)param_3 = FVar7;
  return;
}

// execGetTransientSettings @ 14ddabe30

void __cdecl
UMoviePipelinePrimaryConfig::execGetTransientSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[5].field_0x10;
  _Src = *(void **)&param_1[5].field_0x8;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 << 3);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execInitializeTransientSettings @ 14ddad2e0

void __cdecl
UMoviePipelinePrimaryConfig::execInitializeTransientSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  InitializeTransientSettings((UMoviePipelinePrimaryConfig *)param_1);
  return;
}

