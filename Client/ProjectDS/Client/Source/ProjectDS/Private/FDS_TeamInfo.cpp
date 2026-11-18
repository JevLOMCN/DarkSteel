// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// ~FDS_TeamInfo @ 14b44fab0

void __thiscall FDS_TeamInfo::~FDS_TeamInfo(FDS_TeamInfo *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->RemovedTeamTypeMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RemovedTeamTypeMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->RemovedTeamTypeMap);
  *(undefined4 *)&(this->AddedTeamTypeMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AddedTeamTypeMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->AddedTeamTypeMap);
  *(undefined4 *)&(this->TeamTypeMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TeamTypeMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (this);
  return;
}

// AddTeamInfo @ 14ba366a0

void __thiscall
FDS_TeamInfo::AddTeamInfo(FDS_TeamInfo *this,ItemCase *param_1,long64 param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined1 *puVar5;
  void *local_38;
  undefined8 local_30;
  ItemCase *local_28;
  void **local_20;
  
  if (*(int *)&(this->TeamTypeMap).field_0x8 != *(int *)&(this->TeamTypeMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->TeamTypeMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->TeamTypeMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->TeamTypeMap).field_0x48 - kNeutral & *param_1) * 4);
    if (iVar3 != -1) {
      do {
        if (*(ItemCase *)((longlong)iVar3 * 0x20 + *(longlong *)&this->TeamTypeMap) == *param_1)
        goto LAB_14ba36745;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->TeamTypeMap);
      } while (iVar3 != -1);
    }
  }
  local_20 = &local_38;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = param_1;
  TSet<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_TeamType::ItemCase_const_&,TArray<__int64,TSizedDefaultAllocator<32>_>_&&>_>
            (this,(TPairInitializer<TeamType::ItemCase_const_&,TArray<__int64,TSizedDefaultAllocator<32>_>_&&>
                   *)&stack0x00000020,(bool *)&local_28);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
LAB_14ba36745:
  pTVar4 = TMapBase<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
           ::FindChecked(this,*param_1);
  if (param_3) {
    if (0 < pTVar4->ArrayNum) {
      pTVar4 = TMapBase<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
               ::FindChecked(this,*param_1);
      if ((pTVar4->ArrayNum < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(long64 *)(pTVar4->AllocatorInstance).Data = param_2;
      return;
    }
    pTVar4 = TMapBase<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
             ::FindChecked(this,*param_1);
  }
  iVar3 = pTVar4->ArrayNum;
  if (iVar3 == pTVar4->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar3 + 1;
  *(long64 *)((pTVar4->AllocatorInstance).Data + (longlong)iVar3 * 8) = param_2;
  return;
}

// GetFactionType @ 14ba4ab10

EDS_FactionType __thiscall FDS_TeamInfo::GetFactionType(FDS_TeamInfo *this)

{
  code *pcVar1;
  bool bVar2;
  EDS_FactionType EVar3;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  undefined1 *puVar6;
  
  if (*(int *)&(this->TeamTypeMap).field_0x8 != *(int *)&(this->TeamTypeMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->TeamTypeMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->TeamTypeMap).field_0x38;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->TeamTypeMap).field_0x48 - 1U & 2) * 4);
    if (iVar5 != -1) {
      do {
        if (*(int *)((longlong)iVar5 * 0x20 + *(longlong *)&this->TeamTypeMap) == 2) {
          pTVar4 = TMapBase<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked(this,kFaction);
          if (pTVar4->ArrayNum < 1) {
            return None;
          }
          pTVar4 = TMapBase<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked(this,kFaction);
          if ((pTVar4->ArrayNum < 1) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            EVar3 = (*pcVar1)();
            return EVar3;
          }
          return (EDS_FactionType)*(pTVar4->AllocatorInstance).Data;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *(longlong *)&this->TeamTypeMap);
      } while (iVar5 != -1);
    }
  }
  return None;
}

// IsContainsTeamID @ 14ba5ad00

bool __thiscall FDS_TeamInfo::IsContainsTeamID(FDS_TeamInfo *this,ItemCase *param_1,long64 param_2)

{
  FScriptContainerElement *pFVar1;
  ItemCase IVar2;
  int iVar3;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  undefined1 *puVar6;
  
  IVar2 = *param_1;
  if (*(int *)&(this->TeamTypeMap).field_0x8 != *(int *)&(this->TeamTypeMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->TeamTypeMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->TeamTypeMap).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->TeamTypeMap).field_0x48 - kNeutral & IVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(ItemCase *)((longlong)iVar3 * 0x20 + *(longlong *)&this->TeamTypeMap) == IVar2) {
          pTVar4 = TMapBase<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked(this,IVar2);
          pFVar5 = (pTVar4->AllocatorInstance).Data;
          pFVar1 = pFVar5 + (longlong)pTVar4->ArrayNum * 8;
          if (pFVar5 == pFVar1) {
            return false;
          }
          do {
            if (*(longlong *)pFVar5 == param_2) {
              return true;
            }
            pFVar5 = pFVar5 + 8;
          } while (pFVar5 != pFVar1);
          return false;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->TeamTypeMap);
      } while (iVar3 != -1);
    }
  }
  return false;
}

// IsEnemyFaction @ 14ba5afb0

bool __thiscall FDS_TeamInfo::IsEnemyFaction(FDS_TeamInfo *this,FDS_TeamInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  EDS_FactionType EVar3;
  FScriptContainerElement FVar4;
  FDS_FactionBaseTableRow *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res18 [16];
  
  EVar3 = GetFactionType(this);
  if ((EVar3 != None) &&
     (pFVar5 = FDS_FactionBaseTableRow::Get((ulonglong)EVar3,true),
     pFVar5 != (FDS_FactionBaseTableRow *)0x0)) {
    FVar4 = (FScriptContainerElement)GetFactionType(param_1);
    pFVar6 = (pFVar5->Enemy).AllocatorInstance.Data;
    iVar2 = (pFVar5->Enemy).ArrayNum;
    pFVar1 = pFVar6 + iVar2;
    while( true ) {
      if ((pFVar5->Enemy).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_EDS_FactionType_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar6 == pFVar1) break;
      if (*pFVar6 == FVar4) {
        return true;
      }
      pFVar6 = pFVar6 + 1;
    }
  }
  return false;
}

// IsEnemyTeam @ 14ba5b040

/* WARNING: Type propagation algorithm not settling */

bool __thiscall FDS_TeamInfo::IsEnemyTeam(FDS_TeamInfo *this,FDS_TeamInfo *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  EDS_FactionType EVar8;
  FScriptContainerElement FVar9;
  uint uVar10;
  int iVar11;
  FDS_FactionBaseTableRow *pFVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  ItemCase *pIVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&(this->TeamTypeMap).field_0x28;
  puVar1 = &(this->TeamTypeMap).field_0x10;
  iVar16 = 0;
  uVar10 = 1;
  iVar19 = 0;
  iVar11 = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->TeamTypeMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar15 = *puVar20;
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar16;
      iVar19 = iVar19 + 0x20;
      iVar16 = iVar16 + 1;
      iVar11 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14ba5b0dd;
      uVar15 = puVar20[lVar13 + 1];
    }
    uVar10 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13;
    iVar11 = local_res20 + -1 + iVar19;
    if (iVar4 < iVar11) {
      iVar11 = iVar4;
    }
  }
LAB_14ba5b0dd:
  uVar15 = *(uint *)&(this->TeamTypeMap).field_0x28;
  uVar21 = uVar15 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar16);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iVar11;
  TStack_60.BaseBitIndex = iVar19;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->TeamTypeMap).field_0x8 -
                       *(int *)&(this->TeamTypeMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar10 = *(uint *)&(this->TeamTypeMap).field_0x28;
  if (uVar15 != uVar10) {
    puVar17 = *(undefined1 **)&(this->TeamTypeMap).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar16;
      uVar21 = uVar21 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_14ba5b1e0;
      uVar15 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar21;
    if ((int)uVar10 < (int)uVar15) {
      uVar15 = uVar10;
    }
  }
LAB_14ba5b1e0:
  while( true ) {
    if (*(int *)&(this->TeamTypeMap).field_0x8 - *(int *)&(this->TeamTypeMap).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar15) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pIVar18 = (ItemCase *)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)&this->TeamTypeMap);
    if ((*pIVar18 != kFaction) && (bVar6 = IsSameTeam(this,param_1,pIVar18), bVar6)) {
      return false;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  EVar8 = GetFactionType(this);
  if ((EVar8 != None) &&
     (pFVar12 = FDS_FactionBaseTableRow::Get((ulonglong)EVar8,true),
     pFVar12 != (FDS_FactionBaseTableRow *)0x0)) {
    FVar9 = (FScriptContainerElement)GetFactionType(param_1);
    pFVar14 = (pFVar12->Enemy).AllocatorInstance.Data;
    iVar4 = (pFVar12->Enemy).ArrayNum;
    pFVar2 = pFVar14 + iVar4;
    while( true ) {
      if ((pFVar12->Enemy).ArrayNum != iVar4) {
        `TCheckedPointerIterator<enum_EDS_FactionType_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar14 == pFVar2) break;
      if (*pFVar14 == FVar9) {
        return true;
      }
      pFVar14 = pFVar14 + 1;
    }
  }
  return false;
}

// IsFriendTeam @ 14ba5b3c0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall FDS_TeamInfo::IsFriendTeam(FDS_TeamInfo *this,FDS_TeamInfo *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  EDS_FactionType EVar8;
  FScriptContainerElement FVar9;
  uint uVar10;
  int iVar11;
  FDS_FactionBaseTableRow *pFVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  ItemCase *pIVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&(this->TeamTypeMap).field_0x28;
  puVar1 = &(this->TeamTypeMap).field_0x10;
  iVar16 = 0;
  uVar10 = 1;
  iVar19 = 0;
  iVar11 = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->TeamTypeMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar15 = *puVar20;
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar16;
      iVar19 = iVar19 + 0x20;
      iVar16 = iVar16 + 1;
      iVar11 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14ba5b45d;
      uVar15 = puVar20[lVar13 + 1];
    }
    uVar10 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13;
    iVar11 = local_res20 + -1 + iVar19;
    if (iVar4 < iVar11) {
      iVar11 = iVar4;
    }
  }
LAB_14ba5b45d:
  uVar15 = *(uint *)&(this->TeamTypeMap).field_0x28;
  uVar21 = uVar15 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar16);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iVar11;
  TStack_60.BaseBitIndex = iVar19;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->TeamTypeMap).field_0x8 -
                       *(int *)&(this->TeamTypeMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar10 = *(uint *)&(this->TeamTypeMap).field_0x28;
  if (uVar15 != uVar10) {
    puVar17 = *(undefined1 **)&(this->TeamTypeMap).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar16;
      uVar21 = uVar21 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_14ba5b560;
      uVar15 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar21;
    if ((int)uVar10 < (int)uVar15) {
      uVar15 = uVar10;
    }
  }
LAB_14ba5b560:
  while( true ) {
    if (*(int *)&(this->TeamTypeMap).field_0x8 - *(int *)&(this->TeamTypeMap).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar15) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pIVar18 = (ItemCase *)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)&this->TeamTypeMap);
    if ((*pIVar18 != kFaction) && (bVar6 = IsSameTeam(this,param_1,pIVar18), bVar6)) {
      return true;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  EVar8 = GetFactionType(this);
  if (EVar8 == None) {
    return false;
  }
  pFVar12 = FDS_FactionBaseTableRow::Get((ulonglong)EVar8,true);
  if (pFVar12 != (FDS_FactionBaseTableRow *)0x0) {
    FVar9 = (FScriptContainerElement)GetFactionType(param_1);
    pFVar14 = (pFVar12->Friendly).AllocatorInstance.Data;
    iVar4 = (pFVar12->Friendly).ArrayNum;
    pFVar2 = pFVar14 + iVar4;
    while( true ) {
      if ((pFVar12->Friendly).ArrayNum != iVar4) {
        `TCheckedPointerIterator<enum_EDS_FactionType_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar14 == pFVar2) break;
      if (*pFVar14 == FVar9) {
        return true;
      }
      pFVar14 = pFVar14 + 1;
    }
    return false;
  }
  return false;
}

// IsFriendlyFaction @ 14ba5b640

bool __thiscall FDS_TeamInfo::IsFriendlyFaction(FDS_TeamInfo *this,FDS_TeamInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  EDS_FactionType EVar3;
  FScriptContainerElement FVar4;
  FDS_FactionBaseTableRow *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res18 [16];
  
  EVar3 = GetFactionType(this);
  if ((EVar3 != None) &&
     (pFVar5 = FDS_FactionBaseTableRow::Get((ulonglong)EVar3,true),
     pFVar5 != (FDS_FactionBaseTableRow *)0x0)) {
    FVar4 = (FScriptContainerElement)GetFactionType(param_1);
    pFVar6 = (pFVar5->Friendly).AllocatorInstance.Data;
    iVar2 = (pFVar5->Friendly).ArrayNum;
    pFVar1 = pFVar6 + iVar2;
    while( true ) {
      if ((pFVar5->Friendly).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_EDS_FactionType_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar6 == pFVar1) break;
      if (*pFVar6 == FVar4) {
        return true;
      }
      pFVar6 = pFVar6 + 1;
    }
  }
  return false;
}

// IsNeutralTeam @ 14ba5baf0

bool __thiscall FDS_TeamInfo::IsNeutralTeam(FDS_TeamInfo *this,FDS_TeamInfo *param_1)

{
  bool bVar1;
  
  bVar1 = IsFriendTeam(this,param_1);
  if (!bVar1) {
    bVar1 = IsEnemyTeam(this,param_1);
    return !bVar1;
  }
  return false;
}

// IsSameTeam @ 14ba5cbc0

bool __thiscall FDS_TeamInfo::IsSameTeam(FDS_TeamInfo *this,FDS_TeamInfo *param_1,ItemCase *param_2)

{
  FScriptContainerElement *pFVar1;
  ItemCase IVar2;
  bool bVar3;
  int iVar4;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined1 *puVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res18 [8];
  
  IVar2 = *param_2;
  if (((IVar2 & ~kFaction) != ITEM_NOT_SET) &&
     (*(int *)&(this->TeamTypeMap).field_0x8 != *(int *)&(this->TeamTypeMap).field_0x34)) {
    puVar6 = *(undefined1 **)&(this->TeamTypeMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->TeamTypeMap).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->TeamTypeMap).field_0x48 - kNeutral & IVar2) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ItemCase *)((longlong)iVar4 * 0x20 + *(longlong *)&this->TeamTypeMap) == IVar2) {
          pTVar5 = TMapBase<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked(this,IVar2);
          pFVar7 = (pTVar5->AllocatorInstance).Data;
          iVar4 = pTVar5->ArrayNum;
          pFVar1 = pFVar7 + (longlong)iVar4 * 8;
          while( true ) {
            if (pTVar5->ArrayNum != iVar4) {
              `TCheckedPointerIterator<__int64_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res18);
            }
            if (pFVar7 == pFVar1) break;
            bVar3 = IsContainsTeamID(param_1,param_2,*(long64 *)pFVar7);
            if (bVar3) {
              return true;
            }
            pFVar7 = pFVar7 + 8;
          }
          return false;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)&this->TeamTypeMap);
      } while (iVar4 != -1);
    }
  }
  return false;
}

// IsTeamTypeValueChanged @ 14ba5d480

bool __thiscall FDS_TeamInfo::IsTeamTypeValueChanged(FDS_TeamInfo *this,ItemCase *param_1)

{
  ItemCase IVar1;
  undefined1 *puVar2;
  int iVar3;
  
  IVar1 = *param_1;
  if (*(int *)&(this->AddedTeamTypeMap).field_0x8 != *(int *)&(this->AddedTeamTypeMap).field_0x34) {
    puVar2 = *(undefined1 **)&(this->AddedTeamTypeMap).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->AddedTeamTypeMap).field_0x38;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->AddedTeamTypeMap).field_0x48 - kNeutral & IVar1) * 4)
    ;
    if (iVar3 != -1) {
      do {
        if (*(ItemCase *)((longlong)iVar3 * 0x20 + *(longlong *)&this->AddedTeamTypeMap) == IVar1) {
          if (iVar3 != -1) {
            return true;
          }
          break;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->AddedTeamTypeMap);
      } while (iVar3 != -1);
    }
  }
  if (*(int *)&(this->RemovedTeamTypeMap).field_0x8 !=
      *(int *)&(this->RemovedTeamTypeMap).field_0x34) {
    puVar2 = *(undefined1 **)&(this->RemovedTeamTypeMap).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->RemovedTeamTypeMap).field_0x38;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->RemovedTeamTypeMap).field_0x48 - kNeutral & IVar1) *
                              4);
    if (iVar3 != -1) {
      do {
        if (*(ItemCase *)((longlong)iVar3 * 0x20 + *(longlong *)&this->RemovedTeamTypeMap) == IVar1)
        {
          return true;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->RemovedTeamTypeMap);
      } while (iVar3 != -1);
    }
  }
  return false;
}

// IsTeamTypeValueChanged @ 14ba5d550

bool __thiscall
FDS_TeamInfo::IsTeamTypeValueChanged
          (FDS_TeamInfo *this,ItemCase *param_1,TArray<__int64,TSizedDefaultAllocator<32>_> *param_2
          )

{
  int *piVar1;
  int *piVar2;
  ItemCase IVar3;
  FScriptContainerElement *_Src;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined1 *puVar11;
  
  piVar1 = &param_2->ArrayMax;
  piVar2 = &param_2->ArrayNum;
  *piVar2 = 0;
  if (param_2->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  IVar3 = *param_1;
  if (*(int *)&(this->AddedTeamTypeMap).field_0x8 != *(int *)&(this->AddedTeamTypeMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->AddedTeamTypeMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->AddedTeamTypeMap).field_0x38;
    }
    iVar8 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->AddedTeamTypeMap).field_0x48 - kNeutral & IVar3) * 4
                    );
    if (iVar8 != -1) {
      do {
        if (*(ItemCase *)((longlong)iVar8 * 0x20 + *(longlong *)&this->AddedTeamTypeMap) == IVar3) {
          pTVar10 = TMapBase<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindChecked(&this->AddedTeamTypeMap,IVar3);
          if (param_2 != pTVar10) {
            iVar8 = pTVar10->ArrayNum;
            _Src = (pTVar10->AllocatorInstance).Data;
            *piVar2 = iVar8;
            if ((iVar8 == 0) && (*piVar1 == 0)) {
              *piVar1 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar8,*piVar1,&param_2->AllocatorInstance,iVar8,piVar1);
              if (iVar8 != 0) {
                memcpy((param_2->AllocatorInstance).Data,_Src,(longlong)iVar8 << 3);
              }
            }
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *(longlong *)&this->AddedTeamTypeMap);
      } while (iVar8 != -1);
    }
  }
  IVar3 = *param_1;
  if (*(int *)&(this->RemovedTeamTypeMap).field_0x8 !=
      *(int *)&(this->RemovedTeamTypeMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->RemovedTeamTypeMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->RemovedTeamTypeMap).field_0x38;
    }
    iVar8 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->RemovedTeamTypeMap).field_0x48 - kNeutral & IVar3) *
                    4);
    if (iVar8 != -1) {
      lVar4 = *(longlong *)&this->RemovedTeamTypeMap;
      do {
        if (*(ItemCase *)((longlong)iVar8 * 0x20 + lVar4) == IVar3) {
          pTVar10 = TMapBase<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindChecked(&this->RemovedTeamTypeMap,IVar3);
          if ((param_2 == pTVar10) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x96e,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          iVar8 = pTVar10->ArrayNum;
          if (iVar8 != 0) {
            iVar9 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,iVar8,&param_2->AllocatorInstance,piVar2,piVar1);
            memcpy((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8,
                   (pTVar10->AllocatorInstance).Data,(longlong)iVar8 << 3);
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar4);
      } while (iVar8 != -1);
    }
  }
  return 0 < *piVar2;
}

// UpdateTeamInfo @ 14ba820f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FDS_TeamInfo::UpdateTeamInfo(FDS_TeamInfo *this,TeamInfo *param_1)

{
  TMap<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  long64 *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  ItemCase IVar5;
  ItemCase IVar6;
  code *pcVar7;
  RepeatedPtrField<TeamType> *pRVar8;
  FDS_TeamInfo *pFVar9;
  bool bVar10;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  int iVar15;
  Impl_ *pIVar16;
  ItemCase *pIVar17;
  uint uVar18;
  long64 *plVar19;
  FDS_TeamInfo *this_01;
  uint uVar20;
  ItemCase *pIVar21;
  longlong *plVar22;
  long64 lVar23;
  ForElementType<unsigned_int> FVar24;
  ForElementType<unsigned_int> FVar25;
  undefined1 *puVar26;
  uint uVar27;
  TBitArray<FDefaultBitArrayAllocator> *pTVar28;
  undefined1 auStackY_238 [32];
  uint local_208;
  undefined1 local_204;
  undefined1 local_203;
  undefined1 local_202;
  undefined1 local_201;
  undefined1 local_200 [8];
  ulonglong local_1f8;
  FDS_TeamInfo *local_1f0;
  ItemCase local_1e8;
  ItemCase local_1e4;
  ItemCase local_1e0;
  ItemCase local_1dc;
  ItemCase local_1d8 [2];
  ForElementType<unsigned_int> local_1d0;
  void *local_1c8;
  undefined8 local_1c0;
  void *local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  int iStack_1a0;
  uint uStack_19c;
  TBitArray<FDefaultBitArrayAllocator> *local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  int local_188;
  int iStack_180;
  undefined4 uStack_17c;
  int local_178;
  int local_174;
  undefined1 local_170 [16];
  FDS_TeamInfo *local_160;
  int iStack_158;
  uint uStack_154;
  ForElementType<unsigned_int> local_150;
  undefined4 uStack_148;
  uint uStack_144;
  int local_140;
  uint uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  longlong *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  FDS_TeamInfo *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  ItemCase *local_d0;
  void **local_c8;
  ItemCase *local_c0;
  void **local_b8;
  undefined4 local_94;
  longlong local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  iVar15 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_1f0 = this;
  TSet<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::operator=(&local_88,
              (TSet<TTuple<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)this);
  bVar10 = 1 < *(int *)&(this->TeamTypeMap).field_0x48;
  if (!bVar10) {
    TSet<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements(this);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(this,0,*(int *)&(this->TeamTypeMap).field_0x8);
  puVar26 = &(this->TeamTypeMap).field_0xc;
  *(undefined4 *)&(this->TeamTypeMap).field_0x8 = 0;
  if (*(int *)puVar26 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)puVar26);
  }
  local_1d0 = (ForElementType<unsigned_int>)&(this->TeamTypeMap).field_0x10;
  *(undefined4 *)&(this->TeamTypeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TeamTypeMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->TeamTypeMap).field_0x2c;
  *(undefined4 *)&(this->TeamTypeMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->TeamTypeMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)local_1d0,0);
  }
  local_1f8 = 1;
  if (bVar10) {
    *(undefined4 *)&(this->TeamTypeMap).field_0x48 = 1;
    TSet<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash(this);
  }
  bVar10 = 1 < *(int *)&(this->AddedTeamTypeMap).field_0x48;
  if (!bVar10) {
    TSet<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements(&this->AddedTeamTypeMap);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this->AddedTeamTypeMap,0,*(int *)&(this->AddedTeamTypeMap).field_0x8);
  puVar26 = &(this->AddedTeamTypeMap).field_0xc;
  *(undefined4 *)&(this->AddedTeamTypeMap).field_0x8 = 0;
  if (*(int *)puVar26 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->AddedTeamTypeMap,0,(int *)puVar26);
  }
  *(undefined4 *)&(this->AddedTeamTypeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AddedTeamTypeMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->AddedTeamTypeMap).field_0x2c;
  *(undefined4 *)&(this->AddedTeamTypeMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->AddedTeamTypeMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AddedTeamTypeMap).field_0x10,0);
  }
  if (bVar10) {
    *(undefined4 *)&(this->AddedTeamTypeMap).field_0x48 = 1;
    TSet<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash(&this->AddedTeamTypeMap);
  }
  this_00 = &this->RemovedTeamTypeMap;
  bVar10 = 1 < *(int *)&(this->RemovedTeamTypeMap).field_0x48;
  if (!bVar10) {
    TSet<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(this_00,0,*(int *)&(this->RemovedTeamTypeMap).field_0x8);
  puVar26 = &(this->RemovedTeamTypeMap).field_0xc;
  *(undefined4 *)&(this->RemovedTeamTypeMap).field_0x8 = 0;
  if (*(int *)puVar26 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar26);
  }
  *(undefined4 *)&(this->RemovedTeamTypeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RemovedTeamTypeMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->RemovedTeamTypeMap).field_0x2c;
  *(undefined4 *)&(this->RemovedTeamTypeMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->RemovedTeamTypeMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RemovedTeamTypeMap).field_0x10,0);
  }
  if (bVar10) {
    *(undefined4 *)&(this->RemovedTeamTypeMap).field_0x48 = 1;
    TSet<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  uVar13 = *(ulonglong *)&(param_1->_impl_).teams_;
  if ((uVar13 & 1) == 0) {
    pIVar16 = &param_1->_impl_;
  }
  else {
    pIVar16 = (Impl_ *)(uVar13 + 7);
  }
  iVar3 = *(int *)&(param_1->_impl_).teams_.field_0x8;
  pRVar8 = &pIVar16->teams_;
  local_208 = local_78.NumBits;
  for (; local_78.NumBits = local_208,
      pIVar16 != (Impl_ *)(&pRVar8->field_0x0 + (longlong)iVar3 * 8);
      pIVar16 = (Impl_ *)&(pIVar16->teams_).field_0x8) {
    lVar12 = *(longlong *)&pIVar16->teams_;
    iVar4 = *(int *)(lVar12 + 0x1c);
    if (iVar4 == 2) {
      lVar23 = (long64)*(int *)(lVar12 + 0x10);
      bVar10 = true;
      pIVar21 = local_1d8;
      local_1d8[0] = kFaction;
LAB_14ba8240b:
      AddTeamInfo(this,pIVar21,lVar23,bVar10);
    }
    else {
      if (iVar4 == 3) {
        lVar23 = *(long64 *)(lVar12 + 0x10);
        bVar10 = false;
        pIVar21 = &local_1dc;
        local_1dc = kUnion;
        goto LAB_14ba8240b;
      }
      if (iVar4 == 4) {
        lVar23 = *(long64 *)(lVar12 + 0x10);
        bVar10 = false;
        pIVar21 = &local_1e0;
        local_1e0 = kGuild;
        goto LAB_14ba8240b;
      }
      if (iVar4 == 5) {
        lVar23 = *(long64 *)(lVar12 + 0x10);
        bVar10 = false;
        pIVar21 = &local_1e4;
        local_1e4 = kParty;
        goto LAB_14ba8240b;
      }
      if (iVar4 == 6) {
        lVar23 = *(long64 *)(lVar12 + 0x10);
        bVar10 = false;
        pIVar21 = &local_1e8;
        local_1e8 = kPlayer;
        goto LAB_14ba8240b;
      }
    }
    local_208 = local_78.NumBits;
  }
  uStack_19c = 1;
  uStack_18c = 0;
  iStack_1a0 = iVar15;
  local_188 = iVar15;
  if (local_208 != 0) {
    FVar24 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar24 = local_78.AllocatorInstance.SecondaryData;
    }
    uStack_19c = *(uint *)FVar24;
    while (uStack_19c == 0) {
      lVar12 = (longlong)iStack_1a0;
      local_188 = local_188 + 0x20;
      iStack_1a0 = iStack_1a0 + 1;
      uStack_19c = 1;
      uStack_18c = local_208;
      if ((int)((local_208 - 1) + ((int)(local_208 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1a0)
      goto LAB_14ba824a0;
      uStack_19c = *(uint *)((longlong)FVar24 + (lVar12 + 1) * 4);
    }
    uStack_19c = -uStack_19c & uStack_19c;
    uVar13 = (ulonglong)uStack_19c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_178 = (int)lVar12;
    uStack_18c = local_178 + -1 + local_188;
    if ((int)local_208 < (int)uStack_18c) {
      uStack_18c = local_208;
    }
  }
LAB_14ba824a0:
  local_1a8 = &local_88;
  local_198 = &local_78;
  iStack_180 = (int)local_80 - local_54;
  uVar18 = local_208 & 0xffffffe0;
  TStack_128._padding_ = CONCAT44(uStack_19c,iStack_1a0);
  uStack_190 = 0xffffffff;
  TStack_128.CurrentBitIndex = uStack_18c;
  TStack_128.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)local_208 >> 5;
  TStack_128._28_4_ = local_94;
  TStack_128.BaseBitIndex = local_188;
  uStack_108 = CONCAT44(uStack_17c,iStack_180);
  local_130 = local_1a8;
  TStack_128.Array = local_198;
  if (((int)local_208 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (local_208 != local_78.NumBits) {
    FVar24 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar24 = local_78.AllocatorInstance.SecondaryData;
    }
    uVar20 = -1 << ((byte)local_208 & 0x1f) & *(uint *)((longlong)FVar24 + (longlong)iVar15 * 4);
    while (uVar20 == 0) {
      lVar12 = (longlong)iVar15;
      uVar18 = uVar18 + 0x20;
      iVar15 = iVar15 + 1;
      if ((int)((local_78.NumBits - 1U) + ((int)(local_78.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar15) {
        local_208 = local_78.NumBits;
        goto LAB_14ba825c5;
      }
      uVar20 = *(uint *)((longlong)FVar24 + (lVar12 + 1) * 4);
    }
    uVar13 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_174 = (int)lVar12;
    local_208 = (uVar18 - 1) + local_174;
    if (local_78.NumBits < (int)local_208) {
      local_208 = local_78.NumBits;
    }
  }
LAB_14ba825c5:
  while( true ) {
    plVar2 = local_130;
    if ((int)local_130[1] - *(int *)((longlong)local_130 + 0x34) != (int)uStack_108) {
      local_204 = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_204);
    }
    FVar24 = local_1d0;
    this_01 = local_1f0;
    if (((TStack_128.CurrentBitIndex == local_208) && (TStack_128.Array == &local_78)) &&
       (plVar2 == &local_88)) break;
    pIVar21 = (ItemCase *)((longlong)TStack_128.CurrentBitIndex * 0x20 + *plVar2);
    plVar19 = *(long64 **)(pIVar21 + 2);
    IVar5 = pIVar21[4];
    plVar1 = plVar19 + (int)IVar5;
    while( true ) {
      if (pIVar21[4] != IVar5) {
        local_203 = 0;
        `TCheckedPointerIterator<__int64_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_203);
      }
      if (plVar19 == plVar1) break;
      bVar10 = IsContainsTeamID(this_01,pIVar21,*plVar19);
      if (!bVar10) {
        if (*(int *)&(this_01->RemovedTeamTypeMap).field_0x8 !=
            *(int *)&(this->RemovedTeamTypeMap).field_0x34) {
          puVar26 = *(undefined1 **)&(this->RemovedTeamTypeMap).field_0x40;
          puVar14 = &(this->RemovedTeamTypeMap).field_0x38;
          if (puVar26 != (undefined1 *)0x0) {
            puVar14 = puVar26;
          }
          iVar15 = *(int *)(puVar14 +
                           (ulonglong)
                           (*(int *)&(this->RemovedTeamTypeMap).field_0x48 - kNeutral & *pIVar21) *
                           4);
          if (iVar15 != -1) {
            do {
              if (*(ItemCase *)(*(longlong *)this_00 + (longlong)iVar15 * 0x20) == *pIVar21)
              goto LAB_14ba826f0;
              iVar15 = *(int *)(*(longlong *)this_00 + (longlong)iVar15 * 0x20 + 0x18);
            } while (iVar15 != -1);
          }
        }
        local_1c8 = (void *)0x0;
        local_1c0 = 0;
        local_c8 = &local_1c8;
        local_d0 = pIVar21;
        TSet<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<enum_TeamType::ItemCase_const_&,TArray<__int64,TSizedDefaultAllocator<32>_>_&&>_>
                  (this_00,(TPairInitializer<TeamType::ItemCase_const_&,TArray<__int64,TSizedDefaultAllocator<32>_>_&&>
                            *)local_170,(bool *)&local_d0);
        if (local_1c8 != (void *)0x0) {
          FMemory::Free(local_1c8);
        }
LAB_14ba826f0:
        pTVar11 = TMapBase<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindChecked(this_00,*pIVar21);
        iVar15 = pTVar11->ArrayNum;
        if (iVar15 == pTVar11->ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
        }
        pTVar11->ArrayNum = iVar15 + 1;
        *(long64 *)((pTVar11->AllocatorInstance).Data + (longlong)iVar15 * 8) = *plVar19;
      }
      plVar19 = plVar19 + 1;
    }
    TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
  }
  iStack_158 = 0;
  local_140 = 0;
  uVar18 = *(int *)((longlong)local_1d0 + 0x18);
  uStack_144 = 0;
  if (uVar18 == 0) {
LAB_14ba827df:
    uStack_154 = (uint)local_1f8;
  }
  else {
    FVar25 = *(ForElementType<unsigned_int> *)((longlong)local_1d0 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_1d0 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar25 = local_1d0;
    }
    uStack_154 = *(uint *)FVar25;
    while (uStack_154 == 0) {
      lVar12 = (longlong)iStack_158;
      local_140 = local_140 + 0x20;
      iStack_158 = iStack_158 + 1;
      uStack_144 = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_158)
      goto LAB_14ba827df;
      uStack_154 = ((uint *)((longlong)FVar25 + 4))[lVar12];
    }
    uStack_154 = -uStack_154 & uStack_154;
    uVar13 = (ulonglong)uStack_154 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_170._4_4_ = (undefined4)lVar12;
    uStack_144 = local_140 + -1 + local_170._4_4_;
    if ((int)uVar18 < (int)uStack_144) {
      uStack_144 = uVar18;
    }
  }
  uStack_13c = uStack_18c;
  local_208 = *(uint *)&(local_1f0->TeamTypeMap).field_0x28;
  iStack_138 = *(int *)&(local_1f0->TeamTypeMap).field_0x8 -
               *(int *)&(local_1f0->TeamTypeMap).field_0x34;
  uStack_148 = 0xffffffff;
  uVar18 = local_208 & 0xffffffe0;
  local_160 = local_1f0;
  TStack_f8._padding_ = CONCAT44(uStack_154,iStack_158);
  local_150 = local_1d0;
  TStack_f8.CurrentBitIndex = uStack_144;
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  local_100 = local_1f0;
  iVar15 = (int)local_208 >> 5;
  TStack_f8._28_4_ = uStack_18c;
  TStack_f8.BaseBitIndex = local_140;
  uStack_d8 = CONCAT44(uStack_134,iStack_138);
  TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1d0;
  if (((int)local_208 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar20 = *(uint *)((longlong)FVar24 + 0x18);
  if (local_208 != uVar20) {
    FVar25 = *(ForElementType<unsigned_int> *)((longlong)FVar24 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)FVar24 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar25 = FVar24;
    }
    uVar27 = -1 << ((byte)local_208 & 0x1f) & *(uint *)((longlong)FVar25 + (longlong)iVar15 * 4);
    while (uVar27 == 0) {
      lVar12 = (longlong)iVar15;
      uVar18 = uVar18 + 0x20;
      iVar15 = iVar15 + 1;
      local_208 = uVar20;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14ba828f0;
      uVar27 = ((uint *)((longlong)FVar25 + 4))[lVar12];
    }
    uVar13 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_170._8_4_ = (undefined4)lVar12;
    local_208 = (uVar18 - 1) + local_170._8_4_;
    if ((int)uVar20 < (int)local_208) {
      local_208 = uVar20;
    }
  }
LAB_14ba828f0:
  do {
    pFVar9 = local_100;
    if (*(int *)&(local_100->TeamTypeMap).field_0x8 - *(int *)&(local_100->TeamTypeMap).field_0x34
        != (int)uStack_d8) {
      local_202 = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_202);
    }
    if (((TStack_f8.CurrentBitIndex == local_208) &&
        ((ForElementType<unsigned_int>)TStack_f8.Array == FVar24)) && (pFVar9 == this_01)) {
      local_40 = 0;
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free(local_48);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88);
      return;
    }
    pIVar21 = (ItemCase *)
              ((longlong)TStack_f8.CurrentBitIndex * 0x20 + *(longlong *)&pFVar9->TeamTypeMap);
    uVar13 = (ulonglong)(int)pIVar21[4];
    pTVar28 = *(TBitArray<FDefaultBitArrayAllocator> **)(pIVar21 + 2);
    local_1f8 = CONCAT44(local_1f8._4_4_,pIVar21[4]);
    local_1d0 = (ForElementType<unsigned_int>)((pTVar28->AllocatorInstance).InlineData + uVar13 * 8)
    ;
    lVar12 = local_88;
    puVar26 = local_48;
LAB_14ba82955:
    FVar24 = local_1d0;
    if (pIVar21[4] != (ItemCase)uVar13) {
      local_201 = 0;
      `TCheckedPointerIterator<__int64_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_201);
      lVar12 = local_88;
      puVar26 = local_48;
    }
    if ((ForElementType<unsigned_int>)pTVar28 != FVar24) {
      IVar5 = *pIVar21;
      if ((int)local_80 != local_54) {
        puVar14 = local_50;
        if (puVar26 != (undefined1 *)0x0) {
          puVar14 = puVar26;
        }
        for (iVar15 = *(int *)(puVar14 + (ulonglong)(local_40 - kNeutral & IVar5) * 4); iVar15 != -1
            ; iVar15 = *(int *)((longlong)iVar15 * 0x20 + 0x18 + lVar12)) {
          if (*(ItemCase *)((longlong)iVar15 * 0x20 + lVar12) == IVar5) {
            if (iVar15 == -1) goto LAB_14ba82aa1;
            puVar14 = local_50;
            if (puVar26 != (undefined1 *)0x0) {
              puVar14 = puVar26;
            }
            IVar6 = *(ItemCase *)(puVar14 + (ulonglong)(local_40 - kNeutral & IVar5) * 4);
            goto joined_r0x00014ba82a0a;
          }
        }
      }
      goto LAB_14ba82ab2;
    }
    TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
    FVar24 = (ForElementType<unsigned_int>)&(this_01->TeamTypeMap).field_0x10;
  } while( true );
joined_r0x00014ba82a0a:
  if (IVar6 == ~ITEM_NOT_SET) goto LAB_14ba82a27;
  pIVar17 = (ItemCase *)((longlong)(int)IVar6 * 0x20 + lVar12);
  if (*pIVar17 == IVar5) {
    if (pIVar17 != (ItemCase *)0x0) goto LAB_14ba82a4f;
    goto LAB_14ba82a29;
  }
  IVar6 = pIVar17[6];
  goto joined_r0x00014ba82a0a;
LAB_14ba82a27:
  pIVar17 = (ItemCase *)0x0;
LAB_14ba82a29:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar10) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14ba82a4f:
  plVar22 = *(longlong **)(pIVar17 + 2);
  IVar5 = pIVar17[4];
  plVar2 = plVar22 + (int)IVar5;
  while( true ) {
    if (pIVar17[4] != IVar5) {
      local_200[0] = 0;
      `TCheckedPointerIterator<__int64_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_200);
    }
    this_01 = local_1f0;
    lVar12 = local_88;
    puVar26 = local_48;
    if (plVar22 == plVar2) goto LAB_14ba82aa1;
    if (*(longlong *)(pTVar28->AllocatorInstance).InlineData != *plVar22) break;
    plVar22 = plVar22 + 1;
  }
LAB_14ba82ab2:
  if (*(int *)&(this_01->AddedTeamTypeMap).field_0x8 !=
      *(int *)&(this_01->AddedTeamTypeMap).field_0x34) {
    puVar26 = *(undefined1 **)&(this_01->AddedTeamTypeMap).field_0x40;
    puVar14 = &(this_01->AddedTeamTypeMap).field_0x38;
    if (puVar26 != (undefined1 *)0x0) {
      puVar14 = puVar26;
    }
    iVar15 = *(int *)(puVar14 +
                     (ulonglong)
                     (*(int *)&(this_01->AddedTeamTypeMap).field_0x48 - kNeutral & *pIVar21) * 4);
    if (iVar15 != -1) {
      do {
        if (*(ItemCase *)((longlong)iVar15 * 0x20 + *(longlong *)&this_01->AddedTeamTypeMap) ==
            *pIVar21) goto LAB_14ba82b40;
        iVar15 = *(int *)((longlong)iVar15 * 0x20 + 0x18 + *(longlong *)&this_01->AddedTeamTypeMap);
      } while (iVar15 != -1);
    }
  }
  local_1b8 = (void *)0x0;
  local_1b0 = 0;
  local_b8 = &local_1b8;
  local_c0 = pIVar21;
  TSet<TTuple<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_TeamType::ItemCase_const_&,TArray<__int64,TSizedDefaultAllocator<32>_>_&&>_>
            (&this_01->AddedTeamTypeMap,
             (TPairInitializer<TeamType::ItemCase_const_&,TArray<__int64,TSizedDefaultAllocator<32>_>_&&>
              *)(local_170 + 0xc),(bool *)&local_c0);
  if (local_1b8 != (void *)0x0) {
    FMemory::Free(local_1b8);
  }
LAB_14ba82b40:
  pTVar11 = TMapBase<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
            ::FindChecked(&this_01->AddedTeamTypeMap,*pIVar21);
  iVar15 = pTVar11->ArrayNum;
  if (iVar15 == pTVar11->ArrayMax) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
  }
  pTVar11->ArrayNum = iVar15 + 1;
  *(undefined8 *)((pTVar11->AllocatorInstance).Data + (longlong)iVar15 * 8) =
       *(undefined8 *)(pTVar28->AllocatorInstance).InlineData;
  lVar12 = local_88;
  puVar26 = local_48;
LAB_14ba82b8a:
  uVar13 = local_1f8 & 0xffffffff;
  pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)((pTVar28->AllocatorInstance).InlineData + 8);
  goto LAB_14ba82955;
LAB_14ba82aa1:
  if (iVar15 != -1) goto LAB_14ba82b8a;
  goto LAB_14ba82ab2;
}

