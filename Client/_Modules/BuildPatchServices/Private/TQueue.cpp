// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 6

// TQueue<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0> @ 14327e010

TQueue<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0> * __thiscall
TQueue<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>::
TQueue<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>
          (TQueue<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0> *this)

{
  TNode *pTVar1;
  
  pTVar1 = ::operator_new(0x58);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    *(undefined8 *)&(pTVar1->Item).Elements = 0;
    *(undefined8 *)&(pTVar1->Item).Elements.field_0x8 = 0;
    *(undefined8 *)&(pTVar1->Item).Elements.field_0x10 = 0;
    *(undefined8 *)&(pTVar1->Item).Elements.field_0x18 = 0;
    *(undefined8 *)&(pTVar1->Item).Elements.field_0x20 = 0;
    *(undefined8 *)&(pTVar1->Item).Elements.field_0x28 = 0;
    *(undefined8 *)&(pTVar1->Item).Elements.field_0x30 = 0;
    (pTVar1->Item).Hash.InlineData[0] = '\0';
    (pTVar1->Item).Hash.InlineData[1] = '\0';
    (pTVar1->Item).Hash.InlineData[2] = '\0';
    (pTVar1->Item).Hash.InlineData[3] = '\0';
    (pTVar1->Item).Hash._padding_ = 0;
    (pTVar1->Item).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    *(undefined8 *)&(pTVar1->Item).HashSize = 0;
    pTVar1->NextNode = (TNode *)0x0;
    *(undefined8 *)&(pTVar1->Item).Elements = 0;
    *(undefined8 *)&(pTVar1->Item).Elements.field_0x8 = 0;
    *(undefined8 *)&(pTVar1->Item).Elements.field_0x20 = 0;
    *(undefined4 *)&(pTVar1->Item).Elements.field_0x28 = 0;
    *(undefined4 *)&(pTVar1->Item).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pTVar1->Item).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pTVar1->Item).Elements.field_0x34 = 0;
    (pTVar1->Item).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pTVar1->Item).HashSize = 0;
    this->Tail = pTVar1;
    this->Head = pTVar1;
    return this;
  }
  this->Tail = (TNode *)0x0;
  this->Head = (TNode *)0x0;
  return this;
}

// ~TQueue<TTuple<BuildPatchServices::FChunkUriRequest,TFunction<void___cdecl(BuildPatchServices::FChunkUriResponse)>_>,0> @ 143286370

void __thiscall
TQueue<TTuple<BuildPatchServices::FChunkUriRequest,TFunction<void___cdecl(BuildPatchServices::FChunkUriResponse)>_>,0>
::
~TQueue<TTuple<BuildPatchServices::FChunkUriRequest,TFunction<void___cdecl(BuildPatchServices::FChunkUriResponse)>_>,0>
          (TQueue<TTuple<BuildPatchServices::FChunkUriRequest,TFunction<void___cdecl(BuildPatchServices::FChunkUriResponse)>_>,0>
           *this)

{
  TNode *pTVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    if (*(longlong *)&(pTVar1->Item).field_0x20 != 0) {
      plVar2 = *(longlong **)&(pTVar1->Item).field_0x48;
      plVar4 = (longlong *)&(pTVar1->Item).field_0x30;
      if (plVar2 != (longlong *)0x0) {
        plVar4 = plVar2;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    pvVar3 = *(void **)&(pTVar1->Item).field_0x10;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    if (*(void **)&pTVar1->Item != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar1->Item);
    }
    ::operator_delete(pTVar1,0x60);
    pTVar1 = this->Tail;
  }
  return;
}

// ~TQueue<TTuple<FGuid,BuildPatchServices::FChunkUriResponse>,0> @ 143286400

void __thiscall
TQueue<TTuple<FGuid,BuildPatchServices::FChunkUriResponse>,0>::
~TQueue<TTuple<FGuid,BuildPatchServices::FChunkUriResponse>,0>
          (TQueue<TTuple<FGuid,BuildPatchServices::FChunkUriResponse>,0> *this)

{
  TNode *pTVar1;
  void *pvVar2;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    *(undefined4 *)&(pTVar1->Item).field_0x70 = 0;
    pvVar2 = *(void **)&(pTVar1->Item).field_0x68;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(pTVar1->Item).field_0x28);
    pvVar2 = *(void **)&(pTVar1->Item).field_0x18;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    ::operator_delete(pTVar1,0x80);
    pTVar1 = this->Tail;
  }
  return;
}

// ~TQueue<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0> @ 143286480

void __thiscall
TQueue<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>::
~TQueue<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>
          (TQueue<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0> *this)

{
  TNode *pTVar1;
  ForElementType<FSetElementId> FVar2;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    (pTVar1->Item).HashSize = 0;
    FVar2 = (pTVar1->Item).Hash.SecondaryData;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(pTVar1->Item).Elements);
    ::operator_delete(pTVar1,0x58);
    pTVar1 = this->Tail;
  }
  return;
}

// Enqueue @ 1432cf410

bool __thiscall
TQueue<TTuple<FGuid,BuildPatchServices::FChunkUriResponse>,0>::Enqueue
          (TQueue<TTuple<FGuid,BuildPatchServices::FChunkUriResponse>,0> *this,
          TTuple<FGuid,BuildPatchServices::FChunkUriResponse> *param_1)

{
  TNode *pTVar1;
  undefined8 uVar2;
  TNode *pTVar3;
  
  pTVar3 = ::operator_new(0x80);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    uVar2 = *(undefined8 *)&param_1->field_0x8;
    *(undefined8 *)&pTVar3->Item = *(undefined8 *)param_1;
    *(undefined8 *)&(pTVar3->Item).field_0x8 = uVar2;
    BuildPatchServices::FChunkUriResponse::FChunkUriResponse
              ((FChunkUriResponse *)&(pTVar3->Item).field_0x10,
               (FChunkUriResponse *)&param_1->field_0x10);
    if (((ulonglong)this & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar1 = this->Head;
    this->Head = pTVar3;
    UNLOCK();
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar1->NextNode = pTVar3;
    UNLOCK();
    return true;
  }
  return false;
}

// Enqueue @ 1432cf4c0

bool __thiscall
TQueue<TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>,FNull,FNull>,0>
::Enqueue(void *this,
         TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>
         *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = ::operator_new(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar2 + 6) = 0xff;
    *puVar2 = 0;
    TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>,FNull,FNull>
    ::operator=(puVar2 + 1,param_1);
    if (((ulonglong)this & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    puVar1 = *(undefined8 **)this;
    *(undefined8 **)this = puVar2;
    UNLOCK();
    if (((ulonglong)puVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    *puVar1 = puVar2;
    UNLOCK();
    return true;
  }
  return false;
}

