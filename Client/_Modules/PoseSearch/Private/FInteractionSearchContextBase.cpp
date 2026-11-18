// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 8

// FInteractionSearchContextBase @ 14a8e0560

FInteractionSearchContextBase * __thiscall
UE::PoseSearch::FInteractionSearchContextBase::FInteractionSearchContextBase
          (FInteractionSearchContextBase *this,FInteractionSearchContextBase *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar3;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> _Dst;
  ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> FVar4;
  ForElementType<FName> _Dst_00;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> _Src;
  ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> FVar5;
  ForElementType<FName> _Src_00;
  
  (this->AnimContexts).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0;
  FVar3 = (param_1->AnimContexts).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->AnimContexts).ArrayNum;
  (this->AnimContexts).ArrayNum = iVar2;
  _Src = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)param_1;
  if (FVar3 != (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
    _Src = FVar3;
  }
  piVar1 = &(this->AnimContexts).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 4;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>_>
              (8,4,iVar2,0,(ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> *)this,
               iVar2,piVar1);
    FVar3 = (this->AnimContexts).AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)this;
    if (FVar3 != (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
      _Dst = FVar3;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 3);
  }
  (this->PoseHistories).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0;
  FVar5 = (param_1->PoseHistories).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->PoseHistories).ArrayNum;
  (this->PoseHistories).ArrayNum = iVar2;
  if (FVar5 == (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0) {
    FVar5 = (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)
            &param_1->PoseHistories;
  }
  piVar1 = &(this->PoseHistories).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 4;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>_>
              (0x10,8,iVar2,0,&(this->PoseHistories).AllocatorInstance,iVar2,piVar1);
    FVar4 = (this->PoseHistories).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0) {
      FVar4 = (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)&this->PoseHistories
      ;
    }
    ConstructItems<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>,TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>,int>
              ((void *)FVar4,(TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *)FVar5,iVar2);
  }
  (this->Roles).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  _Src_00 = (param_1->Roles).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Roles).ArrayNum;
  (this->Roles).ArrayNum = iVar2;
  if (_Src_00 == (ForElementType<FName>)0x0) {
    _Src_00 = (ForElementType<FName>)&param_1->Roles;
  }
  piVar1 = &(this->Roles).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 4;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
              (8,4,iVar2,0,&(this->Roles).AllocatorInstance,iVar2,piVar1);
    _Dst_00 = (this->Roles).AllocatorInstance.SecondaryData;
    if (_Dst_00 == (ForElementType<FName>)0x0) {
      _Dst_00 = (ForElementType<FName>)&this->Roles;
    }
    memcpy((void *)_Dst_00,(void *)_Src_00,(longlong)iVar2 << 3);
  }
  (this->Database).WeakPtr = (param_1->Database).WeakPtr;
  this->bDisableCollisions = param_1->bDisableCollisions;
  return this;
}

// CheckForConsistency @ 14a8edb00

bool __thiscall
UE::PoseSearch::FInteractionSearchContextBase::CheckForConsistency
          (FInteractionSearchContextBase *this)

{
  TArray<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int iVar2;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar3;
  ForElementType<FName> FVar4;
  ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> FVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar12;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar13;
  ForElementType<FName> FVar14;
  ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> FVar15;
  ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> FVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ForElementType<FName> FVar22;
  uint uVar23;
  
  bVar7 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                    (&this->Database,(void *)0x0);
  if (!bVar7) {
    iVar2 = (this->AnimContexts).ArrayNum;
    lVar20 = (longlong)iVar2;
    if (((0 < iVar2) && (iVar2 == (this->PoseHistories).ArrayNum)) &&
       (iVar2 == (this->Roles).ArrayNum)) {
      uVar18 = 0;
      do {
        uVar17 = 0;
        if ((int)uVar18 < (this->AnimContexts).ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        FVar3 = (this->AnimContexts).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)this;
        if (FVar3 != (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
          FVar13 = FVar3;
        }
        bVar7 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)
                           ((longlong)FVar13 + (longlong)(int)uVar18 * 8),(void *)0x0);
        if (bVar7) {
          return false;
        }
        uVar23 = uVar18 + 1;
        for (uVar17 = uVar23; (int)uVar17 < iVar2; uVar17 = uVar17 + 1) {
          uVar9 = 0;
          if ((int)uVar17 < (this->AnimContexts).ArrayNum) {
            uVar9 = ~uVar17 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          FVar3 = (this->AnimContexts).AllocatorInstance.SecondaryData;
          FVar13 = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)this;
          if (FVar3 != (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
            FVar13 = FVar3;
          }
          uVar9 = 0;
          if ((int)uVar18 < (this->AnimContexts).ArrayNum) {
            uVar9 = ~uVar18 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          FVar3 = (this->AnimContexts).AllocatorInstance.SecondaryData;
          FVar12 = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)this;
          if (FVar3 != (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
            FVar12 = FVar3;
          }
          bVar7 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject_const_,bool>
                            ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)
                             ((longlong)FVar12 + (longlong)(int)uVar18 * 8),
                             (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)
                             ((longlong)FVar13 + (longlong)(int)uVar17 * 8));
          if (bVar7) {
            return false;
          }
        }
        uVar18 = uVar23;
      } while ((int)uVar23 < iVar2);
      uVar18 = 1;
      if (1 < iVar2) {
        do {
          uVar17 = 0;
          if ((int)uVar18 < (this->AnimContexts).ArrayNum) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          FVar3 = (this->AnimContexts).AllocatorInstance.SecondaryData;
          FVar13 = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)this;
          if (FVar3 != (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
            FVar13 = FVar3;
          }
          pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar13 + (ulonglong)uVar18 * 8)
                                       );
          uVar17 = 0;
          if ((int)(uVar18 - 1) < (this->AnimContexts).ArrayNum) {
            uVar17 = -uVar18 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          FVar3 = (this->AnimContexts).AllocatorInstance.SecondaryData;
          FVar13 = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)this;
          if (FVar3 != (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
            FVar13 = FVar3;
          }
          pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                        ((longlong)FVar13 + (longlong)(int)uVar18 * 8 + -8));
          if (pUVar10 <= pUVar11) {
            return false;
          }
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < iVar2);
      }
      uVar18 = 0;
      lVar21 = 0;
      do {
        lVar19 = lVar21 + 1;
        if (lVar19 < lVar20) {
          uVar17 = uVar18;
          do {
            uVar17 = uVar17 + 1;
            uVar23 = 0;
            if ((int)uVar17 < (this->Roles).ArrayNum) {
              uVar23 = ~uVar17 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            FVar4 = (this->Roles).AllocatorInstance.SecondaryData;
            FVar22 = (ForElementType<FName>)&this->Roles;
            if (FVar4 != (ForElementType<FName>)0x0) {
              FVar22 = FVar4;
            }
            uVar23 = 0;
            if ((int)uVar18 < (this->Roles).ArrayNum) {
              uVar23 = ~uVar18 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            FVar4 = (this->Roles).AllocatorInstance.SecondaryData;
            FVar14 = (ForElementType<FName>)&this->Roles;
            if (FVar4 != (ForElementType<FName>)0x0) {
              FVar14 = FVar4;
            }
            if (*(longlong *)((longlong)FVar14 + lVar21 * 8) ==
                *(longlong *)((longlong)FVar22 + lVar19 * 8)) {
              return false;
            }
            lVar19 = lVar19 + 1;
          } while (lVar19 < lVar20);
        }
        uVar18 = uVar18 + 1;
        lVar21 = lVar21 + 1;
      } while (lVar21 < lVar20);
      uVar18 = 0;
      pTVar1 = &this->PoseHistories;
      lVar21 = 0;
      lVar19 = 0;
      while( true ) {
        uVar17 = 0;
        if ((int)uVar18 < (this->PoseHistories).ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        FVar5 = (this->PoseHistories).AllocatorInstance.SecondaryData;
        FVar15 = (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)pTVar1;
        if (FVar5 != (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0) {
          FVar15 = FVar5;
        }
        if (((*(longlong *)((longlong)FVar15 + lVar19) == 0) ||
            (*(longlong *)((uchar *)((longlong)FVar15 + 8) + lVar19) == 0)) ||
           (*(int *)(*(longlong *)((uchar *)((longlong)FVar15 + 8) + lVar19) + 8) < 1)) break;
        uVar17 = uVar18 + 1;
        if ((int)uVar17 < iVar2) {
          do {
            uVar23 = 0;
            if ((int)uVar17 < (this->PoseHistories).ArrayNum) {
              uVar23 = ~uVar17 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            FVar5 = (this->PoseHistories).AllocatorInstance.SecondaryData;
            FVar15 = (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)pTVar1;
            if (FVar5 != (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0) {
              FVar15 = FVar5;
            }
            uVar23 = 0;
            if ((int)uVar18 < (this->PoseHistories).ArrayNum) {
              uVar23 = ~uVar18 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            FVar5 = (this->PoseHistories).AllocatorInstance.SecondaryData;
            FVar16 = (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)pTVar1;
            if (FVar5 != (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0) {
              FVar16 = FVar5;
            }
            bVar7 = TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>::
                    UEOpEquals<UE::PoseSearch::IPoseHistory_const_>
                              ((TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *)
                               ((longlong)FVar16 + (longlong)(int)uVar18 * 0x10),
                               (TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *)
                               ((longlong)(int)uVar17 * 0x10 + (longlong)FVar15));
            if (bVar7) {
              return false;
            }
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < iVar2);
        }
        uVar18 = uVar18 + 1;
        lVar21 = lVar21 + 1;
        lVar19 = lVar19 + 0x10;
        if (lVar20 <= lVar21) {
          return true;
        }
      }
    }
  }
  return false;
}

// GetAnimContext @ 14a8f92c0

UObject * __thiscall
UE::PoseSearch::FInteractionSearchContextBase::GetAnimContext
          (FInteractionSearchContextBase *this,int param_1)

{
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UObject *pUVar5;
  
  uVar4 = 0;
  if (param_1 < (this->AnimContexts).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UObject *)(*pcVar2)();
      return pUVar5;
    }
  }
  FVar1 = (this->AnimContexts).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
    this = (FInteractionSearchContextBase *)FVar1;
  }
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + (longlong)param_1 * 8));
  return pUVar5;
}

// GetPoseHistory @ 14a8fb4f0

IPoseHistory * __thiscall
UE::PoseSearch::FInteractionSearchContextBase::GetPoseHistory
          (FInteractionSearchContextBase *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  IPoseHistory *pIVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  IPoseHistory *pIVar9;
  ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> FVar10;
  IPoseHistory *pIVar11;
  longlong lVar12;
  
  lVar12 = (longlong)param_1;
  piVar1 = &(this->PoseHistories).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoseHistories.IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                         ,300,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pIVar9 = (IPoseHistory *)(*pcVar4)();
    return pIVar9;
  }
  pIVar9 = (IPoseHistory *)0x0;
  uVar7 = 0;
  if (param_1 < *piVar1) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pIVar9 = (IPoseHistory *)(*pcVar4)();
    return pIVar9;
  }
  FVar10 = (this->PoseHistories).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0) {
    FVar10 = (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)&this->PoseHistories;
  }
  if ((((*(longlong *)((longlong)FVar10 + lVar12 * 0x10) == 0) ||
       (lVar2 = *(longlong *)((longlong)FVar10 + 8 + lVar12 * 0x10), lVar2 == 0)) ||
      (*(int *)(lVar2 + 8) < 1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoseHistories[Index].IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                         ,0x12d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pIVar9 = (IPoseHistory *)(*pcVar4)();
    return pIVar9;
  }
  uVar7 = 0;
  if (param_1 < *piVar1) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pIVar9 = (IPoseHistory *)(*pcVar4)();
    return pIVar9;
  }
  FVar10 = (this->PoseHistories).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0) {
    FVar10 = (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)&this->PoseHistories;
  }
  pIVar3 = *(IPoseHistory **)((uchar *)((longlong)FVar10 + 8) + lVar12 * 0x10);
  pIVar11 = pIVar3;
  if (pIVar3 != (IPoseHistory *)0x0) {
    iVar5 = *(int *)&pIVar3->field_0x8;
    do {
      pIVar11 = pIVar9;
      if (iVar5 == 0) goto LAB_14a8fb672;
      LOCK();
      iVar8 = *(int *)&pIVar3->field_0x8;
      bVar6 = iVar5 == iVar8;
      if (bVar6) {
        *(int *)&pIVar3->field_0x8 = iVar5 + 1;
        iVar8 = iVar5;
      }
      UNLOCK();
      iVar5 = iVar8;
    } while (!bVar6);
    pIVar9 = *(IPoseHistory **)((longlong)FVar10 + lVar12 * 0x10);
    pIVar11 = pIVar3;
  }
LAB_14a8fb672:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pIVar11);
  return pIVar9;
}

// IsEquivalent @ 14a901ad0

bool __thiscall
UE::PoseSearch::FInteractionSearchContextBase::IsEquivalent
          (FInteractionSearchContextBase *this,FInteractionSearchContextBase *param_1)

{
  int iVar1;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar2;
  bool bVar3;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar4;
  ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> FVar5;
  ForElementType<FName> FVar6;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar7;
  ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> FVar8;
  ForElementType<FName> FVar9;
  
  bVar3 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::
          UEOpEquals<UPoseSearchDatabase_const_,bool>(&this->Database,&param_1->Database);
  if ((bVar3) && (iVar1 = (this->AnimContexts).ArrayNum, iVar1 == (param_1->AnimContexts).ArrayNum))
  {
    FVar2 = (param_1->AnimContexts).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)param_1;
    if (FVar2 != (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
      FVar7 = FVar2;
    }
    FVar2 = (this->AnimContexts).AllocatorInstance.SecondaryData;
    FVar4 = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)this;
    if (FVar2 != (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
      FVar4 = FVar2;
    }
    bVar3 = CompareItems<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,int>
                      ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)FVar4,
                       (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)FVar7,iVar1);
    if (bVar3) {
      iVar1 = (this->PoseHistories).ArrayNum;
      if (iVar1 == (param_1->PoseHistories).ArrayNum) {
        FVar8 = (param_1->PoseHistories).AllocatorInstance.SecondaryData;
        FVar5 = (this->PoseHistories).AllocatorInstance.SecondaryData;
        if (FVar8 == (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0) {
          FVar8 = (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)
                  &param_1->PoseHistories;
        }
        if (FVar5 == (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0) {
          FVar5 = (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)
                  &this->PoseHistories;
        }
        bVar3 = CompareItems<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>,int>
                          ((TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *)FVar5,
                           (TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *)FVar8,iVar1);
        if (bVar3) {
          iVar1 = (this->Roles).ArrayNum;
          if (iVar1 == (param_1->Roles).ArrayNum) {
            FVar9 = (param_1->Roles).AllocatorInstance.SecondaryData;
            FVar6 = (this->Roles).AllocatorInstance.SecondaryData;
            if (FVar9 == (ForElementType<FName>)0x0) {
              FVar9 = (ForElementType<FName>)&param_1->Roles;
            }
            if (FVar6 == (ForElementType<FName>)0x0) {
              FVar6 = (ForElementType<FName>)&this->Roles;
            }
            bVar3 = CompareItems<FName,int>((FName *)FVar6,(FName *)FVar9,iVar1);
            if (bVar3) {
              return true;
            }
          }
        }
      }
    }
  }
  return false;
}

// TestHistoryCollectorsThreadingAccess @ 14a908ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::PoseSearch::FInteractionSearchContextBase::TestHistoryCollectorsThreadingAccess
          (FInteractionSearchContextBase *this)

{
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UAnimInstance *pUVar5;
  UClass *pUVar6;
  IPoseHistory *pIVar7;
  FBoneContainer *pFVar8;
  UObject *pUVar9;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  longlong local_b0;
  undefined1 local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  iVar11 = (this->AnimContexts).ArrayNum;
  pUVar5 = (UAnimInstance *)0x0;
  if (0 < iVar11) {
    do {
      uVar12 = (uint)pUVar5;
      uVar4 = 0;
      if ((int)uVar12 < iVar11) {
        uVar4 = ~uVar12 >> 0x1f;
      }
      if (uVar4 == 0) {
        local_b0 = (longlong)iVar11;
        local_b8 = (ulonglong)(int)uVar12;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FVar1 = (this->AnimContexts).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)this;
      if (FVar1 != (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
        FVar10 = FVar1;
      }
      pUVar5 = (UAnimInstance *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar10 + (longlong)(int)uVar12 * 8))
      ;
      if (pUVar5 == (UAnimInstance *)0x0) {
LAB_14a908f72:
        pUVar5 = (UAnimInstance *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UAnimInstance_NoRegister();
        iVar11 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar11) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar11 * 8) !=
            &pUVar6->_padding_)) goto LAB_14a908f72;
      }
      if (pUVar5 != (UAnimInstance *)0x0) {
        pIVar7 = GetPoseHistory(this,uVar12);
        if ((pIVar7 == (IPoseHistory *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("PoseHistory",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                               ,0x1b5,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar8 = UAnimInstance::GetRequiredBonesOnAnyThread(pUVar5);
        pUVar9 = FWeakObjectPtr::Get(&(pFVar8->AssetSkeleton).WeakPtr);
        if ((pUVar9 == (UObject *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Skeleton",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                               ,0x1b8,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_98 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        dStack_90 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_a8 = 0;
        local_b0 = CONCAT62(local_b0._2_6_,0xffff);
        local_b8 = local_b8 & 0xffffffffffff0000;
        local_88 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        dStack_80 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_78._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_68 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_60 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_58._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_48 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_40 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        (**(code **)(*(longlong *)pIVar7 + 8))(pIVar7,0,&local_98,pUVar9);
      }
      iVar11 = (this->AnimContexts).ArrayNum;
      pUVar5 = (UAnimInstance *)(ulonglong)(uVar12 + 1);
    } while ((int)(uVar12 + 1) < iVar11);
  }
  return;
}

// VLogContext @ 14a90a0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FInteractionSearchContextBase::VLogContext
          (FInteractionSearchContextBase *this,FColor *param_1)

{
  uchar *puVar1;
  double dVar2;
  uint uVar3;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  UObject *pUVar11;
  TVector<double> *pTVar12;
  ForElementType<UE::Math::TVector<double>_> FVar13;
  ulonglong uVar14;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ForElementType<UE::Math::TVector<double>_> FVar21;
  longlong lVar22;
  uint uVar23;
  undefined1 auStackY_148 [32];
  uint local_108;
  FName local_d0;
  TVector<double> local_c8;
  ForElementType<UE::Math::TVector<double>_> local_b0;
  int local_48 [2];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (FVisualLogger::bIsRecording != 0) {
    uVar3 = (this->AnimContexts).ArrayNum;
    lVar22 = (longlong)(int)uVar3;
    uVar16 = 0;
    local_b0.SecondaryData.Data = (TVector<double> *)0x0;
    local_48[0] = 0;
    local_48[1] = 4;
    if ((int)uVar3 < 1) {
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
    }
    else {
      Core::Private::
      ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::Math::TVector<double>_>_>
                (0x18,8,uVar3,&local_b0,local_48,local_48 + 1);
    }
    uVar14 = uVar16;
    if (0 < (int)uVar3) {
      do {
        uVar17 = (uint)uVar16;
        uVar23 = 0;
        if ((int)uVar17 < (this->AnimContexts).ArrayNum) {
          uVar23 = ~uVar17 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar4 = (this->AnimContexts).AllocatorInstance.SecondaryData;
        FVar15 = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)this;
        if (FVar4 != (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
          FVar15 = FVar4;
        }
        pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      ((longlong)FVar15 + (longlong)(int)uVar17 * 8));
        if (pUVar11 != (UObject *)0x0) {
          pTVar12 = GetContextLocation(&local_c8,pUVar11,true);
          uVar6 = *(undefined4 *)&pTVar12->field0_0x0;
          uVar7 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 4);
          uVar8 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 8);
          uVar9 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 0xc);
          dVar2 = (pTVar12->field0_0x0)._s_0.Z;
          uVar23 = 0;
          if ((int)uVar17 < local_48[0]) {
            uVar23 = ~uVar17 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar13.Data = (TVector<double> *)&local_b0;
          if ((ForElementType<UE::Math::TVector<double>_> *)local_b0.SecondaryData.Data !=
              (ForElementType<UE::Math::TVector<double>_> *)0x0) {
            FVar13.Data = local_b0.SecondaryData.Data;
          }
          puVar1 = ((ForElementType<UE::Math::TVector<double>_> *)FVar13.Data)->InlineData + uVar14;
          *(undefined4 *)puVar1 = uVar6;
          *(undefined4 *)(puVar1 + 4) = uVar7;
          *(undefined4 *)(puVar1 + 8) = uVar8;
          *(undefined4 *)(puVar1 + 0xc) = uVar9;
          *(double *)
           (((ForElementType<UE::Math::TVector<double>_> *)FVar13.Data)->InlineData + uVar14 + 0x10)
               = dVar2;
        }
        uVar16 = (ulonglong)(uVar17 + 1);
        lVar22 = lVar22 + -1;
        uVar14 = uVar14 + 0x18;
      } while (lVar22 != 0);
    }
    uVar14 = 0;
    local_108 = 0;
    uVar16 = uVar14;
    if (0 < (int)uVar3) {
      while (uVar23 = (int)uVar14 + 1, uVar14 = uVar16, (int)uVar23 < (int)uVar3) {
        do {
          uVar19 = 0;
          uVar20 = uVar19;
          do {
            uVar18 = (uint)uVar19;
            uVar17 = 0;
            if ((int)uVar18 < (this->AnimContexts).ArrayNum) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar4 = (this->AnimContexts).AllocatorInstance.SecondaryData;
            FVar15 = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)this;
            if (FVar4 != (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
              FVar15 = FVar4;
            }
            pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar15 + uVar20 * 8));
            if ((pUVar11 != (UObject *)0x0) && (FVisualLogger::bIsRecording != 0)) {
              uVar17 = 0;
              if ((int)uVar23 < local_48[0]) {
                uVar17 = ~uVar23 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FVar13.Data = (TVector<double> *)&local_b0;
              if ((ForElementType<UE::Math::TVector<double>_> *)local_b0.SecondaryData.Data !=
                  (ForElementType<UE::Math::TVector<double>_> *)0x0) {
                FVar13.Data = local_b0.SecondaryData.Data;
              }
              uVar17 = 0;
              if ((int)local_108 < local_48[0]) {
                uVar17 = ~local_108 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FVar21.Data = (TVector<double> *)&local_b0;
              if ((ForElementType<UE::Math::TVector<double>_> *)local_b0.SecondaryData.Data !=
                  (ForElementType<UE::Math::TVector<double>_> *)0x0) {
                FVar21.Data = local_b0.SecondaryData.Data;
              }
              ::FName::FName(&local_d0,LogName);
              FVisualLogger::SegmentLogfImpl
                        (pUVar11,&local_d0,Display,
                         (TVector<double> *)
                         (((ForElementType<UE::Math::TVector<double>_> *)FVar21.Data)->InlineData +
                         uVar16),(TVector<double> *)
                                 (((ForElementType<UE::Math::TVector<double>_> *)FVar13.Data)->
                                  InlineData + uVar14 + 0x18),param_1,0,L"");
            }
            uVar19 = (ulonglong)(uVar18 + 1);
            uVar20 = uVar20 + 1;
          } while ((int)(uVar18 + 1) < (int)uVar3);
          uVar23 = uVar23 + 1;
          uVar14 = uVar14 + 0x18;
        } while ((int)uVar23 < (int)uVar3);
        local_108 = local_108 + 1;
        uVar16 = uVar16 + 0x18;
        uVar14 = (ulonglong)local_108;
      }
    }
  }
  return;
}

// Add @ 14a920720

void __thiscall
UE::PoseSearch::FInteractionSearchContextBase::Add
          (FInteractionSearchContextBase *this,UObject *param_1,IPoseHistory *param_2,FName param_3)

{
  int *piVar1;
  TArray<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  atomic<int> *paVar3;
  TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  atomic<int> aVar5;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  UObject *pUVar10;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar11;
  ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> FVar12;
  ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> FVar13;
  undefined8 *puVar14;
  ForElementType<FName> FVar15;
  UObject *local_res8;
  FName local_res20;
  FWeakObjectPtr local_38;
  TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> local_30;
  
  local_res20 = param_3;
  if (((param_1 == (UObject *)0x0) || (param_2 == (IPoseHistory *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AnimContext && PoseHistory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchInteractionIsland.h"
                         ,0x22,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar9 = (this->AnimContexts).ArrayNum;
  if (((iVar9 != 0) && (pUVar10 = GetAnimContext(this,iVar9 + -1), param_1 <= pUVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AnimContexts.IsEmpty() || GetAnimContext(AnimContexts.Num() - 1) < AnimContext"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchInteractionIsland.h"
                         ,0x26,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    GC::MarkAsReachable(param_1);
  }
  local_38.ObjectIndex = 0;
  local_38.ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_res8);
  FVar6 = (this->AnimContexts).AllocatorInstance.SecondaryData;
  FVar11 = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)this;
  if (FVar6 != (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
    FVar11 = FVar6;
  }
  if ((ulonglong)FVar11 <= &local_38) {
    FVar11 = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)this;
    if (FVar6 != (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
      FVar11 = FVar6;
    }
    if ((&local_38 <
         (FWeakObjectPtr *)((longlong)FVar11 + (longlong)(this->AnimContexts).ArrayMax * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = (this->AnimContexts).ArrayNum;
  piVar1 = &(this->AnimContexts).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>_>
                      (0x408,(ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> *)this,
                       piVar1);
  }
  (this->AnimContexts).ArrayNum = iVar9 + 1;
  pTVar2 = &this->PoseHistories;
  FVar6 = (this->AnimContexts).AllocatorInstance.SecondaryData;
  FVar11 = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)this;
  if (FVar6 != (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
    FVar11 = FVar6;
  }
  *(FWeakObjectPtr *)((longlong)FVar11 + (longlong)iVar9 * 8) = local_38;
  FVar12 = (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)
           TSharedFromThis<UE::PoseSearch::IPoseHistory,1>::AsWeak
                     ((TSharedFromThis<UE::PoseSearch::IPoseHistory,1> *)&param_2->field_0x8,
                      &local_30);
  FVar13 = (this->PoseHistories).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0) {
    FVar13 = (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)pTVar2;
  }
  if ((((ulonglong)FVar13 <= (ulonglong)FVar12) &&
      ((ulonglong)FVar12 <
       (ulonglong)((longlong)(this->PoseHistories).ArrayMax * 0x10 + (longlong)FVar13))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar9 = (this->PoseHistories).ArrayNum;
  piVar1 = &(this->PoseHistories).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>_>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PoseHistories).ArrayNum = iVar9 + 1;
  FVar13 = (this->PoseHistories).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)0x0) {
    FVar13 = (ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>)pTVar2;
  }
  puVar14 = (undefined8 *)((longlong)FVar13 + (longlong)iVar9 * 0x10);
  *puVar14 = *(undefined8 *)FVar12;
  puVar14[1] = ((FWeakReferencer<1> *)((longlong)FVar12 + 8))->ReferenceController;
  ((FWeakReferencer<1> *)((longlong)FVar12 + 8))->ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)FVar12 = 0;
  if (local_30.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = &(local_30.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar5 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)((local_30.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_30.WeakReferenceCount.ReferenceController,1);
    }
  }
  FVar15 = (this->Roles).AllocatorInstance.SecondaryData;
  pTVar4 = &this->Roles;
  if (FVar15 == (ForElementType<FName>)0x0) {
    FVar15 = (ForElementType<FName>)pTVar4;
  }
  if ((((ulonglong)FVar15 <= &local_res20) &&
      (&local_res20 < (FName *)((longlong)FVar15 + (longlong)(this->Roles).ArrayMax * 8))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar9 = (this->Roles).ArrayNum;
  piVar1 = &(this->Roles).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                      (0x408,&pTVar4->AllocatorInstance,piVar1);
  }
  (this->Roles).ArrayNum = iVar9 + 1;
  FVar15 = (this->Roles).AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<FName>)0x0) {
    FVar15 = (ForElementType<FName>)pTVar4;
  }
  *(FName *)((longlong)FVar15 + (longlong)iVar9 * 8) = local_res20;
  return;
}

