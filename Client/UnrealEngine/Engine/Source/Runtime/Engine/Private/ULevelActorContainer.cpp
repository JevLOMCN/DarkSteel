// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147e41f10

UClass * __cdecl ULevelActorContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelActorContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelActorContainer",
               &Z_Registration_Info_UClass_ULevelActorContainer.InnerSingleton,
               StaticRegisterNativesULevelActorContainer,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULevelActorContainer>,
               InternalVTableHelperCtorCaller<ULevelActorContainer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelActorContainer.InnerSingleton;
}

// ULevelActorContainer @ 147e55800

ULevelActorContainer * __thiscall
ULevelActorContainer::ULevelActorContainer(ULevelActorContainer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULevelActorContainer__6B_;
  (this->Actors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Actors).ArrayNum = 0;
  (this->Actors).ArrayMax = 0;
  return this;
}

// ULevelActorContainer @ 147e55840

ULevelActorContainer * __thiscall
ULevelActorContainer::ULevelActorContainer(ULevelActorContainer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULevelActorContainer__6B_;
  (this->Actors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Actors).ArrayNum = 0;
  (this->Actors).ArrayMax = 0;
  return this;
}

// ~ULevelActorContainer @ 147e57a40

void __thiscall ULevelActorContainer::~ULevelActorContainer(ULevelActorContainer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULevelActorContainer__6B_;
  pFVar1 = (this->Actors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CreateCluster @ 147e61e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelActorContainer::CreateCluster(ULevelActorContainer *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FUObjectItem *pFVar10;
  FUObjectCluster *pFVar11;
  FUObjectItem *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_238 [32];
  undefined1 local_1c0;
  FIdentityFunctor local_1bf;
  FIdentityFunctor local_1be;
  FIdentityFunctor local_1bd [5];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_1b8;
  TFastReferenceCollector<FActorClusterReferenceProcessor,UE::GC::TDefaultCollector<FActorClusterReferenceProcessor>_>
  local_1a8;
  FScriptContainerElement *local_1a0;
  int iStack_198;
  undefined4 uStack_194;
  FActorClusterReferenceProcessor local_190;
  FString local_160 [2];
  FWorkerContext local_140;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_238;
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x443,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iVar2 < GUObjectArray.ObjObjects.NumElements) {
    pFVar10 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar2);
  }
  else {
    pFVar10 = (FUObjectItem *)0x0;
  }
  if ((pFVar10->ClusterRootIndex == 0) &&
     (((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0)) {
    if ((((uint)this->_padding_ >> 10 & 1) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!HasAnyFlags(RF_NeedLoad)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                           ,0xc5,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = FUObjectClusterContainer::AllocateCluster
                      (&GUObjectClusters,*(int *)((longlong)&this->_padding_ + 4));
    pFVar11 = FUObjectClusterContainer::operator[](&GUObjectClusters,uVar7);
    if ((pFVar11->Objects).ArrayMax < 0x40) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x40,&(pFVar11->Objects).AllocatorInstance,(pFVar11->Objects).ArrayNum,
                 &(pFVar11->Objects).ArrayMax);
    }
    local_190.ParentLevel = CastChecked<ULevel,UObject>((UObject *)this->_padding_);
    local_190.ClusterRootIndex = iVar2;
    local_190.Cluster = pFVar11;
    local_190.ParentLevelPackage =
         UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)local_190.ParentLevel);
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
    *(ULevelActorContainer **)local_1b8.AllocatorInstance.Data = this;
    UE::GC::FWorkerContext::FWorkerContext(&local_140);
    UE::GC::PadObjectArray(&local_1b8);
    iStack_198 = local_1b8.ArrayNum;
    FVar5.Data = local_1b8.AllocatorInstance.Data;
    local_1a0 = local_1b8.AllocatorInstance.Data;
    if ((local_1b8.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((iStack_198 != 0) &&
        (bVar6 = UObjectBase::IsValidLowLevel
                           (*(UObjectBase **)(FVar5.Data + (ulonglong)(iStack_198 + 0xf) * 8)),
        !bVar6)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PaddedObjects.IsEmpty() || PaddedObjects.GetData()[PaddedObjects.Num() + ObjectLookahead - 1]->IsValidLowLevel()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                           ,0x181,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_140.InitialObjects._12_4_ = uStack_194;
    local_140.InitialObjects.ArrayNum = iStack_198;
    local_1a8.Processor = &local_190;
    local_140.InitialObjects.DataPtr = (UObject **)local_1a0;
    UE::GC::
    TFastReferenceCollector<FActorClusterReferenceProcessor,UE::GC::TDefaultCollector<FActorClusterReferenceProcessor>_>
    ::ProcessObjectArray(&local_1a8,&local_140);
    if ((pFVar10->ClusterRootIndex != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootItem->GetOwnerIndex() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                           ,0xd3,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar10->ClusterRootIndex = ~uVar7;
    do {
      lVar3 = (pFVar10->field0_0x0).FlagsAndRefCount;
      uVar8 = (uint)((ulonglong)lVar3 >> 0x20);
      if ((uVar8 >> 0x18 & 1) != 0) break;
      if (((ulonglong)pFVar10 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar6 = lVar3 == (pFVar10->field0_0x0).FlagsAndRefCount;
      if (bVar6) {
        (pFVar10->field0_0x0).FlagsAndRefCount =
             (longlong)(int)uVar8 << 0x20 | (longlong)(int)lVar3 | 0x100000000000000;
      }
      UNLOCK();
    } while (!bVar6);
    iVar9 = FUObjectClusterContainer::GetMinClusterSize(&GUObjectClusters);
    iVar2 = (pFVar11->Objects).ArrayNum;
    pFVar13 = (pFVar11->Objects).AllocatorInstance.Data;
    if (iVar2 < iVar9) {
      pFVar1 = pFVar13 + (longlong)iVar2 * 4;
      while( true ) {
        if ((pFVar11->Objects).ArrayNum != iVar2) {
          local_1c0 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_1c0)
          ;
        }
        if (pFVar13 == pFVar1) break;
        pFVar12 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,*(int *)pFVar13);
        pFVar13 = pFVar13 + 4;
        pFVar12->ClusterRootIndex = 0;
      }
      FUObjectClusterContainer::FreeCluster(&GUObjectClusters,uVar7);
      if ((pFVar10->ClusterRootIndex != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("RootItem->GetOwnerIndex() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                             ,0xf5,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x38) & 1) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RootItem->HasAnyFlags(EInternalObjectFlags::ClusterRoot)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelActorContainer.cpp"
                             ,0xf6,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                ((int *)pFVar13,iVar2,local_1bf,(TLess<void> *)&local_1bf);
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                ((int *)(pFVar11->ReferencedClusters).AllocatorInstance.Data,
                 (pFVar11->ReferencedClusters).ArrayNum,local_1be,(TLess<void> *)&local_1be);
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                ((int *)(pFVar11->MutableObjects).AllocatorInstance.Data,
                 (pFVar11->MutableObjects).ArrayNum,local_1bd[0],(TLess<void> *)local_1bd);
      if (5 < (byte)LogLevelActorContainer._0_1_) {
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)this->_padding_,local_160,(UObject *)0x0);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLevelActorContainer)
        ;
        if (local_160[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160[0].Data.AllocatorInstance.Data);
        }
      }
    }
    UE::GC::FWorkerContext::~FWorkerContext(&local_140);
    if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
  }
  return;
}

// GetPrivateStaticClass @ 147e69b20

UClass * __cdecl ULevelActorContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelActorContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelActorContainer",
               &Z_Registration_Info_UClass_ULevelActorContainer.InnerSingleton,
               StaticRegisterNativesULevelActorContainer,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULevelActorContainer>,
               InternalVTableHelperCtorCaller<ULevelActorContainer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelActorContainer.InnerSingleton;
}

// OnClusterMarkedAsPendingKill @ 147e71280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelActorContainer::OnClusterMarkedAsPendingKill(ULevelActorContainer *this)

{
  TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ULevel *pUVar6;
  TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *pTVar7;
  
  pUVar6 = CastChecked<ULevel,UObject>((UObject *)this->_padding_);
  pTVar7 = &this->Actors;
  pTVar1 = &pUVar6->ActorsForGC;
  if (pTVar1 == pTVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = (this->Actors).ArrayNum;
  if (iVar2 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar2,&pTVar1->AllocatorInstance,&(pUVar6->ActorsForGC).ArrayNum,
                       &(pUVar6->ActorsForGC).ArrayMax);
    ConstructItems<TObjectPtr<AActor>,TObjectPtr<AActor>,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8,
               (TObjectPtr<AActor> *)(pTVar7->AllocatorInstance).Data,iVar2);
  }
  (this->Actors).ArrayNum = 0;
  if ((this->Actors).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar7->AllocatorInstance,0,&(this->Actors).ArrayMax);
  }
  return;
}

// StaticRegisterNativesULevelActorContainer @ 147e822a0

void __cdecl ULevelActorContainer::StaticRegisterNativesULevelActorContainer(void)

{
  return;
}

