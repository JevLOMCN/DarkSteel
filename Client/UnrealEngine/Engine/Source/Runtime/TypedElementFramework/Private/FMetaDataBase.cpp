// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 5

// ~FMetaDataBase @ 142c9a160

void __thiscall UE::Editor::DataStorage::FMetaDataBase::~FMetaDataBase(FMetaDataBase *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->MutableData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MutableData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MutableData);
  *(undefined4 *)&(this->ImmutableData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ImmutableData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ImmutableData);
  return;
}

// Find @ 142cabee0

FMetaDataEntryView * __thiscall
UE::Editor::DataStorage::FMetaDataBase::Find
          (FMetaDataBase *this,FMetaDataEntryView *__return_storage_ptr__,FName param_1)

{
  TVariant<bool,unsigned___int64,__int64,double,FString> *pTVar1;
  FMetaDataEntryView *local_18;
  FMetaDataEntryView *local_10;
  
  pTVar1 = TMapBase<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
           ::Find((TMapBase<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
                   *)&this->ImmutableData,param_1);
  if (pTVar1 == (TVariant<bool,unsigned___int64,__int64,double,FString> *)0x0) {
    pTVar1 = TMapBase<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
             ::Find((TMapBase<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
                     *)&this->MutableData,param_1);
    (__return_storage_ptr__->DataView).TypeIndex = '\0';
    if (pTVar1 == (TVariant<bool,unsigned___int64,__int64,double,FString> *)0x0) {
      return __return_storage_ptr__;
    }
  }
  else {
    (__return_storage_ptr__->DataView).TypeIndex = '\0';
  }
  local_18 = __return_storage_ptr__;
  local_10 = __return_storage_ptr__;
  (*(code *)(&
            PTR_VisitApplyEncoded<0,0,UE::Editor::DataStorage::TOverloaded<_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_1>,_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_2>_>,TVariant<bool,unsigned___int64,__int64,double,FString>_const_&>_1509ca9f8
            )[pTVar1->TypeIndex])(&local_18,pTVar1);
  return __return_storage_ptr__;
}

// IsEmpty @ 142cafab0

bool __thiscall UE::Editor::DataStorage::FMetaDataBase::IsEmpty(FMetaDataBase *this)

{
  if ((*(int *)&(this->ImmutableData).field_0x8 == *(int *)&(this->ImmutableData).field_0x34) &&
     (*(int *)&(this->MutableData).field_0x8 == *(int *)&(this->MutableData).field_0x34)) {
    return true;
  }
  return false;
}

// Shrink @ 142cbb4b0

void __thiscall UE::Editor::DataStorage::FMetaDataBase::Shrink(FMetaDataBase *this)

{
  TSet<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>,FDefaultSetAllocator>
            *)&this->ImmutableData);
  TSet<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>,FDefaultSetAllocator>
            *)&this->MutableData);
  return;
}

// FMetaDataBase @ 142ce2360

FMetaDataBase * __thiscall
UE::Editor::DataStorage::FMetaDataBase::FMetaDataBase(FMetaDataBase *this,FMetaDataBase *param_1)

{
  this->_padding_ = (longlong)&___7FMetaDataBase_DataStorage_Editor_UE__6B_;
  *(undefined8 *)&(this->ImmutableData).field_0x0 = 0;
  *(undefined8 *)&(this->ImmutableData).field_0x8 = 0;
  *(undefined8 *)&(this->ImmutableData).field_0x20 = 0;
  *(undefined4 *)&(this->ImmutableData).field_0x28 = 0;
  *(undefined4 *)&(this->ImmutableData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ImmutableData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ImmutableData).field_0x34 = 0;
  *(undefined8 *)&(this->ImmutableData).field_0x40 = 0;
  *(undefined4 *)&(this->ImmutableData).field_0x48 = 0;
  TSet<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>,FDefaultSetAllocator>
               *)&this->ImmutableData,
              (TSet<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>,FDefaultSetAllocator>
               *)&param_1->ImmutableData);
  *(undefined8 *)&(this->MutableData).field_0x0 = 0;
  *(undefined8 *)&(this->MutableData).field_0x8 = 0;
  *(undefined8 *)&(this->MutableData).field_0x20 = 0;
  *(undefined4 *)&(this->MutableData).field_0x28 = 0;
  *(undefined4 *)&(this->MutableData).field_0x2c = 0x80;
  *(undefined4 *)&(this->MutableData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MutableData).field_0x34 = 0;
  *(undefined8 *)&(this->MutableData).field_0x40 = 0;
  *(undefined4 *)&(this->MutableData).field_0x48 = 0;
  TSet<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>,FDefaultSetAllocator>
               *)&this->MutableData,
              (TSet<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>,FDefaultSetAllocator>
               *)&param_1->MutableData);
  return this;
}

