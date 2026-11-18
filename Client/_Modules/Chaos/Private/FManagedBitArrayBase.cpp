// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 18

// ~FManagedBitArrayBase @ 143f8df50

void __thiscall FManagedBitArrayBase::~FManagedBitArrayBase(FManagedBitArrayBase *this)

{
  ForElementType<unsigned_int> FVar1;
  
  this->_padding_ = (longlong)&___7FManagedBitArrayBase__6B_;
  FVar1 = (this->Array).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  this->_padding_ = (longlong)&___7FManagedArrayBase__6B_;
  return;
}

// CopyRange @ 143fa8820

void __thiscall
FManagedBitArrayBase::CopyRange
          (FManagedBitArrayBase *this,FManagedArrayBase *param_1,int param_2,int param_3,int param_4
          )

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  ForElementType<unsigned_int> FVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  FManagedArrayBase *pFVar11;
  ForElementType<unsigned_int> FVar12;
  undefined1 local_res20 [8];
  
  pcVar3 = *(code **)(this->_padding_ + 0x78);
  lVar9 = (**(code **)(param_1->_padding_ + 0x78))(param_1);
  lVar10 = (*pcVar3)(this);
  if (lVar9 != lVar10) {
    local_res20[0] = 0;
    `FManagedBitArrayBase::CopyRange'::__l2::<lambda_1>::operator()(local_res20);
  }
  iVar5 = param_4;
  if ((this->Array).NumBits < param_3 + param_4) {
    param_4 = param_4 & 0xffffff00;
    bVar6 = `FManagedBitArrayBase::CopyRange'::__l3::<lambda_2>::operator()(&param_4);
    if (!bVar6) {
      return;
    }
  }
  iVar7 = (**(code **)(param_1->_padding_ + 0x60))(param_1);
  if (param_2 < iVar7) {
    do {
      if ((this->Array).NumBits <= param_2 + iVar5) {
        return;
      }
      if (param_3 <= param_2) {
        return;
      }
      if (((param_2 < 0) || (*(int *)&param_1[2].bIsDirty <= param_2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar11 = param_1 + 1;
      if ((FManagedArrayBase *)param_1[2]._padding_ != (FManagedArrayBase *)0x0) {
        pFVar11 = (FManagedArrayBase *)param_1[2]._padding_;
      }
      iVar7 = param_2;
      if (param_2 < 0) {
        iVar7 = param_2 + 0x1f;
      }
      uVar1 = *(uint *)((longlong)&pFVar11->_padding_ + (longlong)(iVar7 >> 5) * 4);
      if (((param_2 + iVar5 < 0) || ((this->Array).NumBits <= param_2 + iVar5)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar4 = (this->Array).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<unsigned_int>)&this->Array;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = FVar4;
      }
      iVar7 = param_2 + iVar5;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0x1f;
      }
      lVar9 = (longlong)(iVar7 >> 5) * 4;
      uVar8 = 1 << ((byte)param_2 + (char)iVar5 & 0x1f);
      uVar2 = *(uint *)(lVar9 + (longlong)FVar12);
      if ((1 << ((byte)param_2 & 0x1f) & uVar1) == 0) {
        uVar8 = ~uVar8 & uVar2;
      }
      else {
        uVar8 = uVar8 | uVar2;
      }
      *(uint *)(lVar9 + (longlong)FVar12) = uVar8;
      param_2 = param_2 + 1;
      iVar7 = (**(code **)(param_1->_padding_ + 0x60))(param_1);
    } while (param_2 < iVar7);
  }
  return;
}

// Empty @ 143faa840

void __thiscall FManagedBitArrayBase::Empty(FManagedBitArrayBase *this)

{
  int iVar1;
  
  iVar1 = (this->Array).MaxBits;
  (this->Array).NumBits = 0;
  if ((-1 < iVar1) && (iVar1 < 0x81)) {
    return;
  }
  (this->Array).MaxBits = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->Array,0);
  return;
}

// ExchangeArrays @ 143fabef0

void __thiscall
FManagedBitArrayBase::ExchangeArrays(FManagedBitArrayBase *this,FManagedArrayBase *param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ForElementType<unsigned_int> FVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  uchar uVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 local_res8 [8];
  
  pcVar1 = *(code **)(this->_padding_ + 0x78);
  lVar24 = (**(code **)(param_1->_padding_ + 0x78))(param_1);
  lVar25 = (*pcVar1)(this);
  if (lVar24 != lVar25) {
    `FManagedBitArrayBase::ExchangeArrays'::__l2::<lambda_1>::operator()(local_res8);
  }
  lVar24 = *(longlong *)&param_1->bIsDirty;
  lVar25 = this->_padding_;
  lVar2 = this->_padding_;
  lVar3 = *(longlong *)(this->Array).AllocatorInstance.InlineData;
  pTVar7 = &this->Array;
  uVar16 = (pTVar7->AllocatorInstance).InlineData[8];
  uVar17 = (pTVar7->AllocatorInstance).InlineData[9];
  uVar18 = (pTVar7->AllocatorInstance).InlineData[10];
  uVar19 = (pTVar7->AllocatorInstance).InlineData[0xb];
  uVar20 = (pTVar7->AllocatorInstance).InlineData[0xc];
  uVar21 = (pTVar7->AllocatorInstance).InlineData[0xd];
  uVar22 = (pTVar7->AllocatorInstance).InlineData[0xe];
  uVar23 = (pTVar7->AllocatorInstance).InlineData[0xf];
  FVar4 = (this->Array).AllocatorInstance.SecondaryData;
  uVar5 = *(undefined8 *)&(this->Array).NumBits;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar24;
  bVar8 = param_1[1].bIsDirty;
  uVar9 = param_1[1].field_0x9;
  uVar10 = param_1[1].field_0xa;
  uVar11 = param_1[1].field_0xb;
  uVar12 = param_1[1].field_0xc;
  uVar13 = param_1[1].field_0xd;
  uVar14 = param_1[1].field_0xe;
  uVar15 = param_1[1].field_0xf;
  *(longlong *)(this->Array).AllocatorInstance.InlineData = param_1[1]._padding_;
  pTVar7 = &this->Array;
  (pTVar7->AllocatorInstance).InlineData[8] = bVar8;
  (pTVar7->AllocatorInstance).InlineData[9] = uVar9;
  (pTVar7->AllocatorInstance).InlineData[10] = uVar10;
  (pTVar7->AllocatorInstance).InlineData[0xb] = uVar11;
  (pTVar7->AllocatorInstance).InlineData[0xc] = uVar12;
  (pTVar7->AllocatorInstance).InlineData[0xd] = uVar13;
  (pTVar7->AllocatorInstance).InlineData[0xe] = uVar14;
  (pTVar7->AllocatorInstance).InlineData[0xf] = uVar15;
  uVar6 = *(undefined8 *)&param_1[2].bIsDirty;
  (this->Array).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)param_1[2]._padding_
  ;
  (this->Array).NumBits = (int)uVar6;
  (this->Array).MaxBits = (int)((ulonglong)uVar6 >> 0x20);
  param_1->_padding_ = lVar25;
  *(longlong *)&param_1->bIsDirty = lVar2;
  param_1[1]._padding_ = lVar3;
  param_1[1].bIsDirty = (bool)uVar16;
  param_1[1].field_0x9 = uVar17;
  param_1[1].field_0xa = uVar18;
  param_1[1].field_0xb = uVar19;
  param_1[1].field_0xc = uVar20;
  param_1[1].field_0xd = uVar21;
  param_1[1].field_0xe = uVar22;
  param_1[1].field_0xf = uVar23;
  param_1[2]._padding_ = (longlong)FVar4;
  *(undefined8 *)&param_1[2].bIsDirty = uVar5;
  return;
}

// GetAllocatedSize @ 143fae830

ulong64 __thiscall FManagedBitArrayBase::GetAllocatedSize(FManagedBitArrayBase *this)

{
  return (ulonglong)(((this->Array).MaxBits + 0x1fU >> 5) << 2);
}

// GetTypeSize @ 143fb38d0

ulong64 __thiscall FManagedBitArrayBase::GetTypeSize(FManagedBitArrayBase *this)

{
  return 1;
}

// Init @ 143fb6230

void __thiscall FManagedBitArrayBase::Init(FManagedBitArrayBase *this,FManagedArrayBase *param_1)

{
  code *pcVar1;
  ForElementType<unsigned_int> FVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  FManagedArrayBase *pFVar8;
  ForElementType<unsigned_int> FVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  
  pcVar1 = *(code **)(this->_padding_ + 0x78);
  lVar5 = (**(code **)(param_1->_padding_ + 0x78))(param_1);
  lVar6 = (*pcVar1)(this);
  if (lVar5 != lVar6) {
    local_res8[0] = 0;
    `FManagedBitArrayBase::Init'::__l2::<lambda_1>::operator()(local_res8);
  }
  iVar4 = (**(code **)(param_1->_padding_ + 0x60))(param_1);
  (**(code **)this->_padding_)(this,iVar4);
  uVar10 = 0;
  if (0 < iVar4) {
    uVar11 = 1;
    do {
      if ((((int)uVar10 < 0) || (*(int *)&param_1[2].bIsDirty <= (int)uVar10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar8 = param_1 + 1;
      if ((FManagedArrayBase *)param_1[2]._padding_ != (FManagedArrayBase *)0x0) {
        pFVar8 = (FManagedArrayBase *)param_1[2]._padding_;
      }
      lVar5 = (ulonglong)(uVar10 >> 5) * 4;
      uVar7 = *(uint *)((longlong)&pFVar8->_padding_ + lVar5);
      if ((((int)uVar10 < 0) || ((this->Array).NumBits <= (int)uVar10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar2 = (this->Array).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<unsigned_int>)&this->Array;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FVar9 = FVar2;
      }
      if ((uVar7 & uVar11) == 0) {
        uVar7 = *(uint *)((longlong)FVar9 + lVar5) & ~uVar11;
      }
      else {
        uVar7 = *(uint *)((longlong)FVar9 + lVar5) | uVar11;
      }
      uVar10 = uVar10 + 1;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)((longlong)FVar9 + lVar5) = uVar7;
    } while ((int)uVar10 < iVar4);
  }
  return;
}

// Max @ 143fb82d0

int __thiscall FManagedBitArrayBase::Max(FManagedBitArrayBase *this)

{
  return (this->Array).MaxBits;
}

// Num @ 143fb9120

int __thiscall FManagedBitArrayBase::Num(FManagedBitArrayBase *this)

{
  return (this->Array).NumBits;
}

// RemoveElements @ 143fc1c50

void __thiscall
FManagedBitArrayBase::RemoveElements
          (FManagedBitArrayBase *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<unsigned_int> FVar6;
  code *pcVar7;
  bool bVar8;
  ForElementType<unsigned_int> FVar9;
  uint uVar10;
  uint uVar11;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int local_res10;
  
  iVar13 = param_1->ArrayNum;
  if (iVar13 != 0) {
    uVar11 = 0;
    if ((int)(iVar13 - 1U) < iVar13) {
      uVar11 = ~(iVar13 - 1U) >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar11 = param_1->ArrayNum - 1;
    lVar15 = (longlong)(int)uVar11;
    lVar14 = lVar15 * 4;
    local_res10 = *(int *)((param_1->AllocatorInstance).Data + lVar14);
    if (-1 < (int)uVar11) {
      do {
        uVar12 = ~uVar11 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar10 = uVar12;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar13 = (local_res10 - *(int *)((param_1->AllocatorInstance).Data + lVar14)) + 1;
        if (uVar11 == 0) {
          this_00 = &this->Array;
          if ((param_1->ArrayNum < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar3 = *(int *)(param_1->AllocatorInstance).Data;
          if ((((iVar3 < 0) || (iVar13 < 0)) || ((this->Array).NumBits < iVar3 + iVar13)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x3ee,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar4 = (this->Array).NumBits;
          if (iVar3 + iVar13 != iVar4) {
            FVar6 = (this->Array).AllocatorInstance.SecondaryData;
            FVar9 = (ForElementType<unsigned_int>)this_00;
            if (FVar6 != (ForElementType<unsigned_int>)0x0) {
              FVar9 = FVar6;
            }
            FBitArrayMemory::MemmoveBitsWordOrder
                      ((uint *)FVar9,iVar3,(uint *)FVar9,iVar3 + iVar13,(iVar4 - iVar3) - iVar13);
          }
          piVar1 = &(this->Array).NumBits;
          *piVar1 = *piVar1 - iVar13;
          iVar13 = (this->Array).NumBits;
          uVar10 = iVar13 >> 0x1f & 0x1f;
          uVar11 = iVar13 + uVar10;
          iVar13 = (uVar11 & 0x1f) - uVar10;
          if (iVar13 != 0) {
            FVar6 = (this->Array).AllocatorInstance.SecondaryData;
            FVar9 = (ForElementType<unsigned_int>)this_00;
            if (FVar6 != (ForElementType<unsigned_int>)0x0) {
              FVar9 = FVar6;
            }
            puVar2 = (uint *)((longlong)FVar9 + (longlong)((int)uVar11 >> 5) * 4);
            *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar13 & 0x1f);
          }
          TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(this_00);
          return;
        }
        uVar10 = 0;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar10 = uVar12;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (param_1->AllocatorInstance).Data;
        uVar10 = 0;
        if ((int)(uVar11 - 1) < param_1->ArrayNum) {
          uVar10 = -uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(int *)(pFVar5 + lVar15 * 4) !=
            *(int *)((param_1->AllocatorInstance).Data + lVar15 * 4 + -4) + 1) {
          uVar10 = 0;
          if ((int)uVar11 < param_1->ArrayNum) {
            uVar10 = uVar12;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TBitArray<FDefaultBitArrayAllocator>::RemoveAt
                    (&this->Array,*(int *)((param_1->AllocatorInstance).Data + lVar15 * 4),iVar13);
          uVar10 = 0;
          if ((int)(uVar11 - 1) < param_1->ArrayNum) {
            uVar10 = -uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_res10 = *(int *)((param_1->AllocatorInstance).Data + lVar15 * 4 + -4);
        }
        uVar11 = uVar11 - 1;
        lVar15 = lVar15 + -1;
        lVar14 = lVar14 + -4;
      } while (uVar11 < 0x80000000);
    }
  }
  return;
}

// Reorder @ 143fc5550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FManagedBitArrayBase::Reorder
          (FManagedBitArrayBase *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ForElementType<unsigned_int> FVar12;
  ForElementType<unsigned_int> FVar13;
  uint uVar14;
  uint uVar15;
  FManagedBitArrayBase *pFVar16;
  longlong lVar17;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  TArray<int,TSizedDefaultAllocator<32>_> *local_78;
  longlong local_70;
  FManagedBitArrayBase *local_68;
  ForElementType<unsigned_int> local_60;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78 = param_1;
  local_68 = this;
  iVar8 = (**(code **)(this->_padding_ + 0x60))();
  if ((param_1->ArrayNum != iVar8) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewOrder.Num() == NumElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                         ,0x427,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_60.SecondaryData = (ForElementType<unsigned_int>)0x0;
  uVar14 = iVar8 + 0x1fU >> 5;
  uStack_48 = CONCAT44(0x80,iVar8);
  if (iVar8 + 0x1fU >> 5 != 0) {
    if (4 < uVar14) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_60,0,uVar14,4);
      uStack_48 = CONCAT44(uVar14 << 5,(uint)uStack_48);
    }
    FVar13 = (ForElementType<unsigned_int>)&local_60;
    if (local_60.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar13 = local_60.SecondaryData;
    }
    memset((void *)FVar13,0,(ulonglong)uVar14 << 2);
    uVar14 = (uint)uStack_48 & 0x8000001f;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xffffffe0) + 1;
    }
    if (uVar14 != 0) {
      FVar13 = (ForElementType<unsigned_int>)&local_60;
      if (local_60.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_60.SecondaryData;
      }
      puVar1 = (uint *)((longlong)FVar13 +
                       (longlong)
                       ((int)((uint)uStack_48 + ((int)(uint)uStack_48 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar14 & 0x1f);
    }
  }
  pTVar6 = local_78;
  uVar14 = 0;
  pFVar16 = this;
  local_70 = (longlong)iVar8;
  if (0 < iVar8) {
    uVar15 = 1;
    lVar17 = 0;
    do {
      iVar8 = pTVar6->ArrayNum;
      uVar9 = 0;
      if ((int)uVar14 < iVar8) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if (uVar9 == 0) {
        local_88 = (longlong)(int)uVar14;
        local_80 = (longlong)iVar8;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar8 = *(int *)((pTVar6->AllocatorInstance).Data + lVar17 * 4);
      if (((iVar8 < 0) || ((this->Array).NumBits <= iVar8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar13 = (this->Array).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<unsigned_int>)&this->Array;
      if (FVar13 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = FVar13;
      }
      iVar10 = iVar8;
      if (iVar8 < 0) {
        iVar10 = iVar8 + 0x1f;
      }
      if ((((int)uVar14 < 0) || ((int)(uint)uStack_48 <= (int)uVar14)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar13 = (ForElementType<unsigned_int>)&local_60;
      if (local_60.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_60.SecondaryData;
      }
      uVar9 = uVar14;
      if ((int)uVar14 < 0) {
        uVar9 = uVar14 + 0x1f;
      }
      uVar11 = *(uint *)((longlong)FVar13 + (longlong)((int)uVar9 >> 5) * 4);
      if ((*(uint *)((longlong)FVar12 + (longlong)(iVar10 >> 5) * 4) & 1 << ((byte)iVar8 & 0x1f)) ==
          0) {
        uVar11 = uVar11 & ~uVar15;
      }
      else {
        uVar11 = uVar11 | uVar15;
      }
      uVar14 = uVar14 + 1;
      uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
      lVar17 = lVar17 + 1;
      *(uint *)((longlong)FVar13 + (longlong)((int)uVar9 >> 5) * 4) = uVar11;
      pFVar16 = local_68;
    } while (lVar17 < local_70);
  }
  FVar13 = (pFVar16->Array).AllocatorInstance.SecondaryData;
  uVar3._0_4_ = (pFVar16->Array).NumBits;
  uVar3._4_4_ = (pFVar16->Array).MaxBits;
  uVar4 = *(undefined8 *)(pFVar16->Array).AllocatorInstance.InlineData;
  uVar5 = *(undefined8 *)((pFVar16->Array).AllocatorInstance.InlineData + 8);
  *(undefined8 *)(pFVar16->Array).AllocatorInstance.InlineData = local_60.InlineData._0_8_;
  *(undefined8 *)((pFVar16->Array).AllocatorInstance.InlineData + 8) = local_60.InlineData._8_8_;
  (pFVar16->Array).AllocatorInstance.SecondaryData = local_60.SecondaryData;
  (pFVar16->Array).NumBits = (uint)uStack_48;
  (pFVar16->Array).MaxBits = uStack_48._4_4_;
  if (FVar13 != (ForElementType<unsigned_int>)0x0) {
    local_60.InlineData._0_8_ = uVar4;
    local_60.InlineData._8_8_ = uVar5;
    local_60.SecondaryData = FVar13;
    uStack_48 = uVar3;
    FMemory::Free((void *)FVar13);
  }
  return;
}

// Reserve @ 143fc5d80

void __thiscall FManagedBitArrayBase::Reserve(FManagedBitArrayBase *this,int param_1)

{
  TBitArray<FDefaultBitArrayAllocator>::Reserve(&this->Array,param_1);
  return;
}

// Resize @ 143fc6290

void __thiscall FManagedBitArrayBase::Resize(FManagedBitArrayBase *this,int param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int iVar1;
  int iVar2;
  
  iVar2 = (this->Array).NumBits;
  this_00 = &this->Array;
  if (iVar2 < param_1) {
    iVar2 = param_1 - iVar2;
    if (-1 < iVar2) {
      iVar1 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,iVar2);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(this_00,iVar1,iVar2,false);
      return;
    }
  }
  else if (param_1 < iVar2) {
    TBitArray<FDefaultBitArrayAllocator>::RemoveAt(this_00,param_1,iVar2 - param_1);
  }
  return;
}

// Serialize @ 143fc71f0

void __thiscall FManagedBitArrayBase::Serialize(FManagedBitArrayBase *this,FChaosArchive *param_1)

{
  longlong lVar1;
  FScriptContainerElement FVar2;
  longlong *plVar3;
  ForElementType<unsigned_int> FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ForElementType<unsigned_int> FVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  int *piVar17;
  uint local_res10 [2];
  int *local_res18;
  TArray<bool,TSizedDefaultAllocator<32>_> local_58;
  ForAnyElementType local_48;
  undefined8 local_40;
  
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FDestructionObjectVersion::GUID);
  plVar3 = (longlong *)param_1->_padding_;
  uVar14 = 1;
  local_res10[0] = 1;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  uVar12 = 0;
  piVar17 = &(this->Array).NumBits;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  if ((param_1->_padding_ & 4) != 0) {
    uVar16 = *piVar17;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    local_res18 = piVar17;
    if ((int)uVar16 < 1) {
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar16,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
    }
    if (0 < *piVar17) {
      uVar16 = 1;
      uVar15 = uVar12;
      do {
        uVar10 = (uint)uVar12;
        if ((((int)uVar10 < 0) || ((this->Array).NumBits <= (int)uVar10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar4 = (this->Array).AllocatorInstance.SecondaryData;
        FVar11 = (ForElementType<unsigned_int>)&this->Array;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar11 = FVar4;
        }
        uVar7 = uVar10;
        if ((int)uVar10 < 0) {
          uVar7 = uVar10 + 0x1f;
        }
        uVar7 = *(uint *)((longlong)FVar11 + (longlong)((int)uVar7 >> 5) * 4) & uVar16;
        uVar8 = 0;
        if ((int)uVar10 < (int)local_40) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar12 = (ulonglong)(uVar10 + 1);
        uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
        local_48.Data[uVar15] = (FScriptContainerElement)(uVar7 != 0);
        uVar15 = uVar15 + 1;
        piVar17 = local_res18;
      } while ((int)(uVar10 + 1) < *local_res18);
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    local_58.AllocatorInstance.Data = local_48.Data;
    local_58._8_8_ = local_40;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  lVar13 = 0;
  iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FDestructionObjectVersion::GUID);
  if (iVar9 < 8) {
    Chaos::operator<<<bool,TSizedDefaultAllocator<32>_>(param_1,&local_58);
  }
  else {
    TArray<bool,TSizedDefaultAllocator<32>_>::BulkSerialize(&local_58,(FArchive *)param_1,false);
  }
  if ((param_1->_padding_ & 1) != 0) {
    (**(code **)this->_padding_)(this,local_58._8_8_ & 0xffffffff);
    if (local_58.ArrayNum != *piVar17) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BoolArray.Num() == Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                         ,0x343,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar16 = 0;
    iVar9 = local_58.ArrayNum;
    if (0 < *piVar17) {
      while( true ) {
        uVar10 = 0;
        if ((int)uVar16 < iVar9) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar2 = local_58.AllocatorInstance.Data[lVar13];
        if ((((int)uVar16 < 0) || ((this->Array).NumBits <= (int)uVar16)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar4 = (this->Array).AllocatorInstance.SecondaryData;
        FVar11 = (ForElementType<unsigned_int>)&this->Array;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar11 = FVar4;
        }
        uVar10 = uVar16;
        if ((int)uVar16 < 0) {
          uVar10 = uVar16 + 0x1f;
        }
        lVar1 = (longlong)((int)uVar10 >> 5) * 4;
        uVar10 = *(uint *)(lVar1 + (longlong)FVar11);
        if (FVar2 == (FScriptContainerElement)0x0) {
          uVar10 = uVar10 & ~uVar14;
        }
        else {
          uVar10 = uVar10 | uVar14;
        }
        uVar16 = uVar16 + 1;
        uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
        lVar13 = lVar13 + 1;
        *(uint *)((longlong)FVar11 + lVar1) = uVar10;
        if ((this->Array).NumBits <= (int)uVar16) break;
        iVar9 = local_58.ArrayNum;
      }
    }
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1504aa530

bool __thiscall `FManagedBitArrayBase::CopyRange'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7863574370055093461>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7863574370055093461>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FManagedBitArrayBase::CopyRange(FManagedArrayBase_const&___ptr64,int,int,int)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504aa970

bool __thiscall `FManagedBitArrayBase::ExchangeArrays'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7863574370055093427>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7863574370055093427>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FManagedBitArrayBase::ExchangeArrays(FManagedArrayBase&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504aadb0

bool __thiscall `FManagedBitArrayBase::Init'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7863574370055093482>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7863574370055093482>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FManagedBitArrayBase::Init(FManagedArrayBase_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504ab280

bool __thiscall `FManagedBitArrayBase::CopyRange'::__l3::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7863574370055093460>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7863574370055093460>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FManagedBitArrayBase::CopyRange(FManagedArrayBase_const&___ptr64,int,int,int)___ptr64'::`3'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

