// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 19

// FAchievementsCommon @ 14ee0bfc0

FAchievementsCommon * __thiscall
UE::Online::FAchievementsCommon::FAchievementsCommon
          (FAchievementsCommon *this,FOnlineServicesCommon *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FAchievementsCommon *pFVar6;
  FString local_38;
  TSharedRef<UE::Online::IOnlineServices,1> local_28;
  
  ::FString::FString(&local_38,L"Achievements");
  *(FOnlineServicesCommon **)&this->field_0x10 = param_1;
  *(undefined ***)this =
       &TOnlineComponent<UE::Online::IAchievements>::_vftable__for__UE__Online__IAchievements__;
  *(undefined ***)&this->field_0x8 =
       &TOnlineComponent<UE::Online::IAchievements>::_vftable__for__UE__Online__IOnlineComponent__;
  pTVar4 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                     ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&param_1->field_0x8,
                      &local_28);
  pTVar5 = (pTVar4->SharedReferenceCount).ReferenceController;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    *(FAchievementsCommon **)&this->field_0x18 = this;
    *(undefined8 *)&this->field_0x20 = 0;
  }
  else {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    *(FAchievementsCommon **)&this->field_0x18 = this;
    *(TReferenceControllerBase<1> **)&this->field_0x20 = pTVar5;
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  _Src.Data = local_38.Data.AllocatorInstance.Data;
  puVar1 = &this->field_0x28;
  *(undefined8 *)puVar1 = 0;
  *(int *)&this->field_0x30 = local_38.Data.ArrayNum;
  if (local_38.Data.ArrayNum == 0) {
    *(undefined4 *)&this->field_0x34 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)puVar1,local_38.Data.ArrayNum,
               (int *)&this->field_0x34);
    memcpy(*(void **)puVar1,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
  }
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined4 *)&this->field_0x64 = 0x80;
  *(undefined4 *)&this->field_0x68 = 0xffffffff;
  *(undefined4 *)&this->field_0x6c = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined4 *)&this->field_0x80 = 0;
  FOnlineAsyncOpQueueSerial::FOnlineAsyncOpQueueSerial
            ((FOnlineAsyncOpQueueSerial *)&this->field_0x90,&param_1->ParallelQueue);
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x130 = 0;
  *(undefined4 *)&this->field_0x138 = 0;
  *(undefined4 *)&this->field_0x13c = 0x80;
  *(undefined4 *)&this->field_0x140 = 0xffffffff;
  *(undefined4 *)&this->field_0x144 = 0;
  *(undefined8 *)&this->field_0x150 = 0;
  *(undefined4 *)&this->field_0x158 = 0;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(undefined ***)this = &_vftable__for__UE__Online__IAchievements__;
  *(undefined ***)&this->field_0x8 = &_vftable__for__UE__Online__IOnlineComponent__;
  pTVar5 = ::operator_new(0x30);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnAchievementStateUpdatedEvent).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FAchievementStateUpdated_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnAchievementStateUpdatedEvent).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFAchievementStateUpdated_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = 0;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[2]._padding_ = 0;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnAchievementStateUpdatedEvent).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FAchievementStateUpdated_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar5 + 1);
    (this->OnAchievementStateUpdatedEvent).DelegateRef.SharedReferenceCount.ReferenceController =
         pTVar5;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FAchievementStateUpdated_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar5 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FAchievementStateUpdated_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FAchievementsCommon *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  *(undefined8 *)&(this->StatEventHandle).DelegateUnbinder = 0;
  *(undefined8 *)&(this->StatEventHandle).DelegateUnbinder.field_0x28 = 0;
  (this->Config).bIsTitleManaged = false;
  (this->Config).UnlockRules.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Config).UnlockRules.ArrayNum = 0;
  (this->Config).UnlockRules.ArrayMax = 0;
  *(undefined8 *)&this->AchievementStates = 0;
  *(undefined8 *)&(this->AchievementStates).field_0x8 = 0;
  *(undefined8 *)&(this->AchievementStates).field_0x20 = 0;
  *(undefined4 *)&(this->AchievementStates).field_0x28 = 0;
  *(undefined4 *)&(this->AchievementStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->AchievementStates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AchievementStates).field_0x34 = 0;
  *(undefined8 *)&(this->AchievementStates).field_0x40 = 0;
  *(undefined4 *)&(this->AchievementStates).field_0x48 = 0;
  return this;
}

// operator() @ 14ee2b280

void __thiscall
`UE::Online::FAchievementsCommon::UnlockAchievementsByStats'::__l2::<lambda_1>::operator()
          (void *this,TOnlineResult<UE::Online::FBatchQueryStats> *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  FAchievementsCommon *this_00;
  code *pcVar4;
  bool bVar5;
  FAchievementUnlockCondition *pFVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  FAchievementUnlockRule *pFVar10;
  uint uVar11;
  FAchievementUnlockRule *pFVar12;
  uint uVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar15;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar16;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar17;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_128 [4];
  uint local_124;
  TArray<FString,TSizedDefaultAllocator<32>_> local_120;
  uint local_110;
  uint local_108 [2];
  FScriptContainerElement *local_100;
  undefined8 local_f8;
  int local_f0;
  int local_ec;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *local_e8;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *local_e0;
  uint uStack_d8;
  uint uStack_d4;
  TBitArray<FDefaultBitArrayAllocator> *local_d0;
  undefined4 uStack_c8;
  uint uStack_c4;
  uint local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  undefined1 local_80 [8];
  TReferenceControllerBase<1> *local_78;
  undefined4 local_54;
  
  bVar1 = param_1->field_0x30;
  if ((1 < (ulonglong)bVar1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FBatchQueryStats::Result,UE::Online::FBatchQueryStats::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1) != '\0') {
    bVar1 = param_1->field_0x30;
    if ((1 < (ulonglong)bVar1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FBatchQueryStats::Result,UE::Online::FBatchQueryStats::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsOk()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                           ,0x77,
                           L"It is an error to call GetOkValue() on a TResult that does not hold an ok value. Please either check IsOk() or use TryGetOkValue"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((param_1->field_0x30 != '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_110 = *(uint *)&param_1->field_0x10;
    uVar7 = (ulonglong)(int)local_110;
    pTVar17 = *(TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> **)&param_1->field_0x8;
    pTVar16 = pTVar17 + 10;
    local_e8 = pTVar17 + uVar7 * 0x16;
    while( true ) {
      pTVar15 = local_e8;
      if (*(int *)&param_1->field_0x10 != (int)uVar7) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UE::Online::FUserStats_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      if (pTVar17 == pTVar15) break;
      local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uStack_d8 = 0;
      local_120.ArrayNum = 0;
      local_120.ArrayMax = 0;
      uStack_d4 = 1;
      uVar13 = pTVar16[2].Value;
      uStack_c4 = uStack_d8;
      local_c0 = uStack_d8;
      if (uVar13 != 0) {
        pTVar15 = *(TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> **)pTVar16;
        if (pTVar15 == (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)0x0) {
          pTVar15 = pTVar16 + -4;
        }
        uVar11 = pTVar15->Value;
        local_c0 = 0;
        uStack_d8 = 0;
        while (uVar11 == 0) {
          lVar8 = (longlong)(int)uStack_d8;
          local_c0 = local_c0 + 0x20;
          uStack_d8 = uStack_d8 + 1;
          uStack_c4 = uVar13;
          if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_d8)
          goto LAB_14ee2b450;
          uVar11 = pTVar15[lVar8 + 1].Value;
        }
        uStack_d4 = -uVar11 & uVar11;
        uVar7 = (ulonglong)uStack_d4 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        local_f0 = (int)lVar8;
        uStack_c4 = (local_c0 - 1) + local_f0;
        if ((int)uVar13 < (int)uStack_c4) {
          uStack_c4 = uVar13;
        }
      }
LAB_14ee2b450:
      local_e0 = pTVar16 + -8;
      pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)(pTVar16 + -4);
      uStack_bc = local_54;
      iStack_b8 = pTVar16[-6].Value - pTVar16[5].Value;
      uVar11 = uVar13 & 0xffffffe0;
      TStack_a8._padding_ = CONCAT44(uStack_d4,uStack_d8);
      uStack_c8 = 0xffffffff;
      TStack_a8.CurrentBitIndex = uStack_c4;
      TStack_a8.UnvisitedBitMask = 0xffffffff;
      iVar9 = (int)uVar13 >> 5;
      TStack_a8._28_4_ = local_54;
      TStack_a8.BaseBitIndex = local_c0;
      uStack_88 = CONCAT44(uStack_b4,iStack_b8);
      local_124 = uVar13;
      local_d0 = pTVar14;
      local_b0 = local_e0;
      TStack_a8.Array = pTVar14;
      if (((int)uVar13 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar2 = pTVar16[2].Value;
      if (uVar13 != uVar2) {
        if (*(TBitArray<FDefaultBitArrayAllocator> **)pTVar16 !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)pTVar16;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) &
                 *(uint *)((longlong)(pTVar14->AllocatorInstance).InlineData + (longlong)iVar9 * 4);
        while (uVar13 == 0) {
          lVar8 = (longlong)iVar9;
          uVar11 = uVar11 + 0x20;
          iVar9 = iVar9 + 1;
          uVar13 = uVar2;
          local_124 = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
          goto LAB_14ee2b570;
          uVar13 = *(uint *)((longlong)(pTVar14->AllocatorInstance).InlineData + (lVar8 + 1) * 4);
        }
        uVar7 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        local_ec = (int)lVar8;
        uVar13 = local_ec + -1 + uVar11;
        local_124 = uVar13;
        if ((int)uVar2 < (int)uVar13) {
          uVar13 = uVar2;
          local_124 = uVar2;
        }
      }
LAB_14ee2b570:
      while( true ) {
        pTVar15 = local_b0;
        if (local_b0[2].Value - local_b0[0xd].Value != (int)uStack_88) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        lVar8 = (longlong)TStack_a8.CurrentBitIndex;
        if (((TStack_a8.CurrentBitIndex == uVar13) &&
            (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(pTVar16 + -4))) &&
           (pTVar15 == pTVar16 + -8)) break;
        lVar3 = *(longlong *)pTVar15;
        this_00 = *(FAchievementsCommon **)this;
        if ((this_00->Config).bIsTitleManaged != false) {
          iVar9 = (this_00->Config).UnlockRules.ArrayNum;
          pFVar10 = (FAchievementUnlockRule *)(this_00->Config).UnlockRules.AllocatorInstance.Data;
          pFVar12 = pFVar10 + iVar9;
          while( true ) {
            if ((this_00->Config).UnlockRules.ArrayNum != iVar9) {
              local_128[0] = 0;
              `TCheckedPointerIterator<UE::Online::FAchievementUnlockRule,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(local_128);
            }
            if (pFVar10 == pFVar12) break;
            pFVar6 = TArray<UE::Online::FAchievementUnlockCondition,TSizedDefaultAllocator<32>_>::
                     FindByPredicate<_UE::Online::FAchievementUnlockRule::ContainsStat_::__l2::<lambda_1>_>
                               (&pFVar10->Conditions,(FString *)(lVar8 * 0x38 + lVar3));
            if (((pFVar6 != (FAchievementUnlockCondition *)0x0) &&
                (bVar5 = UE::Online::FAchievementsCommon::IsUnlocked
                                   (this_00,pTVar17,&pFVar10->AchievementId), !bVar5)) &&
               (bVar5 = UE::Online::FAchievementsCommon::MeetUnlockCondition
                                  (this_00,pFVar10,
                                   (TMap<FString,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>_>
                                    *)(pTVar16 + -8)), bVar5)) {
              TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                        (&local_120,&pFVar10->AchievementId);
            }
            pFVar10 = pFVar10 + 1;
          }
        }
        TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
        uVar13 = local_124;
      }
      if (local_120.ArrayNum != 0) {
        local_108[0] = pTVar17->Value;
        local_100 = (void *)0x0;
        local_f8 = 0;
        DestructItems<FString,int>((FString *)0x0,0);
        if (local_100 != (void *)0x0) {
          FMemory::Free(local_100);
        }
        local_100 = local_120.AllocatorInstance.Data;
        local_f8._0_4_ = local_120.ArrayNum;
        local_f8._4_4_ = local_120.ArrayMax;
        local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_120.ArrayNum = 0;
        local_120.ArrayMax = 0;
        (**(code **)(**(longlong **)this + 0x28))(*(longlong **)this,local_80,local_108);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78);
        DestructItems<FString,int>((FString *)local_100,(int)local_f8);
        if (local_100 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100);
        }
      }
      DestructItems<FString,int>((FString *)local_120.AllocatorInstance.Data,local_120.ArrayNum);
      if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.AllocatorInstance.Data);
      }
      pTVar17 = pTVar17 + 0x16;
      pTVar16 = pTVar16 + 0x16;
      uVar7 = (ulonglong)local_110;
    }
  }
  return;
}

// DisplayAchievementUI @ 14eebc690

TOnlineResult<UE::Online::FDisplayAchievementUI> * __thiscall
UE::Online::FAchievementsCommon::DisplayAchievementUI
          (FAchievementsCommon *this,
          TOnlineResult<UE::Online::FDisplayAchievementUI> *__return_storage_ptr__,Params *param_1)

{
  FOnlineError *pFVar1;
  FOnlineError *pFVar2;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  local_40.bIsSet = false;
  pFVar2 = Errors::NotImplemented(&local_68,&local_40);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FDisplayAchievementUI_Online_UE__VFOnlineError_34__Online_UE__6B_;
  *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar2->Details).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
       (pFVar2->Details).SharedReferenceCount.ReferenceController;
  pFVar1 = (pFVar2->Inner).Object;
  (pFVar2->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar1;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
       (pFVar2->Inner).SharedReferenceCount.ReferenceController;
  (pFVar2->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar2->ErrorCode;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFDisplayAchievementUI_Online_UE___Online_UE__6B_;
  __return_storage_ptr__->field_0x30 = 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Details.SharedReferenceCount.ReferenceController);
  if (local_40.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// ExecuteUnlockRulesRelatedToStat @ 14eed0480

void __thiscall
UE::Online::FAchievementsCommon::ExecuteUnlockRulesRelatedToStat
          (FAchievementsCommon *this,TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1,
          FString *param_2,
          TMap<FString,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>_>
          *param_3,TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  bool bVar2;
  FAchievementUnlockCondition *pFVar3;
  FAchievementUnlockRule *pFVar4;
  FAchievementUnlockRule *pFVar5;
  undefined1 local_res8 [8];
  
  if ((this->Config).bIsTitleManaged != false) {
    pFVar4 = (FAchievementUnlockRule *)(this->Config).UnlockRules.AllocatorInstance.Data;
    iVar1 = (this->Config).UnlockRules.ArrayNum;
    pFVar5 = pFVar4 + iVar1;
    while( true ) {
      if ((this->Config).UnlockRules.ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::Online::FAchievementUnlockRule,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar5) break;
      pFVar3 = TArray<UE::Online::FAchievementUnlockCondition,TSizedDefaultAllocator<32>_>::
               FindByPredicate<_UE::Online::FAchievementUnlockRule::ContainsStat_::__l2::<lambda_1>_>
                         (&pFVar4->Conditions,(<lambda_1>)param_2);
      if (((pFVar3 != (FAchievementUnlockCondition *)0x0) &&
          (bVar2 = IsUnlocked(this,param_1,&pFVar4->AchievementId), !bVar2)) &&
         (bVar2 = MeetUnlockCondition(this,pFVar4,param_3), bVar2)) {
        TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                  (param_4,&pFVar4->AchievementId);
      }
      pFVar4 = pFVar4 + 1;
    }
  }
  return;
}

// GetAchievementDefinition @ 14eed54b0

TOnlineResult<UE::Online::FGetAchievementDefinition> * __thiscall
UE::Online::FAchievementsCommon::GetAchievementDefinition
          (FAchievementsCommon *this,
          TOnlineResult<UE::Online::FGetAchievementDefinition> *__return_storage_ptr__,
          Params *param_1)

{
  FOnlineError *pFVar1;
  FOnlineError *pFVar2;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  local_40.bIsSet = false;
  pFVar2 = Errors::NotImplemented(&local_68,&local_40);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FGetAchievementDefinition_Online_UE__VFOnlineError_34__Online_UE__6B_;
  *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar2->Details).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
       (pFVar2->Details).SharedReferenceCount.ReferenceController;
  pFVar1 = (pFVar2->Inner).Object;
  (pFVar2->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar1;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
       (pFVar2->Inner).SharedReferenceCount.ReferenceController;
  (pFVar2->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar2->ErrorCode;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFGetAchievementDefinition_Online_UE___Online_UE__6B_;
  __return_storage_ptr__->field_0xa0 = 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Details.SharedReferenceCount.ReferenceController);
  if (local_40.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// GetAchievementIds @ 14eed5570

TOnlineResult<UE::Online::FGetAchievementIds> * __thiscall
UE::Online::FAchievementsCommon::GetAchievementIds
          (FAchievementsCommon *this,
          TOnlineResult<UE::Online::FGetAchievementIds> *__return_storage_ptr__,Params *param_1)

{
  FOnlineError *pFVar1;
  FOnlineError *pFVar2;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  local_40.bIsSet = false;
  pFVar2 = Errors::NotImplemented(&local_68,&local_40);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FGetAchievementIds_Online_UE__VFOnlineError_34__Online_UE__6B_;
  *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar2->Details).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
       (pFVar2->Details).SharedReferenceCount.ReferenceController;
  pFVar1 = (pFVar2->Inner).Object;
  (pFVar2->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar1;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
       (pFVar2->Inner).SharedReferenceCount.ReferenceController;
  (pFVar2->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar2->ErrorCode;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFGetAchievementIds_Online_UE___Online_UE__6B_;
  __return_storage_ptr__->field_0x30 = 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Details.SharedReferenceCount.ReferenceController);
  if (local_40.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// GetAchievementState @ 14eed5630

TOnlineResult<UE::Online::FGetAchievementState> * __thiscall
UE::Online::FAchievementsCommon::GetAchievementState
          (FAchievementsCommon *this,
          TOnlineResult<UE::Online::FGetAchievementState> *__return_storage_ptr__,Params *param_1)

{
  FOnlineError *pFVar1;
  FOnlineError *pFVar2;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  local_40.bIsSet = false;
  pFVar2 = Errors::NotImplemented(&local_68,&local_40);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FGetAchievementState_Online_UE__VFOnlineError_34__Online_UE__6B_;
  *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar2->Details).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
       (pFVar2->Details).SharedReferenceCount.ReferenceController;
  pFVar1 = (pFVar2->Inner).Object;
  (pFVar2->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar1;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
       (pFVar2->Inner).SharedReferenceCount.ReferenceController;
  (pFVar2->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar2->ErrorCode;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFGetAchievementState_Online_UE___Online_UE__6B_;
  __return_storage_ptr__->field_0x30 = 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Details.SharedReferenceCount.ReferenceController);
  if (local_40.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// Initialize @ 14eeed960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Online::FAchievementsCommon::Initialize(FAchievementsCommon *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  IStats *pIVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  FSharedReferencer<1> *this_00;
  undefined1 auStack_88 [32];
  <lambda_1> local_68;
  TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>
  local_60;
  <lambda_1> *local_50;
  TReferenceControllerBase<1> *local_48 [2];
  longlong local_38 [3];
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)&this->field_0x8;
  puVar1 = &this[-1].field_0x208;
  local_68.__this = ::operator_new(0x10);
  if (local_68.__this != (FAchievementsCommon *)0x0) {
    *(undefined1 **)&(local_68.__this)->field_0x8 = puVar1;
    *(undefined ***)local_68.__this =
         &
         ___7__TOnlineComponentExecHandler_V__TOnlineComponent_VIAchievements_Online_UE___Online_UE___Online_UE__6B_
    ;
  }
  local_60.Value =
       (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *
       )&this->field_0x20;
  local_50 = &local_68;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x130),&local_60,(bool *)&local_60.Value);
  if (local_68.__this != (FAchievementsCommon *)0x0) {
    (*(code *)**(undefined8 **)local_68.__this)(local_68.__this,1);
  }
  (**(code **)(*(longlong *)puVar1 + 0x40))(puVar1);
  (**(code **)(*(longlong *)this + 0x18))(this);
  pIVar7 = FOnlineServicesCommon::Get<UE::Online::IStats>
                     (*(FOnlineServicesCommon **)&this->field_0x8);
  if (pIVar7 != (IStats *)0x0) {
    local_68.__this = (FAchievementsCommon *)puVar1;
    puVar8 = (undefined8 *)(**(code **)((longlong)*pIVar7 + 0x28))(pIVar7,&local_60);
    TOnlineEventCallable<void___cdecl(UE::Online::FUpdateStats::Params_const_&)>::
    Add<_UE::Online::FAchievementsCommon::Initialize_::__l5::<lambda_1>_>
              ((TOnlineEventCallable<void___cdecl(UE::Online::FUpdateStats::Params_const_&)> *)
               *puVar8,(FOnlineEventDelegateHandle *)local_48,&local_68);
    this_00 = &(this->OnAchievementStateUpdatedEvent).DelegateRef.SharedReferenceCount;
    FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)this_00);
    pTVar3 = this_00->ReferenceController;
    uVar4 = *(undefined8 *)&(this->StatEventHandle).DelegateUnbinder;
    lVar2 = *(longlong *)&(this->StatEventHandle).DelegateUnbinder.field_0x8;
    uVar5 = *(undefined8 *)&(this->StatEventHandle).DelegateUnbinder.field_0x10;
    uVar6 = *(undefined8 *)&(this->StatEventHandle).DelegateUnbinder.field_0x18;
    plVar9 = *(longlong **)&(this->StatEventHandle).DelegateUnbinder.field_0x20;
    this_00->ReferenceController = local_48[0];
    *(TReferenceControllerBase<1> **)&(this->StatEventHandle).DelegateUnbinder = local_48[1];
    *(longlong *)&(this->StatEventHandle).DelegateUnbinder.field_0x8 = local_38[0];
    *(longlong *)&(this->StatEventHandle).DelegateUnbinder.field_0x10 = local_38[1];
    *(longlong *)&(this->StatEventHandle).DelegateUnbinder.field_0x18 = local_38[2];
    *(longlong **)&(this->StatEventHandle).DelegateUnbinder.field_0x20 = plStack_20;
    local_48[0] = pTVar3;
    local_48[1] = (TReferenceControllerBase<1> *)uVar4;
    local_38[0] = lVar2;
    local_38[1] = uVar5;
    local_38[2] = uVar6;
    plStack_20 = plVar9;
    FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_48);
    if (local_48[0] != (TReferenceControllerBase<1> *)0x0) {
      plVar9 = local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar9 = plStack_20;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  return;
}

// IsUnlocked @ 14eef06f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Online::FAchievementsCommon::IsUnlocked
          (FAchievementsCommon *this,TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1,
          FString *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined1 auStackY_b8 [32];
  uint local_78 [2];
  FString local_70;
  undefined1 local_60 [8];
  undefined1 local_58 [16];
  float local_48;
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  local_78[0] = param_1->Value;
  if (&local_70 != param_2) {
    uVar1 = (param_2->Data).ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_70.Data.ArrayMax = 0;
    local_70.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_70,uVar1,&local_70.Data.ArrayMax);
      memcpy(local_70.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  (**(code **)(*(longlong *)this + 0x20))(this,local_60,local_78);
  uVar6 = (ulonglong)local_30;
  if ((1 < uVar6) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FGetCachedStats::Result,UE::Online::FGetCachedStats::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar6 + 4) == '\0') {
    if (2 < (byte)LogOnlineServices._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
    bVar3 = false;
  }
  else {
    uVar6 = (ulonglong)local_30;
    if ((1 < uVar6) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((*(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FGetCachedStats::Result,UE::Online::FGetCachedStats::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar6 + 4) == '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsOk()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                           ,0x7e,
                           L"It is an error to call GetOkValue() on a TResult that does not hold an ok value. Please either check IsOk() or use TryGetOkValue"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((local_30 != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar3 = (float)((uint)(local_48 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
            __real_322bcc77;
  }
  if ((1 < local_30) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetAchievementState::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_30])(local_58);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// MeetUnlockCondition @ 14eef1a20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Online::FAchievementsCommon::MeetUnlockCondition
          (FAchievementsCommon *this,FAchievementUnlockRule *param_1,
          TMap<FString,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>_>
          *param_2)

{
  undefined8 *puVar1;
  EStatModifyMethod EVar2;
  int iVar3;
  char cVar4;
  FStatsCommon *this_00;
  FStatDefinition *pFVar5;
  FSchemaVariant *this_01;
  long64 lVar6;
  long64 lVar7;
  undefined8 *puVar8;
  FSchemaVariant *this_02;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  if ((this->Config).bIsTitleManaged != false) {
    puVar8 = *(undefined8 **)(*(longlong *)&this->field_0x10 + 0x198);
    puVar1 = puVar8 + *(int *)(*(longlong *)&this->field_0x10 + 0x1a0);
    for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
      cVar4 = (**(code **)(*(longlong *)*puVar8 + 0x18))
                        ((longlong *)*puVar8,L"class UE::Online::FStatsCommon");
      if (cVar4 != '\0') {
        this_00 = (FStatsCommon *)(**(code **)(*(longlong *)*puVar8 + 8))();
        if (this_00 == (FStatsCommon *)0x0) {
          return false;
        }
        pFVar9 = (param_1->Conditions).AllocatorInstance.Data;
        iVar3 = (param_1->Conditions).ArrayNum;
        this_02 = (FSchemaVariant *)(pFVar9 + 0x10);
        pFVar10 = pFVar9 + (longlong)iVar3 * 0x30;
        goto LAB_14eef1ad0;
      }
    }
  }
  return false;
LAB_14eef1ad0:
  if ((param_1->Conditions).ArrayNum != iVar3) {
    `TCheckedPointerIterator<UE::Online::FAchievementUnlockCondition_const_,int,0>::operator!='::
    __l2::<lambda_1>::operator()(local_res8);
  }
  if (pFVar9 == pFVar10) {
    return true;
  }
  pFVar5 = FStatsCommon::GetStatDefinition(this_00,(FString *)pFVar9);
  if (pFVar5 != (FStatDefinition *)0x0) {
    this_01 = TMapBase<FString,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>_>
              ::Find((TMapBase<FString,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>_>
                      *)param_2,(FString *)pFVar9);
    if (this_01 == (FSchemaVariant *)0x0) {
      if ((byte)LogOnlineServices._0_1_ < 3) {
        return false;
      }
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      return false;
    }
    EVar2 = pFVar5->ModifyMethod;
    if (EVar2 == Sum) {
LAB_14eef1b8a:
      lVar6 = FSchemaVariant::GetInt64(this_02);
      lVar7 = FSchemaVariant::GetInt64(this_01);
      if (lVar7 < lVar6) {
        return false;
      }
      goto LAB_14eef1bab;
    }
    if (EVar2 == Set) {
      lVar6 = FSchemaVariant::GetInt64(this_02);
      lVar7 = FSchemaVariant::GetInt64(this_01);
      if (lVar7 != lVar6) {
        return false;
      }
      pFVar9 = pFVar9 + 0x30;
      this_02 = (FSchemaVariant *)&this_02[1].VariantData.TypeIndex;
    }
    else {
      if (EVar2 == Largest) goto LAB_14eef1b8a;
      if (EVar2 != Smallest) goto LAB_14eef1bab;
      lVar6 = FSchemaVariant::GetInt64(this_02);
      lVar7 = FSchemaVariant::GetInt64(this_01);
      if (lVar6 < lVar7) {
        return false;
      }
      pFVar9 = pFVar9 + 0x30;
      this_02 = (FSchemaVariant *)&this_02[1].VariantData.TypeIndex;
    }
    goto LAB_14eef1ad0;
  }
LAB_14eef1bab:
  pFVar9 = pFVar9 + 0x30;
  this_02 = (FSchemaVariant *)&this_02[1].VariantData.TypeIndex;
  goto LAB_14eef1ad0;
}

// OnAchievementStateUpdated @ 14eef2890

TOnlineEvent<void___cdecl(UE::Online::FAchievementStateUpdated_const_&)> __thiscall
UE::Online::FAchievementsCommon::OnAchievementStateUpdated(FAchievementsCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FAchievementStateUpdated_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FAchievementStateUpdated_const_&),FDefaultDelegateUserPolicy>
        *)&this->OnAchievementStateUpdatedEvent;
  return (TOnlineEvent<void___cdecl(UE::Online::FAchievementStateUpdated_const_&)>)in_RDX;
}

// OnAchievementStatesQueried @ 14eef28b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::FAchievementsCommon::OnAchievementStatesQueried
          (FAchievementsCommon *this,TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  IStats *pIVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_97 [7];
  Params local_90;
  undefined1 local_78 [8];
  uint *local_70;
  int local_68;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((this->Config).bIsTitleManaged != false) {
    pIVar5 = FOnlineServicesCommon::Get<UE::Online::IStats>
                       (*(FOnlineServicesCommon **)&this->field_0x10);
    if (pIVar5 != (IStats *)0x0) {
      local_98 = 0;
      (**(code **)((longlong)*pIVar5 + 0x30))(pIVar5,local_78,&local_98);
      uVar7 = (ulonglong)local_48;
      if (1 < uVar7) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FGetCachedStats::Result,UE::Online::FGetCachedStats::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar7) == '\0') {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CachedStatsResult.IsOk()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Private\\Online\\AchievementsCommon.cpp"
                           ,0x47,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar7 = (ulonglong)local_48;
      if (1 < uVar7) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FGetCachedStats::Result,UE::Online::FGetCachedStats::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar7) == '\0') {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsOk()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                           ,0x7e,
                           L"It is an error to call GetOkValue() on a TResult that does not hold an ok value. Please either check IsOk() or use TryGetOkValue"
                          );
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (local_48 != 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar2 = local_68;
      lVar9 = (longlong)local_68;
      puVar8 = local_70;
      while( true ) {
        if (local_68 != iVar2) {
          local_97[0] = 0;
          `TCheckedPointerIterator<UE::Online::FUserStats_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_97);
        }
        if (puVar8 == local_70 + lVar9 * 0x16) break;
        if (*puVar8 == param_1->Value) {
          local_90.UpdateUsersStats.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_90.UpdateUsersStats.ArrayNum = 0;
          local_90.UpdateUsersStats.ArrayMax = 0;
          local_90.LocalAccountId.Value = param_1->Value;
          iVar4 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x858,&local_90.UpdateUsersStats.AllocatorInstance,
                             &local_90.UpdateUsersStats.ArrayMax);
          local_90.UpdateUsersStats.ArrayNum = iVar4 + 1;
          pFVar6 = local_90.UpdateUsersStats.AllocatorInstance.Data + (longlong)iVar4 * 0x58;
          *(uint *)&pFVar6->field_0x0 = *puVar8;
          *(undefined8 *)(pFVar6 + 0x10) = 0;
          *(undefined8 *)(pFVar6 + 0x28) = 0;
          *(undefined8 *)
           &((TSet<TTuple<FString,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              *)(pFVar6 + 8))->Elements = 0;
          *(undefined4 *)(pFVar6 + 0x30) = 0;
          *(undefined4 *)(pFVar6 + 0x34) = 0x80;
          *(undefined4 *)(pFVar6 + 0x38) = 0xffffffff;
          *(undefined4 *)(pFVar6 + 0x3c) = 0;
          *(undefined8 *)(pFVar6 + 0x48) = 0;
          *(undefined4 *)(pFVar6 + 0x50) = 0;
          TSet<TTuple<FString,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
          ::operator=((TSet<TTuple<FString,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                       *)(pFVar6 + 8),
                      (TSet<TTuple<FString,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                       *)(puVar8 + 2));
          UnlockAchievementsByStats(this,&local_90);
          DestructItems<UE::Online::FUserStats,int>
                    ((FUserStats *)local_90.UpdateUsersStats.AllocatorInstance.Data,
                     local_90.UpdateUsersStats.ArrayNum);
          if ((FUserStats *)local_90.UpdateUsersStats.AllocatorInstance.Data != (FUserStats *)0x0) {
            FMemory::Free(local_90.UpdateUsersStats.AllocatorInstance.Data);
          }
        }
        puVar8 = puVar8 + 0x16;
      }
      if (1 < local_48) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetCachedStats::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_48])(&local_70);
    }
  }
  return;
}

// QueryAchievementDefinitions @ 14eef7a90

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FQueryAchievementDefinitions> * __thiscall
UE::Online::FAchievementsCommon::QueryAchievementDefinitions
          (FAchievementsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FQueryAchievementDefinitions> *__return_storage_ptr__,
          Params *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  EOnlineServices EVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FOnlineError *pFVar6;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FQueryAchievementDefinitions>,1>
  *pTVar7;
  int iVar8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FQueryAchievementDefinitions>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar1 = *(longlong **)&this->field_0x10;
  ::FString::FString((FString *)&local_98,L"QueryAchievementDefinitions");
  pTVar5 = TOnlineComponent<UE::Online::IAchievements>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IAchievements> *)this,&local_88,
                      (FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar1[0x5e] != '\0')) {
    EVar4 = (**(code **)(*plVar1 + 0x98))(plVar1);
    Online::LexToString(EVar4);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FQueryAchievementDefinitions>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FQueryAchievementDefinitions>
            ((FOnlineAsyncOpCache *)(plVar1 + 8),&local_78,param_1,pTVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FQueryAchievementDefinitions> *)0x0)
  {
    FMemory::Free(local_98.Object);
  }
  iVar8 = *(int *)&this->field_0x30 + -1;
  if (*(int *)&this->field_0x30 == 0) {
    iVar8 = 0;
  }
  ::FString::AssignRange(&(local_78.Object)->InterfaceName,*(wchar_t **)&this->field_0x28,iVar8);
  local_68.bIsSet = false;
  pcVar2 = *(code **)((local_78.Object)->_padding_ + 8);
  pFVar6 = Errors::NotImplemented(&local_38,&local_68);
  (*pcVar2)(local_78.Object,pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Details.SharedReferenceCount.ReferenceController);
  if (local_68.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  pTVar7 = TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>::CreateSharedState
                     (local_78.Object,&local_98);
  (__return_storage_ptr__->State).Object = pTVar7->Object;
  pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// QueryAchievementStates @ 14eef7c50

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FQueryAchievementStates> * __thiscall
UE::Online::FAchievementsCommon::QueryAchievementStates
          (FAchievementsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FQueryAchievementStates> *__return_storage_ptr__,
          Params *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  EOnlineServices EVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FOnlineError *pFVar6;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FQueryAchievementStates>,1>
  *pTVar7;
  int iVar8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FQueryAchievementStates>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar1 = *(longlong **)&this->field_0x10;
  ::FString::FString((FString *)&local_98,L"QueryAchievementStates");
  pTVar5 = TOnlineComponent<UE::Online::IAchievements>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IAchievements> *)this,&local_88,
                      (FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar1[0x5e] != '\0')) {
    EVar4 = (**(code **)(*plVar1 + 0x98))(plVar1);
    Online::LexToString(EVar4);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FQueryAchievementStates>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FQueryAchievementStates>
            ((FOnlineAsyncOpCache *)(plVar1 + 8),&local_78,param_1,pTVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FQueryAchievementStates> *)0x0) {
    FMemory::Free(local_98.Object);
  }
  iVar8 = *(int *)&this->field_0x30 + -1;
  if (*(int *)&this->field_0x30 == 0) {
    iVar8 = 0;
  }
  ::FString::AssignRange(&(local_78.Object)->InterfaceName,*(wchar_t **)&this->field_0x28,iVar8);
  local_68.bIsSet = false;
  pcVar2 = *(code **)((local_78.Object)->_padding_ + 8);
  pFVar6 = Errors::NotImplemented(&local_38,&local_68);
  (*pcVar2)(local_78.Object,pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Details.SharedReferenceCount.ReferenceController);
  if (local_68.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  pTVar7 = TOnlineAsyncOp<UE::Online::FQueryAchievementStates>::CreateSharedState
                     (local_78.Object,&local_98);
  (__return_storage_ptr__->State).Object = pTVar7->Object;
  pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// RegisterCommands @ 14eef9580

void __thiscall UE::Online::FAchievementsCommon::RegisterCommands(FAchievementsCommon *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryAchievementDefinitions>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FQueryAchievementDefinitions::Params_&&)>_*_&>
  local_res8;
  undefined8 *local_res18;
  TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryAchievementDefinitions>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FQueryAchievementDefinitions::Params_&&)>
  ***local_28;
  undefined8 **ppuStack_20;
  
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryAchievementDefinitions>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FQueryAchievementDefinitions::Params_&&)>
              ***)_vcall__0__flat______;
  puVar2 = (undefined8 *)0x0;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAchievementsCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFQueryAchievementDefinitions_Online_UE___23___QEAUParams_FQueryAchievementDefinitions_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryAchievementDefinitions>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FQueryAchievementDefinitions::Params_&&)>
        **)0x15309b588;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryAchievementDefinitions>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FQueryAchievementDefinitions::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->field_0x38,&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryAchievementDefinitions>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FQueryAchievementDefinitions::Params_&&)>
              ***)_vcall__8__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAchievementsCommon_Online_UE__P8123_EAA_AV__TOnlineResult_UFGetAchievementIds_Online_UE___23___QEAUParams_FGetAchievementIds_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryAchievementDefinitions>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FQueryAchievementDefinitions::Params_&&)>
        **)0x15309b5c0;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineResult<UE::Online::FGetAchievementIds>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FGetAchievementIds::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->field_0x38,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineResult<UE::Online::FGetAchievementIds>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FGetAchievementIds::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryAchievementDefinitions>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FQueryAchievementDefinitions::Params_&&)>
              ***)_vcall__16__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAchievementsCommon_Online_UE__P8123_EAA_AV__TOnlineResult_UFGetAchievementDefinition_Online_UE___23___QEAUParams_FGetAchievementDefinition_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryAchievementDefinitions>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FQueryAchievementDefinitions::Params_&&)>
        **)0x15309b5e8;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineResult<UE::Online::FGetAchievementDefinition>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FGetAchievementDefinition::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->field_0x38,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineResult<UE::Online::FGetAchievementDefinition>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FGetAchievementDefinition::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryAchievementDefinitions>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FQueryAchievementDefinitions::Params_&&)>
              ***)_vcall__24__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAchievementsCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFQueryAchievementStates_Online_UE___23___QEAUParams_FQueryAchievementStates_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryAchievementDefinitions>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FQueryAchievementDefinitions::Params_&&)>
        **)0x15309b620;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryAchievementStates>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FQueryAchievementStates::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->field_0x38,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryAchievementStates>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FQueryAchievementStates::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryAchievementDefinitions>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FQueryAchievementDefinitions::Params_&&)>
              ***)_vcall__32__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAchievementsCommon_Online_UE__P8123_EBA_AV__TOnlineResult_UFGetAchievementState_Online_UE___23___QEAUParams_FGetAchievementState_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryAchievementDefinitions>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FQueryAchievementDefinitions::Params_&&)>
        **)0x15309b650;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineResult<UE::Online::FGetAchievementState>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FGetAchievementState::Params_&&)const_>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->field_0x38,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineResult<UE::Online::FGetAchievementState>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FGetAchievementState::Params_&&)const>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryAchievementDefinitions>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FQueryAchievementDefinitions::Params_&&)>
              ***)_vcall__40__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAchievementsCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFUnlockAchievements_Online_UE___23___QEAUParams_FUnlockAchievements_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryAchievementDefinitions>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FQueryAchievementDefinitions::Params_&&)>
        **)0x15309b678;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUnlockAchievements>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FUnlockAchievements::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->field_0x38,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUnlockAchievements>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FUnlockAchievements::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryAchievementDefinitions>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FQueryAchievementDefinitions::Params_&&)>
              ***)_vcall__48__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFAchievementsCommon_Online_UE__P8123_EAA_AV__TOnlineResult_UFDisplayAchievementUI_Online_UE___23___QEAUParams_FDisplayAchievementUI_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    puVar2 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryAchievementDefinitions>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FQueryAchievementDefinitions::Params_&&)>
        **)0x15309b6a0;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  local_res18 = puVar2;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineResult<UE::Online::FDisplayAchievementUI>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FDisplayAchievementUI::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->field_0x38,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FAchievementsCommon,UE::Online::TOnlineResult<UE::Online::FDisplayAchievementUI>_(__cdecl_UE::Online::FAchievementsCommon::*)(UE::Online::FDisplayAchievementUI::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  return;
}

// Shutdown @ 14ef12410

void __thiscall UE::Online::FAchievementsCommon::Shutdown(FAchievementsCommon *this)

{
  FOnlineEventDelegateHandle::Unbind
            ((FOnlineEventDelegateHandle *)
             &(this->OnAchievementStateUpdatedEvent).DelegateRef.SharedReferenceCount);
  return;
}

// UnlockAchievements @ 14ef31790

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FUnlockAchievements> * __thiscall
UE::Online::FAchievementsCommon::UnlockAchievements
          (FAchievementsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FUnlockAchievements> *__return_storage_ptr__,
          Params *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  EOnlineServices EVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FOnlineError *pFVar6;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FUnlockAchievements>,1>
  *pTVar7;
  int iVar8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FUnlockAchievements>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar1 = *(longlong **)&this->field_0x10;
  ::FString::FString((FString *)&local_98,L"UnlockAchievements");
  pTVar5 = TOnlineComponent<UE::Online::IAchievements>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IAchievements> *)this,&local_88,
                      (FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar1[0x5e] != '\0')) {
    EVar4 = (**(code **)(*plVar1 + 0x98))(plVar1);
    Online::LexToString(EVar4);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FUnlockAchievements>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FUnlockAchievements>
            ((FOnlineAsyncOpCache *)(plVar1 + 8),&local_78,param_1,pTVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FUnlockAchievements> *)0x0) {
    FMemory::Free(local_98.Object);
  }
  iVar8 = *(int *)&this->field_0x30 + -1;
  if (*(int *)&this->field_0x30 == 0) {
    iVar8 = 0;
  }
  ::FString::AssignRange(&(local_78.Object)->InterfaceName,*(wchar_t **)&this->field_0x28,iVar8);
  local_68.bIsSet = false;
  pcVar2 = *(code **)((local_78.Object)->_padding_ + 8);
  pFVar6 = Errors::NotImplemented(&local_38,&local_68);
  (*pcVar2)(local_78.Object,pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Details.SharedReferenceCount.ReferenceController);
  if (local_68.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  pTVar7 = TOnlineAsyncOp<UE::Online::FUnlockAchievements>::CreateSharedState
                     (local_78.Object,&local_98);
  (__return_storage_ptr__->State).Object = pTVar7->Object;
  pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// UnlockAchievementsByStats @ 14ef31950

void __thiscall
UE::Online::FAchievementsCommon::UnlockAchievementsByStats
          (FAchievementsCommon *this,Params *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint *puVar6;
  FAchievementUnlockCondition *pFVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  int iVar17;
  FString *pFVar18;
  FString *pFVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  uint uVar24;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  TBitArray<FDefaultBitArrayAllocator> *pTVar27;
  FScriptContainerElement *pFVar28;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1b8;
  undefined1 local_1b7 [3];
  uint local_1b4;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1b0;
  TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSizedDefaultAllocator<32>_>
  local_1a0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_190;
  FDelegateAllocation local_188;
  uint local_178;
  FScriptContainerElement *local_170;
  FScriptContainerElement *local_168;
  uint local_160;
  FScriptContainerElement *local_158;
  int local_150;
  int local_14c;
  FScriptContainerElement *local_148;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  FScriptContainerElement *local_130;
  TBitArray<FDefaultBitArrayAllocator> *local_128;
  FScriptContainerElement *local_120;
  IStats *local_118;
  FScriptContainerElement *local_110;
  uint uStack_108;
  uint uStack_104;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint local_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  FScriptContainerElement *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDelegateAllocation *local_80;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  undefined4 local_4c;
  uint *puVar25;
  
  if (((this->Config).bIsTitleManaged != false) &&
     (local_118 = FOnlineServicesCommon::Get<UE::Online::IStats>
                            (*(FOnlineServicesCommon **)&this->field_0x10),
     local_118 != (IStats *)0x0)) {
    local_178 = (param_1->UpdateUsersStats).ArrayNum;
    uVar12 = (ulonglong)(int)local_178;
    pFVar22 = (param_1->UpdateUsersStats).AllocatorInstance.Data;
    pFVar28 = pFVar22 + 0x28;
    pFVar20 = pFVar22 + uVar12 * 0x58;
    local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.ArrayNum = 0;
    local_1b0.ArrayMax = 0;
    local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.ArrayNum = 0;
    local_1a0.ArrayMax = 0;
    local_120 = pFVar20;
    while( true ) {
      puVar25 = (uint *)0x0;
      local_170 = pFVar22;
      local_168 = pFVar28;
      if ((param_1->UpdateUsersStats).ArrayNum != (int)uVar12) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UE::Online::FUserStats_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      uVar24 = 0;
      if (pFVar22 == pFVar20) break;
      uVar21 = *(uint *)&pFVar22->field_0x0;
      uVar23 = uVar21 & 0xffffff;
      uVar14 = (uVar21 >> 0x18) - uVar23 ^ uVar23 >> 0xd;
      uVar11 = (-0x61c88647 - uVar14) - uVar23 ^ uVar14 << 8;
      uVar23 = (uVar23 - uVar11) - uVar14 ^ uVar11 >> 0xd;
      uVar14 = (uVar14 - uVar23) - uVar11 ^ uVar23 >> 0xc;
      uVar11 = (uVar11 - uVar14) - uVar23 ^ uVar14 << 0x10;
      uVar23 = (uVar23 - uVar11) - uVar14 ^ uVar11 >> 5;
      uVar14 = (uVar14 - uVar23) - uVar11 ^ uVar23 >> 3;
      uVar11 = (uVar11 - uVar14) - uVar23 ^ uVar14 << 10;
      puVar16 = puVar25;
      if (*(int *)&(this->AchievementStates).field_0x8 !=
          *(int *)&(this->AchievementStates).field_0x34) {
        puVar2 = *(undefined1 **)&(this->AchievementStates).field_0x40;
        puVar15 = &(this->AchievementStates).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar15 = puVar2;
        }
        uVar11 = *(uint *)(puVar15 +
                          (ulonglong)
                          (*(int *)&(this->AchievementStates).field_0x48 - 1U &
                          ((uVar23 - uVar11) - uVar14 ^ uVar11 >> 0xf)) * 4);
        if (uVar11 != 0xffffffff) {
          do {
            puVar16 = (uint *)((longlong)(int)uVar11 * 0x60 + *(longlong *)&this->AchievementStates)
            ;
            if (*puVar16 == uVar21) break;
            uVar11 = puVar16[0x16];
            puVar16 = puVar25;
          } while (uVar11 != 0xffffffff);
        }
      }
      puVar6 = puVar16 + 2;
      if (puVar16 == (uint *)0x0) {
        puVar6 = puVar25;
      }
      if (puVar6 != (uint *)0x0) {
        uStack_104 = 1;
        uVar21 = (uint)*(longlong *)&pFVar28[8].field_0x0;
        uStack_f4 = uVar24;
        local_f0 = uVar24;
        if (uVar21 != 0) {
          pFVar22 = *(FScriptContainerElement **)pFVar28;
          if (*(FScriptContainerElement **)pFVar28 == (FScriptContainerElement *)0x0) {
            pFVar22 = pFVar28 + -0x10;
          }
          uVar11 = (uint)*(longlong *)&pFVar22->field_0x0;
          puVar16 = puVar25;
          while( true ) {
            uVar24 = (uint)puVar25;
            local_f0 = (uint)puVar16;
            if (uVar11 != 0) break;
            lVar13 = (longlong)(int)uVar24;
            local_f0 = local_f0 + 0x20;
            puVar16 = (uint *)(ulonglong)local_f0;
            uVar24 = uVar24 + 1;
            puVar25 = (uint *)(ulonglong)uVar24;
            uStack_f4 = uVar21;
            if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar24)
            goto LAB_14ef31b9f;
            uVar11 = *(uint *)&pFVar22[(lVar13 + 1) * 4].field_0x0;
          }
          uStack_104 = -uVar11 & uVar11;
          uVar12 = (ulonglong)uStack_104 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_138 = (int)lVar13;
          uStack_f4 = (local_f0 - 1) + local_138;
          if ((int)uVar21 < (int)uStack_f4) {
            uStack_f4 = uVar21;
          }
        }
LAB_14ef31b9f:
        local_130 = pFVar28 + -0x20;
        pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar28 + -0x10);
        uStack_ec = local_4c;
        iStack_e8 = (int)*(longlong *)&pFVar28[-0x18].field_0x0 - *(int *)&pFVar28[0x14].field_0x0;
        uVar11 = uVar21 & 0xffffffe0;
        TStack_d8._padding_ = CONCAT44(uStack_104,uVar24);
        uStack_f8 = 0xffffffff;
        TStack_d8.CurrentBitIndex = uStack_f4;
        TStack_d8.UnvisitedBitMask = 0xffffffff;
        iVar17 = (int)uVar21 >> 5;
        TStack_d8._28_4_ = local_4c;
        TStack_d8.BaseBitIndex = local_f0;
        uStack_b8 = CONCAT44(uStack_e4,iStack_e8);
        local_1b4 = uVar21;
        local_128 = pTVar27;
        local_110 = local_130;
        uStack_108 = uVar24;
        local_100 = pTVar27;
        local_e0 = local_130;
        TStack_d8.Array = pTVar27;
        if (((int)uVar21 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar24 = (uint)*(longlong *)&pFVar28[8].field_0x0;
        if (uVar21 != uVar24) {
          pTVar26 = *(TBitArray<FDefaultBitArrayAllocator> **)pFVar28;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)pFVar28 ==
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar26 = pTVar27;
          }
          uVar21 = -1 << ((byte)uVar21 & 0x1f) &
                   *(uint *)((pTVar26->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
          while (uVar21 == 0) {
            lVar13 = (longlong)iVar17;
            uVar11 = uVar11 + 0x20;
            iVar17 = iVar17 + 1;
            uVar21 = uVar24;
            local_1b4 = uVar24;
            if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_14ef31cc0;
            uVar21 = *(uint *)((pTVar26->AllocatorInstance).InlineData + lVar13 * 4 + 4);
          }
          uVar12 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_134 = (int)lVar13;
          uVar21 = local_134 + -1 + uVar11;
          local_1b4 = uVar21;
          if ((int)uVar24 < (int)uVar21) {
            uVar21 = uVar24;
            local_1b4 = uVar24;
          }
        }
LAB_14ef31cc0:
        while( true ) {
          pFVar28 = local_e0;
          if ((int)*(longlong *)&local_e0[8].field_0x0 - *(int *)&local_e0[0x34].field_0x0 !=
              (int)uStack_b8) {
            local_res20[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          pFVar22 = local_170;
          lVar13 = (longlong)TStack_d8.CurrentBitIndex;
          if (((TStack_d8.CurrentBitIndex == uVar21) && (TStack_d8.Array == pTVar27)) &&
             (pFVar28 == local_130)) break;
          iVar17 = (this->Config).UnlockRules.ArrayNum;
          pFVar22 = (this->Config).UnlockRules.AllocatorInstance.Data;
          lVar3 = *(longlong *)pFVar28;
          pFVar28 = pFVar22 + (longlong)iVar17 * 0x20;
          while( true ) {
            if ((this->Config).UnlockRules.ArrayNum != iVar17) {
              local_1b8 = 0;
              `TCheckedPointerIterator<UE::Online::FAchievementUnlockRule,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(&local_1b8);
            }
            if (pFVar22 == pFVar28) break;
            pFVar7 = TArray<UE::Online::FAchievementUnlockCondition,TSizedDefaultAllocator<32>_>::
                     FindByPredicate<_UE::Online::FAchievementUnlockRule::ContainsStat_::__l2::<lambda_1>_>
                               ((TArray<UE::Online::FAchievementUnlockCondition,TSizedDefaultAllocator<32>_>
                                 *)(pFVar22 + 0x10),(FString *)(lVar13 * 0x38 + lVar3));
            if (pFVar7 != (FAchievementUnlockCondition *)0x0) {
              iVar1 = *(int *)(pFVar22 + 0x18);
              pFVar18 = *(FString **)(pFVar22 + 0x10);
              pFVar19 = pFVar18 + (longlong)iVar1 * 3;
              while( true ) {
                if (*(int *)(pFVar22 + 0x18) != iVar1) {
                  local_1b7[0] = 0;
                  `TCheckedPointerIterator<UE::Online::FAchievementUnlockCondition_const_,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(local_1b7);
                }
                if (pFVar18 == pFVar19) break;
                TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                          (&local_1b0,pFVar18);
                pFVar18 = pFVar18 + 3;
              }
            }
            pFVar22 = pFVar22 + 0x20;
          }
          TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
          pTVar27 = local_128;
          uVar21 = local_1b4;
        }
        TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSizedDefaultAllocator<32>_>
        ::AddUniqueImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&>
                  (&local_1a0,(TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)local_170);
        pFVar20 = local_120;
        pFVar28 = local_168;
      }
      uVar12 = (ulonglong)local_178;
      pFVar22 = pFVar22 + 0x58;
      pFVar28 = pFVar28 + 0x58;
    }
    if ((local_1b0.ArrayNum != 0) && (local_1a0.ArrayNum != 0)) {
      local_160 = (param_1->LocalAccountId).Value;
      local_158 = local_1a0.AllocatorInstance.Data;
      local_150 = local_1a0.ArrayNum;
      local_14c = local_1a0.ArrayMax;
      local_1a0.ArrayNum = 0;
      local_1a0.ArrayMax = 0;
      local_148 = (void *)0x0;
      local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      DestructItems<FString,int>((FString *)0x0,0);
      if (local_148 != (void *)0x0) {
        FMemory::Free(local_148);
      }
      local_148 = local_1b0.AllocatorInstance.Data;
      local_140 = local_1b0.ArrayNum;
      local_13c = local_1b0.ArrayMax;
      local_1b0.ArrayNum = 0;
      local_1b0.ArrayMax = 0;
      local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      plVar8 = (longlong *)(**(code **)((longlong)*local_118 + 0x10))(local_118,local_78);
      if ((*plVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar8 = (longlong *)*plVar8;
      local_190.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_188.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_188.DelegateSize = 0;
      pcVar4 = *(code **)(*plVar8 + 0x28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_190,(FWriteAccessScope *)&local_98);
      local_80 = &local_188;
      puVar9 = Core::Private::DelegateAllocate(0x20,&local_188);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBV__TOnlineResult_UFBatchQueryStats_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FBatchQueryStats>_const_&),FDefaultDelegateUserPolicy,`UE::Online::FAchievementsCommon::UnlockAchievementsByStats'::`2'::<lambda_1>_>
                   ::_vftable_;
        puVar9[3] = this;
      }
      if (local_98.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
      }
      (*pcVar4)(plVar8,&local_190);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_190,(FWriteAccessScope *)&local_b0);
      if ((local_188.DelegateSize != 0) &&
         (local_188.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_188.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_188,0,0,0x10);
        local_188.DelegateSize = 0;
      }
      if (local_b0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
      }
      if (local_188.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_188.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_190.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
      DestructItems<FString,int>((FString *)local_148,local_140);
      if (local_148 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148);
      }
      if (local_158 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158);
      }
    }
    if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_1b0.AllocatorInstance.Data,local_1b0.ArrayNum);
    if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateConfig @ 14ef320f0

void __thiscall UE::Online::FAchievementsCommon::UpdateConfig(FAchievementsCommon *this)

{
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FOnlineServicesCommon::LoadConfig<UE::Online::FAchievementsCommonConfig>
            (*(FOnlineServicesCommon **)&this->field_0x8,
             (FAchievementsCommonConfig *)&(this->StatEventHandle).DelegateUnbinder.field_0x28,
             (FString *)&this->field_0x20,&local_18);
  return;
}

