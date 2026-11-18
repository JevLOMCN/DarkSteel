// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 5

// FPersistentNetDebugNames @ 1441d2330

FPersistentNetDebugNames * __thiscall
UE::Net::FPersistentNetDebugNames::FPersistentNetDebugNames
          (FPersistentNetDebugNames *this,uint param_1)

{
  TMap<unsigned___int64,UE::Net::FNetDebugName_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Net::FNetDebugName_const_*,0>_>
  *this_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  this_00 = &this->PersistentNames;
  uVar8 = 0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  puVar1 = &(this->PersistentNames).field_0x48;
  *(undefined8 *)&(this->PersistentNames).field_0x8 = 0;
  *(undefined8 *)&(this->PersistentNames).field_0x20 = 0;
  *(undefined4 *)&(this->PersistentNames).field_0x28 = 0;
  *(undefined4 *)&(this->PersistentNames).field_0x2c = 0x80;
  *(undefined4 *)&(this->PersistentNames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PersistentNames).field_0x34 = 0;
  *(undefined8 *)&(this->PersistentNames).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  FMemStackBase::FMemStackBase(&this->Allocator,Small);
  this->bIsInitialized = false;
  if (param_1 <=
      (uint)(*(int *)&(this->PersistentNames).field_0x8 -
            *(int *)&(this->PersistentNames).field_0x34)) {
    return this;
  }
  if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)param_1);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,param_1);
  if (param_1 < 4) {
    uVar11 = 1;
  }
  else {
    uVar9 = (ulonglong)((param_1 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar5 & 0x1f);
  }
  if ((*(int *)puVar1 != 0) && ((int)uVar11 <= *(int *)puVar1)) {
    return this;
  }
  puVar2 = &(this->PersistentNames).field_0x38;
  *(uint *)puVar1 = uVar11;
  if (*(longlong *)&(this->PersistentNames).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->PersistentNames).field_0x40,0,0,4);
  }
  if (uVar11 == 0) goto LAB_1441d2484;
  uVar12 = uVar11;
  if (uVar11 < 2) {
    if (*(longlong *)&(this->PersistentNames).field_0x40 != 0) {
      uVar12 = 0;
      goto LAB_1441d2432;
    }
  }
  else {
LAB_1441d2432:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->PersistentNames).field_0x40,0,uVar12,4);
  }
  if (0 < (int)uVar11) {
    uVar13 = (ulonglong)uVar11;
    uVar9 = uVar8;
    do {
      puVar3 = *(undefined1 **)&(this->PersistentNames).field_0x40;
      puVar7 = puVar2;
      if (puVar3 != (undefined1 *)0x0) {
        puVar7 = puVar3;
      }
      uVar6 = uVar9 & (longlong)(int)uVar11 - 1U;
      uVar9 = uVar9 + 1;
      *(undefined4 *)(puVar7 + uVar6 * 4) = 0xffffffff;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
LAB_1441d2484:
  if (*(int *)puVar1 != 0) {
    uVar11 = *(uint *)&(this->PersistentNames).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->PersistentNames).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar11 != 0) {
      puVar14 = *(uint **)&(this->PersistentNames).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_50.Array;
      }
      uVar12 = *puVar14;
      uVar9 = uVar8;
      while (uVar12 == 0) {
        iVar10 = (int)uVar8;
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        local_78 = iVar10 + 1;
        uVar8 = (ulonglong)local_78;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_1441d252c;
        uVar12 = puVar14[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar8 = (ulonglong)uStack_74 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uStack_64 = (uStack_60 - 1) + (int)lVar5;
      uVar8 = (ulonglong)uStack_64;
      if ((int)uVar11 < (int)uStack_64) {
LAB_1441d252c:
        uVar8 = (ulonglong)uVar11;
        uStack_64 = uVar11;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar8 < (int)uVar11) {
      do {
        iVar10 = (int)uVar8;
        lVar5 = *(longlong *)&this_00->field_0x0 + (longlong)iVar10 * 0x18;
        uVar4 = *(undefined8 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar10 * 0x18);
        uVar11 = (int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4 & *(int *)puVar1 - 1U;
        *(uint *)(lVar5 + 0x14) = uVar11;
        puVar3 = *(undefined1 **)&(this->PersistentNames).field_0x40;
        puVar7 = puVar2;
        if (puVar3 != (undefined1 *)0x0) {
          puVar7 = puVar3;
        }
        uVar8 = (longlong)*(int *)puVar1 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(puVar7 + uVar8 * 4);
        *(int *)(puVar7 + uVar8 * 4) = iVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar8 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return this;
}

// CreatePersistentNetDebugName @ 1441d7ec0

bool __thiscall
UE::Net::FPersistentNetDebugNames::CreatePersistentNetDebugName
          (FPersistentNetDebugNames *this,wchar_t *param_1,uint param_2,FNetDebugName **param_3)

{
  longlong lVar1;
  wchar_t *_Dest;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uchar *puVar6;
  FNetDebugName *pFVar7;
  ulonglong *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  FNetDebugName *local_res8;
  TPairInitializer<unsigned___int64_const_&,UE::Net::FNetDebugName_const_*_const_&> local_res18;
  ulong64 local_58;
  ulong64 *local_50;
  FNetDebugName **local_48;
  
  uVar9 = param_2 * 2;
  local_58 = CityHash64((char *)param_1,uVar9);
  local_res8 = (FNetDebugName *)0x0;
  if (this == (FPersistentNetDebugNames *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if (*(int *)&(this->PersistentNames).field_0x8 != *(int *)&(this->PersistentNames).field_0x34) {
    puVar10 = *(undefined1 **)&(this->PersistentNames).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->PersistentNames).field_0x38;
    }
    iVar5 = *(int *)(puVar10 +
                    ((local_58 >> 0x20) * 0x17 + local_58 &
                    (ulonglong)(*(int *)&(this->PersistentNames).field_0x48 - 1)) * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = *(longlong *)&this->PersistentNames + (longlong)iVar5 * 0x18;
        if (*(ulonglong *)(*(longlong *)&this->PersistentNames + (longlong)iVar5 * 0x18) == local_58
           ) {
          puVar8 = (ulonglong *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar8 = (ulonglong *)0x0;
          }
          if (puVar8 != (ulonglong *)0x0) {
            pFVar7 = (FNetDebugName *)*puVar8;
            bVar3 = false;
            goto LAB_1441d809a;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  if (((this->Allocator).bShouldEnforceAllocMarks != false) && ((this->Allocator).NumMarks < 1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bShouldEnforceAllocMarks || NumMarks > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                       ,0x8a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar7 = (FNetDebugName *)((ulonglong)((this->Allocator).Top + 7) & 0xfffffffffffffff8);
  puVar6 = (uchar *)((longlong)&pFVar7[1].Name + (ulonglong)uVar9 + 2);
  if ((this->Allocator).End < puVar6) {
    FMemStackBase::AllocateNewChunk(&this->Allocator,uVar9 + 0x1a);
    pFVar7 = (FNetDebugName *)((ulonglong)((this->Allocator).Top + 7) & 0xfffffffffffffff8);
    puVar6 = (uchar *)((longlong)&pFVar7[1].Name + (ulonglong)uVar9 + 2);
  }
  (this->Allocator).Top = puVar6;
  pFVar7->Name = (wchar_t *)(pFVar7 + 1);
  pFVar7->DebugNameId = 0;
  local_50 = &local_58;
  local_48 = &local_res8;
  local_res8 = pFVar7;
  TSet<TTuple<unsigned___int64,UE::Net::FNetDebugName_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Net::FNetDebugName_const_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,UE::Net::FNetDebugName_const_*_const_&>_>
            ((TSet<TTuple<unsigned___int64,UE::Net::FNetDebugName_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Net::FNetDebugName_const_*,0>,FDefaultSetAllocator>
              *)&this->PersistentNames,&local_res18,(bool *)&local_50);
  _Dest = local_res8->Name;
  wcsncpy(_Dest,param_1,(ulonglong)(param_2 + 1) - 1);
  _Dest[(ulonglong)(param_2 + 1) - 1] = L'\0';
  bVar3 = true;
  pFVar7 = local_res8;
LAB_1441d809a:
  *param_3 = pFVar7;
  if (this != (FPersistentNetDebugNames *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  return bVar3;
}

// Get @ 1441db9a0

FPersistentNetDebugNames * __cdecl UE::Net::FPersistentNetDebugNames::Get(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FPersistentNetDebugNames(&::Singleton,0x200);
      atexit(`UE::Net::FPersistentNetDebugNames::Get'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (::Singleton.bIsInitialized == false) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnExit,(_func___cdecl_void *)local_res8);
    ::Singleton.bIsInitialized = true;
  }
  return &::Singleton;
}

// ResetNameIds @ 1441e9bb0

void __cdecl UE::Net::FPersistentNetDebugNames::ResetNameIds(void)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FPersistentNetDebugNames *lpCriticalSection;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lpCriticalSection = Get();
  if ((lpCriticalSection == (FPersistentNetDebugNames *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar3 = *(int *)&(lpCriticalSection->PersistentNames).field_0x28;
  puVar1 = &(lpCriticalSection->PersistentNames).field_0x10;
  iVar11 = 0;
  iVar13 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(lpCriticalSection->PersistentNames).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1441e9c8d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1441e9c8d:
  uVar10 = *(uint *)&(lpCriticalSection->PersistentNames).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(lpCriticalSection->PersistentNames).field_0x8 -
                       *(int *)&(lpCriticalSection->PersistentNames).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(lpCriticalSection->PersistentNames).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(lpCriticalSection->PersistentNames).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1441e9d90;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_1441e9d90:
  while( true ) {
    if (*(int *)&(lpCriticalSection->PersistentNames).field_0x8 -
        *(int *)&(lpCriticalSection->PersistentNames).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::Net::FNetDebugName_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    *(undefined4 *)
     (*(longlong *)
       (*(longlong *)&lpCriticalSection->PersistentNames + 8 +
       (longlong)TStack_60.CurrentBitIndex * 0x18) + 8) = 0;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  if (lpCriticalSection != (FPersistentNetDebugNames *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// TearDown @ 1441ec590

void __cdecl UE::Net::FPersistentNetDebugNames::TearDown(void)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FPersistentNetDebugNames *pFVar5;
  
  pFVar5 = Get();
  bVar4 = 1 < *(int *)&(pFVar5->PersistentNames).field_0x48;
  if (!bVar4) {
    TSet<TTuple<unsigned___int64,UE::Net::FNetDebugName_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Net::FNetDebugName_const_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,UE::Net::FNetDebugName_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Net::FNetDebugName_const_*,0>,FDefaultSetAllocator>
                      *)&pFVar5->PersistentNames);
  }
  puVar1 = &(pFVar5->PersistentNames).field_0xc;
  *(undefined4 *)&(pFVar5->PersistentNames).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&pFVar5->PersistentNames,0,(int *)puVar1);
  }
  *(undefined4 *)&(pFVar5->PersistentNames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(pFVar5->PersistentNames).field_0x34 = 0;
  iVar2 = *(int *)&(pFVar5->PersistentNames).field_0x2c;
  *(undefined4 *)&(pFVar5->PersistentNames).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(pFVar5->PersistentNames).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar5->PersistentNames).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(pFVar5->PersistentNames).field_0x48 = 1;
    TSet<TTuple<unsigned___int64,UE::Net::FNetDebugName_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Net::FNetDebugName_const_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned___int64,UE::Net::FNetDebugName_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Net::FNetDebugName_const_*,0>,FDefaultSetAllocator>
              *)&pFVar5->PersistentNames);
  }
  if (((pFVar5->Allocator).NumMarks != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!NumMarks",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                         ,0xad,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FMemStackBase::FreeChunks(&pFVar5->Allocator,(FTaggedMemory *)0x0);
  return;
}

