// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNE
// Functions: 2

// operator<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_> @ 1436e3e00

TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_> * __thiscall
TPairInitializer<FString_const_&,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_const_&>::
operator<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
          (TPairInitializer<FString_const_&,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_const_&>
           *this,TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar2;
  size_t _Size;
  FScriptContainerElement *_Src;
  
  pTVar2 = this->Value;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  puVar1 = &__return_storage_ptr__->field_0x10;
  *(undefined8 *)puVar1 = 0;
  _Size = pTVar2->ArrayNum;
  _Src = (pTVar2->AllocatorInstance).Data;
  *(size_t *)&__return_storage_ptr__->field_0x18 = _Size;
  if (_Size == 0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,_Size,0,(ForAnyElementType *)puVar1,_Size,
               (long64 *)&__return_storage_ptr__->field_0x20);
    memcpy(*(void **)puVar1,_Src,_Size);
  }
  return __return_storage_ptr__;
}

// operator<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_> @ 1436e3ea0

TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_> * __thiscall
TPairInitializer<FString_const_&,TArrayView<unsigned_char_const_,__int64>_const_&>::
operator<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
          (TPairInitializer<FString_const_&,TArrayView<unsigned_char_const_,__int64>_const_&> *this,
          TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_> *__return_storage_ptr__
          )

{
  undefined1 *puVar1;
  TArrayView<unsigned_char_const_,__int64> *pTVar2;
  size_t _Size;
  uchar *_Src;
  
  pTVar2 = this->Value;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  puVar1 = &__return_storage_ptr__->field_0x10;
  *(undefined8 *)puVar1 = 0;
  _Size = pTVar2->ArrayNum;
  _Src = pTVar2->DataPtr;
  *(size_t *)&__return_storage_ptr__->field_0x18 = _Size;
  if (_Size == 0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,_Size,0,(ForAnyElementType *)puVar1,_Size,
               (long64 *)&__return_storage_ptr__->field_0x20);
    memcpy(*(void **)puVar1,_Src,_Size);
  }
  return __return_storage_ptr__;
}

