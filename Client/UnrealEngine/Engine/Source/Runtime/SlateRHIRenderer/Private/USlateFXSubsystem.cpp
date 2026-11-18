// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 17

// StaticClass @ 145fd1f50

UClass * __cdecl USlateFXSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateFXSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateRHIRenderer",L"SlateFXSubsystem",
               &Z_Registration_Info_UClass_USlateFXSubsystem.InnerSingleton,
               StaticRegisterNativesUSlateFXSubsystem,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USlateFXSubsystem>,
               InternalVTableHelperCtorCaller<USlateFXSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateFXSubsystem.InnerSingleton;
}

// USlateFXSubsystem @ 145fe8780

USlateFXSubsystem * __thiscall
USlateFXSubsystem::USlateFXSubsystem(USlateFXSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7USlateFXSubsystem__6B_;
  *(undefined8 *)&this->SlatePostBufferProcessors = 0;
  *(undefined8 *)&(this->SlatePostBufferProcessors).field_0x8 = 0;
  *(undefined8 *)&(this->SlatePostBufferProcessors).field_0x20 = 0;
  *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x28 = 0;
  *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x34 = 0;
  *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SlatePostBufferProcessors).field_0x40 = 0;
  *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x48 = 0;
  *(undefined8 *)&this->SlatePostBufferProcessorProxies = 0;
  *(undefined8 *)&(this->SlatePostBufferProcessorProxies).field_0x8 = 0;
  *(undefined8 *)&(this->SlatePostBufferProcessorProxies).field_0x20 = 0;
  *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x28 = 0;
  *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x34 = 0;
  *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SlatePostBufferProcessorProxies).field_0x40 = 0;
  *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x48 = 0;
  return this;
}

// USlateFXSubsystem @ 145fe8820

USlateFXSubsystem * __thiscall USlateFXSubsystem::USlateFXSubsystem(USlateFXSubsystem *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  this->_padding_ = (longlong)&___7USlateFXSubsystem__6B_;
  *(undefined8 *)&this->SlatePostBufferProcessors = 0;
  *(undefined8 *)&(this->SlatePostBufferProcessors).field_0x8 = 0;
  *(undefined8 *)&(this->SlatePostBufferProcessors).field_0x20 = 0;
  *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x28 = 0;
  *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x34 = 0;
  *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SlatePostBufferProcessors).field_0x40 = 0;
  *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x48 = 0;
  *(undefined8 *)&this->SlatePostBufferProcessorProxies = 0;
  *(undefined8 *)&(this->SlatePostBufferProcessorProxies).field_0x8 = 0;
  *(undefined8 *)&(this->SlatePostBufferProcessorProxies).field_0x20 = 0;
  *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x28 = 0;
  *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x34 = 0;
  *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SlatePostBufferProcessorProxies).field_0x40 = 0;
  *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x48 = 0;
  return this;
}

// ~USlateFXSubsystem @ 145feb4c0

void __thiscall USlateFXSubsystem::~USlateFXSubsystem(USlateFXSubsystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7USlateFXSubsystem__6B_;
  *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SlatePostBufferProcessorProxies).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,TSharedPtr<FSlateRHIPostBufferProcessorProxy,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,TSharedPtr<FSlateRHIPostBufferProcessorProxy,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->SlatePostBufferProcessorProxies);
  *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SlatePostBufferProcessors).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,TObjectPtr<USlateRHIPostBufferProcessor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,TObjectPtr<USlateRHIPostBufferProcessor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->SlatePostBufferProcessors);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// BeginDestroy @ 145ff60e0

void __thiscall USlateFXSubsystem::BeginDestroy(USlateFXSubsystem *this)

{
  FlushRenderingCommands();
  UObject::BeginDestroy((UObject *)this);
  return;
}

// Deinitialize @ 145ffdfb0

void __thiscall USlateFXSubsystem::Deinitialize(USlateFXSubsystem *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < *(int *)&(this->SlatePostBufferProcessors).field_0x48;
  if (!bVar3) {
    TSet<TTuple<enum_ESlatePostRT,TObjectPtr<USlateRHIPostBufferProcessor>_>,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,TObjectPtr<USlateRHIPostBufferProcessor>,0>,FDefaultSetAllocator>
    ::UnhashElements(&this->SlatePostBufferProcessors);
  }
  puVar1 = &(this->SlatePostBufferProcessors).field_0xc;
  *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->SlatePostBufferProcessors,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x34 = 0;
  iVar2 = *(int *)&(this->SlatePostBufferProcessors).field_0x2c;
  *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SlatePostBufferProcessors).field_0x10
               ,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x48 = 1;
    TSet<TTuple<enum_ESlatePostRT,TObjectPtr<USlateRHIPostBufferProcessor>_>,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,TObjectPtr<USlateRHIPostBufferProcessor>,0>,FDefaultSetAllocator>
    ::Rehash(&this->SlatePostBufferProcessors);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FWorldDelegates::OnPreWorldInitialization,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FWorldDelegates::OnPostWorldCleanup,this);
  return;
}

// GetPostProcessor @ 14600d280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

USlateRHIPostBufferProcessor * __cdecl USlateFXSubsystem::GetPostProcessor(ESlatePostRT param_1)

{
  USlateFXSubsystem *this;
  USlateRHIPostBufferProcessor *pUVar1;
  
  if (GEngine != (UEngine *)0x0) {
    this = UEngine::GetEngineSubsystem<USlateFXSubsystem>(GEngine);
    if (this != (USlateFXSubsystem *)0x0) {
      pUVar1 = GetSlatePostProcessor(this,param_1);
      return pUVar1;
    }
  }
  return (USlateRHIPostBufferProcessor *)0x0;
}

// GetPostProcessorProxy @ 14600d2c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FSlateRHIPostBufferProcessorProxy,1> * __cdecl
USlateFXSubsystem::GetPostProcessorProxy
          (TSharedPtr<FSlateRHIPostBufferProcessorProxy,1> *__return_storage_ptr__,
          ESlatePostRT param_1)

{
  undefined4 uVar1;
  USlateFXSubsystem *pUVar2;
  ESlatePostRT *pEVar3;
  ESlatePostRT *pEVar4;
  undefined1 *puVar5;
  TSharedPtr<FSlateRHIPostBufferProcessorProxy,1> local_18;
  
  __return_storage_ptr__->Object = (FSlateRHIPostBufferProcessorProxy *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (GEngine != (UEngine *)0x0) {
    pUVar2 = UEngine::GetEngineSubsystem<USlateFXSubsystem>(GEngine);
    if (pUVar2 != (USlateFXSubsystem *)0x0) {
      if (*(int *)&(pUVar2->SlatePostBufferProcessorProxies).field_0x8 !=
          *(int *)&(pUVar2->SlatePostBufferProcessorProxies).field_0x34) {
        puVar5 = *(undefined1 **)&(pUVar2->SlatePostBufferProcessorProxies).field_0x40;
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &(pUVar2->SlatePostBufferProcessorProxies).field_0x38;
        }
        uVar1 = *(undefined4 *)
                 (puVar5 + ((ulonglong)
                            (*(int *)&(pUVar2->SlatePostBufferProcessorProxies).field_0x48 - 1) &
                           (ulonglong)param_1) * 4);
        if (uVar1 != 0xffffffff) {
          do {
            pEVar4 = (ESlatePostRT *)
                     ((longlong)(int)uVar1 * 0x20 +
                     *(longlong *)&pUVar2->SlatePostBufferProcessorProxies);
            if (*pEVar4 == param_1) {
              pEVar3 = pEVar4 + 8;
              if (pEVar4 == (ESlatePostRT *)0x0) {
                pEVar3 = (ESlatePostRT *)0x0;
              }
              if (pEVar3 != (ESlatePostRT *)0x0) {
                local_18.SharedReferenceCount.ReferenceController =
                     *(TReferenceControllerBase<1> **)(pEVar3 + 8);
                local_18.Object = *(FSlateRHIPostBufferProcessorProxy **)pEVar3;
                if (local_18.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_18.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                goto LAB_14600d36e;
              }
              break;
            }
            uVar1 = *(undefined4 *)(pEVar4 + 0x18);
          } while (uVar1 != 0xffffffff);
        }
      }
      local_18.Object = (FSlateRHIPostBufferProcessorProxy *)0x0;
      local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_14600d36e:
      if (__return_storage_ptr__ != &local_18) {
        __return_storage_ptr__->Object = local_18.Object;
        local_18.Object = (FSlateRHIPostBufferProcessorProxy *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&__return_storage_ptr__->SharedReferenceCount,&local_18.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14600d3f0

UClass * __cdecl USlateFXSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateFXSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateRHIRenderer",L"SlateFXSubsystem",
               &Z_Registration_Info_UClass_USlateFXSubsystem.InnerSingleton,
               StaticRegisterNativesUSlateFXSubsystem,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USlateFXSubsystem>,
               InternalVTableHelperCtorCaller<USlateFXSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateFXSubsystem.InnerSingleton;
}

// GetSlatePostProcessor @ 14600edb0

USlateRHIPostBufferProcessor * __thiscall
USlateFXSubsystem::GetSlatePostProcessor(USlateFXSubsystem *this,ESlatePostRT param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->SlatePostBufferProcessors).field_0x8 !=
      *(int *)&(this->SlatePostBufferProcessors).field_0x34) {
    puVar4 = *(undefined1 **)&(this->SlatePostBufferProcessors).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->SlatePostBufferProcessors).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((ulonglong)
                               (*(int *)&(this->SlatePostBufferProcessors).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->SlatePostBufferProcessors + (longlong)iVar2 * 0x18;
        if (*(ESlatePostRT *)
             (*(longlong *)&this->SlatePostBufferProcessors + (longlong)iVar2 * 0x18) == param_1) {
          puVar3 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar3 = (undefined8 *)0x0;
          }
          if (puVar3 == (undefined8 *)0x0) {
            return (USlateRHIPostBufferProcessor *)0x0;
          }
          return (USlateRHIPostBufferProcessor *)*puVar3;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return (USlateRHIPostBufferProcessor *)0x0;
}

// GetSlatePostProcessorProxy @ 14600ee30

TSharedPtr<FSlateRHIPostBufferProcessorProxy,1> * __thiscall
USlateFXSubsystem::GetSlatePostProcessorProxy
          (USlateFXSubsystem *this,
          TSharedPtr<FSlateRHIPostBufferProcessorProxy,1> *__return_storage_ptr__,
          ESlatePostRT param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined4 uVar2;
  ESlatePostRT *pEVar3;
  ESlatePostRT *pEVar4;
  undefined1 *puVar5;
  
  if (*(int *)&(this->SlatePostBufferProcessorProxies).field_0x8 !=
      *(int *)&(this->SlatePostBufferProcessorProxies).field_0x34) {
    puVar5 = *(undefined1 **)&(this->SlatePostBufferProcessorProxies).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->SlatePostBufferProcessorProxies).field_0x38;
    }
    uVar2 = *(undefined4 *)
             (puVar5 + ((ulonglong)(*(int *)&(this->SlatePostBufferProcessorProxies).field_0x48 - 1)
                       & (ulonglong)param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pEVar3 = (ESlatePostRT *)
                 ((longlong)(int)uVar2 * 0x20 + *(longlong *)&this->SlatePostBufferProcessorProxies)
        ;
        if (*pEVar3 == param_1) {
          pEVar4 = pEVar3 + 8;
          if (pEVar3 == (ESlatePostRT *)0x0) {
            pEVar4 = (ESlatePostRT *)0x0;
          }
          if (pEVar4 != (ESlatePostRT *)0x0) {
            __return_storage_ptr__->Object = *(FSlateRHIPostBufferProcessorProxy **)pEVar4;
            pTVar1 = *(TReferenceControllerBase<1> **)(pEVar4 + 8);
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
            if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
              return __return_storage_ptr__;
            }
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
            return __return_storage_ptr__;
          }
          break;
        }
        uVar2 = *(undefined4 *)(pEVar3 + 0x18);
      } while (uVar2 != 0xffffffff);
    }
  }
  __return_storage_ptr__->Object = (FSlateRHIPostBufferProcessorProxy *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// Initialize @ 14601a510

void __thiscall
USlateFXSubsystem::Initialize(USlateFXSubsystem *this,FSubsystemCollectionBase *param_1)

{
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
  ::AddUObject<USlateFXSubsystem>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
              *)&FWorldDelegates::OnPreWorldInitialization,(USlateFXSubsystem *)&stack0x00000018,
             (pmf_5cad1ee0)this);
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>::
  AddUObject<USlateFXSubsystem>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
              *)&FWorldDelegates::OnPostWorldCleanup,(USlateFXSubsystem *)&stack0x00000018,
             (pmf_aef4e03a)this);
  return;
}

// OnPostWorldCleanup @ 14601cee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
USlateFXSubsystem::OnPostWorldCleanup
          (USlateFXSubsystem *this,UWorld *param_1,bool param_2,bool param_3)

{
  undefined1 *puVar1;
  TMap<ESlatePostRT,TSharedPtr<FSlateRHIPostBufferProcessorProxy,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ESlatePostRT,TSharedPtr<FSlateRHIPostBufferProcessorProxy,1>,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  if ((param_1 == (UWorld *)0x0) || ((param_1->WorldType).Value != '\x04')) {
    bVar3 = 1 < *(int *)&(this->SlatePostBufferProcessors).field_0x48;
    if (!bVar3) {
      TSet<TTuple<enum_ESlatePostRT,TObjectPtr<USlateRHIPostBufferProcessor>_>,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,TObjectPtr<USlateRHIPostBufferProcessor>,0>,FDefaultSetAllocator>
      ::UnhashElements(&this->SlatePostBufferProcessors);
    }
    puVar1 = &(this->SlatePostBufferProcessors).field_0xc;
    *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&this->SlatePostBufferProcessors,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x34 = 0;
    iVar2 = *(int *)&(this->SlatePostBufferProcessors).field_0x2c;
    *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->SlatePostBufferProcessors).field_0x10,0);
    }
    if (bVar3) {
      *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x48 = 1;
      TSet<TTuple<enum_ESlatePostRT,TObjectPtr<USlateRHIPostBufferProcessor>_>,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,TObjectPtr<USlateRHIPostBufferProcessor>,0>,FDefaultSetAllocator>
      ::Rehash(&this->SlatePostBufferProcessors);
    }
    this_00 = &this->SlatePostBufferProcessorProxies;
    bVar3 = 1 < *(int *)&(this->SlatePostBufferProcessorProxies).field_0x48;
    if (!bVar3) {
      TSet<TTuple<enum_ESlatePostRT,TSharedPtr<FSlateRHIPostBufferProcessorProxy,1>_>,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,TSharedPtr<FSlateRHIPostBufferProcessorProxy,1>,0>,FDefaultSetAllocator>
      ::UnhashElements(this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,TSharedPtr<FSlateRHIPostBufferProcessorProxy,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(this_00,0,*(int *)&(this->SlatePostBufferProcessorProxies).field_0x8);
    puVar1 = &(this->SlatePostBufferProcessorProxies).field_0xc;
    *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x34 = 0;
    *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x30 = 0xffffffff;
    iVar2 = *(int *)&(this->SlatePostBufferProcessorProxies).field_0x2c;
    *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->SlatePostBufferProcessorProxies).field_0x10,0);
    }
    if (bVar3) {
      *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x48 = 1;
      TSet<TTuple<enum_ESlatePostRT,TSharedPtr<FSlateRHIPostBufferProcessorProxy,1>_>,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,TSharedPtr<FSlateRHIPostBufferProcessorProxy,1>,0>,FDefaultSetAllocator>
      ::Rehash(this_00);
    }
  }
  return;
}

// OnPreWorldInitialization @ 14601d100

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

void __thiscall
USlateFXSubsystem::OnPreWorldInitialization
          (USlateFXSubsystem *this,UWorld *param_1,FWorldInitializationValues *param_2)

{
  undefined1 *puVar1;
  TMap<ESlatePostRT,TSharedPtr<FSlateRHIPostBufferProcessorProxy,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ESlatePostRT,TSharedPtr<FSlateRHIPostBufferProcessorProxy,1>,0>_>
  *this_00;
  int iVar2;
  UObject *pUVar3;
  code *pcVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  UClass *pUVar8;
  FSlatePostSettings *pFVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  longlong *plVar12;
  ESlatePostRT **ppEVar13;
  undefined1 auStackY_138 [32];
  TObjectPtr<USlateRHIPostBufferProcessor>_u_0 local_108;
  FName local_100;
  UObject *local_f8;
  longlong *local_f0;
  TReferenceControllerBase<1> *local_e8;
  undefined1 local_e0 [8];
  TObjectPtr<USlateRHIPostBufferProcessor>_u_0 *local_d8;
  UObject **local_d0;
  TObjectPtr<USlateRHIPostBufferProcessor>_u_0 *local_c8;
  longlong **local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if ((param_1 == (UWorld *)0x0) || ((param_1->WorldType).Value != '\x04')) {
    bVar7 = 1 < *(int *)&(this->SlatePostBufferProcessors).field_0x48;
    if (!bVar7) {
      TSet<TTuple<enum_ESlatePostRT,TObjectPtr<USlateRHIPostBufferProcessor>_>,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,TObjectPtr<USlateRHIPostBufferProcessor>,0>,FDefaultSetAllocator>
      ::UnhashElements(&this->SlatePostBufferProcessors);
    }
    puVar1 = &(this->SlatePostBufferProcessors).field_0xc;
    *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&this->SlatePostBufferProcessors,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x34 = 0;
    iVar2 = *(int *)&(this->SlatePostBufferProcessors).field_0x2c;
    *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->SlatePostBufferProcessors).field_0x10,0);
    }
    if (bVar7) {
      *(undefined4 *)&(this->SlatePostBufferProcessors).field_0x48 = 1;
      TSet<TTuple<enum_ESlatePostRT,TObjectPtr<USlateRHIPostBufferProcessor>_>,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,TObjectPtr<USlateRHIPostBufferProcessor>,0>,FDefaultSetAllocator>
      ::Rehash(&this->SlatePostBufferProcessors);
    }
    this_00 = &this->SlatePostBufferProcessorProxies;
    bVar7 = 1 < *(int *)&(this->SlatePostBufferProcessorProxies).field_0x48;
    if (!bVar7) {
      TSet<TTuple<enum_ESlatePostRT,TSharedPtr<FSlateRHIPostBufferProcessorProxy,1>_>,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,TSharedPtr<FSlateRHIPostBufferProcessorProxy,1>,0>,FDefaultSetAllocator>
      ::UnhashElements(this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,TSharedPtr<FSlateRHIPostBufferProcessorProxy,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(this_00,0,*(int *)&(this->SlatePostBufferProcessorProxies).field_0x8);
    puVar1 = &(this->SlatePostBufferProcessorProxies).field_0xc;
    *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x34 = 0;
    iVar2 = *(int *)&(this->SlatePostBufferProcessorProxies).field_0x2c;
    *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->SlatePostBufferProcessorProxies).field_0x10,0);
    }
    if (bVar7) {
      *(undefined4 *)&(this->SlatePostBufferProcessorProxies).field_0x48 = 1;
      TSet<TTuple<enum_ESlatePostRT,TSharedPtr<FSlateRHIPostBufferProcessorProxy,1>_>,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,TSharedPtr<FSlateRHIPostBufferProcessorProxy,1>,0>,FDefaultSetAllocator>
      ::Rehash(this_00);
    }
    pUVar8 = USlateRHIRendererSettings::StaticClass();
    if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr != (UObject *)0x0) {
      pUVar8 = USlateRHIRendererSettings::StaticClass();
      if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar8);
      }
      pUVar3 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
      if (pUVar3 != (UObject *)0x0) {
        ppEVar13 = &`public:_static_enum_ESlatePostRT_const*___ptr64___cdecl_NEnumRangePrivate::TEnumRangeTraits<ESlatePostRT>::GetPointer<void>(bool)'
                    ::__l2::Values;
        do {
          local_108._0_1_ = *(undefined1 *)ppEVar13;
          pFVar9 = TMapBase<enum_ESlatePostRT,FSlatePostSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,FSlatePostSettings,0>_>
                   ::FindChecked(&pUVar3[1].field_0x10,local_108._0_1_);
          if (((pFVar9->bEnabled != 0) &&
              (pUVar8 = (pFVar9->PostProcessorClass).Class.field0_0x0.DebugPtr,
              pUVar8 != (UClass *)0x0)) &&
             (pUVar10 = USlateRHIPostBufferProcessor::StaticClass(), pUVar10 != (UClass *)0x0)) {
            iVar2 = (int)pUVar10->_padding_;
            if (((int)pUVar8->_padding_ < iVar2) ||
               ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar2 * 8) !=
                &pUVar10->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if ((bVar7) &&
               (pUVar8 = (pFVar9->PostProcessorClass).Class.field0_0x0.DebugPtr,
               pUVar8 != (UClass *)0x0)) {
              local_100.ComparisonIndex.Value = 0;
              local_100.Number = 0;
              pUVar10 = USlateRHIPostBufferProcessor::StaticClass();
              FVar5 = local_100;
              if (pUVar10 == (UClass *)0x0) {
LAB_14601d376:
                pUVar8 = (UClass *)0x0;
              }
              else {
                iVar2 = (int)pUVar10->_padding_;
                if (((int)pUVar8->_padding_ < iVar2) ||
                   ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar2 * 8) !=
                    &pUVar10->_padding_)) {
                  bVar7 = false;
                }
                else {
                  bVar7 = true;
                }
                if (!bVar7) goto LAB_14601d376;
                pUVar8 = (pFVar9->PostProcessorClass).Class.field0_0x0.DebugPtr;
              }
              if (local_100 == (FName)0x0) {
                FObjectInitializer::AssertIfInConstructor
                          ((UObject *)this,
                           L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                          );
              }
              pUVar10 = USlateRHIPostBufferProcessor::StaticClass();
              CheckIsClassChildOf_Internal(pUVar10,pUVar8);
              FStaticConstructObjectParameters::FStaticConstructObjectParameters
                        ((FStaticConstructObjectParameters *)local_b8,pUVar8);
              FVar6 = local_100;
              local_b8._24_4_ = RF_NoFlags;
              local_b8._40_8_ = (UObject *)0x0;
              local_b8[0x20] = false;
              local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
              local_b8._56_8_ = (UPackage *)0x0;
              local_100.ComparisonIndex = FVar5.ComparisonIndex.Value;
              local_100.Number = FVar5.Number;
              local_b8._16_4_ = local_100.ComparisonIndex.Value;
              local_b8._20_4_ = local_100.Number;
              local_100 = FVar6;
              local_b8._8_8_ = this;
              pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8)
              ;
              if (local_b8._64_8_ != 0) {
                plVar12 = (longlong *)(local_b8 + 0x50);
                if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
                  plVar12 = (longlong *)local_b8._104_8_;
                }
                (**(code **)(*plVar12 + 0x10))();
              }
              local_f8 = pUVar11;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                if (pUVar11 == (UObject *)0x0) goto LAB_14601d4c7;
                UE::GC::MarkAsReachable(pUVar11);
              }
              if (local_f8 != (UObject *)0x0) {
                (**(code **)(*(longlong *)local_f8 + 0x2b8))(local_f8,&local_f0);
                local_d8 = &local_108;
                local_d0 = &local_f8;
                TSet<TTuple<enum_ESlatePostRT,TObjectPtr<USlateRHIPostBufferProcessor>_>,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,TObjectPtr<USlateRHIPostBufferProcessor>,0>,FDefaultSetAllocator>
                ::
                Emplace<TPairInitializer<enum_ESlatePostRT_const_&,TObjectPtr<USlateRHIPostBufferProcessor>_const_&>_>
                          (&this->SlatePostBufferProcessors,
                           (TPairInitializer<ESlatePostRT_const_&,TObjectPtr<USlateRHIPostBufferProcessor>_const_&>
                            *)local_e0,(bool *)&local_d8);
                local_c8 = &local_108;
                local_c0 = &local_f0;
                TSet<TTuple<enum_ESlatePostRT,TSharedPtr<FSlateRHIPostBufferProcessorProxy,1>_>,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,TSharedPtr<FSlateRHIPostBufferProcessorProxy,1>,0>,FDefaultSetAllocator>
                ::
                Emplace<TPairInitializer<enum_ESlatePostRT_const_&,TSharedPtr<FSlateRHIPostBufferProcessorProxy,1>_const_&>_>
                          (this_00,(TPairInitializer<ESlatePostRT_const_&,TSharedPtr<FSlateRHIPostBufferProcessorProxy,1>_const_&>
                                    *)(local_e0 + 4),(bool *)&local_c8);
                if ((local_f0 == (longlong *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                (**(code **)(*local_f0 + 0x18))();
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_e8);
              }
            }
          }
LAB_14601d4c7:
          ppEVar13 = (ESlatePostRT **)((longlong)ppEVar13 + 1);
        } while (ppEVar13 !=
                 (ESlatePostRT **)
                 ((longlong)
                  &`public:_static_enum_ESlatePostRT_const*___ptr64___cdecl_NEnumRangePrivate::TEnumRangeTraits<ESlatePostRT>::GetPointer<void>(bool)'
                   ::__l2::Values + 5));
      }
    }
  }
  return;
}

// ShouldCreateSubsystem @ 146026390

bool __thiscall USlateFXSubsystem::ShouldCreateSubsystem(USlateFXSubsystem *this,UObject *param_1)

{
  bool bVar1;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  GetDerivedClasses((UClass *)this->_padding_,&local_18,false);
  bVar1 = local_18.ArrayNum == 0;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// StaticRegisterNativesUSlateFXSubsystem @ 14602c1d0

void __cdecl USlateFXSubsystem::StaticRegisterNativesUSlateFXSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USlateFXSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSlatePostProcessor @ 14602f3d0

void __cdecl
USlateFXSubsystem::execGetSlatePostProcessor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USlateRHIPostBufferProcessor *pUVar2;
  ESlatePostRT local_res10 [8];
  
  local_res10[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetSlatePostProcessor((USlateFXSubsystem *)param_1,local_res10[0]);
  *(USlateRHIPostBufferProcessor **)param_3 = pUVar2;
  return;
}

