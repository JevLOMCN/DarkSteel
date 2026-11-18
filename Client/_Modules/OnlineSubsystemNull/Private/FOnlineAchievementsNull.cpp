// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 11

// FOnlineAchievementsNull @ 14ed10e90

FOnlineAchievementsNull * __thiscall
FOnlineAchievementsNull::FOnlineAchievementsNull
          (FOnlineAchievementsNull *this,FOnlineSubsystemNull *param_1)

{
  code *pcVar1;
  bool bVar2;
  FOnlineAchievementsNull *pFVar3;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 2;
  this->NullSubsystem = param_1;
  *(undefined8 *)&this->PlayerAchievements = 0;
  *(undefined8 *)&(this->PlayerAchievements).field_0x8 = 0;
  *(undefined8 *)&(this->PlayerAchievements).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FOnlineAchievementsNull__6B_;
  *(undefined4 *)&(this->PlayerAchievements).field_0x28 = 0;
  *(undefined4 *)&(this->PlayerAchievements).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlayerAchievements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PlayerAchievements).field_0x34 = 0;
  *(undefined8 *)&(this->PlayerAchievements).field_0x40 = 0;
  *(undefined4 *)&(this->PlayerAchievements).field_0x48 = 0;
  *(undefined8 *)&this->AchievementDescriptions = 0;
  *(undefined8 *)&(this->AchievementDescriptions).field_0x8 = 0;
  *(undefined8 *)&(this->AchievementDescriptions).field_0x20 = 0;
  *(undefined4 *)&(this->AchievementDescriptions).field_0x28 = 0;
  *(undefined4 *)&(this->AchievementDescriptions).field_0x2c = 0x80;
  *(undefined4 *)&(this->AchievementDescriptions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AchievementDescriptions).field_0x34 = 0;
  *(undefined8 *)&(this->AchievementDescriptions).field_0x40 = 0;
  *(undefined4 *)&(this->AchievementDescriptions).field_0x48 = 0;
  (this->Achievements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Achievements).ArrayNum = 0;
  (this->Achievements).ArrayMax = 0;
  if (this->NullSubsystem == (FOnlineSubsystemNull *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NullSubsystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineAchievementsInterfaceNull.cpp"
                       ,10,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FOnlineAchievementsNull *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// ~FOnlineAchievementsNull @ 14ed12ad0

void __thiscall FOnlineAchievementsNull::~FOnlineAchievementsNull(FOnlineAchievementsNull *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FOnlineAchievementsNull__6B_;
  DestructItems<FOnlineAchievementsNull::FOnlineAchievementNull,int>
            ((FOnlineAchievementNull *)(this->Achievements).AllocatorInstance.Data,
             (this->Achievements).ArrayNum);
  pFVar1 = (this->Achievements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->AchievementDescriptions).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AchievementDescriptions).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FOnlineAchievementDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FOnlineAchievementDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FOnlineAchievementDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AchievementDescriptions);
  *(undefined4 *)&(this->PlayerAchievements).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PlayerAchievements).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PlayerAchievements);
  this->_padding_ = (longlong)&___7IOnlineAchievements__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  return;
}

// GetCachedAchievement @ 14ed24c40

Type __thiscall
FOnlineAchievementsNull::GetCachedAchievement
          (FOnlineAchievementsNull *this,FUniqueNetId *param_1,FString *param_2,
          FOnlineAchievement *param_3)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  Type TVar7;
  int iVar8;
  TSharedRef<FUniqueNetId_const_,1> *pTVar9;
  TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  TSharedRef<FUniqueNetId_const_,1> local_38;
  
  bVar5 = ReadAchievementsFromConfig(this);
  if (bVar5) {
    pTVar9 = TSharedFromThis<FUniqueNetId,1>::AsShared
                       ((TSharedFromThis<FUniqueNetId,1> *)&param_1->field_0x8,&local_38);
    pTVar10 = TMapBase<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>_>
              ::Find((TMapBase<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>_>
                      *)&this->PlayerAchievements,pTVar9);
    if (pTVar10 != (TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar1 = pTVar10->ArrayNum;
      uVar11 = 0;
      if (0 < (longlong)iVar1) {
        lVar12 = 0;
        lVar13 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar11 < pTVar10->ArrayNum) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            TVar7 = (*pcVar4)();
            return TVar7;
          }
          pFVar3 = (pTVar10->AllocatorInstance).Data;
          iVar8 = (param_2->Data).ArrayNum;
          iVar2 = *(int *)(pFVar3 + lVar13 + 8);
          if (iVar2 == iVar8) {
            if (iVar2 < 2) goto LAB_14ed24d76;
            iVar8 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(pFVar3 + lVar13),
                               (wchar_t *)(param_2->Data).AllocatorInstance.Data);
            bVar5 = iVar8 == 0;
          }
          else {
            bVar5 = iVar2 + iVar8 == 1;
          }
          if (bVar5) {
LAB_14ed24d76:
            uVar6 = 0;
            if ((int)uVar11 < pTVar10->ArrayNum) {
              uVar6 = ~uVar11 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              TVar7 = (*pcVar4)();
              return TVar7;
            }
            pFVar3 = (pTVar10->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x18;
            ::FString::operator=(&param_3->Id,(FString *)pFVar3);
            param_3->Progress =
                 (double)(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar3[0x10].field_0x0)->
                         AllocatorInstance).Data;
            return Success;
          }
          uVar11 = uVar11 + 1;
          lVar12 = lVar12 + 1;
          lVar13 = lVar13 + 0x18;
        } while (lVar12 < iVar1);
      }
    }
  }
  return NotFound;
}

// GetCachedAchievementDescription @ 14ed24df0

Type __thiscall
FOnlineAchievementsNull::GetCachedAchievementDescription
          (FOnlineAchievementsNull *this,FString *param_1,FOnlineAchievementDesc *param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  undefined1 local_res20 [8];
  
  bVar3 = ReadAchievementsFromConfig(this);
  if ((bVar3) &&
     (*(int *)&(this->AchievementDescriptions).field_0x8 !=
      *(int *)&(this->AchievementDescriptions).field_0x34)) {
    iVar5 = (param_1->Data).ArrayNum;
    if (iVar5 == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar6 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
    iVar5 = TSet<TTuple<FString,FOnlineAchievementDesc>,TDefaultMapHashableKeyFuncs<FString,FOnlineAchievementDesc,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FOnlineAchievementDesc>,TDefaultMapHashableKeyFuncs<FString,FOnlineAchievementDesc,0>,FDefaultSetAllocator>
                        *)&this->AchievementDescriptions,uVar4,param_1);
    if (iVar5 != -1) {
      lVar7 = (longlong)iVar5 * 0x58 + *(longlong *)&this->AchievementDescriptions;
      plVar9 = (longlong *)(lVar7 + 0x10);
      if (lVar7 == 0) {
        plVar9 = (longlong *)0x0;
      }
      if (plVar9 != (longlong *)0x0) {
        pIVar1 = (ITextData *)*plVar9;
        pIVar2 = (param_2->Title).TextData.Reference;
        if (pIVar2 != pIVar1) {
          (param_2->Title).TextData.Reference = pIVar1;
          if (pIVar1 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
          }
          if (pIVar2 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
          }
        }
        (param_2->Title).Flags = *(uint *)(plVar9 + 1);
        pIVar1 = (ITextData *)plVar9[2];
        pIVar2 = (param_2->LockedDesc).TextData.Reference;
        if (pIVar2 != pIVar1) {
          (param_2->LockedDesc).TextData.Reference = pIVar1;
          if (pIVar1 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
          }
          if (pIVar2 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
          }
        }
        (param_2->LockedDesc).Flags = *(uint *)(plVar9 + 3);
        pIVar1 = (ITextData *)plVar9[4];
        pIVar2 = (param_2->UnlockedDesc).TextData.Reference;
        if (pIVar2 != pIVar1) {
          (param_2->UnlockedDesc).TextData.Reference = pIVar1;
          if (pIVar1 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
          }
          if (pIVar2 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
          }
        }
        (param_2->UnlockedDesc).Flags = *(uint *)(plVar9 + 5);
        param_2->bIsHidden = SUB81(plVar9[6],0);
        (param_2->UnlockTime).Ticks = plVar9[7];
        return Success;
      }
    }
  }
  return NotFound;
}

// GetCachedAchievements @ 14ed24f60

Type __thiscall
FOnlineAchievementsNull::GetCachedAchievements
          (FOnlineAchievementsNull *this,FUniqueNetId *param_1,
          TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FOnlineAchievement *pFVar3;
  bool bVar4;
  TSharedRef<FUniqueNetId_const_,1> *pTVar5;
  TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_> *pTVar6;
  TSharedRef<FUniqueNetId_const_,1> local_18;
  
  bVar4 = ReadAchievementsFromConfig(this);
  if (bVar4) {
    pTVar5 = TSharedFromThis<FUniqueNetId,1>::AsShared
                       ((TSharedFromThis<FUniqueNetId,1> *)&param_1->field_0x8,&local_18);
    pTVar6 = TMapBase<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>_>
             ::Find((TMapBase<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>_>
                     *)&this->PlayerAchievements,pTVar5);
    if (pTVar6 != (TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_> *)0x0) {
      if (param_2 != pTVar6) {
        DestructItems<FOnlineAchievement,int>
                  ((FOnlineAchievement *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
        iVar2 = pTVar6->ArrayNum;
        piVar1 = &param_2->ArrayMax;
        pFVar3 = (FOnlineAchievement *)(pTVar6->AllocatorInstance).Data;
        param_2->ArrayNum = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
          return Success;
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar2,*piVar1,&param_2->AllocatorInstance,iVar2,piVar1);
        ConstructItems<FOnlineAchievement,FOnlineAchievement,int>
                  ((param_2->AllocatorInstance).Data,pFVar3,iVar2);
      }
      return Success;
    }
  }
  return NotFound;
}

// QueryAchievementDescriptions @ 14ed29c60

void __thiscall
FOnlineAchievementsNull::QueryAchievementDescriptions
          (FOnlineAchievementsNull *this,FUniqueNetId *param_1,
          TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy> *param_2)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FScriptContainerElement *local_78;
  FScriptContainerElement *local_70;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  bVar5 = ReadAchievementsFromConfig(this);
  if (!bVar5) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_50);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (plVar2 = *(longlong **)&param_2->field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,param_1,0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    return;
  }
  if (*(int *)&(this->AchievementDescriptions).field_0x8 ==
      *(int *)&(this->AchievementDescriptions).field_0x34) {
    uVar7 = 0;
    iVar1 = (this->Achievements).ArrayNum;
    if (0 < iVar1) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar7 < (this->Achievements).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Achievements).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar7 < (this->Achievements).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_78 = (this->Achievements).AllocatorInstance.Data + lVar8;
        local_70 = pFVar3 + lVar8 + 0x18;
        TSet<TTuple<FString,FOnlineAchievementDesc>,TDefaultMapHashableKeyFuncs<FString,FOnlineAchievementDesc,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FOnlineAchievementDesc_const_&>_>
                  ((TSet<TTuple<FString,FOnlineAchievementDesc>,TDefaultMapHashableKeyFuncs<FString,FOnlineAchievementDesc,0>,FDefaultSetAllocator>
                    *)&this->AchievementDescriptions,
                   (TPairInitializer<FString_const_&,FOnlineAchievementDesc_const_&> *)
                   &stack0x00000020,(bool *)&local_78);
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x58;
      } while ((int)uVar7 < iVar1);
    }
    if ((*(int *)&(this->AchievementDescriptions).field_0x8 -
         *(int *)&(this->AchievementDescriptions).field_0x34 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("AchievementDescriptions.Num() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineAchievementsInterfaceNull.cpp"
                           ,0x69,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_68);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar2 = *(longlong **)&param_2->field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,param_1,1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  return;
}

// QueryAchievements @ 14ed29ea0

void __thiscall
FOnlineAchievementsNull::QueryAchievements
          (FOnlineAchievementsNull *this,FUniqueNetId *param_1,
          TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy> *param_2)

{
  FScriptContainerElement *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TSharedRef<FUniqueNetId_const_,1> *pTVar6;
  TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  FReadAccessScope *this_01;
  FOnlineAchievement *pFVar9;
  TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator>
  *this_02;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator>
  *local_a8;
  TSharedRef<FUniqueNetId_const_,1> *local_a0;
  ForAnyElementType *local_98;
  TSharedRef<FUniqueNetId_const_,1> local_90;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  TSharedRef<FUniqueNetId_const_,1> local_50;
  
  bVar3 = ReadAchievementsFromConfig(this);
  if (bVar3) {
    this_02 = (TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator>
               *)&this->PlayerAchievements;
    local_a8 = this_02;
    pTVar6 = TSharedFromThis<FUniqueNetId,1>::AsShared
                       ((TSharedFromThis<FUniqueNetId,1> *)&param_1->field_0x8,&local_50);
    pTVar7 = TMapBase<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>_>
             ::Find((TMapBase<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>_>
                     *)this_02,pTVar6);
    if (pTVar7 == (TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_> *)0x0) {
      lVar11 = (longlong)(this->Achievements).ArrayNum;
      uVar12 = 0;
      local_b0 = 0;
      local_b8.Data = (FScriptContainerElement *)0x0;
      if (0 < lVar11) {
        lVar10 = 0;
        local_b0 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar12 < (this->Achievements).ArrayNum) {
            uVar4 = ~uVar12 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar9 = (FOnlineAchievement *)((this->Achievements).AllocatorInstance.Data + lVar10);
          if (((local_b8.Data <= pFVar9) &&
              (pFVar9 < (FOnlineAchievement *)(local_b8.Data + (longlong)local_b0._4_4_ * 0x18))) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((int)local_b0 == local_b0._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_b8,(int *)((longlong)&local_b0 + 4));
            local_b0 = CONCAT44(local_b0._4_4_,iVar5);
          }
          lVar8 = (longlong)(int)local_b0;
          local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + 1);
          this_00 = local_b8.Data + lVar8 * 0x18;
          ::FString::FString((FString *)this_00,(FString *)pFVar9);
          uVar12 = uVar12 + 1;
          lVar10 = lVar10 + 0x58;
          *(double *)(this_00 + 0x10) = pFVar9->Progress;
          lVar11 = lVar11 + -1;
          this_02 = local_a8;
        } while (lVar11 != 0);
      }
      local_a0 = TSharedFromThis<FUniqueNetId,1>::AsShared
                           ((TSharedFromThis<FUniqueNetId,1> *)&param_1->field_0x8,&local_90);
      local_98 = &local_b8;
      TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<TSharedRef<FUniqueNetId_const_,1>_&&,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_const_&>_>
                (this_02,(TPairInitializer<TSharedRef<FUniqueNetId_const_,1>_&&,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_const_&>
                          *)&stack0x00000020,(bool *)&local_a0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_90.SharedReferenceCount.ReferenceController);
      DestructItems<FOnlineAchievement,int>((FOnlineAchievement *)local_b8.Data,(int)local_b0);
      if ((FOnlineAchievement *)local_b8.Data != (FOnlineAchievement *)0x0) {
        FMemory::Free(local_b8.Data);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_80);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,param_1,1);
    }
    this_01 = &local_80;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_68);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,param_1,0);
    }
    this_01 = &local_68;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (this_01);
  return;
}

// ReadAchievements @ 14ed2ab40

bool __thiscall
FOnlineAchievementsNull::NullAchievementsConfig::ReadAchievements
          (NullAchievementsConfig *this,
          TArray<FOnlineAchievementsNull::FOnlineAchievementNull,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FText *pFVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  int iVar11;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  undefined8 local_108;
  FOnlineAchievementDesc local_100;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48 [2];
  
  DestructItems<FOnlineAchievementsNull::FOnlineAchievementNull,int>
            ((FOnlineAchievementNull *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar11 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  while( true ) {
    ::FString::PrintfImpl(&local_b8,L"Achievement_%d_Id");
    local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_b8.Data.ArrayNum != 0) {
      FVar7.Data = local_b8.Data.AllocatorInstance.Data;
    }
    local_1b8.Data.ArrayNum = 0;
    local_1b8.Data.ArrayMax = 0;
    if ((this->SectionName).Data.ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(this->SectionName).Data.AllocatorInstance.Data;
    }
    bVar3 = FConfigCacheIni::GetString
                      (GConfig,pwVar8,(wchar_t *)FVar7.Data,&local_1b8,&this->IniName);
    if (bVar3) {
      local_168.Data.AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
      local_168.Data.ArrayNum = local_1b8.Data.ArrayNum;
      local_168.Data.ArrayMax = local_1b8.Data.ArrayMax;
      local_1b8.Data.ArrayNum = 0;
      local_1b8.Data.ArrayMax = 0;
      local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    else {
      ::FString::FString(&local_168,L"");
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_168.Data.ArrayNum < 2) {
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      return 0 < iVar11;
    }
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    FText::FText(&local_100.Title);
    FText::FText(&local_100.LockedDesc);
    FText::FText(&local_100.UnlockedDesc);
    local_100.UnlockTime.Ticks = 0;
    iVar5 = local_168.Data.ArrayNum + -1;
    if (local_168.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AssignRange(&local_118,(wchar_t *)local_168.Data.AllocatorInstance.Data,iVar5);
    local_108 = 0;
    ::FString::PrintfImpl(&local_a8,L"Achievement_%d_bIsHidden");
    local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar7.Data = local_a8.Data.AllocatorInstance.Data;
    }
    local_1a8.Data.ArrayNum = 0;
    local_1a8.Data.ArrayMax = 0;
    if ((this->SectionName).Data.ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(this->SectionName).Data.AllocatorInstance.Data;
    }
    bVar3 = FConfigCacheIni::GetString
                      (GConfig,pwVar8,(wchar_t *)FVar7.Data,&local_1a8,&this->IniName);
    if (bVar3) {
      local_158.Data.AllocatorInstance.Data = local_1a8.Data.AllocatorInstance.Data;
      local_158.Data.ArrayNum = local_1a8.Data.ArrayNum;
      local_158.Data.ArrayMax = local_1a8.Data.ArrayMax;
      local_1a8.Data.ArrayNum = 0;
      local_1a8.Data.ArrayMax = 0;
      local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    else {
      ::FString::FString(&local_158,L"");
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
    }
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_158.Data.ArrayNum != 0) {
      FVar7.Data = local_158.Data.AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"true");
    local_100.bIsHidden = iVar5 == 0;
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_98,L"Achievement_%d_Title");
    local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar7.Data = local_98.Data.AllocatorInstance.Data;
    }
    local_198.Data.ArrayNum = 0;
    local_198.Data.ArrayMax = 0;
    if ((this->SectionName).Data.ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(this->SectionName).Data.AllocatorInstance.Data;
    }
    bVar3 = FConfigCacheIni::GetString
                      (GConfig,pwVar8,(wchar_t *)FVar7.Data,&local_198,&this->IniName);
    if (bVar3) {
      local_148.Data.AllocatorInstance.Data = local_198.Data.AllocatorInstance.Data;
      local_148.Data.ArrayNum = local_198.Data.ArrayNum;
      local_148.Data.ArrayMax = local_198.Data.ArrayMax;
      local_198.Data.ArrayNum = 0;
      local_198.Data.ArrayMax = 0;
      local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    else {
      ::FString::FString(&local_148,L"");
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
    }
    pFVar6 = FText::FromString(&local_68,&local_148);
    FText::operator=(&local_100.Title,pFVar6);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_88,L"Achievement_%d_LockedDesc");
    local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar7.Data = local_88.Data.AllocatorInstance.Data;
    }
    local_188.Data.ArrayNum = 0;
    local_188.Data.ArrayMax = 0;
    if ((this->SectionName).Data.ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(this->SectionName).Data.AllocatorInstance.Data;
    }
    bVar3 = FConfigCacheIni::GetString
                      (GConfig,pwVar8,(wchar_t *)FVar7.Data,&local_188,&this->IniName);
    if (bVar3) {
      local_138.Data.AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
      local_138.Data.ArrayNum = local_188.Data.ArrayNum;
      local_138.Data.ArrayMax = local_188.Data.ArrayMax;
      local_188.Data.ArrayNum = 0;
      local_188.Data.ArrayMax = 0;
      local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    else {
      ::FString::FString(&local_138,L"");
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
    }
    pFVar6 = FText::FromString(&local_58,&local_138);
    FText::operator=(&local_100.LockedDesc,pFVar6);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_78,L"Achievement_%d_UnlockedDesc");
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar7.Data = local_78.Data.AllocatorInstance.Data;
    }
    local_178.Data.ArrayNum = 0;
    local_178.Data.ArrayMax = 0;
    if ((this->SectionName).Data.ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(this->SectionName).Data.AllocatorInstance.Data;
    }
    bVar3 = FConfigCacheIni::GetString
                      (GConfig,pwVar8,(wchar_t *)FVar7.Data,&local_178,&this->IniName);
    if (bVar3) {
      local_128.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
      local_128.Data.ArrayNum = local_178.Data.ArrayNum;
      local_128.Data.ArrayMax = local_178.Data.ArrayMax;
      local_178.Data.ArrayNum = 0;
      local_178.Data.ArrayMax = 0;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    else {
      ::FString::FString(&local_128,L"");
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
    }
    pFVar6 = FText::FromString(local_48,&local_128);
    FText::operator=(&local_100.UnlockedDesc,pFVar6);
    if (local_48[0].TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48[0].TextData.Reference + 0x10))();
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    pFVar9 = (param_1->AllocatorInstance).Data;
    if (((pFVar9 <= (FScriptContainerElement *)&local_118) &&
        ((FScriptContainerElement *)&local_118 < pFVar9 + (longlong)*piVar1 * 0x58)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar5 = param_1->ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&param_1->AllocatorInstance,piVar1);
    }
    FVar7.Data = local_118.Data.AllocatorInstance.Data;
    param_1->ArrayNum = iVar5 + 1;
    pFVar9 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x58;
    *(undefined8 *)&pFVar9->field_0x0 = 0;
    lVar10 = (longlong)local_118.Data.ArrayNum;
    *(int *)&pFVar9[8].field_0x0 = local_118.Data.ArrayNum;
    if (local_118.Data.ArrayNum == 0) {
      *(int *)(pFVar9 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_118.Data.ArrayNum,0,(ForAnyElementType *)pFVar9,local_118.Data.ArrayNum,
                 (int *)(pFVar9 + 0xc));
      memcpy(*(void **)&pFVar9->field_0x0,FVar7.Data,lVar10 * 2);
    }
    *(undefined8 *)&pFVar9[0x10].field_0x0 = local_108;
    FOnlineAchievementDesc::FOnlineAchievementDesc
              ((FOnlineAchievementDesc *)(pFVar9 + 0x18),&local_100);
    if (local_100.UnlockedDesc.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.UnlockedDesc.TextData.Reference + 0x10))();
    }
    if (local_100.LockedDesc.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.LockedDesc.TextData.Reference + 0x10))();
    }
    if (local_100.Title.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.Title.TextData.Reference + 0x10))();
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    iVar11 = iVar11 + 1;
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// ReadAchievementsFromConfig @ 14ed2b230

bool __thiscall FOnlineAchievementsNull::ReadAchievementsFromConfig(FOnlineAchievementsNull *this)

{
  ForAnyElementType _Src;
  bool bVar1;
  longlong lVar2;
  NullAchievementsConfig local_28;
  
  _Src.Data = GEngineIni.Data.AllocatorInstance.Data;
  if (0 < (this->Achievements).ArrayNum) {
    return true;
  }
  lVar2 = (longlong)GEngineIni.Data.ArrayNum;
  local_28.IniName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.IniName.Data.ArrayNum = GEngineIni.Data.ArrayNum;
  if (GEngineIni.Data.ArrayNum == 0) {
    local_28.IniName.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,GEngineIni.Data.ArrayNum,0,(ForAnyElementType *)&local_28,
               GEngineIni.Data.ArrayNum,&local_28.IniName.Data.ArrayMax);
    memcpy(local_28.IniName.Data.AllocatorInstance.Data,_Src.Data,lVar2 * 2);
  }
  ::FString::FString(&local_28.SectionName,L"OnlineSubsystemNull");
  bVar1 = NullAchievementsConfig::ReadAchievements(&local_28,&this->Achievements);
  if (local_28.SectionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SectionName.Data.AllocatorInstance.Data);
  }
  if (local_28.IniName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.IniName.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// ResetAchievements @ 14ed2e4d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOnlineAchievementsNull::ResetAchievements(FOnlineAchievementsNull *this,FUniqueNetId *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  TSharedRef<FUniqueNetId_const_,1> *pTVar5;
  TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  FString local_48;
  FString local_38;
  FScriptContainerElement *local_28 [2];
  TSharedRef<FUniqueNetId_const_,1> local_18;
  
  bVar2 = ReadAchievementsFromConfig(this);
  if (bVar2) {
    pTVar5 = TSharedFromThis<FUniqueNetId,1>::AsShared
                       ((TSharedFromThis<FUniqueNetId,1> *)&param_1->field_0x8,&local_18);
    pTVar6 = TMapBase<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>_>
             ::Find((TMapBase<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>_>
                     *)&this->PlayerAchievements,pTVar5);
    if (pTVar6 != (TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_> *)0x0) {
      uVar8 = 0;
      lVar9 = (longlong)pTVar6->ArrayNum;
      uVar10 = uVar8;
      if (0 < lVar9) {
        do {
          uVar7 = (uint)uVar8;
          uVar4 = 0;
          if ((int)uVar7 < pTVar6->ArrayNum) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          uVar8 = (ulonglong)(uVar7 + 1);
          *(undefined8 *)((pTVar6->AllocatorInstance).Data + uVar10 + 0x10) = 0;
          lVar9 = lVar9 + -1;
          uVar10 = uVar10 + 0x18;
        } while (lVar9 != 0);
      }
      return true;
    }
    if ((byte)LogOnlineAchievements._0_1_ < 3) {
      return false;
    }
    (**(code **)(*(longlong *)param_1 + 0x30))(param_1,local_28);
    ::FString::PrintfImpl(&local_38,L"Could not find achievements for player %s");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
    local_48.Data.AllocatorInstance.Data = local_28[0];
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      local_48.Data.AllocatorInstance.Data = local_28[0];
    }
  }
  else {
    if ((byte)LogOnlineAchievements._0_1_ < 3) {
      return false;
    }
    ::FString::PrintfImpl(&local_48,L"No achievements have been configured");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return false;
}

// WriteAchievements @ 14ed330c0

void __thiscall
FOnlineAchievementsNull::WriteAchievements
          (FOnlineAchievementsNull *this,FUniqueNetId *param_1,
          TSharedRef<FOnlineAchievementsWrite,1> *param_2,
          TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy> *param_3)

{
  ulonglong uVar1;
  int iVar2;
  FOnlineAchievementsWrite *pFVar3;
  void *_Src;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  TSharedRef<FUniqueNetId_const_,1> *pTVar10;
  TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  FReadAccessScope *this_00;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  int local_f8;
  longlong *local_f0;
  int iStack_e8;
  uint uStack_e4;
  longlong *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  longlong *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  TSharedRef<FUniqueNetId_const_,1> local_50;
  
  bVar6 = ReadAchievementsFromConfig(this);
  if (!bVar6) {
    param_2->Object->WriteState = Failed;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_80);
    if ((*(int *)&param_3->field_0x10 != 0) &&
       (plVar15 = *(longlong **)&param_3->field_0x8, plVar15 != (longlong *)0x0)) {
      (**(code **)(*plVar15 + 0x68))(plVar15,param_1,0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_80);
    return;
  }
  pTVar10 = TSharedFromThis<FUniqueNetId,1>::AsShared
                      ((TSharedFromThis<FUniqueNetId,1> *)&param_1->field_0x8,&local_50);
  pTVar11 = TMapBase<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>_>
            ::Find((TMapBase<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>_>
                    *)&this->PlayerAchievements,pTVar10);
  if (pTVar11 == (TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_> *)0x0) {
    param_2->Object->WriteState = Failed;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_68);
    if ((*(int *)&param_3->field_0x10 != 0) &&
       (plVar15 = *(longlong **)&param_3->field_0x8, plVar15 != (longlong *)0x0)) {
      (**(code **)(*plVar15 + 0x68))(plVar15,param_1,0);
    }
    this_00 = &local_68;
  }
  else {
    iStack_e8 = 0;
    pFVar3 = param_2->Object;
    local_d0 = 0;
    local_f0 = &pFVar3->_padding_;
    uStack_e4 = 1;
    iVar9 = (int)pFVar3->_padding_;
    local_e0 = &pFVar3->_padding_;
    iVar7 = 0;
    if (iVar9 != 0) {
      plVar15 = (longlong *)pFVar3->_padding_;
      if ((longlong *)pFVar3->_padding_ == (longlong *)0x0) {
        plVar15 = local_e0;
      }
      uVar13 = (uint)*plVar15;
      while (uVar13 == 0) {
        lVar12 = (longlong)iStack_e8;
        local_d0 = local_d0 + 0x20;
        iStack_e8 = iStack_e8 + 1;
        iVar7 = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e8) goto LAB_14ed3323e;
        uVar13 = *(uint *)((longlong)plVar15 + lVar12 * 4 + 4);
      }
      uStack_e4 = -uVar13 & uVar13;
      uVar1 = (ulonglong)uStack_e4 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_f8 = (int)lVar12;
      iVar7 = local_d0 + -1 + local_f8;
      if (iVar9 < iVar7) {
        iVar7 = iVar9;
      }
    }
LAB_14ed3323e:
    iVar2 = pTVar11->ArrayNum;
    uStack_d8 = 0xffffffff;
    TStack_b8._padding_ = CONCAT44(uStack_e4,iStack_e8);
    TStack_b8.CurrentBitIndex = iVar7;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    TStack_b8._28_4_ = iVar7;
    TStack_b8.BaseBitIndex = local_d0;
    iStack_d4 = iVar7;
    iStack_cc = iVar7;
    local_c0 = local_f0;
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_e0;
    if (iVar7 < iVar9) {
      do {
        local_108.Data = (FScriptContainerElement *)0x0;
        local_100 = *(int *)((longlong)iVar7 * 0x38 + 8 + *local_c0);
        lVar12 = (longlong)local_100;
        _Src = *(void **)((longlong)iVar7 * 0x38 + *local_c0);
        if (local_100 == 0) {
          local_fc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_100,0,&local_108,local_100,&local_fc);
          memcpy(local_108.Data,_Src,lVar12 * 2);
        }
        uVar13 = 0;
        lVar12 = 0;
        if (0 < (longlong)iVar2) {
          lVar14 = 0;
          do {
            uVar8 = 0;
            if ((int)uVar13 < pTVar11->ArrayNum) {
              uVar8 = ~uVar13 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (pTVar11->AllocatorInstance).Data;
            iVar9 = *(int *)(pFVar4 + lVar14 + 8);
            if (iVar9 == local_100) {
              if (1 < iVar9) {
                iVar9 = FGenericPlatformStricmp::Stricmp
                                  (*(wchar_t **)(pFVar4 + lVar14),(wchar_t *)local_108.Data);
                bVar6 = iVar9 == 0;
                goto LAB_14ed33395;
              }
LAB_14ed333b0:
              (**(code **)(this->_padding_ + 0x58))(this,param_1,&local_108);
              break;
            }
            bVar6 = local_100 + iVar9 == 1;
LAB_14ed33395:
            if (bVar6) goto LAB_14ed333b0;
            uVar13 = uVar13 + 1;
            lVar12 = lVar12 + 1;
            lVar14 = lVar14 + 0x18;
          } while (lVar12 < iVar2);
        }
        if (local_108.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data);
        }
        TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
        iVar7 = TStack_b8.CurrentBitIndex;
      } while (TStack_b8.CurrentBitIndex < (int)*(longlong *)&(TStack_b8.Array)->NumBits);
    }
    param_2->Object->WriteState = Done;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_98);
    if ((*(int *)&param_3->field_0x10 != 0) &&
       (plVar15 = *(longlong **)&param_3->field_0x8, plVar15 != (longlong *)0x0)) {
      (**(code **)(*plVar15 + 0x68))(plVar15,param_1,1);
    }
    this_00 = &local_98;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (this_00);
  return;
}

