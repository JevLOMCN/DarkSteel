// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 79

// StaticClass @ 14b2efb70

UClass * __cdecl UMetaSoundSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundSource",
               &Z_Registration_Info_UClass_UMetaSoundSource.InnerSingleton,
               StaticRegisterNativesUMetaSoundSource,0x8c0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMetaSoundSource>,
               InternalVTableHelperCtorCaller<UMetaSoundSource>,local_res8,
               USoundWaveProcedural::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundSource.InnerSingleton;
}

// UMetaSoundSource @ 14b34ca10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

UMetaSoundSource * __thiscall
UMetaSoundSource::UMetaSoundSource(UMetaSoundSource *this,FVTableHelper *param_1)

{
  USoundWaveProcedural::USoundWaveProcedural((USoundWaveProcedural *)this,param_1);
  this->field_0x470 = 10;
  *(undefined8 *)&this->field_0x474 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined8 *)&this->field_0x47c = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x180 = &_vftable__for__IAudioProxyDataFactory__;
  *(undefined ***)&this->field_0x188 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x468 = &_vftable__for__FMetasoundAssetBase__;
  *(undefined ***)&this->field_0x4b8 = &_vftable__for__IMetaSoundDocumentInterface__;
  *(undefined8 *)&this->field_0x484 = 0;
  *(undefined8 *)&this->field_0x48c = 1;
  *(undefined8 *)&this->field_0x494 = 0;
  *(undefined8 *)&this->field_0x49c = 0;
  *(undefined4 *)&this->field_0x4a4 = 0xffffffff;
  *(undefined8 *)&this->field_0x4a8 = 0;
  *(undefined8 *)&this->field_0x4b0 = 0;
  FMetasoundFrontendDocument::FMetasoundFrontendDocument(&this->RootMetasoundDocument);
  *(undefined8 *)&(this->ReferencedAssetClassKeys).Elements = 0;
  *(undefined8 *)&(this->ReferencedAssetClassKeys).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedAssetClassKeys).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedAssetClassKeys).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedAssetClassKeys).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedAssetClassKeys).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencedAssetClassKeys).Elements.field_0x34 = 0;
  (this->ReferencedAssetClassKeys).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencedAssetClassKeys).HashSize = 0;
  *(undefined8 *)&(this->ReferencedAssetClassObjects).Elements = 0;
  *(undefined8 *)&(this->ReferencedAssetClassObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedAssetClassObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedAssetClassObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedAssetClassObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedAssetClassObjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencedAssetClassObjects).Elements.field_0x34 = 0;
  (this->ReferencedAssetClassObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencedAssetClassObjects).HashSize = 0;
  *(undefined8 *)&(this->ReferenceAssetClassCache).Elements = 0;
  *(undefined8 *)&(this->ReferenceAssetClassCache).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferenceAssetClassCache).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferenceAssetClassCache).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferenceAssetClassCache).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferenceAssetClassCache).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferenceAssetClassCache).Elements.field_0x34 = 0;
  (this->ReferenceAssetClassCache).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferenceAssetClassCache).HashSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OnGeneratorInstanceCreated,4000);
  *(undefined8 *)&(this->OnGeneratorInstanceCreated).field_0x28 = 0;
  *(undefined8 *)&(this->OnGeneratorInstanceCreated).field_0x30 = 0;
  *(undefined8 *)&(this->OnGeneratorInstanceCreated).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->OnGeneratorInstanceDestroyed,4000);
  *(undefined8 *)&(this->OnGeneratorInstanceDestroyed).field_0x28 = 0;
  *(undefined8 *)&(this->OnGeneratorInstanceDestroyed).field_0x30 = 0;
  *(undefined8 *)&(this->OnGeneratorInstanceDestroyed).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->OnGeneratorInstanceInfoCreated,4000);
  *(undefined8 *)&(this->OnGeneratorInstanceInfoCreated).field_0x28 = 0;
  *(undefined8 *)&(this->OnGeneratorInstanceInfoCreated).field_0x30 = 0;
  *(undefined8 *)&(this->OnGeneratorInstanceInfoCreated).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->OnGeneratorInstanceInfoDestroyed,4000);
  *(undefined8 *)&(this->OnGeneratorInstanceInfoDestroyed).field_0x28 = 0;
  *(undefined8 *)&(this->OnGeneratorInstanceInfoDestroyed).field_0x30 = 0;
  *(undefined8 *)&(this->OnGeneratorInstanceInfoDestroyed).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->GeneratorMapCriticalSection,4000)
  ;
  (this->Generators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Generators).ArrayNum = 0;
  (this->Generators).ArrayMax = 0;
  (this->RuntimeInputData).bIsValid = (atomic<bool>)0x0;
  (this->RuntimeInputData).InputMap.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeInputData).InputMap.Pairs.ArrayNum = 0;
  (this->RuntimeInputData).InputMap.Pairs.ArrayMax = 0;
  (this->DynamicTransactor).Object = (FDynamicOperatorTransactor *)0x0;
  (this->DynamicTransactor).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->CachedAudioDeviceSampleRate = 0;
  this->bIsBuilderActive = false;
  this->bIsPresetGraphInflationSupported = false;
  (this->CookedQualitySettings).Ptr = (FMetaSoundQualitySettings *)0x0;
  return this;
}

// UMetaSoundSource @ 14b34ccc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

UMetaSoundSource * __thiscall
UMetaSoundSource::UMetaSoundSource(UMetaSoundSource *this,FObjectInitializer *param_1)

{
  USoundWaveProcedural::USoundWaveProcedural((USoundWaveProcedural *)this,param_1);
  *(undefined2 *)&this->field_0x471 = 0;
  this->field_0x473 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x180 = &_vftable__for__IAudioProxyDataFactory__;
  *(undefined ***)&this->field_0x188 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x468 = &_vftable__for__FMetasoundAssetBase__;
  *(undefined ***)&this->field_0x4b8 = &_vftable__for__IMetaSoundDocumentInterface__;
  this->field_0x470 = 10;
  *(undefined8 *)&this->field_0x474 = 0;
  *(undefined8 *)&this->field_0x47c = 0;
  *(undefined8 *)&this->field_0x484 = 0;
  *(undefined8 *)&this->field_0x48c = 1;
  *(undefined8 *)&this->field_0x494 = 0;
  *(undefined8 *)&this->field_0x49c = 0;
  *(undefined4 *)&this->field_0x4a4 = 0xffffffff;
  *(undefined8 *)&this->field_0x4a8 = 0;
  *(undefined8 *)&this->field_0x4b0 = 0;
  FMetasoundFrontendDocument::FMetasoundFrontendDocument(&this->RootMetasoundDocument);
  *(undefined8 *)&(this->ReferencedAssetClassKeys).Elements = 0;
  *(undefined8 *)&(this->ReferencedAssetClassKeys).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedAssetClassKeys).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedAssetClassKeys).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedAssetClassKeys).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedAssetClassKeys).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencedAssetClassKeys).Elements.field_0x34 = 0;
  (this->ReferencedAssetClassKeys).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencedAssetClassKeys).HashSize = 0;
  *(undefined8 *)&(this->ReferencedAssetClassObjects).Elements = 0;
  *(undefined8 *)&(this->ReferencedAssetClassObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedAssetClassObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedAssetClassObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedAssetClassObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedAssetClassObjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencedAssetClassObjects).Elements.field_0x34 = 0;
  (this->ReferencedAssetClassObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencedAssetClassObjects).HashSize = 0;
  *(undefined8 *)&(this->ReferenceAssetClassCache).Elements = 0;
  *(undefined8 *)&(this->ReferenceAssetClassCache).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferenceAssetClassCache).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferenceAssetClassCache).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferenceAssetClassCache).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferenceAssetClassCache).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferenceAssetClassCache).Elements.field_0x34 = 0;
  (this->ReferenceAssetClassCache).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferenceAssetClassCache).HashSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OnGeneratorInstanceCreated,4000);
  *(undefined8 *)&(this->OnGeneratorInstanceCreated).field_0x28 = 0;
  *(undefined8 *)&(this->OnGeneratorInstanceCreated).field_0x30 = 0;
  *(undefined8 *)&(this->OnGeneratorInstanceCreated).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->OnGeneratorInstanceDestroyed,4000);
  *(undefined8 *)&(this->OnGeneratorInstanceDestroyed).field_0x28 = 0;
  *(undefined8 *)&(this->OnGeneratorInstanceDestroyed).field_0x30 = 0;
  *(undefined8 *)&(this->OnGeneratorInstanceDestroyed).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->OnGeneratorInstanceInfoCreated,4000);
  *(undefined8 *)&(this->OnGeneratorInstanceInfoCreated).field_0x28 = 0;
  *(undefined8 *)&(this->OnGeneratorInstanceInfoCreated).field_0x30 = 0;
  *(undefined8 *)&(this->OnGeneratorInstanceInfoCreated).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->OnGeneratorInstanceInfoDestroyed,4000);
  *(undefined8 *)&(this->OnGeneratorInstanceInfoDestroyed).field_0x28 = 0;
  *(undefined8 *)&(this->OnGeneratorInstanceInfoDestroyed).field_0x30 = 0;
  *(undefined8 *)&(this->OnGeneratorInstanceInfoDestroyed).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->GeneratorMapCriticalSection,4000)
  ;
  (this->Generators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Generators).ArrayNum = 0;
  (this->Generators).ArrayMax = 0;
  (this->RuntimeInputData).bIsValid = (atomic<bool>)0x0;
  (this->RuntimeInputData).InputMap.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeInputData).InputMap.Pairs.ArrayNum = 0;
  (this->RuntimeInputData).InputMap.Pairs.ArrayMax = 0;
  (this->DynamicTransactor).Object = (FDynamicOperatorTransactor *)0x0;
  (this->DynamicTransactor).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CookedQualitySettings).Ptr = (FMetaSoundQualitySettings *)0x0;
  this->CachedAudioDeviceSampleRate = 0;
  this->bIsBuilderActive = false;
  this->bIsPresetGraphInflationSupported = false;
  *(undefined4 *)&(this->RootMetasoundDocument).RootGraph._padding_ = 0x4d657461;
  *(undefined4 *)((longlong)&(this->RootMetasoundDocument).RootGraph._padding_ + 4) = 0x536f756e;
  *(undefined4 *)&(this->RootMetasoundDocument).RootGraph._padding_ = 0x64536f75;
  *(undefined4 *)((longlong)&(this->RootMetasoundDocument).RootGraph._padding_ + 4) = 0x72636500;
  this->field_0x364 = this->field_0x364 | 3;
  *(undefined4 *)&this->field_0x384 = 1;
  return this;
}

// ~UMetaSoundSource @ 14b352700

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall UMetaSoundSource::~UMetaSoundSource(UMetaSoundSource *this)

{
  FMetaSoundQualitySettings *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x180 = &_vftable__for__IAudioProxyDataFactory__;
  *(undefined ***)&this->field_0x188 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x468 = &_vftable__for__FMetasoundAssetBase__;
  *(undefined ***)&this->field_0x4b8 = &_vftable__for__IMetaSoundDocumentInterface__;
  pFVar1 = (this->CookedQualitySettings).Ptr;
  if (pFVar1 != (FMetaSoundQualitySettings *)0x0) {
    (*(code *)pFVar1[-1].Name)(&pFVar1[-1].Name);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DynamicTransactor).SharedReferenceCount.ReferenceController);
  DestructItems<TTuple<FName,UMetaSoundSource::FRuntimeInput>,int>
            ((TTuple<FName,UMetaSoundSource::FRuntimeInput> *)
             (this->RuntimeInputData).InputMap.Pairs.AllocatorInstance.Data,
             (this->RuntimeInputData).InputMap.Pairs.ArrayNum);
  pFVar2 = (this->RuntimeInputData).InputMap.Pairs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Metasound::FGeneratorInstanceInfo,int>
            ((FGeneratorInstanceInfo *)(this->Generators).AllocatorInstance.Data,
             (this->Generators).ArrayNum);
  pFVar2 = (this->Generators).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->GeneratorMapCriticalSection);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnGeneratorInstanceInfoDestroyed).field_0x28,
             *(int *)&(this->OnGeneratorInstanceInfoDestroyed).field_0x30);
  pvVar3 = *(void **)&(this->OnGeneratorInstanceInfoDestroyed).field_0x28;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnGeneratorInstanceInfoDestroyed);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnGeneratorInstanceInfoCreated).field_0x28,
             *(int *)&(this->OnGeneratorInstanceInfoCreated).field_0x30);
  pvVar3 = *(void **)&(this->OnGeneratorInstanceInfoCreated).field_0x28;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnGeneratorInstanceInfoCreated);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnGeneratorInstanceDestroyed).field_0x28,
             *(int *)&(this->OnGeneratorInstanceDestroyed).field_0x30);
  pvVar3 = *(void **)&(this->OnGeneratorInstanceDestroyed).field_0x28;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnGeneratorInstanceDestroyed);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnGeneratorInstanceCreated).field_0x28,
             *(int *)&(this->OnGeneratorInstanceCreated).field_0x30);
  pvVar3 = *(void **)&(this->OnGeneratorInstanceCreated).field_0x28;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnGeneratorInstanceCreated);
  (this->ReferenceAssetClassCache).HashSize = 0;
  FVar4 = (this->ReferenceAssetClassCache).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferenceAssetClassCache).Elements);
  (this->ReferencedAssetClassObjects).HashSize = 0;
  FVar4 = (this->ReferencedAssetClassObjects).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferencedAssetClassObjects).Elements);
  (this->ReferencedAssetClassKeys).HashSize = 0;
  FVar4 = (this->ReferencedAssetClassKeys).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferencedAssetClassKeys).Elements);
  FMetasoundFrontendDocument::~FMetasoundFrontendDocument(&this->RootMetasoundDocument);
  *(undefined ***)&this->field_0x4b8 = &___7IInterface__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x4b0);
  USoundWaveProcedural::~USoundWaveProcedural((USoundWaveProcedural *)this);
  return;
}

// operator() @ 14b354fc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedRef<Metasound::FMetaSoundParameterTransmitter,1> * __thiscall
`UMetaSoundSource::CreateParameterTransmitter'::__l2::<lambda_1>::operator()
          (void *this,
          TSharedRef<Metasound::FMetaSoundParameterTransmitter,1> *__return_storage_ptr__,
          TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>
          *param_1,FParameterTransmitterInitParams *param_2)

{
  int iVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedRef<Metasound::FMetaSoundParameterTransmitter,1> *pTVar6;
  FParameterRouter *this_00;
  FOperatorSettings *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  ForAnyElementType local_c8;
  undefined8 local_c0;
  TSharedPtr<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>,1> local_b8;
  FInitParams local_a8;
  FOperatorSettings local_48;
  
  pFVar11 = (param_1->Pairs).AllocatorInstance.Data;
  iVar9 = 0;
  iVar1 = (param_1->Pairs).ArrayNum;
  local_c8.Data = (FScriptContainerElement *)0x0;
  pFVar12 = pFVar11 + (longlong)iVar1 * 200;
  local_c0 = 0;
  pFVar10 = pFVar11 + 8;
  while( true ) {
    if ((param_1->Pairs).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TTuple<FName,UMetaSoundSource::FRuntimeInput>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
      iVar9 = (int)local_c0;
    }
    if (pFVar11 == pFVar12) break;
    if ((pFVar10[0xb8] != (FScriptContainerElement)0x0) && (*(int *)(pFVar10 + 0x10) == 0)) {
      iVar5 = iVar9;
      if ((local_c8.Data <= pFVar10) && (pFVar10 < local_c8.Data + (longlong)local_c0._4_4_ * 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSharedRef<Metasound::FMetaSoundParameterTransmitter,1> *)(*pcVar3)();
          return pTVar6;
        }
        iVar5 = (int)local_c0;
      }
      if (iVar5 == local_c0._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_c8,(int *)((longlong)&local_c0 + 4));
      }
      iVar9 = iVar5 + 1;
      local_c0 = CONCAT44(local_c0._4_4_,iVar9);
      *(undefined8 *)(local_c8.Data + (longlong)iVar5 * 8) = *(undefined8 *)pFVar10;
    }
    pFVar11 = pFVar11 + 200;
    pFVar10 = pFVar10 + 200;
  }
  this_00 = UMetaSoundSource::GetParameterRouter();
  Metasound::SourcePrivate::FParameterRouter::FindOrCreateDataChannel
            (this_00,&local_b8,param_2->AudioDeviceID,param_2->InstanceID,true);
  if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar2 = param_2->InstanceID;
  pFVar7 = UMetaSoundSource::GetOperatorSettings
                     (*(UMetaSoundSource **)this,&local_48,(int)param_2->SampleRate);
  local_a8.OperatorSettings.SampleRate = pFVar7->SampleRate;
  local_a8.OperatorSettings.TargetBlockRate = pFVar7->TargetBlockRate;
  local_a8.OperatorSettings.ActualBlockRate = pFVar7->ActualBlockRate;
  local_a8.OperatorSettings.NumFramesPerBlock = pFVar7->NumFramesPerBlock;
  local_a8.ValidParameterNames.AllocatorInstance.Data = local_c8.Data;
  local_a8.ValidParameterNames.ArrayNum = (int)local_c0;
  local_a8.ValidParameterNames.ArrayMax = local_c0._4_4_;
  local_a8.DefaultParams.AllocatorInstance.Data = (param_2->DefaultParams).AllocatorInstance.Data;
  (param_2->DefaultParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.DefaultParams.ArrayNum = (param_2->DefaultParams).ArrayNum;
  local_a8.DefaultParams.ArrayMax = (param_2->DefaultParams).ArrayMax;
  local_a8.DataChannel.Object = local_b8.Object;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  local_a8.Infos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Infos.ArrayNum = 0;
  local_a8.Infos.ArrayMax = 0;
  (param_2->DefaultParams).ArrayNum = 0;
  (param_2->DefaultParams).ArrayMax = 0;
  local_a8.DataChannel.SharedReferenceCount.ReferenceController =
       local_b8.SharedReferenceCount.ReferenceController;
  if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8.InstanceID = uVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  local_a8.DebugMetaSoundName = *(FName *)(*(longlong *)this + 0x18);
  pTVar8 = ::operator_new(0x60);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FMetaSoundParameterTransmitter *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMetaSoundParameterTransmitter_Metasound___00_SharedPointerInternals__6B_
    ;
    Metasound::FMetaSoundParameterTransmitter::FMetaSoundParameterTransmitter
              ((FMetaSoundParameterTransmitter *)(pTVar8 + 1),&local_a8);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
    __return_storage_ptr__->Object = (FMetaSoundParameterTransmitter *)(pTVar8 + 1);
    if ((FMetaSoundParameterTransmitter *)(pTVar8 + 1) == (FMetaSoundParameterTransmitter *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<Metasound::FMetaSoundParameterTransmitter,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.DataChannel.SharedReferenceCount.ReferenceController);
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)local_a8.DefaultParams.AllocatorInstance.Data,
             local_a8.DefaultParams.ArrayNum);
  if ((FAudioParameter *)local_a8.DefaultParams.AllocatorInstance.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_a8.DefaultParams.AllocatorInstance.Data);
  }
  if (local_a8.Infos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Infos.AllocatorInstance.Data);
  }
  if (local_a8.ValidParameterNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ValidParameterNames.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b35b340

void __thiscall
`UMetaSoundSource::InitParametersInternal'::__l2::<lambda_1>::operator()
          (void *this,FAudioParameter *param_1)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  int iVar3;
  size_t _Size;
  longlong lVar4;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  FAudioParameter local_b8;
  
  switch(param_1->ParamType) {
  case Boolean:
    local_b8.ParamName = param_1->ParamName;
    local_b8.BoolParam = param_1->BoolParam;
    local_b8.ParamType = Boolean;
    break;
  case Integer:
    local_b8.ParamName = param_1->ParamName;
    local_b8.IntParam = param_1->IntParam;
    local_b8.FloatParam = 0.0;
    local_b8.BoolParam = false;
    local_b8.ParamType = Integer;
    goto LAB_14b35b3a1;
  case Float:
    local_b8.ParamName = param_1->ParamName;
    local_b8.FloatParam = param_1->FloatParam;
    local_b8.BoolParam = false;
    local_b8.ParamType = Float;
    goto LAB_14b35b39c;
  case String:
    local_b8.ParamName = param_1->ParamName;
    local_b8.IntParam = 0;
    local_b8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
    local_b8.FloatParam = 0.0;
    local_b8.BoolParam = false;
    ::FString::FString(&local_b8.StringParam,&param_1->StringParam);
    local_b8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayFloatParam.ArrayNum = 0;
    local_b8.ArrayFloatParam.ArrayMax = 0;
    local_b8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayBoolParam.ArrayNum = 0;
    local_b8.ArrayBoolParam.ArrayMax = 0;
    local_b8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayIntParam.ArrayNum = 0;
    local_b8.ArrayIntParam.ArrayMax = 0;
    local_b8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayObjectParam.ArrayNum = 0;
    local_b8.ArrayObjectParam.ArrayMax = 0;
    local_b8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayStringParam.ArrayNum = 0;
    local_b8.ArrayStringParam.ArrayMax = 0;
    local_b8.ParamType = String;
    local_b8.TypeName.ComparisonIndex.Value = 0;
    local_b8.TypeName.Number = 0;
    local_b8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ObjectProxies.ArrayNum = 0;
    local_b8.ObjectProxies.ArrayMax = 0;
    FAudioParameter::operator=(param_1,&local_b8);
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data,
               local_b8.ObjectProxies.ArrayNum);
    if ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data !=
        (TSharedPtr<Audio::IProxyData,1> *)0x0) {
      FMemory::Free(local_b8.ObjectProxies.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_b8.ArrayStringParam.AllocatorInstance.Data,
               local_b8.ArrayStringParam.ArrayNum);
    FVar2.Data = local_b8.ArrayStringParam.AllocatorInstance.Data;
    goto joined_r0x00014b35b926;
  case Object:
    local_b8.ParamName = param_1->ParamName;
    local_b8.ObjectParam.field0_0x0 =
         (TObjectPtr<UObject>_u_0)(param_1->ObjectParam).field0_0x0.DebugPtr;
    local_b8.FloatParam = 0.0;
    local_b8.BoolParam = false;
    local_b8.IntParam = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending) &&
       (local_b8.ObjectParam.field0_0x0.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_b8.ObjectParam.field0_0x0);
    }
    local_b8.ParamType = Object;
    goto LAB_14b35b3a9;
  case NoneArray:
    goto switchD_14b35b384_caseD_6;
  case BooleanArray:
    local_c0._0_4_ = (param_1->ArrayBoolParam).ArrayNum;
    _Size = (size_t)(int)local_c0;
    pFVar1 = (param_1->ArrayBoolParam).AllocatorInstance.Data;
    local_c8.Data = (FScriptContainerElement *)0x0;
    if ((int)local_c0 == 0) {
      local_c0._4_4_ = 0;
      local_c8.Data = (FScriptContainerElement *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)local_c0,0,&local_c8,(int)local_c0,(int *)((longlong)&local_c0 + 4));
      memcpy(local_c8.Data,pFVar1,_Size);
    }
    local_b8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayFloatParam.ArrayNum = 0;
    local_b8.ArrayFloatParam.ArrayMax = 0;
    local_b8.ArrayBoolParam.ArrayMax = local_c0._4_4_;
    local_b8.ArrayBoolParam.ArrayNum = (int)local_c0;
    local_b8.ParamType = BooleanArray;
    local_b8.ArrayBoolParam.AllocatorInstance.Data = local_c8.Data;
    goto LAB_14b35b4ef;
  case IntegerArray:
    local_c0._0_4_ = (param_1->ArrayIntParam).ArrayNum;
    lVar4 = (longlong)(int)local_c0;
    pFVar1 = (param_1->ArrayIntParam).AllocatorInstance.Data;
    local_c8.Data = (FScriptContainerElement *)0x0;
    if ((int)local_c0 == 0) {
      local_c0._4_4_ = 0;
      local_c8.Data = (FScriptContainerElement *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_c0,0,&local_c8,(int)local_c0,(int *)((longlong)&local_c0 + 4));
      memcpy(local_c8.Data,pFVar1,lVar4 << 2);
    }
    local_b8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayFloatParam.ArrayNum = 0;
    local_b8.ArrayFloatParam.ArrayMax = 0;
    local_b8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayBoolParam.ArrayNum = 0;
    local_b8.ArrayBoolParam.ArrayMax = 0;
    local_b8.ArrayIntParam.ArrayMax = local_c0._4_4_;
    local_b8.ArrayIntParam.ArrayNum = (int)local_c0;
    local_b8.ParamType = IntegerArray;
    local_b8.ArrayIntParam.AllocatorInstance.Data = local_c8.Data;
    goto LAB_14b35b4f7;
  case FloatArray:
    local_c0._0_4_ = (param_1->ArrayFloatParam).ArrayNum;
    lVar4 = (longlong)(int)local_c0;
    pFVar1 = (param_1->ArrayFloatParam).AllocatorInstance.Data;
    local_c8.Data = (FScriptContainerElement *)0x0;
    if ((int)local_c0 == 0) {
      local_c0._4_4_ = 0;
      local_c8.Data = (FScriptContainerElement *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_c0,0,&local_c8,(int)local_c0,(int *)((longlong)&local_c0 + 4));
      memcpy(local_c8.Data,pFVar1,lVar4 << 2);
    }
    local_b8.ArrayFloatParam.ArrayMax = local_c0._4_4_;
    local_b8.ArrayFloatParam.ArrayNum = (int)local_c0;
    local_b8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayBoolParam.ArrayNum = 0;
    local_b8.ArrayBoolParam.ArrayMax = 0;
    local_b8.ParamType = FloatArray;
    local_b8.ArrayFloatParam.AllocatorInstance.Data = local_c8.Data;
LAB_14b35b4ef:
    local_b8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayIntParam.ArrayNum = 0;
    local_b8.ArrayIntParam.ArrayMax = 0;
LAB_14b35b4f7:
    local_b8.ParamName = param_1->ParamName;
    local_b8.FloatParam = 0.0;
    local_b8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
    local_b8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.BoolParam = false;
    local_b8.IntParam = 0;
    local_b8.StringParam.Data.ArrayNum = 0;
    local_b8.StringParam.Data.ArrayMax = 0;
    local_c8.Data = (FScriptContainerElement *)0x0;
    local_c0 = 0;
    local_b8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayObjectParam.ArrayNum = 0;
    local_b8.ArrayObjectParam.ArrayMax = 0;
    local_b8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayStringParam.ArrayNum = 0;
    local_b8.ArrayStringParam.ArrayMax = 0;
    local_b8.TypeName.ComparisonIndex.Value = 0;
    local_b8.TypeName.Number = 0;
    local_b8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ObjectProxies.ArrayNum = 0;
    local_b8.ObjectProxies.ArrayMax = 0;
    FAudioParameter::operator=(param_1,&local_b8);
    FVar2.Data = local_b8.ObjectProxies.AllocatorInstance.Data;
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data,
               local_b8.ObjectProxies.ArrayNum);
    if ((TSharedPtr<Audio::IProxyData,1> *)FVar2.Data != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
      FMemory::Free(FVar2.Data);
    }
    FVar2.Data = local_b8.ArrayStringParam.AllocatorInstance.Data;
    DestructItems<FString,int>
              ((FString *)local_b8.ArrayStringParam.AllocatorInstance.Data,
               local_b8.ArrayStringParam.ArrayNum);
joined_r0x00014b35b882:
    if (FVar2.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar2.Data);
    }
    if (local_b8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.ArrayObjectParam.AllocatorInstance.Data);
    }
    if (local_b8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.ArrayIntParam.AllocatorInstance.Data);
    }
    if (local_b8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.ArrayBoolParam.AllocatorInstance.Data);
    }
    if (local_b8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.ArrayFloatParam.AllocatorInstance.Data);
    }
    FVar2.Data = local_c8.Data;
    if (local_b8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.StringParam.Data.AllocatorInstance.Data);
      FVar2.Data = local_c8.Data;
    }
    goto LAB_14b35ba87;
  case StringArray:
    iVar3 = (param_1->ArrayStringParam).ArrayNum;
    local_b8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar1 = (param_1->ArrayStringParam).AllocatorInstance.Data;
    local_b8.ArrayStringParam.ArrayMax = 0;
    local_c8.Data = (FScriptContainerElement *)0x0;
    if (iVar3 != 0) {
      local_c0._0_4_ = iVar3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,0,&local_c8,iVar3,(int *)((longlong)&local_c0 + 4));
      ConstructItems<FString,FString,int>(local_c8.Data,(FString *)pFVar1,iVar3);
      local_b8.ArrayStringParam.AllocatorInstance.Data = local_c8.Data;
      iVar3 = (int)local_c0;
      local_b8.ArrayStringParam.ArrayMax = local_c0._4_4_;
    }
    local_b8.ParamName = param_1->ParamName;
    local_b8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
    local_b8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.FloatParam = 0.0;
    local_b8.BoolParam = false;
    local_b8.IntParam = 0;
    local_b8.StringParam.Data.ArrayNum = 0;
    local_b8.StringParam.Data.ArrayMax = 0;
    local_b8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayFloatParam.ArrayNum = 0;
    local_b8.ArrayFloatParam.ArrayMax = 0;
    local_b8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayBoolParam.ArrayNum = 0;
    local_b8.ArrayBoolParam.ArrayMax = 0;
    local_b8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayIntParam.ArrayNum = 0;
    local_b8.ArrayIntParam.ArrayMax = 0;
    local_b8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayObjectParam.ArrayNum = 0;
    local_b8.ArrayObjectParam.ArrayMax = 0;
    local_c8.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayStringParam.ArrayNum = iVar3;
    local_c0 = 0;
    local_b8.ParamType = StringArray;
    local_b8.TypeName.ComparisonIndex.Value = 0;
    local_b8.TypeName.Number = 0;
    local_b8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ObjectProxies.ArrayNum = 0;
    local_b8.ObjectProxies.ArrayMax = 0;
    FAudioParameter::operator=(param_1,&local_b8);
    FVar2.Data = local_b8.ObjectProxies.AllocatorInstance.Data;
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data,
               local_b8.ObjectProxies.ArrayNum);
    if ((TSharedPtr<Audio::IProxyData,1> *)FVar2.Data != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
      FMemory::Free(FVar2.Data);
    }
    FVar2.Data = local_b8.ArrayStringParam.AllocatorInstance.Data;
    DestructItems<FString,int>
              ((FString *)local_b8.ArrayStringParam.AllocatorInstance.Data,
               local_b8.ArrayStringParam.ArrayNum);
    if (FVar2.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar2.Data);
    }
    if (local_b8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.ArrayObjectParam.AllocatorInstance.Data);
    }
    if (local_b8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.ArrayIntParam.AllocatorInstance.Data);
    }
    if (local_b8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.ArrayBoolParam.AllocatorInstance.Data);
    }
    if (local_b8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.ArrayFloatParam.AllocatorInstance.Data);
    }
    if (local_b8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.StringParam.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_c8.Data,(int)local_c0);
    FVar2.Data = local_c8.Data;
    goto LAB_14b35ba87;
  case ObjectArray:
    iVar3 = (param_1->ArrayObjectParam).ArrayNum;
    pFVar1 = (param_1->ArrayObjectParam).AllocatorInstance.Data;
    local_c8.Data = (FScriptContainerElement *)0x0;
    local_c0 = CONCAT44(local_c0._4_4_,iVar3);
    if (iVar3 == 0) {
      local_c0 = 0;
      iVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar3,0,&local_c8,iVar3,(int *)((longlong)&local_c0 + 4));
      memcpy(local_c8.Data,pFVar1,(longlong)iVar3 << 3);
      iVar3 = (int)local_c0;
    }
    FVar2.Data = local_c8.Data;
    local_b8.ParamName = param_1->ParamName;
    local_b8.FloatParam = 0.0;
    local_b8.BoolParam = false;
    local_b8.IntParam = 0;
    local_b8.StringParam.Data.ArrayNum = 0;
    local_b8.StringParam.Data.ArrayMax = 0;
    local_b8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayFloatParam.ArrayNum = 0;
    local_b8.ArrayFloatParam.ArrayMax = 0;
    local_b8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayBoolParam.ArrayNum = 0;
    local_b8.ArrayBoolParam.ArrayMax = 0;
    local_b8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayIntParam.ArrayNum = 0;
    local_b8.ArrayIntParam.ArrayMax = 0;
    local_b8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayObjectParam.ArrayNum = iVar3;
    local_b8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
    local_b8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar3 == 0) {
      local_b8.ArrayObjectParam.ArrayNum = 0;
      local_b8.ArrayObjectParam.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar3,0,&local_b8.ArrayObjectParam.AllocatorInstance,iVar3,
                 &local_b8.ArrayObjectParam.ArrayMax);
      ConstructItems<TObjectPtr<UObject>,UObject_*,int>
                (local_b8.ArrayObjectParam.AllocatorInstance.Data,(UObject **)FVar2.Data,iVar3);
    }
    local_b8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayStringParam.ArrayNum = 0;
    local_b8.ArrayStringParam.ArrayMax = 0;
    local_b8.ParamType = ObjectArray;
    local_b8.TypeName.ComparisonIndex.Value = 0;
    local_b8.TypeName.Number = 0;
    local_b8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ObjectProxies.ArrayNum = 0;
    local_b8.ObjectProxies.ArrayMax = 0;
    FAudioParameter::operator=(param_1,&local_b8);
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data,
               local_b8.ObjectProxies.ArrayNum);
    if ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data !=
        (TSharedPtr<Audio::IProxyData,1> *)0x0) {
      FMemory::Free(local_b8.ObjectProxies.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_b8.ArrayStringParam.AllocatorInstance.Data,
               local_b8.ArrayStringParam.ArrayNum);
    FVar2.Data = local_b8.ArrayStringParam.AllocatorInstance.Data;
    goto joined_r0x00014b35b882;
  case Trigger:
    local_b8.ParamName = param_1->ParamName;
    local_b8.ParamType = Trigger;
    local_b8.BoolParam = true;
    break;
  default:
    return;
  }
  local_b8.FloatParam = 0.0;
LAB_14b35b39c:
  local_b8.IntParam = 0;
LAB_14b35b3a1:
  local_b8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
LAB_14b35b3a9:
  local_b8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.StringParam.Data.ArrayNum = 0;
  local_b8.StringParam.Data.ArrayMax = 0;
  local_b8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayFloatParam.ArrayNum = 0;
  local_b8.ArrayFloatParam.ArrayMax = 0;
  local_b8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayBoolParam.ArrayNum = 0;
  local_b8.ArrayBoolParam.ArrayMax = 0;
  local_b8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayIntParam.ArrayNum = 0;
  local_b8.ArrayIntParam.ArrayMax = 0;
  local_b8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayObjectParam.ArrayNum = 0;
  local_b8.ArrayObjectParam.ArrayMax = 0;
  local_b8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayStringParam.ArrayNum = 0;
  local_b8.ArrayStringParam.ArrayMax = 0;
  local_b8.TypeName.ComparisonIndex.Value = 0;
  local_b8.TypeName.Number = 0;
  local_b8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ObjectProxies.ArrayNum = 0;
  local_b8.ObjectProxies.ArrayMax = 0;
  FAudioParameter::operator=(param_1,&local_b8);
  FVar2.Data = local_b8.ObjectProxies.AllocatorInstance.Data;
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data,
             local_b8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)FVar2.Data != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  FVar2.Data = local_b8.ArrayStringParam.AllocatorInstance.Data;
  DestructItems<FString,int>
            ((FString *)local_b8.ArrayStringParam.AllocatorInstance.Data,
             local_b8.ArrayStringParam.ArrayNum);
joined_r0x00014b35b926:
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (local_b8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayBoolParam.AllocatorInstance.Data);
  }
  FVar2.Data = local_b8.StringParam.Data.AllocatorInstance.Data;
  if (local_b8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayFloatParam.AllocatorInstance.Data);
    FVar2.Data = local_b8.StringParam.Data.AllocatorInstance.Data;
  }
LAB_14b35ba87:
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
switchD_14b35b384_caseD_6:
  return;
}

// BeginDestroy @ 14b3660b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall UMetaSoundSource::BeginDestroy(UMetaSoundSource *this)

{
  FMetasoundAssetBase::OnNotifyBeginDestroy((FMetasoundAssetBase *)&this->field_0x468);
  USoundWave::BeginDestroy((USoundWave *)this);
  return;
}

// CacheRuntimeInputData @ 14b366b30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundSource::CacheRuntimeInputData
          (UMetaSoundSource *this,TArrayView<FGuid_const_,int> *param_1)

{
  TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess> *pTVar1
  ;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess> *pTVar4
  ;
  TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>
  local_28;
  TArrayView<FGuid_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar4 = CreateRuntimeInputMap(this,&local_28,true,&local_18);
  pTVar1 = &(this->RuntimeInputData).InputMap;
  if (pTVar1 != pTVar4) {
    DestructItems<TTuple<FName,UMetaSoundSource::FRuntimeInput>,int>
              ((TTuple<FName,UMetaSoundSource::FRuntimeInput> *)
               (pTVar1->Pairs).AllocatorInstance.Data,
               (this->RuntimeInputData).InputMap.Pairs.ArrayNum);
    pFVar2 = (pTVar1->Pairs).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->Pairs).AllocatorInstance.Data = (pTVar4->Pairs).AllocatorInstance.Data;
    (pTVar4->Pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RuntimeInputData).InputMap.Pairs.ArrayNum = (pTVar4->Pairs).ArrayNum;
    (this->RuntimeInputData).InputMap.Pairs.ArrayMax = (pTVar4->Pairs).ArrayMax;
    (pTVar4->Pairs).ArrayNum = 0;
    (pTVar4->Pairs).ArrayMax = 0;
  }
  DestructItems<TTuple<FName,UMetaSoundSource::FRuntimeInput>,int>
            ((TTuple<FName,UMetaSoundSource::FRuntimeInput> *)local_28.Pairs.AllocatorInstance.Data,
             local_28.Pairs.ArrayNum);
  if ((TTuple<FName,UMetaSoundSource::FRuntimeInput> *)local_28.Pairs.AllocatorInstance.Data !=
      (TTuple<FName,UMetaSoundSource::FRuntimeInput> *)0x0) {
    FMemory::Free(local_28.Pairs.AllocatorInstance.Data);
  }
  if ((this->RootMetasoundDocument).RootGraph.PresetOptions.bIsPreset != false) {
    bVar3 = Algo::
            NoneOf<TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>,_UMetaSoundSource::CacheRuntimeInputData_::__l2::<lambda_1>_>
                      (pTVar1,(<lambda_1>)
                              &(this->RootMetasoundDocument).RootGraph.PresetOptions.
                               InputsInheritingDefault);
    if (bVar3) {
      bVar3 = true;
      goto LAB_14b366bdd;
    }
  }
  bVar3 = false;
LAB_14b366bdd:
  this->bIsPresetGraphInflationSupported = bVar3;
  LOCK();
  (this->RuntimeInputData).bIsValid = (atomic<bool>)0x1;
  UNLOCK();
  return;
}

// ConformObjectToDocument @ 14b3692c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall UMetaSoundSource::ConformObjectToDocument(UMetaSoundSource *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  TMap<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,0>_>
  *pTVar13;
  longlong lVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  char *pcVar21;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pTVar13 = Metasound::Engine::GetOutputAudioFormatInfo();
  iVar12 = *(int *)&pTVar13->field_0x28;
  iVar18 = 0;
  uVar10 = 1;
  iVar19 = 0;
  puVar1 = &pTVar13->field_0x10;
  iVar11 = 0;
  if (iVar12 != 0) {
    puVar20 = *(uint **)&pTVar13->field_0x20;
    if (*(uint **)&pTVar13->field_0x20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar17 = *puVar20;
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar18;
      iVar19 = iVar19 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar12;
      if ((int)((iVar12 + -1 >> 0x1f & 0x1fU) + iVar12 + -1) >> 5 < iVar18) goto LAB_14b36935d;
      uVar17 = puVar20[lVar14 + 1];
    }
    uVar10 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res18 = (int)lVar14;
    iVar11 = local_res18 + -1 + iVar19;
    if (iVar12 < iVar11) {
      iVar11 = iVar12;
    }
  }
LAB_14b36935d:
  uVar17 = *(uint *)&pTVar13->field_0x28;
  uVar16 = uVar17 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar18);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_60._28_4_ = iVar11;
  TStack_60.BaseBitIndex = iVar19;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&pTVar13->field_0x8 - *(int *)&pTVar13->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar12 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  uVar10 = *(uint *)&pTVar13->field_0x28;
  if (uVar17 != uVar10) {
    puVar15 = puVar1;
    if (*(undefined1 **)&pTVar13->field_0x20 != (undefined1 *)0x0) {
      puVar15 = *(undefined1 **)&pTVar13->field_0x20;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar18;
      uVar16 = uVar16 + 0x20;
      iVar18 = iVar18 + 1;
      uVar17 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar18)
      goto LAB_14b369460;
      uVar17 = *(uint *)(puVar15 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar17 = (int)lVar14 + -1 + uVar16;
    if ((int)uVar10 < (int)uVar17) {
      uVar17 = uVar10;
    }
  }
LAB_14b369460:
  do {
    if (*(int *)&pTVar13->field_0x8 - *(int *)&pTVar13->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar17) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) goto LAB_14b369533;
    pcVar21 = (char *)((longlong)TStack_60.CurrentBitIndex * 0x30 + *(longlong *)pTVar13);
    uVar10 = *(uint *)(pcVar21 + 0x10);
    iVar12 = *(int *)(pcVar21 + 0x14);
    uVar3 = *(undefined8 *)(pcVar21 + 8);
    uVar16 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
    uVar16 = uVar16 + (int)((ulonglong)uVar3 >> 0x20);
    iVar12 = TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FMetasoundFrontendVersion>
                       ((TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                         *)&this->field_0x28,
                        uVar16 * 0x40 +
                        (iVar12 + -0x61c88647 + uVar10 * 0x40 + (uVar10 >> 2) ^ uVar10) +
                        (uVar16 >> 2) + 0x9e3779b9 ^ uVar16,
                        (FMetasoundFrontendVersion *)(pcVar21 + 8));
    if (iVar12 != -1) {
      if ((this->field_0x288 == *pcVar21) &&
         (*(int *)&this[-1].OnGeneratorInstanceDestroyed.field_0x4 == *(int *)(pcVar21 + 0x20))) {
LAB_14b369533:
        bVar8 = false;
      }
      else {
        this->field_0x288 = *pcVar21;
        cVar5 = pcVar21[0x21];
        cVar6 = pcVar21[0x22];
        cVar7 = pcVar21[0x23];
        this[-1].OnGeneratorInstanceDestroyed.field_0x4 = pcVar21[0x20];
        this[-1].OnGeneratorInstanceDestroyed.field_0x5 = cVar5;
        this[-1].OnGeneratorInstanceDestroyed.field_0x6 = cVar6;
        this[-1].OnGeneratorInstanceDestroyed.field_0x7 = cVar7;
        bVar8 = true;
      }
      return bVar8;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// CreateEnvironment @ 14b36f4a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FMetasoundEnvironment * __thiscall
UMetaSoundSource::CreateEnvironment
          (UMetaSoundSource *this,FMetasoundEnvironment *__return_storage_ptr__,
          FParameterTransmitterInitParams *param_1)

{
  undefined8 *puVar1;
  TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
  *pTVar2;
  FName local_res10;
  
  CreateEnvironment(this,__return_storage_ptr__);
  FLazyName::Resolve(&Metasound::CoreInterface::Environment::InstanceID);
  puVar1 = ::operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = &___7__TMetasoundEnvironmentVariable__K_Metasound__6B_;
    *(FName *)(puVar1 + 1) = local_res10;
    puVar1[2] = param_1->InstanceID;
  }
  pTVar2 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::AllocateMemoryForEmplace<FName_const_&>
                     (&__return_storage_ptr__->Variables,&local_res10);
  *(uint *)&pTVar2->field_0x0 = local_res10.ComparisonIndex.Value;
  *(uint *)&pTVar2->field_0x4 = local_res10.Number;
  *(undefined8 **)&pTVar2->field_0x8 = puVar1;
  return __return_storage_ptr__;
}

// CreateEnvironment @ 14b36f530

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FMetasoundEnvironment * __thiscall
UMetaSoundSource::CreateEnvironment
          (UMetaSoundSource *this,FMetasoundEnvironment *__return_storage_ptr__)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
  *pTVar4;
  
  (__return_storage_ptr__->Variables).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Variables).Pairs.ArrayNum = 0;
  (__return_storage_ptr__->Variables).Pairs.ArrayMax = 0;
  uVar1 = *(undefined4 *)&this->field_0xc;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = &___7__TMetasoundEnvironmentVariable_I_Metasound__6B_;
    *(FName *)(puVar3 + 1) = Metasound::Frontend::SourceInterface::Environment::SoundUniqueID;
    *(undefined4 *)(puVar3 + 2) = uVar1;
  }
  pTVar4 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::AllocateMemoryForEmplace<FName_const_&>
                     (&__return_storage_ptr__->Variables,
                      &Metasound::Frontend::SourceInterface::Environment::SoundUniqueID);
  uVar2 = Metasound::Frontend::SourceInterface::Environment::SoundUniqueID.Number;
  *(uint *)&pTVar4->field_0x0 =
       Metasound::Frontend::SourceInterface::Environment::SoundUniqueID.ComparisonIndex.Value;
  *(uint *)&pTVar4->field_0x4 = uVar2;
  *(undefined8 **)&pTVar4->field_0x8 = puVar3;
  return __return_storage_ptr__;
}

// CreateEnvironment @ 14b36f5c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FMetasoundEnvironment * __thiscall
UMetaSoundSource::CreateEnvironment
          (UMetaSoundSource *this,FMetasoundEnvironment *__return_storage_ptr__,
          FSoundGeneratorInitParams *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
  *pTVar3;
  FString *pFVar4;
  FName local_res10;
  FString local_28;
  
  CreateEnvironment(this,__return_storage_ptr__);
  puVar2 = ::operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = &___7__TMetasoundEnvironmentVariable__N_Metasound__6B_;
    *(FName *)(puVar2 + 1) = Metasound::Frontend::SourceInterface::Environment::IsPreview;
    *(bool *)(puVar2 + 2) = param_1->bIsPreviewSound;
  }
  pTVar3 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::AllocateMemoryForEmplace<FName_const_&>
                     (&__return_storage_ptr__->Variables,
                      &Metasound::Frontend::SourceInterface::Environment::IsPreview);
  uVar1 = Metasound::Frontend::SourceInterface::Environment::IsPreview.Number;
  *(uint *)&pTVar3->field_0x0 =
       Metasound::Frontend::SourceInterface::Environment::IsPreview.ComparisonIndex.Value;
  *(uint *)&pTVar3->field_0x4 = uVar1;
  *(undefined8 **)&pTVar3->field_0x8 = puVar2;
  FLazyName::Resolve(&Metasound::CoreInterface::Environment::InstanceID);
  puVar2 = ::operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = &___7__TMetasoundEnvironmentVariable__K_Metasound__6B_;
    *(FName *)(puVar2 + 1) = local_res10;
    puVar2[2] = param_1->InstanceID;
  }
  pTVar3 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::AllocateMemoryForEmplace<FName_const_&>
                     (&__return_storage_ptr__->Variables,&local_res10);
  *(uint *)&pTVar3->field_0x0 = local_res10.ComparisonIndex.Value;
  *(uint *)&pTVar3->field_0x4 = local_res10.Number;
  *(undefined8 **)&pTVar3->field_0x8 = puVar2;
  puVar2 = ::operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = &___7__TMetasoundEnvironmentVariable__K_Metasound__6B_;
    *(FName *)(puVar2 + 1) = Metasound::Frontend::SourceInterface::Environment::TransmitterID;
    puVar2[2] = param_1->InstanceID;
  }
  pTVar3 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::AllocateMemoryForEmplace<FName_const_&>
                     (&__return_storage_ptr__->Variables,
                      &Metasound::Frontend::SourceInterface::Environment::TransmitterID);
  uVar1 = Metasound::Frontend::SourceInterface::Environment::TransmitterID.Number;
  *(uint *)&pTVar3->field_0x0 =
       Metasound::Frontend::SourceInterface::Environment::TransmitterID.ComparisonIndex.Value;
  *(uint *)&pTVar3->field_0x4 = uVar1;
  *(undefined8 **)&pTVar3->field_0x8 = puVar2;
  puVar2 = ::operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = &___7__TMetasoundEnvironmentVariable_I_Metasound__6B_;
    *(FName *)(puVar2 + 1) = Metasound::Frontend::SourceInterface::Environment::DeviceID;
    *(uint *)(puVar2 + 2) = param_1->AudioDeviceID;
  }
  pTVar3 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::AllocateMemoryForEmplace<FName_const_&>
                     (&__return_storage_ptr__->Variables,
                      &Metasound::Frontend::SourceInterface::Environment::DeviceID);
  uVar1 = Metasound::Frontend::SourceInterface::Environment::DeviceID.Number;
  *(uint *)&pTVar3->field_0x0 =
       Metasound::Frontend::SourceInterface::Environment::DeviceID.ComparisonIndex.Value;
  *(uint *)&pTVar3->field_0x4 = uVar1;
  *(undefined8 **)&pTVar3->field_0x8 = puVar2;
  puVar2 = ::operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = &___7__TMetasoundEnvironmentVariable_H_Metasound__6B_;
    *(FName *)(puVar2 + 1) =
         Metasound::Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames;
    *(int *)(puVar2 + 2) = param_1->AudioMixerNumOutputFrames;
  }
  pTVar3 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::AllocateMemoryForEmplace<FName_const_&>
                     (&__return_storage_ptr__->Variables,
                      &Metasound::Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames)
  ;
  uVar1 = Metasound::Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames.Number;
  *(uint *)&pTVar3->field_0x0 =
       Metasound::Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames.ComparisonIndex.
       Value;
  *(uint *)&pTVar3->field_0x4 = uVar1;
  *(undefined8 **)&pTVar3->field_0x8 = puVar2;
  puVar2 = ::operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = &___7__TMetasoundEnvironmentVariable_M_Metasound__6B_;
    *(FName *)(puVar2 + 1) = Metasound::Frontend::SourceInterface::Environment::AudioMixerSampleRate
    ;
    *(float *)(puVar2 + 2) = param_1->SampleRate;
  }
  pTVar3 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::AllocateMemoryForEmplace<FName_const_&>
                     (&__return_storage_ptr__->Variables,
                      &Metasound::Frontend::SourceInterface::Environment::AudioMixerSampleRate);
  uVar1 = Metasound::Frontend::SourceInterface::Environment::AudioMixerSampleRate.Number;
  *(uint *)&pTVar3->field_0x0 =
       Metasound::Frontend::SourceInterface::Environment::AudioMixerSampleRate.ComparisonIndex.Value
  ;
  *(uint *)&pTVar3->field_0x4 = uVar1;
  *(undefined8 **)&pTVar3->field_0x8 = puVar2;
  pFVar4 = UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0,None)
  ;
  puVar2 = ::operator_new(0x20);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = &___7__TMetasoundEnvironmentVariable_VFString___Metasound__6B_;
    *(FName *)(puVar2 + 1) = Metasound::Frontend::SourceInterface::Environment::GraphName;
    ::FString::FString((FString *)(puVar2 + 2),pFVar4);
  }
  pTVar3 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::AllocateMemoryForEmplace<FName_const_&>
                     (&__return_storage_ptr__->Variables,
                      &Metasound::Frontend::SourceInterface::Environment::GraphName);
  uVar1 = Metasound::Frontend::SourceInterface::Environment::GraphName.Number;
  *(uint *)&pTVar3->field_0x0 =
       Metasound::Frontend::SourceInterface::Environment::GraphName.ComparisonIndex.Value;
  *(uint *)&pTVar3->field_0x4 = uVar1;
  *(undefined8 **)&pTVar3->field_0x8 = puVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateParameterTransmitter @ 14b389000

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Audio::IParameterTransmitter,1> * __thiscall
UMetaSoundSource::CreateParameterTransmitter
          (UMetaSoundSource *this,TSharedPtr<Audio::IParameterTransmitter,1> *__return_storage_ptr__
          ,FParameterTransmitterInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TArrayView<FGuid_const_,int> *pTVar2;
  TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess> *pTVar3
  ;
  TSharedRef<Metasound::FMetaSoundParameterTransmitter,1> *pTVar4;
  FLLMScope local_res8 [2];
  FName local_res20;
  FMemScope local_68;
  TSharedRef<Metasound::FMetaSoundParameterTransmitter,1> local_60;
  TArrayView<FGuid_const_,int> local_48;
  TSharedRef<Metasound::FMetaSoundParameterTransmitter,1> local_38;
  TArrayView<FGuid_const_,int> local_28;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_68,&local_res20,true);
  local_res20 = (FName)this;
  if (this->bIsBuilderActive == false) {
    if ((this->RuntimeInputData).bIsValid != (atomic<bool>)0x0) {
      pTVar4 = `UMetaSoundSource::CreateParameterTransmitter'::__l2::<lambda_1>::operator()
                         (&local_res20,&local_60,&(this->RuntimeInputData).InputMap,param_1);
      __return_storage_ptr__->Object = (IParameterTransmitter *)pTVar4->Object;
      pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_60.SharedReferenceCount.ReferenceController._4_4_,
                          (int)local_60.SharedReferenceCount.ReferenceController));
      goto LAB_14b38912f;
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      FMetasoundAssetBase::GetOwningAssetName
                ((FMetasoundAssetBase *)&this->field_0x468,(FString *)&local_60);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if ((TTuple<FName,UMetaSoundSource::FRuntimeInput> *)local_60.Object !=
          (TTuple<FName,UMetaSoundSource::FRuntimeInput> *)0x0) {
        FMemory::Free(local_60.Object);
      }
    }
  }
  pTVar2 = UMetaSoundSettings::GetPageOrder(&local_28);
  local_48.DataPtr = pTVar2->DataPtr;
  local_48.ArrayNum = pTVar2->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&pTVar2->field_0xc;
  pTVar3 = CreateRuntimeInputMap
                     (this,(TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>
                            *)&local_60,false,&local_48);
  pTVar4 = `UMetaSoundSource::CreateParameterTransmitter'::__l2::<lambda_1>::operator()
                     (&local_res20,&local_38,pTVar3,param_1);
  __return_storage_ptr__->Object = (IParameterTransmitter *)pTVar4->Object;
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  DestructItems<TTuple<FName,UMetaSoundSource::FRuntimeInput>,int>
            ((TTuple<FName,UMetaSoundSource::FRuntimeInput> *)local_60.Object,
             (int)local_60.SharedReferenceCount.ReferenceController);
  if ((TTuple<FName,UMetaSoundSource::FRuntimeInput> *)local_60.Object !=
      (TTuple<FName,UMetaSoundSource::FRuntimeInput> *)0x0) {
    FMemory::Free(local_60.Object);
  }
LAB_14b38912f:
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// CreateProxyData @ 14b38c630

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Audio::IProxyData,1> * __thiscall
UMetaSoundSource::CreateProxyData
          (UMetaSoundSource *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,
          FProxyDataInitParams *param_1)

{
  bool bVar1;
  
  bVar1 = FMetasoundAssetBase::IsRegistered((FMetasoundAssetBase *)&this->field_0x2e8);
  if (!bVar1) {
    (**(code **)(*(longlong *)&this[-1].OutputFormat + 0x360))();
  }
  bVar1 = FMetasoundAssetBase::IsRegistered((FMetasoundAssetBase *)&this->field_0x2e8);
  if (bVar1) {
    FMetasoundAssetBase::CreateProxyData
              ((FMetasoundAssetBase *)&this->field_0x2e8,__return_storage_ptr__,param_1);
  }
  else {
    __return_storage_ptr__->Object = (IProxyData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  return __return_storage_ptr__;
}

// CreateProxyData`adjustor{744}' @ 14b38c6b8

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* [thunk]:public: virtual class TSharedPtr<class Audio::IProxyData,1> __cdecl
   UMetaSoundSource::CreateProxyData`adjustor{744}' (struct Audio::FProxyDataInitParams const &
   __ptr64) __ptr64 */

TSharedPtr<Audio::IProxyData,1> * __thiscall
UMetaSoundSource::CreateProxyData_adjustor_744__
          (UMetaSoundSource *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,
          FProxyDataInitParams *param_1)

{
  TSharedPtr<Audio::IProxyData,1> *pTVar1;
  
  pTVar1 = CreateProxyData((UMetaSoundSource *)
                           &this[-1].RootMetasoundDocument.RootGraph.PresetOptions.
                            InputsInheritingDefault,__return_storage_ptr__,param_1);
  return pTVar1;
}

// CreateRuntimeInput @ 14b38c6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FRuntimeInput * __cdecl
UMetaSoundSource::CreateRuntimeInput
          (FRuntimeInput *__return_storage_ptr__,IDataTypeRegistry *param_1,
          FMetasoundFrontendClassInput *param_2,bool param_3,TArrayView<FGuid_const_,int> *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *pTVar6;
  FMetasoundFrontendClassInputDefault *pFVar7;
  FLiteral *pFVar8;
  FRuntimeInput *pFVar9;
  undefined1 uVar10;
  undefined1 auStackY_258 [32];
  FMetasoundFrontendLiteral local_228;
  FString local_1c8;
  TArrayView<FGuid_const_,int> local_1b8;
  FString local_1a8;
  FAudioParameter local_198;
  FAudioParameter local_f8;
  undefined1 local_58 [16];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_258;
  uVar10 = false;
  plVar4 = (longlong *)(**(code **)((longlong)*param_1 + 0x18))(param_1,&param_2->_padding_);
  if (plVar4 == (longlong *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)&param_2->_padding_,&local_1c8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
    uVar10 = *(undefined1 *)(lVar5 + 0x2a);
  }
  pTVar6 = FMetasoundFrontendClassInput::GetDefaults(param_2);
  local_1b8.DataPtr = param_4->DataPtr;
  local_1b8.ArrayNum = param_4->ArrayNum;
  local_1b8._12_4_ = *(undefined4 *)&param_4->field_0xc;
  pFVar7 = Metasound::Frontend::FindPreferredPage<FMetasoundFrontendClassInputDefault>
                     (pTVar6,&local_1b8);
  if (pFVar7 == (FMetasoundFrontendClassInputDefault *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)param_2,&local_1a8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
    }
    local_228.Type = None;
    local_228.AsNumDefault = 0;
    local_228.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.AsBoolean.ArrayNum = 0;
    local_228.AsBoolean.ArrayMax = 0;
    local_228.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.AsInteger.ArrayNum = 0;
    local_228.AsInteger.ArrayMax = 0;
    local_228.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.AsFloat.ArrayNum = 0;
    local_228.AsFloat.ArrayMax = 0;
    local_228.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.AsString.ArrayNum = 0;
    local_228.AsString.ArrayMax = 0;
    local_228.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.AsUObject.ArrayNum = 0;
    local_228.AsUObject.ArrayMax = 0;
    pFVar8 = (FLiteral *)
             (**(code **)((longlong)*param_1 + 0x80))(param_1,local_58,&param_2->_padding_);
    FMetasoundFrontendLiteral::SetFromLiteral(&local_228,pFVar8);
    if ((0xc < local_48) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FRuntimeInput *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_48])(local_58);
    Metasound::SourcePrivate::MakeAudioParameter
              (&local_f8,param_1,(FName)param_2->_padding_,(FName)param_2->_padding_,&local_228,
               param_3);
    uVar2 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    (__return_storage_ptr__->Name).ComparisonIndex =
         (FNameEntryId)*(undefined4 *)&param_2->_padding_;
    (__return_storage_ptr__->Name).Number = uVar2;
    uVar2 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    (__return_storage_ptr__->TypeName).ComparisonIndex =
         (FNameEntryId)*(undefined4 *)&param_2->_padding_;
    (__return_storage_ptr__->TypeName).Number = uVar2;
    __return_storage_ptr__->AccessType = (EMetasoundFrontendVertexAccessType)param_2->_padding_;
    FAudioParameter::FAudioParameter(&__return_storage_ptr__->DefaultParameter,&local_f8);
    __return_storage_ptr__->bIsTransmittable = (bool)uVar10;
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)local_f8.ObjectProxies.AllocatorInstance.Data,
               local_f8.ObjectProxies.ArrayNum);
    if ((TSharedPtr<Audio::IProxyData,1> *)local_f8.ObjectProxies.AllocatorInstance.Data !=
        (TSharedPtr<Audio::IProxyData,1> *)0x0) {
      FMemory::Free(local_f8.ObjectProxies.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_f8.ArrayStringParam.AllocatorInstance.Data,
               local_f8.ArrayStringParam.ArrayNum);
    if (local_f8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.ArrayStringParam.AllocatorInstance.Data);
    }
    if (local_f8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.ArrayObjectParam.AllocatorInstance.Data);
    }
    if (local_f8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.ArrayIntParam.AllocatorInstance.Data);
    }
    if (local_f8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.ArrayBoolParam.AllocatorInstance.Data);
    }
    if (local_f8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.ArrayFloatParam.AllocatorInstance.Data);
    }
    if (local_f8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.StringParam.Data.AllocatorInstance.Data);
    }
    if (local_228.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.AsUObject.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_228.AsString.AllocatorInstance.Data,local_228.AsString.ArrayNum);
    if (local_228.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.AsString.AllocatorInstance.Data);
    }
    if (local_228.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.AsFloat.AllocatorInstance.Data);
    }
    local_198.StringParam.Data.AllocatorInstance.Data = local_228.AsBoolean.AllocatorInstance.Data;
    if (local_228.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.AsInteger.AllocatorInstance.Data);
      local_198.StringParam.Data.AllocatorInstance.Data = local_228.AsBoolean.AllocatorInstance.Data
      ;
    }
  }
  else {
    Metasound::SourcePrivate::MakeAudioParameter
              (&local_198,param_1,(FName)param_2->_padding_,(FName)param_2->_padding_,
               &pFVar7->Literal,param_3);
    uVar2 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    (__return_storage_ptr__->Name).ComparisonIndex =
         (FNameEntryId)*(undefined4 *)&param_2->_padding_;
    (__return_storage_ptr__->Name).Number = uVar2;
    uVar2 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    (__return_storage_ptr__->TypeName).ComparisonIndex =
         (FNameEntryId)*(undefined4 *)&param_2->_padding_;
    (__return_storage_ptr__->TypeName).Number = uVar2;
    __return_storage_ptr__->AccessType = (EMetasoundFrontendVertexAccessType)param_2->_padding_;
    FAudioParameter::FAudioParameter(&__return_storage_ptr__->DefaultParameter,&local_198);
    __return_storage_ptr__->bIsTransmittable = (bool)uVar10;
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)local_198.ObjectProxies.AllocatorInstance.Data,
               local_198.ObjectProxies.ArrayNum);
    if ((TSharedPtr<Audio::IProxyData,1> *)local_198.ObjectProxies.AllocatorInstance.Data !=
        (TSharedPtr<Audio::IProxyData,1> *)0x0) {
      FMemory::Free(local_198.ObjectProxies.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_198.ArrayStringParam.AllocatorInstance.Data,
               local_198.ArrayStringParam.ArrayNum);
    if (local_198.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.ArrayStringParam.AllocatorInstance.Data);
    }
    if (local_198.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.ArrayObjectParam.AllocatorInstance.Data);
    }
    if (local_198.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.ArrayIntParam.AllocatorInstance.Data);
    }
    if (local_198.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.ArrayBoolParam.AllocatorInstance.Data);
    }
    if (local_198.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.ArrayFloatParam.AllocatorInstance.Data);
    }
  }
  if (local_198.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.StringParam.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateRuntimeInputMap @ 14b38cad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess> *
__thiscall
UMetaSoundSource::CreateRuntimeInputMap
          (UMetaSoundSource *this,
          TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>
          *__return_storage_ptr__,bool param_1,TArrayView<FGuid_const_,int> *param_2)

{
  undefined8 *puVar1;
  FMetasoundFrontendClassInput *pFVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess> *pTVar6
  ;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FName *pFVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  FMetasoundFrontendClassInterface *pFVar16;
  FRuntimeInput *pFVar17;
  TTuple<FName,UMetaSoundSource::FRuntimeInput> *pTVar18;
  FMetasoundFrontendLiteral *pFVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ForElementType<unsigned_int> FVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ForAnyElementType FVar27;
  int iVar28;
  FMetasoundFrontendClassInput *pFVar29;
  bool bVar30;
  undefined1 auStackY_338 [32];
  undefined1 local_305;
  int local_304;
  uint local_300;
  TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>
  *local_2f8;
  TArray<Metasound::Frontend::IInterfaceRegistryEntry_const_*,TSizedDefaultAllocator<32>_> local_2f0
  ;
  int local_2e0;
  uint uStack_2dc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2d8;
  undefined4 local_2d0;
  int iStack_2cc;
  int iStack_2c8;
  undefined4 uStack_2c4;
  FScriptContainerElement *local_2c0;
  IDataTypeRegistry *local_2b8;
  undefined1 local_2a8 [16];
  FScriptContainerElement *local_298;
  FMetasoundFrontendDocument *local_290;
  TArrayView<FGuid_const_,int> *local_288;
  longlong *local_280;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_278;
  FMetasoundFrontendClassInput local_258;
  undefined1 local_208 [16];
  FAudioParameter local_1f8;
  FRuntimeInput local_158;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_338;
  bVar4 = 0 < GCycleStatsShouldEmitNamedEvents;
  local_2f8 = __return_storage_ptr__;
  local_288 = param_2;
  if (bVar4) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"UMetaSoundSource::CreateRuntimeInputMap");
  }
  bVar30 = -1 < CpuChannel->Enabled;
  if (bVar30) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1829,"UMetaSoundSource::CreateRuntimeInputMap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundSource.cpp"
               ,0x725);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1829);
  }
  local_2b8 = Metasound::Frontend::IDataTypeRegistry::Get();
  local_290 = (FMetasoundFrontendDocument *)(**(code **)(*(longlong *)&this->field_0x4b8 + 0x18))();
  local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.ArrayNum = 0;
  local_2f0.ArrayMax = 0;
  FMetaSoundFrontendDocumentBuilder::FindDeclaredInterfaces(local_290,&local_2f0);
  uVar20 = (ulonglong)local_2f0.ArrayNum;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_298 = local_2f0.AllocatorInstance.Data + uVar20 * 8;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_300 = local_2f0.ArrayNum;
  FVar27.Data = local_2f0.AllocatorInstance.Data;
  do {
    pFVar8 = local_298;
    local_2c0 = FVar27.Data;
    if (local_2f0.ArrayNum != (int)uVar20) {
      `TCheckedPointerIterator<Metasound::Frontend::IInterfaceRegistryEntry_const_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_305);
    }
    if (FVar27.Data == pFVar8) {
      (local_2f8->Pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (local_2f8->Pairs).ArrayNum = 0;
      (local_2f8->Pairs).ArrayMax = 0;
      pFVar16 = FMetasoundFrontendClass::GetDefaultInterface
                          ((FMetasoundFrontendClass *)&local_290->RootGraph);
      iVar28 = (pFVar16->Inputs).ArrayNum;
      pFVar29 = (FMetasoundFrontendClassInput *)(pFVar16->Inputs).AllocatorInstance.Data;
      pFVar2 = pFVar29 + iVar28;
      do {
        if ((pFVar16->Inputs).ArrayNum != iVar28) {
          `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_305);
        }
        if (pFVar29 == pFVar2) {
          UMetasoundParameterPack::GetClassInput(&local_258);
          pFVar19 = FMetasoundFrontendClassInput::FindConstDefaultChecked
                              (&local_258,&Metasound::Frontend::DefaultPageID);
          Metasound::SourcePrivate::MakeAudioParameter
                    (&local_1f8,local_2b8,(FName)local_258._padding_,(FName)local_258._padding_,
                     pFVar19,param_1);
          local_158.Name.ComparisonIndex.Value = (undefined4)local_258._padding_;
          local_158.Name.Number = local_258._padding_._4_4_;
          local_158.TypeName.ComparisonIndex.Value = (undefined4)local_258._padding_;
          local_158.TypeName.Number = local_258._padding_._4_4_;
          local_158.AccessType = (EMetasoundFrontendVertexAccessType)local_258._padding_;
          FAudioParameter::FAudioParameter(&local_158.DefaultParameter,&local_1f8);
          pTVar6 = local_2f8;
          local_158.bIsTransmittable = true;
          pTVar18 = TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>
                    ::AllocateMemoryForEmplace<FName_const_&>(local_2f8,(FName *)&local_258);
          *(longlong *)pTVar18 = local_258._padding_;
          *(uint *)&pTVar18->field_0x8 = local_158.Name.ComparisonIndex.Value;
          *(uint *)&pTVar18->field_0xc = local_158.Name.Number;
          *(uint *)&pTVar18->field_0x10 = local_158.TypeName.ComparisonIndex.Value;
          *(uint *)&pTVar18->field_0x14 = local_158.TypeName.Number;
          *(EMetasoundFrontendVertexAccessType *)&pTVar18->field_0x18 = local_158.AccessType;
          FAudioParameter::FAudioParameter
                    ((FAudioParameter *)&pTVar18->field_0x20,&local_158.DefaultParameter);
          pTVar18->field_0xc0 = local_158.bIsTransmittable;
          FAudioParameter::~FAudioParameter(&local_158.DefaultParameter);
          DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
                    ((TSharedPtr<Audio::IProxyData,1> *)
                     local_1f8.ObjectProxies.AllocatorInstance.Data,local_1f8.ObjectProxies.ArrayNum
                    );
          if ((TSharedPtr<Audio::IProxyData,1> *)local_1f8.ObjectProxies.AllocatorInstance.Data !=
              (TSharedPtr<Audio::IProxyData,1> *)0x0) {
            FMemory::Free(local_1f8.ObjectProxies.AllocatorInstance.Data);
          }
          DestructItems<FString,int>
                    ((FString *)local_1f8.ArrayStringParam.AllocatorInstance.Data,
                     local_1f8.ArrayStringParam.ArrayNum);
          if (local_1f8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.ArrayStringParam.AllocatorInstance.Data);
          }
          if (local_1f8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.ArrayObjectParam.AllocatorInstance.Data);
          }
          if (local_1f8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.ArrayIntParam.AllocatorInstance.Data);
          }
          if (local_1f8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.ArrayBoolParam.AllocatorInstance.Data);
          }
          if (local_1f8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.ArrayFloatParam.AllocatorInstance.Data);
          }
          if (local_1f8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.StringParam.Data.AllocatorInstance.Data);
          }
          DestructItems<FMetasoundFrontendClassInputDefault,int>
                    ((FMetasoundFrontendClassInputDefault *)
                     local_258.Defaults.AllocatorInstance.Data,local_258.Defaults.ArrayNum);
          if ((FMetasoundFrontendClassInputDefault *)local_258.Defaults.AllocatorInstance.Data !=
              (FMetasoundFrontendClassInputDefault *)0x0) {
            FMemory::Free(local_258.Defaults.AllocatorInstance.Data);
          }
          local_50 = 0;
          if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free(local_58.Data);
          }
          TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_98);
          if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f0.AllocatorInstance.Data);
          }
          if (bVar30) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (bVar4) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          return pTVar6;
        }
        lVar5 = pFVar29->_padding_;
        uVar11 = ::GetTypeHash((FNameEntryId)(uint)lVar5);
        if (local_98._8_4_ != local_64) {
          FVar27.Data = (FScriptContainerElement *)local_60;
          if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
            FVar27.Data = local_58.Data;
          }
          for (iVar10 = *(int *)((longlong)FVar27.Data +
                                (ulonglong)(local_50 - 1 & uVar11 + (int)((ulonglong)lVar5 >> 0x20))
                                * 4); iVar10 != -1;
              iVar10 = *(int *)(local_98._0_8_ + (longlong)iVar10 * 0x10 + 8)) {
            if (*(longlong *)(local_98._0_8_ + (longlong)iVar10 * 0x10) == lVar5) {
              if (iVar10 != -1) goto LAB_14b38d1d9;
              break;
            }
          }
        }
        local_2a8._0_8_ = local_288->DataPtr;
        local_2a8._8_8_ = *(undefined8 *)&local_288->ArrayNum;
        pFVar17 = CreateRuntimeInput(&local_158,local_2b8,pFVar29,param_1,
                                     (TArrayView<FGuid_const_,int> *)local_2a8);
        pTVar18 = TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>
                  ::AllocateMemoryForEmplace<FName_const_&>(local_2f8,(FName *)pFVar29);
        *(longlong *)pTVar18 = pFVar29->_padding_;
        uVar11 = (pFVar17->Name).Number;
        *(uint *)&pTVar18->field_0x8 = (pFVar17->Name).ComparisonIndex.Value;
        *(uint *)&pTVar18->field_0xc = uVar11;
        uVar11 = (pFVar17->TypeName).Number;
        *(uint *)&pTVar18->field_0x10 = (pFVar17->TypeName).ComparisonIndex.Value;
        *(uint *)&pTVar18->field_0x14 = uVar11;
        *(EMetasoundFrontendVertexAccessType *)&pTVar18->field_0x18 = pFVar17->AccessType;
        FAudioParameter::FAudioParameter
                  ((FAudioParameter *)&pTVar18->field_0x20,&pFVar17->DefaultParameter);
        pTVar18->field_0xc0 = pFVar17->bIsTransmittable;
        FAudioParameter::~FAudioParameter(&local_158.DefaultParameter);
LAB_14b38d1d9:
        pFVar29 = pFVar29 + 1;
      } while( true );
    }
    plVar13 = *(longlong **)FVar27.Data;
    if ((plVar13 != (longlong *)0x0) &&
       (pFVar12 = (FName *)(**(code **)(*plVar13 + 0x18))(plVar13,local_208),
       *pFVar12 != Audio::IParameterTransmitter::RouterName)) {
      plVar13 = (longlong *)(**(code **)(*plVar13 + 8))(plVar13);
      lVar5 = plVar13[1];
      puVar25 = (undefined8 *)*plVar13;
      puVar1 = puVar25 + (longlong)(int)lVar5 * 9;
      while( true ) {
        if ((int)plVar13[1] != (int)lVar5) {
          `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_305);
        }
        FVar27.Data = local_2c0;
        if (puVar25 == puVar1) break;
        uVar3 = *puVar25;
        if (local_64 == 0) {
          iVar10 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                              (int *)(local_98 + 0xc));
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),false);
          iVar28 = local_68;
        }
        else {
          iVar28 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0x10 + 4);
          local_64 = local_64 + -1;
          iVar10 = local_68;
          if (local_64 != 0) {
            *(undefined4 *)(local_98._0_8_ + (longlong)iVar28 * 0x10) = 0xffffffff;
          }
        }
        local_68 = iVar28;
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_98,(FSparseArrayAllocationInfo *)local_2a8,iVar10);
        uVar7 = local_2a8._8_8_;
        if ((TSparseSetElement<FName> *)local_2a8._8_8_ != (TSparseSetElement<FName> *)0x0) {
          *(undefined8 *)local_2a8._8_8_ = uVar3;
          *(undefined4 *)(local_2a8._8_8_ + 8) = 0xffffffff;
        }
        uVar3 = *(undefined8 *)local_2a8._8_8_;
        local_304 = local_2a8._0_4_;
        uVar11 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar11 = uVar11 + (int)((ulonglong)uVar3 >> 0x20);
        bVar9 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::TryReplaceExisting
                          ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
                           uVar11,(TSparseSetElement<FName> *)uVar7,&local_304,(bool *)0x0);
        if (!bVar9) {
          uVar22 = 1;
          uVar21 = local_98._8_4_ - local_64;
          if (3 < uVar21) {
            uVar20 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
            lVar15 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            uVar22 = 1 << ((byte)lVar15 & 0x1f);
          }
          if (((int)uVar21 < 1) || ((int)uVar22 <= (int)local_50)) {
            uVar11 = local_50 - 1 & uVar11;
            *(uint *)(uVar7 + 0xc) = uVar11;
            FVar27.Data = (FScriptContainerElement *)local_60;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar27.Data = local_58.Data;
            }
            uVar20 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar11;
            *(undefined4 *)(uVar7 + 8) = *(undefined4 *)((longlong)FVar27.Data + uVar20 * 4);
            *(int *)((longlong)FVar27.Data + uVar20 * 4) = local_304;
          }
          else {
            local_50 = uVar22;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
            }
            if (uVar22 != 0) {
              uVar11 = uVar22;
              if (uVar22 < 2) {
                if ((ForElementType<FSetElementId>)local_58.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  uVar11 = 0;
                  goto LAB_14b38ce3b;
                }
              }
              else {
LAB_14b38ce3b:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_58,0,uVar11,4);
              }
              if (0 < (int)uVar22) {
                uVar23 = (ulonglong)uVar22;
                uVar20 = 0;
                do {
                  FVar27.Data = (FScriptContainerElement *)local_60;
                  if ((ForElementType<FSetElementId>)local_58.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar27.Data = local_58.Data;
                  }
                  uVar14 = uVar20 & (longlong)(int)uVar22 - 1U;
                  uVar20 = uVar20 + 1;
                  *(undefined4 *)((longlong)FVar27.Data + uVar14 * 4) = 0xffffffff;
                  uVar23 = uVar23 - 1;
                } while (uVar23 != 0);
              }
            }
            if (local_50 != 0) {
              pTStack_2d8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
              uStack_2dc = 1;
              local_2e0 = 0;
              iStack_2cc = 0;
              iStack_2c8 = 0;
              if (local_70 != 0) {
                FVar24 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
                if (local_78 != (ForElementType<unsigned_int>)0x0) {
                  FVar24 = local_78;
                }
                uVar11 = *(uint *)FVar24;
                iStack_2c8 = 0;
                local_2e0 = 0;
                while (uVar11 == 0) {
                  iStack_2c8 = iStack_2c8 + 0x20;
                  lVar15 = (longlong)local_2e0;
                  local_2e0 = local_2e0 + 1;
                  if ((int)((local_70 + -1 >> 0x1f & 0x1fU) + local_70 + -1) >> 5 < local_2e0)
                  goto LAB_14b38cf6f;
                  uVar11 = ((uint *)((longlong)FVar24 + 4))[lVar15];
                }
                uStack_2dc = -uVar11 & uVar11;
                uVar20 = (ulonglong)uStack_2dc * 2 + 1;
                lVar15 = 0x3f;
                if (uVar20 != 0) {
                  for (; uVar20 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                  }
                }
                iStack_2cc = (int)lVar15 + -1 + iStack_2c8;
                if (local_70 < iStack_2cc) {
LAB_14b38cf6f:
                  iStack_2cc = local_70;
                }
              }
              local_2d0 = 0xffffffff;
              local_280 = (longlong *)local_98;
              local_278._padding_ = CONCAT44(uStack_2dc,local_2e0);
              local_278.CurrentBitIndex = iStack_2cc;
              local_278.UnvisitedBitMask = 0xffffffff;
              local_278._28_4_ = uStack_2c4;
              local_278.BaseBitIndex = iStack_2c8;
              iVar28 = iStack_2cc;
              local_278.Array = pTStack_2d8;
              if (iStack_2cc < local_70) {
                do {
                  puVar26 = (undefined8 *)((longlong)iVar28 * 0x10 + *local_280);
                  uVar3 = *puVar26;
                  uVar11 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
                  uVar11 = local_50 - 1 & uVar11 + (int)((ulonglong)uVar3 >> 0x20);
                  *(uint *)((longlong)puVar26 + 0xc) = uVar11;
                  FVar27.Data = (FScriptContainerElement *)local_60;
                  if ((ForElementType<FSetElementId>)local_58.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar27.Data = local_58.Data;
                  }
                  uVar20 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar11;
                  *(undefined4 *)(puVar26 + 1) = *(undefined4 *)((longlong)FVar27.Data + uVar20 * 4)
                  ;
                  *(int *)((longlong)FVar27.Data + uVar20 * 4) = iVar28;
                  local_278.UnvisitedBitMask =
                       local_278.UnvisitedBitMask & ~local_278._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_278);
                  iVar28 = local_278.CurrentBitIndex;
                } while (local_278.CurrentBitIndex < (local_278.Array)->NumBits);
              }
            }
          }
        }
        puVar25 = puVar25 + 9;
      }
    }
    uVar20 = (ulonglong)local_300;
    FVar27.Data = FVar27.Data + 8;
  } while( true );
}

// CreateSoundGenerator @ 14b38d3f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<ISoundGenerator,1> * __thiscall
UMetaSoundSource::CreateSoundGenerator
          (UMetaSoundSource *this,TSharedPtr<ISoundGenerator,1> *__return_storage_ptr__,
          FSoundGeneratorInitParams *param_1,
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_2)

{
  atomic<int> aVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  FAudioParameter *pFVar4;
  FScriptContainerElement *pFVar5;
  FDynamicOperatorTransactor *this_00;
  IGraph *pIVar6;
  bool bVar7;
  code *pcVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  int iVar11;
  FParameterRouter *this_01;
  FMetasoundFrontendVersion *pFVar12;
  TSharedPtr<ISoundGenerator,1> *pTVar13;
  FOperatorBuilderSettings *pFVar14;
  FGraph *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar17;
  TSharedRef<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
  *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  UMetaSoundSource *pUVar20;
  INodeClassRegistry *pIVar21;
  FGraphClassRegistryKey *pFVar22;
  longlong *plVar23;
  FName *pFVar24;
  atomic<int> *paVar25;
  FSharedReferencer<1> FVar26;
  longlong lVar27;
  FMetasoundDynamicGraphGenerator *pFVar28;
  bool bVar29;
  FIdentityFunctor local_res10;
  undefined8 local_368;
  undefined2 local_360;
  FLLMScope local_358 [2];
  TSharedPtr<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>,1> local_350;
  FMetasoundEnvironment local_340;
  FMetasoundDynamicGraphGenerator *local_330;
  FSharedReferencer<1> FStack_328;
  FOperatorSettings local_320;
  undefined8 local_310;
  FSharedReferencer<1> local_308 [2];
  TSharedRef<Metasound::FGraphRenderCost,1> local_2f8;
  undefined8 local_2e8;
  FSharedReferencer<1> local_2e0;
  FAudioParameter local_2d8;
  FName local_238;
  FName local_230;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *local_228;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> **local_220;
  TReferenceControllerBase<1> *local_218;
  FMemScope local_210;
  FString local_208;
  FGeneratorInitParams local_1f8;
  undefined1 local_158 [56];
  int local_120;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  FAudioParameter *local_108;
  int local_100;
  int local_fc;
  undefined1 local_f8;
  TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory> *local_f0;
  TReferenceControllerBase<1> *local_e8;
  FGraphRenderCost *local_e0;
  TReferenceControllerBase<1> *local_d8;
  longlong local_d0;
  undefined1 local_c8 [16];
  TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
  *local_b8;
  FSharedReferencer<1> local_b0;
  TSharedPtr<Metasound::FGraphRenderCost,1> local_a8;
  code *local_98;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> ***local_90;
  FGeneratorInstanceInfo local_88;
  TSharedRef<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
  local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [16];
  
  FLLMScope::FLLMScope
            (local_358,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_238 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_210,&local_238,true);
  bVar7 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar7) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"UMetaSoundSource::CreateSoundGenerator");
  }
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1029,"UMetaSoundSource::CreateSoundGenerator",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundSource.cpp"
               ,0x405);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1029);
  }
  GetOperatorSettings(this,&local_320,(int)param_1->SampleRate);
  *(int *)&this->field_0x388 = (int)(float)local_320.SampleRate;
  CreateEnvironment(this,&local_340,param_1);
  this_01 = GetParameterRouter();
  Metasound::SourcePrivate::FParameterRouter::FindOrCreateDataChannel
            (this_01,&local_350,param_1->AudioDeviceID,param_1->InstanceID,false);
  pTVar19 = (TReferenceControllerBase<1> *)0x0;
  if (0.0 < param_1->StartTime) {
    pFVar12 = Metasound::Frontend::SourceStartTimeInterface::GetVersion();
    bVar10 = FMetasoundAssetBase::IsInterfaceDeclared
                       ((FMetasoundAssetBase *)&this->field_0x468,pFVar12);
    if (bVar10) {
      local_2d8.FloatParam = param_1->StartTime;
      pFVar4 = (FAudioParameter *)(param_2->AllocatorInstance).Data;
      local_2d8.ParamName = Metasound::Frontend::SourceStartTimeInterface::Inputs::StartTime;
      local_2d8.BoolParam = false;
      local_2d8.IntParam = 0;
      local_2d8.StringParam.Data.ArrayNum = 0;
      local_2d8.StringParam.Data.ArrayMax = 0;
      local_2d8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2d8.ArrayFloatParam.ArrayNum = 0;
      local_2d8.ArrayFloatParam.ArrayMax = 0;
      local_2d8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2d8.ArrayBoolParam.ArrayNum = 0;
      local_2d8.ArrayBoolParam.ArrayMax = 0;
      local_2d8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2d8.ArrayIntParam.ArrayNum = 0;
      local_2d8.ArrayIntParam.ArrayMax = 0;
      local_2d8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2d8.ArrayObjectParam.ArrayNum = 0;
      local_2d8.ArrayObjectParam.ArrayMax = 0;
      local_2d8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2d8.ArrayStringParam.ArrayNum = 0;
      local_2d8.ArrayStringParam.ArrayMax = 0;
      local_2d8.ParamType = Float;
      local_2d8.TypeName.ComparisonIndex.Value = 0;
      local_2d8.TypeName.Number = 0;
      local_2d8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2d8.ObjectProxies.ArrayNum = 0;
      local_2d8.ObjectProxies.ArrayMax = 0;
      local_2d8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
      local_2d8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (((pFVar4 <= &local_2d8) && (&local_2d8 < pFVar4 + param_2->ArrayMax)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        pTVar13 = (TSharedPtr<ISoundGenerator,1> *)(*pcVar8)();
        return pTVar13;
      }
      iVar11 = param_2->ArrayNum;
      if (iVar11 == param_2->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8a0,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar11 + 1;
      FAudioParameter::FAudioParameter
                ((FAudioParameter *)((param_2->AllocatorInstance).Data + (longlong)iVar11 * 0xa0),
                 &local_2d8);
      DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
                ((TSharedPtr<Audio::IProxyData,1> *)local_2d8.ObjectProxies.AllocatorInstance.Data,
                 local_2d8.ObjectProxies.ArrayNum);
      if ((TSharedPtr<Audio::IProxyData,1> *)local_2d8.ObjectProxies.AllocatorInstance.Data !=
          (TSharedPtr<Audio::IProxyData,1> *)0x0) {
        FMemory::Free(local_2d8.ObjectProxies.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_2d8.ArrayStringParam.AllocatorInstance.Data,
                 local_2d8.ArrayStringParam.ArrayNum);
      if (local_2d8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.ArrayStringParam.AllocatorInstance.Data);
      }
      if (local_2d8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.ArrayObjectParam.AllocatorInstance.Data);
      }
      if (local_2d8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.ArrayIntParam.AllocatorInstance.Data);
      }
      if (local_2d8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.ArrayBoolParam.AllocatorInstance.Data);
      }
      local_208.Data.AllocatorInstance.Data = local_2d8.StringParam.Data.AllocatorInstance.Data;
      if (local_2d8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.ArrayFloatParam.AllocatorInstance.Data);
        local_208.Data.AllocatorInstance.Data = local_2d8.StringParam.Data.AllocatorInstance.Data;
      }
    }
    else {
      local_230.ComparisonIndex.Value = *(uint *)&this->field_0x18;
      local_230.Number = *(uint *)&this->field_0x1c;
      ::FName::ToString(&local_230,&local_208);
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
  }
  pFVar14 = Metasound::FOperatorBuilderSettings::GetDefaultSettings();
  uVar2._0_1_ = pFVar14->PruningMode;
  uVar2._1_1_ = pFVar14->bValidateNoCyclesInGraph;
  uVar2._2_1_ = pFVar14->bValidateNoDuplicateInputs;
  uVar2._3_1_ = pFVar14->bValidateVerticesExist;
  uVar2._4_1_ = pFVar14->bValidateEdgeDataTypesMatch;
  uVar2._5_1_ = pFVar14->bValidateOperatorOutputsAreBound;
  uVar2._6_1_ = pFVar14->bFailOnAnyError;
  uVar2._7_1_ = pFVar14->bPopulateInternalDataReferences;
  uVar3._0_1_ = pFVar14->bEnableOperatorRebind;
  uVar3._1_1_ = pFVar14->bProfileOperators;
  bVar10 = param_1->bIsPreviewSound;
  local_368._0_7_ = (undefined7)uVar2;
  local_368 = CONCAT17(bVar10,(undefined7)local_368);
  local_330 = (FMetasoundDynamicGraphGenerator *)0x0;
  FStack_328.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((this->DynamicTransactor).Object == (FDynamicOperatorTransactor *)0x0) {
    local_res10 = SUB81(__return_storage_ptr__,0);
    local_228 = param_2;
    AlgoImpl::
    IntroSortInternal<FAudioParameter,int,FIdentityFunctor,UMetaSoundSource::FAudioParameterCollector::FSortPredicate>
              ((FAudioParameter *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,local_res10,
               (FSortPredicate)local_res10);
    local_220 = &local_228;
    local_90 = &local_220;
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMetaSoundSource::FindFirstNoninflatableGraph'::__l2::<lambda_1>,void,UMetaSoundSource_const_&>
               ::Call;
    pUVar20 = FindFirstNoninflatableSource
                        (this,&local_340,
                         (TFunctionRef<void___cdecl(UMetaSoundSource_const_&)> *)&local_98);
    pIVar21 = Metasound::Frontend::INodeClassRegistry::Get();
    pcVar8 = *(code **)((longlong)*pIVar21 + 0x28);
    pFVar22 = FMetasoundAssetBase::GetGraphRegistryKey((FMetasoundAssetBase *)&pUVar20->field_0x468)
    ;
    plVar23 = (longlong *)(*pcVar8)(pIVar21,local_58,pFVar22);
    pTVar19 = (TReferenceControllerBase<1> *)plVar23[1];
    pIVar6 = (IGraph *)*plVar23;
    if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
      paVar25 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar25 = &pTVar19->SharedReferenceCount;
      LOCK();
      *paVar25 = (atomic<int>)((int)*paVar25 + 1);
      UNLOCK();
    }
    local_218 = pTVar19;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    local_2f8.SharedReferenceCount.ReferenceController = local_218;
    FVar26.ReferenceController = local_350.SharedReferenceCount.ReferenceController;
    if (pIVar6 != (IGraph *)0x0) {
      local_1f8.BuilderSettings.PruningMode = (undefined1)local_368;
      local_1f8.BuilderSettings.bValidateNoCyclesInGraph = (bool)local_368._1_1_;
      local_1f8.BuilderSettings.bValidateNoDuplicateInputs = (bool)local_368._2_1_;
      local_1f8.BuilderSettings.bValidateVerticesExist = (bool)local_368._3_1_;
      local_1f8.BuilderSettings.bValidateEdgeDataTypesMatch = (bool)local_368._4_1_;
      local_1f8.BuilderSettings.bValidateOperatorOutputsAreBound = (bool)local_368._5_1_;
      local_1f8.BuilderSettings.bFailOnAnyError = (bool)local_368._6_1_;
      local_1f8.BuilderSettings.bPopulateInternalDataReferences = bVar10;
      local_1f8.OperatorSettings.ActualBlockRate = local_320.ActualBlockRate;
      local_1f8.OperatorSettings.NumFramesPerBlock = local_320.NumFramesPerBlock;
      if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar25 = (atomic<int>)((int)*paVar25 + 1);
        UNLOCK();
      }
      local_1f8.BuilderSettings._8_2_ = uVar3;
      local_1f8.Graph.Object = pIVar6;
      local_1f8.Graph.SharedReferenceCount.ReferenceController = pTVar19;
      Metasound::FMetasoundEnvironment::FMetasoundEnvironment(&local_1f8.Environment,&local_340);
      pTVar17 = GetOutputAudioChannelOrder(this);
      pTVar19 = (TReferenceControllerBase<1> *)0x0;
      local_1f8.AudioOutputNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.AudioOutputNames.ArrayNum = pTVar17->ArrayNum;
      lVar27 = (longlong)local_1f8.AudioOutputNames.ArrayNum;
      pFVar5 = (pTVar17->AllocatorInstance).Data;
      if (local_1f8.AudioOutputNames.ArrayNum == 0) {
        local_1f8.AudioOutputNames.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,local_1f8.AudioOutputNames.ArrayNum,0,
                   &local_1f8.AudioOutputNames.AllocatorInstance,local_1f8.AudioOutputNames.ArrayNum
                   ,&local_1f8.AudioOutputNames.ArrayMax);
        memcpy(local_1f8.AudioOutputNames.AllocatorInstance.Data,pFVar5,lVar27 << 3);
      }
      local_1f8.DefaultParameters.AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
      (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_1f8.DefaultParameters.ArrayNum = param_2->ArrayNum;
      local_1f8.DefaultParameters.ArrayMax = param_2->ArrayMax;
      local_1f8.DataChannel.Object = local_350.Object;
      param_2->ArrayNum = 0;
      param_2->ArrayMax = 0;
      local_1f8.bBuildSynchronous = false;
      local_1f8.DataChannel.SharedReferenceCount.ReferenceController =
           local_350.SharedReferenceCount.ReferenceController;
      if (local_350.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_350.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_350.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1f8.GraphRenderCost.Object = (FGraphRenderCost *)0x0;
      local_1f8.GraphRenderCost.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_1f8.ClassName = *(FName *)(*(longlong *)&this->field_0x10 + 0x18);
      local_1f8.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_1f8.AssetPath.PackageName.Number = 0;
      local_1f8.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_1f8.AssetPath.AssetName.Number = 0;
      pFVar24 = (FName *)(**(code **)(*(longlong *)&this->field_0x4b8 + 0x10))
                                   (&this->field_0x4b8,local_48);
      local_1f8.AssetPath.PackageName = *pFVar24;
      local_1f8.AssetPath.AssetName = pFVar24[1];
      pTVar16 = ::operator_new(0x3c8);
      if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
        pFVar28 = (FMetasoundDynamicGraphGenerator *)&DAT_00000010;
      }
      else {
        pTVar16->SharedReferenceCount = (atomic<int>)0x1;
        pTVar16->WeakReferenceCount = (atomic<int>)0x1;
        pTVar16->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFMetasoundConstGraphGenerator_Metasound___00_SharedPointerInternals__6B_
        ;
        Metasound::FMetasoundConstGraphGenerator::FMetasoundConstGraphGenerator
                  ((FMetasoundConstGraphGenerator *)(pTVar16 + 1),&local_1f8);
        pFVar28 = (FMetasoundDynamicGraphGenerator *)(pTVar16 + 1);
        if ((pFVar28 == (FMetasoundDynamicGraphGenerator *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar13 = (TSharedPtr<ISoundGenerator,1> *)(*pcVar8)();
          return pTVar13;
        }
        LOCK();
        pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
        UNLOCK();
        pTVar19 = pTVar16;
      }
      local_2e8 = 0;
      local_330 = pFVar28;
      local_2e0.ReferenceController = pTVar19;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_328,&local_2e0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2e0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1f8.GraphRenderCost.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1f8.DataChannel.SharedReferenceCount.ReferenceController);
      DestructItems<FAudioParameter,int>
                ((FAudioParameter *)local_1f8.DefaultParameters.AllocatorInstance.Data,
                 local_1f8.DefaultParameters.ArrayNum);
      if ((FAudioParameter *)local_1f8.DefaultParameters.AllocatorInstance.Data !=
          (FAudioParameter *)0x0) {
        FMemory::Free(local_1f8.DefaultParameters.AllocatorInstance.Data);
      }
      if (local_1f8.AudioOutputNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.AudioOutputNames.AllocatorInstance.Data);
      }
      DestructItems<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,int>
                ((TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
                  *)local_1f8.Environment.Variables.Pairs.AllocatorInstance.Data,
                 local_1f8.Environment.Variables.Pairs.ArrayNum);
      if ((TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
           *)local_1f8.Environment.Variables.Pairs.AllocatorInstance.Data !=
          (TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
           *)0x0) {
        FMemory::Free(local_1f8.Environment.Variables.Pairs.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1f8.Graph.SharedReferenceCount.ReferenceController);
      local_2f8.SharedReferenceCount.ReferenceController = local_218;
      FVar26.ReferenceController = local_350.SharedReferenceCount.ReferenceController;
    }
  }
  else {
    local_360 = CONCAT11(uVar3._1_1_,1);
    Metasound::FGraphRenderCost::MakeGraphRenderCost(&local_2f8);
    local_158._8_4_ = local_320.ActualBlockRate;
    local_158._12_4_ = local_320.NumFramesPerBlock;
    local_158._16_8_ = local_368;
    local_158._24_2_ = local_360;
    if (((this->DynamicTransactor).Object == (FDynamicOperatorTransactor *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TSharedPtr<ISoundGenerator,1> *)(*pcVar8)();
      return pTVar13;
    }
    pFVar15 = Metasound::DynamicGraph::FDynamicOperatorTransactor::GetGraph
                        ((this->DynamicTransactor).Object);
    pTVar16 = ::operator_new(0x1f0);
    if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
      local_158._32_8_ = ___xmm_00000000000000000000000000000010;
      local_158._40_8_ = _UNK_150651568;
    }
    else {
      pTVar16->SharedReferenceCount = (atomic<int>)0x1;
      pTVar16->WeakReferenceCount = (atomic<int>)0x1;
      pTVar16->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFGraph_Metasound___00_SharedPointerInternals__6B_;
      Metasound::FGraph::FGraph((FGraph *)(pTVar16 + 1),pFVar15);
      local_158._32_8_ = pTVar16 + 1;
      if (((TReferenceControllerBase<1> *)local_158._32_8_ == (TReferenceControllerBase<1> *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        pTVar13 = (TSharedPtr<ISoundGenerator,1> *)(*pcVar8)();
        return pTVar13;
      }
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
      pTVar19 = pTVar16;
      local_158._40_8_ = pTVar16;
    }
    Metasound::FMetasoundEnvironment::FMetasoundEnvironment
              ((FMetasoundEnvironment *)(local_158 + 0x30),&local_340);
    pTVar17 = GetOutputAudioChannelOrder(this);
    local_118.Data = (FScriptContainerElement *)0x0;
    local_110 = pTVar17->ArrayNum;
    lVar27 = (longlong)local_110;
    pFVar5 = (pTVar17->AllocatorInstance).Data;
    if (local_110 == 0) {
      local_10c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_110,0,&local_118,local_110,&local_10c);
      memcpy(local_118.Data,pFVar5,lVar27 << 3);
    }
    local_108 = (FAudioParameter *)(param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_100 = param_2->ArrayNum;
    local_fc = param_2->ArrayMax;
    local_f0 = local_350.Object;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    local_f8 = 0;
    local_e8 = local_350.SharedReferenceCount.ReferenceController;
    if (local_350.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_350.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_350.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e0 = local_2f8.Object;
    local_d8 = local_2f8.SharedReferenceCount.ReferenceController;
    if (local_2f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_d0 = *(longlong *)(*(longlong *)&this->field_0x10 + 0x18);
    (**(code **)(*(longlong *)&this->field_0x4b8 + 0x10))(&this->field_0x4b8,local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    if (((this->DynamicTransactor).Object == (FDynamicOperatorTransactor *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TSharedPtr<ISoundGenerator,1> *)(*pcVar8)();
      return pTVar13;
    }
    this_00 = (this->DynamicTransactor).Object;
    local_a8.Object = local_2f8.Object;
    local_a8.SharedReferenceCount.ReferenceController =
         local_2f8.SharedReferenceCount.ReferenceController;
    if (local_2f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar18 = Metasound::DynamicGraph::FDynamicOperatorTransactor::CreateTransformQueue
                        (this_00,&local_68,&local_320,&local_340,&local_a8);
    local_b8 = pTVar18->Object;
    local_b0.ReferenceController = (pTVar18->SharedReferenceCount).ReferenceController;
    if (local_b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_b0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    pTVar19 = ::operator_new(0x3a8);
    if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
      pTVar19 = (TReferenceControllerBase<1> *)0x0;
      pFVar28 = (FMetasoundDynamicGraphGenerator *)&DAT_00000010;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      Metasound::FMetasoundDynamicGraphGenerator::Init
                ((FMetasoundDynamicGraphGenerator *)&DAT_00000010,
                 (FMetasoundDynamicGraphGeneratorInitParams *)local_158);
    }
    else {
      pTVar19->SharedReferenceCount = (atomic<int>)0x1;
      pTVar19->WeakReferenceCount = (atomic<int>)0x1;
      pTVar19->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFMetasoundDynamicGraphGenerator_Metasound___00_SharedPointerInternals__6B_
      ;
      Metasound::FMetasoundDynamicGraphGenerator::FMetasoundDynamicGraphGenerator
                ((FMetasoundDynamicGraphGenerator *)(pTVar19 + 1),&local_320);
      pFVar28 = (FMetasoundDynamicGraphGenerator *)(pTVar19 + 1);
      if ((pFVar28 == (FMetasoundDynamicGraphGenerator *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        pTVar13 = (TSharedPtr<ISoundGenerator,1> *)(*pcVar8)();
        return pTVar13;
      }
      LOCK();
      pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
      if ((pFVar28 == (FMetasoundDynamicGraphGenerator *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        pTVar13 = (TSharedPtr<ISoundGenerator,1> *)(*pcVar8)();
        return pTVar13;
      }
      Metasound::FMetasoundDynamicGraphGenerator::Init
                (pFVar28,(FMetasoundDynamicGraphGeneratorInitParams *)local_158);
      LOCK();
      pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_310 = 0;
    local_330 = pFVar28;
    local_308[0].ReferenceController = pTVar19;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_328,local_308);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_308[0].ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
    DestructItems<FAudioParameter,int>(local_108,local_100);
    if (local_108 != (FAudioParameter *)0x0) {
      FMemory::Free(local_108);
    }
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
    }
    DestructItems<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,int>
              ((TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
                *)local_158._48_8_,local_120);
    if ((TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
         *)local_158._48_8_ !=
        (TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
         *)0x0) {
      FMemory::Free((void *)local_158._48_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_158._40_8_);
    FVar26.ReferenceController = local_350.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f8.SharedReferenceCount.ReferenceController);
  FVar9.ReferenceController = FStack_328.ReferenceController;
  pFVar28 = local_330;
  if (local_330 != (FMetasoundDynamicGraphGenerator *)0x0) {
    if (FStack_328.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar25 = (atomic<int> *)&DAT_0000000c;
    }
    else {
      paVar25 = &(FStack_328.ReferenceController)->WeakReferenceCount;
      LOCK();
      *paVar25 = (atomic<int>)((int)*paVar25 + 1);
      UNLOCK();
    }
    local_88.AudioComponentID = param_1->AudioComponentId;
    local_88.InstanceID = param_1->InstanceID;
    local_88.Generator.Object = (FMetasoundGenerator *)local_330;
    local_88.Generator.WeakReferenceCount.ReferenceController = FStack_328.ReferenceController;
    if (FStack_328.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar25 = (atomic<int>)((int)*paVar25 + 1);
      UNLOCK();
      LOCK();
      aVar1 = *paVar25;
      *paVar25 = (atomic<int>)((int)*paVar25 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)((FStack_328.ReferenceController)->_padding_ + 8))
                  (FStack_328.ReferenceController,1);
      }
    }
    TrackGenerator(this,&local_88);
    if (local_88.Generator.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar25 = &(local_88.Generator.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar1 = *paVar25;
      *paVar25 = (atomic<int>)((int)*paVar25 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)((local_88.Generator.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_88.Generator.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  __return_storage_ptr__->Object = (ISoundGenerator *)pFVar28;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar9.ReferenceController;
  if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar9.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar26.ReferenceController);
  DestructItems<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,int>
            ((TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
              *)local_340.Variables.Pairs.AllocatorInstance.Data,local_340.Variables.Pairs.ArrayNum)
  ;
  if ((TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
       *)local_340.Variables.Pairs.AllocatorInstance.Data !=
      (TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
       *)0x0) {
    FMemory::Free(local_340.Variables.Pairs.AllocatorInstance.Data);
  }
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_210);
  FLLMScope::~FLLMScope(local_358);
  return __return_storage_ptr__;
}

// EnableSubmixSendsOnPreview @ 14b398bb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall UMetaSoundSource::EnableSubmixSendsOnPreview(UMetaSoundSource *this)

{
  return true;
}

// FindFirstNoninflatableGraph @ 14b3a70a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::IGraph_const_,1> * __thiscall
UMetaSoundSource::FindFirstNoninflatableGraph
          (UMetaSoundSource *this,TSharedPtr<Metasound::IGraph_const_,1> *__return_storage_ptr__,
          FAudioParameterCollector *param_1,FMetasoundEnvironment *param_2)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  UMetaSoundSource *pUVar3;
  INodeClassRegistry *pIVar4;
  FGraphClassRegistryKey *pFVar5;
  undefined8 *puVar6;
  FAudioParameterCollector *local_res10;
  undefined1 local_18 [16];
  
  local_18._8_8_ = &local_res10;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMetaSoundSource::FindFirstNoninflatableGraph'::__l2::<lambda_1>,void,UMetaSoundSource_const_&>
       ::Call;
  local_res10 = param_1;
  pUVar3 = FindFirstNoninflatableSource
                     (this,param_2,(TFunctionRef<void___cdecl(UMetaSoundSource_const_&)> *)local_18)
  ;
  pIVar4 = Metasound::Frontend::INodeClassRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar4 + 0x28);
  pFVar5 = FMetasoundAssetBase::GetGraphRegistryKey((FMetasoundAssetBase *)&pUVar3->field_0x468);
  puVar6 = (undefined8 *)(*pcVar1)(pIVar4,local_18,pFVar5);
  __return_storage_ptr__->Object = (IGraph *)*puVar6;
  pTVar2 = (TReferenceControllerBase<1> *)puVar6[1];
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18._8_8_);
  return __return_storage_ptr__;
}

// FindFirstNoninflatableSource @ 14b3a7150

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

UMetaSoundSource * __thiscall
UMetaSoundSource::FindFirstNoninflatableSource
          (UMetaSoundSource *this,FMetasoundEnvironment *param_1,
          TFunctionRef<void___cdecl(UMetaSoundSource_const_&)> *param_2)

{
  ForAnyElementType _Src;
  UMetaSoundSource *pUVar1;
  undefined8 *puVar2;
  TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
  *pTVar3;
  undefined8 *puVar4;
  longlong lVar5;
  FName local_res18 [2];
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_48;
  TFunctionRef<void___cdecl(UMetaSoundSource_const_&)> local_38;
  
  local_38._0_8_ = *(undefined8 *)param_2;
  local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pUVar1 = FindFirstNoninflatableSourceInternal(this,&local_48,&local_38);
  if (local_48.ArrayNum != 0) {
    FLazyName::Resolve(&Metasound::CoreInterface::Environment::GraphHierarchy);
    puVar2 = ::operator_new(0x20);
    _Src.Data = local_48.AllocatorInstance.Data;
    puVar4 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TMetasoundEnvironmentVariable_V__TArray_UFGuid__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      *(FName *)(puVar2 + 1) = local_res18[0];
      puVar2[2] = 0;
      lVar5 = (longlong)local_48.ArrayNum;
      *(int *)(puVar2 + 3) = local_48.ArrayNum;
      puVar4 = puVar2;
      if (local_48.ArrayNum == 0) {
        *(int *)((longlong)puVar2 + 0x1c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,local_48.ArrayNum,0,(ForAnyElementType *)(puVar2 + 2),local_48.ArrayNum,
                   (int *)((longlong)puVar2 + 0x1c));
        memcpy(((ForAnyElementType *)(puVar2 + 2))->Data,_Src.Data,lVar5 << 4);
      }
    }
    pTVar3 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::AllocateMemoryForEmplace<FName_const_&>(&param_1->Variables,local_res18);
    *(uint *)&pTVar3->field_0x0 = local_res18[0].ComparisonIndex.Value;
    *(uint *)&pTVar3->field_0x4 = local_res18[0].Number;
    *(undefined8 **)&pTVar3->field_0x8 = puVar4;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return pUVar1;
}

// FindFirstNoninflatableSourceInternal @ 14b3a72c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMetaSoundSource * __thiscall
UMetaSoundSource::FindFirstNoninflatableSourceInternal
          (UMetaSoundSource *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<void___cdecl(UMetaSoundSource_const_&)> *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  FObjectPtr_u_0 FVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  IMetaSoundAssetManager *pIVar12;
  UMetaSoundSource *pUVar13;
  FObjectPtr_u_0 FVar14;
  FObjectPtr_u_0 FVar15;
  FObjectPtr_u_0 FVar16;
  uint *puVar17;
  FObjectPtr_u_0 local_res20;
  undefined8 local_48;
  undefined8 uStack_40;
  TFunctionRef<void___cdecl(UMetaSoundSource_const_&)> local_38;
  FString local_28;
  
  if ((this->DynamicTransactor).Object != (FDynamicOperatorTransactor *)0x0) {
    return this;
  }
  if (!Metasound::ConsoleVariables::bEnableExperimentalRuntimePresetGraphInflation) {
    return this;
  }
  if (this->bIsPresetGraphInflationSupported == false) {
    return this;
  }
  if (*(int *)&(this->ReferencedAssetClassObjects).Elements.field_0x8 -
      *(int *)&(this->ReferencedAssetClassObjects).Elements.field_0x34 != 1) {
    if ((byte)LogMetaSound._0_1_ < 3) {
      return this;
    }
    FMetasoundAssetBase::GetOwningAssetName((FMetasoundAssetBase *)&this->field_0x468,&local_28);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return this;
    }
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
    return this;
  }
  FVar15.Handle = (UObject *)0x0;
  uVar2 = *(uint *)&(this->ReferencedAssetClassObjects).Elements.field_0x28;
  FVar16._0_4_ = 0;
  uVar9 = FVar16._0_4_;
  if (uVar2 != 0) {
    puVar17 = *(uint **)&(this->ReferencedAssetClassObjects).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)&(this->ReferencedAssetClassObjects).Elements.field_0x10;
    }
    uVar9 = *puVar17;
    FVar14.Handle = FVar15.Handle;
    FVar6.Handle = FVar15.Handle;
    while (uVar9 == 0) {
      iVar10 = FVar14._0_4_;
      FVar16._0_4_ = FVar6._0_4_ + 0x20;
      FVar16._4_4_ = 0;
      FVar14._0_4_ = iVar10 + 1;
      FVar14._4_4_ = 0;
      uVar9 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)FVar14._0_4_)
      goto LAB_14b3a73a0;
      FVar6 = FVar16;
      uVar9 = puVar17[(longlong)iVar10 + 1];
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar9 = (FVar16._0_4_ - 1) + (int)lVar4;
    if ((int)uVar2 < (int)uVar9) {
      uVar9 = uVar2;
    }
  }
LAB_14b3a73a0:
  local_res20 = (FObjectPtr_u_0)
                ((FObjectPtr_u_0 *)
                (*(longlong *)&(this->ReferencedAssetClassObjects).Elements +
                (longlong)(int)uVar9 * 0x10))->Handle;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if ((UMetaSoundSource *)local_res20.Handle != (UMetaSoundSource *)0x0) {
      UE::GC::MarkAsReachable(local_res20.Handle);
      goto LAB_14b3a73d7;
    }
LAB_14b3a73fd:
    FVar16.Handle = FVar15.Handle;
  }
  else {
LAB_14b3a73d7:
    if ((UMetaSoundSource *)local_res20.Handle == (UMetaSoundSource *)0x0) goto LAB_14b3a73fd;
    pUVar11 = StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_res20,pUVar11);
    FVar16 = local_res20;
    if (!bVar7) goto LAB_14b3a73fd;
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if ((UMetaSoundSource *)FVar16.Handle == (UMetaSoundSource *)0x0) goto LAB_14b3a7557;
  }
  else {
    if ((UMetaSoundSource *)FVar16.Handle == (UMetaSoundSource *)0x0) {
LAB_14b3a7557:
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7872825042415908973>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundSource.cpp"
                         ,0x793,"BaseMetaSoundSource");
      if (!bVar7) {
        return this;
      }
      pcVar5 = (code *)swi(3);
      pUVar13 = (UMetaSoundSource *)(*pcVar5)();
      return pUVar13;
    }
    UE::GC::MarkAsReachable(FVar16.Handle);
  }
  local_48 = 0;
  uStack_40 = 0;
  pIVar12 = Metasound::Frontend::IMetaSoundAssetManager::GetChecked();
  cVar8 = (**(code **)((longlong)*pIVar12 + 0x90))
                    (pIVar12,&(this->RootMetasoundDocument).RootGraph._padding_,&local_48);
  if ((cVar8 == '\0') &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7872825042415908969>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundSource.cpp"
                         ,0x797,
                         "IMetaSoundAssetManager::GetChecked().TryGetAssetIDFromClassName(RootMetasoundDocument.RootGraph.Metadata.GetClassName(), ClassID)"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    pUVar13 = (UMetaSoundSource *)(*pcVar5)();
    return pUVar13;
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    pUVar13 = (UMetaSoundSource *)(*pcVar5)();
    return pUVar13;
  }
  iVar10 = param_1->ArrayNum;
  if (iVar10 == param_1->ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  param_1->ArrayNum = iVar10 + 1;
  pFVar3 = pFVar3 + (longlong)iVar10 * 0x10;
  *(undefined4 *)pFVar3 = (undefined4)local_48;
  *(undefined4 *)(pFVar3 + 4) = local_48._4_4_;
  *(undefined4 *)(pFVar3 + 8) = (undefined4)uStack_40;
  *(undefined4 *)(pFVar3 + 0xc) = uStack_40._4_4_;
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,this);
  local_38._0_8_ = *(undefined8 *)param_2;
  local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
  pUVar13 = FindFirstNoninflatableSourceInternal
                      ((UMetaSoundSource *)FVar16.Handle,param_1,&local_38);
  return pUVar13;
}

// ForgetGenerator @ 14b3a9df0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundSource::ForgetGenerator(UMetaSoundSource *this,TSharedPtr<ISoundGenerator,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<Metasound::FGeneratorInstanceInfo,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  FMetasoundGenerator *pFVar2;
  FScriptContainerElement *pFVar3;
  ulong64 uVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FMetasoundGenerator *pFVar9;
  FMetasoundGenerator *pFVar10;
  FMetasoundGenerator *pFVar11;
  FMetasoundGenerator *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  bool bVar17;
  TSharedPtr<Metasound::FMetasoundGenerator,1> local_48;
  
  pFVar2 = (FMetasoundGenerator *)param_1->Object;
  lpCriticalSection = &this->GeneratorMapCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = &this->Generators;
  pFVar3 = (this_00->AllocatorInstance).Data;
  iVar1 = (this->Generators).ArrayNum;
  if (pFVar3 != pFVar3 + (longlong)iVar1 * 0x20) {
    pFVar10 = (FMetasoundGenerator *)0x0;
    pFVar14 = pFVar3;
    do {
      pFVar12 = *(FMetasoundGenerator **)(pFVar14 + 0x18);
      pFVar9 = pFVar12;
      pFVar11 = pFVar10;
      if (pFVar12 != (FMetasoundGenerator *)0x0) {
        iVar8 = *(int *)&((TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory> *)
                         &pFVar12->_padding_)->Head;
        do {
          pFVar9 = pFVar10;
          if (iVar8 == 0) goto LAB_14b3a9e85;
          LOCK();
          iVar6 = *(int *)&((TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory> *)
                           &pFVar12->_padding_)->Head;
          bVar17 = iVar8 == iVar6;
          if (bVar17) {
            *(int *)&((TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory> *)&pFVar12->_padding_
                     )->Head = iVar8 + 1;
            iVar6 = iVar8;
          }
          UNLOCK();
          iVar8 = iVar6;
        } while (!bVar17);
        pFVar9 = pFVar12;
        pFVar11 = *(FMetasoundGenerator **)(pFVar14 + 0x10);
      }
LAB_14b3a9e85:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar9);
      if (pFVar11 == pFVar2) {
        uVar13 = (uint)((longlong)pFVar14 - (longlong)pFVar3 >> 5);
        if (uVar13 != 0xffffffff) {
          uVar16 = ~uVar13 >> 0x1f;
          uVar7 = 0;
          if ((int)uVar13 < (this->Generators).ArrayNum) {
            uVar7 = uVar16;
          }
          if ((uVar7 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3 = (this_00->AllocatorInstance).Data;
          lVar15 = (longlong)(int)uVar13 * 0x20;
          pFVar2 = *(FMetasoundGenerator **)(pFVar3 + lVar15 + 0x18);
          pFVar12 = pFVar2;
          if (pFVar2 == (FMetasoundGenerator *)0x0) goto LAB_14b3a9f48;
          iVar1 = *(int *)&((TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory> *)
                           &pFVar2->_padding_)->Head;
          goto joined_r0x00014b3a9f2e;
        }
        break;
      }
      pFVar14 = pFVar14 + 0x20;
    } while (pFVar14 != pFVar3 + (longlong)iVar1 * 0x20);
  }
  goto LAB_14b3aa097;
  while( true ) {
    LOCK();
    iVar8 = *(int *)&((TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory> *)&pFVar2->_padding_)
                     ->Head;
    bVar17 = iVar1 == iVar8;
    if (bVar17) {
      *(int *)&((TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory> *)&pFVar2->_padding_)->Head
           = iVar1 + 1;
      iVar8 = iVar1;
    }
    UNLOCK();
    iVar1 = iVar8;
    if (bVar17) break;
joined_r0x00014b3a9f2e:
    pFVar12 = pFVar10;
    if (iVar1 == 0) goto LAB_14b3a9f48;
  }
  pFVar10 = *(FMetasoundGenerator **)(pFVar3 + lVar15 + 0x10);
  pFVar12 = pFVar2;
LAB_14b3a9f48:
  uVar7 = 0;
  if ((int)uVar13 < (this->Generators).ArrayNum) {
    uVar7 = uVar16;
  }
  if ((uVar7 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(ulong64 *)((this_00->AllocatorInstance).Data + lVar15);
  if (pFVar12 != (FMetasoundGenerator *)0x0) {
    LOCK();
    *(int *)&((TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory> *)&pFVar12->_padding_)->Head
         = *(int *)&((TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory> *)&pFVar12->_padding_)
                    ->Head + 1;
    UNLOCK();
  }
  local_48.Object = pFVar10;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::
  Broadcast<IBaseDelegateInstance<void___cdecl(unsigned___int64,TSharedPtr<Metasound::FMetasoundGenerator,1>),FDefaultTSDelegateUserPolicy>,unsigned___int64,TSharedPtr<Metasound::FMetasoundGenerator,1>_>
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &this->OnGeneratorInstanceDestroyed,uVar4,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  uVar7 = 0;
  if ((int)uVar13 < (this->Generators).ArrayNum) {
    uVar7 = uVar16;
  }
  if ((uVar7 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TMulticastDelegate<void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
  ::Broadcast(&this->OnGeneratorInstanceInfoDestroyed,
              (FGeneratorInstanceInfo *)((this_00->AllocatorInstance).Data + lVar15));
  uVar7 = 0;
  if ((int)uVar13 < (this->Generators).ArrayNum) {
    uVar7 = uVar16;
  }
  if ((uVar7 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TArray<Metasound::FGeneratorInstanceInfo,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            (this_00,uVar13);
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,&this_00->AllocatorInstance,(this->Generators).ArrayNum,
             &(this->Generators).ArrayMax);
LAB_14b3aa097:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetAllDefaultParameters @ 14b3abf00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMetaSoundSource::GetAllDefaultParameters
          (UMetaSoundSource *this,TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FAudioParameter *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  TArrayView<FGuid_const_,int> *pTVar7;
  FScriptContainerElement *pFVar8;
  FAudioParameter *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>
  local_68;
  FString local_58;
  TArrayView<FGuid_const_,int> local_48;
  TArrayView<FGuid_const_,int> local_38;
  
  bVar4 = Metasound::CanEverExecuteGraph(false);
  if (bVar4) {
    if ((this->RuntimeInputData).bIsValid == (atomic<bool>)0x0) {
      if ((2 < (byte)LogMetaSound._0_1_) &&
         (bVar4 = Metasound::SourcePrivate::HasNotBeenLoggedForThisObject(this,0x48e), bVar4)) {
        FMetasoundAssetBase::GetOwningAssetName((FMetasoundAssetBase *)&this->field_0x468,&local_58)
        ;
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      return false;
    }
    pFVar8 = (this->RuntimeInputData).InputMap.Pairs.AllocatorInstance.Data;
    iVar1 = (this->RuntimeInputData).InputMap.Pairs.ArrayNum;
    pFVar9 = (FAudioParameter *)(pFVar8 + 0x20);
    pFVar10 = pFVar8 + (longlong)iVar1 * 200;
    while( true ) {
      if ((this->RuntimeInputData).InputMap.Pairs.ArrayNum != iVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TTuple<FName,UMetaSoundSource::FRuntimeInput>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar8 == pFVar10) break;
      pFVar2 = (FAudioParameter *)(param_1->AllocatorInstance).Data;
      if (((pFVar2 <= pFVar9) && (pFVar9 < pFVar2 + param_1->ArrayMax)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8a0,&param_1->AllocatorInstance,&param_1->ArrayMax);
        param_1->ArrayNum = iVar6;
      }
      param_1->ArrayNum = iVar6 + 1;
      FAudioParameter::FAudioParameter
                ((FAudioParameter *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0xa0),
                 pFVar9);
      pFVar8 = pFVar8 + 200;
      pFVar9 = (FAudioParameter *)&pFVar9[1].StringParam.Data.ArrayNum;
    }
  }
  else {
    pTVar7 = UMetaSoundSettings::GetPageOrder(&local_38);
    local_48.DataPtr = pTVar7->DataPtr;
    local_48.ArrayNum = pTVar7->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&pTVar7->field_0xc;
    CreateRuntimeInputMap(this,&local_68,false,&local_48);
    iVar1 = local_68.Pairs.ArrayNum;
    pFVar9 = (FAudioParameter *)(local_68.Pairs.AllocatorInstance.Data + 0x20);
    pFVar8 = local_68.Pairs.AllocatorInstance.Data + (longlong)local_68.Pairs.ArrayNum * 200;
    while( true ) {
      if (local_68.Pairs.ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TTuple<FName,UMetaSoundSource::FRuntimeInput>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res20);
      }
      if ((FScriptContainerElement *)&pFVar9[-1].ParamType == pFVar8) break;
      pFVar2 = (FAudioParameter *)(param_1->AllocatorInstance).Data;
      if (((pFVar2 <= pFVar9) && (pFVar9 < pFVar2 + param_1->ArrayMax)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8a0,&param_1->AllocatorInstance,&param_1->ArrayMax);
        param_1->ArrayNum = iVar6;
      }
      param_1->ArrayNum = iVar6 + 1;
      FAudioParameter::FAudioParameter
                ((FAudioParameter *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0xa0),
                 pFVar9);
      pFVar9 = (FAudioParameter *)&pFVar9[1].StringParam.Data.ArrayNum;
    }
    DestructItems<TTuple<FName,UMetaSoundSource::FRuntimeInput>,int>
              ((TTuple<FName,UMetaSoundSource::FRuntimeInput> *)
               local_68.Pairs.AllocatorInstance.Data,local_68.Pairs.ArrayNum);
    if ((TTuple<FName,UMetaSoundSource::FRuntimeInput> *)local_68.Pairs.AllocatorInstance.Data !=
        (TTuple<FName,UMetaSoundSource::FRuntimeInput> *)0x0) {
      FMemory::Free(local_68.Pairs.AllocatorInstance.Data);
    }
  }
  return true;
}

// GetAssetPathChecked @ 14b3ad2f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FTopLevelAssetPath * __thiscall
UMetaSoundSource::GetAssetPathChecked
          (UMetaSoundSource *this,FTopLevelAssetPath *__return_storage_ptr__)

{
  undefined1 *puVar1;
  bool bVar2;
  UObject *local_res8;
  
  puVar1 = &this[-1].field_0x408;
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  (__return_storage_ptr__->AssetName).ComparisonIndex = 0;
  (__return_storage_ptr__->AssetName).Number = 0;
  bVar2 = FTopLevelAssetPath::TrySetPath(__return_storage_ptr__,(UObject *)puVar1);
  if (!bVar2) {
    local_res8 = (UObject *)puVar1;
    `Metasound::Engine::FAssetHelper::GetAssetPathChecked<UMetaSoundSource_const_>'::__l2::
    <lambda_1>::operator()(&local_res8);
  }
  if (__return_storage_ptr__->PackageName == (FName)0x0) {
    local_res8 = (UObject *)puVar1;
    `Metasound::Engine::FAssetHelper::GetAssetPathChecked<UMetaSoundSource_const_>'::__l2::
    <lambda_2>::operator()(&local_res8);
  }
  return __return_storage_ptr__;
}

// GetAssetRegistryTags @ 14b3ad410

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundSource::GetAssetRegistryTags(UMetaSoundSource *this,FAssetRegistryTagsContext param_1)

{
  code *pcVar1;
  IMetaSoundDocumentInterface *pIVar2;
  bool bVar3;
  FAssetRegistryTagsContext FVar4;
  FAssetRegistryTagsContext local_res8;
  FMetaSoundAssetClassInfo local_48;
  
  FVar4.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(&local_res8,param_1.Data);
  USoundWaveProcedural::GetAssetRegistryTags((USoundWaveProcedural *)this,FVar4);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UMetaSoundSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pIVar2 = (IMetaSoundDocumentInterface *)&this->field_0x4b8;
  if ((this == (UMetaSoundSource *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MetaSound",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundEngineAsset.h"
                         ,0xcf,L""), pIVar2 = (IMetaSoundDocumentInterface *)0x0, bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(uint *)&this->field_0x8 & 0x50) == 0) {
    Metasound::Frontend::FMetaSoundAssetClassInfo::FMetaSoundAssetClassInfo(&local_48,pIVar2);
    Metasound::Frontend::FMetaSoundAssetClassInfo::ExportToContext
              (&local_48,(FAssetRegistryTagsContext *)param_1.Data);
  }
  return;
}

// GetAsyncReferencedAssetClassPaths @ 14b3ad4e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> * __thiscall
UMetaSoundSource::GetAsyncReferencedAssetClassPaths(UMetaSoundSource *this)

{
  return (TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *)
         &this->field_0x288;
}

// GetBaseMetaSoundUClass @ 14b3ae170

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

UClass * __thiscall UMetaSoundSource::GetBaseMetaSoundUClass(UMetaSoundSource *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundSource.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundSource",
               &Z_Registration_Info_UClass_UMetaSoundSource.InnerSingleton,
               StaticRegisterNativesUMetaSoundSource,0x8c0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMetaSoundSource>,
               InternalVTableHelperCtorCaller<UMetaSoundSource>,aFStackX_8,
               USoundWaveProcedural::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundSource.InnerSingleton;
}

// GetBuilderUClass @ 14b3ae3f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

UClass * __thiscall UMetaSoundSource::GetBuilderUClass(UMetaSoundSource *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundSourceBuilder.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundSourceBuilder",
               &Z_Registration_Info_UClass_UMetaSoundSourceBuilder.InnerSingleton,
               UMetaSoundSourceBuilder::StaticRegisterNativesUMetaSoundSourceBuilder,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMetaSoundSourceBuilder>,
               InternalVTableHelperCtorCaller<UMetaSoundSourceBuilder>,aFStackX_8,
               UMetaSoundBuilderBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundSourceBuilder.InnerSingleton;
}

// GetConstDocument @ 14b3ae980

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FMetasoundFrontendDocument * __thiscall UMetaSoundSource::GetConstDocument(UMetaSoundSource *this)

{
  return (FMetasoundFrontendDocument *)&this->field_0x8;
}

// GetDefaultAccessFlags @ 14b3aee40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

EMetasoundFrontendClassAccessFlags __thiscall
UMetaSoundSource::GetDefaultAccessFlags(UMetaSoundSource *this)

{
  return None;
}

// GetDocument @ 14b3b3fe0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FMetasoundFrontendDocument * __thiscall UMetaSoundSource::GetDocument(UMetaSoundSource *this)

{
  return (FMetasoundFrontendDocument *)&this->field_0x8;
}

// GetDocumentAccessPtr @ 14b3b4040

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FDocumentAccessPtr * __thiscall
UMetaSoundSource::GetDocumentAccessPtr
          (UMetaSoundSource *this,FDocumentAccessPtr *__return_storage_ptr__)

{
  IDocumentBuilderRegistry *pIVar1;
  
  pIVar1 = Metasound::Frontend::IDocumentBuilderRegistry::Get();
  if (pIVar1 != (IDocumentBuilderRegistry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,&this->field_0xe0);
  }
  Metasound::Frontend::
  MakeAccessPtr<Metasound::Frontend::FDocumentAccessPtr,FMetasoundFrontendDocument>
            (__return_storage_ptr__,(FAccessPoint *)&this->field_0x58,
             (FMetasoundFrontendDocument *)&this->field_0x58);
  return __return_storage_ptr__;
}

// GetDocumentConstAccessPtr @ 14b3b40c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FConstDocumentAccessPtr * __thiscall
UMetaSoundSource::GetDocumentConstAccessPtr
          (UMetaSoundSource *this,FConstDocumentAccessPtr *__return_storage_ptr__)

{
  Metasound::Frontend::
  MakeAccessPtr<Metasound::Frontend::FConstDocumentAccessPtr,FMetasoundFrontendDocument_const_>
            (__return_storage_ptr__,(FAccessPoint *)&this->field_0x58,
             (FMetasoundFrontendDocument *)&this->field_0x58);
  return __return_storage_ptr__;
}

// GetDuration @ 14b3b40f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

float __thiscall UMetaSoundSource::GetDuration(UMetaSoundSource *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x318))();
  if (cVar1 != '\0') {
    return __real_461c3c00;
  }
  return __real_461c4000;
}

// GetDynamicGeneratorTransactor @ 14b3b4130

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::DynamicGraph::FDynamicOperatorTransactor,1> * __thiscall
UMetaSoundSource::GetDynamicGeneratorTransactor
          (UMetaSoundSource *this,
          TSharedPtr<Metasound::DynamicGraph::FDynamicOperatorTransactor,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->DynamicTransactor).Object;
  pTVar1 = (this->DynamicTransactor).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetGeneratorForAudioComponent @ 14b3b4570

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TWeakPtr<Metasound::FMetasoundGenerator,1> * __thiscall
UMetaSoundSource::GetGeneratorForAudioComponent
          (UMetaSoundSource *this,TWeakPtr<Metasound::FMetasoundGenerator,1> *__return_storage_ptr__
          ,ulong64 param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TWeakPtr<Metasound::FMetasoundGenerator,1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  
  if ((param_1 == 0xffffffffffffffff) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComponentId != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundSource.cpp"
                         ,0x680,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TWeakPtr<Metasound::FMetasoundGenerator,1> *)(*pcVar2)();
    return pTVar4;
  }
  lpCriticalSection = &this->GeneratorMapCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar5 = (this->Generators).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)(this->Generators).ArrayNum * 0x20;
  do {
    if (pFVar5 == pFVar6) {
LAB_14b3b45f6:
      __return_storage_ptr__->Object = (FMetasoundGenerator *)0x0;
      (__return_storage_ptr__->WeakReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
LAB_14b3b45ff:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return __return_storage_ptr__;
    }
    if (*(ulong64 *)pFVar5 == param_1) {
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        __return_storage_ptr__->Object = *(FMetasoundGenerator **)(pFVar5 + 0x10);
        pTVar1 = *(TReferenceControllerBase<1> **)(pFVar5 + 0x18);
        (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
          UNLOCK();
        }
        goto LAB_14b3b45ff;
      }
      goto LAB_14b3b45f6;
    }
    pFVar5 = pFVar5 + 0x20;
  } while( true );
}

// GetGeneratorForInstanceID @ 14b3b4650

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TWeakPtr<Metasound::FMetasoundGenerator,1> * __thiscall
UMetaSoundSource::GetGeneratorForInstanceID
          (UMetaSoundSource *this,TWeakPtr<Metasound::FMetasoundGenerator,1> *__return_storage_ptr__
          ,ulong64 param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  
  lpCriticalSection = &this->GeneratorMapCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (this->Generators).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)(this->Generators).ArrayNum * 0x20;
  do {
    if (pFVar2 == pFVar3) {
LAB_14b3b46af:
      __return_storage_ptr__->Object = (FMetasoundGenerator *)0x0;
      (__return_storage_ptr__->WeakReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
LAB_14b3b46b8:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return __return_storage_ptr__;
    }
    if (*(ulong64 *)(pFVar2 + 8) == param_1) {
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        __return_storage_ptr__->Object = *(FMetasoundGenerator **)(pFVar2 + 0x10);
        pTVar1 = *(TReferenceControllerBase<1> **)(pFVar2 + 0x18);
        (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
          UNLOCK();
        }
        goto LAB_14b3b46b8;
      }
      goto LAB_14b3b46af;
    }
    pFVar2 = pFVar2 + 0x20;
  } while( true );
}

// GetOperatorSettings @ 14b3be5a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FOperatorSettings * __thiscall
UMetaSoundSource::GetOperatorSettings
          (UMetaSoundSource *this,FOperatorSettings *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  FName *pFVar5;
  FOperatorSettings *pFVar6;
  float fVar7;
  FName local_res10 [2];
  FName local_res20;
  TRange<float> local_a8;
  TRange<int> local_98;
  FString local_88;
  FString local_78;
  FMetaSoundQualitySettings local_68 [2];
  
  local_68[0].BlockRate.Default = 100.0;
  local_68[0].UniqueId.A = 0;
  local_68[0].UniqueId.B = 0;
  local_68[0].UniqueId.C = 0;
  local_68[0].UniqueId.D = 0;
  local_68[0].Name.ComparisonIndex.Value = 0;
  local_68[0].Name.Number = 0;
  fVar7 = __real_473b8000;
  if (0 < param_1) {
    fVar7 = (float)param_1;
  }
  local_68[0].SampleRate.Default = (int)fVar7;
  pFVar5 = ::FName::FName(&local_res20,"Windows");
  bVar2 = GetQualitySettings(this,*pFVar5,local_68);
  if (((1 < (byte)LogMetaSound._0_1_) && (!bVar2)) &&
     (cVar3 = (**(code **)(*(longlong *)this + 0x1c0))(this), cVar3 != '\0')) {
    FMetasoundAssetBase::GetOwningAssetName((FMetasoundAssetBase *)&this->field_0x468,&local_78);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  fVar7 = Metasound::Frontend::GetBlockRateOverride();
  iVar4 = Metasound::Frontend::GetSampleRateOverride();
  if (0 < iVar4) {
    local_68[0].SampleRate.Default = iVar4;
  }
  if (0.0 < fVar7) {
    local_68[0].BlockRate.Default = fVar7;
  }
  Metasound::Frontend::GetBlockRateClampRange(&local_a8);
  Metasound::Frontend::GetSampleRateClampRange(&local_98);
  if ((local_a8.UpperBound.Type.Value == '\x02') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FOperatorSettings *)(*pcVar1)();
    return pFVar6;
  }
  if ((local_a8.LowerBound.Type.Value == '\x02') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FOperatorSettings *)(*pcVar1)();
    return pFVar6;
  }
  if (local_68[0].BlockRate.Default <= local_a8.UpperBound.Value) {
    local_a8.UpperBound.Value = local_68[0].BlockRate.Default;
  }
  fVar7 = local_a8.UpperBound.Value;
  if (local_a8.UpperBound.Value <= local_a8.LowerBound.Value) {
    fVar7 = local_a8.LowerBound.Value;
  }
  local_68[0].BlockRate.Default = fVar7;
  if ((local_98.UpperBound.Type.Value == '\x02') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FOperatorSettings *)(*pcVar1)();
    return pFVar6;
  }
  if ((local_98.LowerBound.Type.Value == '\x02') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FOperatorSettings *)(*pcVar1)();
    return pFVar6;
  }
  if (local_68[0].SampleRate.Default < local_98.UpperBound.Value) {
    local_98.UpperBound.Value = local_68[0].SampleRate.Default;
  }
  iVar4 = local_98.LowerBound.Value;
  if (local_98.LowerBound.Value < local_98.UpperBound.Value) {
    iVar4 = local_98.UpperBound.Value;
  }
  if (5 < (byte)LogMetaSound._0_1_) {
    local_res10[0].ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_res10[0].Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(local_res10,&local_88);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  Metasound::FOperatorSettings::FOperatorSettings(__return_storage_ptr__,iVar4,fVar7);
  return __return_storage_ptr__;
}

// GetOutputAudioChannelOrder @ 14b3beb80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UMetaSoundSource::GetOutputAudioChannelOrder(UMetaSoundSource *this)

{
  code *pcVar1;
  bool bVar2;
  TMap<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,0>_>
  *this_00;
  FOutputAudioFormatInfo *pFVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  
  this_00 = Metasound::Engine::GetOutputAudioFormatInfo();
  pFVar3 = TMapBase<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo,0>_>
           ::Find(this_00,this->OutputFormat);
  if (pFVar3 != (FOutputAudioFormatInfo *)0x0) {
    return &pFVar3->OutputVertexChannelOrder;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundSource.cpp"
                     ,0x65a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar4;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UMetaSoundSource::GetOutputAudioChannelOrder'::__l7::
             _dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Empty;
}

// GetOwningAsset @ 14b3beeb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

UObject * __thiscall UMetaSoundSource::GetOwningAsset(UMetaSoundSource *this)

{
  return (UObject *)&this[-1].field_0x458;
}

// GetOwningAsset @ 14b3beec0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

UObject * __thiscall UMetaSoundSource::GetOwningAsset(UMetaSoundSource *this)

{
  return (UObject *)&this[-1].field_0x458;
}

// GetParameterRouter @ 14b3befc0

FParameterRouter * __cdecl UMetaSoundSource::GetParameterRouter(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&Router,4000);
      Router.DataChannels.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      Router.DataChannels.Pairs.ArrayNum = 0;
      Router.DataChannels.Pairs.ArrayMax = 0;
      atexit(`UMetaSoundSource::GetParameterRouter'::__l2::_dynamic_atexit_destructor_for__Router__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &Router;
    }
  }
  return &Router;
}

// GetPrivateStaticClass @ 14b3bf700

UClass * __cdecl UMetaSoundSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundSource",
               &Z_Registration_Info_UClass_UMetaSoundSource.InnerSingleton,
               StaticRegisterNativesUMetaSoundSource,0x8c0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMetaSoundSource>,
               InternalVTableHelperCtorCaller<UMetaSoundSource>,local_res8,
               USoundWaveProcedural::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundSource.InnerSingleton;
}

// GetQualitySettings @ 14b3bfb70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMetaSoundSource::GetQualitySettings
          (UMetaSoundSource *this,FName param_1,FMetaSoundQualitySettings *param_2)

{
  float fVar1;
  int iVar2;
  FMetaSoundQualitySettings *pFVar3;
  FName local_res8;
  FString local_28 [2];
  
  pFVar3 = (this->CookedQualitySettings).Ptr;
  if (pFVar3 != (FMetaSoundQualitySettings *)0x0) {
    fVar1 = (pFVar3->BlockRate).Default;
    if (0.0 < fVar1) {
      if (6 < (byte)LogMetaSound._0_1_) {
        local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
        local_res8.Number = *(uint *)&this->field_0x1c;
        ::FName::ToString(&local_res8,local_28);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
        }
      }
      (param_2->BlockRate).Default = fVar1;
    }
    iVar2 = (((this->CookedQualitySettings).Ptr)->SampleRate).Default;
    if (0 < iVar2) {
      if (6 < (byte)LogMetaSound._0_1_) {
        local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
        local_res8.Number = *(uint *)&this->field_0x1c;
        ::FName::ToString(&local_res8,local_28);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
        }
      }
      (param_2->SampleRate).Default = iVar2;
    }
    if (5 < (byte)LogMetaSound._0_1_) {
      local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
      local_res8.Number = *(uint *)&this->field_0x1c;
      ::FName::ToString(&local_res8,local_28);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
    }
    return true;
  }
  return false;
}

// GetReferencedAssetClassKeys @ 14b3bfd20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
UMetaSoundSource::GetReferencedAssetClassKeys(UMetaSoundSource *this)

{
  return (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)&this->field_0x1e8;
}

// GetReferencedAssets @ 14b3bfd60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TArray<FMetasoundAssetBase_*,TSizedDefaultAllocator<32>_> * __thiscall
UMetaSoundSource::GetReferencedAssets
          (UMetaSoundSource *this,
          TArray<FMetasoundAssetBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  Metasound::Engine::FAssetHelper::GetReferencedAssets<UMetaSoundSource>
            (__return_storage_ptr__,(UMetaSoundSource *)&this[-1].field_0x458);
  return __return_storage_ptr__;
}

// ImplementsParameterInterface @ 14b3c4220

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall
UMetaSoundSource::ImplementsParameterInterface
          (UMetaSoundSource *this,TSharedPtr<Audio::FParameterInterface,1> *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FVersion *pFVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  FNameEntryId local_18;
  int iStack_14;
  
  if (param_1->Object == (FParameterInterface *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  Audio::FParameterInterface::GetName(param_1->Object);
  if (param_1->Object == (FParameterInterface *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar7 = Audio::FParameterInterface::GetVersion(param_1->Object);
  uVar1 = pFVar7->Major;
  if (param_1->Object == (FParameterInterface *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar7 = Audio::FParameterInterface::GetVersion(param_1->Object);
  iVar2 = pFVar7->Minor;
  lVar8 = (**(code **)(*(longlong *)&this->field_0x4b8 + 0x18))();
  uVar6 = ::GetTypeHash(local_18);
  uVar6 = uVar6 + iStack_14;
  if (*(int *)(lVar8 + 0x28) != *(int *)(lVar8 + 0x54)) {
    lVar9 = *(longlong *)(lVar8 + 0x60);
    if (*(longlong *)(lVar8 + 0x60) == 0) {
      lVar9 = lVar8 + 0x58;
    }
    iVar10 = *(int *)(lVar9 + (ulonglong)
                              (*(int *)(lVar8 + 0x68) - 1U &
                              (uVar6 * 0x40 +
                               (uVar1 * 0x40 + iVar2 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) +
                               (uVar6 >> 2) + 0x9e3779b9 ^ uVar6)) * 4);
    if (iVar10 != -1) {
      lVar8 = *(longlong *)(lVar8 + 0x20);
      do {
        lVar9 = (longlong)iVar10;
        if (((*(longlong *)(lVar8 + lVar9 * 0x18) == CONCAT44(iStack_14,local_18.Value)) &&
            (*(uint *)(lVar8 + 8 + lVar9 * 0x18) == uVar1)) &&
           (*(int *)(lVar8 + 0xc + lVar9 * 0x18) == iVar2)) goto LAB_14b3c43ba;
        iVar10 = *(int *)(lVar8 + 0x10 + lVar9 * 0x18);
      } while (iVar10 != -1);
    }
  }
  iVar10 = -1;
LAB_14b3c43ba:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return iVar10 != -1;
}

// InitParameters @ 14b3c6790

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMetaSoundSource::InitParameters
          (UMetaSoundSource *this,TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1,
          FName param_2)

{
  bool bVar1;
  bool bVar2;
  TArrayView<FGuid_const_,int> *pTVar3;
  TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess> *pTVar4
  ;
  bool bVar5;
  FLLMScope local_res8 [2];
  FName local_res20;
  FMemScope local_58;
  TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>
  local_50;
  TArrayView<FGuid_const_,int> local_38;
  TArrayView<FGuid_const_,int> local_28;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_58,&local_res20,true);
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"UMetaSoundSource::InitParameters");
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId863,"UMetaSoundSource::InitParameters",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundSource.cpp"
               ,0x35f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId863);
  }
  if (this->bIsBuilderActive == false) {
    if ((this->RuntimeInputData).bIsValid != (atomic<bool>)0x0) {
      InitParametersInternal(this,&(this->RuntimeInputData).InputMap,param_1,param_2);
      goto LAB_14b3c693b;
    }
    if ((2 < (byte)LogMetaSound._0_1_) &&
       (bVar2 = Metasound::SourcePrivate::HasNotBeenLoggedForThisObject(this,0x378), bVar2)) {
      FMetasoundAssetBase::GetOwningAssetName
                ((FMetasoundAssetBase *)&this->field_0x468,(FString *)&local_38);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_38.DataPtr != (FGuid *)0x0) {
        FMemory::Free(local_38.DataPtr);
      }
    }
  }
  pTVar3 = UMetaSoundSettings::GetPageOrder(&local_28);
  local_38.DataPtr = pTVar3->DataPtr;
  local_38.ArrayNum = pTVar3->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&pTVar3->field_0xc;
  pTVar4 = CreateRuntimeInputMap(this,&local_50,false,&local_38);
  InitParametersInternal(this,pTVar4,param_1,param_2);
  DestructItems<TTuple<FName,UMetaSoundSource::FRuntimeInput>,int>
            ((TTuple<FName,UMetaSoundSource::FRuntimeInput> *)local_50.Pairs.AllocatorInstance.Data,
             local_50.Pairs.ArrayNum);
  if ((TTuple<FName,UMetaSoundSource::FRuntimeInput> *)local_50.Pairs.AllocatorInstance.Data !=
      (TTuple<FName,UMetaSoundSource::FRuntimeInput> *)0x0) {
    FMemory::Free(local_50.Pairs.AllocatorInstance.Data);
  }
LAB_14b3c693b:
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_58);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// InitParametersInternal @ 14b3c6980

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMetaSoundSource::InitParametersInternal
          (UMetaSoundSource *this,
          TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>
          *param_1,TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_2,FName param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  IDataTypeRegistry *pIVar5;
  FRuntimeInput *pFVar6;
  longlong lVar7;
  uint uVar8;
  FAudioParameter *this_00;
  bool bVar9;
  undefined1 local_87 [3];
  FLLMScope local_84;
  FName local_80 [2];
  FName local_70;
  FMemScope local_68;
  FString local_60;
  FString local_50;
  
  FLLMScope::FLLMScope
            (&local_84,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_80[0] = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_68,local_80,true);
  iVar2 = GCycleStatsShouldEmitNamedEvents;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"UMetaSoundSource::InitParametersInternal")
    ;
  }
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1198,"UMetaSoundSource::InitParametersInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundSource.cpp"
               ,0x4ae);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1198);
  }
  bVar3 = IsInGameThread();
  if (((!bVar3) && (bVar3 = IsInAudioThread(), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundSource.cpp"
                         ,0x4b0,
                         L"Parameter initialization must happen on the GameThread or AudioThread to allow for safe creation of UObject proxies"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar5 = Metasound::Frontend::IDataTypeRegistry::Get();
  uVar8 = param_2->ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar7 = (longlong)(int)uVar8 * 0xa0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (FAudioParameter *)((param_2->AllocatorInstance).Data + lVar7);
      pFVar6 = TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>
               ::Find(param_1,this_00->ParamName);
      if (pFVar6 == (FRuntimeInput *)0x0) {
LAB_14b3c6b99:
        uVar4 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TArray<FAudioParameter,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(param_2,uVar8);
        if (Metasound::MetaSoundParameterEnableWarningOnIgnoredParameterCVar != 0) {
          local_70.ComparisonIndex.Value = *(uint *)&this->field_0x18;
          local_70.Number = *(uint *)&this->field_0x1c;
          ::FName::ToString(&local_70,&local_60);
          if (2 < (byte)LogMetaSound._0_1_) {
            ::FName::ToString((FName *)this_00,&local_50);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
          }
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        bVar3 = IsParameterValidInternal(this,this_00,&pFVar6->TypeName,pIVar5);
        if (!bVar3) goto LAB_14b3c6b99;
        if ((this_00->ObjectProxies).ArrayNum == 0) {
          `UMetaSoundSource::InitParametersInternal'::__l2::<lambda_1>::operator()(local_87,this_00)
          ;
          Metasound::SourcePrivate::CreateUObjectProxies(pIVar5,pFVar6->TypeName,true,this_00);
        }
      }
      lVar7 = lVar7 + -0xa0;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (0 < iVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(&local_84);
  return;
}

// InitResources @ 14b3c6d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMetaSoundSource::InitResources(UMetaSoundSource *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  UObject *pUVar4;
  bool bVar5;
  FName FVar6;
  bool bVar7;
  UClass *this_00;
  TArrayView<FGuid_const_,int> *pTVar8;
  FTSTicker *this_01;
  undefined ***pppuVar9;
  bool bVar10;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [4];
  FName local_a4;
  FLLMScope local_9c;
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined4 uStack_84;
  FGuid *pFStack_80;
  undefined **ppuStack_78;
  FMemScope local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FName local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  FLLMScope::FLLMScope
            (&local_9c,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_a4 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_70,&local_a4,true);
  bVar5 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar5) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"UMetaSoundSource::InitResources");
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId907,"UMetaSoundSource::InitResources",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundSource.cpp"
               ,0x38b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId907);
  }
  bVar7 = Metasound::CanEverExecuteGraph(false);
  if (!bVar7) {
    `UMetaSoundSource::InitResources'::__l2::<lambda_1>::operator()(local_a8);
  }
  bVar7 = IsInGameThread();
  if (bVar7) {
    local_88 = 0x100;
    pFStack_80 = (FGuid *)0x0;
    ppuStack_78 = (undefined **)((ulonglong)ppuStack_78 & 0xffffffff00000000);
    pcVar3 = *(code **)(*(longlong *)&this->field_0x468 + 0x18);
    this_00 = UMetaSoundSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar4 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar4 != (UObject *)0x0) {
      local_88 = CONCAT13(pUVar4[1].field_0x10,(undefined3)local_88);
      pTVar8 = UMetaSoundSettings::GetPageOrder((TArrayView<FGuid_const_,int> *)local_98);
      pFStack_80 = pTVar8->DataPtr;
      ppuStack_78 = *(undefined ***)&pTVar8->ArrayNum;
    }
    local_68._4_4_ = uStack_84;
    local_68._0_4_ = local_88;
    local_68._8_4_ = pFStack_80._0_4_;
    local_68._12_4_ = pFStack_80._4_4_;
    local_58 = ppuStack_78;
    (*pcVar3)(&this->field_0x468,local_68);
  }
  else {
    bVar7 = IsInAudioThread();
    if (((!bVar7) && (bVar7 = (*IsInAsyncLoadingThread)(), !bVar7)) &&
       (2 < (byte)LogMetaSound._0_1_)) {
      FMetasoundAssetBase::GetOwningAssetName
                ((FMetasoundAssetBase *)&this->field_0x468,(FString *)local_98);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if ((UMetaSoundSource *)local_98._0_8_ != (UMetaSoundSource *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UMetaSoundSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_a4.ComparisonIndex.Value = 0;
    local_a4.Number = 0;
    local_98._0_8_ = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UMetaSoundSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_a4,(FObjectPtr)local_98);
    FVar6 = local_a4;
    this_01 = FTSTicker::GetCoreTicker();
    local_40 = (undefined ***)0x0;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`ExecuteOnGameThread<`UMetaSoundSource::InitResources'::`7'::<lambda_2>_>'::`2'::<lambda_1>,1,0>
                ::_vftable_;
    local_50 = FVar6;
    local_68._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`ExecuteOnGameThread<`UMetaSoundSource::InitResources'::__l7::<lambda_2>_>'::__l2::<lambda_1>,bool,float>
         ::Call;
    FTSTicker::AddTicker
              (this_01,(TWeakPtr<FTSTicker::FElement,1> *)local_98,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundSource.cpp(923)"
               ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_68);
    if ((TReferenceControllerBase<1> *)local_98._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = (atomic<int> *)(local_98._8_8_ + 0xc);
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)local_98._8_8_ + 8))(local_98._8_8_,1);
      }
    }
    if ((code *)local_68._0_8_ != (code *)0x0) {
      pppuVar9 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar9 = local_40;
      }
      (*(code *)(*pppuVar9)[2])();
    }
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope(&local_70);
  FLLMScope::~FLLMScope(&local_9c);
  return;
}

// InvalidateCachedRuntimeInputData @ 14b3c7e60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall UMetaSoundSource::InvalidateCachedRuntimeInputData(UMetaSoundSource *this)

{
  this->bIsPresetGraphInflationSupported = false;
  LOCK();
  (this->RuntimeInputData).bIsValid = (atomic<bool>)0x0;
  UNLOCK();
  return;
}

// IsActivelyBuilding @ 14b3c7ec0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall UMetaSoundSource::IsActivelyBuilding(UMetaSoundSource *this)

{
  return (bool)this->field_0x3f4;
}

// IsDynamic @ 14b3c82b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall UMetaSoundSource::IsDynamic(UMetaSoundSource *this)

{
  return (this->DynamicTransactor).Object != (FDynamicOperatorTransactor *)0x0;
}

// IsLooping @ 14b3c83e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall UMetaSoundSource::IsLooping(UMetaSoundSource *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x318))();
  return cVar1 == '\0';
}

// IsOneShot @ 14b3c8400

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall UMetaSoundSource::IsOneShot(UMetaSoundSource *this)

{
  bool bVar1;
  FMetasoundFrontendVersion *pFVar2;
  
  pFVar2 = Metasound::Frontend::SourceOneShotInterface::GetVersion();
  bVar1 = FMetasoundAssetBase::IsInterfaceDeclared((FMetasoundAssetBase *)&this->field_0x468,pFVar2)
  ;
  return bVar1;
}

// IsParameterValid @ 14b3c8430

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall UMetaSoundSource::IsParameterValid(UMetaSoundSource *this,FAudioParameter *param_1)

{
  FName *pFVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  FMetasoundFrontendClassInterface *pFVar5;
  IDataTypeRegistry *pIVar6;
  FName *pFVar7;
  undefined1 local_res8 [8];
  
  lVar4 = (**(code **)(*(longlong *)&this->field_0x4b8 + 0x18))();
  pFVar5 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)(lVar4 + 0x70));
  iVar2 = (pFVar5->Inputs).ArrayNum;
  pFVar7 = (FName *)(pFVar5->Inputs).AllocatorInstance.Data;
  pFVar1 = pFVar7 + (longlong)iVar2 * 9;
  while( true ) {
    if ((pFVar5->Inputs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    if (*pFVar7 == param_1->ParamName) {
      pIVar6 = Metasound::Frontend::IDataTypeRegistry::Get();
      bVar3 = IsParameterValidInternal(this,param_1,pFVar7 + 1,pIVar6);
      return bVar3;
    }
    pFVar7 = pFVar7 + 9;
  }
  return false;
}

// IsParameterValidInternal @ 14b3c84e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall
UMetaSoundSource::IsParameterValidInternal
          (UMetaSoundSource *this,FAudioParameter *param_1,FName *param_2,IDataTypeRegistry *param_3
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  undefined1 local_28 [16];
  
  if ((param_1->ParamName != (FName)0x0) &&
     ((param_1->TypeName == (FName)0x0 || (param_1->TypeName == *param_2)))) {
    if (param_1->ParamType == Object) {
                    /* WARNING: Could not recover jumptable at 0x00014b3c852d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)((longlong)*param_3 + 0x68))
                        (param_3,param_2,(param_1->ObjectParam).field0_0x0.DebugPtr);
      return (bool)uVar4;
    }
    if (param_1->ParamType == ObjectArray) {
      cVar5 = '\x01';
      Metasound::CreateElementTypeNameFromArrayTypeName((FName)local_28);
      pFVar9 = (param_1->ArrayObjectParam).AllocatorInstance.Data;
      iVar2 = (param_1->ArrayObjectParam).ArrayNum;
      pFVar1 = pFVar9 + (longlong)iVar2 * 8;
      while( true ) {
        if ((param_1->ArrayObjectParam).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res10);
        }
        if ((pFVar9 == pFVar1) ||
           (cVar5 = (**(code **)((longlong)*param_3 + 0x68))(param_3,local_28,*(undefined8 *)pFVar9)
           , cVar5 == '\0')) break;
        pFVar9 = pFVar9 + 8;
      }
      return (bool)cVar5;
    }
    plVar7 = (longlong *)(**(code **)((longlong)*param_3 + 0x18))(param_3,param_2);
    if (plVar7 != (longlong *)0x0) {
      switch(param_1->ParamType) {
      case None:
        lVar8 = (**(code **)(*plVar7 + 8))(plVar7);
        return (bool)*(undefined1 *)(lVar8 + 0x1a);
      case Boolean:
      case Trigger:
        lVar8 = (**(code **)(*plVar7 + 8))(plVar7);
        return (bool)*(undefined1 *)(lVar8 + 0x1b);
      case Integer:
        lVar8 = (**(code **)(*plVar7 + 8))(plVar7);
        return (bool)*(undefined1 *)(lVar8 + 0x1c);
      case Float:
        lVar8 = (**(code **)(*plVar7 + 8))(plVar7);
        return (bool)*(undefined1 *)(lVar8 + 0x1d);
      case String:
        lVar8 = (**(code **)(*plVar7 + 8))(plVar7);
        return (bool)*(undefined1 *)(lVar8 + 0x1e);
      case NoneArray:
        lVar8 = (**(code **)(*plVar7 + 8))(plVar7);
        return (bool)*(undefined1 *)(lVar8 + 0x21);
      case BooleanArray:
        lVar8 = (**(code **)(*plVar7 + 8))(plVar7);
        return (bool)*(undefined1 *)(lVar8 + 0x22);
      case IntegerArray:
        lVar8 = (**(code **)(*plVar7 + 8))(plVar7);
        return (bool)*(undefined1 *)(lVar8 + 0x23);
      case FloatArray:
        lVar8 = (**(code **)(*plVar7 + 8))(plVar7);
        return (bool)*(undefined1 *)(lVar8 + 0x24);
      case StringArray:
        lVar8 = (**(code **)(*plVar7 + 8))(plVar7);
        return (bool)*(undefined1 *)(lVar8 + 0x25);
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundSource.cpp"
                         ,0x5a7,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar4 = (*pcVar3)();
        return (bool)uVar4;
      }
    }
  }
  return false;
}

// IsPlayable @ 14b3c8c50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall UMetaSoundSource::IsPlayable(UMetaSoundSource *this)

{
  return true;
}

// OnAsyncReferencedAssetsLoaded @ 14b3ca010

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundSource::OnAsyncReferencedAssetsLoaded
          (UMetaSoundSource *this,TArray<FMetasoundAssetBase_*,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  FName FVar4;
  uint uVar5;
  uint uVar6;
  UObject *pUVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  UObject *local_res8;
  TObjectPtr<UObject> local_res10;
  FSoftObjectPath local_58;
  
  pFVar9 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMetasoundAssetBase_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar9 == pFVar1) break;
    if (*(longlong **)pFVar9 != (longlong *)0x0) {
      pUVar7 = (UObject *)(**(code **)(**(longlong **)pFVar9 + 0x50))();
      if (pUVar7 != (UObject *)0x0) {
        local_res8 = pUVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
        Emplace<TObjectPtr<UObject>_>
                  ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                    *)&this->field_0x238,&local_res10,(bool *)&local_res8);
        local_58.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_58.AssetPath.PackageName.Number = 0;
        local_58.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_58.AssetPath.AssetName.Number = 0;
        local_58.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.SubPathString.Data.ArrayNum = 0;
        local_58.SubPathString.Data.ArrayMax = 0;
        FSoftObjectPath::SetPath(&local_58,pUVar7);
        FVar4 = local_58.AssetPath.AssetName;
        if (*(int *)&this->field_0x290 != *(int *)&this->field_0x2bc) {
          uVar5 = ::GetTypeHash(local_58.AssetPath.AssetName.ComparisonIndex.Value);
          FVar3 = local_58.AssetPath.PackageName;
          uVar6 = ::GetTypeHash(local_58.AssetPath.PackageName.ComparisonIndex.Value);
          uVar6 = uVar6 + FVar3.Number;
          uVar6 = uVar6 * 0x40 + -0x61c88647 + uVar5 + FVar4.Number + (uVar6 >> 2) ^ uVar6;
          if (1 < local_58.SubPathString.Data.ArrayNum) {
            iVar8 = local_58.SubPathString.Data.ArrayNum + -1;
            if (local_58.SubPathString.Data.ArrayNum == 0) {
              iVar8 = 0;
            }
            uVar5 = FCrc::Strihash_DEPRECATED<char8_t>
                              (iVar8,(uchar *)local_58.SubPathString.Data.AllocatorInstance.Data);
            uVar6 = uVar6 ^ uVar5 + 0x9e3779b9 + uVar6 * 0x40 + (uVar6 >> 2);
          }
          TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::
          RemoveImpl<FSoftObjectPath>
                    ((TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>
                      *)&this->field_0x288,uVar6,&local_58);
        }
        if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// OnBeginActiveBuilder @ 14b3ca280

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMetaSoundSource::OnBeginActiveBuilder(UMetaSoundSource *this)

{
  bool bVar1;
  FGraphClassRegistryKey *pFVar2;
  INodeClassRegistry *pIVar3;
  FString local_58;
  FGraphClassRegistryKey local_48;
  
  if ((this->field_0x3f4 != '\0') && (1 < (byte)LogMetaSound._0_1_)) {
    FMetasoundAssetBase::GetOwningAssetName((FMetasoundAssetBase *)&this[-1].Generators,&local_58);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  pFVar2 = FMetasoundAssetBase::GetGraphRegistryKey((FMetasoundAssetBase *)&this[-1].Generators);
  local_48.NodeKey.Type = (pFVar2->NodeKey).Type;
  local_48.NodeKey._1_3_ = *(undefined3 *)&(pFVar2->NodeKey).field_0x1;
  local_48.NodeKey.ClassName.Namespace.ComparisonIndex.Value =
       (pFVar2->NodeKey).ClassName.Namespace.ComparisonIndex.Value;
  local_48.NodeKey.ClassName._4_8_ = *(undefined8 *)&(pFVar2->NodeKey).ClassName.Namespace.Number;
  local_48.NodeKey.ClassName._12_8_ = *(undefined8 *)&(pFVar2->NodeKey).ClassName.Name.Number;
  local_48.NodeKey._24_8_ = *(undefined8 *)&(pFVar2->NodeKey).ClassName.Variant.Number;
  local_48._32_8_ = *(undefined8 *)&(pFVar2->NodeKey).Version.Minor;
  local_48.AssetPath._4_8_ = *(undefined8 *)&(pFVar2->AssetPath).PackageName.Number;
  local_48._48_8_ = *(undefined8 *)&(pFVar2->AssetPath).AssetName.Number;
  bVar1 = Metasound::Frontend::FGraphClassRegistryKey::IsValid(&local_48);
  if (bVar1) {
    pIVar3 = Metasound::Frontend::INodeClassRegistry::Get();
    (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,&local_48);
  }
  *(undefined2 *)&this->field_0x3f4 = 1;
  LOCK();
  this->field_0x3c8 = 0;
  UNLOCK();
  return;
}

// OnEndGenerate @ 14b3ca540

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundSource::OnEndGenerate(UMetaSoundSource *this,TSharedPtr<ISoundGenerator,1> *param_1)

{
  TSharedPtr<ISoundGenerator,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ForgetGenerator(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnFinishActiveBuilder @ 14b3ca5a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall UMetaSoundSource::OnFinishActiveBuilder(UMetaSoundSource *this)

{
  this->field_0x3f4 = 0;
  return;
}

// PostLoad @ 14b3cd970

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall UMetaSoundSource::PostLoad(UMetaSoundSource *this)

{
  byte bVar1;
  longlong lVar2;
  IMetaSoundAssetManager *pIVar3;
  undefined4 uVar4;
  
  USoundWave::PostLoad((USoundWave *)this);
  if (((*(uint *)&this->field_0x8 >> 4 & 1) == 0) &&
     (lVar2 = (**(code **)(*(longlong *)&this->field_0x468 + 0x30))(&this->field_0x468),
     0 < *(int *)(lVar2 + 8) - *(int *)(lVar2 + 0x34))) {
    pIVar3 = Metasound::Frontend::IMetaSoundAssetManager::GetChecked();
    (**(code **)((longlong)*pIVar3 + 0xb0))(pIVar3,&this->field_0x468);
  }
  uVar4 = (**(code **)(*(longlong *)this + 0x2d8))(this);
  *(undefined4 *)&this->field_0x10c = uVar4;
  bVar1 = (**(code **)(*(longlong *)this + 0x310))(this);
  this->field_0x19b = (this->field_0x19b ^ bVar1) & 1 ^ this->field_0x19b;
  return;
}

// PostLoadQualitySettings @ 14b3cda10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall UMetaSoundSource::PostLoadQualitySettings(UMetaSoundSource *this)

{
  return;
}

// PreSave @ 14b3cda60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall UMetaSoundSource::PreSave(UMetaSoundSource *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  USoundBase::PreSave((USoundBase *)this,(FObjectSaveContextData *)local_res10);
  pFVar1 = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data + 0x9c;
  *(int *)pFVar1 = *(int *)pFVar1 + 1;
  return;
}

// ResolveQualitySettings @ 14b3ddf00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundSource::ResolveQualitySettings(UMetaSoundSource *this,UMetaSoundSettings *param_1)

{
  return;
}

// Serialize @ 14b3def00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall UMetaSoundSource::Serialize(UMetaSoundSource *this,FArchive *param_1)

{
  TPimplPtr<FMetaSoundQualitySettings,0> *pTVar1;
  longlong lVar2;
  longlong *plVar3;
  FName FVar4;
  FMetaSoundQualitySettings *pFVar5;
  undefined8 *puVar6;
  FName *pFVar7;
  UPackage *pUVar8;
  FName *pFVar9;
  FName *pFVar10;
  FName local_res10;
  FName local_res18;
  longlong local_48;
  undefined1 local_40 [24];
  FName FStack_28;
  
  pFVar10 = (FName *)0x0;
  local_res10.ComparisonIndex.Value = 0;
  USoundWaveProcedural::Serialize((USoundWaveProcedural *)this,param_1);
  lVar2 = *(longlong *)&param_1->field_0x68;
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x10) == 0)) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    if (lVar2 != 0) goto LAB_14b3def41;
  }
  else {
LAB_14b3def41:
    plVar3 = *(longlong **)(lVar2 + 8);
    if (plVar3 != (longlong *)0x0) {
      puVar6 = (undefined8 *)(**(code **)(*plVar3 + 8))(plVar3,local_40);
      if (*(int *)(puVar6 + 1) == 0) {
        pFVar7 = ::FName::FName(&local_res10,L"");
        pFVar9 = (FName *)&DAT_00000001;
      }
      else {
        pFVar7 = ::FName::FName(&local_res10,(wchar_t *)*puVar6);
        pFVar9 = (FName *)&DAT_00000001;
      }
      goto LAB_14b3def9a;
    }
  }
  pFVar7 = ::FName::FName(&local_res18,"Windows");
  pFVar9 = pFVar10;
LAB_14b3def9a:
  FVar4 = *pFVar7;
  if ((pFVar9 != (FName *)0x0) && ((void *)local_40._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_40._0_8_);
  }
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  local_40._8_4_ = 0;
  local_40._12_4_ = 0;
  local_40._16_4_ = 0;
  local_40._20_4_ = 0;
  FStack_28.ComparisonIndex.Value = 0;
  FStack_28.Number = 0;
  if ((param_1->field_0x28 & 4) != 0) {
    GetQualitySettings(this,FVar4,(FMetaSoundQualitySettings *)local_40);
  }
  if (Z_Registration_Info_UScriptStruct_FMetaSoundQualitySettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_MetasoundEngine();
    Z_Registration_Info_UScriptStruct_FMetaSoundQualitySettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundQualitySettings,(UObject *)pUVar8,
                         L"MetaSoundQualitySettings");
  }
  UScriptStruct::SerializeItem
            (Z_Registration_Info_UScriptStruct_FMetaSoundQualitySettings.OuterSingleton,param_1,
             local_40,(void *)0x0);
  if ((param_1->field_0x28 & 1) != 0) {
    pFVar9 = ::operator_new(0x30);
    if (pFVar9 != (FName *)0x0) {
      pFVar9[1].ComparisonIndex = 0;
      pFVar9[1].Number = 0;
      *pFVar9 = (FName)UE::Core::Private::PimplPtr::DeleterFunc<FMetaSoundQualitySettings>;
      pFVar9[2].ComparisonIndex.Value = local_40._0_4_;
      pFVar9[2].Number = local_40._4_4_;
      pFVar9[3].ComparisonIndex.Value = local_40._8_4_;
      pFVar9[3].Number = local_40._12_4_;
      pFVar9[4].ComparisonIndex = (FNameEntryId)local_40._16_4_;
      pFVar9[4].Number = local_40._20_4_;
      pFVar9[5] = FStack_28;
      pFVar10 = pFVar9;
    }
    pTVar1 = &this->CookedQualitySettings;
    if ((TPimplPtr<FMetaSoundQualitySettings,0> *)&local_48 == pTVar1) {
      if ((FMetaSoundQualitySettings *)(pFVar10 + 2) == (FMetaSoundQualitySettings *)0x0) {
        return;
      }
    }
    else {
      pFVar5 = pTVar1->Ptr;
      pTVar1->Ptr = (FMetaSoundQualitySettings *)(pFVar10 + 2);
      if (pFVar5 == (FMetaSoundQualitySettings *)0x0) {
        return;
      }
      pFVar10 = &pFVar5[-1].Name;
    }
    (*(code *)*pFVar10)();
  }
  return;
}

// Serialize @ 14b3df0b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall UMetaSoundSource::Serialize(UMetaSoundSource *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SerializeCookedQualitySettings @ 14b3df0e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundSource::SerializeCookedQualitySettings
          (UMetaSoundSource *this,FName param_1,FArchive *param_2)

{
  TPimplPtr<FMetaSoundQualitySettings,0> *pTVar1;
  FMetaSoundQualitySettings *pFVar2;
  UPackage *pUVar3;
  FName *pFVar4;
  FName *pFVar5;
  longlong local_38;
  undefined1 local_30 [24];
  FName FStack_18;
  
  pFVar5 = (FName *)0x0;
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  local_30._8_4_ = 0;
  local_30._12_4_ = 0;
  local_30._16_4_ = 0;
  local_30._20_4_ = 0;
  FStack_18.ComparisonIndex.Value = 0;
  FStack_18.Number = 0;
  if ((param_2->field_0x28 & 4) != 0) {
    GetQualitySettings(this,param_1,(FMetaSoundQualitySettings *)local_30);
  }
  if (Z_Registration_Info_UScriptStruct_FMetaSoundQualitySettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_MetasoundEngine();
    Z_Registration_Info_UScriptStruct_FMetaSoundQualitySettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundQualitySettings,(UObject *)pUVar3,
                         L"MetaSoundQualitySettings");
  }
  UScriptStruct::SerializeItem
            (Z_Registration_Info_UScriptStruct_FMetaSoundQualitySettings.OuterSingleton,param_2,
             local_30,(void *)0x0);
  if ((param_2->field_0x28 & 1) != 0) {
    pFVar4 = ::operator_new(0x30);
    if (pFVar4 != (FName *)0x0) {
      pFVar4[1].ComparisonIndex = 0;
      pFVar4[1].Number = 0;
      *pFVar4 = (FName)UE::Core::Private::PimplPtr::DeleterFunc<FMetaSoundQualitySettings>;
      pFVar4[2].ComparisonIndex.Value = local_30._0_4_;
      pFVar4[2].Number = local_30._4_4_;
      pFVar4[3].ComparisonIndex.Value = local_30._8_4_;
      pFVar4[3].Number = local_30._12_4_;
      pFVar4[4].ComparisonIndex = (FNameEntryId)local_30._16_4_;
      pFVar4[4].Number = local_30._20_4_;
      pFVar4[5] = FStack_18;
      pFVar5 = pFVar4;
    }
    pTVar1 = &this->CookedQualitySettings;
    if ((TPimplPtr<FMetaSoundQualitySettings,0> *)&local_38 == pTVar1) {
      if ((FMetaSoundQualitySettings *)(pFVar5 + 2) == (FMetaSoundQualitySettings *)0x0) {
        return;
      }
    }
    else {
      pFVar2 = pTVar1->Ptr;
      pTVar1->Ptr = (FMetaSoundQualitySettings *)(pFVar5 + 2);
      if (pFVar2 == (FMetaSoundQualitySettings *)0x0) {
        return;
      }
      pFVar5 = &pFVar2[-1].Name;
    }
    (*(code *)*pFVar5)();
  }
  return;
}

// SetDynamicGeneratorEnabled @ 14b3df1f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Metasound::DynamicGraph::FDynamicOperatorTransactor,1> * __thiscall
UMetaSoundSource::SetDynamicGeneratorEnabled
          (UMetaSoundSource *this,
          TSharedPtr<Metasound::DynamicGraph::FDynamicOperatorTransactor,1> *__return_storage_ptr__,
          bool param_1)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  INodeClassRegistry *pIVar3;
  FGraphClassRegistryKey *pFVar4;
  TSharedPtr<Metasound::DynamicGraph::FDynamicOperatorTransactor,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<Metasound::DynamicGraph::FDynamicOperatorTransactor,1> *pTVar7;
  FGraph *pFVar8;
  FDynamicOperatorTransactor *pFVar9;
  FDynamicOperatorTransactor *local_98;
  FSharedReferencer<1> FStack_90;
  FDynamicOperatorTransactor *local_88;
  FSharedReferencer<1> local_80;
  FDynamicOperatorTransactor *local_78;
  FSharedReferencer<1> local_70;
  FGraph *local_68;
  TReferenceControllerBase<1> *local_60;
  longlong local_58;
  FSharedReferencer<1> FStack_50;
  FString local_48;
  TSharedRef<Metasound::DynamicGraph::FDynamicOperatorTransactor,1> local_38;
  TSharedRef<Metasound::DynamicGraph::FDynamicOperatorTransactor,1> local_28;
  
  pTVar5 = &this->DynamicTransactor;
  if (param_1) {
    if (pTVar5->Object != (FDynamicOperatorTransactor *)0x0) goto LAB_14b3df4c8;
    this_00 = &this->field_0x468;
    bVar2 = FMetasoundAssetBase::IsRegistered((FMetasoundAssetBase *)this_00);
    if (bVar2) {
      pIVar3 = Metasound::Frontend::INodeClassRegistry::Get();
      pcVar1 = *(code **)((longlong)*pIVar3 + 0x28);
      pFVar4 = FMetasoundAssetBase::GetGraphRegistryKey((FMetasoundAssetBase *)this_00);
      (*pcVar1)(pIVar3,&local_68,pFVar4);
      if (local_68 == (FGraph *)0x0) {
        if (2 < (byte)LogMetaSound._0_1_) {
          FMetasoundAssetBase::GetOwningAssetName((FMetasoundAssetBase *)this_00,&local_48);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        pTVar7 = MakeShared<Metasound::DynamicGraph::FDynamicOperatorTransactor,1>(&local_38);
        local_80.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
        local_88 = pTVar7->Object;
        if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_80.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_80.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar5 != (TSharedPtr<Metasound::DynamicGraph::FDynamicOperatorTransactor,1> *)&local_88
           ) {
          pTVar5->Object = local_88;
          local_88 = (FDynamicOperatorTransactor *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->DynamicTransactor).SharedReferenceCount,&local_80);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
      }
      else {
        pFVar8 = local_68;
        if ((local_68 == (FGraph *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), pFVar8 = local_68, bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TSharedPtr<Metasound::DynamicGraph::FDynamicOperatorTransactor,1> *)(*pcVar1)();
          return pTVar5;
        }
        pTVar6 = ::operator_new(0x280);
        if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
          pTVar6 = (TReferenceControllerBase<1> *)0x0;
          local_98 = ___xmm_00000000000000000000000000000010;
          pFVar9 = (FDynamicOperatorTransactor *)&DAT_00000010;
          FStack_90.ReferenceController = _UNK_150651568;
        }
        else {
          pTVar6->SharedReferenceCount = (atomic<int>)0x1;
          pTVar6->WeakReferenceCount = (atomic<int>)0x1;
          pTVar6->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFDynamicOperatorTransactor_DynamicGraph_Metasound___00_SharedPointerInternals__6B_
          ;
          Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorTransactor
                    ((FDynamicOperatorTransactor *)(pTVar6 + 1),pFVar8);
          pFVar9 = (FDynamicOperatorTransactor *)(pTVar6 + 1);
          if ((pFVar9 == (FDynamicOperatorTransactor *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            pTVar5 = (TSharedPtr<Metasound::DynamicGraph::FDynamicOperatorTransactor,1> *)
                     (*pcVar1)();
            return pTVar5;
          }
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
          FStack_90.ReferenceController = pTVar6;
          local_98 = pFVar9;
        }
        if (pTVar5 != (TSharedPtr<Metasound::DynamicGraph::FDynamicOperatorTransactor,1> *)&local_98
           ) {
          pTVar5->Object = pFVar9;
          local_98 = (FDynamicOperatorTransactor *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->DynamicTransactor).SharedReferenceCount,&FStack_90);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_90.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
      goto LAB_14b3df4c8;
    }
    pTVar7 = MakeShared<Metasound::DynamicGraph::FDynamicOperatorTransactor,1>(&local_28);
    local_70.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
    local_78 = pTVar7->Object;
    if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_70.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar5 != (TSharedPtr<Metasound::DynamicGraph::FDynamicOperatorTransactor,1> *)&local_78) {
      pTVar5->Object = local_78;
      local_78 = (FDynamicOperatorTransactor *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->DynamicTransactor).SharedReferenceCount,&local_70);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.ReferenceController);
  }
  else {
    local_58 = 0;
    FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_28.SharedReferenceCount.ReferenceController = FStack_50.ReferenceController;
    if (pTVar5 != (TSharedPtr<Metasound::DynamicGraph::FDynamicOperatorTransactor,1> *)&local_58) {
      pTVar5->Object = (FDynamicOperatorTransactor *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->DynamicTransactor).SharedReferenceCount,&FStack_50);
      local_28.SharedReferenceCount.ReferenceController = FStack_50.ReferenceController;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
LAB_14b3df4c8:
  __return_storage_ptr__->Object = pTVar5->Object;
  pTVar6 = (this->DynamicTransactor).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUMetaSoundSource @ 14b3e1590

void __cdecl UMetaSoundSource::StaticRegisterNativesUMetaSoundSource(void)

{
  return;
}

// TrackGenerator @ 14b3e1f90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundSource::TrackGenerator(UMetaSoundSource *this,FGeneratorInstanceInfo *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<Metasound::FGeneratorInstanceInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FGeneratorInstanceInfo *pFVar3;
  FMetasoundGenerator *pFVar4;
  ulong64 uVar5;
  code *pcVar6;
  atomic<int> aVar7;
  bool bVar8;
  int iVar9;
  atomic<int> aVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FMetasoundGenerator *pFVar14;
  FMetasoundGenerator *pFVar15;
  TSharedPtr<Metasound::FMetasoundGenerator,1> local_28;
  
  lpCriticalSection = &this->GeneratorMapCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar2 = &this->Generators;
  pFVar3 = (FGeneratorInstanceInfo *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->Generators).ArrayMax)) &&
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
  iVar9 = (this->Generators).ArrayNum;
  piVar1 = &(this->Generators).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Generators).ArrayNum = iVar9 + 1;
  pFVar14 = (FMetasoundGenerator *)0x0;
  pFVar13 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x20;
  *(ulong64 *)pFVar13 = param_1->AudioComponentID;
  *(ulong64 *)(pFVar13 + 8) = param_1->InstanceID;
  *(FMetasoundGenerator **)(pFVar13 + 0x10) = (param_1->Generator).Object;
  *(TReferenceControllerBase<1> **)(pFVar13 + 0x18) =
       (param_1->Generator).WeakReferenceCount.ReferenceController;
  (param_1->Generator).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->Generator).Object = (FMetasoundGenerator *)0x0;
  iVar9 = (this->Generators).ArrayNum;
  uVar12 = iVar9 - 1;
  uVar11 = 0;
  if ((int)uVar12 < iVar9) {
    uVar11 = ~uVar12 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (this->Generators).ArrayNum;
  pFVar13 = (pTVar2->AllocatorInstance).Data;
  pFVar4 = *(FMetasoundGenerator **)(pFVar13 + (longlong)iVar9 * 0x20 + -8);
  pFVar15 = pFVar4;
  if (pFVar4 != (FMetasoundGenerator *)0x0) {
    aVar7 = *(atomic<int> *)&pFVar4->_padding_;
    do {
      pFVar15 = pFVar14;
      if (aVar7 == (atomic<int>)0x0) goto LAB_14b3e2105;
      LOCK();
      aVar10 = *(atomic<int> *)&pFVar4->_padding_;
      bVar8 = aVar7 == aVar10;
      if (bVar8) {
        *(atomic<int> *)&pFVar4->_padding_ = (atomic<int>)((int)aVar7 + 1);
        aVar10 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar10;
    } while (!bVar8);
    pFVar14 = *(FMetasoundGenerator **)(pFVar13 + (longlong)iVar9 * 0x20 + -0x10);
    pFVar15 = pFVar4;
  }
LAB_14b3e2105:
  iVar9 = (this->Generators).ArrayNum;
  uVar12 = iVar9 - 1;
  uVar11 = 0;
  if ((int)uVar12 < iVar9) {
    uVar11 = ~uVar12 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(ulong64 *)
           ((pTVar2->AllocatorInstance).Data + (longlong)(this->Generators).ArrayNum * 0x20 + -0x20)
  ;
  if (pFVar15 != (FMetasoundGenerator *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar15->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pFVar15->_padding_ + 1);
    UNLOCK();
  }
  local_28.Object = pFVar14;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar15;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::
  Broadcast<IBaseDelegateInstance<void___cdecl(unsigned___int64,TSharedPtr<Metasound::FMetasoundGenerator,1>),FDefaultTSDelegateUserPolicy>,unsigned___int64,TSharedPtr<Metasound::FMetasoundGenerator,1>_>
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &this->OnGeneratorInstanceCreated,uVar5,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar15);
  iVar9 = (this->Generators).ArrayNum;
  uVar12 = iVar9 - 1;
  uVar11 = 0;
  if ((int)uVar12 < iVar9) {
    uVar11 = ~uVar12 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  TMulticastDelegate<void___cdecl(Metasound::FGeneratorInstanceInfo_const_&),FDefaultTSDelegateUserPolicy>
  ::Broadcast(&this->OnGeneratorInstanceInfoCreated,
              (FGeneratorInstanceInfo *)
              ((pTVar2->AllocatorInstance).Data +
              (longlong)((this->Generators).ArrayNum + -1) * 0x20));
                    /* WARNING: Could not recover jumptable at 0x00014b3e2222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// UpdateAndRegisterForExecution @ 14b3e5f10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundSource::UpdateAndRegisterForExecution
          (UMetaSoundSource *this,FMetaSoundAssetRegistrationOptions *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess> *pTVar5
  ;
  TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>
  local_28;
  TArrayView<FGuid_const_,int> local_18;
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundSource.cpp"
                         ,0x3be,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FMetasoundAssetBase::UpdateAndRegisterForExecution((FMetasoundAssetBase *)this,param_1);
  if (this->field_0x418 != '\0') {
    return;
  }
  bVar3 = Metasound::CanEverExecuteGraph(false);
  if (bVar3) {
    local_18.DataPtr = (param_1->PageOrder).DataPtr;
    local_18.ArrayNum = (param_1->PageOrder).ArrayNum;
    local_18._12_4_ = *(undefined4 *)&(param_1->PageOrder).field_0xc;
    pTVar5 = CreateRuntimeInputMap
                       ((UMetaSoundSource *)&this[-1].field_0x458,&local_28,true,&local_18);
    puVar1 = &this->field_0x420;
    if ((TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>
         *)puVar1 != pTVar5) {
      DestructItems<TTuple<FName,UMetaSoundSource::FRuntimeInput>,int>
                (*(TTuple<FName,UMetaSoundSource::FRuntimeInput> **)puVar1,
                 *(int *)&this->field_0x428);
      if (*(void **)puVar1 != (void *)0x0) {
        FMemory::Free(*(void **)puVar1);
      }
      *(FScriptContainerElement **)puVar1 = (pTVar5->Pairs).AllocatorInstance.Data;
      (pTVar5->Pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)&this->field_0x428 = (pTVar5->Pairs).ArrayNum;
      *(int *)&this->field_0x42c = (pTVar5->Pairs).ArrayMax;
      (pTVar5->Pairs).ArrayNum = 0;
      (pTVar5->Pairs).ArrayMax = 0;
    }
    DestructItems<TTuple<FName,UMetaSoundSource::FRuntimeInput>,int>
              ((TTuple<FName,UMetaSoundSource::FRuntimeInput> *)
               local_28.Pairs.AllocatorInstance.Data,local_28.Pairs.ArrayNum);
    if ((TTuple<FName,UMetaSoundSource::FRuntimeInput> *)local_28.Pairs.AllocatorInstance.Data !=
        (TTuple<FName,UMetaSoundSource::FRuntimeInput> *)0x0) {
      FMemory::Free(local_28.Pairs.AllocatorInstance.Data);
    }
    if ((this->field_0x168 == '\0') ||
       (bVar3 = Algo::
                NoneOf<TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>,_UMetaSoundSource::CacheRuntimeInputData_::__l2::<lambda_1>_>
                          ((TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>
                            *)puVar1,(<lambda_1>)&this->field_0x170), !bVar3)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    this->field_0x445 = uVar4;
    LOCK();
    this->field_0x418 = 1;
    UNLOCK();
    return;
  }
  return;
}

// _getUObject @ 14b3e8490

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

UObject * __thiscall UMetaSoundSource::_getUObject(UMetaSoundSource *this)

{
  return (UObject *)&this[-1].DynamicTransactor;
}

// _getUObject`adjustor{8}' @ 14b3e849c

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMetaSoundSource::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall UMetaSoundSource::_getUObject_adjustor_8__(UMetaSoundSource *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMetaSoundSource *)&this[-1].field_0x8b8);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{352}' @ 14b3e84ac

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMetaSoundSource::_getUObject`adjustor{352}' (void)const __ptr64 */

UObject * __thiscall UMetaSoundSource::_getUObject_adjustor_352__(UMetaSoundSource *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMetaSoundSource *)&this[-1].OnGeneratorInstanceCreated.field_0x18);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1168}' @ 14b3e84c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMetaSoundSource::_getUObject`adjustor{1168}' (void)const __ptr64 */

UObject * __thiscall UMetaSoundSource::_getUObject_adjustor_1168__(UMetaSoundSource *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMetaSoundSource *)&this[-1].field_0x430);
  return (UObject *)pUVar1;
}

// operator() @ 150565010

bool __thiscall `UMetaSoundSource::InitResources'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7872825042415910004>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7872825042415910004>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

