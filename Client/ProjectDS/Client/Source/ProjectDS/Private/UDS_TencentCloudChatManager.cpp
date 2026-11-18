// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 82

// StaticClass @ 14b5b8300

UClass * __cdecl UDS_TencentCloudChatManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TencentCloudChatManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TencentCloudChatManager",
               &Z_Registration_Info_UClass_UDS_TencentCloudChatManager.InnerSingleton,
               StaticRegisterNativesUDS_TencentCloudChatManager,0x240,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_TencentCloudChatManager>,
               InternalVTableHelperCtorCaller<UDS_TencentCloudChatManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TencentCloudChatManager.InnerSingleton;
}

// UDS_TencentCloudChatManager @ 14b5bd000

UDS_TencentCloudChatManager * __thiscall
UDS_TencentCloudChatManager::UDS_TencentCloudChatManager
          (UDS_TencentCloudChatManager *this,FVTableHelper *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  FString local_18;
  
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  pTVar2 = (TNode *)0x0;
  this->_padding_ = (longlong)&___7UDS_TencentCloudChatManager__6B_;
  (this->TencentUserSig).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TencentUserSig).Data.ArrayNum = 0;
  (this->TencentUserSig).Data.ArrayMax = 0;
  (this->MessageListener).Object = (FDS_V2TIMAdvancedMsgListener *)0x0;
  (this->MessageListener).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ConversationListener).Object = (FDS_V2TIMConversationListener *)0x0;
  (this->ConversationListener).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GroupListener).Object = (FDS_V2TIMGroupListener *)0x0;
  (this->GroupListener).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->TencentSDKAppID = 0;
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Object = (FDS_V2TIMRequestBase *)0x0;
    (pTVar1->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Object = (FDS_V2TIMRequestBase *)0x0;
    (pTVar1->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar2 = pTVar1;
  }
  (this->RequestQueue).Tail = pTVar2;
  (this->RequestQueue).Head = pTVar2;
  *(undefined8 *)&(this->InFlightRequests).Elements = 0;
  *(undefined8 *)&(this->InFlightRequests).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InFlightRequests).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->InFlightRequests).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InFlightRequests).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InFlightRequests).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InFlightRequests).Elements.field_0x34 = 0;
  (this->InFlightRequests).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InFlightRequests).HashSize = 0;
  ::FString::FString(&local_18,L"BatchRequest");
  TDS_RequestBatcher<__int64>::TDS_RequestBatcher<__int64>
            (&this->UserInfoBatcher,&local_18,__real_3ff0000000000000,100);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"BatchRequest");
  TDS_RequestBatcher<TTuple<unsigned___int64,FString>_>::
  TDS_RequestBatcher<TTuple<unsigned___int64,FString>_>
            (&this->TranslateMessageBatcher,&local_18,__real_3ff0000000000000,100);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey>::
  TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey>
            (&this->MarkAsReadHandler,__real_3ff0000000000000);
  return this;
}

// UDS_TencentCloudChatManager @ 14b5bd170

UDS_TencentCloudChatManager * __thiscall
UDS_TencentCloudChatManager::UDS_TencentCloudChatManager
          (UDS_TencentCloudChatManager *this,FObjectInitializer *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  FString local_18;
  
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  pTVar2 = (TNode *)0x0;
  this->_padding_ = (longlong)&___7UDS_TencentCloudChatManager__6B_;
  (this->TencentUserSig).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TencentUserSig).Data.ArrayNum = 0;
  (this->TencentUserSig).Data.ArrayMax = 0;
  (this->MessageListener).Object = (FDS_V2TIMAdvancedMsgListener *)0x0;
  (this->MessageListener).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ConversationListener).Object = (FDS_V2TIMConversationListener *)0x0;
  (this->ConversationListener).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GroupListener).Object = (FDS_V2TIMGroupListener *)0x0;
  (this->GroupListener).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->TencentSDKAppID = 0;
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Object = (FDS_V2TIMRequestBase *)0x0;
    (pTVar1->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Object = (FDS_V2TIMRequestBase *)0x0;
    (pTVar1->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar2 = pTVar1;
  }
  (this->RequestQueue).Tail = pTVar2;
  (this->RequestQueue).Head = pTVar2;
  *(undefined8 *)&(this->InFlightRequests).Elements = 0;
  *(undefined8 *)&(this->InFlightRequests).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InFlightRequests).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->InFlightRequests).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InFlightRequests).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InFlightRequests).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InFlightRequests).Elements.field_0x34 = 0;
  (this->InFlightRequests).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InFlightRequests).HashSize = 0;
  ::FString::FString(&local_18,L"BatchRequest");
  TDS_RequestBatcher<__int64>::TDS_RequestBatcher<__int64>
            (&this->UserInfoBatcher,&local_18,__real_3ff0000000000000,100);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"BatchRequest");
  TDS_RequestBatcher<TTuple<unsigned___int64,FString>_>::
  TDS_RequestBatcher<TTuple<unsigned___int64,FString>_>
            (&this->TranslateMessageBatcher,&local_18,__real_3ff0000000000000,100);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey>::
  TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey>
            (&this->MarkAsReadHandler,__real_3ff0000000000000);
  return this;
}

// ~UDS_TencentCloudChatManager @ 14b5bdeb0

void __thiscall
UDS_TencentCloudChatManager::~UDS_TencentCloudChatManager(UDS_TencentCloudChatManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TNode *pTVar4;
  
  this->_padding_ = (longlong)&___7UDS_TencentCloudChatManager__6B_;
  *(undefined4 *)&(this->MarkAsReadHandler).PendingData.field_0x48 = 0;
  pvVar1 = *(void **)&(this->MarkAsReadHandler).PendingData.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FDS_MarkAsReadKey,FDS_MarkAsReadKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FDS_MarkAsReadKey,FDS_MarkAsReadKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FDS_MarkAsReadKey,FDS_MarkAsReadKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MarkAsReadHandler).PendingData);
  DestructItems<FDS_MarkAsReadKey,int>
            ((FDS_MarkAsReadKey *)(this->MarkAsReadHandler).PendingQueue.AllocatorInstance.Data,
             (this->MarkAsReadHandler).PendingQueue.ArrayNum);
  pFVar2 = (this->MarkAsReadHandler).PendingQueue.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TranslateMessageBatcher).BatchRequestName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->TranslateMessageBatcher).BatchedDataContainer.HashSize = 0;
  FVar3 = (this->TranslateMessageBatcher).BatchedDataContainer.Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TranslateMessageBatcher);
  pFVar2 = (this->UserInfoBatcher).BatchRequestName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->UserInfoBatcher).BatchedDataContainer.HashSize = 0;
  FVar3 = (this->UserInfoBatcher).BatchedDataContainer.Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UserInfoBatcher);
  (this->InFlightRequests).HashSize = 0;
  FVar3 = (this->InFlightRequests).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FDS_V2TIMRequestBase,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<FDS_V2TIMRequestBase,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->InFlightRequests).Elements);
  pTVar4 = (this->RequestQueue).Tail;
  while (pTVar4 != (TNode *)0x0) {
    (this->RequestQueue).Tail = pTVar4->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar4->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar4,0x18);
    pTVar4 = (this->RequestQueue).Tail;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GroupListener).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ConversationListener).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageListener).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->TencentUserSig).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5bf8a0

UClass * __cdecl UDS_TencentCloudChatManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TencentCloudChatManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TencentCloudChatManager",
               &Z_Registration_Info_UClass_UDS_TencentCloudChatManager.InnerSingleton,
               StaticRegisterNativesUDS_TencentCloudChatManager,0x240,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_TencentCloudChatManager>,
               InternalVTableHelperCtorCaller<UDS_TencentCloudChatManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TencentCloudChatManager.InnerSingleton;
}

// StaticRegisterNativesUDS_TencentCloudChatManager @ 14b5c0090

void __cdecl UDS_TencentCloudChatManager::StaticRegisterNativesUDS_TencentCloudChatManager(void)

{
  return;
}

// __VTableCtorCaller @ 14b5c1b00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_TencentCloudChatManager::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ManagerBase *this;
  undefined8 *puVar3;
  undefined8 *puVar4;
  FString local_18;
  
  puVar4 = (undefined8 *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ManagerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this == (UDS_ManagerBase *)0x0) {
    return (UObject *)0x0;
  }
  UDS_ManagerBase::UDS_ManagerBase(this,param_1);
  *(undefined4 *)&this[1]._padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_TencentCloudChatManager__6B_;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  *(undefined8 *)&this[1].bIsBeingDestroyed = 0;
  this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  puVar3 = ::operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar4 = puVar3;
  }
  *(undefined8 **)&this[2].bIsBeingDestroyed = puVar4;
  this[2]._padding_ = (longlong)puVar4;
  this[3]._padding_ = 0;
  this[3]._padding_ = 0;
  this[3]._padding_ = 0;
  *(undefined4 *)&this[3].bIsBeingDestroyed = 0;
  *(undefined4 *)&this[3].field_0x2c = 0x80;
  *(undefined4 *)&this[4]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0;
  this[4]._padding_ = 0;
  *(undefined4 *)&this[4]._padding_ = 0;
  ::FString::FString(&local_18,L"BatchRequest");
  TDS_RequestBatcher<__int64>::TDS_RequestBatcher<__int64>
            ((TDS_RequestBatcher<__int64> *)&this[4]._padding_,&local_18,__real_3ff0000000000000,100
            );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"BatchRequest");
  TDS_RequestBatcher<TTuple<unsigned___int64,FString>_>::
  TDS_RequestBatcher<TTuple<unsigned___int64,FString>_>
            ((TDS_RequestBatcher<TTuple<unsigned___int64,FString>_> *)&this[7]._padding_,&local_18,
             __real_3ff0000000000000,100);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey>::
  TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey>
            ((TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey> *)&this[9]._padding_
             ,__real_3ff0000000000000);
  return (UObject *)this;
}

// MakeRequest<FDS_V2TIMRequestCreateGroup> @ 14b9d0850

TSharedPtr<FDS_V2TIMRequestCreateGroup,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestCreateGroup>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestCreateGroup,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestCreateGroup *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestCreateGroup,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestCreateGroup *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  longlong *local_30;
  
  pTVar9 = ::operator_new(0x68);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestCreateGroup *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestCreateGroup___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[4].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[5]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[5].WeakReferenceCount = 0;
    *(undefined4 *)((longlong)&pTVar9[6]._padding_ + 4) = 0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    pTVar9[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1]._padding_ =
         (longlong)&FDS_V2TIMRequestCreateGroup::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestCreateGroup *)(pTVar9 + 1);
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x64;
    pTVar9[4]._padding_ =
         (longlong)&FDS_V2TIMRequestCreateGroup::_vftable__for__V2TIMValueCallback<V2TIMString>__;
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[5]._padding_ = 0;
    *(undefined1 *)&pTVar9[6]._padding_ = 1;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestCreateGroup *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestCreateGroup,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d09ba;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar13 != (TReferenceControllerBase<1> *)pFVar14->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar14->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar14->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d09ba:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestCreateGroup *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestCreateGroup,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->_padding_;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// MakeRequest<FDS_V2TIMRequestDeleteConversation> @ 14b9d0b50

TSharedPtr<FDS_V2TIMRequestDeleteConversation,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestDeleteConversation>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestDeleteConversation,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestDeleteConversation *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestDeleteConversation,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestDeleteConversation *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  longlong *local_30;
  
  pTVar9 = ::operator_new(0x58);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestDeleteConversation *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestDeleteConversation___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[4].WeakReferenceCount = 0;
    *(undefined4 *)((longlong)&pTVar9[5]._padding_ + 4) = 0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    pTVar9[1]._padding_ =
         (longlong)&FDS_V2TIMRequestDeleteConversation::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestDeleteConversation *)(pTVar9 + 1);
    pTVar9[4]._padding_ =
         (longlong)&FDS_V2TIMRequestDeleteConversation::_vftable__for__V2TIMCallback__;
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[5]._padding_ = 0;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestDeleteConversation *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestDeleteConversation,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d0ca2;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar13 != (TReferenceControllerBase<1> *)pFVar14->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar14->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar14->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d0ca2:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestDeleteConversation *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestDeleteConversation,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->_padding_;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// MakeRequest<FDS_V2TIMRequestDismissGroup> @ 14b9d0e40

TSharedPtr<FDS_V2TIMRequestDismissGroup,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestDismissGroup>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestDismissGroup,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestDismissGroup *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestDismissGroup,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestDismissGroup *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  longlong *local_30;
  
  pTVar9 = ::operator_new(0x58);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestDismissGroup *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestDismissGroup___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[4].WeakReferenceCount = 0;
    *(undefined4 *)((longlong)&pTVar9[5]._padding_ + 4) = 0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    pTVar9[1]._padding_ =
         (longlong)&FDS_V2TIMRequestDismissGroup::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestDismissGroup *)(pTVar9 + 1);
    pTVar9[4]._padding_ = (longlong)&FDS_V2TIMRequestDismissGroup::_vftable__for__V2TIMCallback__;
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[5]._padding_ = 0;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestDismissGroup *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestDismissGroup,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d0f92;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar13 != (TReferenceControllerBase<1> *)pFVar14->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar14->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar14->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d0f92:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestDismissGroup *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestDismissGroup,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->_padding_;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// MakeRequest<FDS_V2TIMRequestGetConversationList> @ 14b9d1130

TSharedPtr<FDS_V2TIMRequestGetConversationList,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestGetConversationList>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestGetConversationList,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestGetConversationList *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestGetConversationList,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestGetConversationList *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  pTVar9 = ::operator_new(0x48);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestGetConversationList *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestGetConversationList___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined4 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    pTVar9[1]._padding_ =
         (longlong)&FDS_V2TIMRequestGetConversationList::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestGetConversationList *)(pTVar9 + 1);
    pTVar9[4]._padding_ =
         (longlong)
         &FDS_V2TIMRequestGetConversationList::
          _vftable__for__V2TIMValueCallback<V2TIMConversationResult>__;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestGetConversationList *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestGetConversationList,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d1272;
    }
  }
  if (((*(longlong *)&pFVar14->field_0x8 == 0) || (*(longlong *)&pFVar14->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar14->field_0x10 + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FDS_V2TIMRequestGetConversationList **)&pFVar14->field_0x8 = pFVar14;
    if (pTVar13 != *(TReferenceControllerBase<1> **)&pFVar14->field_0x10) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)&pFVar14->field_0x10;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar14->field_0x10 = pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d1272:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestGetConversationList *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestGetConversationList,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->field_0x18,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->field_0x20;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// MakeRequest<FDS_V2TIMRequestGetGroupMemberList> @ 14b9d1410

TSharedPtr<FDS_V2TIMRequestGetGroupMemberList,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestGetGroupMemberList>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestGetGroupMemberList,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestGetGroupMemberList *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestGetGroupMemberList,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestGetGroupMemberList *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  longlong *local_30;
  
  pTVar9 = ::operator_new(0x70);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestGetGroupMemberList *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestGetGroupMemberList___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[4].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[5]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[5].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[6]._padding_ + 4) = 0;
    pTVar9[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    pTVar9[1]._padding_ =
         (longlong)&FDS_V2TIMRequestGetGroupMemberList::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestGetGroupMemberList *)(pTVar9 + 1);
    pTVar9[4]._padding_ =
         (longlong)
         &FDS_V2TIMRequestGetGroupMemberList::
          _vftable__for__V2TIMValueCallback<V2TIMGroupMemberInfoResult>__;
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[5]._padding_ = 0;
    pTVar9[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[6]._padding_ = 0;
    pTVar9[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestGetGroupMemberList *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestGetGroupMemberList,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d1576;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar13 != (TReferenceControllerBase<1> *)pFVar14->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar14->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar14->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d1576:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestGetGroupMemberList *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestGetGroupMemberList,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->_padding_;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// MakeRequest<FDS_V2TIMRequestGetGroupMembersInfo> @ 14b9d1710

TSharedPtr<FDS_V2TIMRequestGetGroupMembersInfo,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestGetGroupMembersInfo>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestGetGroupMembersInfo,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestGetGroupMembersInfo *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestGetGroupMembersInfo,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestGetGroupMembersInfo *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  longlong *local_30;
  
  pTVar9 = ::operator_new(0x68);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestGetGroupMembersInfo *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestGetGroupMembersInfo___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[4].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[5]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[5].WeakReferenceCount = 0;
    *(undefined4 *)((longlong)&pTVar9[6]._padding_ + 4) = 0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    pTVar9[1]._padding_ =
         (longlong)&FDS_V2TIMRequestGetGroupMembersInfo::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestGetGroupMembersInfo *)(pTVar9 + 1);
    pTVar9[4]._padding_ =
         (longlong)
         &FDS_V2TIMRequestGetGroupMembersInfo::
          _vftable__for__V2TIMValueCallback<TXV2TIMGroupMemberFullInfoVector>__;
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[5]._padding_ = 0;
    pTVar9[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[6]._padding_ = 0;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestGetGroupMembersInfo *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestGetGroupMembersInfo,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d1871;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar13 != (TReferenceControllerBase<1> *)pFVar14->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar14->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar14->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d1871:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestGetGroupMembersInfo *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestGetGroupMembersInfo,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->_padding_;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// MakeRequest<FDS_V2TIMRequestGetGroupsInfo> @ 14b9d1a10

TSharedPtr<FDS_V2TIMRequestGetGroupsInfo,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestGetGroupsInfo>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestGetGroupsInfo,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestGetGroupsInfo *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestGetGroupsInfo,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestGetGroupsInfo *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  longlong *local_30;
  
  pTVar9 = ::operator_new(0x60);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestGetGroupsInfo *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestGetGroupsInfo___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[4].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[5]._padding_ + 4) = 0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    *(undefined1 *)&pTVar9[5].SharedReferenceCount = 0;
    pTVar9[1]._padding_ =
         (longlong)&FDS_V2TIMRequestGetGroupsInfo::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestGetGroupsInfo *)(pTVar9 + 1);
    pTVar9[4]._padding_ =
         (longlong)
         &FDS_V2TIMRequestGetGroupsInfo::
          _vftable__for__V2TIMValueCallback<TXV2TIMGroupInfoResultVector>__;
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[5]._padding_ = 0;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestGetGroupsInfo *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestGetGroupsInfo,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d1b6a;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar13 != (TReferenceControllerBase<1> *)pFVar14->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar14->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar14->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d1b6a:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestGetGroupsInfo *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestGetGroupsInfo,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->_padding_;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// MakeRequest<FDS_V2TIMRequestGetHistoryMessageList> @ 14b9d1d00

TSharedPtr<FDS_V2TIMRequestGetHistoryMessageList,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestGetHistoryMessageList>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestGetHistoryMessageList,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestGetHistoryMessageList *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestGetHistoryMessageList,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestGetHistoryMessageList *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  longlong *local_30;
  
  pTVar9 = ::operator_new(0x60);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestGetHistoryMessageList *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestGetHistoryMessageList___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[4].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[5]._padding_ + 4) = 0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[1]._padding_ =
         (longlong)&FDS_V2TIMRequestGetHistoryMessageList::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestGetHistoryMessageList *)(pTVar9 + 1);
    pTVar9[4]._padding_ =
         (longlong)
         &FDS_V2TIMRequestGetHistoryMessageList::
          _vftable__for__V2TIMValueCallback<TXV2TIMMessageVector>__;
    pTVar9[5]._padding_ = 0;
    pTVar9[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestGetHistoryMessageList *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestGetHistoryMessageList,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d1e59;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar13 != (TReferenceControllerBase<1> *)pFVar14->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar14->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar14->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d1e59:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestGetHistoryMessageList *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestGetHistoryMessageList,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->_padding_;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// MakeRequest<FDS_V2TIMRequestGetJoinedGroupList> @ 14b9d1ff0

TSharedPtr<FDS_V2TIMRequestGetJoinedGroupList,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestGetJoinedGroupList>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestGetJoinedGroupList,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestGetJoinedGroupList *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestGetJoinedGroupList,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestGetJoinedGroupList *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  pTVar9 = ::operator_new(0x48);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestGetJoinedGroupList *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestGetJoinedGroupList___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined4 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    pTVar9[1]._padding_ =
         (longlong)&FDS_V2TIMRequestGetJoinedGroupList::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestGetJoinedGroupList *)(pTVar9 + 1);
    pTVar9[4]._padding_ =
         (longlong)
         &FDS_V2TIMRequestGetJoinedGroupList::
          _vftable__for__V2TIMValueCallback<TXV2TIMGroupInfoVector>__;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestGetJoinedGroupList *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestGetJoinedGroupList,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d2132;
    }
  }
  if (((*(longlong *)&pFVar14->field_0x8 == 0) || (*(longlong *)&pFVar14->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar14->field_0x10 + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FDS_V2TIMRequestGetJoinedGroupList **)&pFVar14->field_0x8 = pFVar14;
    if (pTVar13 != *(TReferenceControllerBase<1> **)&pFVar14->field_0x10) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)&pFVar14->field_0x10;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar14->field_0x10 = pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d2132:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestGetJoinedGroupList *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestGetJoinedGroupList,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->field_0x18,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->field_0x20;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// MakeRequest<FDS_V2TIMRequestGetUsersInfo> @ 14b9d22d0

TSharedPtr<FDS_V2TIMRequestGetUsersInfo,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestGetUsersInfo>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestGetUsersInfo,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestGetUsersInfo *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestGetUsersInfo,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestGetUsersInfo *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  longlong *local_30;
  
  pTVar9 = ::operator_new(0x58);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestGetUsersInfo *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestGetUsersInfo___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[4].WeakReferenceCount = 0;
    *(undefined4 *)((longlong)&pTVar9[5]._padding_ + 4) = 0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[1]._padding_ =
         (longlong)&FDS_V2TIMRequestGetUsersInfo::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestGetUsersInfo *)(pTVar9 + 1);
    pTVar9[5]._padding_ = 0;
    pTVar9[4]._padding_ =
         (longlong)
         &FDS_V2TIMRequestGetUsersInfo::
          _vftable__for__V2TIMValueCallback<TXV2TIMUserFullInfoVector>__;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestGetUsersInfo *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestGetUsersInfo,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d2422;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar13 != (TReferenceControllerBase<1> *)pFVar14->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar14->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar14->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d2422:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestGetUsersInfo *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestGetUsersInfo,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->_padding_;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// MakeRequest<FDS_V2TIMRequestJoinGroup> @ 14b9d25c0

TSharedPtr<FDS_V2TIMRequestJoinGroup,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestJoinGroup>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestJoinGroup,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestJoinGroup *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestJoinGroup,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestJoinGroup *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  longlong *local_30;
  
  pTVar9 = ::operator_new(0x58);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestJoinGroup *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestJoinGroup___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[4].WeakReferenceCount = 0;
    *(undefined4 *)((longlong)&pTVar9[5]._padding_ + 4) = 0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    pTVar9[1]._padding_ =
         (longlong)&FDS_V2TIMRequestJoinGroup::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestJoinGroup *)(pTVar9 + 1);
    pTVar9[4]._padding_ = (longlong)&FDS_V2TIMRequestJoinGroup::_vftable__for__V2TIMCallback__;
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[5]._padding_ = 0;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestJoinGroup *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestJoinGroup,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d2712;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar13 != (TReferenceControllerBase<1> *)pFVar14->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar14->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar14->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d2712:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestJoinGroup *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestJoinGroup,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->_padding_;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// MakeRequest<FDS_V2TIMRequestKickGroupMember> @ 14b9d28b0

TSharedPtr<FDS_V2TIMRequestKickGroupMember,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestKickGroupMember>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestKickGroupMember,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestKickGroupMember *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestKickGroupMember,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestKickGroupMember *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  longlong *local_30;
  
  pTVar9 = ::operator_new(0x60);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestKickGroupMember *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestKickGroupMember___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[4].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[5]._padding_ + 4) = 0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    pTVar9[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[1]._padding_ =
         (longlong)&FDS_V2TIMRequestKickGroupMember::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestKickGroupMember *)(pTVar9 + 1);
    pTVar9[4]._padding_ =
         (longlong)
         &FDS_V2TIMRequestKickGroupMember::
          _vftable__for__V2TIMValueCallback<TXV2TIMGroupMemberOperationResultVector>__;
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[5]._padding_ = 0;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestKickGroupMember *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestKickGroupMember,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d2a09;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar13 != (TReferenceControllerBase<1> *)pFVar14->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar14->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar14->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d2a09:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestKickGroupMember *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestKickGroupMember,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->_padding_;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// MakeRequest<FDS_V2TIMRequestLogin> @ 14b9d2ba0

TSharedPtr<FDS_V2TIMRequestLogin,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestLogin>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestLogin,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestLogin *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestLogin,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestLogin *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  longlong *local_30;
  
  pTVar9 = ::operator_new(0x60);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestLogin *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestLogin___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[4].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[5]._padding_ + 4) = 0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[1]._padding_ = (longlong)&FDS_V2TIMRequestLogin::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestLogin *)(pTVar9 + 1);
    pTVar9[4]._padding_ = (longlong)&FDS_V2TIMRequestLogin::_vftable__for__V2TIMCallback__;
    pTVar9[5]._padding_ = 0;
    pTVar9[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestLogin *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestLogin,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d2cf9;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar13 != (TReferenceControllerBase<1> *)pFVar14->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar14->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar14->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d2cf9:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestLogin *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestLogin,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->_padding_;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// MakeRequest<FDS_V2TIMRequestLogout> @ 14b9d2e90

TSharedPtr<FDS_V2TIMRequestLogout,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestLogout>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestLogout,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestLogout *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestLogout,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestLogout *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  pTVar9 = ::operator_new(0x48);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestLogout *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestLogout___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined4 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    pTVar9[1]._padding_ = (longlong)&FDS_V2TIMRequestLogout::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestLogout *)(pTVar9 + 1);
    pTVar9[4]._padding_ = (longlong)&FDS_V2TIMRequestLogout::_vftable__for__V2TIMCallback__;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestLogout *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestLogout,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d2fd2;
    }
  }
  if (((*(longlong *)&pFVar14->field_0x8 == 0) || (*(longlong *)&pFVar14->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar14->field_0x10 + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FDS_V2TIMRequestLogout **)&pFVar14->field_0x8 = pFVar14;
    if (pTVar13 != *(TReferenceControllerBase<1> **)&pFVar14->field_0x10) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)&pFVar14->field_0x10;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar14->field_0x10 = pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d2fd2:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestLogout *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestLogout,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->field_0x18,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->field_0x20;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// MakeRequest<FDS_V2TIMRequestMarkConversation> @ 14b9d3170

TSharedPtr<FDS_V2TIMRequestMarkConversation,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestMarkConversation>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestMarkConversation,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestMarkConversation *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestMarkConversation,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestMarkConversation *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  longlong *local_30;
  
  pTVar9 = ::operator_new(0x60);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestMarkConversation *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestMarkConversation___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[4].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[5]._padding_ + 4) = 0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    *(undefined1 *)&pTVar9[5].SharedReferenceCount = 0;
    pTVar9[1]._padding_ =
         (longlong)&FDS_V2TIMRequestMarkConversation::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestMarkConversation *)(pTVar9 + 1);
    pTVar9[4]._padding_ =
         (longlong)
         &FDS_V2TIMRequestMarkConversation::
          _vftable__for__V2TIMValueCallback<TXV2TIMConversationOperationResultVector>__;
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[5]._padding_ = 0;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestMarkConversation *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestMarkConversation,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d32ca;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar13 != (TReferenceControllerBase<1> *)pFVar14->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar14->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar14->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d32ca:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestMarkConversation *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestMarkConversation,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->_padding_;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// MakeRequest<FDS_V2TIMRequestMarkMessageAsRead> @ 14b9d3460

TSharedPtr<FDS_V2TIMRequestMarkMessageAsRead,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestMarkMessageAsRead>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestMarkMessageAsRead,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestMarkMessageAsRead *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestMarkMessageAsRead,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestMarkMessageAsRead *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  longlong *local_30;
  
  pTVar9 = ::operator_new(0x60);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestMarkMessageAsRead *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestMarkMessageAsRead___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[4].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[5]._padding_ + 4) = 0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[1]._padding_ =
         (longlong)&FDS_V2TIMRequestMarkMessageAsRead::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestMarkMessageAsRead *)(pTVar9 + 1);
    pTVar9[4]._padding_ =
         (longlong)&FDS_V2TIMRequestMarkMessageAsRead::_vftable__for__V2TIMCallback__;
    pTVar9[5]._padding_ = 0;
    pTVar9[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestMarkMessageAsRead *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestMarkMessageAsRead,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d35b9;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar13 != (TReferenceControllerBase<1> *)pFVar14->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar14->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar14->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d35b9:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestMarkMessageAsRead *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestMarkMessageAsRead,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->_padding_;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// MakeRequest<FDS_V2TIMRequestQuitGroup> @ 14b9d3750

TSharedPtr<FDS_V2TIMRequestQuitGroup,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestQuitGroup>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestQuitGroup,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestQuitGroup *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestQuitGroup,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestQuitGroup *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  longlong *local_30;
  
  pTVar9 = ::operator_new(0x58);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestQuitGroup *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestQuitGroup___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[4].WeakReferenceCount = 0;
    *(undefined4 *)((longlong)&pTVar9[5]._padding_ + 4) = 0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    pTVar9[1]._padding_ =
         (longlong)&FDS_V2TIMRequestQuitGroup::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestQuitGroup *)(pTVar9 + 1);
    pTVar9[4]._padding_ = (longlong)&FDS_V2TIMRequestQuitGroup::_vftable__for__V2TIMCallback__;
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[5]._padding_ = 0;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestQuitGroup *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestQuitGroup,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d38a2;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar13 != (TReferenceControllerBase<1> *)pFVar14->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar14->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar14->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d38a2:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestQuitGroup *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestQuitGroup,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->_padding_;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// MakeRequest<FDS_V2TIMRequestSendMessage> @ 14b9d3a40

TSharedPtr<FDS_V2TIMRequestSendMessage,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestSendMessage>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestSendMessage,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestSendMessage *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestSendMessage,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestSendMessage *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  longlong *local_30;
  
  pTVar9 = ::operator_new(0x70);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestSendMessage *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestSendMessage___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[4].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[5]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[5].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[6]._padding_ + 4) = 0;
    pTVar9[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[1]._padding_ =
         (longlong)&FDS_V2TIMRequestSendMessage::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestSendMessage *)(pTVar9 + 1);
    pTVar9[4]._padding_ = (longlong)&FDS_V2TIMRequestSendMessage::_vftable__for__V2TIMSendCallback__
    ;
    pTVar9[5]._padding_ = 0;
    pTVar9[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[6]._padding_ = 0;
    pTVar9[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestSendMessage *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestSendMessage,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d3ba6;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar13 != (TReferenceControllerBase<1> *)pFVar14->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar14->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar14->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d3ba6:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestSendMessage *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestSendMessage,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->_padding_;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// MakeRequest<FDS_V2TIMRequestSetCustomInfo> @ 14b9d3d40

TSharedPtr<FDS_V2TIMRequestSetCustomInfo,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestSetCustomInfo>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestSetCustomInfo,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestSetCustomInfo *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestSetCustomInfo,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestSetCustomInfo *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  longlong *local_30;
  
  pTVar9 = ::operator_new(0x58);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestSetCustomInfo *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestSetCustomInfo___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[4].WeakReferenceCount = 0;
    *(undefined4 *)((longlong)&pTVar9[5]._padding_ + 4) = 0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[1]._padding_ =
         (longlong)&FDS_V2TIMRequestSetCustomInfo::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestSetCustomInfo *)(pTVar9 + 1);
    pTVar9[5]._padding_ = 0;
    pTVar9[4]._padding_ = (longlong)&FDS_V2TIMRequestSetCustomInfo::_vftable__for__V2TIMCallback__;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestSetCustomInfo *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestSetCustomInfo,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d3e92;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar13 != (TReferenceControllerBase<1> *)pFVar14->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar14->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar14->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d3e92:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestSetCustomInfo *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestSetCustomInfo,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->_padding_;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// MakeRequest<FDS_V2TIMRequestSetGroupInfo> @ 14b9d4030

TSharedPtr<FDS_V2TIMRequestSetGroupInfo,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestSetGroupInfo>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestSetGroupInfo,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestSetGroupInfo *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestSetGroupInfo,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestSetGroupInfo *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  longlong *local_30;
  
  pTVar9 = ::operator_new(0x70);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestSetGroupInfo *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestSetGroupInfo___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[4].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[5]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[5].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[6]._padding_ + 4) = 0;
    pTVar9[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    pTVar9[1]._padding_ =
         (longlong)&FDS_V2TIMRequestSetGroupInfo::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestSetGroupInfo *)(pTVar9 + 1);
    pTVar9[4]._padding_ = (longlong)&FDS_V2TIMRequestSetGroupInfo::_vftable__for__V2TIMCallback__;
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[5]._padding_ = 0;
    pTVar9[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[6]._padding_ = 0;
    pTVar9[6].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar9[6].WeakReferenceCount = 1;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestSetGroupInfo *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestSetGroupInfo,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d419b;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar13 != (TReferenceControllerBase<1> *)pFVar14->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar14->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar14->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d419b:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestSetGroupInfo *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestSetGroupInfo,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->_padding_;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// MakeRequest<FDS_V2TIMRequestSetSelfInfo> @ 14b9d4330

TSharedPtr<FDS_V2TIMRequestSetSelfInfo,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestSetSelfInfo>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestSetSelfInfo,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestSetSelfInfo *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestSetSelfInfo,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestSetSelfInfo *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  longlong *local_30;
  
  pTVar9 = ::operator_new(0x68);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestSetSelfInfo *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestSetSelfInfo___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[4].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[5]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[5].WeakReferenceCount = 0;
    *(undefined4 *)((longlong)&pTVar9[6]._padding_ + 4) = 0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[1]._padding_ =
         (longlong)&FDS_V2TIMRequestSetSelfInfo::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestSetSelfInfo *)(pTVar9 + 1);
    pTVar9[6]._padding_ = 0;
    pTVar9[4]._padding_ = (longlong)&FDS_V2TIMRequestSetSelfInfo::_vftable__for__V2TIMCallback__;
    pTVar9[5]._padding_ = 0;
    pTVar9[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestSetSelfInfo *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestSetSelfInfo,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d4491;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar13 != (TReferenceControllerBase<1> *)pFVar14->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar14->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar14->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d4491:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestSetSelfInfo *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestSetSelfInfo,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->_padding_;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// MakeRequest<FDS_V2TIMRequestTransferGroupOwner> @ 14b9d4630

TSharedPtr<FDS_V2TIMRequestTransferGroupOwner,1> * __thiscall
UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestTransferGroupOwner>
          (UDS_TencentCloudChatManager *this,
          TSharedPtr<FDS_V2TIMRequestTransferGroupOwner,1> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FDS_V2TIMRequestTransferGroupOwner *pFVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FDS_V2TIMRequestTransferGroupOwner,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_V2TIMRequestTransferGroupOwner *pFVar14;
  UDS_TencentCloudChatManager *local_res10;
  TSharedPtr<FDS_V2TIMRequestBase,1> local_58;
  FDestructionSentinel local_48;
  longlong *local_30;
  
  pTVar9 = ::operator_new(0x68);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FDS_V2TIMRequestTransferGroupOwner *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMRequestTransferGroupOwner___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar9[3].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[4]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[4].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar9[5]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar9[5].WeakReferenceCount = 0;
    *(undefined4 *)((longlong)&pTVar9[6]._padding_ + 4) = 0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FDS_V2TIMRequestBase__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    V2TIMBaseCallback::V2TIMBaseCallback((V2TIMBaseCallback *)(pTVar9 + 4));
    pTVar9[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[1]._padding_ =
         (longlong)&FDS_V2TIMRequestTransferGroupOwner::_vftable__for__FDS_V2TIMRequestBase__;
    pFVar14 = (FDS_V2TIMRequestTransferGroupOwner *)(pTVar9 + 1);
    *(undefined1 *)&pTVar9[6]._padding_ = 0;
    pTVar9[4]._padding_ =
         (longlong)&FDS_V2TIMRequestTransferGroupOwner::_vftable__for__V2TIMCallback__;
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[5]._padding_ = 0;
    pTVar13 = pTVar9;
    if (pFVar14 == (FDS_V2TIMRequestTransferGroupOwner *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FDS_V2TIMRequestTransferGroupOwner,1> *)(*pcVar7)();
        return pTVar10;
      }
      goto LAB_14b9d4791;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar13 != (TReferenceControllerBase<1> *)pFVar14->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar14->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar14->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14b9d4791:
  __return_storage_ptr__->Object = pFVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar14 = __return_storage_ptr__->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDS_V2TIMRequestTransferGroupOwner *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FDS_V2TIMRequestTransferGroupOwner,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = __return_storage_ptr__->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (FWriteAccessScope *)&local_48);
  local_30 = &pFVar6->_padding_;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    puVar11[1] = pFVar14;
    puVar11[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[3] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TencentCloudChatManager____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFDS_V2TIMRequestBase___00____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[4] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_TencentCloudChatManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_res10);
    puVar11[5] = OnRequestCompletion;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_58.Object = (FDS_V2TIMRequestBase *)__return_storage_ptr__->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EnqueueRequest(this,&local_58);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  return __return_storage_ptr__;
}

// AddListeners @ 14b9dfa10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_TencentCloudChatManager::AddListeners(UDS_TencentCloudChatManager *this)

{
  V2TIMManager *pVVar1;
  UDS_LogManager *pUVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pVVar1 = V2TIMManager::GetInstance();
  if (pVVar1 == (V2TIMManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::AddListeners",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0xda,L"[TCC] v2TIMManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    plVar3 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
    if (plVar3 == (longlong *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = (longlong)plVar3;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_TencentCloudChatManager::AddListeners",0x29,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_138.Ptr,0xe1,L"[TCC] v2TIMMessageManager is nullptr.");
        if ((longlong *)local_138._padding_ != (longlong *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      plVar4 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
      if (plVar4 == (longlong *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          local_138._padding_ = (longlong)plVar4;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_TencentCloudChatManager::AddListeners",0x29,Yes);
          UDS_LogManager::PrintLog
                    (pUVar2,1,Warning,local_138.Ptr,0xe8,
                     L"[TCC] v2TIMConversationManager is nullptr.");
          if ((longlong *)local_138._padding_ != (longlong *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else {
        if ((this->MessageListener).Object != (FDS_V2TIMAdvancedMsgListener *)0x0) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
        if ((this->ConversationListener).Object != (FDS_V2TIMConversationListener *)0x0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
        if ((this->GroupListener).Object != (FDS_V2TIMGroupListener *)0x0) {
          (**(code **)((longlong)*pVVar1 + 0x88))(pVVar1);
        }
      }
    }
  }
  return;
}

// ClearRequests @ 14b9e3310

void __thiscall UDS_TencentCloudChatManager::ClearRequests(UDS_TencentCloudChatManager *this)

{
  undefined1 *puVar1;
  TSet<TSharedPtr<FDS_V2TIMRequestBase,1>,DefaultKeyFuncs<TSharedPtr<FDS_V2TIMRequestBase,1>,0>,FDefaultSetAllocator>
  *this_00;
  int *piVar2;
  int iVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  bool bVar6;
  TMap<FDS_MarkAsReadKey,FDS_MarkAsReadKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_MarkAsReadKey,FDS_MarkAsReadKey,0>_>
  *this_01;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  while (pTVar4 = ((this->RequestQueue).Tail)->NextNode, pTVar4 != (TNode *)0x0) {
    pTVar5 = (this->RequestQueue).Tail;
    (this->RequestQueue).Tail = pTVar4;
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&pTVar4->Item != (TSharedPtr<FDS_V2TIMRequestBase,1> *)&local_18) {
      (pTVar4->Item).Object = (FDS_V2TIMRequestBase *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pTVar4->Item).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    if (pTVar5 != (TNode *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar5->Item).SharedReferenceCount.ReferenceController);
      ::operator_delete(pTVar5,0x18);
    }
  }
  this_00 = &this->InFlightRequests;
  bVar6 = 1 < (this->InFlightRequests).HashSize;
  if (!bVar6) {
    TSet<TSharedPtr<FDS_V2TIMRequestBase,1>,DefaultKeyFuncs<TSharedPtr<FDS_V2TIMRequestBase,1>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FDS_V2TIMRequestBase,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this_00->Elements,0,*(int *)&(this->InFlightRequests).Elements.field_0x8);
  puVar1 = &(this->InFlightRequests).Elements.field_0xc;
  *(undefined4 *)&(this->InFlightRequests).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->InFlightRequests).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InFlightRequests).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->InFlightRequests).Elements.field_0x2c;
  *(undefined4 *)&(this->InFlightRequests).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->InFlightRequests).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->InFlightRequests).Elements.field_0x10
               ,0);
  }
  if (bVar6) {
    (this->InFlightRequests).HashSize = 1;
    TSet<TSharedPtr<FDS_V2TIMRequestBase,1>,DefaultKeyFuncs<TSharedPtr<FDS_V2TIMRequestBase,1>,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Reset
            (&(this->UserInfoBatcher).BatchedDataContainer);
  (this->UserInfoBatcher).LastBatchTime = 0.0;
  TDS_RequestBatcher<TTuple<unsigned___int64,FString>_>::Reset(&this->TranslateMessageBatcher);
  (this->MarkAsReadHandler).LastRequestTime = 0.0;
  DestructItems<FDS_MarkAsReadKey,int>
            ((FDS_MarkAsReadKey *)(this->MarkAsReadHandler).PendingQueue.AllocatorInstance.Data,
             (this->MarkAsReadHandler).PendingQueue.ArrayNum);
  piVar2 = &(this->MarkAsReadHandler).PendingQueue.ArrayMax;
  (this->MarkAsReadHandler).PendingQueue.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->MarkAsReadHandler).PendingQueue.AllocatorInstance,0,piVar2);
  }
  this_01 = &(this->MarkAsReadHandler).PendingData;
  bVar6 = 1 < *(int *)&(this->MarkAsReadHandler).PendingData.field_0x48;
  if (!bVar6) {
    TSet<TTuple<FDS_MarkAsReadKey,FDS_MarkAsReadKey>,TDefaultMapHashableKeyFuncs<FDS_MarkAsReadKey,FDS_MarkAsReadKey,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FDS_MarkAsReadKey,FDS_MarkAsReadKey>,TDefaultMapHashableKeyFuncs<FDS_MarkAsReadKey,FDS_MarkAsReadKey,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<FDS_MarkAsReadKey,FDS_MarkAsReadKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FDS_MarkAsReadKey,FDS_MarkAsReadKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(this->MarkAsReadHandler).PendingData.field_0x8);
  puVar1 = &(this->MarkAsReadHandler).PendingData.field_0xc;
  *(undefined4 *)&(this->MarkAsReadHandler).PendingData.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->MarkAsReadHandler).PendingData.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MarkAsReadHandler).PendingData.field_0x34 = 0;
  iVar3 = *(int *)&(this->MarkAsReadHandler).PendingData.field_0x2c;
  *(undefined4 *)&(this->MarkAsReadHandler).PendingData.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->MarkAsReadHandler).PendingData.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->MarkAsReadHandler).PendingData.field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->MarkAsReadHandler).PendingData.field_0x48 = 1;
    TSet<TTuple<FDS_MarkAsReadKey,FDS_MarkAsReadKey>,TDefaultMapHashableKeyFuncs<FDS_MarkAsReadKey,FDS_MarkAsReadKey,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FDS_MarkAsReadKey,FDS_MarkAsReadKey>,TDefaultMapHashableKeyFuncs<FDS_MarkAsReadKey,FDS_MarkAsReadKey,0>,FDefaultSetAllocator>
              *)this_01);
  }
  return;
}

// CreateListeners @ 14b9e5d90

void __thiscall UDS_TencentCloudChatManager::CreateListeners(UDS_TencentCloudChatManager *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FDS_V2TIMGroupListener *pFVar8;
  FDS_V2TIMAdvancedMsgListener *pFVar9;
  FDS_V2TIMConversationListener *pFVar10;
  FDS_V2TIMAdvancedMsgListener *local_58;
  FSharedReferencer<1> local_50;
  FDS_V2TIMConversationListener *local_48;
  FSharedReferencer<1> local_40;
  FDS_V2TIMGroupListener *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pFVar8 = (FDS_V2TIMGroupListener *)&DAT_00000010;
  if ((this->MessageListener).Object == (FDS_V2TIMAdvancedMsgListener *)0x0) {
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      pFVar9 = (FDS_V2TIMAdvancedMsgListener *)&DAT_00000010;
      pTVar6 = pTVar7;
LAB_14b9e5e59:
      if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
         (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        *(FDS_V2TIMAdvancedMsgListener **)&pFVar9->field_0x8 = pFVar9;
        if (pTVar6 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
          if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
            UNLOCK();
          }
          plVar3 = *(longlong **)&pFVar9->field_0x10;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
          *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar6;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      }
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFDS_V2TIMAdvancedMsgListener___00_SharedPointerInternals__6B_
      ;
      pTVar6[1]._padding_ = 0;
      pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[2]._padding_ = 0;
      V2TIMAdvancedMsgListener::V2TIMAdvancedMsgListener((V2TIMAdvancedMsgListener *)(pTVar6 + 1));
      pFVar9 = (FDS_V2TIMAdvancedMsgListener *)(pTVar6 + 1);
      pTVar6[1]._padding_ = (longlong)&___7FDS_V2TIMAdvancedMsgListener__6B_;
      if (pFVar9 != (FDS_V2TIMAdvancedMsgListener *)0x0) goto LAB_14b9e5e59;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58 = pFVar9;
    local_50.ReferenceController = pTVar6;
    if (&this->MessageListener != (TSharedPtr<FDS_V2TIMAdvancedMsgListener,1> *)&local_58) {
      (this->MessageListener).Object = pFVar9;
      local_58 = (FDS_V2TIMAdvancedMsgListener *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MessageListener).SharedReferenceCount,&local_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  if ((this->ConversationListener).Object == (FDS_V2TIMConversationListener *)0x0) {
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      pFVar10 = (FDS_V2TIMConversationListener *)&DAT_00000010;
      pTVar6 = pTVar7;
LAB_14b9e5f98:
      if (((*(longlong *)&pFVar10->field_0x8 == 0) || (*(longlong *)&pFVar10->field_0x10 == 0)) ||
         (*(int *)(*(longlong *)&pFVar10->field_0x10 + 8) < 1)) {
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        *(FDS_V2TIMConversationListener **)&pFVar10->field_0x8 = pFVar10;
        if (pTVar6 != *(TReferenceControllerBase<1> **)&pFVar10->field_0x10) {
          if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
            UNLOCK();
          }
          plVar3 = *(longlong **)&pFVar10->field_0x10;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
          *(TReferenceControllerBase<1> **)&pFVar10->field_0x10 = pTVar6;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      }
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFDS_V2TIMConversationListener___00_SharedPointerInternals__6B_
      ;
      pTVar6[1]._padding_ = 0;
      pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[2]._padding_ = 0;
      V2TIMConversationListener::V2TIMConversationListener
                ((V2TIMConversationListener *)(pTVar6 + 1));
      pFVar10 = (FDS_V2TIMConversationListener *)(pTVar6 + 1);
      pTVar6[1]._padding_ = (longlong)&___7FDS_V2TIMConversationListener__6B_;
      if (pFVar10 != (FDS_V2TIMConversationListener *)0x0) goto LAB_14b9e5f98;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48 = pFVar10;
    local_40.ReferenceController = pTVar6;
    if (&this->ConversationListener != (TSharedPtr<FDS_V2TIMConversationListener,1> *)&local_48) {
      (this->ConversationListener).Object = pFVar10;
      local_48 = (FDS_V2TIMConversationListener *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ConversationListener).SharedReferenceCount,&local_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  if ((this->GroupListener).Object != (FDS_V2TIMGroupListener *)0x0) {
    return;
  }
  pTVar6 = ::operator_new(0x28);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_V2TIMGroupListener___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    V2TIMGroupListener::V2TIMGroupListener((V2TIMGroupListener *)(pTVar6 + 1));
    pFVar8 = (FDS_V2TIMGroupListener *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7FDS_V2TIMGroupListener__6B_;
    pTVar7 = pTVar6;
    if (pFVar8 == (FDS_V2TIMGroupListener *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14b9e6138;
    }
  }
  if (((*(longlong *)&pFVar8->field_0x8 == 0) || (*(longlong *)&pFVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar8->field_0x10 + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FDS_V2TIMGroupListener **)&pFVar8->field_0x8 = pFVar8;
    if (pTVar7 != *(TReferenceControllerBase<1> **)&pFVar8->field_0x10) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar8->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar8->field_0x10 = pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_14b9e6138:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pFVar8;
  local_30.ReferenceController = pTVar7;
  if (&this->GroupListener != (TSharedPtr<FDS_V2TIMGroupListener,1> *)&local_38) {
    (this->GroupListener).Object = pFVar8;
    local_38 = (FDS_V2TIMGroupListener *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GroupListener).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Created @ 14b9e6a10

void __thiscall UDS_TencentCloudChatManager::Created(UDS_TencentCloudChatManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  if (this->ChatState != Uninitialized) {
    this->ChatState = Uninitialized;
  }
  return;
}

// DestroyListeners @ 14b9e7750

void __thiscall UDS_TencentCloudChatManager::DestroyListeners(UDS_TencentCloudChatManager *this)

{
  TSharedPtr<FDS_V2TIMAdvancedMsgListener,1> *pTVar1;
  longlong local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->MessageListener;
  if (pTVar1->Object != (FDS_V2TIMAdvancedMsgListener *)0x0) {
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FDS_V2TIMAdvancedMsgListener,1> *)&local_38) {
      pTVar1->Object = (FDS_V2TIMAdvancedMsgListener *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MessageListener).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
  }
  if ((this->ConversationListener).Object != (FDS_V2TIMConversationListener *)0x0) {
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->ConversationListener != (TSharedPtr<FDS_V2TIMConversationListener,1> *)&local_28) {
      (this->ConversationListener).Object = (FDS_V2TIMConversationListener *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ConversationListener).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
  }
  if ((this->GroupListener).Object != (FDS_V2TIMGroupListener *)0x0) {
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->GroupListener != (TSharedPtr<FDS_V2TIMGroupListener,1> *)&local_18) {
      (this->GroupListener).Object = (FDS_V2TIMGroupListener *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->GroupListener).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    return;
  }
  return;
}

// Destroyed @ 14b9e8260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_TencentCloudChatManager::Destroyed(UDS_TencentCloudChatManager *this)

{
  V2TIMManager *pVVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_198 [32];
  undefined8 uStack_168;
  FSharedReferencer<1> FStack_160;
  undefined8 uStack_158;
  FSharedReferencer<1> FStack_150;
  undefined8 uStack_148;
  FSharedReferencer<1> FStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  RemoveListeners(this);
  if (this->ChatState != Uninitialized) {
    this->ChatState = Uninitialized;
    pVVar1 = V2TIMManager::GetInstance();
    if (pVVar1 == (V2TIMManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_TencentCloudChatManager::UnInitSDK",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_138.Ptr,0x9c,L"[TCC] v2TIMMng is nullptr.")
        ;
        if ((void *)TStack_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_138._padding_);
        }
      }
    }
    else {
      (**(code **)((longlong)*pVVar1 + 0x20))(pVVar1);
    }
  }
  if ((this->MessageListener).Object != (FDS_V2TIMAdvancedMsgListener *)0x0) {
    uStack_168 = 0;
    FStack_160.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->MessageListener != (TSharedPtr<FDS_V2TIMAdvancedMsgListener,1> *)&uStack_168) {
      (this->MessageListener).Object = (FDS_V2TIMAdvancedMsgListener *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MessageListener).SharedReferenceCount,&FStack_160);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_160.ReferenceController);
  }
  if ((this->ConversationListener).Object != (FDS_V2TIMConversationListener *)0x0) {
    uStack_158 = 0;
    FStack_150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->ConversationListener != (TSharedPtr<FDS_V2TIMConversationListener,1> *)&uStack_158) {
      (this->ConversationListener).Object = (FDS_V2TIMConversationListener *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ConversationListener).SharedReferenceCount,&FStack_150);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_150.ReferenceController);
  }
  if ((this->GroupListener).Object != (FDS_V2TIMGroupListener *)0x0) {
    uStack_148 = 0;
    FStack_140.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->GroupListener != (TSharedPtr<FDS_V2TIMGroupListener,1> *)&uStack_148) {
      (this->GroupListener).Object = (FDS_V2TIMGroupListener *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->GroupListener).SharedReferenceCount,&FStack_140);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_140.ReferenceController);
  }
  ClearRequests(this);
  ::FString::Empty(&this->TencentUserSig);
  this->TencentSDKAppID = 0;
  return;
}

// EnqueueBatchedRequests @ 14b9e89b0

void __thiscall
UDS_TencentCloudChatManager::EnqueueBatchedRequests(UDS_TencentCloudChatManager *this)

{
  double dVar1;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  if ((*(int *)&(this->UserInfoBatcher).BatchedDataContainer.Elements.field_0x8 !=
       *(int *)&(this->UserInfoBatcher).BatchedDataContainer.Elements.field_0x34) &&
     ((this->UserInfoBatcher).BatchInterval <= dVar1 - (this->UserInfoBatcher).LastBatchTime)) {
    TDS_RequestBatcher<__int64>::
    ProcessBatches<_UDS_TencentCloudChatManager::EnqueueBatchedRequests_::__l5::<lambda_1>_>
              (&this->UserInfoBatcher,dVar1,(<lambda_1>)this);
  }
  if ((*(int *)&(this->TranslateMessageBatcher).BatchedDataContainer.Elements.field_0x8 !=
       *(int *)&(this->TranslateMessageBatcher).BatchedDataContainer.Elements.field_0x34) &&
     ((this->TranslateMessageBatcher).BatchInterval <=
      dVar1 - (this->TranslateMessageBatcher).LastBatchTime)) {
    TDS_RequestBatcher<TTuple<unsigned___int64,FString>_>::Reset(&this->TranslateMessageBatcher);
  }
  TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey>::
  ProcessPendingRequest<_UDS_TencentCloudChatManager::EnqueueBatchedRequests_::__l2::<lambda_2>_>
            (&this->MarkAsReadHandler,dVar1,(<lambda_2>)this);
  return;
}

// EnqueueRequest @ 14b9e8a40

void __thiscall
UDS_TencentCloudChatManager::EnqueueRequest
          (UDS_TencentCloudChatManager *this,TSharedPtr<FDS_V2TIMRequestBase,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  if (param_1->Object != (FDS_V2TIMRequestBase *)0x0) {
    pTVar3 = ::operator_new(0x18);
    if (pTVar3 != (TNode *)0x0) {
      pTVar3->NextNode = (TNode *)0x0;
      (pTVar3->Item).Object = param_1->Object;
      pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
      (pTVar3->Item).SharedReferenceCount.ReferenceController = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar2 = (this->RequestQueue).Head;
      (this->RequestQueue).Head = pTVar3;
      pTVar2->NextNode = pTVar3;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetInst @ 14b9f0ab0

UDS_TencentCloudChatManager * __cdecl UDS_TencentCloudChatManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_TencentCloudChatManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_TencentCloudChatManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_TencentCloudChatManager_NoRegister();
  pUVar3 = (UDS_TencentCloudChatManager *)
           UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_TencentCloudChatManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_TencentCloudChatManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_TencentCloudChatManager *)0x0;
}

// Init @ 14b9f5050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UDS_TencentCloudChatManager::Init(UDS_TencentCloudChatManager *this)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  FString *pFVar1;
  FString *pFVar2;
  TDS_RequestBatcher<__int64> *pTVar3;
  void *pvVar4;
  ForElementType<FSetElementId> FVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  TDS_RequestBatcher<__int64> *pTVar8;
  TDS_RequestBatcher<TTuple<unsigned___int64,FString>_> *pTVar9;
  undefined1 auStackY_f8 [32];
  FString local_c8;
  undefined1 local_b8 [16];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  undefined1 local_98 [32];
  ForElementType<FSetElementId> local_78;
  int local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  void *local_58;
  int local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  ::FString::FString(&local_c8,L"UserInfoBatch");
  pTVar8 = TDS_RequestBatcher<__int64>::TDS_RequestBatcher<__int64>
                     ((TDS_RequestBatcher<__int64> *)local_b8,&local_c8,__real_3ff0000000000000,100)
  ;
  pTVar3 = &this->UserInfoBatcher;
  if (pTVar3 != pTVar8) {
    pvVar4 = *(void **)&(pTVar3->BatchedDataContainer).Elements;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    _Src = &(pTVar8->BatchedDataContainer).Elements.field_0x10;
    *(undefined8 *)&(pTVar3->BatchedDataContainer).Elements =
         *(undefined8 *)&(pTVar8->BatchedDataContainer).Elements;
    _Dst = &(this->UserInfoBatcher).BatchedDataContainer.Elements.field_0x10;
    *(undefined8 *)&(pTVar8->BatchedDataContainer).Elements = 0;
    *(undefined4 *)&(this->UserInfoBatcher).BatchedDataContainer.Elements.field_0x8 =
         *(undefined4 *)&(pTVar8->BatchedDataContainer).Elements.field_0x8;
    *(undefined4 *)&(this->UserInfoBatcher).BatchedDataContainer.Elements.field_0xc =
         *(undefined4 *)&(pTVar8->BatchedDataContainer).Elements.field_0xc;
    *(undefined8 *)&(pTVar8->BatchedDataContainer).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(pTVar8->BatchedDataContainer).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar4 = *(void **)&(this->UserInfoBatcher).BatchedDataContainer.Elements.field_0x20;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      *(undefined8 *)&(this->UserInfoBatcher).BatchedDataContainer.Elements.field_0x20 =
           *(undefined8 *)&(pTVar8->BatchedDataContainer).Elements.field_0x20;
      *(undefined8 *)&(pTVar8->BatchedDataContainer).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->UserInfoBatcher).BatchedDataContainer.Elements.field_0x28 =
           *(undefined4 *)&(pTVar8->BatchedDataContainer).Elements.field_0x28;
      *(undefined4 *)&(this->UserInfoBatcher).BatchedDataContainer.Elements.field_0x2c =
           *(undefined4 *)&(pTVar8->BatchedDataContainer).Elements.field_0x2c;
      *(undefined8 *)&(pTVar8->BatchedDataContainer).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->UserInfoBatcher).BatchedDataContainer.Elements.field_0x30 =
         *(undefined4 *)&(pTVar8->BatchedDataContainer).Elements.field_0x30;
    *(undefined4 *)&(this->UserInfoBatcher).BatchedDataContainer.Elements.field_0x34 =
         *(undefined4 *)&(pTVar8->BatchedDataContainer).Elements.field_0x34;
    *(undefined4 *)&(pTVar8->BatchedDataContainer).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pTVar8->BatchedDataContainer).Elements.field_0x34 = 0;
    if ((pTVar8->BatchedDataContainer).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
      *(undefined4 *)(this->UserInfoBatcher).BatchedDataContainer.Hash.InlineData =
           *(undefined4 *)(pTVar8->BatchedDataContainer).Hash.InlineData;
    }
    FVar5 = (this->UserInfoBatcher).BatchedDataContainer.Hash.SecondaryData;
    if (FVar5 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    (this->UserInfoBatcher).BatchedDataContainer.Hash.SecondaryData =
         (pTVar8->BatchedDataContainer).Hash.SecondaryData;
    (pTVar8->BatchedDataContainer).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (this->UserInfoBatcher).BatchedDataContainer.HashSize = (pTVar8->BatchedDataContainer).HashSize;
    (pTVar8->BatchedDataContainer).HashSize = 0;
  }
  pFVar1 = &pTVar8->BatchRequestName;
  pFVar2 = &(this->UserInfoBatcher).BatchRequestName;
  if (pFVar2 != pFVar1) {
    pFVar6 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->UserInfoBatcher).BatchRequestName.Data.ArrayNum =
         (pTVar8->BatchRequestName).Data.ArrayNum;
    (this->UserInfoBatcher).BatchRequestName.Data.ArrayMax =
         (pTVar8->BatchRequestName).Data.ArrayMax;
    (pTVar8->BatchRequestName).Data.ArrayNum = 0;
    (pTVar8->BatchRequestName).Data.ArrayMax = 0;
  }
  (this->UserInfoBatcher).BatchInterval = pTVar8->BatchInterval;
  (this->UserInfoBatcher).MaxBatchSize = pTVar8->MaxBatchSize;
  (this->UserInfoBatcher).LastBatchTime = pTVar8->LastBatchTime;
  if ((void *)CONCAT44(uStack_64,local_68) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_64,local_68));
  }
  local_70 = 0;
  if (local_78 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78);
  }
  TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_b8);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_c8,L"TranslateMessageBatch");
  pTVar9 = TDS_RequestBatcher<TTuple<unsigned___int64,FString>_>::
           TDS_RequestBatcher<TTuple<unsigned___int64,FString>_>
                     ((TDS_RequestBatcher<TTuple<unsigned___int64,FString>_> *)local_b8,&local_c8,
                      __real_3ff0000000000000,100);
  TDS_RequestBatcher<TTuple<unsigned___int64,FString>_>::operator=
            (&this->TranslateMessageBatcher,pTVar9);
  if ((void *)CONCAT44(uStack_64,local_68) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_64,local_68));
  }
  local_70 = 0;
  if (local_78 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_b8);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_b8._0_8_ = ___xmm_00000000000000003ff0000000000000;
  local_b8._8_8_ = _UNK_150689518;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0._0_4_ = 0;
  local_a0._4_4_ = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<FSetElementId>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  uStack_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey>::operator=
            (&this->MarkAsReadHandler,
             (TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey> *)local_b8);
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FDS_MarkAsReadKey,FDS_MarkAsReadKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FDS_MarkAsReadKey,FDS_MarkAsReadKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar7 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar7 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  uStack_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  DestructItems<FDS_MarkAsReadKey,int>((FDS_MarkAsReadKey *)local_a8.Data,(int)local_a0);
  if ((FDS_MarkAsReadKey *)local_a8.Data != (FDS_MarkAsReadKey *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return;
}

// InitSDK @ 14b9f8a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_TencentCloudChatManager::InitSDK(UDS_TencentCloudChatManager *this)

{
  EDS_TencentCloudChatState EVar1;
  char cVar2;
  UDS_LogManager *pUVar3;
  V2TIMManager *pVVar4;
  Type TVar5;
  undefined1 auStackY_198 [32];
  uint uVar6;
  wchar_t *pwVar7;
  V2TIMSDKConfig local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  EVar1 = this->ChatState;
  if ((((EVar1 == Initialized) || (EVar1 == LoggingIn)) || (EVar1 == LoggedIn)) ||
     (EVar1 == LoginFailed)) {
    return true;
  }
  if (EVar1 == Uninitialized) {
    this->ChatState = InitFailed;
  }
  else if (EVar1 != InitFailed) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_TencentCloudChatManager::InitSDK",0x24,Yes);
    pwVar7 = L"[TCC] InitSDK - Invalid ChatState for Init";
    uVar6 = 0x74;
    goto LAB_14b9f8b5f;
  }
  pVVar4 = V2TIMManager::GetInstance();
  if (pVVar4 == (V2TIMManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = (longlong)pVVar4;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_TencentCloudChatManager::InitSDK",0x24,Yes);
    pwVar7 = L"[TCC] v2TIMMng is nullptr.";
    uVar6 = 0x7d;
LAB_14b9f8b5f:
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar6,pwVar7);
    if ((V2TIMManager *)local_138._padding_ != (V2TIMManager *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    return false;
  }
  V2TIMSDKConfig::V2TIMSDKConfig(&local_168);
  cVar2 = (**(code **)((longlong)*pVVar4 + 0x18))(pVVar4,this->TencentSDKAppID,&local_168);
  if (cVar2 == '\x01') {
    if (this->ChatState != Initialized) {
      this->ChatState = Initialized;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b9f8cb1;
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_TencentCloudChatManager::InitSDK",0x24,Yes);
    TVar5 = Display;
    pwVar7 = L"[TCC] InitSDK() == true";
    uVar6 = 0x86;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b9f8cb1;
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_TencentCloudChatManager::InitSDK",0x24,Yes);
    TVar5 = Warning;
    pwVar7 = L"[TCC] InitSDK() == false";
    uVar6 = 0x8a;
  }
  UDS_LogManager::PrintLog(pUVar3,1,TVar5,local_138.Ptr,uVar6,pwVar7);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14b9f8cb1:
  V2TIMSDKConfig::~V2TIMSDKConfig(&local_168);
  return (bool)cVar2;
}

// IsInitialized @ 14b9f9350

bool __thiscall UDS_TencentCloudChatManager::IsInitialized(UDS_TencentCloudChatManager *this)

{
  EDS_TencentCloudChatState EVar1;
  
  EVar1 = this->ChatState;
  if ((((EVar1 != Initialized) && (EVar1 != LoggingIn)) && (EVar1 != LoggedIn)) &&
     (EVar1 != LoginFailed)) {
    return false;
  }
  return true;
}

// IsLoggedIn @ 14b9f9510

bool __thiscall UDS_TencentCloudChatManager::IsLoggedIn(UDS_TencentCloudChatManager *this)

{
  return this->ChatState == LoggedIn;
}

// IsLoggingIn @ 14b9f9520

bool __thiscall UDS_TencentCloudChatManager::IsLoggingIn(UDS_TencentCloudChatManager *this)

{
  return this->ChatState == LoggingIn;
}

// OnErrorLogOut @ 14b9ff0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_TencentCloudChatManager::OnErrorLogOut(UDS_TencentCloudChatManager *this)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_TencentCloudChatManager::OnErrorLogOut",0x2a,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0x204,L"[TCC] Failed Logout.");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  if (this->ChatState == LoggingOut) {
    this->ChatState = LoggedIn;
  }
  return;
}

// OnErrorLogin @ 14b9ff1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_TencentCloudChatManager::OnErrorLogin(UDS_TencentCloudChatManager *this)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_TencentCloudChatManager::OnErrorLogin",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0x1dd,L"[TCC] Failed Login.");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  if (this->ChatState == LoggingIn) {
    this->ChatState = LoginFailed;
  }
  return;
}

// OnReceive_TencentUserSig @ 14ba028b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_TencentCloudChatManager::OnReceive_TencentUserSig
          (UDS_TencentCloudChatManager *this,FString *param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  ::FString::operator=(&this->TencentUserSig,param_1);
  iVar1 = (this->TencentUserSig).Data.ArrayNum;
  this->TencentSDKAppID = param_2;
  if ((iVar1 < 2) || (param_2 == 0)) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::OnReceive_TencentUserSig",0x35,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x188,L"[TCC] Invalid TencentUserSig or SDKAppID.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    if (this->ChatState != InitFailed) {
      this->ChatState = InitFailed;
    }
  }
  else {
    bVar2 = InitSDK(this);
    if (!bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_TencentCloudChatManager::OnReceive_TencentUserSig",0x35,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,400,L"[TCC] Failed to V2TIMManager::InitSDK().");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return;
}

// OnRequestCompletion @ 14ba03d90

void __thiscall
UDS_TencentCloudChatManager::OnRequestCompletion
          (UDS_TencentCloudChatManager *this,TWeakPtr<FDS_V2TIMRequestBase,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDS_V2TIMRequestBase *pFVar3;
  atomic<int> aVar4;
  uint uVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  TSharedPtr<FDS_V2TIMRequestBase_const_,1> local_18;
  
  pTVar6 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ba03dd4;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar2 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar7);
    pFVar3 = param_1->Object;
    if (pFVar3 != (FDS_V2TIMRequestBase *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      local_18.Object = pFVar3;
      local_18.SharedReferenceCount.ReferenceController = pTVar6;
      if (*(int *)&(this->InFlightRequests).Elements.field_0x8 ==
          *(int *)&(this->InFlightRequests).Elements.field_0x34) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      }
      else {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        uVar5 = ((uint)((ulonglong)pFVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar3 >> 4)) *
                -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        TSet<TSharedPtr<FDS_V2TIMRequestBase,1>,DefaultKeyFuncs<TSharedPtr<FDS_V2TIMRequestBase,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<TSharedPtr<FDS_V2TIMRequestBase_const_,1>_>
                  (&this->InFlightRequests,uVar5 >> 0x10 ^ uVar5,&local_18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      }
    }
  }
LAB_14ba03dd4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pTVar6 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014ba03e0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      return;
    }
  }
  return;
}

// OnSuccessLogOut @ 14ba08760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_TencentCloudChatManager::OnSuccessLogOut(UDS_TencentCloudChatManager *this)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_TencentCloudChatManager::OnSuccessLogOut",0x2c,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0x1fd,L"[TCC] Success Logout.");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  ShutdownTencentCloudChat(this);
  return;
}

// OnSuccessLogin @ 14ba08840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_TencentCloudChatManager::OnSuccessLogin(UDS_TencentCloudChatManager *this)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_TencentCloudChatManager::OnSuccessLogin",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0x1d0,L"[TCC] Success Login.");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  if (this->ChatState != LoggedIn) {
    this->ChatState = LoggedIn;
  }
  CreateListeners(this);
  AddListeners(this);
  Request_SetSelfInfo(this);
  return;
}

// ProcessRequests @ 14ba0b040

void __thiscall UDS_TencentCloudChatManager::ProcessRequests(UDS_TencentCloudChatManager *this)

{
  TSharedPtr<FDS_V2TIMRequestBase,1> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  code *pcVar4;
  FDS_V2TIMRequestBase *pFVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  FDS_V2TIMRequestBase *local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  if (((this->RequestQueue).Tail)->NextNode != (TNode *)0x0) {
    iVar8 = 0;
    do {
      local_38 = (FDS_V2TIMRequestBase *)0x0;
      FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar2 = ((this->RequestQueue).Tail)->NextNode;
      if (pTVar2 == (TNode *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return;
      }
      pTVar1 = &pTVar2->Item;
      if ((TSharedPtr<FDS_V2TIMRequestBase,1> *)&local_38 != pTVar1) {
        local_38 = pTVar1->Object;
        pTVar1->Object = (FDS_V2TIMRequestBase *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&FStack_30,&(pTVar2->Item).SharedReferenceCount);
      }
      pTVar3 = (this->RequestQueue).Tail;
      (this->RequestQueue).Tail = pTVar2;
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<FDS_V2TIMRequestBase,1> *)&local_28) {
        pTVar1->Object = (FDS_V2TIMRequestBase *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pTVar2->Item).SharedReferenceCount,&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
      if (pTVar3 != (TNode *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pTVar3->Item).SharedReferenceCount.ReferenceController);
        ::operator_delete(pTVar3,0x18);
      }
      pFVar5 = local_38;
      if (local_38 != (FDS_V2TIMRequestBase *)0x0) {
        if ((local_38 == (FDS_V2TIMRequestBase *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        cVar7 = (**(code **)(pFVar5->_padding_ + 8))(pFVar5);
        if (cVar7 == '\x01') {
          TSet<TSharedPtr<FDS_V2TIMRequestBase,1>,DefaultKeyFuncs<TSharedPtr<FDS_V2TIMRequestBase,1>,0>,FDefaultSetAllocator>
          ::Emplace<TSharedPtr<FDS_V2TIMRequestBase,1>_&>
                    (&this->InFlightRequests,(TSharedPtr<FDS_V2TIMRequestBase,1> *)&stack0x00000008,
                     (bool *)&local_38);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_30.ReferenceController);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 1);
  }
  return;
}

// RemoveListeners @ 14ba0fb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_TencentCloudChatManager::RemoveListeners(UDS_TencentCloudChatManager *this)

{
  V2TIMManager *pVVar1;
  UDS_LogManager *pUVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pVVar1 = V2TIMManager::GetInstance();
  if (pVVar1 == (V2TIMManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::RemoveListeners",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x100,L"[TCC] v2TIMManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    plVar3 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
    if (plVar3 == (longlong *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = (longlong)plVar3;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_TencentCloudChatManager::RemoveListeners",0x2c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_138.Ptr,0x107,L"[TCC] v2TIMMessageManager is nullptr.");
        if ((longlong *)local_138._padding_ != (longlong *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      plVar4 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
      if (plVar4 == (longlong *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          local_138._padding_ = (longlong)plVar4;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_TencentCloudChatManager::RemoveListeners",0x2c,Yes);
          UDS_LogManager::PrintLog
                    (pUVar2,1,Warning,local_138.Ptr,0x10e,
                     L"[TCC] v2TIMConversationManager is nullptr.");
          if ((longlong *)local_138._padding_ != (longlong *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else {
        if ((this->MessageListener).Object != (FDS_V2TIMAdvancedMsgListener *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
        if ((this->ConversationListener).Object != (FDS_V2TIMConversationListener *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
        if ((this->GroupListener).Object != (FDS_V2TIMGroupListener *)0x0) {
          (**(code **)((longlong)*pVVar1 + 0x90))(pVVar1);
        }
      }
    }
  }
  return;
}

// Request_BookmarkConversation @ 14ba15120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_BookmarkConversation
          (UDS_TencentCloudChatManager *this,FString *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_178 [32];
  TSharedPtr<FDS_V2TIMRequestMarkConversation,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->ChatState == LoggedIn) {
    MakeRequest<FDS_V2TIMRequestMarkConversation>(this,&local_148);
    if (local_148.Object == (FDS_V2TIMRequestMarkConversation *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    ::FString::operator=(&(local_148.Object)->ConversationID,param_1);
    (local_148.Object)->bIsBookmark = param_2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    bVar2 = true;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::Request_BookmarkConversation",0x39,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x260,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

// Request_C2CHistoryMessageList @ 14ba15260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_C2CHistoryMessageList
          (UDS_TencentCloudChatManager *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_178 [32];
  TSharedPtr<FDS_V2TIMRequestGetHistoryMessageList,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->ChatState == LoggedIn) {
    MakeRequest<FDS_V2TIMRequestGetHistoryMessageList>(this,&local_148);
    if (local_148.Object == (FDS_V2TIMRequestGetHistoryMessageList *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    (local_148.Object)->WhisperPlayerUID = param_1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    bVar2 = true;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::Request_C2CHistoryMessageList",0x3a,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x299,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

// Request_ChangeGroupInfo @ 14ba15390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_ChangeGroupInfo
          (UDS_TencentCloudChatManager *this,FString *param_1,FString *param_2,int param_3,
          bool param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_V2TIMRequestSetGroupInfo,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (this->ChatState == LoggedIn) {
    MakeRequest<FDS_V2TIMRequestSetGroupInfo>(this,&local_158);
    if (local_158.Object == (FDS_V2TIMRequestSetGroupInfo *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    ::FString::operator=(&(local_158.Object)->GroupID,param_1);
    ::FString::operator=(&(local_158.Object)->GroupName,param_2);
    (local_158.Object)->bIsInviteGranted = param_4;
    (local_158.Object)->GroupIconID = param_3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    bVar2 = true;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_TencentCloudChatManager::Request_ChangeGroupInfo",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x33c,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

// Request_ChangeGroupOwner @ 14ba154e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_ChangeGroupOwner
          (UDS_TencentCloudChatManager *this,FString *param_1,long64 param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_V2TIMRequestTransferGroupOwner,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (this->ChatState == LoggedIn) {
    MakeRequest<FDS_V2TIMRequestTransferGroupOwner>(this,&local_158);
    if (local_158.Object == (FDS_V2TIMRequestTransferGroupOwner *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    ::FString::operator=(&(local_158.Object)->GroupID,param_1);
    if (local_158.Object == (FDS_V2TIMRequestTransferGroupOwner *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    (local_158.Object)->PlayerUID = param_2;
    (local_158.Object)->bLeaveAfter = param_3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    bVar2 = true;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_TencentCloudChatManager::Request_ChangeGroupOwner",0x35,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x392,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

// Request_ConversationList @ 14ba15650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_ConversationList(UDS_TencentCloudChatManager *this)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  TSharedPtr<FDS_V2TIMRequestGetConversationList,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->ChatState != LoggedIn) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::Request_ConversationList",0x35,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x253,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return false;
  }
  MakeRequest<FDS_V2TIMRequestGetConversationList>(this,&local_148);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  return true;
}

// Request_CreateGroup @ 14ba15760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_CreateGroup
          (UDS_TencentCloudChatManager *this,FString *param_1,int param_2,bool param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_V2TIMRequestCreateGroup,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (this->ChatState == LoggedIn) {
    MakeRequest<FDS_V2TIMRequestCreateGroup>(this,&local_158);
    if (local_158.Object == (FDS_V2TIMRequestCreateGroup *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    ::FString::operator=(&(local_158.Object)->GroupName,param_1);
    (local_158.Object)->MaxMemberCount = param_4;
    (local_158.Object)->GroupIconID = param_2;
    (local_158.Object)->bIsInviteGranted = param_3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    bVar2 = true;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_TencentCloudChatManager::Request_CreateGroup",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,799,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

// Request_DeleteConversation @ 14ba158b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_DeleteConversation
          (UDS_TencentCloudChatManager *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_178 [32];
  TSharedPtr<FDS_V2TIMRequestDeleteConversation,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->ChatState == LoggedIn) {
    MakeRequest<FDS_V2TIMRequestDeleteConversation>(this,&local_148);
    if (local_148.Object == (FDS_V2TIMRequestDeleteConversation *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    ::FString::operator=(&(local_148.Object)->ConversationID,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    bVar2 = true;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::Request_DeleteConversation",0x37,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x26e,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

// Request_DismissGroup @ 14ba159e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_DismissGroup
          (UDS_TencentCloudChatManager *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_178 [32];
  TSharedPtr<FDS_V2TIMRequestDismissGroup,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->ChatState == LoggedIn) {
    MakeRequest<FDS_V2TIMRequestDismissGroup>(this,&local_148);
    if (local_148.Object == (FDS_V2TIMRequestDismissGroup *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    ::FString::operator=(&(local_148.Object)->GroupID,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    bVar2 = true;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::Request_DismissGroup",0x31,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x375,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

// Request_GetGroupInfo @ 14ba15b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_GetGroupInfo
          (UDS_TencentCloudChatManager *this,FString *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_178 [32];
  TSharedPtr<FDS_V2TIMRequestGetGroupsInfo,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->ChatState == LoggedIn) {
    MakeRequest<FDS_V2TIMRequestGetGroupsInfo>(this,&local_148);
    if (local_148.Object == (FDS_V2TIMRequestGetGroupsInfo *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    ::FString::operator=(&(local_148.Object)->GroupID,param_1);
    if (local_148.Object == (FDS_V2TIMRequestGetGroupsInfo *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    (local_148.Object)->bIsCreateOrJoin = param_2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    bVar2 = true;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::Request_GetGroupInfo",0x31,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x32d,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

// Request_GetGroupMemberInfo @ 14ba15c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_GetGroupMemberInfo
          (UDS_TencentCloudChatManager *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UDS_LogManager *pUVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined1 auStackY_198 [32];
  TSharedPtr<FDS_V2TIMRequestGetGroupMembersInfo,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (this->ChatState == LoggedIn) {
    MakeRequest<FDS_V2TIMRequestGetGroupMembersInfo>(this,&local_158);
    if (local_158.Object == (FDS_V2TIMRequestGetGroupMembersInfo *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    ::FString::operator=(&(local_158.Object)->GroupID,param_1);
    if (local_158.Object == (FDS_V2TIMRequestGetGroupMembersInfo *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    pTVar8 = &(local_158.Object)->UserIDs;
    if (pTVar8 != param_2) {
      DestructItems<FString,int>
                ((FString *)(pTVar8->AllocatorInstance).Data,((local_158.Object)->UserIDs).ArrayNum)
      ;
      iVar2 = param_2->ArrayNum;
      piVar1 = &((local_158.Object)->UserIDs).ArrayMax;
      pFVar3 = (param_2->AllocatorInstance).Data;
      ((local_158.Object)->UserIDs).ArrayNum = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar2,*piVar1,&pTVar8->AllocatorInstance,iVar2,piVar1);
        ConstructItems<FString,FString,int>
                  ((pTVar8->AllocatorInstance).Data,(FString *)pFVar3,iVar2);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    bVar5 = true;
  }
  else {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_TencentCloudChatManager::Request_GetGroupMemberInfo",0x37,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_148.Ptr,0x34a,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    bVar5 = false;
  }
  return bVar5;
}

// Request_GroupHistoryMessageList @ 14ba15e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_GroupHistoryMessageList
          (UDS_TencentCloudChatManager *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_178 [32];
  TSharedPtr<FDS_V2TIMRequestGetHistoryMessageList,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->ChatState == LoggedIn) {
    MakeRequest<FDS_V2TIMRequestGetHistoryMessageList>(this,&local_148);
    if (local_148.Object == (FDS_V2TIMRequestGetHistoryMessageList *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    ::FString::operator=(&(local_148.Object)->GroupID,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    bVar2 = true;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::Request_GroupHistoryMessageList",0x3c,Yes)
      ;
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x2a7,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

// Request_GroupMemberList @ 14ba15f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_GroupMemberList
          (UDS_TencentCloudChatManager *this,FString *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [8];
  ForAnyElementType local_180;
  int local_178;
  TSharedPtr<FDS_V2TIMRequestGetGroupMemberList,1> local_170;
  FDestructionSentinel local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (this->ChatState == LoggedIn) {
    MakeRequest<FDS_V2TIMRequestGetGroupMemberList>(this,&local_170);
    if (local_170.Object == (FDS_V2TIMRequestGetGroupMemberList *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    ::FString::operator=(&(local_170.Object)->GroupID,param_1);
    if (local_170.Object == (FDS_V2TIMRequestGetGroupMemberList *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    local_188 = (undefined1  [8])0x0;
    local_180.Data = (FScriptContainerElement *)0x0;
    local_178 = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_188,param_2);
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&(local_170.Object)->FinishCallback,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_188);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
               (FWriteAccessScope *)&local_160);
    if ((local_178 != 0) && (local_180.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_180.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_180,0,0,0x10);
      local_178 = 0;
    }
    if (local_160.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
    }
    if (local_180.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_188);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_170.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    if (*(void **)&param_2->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&param_2->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_2);
    bVar2 = true;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_TencentCloudChatManager::Request_GroupMemberList",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x310,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    if (*(void **)&param_2->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&param_2->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_2);
    bVar2 = false;
  }
  return bVar2;
}

// Request_JoinGroup @ 14ba161b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_JoinGroup(UDS_TencentCloudChatManager *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_178 [32];
  TSharedPtr<FDS_V2TIMRequestJoinGroup,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->ChatState == LoggedIn) {
    MakeRequest<FDS_V2TIMRequestJoinGroup>(this,&local_148);
    if (local_148.Object == (FDS_V2TIMRequestJoinGroup *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    ::FString::operator=(&(local_148.Object)->GroupID,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    bVar2 = true;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::Request_JoinGroup",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x359,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

// Request_JoinedGroupList @ 14ba162e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_JoinedGroupList(UDS_TencentCloudChatManager *this)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  TSharedPtr<FDS_V2TIMRequestGetJoinedGroupList,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->ChatState != LoggedIn) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::Request_JoinedGroupList",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x303,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return false;
  }
  MakeRequest<FDS_V2TIMRequestGetJoinedGroupList>(this,&local_148);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  return true;
}

// Request_KickGroupMember @ 14ba163f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_KickGroupMember
          (UDS_TencentCloudChatManager *this,FString *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_178 [32];
  TSharedPtr<FDS_V2TIMRequestKickGroupMember,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->ChatState == LoggedIn) {
    MakeRequest<FDS_V2TIMRequestKickGroupMember>(this,&local_148);
    if (local_148.Object == (FDS_V2TIMRequestKickGroupMember *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    ::FString::operator=(&(local_148.Object)->GroupID,param_1);
    if (local_148.Object == (FDS_V2TIMRequestKickGroupMember *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    (local_148.Object)->PlayerUID = param_2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    bVar2 = true;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::Request_KickGroupMember",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,899,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

// Request_LeaveGroup @ 14ba16560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_LeaveGroup(UDS_TencentCloudChatManager *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_178 [32];
  TSharedPtr<FDS_V2TIMRequestQuitGroup,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->ChatState == LoggedIn) {
    MakeRequest<FDS_V2TIMRequestQuitGroup>(this,&local_148);
    if (local_148.Object == (FDS_V2TIMRequestQuitGroup *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    ::FString::operator=(&(local_148.Object)->GroupID,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    bVar2 = true;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::Request_LeaveGroup",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x367,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

// Request_Login @ 14ba16690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_TencentCloudChatManager::Request_Login(UDS_TencentCloudChatManager *this)

{
  EDS_TencentCloudChatState EVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  void *pvVar8;
  undefined1 auStackY_618 [32];
  FWeakObjectPtr local_5d8;
  TSharedPtr<FDS_V2TIMRequestLogin,1> local_5d0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_498;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_618;
  EVar1 = this->ChatState;
  if (((((EVar1 == Initialized) || (EVar1 == LoggingIn)) || (EVar1 == LoggedIn)) ||
      (EVar1 == LoginFailed)) && (1 < (byte)(EVar1 - LoggingIn))) {
    if ((this->TencentUserSig).Data.ArrayNum < 2) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar6 = UDS_LogManager::GetInst();
      local_5b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_5b8,"UDS_TencentCloudChatManager::Request_Login",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_5b8.Ptr,0x1ab,L"[TCC] TencentUserSig is empty.");
      pvVar8 = (void *)local_5b8._padding_;
    }
    else if (this->TencentSDKAppID == 0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar6 = UDS_LogManager::GetInst();
      local_498._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_498,"UDS_TencentCloudChatManager::Request_Login",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_498.Ptr,0x1b2,L"[TCC] TencentSDKAppID == 0");
      pvVar8 = (void *)local_498._padding_;
    }
    else {
      UDS_PlayerData::GetData((ulong64)&local_5d8,UDS_PlayerData::MainPlayerEntityID,false);
      bVar4 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_5d8,(void *)0x0);
      if (bVar4) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar6 = UDS_LogManager::GetInst();
        local_378._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_378,"UDS_TencentCloudChatManager::Request_Login",0x2a,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_378.Ptr,0x1b9,L"playerData is nullptr.");
        pvVar8 = (void *)local_378._padding_;
      }
      else {
        pUVar7 = FWeakObjectPtr::Get(&local_5d8);
        lVar2 = *(longlong *)&pUVar7[6].field_0x8;
        if (0 < lVar2) {
          if (this->ChatState != LoggingIn) {
            this->ChatState = LoggingIn;
          }
          MakeRequest<FDS_V2TIMRequestLogin>(this,&local_5d0);
          if ((local_5d0.Object == (FDS_V2TIMRequestLogin *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          (local_5d0.Object)->PlayerUID = lVar2;
          ::FString::operator=(&(local_5d0.Object)->TencentUserSig,&this->TencentUserSig);
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 != (UDS_LogManager *)0x0) {
            pUVar6 = UDS_LogManager::GetInst();
            local_138._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_138,"UDS_TencentCloudChatManager::Request_Login",0x2a,Yes);
            UDS_LogManager::PrintLog
                      (pUVar6,1,Display,local_138.Ptr,0x1c9,
                       L"[TCC] Request Login. (playerUID: %lld)");
            if ((void *)local_138._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_138._padding_);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_5d0.SharedReferenceCount.ReferenceController);
          return true;
        }
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar6 = UDS_LogManager::GetInst();
        local_258._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_258,"UDS_TencentCloudChatManager::Request_Login",0x2a,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_258.Ptr,0x1c0,L"playerUID is invalid.");
        pvVar8 = (void *)local_258._padding_;
      }
    }
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
  }
  return false;
}

// Request_Logout @ 14ba16a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_TencentCloudChatManager::Request_Logout(UDS_TencentCloudChatManager *this)

{
  EDS_TencentCloudChatState EVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  uint uVar3;
  wchar_t *pwVar4;
  TSharedPtr<FDS_V2TIMRequestLogout,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  EVar1 = this->ChatState;
  if ((((EVar1 == Initialized) || (EVar1 == LoggingIn)) || (EVar1 == LoggedIn)) ||
     (EVar1 == LoginFailed)) {
    if (EVar1 == LoggedIn) {
      this->ChatState = LoggingOut;
      MakeRequest<FDS_V2TIMRequestLogout>(this,&local_148);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.SharedReferenceCount.ReferenceController);
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_TencentCloudChatManager::Request_Logout",0x2b,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0x1f6,L"[TCC] Request Logout.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      return true;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_TencentCloudChatManager::Request_Logout",0x2b,Yes);
    pwVar4 = L"[TCC] IsLoggedIn() == false";
    uVar3 = 0x1ee;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_TencentCloudChatManager::Request_Logout",0x2b,Yes);
    pwVar4 = L"[TCC] IsInitialized() == false";
    uVar3 = 0x1e8;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// Request_MarkAllMessageAsRead @ 14ba16c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_MarkAllMessageAsRead(UDS_TencentCloudChatManager *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  double dVar3;
  undefined1 auStackY_1a8 [32];
  TSharedPtr<FDS_V2TIMRequestMarkMessageAsRead,1> local_168;
  FDS_MarkAsReadKey local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (this->ChatState == LoggedIn) {
    dVar3 = UDS_TimeUtilManager::GetCurrentServerTime();
    local_158.GroupID.Data.ArrayNum = 0;
    local_158.GroupID.Data.ArrayMax = 0;
    local_158.PlayerUID = 0;
    local_158.GroupID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    bVar1 = TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey>::TryRequestOrDefer
                      (&this->MarkAsReadHandler,&local_158,&local_158,dVar3);
    if (bVar1) {
      MakeRequest<FDS_V2TIMRequestMarkMessageAsRead>(this,&local_168);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_168.SharedReferenceCount.ReferenceController._4_4_,
                          local_168.SharedReferenceCount.ReferenceController._0_4_));
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        if (local_158.PlayerUID == 0) {
          if (local_158.GroupID.Data.ArrayNum < 2) {
            ::FString::FString((FString *)&local_168,L"All");
          }
          else {
            ::FString::PrintfImpl((FString *)&local_168,L"Group:%s");
          }
        }
        else {
          ::FString::PrintfImpl((FString *)&local_168,L"C2C:%lld");
        }
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_TencentCloudChatManager::Request_MarkAllMessageAsRead",0x39,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Display,local_138.Ptr,0x2eb,
                   L"[TCC] MarkAsRead - Request_MarkAllMessageAsRead : %s");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
        if (local_168.Object != (FDS_V2TIMRequestMarkMessageAsRead *)0x0) {
          FMemory::Free(local_168.Object);
        }
      }
    }
    if (local_158.GroupID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.GroupID.Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::Request_MarkAllMessageAsRead",0x39,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x2e0,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  return bVar1;
}

// Request_MarkC2CMessageAsRead @ 14ba16e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_MarkC2CMessageAsRead
          (UDS_TencentCloudChatManager *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  double dVar5;
  undefined1 auStackY_2d8 [32];
  FDS_MarkAsReadKey local_298;
  FString local_280;
  TSharedPtr<FDS_V2TIMRequestMarkMessageAsRead,1> local_270;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  if (this->ChatState == LoggedIn) {
    dVar5 = UDS_TimeUtilManager::GetCurrentServerTime();
    local_298.GroupID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_298.GroupID.Data.ArrayNum = 0;
    local_298.GroupID.Data.ArrayMax = 0;
    local_298.PlayerUID = param_1;
    bVar2 = TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey>::TryRequestOrDefer
                      (&this->MarkAsReadHandler,&local_298,&local_298,dVar5);
    if (bVar2) {
      MakeRequest<FDS_V2TIMRequestMarkMessageAsRead>(this,&local_270);
      if ((local_270.Object == (FDS_V2TIMRequestMarkMessageAsRead *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      (local_270.Object)->WhisperPlayerUID = local_298.PlayerUID;
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        if (local_298.PlayerUID == 0) {
          if (local_298.GroupID.Data.ArrayNum < 2) {
            ::FString::FString(&local_280,L"All");
          }
          else {
            ::FString::PrintfImpl(&local_280,L"Group:%s");
          }
        }
        else {
          ::FString::PrintfImpl(&local_280,L"C2C:%lld");
        }
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_TencentCloudChatManager::Request_MarkC2CMessageAsRead",0x39,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Display,local_138.Ptr,0x2c1,
                   L"[TCC] MarkAsRead - Request_MarkC2CMessageAsRead : %s");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
        if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_270.SharedReferenceCount.ReferenceController);
    }
    if (local_298.GroupID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.GroupID.Data.AllocatorInstance.Data);
    }
    bVar2 = true;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_TencentCloudChatManager::Request_MarkC2CMessageAsRead",0x39,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_258.Ptr,0x2b5,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

// Request_MarkGroupMessageAsRead @ 14ba170b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_MarkGroupMessageAsRead
          (UDS_TencentCloudChatManager *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  UDS_LogManager *pUVar7;
  longlong lVar8;
  FString *pFVar9;
  double dVar10;
  undefined1 auStackY_308 [32];
  FDS_MarkAsReadKey local_2c8;
  FString local_2b0;
  TSharedPtr<FDS_V2TIMRequestMarkMessageAsRead,1> local_2a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_308;
  if (this->ChatState == LoggedIn) {
    dVar10 = UDS_TimeUtilManager::GetCurrentServerTime();
    local_2c8.PlayerUID = 0;
    local_2c8.GroupID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c8.GroupID.Data.ArrayNum = 0;
    local_2c8.GroupID.Data.ArrayMax = 0;
    ::FString::operator=(&local_2c8.GroupID,param_1);
    bVar5 = TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey>::TryRequestOrDefer
                      (&this->MarkAsReadHandler,&local_2c8,&local_2c8,dVar10);
    if (bVar5) {
      MakeRequest<FDS_V2TIMRequestMarkMessageAsRead>(this,&local_2a0);
      if ((local_2a0.Object == (FDS_V2TIMRequestMarkMessageAsRead *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      _Src.Data = local_2c8.GroupID.Data.AllocatorInstance.Data;
      pFVar9 = &(local_2a0.Object)->GroupID;
      if (pFVar9 != &local_2c8.GroupID) {
        iVar4 = local_2c8.GroupID.Data.ArrayNum;
        lVar8 = (longlong)local_2c8.GroupID.Data.ArrayNum;
        piVar1 = &((local_2a0.Object)->GroupID).Data.ArrayMax;
        iVar2 = *piVar1;
        ((local_2a0.Object)->GroupID).Data.ArrayNum = local_2c8.GroupID.Data.ArrayNum;
        if ((local_2c8.GroupID.Data.ArrayNum == 0) && (iVar2 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_2c8.GroupID.Data.ArrayNum,iVar2,(ForAnyElementType *)pFVar9,
                     local_2c8.GroupID.Data.ArrayNum,piVar1);
          if (iVar4 != 0) {
            memcpy((pFVar9->Data).AllocatorInstance.Data,_Src.Data,lVar8 * 2);
          }
        }
      }
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        if (local_2c8.PlayerUID == 0) {
          if (local_2c8.GroupID.Data.ArrayNum < 2) {
            ::FString::FString(&local_2b0,L"All");
          }
          else {
            ::FString::PrintfImpl(&local_2b0,L"Group:%s");
          }
        }
        else {
          ::FString::PrintfImpl(&local_2b0,L"C2C:%lld");
        }
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_TencentCloudChatManager::Request_MarkGroupMessageAsRead",0x3b,Yes
                  );
        UDS_LogManager::PrintLog
                  (pUVar7,1,Display,local_168.Ptr,0x2d6,
                   L"[TCC] MarkAsRead - Request_MarkGroupMessageAsRead : %s");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
        if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a0.SharedReferenceCount.ReferenceController);
    }
    if (local_2c8.GroupID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.GroupID.Data.AllocatorInstance.Data);
    }
    bVar5 = true;
  }
  else {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_TencentCloudChatManager::Request_MarkGroupMessageAsRead",0x3b,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_288.Ptr,0x2ca,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
    bVar5 = false;
  }
  return bVar5;
}

// Request_SendC2CMessage @ 14ba173a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_SendC2CMessage
          (UDS_TencentCloudChatManager *this,long64 param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_178 [32];
  TSharedPtr<FDS_V2TIMRequestSendMessage,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->ChatState == LoggedIn) {
    MakeRequest<FDS_V2TIMRequestSendMessage>(this,&local_148);
    if (local_148.Object == (FDS_V2TIMRequestSendMessage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    (local_148.Object)->WhisperPlayerUID = param_1;
    ::FString::operator=(&(local_148.Object)->Message,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    bVar2 = true;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::Request_SendC2CMessage",0x33,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x27d,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

// Request_SendGroupMessage @ 14ba174e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_SendGroupMessage
          (UDS_TencentCloudChatManager *this,FString *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_V2TIMRequestSendMessage,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (this->ChatState == LoggedIn) {
    MakeRequest<FDS_V2TIMRequestSendMessage>(this,&local_158);
    if (local_158.Object == (FDS_V2TIMRequestSendMessage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    ::FString::operator=(&(local_158.Object)->GroupID,param_1);
    ::FString::operator=(&(local_158.Object)->Message,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    bVar2 = true;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_TencentCloudChatManager::Request_SendGroupMessage",0x35,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x28b,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

// Request_SetCustomInfos @ 14ba17620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_SetCustomInfos
          (UDS_TencentCloudChatManager *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FString *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UDS_LogManager *pUVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [8];
  FString local_180;
  TSharedPtr<FDS_V2TIMRequestSetCustomInfo,1> local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (this->ChatState == LoggedIn) {
    MakeRequest<FDS_V2TIMRequestSetCustomInfo>(this,&local_170);
    if ((local_170.Object == (FDS_V2TIMRequestSetCustomInfo *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar2 = param_1->ArrayNum;
    pFVar7 = (param_1->AllocatorInstance).Data;
    bVar4 = true;
    pFVar8 = pFVar7 + (longlong)iVar2 * 0x10;
    local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_180.Data.ArrayNum = 0;
    local_180.Data.ArrayMax = 0;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_188);
      }
      if (pFVar7 == pFVar8) break;
      if (bVar4) {
        bVar4 = false;
      }
      else {
        ::FString::AppendChars(&local_180,L" ",1);
      }
      iVar9 = *(int *)(pFVar7 + 8) + -1;
      if (*(int *)(pFVar7 + 8) == 0) {
        iVar9 = 0;
      }
      ::FString::AppendChars(&local_180,*(wchar_t **)pFVar7,iVar9);
      pFVar7 = pFVar7 + 0x10;
    }
    pFVar1 = &(local_170.Object)->CustomInfoString;
    if (pFVar1 != &local_180) {
      pFVar7 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_180.Data.AllocatorInstance.Data;
      ((local_170.Object)->CustomInfoString).Data.ArrayNum = local_180.Data.ArrayNum;
      ((local_170.Object)->CustomInfoString).Data.ArrayMax = local_180.Data.ArrayMax;
      local_180.Data.ArrayNum = 0;
      local_180.Data.ArrayMax = 0;
      local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_170.SharedReferenceCount.ReferenceController);
    bVar4 = true;
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_TencentCloudChatManager::Request_SetCustomInfos",0x33,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0x237,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    bVar4 = false;
  }
  return bVar4;
}

// Request_SetSelfInfo @ 14ba17850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_TencentCloudChatManager::Request_SetSelfInfo(UDS_TencentCloudChatManager *this)

{
  int iVar1;
  long64 lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  atomic<unsigned_char> *paVar9;
  int iVar10;
  undefined1 auStackY_518 [32];
  FWeakObjectPtr local_4d8;
  FWeakObjectPtr local_4d0;
  TSharedPtr<FDS_V2TIMRequestSetSelfInfo,1> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_518;
  if (this->ChatState == LoggedIn) {
    UDS_PlayerData::GetData((ulong64)&local_4d8,UDS_PlayerData::MainPlayerEntityID,false);
    bVar4 = FWeakObjectPtr::IsValid(&local_4d8);
    if (bVar4) {
      UDS_PlayerData::GetMainPlayerCurrentEntityID();
      UDS_CharInfoData::GetData((ulong64)&local_4d0);
      bVar4 = FWeakObjectPtr::IsValid(&local_4d0);
      if (bVar4) {
        pUVar7 = FWeakObjectPtr::Get(&local_4d8);
        lVar2 = *(long64 *)&pUVar7[6].field_0x8;
        pUVar7 = FWeakObjectPtr::Get(&local_4d8);
        pUVar8 = FWeakObjectPtr::Get(&local_4d0);
        iVar10 = *(int *)&pUVar8[8].field_0x8;
        pUVar8 = FWeakObjectPtr::Get(&local_4d0);
        iVar1 = *(int *)&pUVar8[8].field_0xc;
        MakeRequest<FDS_V2TIMRequestSetSelfInfo>(this,&local_4c8);
        if ((local_4c8.Object == (FDS_V2TIMRequestSetSelfInfo *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        (local_4c8.Object)->PlayerUID = lVar2;
        ::FString::operator=(&(local_4c8.Object)->Nickname,(FString *)&pUVar7[7].field_0x20);
        (local_4c8.Object)->CharID = iVar10;
        (local_4c8.Object)->CharLevel = iVar1;
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          FWeakObjectPtr::Get(&local_4d8);
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_TencentCloudChatManager::Request_SetSelfInfo",0x30,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Display,local_158.Ptr,0x22e,
                     L"[TCC] Request SetSelfInfo. (Nickname: %s)");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4c8.SharedReferenceCount.ReferenceController);
        return true;
      }
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_TencentCloudChatManager::Request_SetSelfInfo",0x30,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_278.Ptr,0x221,L"mainCharInfoData is invalid.");
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
      iVar10 = 0x222;
      paVar9 = &bGEnsureHasExecuted<6462613521942184482>;
    }
    else {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_398._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_398,"UDS_TencentCloudChatManager::Request_SetSelfInfo",0x30,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_398.Ptr,0x219,L"mainPlayerData is invalid.")
        ;
        if ((void *)local_398._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_398._padding_);
        }
      }
      iVar10 = 0x21a;
      paVar9 = &bGEnsureHasExecuted<6462613521942184474>;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar9,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Chat\\DS_TencentCloudChatManager.cpp"
                       ,iVar10,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_4b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4b8,"UDS_TencentCloudChatManager::Request_SetSelfInfo",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_4b8.Ptr,0x211,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_4b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4b8._padding_);
        return false;
      }
    }
  }
  return false;
}

// Request_TranslateMessage @ 14ba17c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_TranslateMessage
          (UDS_TencentCloudChatManager *this,ulong64 param_1,FString *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [8];
  ulong64 local_150;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (this->ChatState == LoggedIn) {
    local_150 = param_1;
    ::FString::FString(&local_148,param_2);
    TSet<TTuple<unsigned___int64,FString>,DefaultKeyFuncs<TTuple<unsigned___int64,FString>,0>,FDefaultSetAllocator>
    ::Emplace<TTuple<unsigned___int64,FString>_const_&>
              (&(this->TranslateMessageBatcher).BatchedDataContainer,
               (TTuple<unsigned___int64,FString> *)local_158,(bool *)&local_150);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::Request_TranslateMessage",0x35,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x2f5,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  return bVar1;
}

// Request_UserInfoList @ 14ba17d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_TencentCloudChatManager::Request_UserInfoList(UDS_TencentCloudChatManager *this,long64 param_1)

{
  UDS_LogManager *pUVar1;
  long64 local_res10 [3];
  undefined1 auStackY_178 [32];
  long64 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_res10[0] = param_1;
  if (this->ChatState != LoggedIn) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::Request_UserInfoList",0x31,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x245,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return false;
  }
  TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Emplace<__int64_const_&>
            (&(this->UserInfoBatcher).BatchedDataContainer,local_148,(bool *)local_res10);
  return true;
}

// SetChatState @ 14ba1ab10

void __thiscall
UDS_TencentCloudChatManager::SetChatState
          (UDS_TencentCloudChatManager *this,EDS_TencentCloudChatState param_1)

{
  if (this->ChatState != param_1) {
    this->ChatState = param_1;
  }
  return;
}

// ShutdownTencentCloudChat @ 14ba1d510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_TencentCloudChatManager::ShutdownTencentCloudChat(UDS_TencentCloudChatManager *this)

{
  V2TIMManager *pVVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_198 [32];
  undefined8 local_168;
  FSharedReferencer<1> FStack_160;
  undefined8 local_158;
  FSharedReferencer<1> FStack_150;
  undefined8 local_148;
  FSharedReferencer<1> FStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  RemoveListeners(this);
  if (this->ChatState != Uninitialized) {
    this->ChatState = Uninitialized;
    pVVar1 = V2TIMManager::GetInstance();
    if (pVVar1 == (V2TIMManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_TencentCloudChatManager::UnInitSDK",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x9c,L"[TCC] v2TIMMng is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      (**(code **)((longlong)*pVVar1 + 0x20))(pVVar1);
    }
  }
  if ((this->MessageListener).Object != (FDS_V2TIMAdvancedMsgListener *)0x0) {
    local_168 = 0;
    FStack_160.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->MessageListener != (TSharedPtr<FDS_V2TIMAdvancedMsgListener,1> *)&local_168) {
      (this->MessageListener).Object = (FDS_V2TIMAdvancedMsgListener *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MessageListener).SharedReferenceCount,&FStack_160);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_160.ReferenceController);
  }
  if ((this->ConversationListener).Object != (FDS_V2TIMConversationListener *)0x0) {
    local_158 = 0;
    FStack_150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->ConversationListener != (TSharedPtr<FDS_V2TIMConversationListener,1> *)&local_158) {
      (this->ConversationListener).Object = (FDS_V2TIMConversationListener *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ConversationListener).SharedReferenceCount,&FStack_150);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_150.ReferenceController);
  }
  if ((this->GroupListener).Object != (FDS_V2TIMGroupListener *)0x0) {
    local_148 = 0;
    FStack_140.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->GroupListener != (TSharedPtr<FDS_V2TIMGroupListener,1> *)&local_148) {
      (this->GroupListener).Object = (FDS_V2TIMGroupListener *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->GroupListener).SharedReferenceCount,&FStack_140);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_140.ReferenceController);
  }
  ClearRequests(this);
  ::FString::Empty(&this->TencentUserSig);
  this->TencentSDKAppID = 0;
  return;
}

// UnInitSDK @ 14ba20540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_TencentCloudChatManager::UnInitSDK(UDS_TencentCloudChatManager *this)

{
  V2TIMManager *pVVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (this->ChatState != Uninitialized) {
    this->ChatState = Uninitialized;
    pVVar1 = V2TIMManager::GetInstance();
    if (pVVar1 == (V2TIMManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_TencentCloudChatManager::UnInitSDK",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x9c,L"[TCC] v2TIMMng is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
          return;
        }
      }
    }
    else {
      (**(code **)((longlong)*pVVar1 + 0x20))(pVVar1);
    }
  }
  return;
}

// Update @ 14ba234c0

void __thiscall
UDS_TencentCloudChatManager::Update(UDS_TencentCloudChatManager *this,float *param_1)

{
  TSharedPtr<FDS_V2TIMRequestBase,1> *pTVar1;
  EDS_TencentCloudChatState EVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  code *pcVar5;
  double dVar6;
  FDS_V2TIMRequestBase *pFVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  FDS_V2TIMRequestBase *local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> aFStack_30 [3];
  
  if ((char)this->_padding_ != '\x01') {
    if (this->ChatState == LoggedIn) {
      dVar6 = UDS_TimeUtilManager::GetCurrentServerTime();
      if ((*(int *)&(this->UserInfoBatcher).BatchedDataContainer.Elements.field_0x8 !=
           *(int *)&(this->UserInfoBatcher).BatchedDataContainer.Elements.field_0x34) &&
         ((this->UserInfoBatcher).BatchInterval <= dVar6 - (this->UserInfoBatcher).LastBatchTime)) {
        TDS_RequestBatcher<__int64>::
        ProcessBatches<_UDS_TencentCloudChatManager::EnqueueBatchedRequests_::__l5::<lambda_1>_>
                  (&this->UserInfoBatcher,dVar6,(<lambda_1>)this);
      }
      if ((*(int *)&(this->TranslateMessageBatcher).BatchedDataContainer.Elements.field_0x8 !=
           *(int *)&(this->TranslateMessageBatcher).BatchedDataContainer.Elements.field_0x34) &&
         ((this->TranslateMessageBatcher).BatchInterval <=
          dVar6 - (this->TranslateMessageBatcher).LastBatchTime)) {
        TDS_RequestBatcher<TTuple<unsigned___int64,FString>_>::Reset(&this->TranslateMessageBatcher)
        ;
      }
      TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey>::
      ProcessPendingRequest<_UDS_TencentCloudChatManager::EnqueueBatchedRequests_::__l2::<lambda_2>_>
                (&this->MarkAsReadHandler,dVar6,(<lambda_2>)this);
    }
    EVar2 = this->ChatState;
    if (((((EVar2 == Initialized) || (EVar2 == LoggingIn)) || (EVar2 == LoggedIn)) ||
        ((EVar2 == LoginFailed || (EVar2 == LoggingOut)))) &&
       (((this->RequestQueue).Tail)->NextNode != (TNode *)0x0)) {
      iVar10 = 0;
      do {
        local_48 = (FDS_V2TIMRequestBase *)0x0;
        FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar3 = ((this->RequestQueue).Tail)->NextNode;
        if (pTVar3 == (TNode *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          return;
        }
        pTVar1 = &pTVar3->Item;
        if ((TSharedPtr<FDS_V2TIMRequestBase,1> *)&local_48 != pTVar1) {
          local_48 = pTVar1->Object;
          pTVar1->Object = (FDS_V2TIMRequestBase *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&FStack_40,&(pTVar3->Item).SharedReferenceCount);
        }
        pTVar4 = (this->RequestQueue).Tail;
        (this->RequestQueue).Tail = pTVar3;
        local_38 = 0;
        aFStack_30[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar1 != (TSharedPtr<FDS_V2TIMRequestBase,1> *)&local_38) {
          pTVar1->Object = (FDS_V2TIMRequestBase *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(pTVar3->Item).SharedReferenceCount,aFStack_30);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (aFStack_30[0].ReferenceController);
        if (pTVar4 != (TNode *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pTVar4->Item).SharedReferenceCount.ReferenceController);
          ::operator_delete(pTVar4,0x18);
        }
        pFVar7 = local_48;
        if (local_48 != (FDS_V2TIMRequestBase *)0x0) {
          if ((local_48 == (FDS_V2TIMRequestBase *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          cVar9 = (**(code **)(pFVar7->_padding_ + 8))(pFVar7);
          if (cVar9 == '\x01') {
            TSet<TSharedPtr<FDS_V2TIMRequestBase,1>,DefaultKeyFuncs<TSharedPtr<FDS_V2TIMRequestBase,1>,0>,FDefaultSetAllocator>
            ::Emplace<TSharedPtr<FDS_V2TIMRequestBase,1>_&>
                      (&this->InFlightRequests,
                       (TSharedPtr<FDS_V2TIMRequestBase,1> *)&stack0x00000008,(bool *)&local_48);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_40.ReferenceController);
        iVar10 = iVar10 + 1;
      } while (iVar10 < 1);
    }
  }
  return;
}

