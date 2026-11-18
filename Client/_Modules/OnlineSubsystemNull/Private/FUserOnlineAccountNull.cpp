// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 8

// ~FUserOnlineAccountNull @ 14ed13060

void __thiscall FUserOnlineAccountNull::~FUserOnlineAccountNull(FUserOnlineAccountNull *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FUserOnlineAccountNull__6B_;
  *(undefined4 *)&(this->UserAttributes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UserAttributes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UserAttributes);
  *(undefined4 *)&(this->AdditionalAuthData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AdditionalAuthData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AdditionalAuthData);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UserIdPtr).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FOnlineUser__6B_;
  return;
}

// GetAccessToken @ 14ed24680

FString * __thiscall
FUserOnlineAccountNull::GetAccessToken(FUserOnlineAccountNull *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"DummyAuthTicket");
  return __return_storage_ptr__;
}

// GetAuthAttribute @ 14ed24950

bool __thiscall
FUserOnlineAccountNull::GetAuthAttribute
          (FUserOnlineAccountNull *this,FString *param_1,FString *param_2)

{
  FString *pFVar1;
  
  pFVar1 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                   *)&this->AdditionalAuthData,param_1);
  if (pFVar1 != (FString *)0x0) {
    ::FString::operator=(param_2,pFVar1);
    return true;
  }
  return false;
}

// GetDisplayName @ 14ed252a0

FString * __thiscall
FUserOnlineAccountNull::GetDisplayName
          (FUserOnlineAccountNull *this,FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::FString(__return_storage_ptr__,L"DummyDisplayName");
  return __return_storage_ptr__;
}

// GetRealName @ 14ed25f20

FString * __thiscall
FUserOnlineAccountNull::GetRealName(FUserOnlineAccountNull *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"DummyRealName");
  return __return_storage_ptr__;
}

// GetUserAttribute @ 14ed26980

bool __thiscall
FUserOnlineAccountNull::GetUserAttribute
          (FUserOnlineAccountNull *this,FString *param_1,FString *param_2)

{
  FString *pFVar1;
  
  pFVar1 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                   *)&this->UserAttributes,param_1);
  if (pFVar1 != (FString *)0x0) {
    ::FString::operator=(param_2,pFVar1);
    return true;
  }
  return false;
}

// GetUserId @ 14ed269e0

TSharedRef<FUniqueNetId_const_,1> * __thiscall
FUserOnlineAccountNull::GetUserId
          (FUserOnlineAccountNull *this,TSharedRef<FUniqueNetId_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->UserIdPtr).Object;
  pTVar1 = (this->UserIdPtr).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// SetUserAttribute @ 14ed2ee10

bool __thiscall
FUserOnlineAccountNull::SetUserAttribute
          (FUserOnlineAccountNull *this,FString *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  bool bVar4;
  FString *local_18;
  FString *local_10;
  
  pFVar3 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                   *)&this->UserAttributes,param_1);
  if (pFVar3 != (FString *)0x0) {
    iVar2 = (pFVar3->Data).ArrayNum;
    iVar1 = (param_2->Data).ArrayNum;
    if (iVar2 == iVar1) {
      if (iVar2 < 2) {
        return false;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                         (wchar_t *)(param_2->Data).AllocatorInstance.Data);
      bVar4 = iVar2 == 0;
    }
    else {
      bVar4 = iVar1 + iVar2 == 1;
    }
    if (bVar4) {
      return false;
    }
  }
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&this->UserAttributes,
             (TPairInitializer<FString_const_&,FString_const_&> *)&stack0x00000008,(bool *)&local_18
            );
  return true;
}

