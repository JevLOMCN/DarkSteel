// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 9

// ~FOnlineNotificationTransportManager @ 14eb35400

void __thiscall
FOnlineNotificationTransportManager::~FOnlineNotificationTransportManager
          (FOnlineNotificationTransportManager *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->TransportMap).field_0x48 = 0;
  this->_padding_ = (longlong)&___7FOnlineNotificationTransportManager__6B_;
  pvVar1 = *(void **)&(this->TransportMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<IOnlineNotificationTransport,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<IOnlineNotificationTransport,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<IOnlineNotificationTransport,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TransportMap);
  return;
}

// AddNotificationTransport @ 14ebb6ab0

void __thiscall
FOnlineNotificationTransportManager::AddNotificationTransport
          (FOnlineNotificationTransportManager *this,
          TSharedPtr<IOnlineNotificationTransport,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *local_18;
  TSharedPtr<IOnlineNotificationTransport,1> *local_10;
  
  if (param_1->Object == (IOnlineNotificationTransport *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18 = &param_1->Object->Id;
  local_10 = param_1;
  TSet<TTuple<FString,TSharedPtr<IOnlineNotificationTransport,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IOnlineNotificationTransport,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<IOnlineNotificationTransport,1>_const_&>_>
            ((TSet<TTuple<FString,TSharedPtr<IOnlineNotificationTransport,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IOnlineNotificationTransport,1>,0>,FDefaultSetAllocator>
              *)&this->TransportMap,
             (TPairInitializer<FString_const_&,TSharedPtr<IOnlineNotificationTransport,1>_const_&> *
             )&stack0x00000008,(bool *)&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// CloseTap @ 14ebbf400

void __thiscall
FOnlineNotificationTransportManager::CloseTap
          (FOnlineNotificationTransportManager *this,FOnlineTransportTapHandle param_1)

{
  return;
}

// GetNotificationTransport @ 14ec00b90

TSharedPtr<IOnlineNotificationTransport,1> * __thiscall
FOnlineNotificationTransportManager::GetNotificationTransport
          (FOnlineNotificationTransportManager *this,
          TSharedPtr<IOnlineNotificationTransport,1> *__return_storage_ptr__,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  TSharedPtr<IOnlineNotificationTransport,1> *pTVar3;
  
  pTVar3 = TMapBase<FString,TSharedPtr<IOnlineNotificationTransport,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IOnlineNotificationTransport,1>,0>_>
           ::Find((TMapBase<FString,TSharedPtr<IOnlineNotificationTransport,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IOnlineNotificationTransport,1>,0>_>
                   *)&this->TransportMap,param_1);
  if (pTVar3 == (TSharedPtr<IOnlineNotificationTransport,1> *)0x0) {
    __return_storage_ptr__->Object = (IOnlineNotificationTransport *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = pTVar3->Object;
    pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// OpenTap @ 14ec0da20

FOnlineTransportTapHandle __thiscall
FOnlineNotificationTransportManager::OpenTap
          (FOnlineNotificationTransportManager *this,FUniqueNetId *param_1,
          FOnlineTransportTap *param_2)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return (FOnlineTransportTapHandle)(int)param_1;
}

// ReceiveTransportMessage @ 14ec0e5f0

bool __thiscall
FOnlineNotificationTransportManager::ReceiveTransportMessage
          (FOnlineNotificationTransportManager *this,FString *param_1,
          IOnlineNotificationTransportMessage *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedPtr<IOnlineNotificationTransport,1> *pTVar5;
  
  pTVar5 = TMapBase<FString,TSharedPtr<IOnlineNotificationTransport,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IOnlineNotificationTransport,1>,0>_>
           ::Find((TMapBase<FString,TSharedPtr<IOnlineNotificationTransport,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IOnlineNotificationTransport,1>,0>_>
                   *)&this->TransportMap,param_1);
  if (pTVar5 == (TSharedPtr<IOnlineNotificationTransport,1> *)0x0) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    return false;
  }
  if (pTVar5->Object == (IOnlineNotificationTransport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar4 = (**(code **)(pTVar5->Object->_padding_ + 0x20))(pTVar5->Object,param_2);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return (bool)uVar4;
}

// RemoveNotificationTransport @ 14ec10560

void __thiscall
FOnlineNotificationTransportManager::RemoveNotificationTransport
          (FOnlineNotificationTransportManager *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  if (*(int *)&(this->TransportMap).field_0x8 != *(int *)&(this->TransportMap).field_0x34) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar5 = L"";
      iVar4 = 0;
    }
    else {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
    TSet<TTuple<FString,TSharedPtr<IOnlineNotificationTransport,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IOnlineNotificationTransport,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,TSharedPtr<IOnlineNotificationTransport,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IOnlineNotificationTransport,1>,0>,FDefaultSetAllocator>
                *)&this->TransportMap,uVar3,param_1);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ResetNotificationTransports @ 14ec10df0

void __thiscall
FOnlineNotificationTransportManager::ResetNotificationTransports
          (FOnlineNotificationTransportManager *this)

{
  TMap<FString,TSharedPtr<IOnlineNotificationTransport,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IOnlineNotificationTransport,1>,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->TransportMap;
  bVar3 = 1 < *(int *)&(this->TransportMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FString,TSharedPtr<IOnlineNotificationTransport,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IOnlineNotificationTransport,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TSharedPtr<IOnlineNotificationTransport,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IOnlineNotificationTransport,1>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<IOnlineNotificationTransport,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<IOnlineNotificationTransport,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->TransportMap).field_0x8);
  puVar1 = &(this->TransportMap).field_0xc;
  *(undefined4 *)&(this->TransportMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->TransportMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TransportMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->TransportMap).field_0x2c;
  *(undefined4 *)&(this->TransportMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->TransportMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TransportMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->TransportMap).field_0x48 = 1;
    TSet<TTuple<FString,TSharedPtr<IOnlineNotificationTransport,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IOnlineNotificationTransport,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TSharedPtr<IOnlineNotificationTransport,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IOnlineNotificationTransport,1>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// SendNotification @ 14ec11910

bool __thiscall
FOnlineNotificationTransportManager::SendNotification
          (FOnlineNotificationTransportManager *this,FString *param_1,FOnlineNotification *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedPtr<IOnlineNotificationTransport,1> *pTVar5;
  
  pTVar5 = TMapBase<FString,TSharedPtr<IOnlineNotificationTransport,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IOnlineNotificationTransport,1>,0>_>
           ::Find((TMapBase<FString,TSharedPtr<IOnlineNotificationTransport,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IOnlineNotificationTransport,1>,0>_>
                   *)&this->TransportMap,param_1);
  if (pTVar5 == (TSharedPtr<IOnlineNotificationTransport,1> *)0x0) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    return false;
  }
  if (pTVar5->Object == (IOnlineNotificationTransport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar4 = (**(code **)(pTVar5->Object->_padding_ + 0x18))(pTVar5->Object,param_2);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return (bool)uVar4;
}

