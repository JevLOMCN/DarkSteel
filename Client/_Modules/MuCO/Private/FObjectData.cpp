// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// FObjectData @ 14ac50600

FObjectData * __thiscall
FUnrealMutableModelBulkReader::FObjectData::FObjectData(FObjectData *this,FObjectData *param_1)

{
  (this->Model).Object = (param_1->Model).Object;
  (this->Model).WeakReferenceCount.ReferenceController =
       (param_1->Model).WeakReferenceCount.ReferenceController;
  (param_1->Model).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->Model).Object = (FModel *)0x0;
  (this->BulkFilePrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BulkFilePrefix).Data.AllocatorInstance.Data =
       (param_1->BulkFilePrefix).Data.AllocatorInstance.Data;
  (param_1->BulkFilePrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BulkFilePrefix).Data.ArrayNum = (param_1->BulkFilePrefix).Data.ArrayNum;
  (this->BulkFilePrefix).Data.ArrayMax = (param_1->BulkFilePrefix).Data.ArrayMax;
  (param_1->BulkFilePrefix).Data.ArrayNum = 0;
  (param_1->BulkFilePrefix).Data.ArrayMax = 0;
  TSet<TTuple<int,FUnrealMutableModelBulkReader::FReadRequest>,TDefaultMapHashableKeyFuncs<int,FUnrealMutableModelBulkReader::FReadRequest,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<int,FUnrealMutableModelBulkReader::FReadRequest>,TDefaultMapHashableKeyFuncs<int,FUnrealMutableModelBulkReader::FReadRequest,0>,FDefaultSetAllocator>
            ((TSet<TTuple<int,FUnrealMutableModelBulkReader::FReadRequest>,TDefaultMapHashableKeyFuncs<int,FUnrealMutableModelBulkReader::FReadRequest,0>,FDefaultSetAllocator>
              *)&this->CurrentReadRequests,
             (TSet<TTuple<int,FUnrealMutableModelBulkReader::FReadRequest>,TDefaultMapHashableKeyFuncs<int,FUnrealMutableModelBulkReader::FReadRequest,0>,FDefaultSetAllocator>
              *)&param_1->CurrentReadRequests);
  TSet<TTuple<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>,0>,FDefaultSetAllocator>
              *)&this->ReadFileHandles,
             (TSet<TTuple<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>,0>,FDefaultSetAllocator>
              *)&param_1->ReadFileHandles);
  (this->ModelStreamableBulkData).Object = (param_1->ModelStreamableBulkData).Object;
  (this->ModelStreamableBulkData).WeakReferenceCount.ReferenceController =
       (param_1->ModelStreamableBulkData).WeakReferenceCount.ReferenceController;
  (param_1->ModelStreamableBulkData).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->ModelStreamableBulkData).Object = (FModelStreamableBulkData *)0x0;
  return this;
}

// ~FObjectData @ 14ac50b70

void __thiscall FUnrealMutableModelBulkReader::FObjectData::~FObjectData(FObjectData *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  
  pTVar3 = (this->ModelStreamableBulkData).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  *(undefined4 *)&(this->ReadFileHandles).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ReadFileHandles).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReadFileHandles);
  *(undefined4 *)&(this->CurrentReadRequests).field_0x48 = 0;
  pvVar4 = *(void **)&(this->CurrentReadRequests).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FUnrealMutableModelBulkReader::FReadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FUnrealMutableModelBulkReader::FReadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FUnrealMutableModelBulkReader::FReadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurrentReadRequests);
  pFVar5 = (this->BulkFilePrefix).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar3 = (this->Model).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return;
}

