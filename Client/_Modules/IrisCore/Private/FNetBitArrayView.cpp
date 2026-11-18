// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 13

// Combine<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int)> @ 1441f55f0

void __thiscall
UE::Net::FNetBitArrayView::Combine<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int)>
          (FNetBitArrayView *this,FNetBitArrayView *param_1,_func___cdecl_uint_uint_uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (((this->Storage == param_1->Storage) || (this->BitCount != param_1->BitCount)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x64b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar4 = this->Storage;
  if (this->WordCount != 0) {
    lVar5 = (longlong)param_1->Storage - (longlong)puVar4;
    uVar6 = (ulonglong)this->WordCount;
    do {
      uVar3 = (*param_2)(*puVar4,*(uint *)((longlong)puVar4 + lVar5));
      *puVar4 = uVar3;
      puVar4 = puVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// FNetBitArrayView @ 1441f88c0

FNetBitArrayView * __thiscall
UE::Net::FNetBitArrayView::FNetBitArrayView(FNetBitArrayView *this,uint *param_1,uint param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  FNetBitArrayView *pFVar4;
  
  this->Storage = param_1;
  puVar1 = &this->BitCount;
  this->WordCount = param_2 + 0x1f >> 5;
  *puVar1 = param_2;
  if (param_2 == 0) {
    this->Storage = puVar1;
    param_1 = puVar1;
  }
  if (param_1 == (uint *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Storage != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x5a6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNetBitArrayView *)(*pcVar2)();
      return pFVar4;
    }
  }
  if ((*puVar1 != 0) &&
     ((this->Storage[this->WordCount - 1] & ~(0xffffffffU >> (-(char)*puVar1 & 0x1fU))) != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(BitCount == 0) || ((Storage[WordCount - 1] & ~GetLastWordMask()) == 0u)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x5a7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNetBitArrayView *)(*pcVar2)();
      return pFVar4;
    }
  }
  return this;
}

// IsAnyBitSet @ 1442116a0

bool __thiscall
UE::Net::FNetBitArrayView::IsAnyBitSet(FNetBitArrayView *this,uint param_1,uint param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_2 == 1) {
    puVar1 = this->Storage;
    if ((this->BitCount <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    return (puVar1[param_1 >> 5] >> (param_1 & 0x1f) & 1) != 0;
  }
  uVar8 = this->BitCount;
  if (param_1 < uVar8 && param_2 != 0) {
    uVar9 = -1 << ((byte)param_1 & 0x1f);
    if (((ulonglong)param_2 + (ulonglong)param_1) - 1 < (ulonglong)uVar8 - 1) {
      uVar8 = (uint)((ulonglong)param_2 + (ulonglong)param_1);
    }
    uVar6 = uVar8 - 1 >> 5;
    for (uVar7 = param_1 >> 5; uVar7 <= uVar6; uVar7 = uVar7 + 1) {
      uVar5 = 0xffffffff;
      if (uVar7 == uVar6) {
        uVar5 = 0xffffffff >> (~(byte)(uVar8 - 1) & 0x1f);
      }
      uVar5 = uVar5 & uVar9;
      uVar9 = 0xffffffff;
      if ((this->Storage[uVar7] & uVar5) != 0) {
        return true;
      }
    }
  }
  return false;
}

// SetBits @ 144219c10

void __thiscall UE::Net::FNetBitArrayView::SetBits(FNetBitArrayView *this,uint param_1,uint param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = this->BitCount;
  puVar1 = this->Storage;
  if ((param_2 == 0 || uVar7 <= param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count > 0) & (StartIndex < BitCount)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x276,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar8 = -1 << ((byte)param_1 & 0x1f);
  if (((ulonglong)param_2 + (ulonglong)param_1) - 1 < (ulonglong)uVar7 - 1) {
    uVar7 = (uint)((ulonglong)param_2 + (ulonglong)param_1);
  }
  uVar5 = uVar7 - 1 >> 5;
  for (uVar6 = param_1 >> 5; uVar6 <= uVar5; uVar6 = uVar6 + 1) {
    uVar4 = 0xffffffff;
    if (uVar6 == uVar5) {
      uVar4 = 0xffffffff >> (~(byte)(uVar7 - 1) & 0x1f);
    }
    uVar4 = uVar4 & uVar8;
    uVar8 = 0xffffffff;
    puVar1[uVar6] = puVar1[uVar6] | uVar4;
  }
  return;
}

// ClearBits @ 144233020

void __thiscall
UE::Net::FNetBitArrayView::ClearBits(FNetBitArrayView *this,uint param_1,uint param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = this->BitCount;
  puVar1 = this->Storage;
  if ((param_2 == 0 || uVar7 <= param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count > 0) & (StartIndex < BitCount)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x28c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar8 = -1 << ((byte)param_1 & 0x1f);
  if (((ulonglong)param_2 + (ulonglong)param_1) - 1 < (ulonglong)uVar7 - 1) {
    uVar7 = (uint)((ulonglong)param_2 + (ulonglong)param_1);
  }
  uVar5 = uVar7 - 1 >> 5;
  for (uVar6 = param_1 >> 5; uVar6 <= uVar5; uVar6 = uVar6 + 1) {
    uVar4 = 0xffffffff;
    if (uVar6 == uVar5) {
      uVar4 = 0xffffffff >> (~(byte)(uVar7 - 1) & 0x1f);
    }
    uVar4 = uVar4 & uVar8;
    uVar8 = 0xffffffff;
    puVar1[uVar6] = puVar1[uVar6] & ~uVar4;
  }
  return;
}

// Copy @ 144234050

void __thiscall UE::Net::FNetBitArrayView::Copy(FNetBitArrayView *this,FNetBitArrayView *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Storage == param_1->Storage) || (this->BitCount != param_1->BitCount)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x5d8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->WordCount != 0) && (param_1->WordCount != 0)) {
    memcpy(this->Storage,param_1->Storage,(ulonglong)this->WordCount << 2);
  }
  return;
}

// GetBit @ 14423b410

bool __thiscall UE::Net::FNetBitArrayView::GetBit(FNetBitArrayView *this,uint param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  puVar1 = this->Storage;
  if (this->BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (puVar1[param_1 >> 5] >> (param_1 & 0x1f) & 1) != 0;
}

// IsBitSet @ 144243c20

bool __thiscall UE::Net::FNetBitArrayView::IsBitSet(FNetBitArrayView *this,uint param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  puVar1 = this->Storage;
  if (this->BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (puVar1[param_1 >> 5] >> (param_1 & 0x1f) & 1) != 0;
}

// Set<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int)> @ 144265680

void __thiscall
UE::Net::FNetBitArrayView::Set<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int)>
          (FNetBitArrayView *this,FNetBitArrayView *param_1,_func___cdecl_uint_uint_uint *param_2,
          FNetBitArrayView *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (((this->Storage == param_1->Storage) || (this->BitCount != param_1->BitCount)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*this).GetData() != (First).GetData() && (*this).GetNumBits() == (First).GetNumBits()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x644,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this->Storage == param_3->Storage) || (this->BitCount != param_3->BitCount)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*this).GetData() != (Second).GetData() && (*this).GetNumBits() == (Second).GetNumBits()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x645,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar4 = param_1->Storage;
  if (this->WordCount != 0) {
    lVar6 = (longlong)param_3->Storage - (longlong)puVar4;
    uVar7 = (ulonglong)this->WordCount;
    lVar5 = (longlong)this->Storage - (longlong)puVar4;
    do {
      uVar3 = (*param_2)(*puVar4,*(uint *)((longlong)puVar4 + lVar6));
      *(uint *)((longlong)puVar4 + lVar5) = uVar3;
      puVar4 = puVar4 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

// SetBit @ 1442934b0

void __thiscall UE::Net::FNetBitArrayView::SetBit(FNetBitArrayView *this,uint param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = this->Storage;
  if (this->BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2a2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1[param_1 >> 5] = puVar1[param_1 >> 5] | 1 << (param_1 & 0x1f);
  return;
}

// CombineMultiple<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),unsigned_int_(__cdecl&)(unsigned_int,unsigned_int)> @ 1442a1f60

void __thiscall
UE::Net::FNetBitArrayView::
CombineMultiple<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),unsigned_int_(__cdecl&)(unsigned_int,unsigned_int)>
          (FNetBitArrayView *this,_func___cdecl_uint_uint_uint *param_1,FNetBitArrayView *param_2,
          _func___cdecl_uint_uint_uint *param_3,FNetBitArrayView *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if ((this->Storage == param_2->Storage) || (this->BitCount != param_2->BitCount)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(*this).GetData() != (ArrayA).GetData() && (*this).GetNumBits() == (ArrayA).GetNumBits()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x651,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->Storage == param_4->Storage) || (this->BitCount != param_4->BitCount)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(*this).GetData() != (ArrayB).GetData() && (*this).GetNumBits() == (ArrayB).GetNumBits()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x652,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar2 = param_4->Storage;
  puVar3 = param_2->Storage;
  puVar7 = this->Storage;
  if (this->WordCount != 0) {
    uVar8 = (ulonglong)this->WordCount;
    lVar9 = (longlong)puVar3 - (longlong)puVar7;
    do {
      puVar1 = (uint *)(lVar9 + (longlong)puVar7);
      uVar6 = (*param_3)(*puVar1,*(uint *)((longlong)puVar1 + ((longlong)puVar2 - (longlong)puVar3))
                        );
      uVar6 = (*param_1)(*puVar7,uVar6);
      *puVar7 = uVar6;
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}

// ForAllSetBitsInRange<TFunction<void___cdecl(unsigned_int)>_&> @ 1442a5a80

void __thiscall
UE::Net::FNetBitArrayView::ForAllSetBitsInRange<TFunction<void___cdecl(unsigned_int)>_&>
          (FNetBitArrayView *this,uint param_1,uint param_2,
          TFunction<void___cdecl(unsigned_int)> *param_3)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int local_res10 [2];
  uint local_res18;
  
  uVar9 = this->BitCount;
  puVar1 = this->Storage;
  if ((uVar9 <= param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartBit < TotalBitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x38f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((uVar9 <= param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EndBit < TotalBitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x390,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar11 = param_1 >> 5;
  iVar12 = uVar11 << 5;
  uVar7 = -1 << ((byte)param_1 & 0x1f);
  local_res18 = uVar7;
  for (uVar9 = uVar11; uVar9 <= param_2 >> 5; uVar9 = uVar9 + 1) {
    uVar4 = 0xffffffff;
    if (uVar9 == param_2 >> 5) {
      uVar4 = 0xffffffff >> (0x1fU - (char)param_2 & 0x1f);
    }
    uVar8 = 0xffffffff;
    if (uVar9 == uVar11) {
      uVar8 = uVar7;
    }
    iVar10 = iVar12;
    for (uVar8 = puVar1[uVar9] & uVar4 & uVar8; uVar8 != 0; uVar8 = uVar8 >> 1) {
      if ((uVar8 & 1) != 0) {
        local_res10[0] = iVar10;
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar2 = *(code **)param_3;
        plVar6 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar6 = (longlong *)&param_3->field_0x10;
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        (*pcVar2)(uVar5,local_res10);
      }
      iVar10 = iVar10 + 1;
      uVar7 = local_res18;
    }
    iVar12 = iVar12 + 0x20;
  }
  return;
}

// ClearBit @ 1442b79f0

void __thiscall UE::Net::FNetBitArrayView::ClearBit(FNetBitArrayView *this,uint param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = this->Storage;
  if (this->BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1[param_1 >> 5] = puVar1[param_1 >> 5] & ~(1 << (param_1 & 0x1f));
  return;
}

