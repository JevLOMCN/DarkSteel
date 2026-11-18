// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 2

// FMassArchetypeChunk @ 1471d6350

FMassArchetypeChunk * __thiscall
FMassArchetypeChunk::FMassArchetypeChunk
          (FMassArchetypeChunk *this,ulong64 param_1,
          TArrayView<FInstancedStruct_const_,int> *param_2,
          FMassArchetypeSharedFragmentValues *param_3)

{
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FInstancedStruct *pFVar4;
  uchar *puVar5;
  FLLMScope local_38 [2];
  FMemScope local_30;
  
  iVar3 = param_2->ArrayNum;
  pFVar4 = param_2->DataPtr;
  pTVar1 = &this->ChunkFragmentData;
  piVar2 = &(this->ChunkFragmentData).ArrayMax;
  this->RawMemory = (uchar *)0x0;
  this->AllocSize = param_1;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->NumInstances = 0;
  this->SerialModificationNumber = 0;
  (this->ChunkFragmentData).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FInstancedStruct,FInstancedStruct,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues
            (&this->SharedFragmentValues,param_3);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_FMassArchetypeChunk::FMassArchetypeChunk(unsigned___int64,TArrayView<FInstancedStruct_const_,int>,FMassArchetypeSharedFragmentValues)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_FMassArchetypeChunk::FMassArchetypeChunk(unsigned___int64,TArrayView<FInstancedStruct_const_,int>,FMassArchetypeSharedFragmentValues)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_FMassArchetypeChunk::FMassArchetypeChunk(unsigned___int64,TArrayView<FInstancedStruct_const_,int>,FMassArchetypeSharedFragmentValues)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:___cdecl_FMassArchetypeChunk::FMassArchetypeChunk(unsigned___int64,TArrayView<FInstancedStruct_const_,int>,FMassArchetypeSharedFragmentValues)___ptr64'
                      ::__l2::LLMScope_Name43,L"Mass/ArchetypeChunk");
      _Init_thread_footer(&`public:___cdecl_FMassArchetypeChunk::FMassArchetypeChunk(unsigned___int64,TArrayView<FInstancedStruct_const_,int>,FMassArchetypeSharedFragmentValues)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_38,`public:___cdecl_FMassArchetypeChunk::FMassArchetypeChunk(unsigned___int64,TArrayView<FInstancedStruct_const_,int>,FMassArchetypeSharedFragmentValues)___ptr64'
                      ::__l2::LLMScope_Name43,false,None,Default,true);
  FMemScope::FMemScope
            (&local_30,
             &`public:___cdecl_FMassArchetypeChunk::FMassArchetypeChunk(unsigned___int64,TArrayView<FInstancedStruct_const_,int>,FMassArchetypeSharedFragmentValues)___ptr64'
              ::__l2::LLMScope_Name43,true);
  puVar5 = FMemory::Malloc(this->AllocSize,0);
  this->RawMemory = puVar5;
  FMemScope::~FMemScope(&local_30);
  FLLMScope::~FLLMScope(local_38);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(param_3);
  return this;
}

// Recycle @ 14723e390

void __thiscall
FMassArchetypeChunk::Recycle
          (FMassArchetypeChunk *this,TArrayView<FInstancedStruct_const_,int> *param_1,
          FMassArchetypeSharedFragmentValues *param_2)

{
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *this_00;
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *this_01;
  TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FSharedStruct,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uchar *puVar9;
  
  if (this->NumInstances != 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumInstances == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                       ,0x84,L"Recycling a chunk that is not empty.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  this->SerialModificationNumber = this->SerialModificationNumber + 1;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::operator=<FInstancedStruct_const_,int>
            (&this->ChunkFragmentData,param_1);
  (this->SharedFragmentValues).HashCache = param_2->HashCache;
  this_00 = &(this->SharedFragmentValues).SharedFragmentBitSet;
  (this->SharedFragmentValues).bSorted = param_2->bSorted;
  if (this_00 != &param_2->SharedFragmentBitSet) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
               (TBitArray<FDefaultBitArrayAllocator> *)&param_2->SharedFragmentBitSet);
  }
  this_01 = &(this->SharedFragmentValues).ConstSharedFragmentBitSet;
  if (this_01 != &param_2->ConstSharedFragmentBitSet) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
               (TBitArray<FDefaultBitArrayAllocator> *)&param_2->ConstSharedFragmentBitSet);
  }
  pTVar1 = &(this->SharedFragmentValues).ConstSharedFragments;
  if (pTVar1 != &param_2->ConstSharedFragments) {
    DestructItems<FConstSharedStruct,int>
              ((FConstSharedStruct *)(pTVar1->AllocatorInstance).Data,
               (this->SharedFragmentValues).ConstSharedFragments.ArrayNum);
    iVar4 = (param_2->ConstSharedFragments).ArrayNum;
    piVar2 = &(this->SharedFragmentValues).ConstSharedFragments.ArrayMax;
    pFVar6 = (param_2->ConstSharedFragments).AllocatorInstance.Data;
    iVar5 = *piVar2;
    (this->SharedFragmentValues).ConstSharedFragments.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar4,iVar5,&pTVar1->AllocatorInstance,iVar4,piVar2);
      ConstructItems<FConstSharedStruct,FConstSharedStruct,int>
                ((pTVar1->AllocatorInstance).Data,(FConstSharedStruct *)pFVar6,iVar4);
    }
  }
  pTVar3 = &(this->SharedFragmentValues).SharedFragments;
  if (pTVar3 != &param_2->SharedFragments) {
    DestructItems<FSharedStruct,int>
              ((FSharedStruct *)(pTVar3->AllocatorInstance).Data,
               (this->SharedFragmentValues).SharedFragments.ArrayNum);
    iVar4 = (param_2->SharedFragments).ArrayNum;
    piVar2 = &(this->SharedFragmentValues).SharedFragments.ArrayMax;
    pFVar6 = (param_2->SharedFragments).AllocatorInstance.Data;
    iVar5 = *piVar2;
    (this->SharedFragmentValues).SharedFragments.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar4,iVar5,&pTVar3->AllocatorInstance,iVar4,piVar2);
      ConstructItems<FSharedStruct,FSharedStruct,int>
                ((pTVar3->AllocatorInstance).Data,(FSharedStruct *)pFVar6,iVar4);
    }
  }
  if (this->RawMemory == (uchar *)0x0) {
    puVar9 = FMemory::Malloc(this->AllocSize,0);
    this->RawMemory = puVar9;
  }
  return;
}

