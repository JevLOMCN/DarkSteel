// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// ~FExcludedClassSet @ 14230a750

void __thiscall
AsyncLoading2::Private::FExcludedClassSet::~FExcludedClassSet(FExcludedClassSet *this)

{
  ulong64 uVar1;
  ForElementType<FSetElementId> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  ulong64 *puVar6;
  FScriptContainerElement *this_01;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
            FCoreDelegates::TSOnConfigSectionsChanged();
  uVar1 = (this->ConfigDelegate).ID;
  uVar8 = 0;
  if (uVar1 != 0) {
    if ((this_00 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this_00);
    uVar9 = uVar8;
    if (0 < (this_00->InvocationList).ArrayNum) {
      do {
        uVar7 = (uint)uVar8;
        uVar5 = 0;
        if ((int)uVar7 < (this_00->InvocationList).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_01 = (this_00->InvocationList).AllocatorInstance.Data + uVar9;
        if (((*(int *)&this_01[8].field_0x0 != 0) &&
            (*(longlong **)&this_01->field_0x0 != (longlong *)0x0)) &&
           (puVar6 = (ulong64 *)(**(code **)(**(longlong **)&this_01->field_0x0 + 0x40))(),
           *puVar6 == uVar1)) {
          if ((*(int *)&this_01[8].field_0x0 != 0) &&
             (*(undefined8 **)&this_01->field_0x0 != (undefined8 *)0x0)) {
            (**(code **)**(undefined8 **)&this_01->field_0x0)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)this_01,0,0,0x10);
            *(undefined4 *)&this_01[8].field_0x0 = 0;
          }
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
          break;
        }
        uVar8 = (ulonglong)(uVar7 + 1);
        uVar9 = uVar9 + 0x10;
      } while ((int)(uVar7 + 1) < (this_00->InvocationList).ArrayNum);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  }
  (this->ExcludedNativeClasses).HashSize = 0;
  FVar2 = (this->ExcludedNativeClasses).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ExcludedNativeClasses).Elements);
  (this->ExcludedClasses).HashSize = 0;
  FVar2 = (this->ExcludedClasses).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ExcludedClasses).Elements);
  (this->ExcludedClassNames).HashSize = 0;
  FVar2 = (this->ExcludedClassNames).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ExcludedClassNames).Elements);
  return;
}

// EnsureClassesUpdated @ 142319a70

void __thiscall
AsyncLoading2::Private::FExcludedClassSet::EnsureClassesUpdated(FExcludedClassSet *this)

{
  int iVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  ulong64 uVar6;
  UClass *pUVar7;
  FUObjectItem *pFVar8;
  int iVar9;
  bool bVar10;
  UClass *local_res8;
  UClass *local_res10;
  UObject *local_res18;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  undefined1 local_58 [12];
  uint local_4c;
  longlong local_48;
  uint local_40;
  int local_3c;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_30;
  
  if ((*(int *)&(this->ExcludedClassNames).Elements.field_0x8 !=
       *(int *)&(this->ExcludedClassNames).Elements.field_0x34) &&
     (uVar6 = GetRegisteredClassesVersionNumber(), this->ClassesVersionNumber != uVar6)) {
    bVar10 = -1 < CpuChannel->Enabled;
    if (bVar10) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`private:_void___cdecl_AsyncLoading2::Private::FExcludedClassSet::EnsureClassesUpdated(void)___ptr64'
                  ::__l8::__CpuProfilerEventSpecId8415,"FExcludedClassSet::EnsureClassesUpdated",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                 ,0x20df);
      FCpuProfilerTrace::OutputBeginEvent
                (`private:_void___cdecl_AsyncLoading2::Private::FExcludedClassSet::EnsureClassesUpdated(void)___ptr64'
                 ::__l8::__CpuProfilerEventSpecId8415);
    }
    this->ClassesVersionNumber = uVar6;
    TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::Reset(&this->ExcludedClasses);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::TIterator::TIterator
              ((TIterator *)local_58,&this->ExcludedClassNames);
    if (local_3c < *(int *)(local_48 + 0x18)) {
      do {
        iVar4 = local_3c;
        pwVar2 = *(wchar_t **)(*(longlong *)local_58._0_8_ + (longlong)local_3c * 0x18);
        iVar1 = *(int *)(*(longlong *)local_58._0_8_ + 8 + (longlong)local_3c * 0x18);
        iVar9 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar9 = 0;
        }
        pUVar7 = Z_Construct_UClass_UClass_NoRegister();
        local_68._12_4_ = uStack_6c;
        local_68.Size = iVar9;
        local_68.DataPtr = pwVar2;
        local_res18 = StaticFindObject(pUVar7,(UObject *)0x0,&local_68,None);
        if (local_res18 != (UObject *)0x0) {
          iVar9 = *(int *)&local_res18->field_0xc;
          if ((iVar9 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x443,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar8 = (FUObjectItem *)0x0;
          if (iVar9 < GUObjectArray.ObjObjects.NumElements) {
            pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar9);
          }
          if (((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0) {
            TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::
            Emplace<UClass_*_const_&>(&this->ExcludedClasses,&local_res10,(bool *)&local_res18);
          }
          else {
            TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::
            Emplace<UClass_*_const_&>(&this->ExcludedNativeClasses,&local_res8,(bool *)&local_res18)
            ;
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveByIndex
                      (local_30,iVar4);
          }
        }
        local_40 = local_40 & ~local_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_58 + 8));
      } while (local_3c < *(int *)(local_48 + 0x18));
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// IsExcluded @ 14232aa10

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
AsyncLoading2::Private::FExcludedClassSet::IsExcluded(FExcludedClassSet *this,UClass *param_1)

{
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_140;
  undefined4 uStack_10c;
  undefined4 uStack_c4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  EnsureClassesUpdated(this);
  iVar11 = 0;
  puVar13 = &(this->ExcludedClasses).Elements.field_0x10;
  iVar3 = *(int *)&(this->ExcludedClasses).Elements.field_0x28;
  local_140 = 1;
  uVar18 = local_140;
  local_140 = 1;
  iVar14 = 0;
  uVar8 = 1;
  iVar16 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->ExcludedClasses).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar13;
    }
    uVar12 = *puVar17;
    iVar16 = 0;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14232aad4;
      uVar12 = puVar17[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar16;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14232aad4:
  uVar12 = *(uint *)&(this->ExcludedClasses).Elements.field_0x28;
  uVar19 = uVar12 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uVar8,iVar14);
  TStack_b8.CurrentBitIndex = iVar9;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar12 >> 5;
  TStack_b8._28_4_ = local_44;
  TStack_b8.BaseBitIndex = iVar16;
  uStack_98 = CONCAT44(uStack_10c,
                       *(int *)&(this->ExcludedClasses).Elements.field_0x8 -
                       *(int *)&(this->ExcludedClasses).Elements.field_0x34);
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar13;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  uVar8 = *(uint *)&(this->ExcludedClasses).Elements.field_0x28;
  if (uVar12 != uVar8) {
    puVar15 = *(undefined1 **)&(this->ExcludedClasses).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar13;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar14;
      uVar19 = uVar19 + 0x20;
      iVar14 = iVar14 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14232ac00;
      uVar12 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar19;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_14232ac00:
  while( true ) {
    if (*(int *)&(this->ExcludedClasses).Elements.field_0x8 -
        *(int *)&(this->ExcludedClasses).Elements.field_0x34 != (int)uStack_98) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_b8.CurrentBitIndex == uVar12) &&
       (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar13)) break;
    lVar10 = *(longlong *)
              (*(longlong *)&(this->ExcludedClasses).Elements +
              (longlong)TStack_b8.CurrentBitIndex * 0x10);
    if (lVar10 != 0) {
      if (((int)param_1->_padding_ < *(int *)(lVar10 + 0x38)) ||
         (*(longlong *)(param_1->_padding_ + (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30
         )) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        return true;
      }
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  iVar14 = 0;
  TStack_88.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->ExcludedNativeClasses).Elements.field_0x10;
  iVar3 = *(int *)&(this->ExcludedNativeClasses).Elements.field_0x28;
  pTVar1 = &this->ExcludedNativeClasses;
  iVar16 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->ExcludedNativeClasses).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)TStack_88.Array;
    }
    local_140 = *puVar17;
    iVar14 = 0;
    while (local_140 == 0) {
      lVar10 = (longlong)iVar11;
      iVar14 = iVar14 + 0x20;
      iVar11 = iVar11 + 1;
      local_140 = uVar18;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14232ad1a;
      local_140 = puVar17[lVar10 + 1];
    }
    local_140 = -local_140 & local_140;
    uVar2 = (ulonglong)local_140 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar16 = iVar14 + -1 + (int)lVar10;
    if (iVar3 < iVar16) {
LAB_14232ad1a:
      iVar16 = iVar3;
    }
  }
  puVar13 = &(this->ExcludedNativeClasses).Elements.field_0x10;
  uVar18 = *(uint *)&(this->ExcludedNativeClasses).Elements.field_0x28;
  uVar8 = uVar18 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(local_140,iVar11);
  TStack_88.CurrentBitIndex = iVar16;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_88._28_4_ = iVar9;
  TStack_88.BaseBitIndex = iVar14;
  uStack_68 = CONCAT44(uStack_c4,
                       *(int *)&(this->ExcludedNativeClasses).Elements.field_0x8 -
                       *(int *)&(this->ExcludedNativeClasses).Elements.field_0x34);
  local_90 = pTVar1;
  if ((((int)uVar18 < 0) || (iVar3 < (int)uVar18)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  uVar12 = *(uint *)&(this->ExcludedNativeClasses).Elements.field_0x28;
  if (uVar18 != uVar12) {
    puVar15 = *(undefined1 **)&(this->ExcludedNativeClasses).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar13;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      lVar10 = (longlong)iVar16;
      uVar8 = uVar8 + 0x20;
      iVar16 = iVar16 + 1;
      uVar18 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_14232ae20;
      uVar18 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar18 = (int)lVar10 + -1 + uVar8;
    if ((int)uVar12 < (int)uVar18) {
      uVar18 = uVar12;
    }
  }
LAB_14232ae20:
  while( true ) {
    pTVar5 = local_90;
    if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
        (int)uStack_68) {
      `TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_88.CurrentBitIndex == uVar18) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar13)) && (pTVar5 == pTVar1))
    break;
    lVar10 = *(longlong *)
              (*(longlong *)&pTVar5->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
    if (lVar10 != 0) {
      if (((int)param_1->_padding_ < *(int *)(lVar10 + 0x38)) ||
         (*(longlong *)(param_1->_padding_ + (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30
         )) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        return true;
      }
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  return false;
}

// OnConfigSectionChanged @ 14232d930

void __thiscall
AsyncLoading2::Private::FExcludedClassSet::OnConfigSectionChanged(FExcludedClassSet *this)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  FName *pFVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FName _Src;
  FScriptContainerElement *_Src_00;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  ForElementType<unsigned_int> FVar8;
  FConfigSection *pFVar9;
  bool bVar10;
  FString *pFVar11;
  longlong lVar12;
  int iVar13;
  ForElementType<unsigned_int> FVar14;
  longlong *plVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  undefined1 local_res18 [8];
  int local_res20;
  FString local_118;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  ForElementType<unsigned_int> local_f8;
  undefined1 local_f0 [16];
  FConfigSection *local_e0;
  int iStack_d8;
  uint uStack_d4;
  longlong *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  FConfigSection *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FString local_80 [2];
  undefined4 local_54;
  
  bVar7 = false;
  bVar6 = false;
  iVar13 = 0;
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_AsyncLoading2::Private::FExcludedClassSet::OnConfigSectionChanged(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId8451,"FExcludedClassSet::OnConfigSectionChanged",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x2103);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_AsyncLoading2::Private::FExcludedClassSet::OnConfigSectionChanged(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId8451);
  }
  this_00 = &this->ExcludedClassNames;
  if (*(int *)&(this->ExcludedClassNames).Elements.field_0x8 !=
      *(int *)&(this->ExcludedClassNames).Elements.field_0x34) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements(this_00);
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this_00->Elements,0,*(int *)&(this->ExcludedClassNames).Elements.field_0x8);
    iVar3 = *(int *)&(this->ExcludedClassNames).Elements.field_0xc;
    *(undefined4 *)&(this->ExcludedClassNames).Elements.field_0x8 = 0;
    if (iVar3 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_00,0,
                 (int *)&(this->ExcludedClassNames).Elements.field_0xc);
    }
    *(undefined4 *)&(this->ExcludedClassNames).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ExcludedClassNames).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->ExcludedClassNames).Elements.field_0x28 = 0;
  }
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::Reset(&this->ExcludedClasses);
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::Reset
            (&this->ExcludedNativeClasses);
  this->ClassesVersionNumber = 0;
  if ((GConfig != (FConfigCacheIni *)0x0) && (GConfig->bIsReadyForUse != false)) {
    local_f0._8_8_ =
         FConfigCacheIni::GetSection(GConfig,L"/Script/Engine.StreamingSettings",false,&GEngineIni);
    if ((FConfigSection *)local_f0._8_8_ != (FConfigSection *)0x0) {
      iVar3 = (int)((FConfigSection *)local_f0._8_8_)->_padding_;
      local_f8 = (ForElementType<unsigned_int>)&((FConfigSection *)local_f0._8_8_)->_padding_;
      local_c0 = 0;
      uStack_d4 = 1;
      iStack_c4 = iVar13;
      if (iVar3 != 0) {
        plVar15 = (longlong *)((FConfigSection *)local_f0._8_8_)->_padding_;
        if ((longlong *)((FConfigSection *)local_f0._8_8_)->_padding_ == (longlong *)0x0) {
          plVar15 = (longlong *)local_f8;
        }
        uVar17 = (uint)*plVar15;
        iVar13 = 0;
        while (uVar17 == 0) {
          lVar12 = (longlong)iVar13;
          local_c0 = local_c0 + 0x20;
          iVar13 = iVar13 + 1;
          iStack_c4 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14232db00;
          uVar17 = ((uint *)((longlong)plVar15 + 4))[lVar12];
        }
        uStack_d4 = -uVar17 & uVar17;
        uVar2 = (ulonglong)uStack_d4 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_res20 = (int)lVar12;
        iStack_c4 = local_c0 + -1 + local_res20;
        if (iVar3 < iStack_c4) {
          iStack_c4 = iVar3;
        }
      }
LAB_14232db00:
      uStack_bc = local_54;
      iStack_b8 = (int)((FConfigSection *)local_f0._8_8_)->_padding_ -
                  *(int *)((longlong)&((FConfigSection *)local_f0._8_8_)->_padding_ + 4);
      local_d0 = (longlong *)local_f8;
      local_e0 = (FConfigSection *)local_f0._8_8_;
      uVar17 = (uint)((FConfigSection *)local_f0._8_8_)->_padding_;
      uStack_c8 = 0xffffffff;
      iStack_d8 = iVar13;
      uVar16 = uVar17 & 0xffffffe0;
      local_b0 = (FConfigSection *)local_f0._8_8_;
      TStack_a8._padding_ = CONCAT44(uStack_d4,iVar13);
      iVar13 = (int)uVar17 >> 5;
      TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_f8;
      TStack_a8.UnvisitedBitMask = 0xffffffff;
      TStack_a8.CurrentBitIndex = iStack_c4;
      TStack_a8.BaseBitIndex = local_c0;
      TStack_a8._28_4_ = local_54;
      uStack_88 = CONCAT44(uStack_b4,iStack_b8);
      if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar8 = local_f8;
      uVar4 = *(uint *)((longlong)local_f8 + 0x18);
      if (uVar17 != uVar4) {
        FVar14 = *(ForElementType<unsigned_int> *)((longlong)local_f8 + 0x10);
        if (*(ForElementType<unsigned_int> *)((longlong)local_f8 + 0x10) ==
            (ForElementType<unsigned_int>)0x0) {
          FVar14 = local_f8;
        }
        uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)((longlong)FVar14 + (longlong)iVar13 * 4);
        while (uVar17 == 0) {
          lVar12 = (longlong)iVar13;
          uVar16 = uVar16 + 0x20;
          iVar13 = iVar13 + 1;
          uVar17 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14232dc20;
          uVar17 = *(uint *)((undefined1 *)((longlong)FVar14 + 4) + lVar12 * 4);
        }
        uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar17 = (int)lVar12 + -1 + uVar16;
        if ((int)uVar4 < (int)uVar17) {
          uVar17 = uVar4;
        }
      }
LAB_14232dc20:
      while( true ) {
        pFVar9 = local_b0;
        if ((int)local_b0->_padding_ - *(int *)((longlong)&local_b0->_padding_ + 4) !=
            (int)uStack_88) {
          `TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_a8.CurrentBitIndex == uVar17) &&
            ((ForElementType<unsigned_int>)TStack_a8.Array == FVar8)) &&
           (pFVar9 == (FConfigSection *)local_f0._8_8_)) break;
        pFVar1 = (FName *)(pFVar9->_padding_ + (longlong)TStack_a8.CurrentBitIndex * 0x28);
        if (*pFVar1 == this->Name) {
          if (*(char *)((longlong)&pFVar1[3].Number + 1) == '\0') {
            uVar16 = pFVar1[2].ComparisonIndex.Value;
            _Src = pFVar1[1];
            bVar6 = true;
            local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_118.Data.ArrayNum = uVar16;
            if (uVar16 == 0) {
              local_118.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,uVar16,0,(ForAnyElementType *)&local_118,uVar16,
                         &local_118.Data.ArrayMax);
              memcpy(local_118.Data.AllocatorInstance.Data,(void *)_Src,(longlong)(int)uVar16 * 2);
            }
            pFVar11 = &local_118;
          }
          else {
            bVar7 = true;
            pFVar11 = FConfigValue::ExpandValue(local_80,(FString *)(pFVar1 + 1));
          }
          local_108.Data = (FScriptContainerElement *)0x0;
          local_100 = (pFVar11->Data).ArrayNum;
          lVar12 = (longlong)local_100;
          _Src_00 = (pFVar11->Data).AllocatorInstance.Data;
          if (local_100 == 0) {
            local_fc = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_100,0,&local_108,local_100,&local_fc);
            memcpy(local_108.Data,_Src_00,lVar12 * 2);
          }
          if (bVar6) {
            bVar6 = false;
            if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_118.Data.AllocatorInstance.Data);
            }
          }
          if (bVar7) {
            bVar7 = false;
            if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
            }
          }
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                    (this_00,(FString *)local_f0,(bool *)&local_108);
          if (local_108.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data);
          }
        }
        TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
      }
    }
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

