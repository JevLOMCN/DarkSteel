// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// ~FOnlineAsyncOp @ 14ee24ba0

void __thiscall UE::Online::FOnlineAsyncOp::~FOnlineAsyncOp(FOnlineAsyncOp *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Data).Data.field_0x48 = 0;
  this->_padding_ = (longlong)&___7FOnlineAsyncOp_Online_UE__6B_;
  pvVar1 = *(void **)&(this->Data).Data.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::Private::FOnlineOperationData::FOperationDataKey,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::Private::FOnlineOperationData::FOperationDataKey,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::Private::FOnlineOperationData::FOperationDataKey,TUniquePtr<UE::Online::Private::FOnlineOperationData::IData,TDefaultDelete<UE::Online::Private::FOnlineOperationData::IData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Data);
  return;
}

