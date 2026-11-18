// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 27

// ~TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_> @ 14a8ad220

void __thiscall
TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::
~TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
          (TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
           *this)

{
  *(undefined4 *)&this->field_0x88 = 0;
  if (*(int *)&this->field_0x8c != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
              (0x10,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *)
                        this,0,(int *)&this->field_0x8c);
  }
  *(undefined4 *)&this->field_0xa8 = 0xffffffff;
  *(undefined4 *)&this->field_0xac = 0;
  *(undefined4 *)&this->field_0xa0 = 0;
  if ((*(int *)&this->field_0xa4 < 0) || (0x20 < *(int *)&this->field_0xa4)) {
    *(undefined4 *)&this->field_0xa4 = 0x20;
    TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Realloc
              ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)&this->field_0x90,0
              );
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<int,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_> @ 14a8ad2b0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
          (TSparseArray<TSparseSetElement<TTuple<int,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
           *this)

{
  *(undefined4 *)&this->field_0x288 = 0;
  if (*(int *)&this->field_0x28c != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>_>
              (0x28,4,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_> *)
                        this,0,(int *)&this->field_0x28c);
  }
  *(undefined4 *)&this->field_0x2a8 = 0xffffffff;
  *(undefined4 *)&this->field_0x2ac = 0;
  *(undefined4 *)&this->field_0x2a0 = 0;
  if ((*(int *)&this->field_0x2a4 < 0) || (0x20 < *(int *)&this->field_0x2a4)) {
    *(undefined4 *)&this->field_0x2a4 = 0x20;
    TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Realloc
              ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)&this->field_0x290,
               0);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_> @ 14a8ad340

void __thiscall
TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::
~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
          (TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
           *this)

{
  *(undefined4 *)&this->field_0x2010 = 0;
  if (*(int *)&this->field_0x2014 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_>_>_>
              (0x80,0x10,0,
               (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_>_> *)this,0,
               (int *)&this->field_0x2014);
  }
  *(undefined4 *)&this->field_0x2038 = 0xffffffff;
  *(undefined4 *)&this->field_0x203c = 0;
  *(undefined4 *)&this->field_0x2030 = 0;
  if ((*(int *)&this->field_0x2034 < 0) || (0x40 < *(int *)&this->field_0x2034)) {
    *(undefined4 *)&this->field_0x2034 = 0x40;
    TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_>::Realloc
              ((TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)&this->field_0x2020
               ,0);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_> @ 14a8ad3d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::
~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
          (TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
           *this)

{
  *(undefined4 *)&this->field_0x808 = 0;
  if (*(int *)&this->field_0x80c != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>_>
              (0x20,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> *)
                        this,0,(int *)&this->field_0x80c);
  }
  *(undefined4 *)&this->field_0x828 = 0xffffffff;
  *(undefined4 *)&this->field_0x82c = 0;
  *(undefined4 *)&this->field_0x820 = 0;
  if ((*(int *)&this->field_0x824 < 0) || (0x40 < *(int *)&this->field_0x824)) {
    *(undefined4 *)&this->field_0x824 = 0x40;
    TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_>::Realloc
              ((TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)&this->field_0x810,
               0);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a8ad460

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a8ad500

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_> @ 14a8ad5a0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::
~TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
          (TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0xbc8);
  *(undefined4 *)&this->field_0xbc8 = 0;
  if (*(int *)&this->field_0xbcc != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_>_>_>
              (0x2f0,8,0,
               (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_>_> *)this,0,
               (int *)&this->field_0xbcc);
  }
  *(undefined4 *)&this->field_0xbe8 = 0xffffffff;
  *(undefined4 *)&this->field_0xbec = 0;
  *(undefined4 *)&this->field_0xbe0 = 0;
  if ((*(int *)&this->field_0xbe4 < 0) || (0x20 < *(int *)&this->field_0xbe4)) {
    *(undefined4 *)&this->field_0xbe4 = 0x20;
    TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Realloc
              ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)&this->field_0xbd0,
               0);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a8ad640

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_> @ 14a8ad6e0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *(undefined4 *)&this->field_0x58 = 0;
  if (*(int *)&this->field_0x5c != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>_>
              (0x14,4,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> *)
                        this,0,(int *)&this->field_0x5c);
  }
  *(undefined4 *)&this->field_0x78 = 0xffffffff;
  *(undefined4 *)&this->field_0x7c = 0;
  *(undefined4 *)&this->field_0x70 = 0;
  if ((*(int *)&this->field_0x74 < 0) || (0x20 < *(int *)&this->field_0x74)) {
    *(undefined4 *)&this->field_0x74 = 0x20;
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Realloc
              ((TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
               &this->field_0x60,0);
  }
  if (*(void **)&this->field_0x68 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x68);
  }
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<UE::PoseSearch::FSearchContext::FPoseCandidate>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a8ad770

void __thiscall
TSparseArray<TSparseSetElement<UE::PoseSearch::FSearchContext::FPoseCandidate>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<UE::PoseSearch::FSearchContext::FPoseCandidate>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<UE::PoseSearch::FSearchContext::FPoseCandidate>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// DestroyElements @ 14a8b2490

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + 8 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14a8b2580

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar9 = (undefined8 *)(uVar6 * 0x70 + 0x58 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          *(undefined4 *)(puVar9 + 1) = 0;
          if ((void *)*puVar9 != (void *)0x0) {
            FMemory::Free((void *)*puVar9);
          }
          TSparseArray<TSparseSetElement<UE::PoseSearch::FSearchContext::FPoseCandidate>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<UE::PoseSearch::FSearchContext::FPoseCandidate>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<UE::PoseSearch::FSearchContext::FPoseCandidate>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(puVar9 + -8));
          if ((void *)puVar9[-10] != (void *)0x0) {
            FMemory::Free((void *)puVar9[-10]);
          }
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      puVar9 = puVar9 + 0xe;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 14a8b2690

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  TSparseArray<TSparseSetElement<TTuple<int,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  *this_00;
  undefined1 *puVar7;
  uint uVar8;
  TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  *pTVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  pTVar9 = this;
  if (*(TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
        **)&this->field_0xbc0 !=
      (TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
       *)0x0) {
    pTVar9 = *(TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
               **)&this->field_0xbc0;
  }
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (TSparseArray<TSparseSetElement<TTuple<int,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
               *)(&pTVar9->field_0x8 + uVar6 * 0x2f0);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0xbe0)) {
        if ((*(int *)&this->field_0xbe0 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar7 = &this->field_0xbd0;
        if (*(undefined1 **)&this->field_0xbd8 != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)&this->field_0xbd8;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar7 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          *(undefined4 *)&this_00[1].field_0x28 = 0;
          TSparseArray<TSparseSetElement<TTuple<int,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                    (this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      this_00 = (TSparseArray<TSparseSetElement<TTuple<int,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                 *)&this_00[1].field_0x40;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// Empty @ 14a8b46f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a8b4790

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x58 = 0;
    if (*(int *)&this->field_0x5c != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>_>
                (0x14,4,param_1,
                 (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> *)this,0,
                 (int *)&this->field_0x5c);
    }
    *(undefined4 *)&this->field_0x7c = 0;
    *(undefined4 *)&this->field_0x78 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x70 = 0;
    if ((*(int *)&this->field_0x74 < (int)uVar2) || (0x20 < *(int *)&this->field_0x74)) {
      uVar1 = 0x20;
      if (0x20 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x74 = uVar1;
      TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Realloc
                ((TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                 &this->field_0x60,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a8f3dd0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ~TSparseArray<TSparseSetElement<UE::PoseSearch::FAnimContextInfo_const_*>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_> @ 14a91a770

void __thiscall
TSparseArray<TSparseSetElement<UE::PoseSearch::FAnimContextInfo_const_*>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::
~TSparseArray<TSparseSetElement<UE::PoseSearch::FAnimContextInfo_const_*>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
          (TSparseArray<TSparseSetElement<UE::PoseSearch::FAnimContextInfo_const_*>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
           *this)

{
  *(undefined4 *)&this->field_0x208 = 0;
  if (*(int *)&this->field_0x20c != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
              (0x10,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *)
                        this,0,(int *)&this->field_0x20c);
  }
  *(undefined4 *)&this->field_0x228 = 0xffffffff;
  *(undefined4 *)&this->field_0x22c = 0;
  *(undefined4 *)&this->field_0x220 = 0;
  if ((*(int *)&this->field_0x224 < 0) || (0x20 < *(int *)&this->field_0x224)) {
    *(undefined4 *)&this->field_0x224 = 0x20;
    TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Realloc
              ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)&this->field_0x210,
               0);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<UAnimInstance_const_*>,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_> @ 14a91a800

void __thiscall
TSparseArray<TSparseSetElement<UAnimInstance_const_*>,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::
~TSparseArray<TSparseSetElement<UAnimInstance_const_*>,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
          (TSparseArray<TSparseSetElement<UAnimInstance_const_*>,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *(undefined4 *)&this->field_0x808 = 0;
  if (*(int *)&this->field_0x80c != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
              (0x10,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *)
                        this,0,(int *)&this->field_0x80c);
  }
  *(undefined4 *)&this->field_0x830 = 0xffffffff;
  *(undefined4 *)&this->field_0x834 = 0;
  *(undefined4 *)&this->field_0x828 = 0;
  if ((*(int *)&this->field_0x82c < 0) || (0x80 < *(int *)&this->field_0x82c)) {
    *(undefined4 *)&this->field_0x82c = 0x80;
    TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::Realloc
              ((TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
               &this->field_0x810,0);
  }
  if (*(void **)&this->field_0x820 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x820);
  }
  if (*(void **)&this->field_0x800 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x800);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_> @ 14a91a8b0

void __thiscall
TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::
~TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
          (TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(int *)&this->field_0x4c != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
              (0x10,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *)
                        this,0,(int *)&this->field_0x4c);
  }
  *(undefined4 *)&this->field_0x68 = 0xffffffff;
  *(undefined4 *)&this->field_0x6c = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  if ((*(int *)&this->field_0x64 < 0) || (0x20 < *(int *)&this->field_0x64)) {
    *(undefined4 *)&this->field_0x64 = 0x20;
    TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Realloc
              ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)&this->field_0x50,0
              );
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,int>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_> @ 14a91a930

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UObject_const_*,int>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::
~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,int>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
          (TSparseArray<TSparseSetElement<TTuple<UObject_const_*,int>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
           *this)

{
  *(undefined4 *)&this->field_0x188 = 0;
  if (*(int *)&this->field_0x18c != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
              (0x18,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *)
                        this,0,(int *)&this->field_0x18c);
  }
  *(undefined4 *)&this->field_0x1a8 = 0xffffffff;
  *(undefined4 *)&this->field_0x1ac = 0;
  *(undefined4 *)&this->field_0x1a0 = 0;
  if ((*(int *)&this->field_0x1a4 < 0) || (0x20 < *(int *)&this->field_0x1a4)) {
    *(undefined4 *)&this->field_0x1a4 = 0x20;
    TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Realloc
              ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)&this->field_0x190,
               0);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_> @ 14a91a9c0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::
~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
          (TSparseArray<TSparseSetElement<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
           *this)

{
  *(undefined4 *)&this->field_0x308 = 0;
  if (*(int *)&this->field_0x30c != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_>_>
              (0x30,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_> *)
                        this,0,(int *)&this->field_0x30c);
  }
  *(undefined4 *)&this->field_0x328 = 0xffffffff;
  *(undefined4 *)&this->field_0x32c = 0;
  *(undefined4 *)&this->field_0x320 = 0;
  if ((*(int *)&this->field_0x324 < 0) || (0x20 < *(int *)&this->field_0x324)) {
    *(undefined4 *)&this->field_0x324 = 0x20;
    TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Realloc
              ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)&this->field_0x310,
               0);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a91aa50

void __thiscall
TSparseArray<TSparseSetElement<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// DestroyElements @ 14a927c60

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::DestroyElements(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + param_2;
  for (; param_1 < iVar1; param_1 = param_1 + 1) {
  }
  return;
}

// DestroyElements @ 14a927c80

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FBoneContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FName,FBoneContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  FBoneContainer *this_00;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (FBoneContainer *)(uVar6 * 0x168 + 8 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          FBoneContainer::~FBoneContainer(this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      this_00 = (FBoneContainer *)&this_00[1].BoneSwitchArray;
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 14a927d60

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>_>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FName,TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>_>_>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                  *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + param_2;
  for (; param_1 < iVar1; param_1 = param_1 + 1) {
  }
  return;
}

// Empty @ 14a928180

void __thiscall
TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::Empty(TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x88 = 0;
    if (*(int *)&this->field_0x8c != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
                (0x10,8,param_1,
                 (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *)this,0,
                 (int *)&this->field_0x8c);
    }
    *(undefined4 *)&this->field_0xac = 0;
    *(undefined4 *)&this->field_0xa8 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0xa0 = 0;
    if ((*(int *)&this->field_0xa4 < (int)uVar2) || (0x20 < *(int *)&this->field_0xa4)) {
      uVar1 = 0x20;
      if (0x20 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0xa4 = uVar1;
      TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Realloc
                ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)&this->field_0x90
                 ,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a928230

void __thiscall
TSparseArray<TSparseSetElement<UE::PoseSearch::FSearchContext::FPoseCandidate>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<UE::PoseSearch::FSearchContext::FPoseCandidate>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

