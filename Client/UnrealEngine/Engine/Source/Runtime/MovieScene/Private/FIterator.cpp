// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 17

// Begin @ 146194780

FIterator * __cdecl
UE::MovieScene::
TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
::FIterator::Begin(FIterator *__return_storage_ptr__,
                  TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                  *param_1)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  uchar uVar4;
  
  __return_storage_ptr__->IndexWithinBucket = '\0';
  __return_storage_ptr__->CurrentBucket = 0;
  uVar1 = param_1->BucketHash;
  __return_storage_ptr__->BitSet = param_1;
  if (uVar1 != 0) {
    iVar2 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
      }
    }
    uVar4 = ' ';
    if (uVar1 != 0) {
      uVar4 = (uchar)iVar2;
    }
    __return_storage_ptr__->BucketBitIndex = uVar4;
    uVar3 = TDynamicSparseBitSetBucketStorage<unsigned_short,0>::Get(&param_1->Buckets,0);
    __return_storage_ptr__->CurrentBucket = uVar3;
    iVar2 = 0;
    if ((uVar3 | 0xffff0000) != 0) {
      for (; ((uVar3 | 0xffff0000) >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
      }
    }
    __return_storage_ptr__->IndexWithinBucket = (uchar)iVar2;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->BucketBitIndex = ' ';
  __return_storage_ptr__->IndexWithinBucket = '\0';
  return __return_storage_ptr__;
}

// operator++ @ 14629c6a0

void __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
::FIterator::operator++(FIterator *this)

{
  TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
  *this_00;
  int iVar1;
  uint uVar2;
  byte bVar3;
  ulonglong uVar4;
  
  bVar3 = this->CurrentBucket - 1 & this->CurrentBucket;
  this->CurrentBucket = bVar3;
  if (bVar3 != 0) {
    iVar1 = 0;
    if ((bVar3 | 0xffffff00) != 0) {
      for (; ((bVar3 | 0xffffff00) >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    this->IndexWithinBucket = (uchar)iVar1;
    return;
  }
  if (this->BucketBitIndex == '\a') {
    this->BucketBitIndex = '\b';
    this->IndexWithinBucket = '\0';
    return;
  }
  this_00 = this->BitSet;
  uVar2 = -1 << (this->BucketBitIndex + 1 & 0x1f) & this_00->BucketHash | 0xffffff00;
  iVar1 = 0;
  if (uVar2 != 0) {
    for (; (uVar2 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  bVar3 = (byte)iVar1;
  this->BucketBitIndex = bVar3;
  if (bVar3 == 8) {
    this->IndexWithinBucket = '\0';
    return;
  }
  bVar3 = ('\x01' << (bVar3 & 0x1f)) - 1U & this_00->BucketHash;
  uVar4 = (ulonglong)bVar3 - ((ulonglong)(bVar3 >> 1) & 0x5555555555555555);
  uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
  bVar3 = TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Get
                    (&this_00->Buckets,
                     (uint)(byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                 0x38));
  this->CurrentBucket = bVar3;
  iVar1 = 0;
  if ((bVar3 | 0xffffff00) != 0) {
    for (; ((bVar3 | 0xffffff00) >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  this->IndexWithinBucket = (uchar)iVar1;
  return;
}

// operator++ @ 14629c7b0

void __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
::FIterator::operator++(FIterator *this)

{
  TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
  *this_00;
  int iVar1;
  byte bVar2;
  uint uVar3;
  ushort uVar4;
  ulonglong uVar5;
  
  uVar4 = this->CurrentBucket - 1 & this->CurrentBucket;
  this->CurrentBucket = uVar4;
  if (uVar4 != 0) {
    iVar1 = 0;
    if ((uVar4 | 0xffff0000) != 0) {
      for (; ((uVar4 | 0xffff0000) >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    this->IndexWithinBucket = (uchar)iVar1;
    return;
  }
  if (this->BucketBitIndex == '\a') {
    this->BucketBitIndex = '\b';
    this->IndexWithinBucket = '\0';
    return;
  }
  this_00 = this->BitSet;
  uVar3 = -1 << (this->BucketBitIndex + 1 & 0x1f) & this_00->BucketHash | 0xffffff00;
  iVar1 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  bVar2 = (byte)iVar1;
  this->BucketBitIndex = bVar2;
  if (bVar2 == 8) {
    this->IndexWithinBucket = '\0';
    return;
  }
  bVar2 = ('\x01' << (bVar2 & 0x1f)) - 1U & this_00->BucketHash;
  uVar5 = (ulonglong)bVar2 - ((ulonglong)(bVar2 >> 1) & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  uVar4 = TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Get
                    (&this_00->Buckets,
                     (uint)(byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                 0x38));
  this->CurrentBucket = uVar4;
  iVar1 = 0;
  if ((uVar4 | 0xffff0000) != 0) {
    for (; ((uVar4 | 0xffff0000) >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  this->IndexWithinBucket = (uchar)iVar1;
  return;
}

// operator++ @ 14629c8c0

void __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
::FIterator::operator++(FIterator *this)

{
  TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
  *this_00;
  int iVar1;
  byte bVar2;
  uint uVar3;
  uchar uVar4;
  ulonglong uVar5;
  
  uVar3 = this->CurrentBucket - 1 & this->CurrentBucket;
  this->CurrentBucket = uVar3;
  if (uVar3 != 0) {
    iVar1 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    uVar4 = ' ';
    if (uVar3 != 0) {
      uVar4 = (uchar)iVar1;
    }
    this->IndexWithinBucket = uVar4;
    return;
  }
  if (this->BucketBitIndex == '\a') {
    this->BucketBitIndex = '\b';
    this->IndexWithinBucket = '\0';
    return;
  }
  this_00 = this->BitSet;
  uVar3 = -1 << (this->BucketBitIndex + 1 & 0x1f) & this_00->BucketHash | 0xffffff00;
  iVar1 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  bVar2 = (byte)iVar1;
  this->BucketBitIndex = bVar2;
  if (bVar2 == 8) {
    this->IndexWithinBucket = '\0';
    return;
  }
  bVar2 = ('\x01' << (bVar2 & 0x1f)) - 1U & this_00->BucketHash;
  uVar5 = (ulonglong)bVar2 - ((ulonglong)(bVar2 >> 1) & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  uVar3 = TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Get
                    (&this_00->Buckets,
                     (uint)(byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                 0x38));
  iVar1 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  this->CurrentBucket = uVar3;
  uVar4 = ' ';
  if (uVar3 != 0) {
    uVar4 = (uchar)iVar1;
  }
  this->IndexWithinBucket = uVar4;
  return;
}

// operator++ @ 14629c9d0

void __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
::FIterator::operator++(FIterator *this)

{
  TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
  *this_00;
  int iVar1;
  longlong lVar2;
  ulong64 uVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  uchar uVar7;
  
  uVar6 = this->CurrentBucket - 1 & this->CurrentBucket;
  this->CurrentBucket = uVar6;
  if (uVar6 != 0) {
    lVar2 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
      }
    }
    uVar7 = '@';
    if (uVar6 != 0) {
      uVar7 = (uchar)lVar2;
    }
    this->IndexWithinBucket = uVar7;
    return;
  }
  if (this->BucketBitIndex == '\a') {
    this->BucketBitIndex = '\b';
    this->IndexWithinBucket = '\0';
    return;
  }
  this_00 = this->BitSet;
  uVar5 = -1 << (this->BucketBitIndex + 1 & 0x1f) & this_00->BucketHash | 0xffffff00;
  iVar1 = 0;
  if (uVar5 != 0) {
    for (; (uVar5 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  bVar4 = (byte)iVar1;
  this->BucketBitIndex = bVar4;
  if (bVar4 == 8) {
    this->IndexWithinBucket = '\0';
    return;
  }
  bVar4 = ('\x01' << (bVar4 & 0x1f)) - 1U & this_00->BucketHash;
  uVar6 = (ulonglong)bVar4 - ((ulonglong)(bVar4 >> 1) & 0x5555555555555555);
  uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
  uVar3 = TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Get
                    (&this_00->Buckets,
                     (uint)(byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                 0x38));
  lVar2 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  this->CurrentBucket = uVar3;
  uVar7 = '@';
  if (uVar3 != 0) {
    uVar7 = (uchar)lVar2;
  }
  this->IndexWithinBucket = uVar7;
  return;
}

// operator++ @ 14629cae0

void __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
::FIterator::operator++(FIterator *this)

{
  TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
  *this_00;
  int iVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  ulonglong uVar5;
  
  bVar4 = this->CurrentBucket - 1 & this->CurrentBucket;
  this->CurrentBucket = bVar4;
  if (bVar4 != 0) {
    iVar1 = 0;
    if ((bVar4 | 0xffffff00) != 0) {
      for (; ((bVar4 | 0xffffff00) >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    this->IndexWithinBucket = (uchar)iVar1;
    return;
  }
  if (this->BucketBitIndex == '\x0f') {
    this->BucketBitIndex = '\x10';
    this->IndexWithinBucket = '\0';
    return;
  }
  this_00 = this->BitSet;
  uVar3 = -1 << (this->BucketBitIndex + 1 & 0x1f) & this_00->BucketHash | 0xffff0000;
  iVar1 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  bVar4 = (byte)iVar1;
  this->BucketBitIndex = bVar4;
  if (bVar4 == 0x10) {
    this->IndexWithinBucket = '\0';
    return;
  }
  uVar2 = (1 << (bVar4 & 0x1f)) - 1U & this_00->BucketHash;
  uVar5 = (ulonglong)uVar2 - ((ulonglong)(uVar2 >> 1) & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  bVar4 = TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Get
                    (&this_00->Buckets,
                     (uint)(byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                 0x38));
  this->CurrentBucket = bVar4;
  iVar1 = 0;
  if ((bVar4 | 0xffffff00) != 0) {
    for (; ((bVar4 | 0xffffff00) >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  this->IndexWithinBucket = (uchar)iVar1;
  return;
}

// operator++ @ 14629cbf0

void __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
::FIterator::operator++(FIterator *this)

{
  TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
  *this_00;
  int iVar1;
  byte bVar2;
  uint uVar3;
  ushort uVar4;
  ulonglong uVar5;
  
  uVar4 = this->CurrentBucket - 1 & this->CurrentBucket;
  this->CurrentBucket = uVar4;
  if (uVar4 != 0) {
    iVar1 = 0;
    if ((uVar4 | 0xffff0000) != 0) {
      for (; ((uVar4 | 0xffff0000) >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    this->IndexWithinBucket = (uchar)iVar1;
    return;
  }
  if (this->BucketBitIndex == '\x0f') {
    this->BucketBitIndex = '\x10';
    this->IndexWithinBucket = '\0';
    return;
  }
  this_00 = this->BitSet;
  uVar3 = -1 << (this->BucketBitIndex + 1 & 0x1f) & this_00->BucketHash | 0xffff0000;
  iVar1 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  bVar2 = (byte)iVar1;
  this->BucketBitIndex = bVar2;
  if (bVar2 == 0x10) {
    this->IndexWithinBucket = '\0';
    return;
  }
  uVar4 = (1 << (bVar2 & 0x1f)) - 1U & this_00->BucketHash;
  uVar5 = (ulonglong)uVar4 - ((ulonglong)(uVar4 >> 1) & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  uVar4 = TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Get
                    (&this_00->Buckets,
                     (uint)(byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                 0x38));
  this->CurrentBucket = uVar4;
  iVar1 = 0;
  if ((uVar4 | 0xffff0000) != 0) {
    for (; ((uVar4 | 0xffff0000) >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  this->IndexWithinBucket = (uchar)iVar1;
  return;
}

// operator++ @ 14629cd00

void __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
::FIterator::operator++(FIterator *this)

{
  TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
  *this_00;
  int iVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  uchar uVar5;
  ulonglong uVar6;
  
  uVar4 = this->CurrentBucket - 1 & this->CurrentBucket;
  this->CurrentBucket = uVar4;
  if (uVar4 != 0) {
    iVar1 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    uVar5 = ' ';
    if (uVar4 != 0) {
      uVar5 = (uchar)iVar1;
    }
    this->IndexWithinBucket = uVar5;
    return;
  }
  if (this->BucketBitIndex == '\x0f') {
    this->BucketBitIndex = '\x10';
    this->IndexWithinBucket = '\0';
    return;
  }
  this_00 = this->BitSet;
  uVar4 = -1 << (this->BucketBitIndex + 1 & 0x1f) & this_00->BucketHash | 0xffff0000;
  iVar1 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  bVar3 = (byte)iVar1;
  this->BucketBitIndex = bVar3;
  if (bVar3 == 0x10) {
    this->IndexWithinBucket = '\0';
    return;
  }
  uVar2 = (1 << (bVar3 & 0x1f)) - 1U & this_00->BucketHash;
  uVar6 = (ulonglong)uVar2 - ((ulonglong)(uVar2 >> 1) & 0x5555555555555555);
  uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
  uVar4 = TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Get
                    (&this_00->Buckets,
                     (uint)(byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                 0x38));
  iVar1 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  this->CurrentBucket = uVar4;
  uVar5 = ' ';
  if (uVar4 != 0) {
    uVar5 = (uchar)iVar1;
  }
  this->IndexWithinBucket = uVar5;
  return;
}

// operator++ @ 14629ce10

void __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
::FIterator::operator++(FIterator *this)

{
  TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
  *this_00;
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  ulong64 uVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  uchar uVar8;
  
  uVar7 = this->CurrentBucket - 1 & this->CurrentBucket;
  this->CurrentBucket = uVar7;
  if (uVar7 != 0) {
    lVar2 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
      }
    }
    uVar8 = '@';
    if (uVar7 != 0) {
      uVar8 = (uchar)lVar2;
    }
    this->IndexWithinBucket = uVar8;
    return;
  }
  if (this->BucketBitIndex == '\x0f') {
    this->BucketBitIndex = '\x10';
    this->IndexWithinBucket = '\0';
    return;
  }
  this_00 = this->BitSet;
  uVar6 = -1 << (this->BucketBitIndex + 1 & 0x1f) & this_00->BucketHash | 0xffff0000;
  iVar1 = 0;
  if (uVar6 != 0) {
    for (; (uVar6 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  bVar5 = (byte)iVar1;
  this->BucketBitIndex = bVar5;
  if (bVar5 == 0x10) {
    this->IndexWithinBucket = '\0';
    return;
  }
  uVar3 = (1 << (bVar5 & 0x1f)) - 1U & this_00->BucketHash;
  uVar7 = (ulonglong)uVar3 - ((ulonglong)(uVar3 >> 1) & 0x5555555555555555);
  uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
  uVar4 = TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Get
                    (&this_00->Buckets,
                     (uint)(byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                 0x38));
  lVar2 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  this->CurrentBucket = uVar4;
  uVar8 = '@';
  if (uVar4 != 0) {
    uVar8 = (uchar)lVar2;
  }
  this->IndexWithinBucket = uVar8;
  return;
}

// operator++ @ 14629cf30

void __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
::FIterator::operator++(FIterator *this)

{
  TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
  *this_00;
  int iVar1;
  uint uVar2;
  byte bVar3;
  ulonglong uVar4;
  
  bVar3 = this->CurrentBucket - 1 & this->CurrentBucket;
  this->CurrentBucket = bVar3;
  if (bVar3 != 0) {
    iVar1 = 0;
    if ((bVar3 | 0xffffff00) != 0) {
      for (; ((bVar3 | 0xffffff00) >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    this->IndexWithinBucket = (uchar)iVar1;
    return;
  }
  if (this->BucketBitIndex == '\x1f') {
    this->BucketBitIndex = ' ';
    this->IndexWithinBucket = '\0';
    return;
  }
  this_00 = this->BitSet;
  uVar2 = -1 << (this->BucketBitIndex + 1 & 0x1f) & this_00->BucketHash;
  iVar1 = 0;
  if (uVar2 != 0) {
    for (; (uVar2 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  bVar3 = 0x20;
  if (uVar2 != 0) {
    bVar3 = (byte)iVar1;
  }
  this->BucketBitIndex = bVar3;
  if (bVar3 == 0x20) {
    this->IndexWithinBucket = '\0';
    return;
  }
  uVar2 = (1 << (bVar3 & 0x1f)) - 1U & this_00->BucketHash;
  uVar4 = (ulonglong)uVar2 - ((ulonglong)(uVar2 >> 1) & 0x5555555555555555);
  uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
  bVar3 = TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Get
                    (&this_00->Buckets,
                     (uint)(byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                 0x38));
  this->CurrentBucket = bVar3;
  iVar1 = 0;
  if ((bVar3 | 0xffffff00) != 0) {
    for (; ((bVar3 | 0xffffff00) >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  this->IndexWithinBucket = (uchar)iVar1;
  return;
}

// operator++ @ 14629d030

void __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
::FIterator::operator++(FIterator *this)

{
  TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
  *this_00;
  int iVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ulonglong uVar5;
  
  uVar4 = this->CurrentBucket - 1 & this->CurrentBucket;
  this->CurrentBucket = uVar4;
  if (uVar4 != 0) {
    iVar1 = 0;
    if ((uVar4 | 0xffff0000) != 0) {
      for (; ((uVar4 | 0xffff0000) >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    this->IndexWithinBucket = (uchar)iVar1;
    return;
  }
  if (this->BucketBitIndex == '\x1f') {
    this->BucketBitIndex = ' ';
    this->IndexWithinBucket = '\0';
    return;
  }
  this_00 = this->BitSet;
  uVar2 = -1 << (this->BucketBitIndex + 1 & 0x1f) & this_00->BucketHash;
  iVar1 = 0;
  if (uVar2 != 0) {
    for (; (uVar2 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  bVar3 = 0x20;
  if (uVar2 != 0) {
    bVar3 = (byte)iVar1;
  }
  this->BucketBitIndex = bVar3;
  if (bVar3 == 0x20) {
    this->IndexWithinBucket = '\0';
    return;
  }
  uVar2 = (1 << (bVar3 & 0x1f)) - 1U & this_00->BucketHash;
  uVar5 = (ulonglong)uVar2 - ((ulonglong)(uVar2 >> 1) & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  uVar4 = TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Get
                    (&this_00->Buckets,
                     (uint)(byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                 0x38));
  this->CurrentBucket = uVar4;
  iVar1 = 0;
  if ((uVar4 | 0xffff0000) != 0) {
    for (; ((uVar4 | 0xffff0000) >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  this->IndexWithinBucket = (uchar)iVar1;
  return;
}

// operator++ @ 14629d140

void __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
::FIterator::operator++(FIterator *this)

{
  TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
  *this_00;
  int iVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  uchar uVar5;
  
  uVar3 = this->CurrentBucket - 1 & this->CurrentBucket;
  this->CurrentBucket = uVar3;
  if (uVar3 != 0) {
    iVar1 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    uVar5 = ' ';
    if (uVar3 != 0) {
      uVar5 = (uchar)iVar1;
    }
    this->IndexWithinBucket = uVar5;
    return;
  }
  if (this->BucketBitIndex == '\x1f') {
    this->BucketBitIndex = ' ';
    this->IndexWithinBucket = '\0';
    return;
  }
  this_00 = this->BitSet;
  uVar3 = -1 << (this->BucketBitIndex + 1 & 0x1f) & this_00->BucketHash;
  iVar1 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  bVar2 = 0x20;
  if (uVar3 != 0) {
    bVar2 = (byte)iVar1;
  }
  this->BucketBitIndex = bVar2;
  if (bVar2 == 0x20) {
    this->IndexWithinBucket = '\0';
    return;
  }
  uVar3 = (1 << (bVar2 & 0x1f)) - 1U & this_00->BucketHash;
  uVar4 = (ulonglong)uVar3 - ((ulonglong)(uVar3 >> 1) & 0x5555555555555555);
  uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
  uVar3 = TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Get
                    (&this_00->Buckets,
                     (uint)(byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                 0x38));
  this->CurrentBucket = uVar3;
  iVar1 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  uVar5 = ' ';
  if (uVar3 != 0) {
    uVar5 = (uchar)iVar1;
  }
  this->IndexWithinBucket = uVar5;
  return;
}

// operator++ @ 14629d260

void __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
::FIterator::operator++(FIterator *this)

{
  TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
  *this_00;
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulong64 uVar4;
  byte bVar5;
  ulonglong uVar6;
  uchar uVar7;
  
  uVar6 = this->CurrentBucket - 1 & this->CurrentBucket;
  this->CurrentBucket = uVar6;
  if (uVar6 != 0) {
    lVar2 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
      }
    }
    uVar7 = '@';
    if (uVar6 != 0) {
      uVar7 = (uchar)lVar2;
    }
    this->IndexWithinBucket = uVar7;
    return;
  }
  if (this->BucketBitIndex == '\x1f') {
    this->BucketBitIndex = ' ';
    this->IndexWithinBucket = '\0';
    return;
  }
  this_00 = this->BitSet;
  uVar3 = -1 << (this->BucketBitIndex + 1 & 0x1f) & this_00->BucketHash;
  iVar1 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  bVar5 = 0x20;
  if (uVar3 != 0) {
    bVar5 = (byte)iVar1;
  }
  this->BucketBitIndex = bVar5;
  if (bVar5 == 0x20) {
    this->IndexWithinBucket = '\0';
    return;
  }
  uVar3 = (1 << (bVar5 & 0x1f)) - 1U & this_00->BucketHash;
  uVar6 = (ulonglong)uVar3 - ((ulonglong)(uVar3 >> 1) & 0x5555555555555555);
  uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
  uVar4 = TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Get
                    (&this_00->Buckets,
                     (uint)(byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                 0x38));
  lVar2 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  this->CurrentBucket = uVar4;
  uVar7 = '@';
  if (uVar4 != 0) {
    uVar7 = (uchar)lVar2;
  }
  this->IndexWithinBucket = uVar7;
  return;
}

// operator++ @ 14629d370

void __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
::FIterator::operator++(FIterator *this)

{
  TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
  *this_00;
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  
  bVar4 = this->CurrentBucket - 1 & this->CurrentBucket;
  this->CurrentBucket = bVar4;
  if (bVar4 != 0) {
    iVar1 = 0;
    if ((bVar4 | 0xffffff00) != 0) {
      for (; ((bVar4 | 0xffffff00) >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    this->IndexWithinBucket = (uchar)iVar1;
    return;
  }
  if (this->BucketBitIndex == '?') {
    this->BucketBitIndex = '@';
    this->IndexWithinBucket = '\0';
    return;
  }
  this_00 = this->BitSet;
  uVar3 = ~((1L << (this->BucketBitIndex + 1 & 0x3f)) - 1U) & this_00->BucketHash;
  lVar2 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  bVar4 = 0x40;
  if (uVar3 != 0) {
    bVar4 = (byte)lVar2;
  }
  this->BucketBitIndex = bVar4;
  if (bVar4 == 0x40) {
    this->IndexWithinBucket = '\0';
    return;
  }
  uVar3 = (1L << (bVar4 & 0x3f)) - 1U & this_00->BucketHash;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
  bVar4 = TDynamicSparseBitSetBucketStorage<unsigned_char,4>::Get
                    (&this_00->Buckets,
                     (uint)(byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                 0x38));
  this->CurrentBucket = bVar4;
  iVar1 = 0;
  if ((bVar4 | 0xffffff00) != 0) {
    for (; ((bVar4 | 0xffffff00) >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  this->IndexWithinBucket = (uchar)iVar1;
  return;
}

// operator++ @ 14629d480

void __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
::FIterator::operator++(FIterator *this)

{
  TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
  *this_00;
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  ushort uVar5;
  
  uVar5 = this->CurrentBucket - 1 & this->CurrentBucket;
  this->CurrentBucket = uVar5;
  if (uVar5 != 0) {
    iVar1 = 0;
    if ((uVar5 | 0xffff0000) != 0) {
      for (; ((uVar5 | 0xffff0000) >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    this->IndexWithinBucket = (uchar)iVar1;
    return;
  }
  if (this->BucketBitIndex == '?') {
    this->BucketBitIndex = '@';
    this->IndexWithinBucket = '\0';
    return;
  }
  this_00 = this->BitSet;
  uVar3 = ~((1L << (this->BucketBitIndex + 1 & 0x3f)) - 1U) & this_00->BucketHash;
  lVar2 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  bVar4 = 0x40;
  if (uVar3 != 0) {
    bVar4 = (byte)lVar2;
  }
  this->BucketBitIndex = bVar4;
  if (bVar4 == 0x40) {
    this->IndexWithinBucket = '\0';
    return;
  }
  uVar3 = (1L << (bVar4 & 0x3f)) - 1U & this_00->BucketHash;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
  uVar5 = TDynamicSparseBitSetBucketStorage<unsigned_short,4>::Get
                    (&this_00->Buckets,
                     (uint)(byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                 0x38));
  this->CurrentBucket = uVar5;
  iVar1 = 0;
  if ((uVar5 | 0xffff0000) != 0) {
    for (; ((uVar5 | 0xffff0000) >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  this->IndexWithinBucket = (uchar)iVar1;
  return;
}

// operator++ @ 14629d590

void __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
::FIterator::operator++(FIterator *this)

{
  TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
  *this_00;
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  uchar uVar6;
  
  uVar5 = this->CurrentBucket - 1 & this->CurrentBucket;
  this->CurrentBucket = uVar5;
  if (uVar5 != 0) {
    iVar1 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    uVar6 = ' ';
    if (uVar5 != 0) {
      uVar6 = (uchar)iVar1;
    }
    this->IndexWithinBucket = uVar6;
    return;
  }
  if (this->BucketBitIndex == '?') {
    this->BucketBitIndex = '@';
    this->IndexWithinBucket = '\0';
    return;
  }
  this_00 = this->BitSet;
  uVar3 = ~((1L << (this->BucketBitIndex + 1 & 0x3f)) - 1U) & this_00->BucketHash;
  lVar2 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  bVar4 = 0x40;
  if (uVar3 != 0) {
    bVar4 = (byte)lVar2;
  }
  this->BucketBitIndex = bVar4;
  if (bVar4 == 0x40) {
    this->IndexWithinBucket = '\0';
    return;
  }
  uVar3 = (1L << (bVar4 & 0x3f)) - 1U & this_00->BucketHash;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
  uVar5 = TDynamicSparseBitSetBucketStorage<unsigned_int,4>::Get
                    (&this_00->Buckets,
                     (uint)(byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                 0x38));
  iVar1 = 0;
  if (uVar5 != 0) {
    for (; (uVar5 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  this->CurrentBucket = uVar5;
  uVar6 = ' ';
  if (uVar5 != 0) {
    uVar6 = (uchar)iVar1;
  }
  this->IndexWithinBucket = uVar6;
  return;
}

// operator++ @ 14629d6a0

void __thiscall
UE::MovieScene::
TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
::FIterator::operator++(FIterator *this)

{
  TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
  *this_00;
  longlong lVar1;
  ulong64 uVar2;
  byte bVar3;
  ulonglong uVar4;
  uchar uVar5;
  
  uVar4 = this->CurrentBucket - 1 & this->CurrentBucket;
  this->CurrentBucket = uVar4;
  if (uVar4 != 0) {
    lVar1 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
      }
    }
    uVar5 = '@';
    if (uVar4 != 0) {
      uVar5 = (uchar)lVar1;
    }
    this->IndexWithinBucket = uVar5;
    return;
  }
  if (this->BucketBitIndex == '?') {
    this->BucketBitIndex = '@';
    this->IndexWithinBucket = '\0';
    return;
  }
  this_00 = this->BitSet;
  uVar4 = ~((1L << (this->BucketBitIndex + 1 & 0x3f)) - 1U) & this_00->BucketHash;
  lVar1 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  bVar3 = 0x40;
  if (uVar4 != 0) {
    bVar3 = (byte)lVar1;
  }
  this->BucketBitIndex = bVar3;
  if (bVar3 == 0x40) {
    this->IndexWithinBucket = '\0';
    return;
  }
  uVar4 = (1L << (bVar3 & 0x3f)) - 1U & this_00->BucketHash;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
  uVar2 = TDynamicSparseBitSetBucketStorage<unsigned___int64,4>::Get
                    (&this_00->Buckets,
                     (uint)(byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                 0x38));
  this->CurrentBucket = uVar2;
  lVar1 = 0;
  if (uVar2 != 0) {
    for (; (uVar2 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  uVar5 = '@';
  if (uVar2 != 0) {
    uVar5 = (uchar)lVar1;
  }
  this->IndexWithinBucket = uVar5;
  return;
}

