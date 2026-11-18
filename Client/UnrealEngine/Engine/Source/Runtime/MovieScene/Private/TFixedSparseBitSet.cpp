// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 50

// operator|= @ 146189ca0

TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
* __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
::operator|=(TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
             *this,TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                   *param_1)

{
  int *piVar1;
  ushort uVar2;
  code *pcVar3;
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
  *pTVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined2 local_48 [8];
  
  uVar15 = param_1->BucketHash;
  uVar13 = 0;
  uVar8 = 0;
  if (uVar15 != 0) {
    for (; (uVar15 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
    }
  }
  uVar6 = 0x20;
  if (uVar15 != 0) {
    uVar6 = uVar8;
  }
  do {
    if (0x1f < uVar6) {
      return this;
    }
    uVar14 = 1 << ((byte)uVar6 & 0x1f);
    uVar8 = uVar14 - 1 & this->BucketHash;
    uVar11 = (ulonglong)uVar8 - ((ulonglong)(uVar8 >> 1) & 0x5555555555555555);
    uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
    iVar9 = (param_1->Buckets).Storage.ArrayNum;
    bVar4 = (byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
    if ((uVar14 & this->BucketHash) == 0) {
      uVar8 = 0;
      if ((int)uVar13 < iVar9) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                   *)(*pcVar3)();
        return pTVar10;
      }
      local_48[0] = *(undefined2 *)
                     ((param_1->Buckets).Storage.AllocatorInstance.Data + (longlong)(int)uVar13 * 2)
      ;
      pFVar12 = (this->Buckets).Storage.AllocatorInstance.Data;
      if (((pFVar12 <= (FScriptContainerElement *)local_48) &&
          ((FScriptContainerElement *)local_48 <
           pFVar12 + (longlong)(this->Buckets).Storage.ArrayMax * 2)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                   *)(*pcVar3)();
        return pTVar10;
      }
      iVar9 = (this->Buckets).Storage.ArrayNum;
      piVar1 = &(this->Buckets).Storage.ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,(ForAnyElementType *)this,piVar1);
      }
      pFVar12 = (this->Buckets).Storage.AllocatorInstance.Data;
      (this->Buckets).Storage.ArrayNum = iVar9 + 1;
      lVar5 = (ulonglong)(uint)bVar4 * 2;
      pFVar12 = pFVar12 + lVar5;
      memmove(pFVar12 + 2,pFVar12,(longlong)(int)(iVar9 - (uint)bVar4) * 2);
      *(undefined2 *)((this->Buckets).Storage.AllocatorInstance.Data + lVar5) = local_48[0];
    }
    else {
      uVar8 = 0;
      if ((int)uVar13 < iVar9) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                   *)(*pcVar3)();
        return pTVar10;
      }
      uVar2 = *(ushort *)
               ((param_1->Buckets).Storage.AllocatorInstance.Data + (longlong)(int)uVar13 * 2);
      if (((this->Buckets).Storage.ArrayNum <= (int)(uint)bVar4) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                   *)(*pcVar3)();
        return pTVar10;
      }
      pFVar12 = (this->Buckets).Storage.AllocatorInstance.Data + (ulonglong)(uint)bVar4 * 2;
      *(ushort *)pFVar12 = *(ushort *)pFVar12 | uVar2;
    }
    this->BucketHash = this->BucketHash | uVar14;
    uVar15 = uVar15 & ~(1 << (uVar6 & 0x1f));
    uVar13 = uVar13 + 1;
    uVar8 = 0;
    if (uVar15 != 0) {
      for (; (uVar15 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
    uVar6 = 0x20;
    if (uVar15 != 0) {
      uVar6 = uVar8;
    }
  } while( true );
}

// SetBit @ 1461d1d20

ESparseBitSetBitResult __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
::SetBit(TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
         *this,uint param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ushort *puVar4;
  ulonglong uVar5;
  ushort uVar6;
  uint uVar7;
  
  uVar7 = 1 << ((byte)(param_1 >> 4) & 0x1f);
  uVar1 = this->BucketHash;
  uVar3 = uVar7 - 1 & uVar1;
  uVar5 = (ulonglong)uVar3 - ((ulonglong)(uVar3 >> 1) & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  uVar6 = 1 << ((char)param_1 - (char)((param_1 >> 4) << 4) & 0x1fU);
  bVar2 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if ((uVar7 & uVar1) == 0) {
    this->BucketHash = uVar1 | uVar7;
    TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Insert(&this->Buckets,uVar6,(uint)bVar2);
    return NewlySet;
  }
  puVar4 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get(&this->Buckets,(uint)bVar2);
  if ((*puVar4 & uVar6) == 0) {
    puVar4 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get(&this->Buckets,(uint)bVar2);
    *puVar4 = *puVar4 | uVar6;
    return NewlySet;
  }
  return AlreadySet;
}

// CountSetBits @ 1462a96b0

uint __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
::CountSetBits(TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
               *this)

{
  ForElementType<unsigned_char> FVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ForElementType<unsigned_char> FVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar9 = (ulonglong)this->BucketHash - ((ulonglong)(this->BucketHash >> 1) & 0x5555555555555555);
  uVar10 = 0;
  uVar6 = 0;
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  bVar3 = (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if (bVar3 != 0) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Buckets).Storage.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      FVar1 = (this->Buckets).Storage.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<unsigned_char>)this;
      if (FVar1 != (ForElementType<unsigned_char>)0x0) {
        FVar8 = FVar1;
      }
      lVar7 = (longlong)(int)uVar6;
      uVar6 = uVar6 + 1;
      uVar9 = (ulonglong)*(byte *)(lVar7 + (longlong)FVar8) -
              ((ulonglong)(*(byte *)(lVar7 + (longlong)FVar8) >> 1) & 0x5555555555555555);
      uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
      uVar10 = uVar10 + (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38);
    } while (uVar6 < bVar3);
  }
  return uVar10;
}

// CountSetBits @ 1462a9800

uint __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
::CountSetBits(TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
               *this)

{
  ushort uVar1;
  ForElementType<unsigned_short> FVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ForElementType<unsigned_short> FVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)this->BucketHash - ((ulonglong)(this->BucketHash >> 1) & 0x5555555555555555);
  uVar11 = 0;
  uVar7 = 0;
  uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
  bVar4 = (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if (bVar4 != 0) {
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->Buckets).Storage.ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
      FVar2 = (this->Buckets).Storage.AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<unsigned_short>)this;
      if (FVar2 != (ForElementType<unsigned_short>)0x0) {
        FVar9 = FVar2;
      }
      lVar8 = (longlong)(int)uVar7;
      uVar7 = uVar7 + 1;
      uVar1 = *(ushort *)((longlong)FVar9 + lVar8 * 2);
      uVar10 = (ulonglong)uVar1 - ((ulonglong)(uVar1 >> 1) & 0x5555555555555555);
      uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
      uVar11 = uVar11 + (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38);
    } while (uVar7 < bVar4);
  }
  return uVar11;
}

// CountSetBits @ 1462a9950

uint __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
::CountSetBits(TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
               *this)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ForElementType<unsigned_int> FVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar9 = (ulonglong)this->BucketHash - ((ulonglong)(this->BucketHash >> 1) & 0x5555555555555555);
  uVar10 = 0;
  uVar6 = 0;
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  bVar3 = (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if (bVar3 != 0) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Buckets).Storage.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      FVar1 = (this->Buckets).Storage.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<unsigned_int>)this;
      if (FVar1 != (ForElementType<unsigned_int>)0x0) {
        FVar8 = FVar1;
      }
      lVar7 = (longlong)(int)uVar6;
      uVar6 = uVar6 + 1;
      uVar5 = *(uint *)((longlong)FVar8 + lVar7 * 4);
      uVar9 = (ulonglong)uVar5 - ((ulonglong)(uVar5 >> 1) & 0x5555555555555555);
      uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
      uVar10 = uVar10 + (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38);
    } while (uVar6 < bVar3);
  }
  return uVar10;
}

// CountSetBits @ 1462a9aa0

uint __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
::CountSetBits(TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
               *this)

{
  ForElementType<unsigned___int64> FVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ForElementType<unsigned___int64> FVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar9 = (ulonglong)this->BucketHash - ((ulonglong)(this->BucketHash >> 1) & 0x5555555555555555);
  uVar10 = 0;
  uVar6 = 0;
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  bVar3 = (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if (bVar3 != 0) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Buckets).Storage.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      FVar1 = (this->Buckets).Storage.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<unsigned___int64>)this;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FVar8 = FVar1;
      }
      lVar7 = (longlong)(int)uVar6;
      uVar6 = uVar6 + 1;
      uVar9 = *(ulonglong *)((longlong)FVar8 + lVar7 * 8);
      uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
      uVar10 = uVar10 + (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38);
    } while (uVar6 < bVar3);
  }
  return uVar10;
}

// CountSetBits @ 1462a9bf0

uint __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
::CountSetBits(TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
               *this)

{
  ForElementType<unsigned_char> FVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ForElementType<unsigned_char> FVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar9 = (ulonglong)this->BucketHash - ((ulonglong)(this->BucketHash >> 1) & 0x5555555555555555);
  uVar10 = 0;
  uVar6 = 0;
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  bVar3 = (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if (bVar3 != 0) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Buckets).Storage.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      FVar1 = (this->Buckets).Storage.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<unsigned_char>)this;
      if (FVar1 != (ForElementType<unsigned_char>)0x0) {
        FVar8 = FVar1;
      }
      lVar7 = (longlong)(int)uVar6;
      uVar6 = uVar6 + 1;
      uVar9 = (ulonglong)*(byte *)(lVar7 + (longlong)FVar8) -
              ((ulonglong)(*(byte *)(lVar7 + (longlong)FVar8) >> 1) & 0x5555555555555555);
      uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
      uVar10 = uVar10 + (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38);
    } while (uVar6 < bVar3);
  }
  return uVar10;
}

// CountSetBits @ 1462a9d40

uint __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
::CountSetBits(TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
               *this)

{
  ushort uVar1;
  ForElementType<unsigned_short> FVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ForElementType<unsigned_short> FVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)this->BucketHash - ((ulonglong)(this->BucketHash >> 1) & 0x5555555555555555);
  uVar11 = 0;
  uVar7 = 0;
  uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
  bVar4 = (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if (bVar4 != 0) {
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->Buckets).Storage.ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
      FVar2 = (this->Buckets).Storage.AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<unsigned_short>)this;
      if (FVar2 != (ForElementType<unsigned_short>)0x0) {
        FVar9 = FVar2;
      }
      lVar8 = (longlong)(int)uVar7;
      uVar7 = uVar7 + 1;
      uVar1 = *(ushort *)((longlong)FVar9 + lVar8 * 2);
      uVar10 = (ulonglong)uVar1 - ((ulonglong)(uVar1 >> 1) & 0x5555555555555555);
      uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
      uVar11 = uVar11 + (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38);
    } while (uVar7 < bVar4);
  }
  return uVar11;
}

// CountSetBits @ 1462a9e90

uint __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
::CountSetBits(TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
               *this)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ForElementType<unsigned_int> FVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar9 = (ulonglong)this->BucketHash - ((ulonglong)(this->BucketHash >> 1) & 0x5555555555555555);
  uVar10 = 0;
  uVar6 = 0;
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  bVar3 = (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if (bVar3 != 0) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Buckets).Storage.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      FVar1 = (this->Buckets).Storage.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<unsigned_int>)this;
      if (FVar1 != (ForElementType<unsigned_int>)0x0) {
        FVar8 = FVar1;
      }
      lVar7 = (longlong)(int)uVar6;
      uVar6 = uVar6 + 1;
      uVar5 = *(uint *)((longlong)FVar8 + lVar7 * 4);
      uVar9 = (ulonglong)uVar5 - ((ulonglong)(uVar5 >> 1) & 0x5555555555555555);
      uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
      uVar10 = uVar10 + (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38);
    } while (uVar6 < bVar3);
  }
  return uVar10;
}

// CountSetBits @ 1462a9fe0

uint __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
::CountSetBits(TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
               *this)

{
  ForElementType<unsigned___int64> FVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ForElementType<unsigned___int64> FVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar9 = (ulonglong)this->BucketHash - ((ulonglong)(this->BucketHash >> 1) & 0x5555555555555555);
  uVar10 = 0;
  uVar6 = 0;
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  bVar3 = (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if (bVar3 != 0) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Buckets).Storage.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      FVar1 = (this->Buckets).Storage.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<unsigned___int64>)this;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FVar8 = FVar1;
      }
      lVar7 = (longlong)(int)uVar6;
      uVar6 = uVar6 + 1;
      uVar9 = *(ulonglong *)((longlong)FVar8 + lVar7 * 8);
      uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
      uVar10 = uVar10 + (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38);
    } while (uVar6 < bVar3);
  }
  return uVar10;
}

// CountSetBits @ 1462aa130

uint __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
::CountSetBits(TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
               *this)

{
  ForElementType<unsigned_char> FVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ForElementType<unsigned_char> FVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar9 = (ulonglong)this->BucketHash - ((ulonglong)(this->BucketHash >> 1) & 0x5555555555555555);
  uVar10 = 0;
  uVar6 = 0;
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  bVar3 = (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if (bVar3 != 0) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Buckets).Storage.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      FVar1 = (this->Buckets).Storage.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<unsigned_char>)this;
      if (FVar1 != (ForElementType<unsigned_char>)0x0) {
        FVar8 = FVar1;
      }
      lVar7 = (longlong)(int)uVar6;
      uVar6 = uVar6 + 1;
      uVar9 = (ulonglong)*(byte *)(lVar7 + (longlong)FVar8) -
              ((ulonglong)(*(byte *)(lVar7 + (longlong)FVar8) >> 1) & 0x5555555555555555);
      uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
      uVar10 = uVar10 + (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38);
    } while (uVar6 < bVar3);
  }
  return uVar10;
}

// CountSetBits @ 1462aa280

uint __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
::CountSetBits(TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
               *this)

{
  ushort uVar1;
  ForElementType<unsigned_short> FVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ForElementType<unsigned_short> FVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)this->BucketHash - ((ulonglong)(this->BucketHash >> 1) & 0x5555555555555555);
  uVar11 = 0;
  uVar7 = 0;
  uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
  bVar4 = (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if (bVar4 != 0) {
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->Buckets).Storage.ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
      FVar2 = (this->Buckets).Storage.AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<unsigned_short>)this;
      if (FVar2 != (ForElementType<unsigned_short>)0x0) {
        FVar9 = FVar2;
      }
      lVar8 = (longlong)(int)uVar7;
      uVar7 = uVar7 + 1;
      uVar1 = *(ushort *)((longlong)FVar9 + lVar8 * 2);
      uVar10 = (ulonglong)uVar1 - ((ulonglong)(uVar1 >> 1) & 0x5555555555555555);
      uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
      uVar11 = uVar11 + (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38);
    } while (uVar7 < bVar4);
  }
  return uVar11;
}

// CountSetBits @ 1462aa3d0

uint __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
::CountSetBits(TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
               *this)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ForElementType<unsigned_int> FVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar9 = (ulonglong)this->BucketHash - ((ulonglong)(this->BucketHash >> 1) & 0x5555555555555555);
  uVar10 = 0;
  uVar6 = 0;
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  bVar3 = (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if (bVar3 != 0) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Buckets).Storage.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      FVar1 = (this->Buckets).Storage.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<unsigned_int>)this;
      if (FVar1 != (ForElementType<unsigned_int>)0x0) {
        FVar8 = FVar1;
      }
      lVar7 = (longlong)(int)uVar6;
      uVar6 = uVar6 + 1;
      uVar5 = *(uint *)((longlong)FVar8 + lVar7 * 4);
      uVar9 = (ulonglong)uVar5 - ((ulonglong)(uVar5 >> 1) & 0x5555555555555555);
      uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
      uVar10 = uVar10 + (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38);
    } while (uVar6 < bVar3);
  }
  return uVar10;
}

// CountSetBits @ 1462aa520

uint __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
::CountSetBits(TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
               *this)

{
  ForElementType<unsigned___int64> FVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ForElementType<unsigned___int64> FVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar9 = (ulonglong)this->BucketHash - ((ulonglong)(this->BucketHash >> 1) & 0x5555555555555555);
  uVar10 = 0;
  uVar6 = 0;
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  bVar3 = (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if (bVar3 != 0) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Buckets).Storage.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      FVar1 = (this->Buckets).Storage.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<unsigned___int64>)this;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FVar8 = FVar1;
      }
      lVar7 = (longlong)(int)uVar6;
      uVar6 = uVar6 + 1;
      uVar9 = *(ulonglong *)((longlong)FVar8 + lVar7 * 8);
      uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
      uVar10 = uVar10 + (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38);
    } while (uVar6 < bVar3);
  }
  return uVar10;
}

// CountSetBits @ 1462aa670

uint __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
::CountSetBits(TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
               *this)

{
  ForElementType<unsigned_char> FVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ForElementType<unsigned_char> FVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar9 = this->BucketHash - (this->BucketHash >> 1 & 0x5555555555555555);
  uVar10 = 0;
  uVar6 = 0;
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  bVar3 = (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if (bVar3 != 0) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Buckets).Storage.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      FVar1 = (this->Buckets).Storage.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<unsigned_char>)this;
      if (FVar1 != (ForElementType<unsigned_char>)0x0) {
        FVar8 = FVar1;
      }
      lVar7 = (longlong)(int)uVar6;
      uVar6 = uVar6 + 1;
      uVar9 = (ulonglong)*(byte *)(lVar7 + (longlong)FVar8) -
              ((ulonglong)(*(byte *)(lVar7 + (longlong)FVar8) >> 1) & 0x5555555555555555);
      uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
      uVar10 = uVar10 + (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38);
    } while (uVar6 < bVar3);
  }
  return uVar10;
}

// CountSetBits @ 1462aa7c0

uint __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
::CountSetBits(TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
               *this)

{
  ushort uVar1;
  ForElementType<unsigned_short> FVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ForElementType<unsigned_short> FVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = this->BucketHash - (this->BucketHash >> 1 & 0x5555555555555555);
  uVar11 = 0;
  uVar7 = 0;
  uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
  bVar4 = (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if (bVar4 != 0) {
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->Buckets).Storage.ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
      FVar2 = (this->Buckets).Storage.AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<unsigned_short>)this;
      if (FVar2 != (ForElementType<unsigned_short>)0x0) {
        FVar9 = FVar2;
      }
      lVar8 = (longlong)(int)uVar7;
      uVar7 = uVar7 + 1;
      uVar1 = *(ushort *)((longlong)FVar9 + lVar8 * 2);
      uVar10 = (ulonglong)uVar1 - ((ulonglong)(uVar1 >> 1) & 0x5555555555555555);
      uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
      uVar11 = uVar11 + (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38);
    } while (uVar7 < bVar4);
  }
  return uVar11;
}

// CountSetBits @ 1462aa910

uint __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
::CountSetBits(TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
               *this)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ForElementType<unsigned_int> FVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar9 = this->BucketHash - (this->BucketHash >> 1 & 0x5555555555555555);
  uVar10 = 0;
  uVar6 = 0;
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  bVar3 = (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if (bVar3 != 0) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Buckets).Storage.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      FVar1 = (this->Buckets).Storage.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<unsigned_int>)this;
      if (FVar1 != (ForElementType<unsigned_int>)0x0) {
        FVar8 = FVar1;
      }
      lVar7 = (longlong)(int)uVar6;
      uVar6 = uVar6 + 1;
      uVar5 = *(uint *)((longlong)FVar8 + lVar7 * 4);
      uVar9 = (ulonglong)uVar5 - ((ulonglong)(uVar5 >> 1) & 0x5555555555555555);
      uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
      uVar10 = uVar10 + (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38);
    } while (uVar6 < bVar3);
  }
  return uVar10;
}

// CountSetBits @ 1462aaa60

uint __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
::CountSetBits(TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
               *this)

{
  ForElementType<unsigned___int64> FVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ForElementType<unsigned___int64> FVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar9 = this->BucketHash - (this->BucketHash >> 1 & 0x5555555555555555);
  uVar10 = 0;
  uVar6 = 0;
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  bVar3 = (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if (bVar3 != 0) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Buckets).Storage.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      FVar1 = (this->Buckets).Storage.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<unsigned___int64>)this;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FVar8 = FVar1;
      }
      lVar7 = (longlong)(int)uVar6;
      uVar6 = uVar6 + 1;
      uVar9 = *(ulonglong *)((longlong)FVar8 + lVar7 * 8);
      uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
      uVar10 = uVar10 + (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38);
    } while (uVar6 < bVar3);
  }
  return uVar10;
}

// IsBitSet @ 1462b4740

bool __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
::IsBitSet(TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
           *this,uint param_1)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  
  bVar2 = (byte)(param_1 >> 3);
  bVar1 = '\x01' << (bVar2 & 0x1f);
  if ((bVar1 & this->BucketHash) != 0) {
    uVar3 = (ulonglong)bVar1 - 1 & (ulonglong)this->BucketHash;
    uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
    bVar1 = TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Get
                      (&this->Buckets,
                       (uint)(byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38));
    return ('\x01' << ((char)param_1 + bVar2 * -8 & 0x1f) & bVar1) != 0;
  }
  return false;
}

// IsBitSet @ 1462b4820

bool __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
::IsBitSet(TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
           *this,uint param_1)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  
  bVar1 = '\x01' << ((byte)(param_1 >> 4) & 0x1f);
  if ((bVar1 & this->BucketHash) != 0) {
    uVar3 = (ulonglong)bVar1 - 1 & (ulonglong)this->BucketHash;
    uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
    uVar2 = TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Get
                      (&this->Buckets,
                       (uint)(byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38));
    return (uVar2 >> ((ushort)param_1 & 0xf) & 1) != 0;
  }
  return false;
}

// IsBitSet @ 1462b48f0

bool __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
::IsBitSet(TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
           *this,uint param_1)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  bVar1 = '\x01' << ((byte)(param_1 >> 5) & 0x1f);
  if ((bVar1 & this->BucketHash) != 0) {
    uVar3 = (ulonglong)bVar1 - 1 & (ulonglong)this->BucketHash;
    uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
    uVar2 = TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Get
                      (&this->Buckets,
                       (uint)(byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38));
    return (uVar2 >> (param_1 & 0x1f) & 1) != 0;
  }
  return false;
}

// IsBitSet @ 1462b49c0

bool __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
::IsBitSet(TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
           *this,uint param_1)

{
  byte bVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  bVar1 = '\x01' << ((byte)(param_1 >> 6) & 0x1f);
  if ((bVar1 & this->BucketHash) != 0) {
    uVar3 = (ulonglong)bVar1 - 1 & (ulonglong)this->BucketHash;
    uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
    uVar2 = TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Get
                      (&this->Buckets,
                       (uint)(byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38));
    return (uVar2 >> ((ulonglong)(param_1 & 0xff) & 0x3f) & 1) != 0;
  }
  return false;
}

// IsBitSet @ 1462b4a90

bool __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
::IsBitSet(TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
           *this,uint param_1)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  ulonglong uVar4;
  
  bVar3 = (byte)(param_1 >> 3);
  uVar2 = 1 << (bVar3 & 0x1f);
  if ((uVar2 & this->BucketHash) != 0) {
    uVar4 = (ulonglong)uVar2 - 1 & (ulonglong)this->BucketHash;
    uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
    bVar1 = TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Get
                      (&this->Buckets,
                       (uint)(byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38));
    return ('\x01' << ((char)param_1 + bVar3 * -8 & 0x1f) & bVar1) != 0;
  }
  return false;
}

// IsBitSet @ 1462b4b70

bool __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
::IsBitSet(TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
           *this,uint param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  
  uVar1 = 1 << ((byte)(param_1 >> 4) & 0x1f);
  if ((uVar1 & this->BucketHash) != 0) {
    uVar2 = (ulonglong)uVar1 - 1 & (ulonglong)this->BucketHash;
    uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 >> 2 & 0x3333333333333333) + (uVar2 & 0x3333333333333333);
    uVar1 = TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Get
                      (&this->Buckets,
                       (uint)(byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38));
    return (uVar1 >> ((ushort)param_1 & 0xf) & 1) != 0;
  }
  return false;
}

// IsBitSet @ 1462b4c40

bool __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
::IsBitSet(TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
           *this,uint param_1)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = 1 << ((byte)(param_1 >> 5) & 0x1f);
  if ((uVar1 & this->BucketHash) != 0) {
    uVar3 = (ulonglong)uVar1 - 1 & (ulonglong)this->BucketHash;
    uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
    uVar2 = TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Get
                      (&this->Buckets,
                       (uint)(byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38));
    return (uVar2 >> (param_1 & 0x1f) & 1) != 0;
  }
  return false;
}

// IsBitSet @ 1462b4d10

bool __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
::IsBitSet(TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
           *this,uint param_1)

{
  ushort uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar1 = 1 << ((byte)(param_1 >> 6) & 0x1f);
  if ((uVar1 & this->BucketHash) != 0) {
    uVar3 = (ulonglong)uVar1 - 1 & (ulonglong)this->BucketHash;
    uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
    uVar2 = TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Get
                      (&this->Buckets,
                       (uint)(byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38));
    return (uVar2 >> ((ulonglong)(param_1 & 0xff) & 0x3f) & 1) != 0;
  }
  return false;
}

// IsBitSet @ 1462b4de0

bool __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
::IsBitSet(TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
           *this,uint param_1)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  ulonglong uVar4;
  
  bVar3 = (byte)(param_1 >> 3);
  uVar2 = 1 << (bVar3 & 0x1f);
  if ((uVar2 & this->BucketHash) != 0) {
    uVar2 = uVar2 - 1 & this->BucketHash;
    uVar4 = (ulonglong)uVar2 - ((ulonglong)(uVar2 >> 1) & 0x5555555555555555);
    uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
    bVar1 = TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Get
                      (&this->Buckets,
                       (uint)(byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38));
    return ('\x01' << ((char)param_1 + bVar3 * -8 & 0x1f) & bVar1) != 0;
  }
  return false;
}

// IsBitSet @ 1462b4ec0

bool __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
::IsBitSet(TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
           *this,uint param_1)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = 1 << ((byte)(param_1 >> 4) & 0x1f);
  if ((uVar2 & this->BucketHash) != 0) {
    uVar2 = uVar2 - 1 & this->BucketHash;
    uVar3 = (ulonglong)uVar2 - ((ulonglong)(uVar2 >> 1) & 0x5555555555555555);
    uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
    uVar1 = TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Get
                      (&this->Buckets,
                       (uint)(byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38));
    return (uVar1 >> ((ushort)param_1 & 0xf) & 1) != 0;
  }
  return false;
}

// IsBitSet @ 1462b4f80

bool __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
::IsBitSet(TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
           *this,uint param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 1 << ((byte)(param_1 >> 5) & 0x1f);
  if ((uVar1 & this->BucketHash) != 0) {
    uVar1 = uVar1 - 1 & this->BucketHash;
    uVar2 = (ulonglong)uVar1 - ((ulonglong)(uVar1 >> 1) & 0x5555555555555555);
    uVar2 = (uVar2 >> 2 & 0x3333333333333333) + (uVar2 & 0x3333333333333333);
    uVar1 = TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Get
                      (&this->Buckets,
                       (uint)(byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38));
    return (uVar1 >> (param_1 & 0x1f) & 1) != 0;
  }
  return false;
}

// IsBitSet @ 1462b5040

bool __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
::IsBitSet(TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
           *this,uint param_1)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar1 = 1 << ((byte)(param_1 >> 6) & 0x1f);
  if ((uVar1 & this->BucketHash) != 0) {
    uVar1 = uVar1 - 1 & this->BucketHash;
    uVar3 = (ulonglong)uVar1 - ((ulonglong)(uVar1 >> 1) & 0x5555555555555555);
    uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
    uVar2 = TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Get
                      (&this->Buckets,
                       (uint)(byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38));
    return (uVar2 >> ((ulonglong)(param_1 & 0xff) & 0x3f) & 1) != 0;
  }
  return false;
}

// IsBitSet @ 1462b5100

bool __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
::IsBitSet(TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
           *this,uint param_1)

{
  byte bVar1;
  ulonglong uVar2;
  byte bVar3;
  
  bVar3 = (byte)(param_1 >> 3);
  uVar2 = 1L << (bVar3 & 0x3f);
  if ((uVar2 & this->BucketHash) != 0) {
    uVar2 = uVar2 - 1 & this->BucketHash;
    uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 >> 2 & 0x3333333333333333) + (uVar2 & 0x3333333333333333);
    bVar1 = TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Get
                      (&this->Buckets,
                       (uint)(byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38));
    return ('\x01' << ((char)param_1 + bVar3 * -8 & 0x1f) & bVar1) != 0;
  }
  return false;
}

// IsBitSet @ 1462b51e0

bool __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
::IsBitSet(TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
           *this,uint param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  
  uVar2 = 1L << ((byte)(param_1 >> 4) & 0x3f);
  if ((uVar2 & this->BucketHash) != 0) {
    uVar2 = uVar2 - 1 & this->BucketHash;
    uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 >> 2 & 0x3333333333333333) + (uVar2 & 0x3333333333333333);
    uVar1 = TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Get
                      (&this->Buckets,
                       (uint)(byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38));
    return (uVar1 >> ((ushort)param_1 & 0xf) & 1) != 0;
  }
  return false;
}

// IsBitSet @ 1462b52b0

bool __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
::IsBitSet(TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
           *this,uint param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 1L << ((byte)(param_1 >> 5) & 0x3f);
  if ((uVar2 & this->BucketHash) != 0) {
    uVar2 = uVar2 - 1 & this->BucketHash;
    uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 >> 2 & 0x3333333333333333) + (uVar2 & 0x3333333333333333);
    uVar1 = TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Get
                      (&this->Buckets,
                       (uint)(byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38));
    return (uVar1 >> (param_1 & 0x1f) & 1) != 0;
  }
  return false;
}

// IsBitSet @ 1462b5370

bool __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
::IsBitSet(TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
           *this,uint param_1)

{
  ulonglong uVar1;
  ulong64 uVar2;
  
  uVar1 = 1L << ((byte)(param_1 >> 6) & 0x3f);
  if ((uVar1 & this->BucketHash) != 0) {
    uVar1 = uVar1 - 1 & this->BucketHash;
    uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
    uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333);
    uVar2 = TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Get
                      (&this->Buckets,
                       (uint)(byte)(((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38));
    return (uVar2 >> ((ulonglong)(param_1 & 0xff) & 0x3f) & 1) != 0;
  }
  return false;
}

// SetBit @ 1462bc010

ESparseBitSetBitResult __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
::SetBit(TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
         *this,uint param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  ulonglong uVar5;
  byte bVar6;
  
  bVar2 = (byte)(param_1 >> 3);
  bVar1 = this->BucketHash;
  bVar3 = '\x01' << (bVar2 & 0x1f);
  uVar5 = (ulonglong)(bVar3 - 1) & (ulonglong)bVar1;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  bVar6 = '\x01' << ((char)param_1 + bVar2 * -8 & 0x1f);
  bVar2 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if ((bVar1 & bVar3) == 0) {
    this->BucketHash = bVar1 | bVar3;
    TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Insert(&this->Buckets,bVar6,(uint)bVar2);
    return NewlySet;
  }
  pbVar4 = TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Get(&this->Buckets,(uint)bVar2);
  if ((*pbVar4 & bVar6) == 0) {
    pbVar4 = TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Get(&this->Buckets,(uint)bVar2);
    *pbVar4 = *pbVar4 | bVar6;
    return NewlySet;
  }
  return AlreadySet;
}

// SetBit @ 1462bc130

ESparseBitSetBitResult __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
::SetBit(TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
         *this,uint param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort *puVar4;
  ulonglong uVar5;
  ushort uVar6;
  
  bVar2 = (byte)(param_1 >> 4);
  bVar1 = this->BucketHash;
  bVar3 = '\x01' << (bVar2 & 0x1f);
  uVar5 = (ulonglong)(bVar3 - 1) & (ulonglong)bVar1;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  uVar6 = 1 << ((char)param_1 + bVar2 * -0x10 & 0x1f);
  bVar2 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if ((bVar1 & bVar3) == 0) {
    this->BucketHash = bVar1 | bVar3;
    TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Insert(&this->Buckets,uVar6,(uint)bVar2);
    return NewlySet;
  }
  puVar4 = TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Get(&this->Buckets,(uint)bVar2);
  if ((*puVar4 & uVar6) == 0) {
    puVar4 = TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Get(&this->Buckets,(uint)bVar2);
    *puVar4 = *puVar4 | uVar6;
    return NewlySet;
  }
  return AlreadySet;
}

// SetBit @ 1462bc250

ESparseBitSetBitResult __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
::SetBit(TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
         *this,uint param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint uVar6;
  
  bVar1 = this->BucketHash;
  bVar3 = '\x01' << ((byte)(param_1 >> 5) & 0x1f);
  uVar5 = (ulonglong)(bVar3 - 1) & (ulonglong)bVar1;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  uVar6 = 1 << ((byte)param_1 & 0x1f);
  bVar2 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if ((bVar1 & bVar3) == 0) {
    this->BucketHash = bVar1 | bVar3;
    TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Insert(&this->Buckets,uVar6,(uint)bVar2);
    return NewlySet;
  }
  puVar4 = TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Get(&this->Buckets,(uint)bVar2);
  if ((*puVar4 & uVar6) == 0) {
    puVar4 = TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Get(&this->Buckets,(uint)bVar2);
    *puVar4 = *puVar4 | uVar6;
    return NewlySet;
  }
  return AlreadySet;
}

// SetBit @ 1462bc360

ESparseBitSetBitResult __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
::SetBit(TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
         *this,uint param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulong64 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  bVar1 = this->BucketHash;
  bVar3 = '\x01' << ((byte)(param_1 >> 6) & 0x1f);
  uVar5 = (ulonglong)(bVar3 - 1) & (ulonglong)bVar1;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  uVar6 = 1L << ((byte)param_1 & 0x3f);
  bVar2 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if ((bVar1 & bVar3) == 0) {
    this->BucketHash = bVar1 | bVar3;
    TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Insert(&this->Buckets,uVar6,(uint)bVar2);
    return NewlySet;
  }
  puVar4 = TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Get(&this->Buckets,(uint)bVar2);
  if ((*puVar4 & uVar6) == 0) {
    puVar4 = TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Get(&this->Buckets,(uint)bVar2);
    *puVar4 = *puVar4 | uVar6;
    return NewlySet;
  }
  return AlreadySet;
}

// SetBit @ 1462bc480

ESparseBitSetBitResult __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
::SetBit(TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
         *this,uint param_1)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  byte bVar6;
  
  bVar2 = (byte)(param_1 >> 3);
  uVar1 = this->BucketHash;
  uVar3 = 1 << (bVar2 & 0x1f);
  uVar5 = (ulonglong)(uVar3 - 1) & (ulonglong)uVar1;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  bVar6 = '\x01' << ((char)param_1 + bVar2 * -8 & 0x1f);
  bVar2 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if ((uVar1 & uVar3) == 0) {
    this->BucketHash = uVar1 | uVar3;
    TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Insert(&this->Buckets,bVar6,(uint)bVar2);
    return NewlySet;
  }
  pbVar4 = TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Get(&this->Buckets,(uint)bVar2);
  if ((*pbVar4 & bVar6) == 0) {
    pbVar4 = TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Get(&this->Buckets,(uint)bVar2);
    *pbVar4 = *pbVar4 | bVar6;
    return NewlySet;
  }
  return AlreadySet;
}

// SetBit @ 1462bc5a0

ESparseBitSetBitResult __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
::SetBit(TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
         *this,uint param_1)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  ushort *puVar4;
  ulonglong uVar5;
  ushort uVar6;
  
  bVar2 = (byte)(param_1 >> 4);
  uVar1 = this->BucketHash;
  uVar3 = 1 << (bVar2 & 0x1f);
  uVar5 = (ulonglong)(uVar3 - 1) & (ulonglong)uVar1;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  uVar6 = 1 << ((char)param_1 + bVar2 * -0x10 & 0x1f);
  bVar2 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if ((uVar1 & uVar3) == 0) {
    this->BucketHash = uVar1 | uVar3;
    TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Insert(&this->Buckets,uVar6,(uint)bVar2);
    return NewlySet;
  }
  puVar4 = TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Get(&this->Buckets,(uint)bVar2);
  if ((*puVar4 & uVar6) == 0) {
    puVar4 = TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Get(&this->Buckets,(uint)bVar2);
    *puVar4 = *puVar4 | uVar6;
    return NewlySet;
  }
  return AlreadySet;
}

// SetBit @ 1462bc6c0

ESparseBitSetBitResult __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
::SetBit(TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
         *this,uint param_1)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar1 = this->BucketHash;
  uVar3 = 1 << ((byte)(param_1 >> 5) & 0x1f);
  uVar5 = (ulonglong)(uVar3 - 1) & (ulonglong)uVar1;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  uVar6 = 1 << ((byte)param_1 & 0x1f);
  bVar2 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if ((uVar1 & uVar3) == 0) {
    this->BucketHash = uVar1 | uVar3;
    TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Insert(&this->Buckets,uVar6,(uint)bVar2);
    return NewlySet;
  }
  puVar4 = TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Get(&this->Buckets,(uint)bVar2);
  if ((*puVar4 & uVar6) == 0) {
    puVar4 = TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Get(&this->Buckets,(uint)bVar2);
    *puVar4 = *puVar4 | uVar6;
    return NewlySet;
  }
  return AlreadySet;
}

// SetBit @ 1462bc7e0

ESparseBitSetBitResult __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
::SetBit(TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
         *this,uint param_1)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  ulong64 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = this->BucketHash;
  uVar3 = 1 << ((byte)(param_1 >> 6) & 0x1f);
  uVar5 = (ulonglong)(uVar3 - 1) & (ulonglong)uVar1;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  uVar6 = 1L << ((byte)param_1 & 0x3f);
  bVar2 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if ((uVar1 & uVar3) == 0) {
    this->BucketHash = uVar1 | uVar3;
    TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Insert(&this->Buckets,uVar6,(uint)bVar2);
    return NewlySet;
  }
  puVar4 = TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Get(&this->Buckets,(uint)bVar2);
  if ((*puVar4 & uVar6) == 0) {
    puVar4 = TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Get(&this->Buckets,(uint)bVar2);
    *puVar4 = *puVar4 | uVar6;
    return NewlySet;
  }
  return AlreadySet;
}

// SetBit @ 1462bc900

ESparseBitSetBitResult __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
::SetBit(TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
         *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  
  bVar4 = (byte)(param_1 >> 3);
  uVar7 = 1 << (bVar4 & 0x1f);
  uVar1 = this->BucketHash;
  uVar2 = uVar7 - 1 & uVar1;
  uVar5 = (ulonglong)uVar2 - ((ulonglong)(uVar2 >> 1) & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  bVar6 = '\x01' << ((char)param_1 + bVar4 * -8 & 0x1f);
  bVar4 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if ((uVar7 & uVar1) == 0) {
    this->BucketHash = uVar1 | uVar7;
    TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Insert(&this->Buckets,bVar6,(uint)bVar4);
    return NewlySet;
  }
  pbVar3 = TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Get(&this->Buckets,(uint)bVar4);
  if ((*pbVar3 & bVar6) == 0) {
    pbVar3 = TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Get(&this->Buckets,(uint)bVar4);
    *pbVar3 = *pbVar3 | bVar6;
    return NewlySet;
  }
  return AlreadySet;
}

// SetBit @ 1462bca20

ESparseBitSetBitResult __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
::SetBit(TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
         *this,uint param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ushort *puVar4;
  ulonglong uVar5;
  ushort uVar6;
  uint uVar7;
  
  uVar7 = 1 << ((byte)(param_1 >> 4) & 0x1f);
  uVar1 = this->BucketHash;
  uVar3 = uVar7 - 1 & uVar1;
  uVar5 = (ulonglong)uVar3 - ((ulonglong)(uVar3 >> 1) & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  uVar6 = 1 << ((char)param_1 - (char)((param_1 >> 4) << 4) & 0x1fU);
  bVar2 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if ((uVar7 & uVar1) == 0) {
    this->BucketHash = uVar1 | uVar7;
    TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Insert(&this->Buckets,uVar6,(uint)bVar2);
    return NewlySet;
  }
  puVar4 = TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Get(&this->Buckets,(uint)bVar2);
  if ((*puVar4 & uVar6) == 0) {
    puVar4 = TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Get(&this->Buckets,(uint)bVar2);
    *puVar4 = *puVar4 | uVar6;
    return NewlySet;
  }
  return AlreadySet;
}

// SetBit @ 1462bcb30

ESparseBitSetBitResult __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
::SetBit(TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
         *this,uint param_1)

{
  uint uVar1;
  byte bVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 1 << ((byte)(param_1 >> 5) & 0x1f);
  uVar1 = this->BucketHash;
  uVar5 = uVar6 - 1 & uVar1;
  uVar4 = (ulonglong)uVar5 - ((ulonglong)(uVar5 >> 1) & 0x5555555555555555);
  uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
  uVar5 = 1 << ((byte)param_1 & 0x1f);
  bVar2 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if ((uVar6 & uVar1) == 0) {
    this->BucketHash = uVar1 | uVar6;
    TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Insert(&this->Buckets,uVar5,(uint)bVar2);
    return NewlySet;
  }
  puVar3 = TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Get(&this->Buckets,(uint)bVar2);
  if ((*puVar3 & uVar5) == 0) {
    puVar3 = TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Get(&this->Buckets,(uint)bVar2);
    *puVar3 = *puVar3 | uVar5;
    return NewlySet;
  }
  return AlreadySet;
}

// SetBit @ 1462bcc40

ESparseBitSetBitResult __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
::SetBit(TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
         *this,uint param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulong64 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar7 = 1 << ((byte)(param_1 >> 6) & 0x1f);
  uVar1 = this->BucketHash;
  uVar3 = uVar7 - 1 & uVar1;
  uVar5 = (ulonglong)uVar3 - ((ulonglong)(uVar3 >> 1) & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  uVar6 = 1L << ((byte)param_1 & 0x3f);
  bVar2 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if ((uVar7 & uVar1) == 0) {
    this->BucketHash = uVar1 | uVar7;
    TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Insert(&this->Buckets,uVar6,(uint)bVar2);
    return NewlySet;
  }
  puVar4 = TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Get(&this->Buckets,(uint)bVar2);
  if ((*puVar4 & uVar6) == 0) {
    puVar4 = TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Get(&this->Buckets,(uint)bVar2);
    *puVar4 = *puVar4 | uVar6;
    return NewlySet;
  }
  return AlreadySet;
}

// SetBit @ 1462bcd50

ESparseBitSetBitResult __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
::SetBit(TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
         *this,uint param_1)

{
  ulonglong uVar1;
  byte *pbVar2;
  byte bVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  
  bVar3 = (byte)(param_1 >> 3);
  uVar6 = 1L << (bVar3 & 0x3f);
  uVar1 = this->BucketHash;
  uVar4 = uVar6 - 1 & uVar1;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
  bVar5 = '\x01' << ((char)param_1 + bVar3 * -8 & 0x1f);
  bVar3 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if ((uVar6 & uVar1) == 0) {
    this->BucketHash = uVar1 | uVar6;
    TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Insert(&this->Buckets,bVar5,(uint)bVar3);
    return NewlySet;
  }
  pbVar2 = TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Get(&this->Buckets,(uint)bVar3);
  if ((*pbVar2 & bVar5) == 0) {
    pbVar2 = TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Get(&this->Buckets,(uint)bVar3);
    *pbVar2 = *pbVar2 | bVar5;
    return NewlySet;
  }
  return AlreadySet;
}

// SetBit @ 1462bce70

ESparseBitSetBitResult __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
::SetBit(TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
         *this,uint param_1)

{
  ulonglong uVar1;
  ushort *puVar2;
  byte bVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  bVar3 = (byte)(param_1 >> 4);
  uVar6 = 1L << (bVar3 & 0x3f);
  uVar1 = this->BucketHash;
  uVar4 = uVar6 - 1 & uVar1;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
  uVar5 = 1 << ((char)param_1 + bVar3 * -0x10 & 0x1f);
  bVar3 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if ((uVar6 & uVar1) == 0) {
    this->BucketHash = uVar1 | uVar6;
    TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Insert(&this->Buckets,uVar5,(uint)bVar3);
    return NewlySet;
  }
  puVar2 = TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Get(&this->Buckets,(uint)bVar3);
  if ((*puVar2 & uVar5) == 0) {
    puVar2 = TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Get(&this->Buckets,(uint)bVar3);
    *puVar2 = *puVar2 | uVar5;
    return NewlySet;
  }
  return AlreadySet;
}

// SetBit @ 1462bcf80

ESparseBitSetBitResult __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
::SetBit(TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
         *this,uint param_1)

{
  ulonglong uVar1;
  byte bVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = 1L << ((byte)(param_1 >> 5) & 0x3f);
  uVar1 = this->BucketHash;
  uVar4 = uVar6 - 1 & uVar1;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
  uVar5 = 1 << ((byte)param_1 & 0x1f);
  bVar2 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if ((uVar6 & uVar1) == 0) {
    this->BucketHash = uVar1 | uVar6;
    TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Insert(&this->Buckets,uVar5,(uint)bVar2);
    return NewlySet;
  }
  puVar3 = TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Get(&this->Buckets,(uint)bVar2);
  if ((*puVar3 & uVar5) == 0) {
    puVar3 = TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Get(&this->Buckets,(uint)bVar2);
    *puVar3 = *puVar3 | uVar5;
    return NewlySet;
  }
  return AlreadySet;
}

// SetBit @ 1462bd090

ESparseBitSetBitResult __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
::SetBit(TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
         *this,uint param_1)

{
  ulonglong uVar1;
  byte bVar2;
  ulong64 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = 1L << ((byte)(param_1 >> 6) & 0x3f);
  uVar1 = this->BucketHash;
  uVar4 = uVar6 - 1 & uVar1;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
  uVar5 = 1L << ((byte)param_1 & 0x3f);
  bVar2 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if ((uVar6 & uVar1) == 0) {
    this->BucketHash = uVar1 | uVar6;
    TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Insert(&this->Buckets,uVar5,(uint)bVar2);
    return NewlySet;
  }
  puVar3 = TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Get(&this->Buckets,(uint)bVar2);
  if ((*puVar3 & uVar5) == 0) {
    puVar3 = TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Get(&this->Buckets,(uint)bVar2);
    *puVar3 = *puVar3 | uVar5;
    return NewlySet;
  }
  return AlreadySet;
}

