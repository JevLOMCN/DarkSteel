// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// operator<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate>_TTuple<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate> @ 14abadcc0

TTuple<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate> * __thiscall
TPairInitializer<UCustomizableObjectInstance_const_*_&&,FMutableUpdateCandidate_const_&>::
operator<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate>_TTuple<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate>
          (TPairInitializer<UCustomizableObjectInstance_const_*_&&,FMutableUpdateCandidate_const_&>
           *this,TTuple<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate>
                 *__return_storage_ptr__)

{
  FMutableUpdateCandidate *pFVar1;
  
  pFVar1 = this->Value;
  *(UCustomizableObjectInstance **)__return_storage_ptr__ = *this->Key;
  *(UCustomizableObjectInstance **)&__return_storage_ptr__->field_0x8 =
       pFVar1->CustomizableObjectInstance;
  __return_storage_ptr__->field_0x10 = pFVar1->Priority;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x60 = 0;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&__return_storage_ptr__->field_0x18,
              (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&pFVar1->MinLOD);
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x88 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x90 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x94 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x98 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x9c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0xa8 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xb0 = 0;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&__return_storage_ptr__->field_0x68,
              (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&pFVar1->QualitySettingMinLODs);
  *(undefined8 *)&__return_storage_ptr__->field_0xb8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0xc0 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0xd8 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xe0 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xe4 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0xe8 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0xec = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0xf8 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x100 = 0;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&__return_storage_ptr__->field_0xb8,
              (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&pFVar1->FirstRequestedLOD);
  __return_storage_ptr__->field_0x108 = pFVar1->bHasBeenIssued;
  return __return_storage_ptr__;
}

// operator<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>_TTuple<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_> @ 14abadfa0

TTuple<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>
* __thiscall
TPairInitializer<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_const_&,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_&&>
::
operator<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>_TTuple<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>
          (TPairInitializer<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_const_&,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_&&>
           *this,TTuple<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>
                 *__return_storage_ptr__)

{
  int iVar1;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar2;
  FWeakObjectPtr *pFVar3;
  FScriptContainerElement *_Src;
  
  pTVar2 = this->Key;
  pFVar3 = &this->Value->WeakPtr;
  *(undefined8 *)__return_storage_ptr__ = 0;
  iVar1 = pTVar2->ArrayNum;
  _Src = (pTVar2->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x8 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)__return_storage_ptr__,iVar1,
               (int *)&__return_storage_ptr__->field_0xc);
    memcpy(*(void **)__return_storage_ptr__,_Src,(longlong)iVar1 * 2);
  }
  iVar1 = pFVar3->ObjectSerialNumber;
  *(int *)&__return_storage_ptr__->field_0x10 = pFVar3->ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x14 = iVar1;
  return __return_storage_ptr__;
}

