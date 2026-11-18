// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 9

// FTestStatsInterface @ 14ecd88e0

FTestStatsInterface * __thiscall
FTestStatsInterface::FTestStatsInterface(FTestStatsInterface *this,FString *param_1)

{
  FTSTicker *pFVar1;
  
  pFVar1 = FTSTicker::GetCoreTicker();
  FTSTickerObjectBase::FTSTickerObjectBase((FTSTickerObjectBase *)this,0.0,pFVar1);
  this->_padding_ = (longlong)&___7FTestStatsInterface__6B_;
  ::FString::FString(&this->Subsystem,param_1);
  (this->StatsToRead).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatsToRead).ArrayNum = 0;
  (this->StatsToRead).ArrayMax = 0;
  (this->UserId).Object = (FUniqueNetId *)0x0;
  (this->UserId).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Stats).Object = (IOnlineStats *)0x0;
  (this->Stats).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bOverallSuccess = true;
  this->CurrentTestPhase = ReadStatsForOneUser;
  this->LastTestPhase = Invalid;
  return this;
}

// ~FTestStatsInterface @ 14ecdb6b0

void __thiscall FTestStatsInterface::~FTestStatsInterface(FTestStatsInterface *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_padding_ = (longlong)&___7FTestStatsInterface__6B_;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Stats != (TSharedPtr<IOnlineStats,1> *)&local_18) {
    (this->Stats).Object = (IOnlineStats *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Stats).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Stats).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UserId).SharedReferenceCount.ReferenceController);
  DestructItems<FString,int>
            ((FString *)(this->StatsToRead).AllocatorInstance.Data,(this->StatsToRead).ArrayNum);
  pFVar1 = (this->StatsToRead).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Subsystem).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)this);
  return;
}

// operator() @ 14ecdc350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FTestStatsInterface::WriteStats'::__l2::<lambda_1>::operator()(void *this,FOnlineError *param_1)

{
  int iVar1;
  FString local_18;
  
  if (4 < (byte)LogOnlineStats._0_1_) {
    ::FString::PrintfImpl(&local_18,L"[FTestStatsInterface::WriteStats] Write test finished");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  iVar1 = *(int *)(*(longlong *)this + 0x68) + 1;
  if (9 < iVar1) {
    iVar1 = 9;
  }
  *(int *)(*(longlong *)this + 0x68) = iVar1;
  if (param_1->bSucceeded == false) {
    if (1 < (byte)LogOnlineStats._0_1_) {
      FText::ToString(&param_1->ErrorMessage);
      ::FString::PrintfImpl
                (&local_18,
                 L"[FTestStatsInterface::WriteStats] WriteStats test failed with error: %s");
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    *(undefined1 *)(*(longlong *)this + 0x30) = 0;
  }
  return;
}

// OnQueryUserStatsComplete @ 14ecf0b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestStatsInterface::OnQueryUserStatsComplete
          (FTestStatsInterface *this,FOnlineError *param_1,
          TSharedPtr<FOnlineUserStatsPair<FVariantData>_const_,1> *param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  ulonglong uVar4;
  uint uVar5;
  FOnlineUserStatsPair<FVariantData> *pFVar6;
  IOnlineStats *pIVar7;
  code *pcVar8;
  TMap<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
  *pTVar9;
  TMap<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
  *pTVar10;
  longlong *plVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  EStatsTestPhase EVar15;
  TSharedRef<FUniqueNetId_const_,1> *pTVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  int iVar23;
  uint *puVar24;
  int iVar25;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_18c;
  uint local_180;
  longlong local_178;
  TReferenceControllerBase<1> *local_170;
  int local_168;
  int local_164;
  int local_160;
  TMap<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
  *local_158;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  TMap<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  FString local_b0;
  FString local_a0;
  TSharedRef<FUniqueNetId_const_,1> local_90 [2];
  undefined4 local_64;
  undefined4 local_44;
  
  if (4 < (byte)LogOnlineStats._0_1_) {
    if ((param_2->Object == (FOnlineUserStatsPair<FVariantData> *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    ::FString::PrintfImpl
              (&local_150,
               L"[FTestStatsInterface::OnQueryUserStatsComplete] Read test finish with %d queried stats"
              );
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
  }
  if (param_1->bSucceeded == false) {
    if (2 < (byte)LogOnlineStats._0_1_) {
      FText::ToString(&param_1->ErrorMessage);
      ::FString::PrintfImpl
                (&local_140,
                 L"[FTestStatsInterface::OnQueryUserStatsComplete] ReadStats first attempt failed with error: %s"
                );
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
    }
    if (param_1->Result != NotImplemented) {
      this->bOverallSuccess = false;
    }
  }
  else {
    if ((param_2->Object == (FOnlineUserStatsPair<FVariantData> *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar6 = param_2->Object;
    iVar25 = *(int *)&(pFVar6->Stats).field_0x28;
    puVar1 = &(pFVar6->Stats).field_0x10;
    local_180 = 1;
    iVar20 = 0;
    local_158 = &pFVar6->Stats;
    iVar23 = 0;
    uVar13 = 1;
    iVar14 = 0;
    if (iVar25 != 0) {
      puVar24 = *(uint **)&(pFVar6->Stats).field_0x20;
      if (puVar24 == (uint *)0x0) {
        puVar24 = (uint *)puVar1;
      }
      uVar13 = *puVar24;
      iVar23 = 0;
      while (uVar13 == 0) {
        lVar17 = (longlong)iVar20;
        iVar23 = iVar23 + 0x20;
        iVar20 = iVar20 + 1;
        uVar13 = 1;
        iVar14 = iVar25;
        if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14ecf0d10;
        uVar13 = puVar24[lVar17 + 1];
      }
      uVar13 = -uVar13 & uVar13;
      uVar4 = (ulonglong)uVar13 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_168 = (int)lVar17;
      iVar14 = iVar23 + -1 + local_168;
      if (iVar25 < iVar14) {
        iVar14 = iVar25;
      }
    }
LAB_14ecf0d10:
    uVar19 = *(uint *)&(pFVar6->Stats).field_0x28;
    TStack_108._padding_ = CONCAT44(uVar13,iVar20);
    uVar13 = uVar19 & 0xffffffe0;
    TStack_108.CurrentBitIndex = iVar14;
    TStack_108.UnvisitedBitMask = 0xffffffff;
    iVar20 = (int)uVar19 >> 5;
    TStack_108._28_4_ = local_64;
    TStack_108.BaseBitIndex = iVar23;
    uStack_e8 = CONCAT44(uStack_18c,
                         *(int *)&(pFVar6->Stats).field_0x8 - *(int *)&(pFVar6->Stats).field_0x34);
    local_110 = local_158;
    TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar19 < 0) || (iVar25 < (int)uVar19)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar9 = local_158;
    uVar5 = *(uint *)&(pFVar6->Stats).field_0x28;
    if (uVar19 != uVar5) {
      puVar21 = *(undefined1 **)&(pFVar6->Stats).field_0x20;
      if (puVar21 == (undefined1 *)0x0) {
        puVar21 = puVar1;
      }
      uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar20 * 4);
      while (uVar19 == 0) {
        lVar17 = (longlong)iVar20;
        uVar13 = uVar13 + 0x20;
        iVar20 = iVar20 + 1;
        uVar19 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_14ecf0e30;
        uVar19 = *(uint *)(puVar21 + lVar17 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_164 = (int)lVar17;
      uVar19 = local_164 + -1 + uVar13;
      if ((int)uVar5 < (int)uVar19) {
        uVar19 = uVar5;
      }
    }
LAB_14ecf0e30:
    while( true ) {
      pTVar10 = local_110;
      if (*(int *)&local_110->field_0x8 - *(int *)&local_110->field_0x34 != (int)uStack_e8) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_108.CurrentBitIndex == uVar19) &&
          (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar10 == pTVar9)) break;
      if (4 < (byte)LogOnlineStats._0_1_) {
        FVariantData::ToString
                  ((FVariantData *)
                   ((longlong)TStack_108.CurrentBitIndex * 0x38 + *(longlong *)pTVar10 + 0x10),
                   &local_b0);
        ::FString::PrintfImpl
                  (&local_130,
                   L"[FTestStatsInterface::OnQueryUserStatsComplete] Queried stat with name %s has value %s"
                  );
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
      TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
    }
    iVar25 = 0;
    if (((this->Stats).Object == (IOnlineStats *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pIVar7 = (this->Stats).Object;
    pcVar8 = *(code **)((longlong)*pIVar7 + 0x18);
    pTVar16 = TSharedPtr<FUniqueNetId_const_,1>::ToSharedRef(&this->UserId,local_90);
    (*pcVar8)(pIVar7,&local_178,pTVar16);
    if (local_178 != 0) {
      lVar17 = local_178;
      if ((local_178 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), lVar17 = local_178, bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar2 = (longlong *)(lVar17 + 0x10);
      iVar20 = *(int *)(lVar17 + 0x38);
      pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar17 + 0x20);
      iVar23 = 0;
      iVar14 = 0;
      if (iVar20 != 0) {
        pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar17 + 0x30);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar17 + 0x30) ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar22 = pTVar3;
        }
        uVar13 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
        while (uVar13 == 0) {
          lVar18 = (longlong)iVar25;
          iVar23 = iVar23 + 0x20;
          iVar25 = iVar25 + 1;
          iVar14 = iVar20;
          if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_14ecf1023;
          uVar13 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar18 * 4 + 4);
        }
        local_180 = -uVar13 & uVar13;
        uVar4 = (ulonglong)local_180 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_160 = (int)lVar18;
        iVar14 = iVar23 + -1 + local_160;
        if (iVar20 < iVar14) {
          iVar14 = iVar20;
        }
      }
LAB_14ecf1023:
      uVar13 = *(uint *)(lVar17 + 0x38);
      TStack_d8._padding_ = CONCAT44(local_180,iVar25);
      uVar19 = uVar13 & 0xffffffe0;
      TStack_d8.CurrentBitIndex = iVar14;
      TStack_d8.UnvisitedBitMask = 0xffffffff;
      iVar25 = (int)uVar13 >> 5;
      TStack_d8._28_4_ = local_44;
      TStack_d8.BaseBitIndex = iVar23;
      uStack_b8 = CONCAT44(uStack_18c,*(int *)(lVar17 + 0x18) - *(int *)(lVar17 + 0x44));
      local_e0 = plVar2;
      TStack_d8.Array = pTVar3;
      if ((((int)uVar13 < 0) || (iVar20 < (int)uVar13)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar5 = *(uint *)(lVar17 + 0x38);
      if (uVar13 != uVar5) {
        pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar17 + 0x30);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar17 + 0x30) ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar22 = pTVar3;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) &
                 *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar25 * 4);
        while (uVar13 == 0) {
          lVar17 = (longlong)iVar25;
          uVar19 = uVar19 + 0x20;
          iVar25 = iVar25 + 1;
          uVar13 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
          goto LAB_14ecf1130;
          uVar13 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar17 * 4 + 4);
        }
        uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar17 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar13 = (int)lVar17 + -1 + uVar19;
        if ((int)uVar5 < (int)uVar13) {
          uVar13 = uVar5;
        }
      }
LAB_14ecf1130:
      while( true ) {
        plVar11 = local_e0;
        if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
          `TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_d8.CurrentBitIndex == uVar13) && (TStack_d8.Array == pTVar3)) &&
           (plVar11 == plVar2)) break;
        if (4 < (byte)LogOnlineStats._0_1_) {
          FVariantData::ToString
                    ((FVariantData *)((longlong)TStack_d8.CurrentBitIndex * 0x38 + *plVar11 + 0x10),
                     &local_a0);
          ::FString::PrintfImpl
                    (&local_120,
                     L"[FTestStatsInterface::OnQueryUserStatsComplete] Cached stat with name %s has value %s"
                    );
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
        }
        TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_170);
  }
  EVar15 = this->CurrentTestPhase + ReadStatsForOneUser;
  if (9 < (int)EVar15) {
    EVar15 = End;
  }
  this->CurrentTestPhase = EVar15;
  return;
}

// OnQueryUsersStatsComplete @ 14ecf1260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestStatsInterface::OnQueryUsersStatsComplete
          (FTestStatsInterface *this,FOnlineError *param_1,
          TArray<TSharedRef<FOnlineUserStatsPair<FVariantData>_const_,1>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  IOnlineStats *pIVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  bool bVar9;
  EStatsTestPhase EVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  uint uVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  undefined1 local_res10 [8];
  TArray<TSharedRef<FOnlineUserStatsPair<FVariantData>_const_,1>,TSizedDefaultAllocator<32>_>
  *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_1c8 [4];
  uint local_1c4;
  longlong *local_1c0;
  int iStack_1b8;
  uint uStack_1b4;
  TBitArray<FDefaultBitArrayAllocator> *local_1b0;
  undefined4 uStack_1a8;
  int iStack_1a4;
  int local_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  FScriptContainerElement *local_190;
  longlong local_188;
  TReferenceControllerBase<1> *local_180;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  FScriptContainerElement *local_168;
  FString local_160;
  FString local_150;
  FString local_140;
  FUniqueNetId *local_130;
  TReferenceControllerBase<1> *local_128;
  FString local_120;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  FString local_b0;
  FString local_a0 [2];
  undefined4 local_74;
  undefined4 local_54;
  
  local_res18 = param_2;
  if (4 < (byte)LogOnlineStats._0_1_) {
    ::FString::PrintfImpl
              (&local_160,
               L"[FTestStatsInterface::OnQueryUsersStatsComplete] Read test finish for %d users with queried stats"
              );
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
  }
  if (param_1->bSucceeded == false) {
    if (2 < (byte)LogOnlineStats._0_1_) {
      FText::ToString(&param_1->ErrorMessage);
      ::FString::PrintfImpl
                (&local_150,
                 L"[FTestStatsInterface::OnQueryUsersStatsComplete] ReadStats first attempt failed with error: %s"
                );
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
    }
    if (param_1->Result != NotImplemented) {
      this->bOverallSuccess = false;
    }
  }
  else {
    local_1c4 = local_res18->ArrayNum;
    uVar11 = (ulonglong)(int)local_1c4;
    pFVar15 = (local_res18->AllocatorInstance).Data;
    local_168 = pFVar15 + uVar11 * 0x10;
    while( true ) {
      pFVar7 = local_168;
      local_190 = pFVar15;
      if (local_res18->ArrayNum != (int)uVar11) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedRef<FOnlineUserStatsPair<FVariantData>_const_,1>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar15 == pFVar7) break;
      lVar13 = *(longlong *)pFVar15;
      iStack_1b8 = 0;
      iVar3 = *(int *)(lVar13 + 0x38);
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar13 + 0x20);
      local_1a0 = 0;
      uStack_1b4 = 1;
      plVar2 = (longlong *)(lVar13 + 0x10);
      iStack_1a4 = 0;
      if (iVar3 != 0) {
        pTVar18 = pTVar1;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x30) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x30);
        }
        uVar17 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
        while (uVar17 == 0) {
          lVar12 = (longlong)iStack_1b8;
          local_1a0 = local_1a0 + 0x20;
          iStack_1b8 = iStack_1b8 + 1;
          iStack_1a4 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1b8)
          goto LAB_14ecf144f;
          uVar17 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar12 * 4 + 4);
        }
        uStack_1b4 = -uVar17 & uVar17;
        uVar11 = (ulonglong)uStack_1b4 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_178 = (int)lVar12;
        iStack_1a4 = local_1a0 + -1 + local_178;
        if (iVar3 < iStack_1a4) {
          iStack_1a4 = iVar3;
        }
      }
LAB_14ecf144f:
      uVar17 = *(uint *)(lVar13 + 0x38);
      uStack_19c = local_74;
      iStack_198 = *(int *)(lVar13 + 0x18) - *(int *)(lVar13 + 0x44);
      uVar16 = uVar17 & 0xffffffe0;
      TStack_108._padding_ = CONCAT44(uStack_1b4,iStack_1b8);
      uStack_1a8 = 0xffffffff;
      TStack_108.CurrentBitIndex = iStack_1a4;
      TStack_108.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar17 >> 5;
      TStack_108._28_4_ = local_74;
      TStack_108.BaseBitIndex = local_1a0;
      uStack_e8 = CONCAT44(uStack_194,iStack_198);
      local_1c0 = plVar2;
      local_1b0 = pTVar1;
      local_110 = plVar2;
      TStack_108.Array = pTVar1;
      if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar4 = *(uint *)(lVar13 + 0x38);
      if (uVar17 != uVar4) {
        pTVar18 = pTVar1;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x30) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x30);
        }
        uVar17 = -1 << ((byte)uVar17 & 0x1f) &
                 *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
        while (uVar17 == 0) {
          lVar13 = (longlong)iVar14;
          uVar16 = uVar16 + 0x20;
          iVar14 = iVar14 + 1;
          uVar17 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14ecf1560;
          uVar17 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uVar11 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_174 = (int)lVar13;
        uVar17 = local_174 + -1 + uVar16;
        if ((int)uVar4 < (int)uVar17) {
          uVar17 = uVar4;
        }
      }
LAB_14ecf1560:
      while( true ) {
        plVar8 = local_110;
        if ((int)local_110[1] - *(int *)((longlong)local_110 + 0x34) != (int)uStack_e8) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_108.CurrentBitIndex == uVar17) && (TStack_108.Array == pTVar1)) &&
           (plVar8 == plVar2)) break;
        if (4 < (byte)LogOnlineStats._0_1_) {
          FVariantData::ToString
                    ((FVariantData *)((longlong)TStack_108.CurrentBitIndex * 0x38 + *plVar8 + 0x10),
                     &local_b0);
          ::FString::PrintfImpl
                    (&local_140,
                     L"[FTestStatsInterface::OnQueryUsersStatsComplete] Queried stat with name %s has value %s"
                    );
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
        }
        TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
      }
      if (((this->Stats).Object == (IOnlineStats *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pIVar5 = (this->Stats).Object;
      pcVar6 = *(code **)((longlong)*pIVar5 + 0x18);
      if (((this->UserId).Object == (FUniqueNetId *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_128 = (this->UserId).SharedReferenceCount.ReferenceController;
      local_130 = (this->UserId).Object;
      if (local_128 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_128->SharedReferenceCount = (atomic<int>)((int)local_128->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_130 == (FUniqueNetId *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (*pcVar6)(pIVar5,&local_188);
      if (local_188 != 0) {
        if ((local_188 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar13 = local_188;
        plVar2 = (longlong *)(local_188 + 0x10);
        iStack_1b8 = 0;
        iVar3 = *(int *)(local_188 + 0x38);
        pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x20);
        local_1a0 = 0;
        uStack_1b4 = 1;
        iStack_1a4 = 0;
        if (iVar3 != 0) {
          pTVar18 = pTVar1;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(local_188 + 0x30) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(local_188 + 0x30);
          }
          uVar17 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
          while (uVar17 == 0) {
            lVar12 = (longlong)iStack_1b8;
            local_1a0 = local_1a0 + 0x20;
            iStack_1b8 = iStack_1b8 + 1;
            iStack_1a4 = iVar3;
            if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1b8)
            goto LAB_14ecf17be;
            uVar17 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar12 * 4 + 4);
          }
          uStack_1b4 = -uVar17 & uVar17;
          uVar11 = (ulonglong)uStack_1b4 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_170 = (int)lVar12;
          iStack_1a4 = local_1a0 + -1 + local_170;
          if (iVar3 < iStack_1a4) {
            iStack_1a4 = iVar3;
          }
        }
LAB_14ecf17be:
        uVar17 = *(uint *)(local_188 + 0x38);
        uStack_19c = local_54;
        uVar16 = uVar17 & 0xffffffe0;
        iStack_198 = *(int *)(local_188 + 0x18) - *(int *)(local_188 + 0x44);
        TStack_d8._padding_ = CONCAT44(uStack_1b4,iStack_1b8);
        uStack_1a8 = 0xffffffff;
        TStack_d8.CurrentBitIndex = iStack_1a4;
        TStack_d8.UnvisitedBitMask = 0xffffffff;
        iVar14 = (int)uVar17 >> 5;
        TStack_d8._28_4_ = local_54;
        TStack_d8.BaseBitIndex = local_1a0;
        uStack_b8 = CONCAT44(uStack_194,iStack_198);
        local_1c0 = plVar2;
        local_1b0 = pTVar1;
        local_e0 = plVar2;
        TStack_d8.Array = pTVar1;
        if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar4 = *(uint *)(lVar13 + 0x38);
        if (uVar17 != uVar4) {
          pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x30);
          pTVar19 = pTVar1;
          if (pTVar18 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar19 = pTVar18;
          }
          uVar17 = -1 << ((byte)uVar17 & 0x1f) &
                   *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
          while (uVar17 == 0) {
            lVar13 = (longlong)iVar14;
            uVar16 = uVar16 + 0x20;
            iVar14 = iVar14 + 1;
            uVar17 = uVar4;
            if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
            goto LAB_14ecf18d0;
            uVar17 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar13 * 4 + 4);
          }
          uVar11 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_16c = (int)lVar13;
          uVar17 = local_16c + -1 + uVar16;
          if ((int)uVar4 < (int)uVar17) {
            uVar17 = uVar4;
          }
        }
LAB_14ecf18d0:
        while( true ) {
          plVar8 = local_e0;
          if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
            local_1c8[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1c8);
          }
          if (((TStack_d8.CurrentBitIndex == uVar17) && (TStack_d8.Array == pTVar1)) &&
             (plVar8 == plVar2)) break;
          if (4 < (byte)LogOnlineStats._0_1_) {
            FVariantData::ToString
                      ((FVariantData *)((longlong)TStack_d8.CurrentBitIndex * 0x38 + *plVar8 + 0x10)
                       ,local_a0);
            ::FString::PrintfImpl
                      (&local_120,
                       L"[FTestStatsInterface::OnQueryUsersStatsComplete] Cached stat with name %s has value %s"
                      );
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
            if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_120.Data.AllocatorInstance.Data);
            }
            if (local_a0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0[0].Data.AllocatorInstance.Data);
            }
          }
          TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_180)
      ;
      pFVar15 = local_190 + 0x10;
      uVar11 = (ulonglong)local_1c4;
    }
  }
  EVar10 = this->CurrentTestPhase + ReadStatsForOneUser;
  if (9 < (int)EVar10) {
    EVar10 = End;
  }
  this->CurrentTestPhase = EVar10;
  return;
}

// ReadStats @ 14ecf72d0

void __thiscall FTestStatsInterface::ReadStats(FTestStatsInterface *this,bool param_1)

{
  IOnlineStats *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TSharedRef<FUniqueNetId_const_,1> *pTVar6;
  TSharedRef<FUniqueNetId_const_,1> *pTVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  FDelegateAllocation local_100;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  FDelegateAllocation local_e8;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  TSharedRef<FUniqueNetId_const_,1> local_c8;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  TSharedRef<FUniqueNetId_const_,1> local_48;
  TSharedRef<FUniqueNetId_const_,1> local_38;
  TSharedRef<FUniqueNetId_const_,1> local_28;
  
  pIVar1 = (this->Stats).Object;
  if (param_1) {
    if (pIVar1 == (IOnlineStats *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pIVar1 = (this->Stats).Object;
    local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_100.DelegateSize = 0;
    pcVar2 = *(code **)((longlong)*pIVar1 + 8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_108,(FWriteAccessScope *)&local_88);
    local_70 = &local_100;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_100);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError__AEBV__TArray_V__TSharedRef___CBU__FOnlineUserStatsPair_VFVariantData_____00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFTestStatsInterface____A6AXAEBUFOnlineError__AEBV__TArray_V__TSharedRef___CBU__FOnlineUserStatsPair_VFVariantData_____00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar4[4] = OnQueryUsersStatsComplete;
      puVar4[3] = this;
      if (this == (FTestStatsInterface *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    if ((this->UserId).Object == (FUniqueNetId *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_c8.SharedReferenceCount.ReferenceController =
         (this->UserId).SharedReferenceCount.ReferenceController;
    local_c8.Object = (this->UserId).Object;
    if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_c8.Object == (FUniqueNetId *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,1,0,&local_d8,1,&local_cc);
    ConstructItems<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUniqueNetId_const_,1>,int>
              (local_d8.Data,&local_c8,1);
    pTVar6 = TSharedPtr<FUniqueNetId_const_,1>::ToSharedRef(&this->UserId,&local_48);
    (*pcVar2)(pIVar1,pTVar6,&local_d8,&this->StatsToRead,&local_108);
    DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
              ((TSharedRef<FUniqueNetId_const_,1> *)local_d8.Data,local_d0);
    if ((TSharedRef<FUniqueNetId_const_,1> *)local_d8.Data !=
        (TSharedRef<FUniqueNetId_const_,1> *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_108,(FWriteAccessScope *)&local_b8);
    if ((local_100.DelegateSize != 0) &&
       (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_100.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_100,0,0,0x10);
      local_100.DelegateSize = 0;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    if (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_100.DelegateAllocator);
    }
    this_00 = &local_108;
  }
  else {
    if (pIVar1 == (IOnlineStats *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pIVar1 = (this->Stats).Object;
    local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e8.DelegateSize = 0;
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x10);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_f0,(FWriteAccessScope *)&local_68);
    local_50 = &local_e8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_e8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError__AEBV__TSharedPtr___CBU__FOnlineUserStatsPair_VFVariantData_____00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFTestStatsInterface____A6AXAEBUFOnlineError__AEBV__TSharedPtr___CBU__FOnlineUserStatsPair_VFVariantData_____00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar4[4] = OnQueryUserStatsComplete;
      puVar4[3] = this;
      if (this == (FTestStatsInterface *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    pTVar6 = TSharedPtr<FUniqueNetId_const_,1>::ToSharedRef(&this->UserId,&local_38);
    pTVar7 = TSharedPtr<FUniqueNetId_const_,1>::ToSharedRef(&this->UserId,&local_28);
    (*pcVar2)(pIVar1,pTVar7,pTVar6,&local_f0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_f0,(FWriteAccessScope *)&local_a0);
    if ((local_e8.DelegateSize != 0) &&
       (local_e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_e8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_e8,0,0,0x10);
      local_e8.DelegateSize = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_e8.DelegateAllocator);
    }
    this_00 = &local_f0;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&this_00->AccessDetector);
  return;
}

// Test @ 14ed00310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTestStatsInterface::Test(FTestStatsInterface *this,UWorld *param_1,wchar_t *param_2)

{
  TSharedPtr<FUniqueNetId_const_,1> *pTVar1;
  TSharedPtr<IOnlineStats,1> *pTVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  IOnlineSubsystem *pIVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  FName local_res8;
  wchar_t *local_res18 [2];
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  FString local_48;
  
  if ((this->Subsystem).Data.ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(this->Subsystem).Data.AllocatorInstance.Data;
  }
  local_res18[0] = param_2;
  pFVar6 = ::FName::FName(&local_res8,pwVar11);
  pIVar7 = IOnlineSubsystem::Get(pFVar6);
  this->OnlineSub = pIVar7;
  if (pIVar7 == (IOnlineSubsystem *)0x0) {
    if ((byte)LogOnlineStats._0_1_ < 3) goto LAB_14ed0055b;
    ::FString::PrintfImpl
              (&local_c8,L"[FTestStatsInterface::Test] Failed to get online subsystem %s");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
  }
  else {
    plVar8 = (longlong *)(**(code **)(pIVar7->_padding_ + 0x80))(pIVar7,local_88);
    lVar13 = *plVar8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    if (lVar13 != 0) {
      plVar8 = (longlong *)
               (**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_68);
      if ((*plVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar9 = (undefined8 *)
               (**(code **)(*(longlong *)*plVar8 + 0x110))((longlong *)*plVar8,local_78);
      pTVar1 = &this->UserId;
      if (pTVar1 != (TSharedPtr<FUniqueNetId_const_,1> *)puVar9) {
        pTVar1->Object = (FUniqueNetId *)*puVar9;
        *puVar9 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->UserId).SharedReferenceCount,(FSharedReferencer<1> *)(puVar9 + 1));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
      if (pTVar1->Object == (FUniqueNetId *)0x0) {
        if ((byte)LogOnlineStats._0_1_ < 3) goto LAB_14ed0055b;
        ::FString::PrintfImpl
                  (&local_b8,
                   L"[FTestStatsInterface::Test] Couldn\'t find any valid user in identity interface"
                  );
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
        local_c8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
        goto LAB_14ed00551;
      }
    }
    puVar9 = (undefined8 *)
             (**(code **)(this->OnlineSub->_padding_ + 0xd8))(this->OnlineSub,local_58);
    pTVar2 = &this->Stats;
    if (pTVar2 != (TSharedPtr<IOnlineStats,1> *)puVar9) {
      pTVar2->Object = (IOnlineStats *)*puVar9;
      *puVar9 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Stats).SharedReferenceCount,(FSharedReferencer<1> *)(puVar9 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    if (pTVar2->Object != (IOnlineStats *)0x0) {
      FParse::Token(&local_d8,local_res18,false);
      while (1 < local_d8.Data.ArrayNum) {
        pFVar12 = (this->StatsToRead).AllocatorInstance.Data;
        if (((pFVar12 <= (FScriptContainerElement *)&local_d8) &&
            ((FScriptContainerElement *)&local_d8 <
             pFVar12 + (longlong)(this->StatsToRead).ArrayMax * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->StatsToRead).ArrayNum;
        if (iVar5 == (this->StatsToRead).ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->StatsToRead).AllocatorInstance,
                             &(this->StatsToRead).ArrayMax);
        }
        _Src.Data = local_d8.Data.AllocatorInstance.Data;
        pFVar12 = (this->StatsToRead).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
        (this->StatsToRead).ArrayNum = iVar5 + 1;
        *(undefined8 *)&pFVar12->field_0x0 = 0;
        lVar13 = (longlong)local_d8.Data.ArrayNum;
        *(int *)&pFVar12[8].field_0x0 = local_d8.Data.ArrayNum;
        if (local_d8.Data.ArrayNum == 0) {
          *(int *)(pFVar12 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_d8.Data.ArrayNum,0,(ForAnyElementType *)pFVar12,
                     local_d8.Data.ArrayNum,(int *)(pFVar12 + 0xc));
          memcpy(*(void **)&pFVar12->field_0x0,_Src.Data,lVar13 * 2);
        }
        pFVar10 = FParse::Token(&local_48,local_res18,false);
        if (&local_d8 != pFVar10) {
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          local_d8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
          (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
          local_d8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
          (pFVar10->Data).ArrayNum = 0;
          (pFVar10->Data).ArrayMax = 0;
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      if ((this->StatsToRead).ArrayNum == 0) {
        if (2 < (byte)LogOnlineStats._0_1_) {
          ::FString::PrintfImpl
                    (&local_98,
                     L"[FTestStatsInterface::Test] No stat names were specified. Please add the stat names you want to use for the test."
                    );
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
        this->bOverallSuccess = false;
      }
      if (local_d8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      return;
    }
    if ((byte)LogOnlineStats._0_1_ < 3) goto LAB_14ed0055b;
    ::FString::PrintfImpl
              (&local_a8,
               L"[FTestStatsInterface::Test] Failed to get online Stats interface for online subsystem %s"
              );
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
    local_c8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
  }
LAB_14ed00551:
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
LAB_14ed0055b:
  this->bOverallSuccess = false;
  return;
}

// Tick @ 14ed06050

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTestStatsInterface::Tick(FTestStatsInterface *this,float param_1)

{
  int *piVar1;
  EStatsTestPhase EVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestStatsInterface::Tick(float)_::_2_::FStat_STAT_FTestStatsInterface_Tick>
  FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FStaticBasicLogRecord *pFVar9;
  bool bVar10;
  wchar_t *pwVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FNameEntryId FVar14;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FString local_48;
  FStatMessage local_38;
  
  FVar14.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FTestStatsInterface_Tick ==
        (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestStatsInterface::Tick(float)_::_2_::FStat_STAT_FTestStatsInterface_Tick>
         )0x0) {
      pFVar6 = ::FName::FName((FName *)&local_res8.s,"STAT_FTestStatsInterface_Tick");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FTestStatsInterface_Tick,*pFVar6,
                 L"STAT_FTestStatsInterface_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                 ,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar7 = StatPtr_STAT_FTestStatsInterface_Tick;
  if (StatPtr_STAT_FTestStatsInterface_Tick ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestStatsInterface::Tick(float)_::_2_::FStat_STAT_FTestStatsInterface_Tick>
       )0x0) {
    pFVar6 = ::FName::FName(local_res18,"STAT_FTestStatsInterface_Tick");
    FVar7 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestStatsInterface::Tick(float)_::_2_::FStat_STAT_FTestStatsInterface_Tick>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FTestStatsInterface_Tick,*pFVar6
                         ,L"STAT_FTestStatsInterface_Tick","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar8 = FVar13.Number;
  if ((FVar12.Value == 0) && (uVar8 == 0)) {
LAB_14ed061b1:
    bVar4 = false;
    FVar13.ComparisonIndex.Value = 0;
    FVar13.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestStatsInterface.cpp"
                   ,0xcd);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ed061b1;
    local_res8.s.LowPart = FVar12.Value;
    local_res8.s.HighPart = uVar8;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar4 = true;
    FVar14.Value = FVar12.Value;
  }
  EVar2 = this->CurrentTestPhase;
  if (EVar2 == this->LastTestPhase) goto switchD_14ed062ed_default;
  if (this->bOverallSuccess == false) {
    if (4 < (byte)LogOnlineStats._0_1_) {
      ::FString::PrintfImpl(&local_48,L"[FTestStatsInterface::Tick] Testing failed in phase %d");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    this->CurrentTestPhase = End;
    this->LastTestPhase = End;
switchD_14ed062ed_caseD_9:
    if (4 < (byte)LogOnlineStats._0_1_) {
      pwVar11 = L"true";
      if (this->bOverallSuccess == false) {
        pwVar11 = L"false";
      }
      ::FString::FString((FString *)&local_38,pwVar11);
      ::FString::PrintfImpl(&local_48,L"[FTestStatsInterface::Tick] TESTING COMPLETE Success: %s!");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.StatData.Pad != (uchar  [8])0x0) {
        FMemory::Free((void *)local_38.StatData.Pad);
      }
    }
    (**(code **)this->_padding_)(this,1);
    bVar10 = false;
    goto LAB_14ed0639b;
  }
  this->LastTestPhase = EVar2;
  switch(EVar2) {
  case ReadStatsForOneUser:
    if (4 < (byte)LogOnlineStats._0_1_) {
      ::FString::PrintfImpl
                (&local_48,
                 L"[FTestStatsInterface::Tick] Beginning ReadStats (reading self, pre-increment, no stat names)"
                );
      pFVar9 = &::LOG_Static;
LAB_14ed06520:
      UE::Logging::Private::BasicLog<5>(pFVar9,(FLogCategoryBase *)&LogOnlineStats);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    break;
  case ReadStatsForManyUsers:
    if (4 < (byte)LogOnlineStats._0_1_) {
      ::FString::PrintfImpl
                (&local_48,
                 L"[FTestStatsInterface::Tick] Beginning ReadStats (reading self, pre-increment, including stat names)"
                );
      pFVar9 = &::LOG_Static;
LAB_14ed0657c:
      UE::Logging::Private::BasicLog<5>(pFVar9,(FLogCategoryBase *)&LogOnlineStats);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_14ed065a9;
  case WriteIncrementedStats:
    if (4 < (byte)LogOnlineStats._0_1_) {
      ::FString::PrintfImpl
                (&local_48,L"[FTestStatsInterface::Tick] Beginning Write (incrementing stats)");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    bVar10 = true;
    goto LAB_14ed06390;
  case ReadStatsForOneUserAfterIncrement:
    if (4 < (byte)LogOnlineStats._0_1_) {
      ::FString::PrintfImpl
                (&local_48,
                 L"[FTestStatsInterface::Tick] Beginning ReadStats (reading self, post-increment, no stat names)"
                );
      pFVar9 = &::LOG_Static;
      goto LAB_14ed06520;
    }
    break;
  case ReadStatsForManyUsersaAfterIncrement:
    if (4 < (byte)LogOnlineStats._0_1_) {
      ::FString::PrintfImpl
                (&local_48,
                 L"[FTestStatsInterface::Tick] Beginning ReadStats (reading self, post-increment, including stat names)"
                );
      pFVar9 = &::LOG_Static;
      goto LAB_14ed0657c;
    }
    goto LAB_14ed065a9;
  case WriteDecrementedStats:
    if (4 < (byte)LogOnlineStats._0_1_) {
      ::FString::PrintfImpl
                (&local_48,L"[FTestStatsInterface::Tick] Beginning Write (decrementing stats)");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    bVar10 = false;
LAB_14ed06390:
    WriteStats(this,bVar10);
    goto switchD_14ed062ed_default;
  case ReadStatsForOneUserAfterDecrement:
    if (4 < (byte)LogOnlineStats._0_1_) {
      ::FString::PrintfImpl
                (&local_48,
                 L"[FTestStatsInterface::Tick] Beginning ReadStats (reading self, post-decrement, no stat names)"
                );
      pFVar9 = &::LOG_Static;
      goto LAB_14ed06520;
    }
    break;
  case ReadStatsForManyUsersaAfterDecrement:
    if (4 < (byte)LogOnlineStats._0_1_) {
      ::FString::PrintfImpl
                (&local_48,
                 L"[FTestStatsInterface::Tick] Beginning ReadStats (reading self, post-decrement, including stat names)"
                );
      pFVar9 = &::LOG_Static;
      goto LAB_14ed0657c;
    }
LAB_14ed065a9:
    ReadStats(this,true);
    goto switchD_14ed062ed_default;
  case End:
    goto switchD_14ed062ed_caseD_9;
  default:
    goto switchD_14ed062ed_default;
  }
  ReadStats(this,false);
switchD_14ed062ed_default:
  bVar10 = true;
LAB_14ed0639b:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar14.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar10;
}

// WriteStats @ 14ed098a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestStatsInterface::WriteStats(FTestStatsInterface *this,bool param_1)

{
  Type TVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FUniqueNetId *pFVar4;
  IOnlineStats *pIVar5;
  code *pcVar6;
  FOnlineStatUpdate *pFVar7;
  bool bVar8;
  TSharedRef<FUniqueNetId_const_,1> *pTVar9;
  FVariantData *pFVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  TPairInitializer<FString_&&,FOnlineStatUpdate_&&> local_res18;
  ForAnyElementType local_198;
  int local_190;
  int iStack_18c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_188;
  FDelegateAllocation local_180;
  longlong local_170;
  TReferenceControllerBase<1> *local_168;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  TSharedRef<FUniqueNetId_const_,1> local_120;
  FString *local_110;
  FVariantData *local_108;
  FString local_100;
  FDestructionSentinel local_f0;
  FVariantData local_d8;
  FDestructionSentinel local_b8;
  FDelegateAllocation *local_a0;
  void *local_98 [2];
  FVariantData local_88;
  undefined1 local_68;
  TSharedRef<FUniqueNetId_const_,1> local_60;
  TSharedRef<FUniqueNetId_const_,1> local_50;
  
  if (4 < (byte)LogOnlineStats._0_1_) {
    ::FString::PrintfImpl(&local_160,L"[FTestStatsInterface::WriteStats]");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
  }
  local_198.Data = (FScriptContainerElement *)0x0;
  local_190 = 0;
  iStack_18c = 0;
  if (((this->UserId).Object == (FUniqueNetId *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar3 = (this->UserId).SharedReferenceCount.ReferenceController;
  pFVar4 = (this->UserId).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar4 == (FUniqueNetId *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (local_190 == iStack_18c) {
    local_190 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x860,&local_198,&iStack_18c);
  }
  lVar13 = (longlong)local_190;
  _local_190 = CONCAT44(iStack_18c,local_190 + 1);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_120.Object = pFVar4;
  local_120.SharedReferenceCount.ReferenceController = pTVar3;
  local_res18.Value =
       (FOnlineStatUpdate *)
       FOnlineUserStatsPair<FOnlineStatUpdate>::FOnlineUserStatsPair<FOnlineStatUpdate>
                 ((FOnlineUserStatsPair<FOnlineStatUpdate> *)(local_198.Data + lVar13 * 0x60),
                  &local_120);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (((this->Stats).Object == (IOnlineStats *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pIVar5 = (this->Stats).Object;
  pcVar6 = *(code **)((longlong)*pIVar5 + 0x18);
  pTVar9 = TSharedPtr<FUniqueNetId_const_,1>::ToSharedRef(&this->UserId,&local_60);
  (*pcVar6)(pIVar5,&local_170,pTVar9);
  if (local_170 == 0) {
    if (4 < (byte)LogOnlineStats._0_1_) {
      if (((this->UserId).Object == (FUniqueNetId *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->UserId).Object;
      (**(code **)(*(longlong *)pFVar4 + 0x30))(pFVar4,local_98);
      ::FString::PrintfImpl(&local_130,L"Stats not found for user %s");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (local_98[0] != (void *)0x0) {
        FMemory::Free(local_98[0]);
      }
    }
  }
  else {
    iVar2 = (this->StatsToRead).ArrayNum;
    pFVar15 = (this->StatsToRead).AllocatorInstance.Data;
    pFVar16 = pFVar15 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((this->StatsToRead).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar15 == pFVar16) break;
      if ((local_170 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar10 = TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                ::Find((TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                        *)(local_170 + 0x10),(FString *)pFVar15);
      if (pFVar10 == (FVariantData *)0x0) {
LAB_14ed09c77:
        pFVar15 = pFVar15 + 0x10;
      }
      else {
        TVar1 = pFVar10->Type;
        if (((TVar1 == Int32) || ((byte)(TVar1 - UInt32) < 4)) || (TVar1 == Float)) {
          FVariantData::FVariantData(&local_d8,pFVar10);
          if (param_1) {
            FVariantData::Increment(&local_d8);
          }
          else {
            FVariantData::Decrement(&local_d8);
          }
          if (4 < (byte)LogOnlineStats._0_1_) {
            ::FString::PrintfImpl(&local_140,L"Stat %s is being %s");
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
            if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.Data.AllocatorInstance.Data);
            }
          }
          pFVar7 = local_res18.Value;
          FVariantData::FVariantData(&local_88,&local_d8);
          local_68 = 2;
          if (*(int *)(pFVar15 + 8) == 0) {
            pwVar14 = L"";
          }
          else {
            pwVar14 = *(wchar_t **)&pFVar15->field_0x0;
          }
          ::FString::FString(&local_100,pwVar14);
          local_110 = &local_100;
          local_108 = &local_88;
          TSet<TTuple<FString,FOnlineStatUpdate>,TDefaultMapHashableKeyFuncs<FString,FOnlineStatUpdate,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_&&,FOnlineStatUpdate_&&>_>
                    ((TSet<TTuple<FString,FOnlineStatUpdate>,TDefaultMapHashableKeyFuncs<FString,FOnlineStatUpdate,0>,FDefaultSetAllocator>
                      *)((longlong)pFVar7 + 0x10),&local_res18,(bool *)&local_110);
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          FVariantData::Empty(&local_88);
          FVariantData::Empty(&local_d8);
          goto LAB_14ed09c77;
        }
        if ((byte)LogOnlineStats._0_1_ < 5) goto LAB_14ed09c77;
        ::FString::PrintfImpl(&local_150,L"Stat %s doesn\'t have a numeric value, skipped");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStats);
        if (local_150.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
        goto LAB_14ed09c77;
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
        pFVar15 = pFVar15 + 0x10;
      }
    }
  }
  if (((this->Stats).Object == (IOnlineStats *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pIVar5 = (this->Stats).Object;
  local_188.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_180.DelegateSize = 0;
  pcVar6 = *(code **)((longlong)*pIVar5 + 0x20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_188,(FWriteAccessScope *)&local_b8);
  local_a0 = &local_180;
  puVar11 = UE::Core::Private::DelegateAllocate(0x20,&local_180);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,`FTestStatsInterface::WriteStats'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar11[3] = this;
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  pTVar9 = TSharedPtr<FUniqueNetId_const_,1>::ToSharedRef(&this->UserId,&local_50);
  (*pcVar6)(pIVar5,pTVar9,&local_198,&local_188);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_188,(FWriteAccessScope *)&local_f0);
  if ((local_180.DelegateSize != 0) &&
     (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_180.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_180,0,0,0x10);
    local_180.DelegateSize = 0;
  }
  if (local_f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
  }
  if (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_180.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_188.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_168);
  DestructItems<FOnlineUserStatsPair<FOnlineStatUpdate>,int>
            ((FOnlineUserStatsPair<FOnlineStatUpdate> *)local_198.Data,local_190);
  if ((FOnlineUserStatsPair<FOnlineStatUpdate> *)local_198.Data !=
      (FOnlineUserStatsPair<FOnlineStatUpdate> *)0x0) {
    FMemory::Free(local_198.Data);
  }
  return;
}

