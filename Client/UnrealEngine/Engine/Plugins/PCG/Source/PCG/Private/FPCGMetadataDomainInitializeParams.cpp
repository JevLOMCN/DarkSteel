// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// FPCGMetadataDomainInitializeParams @ 14988ca80

FPCGMetadataDomainInitializeParams * __thiscall
FPCGMetadataDomainInitializeParams::FPCGMetadataDomainInitializeParams
          (FPCGMetadataDomainInitializeParams *this,FPCGMetadataDomain *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2)

{
  TOptional<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> *this_00;
  int *piVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  FPCGMetadataDomainInitializeParams *pFVar6;
  
  this_00 = &this->FilteredAttributes;
  this->Parent = param_1;
  *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0xc) = 0xffffffff;
  *(undefined8 *)&this_00->field0_0x0 = 0;
  piVar1 = (int *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0xc);
  *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x40) = 0;
  (this->FilteredAttributes).field0_0x0.TypedValue.HashSize = 0;
  this->FilterMode = ExcludeAttributes;
  this->MatchOperator = Equal;
  (this->OptionalEntriesToCopy).bIsSet = false;
  if ((param_2 != (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0) &&
     (param_2 != (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_00)) {
    (this->FilteredAttributes).field0_0x0.TypedValue.HashSize = 0;
    pvVar3 = *(void **)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x40);
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 8) = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)this_00,0,piVar1);
    }
    *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x30) = 0xffffffff;
    *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x34) = 0;
    iVar2 = *(int *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x2c);
    *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x28) = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x2c) = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->FilteredAttributes).field0_0x0.TypedValue.Elements.field_0x10,0);
    }
    pvVar3 = *(void **)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x20);
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    if (*(void **)&this_00->field0_0x0 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00->field0_0x0);
    }
    *(undefined8 *)&this_00->field0_0x0 = 0;
    *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 8) = 0;
    *piVar1 = 0;
    *(undefined8 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x20) = 0;
    *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x28) = 0;
    *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x2c) = 0x80;
    *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x30) = 0xffffffff;
    *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x34) = 0;
    *(undefined8 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x40) = 0;
    (this->FilteredAttributes).field0_0x0.TypedValue.HashSize = 0;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_00,param_2);
    if (*piVar1 == -1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FPCGMetadataDomainInitializeParams *)(*pcVar4)();
        return pFVar6;
      }
    }
  }
  return this;
}

// FPCGMetadataDomainInitializeParams @ 149acf910

FPCGMetadataDomainInitializeParams * __thiscall
FPCGMetadataDomainInitializeParams::FPCGMetadataDomainInitializeParams
          (FPCGMetadataDomainInitializeParams *this,FPCGMetadataDomainInitializeParams *param_1)

{
  TOptional<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> *pTVar1;
  TOptional<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> *pTVar2;
  void *_Dst;
  EPCGStringMatchingOperator EVar3;
  bool bVar4;
  void *pvVar5;
  long64 lVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  this->Parent = param_1->Parent;
  *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0xc) = 0xffffffff;
  pTVar1 = &this->FilteredAttributes;
  pTVar2 = &param_1->FilteredAttributes;
  *(undefined8 *)&pTVar1->field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x40) = 0;
  (this->FilteredAttributes).field0_0x0.TypedValue.HashSize = 0;
  if (*(int *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0xc) != -1) {
    *(undefined8 *)&pTVar1->field0_0x0 = 0;
    *(undefined8 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 8) = 0;
    *(undefined8 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x20) = 0;
    *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x28) = 0;
    *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x2c) = 0x80;
    *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x30) = 0xffffffff;
    *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x34) = 0;
    *(undefined8 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x40) = 0;
    (this->FilteredAttributes).field0_0x0.TypedValue.HashSize = 0;
    if (pTVar1 != pTVar2) {
      *(undefined8 *)&pTVar1->field0_0x0 = *(undefined8 *)&pTVar2->field0_0x0;
      *(undefined8 *)&pTVar2->field0_0x0 = 0;
      pvVar5 = (void *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0x10);
      *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 8) =
           *(undefined4 *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 8);
      _Dst = (void *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x10);
      *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0xc) =
           *(undefined4 *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0xc);
      *(undefined8 *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 8) = 0;
      if (_Dst != pvVar5) {
        if (*(longlong *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0x20) == 0) {
          memmove(_Dst,pvVar5,0x10);
        }
        pvVar5 = *(void **)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x20);
        if (pvVar5 != (void *)0x0) {
          FMemory::Free(pvVar5);
        }
        *(undefined8 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x20) =
             *(undefined8 *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0x20);
        *(undefined8 *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0x20) = 0;
        *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x28) =
             *(undefined4 *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0x28);
        *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x2c) =
             *(undefined4 *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0x2c);
        *(undefined8 *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0x28) = 0;
      }
      *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x30) =
           *(undefined4 *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0x30);
      *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x34) =
           *(undefined4 *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0x34);
      *(undefined4 *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0x30) = 0xffffffff;
      *(undefined4 *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0x34) = 0;
    }
    if (*(longlong *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0x40) == 0) {
      *(undefined4 *)(this->FilteredAttributes).field0_0x0.TypedValue.Hash.InlineData =
           *(undefined4 *)(param_1->FilteredAttributes).field0_0x0.TypedValue.Hash.InlineData;
    }
    pvVar5 = *(void **)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x40);
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    *(undefined8 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x40) =
         *(undefined8 *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0x40);
    *(undefined8 *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0x40) = 0;
    (this->FilteredAttributes).field0_0x0.TypedValue.HashSize =
         (param_1->FilteredAttributes).field0_0x0.TypedValue.HashSize;
    (param_1->FilteredAttributes).field0_0x0.TypedValue.HashSize = 0;
  }
  this->FilterMode = param_1->FilterMode;
  EVar3 = param_1->MatchOperator;
  (this->OptionalEntriesToCopy).bIsSet = false;
  this->MatchOperator = EVar3;
  bVar4 = (param_1->OptionalEntriesToCopy).bIsSet;
  (this->OptionalEntriesToCopy).bIsSet = bVar4;
  if (bVar4 != false) {
    iVar7 = (param_1->OptionalEntriesToCopy).TypedValue.ElementView.BytesBetweenElements;
    iVar8 = (param_1->OptionalEntriesToCopy).TypedValue.ElementView.NumElements;
    (this->OptionalEntriesToCopy).TypedValue.ElementView.FirstElementPtr =
         (param_1->OptionalEntriesToCopy).TypedValue.ElementView.FirstElementPtr;
    (this->OptionalEntriesToCopy).TypedValue.ElementView.BytesBetweenElements = iVar7;
    (this->OptionalEntriesToCopy).TypedValue.ElementView.NumElements = iVar8;
    uVar9 = *(undefined4 *)&(param_1->OptionalEntriesToCopy).TypedValue.field_0x14;
    lVar6 = (param_1->OptionalEntriesToCopy).TypedValue.StubValue;
    (this->OptionalEntriesToCopy).TypedValue.NumElements =
         (param_1->OptionalEntriesToCopy).TypedValue.NumElements;
    *(undefined4 *)&(this->OptionalEntriesToCopy).TypedValue.field_0x14 = uVar9;
    (this->OptionalEntriesToCopy).TypedValue.StubValue = lVar6;
  }
  return this;
}

// operator= @ 149e379d0

FPCGMetadataDomainInitializeParams * __thiscall
FPCGMetadataDomainInitializeParams::operator=
          (FPCGMetadataDomainInitializeParams *this,FPCGMetadataDomainInitializeParams *param_1)

{
  TOptional<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> *this_00;
  void *pvVar1;
  long64 lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  this_00 = &this->FilteredAttributes;
  this->Parent = param_1->Parent;
  if (&param_1->FilteredAttributes != this_00) {
    if (*(int *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0xc) == -1) {
      if (*(int *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0xc) != -1) {
        (this->FilteredAttributes).field0_0x0.TypedValue.HashSize = 0;
        pvVar1 = *(void **)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x40);
        if (pvVar1 != (void *)0x0) {
          FMemory::Free(pvVar1);
        }
        TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)this_00);
        *(undefined8 *)&this_00->field0_0x0 = 0;
        *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 8) = 0;
        *(undefined8 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x20) = 0;
        *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0xc) = 0xffffffff;
        *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x28) = 0;
        *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x2c) = 0x80;
        *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x34) = 0;
        *(undefined4 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x30) = 0xffffffff;
        *(undefined8 *)((longlong)&(this->FilteredAttributes).field0_0x0 + 0x40) = 0;
        (this->FilteredAttributes).field0_0x0.TypedValue.HashSize = 0;
      }
    }
    else {
      TOptional<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>::
      Emplace<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const_&>
                (this_00,(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                         &param_1->FilteredAttributes);
    }
  }
  this->FilterMode = param_1->FilterMode;
  this->MatchOperator = param_1->MatchOperator;
  if (&param_1->OptionalEntriesToCopy != &this->OptionalEntriesToCopy) {
    if ((param_1->OptionalEntriesToCopy).bIsSet != false) {
      iVar3 = (param_1->OptionalEntriesToCopy).TypedValue.ElementView.BytesBetweenElements;
      iVar4 = (param_1->OptionalEntriesToCopy).TypedValue.ElementView.NumElements;
      (this->OptionalEntriesToCopy).TypedValue.ElementView.FirstElementPtr =
           (param_1->OptionalEntriesToCopy).TypedValue.ElementView.FirstElementPtr;
      (this->OptionalEntriesToCopy).TypedValue.ElementView.BytesBetweenElements = iVar3;
      (this->OptionalEntriesToCopy).TypedValue.ElementView.NumElements = iVar4;
      uVar5 = *(undefined4 *)&(param_1->OptionalEntriesToCopy).TypedValue.field_0x14;
      lVar2 = (param_1->OptionalEntriesToCopy).TypedValue.StubValue;
      (this->OptionalEntriesToCopy).TypedValue.NumElements =
           (param_1->OptionalEntriesToCopy).TypedValue.NumElements;
      *(undefined4 *)&(this->OptionalEntriesToCopy).TypedValue.field_0x14 = uVar5;
      (this->OptionalEntriesToCopy).TypedValue.StubValue = lVar2;
      (this->OptionalEntriesToCopy).bIsSet = true;
      return this;
    }
    if ((this->OptionalEntriesToCopy).bIsSet != false) {
      (this->OptionalEntriesToCopy).bIsSet = false;
    }
  }
  return this;
}

