// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// AddFrameFromCondensedMessages @ 1419d98a0

void __thiscall
FStatsLoadedState::AddFrameFromCondensedMessages
          (FStatsLoadedState *this,TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *this_00;
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong *plVar14;
  TPairInitializer<__int64_const_&,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*_const_&>
  local_res8;
  undefined8 *local_res18;
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  uint uStack_cc;
  longlong local_c8;
  TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
  *pTStack_c0;
  TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
  *local_b8;
  char local_b0;
  char cStack_af;
  undefined1 local_a8 [12];
  uint local_9c;
  longlong local_98;
  uint local_90;
  int local_8c;
  TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *local_80;
  longlong *local_78;
  undefined8 **local_70;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  if ((param_1->ArrayNum < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CondensedMessages.Num() >= 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsFile.cpp"
                         ,0xa1,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar11 = (undefined8 *)0x0;
  if ((param_1->ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (((*(uint *)(pFVar2 + 0xc) & 0xf000) != 0x2000) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AdvanceGameThread.NameAndInfo.GetField<EStatOperation>() == EStatOperation::AdvanceFrameEventGameThread"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsFile.cpp"
                         ,0xa5,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((*(uint *)(pFVar2 + 0xc) & 0xe00) != 0x400) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AdvanceGameThread.NameAndInfo.GetField<EStatDataType>() == EStatDataType::ST_int64"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsFile.cpp"
                         ,0xa6,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(longlong *)pFVar2 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AdvanceGameThread.GetValue_int64() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsFile.cpp"
                         ,0xa7,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)pFVar2;
  plVar1 = &this->_padding_;
  *plVar1 = lVar3;
  this->_padding_ = lVar3;
  this->_padding_ = lVar3;
  if (this->MaxFrameSeen < lVar3) {
    this->MaxFrameSeen = lVar3;
  }
  if (this->MinFrameSeen < 0) {
    this->MinFrameSeen = lVar3;
  }
  lVar7 = this->_padding_;
  this_00 = &this->_padding_;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar14 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar14 = &this->_padding_;
    }
    iVar9 = *(int *)((longlong)plVar14 +
                    ((lVar3 >> 0x20) * 0x17 + lVar3 & (ulonglong)((int)this->_padding_ - 1)) * 4);
    if (iVar9 != -1) {
      do {
        if (*(longlong *)(*this_00 + (longlong)iVar9 * 0x18) == lVar3) {
          return;
        }
        iVar9 = *(int *)(*this_00 + 0x10 + (longlong)iVar9 * 0x18);
      } while (iVar9 != -1);
    }
  }
  puVar10 = ::operator_new(0x10);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar11 = puVar10;
  }
  uVar5 = *(undefined8 *)&param_1->ArrayNum;
  pFVar2 = (FScriptContainerElement *)*puVar11;
  uVar6 = puVar11[1];
  *puVar11 = (param_1->AllocatorInstance).Data;
  puVar11[1] = uVar5;
  (param_1->AllocatorInstance).Data = pFVar2;
  param_1->ArrayNum = (int)uVar6;
  param_1->ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  local_res18 = puVar11;
  TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_68,
             (TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
              *)this_00);
  local_b0 = '\0';
  cStack_af = '\0';
  stack0xffffffffffffff28 = local_68._16_16_;
  auStack_e0._0_8_ = local_68._8_8_;
  local_c8 = local_48;
  pTStack_c0 = pTStack_40;
  uVar12 = local_68._24_8_ >> 0x20;
  uVar13 = local_68._28_4_;
  local_b8 = (TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
              *)this_00;
  if ((int)uVar13 < *(int *)(local_68._16_8_ + 0x18)) {
    do {
      if (*(longlong *)(*(longlong *)local_68._0_8_ + (longlong)(int)uVar12 * 0x18) <
          lVar3 - (int)lVar7) {
        puVar11 = *(undefined8 **)(*(longlong *)local_68._0_8_ + 8 + (longlong)(int)uVar13 * 0x18);
        if (puVar11 != (undefined8 *)0x0) {
          if ((void *)*puVar11 != (void *)0x0) {
            FMemory::Free((void *)*puVar11);
          }
          ::operator_delete(puVar11,0x10);
        }
        TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_c0,uVar13);
        local_b0 = '\x01';
      }
      uStack_d0 = uStack_d0 & ~auStack_e0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_e0);
      uVar12 = (ulonglong)uStack_cc;
      uVar13 = uStack_cc;
    } while ((int)uStack_cc < *(int *)(auStack_e0._8_8_ + 0x18));
    if ((local_b0 != '\0') && (cStack_af != '\0')) {
      uVar13 = *(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34;
      if (uVar13 < 4) {
        iVar9 = 1;
      }
      else {
        uVar12 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar9 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar13) && (local_b8->HashSize < iVar9)) || (iVar9 < local_b8->HashSize)) {
        local_b8->HashSize = iVar9;
        TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
        ::Rehash(local_b8);
      }
    }
  }
  TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::TIterator::TIterator
            ((TIterator *)local_a8,
             (TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *)&this->_padding_);
  if (local_8c < *(int *)(local_98 + 0x18)) {
    do {
      lVar3 = *(longlong *)(*(longlong *)local_a8._0_8_ + (longlong)local_8c * 0x10);
      if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
        plVar14 = &this->_padding_;
        if ((longlong *)this->_padding_ != (longlong *)0x0) {
          plVar14 = (longlong *)this->_padding_;
        }
        iVar9 = *(int *)((longlong)plVar14 +
                        ((lVar3 >> 0x20) * 0x17 + lVar3 & (ulonglong)((int)this->_padding_ - 1)) * 4
                        );
        if (iVar9 != -1) {
          do {
            if (*(longlong *)(*this_00 + (longlong)iVar9 * 0x18) == lVar3) goto LAB_1419d9c53;
            iVar9 = *(int *)(*this_00 + 0x10 + (longlong)iVar9 * 0x18);
          } while (iVar9 != -1);
        }
      }
      TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::RemoveByIndex
                (local_80,local_8c);
LAB_1419d9c53:
      local_90 = local_90 & ~local_9c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_a8 + 8));
    } while (local_8c < *(int *)(local_98 + 0x18));
  }
  local_70 = &local_res18;
  local_78 = plVar1;
  TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<__int64_const_&,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*_const_&>_>
            ((TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)&local_78);
  TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Emplace<__int64_const_&>
            ((TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *)&this->_padding_,
             (long64 *)&local_res8.Value,(bool *)plVar1);
  return;
}

// AdvanceFrameForLoad @ 1419dfaa0

void __thiscall
FStatsLoadedState::AdvanceFrameForLoad
          (FStatsLoadedState *this,TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1->ArrayNum < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CondensedMessages.Num() >= 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsFile.cpp"
                       ,0xa1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((*(uint *)(pFVar1 + 0xc) & 0xf000) != 0x2000) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AdvanceGameThread.NameAndInfo.GetField<EStatOperation>() == EStatOperation::AdvanceFrameEventGameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsFile.cpp"
                       ,0xa5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((*(uint *)(pFVar1 + 0xc) & 0xe00) != 0x400) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AdvanceGameThread.NameAndInfo.GetField<EStatDataType>() == EStatDataType::ST_int64"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsFile.cpp"
                       ,0xa6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)pFVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AdvanceGameThread.GetValue_int64() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsFile.cpp"
                       ,0xa7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)pFVar1;
  this->_padding_ = lVar2;
  this->_padding_ = lVar2;
  this->_padding_ = lVar2;
  if (this->MaxFrameSeen < lVar2) {
    this->MaxFrameSeen = lVar2;
  }
  if (this->MinFrameSeen < 0) {
    this->MinFrameSeen = lVar2;
  }
  return;
}

// GetLatestValidFrame @ 141a00e40

long64 __thiscall FStatsLoadedState::GetLatestValidFrame(FStatsLoadedState *this)

{
  longlong lVar1;
  
  lVar1 = this->MaxFrameSeen;
  if ((-1 < lVar1) && (-1 < this->MinFrameSeen)) {
    if (this->MinFrameSeen < lVar1) {
      lVar1 = lVar1 + -1;
    }
    return lVar1;
  }
  return -1;
}

// GetOldestValidFrame @ 141a013a0

long64 __thiscall FStatsLoadedState::GetOldestValidFrame(FStatsLoadedState *this)

{
  long64 lVar1;
  
  lVar1 = -1;
  if ((-1 < this->MaxFrameSeen) && (-1 < this->MinFrameSeen)) {
    lVar1 = this->MinFrameSeen;
  }
  return lVar1;
}

// ProcessMetaDataAndLeaveDataOnly @ 141a10de0

void __thiscall
FStatsLoadedState::ProcessMetaDataAndLeaveDataOnly
          (FStatsLoadedState *this,TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FStatMessage *pFVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  iVar4 = param_1->ArrayNum;
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < iVar4) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar5 = (FStatMessage *)((param_1->AllocatorInstance).Data + lVar7);
      uVar3 = (pFVar5->NameAndInfo).Number & 0xf000;
      if (uVar3 == 0x1000) {
        FStatsThreadState::FindOrAddMetaData((FStatsThreadState *)this,pFVar5);
      }
      else if (uVar3 == 0x2000) {
        uVar3 = 0;
        if ((int)uVar6 <= param_1->ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (uVar6 == 0) {
          return;
        }
        _Dst = (param_1->AllocatorInstance).Data;
        iVar4 = param_1->ArrayNum - uVar6;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x10,(longlong)iVar4 << 4);
        }
        param_1->ArrayNum = param_1->ArrayNum - uVar6;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
        return;
      }
      iVar4 = param_1->ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < iVar4);
  }
  return;
}

