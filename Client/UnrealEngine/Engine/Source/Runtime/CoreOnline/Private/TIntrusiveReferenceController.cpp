// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreOnline
// Functions: 4

// DestroyObject @ 144616a00

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FJsonSerializerPolicy_NestedVariant::FElement,1>::DestroyObject
          (TIntrusiveReferenceController<FJsonSerializerPolicy_NestedVariant::FElement,1> *this)

{
  FJsonSerializerPolicy_NestedVariant::FElement::~FElement((FElement *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 144616a10

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FJsonSerializerPolicy_NestedVariant::StackState,1>::DestroyObject
          (TIntrusiveReferenceController<FJsonSerializerPolicy_NestedVariant::StackState,1> *this)

{
  void *pvVar1;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x30));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 144616a50

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TNestedVariantArray<FString,bool,__int64,double,FString>,1>::
DestroyObject(TIntrusiveReferenceController<TNestedVariantArray<FString,bool,__int64,double,FString>,1>
              *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  DestructItems<TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,int>
            (*(TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
               **)(this->ObjectStorage).Pad,*(int *)((this->ObjectStorage).Pad + 8));
  pvVar4 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
    return;
  }
  return;
}

// DestroyObject @ 144616ab0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TNestedVariantMap<FString,bool,__int64,double,FString>,1>::
DestroyObject(TIntrusiveReferenceController<TNestedVariantMap<FString,bool,__int64,double,FString>,1>
              *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x58);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  (this->ObjectStorage).Pad[0x48] = '\0';
  (this->ObjectStorage).Pad[0x49] = '\0';
  (this->ObjectStorage).Pad[0x4a] = '\0';
  (this->ObjectStorage).Pad[0x4b] = '\0';
  pvVar4 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectStorage);
  return;
}

