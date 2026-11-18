// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// operator<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_> @ 149904e70

TTuple<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
TPairInitializer<FName_&,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_&&>
::
operator<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
          (TPairInitializer<FName_&,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_&&>
           *this,TTuple<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
                 *__return_storage_ptr__)

{
  TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *_Src
  ;
  uint uVar1;
  
  _Src = this->Value;
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x308 = 0;
  if ((_Src->AllocatorInstance).SecondaryData == (ForElementType<FPCGSelectGrammarCriterion>)0x0) {
    memmove(&__return_storage_ptr__->field_0x8,_Src,0x300);
  }
  if (*(void **)&__return_storage_ptr__->field_0x308 != (void *)0x0) {
    FMemory::Free(*(void **)&__return_storage_ptr__->field_0x308);
  }
  *(ForElementType<FPCGSelectGrammarCriterion> *)&__return_storage_ptr__->field_0x308 =
       (_Src->AllocatorInstance).SecondaryData;
  (_Src->AllocatorInstance).SecondaryData = (ForElementType<FPCGSelectGrammarCriterion>)0x0;
  *(int *)&__return_storage_ptr__->field_0x310 = _Src->ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x314 = _Src->ArrayMax;
  _Src->ArrayNum = 0;
  _Src->ArrayMax = 0x10;
  return __return_storage_ptr__;
}

// operator<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>_TTuple<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int> @ 149a19000

TTuple<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int> * __thiscall
TPairInitializer<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const_&,int_const_&>
::
operator<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>_TTuple<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
          (TPairInitializer<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const_&,int_const_&>
           *this,TTuple<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
                 *__return_storage_ptr__)

{
  int iVar1;
  ForElementType<int> FVar2;
  int *piVar3;
  TTuple<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int> *_Dst;
  ForElementType<int> _Src;
  
  FVar2 = (ForElementType<int>)this->Key;
  piVar3 = this->Value;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  _Src = *(ForElementType<int> *)((longlong)FVar2 + 0x10);
  iVar1 = *(int *)((longlong)FVar2 + 0x18);
  *(int *)&__return_storage_ptr__->field_0x18 = iVar1;
  if (_Src == (ForElementType<int>)0x0) {
    _Src = FVar2;
  }
  if (iVar1 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,iVar1,0,(ForElementType<int> *)__return_storage_ptr__,iVar1,
               (int *)&__return_storage_ptr__->field_0x1c);
    _Dst = __return_storage_ptr__;
    if (*(TTuple<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int> **)
         &__return_storage_ptr__->field_0x10 !=
        (TTuple<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int> *)0x0) {
      _Dst = *(TTuple<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int> **)
              &__return_storage_ptr__->field_0x10;
    }
    memcpy(_Dst,(void *)_Src,(longlong)iVar1 << 2);
  }
  *(int *)&__return_storage_ptr__->field_0x20 = *piVar3;
  return __return_storage_ptr__;
}

// operator<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>_TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_> @ 149c97bd0

TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_> * __thiscall
TPairInitializer<UPCGComponent_*_&,UPCGComponent_*_&>::
operator<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>_TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>
          (TPairInitializer<UPCGComponent_*_&,UPCGComponent_*_&> *this,
          TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_> *__return_storage_ptr__)

{
  UPCGComponent **ppUVar1;
  UPCGComponent *pUVar2;
  UPCGComponent *local_res8;
  
  ppUVar1 = this->Value;
  pUVar2 = *this->Key;
  *(UPCGComponent **)__return_storage_ptr__ = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPCGComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = *ppUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPCGComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  FUtf8String::Reset((FUtf8String *)&__return_storage_ptr__->field_0x20,0);
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPCGComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FSoftObjectPtr::operator=
            ((FSoftObjectPtr *)&__return_storage_ptr__->field_0x8,(FObjectPtr)&local_res8);
  return __return_storage_ptr__;
}

// operator<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>_TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_> @ 149c97c90

TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_> * __thiscall
TPairInitializer<UPCGComponent_*_&,UPCGComponent_*_&>::
operator<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>_TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>
          (TPairInitializer<UPCGComponent_*_&,UPCGComponent_*_&> *this,
          TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_> *__return_storage_ptr__)

{
  UPCGComponent **ppUVar1;
  UPCGComponent *pUVar2;
  FWeakObjectPtr local_res8;
  UPCGComponent *local_res10;
  
  ppUVar1 = this->Value;
  pUVar2 = *this->Key;
  *(undefined8 *)__return_storage_ptr__ = 0;
  if (pUVar2 != (UPCGComponent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = pUVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    *(int *)__return_storage_ptr__ = local_res8.ObjectIndex;
    *(int *)&__return_storage_ptr__->field_0x4 = local_res8.ObjectSerialNumber;
  }
  pUVar2 = *ppUVar1;
  *(UPCGComponent **)&__return_storage_ptr__->field_0x8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPCGComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return __return_storage_ptr__;
}

// operator<FGuid,FPropertyBagPropertyDesc>_TTuple<FGuid,FPropertyBagPropertyDesc> @ 149ee1260

TTuple<FGuid,FPropertyBagPropertyDesc> * __thiscall
TPairInitializer<FGuid_const_&,FPropertyBagPropertyDesc_const_&>::
operator<FGuid,FPropertyBagPropertyDesc>_TTuple<FGuid,FPropertyBagPropertyDesc>
          (TPairInitializer<FGuid_const_&,FPropertyBagPropertyDesc_const_&> *this,
          TTuple<FGuid,FPropertyBagPropertyDesc> *__return_storage_ptr__)

{
  FGuid *pFVar1;
  FPropertyBagPropertyDesc *pFVar2;
  UObject *pUVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  pFVar1 = this->Key;
  pFVar2 = this->Value;
  uVar4 = pFVar1->B;
  uVar5 = pFVar1->C;
  uVar6 = pFVar1->D;
  *(uint *)&__return_storage_ptr__->field_0x0 = pFVar1->A;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar4;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar5;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar6;
  pUVar3 = (pFVar2->ValueTypeObject).field0_0x0.DebugPtr;
  *(UObject **)&__return_storage_ptr__->field_0x10 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  uVar4 = (pFVar2->ID).B;
  uVar5 = (pFVar2->ID).C;
  uVar6 = (pFVar2->ID).D;
  *(uint *)&__return_storage_ptr__->field_0x18 = (pFVar2->ID).A;
  *(uint *)&__return_storage_ptr__->field_0x1c = uVar4;
  *(uint *)&__return_storage_ptr__->field_0x20 = uVar5;
  *(uint *)&__return_storage_ptr__->field_0x24 = uVar6;
  uVar4 = (pFVar2->Name).Number;
  *(uint *)&__return_storage_ptr__->field_0x28 = (pFVar2->Name).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x2c = uVar4;
  __return_storage_ptr__->field_0x30 = pFVar2->ValueType;
  *(undefined2 *)&__return_storage_ptr__->field_0x31 =
       *(undefined2 *)(pFVar2->ContainerTypes).Types.Elements;
  __return_storage_ptr__->field_0x33 = (pFVar2->ContainerTypes).NumContainers;
  *(ulong64 *)&__return_storage_ptr__->field_0x38 = pFVar2->PropertyFlags;
  *(FProperty **)&__return_storage_ptr__->field_0x40 = pFVar2->CachedProperty;
  *(int *)&__return_storage_ptr__->field_0x48 = pFVar2->CachedIndex;
  return __return_storage_ptr__;
}

