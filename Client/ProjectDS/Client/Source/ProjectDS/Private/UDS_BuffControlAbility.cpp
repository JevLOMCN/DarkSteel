// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b428920

UClass * __cdecl UDS_BuffControlAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_BuffControlAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_BuffControlAbility",
               &Z_Registration_Info_UClass_UDS_BuffControlAbility.InnerSingleton,
               StaticRegisterNativesUDS_BuffControlAbility,0x200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_BuffControlAbility>,
               InternalVTableHelperCtorCaller<UDS_BuffControlAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_BuffControlAbility.InnerSingleton;
}

// UDS_BuffControlAbility @ 14b42aec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_BuffControlAbility * __thiscall
UDS_BuffControlAbility::UDS_BuffControlAbility(UDS_BuffControlAbility *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->OwnerMeshComp).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OwnerMeshComp).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->BuffEffectInfoList = 0;
  *(undefined8 *)&(this->BuffEffectInfoList).field_0x8 = 0;
  *(undefined8 *)&(this->BuffEffectInfoList).field_0x20 = 0;
  *(undefined4 *)&(this->BuffEffectInfoList).field_0x28 = 0;
  *(undefined4 *)&(this->BuffEffectInfoList).field_0x2c = 0x80;
  *(undefined4 *)&(this->BuffEffectInfoList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BuffEffectInfoList).field_0x34 = 0;
  *(undefined8 *)&(this->BuffEffectInfoList).field_0x40 = 0;
  *(undefined4 *)&(this->BuffEffectInfoList).field_0x48 = 0;
  *(undefined8 *)&this->CollideBuffDebugInfoList = 0;
  *(undefined8 *)&(this->CollideBuffDebugInfoList).field_0x8 = 0;
  *(undefined8 *)&(this->CollideBuffDebugInfoList).field_0x20 = 0;
  *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x28 = 0;
  *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x2c = 0x80;
  *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x34 = 0;
  *(undefined8 *)&(this->CollideBuffDebugInfoList).field_0x40 = 0;
  *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x48 = 0;
  return this;
}

// UDS_BuffControlAbility @ 14b42afa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_BuffControlAbility * __thiscall
UDS_BuffControlAbility::UDS_BuffControlAbility
          (UDS_BuffControlAbility *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->OwnerMeshComp).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OwnerMeshComp).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->BuffEffectInfoList = 0;
  *(undefined8 *)&(this->BuffEffectInfoList).field_0x8 = 0;
  *(undefined8 *)&(this->BuffEffectInfoList).field_0x20 = 0;
  *(undefined4 *)&(this->BuffEffectInfoList).field_0x28 = 0;
  *(undefined4 *)&(this->BuffEffectInfoList).field_0x2c = 0x80;
  *(undefined4 *)&(this->BuffEffectInfoList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BuffEffectInfoList).field_0x34 = 0;
  *(undefined8 *)&(this->BuffEffectInfoList).field_0x40 = 0;
  *(undefined4 *)&(this->BuffEffectInfoList).field_0x48 = 0;
  *(undefined8 *)&this->CollideBuffDebugInfoList = 0;
  *(undefined8 *)&(this->CollideBuffDebugInfoList).field_0x8 = 0;
  *(undefined8 *)&(this->CollideBuffDebugInfoList).field_0x20 = 0;
  *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x28 = 0;
  *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x2c = 0x80;
  *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x34 = 0;
  *(undefined8 *)&(this->CollideBuffDebugInfoList).field_0x40 = 0;
  *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x48 = 0;
  return this;
}

// ~UDS_BuffControlAbility @ 14b42b7f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_BuffControlAbility::~UDS_BuffControlAbility(UDS_BuffControlAbility *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CollideBuffDebugInfoList).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_CollideBuffDebugInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_CollideBuffDebugInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_CollideBuffDebugInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CollideBuffDebugInfoList);
  *(undefined4 *)&(this->BuffEffectInfoList).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BuffEffectInfoList).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_BuffEffectInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_BuffEffectInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_BuffEffectInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BuffEffectInfoList);
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b42dc80

UClass * __cdecl UDS_BuffControlAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_BuffControlAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_BuffControlAbility",
               &Z_Registration_Info_UClass_UDS_BuffControlAbility.InnerSingleton,
               StaticRegisterNativesUDS_BuffControlAbility,0x200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_BuffControlAbility>,
               InternalVTableHelperCtorCaller<UDS_BuffControlAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_BuffControlAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b42e1b0

bool __thiscall UDS_BuffControlAbility::ShouldTickComponent(UDS_BuffControlAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_BuffControlAbility @ 14b42e280

void __cdecl UDS_BuffControlAbility::StaticRegisterNativesUDS_BuffControlAbility(void)

{
  return;
}

// EndBuffEffect @ 14b7a5ca0

void __thiscall UDS_BuffControlAbility::EndBuffEffect(UDS_BuffControlAbility *this,int param_1)

{
  undefined1 *puVar1;
  TMap<int,FDS_BuffEffectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>_>
  *this_00;
  int iVar2;
  FDS_BuffEffectInfo *pFVar3;
  undefined1 *puVar4;
  int local_res10 [2];
  undefined1 local_f8 [192];
  undefined1 local_38 [32];
  
  this_00 = &this->BuffEffectInfoList;
  if (*(int *)&(this->BuffEffectInfoList).field_0x8 ==
      *(int *)&(this->BuffEffectInfoList).field_0x34) {
    return;
  }
  puVar4 = *(undefined1 **)&(this->BuffEffectInfoList).field_0x40;
  puVar1 = &(this->BuffEffectInfoList).field_0x38;
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  iVar2 = *(int *)(puVar4 + (ulonglong)
                            (*(int *)&(this->BuffEffectInfoList).field_0x48 - 1U & param_1) * 4);
  if (iVar2 == -1) {
    return;
  }
  while (*(int *)((longlong)iVar2 * 0x68 + *(longlong *)&this_00->field_0x0) != param_1) {
    iVar2 = *(int *)((longlong)iVar2 * 0x68 + 0x60 + *(longlong *)&this_00->field_0x0);
    if (iVar2 == -1) {
      return;
    }
  }
  pFVar3 = TMapBase<int,FDS_BuffEffectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>_>
           ::FindChecked((TMapBase<int,FDS_BuffEffectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>_>
                          *)this_00,param_1);
  iVar2 = pFVar3->ID_ExtinctionEffect;
  if (0 < iVar2) {
    FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_f8);
    local_f8._40_8_ = this->_padding_;
    local_f8._52_8_ = (this->OwnerMeshComp).WeakPtr;
    local_f8[0xa8] = true;
    local_f8._0_4_ = iVar2;
    UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_f8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    if ((void *)local_38._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_f8._184_8_);
    if ((FScriptContainerElement *)local_f8._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_f8._24_8_);
    }
  }
  if (*(int *)&(this->BuffEffectInfoList).field_0x8 ==
      *(int *)&(this->BuffEffectInfoList).field_0x34) {
    return;
  }
  puVar4 = *(undefined1 **)&(this->BuffEffectInfoList).field_0x40;
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  iVar2 = *(int *)(puVar4 + (ulonglong)
                            (*(int *)&(this->BuffEffectInfoList).field_0x48 - 1U & param_1) * 4);
  if (iVar2 == -1) {
    return;
  }
  do {
    if (*(int *)((longlong)iVar2 * 0x68 + *(longlong *)&this_00->field_0x0) == param_1) {
      pFVar3 = TMapBase<int,FDS_BuffEffectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>_>
               ::FindChecked((TMapBase<int,FDS_BuffEffectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>_>
                              *)this_00,param_1);
      FDS_BuffEffectInfo::ClearVariables(pFVar3);
      if (*(int *)&(this->BuffEffectInfoList).field_0x8 ==
          *(int *)&(this->BuffEffectInfoList).field_0x34) {
        return;
      }
      local_res10[0] = param_1;
      TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
      ::RemoveImpl<int>((TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
                         *)this_00,param_1,local_res10);
      return;
    }
    iVar2 = *(int *)((longlong)iVar2 * 0x68 + 0x60 + *(longlong *)&this_00->field_0x0);
  } while (iVar2 != -1);
  return;
}

// InitByBuffData @ 14b7ae6d0

void __thiscall
UDS_BuffControlAbility::InitByBuffData
          (UDS_BuffControlAbility *this,TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UDS_CharBuffData *this_00;
  int iVar3;
  ForAnyElementType FVar4;
  FWeakObjectPtr local_res10;
  EDS_BuffListFilterType local_res18 [4];
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  local_res10 = param_1.WeakPtr;
  bVar2 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar2) {
    this_00 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&local_res10);
    local_res18[0] = All;
    UDS_CharBuffData::GetBuffList(this_00,&local_28,local_res18,0);
    iVar3 = local_28.ArrayNum;
    pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar3 * 4;
    FVar4.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar3) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (FVar4.Data == pFVar1) break;
      StartBuffEffect(this,*(int *)FVar4.Data);
      StartSpecialBuff(this,*(int *)FVar4.Data);
      FVar4.Data = FVar4.Data + 4;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// OnChangedBuffList @ 14b7b67a0

void __thiscall
UDS_BuffControlAbility::OnChangedBuffList
          (UDS_BuffControlAbility *this,ulong64 *param_1,int *param_2,bool *param_3)

{
  if (*param_3 == true) {
    StartBuffEffect(this,*param_2);
    StartSpecialBuff(this,*param_2);
    return;
  }
  EndBuffEffect(this,*param_2);
  RemoveSpecialBuff(this,*param_2);
  return;
}

// OnChangedSpecialBuff @ 14b7b7200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_BuffControlAbility::OnChangedSpecialBuff
          (UDS_BuffControlAbility *this,ulong64 *param_1,EDS_SpecialBuffType *param_2,bool *param_3)

{
  EDS_AbilityInputPolicy local_res18 [16];
  
  if (*param_2 == NotMovable) {
    if (*param_3 == true) {
      local_res18[0] = BlockInput;
      UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res18);
      return;
    }
    local_res18[0] = (**(code **)(this->_padding_ + 0x3c8))();
    UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res18);
  }
  return;
}

// OnCompleteLoad_ActEffect @ 14b7b7320

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UDS_BuffControlAbility::OnCompleteLoad_ActEffect
          (UDS_BuffControlAbility *this,FDS_EffectSpawnCompleteInfo param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  FDS_BuffEffectInfo *pFVar3;
  undefined1 *puVar4;
  UNiagaraComponent *local_res10 [3];
  
  if (param_1.NiagaraComponent != (UNiagaraComponent *)0x0) {
    if (*(int *)&(this->BuffEffectInfoList).field_0x8 !=
        *(int *)&(this->BuffEffectInfoList).field_0x34) {
      puVar4 = *(undefined1 **)&(this->BuffEffectInfoList).field_0x40;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(this->BuffEffectInfoList).field_0x38;
      }
      iVar2 = *(int *)(puVar4 + (ulonglong)
                                (*(int *)&(this->BuffEffectInfoList).field_0x48 - 1U & param_2) * 4)
      ;
      if (iVar2 != -1) {
        lVar1 = *(longlong *)&this->BuffEffectInfoList;
        do {
          if (*(int *)((longlong)iVar2 * 0x68 + lVar1) == param_2) {
            pFVar3 = TMapBase<int,FDS_BuffEffectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>_>
                     ::FindChecked((TMapBase<int,FDS_BuffEffectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>_>
                                    *)&this->BuffEffectInfoList,param_2);
            local_res10[0] = param_1.NiagaraComponent;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1.NiagaraComponent);
            }
            FWeakObjectPtr::operator=(&(pFVar3->ActEffect).WeakPtr,(FObjectPtr)local_res10);
            return;
          }
          iVar2 = *(int *)((longlong)iVar2 * 0x68 + 0x60 + lVar1);
        } while (iVar2 != -1);
      }
    }
    (**(code **)((param_1.NiagaraComponent)->_padding_ + 0x4a0))(param_1.NiagaraComponent,0);
  }
  return;
}

// OnCompleteLoad_BuffEffect @ 14b7b73e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UDS_BuffControlAbility::OnCompleteLoad_BuffEffect
          (UDS_BuffControlAbility *this,FDS_EffectSpawnCompleteInfo param_1,int param_2)

{
  int *piVar1;
  FWeakObjectPtr *this_00;
  longlong lVar2;
  int iVar3;
  FDS_BuffEffectInfo *pFVar4;
  undefined1 *puVar5;
  UNiagaraComponent *local_res10 [3];
  
  if (param_1.NiagaraComponent != (UNiagaraComponent *)0x0) {
    if (*(int *)&(this->BuffEffectInfoList).field_0x8 !=
        *(int *)&(this->BuffEffectInfoList).field_0x34) {
      puVar5 = *(undefined1 **)&(this->BuffEffectInfoList).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(this->BuffEffectInfoList).field_0x38;
      }
      iVar3 = *(int *)(puVar5 + (ulonglong)
                                (*(int *)&(this->BuffEffectInfoList).field_0x48 - 1U & param_2) * 4)
      ;
      if (iVar3 != -1) {
        lVar2 = *(longlong *)&this->BuffEffectInfoList;
        do {
          if (*(int *)((longlong)iVar3 * 0x68 + lVar2) == param_2) {
            pFVar4 = TMapBase<int,FDS_BuffEffectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>_>
                     ::FindChecked((TMapBase<int,FDS_BuffEffectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>_>
                                    *)&this->BuffEffectInfoList,param_2);
            iVar3 = (pFVar4->BuffEffect).ArrayNum;
            piVar1 = &(pFVar4->BuffEffect).ArrayMax;
            if (iVar3 == *piVar1) {
              iVar3 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&(pFVar4->BuffEffect).AllocatorInstance,piVar1);
            }
            (pFVar4->BuffEffect).ArrayNum = iVar3 + 1;
            this_00 = (FWeakObjectPtr *)
                      ((pFVar4->BuffEffect).AllocatorInstance.Data + (longlong)iVar3 * 8);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1.NiagaraComponent);
            }
            this_00->ObjectIndex = 0;
            this_00->ObjectSerialNumber = 0;
            local_res10[0] = param_1.NiagaraComponent;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1.NiagaraComponent);
            }
            FWeakObjectPtr::operator=(this_00,(FObjectPtr)local_res10);
            return;
          }
          iVar3 = *(int *)((longlong)iVar3 * 0x68 + 0x60 + lVar2);
        } while (iVar3 != -1);
      }
    }
    (**(code **)((param_1.NiagaraComponent)->_padding_ + 0x4a0))(param_1.NiagaraComponent,0);
  }
  return;
}

// OnDeactivateAbility @ 14b7b8360

void __thiscall
UDS_BuffControlAbility::OnDeactivateAbility(UDS_BuffControlAbility *this,bool *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  TMap<int,FDS_CollideBuffDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>_>
  *this_00;
  FWeakObjectPtr local_res8;
  
  UDS_CharBuffData::GetData((ulong64)&local_res8);
  bVar3 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[6].field_0x8,this);
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar4 + 7),this);
  }
  RemoveAllBuffEffect(this);
  this_00 = &this->CollideBuffDebugInfoList;
  bVar3 = 1 < *(int *)&(this->CollideBuffDebugInfoList).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,FDS_CollideBuffDebugInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FDS_CollideBuffDebugInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->CollideBuffDebugInfoList).field_0xc;
  *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x34 = 0;
  iVar2 = *(int *)&(this->CollideBuffDebugInfoList).field_0x2c;
  *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CollideBuffDebugInfoList).field_0x10,
               0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x48 = 1;
    TSet<TTuple<int,FDS_CollideBuffDebugInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FDS_CollideBuffDebugInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// OnPostActivateAbility @ 14b7bb730

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_BuffControlAbility::OnPostActivateAbility(UDS_BuffControlAbility *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FWeakObjectPtr *pFVar4;
  UObject *pUVar5;
  UDS_CharBuffData *this_00;
  int iVar6;
  ForAnyElementType FVar7;
  undefined1 auStackY_1b8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  EDS_AbilityDeactivateType local_188 [16];
  TArray<int,TSizedDefaultAllocator<32>_> local_178;
  undefined1 local_168 [288];
  void *local_48;
  wchar_t *local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  UDS_CharBuffData::GetData((ulong64)(local_168 + 8));
  bVar2 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)(local_168 + 8),(void *)0x0)
  ;
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b7bb7ee;
    pUVar3 = UDS_LogManager::GetInst();
    local_48 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_168 + 0x20),
               "UDS_BuffControlAbility::OnPostActivateAbility",0x2d,Yes);
    pwVar9 = L"charBuffData is nullptr.";
    uVar8 = 0x5b;
  }
  else {
    pFVar4 = (FWeakObjectPtr *)
             (**(code **)(*(longlong *)this->_padding_ + 0x80))
                       ((longlong *)this->_padding_,local_168);
    (this->OwnerMeshComp).WeakPtr = *pFVar4;
    bVar2 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                      (&this->OwnerMeshComp,(void *)0x0);
    if (!bVar2) {
      local_178.ArrayNum = 0;
      local_178.AllocatorInstance.Data = (FScriptContainerElement *)OnChangedBuffList;
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_168 + 8));
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_BuffControlAbility>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
                  *)&pUVar5[6].field_0x8,(UDS_BuffControlAbility *)local_168,(pmf_53c07ae1 *)this);
      local_178._8_8_ = (ulonglong)(uint)local_178.ArrayMax << 0x20;
      local_178.AllocatorInstance.Data = (FScriptContainerElement *)_vcall__936__flat______;
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_168 + 8));
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,enum_EDS_SpecialBuffType_const_&,bool_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_BuffControlAbility>
                (pUVar5 + 7,(UDS_BuffControlAbility *)local_168,(pmf_285c7f0d *)this);
      local_168._0_8_ = local_168._8_8_;
      bVar2 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)local_168,(void *)0x0);
      if (bVar2) {
        return;
      }
      this_00 = (UDS_CharBuffData *)FWeakObjectPtr::Get((FWeakObjectPtr *)local_168);
      local_168._16_4_ = 0;
      UDS_CharBuffData::GetBuffList
                (this_00,&local_178,(EDS_BuffListFilterType *)(local_168 + 0x10),0);
      iVar6 = local_178.ArrayNum;
      pFVar1 = local_178.AllocatorInstance.Data + (longlong)iVar6 * 4;
      FVar7.Data = local_178.AllocatorInstance.Data;
      while( true ) {
        if (local_178.ArrayNum != iVar6) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_188);
        }
        if (FVar7.Data == pFVar1) break;
        StartBuffEffect(this,*(int *)FVar7.Data);
        StartSpecialBuff(this,*(int *)FVar7.Data);
        FVar7.Data = FVar7.Data + 4;
      }
      if (local_178.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_178.AllocatorInstance.Data);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b7bb7ee;
    pUVar3 = UDS_LogManager::GetInst();
    local_48 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_168 + 0x20),
               "UDS_BuffControlAbility::OnPostActivateAbility",0x2d,Yes);
    pwVar9 = L"OwnerMeshComp is nullptr.";
    uVar8 = 100;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_40,uVar8,pwVar9);
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
LAB_14b7bb7ee:
  local_188[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_188);
  return;
}

// OnTickComponent @ 14b7bddb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UDS_BuffControlAbility::OnTickComponent(UDS_BuffControlAbility *this,float param_1)

{
  float *pfVar1;
  longlong lVar2;
  ForElementType<TAlignedBytes<16,16>_> FVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int *piVar11;
  float fVar12;
  UDS_BuffControlAbility *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1b8;
  FDelegateAllocation local_1b0;
  undefined1 local_1a0 [24];
  FDelegateAllocation *pFStack_188;
  longlong local_180;
  TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
  *pTStack_178;
  code *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  undefined1 auStack_150 [16];
  uint uStack_140;
  uint uStack_13c;
  longlong local_138;
  TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
  *pTStack_130;
  TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
  *local_128;
  undefined2 local_120;
  undefined1 local_118 [200];
  ForAnyElementType local_50;
  int local_48;
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_1a0,
             (TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
              *)&this->BuffEffectInfoList);
  uVar4 = uStack_15c;
  unique0x1000043a = pFStack_188;
  auStack_150._8_8_ = CONCAT71(local_1a0._17_7_,local_1a0[0x10]);
  local_120 = 0;
  local_158 = (longlong *)local_1a0._0_8_;
  auStack_150._0_8_ = local_1a0._8_8_;
  local_138 = local_180;
  pTStack_130 = pTStack_178;
  uVar8 = (ulonglong)pFStack_188 >> 0x20;
  local_128 = (TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
               *)&this->BuffEffectInfoList;
  if ((int)((ulonglong)pFStack_188 >> 0x20) <
      *(int *)(CONCAT71(local_1a0._17_7_,local_1a0[0x10]) + 0x18)) {
    do {
      lVar9 = (longlong)(int)uVar8 * 0x68;
      lVar2 = *local_158;
      if ((*(char *)(lVar9 + 0x18 + lVar2) == '\x01') && (0 < *(int *)(lVar9 + 0x10 + lVar2))) {
        fVar12 = param_1 + *(float *)(lVar9 + 0x1c + lVar2);
        pfVar1 = (float *)(lVar9 + 0x20 + lVar2);
        *(float *)(lVar9 + 0x1c + lVar2) = fVar12;
        if (*pfVar1 <= fVar12 && fVar12 != *pfVar1) {
          *(undefined4 *)(lVar9 + 0x1c + lVar2) = 0;
          FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_118);
          local_118._0_4_ = *(int *)(lVar9 + 0x10 + lVar2);
          local_118._40_8_ = this->_padding_;
          local_118._52_8_ = (this->OwnerMeshComp).WeakPtr;
          local_118[0xa8] = true;
          local_168 = OnCompleteLoad_BuffEffect;
          uStack_160 = 0;
          local_1b8.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          local_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_1b0.DelegateSize = 0;
          uStack_15c = uVar4;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_1b8,(FWriteAccessScope *)local_1a0);
          pFStack_188 = &local_1b0;
          puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_1b0);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = &
                      ___7__TCommonDelegateInstanceState___A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy__H__6B_
            ;
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(lVar9 + 8 + lVar2);
            uVar7 = FDelegateHandle::GenerateNewID();
            puVar6[2] = uVar7;
            *puVar6 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_BuffControlAbility____A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy__H__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar6[3] = 0;
            local_res8 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
            puVar6[4] = local_168;
            puVar6[5] = CONCAT44(uStack_15c,uStack_160);
          }
          if (local_1a0[0x10] == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      ((FMRSWRecursiveAccessDetector *)local_1a0._8_8_,
                       (FDestructionSentinel *)local_1a0);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_1b8,(FWriteAccessScope *)local_1a0);
          iVar5 = local_1b0.DelegateSize;
          FVar3 = local_1b0.DelegateAllocator;
          local_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_1b0.DelegateSize = 0;
          if (local_1a0[0x10] == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      ((FMRSWRecursiveAccessDetector *)local_1a0._8_8_,
                       (FDestructionSentinel *)local_1a0);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_118 + 0xc0),
                     (FWriteAccessScope *)local_1a0);
          if (local_48 == 0) {
LAB_14b7be02f:
            if ((ForElementType<TAlignedBytes<16,16>_>)local_50.Data !=
                (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free(local_50.Data);
            }
          }
          else if ((ForElementType<TAlignedBytes<16,16>_>)local_50.Data !=
                   (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            (*(code *)**(undefined8 **)local_50.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10)
            ;
            local_48 = 0;
            goto LAB_14b7be02f;
          }
          local_50.Data = (FScriptContainerElement *)FVar3;
          local_48 = iVar5;
          if (local_1a0[0x10] == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      ((FMRSWRecursiveAccessDetector *)local_1a0._8_8_,
                       (FDestructionSentinel *)local_1a0);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_1b8,(FWriteAccessScope *)local_1a0);
          if ((local_1b0.DelegateSize != 0) &&
             (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_1b0.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_1b0,0,0,0x10);
            local_1b0.DelegateSize = 0;
          }
          if (local_1a0[0x10] == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      ((FMRSWRecursiveAccessDetector *)local_1a0._8_8_,
                       (FDestructionSentinel *)local_1a0);
          }
          if (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_1b0.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1b8.AccessDetector);
          UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_118);
          iVar5 = *(int *)(lVar9 + 0x40 + lVar2);
          piVar11 = (int *)(lVar2 + 0x44 + lVar9);
          lVar9 = lVar9 + lVar2;
          if (iVar5 == *piVar11) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,(ForAnyElementType *)(lVar9 + 0x38),piVar11);
            *(int *)(lVar9 + 0x40) = iVar5;
          }
          lVar2 = *(longlong *)(lVar9 + 0x38);
          *(int *)(lVar9 + 0x40) = iVar5 + 1;
          *(undefined8 *)(lVar2 + (longlong)iVar5 * 0x10) = local_118._176_8_;
          *(undefined8 *)(lVar2 + 8 + (longlong)iVar5 * 0x10) = local_118._184_8_;
          if ((TReferenceControllerBase<1> *)local_118._184_8_ != (TReferenceControllerBase<1> *)0x0
             ) {
            LOCK();
            *(atomic<int> *)(local_118._184_8_ + 8) =
                 (atomic<int>)((int)*(atomic<int> *)(local_118._184_8_ + 8) + 1);
            UNLOCK();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_118 + 0xc0),
                     (FWriteAccessScope *)local_1a0);
          if ((local_48 != 0) &&
             ((ForElementType<TAlignedBytes<16,16>_>)local_50.Data !=
              (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_50.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10)
            ;
            local_48 = 0;
          }
          if (local_1a0[0x10] == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      ((FMRSWRecursiveAccessDetector *)local_1a0._8_8_,
                       (FDestructionSentinel *)local_1a0);
          }
          if ((ForElementType<TAlignedBytes<16,16>_>)local_50.Data !=
              (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free(local_50.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)(local_118 + 0xc0));
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_118._184_8_);
          if ((FScriptContainerElement *)local_118._24_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_118._24_8_);
          }
        }
      }
      uStack_140 = uStack_140 & ~auStack_150._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
      uVar8 = (ulonglong)uStack_13c;
    } while ((int)uStack_13c < *(int *)(auStack_150._8_8_ + 0x18));
    if (((char)local_120 != '\0') && (local_120._1_1_ != '\0')) {
      uVar10 = *(int *)&(local_128->Elements).field_0x8 - *(int *)&(local_128->Elements).field_0x34;
      if (uVar10 < 4) {
        iVar5 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar9 & 0x1f);
      }
      if (((0 < (int)uVar10) && (local_128->HashSize < iVar5)) || (iVar5 < local_128->HashSize)) {
        local_128->HashSize = iVar5;
        TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_128);
      }
    }
  }
  return;
}

// RemoveAllBuffEffect @ 14b7c14e0

void __thiscall UDS_BuffControlAbility::RemoveAllBuffEffect(UDS_BuffControlAbility *this)

{
  undefined1 *puVar1;
  TMap<int,FDS_BuffEffectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>_>
  *this_00;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  this_00 = &this->BuffEffectInfoList;
  TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
              *)this_00);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar5 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      FDS_BuffEffectInfo::ClearVariables
                ((FDS_BuffEffectInfo *)(*local_48 + 8 + (longlong)(int)uVar5 * 0x68));
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar5 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar6 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar6 < 4) {
        iVar4 = 1;
      }
      else {
        uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar6) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
        local_18->HashSize = iVar4;
        TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  bVar2 = 1 < *(int *)&(this->BuffEffectInfoList).field_0x48;
  if (!bVar2) {
    TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_BuffEffectInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FDS_BuffEffectInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->BuffEffectInfoList).field_0x8);
  puVar1 = &(this->BuffEffectInfoList).field_0xc;
  *(undefined4 *)&(this->BuffEffectInfoList).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->BuffEffectInfoList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BuffEffectInfoList).field_0x34 = 0;
  iVar4 = *(int *)&(this->BuffEffectInfoList).field_0x2c;
  *(undefined4 *)&(this->BuffEffectInfoList).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->BuffEffectInfoList).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->BuffEffectInfoList).field_0x10,0);
  }
  if (bVar2) {
    *(undefined4 *)&(this->BuffEffectInfoList).field_0x48 = 1;
    TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// RemoveAllSpecialBuff @ 14b7c16b0

void __thiscall UDS_BuffControlAbility::RemoveAllSpecialBuff(UDS_BuffControlAbility *this)

{
  undefined1 *puVar1;
  TMap<int,FDS_CollideBuffDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->CollideBuffDebugInfoList;
  bVar3 = 1 < *(int *)&(this->CollideBuffDebugInfoList).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,FDS_CollideBuffDebugInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FDS_CollideBuffDebugInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->CollideBuffDebugInfoList).field_0xc;
  *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x34 = 0;
  iVar2 = *(int *)&(this->CollideBuffDebugInfoList).field_0x2c;
  *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CollideBuffDebugInfoList).field_0x10,
               0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->CollideBuffDebugInfoList).field_0x48 = 1;
    TSet<TTuple<int,FDS_CollideBuffDebugInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FDS_CollideBuffDebugInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// RemoveBuffEffect @ 14b7c1760

void __thiscall UDS_BuffControlAbility::RemoveBuffEffect(UDS_BuffControlAbility *this,int param_1)

{
  TMap<int,FDS_BuffEffectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>_>
  *this_00;
  int iVar1;
  FDS_BuffEffectInfo *this_01;
  undefined1 *puVar2;
  int local_res10 [6];
  
  this_00 = &this->BuffEffectInfoList;
  if (*(int *)&(this->BuffEffectInfoList).field_0x8 !=
      *(int *)&(this->BuffEffectInfoList).field_0x34) {
    puVar2 = *(undefined1 **)&(this->BuffEffectInfoList).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->BuffEffectInfoList).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->BuffEffectInfoList).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      while (*(int *)((longlong)iVar1 * 0x68 + *(longlong *)&this_00->field_0x0) != param_1) {
        iVar1 = *(int *)((longlong)iVar1 * 0x68 + 0x60 + *(longlong *)&this_00->field_0x0);
        if (iVar1 == -1) {
          return;
        }
      }
      this_01 = TMapBase<int,FDS_BuffEffectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>_>
                ::FindChecked((TMapBase<int,FDS_BuffEffectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>_>
                               *)this_00,param_1);
      FDS_BuffEffectInfo::ClearVariables(this_01);
      if (*(int *)&(this->BuffEffectInfoList).field_0x8 !=
          *(int *)&(this->BuffEffectInfoList).field_0x34) {
        local_res10[0] = param_1;
        TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
                           *)this_00,param_1,local_res10);
      }
    }
  }
  return;
}

// RemoveSpecialBuff @ 14b7c1b40

void __thiscall UDS_BuffControlAbility::RemoveSpecialBuff(UDS_BuffControlAbility *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDS_BuffBaseTableRow *pFVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  
  pFVar5 = FDS_BuffBaseTableRow::Get((longlong)param_1,true);
  if (pFVar5 != (FDS_BuffBaseTableRow *)0x0) {
    uVar6 = 0;
    lVar9 = (longlong)(pFVar5->BuffIndexType).ArrayNum;
    if (0 < lVar9) {
      lVar7 = 0;
      do {
        uVar8 = ~uVar6 >> 0x1f;
        uVar4 = 0;
        if ((int)uVar6 < (pFVar5->BuffIndexType).ArrayNum) {
          uVar4 = uVar8;
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
        if (((((pFVar5->BuffIndexType).AllocatorInstance.Data[lVar7] == (FScriptContainerElement)0x3
              ) && (-1 < (int)uVar6)) && ((int)uVar6 < (pFVar5->BuffIndex).ArrayNum)) &&
           ((int)uVar6 < (pFVar5->BuffValue).ArrayNum)) {
          uVar4 = 0;
          if ((int)uVar6 < (pFVar5->BuffIndex).ArrayNum) {
            uVar4 = uVar8;
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
          iVar1 = *(int *)((pFVar5->BuffIndex).AllocatorInstance.Data + lVar7 * 4);
          uVar4 = 0;
          if ((int)uVar6 < (pFVar5->BuffValue).ArrayNum) {
            uVar4 = uVar8;
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
          if (iVar1 == 0xfb9) {
            uVar4 = 0;
            if ((int)uVar6 < (pFVar5->BuffIndex).ArrayNum) {
              uVar4 = uVar8;
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
            TMapBase<int,FDS_CollideBuffDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>_>
            ::Remove((TMapBase<int,FDS_CollideBuffDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>_>
                      *)&this->CollideBuffDebugInfoList,
                     *(int *)((pFVar5->BuffIndex).AllocatorInstance.Data + lVar7 * 4));
          }
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar9);
    }
  }
  return;
}

// ShowCollideBuffDebugInfo @ 14b7c4080

void __thiscall
UDS_BuffControlAbility::ShowCollideBuffDebugInfo(UDS_BuffControlAbility *this,float *param_1)

{
  float fVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  float fVar7;
  int iVar8;
  UDS_MovementCore *pUVar9;
  TRotator<double> *this_00;
  TQuat<double> *pTVar10;
  TVector<double> *pTVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_110 [16];
  uint uStack_100;
  uint uStack_fc;
  longlong local_f8;
  TSet<TTuple<int,FDS_CollideBuffDebugInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>,FDefaultSetAllocator>
  *pTStack_f0;
  TSet<TTuple<int,FDS_CollideBuffDebugInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>,FDefaultSetAllocator>
  *local_e8;
  undefined2 local_e0;
  TVector<double>_u_0 local_d8;
  undefined1 local_b8 [32];
  longlong local_98;
  TSet<TTuple<int,FDS_CollideBuffDebugInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>,FDefaultSetAllocator>
  *pTStack_90;
  TVector<double> local_88;
  TRotator<double> local_70 [3];
  
  TSet<TTuple<int,FDS_CollideBuffDebugInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_b8,
             (TSet<TTuple<int,FDS_CollideBuffDebugInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>,FDefaultSetAllocator>
              *)&this->CollideBuffDebugInfoList);
  fVar7 = __real_40a00000;
  local_e0 = 0;
  stack0xfffffffffffffef8 = local_b8._16_16_;
  auStack_110._0_8_ = local_b8._8_8_;
  local_f8 = local_98;
  pTStack_f0 = pTStack_90;
  uVar12 = local_b8._24_8_ >> 0x20;
  local_e8 = (TSet<TTuple<int,FDS_CollideBuffDebugInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>,FDefaultSetAllocator>
              *)&this->CollideBuffDebugInfoList;
  if (local_b8._28_4_ < *(int *)(local_b8._16_8_ + 0x18)) {
    do {
      lVar13 = (longlong)(int)uVar12 * 0x1c;
      lVar5 = *(longlong *)local_b8._0_8_;
      cVar3 = *(char *)(lVar13 + 4 + lVar5);
      if (cVar3 == '\x01') {
        fVar1 = *param_1;
        pTVar10 = UE::Math::TRotator<double>::Quaternion
                            (&UE::Math::TRotator<double>::ZeroRotator,(TQuat<double> *)local_b8);
        iVar8 = *(int *)(lVar13 + 8 + lVar5);
        iVar4 = *(int *)(lVar13 + 0x10 + lVar5);
        pUVar9 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pTVar11 = UDS_MovementCore::GetActorLocation(pUVar9,&local_88);
        DS_Util::ShowSyncCapsule
                  (pTVar11,(float)iVar4,(float)iVar8,pTVar10,&FColor::Red,false,fVar1,'\0',fVar7);
      }
      else if (cVar3 == '\x02') {
        uVar2 = *(undefined8 *)(lVar13 + 8 + lVar5);
        dVar6 = (double)(int)((ulonglong)uVar2 >> 0x20);
        fVar1 = *param_1;
        local_d8._s_0.Z = (double)*(int *)(lVar13 + 0x10 + lVar5);
        local_d8._8_4_ = SUB84(dVar6,0);
        local_d8._0_8_ = (double)(int)uVar2;
        local_d8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        pUVar9 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        this_00 = UDS_MovementCore::GetActorRotation(pUVar9,local_70);
        pTVar10 = UE::Math::TRotator<double>::Quaternion(this_00,(TQuat<double> *)local_b8);
        pUVar9 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pTVar11 = UDS_MovementCore::GetActorLocation(pUVar9,&local_88);
        DS_Util::ShowSyncBox
                  (pTVar11,(TVector<double> *)&local_d8._s_0,pTVar10,&FColor::Red,false,fVar1,'\0',
                   fVar7);
      }
      uStack_100 = uStack_100 & ~auStack_110._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_110);
      uVar12 = (ulonglong)uStack_fc;
    } while ((int)uStack_fc < *(int *)(auStack_110._8_8_ + 0x18));
    if (((char)local_e0 != '\0') && (local_e0._1_1_ != '\0')) {
      uVar14 = *(int *)&(local_e8->Elements).field_0x8 - *(int *)&(local_e8->Elements).field_0x34;
      if (uVar14 < 4) {
        iVar8 = 1;
      }
      else {
        uVar12 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar8 = 1 << ((byte)lVar5 & 0x1f);
      }
      if (((0 < (int)uVar14) && (local_e8->HashSize < iVar8)) || (iVar8 < local_e8->HashSize)) {
        local_e8->HashSize = iVar8;
        TSet<TTuple<int,FDS_CollideBuffDebugInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_e8);
      }
    }
  }
  return;
}

// StartBuffEffect @ 14b7c4340

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UDS_BuffControlAbility::StartBuffEffect(UDS_BuffControlAbility *this,int param_1)

{
  int *piVar1;
  TMap<int,FDS_BuffEffectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>_>
  *this_00;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  float fVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  FDS_BuffBaseTableRow *pFVar8;
  FDS_BuffEffectInfo *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  undefined1 *puVar12;
  float fVar13;
  TPairInitializer<int_&,FDS_BuffEffectInfo_&&> local_res8;
  undefined1 local_1c8 [16];
  int local_1b8;
  FDestructionSentinel local_1a8;
  FDestructionSentinel local_188;
  undefined1 *local_170;
  undefined1 local_168 [200];
  ForAnyElementType local_a0;
  int local_98;
  FMRSWRecursiveAccessDetector local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  TReferenceControllerBase<1> *pTStack_68;
  TSharedPtr<FStreamableHandle,1> *local_60;
  undefined8 uStack_58;
  FWeakObjectPtr local_50;
  void *pvStack_48;
  undefined8 local_40;
  
  local_res8.Value._0_4_ = param_1;
  bVar6 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerMeshComp,(void *)0x0);
  if (bVar6) {
    return;
  }
  pFVar8 = FDS_BuffBaseTableRow::Get((longlong)(int)(uint)local_res8.Value,true);
  if (pFVar8 == (FDS_BuffBaseTableRow *)0x0) {
    return;
  }
  if (((pFVar8->ID_ActEffect == 0) && (pFVar8->ID_BuffEffect == 0)) &&
     (pFVar8->ID_ExtinctionEffect == 0)) {
    return;
  }
  this_00 = &this->BuffEffectInfoList;
  if (*(int *)&(this->BuffEffectInfoList).field_0x8 !=
      *(int *)&(this->BuffEffectInfoList).field_0x34) {
    puVar12 = *(undefined1 **)&(this->BuffEffectInfoList).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->BuffEffectInfoList).field_0x38;
    }
    iVar7 = *(int *)(puVar12 +
                    (ulonglong)
                    (*(int *)&(this->BuffEffectInfoList).field_0x48 - 1U & (uint)local_res8.Value) *
                    4);
    if (iVar7 != -1) {
      do {
        if (*(uint *)((longlong)iVar7 * 0x68 + *(longlong *)&this_00->field_0x0) ==
            (uint)local_res8.Value) {
          return;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x68 + 0x60 + *(longlong *)&this_00->field_0x0);
      } while (iVar7 != -1);
    }
  }
  local_60 = (TSharedPtr<FStreamableHandle,1> *)0x0;
  local_80 = 0;
  uStack_74 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  pvStack_48 = (void *)0x0;
  local_res8.Key = (int *)0x0;
  uStack_58 = 0;
  local_50.ObjectIndex = 0;
  local_50.ObjectSerialNumber = 0;
  local_40 = 0;
  local_90.State = (atomic<unsigned___int64>)0x0;
  uStack_88 = 0;
  local_70 = 0;
  pTStack_68 = (TReferenceControllerBase<1> *)0x0;
  FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_res8);
  local_1a8._0_8_ = &local_res8.Value;
  pvStack_48 = (void *)0x0;
  local_1a8.Accessor = &local_90;
  local_40 = 0;
  TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&,FDS_BuffEffectInfo_&&>_>
            ((TSet<TTuple<int,FDS_BuffEffectInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)&local_1a8);
  if (pvStack_48 != (void *)0x0) {
    FMemory::Free(pvStack_48);
  }
  DestructItems<TSharedPtr<FStreamableHandle,1>,int>(local_60,(int)uStack_58);
  if (local_60 != (TSharedPtr<FStreamableHandle,1> *)0x0) {
    FMemory::Free(local_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_68);
  pFVar9 = TMapBase<int,FDS_BuffEffectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>_>
           ::FindChecked((TMapBase<int,FDS_BuffEffectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>_>
                          *)this_00,(uint)local_res8.Value);
  pFVar9->BuffID = (uint)local_res8.Value;
  iVar7 = pFVar8->ID_ActEffect;
  pFVar9->ID_ActEffect = iVar7;
  pFVar9->ID_BuffEffect = pFVar8->ID_BuffEffect;
  pFVar9->ID_ExtinctionEffect = pFVar8->ID_ExtinctionEffect;
  fVar4 = __real_322bcc77;
  fVar13 = (float)((uint)pFVar8->Period & __xmm_7fffffff7fffffff7fffffff7fffffff);
  pFVar9->PeriodBuffEffectTick = 0.0;
  pFVar9->bIsPeriodBuffEffect = fVar4 < fVar13;
  pFVar9->PeriodBuffEffectInterval = pFVar8->Period;
  if (0 < iVar7) {
    FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_168);
    local_168._0_4_ = pFVar9->ID_ActEffect;
    local_168._40_8_ = this->_padding_;
    local_168._52_8_ = (this->OwnerMeshComp).WeakPtr;
    local_1a8._0_8_ = OnCompleteLoad_ActEffect;
    local_168[0xa8] = true;
    local_1a8.Accessor =
         (FMRSWRecursiveAccessDetector *)((ulonglong)local_1a8.Accessor & 0xffffffff00000000);
    local_1c8._0_8_ = (atomic<unsigned___int64>)0x0;
    local_1c8._8_8_ = (FScriptContainerElement *)0x0;
    local_1b8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
               (FWriteAccessScope *)&local_188);
    local_170 = local_1c8 + 8;
    puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)(local_1c8 + 8));
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy__H__6B_
      ;
      *(int *)(puVar10 + 1) = pFVar9->BuffID;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_BuffControlAbility____A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy__H__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar10[3] = 0;
      local_res8.Key = (int *)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res8);
      puVar10[4] = local_1a8._0_8_;
      puVar10[5] = local_1a8.Accessor;
    }
    if (local_188.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
               (FWriteAccessScope *)&local_1a8);
    iVar7 = local_1b8;
    uVar5 = local_1c8._8_8_;
    local_1c8._8_8_ = (atomic<unsigned___int64> *)0x0;
    local_1b8 = 0;
    if (local_1a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_168 + 0xc0),
               (FWriteAccessScope *)&local_1a8);
    if (local_98 == 0) {
LAB_14b7c46df:
      if (local_a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data);
      }
    }
    else if (local_a0.Data != (FScriptContainerElement *)0x0) {
      (*(code *)**(undefined8 **)local_a0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a0,0,0,0x10);
      local_98 = 0;
      goto LAB_14b7c46df;
    }
    local_a0.Data = (FScriptContainerElement *)uVar5;
    local_98 = iVar7;
    if (local_1a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
               (FWriteAccessScope *)&local_1a8);
    if ((local_1b8 != 0) &&
       ((FMRSWRecursiveAccessDetector *)local_1c8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
      (**(code **)*(atomic<unsigned___int64> *)local_1c8._8_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(local_1c8 + 8),0,0,0x10);
      local_1b8 = 0;
    }
    if (local_1a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
    }
    if ((FMRSWRecursiveAccessDetector *)local_1c8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
      FMemory::Free((void *)local_1c8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1c8);
    UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_168);
    if ((TReferenceControllerBase<1> *)local_168._184_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_168._184_8_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_168._184_8_ + 8) + 1);
      UNLOCK();
    }
    pTVar3 = (pFVar9->AsyncLoadHandle_ActEffect).SharedReferenceCount.ReferenceController;
    (pFVar9->AsyncLoadHandle_ActEffect).Object = (FStreamableHandle *)local_168._176_8_;
    (pFVar9->AsyncLoadHandle_ActEffect).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)local_168._184_8_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_168 + 0xc0),
               (FWriteAccessScope *)local_1c8);
    if ((local_98 != 0) && (local_a0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_a0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a0,0,0,0x10);
      local_98 = 0;
    }
    if (local_1b8._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_1c8._8_8_,(FDestructionSentinel *)local_1c8);
    }
    if (local_a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(local_168 + 0xc0));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_168._184_8_);
    if ((FScriptContainerElement *)local_168._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_168._24_8_);
    }
  }
  if (pFVar9->ID_BuffEffect < 1) {
    return;
  }
  FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_168);
  local_168._0_4_ = pFVar9->ID_BuffEffect;
  local_168._40_8_ = this->_padding_;
  local_168._52_8_ = (this->OwnerMeshComp).WeakPtr;
  local_1a8._0_8_ = OnCompleteLoad_BuffEffect;
  local_168[0xa8] = true;
  local_1a8.Accessor =
       (FMRSWRecursiveAccessDetector *)((ulonglong)local_1a8.Accessor & 0xffffffff00000000);
  local_1c8._0_8_ = (atomic<unsigned___int64>)0x0;
  local_1c8._8_8_ = (FScriptContainerElement *)0x0;
  local_1b8 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
             (FWriteAccessScope *)&local_188);
  local_170 = local_1c8 + 8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)(local_1c8 + 8));
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar10 + 1) = pFVar9->BuffID;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_BuffControlAbility____A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_res8.Key = (int *)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res8);
    puVar10[4] = local_1a8._0_8_;
    puVar10[5] = local_1a8.Accessor;
  }
  if (local_188.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
             (FWriteAccessScope *)&local_1a8);
  iVar7 = local_1b8;
  uVar5 = local_1c8._8_8_;
  local_1c8._8_8_ = (atomic<unsigned___int64> *)0x0;
  local_1b8 = 0;
  if (local_1a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_168 + 0xc0),
             (FWriteAccessScope *)&local_1a8);
  if (local_98 != 0) {
    if (local_a0.Data == (FScriptContainerElement *)0x0) goto LAB_14b7c49bb;
    (*(code *)**(undefined8 **)local_a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a0,0,0,0x10);
    local_98 = 0;
  }
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
LAB_14b7c49bb:
  local_a0.Data = (FScriptContainerElement *)uVar5;
  local_98 = iVar7;
  if (local_1a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
             (FWriteAccessScope *)&local_1a8);
  if ((local_1b8 != 0) &&
     ((FMRSWRecursiveAccessDetector *)local_1c8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
    (**(code **)*(atomic<unsigned___int64> *)local_1c8._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(local_1c8 + 8),0,0,0x10);
    local_1b8 = 0;
  }
  if (local_1a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
  }
  if ((FMRSWRecursiveAccessDetector *)local_1c8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
    FMemory::Free((void *)local_1c8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c8);
  UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_168);
  iVar7 = (pFVar9->AsyncLoadHandle_BuffEffect).ArrayNum;
  piVar1 = &(pFVar9->AsyncLoadHandle_BuffEffect).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(pFVar9->AsyncLoadHandle_BuffEffect).AllocatorInstance,piVar1);
  }
  (pFVar9->AsyncLoadHandle_BuffEffect).ArrayNum = iVar7 + 1;
  pFVar2 = (pFVar9->AsyncLoadHandle_BuffEffect).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + (longlong)iVar7 * 0x10) = local_168._176_8_;
  *(undefined8 *)(pFVar2 + (longlong)iVar7 * 0x10 + 8) = local_168._184_8_;
  if ((TReferenceControllerBase<1> *)local_168._184_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_168._184_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_168._184_8_ + 8) + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_168 + 0xc0),
             (FWriteAccessScope *)local_1c8);
  if ((local_98 != 0) && (local_a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a0,0,0,0x10);
    local_98 = 0;
  }
  if (local_1b8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1c8._8_8_,(FDestructionSentinel *)local_1c8);
  }
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_168 + 0xc0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_168._184_8_);
  if ((FScriptContainerElement *)local_168._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_168._24_8_);
  }
  return;
}

// StartSpecialBuff @ 14b7c5730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDS_BuffControlAbility::StartSpecialBuff(UDS_BuffControlAbility *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  FDS_BuffBaseTableRow *pFVar7;
  FDS_CollideTableRow *pFVar8;
  UDS_AbnormalAbilityData *this_00;
  UDS_SkillDataSet *this_01;
  UDS_SkillData *pUVar9;
  byte bVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong local_1a0;
  undefined1 local_198;
  undefined1 local_197 [7];
  FWeakObjectPtr local_190;
  FWeakObjectPtr local_188;
  FWeakObjectPtr local_180;
  longlong local_178;
  undefined1 local_170 [8];
  undefined4 local_168;
  EDS_CollideType local_160 [4];
  int local_15c;
  int local_158;
  int local_154;
  TPairInitializer<int_const_&,FDS_CollideBuffDebugInfo_&> local_150;
  UDS_BuffControlAbility *local_140;
  longlong local_138;
  longlong *local_130;
  int iStack_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined4 uStack_118;
  uint uStack_114;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  FScriptContainerElement *local_d0;
  EDS_CollideType *local_c8;
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_140 = this;
  pFVar7 = FDS_BuffBaseTableRow::Get((longlong)param_1,true);
  if (pFVar7 != (FDS_BuffBaseTableRow *)0x0) {
    local_138 = (longlong)(pFVar7->BuffIndexType).ArrayNum;
    uVar16 = 0;
    if (0 < local_138) {
      local_178 = 0;
      do {
        lVar11 = local_178;
        iVar12 = (pFVar7->BuffIndexType).ArrayNum;
        uVar13 = ~uVar16 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar16 < iVar12) {
          uVar14 = uVar13;
        }
        if (uVar14 == 0) {
          local_1a8 = (longlong)(int)uVar16;
          local_1a0 = (longlong)iVar12;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (((((pFVar7->BuffIndexType).AllocatorInstance.Data[lVar11] ==
               (FScriptContainerElement)0x3) && (-1 < (int)uVar16)) &&
            ((int)uVar16 < (pFVar7->BuffIndex).ArrayNum)) &&
           ((int)uVar16 < (pFVar7->BuffValue).ArrayNum)) {
          iVar12 = (pFVar7->BuffIndex).ArrayNum;
          uVar14 = 0;
          if ((int)uVar16 < iVar12) {
            uVar14 = uVar13;
          }
          if (uVar14 == 0) {
            local_1a8 = (longlong)(int)uVar16;
            local_1a0 = (longlong)iVar12;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          iVar12 = (pFVar7->BuffValue).ArrayNum;
          iVar3 = *(int *)((pFVar7->BuffIndex).AllocatorInstance.Data + lVar11 * 4);
          uVar14 = 0;
          if ((int)uVar16 < iVar12) {
            uVar14 = uVar13;
          }
          if (uVar14 == 0) {
            local_1a8 = (longlong)(int)uVar16;
            local_1a0 = (longlong)iVar12;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pFVar1 = (pFVar7->BuffValue).AllocatorInstance.Data + lVar11 * 4;
          if (iVar3 == 0xfaa) {
            if (*(undefined4 *)pFVar1 == None) {
              TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_180);
              bVar6 = FWeakObjectPtr::IsValid(&local_180);
              if (bVar6) {
                this_01 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_180);
                UDS_SkillDataSet::GetAllSkillData
                          (this_01,(TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
                                    *)local_98);
                uVar14 = local_70;
                iStack_128 = 0;
                local_110 = 0;
                uStack_124 = 1;
                uStack_114 = 0;
                if (local_70 != 0) {
                  puVar15 = (uint *)(local_98 + 0x10);
                  if (local_78 != (uint *)0x0) {
                    puVar15 = local_78;
                  }
                  uVar13 = *puVar15;
                  while (uVar13 == 0) {
                    lVar11 = (longlong)iStack_128;
                    local_110 = local_110 + 0x20;
                    iStack_128 = iStack_128 + 1;
                    uStack_114 = local_70;
                    if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 <
                        iStack_128) goto LAB_14b7c5ac1;
                    uVar13 = puVar15[lVar11 + 1];
                  }
                  uStack_124 = -uVar13 & uVar13;
                  uVar2 = (ulonglong)uStack_124 * 2 + 1;
                  lVar11 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                    }
                  }
                  local_150.Key._4_4_ = (int)lVar11;
                  uStack_114 = local_110 + -1 + local_150.Key._4_4_;
                  if ((int)local_70 < (int)uStack_114) {
                    uStack_114 = local_70;
                  }
                }
LAB_14b7c5ac1:
                local_130 = (longlong *)local_98;
                uStack_10c = local_a4;
                local_120 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
                uVar13 = local_70 & 0xffffffe0;
                iStack_108 = local_98._8_4_ - local_64;
                TStack_f8._padding_ = CONCAT44(uStack_124,iStack_128);
                uStack_118 = 0xffffffff;
                TStack_f8.CurrentBitIndex = uStack_114;
                TStack_f8.UnvisitedBitMask = 0xffffffff;
                iVar12 = (int)local_70 >> 5;
                TStack_f8._28_4_ = local_a4;
                TStack_f8.BaseBitIndex = local_110;
                uStack_d8 = CONCAT44(uStack_104,iStack_108);
                bVar10 = (byte)local_70;
                local_100 = local_130;
                TStack_f8.Array = local_120;
                if (((int)local_70 < 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x7af,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (uVar14 != local_70) {
                  puVar15 = (uint *)(local_98 + 0x10);
                  if (local_78 != (uint *)0x0) {
                    puVar15 = local_78;
                  }
                  uVar14 = -1 << (bVar10 & 0x1f) & puVar15[iVar12];
                  while (uVar14 == 0) {
                    lVar11 = (longlong)iVar12;
                    uVar13 = uVar13 + 0x20;
                    iVar12 = iVar12 + 1;
                    uVar14 = local_70;
                    if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
                    goto LAB_14b7c5bc0;
                    uVar14 = puVar15[lVar11 + 1];
                  }
                  uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
                  lVar11 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                    }
                  }
                  local_150.Value._0_4_ = (int)lVar11;
                  uVar14 = (int)local_150.Value + -1 + uVar13;
                  if ((int)local_70 < (int)uVar14) {
                    uVar14 = local_70;
                  }
                }
LAB_14b7c5bc0:
                while( true ) {
                  plVar5 = local_100;
                  if ((int)local_100[1] - *(int *)((longlong)local_100 + 0x34) != (int)uStack_d8) {
                    local_197[0] = 0;
                    `TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_197);
                  }
                  if (((TStack_f8.CurrentBitIndex == uVar14) &&
                      (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))
                      ) && (plVar5 == (longlong *)local_98)) break;
                  lVar11 = *plVar5;
                  local_170 = *(undefined1 (*) [8])
                               (lVar11 + (longlong)TStack_f8.CurrentBitIndex * 0x14);
                  local_168 = *(undefined4 *)
                               (lVar11 + 8 + (longlong)TStack_f8.CurrentBitIndex * 0x14);
                  pUVar9 = (UDS_SkillData *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_170 + 4));
                  bVar6 = UDS_SkillData::CheckCoolTime(pUVar9);
                  if (bVar6) {
                    pUVar9 = (UDS_SkillData *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_170 + 4))
                    ;
                    UDS_SkillData::ResetCoolTime(pUVar9);
                  }
                  TStack_f8.UnvisitedBitMask =
                       TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
                }
                local_50 = 0;
                if (local_58 != (void *)0x0) {
                  FMemory::Free(local_58);
                }
                TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_98);
                lVar11 = local_178;
                this = local_140;
              }
            }
            else {
              UDS_SkillData::GetData
                        ((ulong64)&local_190,this->_padding_,SUB41(*(undefined4 *)pFVar1,0));
              bVar6 = FWeakObjectPtr::IsValid(&local_190);
              if (bVar6) {
                pUVar9 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_190);
                bVar6 = UDS_SkillData::CheckCoolTime(pUVar9);
                if (bVar6) {
                  pUVar9 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_190);
                  UDS_SkillData::ResetCoolTime(pUVar9);
                }
              }
            }
          }
          else if (iVar3 == 0xfb1) {
            local_198 = 0x30;
            UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
                      ((ulong64 *)&local_188,(EDS_AbilityTagType *)&this->_padding_);
            bVar6 = TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr> *)&local_188,
                               (void *)0x0);
            if (!bVar6) {
              this_00 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_188);
              UDS_AbnormalAbilityData::RemoveAbnormalGroup(this_00,(EDS_AbnormalGroup)*pFVar1);
            }
          }
          else if ((iVar3 == 0xfb9) &&
                  (pFVar8 = FDS_CollideTableRow::Get((longlong)(int)*(undefined4 *)pFVar1,true),
                  pFVar8 != (FDS_CollideTableRow *)0x0)) {
            local_160[0] = pFVar8->CollideType;
            local_15c = pFVar8->CollideDistance;
            local_158 = pFVar8->CollideWidth;
            local_154 = pFVar8->CollideHeight;
            iVar12 = (pFVar7->BuffIndex).ArrayNum;
            uVar14 = 0;
            if ((int)uVar16 < iVar12) {
              uVar14 = uVar13;
            }
            if ((uVar14 == 0) &&
               (local_1a8 = lVar11, local_1a0 = (longlong)iVar12,
               bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_d0 = (pFVar7->BuffIndex).AllocatorInstance.Data + lVar11 * 4;
            local_c8 = local_160;
            TSet<TTuple<int,FDS_CollideBuffDebugInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_const_&,FDS_CollideBuffDebugInfo_&>_>
                      ((TSet<TTuple<int,FDS_CollideBuffDebugInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>,FDefaultSetAllocator>
                        *)&this->CollideBuffDebugInfoList,&local_150,(bool *)&local_d0);
          }
        }
        local_178 = lVar11 + 1;
        uVar16 = uVar16 + 1;
      } while (local_178 < local_138);
    }
  }
  return;
}

