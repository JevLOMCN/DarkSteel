// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 11

// StaticClass @ 14907dd00

UClass * __cdecl UNiagaraDataChannel_Islands::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannel_Islands.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannel_Islands",
               &Z_Registration_Info_UClass_UNiagaraDataChannel_Islands.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannel_Islands,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataChannel_Islands>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannel_Islands>,local_res8,
               UNiagaraDataChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannel_Islands.InnerSingleton;
}

// UNiagaraDataChannel_Islands @ 1490b2dc0

UNiagaraDataChannel_Islands * __thiscall
UNiagaraDataChannel_Islands::UNiagaraDataChannel_Islands
          (UNiagaraDataChannel_Islands *this,FVTableHelper *param_1)

{
  FNDCIslandDebugDrawSettings *pFVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraDataChannel__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 3;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)&this->_padding_);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->_padding_);
  this->Mode = AlignedStatic;
  this->_padding_ = (longlong)&___7UNiagaraDataChannel_Islands__6B_;
  pFVar1->bEnabled = 0;
  pFVar1->bShowIslandBounds = 0;
  (this->InitialExtents).field0_0x0._s_0.X = 1000.0;
  (this->InitialExtents).field0_0x0._s_0.Y = 1000.0;
  (this->InitialExtents).field0_0x0._s_0.Z = 1000.0;
  (this->MaxExtents).field0_0x0._s_0.X = 5000.0;
  (this->MaxExtents).field0_0x0._s_0.Y = 5000.0;
  (this->MaxExtents).field0_0x0._s_0.Z = 5000.0;
  (this->PerElementExtents).field0_0x0._s_0.X = 250.0;
  (this->PerElementExtents).field0_0x0._s_0.Y = 250.0;
  (this->PerElementExtents).field0_0x0._s_0.Z = 250.0;
  (this->Systems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Systems).ArrayNum = 0;
  (this->Systems).ArrayMax = 0;
  this->IslandPoolSize = 4;
  (this->SystemsInternal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SystemsInternal).ArrayNum = 0;
  (this->SystemsInternal).ArrayMax = 0;
  (this->AsyncLoadHandle).Object = (FStreamableHandle *)0x0;
  (this->AsyncLoadHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UNiagaraDataChannel_Islands @ 1490b2ed0

UNiagaraDataChannel_Islands * __thiscall
UNiagaraDataChannel_Islands::UNiagaraDataChannel_Islands
          (UNiagaraDataChannel_Islands *this,FObjectInitializer *param_1)

{
  FNDCIslandDebugDrawSettings *pFVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraDataChannel__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 3;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)&this->_padding_);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->_padding_);
  this->Mode = AlignedStatic;
  this->_padding_ = (longlong)&___7UNiagaraDataChannel_Islands__6B_;
  pFVar1->bEnabled = 0;
  pFVar1->bShowIslandBounds = 0;
  (this->InitialExtents).field0_0x0._s_0.X = 1000.0;
  (this->InitialExtents).field0_0x0._s_0.Y = 1000.0;
  (this->InitialExtents).field0_0x0._s_0.Z = 1000.0;
  (this->MaxExtents).field0_0x0._s_0.X = 5000.0;
  (this->MaxExtents).field0_0x0._s_0.Y = 5000.0;
  (this->MaxExtents).field0_0x0._s_0.Z = 5000.0;
  (this->PerElementExtents).field0_0x0._s_0.X = 250.0;
  (this->PerElementExtents).field0_0x0._s_0.Y = 250.0;
  (this->PerElementExtents).field0_0x0._s_0.Z = 250.0;
  (this->Systems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Systems).ArrayNum = 0;
  (this->Systems).ArrayMax = 0;
  this->IslandPoolSize = 4;
  (this->SystemsInternal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SystemsInternal).ArrayNum = 0;
  (this->SystemsInternal).ArrayMax = 0;
  (this->AsyncLoadHandle).Object = (FStreamableHandle *)0x0;
  (this->AsyncLoadHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UNiagaraDataChannel_Islands @ 1490b8920

void __thiscall
UNiagaraDataChannel_Islands::~UNiagaraDataChannel_Islands(UNiagaraDataChannel_Islands *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataChannel_Islands__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncLoadHandle).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->SystemsInternal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UNiagaraSystem>,int>
            ((TSoftObjectPtr<UNiagaraSystem> *)(this->Systems).AllocatorInstance.Data,
             (this->Systems).ArrayNum);
  pFVar1 = (this->Systems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UNiagaraDataChannel__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)&this->_padding_);
  FRenderCommandFence::~FRenderCommandFence((FRenderCommandFence *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AsyncLoadSystems @ 1490cc850

void __thiscall UNiagaraDataChannel_Islands::AsyncLoadSystems(UNiagaraDataChannel_Islands *this)

{
  TPersistentObjectPtr<FSoftObjectPath> *pTVar1;
  int iVar2;
  code *pcVar3;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UAssetManager *pUVar8;
  FString *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  TSharedPtr<FStreamableHandle,1> *pTVar12;
  ForAnyElementType this_00;
  TPersistentObjectPtr<FSoftObjectPath> *this_01;
  FSoftObjectPath *pFVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UNiagaraDataChannel_Islands *local_res20;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  undefined1 local_b0 [24];
  FDestructionSentinel local_98;
  FDelegateAllocation *local_80;
  TSharedPtr<FStreamableHandle,1> local_78;
  source_location local_68;
  FString local_48;
  
  if (!INiagaraModule::bDataChannelsEnabled) {
    return;
  }
  iVar2 = (this->Systems).ArrayNum;
  this_01 = (TPersistentObjectPtr<FSoftObjectPath> *)(this->Systems).AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = this_01 + iVar2;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  pTVar4 = this_01;
  while( true ) {
    pFVar13 = &pTVar4->ObjectID;
    if ((this->Systems).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSoftObjectPtr<UNiagaraSystem>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (this_01 == pTVar1) break;
    pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
    if ((pUVar7 == (UObject *)0x0) && ((pFVar13->AssetPath).PackageName != (FName)0x0)) {
      if ((local_d8.AllocatorInstance.Data <= pFVar13) &&
         ((pFVar13 < local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayMax * 0x20 &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = local_d8.ArrayNum;
      if (local_d8.ArrayNum == local_d8.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
      }
      local_d8.ArrayNum = iVar6 + 1;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(local_d8.AllocatorInstance.Data + (longlong)iVar6 * 0x20),
                 pFVar13);
    }
    this_01 = this_01 + 1;
    pTVar4 = (TPersistentObjectPtr<FSoftObjectPath> *)(pFVar13 + 1);
  }
  if (0 < local_d8.ArrayNum) {
    if ((NDCIslands_Local::AllowAsyncLoad != 0) && (bVar5 = UAssetManager::IsInitialized(), bVar5))
    {
      pUVar8 = UAssetManager::Get();
      local_b0._0_4_ = 0x44;
      local_b0._4_4_ = 0x3d;
      local_b0._8_8_ =
           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannel_Islands.cpp"
      ;
      local_b0._16_8_ = "void __cdecl UNiagaraDataChannel_Islands::AsyncLoadSystems(void) const";
      pFVar9 = ::FString::FString(&local_48,L"NiagaraDataChannelIsland_HandlerSystems");
      local_c8 = (undefined1  [8])0x0;
      local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_c0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
                 (FWriteAccessScope *)&local_98);
      local_80 = &local_c0;
      puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_c0);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &
                   ___7__TBaseUObjectMethodDelegateInstance__00__CBVUNiagaraDataChannel_Islands____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UNiagaraDataChannel_Islands *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar10[3] = 0;
        local_res20 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UNiagaraDataChannel_Islands *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res20);
        puVar10[4] = PostLoadSystems;
      }
      if (local_98.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
      }
      local_68._Column = local_b0._4_4_;
      local_68._Line = local_b0._0_4_;
      local_68._File = (char *)local_b0._8_8_;
      local_68._Function = (char *)local_b0._16_8_;
      pTVar12 = FStreamableManager::
                RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                          (&pUVar8->StreamableManager,&local_78,&local_d8,
                           (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_c8,100,
                           false,false,pFVar9,(FSourceLocation *)&local_68);
      if (&this->AsyncLoadHandle != pTVar12) {
        (this->AsyncLoadHandle).Object = pTVar12->Object;
        pTVar12->Object = (FStreamableHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AsyncLoadHandle).SharedReferenceCount,&pTVar12->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
                 (FWriteAccessScope *)local_b0);
      if ((local_c0.DelegateSize != 0) &&
         (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_c0,0,0,0x10);
        local_c0.DelegateSize = 0;
      }
      if (local_b0[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_b0._8_8_,(FDestructionSentinel *)local_b0);
      }
      if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_c0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_c8);
      goto LAB_1490ccbec;
    }
    iVar2 = local_d8.ArrayNum;
    pFVar13 = (FSoftObjectPath *)
              (local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayNum * 0x20);
    this_00.Data = local_d8.AllocatorInstance.Data;
    while( true ) {
      if (local_d8.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if ((FSoftObjectPath *)this_00.Data == pFVar13) break;
      FSoftObjectPath::TryLoad((FSoftObjectPath *)this_00.Data,(FUObjectSerializeContext *)0x0);
      this_00.Data = this_00.Data + 0x20;
    }
  }
  PostLoadSystems(this);
LAB_1490ccbec:
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if ((FSoftObjectPath *)local_d8.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  return;
}

// CreateHandler @ 1490e78e0

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNiagaraDataChannelHandler * __thiscall
UNiagaraDataChannel_Islands::CreateHandler(UNiagaraDataChannel_Islands *this,UWorld *param_1)

{
  UClass *pUVar1;
  UNiagaraDataChannelHandler *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UNiagaraDataChannelHandler_Islands::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNiagaraDataChannelHandler *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  (**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2,this);
  return pUVar2;
}

// GetPrivateStaticClass @ 1491088e0

UClass * __cdecl UNiagaraDataChannel_Islands::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannel_Islands.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannel_Islands",
               &Z_Registration_Info_UClass_UNiagaraDataChannel_Islands.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannel_Islands,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataChannel_Islands>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannel_Islands>,local_res8,
               UNiagaraDataChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannel_Islands.InnerSingleton;
}

// GetSystems @ 14910b180

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArrayView<TObjectPtr<UNiagaraSystem>_const_,int> * __thiscall
UNiagaraDataChannel_Islands::GetSystems
          (UNiagaraDataChannel_Islands *this,
          TArrayView<TObjectPtr<UNiagaraSystem>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TObjectPtr<UNiagaraSystem>_const_,int> *pTVar4;
  FStreamableHandle *pFVar5;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannel_Islands.cpp"
                       ,0x29,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<TObjectPtr<UNiagaraSystem>_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (NDCIslands_Local::BlockAsyncLoadOnUse != 0) {
    pFVar5 = (this->AsyncLoadHandle).Object;
    if (((pFVar5 != (FStreamableHandle *)0x0) && (pFVar5->bCanceled == false)) &&
       (pFVar5->bReleased == false)) {
      pFVar5 = TSharedPtr<FStreamableHandle,1>::operator->(&this->AsyncLoadHandle);
      FStreamableHandle::WaitUntilComplete(pFVar5,0.0,true);
      PostLoadSystems(this);
    }
  }
  iVar1 = (this->SystemsInternal).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TObjectPtr<UNiagaraSystem> *)(this->SystemsInternal).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<TObjectPtr<UNiagaraSystem>_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// PostLoad @ 149120b80

void __thiscall UNiagaraDataChannel_Islands::PostLoad(UNiagaraDataChannel_Islands *this)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_18;
  
  UObject::PostLoad((UObject *)this);
  UNiagaraDataChannel::GetLayoutInfo((UNiagaraDataChannel *)this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  puVar1 = (undefined8 *)(**(code **)(this->_padding_ + 0x2b0))(this,local_res8);
  FInstancedStruct::InitializeAs
            ((FInstancedStruct *)&this->_padding_,(UScriptStruct *)*puVar1,(uchar *)0x0);
  LOCK();
  INiagaraModule::bDataChannelRefreshRequested = (atomic<bool>)0x1;
  UNLOCK();
  AsyncLoadSystems(this);
  return;
}

// PostLoadSystems @ 149120e90

void __thiscall UNiagaraDataChannel_Islands::PostLoadSystems(UNiagaraDataChannel_Islands *this)

{
  int *piVar1;
  TArray<TObjectPtr<UNiagaraSystem>,TSizedDefaultAllocator<32>_> *pTVar2;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  undefined1 local_res8 [8];
  UObject *local_48;
  undefined8 local_40;
  FSharedReferencer<1> aFStack_38 [2];
  
  bVar8 = IsInGameThread();
  if (!bVar8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannel_Islands.cpp"
                       ,0x5d,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar4 = (this->Systems).ArrayNum;
  pTVar2 = &this->SystemsInternal;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar1 = &(this->SystemsInternal).ArrayMax;
  (this->SystemsInternal).ArrayNum = 0;
  if ((this->SystemsInternal).ArrayMax < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar5 = (this->Systems).ArrayNum;
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(this->Systems).AllocatorInstance.Data;
  pTVar3 = this_00 + iVar5;
  do {
    if ((this->Systems).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSoftObjectPtr<UNiagaraSystem>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pTVar3) {
      local_40 = 0;
      aFStack_38[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->AsyncLoadHandle != (TSharedPtr<FStreamableHandle,1> *)&local_40) {
        (this->AsyncLoadHandle).Object = (FStreamableHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AsyncLoadHandle).SharedReferenceCount,aFStack_38);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (aFStack_38[0].ReferenceController);
      return;
    }
    pUVar10 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if (pUVar10 == (UObject *)0x0) {
LAB_149120faa:
      pUVar10 = (UObject *)0x0;
    }
    else {
      pUVar11 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
      iVar9 = (int)pUVar11->_padding_;
      if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar9) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
          &pUVar11->_padding_)) goto LAB_149120faa;
    }
    local_48 = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar10);
    }
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 < pFVar6 + (longlong)*piVar1 * 8)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar9 = (this->SystemsInternal).ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->SystemsInternal).ArrayNum = iVar9 + 1;
    *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_48;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_48);
    }
    this_00 = this_00 + 1;
  } while( true );
}

// StaticRegisterNativesUNiagaraDataChannel_Islands @ 149139e00

void __cdecl UNiagaraDataChannel_Islands::StaticRegisterNativesUNiagaraDataChannel_Islands(void)

{
  return;
}

