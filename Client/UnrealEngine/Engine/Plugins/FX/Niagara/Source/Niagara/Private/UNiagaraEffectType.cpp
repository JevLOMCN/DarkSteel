// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 18

// StaticClass @ 14925f640

UClass * __cdecl UNiagaraEffectType::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraEffectType.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEffectType",
               &Z_Registration_Info_UClass_UNiagaraEffectType.InnerSingleton,
               StaticRegisterNativesUNiagaraEffectType,200,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Niagara",InternalConstructor<UNiagaraEffectType>,
               InternalVTableHelperCtorCaller<UNiagaraEffectType>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraEffectType.InnerSingleton;
}

// UNiagaraEffectType @ 1492787c0

UNiagaraEffectType * __thiscall
UNiagaraEffectType::UNiagaraEffectType(UNiagaraEffectType *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bAllowCullingForLocalPlayers = false;
  this->_padding_ = (longlong)&___7UNiagaraEffectType__6B_;
  (this->SignificanceHandler).field0_0x0.DebugPtr = (UNiagaraSignificanceHandler *)0x0;
  (this->DetailLevelScalabilitySettings_DEPRECATED).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DetailLevelScalabilitySettings_DEPRECATED).ArrayNum = 0;
  (this->DetailLevelScalabilitySettings_DEPRECATED).ArrayMax = 0;
  (this->SystemScalabilitySettings).Settings.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SystemScalabilitySettings).Settings.ArrayNum = 0;
  (this->SystemScalabilitySettings).Settings.ArrayMax = 0;
  (this->EmitterScalabilitySettings).Settings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EmitterScalabilitySettings).Settings.ArrayNum = 0;
  (this->EmitterScalabilitySettings).Settings.ArrayMax = 0;
  (this->PerformanceBaselineController).field0_0x0.DebugPtr = (UNiagaraBaselineController *)0x0;
  (this->PerfBaselineStats).PerInstanceAvg_GT = 0.0;
  (this->PerfBaselineStats).PerInstanceAvg_RT = 0.0;
  (this->PerfBaselineStats).PerInstanceMax_GT = 0.0;
  (this->PerfBaselineStats).PerInstanceMax_RT = 0.0;
  (this->PerfBaselineVersion).A = 0;
  (this->PerfBaselineVersion).B = 0;
  (this->PerfBaselineVersion).C = 0;
  (this->PerfBaselineVersion).D = 0;
  (this->CSVStat_Count).ComparisonIndex = 0;
  (this->CSVStat_Count).Number = 0;
  (this->CSVStat_Total).ComparisonIndex = 0;
  (this->CSVStat_Total).Number = 0;
  (this->CSVStat_GTOnly).ComparisonIndex = 0;
  (this->CSVStat_GTOnly).Number = 0;
  (this->CSVStat_RT).ComparisonIndex = 0;
  (this->CSVStat_RT).Number = 0;
  (this->CSVStat_GPU).ComparisonIndex = 0;
  (this->CSVStat_GPU).Number = 0;
  return this;
}

// UNiagaraEffectType @ 149278850

UNiagaraEffectType * __thiscall
UNiagaraEffectType::UNiagaraEffectType(UNiagaraEffectType *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bAllowCullingForLocalPlayers = false;
  this->_padding_ = (longlong)&___7UNiagaraEffectType__6B_;
  this->bNewSystemsSinceLastScalabilityUpdate = 0;
  this->UpdateFrequency = SpawnOnly;
  (this->SignificanceHandler).field0_0x0.DebugPtr = (UNiagaraSignificanceHandler *)0x0;
  (this->DetailLevelScalabilitySettings_DEPRECATED).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DetailLevelScalabilitySettings_DEPRECATED).ArrayNum = 0;
  (this->DetailLevelScalabilitySettings_DEPRECATED).ArrayMax = 0;
  (this->SystemScalabilitySettings).Settings.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SystemScalabilitySettings).Settings.ArrayNum = 0;
  (this->SystemScalabilitySettings).Settings.ArrayMax = 0;
  (this->EmitterScalabilitySettings).Settings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EmitterScalabilitySettings).Settings.ArrayNum = 0;
  (this->EmitterScalabilitySettings).Settings.ArrayMax = 0;
  this->NumInstances = 0;
  (this->PerformanceBaselineController).field0_0x0.DebugPtr = (UNiagaraBaselineController *)0x0;
  (this->PerfBaselineStats).PerInstanceAvg_GT = 0.0;
  (this->PerfBaselineStats).PerInstanceAvg_RT = 0.0;
  (this->PerfBaselineStats).PerInstanceMax_GT = 0.0;
  (this->PerfBaselineStats).PerInstanceMax_RT = 0.0;
  (this->PerfBaselineVersion).A = 0;
  (this->PerfBaselineVersion).B = 0;
  (this->PerfBaselineVersion).C = 0;
  (this->PerfBaselineVersion).D = 0;
  this->CullReaction = DeactivateImmediate;
  (this->CSVStat_Count).ComparisonIndex = 0;
  (this->CSVStat_Count).Number = 0;
  (this->CSVStat_Total).ComparisonIndex = 0;
  (this->CSVStat_Total).Number = 0;
  (this->CSVStat_GTOnly).ComparisonIndex = 0;
  (this->CSVStat_GTOnly).Number = 0;
  (this->CSVStat_RT).ComparisonIndex = 0;
  (this->CSVStat_RT).Number = 0;
  (this->CSVStat_GPU).ComparisonIndex = 0;
  (this->CSVStat_GPU).Number = 0;
  return this;
}

// ~UNiagaraEffectType @ 14927abb0

void __thiscall UNiagaraEffectType::~UNiagaraEffectType(UNiagaraEffectType *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraEffectType__6B_;
  DestructItems<FNiagaraEmitterScalabilitySettings,int>
            ((FNiagaraEmitterScalabilitySettings *)
             (this->EmitterScalabilitySettings).Settings.AllocatorInstance.Data,
             (this->EmitterScalabilitySettings).Settings.ArrayNum);
  pFVar1 = (this->EmitterScalabilitySettings).Settings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraSystemScalabilitySettings,int>
            ((FNiagaraSystemScalabilitySettings *)
             (this->SystemScalabilitySettings).Settings.AllocatorInstance.Data,
             (this->SystemScalabilitySettings).Settings.ArrayNum);
  pFVar1 = (this->SystemScalabilitySettings).Settings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraSystemScalabilitySettings,int>
            ((FNiagaraSystemScalabilitySettings *)
             (this->DetailLevelScalabilitySettings_DEPRECATED).AllocatorInstance.Data,
             (this->DetailLevelScalabilitySettings_DEPRECATED).ArrayNum);
  pFVar1 = (this->DetailLevelScalabilitySettings_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 149284e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UNiagaraEffectType::BeginDestroy(UNiagaraEffectType *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UNiagaraEffectType **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// GeneratePerfBaselines @ 14929f160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UNiagaraEffectType::GeneratePerfBaselines(void)

{
  FName FVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  FModuleManager *this;
  IModuleInterface *pIVar11;
  longlong *plVar12;
  UClass *pUVar13;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar14;
  UObject *pUVar15;
  ulonglong uVar16;
  FAssetData *this_00;
  FAssetData *pFVar17;
  undefined1 local_res8 [8];
  FName local_res10;
  ForAnyElementType local_158;
  undefined8 local_150;
  UObject *local_148;
  FAssetData *local_140;
  ulonglong local_138;
  undefined1 local_130 [24];
  undefined8 uStack_118;
  void *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ForElementType<FSetElementId> local_f8;
  ulonglong local_e8;
  FTopLevelAssetPath local_d8;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  FReadAccessScope local_b8;
  FReadAccessScope local_a0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_88;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &GeneratePerfBaselinesDelegate,&local_b8);
  if (((GeneratePerfBaselinesDelegate._16_4_ == 0) || (GeneratePerfBaselinesDelegate._8_8_ == 0)) ||
     (cVar7 = (**(code **)(*(longlong *)GeneratePerfBaselinesDelegate._8_8_ + 0x38))(),
     cVar7 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b8);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b8);
    pFVar10 = ::FName::FName(&local_res10,"AssetRegistry");
    FVar1 = *pFVar10;
    this = FModuleManager::Get();
    pIVar11 = FModuleManager::LoadModuleChecked(this,FVar1);
    local_140 = (FAssetData *)0x0;
    local_138 = 0;
    plVar12 = (longlong *)(**(code **)((longlong)*pIVar11 + 0x40))(pIVar11);
    pcVar2 = *(code **)(*plVar12 + 0x30);
    pUVar13 = StaticClass();
    UStruct::GetStructPathName((UStruct *)pUVar13,&local_d8);
    local_c8 = local_d8.PackageName.ComparisonIndex.Value;
    uStack_c4 = local_d8.PackageName.Number;
    uStack_c0 = local_d8.AssetName.ComparisonIndex.Value;
    uStack_bc = local_d8.AssetName.Number;
    (*pcVar2)(plVar12,&local_c8,&local_140,0);
    uVar4 = _UNK_150631d98;
    uVar3 = ___xmm_00000000ffffffff0000008000000000;
    iVar5 = (int)local_138;
    uVar16 = (ulonglong)(int)local_138;
    local_158.Data = (FScriptContainerElement *)0x0;
    pFVar17 = local_140 + uVar16;
    local_150 = 0;
    this_00 = local_140;
    while( true ) {
      if ((int)uVar16 != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == pFVar17) break;
      local_f8.InlineData[0] = '\0';
      local_f8.InlineData[1] = '\0';
      local_f8.InlineData[2] = '\0';
      local_f8.InlineData[3] = '\0';
      local_f8._padding_ = 0;
      local_e8 = 0;
      local_130._0_8_ = (FScriptContainerElement *)0x0;
      local_130._16_8_ = 0;
      uStack_118 = 0;
      local_130._8_8_ = 0;
      local_110 = (void *)0x0;
      local_108 = uVar3;
      uStack_100 = uVar4;
      local_f8.SecondaryData = (ForElementType<FSetElementId>)0x0;
      pTVar14 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
                TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                          (&local_88,
                           (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_130);
      pUVar15 = FAssetData::FastGetAsset(this_00,true,pTVar14);
      local_e8 = local_e8 & 0xffffffff00000000;
      if (local_f8.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_f8.SecondaryData);
      }
      iVar9 = SUB84(local_130._8_8_,4);
      local_130._8_8_ = local_130._8_8_ & 0xffffffff00000000;
      if (iVar9 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_130,0,(int *)(local_130 + 0xc));
      }
      uVar6 = local_108._4_4_;
      uStack_100 = 0xffffffff;
      local_108 = (ulonglong)local_108._4_4_ << 0x20;
      if (0x80 < uVar6) {
        local_108 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_130 + 0x10),0);
      }
      if (local_110 != (void *)0x0) {
        FMemory::Free(local_110);
      }
      if ((FScriptContainerElement *)local_130._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_130._0_8_);
      }
      if (pUVar15 == (UObject *)0x0) {
LAB_14929f499:
        local_148 = (UObject *)0x0;
LAB_14929f49e:
        uVar16 = local_138 & 0xffffffff;
        this_00 = this_00 + 1;
      }
      else {
        pUVar13 = StaticClass();
        iVar9 = (int)pUVar13->_padding_;
        if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar9) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
            &pUVar13->_padding_)) goto LAB_14929f499;
        local_148 = pUVar15;
        if ((((*(int *)&pUVar15[3].field_0x20 == -0x7835badc &&
              *(int *)&pUVar15[3].field_0x24 == 0x5f72fbc2) &&
             *(int *)&pUVar15[3].field_0x1c == -0x783e85bc) &&
             *(int *)&pUVar15[3].field_0x18 == -0x27ab2efd) || (*(longlong *)(pUVar15 + 3) == 0))
        goto LAB_14929f49e;
        if ((local_158.Data <= (FScriptContainerElement *)&local_148) &&
           (((FScriptContainerElement *)&local_148 < local_158.Data + (longlong)local_150._4_4_ * 8
            && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)))) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar9 = (int)local_150;
        if ((int)local_150 == local_150._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_158,(int *)((longlong)&local_150 + 4));
        }
        this_00 = this_00 + 1;
        local_150 = CONCAT44(local_150._4_4_,iVar9 + 1);
        *(UObject **)(local_158.Data + (longlong)iVar9 * 8) = local_148;
        uVar16 = local_138 & 0xffffffff;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &GeneratePerfBaselinesDelegate,&local_a0);
    plVar12 = (longlong *)0x0;
    if (GeneratePerfBaselinesDelegate._16_4_ != 0) {
      plVar12 = (longlong *)GeneratePerfBaselinesDelegate._8_8_;
    }
    (**(code **)(*plVar12 + 0x60))(plVar12,&local_158);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a0);
    if (local_158.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data);
    }
    DestructItems<FAssetData,int>(local_140,(int)local_138);
    if (local_140 != (FAssetData *)0x0) {
      FMemory::Free(local_140);
      return;
    }
  }
  return;
}

// GetActiveEmitterScalabilitySettings @ 1492a02d0

FNiagaraEmitterScalabilitySettings * __thiscall
UNiagaraEffectType::GetActiveEmitterScalabilitySettings(UNiagaraEffectType *this)

{
  int iVar1;
  bool bVar2;
  FNiagaraEmitterScalabilitySettings *this_00;
  FNiagaraEmitterScalabilitySettings *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->EmitterScalabilitySettings).Settings.ArrayNum;
  this_00 = (FNiagaraEmitterScalabilitySettings *)
            (this->EmitterScalabilitySettings).Settings.AllocatorInstance.Data;
  pFVar3 = this_00 + iVar1;
  while( true ) {
    if ((this->EmitterScalabilitySettings).Settings.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraEmitterScalabilitySettings_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar3) break;
    bVar2 = FNiagaraPlatformSet::IsActive(&this_00->Platforms);
    if (bVar2) {
      return this_00;
    }
    this_00 = this_00 + 1;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    FNiagaraPlatformSet::FNiagaraPlatformSet(&::Dummy.Platforms);
    ::Dummy.bScaleSpawnCount = 0;
    ::Dummy.SpawnCountScale = 1.0;
    atexit(`UNiagaraEffectType::GetActiveEmitterScalabilitySettings'::__l2::
           _dynamic_atexit_destructor_for__Dummy__);
    _Init_thread_footer(&::_TSS1);
  }
  return &::Dummy;
}

// GetActiveSystemScalabilitySettings @ 1492a03c0

FNiagaraSystemScalabilitySettings * __thiscall
UNiagaraEffectType::GetActiveSystemScalabilitySettings(UNiagaraEffectType *this)

{
  int iVar1;
  bool bVar2;
  FNiagaraSystemScalabilitySettings *this_00;
  FNiagaraSystemScalabilitySettings *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->SystemScalabilitySettings).Settings.ArrayNum;
  this_00 = (FNiagaraSystemScalabilitySettings *)
            (this->SystemScalabilitySettings).Settings.AllocatorInstance.Data;
  pFVar3 = this_00 + iVar1;
  while( true ) {
    if ((this->SystemScalabilitySettings).Settings.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraSystemScalabilitySettings_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar3) break;
    bVar2 = FNiagaraPlatformSet::IsActive(&this_00->Platforms);
    if (bVar2) {
      return this_00;
    }
    this_00 = this_00 + 1;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    FNiagaraSystemScalabilitySettings::FNiagaraSystemScalabilitySettings(&::Dummy);
    atexit(`UNiagaraEffectType::GetActiveSystemScalabilitySettings'::__l2::
           _dynamic_atexit_destructor_for__Dummy__);
    _Init_thread_footer(&::_TSS1);
  }
  return &::Dummy;
}

// GetPrivateStaticClass @ 1492a6270

UClass * __cdecl UNiagaraEffectType::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraEffectType.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEffectType",
               &Z_Registration_Info_UClass_UNiagaraEffectType.InnerSingleton,
               StaticRegisterNativesUNiagaraEffectType,200,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Niagara",InternalConstructor<UNiagaraEffectType>,
               InternalVTableHelperCtorCaller<UNiagaraEffectType>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraEffectType.InnerSingleton;
}

// InvalidatePerfBaseline @ 1492ad280

void __thiscall UNiagaraEffectType::InvalidatePerfBaseline(UNiagaraEffectType *this)

{
  (this->PerfBaselineVersion).C = 0;
  (this->PerfBaselineVersion).D = 0;
  (this->PerfBaselineVersion).A = 0;
  (this->PerfBaselineVersion).B = 0;
  (this->PerfBaselineStats).PerInstanceAvg_GT = 0.0;
  (this->PerfBaselineStats).PerInstanceAvg_RT = 0.0;
  (this->PerfBaselineStats).PerInstanceMax_GT = 0.0;
  (this->PerfBaselineStats).PerInstanceMax_RT = 0.0;
  return;
}

// IsReadyForFinishDestroy @ 1492ad7a0

bool __thiscall UNiagaraEffectType::IsReadyForFinishDestroy(UNiagaraEffectType *this)

{
  return true;
}

// PopulatePerfStatNames @ 1492aebe0

void __thiscall UNiagaraEffectType::PopulatePerfStatNames(UNiagaraEffectType *this)

{
  ForAnyElementType FVar1;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if (this->CSVStat_Total == (FName)0x0) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    ::FString::PrintfImpl(&local_18,L"FXType_Total/%s");
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar1.Data = local_18.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar1.Data);
    this->CSVStat_Total = local_res8;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"FXType_GTOnly/%s");
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar1.Data = local_18.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar1.Data);
    this->CSVStat_GTOnly = local_res8;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"FXType_RT/%s");
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar1.Data = local_18.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar1.Data);
    this->CSVStat_RT = local_res8;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"FXType_GPU/%s");
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar1.Data = local_18.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar1.Data);
    this->CSVStat_GPU = local_res8;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"FXType_Count/%s");
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar1.Data = local_18.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar1.Data);
    this->CSVStat_Count = local_res8;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PostLoad @ 1492afad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UNiagaraEffectType::PostLoad(UNiagaraEffectType *this)

{
  int iVar1;
  int iVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  FNiagaraPlatformSet *pFVar7;
  FScriptContainerElement *pFVar8;
  FNiagaraPlatformSet *pFVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  FGuid local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  UObject::PostLoad((UObject *)this);
  local_b8 = FNiagaraCustomVersion::GUID;
  iVar2 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_b8);
  if (iVar2 < 0x42) {
    if (this->UpdateFrequency == SpawnOnly) {
      (this->SignificanceHandler).field0_0x0.DebugPtr = (UNiagaraSignificanceHandler *)0x0;
    }
    else {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar3 = UNiagaraSignificanceHandlerDistance::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_a8,pUVar3);
      local_a8._8_8_ = this;
      pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
      if (local_a8._64_8_ != 0) {
        plVar5 = (longlong *)(local_a8 + 0x50);
        if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
          plVar5 = (longlong *)local_a8._104_8_;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      (this->SignificanceHandler).field0_0x0.DebugPtr = (UNiagaraSignificanceHandler *)pUVar4;
    }
  }
  iVar1 = (this->SystemScalabilitySettings).Settings.ArrayNum;
  pFVar8 = (this->SystemScalabilitySettings).Settings.AllocatorInstance.Data;
  pFVar6 = pFVar8 + (longlong)iVar1 * 0x98;
  while( true ) {
    if ((this->SystemScalabilitySettings).Settings.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraSystemScalabilitySettings,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_c8);
    }
    if (pFVar8 == pFVar6) break;
    if (iVar2 < 0x47) {
      *(uint *)(pFVar8 + 0x50) =
           *(uint *)(pFVar8 + 0x50) ^ (*(uint *)(pFVar8 + 0x50) ^ *(uint *)(pFVar8 + 0x38)) & 1;
      *(undefined4 *)(pFVar8 + 0x58) = *(undefined4 *)(pFVar8 + 0x44);
    }
    pFVar8 = pFVar8 + 0x98;
  }
  iVar2 = (this->SystemScalabilitySettings).Settings.ArrayNum;
  pFVar9 = (FNiagaraPlatformSet *)(this->SystemScalabilitySettings).Settings.AllocatorInstance.Data;
  pFVar7 = (FNiagaraPlatformSet *)((longlong)pFVar9 + (longlong)iVar2 * 0x98);
  while( true ) {
    if ((this->SystemScalabilitySettings).Settings.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraSystemScalabilitySettings,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_c8);
    }
    if (pFVar9 == pFVar7) break;
    FNiagaraPlatformSet::ApplyRedirects(pFVar9);
    pFVar9 = (FNiagaraPlatformSet *)&pFVar9[3].DeviceProfileStates.ArrayNum;
  }
  iVar2 = (this->EmitterScalabilitySettings).Settings.ArrayNum;
  pFVar9 = (FNiagaraPlatformSet *)(this->EmitterScalabilitySettings).Settings.AllocatorInstance.Data
  ;
  pFVar7 = (FNiagaraPlatformSet *)((longlong)pFVar9 + (longlong)iVar2 * 0x38);
  while( true ) {
    if ((this->EmitterScalabilitySettings).Settings.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraEmitterScalabilitySettings,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_c8);
    }
    if (pFVar9 == pFVar7) break;
    FNiagaraPlatformSet::ApplyRedirects(pFVar9);
    pFVar9 = (FNiagaraPlatformSet *)&pFVar9[1].DeviceProfileStates.ArrayNum;
  }
  (this->PerfBaselineVersion).C = 0;
  (this->PerfBaselineVersion).D = 0;
  (this->PerfBaselineVersion).A = 0;
  (this->PerfBaselineVersion).B = 0;
  (this->PerfBaselineStats).PerInstanceAvg_GT = 0.0;
  (this->PerfBaselineStats).PerInstanceAvg_RT = 0.0;
  (this->PerfBaselineStats).PerInstanceMax_GT = 0.0;
  (this->PerfBaselineStats).PerInstanceMax_RT = 0.0;
  return;
}

// Serialize @ 1492b5360

void __thiscall UNiagaraEffectType::Serialize(UNiagaraEffectType *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001492b5380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FNiagaraCustomVersion::GUID);
  return;
}

// Serialize @ 1492b5390

void __thiscall
UNiagaraEffectType::Serialize(UNiagaraEffectType *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FNiagaraCustomVersion::GUID);
  return;
}

// SpawnBaselineActor @ 1492b6630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UNiagaraEffectType::SpawnBaselineActor(UNiagaraEffectType *this,UWorld *param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  AActor *this_00;
  UObject *pUVar4;
  FString *pFVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined1 auStackY_158 [32];
  FString local_118;
  FString local_108;
  undefined1 local_f8 [112];
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if ((this->PerformanceBaselineController).field0_0x0.DebugPtr == (UNiagaraBaselineController *)0x0
     ) {
    return;
  }
  if (param_1 == (UWorld *)0x0) {
    return;
  }
  (this->PerfBaselineStats).PerInstanceAvg_GT = 0.0;
  (this->PerfBaselineStats).PerInstanceAvg_RT = 0.0;
  (this->PerfBaselineStats).PerInstanceMax_GT = 0.0;
  (this->PerfBaselineStats).PerInstanceMax_RT = 0.0;
  this->PerfBaselineVersion = CurrentPerfBaselineVersion;
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_88);
  pUVar3 = Z_Construct_UClass_ANiagaraPerfBaselineActor_NoRegister();
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_f8);
  local_f8[0x32] = local_f8[0x32] | 4;
  local_f8._16_8_ = (AActor *)0x0;
  local_f8._24_8_ = (APawn *)0x0;
  local_f8[0x30] = Undefined;
  local_f8[0x31] = MultiplyWithRoot;
  if ((pUVar3 != (UClass *)0x0) &&
     (this_00 = UWorld::SpawnActor(param_1,pUVar3,&UE::Math::TTransform<double>::Identity,
                                   (FActorSpawnParameters *)local_f8), this_00 != (AActor *)0x0)) {
    pUVar3 = Z_Construct_UClass_ANiagaraPerfBaselineActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_1492b670f;
  }
  this_00 = (AActor *)0x0;
LAB_1492b670f:
  if (local_f8._64_8_ != 0) {
    plVar6 = (longlong *)(local_f8 + 0x50);
    if ((longlong *)local_f8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_f8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (this_00 == (AActor *)0x0) {
    pFVar5 = GetTypeName<ANiagaraPerfBaselineActor>(&local_118);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar7);
  }
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pUVar4 = StaticDuplicateObject
                     ((UObject *)(this->PerformanceBaselineController).field0_0x0.DebugPtr,
                      (UObject *)this_00,(FName)0x0,
                      RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                      RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                      RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                      RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                      RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                      RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                      RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                      RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                      RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public
                      ,(UClass *)0x0,Normal,
                      PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                      ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                      AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                      ReachabilityFlag0);
  if (pUVar4 == (UObject *)0x0) {
    pFVar5 = GetTypeName<UNiagaraBaselineController>(&local_118);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar7);
  }
  pUVar3 = Z_Construct_UClass_UNiagaraBaselineController_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar3->_padding_)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    this_00[1]._padding_ = (longlong)pUVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    *(UNiagaraEffectType **)&pUVar4[1].field_0x8 = this;
    lVar2 = this_00[1]._padding_;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    *(AActor **)(lVar2 + 0x38) = this_00;
    AActor::FinishSpawning
              (this_00,&UE::Math::TTransform<double>::Identity,false,
               (FComponentInstanceDataCache *)0x0,OverrideRootScale);
    AActor::RegisterAllActorTickFunctions(this_00,true,true);
    if (local_88._64_8_ != 0) {
      plVar6 = (longlong *)(local_88 + 0x50);
      if ((longlong *)local_88._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_88._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    return;
  }
  pFVar5 = GetTypeName<UNiagaraBaselineController>(&local_118);
  pwVar7 = L"";
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pFVar5 = GetFullNameForCastLogError<UObject>(&local_108,pUVar4);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar7,pwVar8);
}

// StaticRegisterNativesUNiagaraEffectType @ 1492b6960

void __cdecl UNiagaraEffectType::StaticRegisterNativesUNiagaraEffectType(void)

{
  return;
}

// UpdatePerfBaselineStats @ 1492bfcd0

void __thiscall
UNiagaraEffectType::UpdatePerfBaselineStats
          (UNiagaraEffectType *this,FNiagaraPerfBaselineStats *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1->PerInstanceAvg_RT;
  fVar2 = param_1->PerInstanceMax_GT;
  fVar3 = param_1->PerInstanceMax_RT;
  (this->PerfBaselineStats).PerInstanceAvg_GT = param_1->PerInstanceAvg_GT;
  (this->PerfBaselineStats).PerInstanceAvg_RT = fVar1;
  (this->PerfBaselineStats).PerInstanceMax_GT = fVar2;
  (this->PerfBaselineStats).PerInstanceMax_RT = fVar3;
  this->PerfBaselineVersion = CurrentPerfBaselineVersion;
  return;
}

