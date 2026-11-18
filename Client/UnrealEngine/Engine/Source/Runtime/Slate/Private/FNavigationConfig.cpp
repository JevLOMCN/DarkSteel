// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 16

// FNavigationConfig @ 1426a7f40

FNavigationConfig * __thiscall FNavigationConfig::FNavigationConfig(FNavigationConfig *this)

{
  TMap<FKey,EUINavigation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,EUINavigation,0>_>
  *this_00;
  atomic<int> *paVar1;
  int iVar2;
  FName FVar3;
  longlong lVar4;
  undefined8 uVar5;
  TReferenceControllerBase<1> *pTVar6;
  FSharedReferencer<1> FVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  FKey *pFVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined1 *puVar15;
  FKeyDetails *pFVar16;
  uint uVar17;
  FNameEntryId FVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  FKeyDetails *pFVar21;
  uint *puVar22;
  FNavigationConfig *pFVar23;
  FNavigationConfig *local_res8;
  uint local_res10;
  FKey local_88;
  uint uStack_70;
  undefined4 uStack_6c;
  TMap<FKey,EUINavigation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,EUINavigation,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  pFVar21 = (FKeyDetails *)0x0;
  this->bTabNavigation = true;
  this->bKeyNavigation = true;
  this->bAnalogNavigation = true;
  this->bIgnoreModifiersForNavigationActions = true;
  this->_padding_ = 0;
  this_00 = &this->KeyEventRules;
  *(undefined4 *)&(this->KeyEventRules).field_0x8 = 0;
  *(undefined4 *)&(this->KeyEventRules).field_0xc = 0;
  puVar15 = &(this->KeyEventRules).field_0x8;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FNavigationConfig__6B_;
  this->AnalogNavigationHorizontalThreshold = 0.5;
  this->AnalogNavigationVerticalThreshold = 0.5;
  (this->AnalogHorizontalKey).KeyName.ComparisonIndex = 0;
  (this->AnalogHorizontalKey).KeyName.Number = 0;
  (this->AnalogHorizontalKey).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->AnalogHorizontalKey).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AnalogVerticalKey).KeyName.ComparisonIndex = 0;
  (this->AnalogVerticalKey).KeyName.Number = 0;
  (this->AnalogVerticalKey).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->AnalogVerticalKey).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->KeyEventRules).field_0x20 = 0;
  *(undefined4 *)&(this->KeyEventRules).field_0x28 = 0;
  *(undefined4 *)&(this->KeyEventRules).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyEventRules).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyEventRules).field_0x34 = 0;
  *(undefined8 *)&(this->KeyEventRules).field_0x40 = 0;
  *(undefined4 *)&(this->KeyEventRules).field_0x48 = 0;
  *(undefined8 *)&this->KeyActionRules = 0;
  *(undefined8 *)&(this->KeyActionRules).field_0x8 = 0;
  *(undefined8 *)&(this->KeyActionRules).field_0x20 = 0;
  *(undefined4 *)&(this->KeyActionRules).field_0x28 = 0;
  *(undefined4 *)&(this->KeyActionRules).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyActionRules).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyActionRules).field_0x34 = 0;
  *(undefined8 *)&(this->KeyActionRules).field_0x40 = 0;
  *(undefined4 *)&(this->KeyActionRules).field_0x48 = 0;
  *(undefined8 *)&this->UserNavigationState = 0;
  *(undefined8 *)&(this->UserNavigationState).field_0x8 = 0;
  *(undefined8 *)&(this->UserNavigationState).field_0x20 = 0;
  *(undefined4 *)&(this->UserNavigationState).field_0x28 = 0;
  *(undefined4 *)&(this->UserNavigationState).field_0x2c = 0x80;
  *(undefined4 *)&(this->UserNavigationState).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UserNavigationState).field_0x34 = 0;
  *(undefined8 *)&(this->UserNavigationState).field_0x40 = 0;
  *(undefined4 *)&(this->UserNavigationState).field_0x48 = 0;
  (this->AnalogHorizontalKey).KeyName = EKeys::Gamepad_LeftX.KeyName;
  FVar7 = EKeys::Gamepad_LeftX.KeyDetails.SharedReferenceCount;
  pFVar16 = EKeys::Gamepad_LeftX.KeyDetails.Object;
  if (EKeys::Gamepad_LeftX.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Gamepad_LeftX.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         = (atomic<int>)
           ((int)(EKeys::Gamepad_LeftX.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->AnalogHorizontalKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->AnalogHorizontalKey).KeyDetails.Object = pFVar16;
  (this->AnalogHorizontalKey).KeyDetails.SharedReferenceCount.ReferenceController =
       FVar7.ReferenceController;
  local_res8 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  (this->AnalogVerticalKey).KeyName = EKeys::Gamepad_LeftY.KeyName;
  FVar7 = EKeys::Gamepad_LeftY.KeyDetails.SharedReferenceCount;
  pFVar16 = EKeys::Gamepad_LeftY.KeyDetails.Object;
  if (EKeys::Gamepad_LeftY.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Gamepad_LeftY.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         = (atomic<int>)
           ((int)(EKeys::Gamepad_LeftY.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->AnalogVerticalKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->AnalogVerticalKey).KeyDetails.Object = pFVar16;
  (this->AnalogVerticalKey).KeyDetails.SharedReferenceCount.ReferenceController =
       FVar7.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  iVar9 = *(int *)&(this->KeyEventRules).field_0x34;
  if (iVar9 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this_00,(int *)puVar15,
                       (int *)&(this->KeyEventRules).field_0xc);
    puVar13 = &(this->KeyEventRules).field_0x10;
    iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)puVar13,1);
    puVar19 = *(undefined1 **)&(this->KeyEventRules).field_0x20;
    uVar14 = iVar9 >> 0x1f & 0x1f;
    iVar9 = iVar9 + uVar14;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar13;
    }
    *(uint *)(puVar19 + (longlong)(iVar9 >> 5) * 4) =
         *(uint *)(puVar19 + (longlong)(iVar9 >> 5) * 4) &
         ~(1 << (((byte)iVar9 & 0x1f) - (char)uVar14 & 0x1f));
  }
  else {
    iVar8 = *(int *)&(this->KeyEventRules).field_0x30;
    iVar9 = iVar9 + -1;
    iVar2 = *(int *)(*(longlong *)&this_00->field_0x0 + 4 + (longlong)iVar8 * 0x28);
    *(int *)&(this->KeyEventRules).field_0x30 = iVar2;
    *(int *)&(this->KeyEventRules).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_00,(FSparseArrayAllocationInfo *)&local_88,iVar8);
  FVar18.Value = local_88.KeyName.ComparisonIndex.Value;
  pFVar16 = pFVar21;
  if (local_88.KeyDetails.Object != (FKeyDetails *)0x0) {
    ((local_88.KeyDetails.Object)->Key).KeyName = EKeys::Left.KeyName;
    ((local_88.KeyDetails.Object)->Key).KeyDetails.Object = EKeys::Left.KeyDetails.Object;
    FVar7 = EKeys::Left.KeyDetails.SharedReferenceCount;
    ((local_88.KeyDetails.Object)->Key).KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::Left.KeyDetails.SharedReferenceCount.ReferenceController;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar7.ReferenceController)->SharedReferenceCount;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    (local_88.KeyDetails.Object)->PairedAxis = Unpaired;
    ((local_88.KeyDetails.Object)->PairedAxisKey).KeyName.ComparisonIndex.Value = 0xffffffff;
    pFVar16 = local_88.KeyDetails.Object;
  }
  FVar3 = (pFVar16->Key).KeyName;
  local_res10 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  local_res10 = local_res10 + FVar3.Number;
  iVar9 = *(int *)puVar15;
  iVar8 = *(int *)&(this->KeyEventRules).field_0x34;
  pFVar23 = this;
  if ((iVar9 - iVar8 != 1) && (iVar9 != iVar8)) {
    puVar15 = *(undefined1 **)&(this->KeyEventRules).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->KeyEventRules).field_0x38;
    }
    iVar9 = *(int *)(puVar15 +
                    (ulonglong)(*(int *)&(this->KeyEventRules).field_0x48 - 1U & local_res10) * 4);
    FVar18.Value = local_88.KeyName.ComparisonIndex.Value;
    if (iVar9 != -1) {
      lVar4 = *(longlong *)&this_00->field_0x0;
      do {
        if (*(FName *)(lVar4 + (longlong)iVar9 * 0x28) == (pFVar16->Key).KeyName) {
          if (iVar9 != -1) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(lVar4 + 0x10 + (longlong)iVar9 * 0x28));
            memmove((void *)(lVar4 + (longlong)iVar9 * 0x28),pFVar16,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this_00,local_88.KeyName.ComparisonIndex.Value,1);
            goto LAB_1426a84f4;
          }
          break;
        }
        iVar9 = *(int *)(lVar4 + 0x20 + (longlong)iVar9 * 0x28);
      } while (iVar9 != -1);
    }
  }
  uVar17 = 1;
  uVar14 = *(int *)&(this->KeyEventRules).field_0x8 - *(int *)&(this->KeyEventRules).field_0x34;
  if (3 < uVar14) {
    uVar20 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar4 & 0x1f);
  }
  if (((int)uVar14 < 1) || ((int)uVar17 <= *(int *)&(this->KeyEventRules).field_0x48)) {
    uVar14 = *(int *)&(this->KeyEventRules).field_0x48 - 1U & local_res10;
    (pFVar16->PairedAxisKey).KeyName.Number = uVar14;
    puVar15 = *(undefined1 **)&(this->KeyEventRules).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->KeyEventRules).field_0x38;
    }
    uVar20 = (longlong)*(int *)&(this->KeyEventRules).field_0x48 - 1U & (longlong)(int)uVar14;
    (pFVar16->PairedAxisKey).KeyName.ComparisonIndex.Value = *(uint *)(puVar15 + uVar20 * 4);
    *(uint *)(puVar15 + uVar20 * 4) = FVar18.Value;
    goto LAB_1426a84f4;
  }
  *(uint *)&(this->KeyEventRules).field_0x48 = uVar17;
  if (*(longlong *)&(this->KeyEventRules).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->KeyEventRules).field_0x40,0,0,4);
  }
  if (uVar17 != 0) {
    uVar14 = uVar17;
    if (uVar17 < 2) {
      if (*(longlong *)&(this->KeyEventRules).field_0x40 != 0) {
        uVar14 = 0;
        goto LAB_1426a8317;
      }
    }
    else {
LAB_1426a8317:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->KeyEventRules).field_0x40,0,uVar14,4);
    }
    if (0 < (int)uVar17) {
      uVar20 = (ulonglong)uVar17;
      pFVar16 = pFVar21;
      do {
        puVar15 = *(undefined1 **)&(this->KeyEventRules).field_0x40;
        puVar13 = &(this->KeyEventRules).field_0x38;
        if (puVar15 != (undefined1 *)0x0) {
          puVar13 = puVar15;
        }
        uVar10 = (ulonglong)pFVar16 & (longlong)(int)uVar17 - 1U;
        pFVar16 = (FKeyDetails *)((longlong)&(pFVar16->Key).KeyName.ComparisonIndex.Value + 1);
        *(undefined4 *)(puVar13 + uVar10 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if (*(int *)&(this->KeyEventRules).field_0x48 != 0) {
    uVar14 = *(uint *)&(this->KeyEventRules).field_0x28;
    local_88.KeyDetails.Object = (FKeyDetails *)&(this->KeyEventRules).field_0x10;
    local_88.KeyName.ComparisonIndex.Value = 0;
    local_88.KeyName.Number = 1;
    local_88.KeyDetails.SharedReferenceCount.ReferenceController._4_4_ = 0;
    uStack_70 = 0;
    if (uVar14 != 0) {
      puVar22 = *(uint **)&(this->KeyEventRules).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)local_88.KeyDetails.Object;
      }
      uVar17 = *puVar22;
      pFVar16 = pFVar21;
      while (uVar17 == 0) {
        iVar9 = (int)pFVar16;
        uStack_70 = (int)pFVar21 + 0x20;
        pFVar21 = (FKeyDetails *)(ulonglong)uStack_70;
        local_88.KeyName.ComparisonIndex.Value = iVar9 + 1;
        pFVar16 = (FKeyDetails *)(ulonglong)local_88.KeyName.ComparisonIndex.Value;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <
            (int)local_88.KeyName.ComparisonIndex.Value) goto LAB_1426a840e;
        uVar17 = puVar22[(longlong)iVar9 + 1];
      }
      local_88.KeyName.Number = -uVar17 & uVar17;
      uVar20 = (ulonglong)local_88.KeyName.Number * 2 + 1;
      lVar4 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_88.KeyDetails.SharedReferenceCount.ReferenceController._4_4_ =
           (uStack_70 - 1) + (int)lVar4;
      pFVar21 = (FKeyDetails *)
                (ulonglong)local_88.KeyDetails.SharedReferenceCount.ReferenceController._4_4_;
      if ((int)uVar14 < (int)local_88.KeyDetails.SharedReferenceCount.ReferenceController._4_4_) {
LAB_1426a840e:
        pFVar21 = (FKeyDetails *)(ulonglong)uVar14;
        local_88.KeyDetails.SharedReferenceCount.ReferenceController._4_4_ = uVar14;
      }
    }
    local_88.KeyDetails.SharedReferenceCount.ReferenceController._0_4_ = 0xffffffff;
    local_60._padding_ = CONCAT44(local_88.KeyName.Number,local_88.KeyName.ComparisonIndex.Value);
    local_60.CurrentBitIndex = local_88.KeyDetails.SharedReferenceCount.ReferenceController._4_4_;
    local_60.UnvisitedBitMask = 0xffffffff;
    local_60._28_4_ = uStack_6c;
    local_60.BaseBitIndex = uStack_70;
    local_68 = this_00;
    local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88.KeyDetails.Object;
    if ((int)pFVar21 < (int)uVar14) {
      do {
        lVar4 = *(longlong *)&local_68->field_0x0;
        lVar11 = (longlong)(int)pFVar21;
        uVar5 = *(undefined8 *)(lVar4 + lVar11 * 0x28);
        uVar14 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
        uVar14 = *(int *)&(this->KeyEventRules).field_0x48 - 1U &
                 uVar14 + (int)((ulonglong)uVar5 >> 0x20);
        *(uint *)(lVar4 + 0x24 + lVar11 * 0x28) = uVar14;
        puVar15 = *(undefined1 **)&(this->KeyEventRules).field_0x40;
        puVar13 = &(this->KeyEventRules).field_0x38;
        if (puVar15 != (undefined1 *)0x0) {
          puVar13 = puVar15;
        }
        uVar20 = (longlong)*(int *)&(this->KeyEventRules).field_0x48 - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(lVar4 + 0x20 + lVar11 * 0x28) = *(undefined4 *)(puVar13 + uVar20 * 4);
        *(int *)(puVar13 + uVar20 * 4) = (int)pFVar21;
        local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
        pFVar21 = (FKeyDetails *)(ulonglong)(uint)local_60.CurrentBitIndex;
        pFVar23 = local_res8;
      } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
    }
  }
LAB_1426a84f4:
  local_res8 = (FNavigationConfig *)((ulonglong)local_res8 & 0xffffffffffffff00);
  TMapBase<FKey,enum_EUINavigation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigation,0>_>
  ::Emplace<FKey_const_&,enum_EUINavigation>
            (&pFVar23->KeyEventRules,&EKeys::Gamepad_DPad_Left,(EUINavigation *)&local_res8);
  local_res8._0_1_ = 1;
  TMapBase<FKey,enum_EUINavigation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigation,0>_>
  ::Emplace<FKey_const_&,enum_EUINavigation>
            (&pFVar23->KeyEventRules,&EKeys::Right,(EUINavigation *)&local_res8);
  local_res8._0_1_ = 1;
  TMapBase<FKey,enum_EUINavigation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigation,0>_>
  ::Emplace<FKey_const_&,enum_EUINavigation>
            (&pFVar23->KeyEventRules,&EKeys::Gamepad_DPad_Right,(EUINavigation *)&local_res8);
  local_res8._0_1_ = 2;
  TMapBase<FKey,enum_EUINavigation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigation,0>_>
  ::Emplace<FKey_const_&,enum_EUINavigation>
            (&pFVar23->KeyEventRules,&EKeys::Up,(EUINavigation *)&local_res8);
  local_res8._0_1_ = 2;
  TMapBase<FKey,enum_EUINavigation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigation,0>_>
  ::Emplace<FKey_const_&,enum_EUINavigation>
            (&pFVar23->KeyEventRules,&EKeys::Gamepad_DPad_Up,(EUINavigation *)&local_res8);
  local_res8._0_1_ = 3;
  TMapBase<FKey,enum_EUINavigation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigation,0>_>
  ::Emplace<FKey_const_&,enum_EUINavigation>
            (&pFVar23->KeyEventRules,&EKeys::Down,(EUINavigation *)&local_res8);
  local_res8._0_1_ = 3;
  TMapBase<FKey,enum_EUINavigation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigation,0>_>
  ::Emplace<FKey_const_&,enum_EUINavigation>
            (&pFVar23->KeyEventRules,&EKeys::Gamepad_DPad_Down,(EUINavigation *)&local_res8);
  local_res8._0_1_ = 0;
  TMapBase<FKey,enum_EUINavigationAction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigationAction,0>_>
  ::Emplace<FKey_const_&,enum_EUINavigationAction>
            (&pFVar23->KeyActionRules,&EKeys::Enter,(EUINavigationAction *)&local_res8);
  local_res8._0_1_ = 0;
  TMapBase<FKey,enum_EUINavigationAction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigationAction,0>_>
  ::Emplace<FKey_const_&,enum_EUINavigationAction>
            (&pFVar23->KeyActionRules,&EKeys::SpaceBar,(EUINavigationAction *)&local_res8);
  local_res8._0_1_ = 0;
  pFVar12 = FKey::GetVirtualKey(&EKeys::Virtual_Gamepad_Accept,&local_88);
  TMapBase<FKey,enum_EUINavigationAction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigationAction,0>_>
  ::Emplace<FKey,enum_EUINavigationAction>
            (&pFVar23->KeyActionRules,pFVar12,(EUINavigationAction *)&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_88.KeyDetails.SharedReferenceCount.ReferenceController._4_4_,
                      local_88.KeyDetails.SharedReferenceCount.ReferenceController._0_4_));
  local_res8._0_1_ = 1;
  TMapBase<FKey,enum_EUINavigationAction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigationAction,0>_>
  ::Emplace<FKey_const_&,enum_EUINavigationAction>
            (&pFVar23->KeyActionRules,&EKeys::Escape,(EUINavigationAction *)&local_res8);
  local_res8 = (FNavigationConfig *)CONCAT71(local_res8._1_7_,1);
  pFVar12 = FKey::GetVirtualKey(&EKeys::Virtual_Gamepad_Back,&local_88);
  TMapBase<FKey,enum_EUINavigationAction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigationAction,0>_>
  ::Emplace<FKey,enum_EUINavigationAction>
            (&pFVar23->KeyActionRules,pFVar12,(EUINavigationAction *)&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_88.KeyDetails.SharedReferenceCount.ReferenceController._4_4_,
                      local_88.KeyDetails.SharedReferenceCount.ReferenceController._0_4_));
  return pFVar23;
}

// ~FNavigationConfig @ 1426aace0

void __thiscall FNavigationConfig::~FNavigationConfig(FNavigationConfig *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  *(undefined4 *)&(this->UserNavigationState).field_0x48 = 0;
  this->_padding_ = (longlong)&___7FNavigationConfig__6B_;
  pvVar3 = *(void **)&(this->UserNavigationState).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FUserNavigationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FUserNavigationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FUserNavigationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UserNavigationState);
  *(undefined4 *)&(this->KeyActionRules).field_0x48 = 0;
  pvVar3 = *(void **)&(this->KeyActionRules).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FKey,enum_EUINavigationAction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKey,enum_EUINavigationAction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->KeyActionRules);
  *(undefined4 *)&(this->KeyEventRules).field_0x48 = 0;
  pvVar3 = *(void **)&(this->KeyEventRules).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FKey,enum_EUINavigation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKey,enum_EUINavigation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->KeyEventRules);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnalogVerticalKey).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnalogHorizontalKey).KeyDetails.SharedReferenceCount.ReferenceController);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// GetNavigationActionForKey @ 1426bdd60

EUINavigationAction __thiscall
FNavigationConfig::GetNavigationActionForKey(FNavigationConfig *this,FKey *param_1)

{
  EUINavigationAction *pEVar1;
  
  pEVar1 = TMapBase<FKey,enum_EUINavigationAction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigationAction,0>_>
           ::Find(&this->KeyActionRules,param_1);
  if (pEVar1 != (EUINavigationAction *)0x0) {
    return *pEVar1;
  }
  return Invalid;
}

// GetNavigationActionFromKey @ 1426bddb0

EUINavigationAction __thiscall
FNavigationConfig::GetNavigationActionFromKey(FNavigationConfig *this,FKeyEvent *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  EUINavigationAction EVar4;
  FName local_28;
  FKeyDetails *local_20;
  TReferenceControllerBase<1> *local_18;
  
  lVar3 = param_1->_padding_;
  if (((((lVar3 & 0xc) == 0) && ((lVar3 & 0x30) == 0)) && ((lVar3 & 0xc0) == 0)) &&
     ((lVar3 & 3) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((this->bIgnoreModifiersForNavigationActions == false) && (bVar2)) {
    return Invalid;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x40);
  local_28 = (param_1->Key).KeyName;
  local_20 = (param_1->Key).KeyDetails.Object;
  local_18 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_18->SharedReferenceCount = (atomic<int>)((int)local_18->SharedReferenceCount + 1);
    UNLOCK();
  }
  EVar4 = (*pcVar1)(this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  return EVar4;
}

// GetNavigationDirectionFromAnalog @ 1426bdee0

EUINavigation __thiscall
FNavigationConfig::GetNavigationDirectionFromAnalog
          (FNavigationConfig *this,FAnalogInputEvent *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<double> aVar2;
  EUINavigation EVar3;
  uint uVar4;
  FUserNavigationState *this_00;
  FAnalogNavigationState *pFVar5;
  float fVar6;
  uint local_res8 [2];
  FAnalogNavigationKey local_38;
  
  if ((this->bAnalogNavigation != false) &&
     (EVar3 = (**(code **)(this->_padding_ + 0x58))(), EVar3 != Invalid)) {
    local_res8[0] = *(uint *)((longlong)&param_1->_padding_ + 4);
    this_00 = TMapBase<int,FUserNavigationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FUserNavigationState,0>_>
              ::FindOrAddImpl<int>
                        ((TMapBase<int,FUserNavigationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FUserNavigationState,0>_>
                          *)&this->UserNavigationState,local_res8[0],(int *)local_res8);
    pTVar1 = (TReferenceControllerBase<1> *)param_1->_padding_;
    local_38.AnalogKey.KeyName = (FName)param_1->_padding_;
    local_38.AnalogKey.KeyDetails.Object = (FKeyDetails *)param_1->_padding_;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.AnalogKey.KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
    local_38.NavigationDir = EVar3;
    uVar4 = ::GetTypeHash(&local_38);
    pFVar5 = TMapBase<FAnalogNavigationKey,FAnalogNavigationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>_>
             ::FindOrAddImpl<FAnalogNavigationKey>
                       ((TMapBase<FAnalogNavigationKey,FAnalogNavigationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>_>
                         *)this_00,uVar4,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.AnalogKey.KeyDetails.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    fVar6 = (float)(**(code **)(this->_padding_ + 0x50))(this);
    aVar2 = FApp::CurrentTime;
    if ((double)fVar6 < (double)FApp::CurrentTime - pFVar5->LastNavigationTime) {
      pFVar5->Repeats = pFVar5->Repeats + 1;
      pFVar5->LastNavigationTime = (double)aVar2;
      return EVar3;
    }
  }
  return Invalid;
}

// GetNavigationDirectionFromAnalogInternal @ 1426be060

EUINavigation __thiscall
FNavigationConfig::GetNavigationDirectionFromAnalogInternal
          (FNavigationConfig *this,FAnalogInputEvent *param_1)

{
  float fVar1;
  char cVar2;
  FUserNavigationState *this_00;
  uint local_res8 [2];
  FAnalogNavigationState local_68;
  FName local_58;
  FKeyDetails *local_50;
  TReferenceControllerBase<1> *local_48;
  FAnalogNavigationKey local_40;
  
  if (this->bAnalogNavigation == false) {
    return Invalid;
  }
  local_res8[0] = *(uint *)((longlong)&param_1->_padding_ + 4);
  this_00 = TMapBase<int,FUserNavigationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FUserNavigationState,0>_>
            ::FindOrAddImpl<int>
                      ((TMapBase<int,FUserNavigationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FUserNavigationState,0>_>
                        *)&this->UserNavigationState,local_res8[0],(int *)local_res8);
  local_58 = (FName)param_1->_padding_;
  local_50 = (FKeyDetails *)param_1->_padding_;
  local_48 = (TReferenceControllerBase<1> *)param_1->_padding_;
  if (local_48 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_48->SharedReferenceCount = (atomic<int>)((int)local_48->SharedReferenceCount + 1);
    UNLOCK();
  }
  fVar1 = param_1->AnalogValue;
  cVar2 = (**(code **)(this->_padding_ + 0x60))(this,&local_58);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(this->_padding_ + 0x68))(this,&local_58);
    if (cVar2 == '\0') goto LAB_1426be280;
    if (this->AnalogNavigationVerticalThreshold < fVar1) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
      return Up;
    }
    if (fVar1 < (float)((uint)this->AnalogNavigationVerticalThreshold ^
                       __xmm_80000000800000008000000080000000)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
      return Down;
    }
    local_40.AnalogKey.KeyName = local_58;
    local_40.AnalogKey.KeyDetails.Object = local_50;
    local_68.LastNavigationTime = 0.0;
    local_68.Repeats = 0;
    local_40.AnalogKey.KeyDetails.SharedReferenceCount.ReferenceController = local_48;
    if (local_48 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_48->SharedReferenceCount = (atomic<int>)((int)local_48->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.NavigationDir = Up;
    TMapBase<FAnalogNavigationKey,FAnalogNavigationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>_>
    ::Emplace<FAnalogNavigationKey,FAnalogNavigationState>
              ((TMapBase<FAnalogNavigationKey,FAnalogNavigationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>_>
                *)this_00,&local_40,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.AnalogKey.KeyDetails.SharedReferenceCount.ReferenceController);
    if (local_48 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_48->SharedReferenceCount = (atomic<int>)((int)local_48->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.NavigationDir = Down;
  }
  else {
    if (fVar1 < (float)((uint)this->AnalogNavigationHorizontalThreshold ^
                       __xmm_80000000800000008000000080000000)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
      return Left;
    }
    if (this->AnalogNavigationHorizontalThreshold < fVar1) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
      return Right;
    }
    local_40.AnalogKey.KeyName = local_58;
    local_40.AnalogKey.KeyDetails.Object = local_50;
    local_68.LastNavigationTime = 0.0;
    local_68.Repeats = 0;
    local_40.AnalogKey.KeyDetails.SharedReferenceCount.ReferenceController = local_48;
    if (local_48 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_48->SharedReferenceCount = (atomic<int>)((int)local_48->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.NavigationDir = Left;
    TMapBase<FAnalogNavigationKey,FAnalogNavigationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>_>
    ::Emplace<FAnalogNavigationKey,FAnalogNavigationState>
              ((TMapBase<FAnalogNavigationKey,FAnalogNavigationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>_>
                *)this_00,&local_40,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.AnalogKey.KeyDetails.SharedReferenceCount.ReferenceController);
    if (local_48 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_48->SharedReferenceCount = (atomic<int>)((int)local_48->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.NavigationDir = Right;
  }
  local_68.Repeats = 0;
  local_68.LastNavigationTime = 0.0;
  local_40.AnalogKey.KeyName = local_58;
  local_40.AnalogKey.KeyDetails.Object = local_50;
  local_40.AnalogKey.KeyDetails.SharedReferenceCount.ReferenceController = local_48;
  TMapBase<FAnalogNavigationKey,FAnalogNavigationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>_>
  ::Emplace<FAnalogNavigationKey,FAnalogNavigationState>
            ((TMapBase<FAnalogNavigationKey,FAnalogNavigationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>_>
              *)this_00,&local_40,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.AnalogKey.KeyDetails.SharedReferenceCount.ReferenceController);
LAB_1426be280:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  return Invalid;
}

// GetNavigationDirectionFromKey @ 1426be2b0

EUINavigation __thiscall
FNavigationConfig::GetNavigationDirectionFromKey(FNavigationConfig *this,FKeyEvent *param_1)

{
  FName FVar1;
  bool bVar2;
  longlong lVar3;
  EUINavigation *pEVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  uint uStackX_c;
  FKey local_38;
  
  local_38.KeyName = (param_1->Key).KeyName;
  bVar6 = false;
  pTVar5 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  local_38.KeyDetails.Object = (param_1->Key).KeyDetails.Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.KeyDetails.SharedReferenceCount.ReferenceController = pTVar5;
  pEVar4 = TMapBase<FKey,enum_EUINavigation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigation,0>_>
           ::Find(&this->KeyEventRules,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (pEVar4 != (EUINavigation *)0x0) {
    if (this->bKeyNavigation == false) {
      return Invalid;
    }
    return *pEVar4;
  }
  if (this->bTabNavigation == false) {
    pTVar5 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar5 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar1 = (param_1->Key).KeyName;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    if (FVar1 == EKeys::Tab.KeyName) {
      bVar2 = true;
      goto LAB_1426be34c;
    }
  }
  bVar2 = false;
LAB_1426be34c:
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  if ((((bVar2) && (lVar3 = param_1->_padding_, (lVar3 & 0xc) == 0)) && ((lVar3 & 0x30) == 0)) &&
     ((lVar3 & 0xc0) == 0)) {
    return ((lVar3 & 3) != 0) + Next;
  }
  return Invalid;
}

// GetRepeatRateForPressure @ 1426bf170

float __thiscall
FNavigationConfig::GetRepeatRateForPressure(FNavigationConfig *this,float param_1,int param_2)

{
  float fVar1;
  
  fVar1 = __real_3e800000;
  if (param_2 == 0) {
    fVar1 = __real_3f000000;
  }
  if (__real_3f666666 < param_1) {
    fVar1 = fVar1 * __real_3f000000;
  }
  return fVar1;
}

// IsAnalogEventBeyondNavigationThreshold @ 1426c2430

bool __thiscall
FNavigationConfig::IsAnalogEventBeyondNavigationThreshold
          (FNavigationConfig *this,FAnalogInputEvent *param_1)

{
  char cVar1;
  bool bVar2;
  float fVar3;
  longlong local_38;
  longlong local_30;
  TReferenceControllerBase<1> *local_28;
  
  if (this->bAnalogNavigation == false) {
    return false;
  }
  local_38 = param_1->_padding_;
  local_30 = param_1->_padding_;
  local_28 = (TReferenceControllerBase<1> *)param_1->_padding_;
  if (local_28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_28->SharedReferenceCount = (atomic<int>)((int)local_28->SharedReferenceCount + 1);
    UNLOCK();
  }
  fVar3 = (float)((uint)param_1->AnalogValue & __xmm_7fffffff7fffffff7fffffff7fffffff);
  cVar1 = (**(code **)(this->_padding_ + 0x60))(this,&local_38);
  if ((cVar1 == '\0') ||
     (fVar3 < this->AnalogNavigationHorizontalThreshold ||
      fVar3 == this->AnalogNavigationHorizontalThreshold)) {
    cVar1 = (**(code **)(this->_padding_ + 0x68))(this,&local_38);
    if ((cVar1 == '\0') ||
       (fVar3 < this->AnalogNavigationVerticalThreshold ||
        fVar3 == this->AnalogNavigationVerticalThreshold)) {
      bVar2 = false;
      goto LAB_1426c24ab;
    }
  }
  bVar2 = true;
LAB_1426c24ab:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return bVar2;
}

// IsAnalogHorizontalKey @ 1426c24e0

bool __thiscall FNavigationConfig::IsAnalogHorizontalKey(FNavigationConfig *this,FKey *param_1)

{
  return param_1->KeyName == (this->AnalogHorizontalKey).KeyName;
}

// IsAnalogVerticalKey @ 1426c2530

bool __thiscall FNavigationConfig::IsAnalogVerticalKey(FNavigationConfig *this,FKey *param_1)

{
  return param_1->KeyName == (this->AnalogVerticalKey).KeyName;
}

// OnNavigationChangedFocus @ 1426c8700

void __thiscall
FNavigationConfig::OnNavigationChangedFocus
          (FNavigationConfig *this,TSharedPtr<SWidget,1> *param_1,TSharedPtr<SWidget,1> *param_2,
          FFocusEvent param_3)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// OnRegister @ 1426c8a00

void __thiscall FNavigationConfig::OnRegister(FNavigationConfig *this)

{
  TSet<TTuple<int,FUserNavigationState>,TDefaultMapHashableKeyFuncs<int,FUserNavigationState,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FUserNavigationState>,TDefaultMapHashableKeyFuncs<int,FUserNavigationState,0>,FDefaultSetAllocator>
           *)&this->UserNavigationState);
  return;
}

// OnUnregister @ 1426c9d30

void __thiscall FNavigationConfig::OnUnregister(FNavigationConfig *this)

{
  return;
}

// OnUserRemoved @ 1426c9d40

void __thiscall FNavigationConfig::OnUserRemoved(FNavigationConfig *this,int param_1)

{
  int local_res10 [6];
  
  if (*(int *)&(this->UserNavigationState).field_0x8 !=
      *(int *)&(this->UserNavigationState).field_0x34) {
    local_res10[0] = param_1;
    TSet<TTuple<int,FUserNavigationState>,TDefaultMapHashableKeyFuncs<int,FUserNavigationState,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,FUserNavigationState>,TDefaultMapHashableKeyFuncs<int,FUserNavigationState,0>,FDefaultSetAllocator>
                       *)&this->UserNavigationState,param_1,local_res10);
  }
  return;
}

// ToString @ 1426e1e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FNavigationConfig::ToString(FNavigationConfig *this,FString *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TMap<FKey,EUINavigation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,EUINavigation,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  TMap<FKey,EUINavigation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,EUINavigation,0>_>
  *pTVar8;
  bool bVar9;
  longlong lVar10;
  FString *pFVar11;
  UEnum *this_00;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 auStack_968 [32];
  undefined1 local_948 [8];
  TMap<FKey,EUINavigation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,EUINavigation,0>_>
  *local_940;
  int iStack_938;
  uint uStack_934;
  undefined1 *local_930;
  undefined4 uStack_928;
  int iStack_924;
  int local_920;
  int iStack_91c;
  int iStack_918;
  undefined4 uStack_914;
  int local_910;
  int local_90c;
  FName local_908;
  FString local_900;
  TMap<FKey,EUINavigation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,EUINavigation,0>_>
  *local_8f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8e8;
  undefined8 uStack_8c8;
  FKey local_8c0;
  undefined1 local_8a8;
  FString local_8a0;
  FString local_890;
  FString local_880;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_968;
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_868.End = (wchar_t *)local_48;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L"bTabNavigation: %u\n");
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L"bKeyNavigation: %u\n");
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L"bAnalogNavigation: %u\n");
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L"AnalogNavigationHorizontalThreshold: %f\n");
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L"AnalogNavigationVerticalThreshold: %f\n");
  FKey::ToString(&this->AnalogHorizontalKey,&local_8a0);
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L"AnalogHorizontalKey: %s\n");
  if (local_8a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a0.Data.AllocatorInstance.Data);
  }
  FKey::ToString(&this->AnalogVerticalKey,&local_890);
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L"AnalogVerticalKey: %s\n");
  if (local_890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_890.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L"KeyEventRules: \n");
  puVar1 = &(this->KeyEventRules).field_0x10;
  iVar4 = *(int *)&(this->KeyEventRules).field_0x28;
  pTVar2 = &this->KeyEventRules;
  iStack_938 = 0;
  uStack_934 = 1;
  local_920 = 0;
  iStack_924 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->KeyEventRules).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar15 = *puVar16;
    local_920 = 0;
    while (uVar15 == 0) {
      lVar10 = (longlong)iStack_938;
      local_920 = local_920 + 0x20;
      iStack_938 = iStack_938 + 1;
      iStack_924 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_938) goto LAB_1426e204f;
      uVar15 = puVar16[lVar10 + 1];
    }
    uStack_934 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_934 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_910 = (int)lVar10;
    iStack_924 = local_920 + -1 + local_910;
    if (iVar4 < iStack_924) {
      iStack_924 = iVar4;
    }
  }
LAB_1426e204f:
  uVar15 = *(uint *)&(this->KeyEventRules).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_918 = *(int *)&(this->KeyEventRules).field_0x8 - *(int *)&(this->KeyEventRules).field_0x34;
  uStack_928 = 0xffffffff;
  TStack_8e8._padding_ = CONCAT44(uStack_934,iStack_938);
  TStack_8e8.CurrentBitIndex = iStack_924;
  TStack_8e8.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_8e8._28_4_ = iStack_924;
  TStack_8e8.BaseBitIndex = local_920;
  uStack_8c8 = CONCAT44(uStack_914,iStack_918);
  local_940 = pTVar2;
  local_930 = puVar1;
  iStack_91c = iStack_924;
  local_8f0 = pTVar2;
  TStack_8e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FString *)(*pcVar7)();
    return pFVar11;
  }
  uVar5 = *(uint *)&(this->KeyEventRules).field_0x28;
  if (uVar15 != uVar5) {
    puVar12 = *(undefined1 **)&(this->KeyEventRules).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar13) goto LAB_1426e2160;
      uVar15 = *(uint *)(puVar12 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_90c = (int)lVar10;
    uVar15 = local_90c + -1 + uVar14;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_1426e2160:
  while( true ) {
    pTVar8 = local_8f0;
    if (*(int *)&local_8f0->field_0x8 - *(int *)&local_8f0->field_0x34 != (int)uStack_8c8) {
      local_948[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FKey,enum_EUINavigation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_948);
    }
    lVar10 = (longlong)TStack_8e8.CurrentBitIndex;
    if (((TStack_8e8.CurrentBitIndex == uVar15) &&
        (TStack_8e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    lVar6 = *(longlong *)pTVar8;
    local_8c0.KeyName = *(FName *)(lVar6 + lVar10 * 0x28);
    local_8c0.KeyDetails.Object = *(FKeyDetails **)(lVar6 + 8 + lVar10 * 0x28);
    local_8c0.KeyDetails.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(lVar6 + 0x10 + lVar10 * 0x28);
    if (local_8c0.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_8c0.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_8c0.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_8a8 = *(undefined1 *)(lVar6 + 0x18 + lVar10 * 0x28);
    this_00 = StaticEnum<enum_EUINavigation>();
    if ((this_00 == (UEnum *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FString *)(*pcVar7)();
      return pFVar11;
    }
    UEnum::GetNameByValue(this_00,(long64)&local_908);
    ::FName::ToString(&local_908,&local_900);
    FKey::ToString(&local_8c0,&local_880);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L"Pair: %s -> %s\n");
    if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_880.Data.AllocatorInstance.Data);
    }
    if (local_900.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_900.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8c0.KeyDetails.SharedReferenceCount.ReferenceController);
    TStack_8e8.UnvisitedBitMask = TStack_8e8.UnvisitedBitMask & ~TStack_8e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8e8);
  }
  if (local_868.End < local_868.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,1);
  }
  *local_868.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_868.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  return __return_storage_ptr__;
}

