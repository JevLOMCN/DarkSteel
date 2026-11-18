// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 2

// operator<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>_TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_> @ 146b38550

TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_> * __thiscall
TPairInitializer<FPortableObjectEntryKey_const_&,TSharedPtr<FPortableObjectEntry,1>_&&>::
operator<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>_TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>
          (TPairInitializer<FPortableObjectEntryKey_const_&,TSharedPtr<FPortableObjectEntry,1>_&&>
           *this,TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>
                 *__return_storage_ptr__)

{
  FPortableObjectEntryKey *pFVar1;
  TSharedPtr<FPortableObjectEntry,1> *pTVar2;
  
  pFVar1 = this->Key;
  pTVar2 = this->Value;
  ::FString::FString((FString *)__return_storage_ptr__,&pFVar1->MsgId);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x10,&pFVar1->MsgIdPlural);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x20,&pFVar1->MsgCtxt);
  *(FPortableObjectEntry **)&__return_storage_ptr__->field_0x30 = pTVar2->Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x38 =
       (pTVar2->SharedReferenceCount).ReferenceController;
  (pTVar2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar2->Object = (FPortableObjectEntry *)0x0;
  return __return_storage_ptr__;
}

// operator<FString,FConfigSection>_TTuple<FString,FConfigSection> @ 146b386f0

TTuple<FString,FConfigSection> * __thiscall
TPairInitializer<FString_&&,FConfigSection_const_&>::
operator<FString,FConfigSection>_TTuple<FString,FConfigSection>
          (TPairInitializer<FString_&&,FConfigSection_const_&> *this,
          TTuple<FString,FConfigSection> *__return_storage_ptr__)

{
  undefined1 *this_00;
  FString *pFVar1;
  FConfigSection *pFVar2;
  
  pFVar1 = this->Key;
  this_00 = &__return_storage_ptr__->field_0x10;
  pFVar2 = this->Value;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(FScriptContainerElement **)__return_storage_ptr__ = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x8 = (pFVar1->Data).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0xc = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = 0;
  if ((FConfigSection *)this_00 != pFVar2) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&__return_storage_ptr__->field_0x48,
               (int *)&__return_storage_ptr__->field_0x58,
               (ForElementType<FSetElementId> *)&pFVar2->_padding_,(int)pFVar2->_padding_);
    TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pFVar2);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x80 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x88 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x90 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x94 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0xa0 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xa8 = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&__return_storage_ptr__->field_0x60,
            (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&pFVar2->ArrayOfStructKeys);
  *(undefined8 *)&__return_storage_ptr__->field_0xb0 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0xb8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0xd0 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xd8 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xdc = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0xe0 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0xe4 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0xf0 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xf8 = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0xb0,&pFVar2->EmptyInitializedKeys);
  __return_storage_ptr__->field_0x100 = pFVar2->bCanSave;
  return __return_storage_ptr__;
}

