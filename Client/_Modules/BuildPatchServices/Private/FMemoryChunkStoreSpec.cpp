// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 8

// GetTestFlags @ 1432f7740

EAutomationTestFlags __thiscall FMemoryChunkStoreSpec::GetTestFlags(FMemoryChunkStoreSpec *this)

{
  return ProductFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// GetTestSourceFileName @ 1432f7750

FString * __thiscall
FMemoryChunkStoreSpec::GetTestSourceFileName
          (FMemoryChunkStoreSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Tests\\Unit\\MemoryChunkStore.spec.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1432f7780

int __thiscall FMemoryChunkStoreSpec::GetTestSourceFileLine(FMemoryChunkStoreSpec *this)

{
  return 0xe;
}

// GetBeautifiedTestName @ 1432f7790

FString * __thiscall
FMemoryChunkStoreSpec::GetBeautifiedTestName
          (FMemoryChunkStoreSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"BuildPatchServices.Unit");
  return __return_storage_ptr__;
}

// Define @ 1432f77c0

void __thiscall FMemoryChunkStoreSpec::Define(FMemoryChunkStoreSpec *this)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *this_00;
  FGuid *pFVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  undefined1 local_res8 [24];
  FGuid local_58;
  code *local_48 [2];
  undefined **local_38;
  FMemoryChunkStoreSpec *local_30;
  undefined8 local_20;
  
  this->StoreSize = 0xf;
  uVar10 = 0;
  do {
    FGuid::NewGuid(&local_58);
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
              (&this->SomeChunks,(FGuid *)local_res8,(bool *)&local_58);
    if (uVar10 == (uVar10 / 5) * 5) {
      this_00 = &this->CleanableChunks;
      pFVar8 = (FGuid *)(local_res8 + 0x10);
LAB_1432f7830:
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (this_00,pFVar8,(bool *)&local_58);
    }
    else if (uVar10 % 5 == 1) {
      this_00 = &this->BootableChunks;
      pFVar8 = (FGuid *)(local_res8 + 8);
      goto LAB_1432f7830;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x1e);
  iVar7 = 0;
  iVar3 = *(int *)&(this->SomeChunks).Elements.field_0x28;
  iVar11 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->SomeChunks).Elements.field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)&(this->SomeChunks).Elements.field_0x10;
    }
    uVar10 = *puVar12;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar7;
      iVar11 = iVar11 + 0x20;
      iVar7 = iVar7 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar7) goto LAB_1432f78b8;
      uVar10 = puVar12[lVar9 + 1];
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar6 = (int)lVar9 + -1 + iVar11;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_1432f78b8:
  local_20 = 0;
  puVar1 = (undefined8 *)(*(longlong *)&(this->SomeChunks).Elements + (longlong)iVar6 * 0x18);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FMemoryChunkStoreSpec::Define'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMemoryChunkStoreSpec::Define'::__l2::<lambda_1>,void>::Call;
  (this->SomeChunk).A = (int)uVar4;
  (this->SomeChunk).B = (int)((ulonglong)uVar4 >> 0x20);
  (this->SomeChunk).C = (int)uVar5;
  (this->SomeChunk).D = (int)((ulonglong)uVar5 >> 0x20);
  local_30 = this;
  FAutomationSpecBase::BeforeEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_48);
  local_20 = 0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FMemoryChunkStoreSpec::Define'::`2'::<lambda_2>,0,0>::_vftable_
  ;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMemoryChunkStoreSpec::Define'::__l2::<lambda_2>,void>::Call;
  local_30 = this;
  ::FString::FString((FString *)&local_58,"MemoryChunkStore");
  FAutomationSpecBase::Describe
            ((FAutomationSpecBase *)this,(FString *)&local_58,
             (TFunction<void___cdecl(void)> *)local_48);
  if ((void *)local_58._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  local_20 = 0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FMemoryChunkStoreSpec::Define'::`2'::<lambda_3>,0,0>::_vftable_
  ;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMemoryChunkStoreSpec::Define'::__l2::<lambda_3>,void>::Call;
  local_30 = this;
  FAutomationSpecBase::AfterEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_48);
  return;
}

// ~FMemoryChunkStoreSpec @ 1432fd6b0

void __thiscall FMemoryChunkStoreSpec::~FMemoryChunkStoreSpec(FMemoryChunkStoreSpec *this)

{
  ForElementType<FSetElementId> FVar1;
  FMockMemoryChunkStoreStat *pFVar2;
  FFakeChunkStore *pFVar3;
  FMockChunkEvictionPolicy *pFVar4;
  IMemoryChunkStore *pIVar5;
  
  (this->BootableChunks).HashSize = 0;
  FVar1 = (this->BootableChunks).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->BootableChunks).Elements);
  (this->CleanableChunks).HashSize = 0;
  FVar1 = (this->CleanableChunks).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CleanableChunks).Elements);
  (this->SomeChunks).HashSize = 0;
  FVar1 = (this->SomeChunks).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SomeChunks).Elements);
  pFVar2 = (this->MockMemoryChunkStoreStat).Ptr;
  if (pFVar2 != (FMockMemoryChunkStoreStat *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  pFVar3 = (this->FakeChunkStore).Ptr;
  if (pFVar3 != (FFakeChunkStore *)0x0) {
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  pFVar4 = (this->MockChunkEvictionPolicy).Ptr;
  if (pFVar4 != (FMockChunkEvictionPolicy *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  pIVar5 = (this->MemoryChunkStore).Ptr;
  if (pIVar5 != (IMemoryChunkStore *)0x0) {
    (**(code **)*pIVar5)(pIVar5,1);
  }
  FAutomationSpecBase::~FAutomationSpecBase((FAutomationSpecBase *)this);
  return;
}

// operator() @ 143303c80

void __thiscall `FMemoryChunkStoreSpec::Define'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  IMemoryChunkStore *pIVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  IMemoryChunkStore *pIVar6;
  
  lVar1 = *(longlong *)this;
  puVar3 = ::operator_new(0xb8);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[8] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0x12] = 0;
    puVar3[0x14] = 0;
    *puVar3 = &___7FMockChunkEvictionPolicy_BuildPatchServices__6B_;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x34) = 0x80;
    *(undefined4 *)(puVar3 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = 0;
    puVar3[9] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xf] = 0;
    *(undefined4 *)(puVar3 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x84) = 0x80;
    *(undefined4 *)(puVar3 + 0x11) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0x8c) = 0;
    puVar3[0x13] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
  }
  puVar5 = (undefined8 *)0x0;
  puVar4 = *(undefined8 **)(lVar1 + 0x1a0);
  if ((puVar4 != puVar3) && (*(undefined8 **)(lVar1 + 0x1a0) = puVar3, puVar4 != (undefined8 *)0x0))
  {
    (**(code **)*puVar4)(puVar4,1);
  }
  lVar1 = *(longlong *)this;
  puVar4 = ::operator_new(200);
  puVar3 = puVar5;
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x18] = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    *puVar4 = &___7FFakeChunkStore_BuildPatchServices__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(puVar4 + 9),4000);
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x12] = 0;
    *(undefined4 *)(puVar4 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x9c) = 0x80;
    *(undefined4 *)(puVar4 + 0x14) = 0xffffffff;
    *(undefined4 *)((longlong)puVar4 + 0xa4) = 0;
    puVar4[0x16] = 0;
    *(undefined4 *)(puVar4 + 0x17) = 0;
    puVar3 = puVar4;
  }
  puVar4 = *(undefined8 **)(lVar1 + 0x1a8);
  if ((puVar4 != puVar3) && (*(undefined8 **)(lVar1 + 0x1a8) = puVar3, puVar4 != (undefined8 *)0x0))
  {
    (**(code **)*puVar4)(puVar4,1);
  }
  lVar1 = *(longlong *)this;
  puVar3 = ::operator_new(0x58);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    *puVar3 = &___7FMockMemoryChunkStoreStat_BuildPatchServices__6B_;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar5 = puVar3;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0x1b0);
  if ((puVar3 != puVar5) && (*(undefined8 **)(lVar1 + 0x1b0) = puVar5, puVar3 != (undefined8 *)0x0))
  {
    (**(code **)*puVar3)(puVar3,1);
  }
  lVar1 = *(longlong *)this;
  pIVar6 = BuildPatchServices::FMemoryChunkStoreFactory::Create
                     (*(int *)(lVar1 + 0x1b8),*(IChunkEvictionPolicy **)(lVar1 + 0x1a0),
                      *(IChunkStore **)(lVar1 + 0x1a8),*(IMemoryChunkStoreStat **)(lVar1 + 0x1b0),
                      (IChunkReferenceTracker *)0x0);
  pIVar2 = *(IMemoryChunkStore **)(lVar1 + 0x198);
  if ((pIVar2 != pIVar6) &&
     (*(IMemoryChunkStore **)(lVar1 + 0x198) = pIVar6, pIVar2 != (IMemoryChunkStore *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  return;
}

// operator() @ 14330e1d0

void __thiscall `FMemoryChunkStoreSpec::Define'::__l2::<lambda_2>::operator()(void *this)

{
  FAutomationSpecBase *pFVar1;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FAutomationSpecBase *local_20;
  undefined8 local_10;
  
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FMemoryChunkStoreSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FMemoryChunkStoreSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"DumpToOverflow");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FMemoryChunkStoreSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FMemoryChunkStoreSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"Put");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FMemoryChunkStoreSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FMemoryChunkStoreSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"Get");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FMemoryChunkStoreSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FMemoryChunkStoreSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"Remove");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

