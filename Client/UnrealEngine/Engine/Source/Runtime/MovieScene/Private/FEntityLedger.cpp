// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 19

// CanImportEntity @ 146125c40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FEntityLedger::CanImportEntity
          (FEntityLedger *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportSequenceParams *param_2,FMovieSceneEntityComponentField *param_3,
          FMovieSceneEvaluationFieldEntityQuery *param_4,
          TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
          *param_5,TMap<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
                   *param_6,bool param_7)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  char cVar3;
  EMovieSceneConditionScope EVar4;
  bool bVar5;
  FMovieSceneEvaluationFieldEntityMetaData *this_00;
  UMovieSceneCondition *pUVar6;
  FInstanceRegistry *pFVar7;
  FMovieSceneEvaluationFieldSharedEntityMetaData *pFVar8;
  UObject *pUVar9;
  bool *pbVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  FWeakObjectPtr local_res20;
  uint local_78;
  undefined1 local_74 [12];
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_68;
  undefined1 local_58 [32];
  
  if (((param_3 == (FMovieSceneEntityComponentField *)0x0) ||
      (this_00 = FMovieSceneEntityComponentField::FindMetaData(param_3,param_4),
      this_00 == (FMovieSceneEvaluationFieldEntityMetaData *)0x0)) ||
     (pUVar6 = TSoftObjectPtr<UMovieSceneCondition_const_>::Get(&this_00->Condition),
     pUVar6 == (UMovieSceneCondition *)0x0)) {
LAB_146125ebd:
    local_res20.ObjectIndex._0_1_ = 1;
  }
  else {
    pFVar7 = UMovieSceneEntitySystemLinker::GetInstanceRegistry(param_1);
    lVar12 = (ulonglong)(param_2->InstanceHandle).InstanceID * 0x140 +
             *(longlong *)&pFVar7->Instances;
    pUVar6 = TSoftObjectPtr<UMovieSceneCondition_const_>::Get(&this_00->Condition);
    pTVar1 = *(TReferenceControllerBase<1> **)(lVar12 + 0x120);
    pcVar2 = *(code **)(pUVar6->_padding_ + 0x2c8);
    local_68.Object = *(FSharedPlaybackState **)(lVar12 + 0x118);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68.SharedReferenceCount.ReferenceController = pTVar1;
    cVar3 = (*pcVar2)(pUVar6,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (cVar3 == '\0') {
      TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
      ::Emplace<FMovieSceneEvaluationFieldEntityQuery_const_&>
                (param_5,(FMovieSceneEvaluationFieldEntityQuery *)&local_res20,(bool *)param_4);
    }
    local_68.Object = (FSharedPlaybackState *)0x0;
    uVar13 = 0;
    local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar8 = FMovieSceneEntityComponentField::FindSharedMetaData(param_3,param_4);
    if (pFVar8 == (FMovieSceneEvaluationFieldSharedEntityMetaData *)0x0) {
      uVar14 = (uint)local_68.Object;
      uVar15 = local_68.Object._4_4_;
      uVar16 = (uint)local_68.SharedReferenceCount.ReferenceController;
      uVar17 = local_68.SharedReferenceCount.ReferenceController._4_4_;
      uVar11 = uVar13;
    }
    else {
      uVar14 = (pFVar8->ObjectBindingID).A;
      uVar13 = (pFVar8->ObjectBindingID).C;
      uVar15 = (pFVar8->ObjectBindingID).B;
      uVar16 = (pFVar8->ObjectBindingID).C;
      uVar17 = (pFVar8->ObjectBindingID).D;
      uVar11 = uVar14;
    }
    if ((!param_7) && (((uVar15 != 0 || uVar17 != 0) || uVar13 != 0) || uVar11 != 0)) {
      pUVar6 = TSoftObjectPtr<UMovieSceneCondition_const_>::Get(&this_00->Condition);
      EVar4 = UMovieSceneCondition::GetConditionScope(pUVar6);
      if (EVar4 != Global) goto LAB_146125ebd;
    }
    pUVar6 = TSoftObjectPtr<UMovieSceneCondition_const_>::Get(&this_00->Condition);
    local_res20 = *(FWeakObjectPtr *)(pUVar6->_padding_ + 0x2c0);
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_4);
    pTVar1 = *(TReferenceControllerBase<1> **)(lVar12 + 0x120);
    local_68.Object = *(FSharedPlaybackState **)(lVar12 + 0x118);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68.SharedReferenceCount.ReferenceController = pTVar1;
    local_58._0_4_ = uVar14;
    local_58._4_4_ = uVar15;
    local_58._8_4_ = uVar16;
    local_58._12_4_ = uVar17;
    local_78 = (*(code *)local_res20)(pUVar6,local_58,(param_2->SequenceID).Value,&local_68,pUVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    pbVar10 = TMapBase<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
              ::Find((TMapBase<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
                      *)param_6,local_78);
    if (pbVar10 == (bool *)0x0) {
      pUVar6 = TSoftObjectPtr<UMovieSceneCondition_const_>::Get(&this_00->Condition);
      pTVar1 = *(TReferenceControllerBase<1> **)(lVar12 + 0x120);
      local_68.Object = *(FSharedPlaybackState **)(lVar12 + 0x118);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68.SharedReferenceCount.ReferenceController = pTVar1;
      local_58._0_4_ = uVar14;
      local_58._4_4_ = uVar15;
      local_58._8_4_ = uVar16;
      local_58._12_4_ = uVar17;
      bVar5 = UMovieSceneCondition::EvaluateCondition
                        (pUVar6,(FGuid *)local_58,(FMovieSceneSequenceID)(param_2->SequenceID).Value
                         ,&local_68);
      local_res20.ObjectIndex._0_1_ = bVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      if ((cVar3 != '\0') || (param_7)) {
        local_68.Object = (FSharedPlaybackState *)&local_78;
        local_68.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)&local_res20;
        TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<unsigned_int_const_&,bool_const_&>_>
                  ((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
                    *)param_6,(TPairInitializer<unsigned_int_const_&,bool_const_&> *)local_74,
                   (bool *)&local_68);
      }
    }
    else {
      local_res20.ObjectIndex._0_1_ = *pbVar10;
    }
  }
  return (bool)(undefined1)local_res20.ObjectIndex;
}

// CleanupLinkerEntities @ 146126cc0

void __thiscall
UE::MovieScene::FEntityLedger::CleanupLinkerEntities
          (FEntityLedger *this,
          TSet<UE::MovieScene::FMovieSceneEntityID,DefaultKeyFuncs<UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
          *param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ForElementType<FSetElementId> FVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
  *local_38;
  char local_30;
  char cStack_2f;
  
  iVar14 = 1;
  uVar13 = (this->OneShotEntities).ArrayNum - 1;
  if (-1 < (int)uVar13) {
    lVar15 = (longlong)(int)uVar13;
    lVar16 = lVar15 * 2;
    do {
      uVar12 = ~uVar13 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar13 < (this->OneShotEntities).ArrayNum) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar2 = *(ushort *)((this->OneShotEntities).AllocatorInstance.Data + lVar16);
      if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
        FVar4 = (param_1->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&param_1->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar4;
        }
        iVar9 = *(int *)((longlong)FVar11 +
                        ((ulonglong)(param_1->HashSize - 1) & (ulonglong)uVar2) * 4);
        if (iVar9 != -1) {
          do {
            if (*(ushort *)(*(longlong *)&param_1->Elements + (longlong)iVar9 * 0xc) == uVar2) {
              uVar8 = 0;
              if ((int)uVar13 < (this->OneShotEntities).ArrayNum) {
                uVar8 = uVar12;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar3 = (this->OneShotEntities).ArrayNum;
              pFVar5 = (this->OneShotEntities).AllocatorInstance.Data;
              iVar9 = iVar3 + ~uVar13;
              if (1 < iVar9) {
                iVar9 = 1;
              }
              if (iVar9 != 0) {
                memmove(pFVar5 + lVar15 * 2,pFVar5 + (longlong)(iVar3 - iVar9) * 2,
                        (longlong)iVar9 * 2);
              }
              piVar1 = &(this->OneShotEntities).ArrayNum;
              *piVar1 = *piVar1 + -1;
              break;
            }
            iVar9 = *(int *)(*(longlong *)&param_1->Elements + 4 + (longlong)iVar9 * 0xc);
          } while (iVar9 != -1);
        }
      }
      lVar15 = lVar15 + -1;
      lVar16 = lVar16 + -2;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
              *)&this->ImportedEntities);
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_30 = '\0';
  cStack_2f = '\0';
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar10 = local_98._24_8_ >> 0x20;
  uVar13 = local_98._28_4_;
  local_38 = (TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
              *)&this->ImportedEntities;
  if ((int)uVar13 < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      uVar2 = *(ushort *)((longlong)(int)uVar10 * 0x1c + 0x10 + *local_68);
      if ((uVar2 != 0xffff) &&
         (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34)) {
        FVar4 = (param_1->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&param_1->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar4;
        }
        iVar9 = *(int *)((longlong)FVar11 +
                        ((ulonglong)(param_1->HashSize - 1) & (ulonglong)uVar2) * 4);
        if (iVar9 != -1) {
          do {
            if (*(ushort *)(*(longlong *)&param_1->Elements + (longlong)iVar9 * 0xc) == uVar2) {
              TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
              ::RemoveByIndex(pTStack_40,uVar13);
              local_30 = '\x01';
              break;
            }
            iVar9 = *(int *)(*(longlong *)&param_1->Elements + 4 + (longlong)iVar9 * 0xc);
          } while (iVar9 != -1);
        }
      }
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar10 = (ulonglong)uStack_4c;
      uVar13 = uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if ((local_30 != '\0') && (cStack_2f != '\0')) {
      uVar13 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (3 < uVar13) {
        uVar10 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar14 = 1 << ((byte)lVar16 & 0x1f);
      }
      if (((0 < (int)uVar13) && (local_38->HashSize < iVar14)) || (iVar14 < local_38->HashSize)) {
        local_38->HashSize = iVar14;
        TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  return;
}

// Contains @ 146128d40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FEntityLedger::Contains
          (FEntityLedger *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityComponentFilter *param_2)

{
  FEntityManager *this_00;
  TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
  *pTVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  UMovieSceneEntitySystemLinker *pUVar6;
  TMap<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
  *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  FComponentMask *pFVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  TMap<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
  *pTVar20;
  FScriptContainerElement *pFVar21;
  FEntityLedger *local_res8;
  UMovieSceneEntitySystemLinker *local_res10;
  bool local_res18 [8];
  undefined1 local_res20 [8];
  ushort local_148 [4];
  uint local_140 [2];
  <lambda_1> local_138;
  int local_120;
  undefined2 local_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_110;
  ushort *puStack_108;
  uint local_100;
  uint uStack_fc;
  TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_f8;
  uint *puStack_f0;
  int local_e8;
  int iStack_e4;
  TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_e0;
  ushort *puStack_d8;
  undefined8 local_d0;
  TMap<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TMap<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
  *local_98;
  TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_90;
  uint *puStack_88;
  undefined8 local_80;
  TMap<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  pFVar21 = (this->OneShotEntities).AllocatorInstance.Data;
  local_138.bResult = local_res18;
  local_res18[0] = false;
  local_140[0] = (this->OneShotEntities).ArrayNum;
  uVar10 = (ulonglong)(int)local_140[0];
  local_118 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar21 + uVar10 * 2);
  local_res8 = this;
  local_res10 = param_1;
  local_138.Filter = param_2;
  local_138.Linker = param_1;
  while( true ) {
    pTVar19 = local_118;
    if ((this->OneShotEntities).ArrayNum != (int)uVar10) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res20);
    }
    if ((TBitArray<FDefaultBitArrayAllocator> *)pFVar21 == pTVar19) break;
    uVar2 = *(ushort *)pFVar21;
    uVar10 = (ulonglong)uVar2;
    lVar11 = *(longlong *)&((local_138.Linker)->EntityManager).EntityLocations;
    uVar16 = *(uint *)(lVar11 + uVar10 * 8);
    local_11c = *(undefined2 *)(lVar11 + 4 + uVar10 * 8);
    if ((short)uVar16 == -1) {
      pFVar12 = &GEntityManagerEmptyMask;
    }
    else {
      pFVar12 = (FComponentMask *)
                ((ulonglong)(uVar16 & 0xffff) * 0x38 +
                *(longlong *)&((local_138.Linker)->EntityManager).EntityAllocationMasks);
    }
    bVar8 = FEntityComponentFilter::Match(local_138.Filter,pFVar12);
    this_00 = &param_1->EntityManager;
    pTVar1 = &(param_1->EntityManager).ParentToChild;
    local_100 = 0xffffffff;
    *local_138.bResult = bVar8;
    puStack_108 = local_148;
    iVar3 = *(int *)&(param_1->EntityManager).ParentToChild.field_0x48;
    if (iVar3 == 0) {
      uStack_fc = 0xffffffff;
    }
    else {
      puVar17 = *(undefined1 **)&(param_1->EntityManager).ParentToChild.field_0x40;
      puVar13 = &(param_1->EntityManager).ParentToChild.field_0x38;
      if (puVar17 != (undefined1 *)0x0) {
        puVar13 = puVar17;
      }
      uStack_fc = *(uint *)(puVar13 + ((longlong)iVar3 - 1U & uVar10) * 4);
      local_100 = uStack_fc;
      if (uStack_fc != 0xffffffff) {
        do {
          uStack_fc = *(uint *)(*(longlong *)pTVar1 + 4 + (longlong)(int)local_100 * 0xc);
          if (*(ushort *)(*(longlong *)pTVar1 + (longlong)(int)local_100 * 0xc) == uVar2) break;
          local_100 = uStack_fc;
        } while (uStack_fc != 0xffffffff);
      }
    }
    local_d0 = CONCAT44(uStack_fc,local_100);
    local_148[0] = uVar2;
    local_110 = pTVar1;
    local_e0 = pTVar1;
    puStack_d8 = puStack_108;
    uVar15 = local_100;
    uVar16 = uStack_fc;
joined_r0x000146128ecc:
    if (uVar15 != 0xffffffff) {
      uVar10 = (ulonglong)*(ushort *)((longlong)(int)uVar15 * 0xc + 2 + *(longlong *)pTVar1);
      lVar11 = *(longlong *)&((local_138.Linker)->EntityManager).EntityLocations;
      uVar4 = *(uint *)(lVar11 + uVar10 * 8);
      local_11c = *(undefined2 *)(lVar11 + 4 + uVar10 * 8);
      if ((short)uVar4 == -1) {
        pFVar12 = &GEntityManagerEmptyMask;
      }
      else {
        pFVar12 = (FComponentMask *)
                  ((ulonglong)(uVar4 & 0xffff) * 0x38 +
                  *(longlong *)&((local_138.Linker)->EntityManager).EntityAllocationMasks);
      }
      bVar8 = FEntityComponentFilter::Match(local_138.Filter,pFVar12);
      *local_138.bResult = bVar8;
      FEntityManager::
      IterateChildren_ParentFirst<_UE::MovieScene::FEntityLedger::Contains_::__l2::<lambda_1>_&>
                (this_00,(FMovieSceneEntityID)
                         *(ushort *)((longlong)(int)uVar15 * 0xc + 2 + *(longlong *)pTVar1),
                 &local_138);
      local_d0 = CONCAT44(local_d0._4_4_,uVar16);
      param_1 = local_res10;
      this = local_res8;
      if (uVar16 == 0xffffffff) goto LAB_146128fba;
      local_d0 = (ulonglong)uVar16;
      uVar15 = uVar16;
      do {
        uVar16 = *(uint *)(*(longlong *)pTVar1 + 4 + (longlong)(int)uVar15 * 0xc);
        local_d0 = CONCAT44(uVar16,(undefined4)local_d0);
        if (*(ushort *)(*(longlong *)pTVar1 + (longlong)(int)uVar15 * 0xc) == local_148[0]) break;
        local_d0 = CONCAT44(uVar16,uVar16);
        uVar15 = uVar16;
      } while (uVar16 != 0xffffffff);
      goto joined_r0x000146128ecc;
    }
LAB_146128fba:
    if (local_res18[0] != false) {
      return true;
    }
    uVar10 = (ulonglong)local_140[0];
    pFVar21 = pFVar21 + 2;
  }
  iVar3 = *(int *)&(this->ImportedEntities).field_0x28;
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ImportedEntities).field_0x10;
  iStack_c0 = 0;
  pTVar20 = &this->ImportedEntities;
  uStack_bc = 1;
  local_a8 = 0;
  iStack_ac = 0;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&(this->ImportedEntities).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)pTVar19;
    }
    uVar16 = *puVar18;
    while (uVar16 == 0) {
      lVar11 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      iStack_ac = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14612906e;
      uVar16 = puVar18[lVar11 + 1];
    }
    uStack_bc = -uVar16 & uVar16;
    uVar10 = (ulonglong)uStack_bc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_120 = (int)lVar11;
    iStack_ac = local_a8 + -1 + local_120;
    if (iVar3 < iStack_ac) {
      iStack_ac = iVar3;
    }
  }
LAB_14612906e:
  iStack_a0 = *(int *)&(this->ImportedEntities).field_0x8 -
              *(int *)&(this->ImportedEntities).field_0x34;
  uVar16 = *(uint *)&(this->ImportedEntities).field_0x28;
  uStack_b0 = 0xffffffff;
  uVar15 = uVar16 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uStack_bc,iStack_c0);
  TStack_70.CurrentBitIndex = iStack_ac;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_70._28_4_ = iStack_ac;
  TStack_70.BaseBitIndex = local_a8;
  uStack_50 = CONCAT44(uStack_9c,iStack_a0);
  local_118 = pTVar19;
  local_c8 = pTVar20;
  local_b8 = (undefined1 *)pTVar19;
  iStack_a4 = iStack_ac;
  local_98 = pTVar20;
  local_78 = pTVar20;
  TStack_70.Array = pTVar19;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  uVar4 = *(uint *)&(this->ImportedEntities).field_0x28;
  if (uVar16 != uVar4) {
    puVar17 = *(undefined1 **)&(this->ImportedEntities).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = (undefined1 *)pTVar19;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_146129170;
      uVar16 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar10 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar16 = (int)lVar11 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_146129170:
  do {
    pTVar7 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar16) && (TStack_70.Array == pTVar19)) &&
       (pTVar7 == pTVar20)) {
      return local_res18[0];
    }
    lVar11 = *(longlong *)pTVar7 + (longlong)TStack_70.CurrentBitIndex * 0x1c;
    uVar15 = *(uint *)(*(longlong *)&((local_138.Linker)->EntityManager).EntityLocations +
                      (ulonglong)*(ushort *)(lVar11 + 0x10) * 8);
    if ((short)uVar15 == -1) {
      pFVar12 = &GEntityManagerEmptyMask;
    }
    else {
      pFVar12 = (FComponentMask *)
                ((ulonglong)(uVar15 & 0xffff) * 0x38 +
                *(longlong *)&((local_138.Linker)->EntityManager).EntityAllocationMasks);
    }
    bVar8 = FEntityComponentFilter::Match(local_138.Filter,pFVar12);
    pUVar6 = local_res10;
    local_e8 = -1;
    *local_138.bResult = bVar8;
    puStack_f0 = local_140;
    uVar2 = *(ushort *)(lVar11 + 0x10);
    pTVar1 = &(local_res10->EntityManager).ParentToChild;
    local_140[0] = CONCAT22(local_140[0]._2_2_,uVar2);
    iVar3 = *(int *)&(local_res10->EntityManager).ParentToChild.field_0x48;
    if (iVar3 == 0) {
      iStack_e4 = -1;
    }
    else {
      puVar17 = *(undefined1 **)&(local_res10->EntityManager).ParentToChild.field_0x40;
      puVar13 = &(local_res10->EntityManager).ParentToChild.field_0x38;
      if (puVar17 != (undefined1 *)0x0) {
        puVar13 = puVar17;
      }
      iStack_e4 = *(int *)(puVar13 + ((longlong)iVar3 - 1U & (ulonglong)(uint)uVar2) * 4);
      local_e8 = iStack_e4;
      if (iStack_e4 != -1) {
        do {
          iStack_e4 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)local_e8 * 0xc);
          if ((uint)*(ushort *)(*(longlong *)pTVar1 + (longlong)local_e8 * 0xc) == (uint)uVar2)
          break;
          local_e8 = iStack_e4;
        } while (iStack_e4 != -1);
      }
    }
    local_80 = CONCAT44(iStack_e4,local_e8);
    puStack_88 = puStack_f0;
    local_f8 = pTVar1;
    local_90 = pTVar1;
    iVar14 = local_e8;
    iVar3 = iStack_e4;
joined_r0x000146129297:
    if (iVar14 != -1) {
      uVar15 = *(uint *)(*(longlong *)&((local_138.Linker)->EntityManager).EntityLocations +
                        (ulonglong)*(ushort *)(*(longlong *)pTVar1 + 2 + (longlong)iVar14 * 0xc) * 8
                        );
      if ((short)uVar15 == -1) {
        pFVar12 = &GEntityManagerEmptyMask;
      }
      else {
        pFVar12 = (FComponentMask *)
                  ((ulonglong)(uVar15 & 0xffff) * 0x38 +
                  *(longlong *)&((local_138.Linker)->EntityManager).EntityAllocationMasks);
      }
      bVar8 = FEntityComponentFilter::Match(local_138.Filter,pFVar12);
      *local_138.bResult = bVar8;
      FEntityManager::
      IterateChildren_ParentFirst<_UE::MovieScene::FEntityLedger::Contains_::__l2::<lambda_1>_&>
                (&pUVar6->EntityManager,
                 (FMovieSceneEntityID)*(ushort *)(*(longlong *)pTVar1 + 2 + (longlong)iVar14 * 0xc),
                 &local_138);
      local_80 = CONCAT44(local_80._4_4_,iVar3);
      pTVar19 = local_118;
      pTVar20 = local_98;
      if (iVar3 == -1) goto LAB_146129361;
      iVar14 = iVar3;
      do {
        iVar3 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)iVar14 * 0xc);
        if (*(short *)(*(longlong *)pTVar1 + (longlong)iVar14 * 0xc) == (short)local_140[0]) break;
        iVar14 = iVar3;
      } while (iVar3 != -1);
      goto joined_r0x000146129297;
    }
LAB_146129361:
    if (local_res18[0] != false) {
      return true;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// FindImportedEntities @ 1461316c0

void __thiscall
UE::MovieScene::FEntityLedger::FindImportedEntities
          (FEntityLedger *this,TWeakObjectPtr<UObject,FWeakObjectPtr> param_1,
          TArray<UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *this_00;
  FScriptContainerElement *pFVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar8 = *(int *)&(this->ImportedEntities).field_0x28;
  puVar1 = &(this->ImportedEntities).field_0x10;
  iVar12 = 0;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar8 != 0) {
    puVar15 = *(uint **)&(this->ImportedEntities).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar10 = *puVar15;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14613176e;
      uVar10 = puVar15[lVar9 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar7 = (int)lVar9 + -1 + iVar14;
    if (iVar8 < iVar7) {
      iVar7 = iVar8;
    }
  }
LAB_14613176e:
  uVar10 = *(uint *)&(this->ImportedEntities).field_0x28;
  uVar16 = uVar10 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar6,iVar12);
  TStack_68.CurrentBitIndex = iVar7;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar10 >> 5;
  TStack_68._28_4_ = iVar7;
  TStack_68.BaseBitIndex = iVar14;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->ImportedEntities).field_0x8 -
                       *(int *)&(this->ImportedEntities).field_0x34);
  local_res10 = param_1.WeakPtr;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar8 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ImportedEntities).field_0x28;
  if (uVar10 != uVar6) {
    puVar13 = *(undefined1 **)&(this->ImportedEntities).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_146131870;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar16;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_146131870:
  while( true ) {
    if (*(int *)&(this->ImportedEntities).field_0x8 - *(int *)&(this->ImportedEntities).field_0x34
        != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar10) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)
              (*(longlong *)&this->ImportedEntities + (longlong)TStack_68.CurrentBitIndex * 0x1c);
    bVar5 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                      (this_00,(TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res10);
    if (bVar5) {
      pFVar3 = (param_2->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)(this_00 + 2);
      if (((pFVar3 <= pFVar11) && (pFVar11 < pFVar3 + (longlong)param_2->ArrayMax * 2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = param_2->ArrayNum;
      if (iVar8 == param_2->ArrayMax) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar8 + 1;
      *(short *)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 2) =
           (short)((FWeakObjectPtr *)&pFVar11->field_0x0)->ObjectIndex;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// FindImportedEntity @ 146131990

FMovieSceneEntityID __thiscall
UE::MovieScene::FEntityLedger::FindImportedEntity
          (FEntityLedger *this,FMovieSceneEvaluationFieldEntityKey *param_1)

{
  FWeakObjectPtr FVar1;
  int iVar2;
  longlong lVar3;
  FMovieSceneEvaluationFieldEntityKey *in_R8;
  undefined2 uStackX_c;
  
  FVar1 = (in_R8->EntityOwner).WeakPtr;
  iVar2 = TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMovieSceneEvaluationFieldEntityKey>
                    ((TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
                      *)&this->ImportedEntities,
                     FVar1.ObjectSerialNumber ^ FVar1.ObjectIndex ^ in_R8->EntityID,in_R8);
  if ((iVar2 != -1) &&
     (lVar3 = (longlong)iVar2 * 0x1c + *(longlong *)&(this->ImportedEntities).field_0x0, lVar3 != 0)
     ) {
    uStackX_c = (undefined2)((ulonglong)*(undefined8 *)(lVar3 + 0xc) >> 0x20);
    *(undefined2 *)&(param_1->EntityOwner).WeakPtr.ObjectIndex = uStackX_c;
    return (FMovieSceneEntityID)(ushort)param_1;
  }
  *(undefined2 *)&(param_1->EntityOwner).WeakPtr.ObjectIndex = 0xffff;
  return (FMovieSceneEntityID)(ushort)param_1;
}

// HasImportedEntity @ 14613dc70

bool __thiscall
UE::MovieScene::FEntityLedger::HasImportedEntity
          (FEntityLedger *this,FMovieSceneEvaluationFieldEntityKey *param_1)

{
  FWeakObjectPtr FVar1;
  int iVar2;
  
  FVar1 = (param_1->EntityOwner).WeakPtr;
  iVar2 = TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMovieSceneEvaluationFieldEntityKey>
                    ((TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
                      *)&this->ImportedEntities,
                     FVar1.ObjectSerialNumber ^ FVar1.ObjectIndex ^ param_1->EntityID,param_1);
  return iVar2 != -1;
}

// ImportEntity @ 14613def0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityLedger::ImportEntity
          (FEntityLedger *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportSequenceParams *param_2,FMovieSceneEntityComponentField *param_3,
          FMovieSceneEvaluationFieldEntityQuery *param_4)

{
  int iVar1;
  undefined1 auStackY_108 [32];
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  void *local_88;
  undefined4 local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  ImportEntity(this,param_1,param_2,param_3,param_4,
               (TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
                *)local_78,
               (TMap<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
                *)local_c8);
  local_80 = 0;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  iVar1 = SUB84(local_c8._8_8_,4);
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_a0 = 0;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// ImportEntity @ 14613e0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityLedger::ImportEntity
          (FEntityLedger *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportSequenceParams *param_2,FMovieSceneEntityComponentField *param_3,
          FMovieSceneEvaluationFieldEntityQuery *param_4,
          TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
          *param_5,TMap<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
                   *param_6)

{
  FEntityManager *this_00;
  FWeakObjectPtr FVar1;
  FMovieSceneEntityID FVar2;
  int iVar3;
  UObjectBaseUtility *this_01;
  bool bVar4;
  FImportedEntityData *pFVar5;
  UMovieSceneSection *this_02;
  UClass *pUVar6;
  IMovieSceneEntityProvider *this_03;
  FBuiltInComponentTypes *pFVar7;
  longlong *plVar8;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar9;
  FWeakObjectPtr FVar10;
  undefined1 auStackY_1a8 [32];
  FMovieSceneEntityID local_168;
  undefined1 local_158 [16];
  FInterrogationInstance local_148;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *local_140;
  FEntityLedger *local_138;
  undefined1 local_128 [8];
  FMovieSceneEvaluationFieldSharedEntityMetaData *pFStack_120;
  uint local_118;
  FInterrogationKey local_114;
  FInterrogationInstance local_108;
  FEntityImportSequenceParams local_100;
  FImportedEntity local_e8;
  TBitArray<TFixedAllocator<12>_> local_90;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_140 = param_5;
  local_158._0_8_ = (param_4->Entity).Key.EntityOwner.WeakPtr;
  local_148.Sequence = (UMovieSceneSequence *)param_6;
  local_138 = this;
  pFVar5 = TMapBase<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
           ::FindOrAddImpl<FMovieSceneEvaluationFieldEntityKey_const_&>
                     ((TMapBase<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
                       *)&this->ImportedEntities,
                      SUB84(local_158._0_8_,4) ^ (uint)local_158._0_8_ ^
                      (param_4->Entity).Key.EntityID,(FMovieSceneEvaluationFieldEntityKey *)param_4)
  ;
  pFVar5->MetaDataIndex = param_4->MetaDataIndex;
  this_02 = (UMovieSceneSection *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_4);
  if (this_02 != (UMovieSceneSection *)0x0) {
    pUVar6 = Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
    this_03 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_02,pUVar6);
    if (this_03 != (IMovieSceneEntityProvider *)0x0) {
      local_100.DefaultCompletionMode = param_2->DefaultCompletionMode;
      local_100.SubSectionFlags = param_2->SubSectionFlags;
      local_100._18_2_ = *(undefined2 *)&param_2->field_0x12;
      local_128 = (undefined1  [8])0x0;
      pFStack_120 = (FMovieSceneEvaluationFieldSharedEntityMetaData *)0x0;
      local_118 = (param_4->Entity).Key.EntityID;
      local_114.Channel.Value = -1;
      local_114.InterrogationIndex = -1;
      local_108.Sequence = (UMovieSceneSequence *)0x0;
      local_100.HierarchicalBias = param_2->HierarchicalBias;
      local_100.SequenceID.Value = (param_2->SequenceID).Value;
      local_100.InstanceHandle = param_2->InstanceHandle;
      local_100.RootInstanceHandle = param_2->RootInstanceHandle;
      if (param_3 != (FMovieSceneEntityComponentField *)0x0) {
        local_128 = (undefined1  [8])FMovieSceneEntityComponentField::FindMetaData(param_3,param_4);
        pFStack_120 = FMovieSceneEntityComponentField::FindSharedMetaData(param_3,param_4);
      }
      if (((param_2->bPreRoll) &&
          ((local_128 == (undefined1  [8])0x0 || (local_128->bEvaluateInSequencePreRoll == 0)))) ||
         ((param_2->bPostRoll &&
          ((local_128 == (undefined1  [8])0x0 || (local_128->bEvaluateInSequencePostRoll == '\0'))))
         )) {
        if ((pFVar5->EntityID).Value != 0xffff) {
          pFVar7 = FBuiltInComponentTypes::Get();
          FEntityManager::AddComponents
                    (&param_1->EntityManager,(FMovieSceneEntityID)(pFVar5->EntityID).Value,
                     &pFVar7->FinishedMask,Full);
          (pFVar5->EntityID).Value = 0xffff;
        }
      }
      else {
        bVar4 = CanImportEntity(local_138,param_1,param_2,param_3,param_4,local_140,
                                (TMap<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
                                 *)local_148.Sequence,false);
        if (bVar4) {
          local_e8.Builders.ArrayMax = 1;
          local_e8.Builders.AllocatorInstance.SecondaryData =
               (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0;
          local_e8.Builders.ArrayNum = 0;
          IMovieSceneEntityProvider::ImportEntity
                    (this_03,param_1,(FEntityImportParams *)local_128,&local_e8);
          if (local_e8.Builders.ArrayNum != 0) {
            pUVar6 = Z_Construct_UClass_UMovieSceneDecorationContainerObject_NoRegister();
            iVar3 = (int)pUVar6->_padding_;
            if ((iVar3 <= *(int *)(this_02->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
                &pUVar6->_padding_)) {
              FMovieSceneDecorationContainer::GetDecorations
                        ((FMovieSceneDecorationContainer *)&this_02->_padding_,
                         (TArrayView<TObjectPtr<UObject>_const_,int> *)local_158);
              FVar1 = (FWeakObjectPtr)(local_158._0_8_ + (longlong)(int)local_158._8_4_ * 8);
              for (FVar10 = (FWeakObjectPtr)local_158._0_8_; FVar10 != FVar1;
                  FVar10 = (FWeakObjectPtr)((longlong)FVar10 + 8)) {
                this_01 = *(UObjectBaseUtility **)FVar10;
                if (this_01 != (UObjectBaseUtility *)0x0) {
                  pUVar6 = Z_Construct_UClass_UMovieSceneEntityDecorator_NoRegister();
                  plVar8 = UObjectBaseUtility::GetInterfaceAddress(this_01,pUVar6);
                  if (plVar8 != (longlong *)0x0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8,param_1,local_128,&local_e8);
                  }
                }
              }
            }
            pUVar6 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
            iVar3 = (int)pUVar6->_padding_;
            if ((iVar3 <= *(int *)(this_02->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
                &pUVar6->_padding_)) {
              UMovieSceneSection::BuildDefaultComponents
                        (this_02,param_1,(FEntityImportParams *)local_128,&local_e8);
            }
            FImportedEntity::Manufacture
                      (&local_e8,(FEntityImportParams *)&local_168,(FEntityManager *)local_128);
            FEntityManager::ReplaceEntityID(&param_1->EntityManager,&pFVar5->EntityID,local_168);
          }
          FVar9 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)&local_e8;
          if (local_e8.Builders.AllocatorInstance.SecondaryData !=
              (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
            FVar9 = local_e8.Builders.AllocatorInstance.SecondaryData;
          }
          DestructItems<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>,int>
                    ((TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *)FVar9,
                     local_e8.Builders.ArrayNum);
          if (local_e8.Builders.AllocatorInstance.SecondaryData !=
              (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
            FMemory::Free((void *)local_e8.Builders.AllocatorInstance.SecondaryData);
          }
        }
        else if ((pFVar5->EntityID).Value != 0xffff) {
          pFVar7 = FBuiltInComponentTypes::Get();
          local_90.NumBits = 0;
          local_90.MaxBits = 0;
          TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                    (&local_90,&(pFVar7->FinishedMask).Bits);
          FVar2.Value = (pFVar5->EntityID).Value;
          this_00 = &param_1->EntityManager;
          FEntityManager::AddComponents(this_00,FVar2,(FComponentMask *)&local_90);
          local_158._8_8_ = &local_90;
          local_158._0_8_ = this_00;
          FEntityManager::
          IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponents_::__l8::<lambda_1>_>
                    (this_00,FVar2,(<lambda_1> *)local_158);
          (pFVar5->EntityID).Value = 0xffff;
        }
      }
    }
  }
  return;
}

// Invalidate @ 1461403b0

void __thiscall UE::MovieScene::FEntityLedger::Invalidate(FEntityLedger *this)

{
  this->bInvalidated = true;
  return;
}

// IsEmpty @ 146141100

bool __thiscall UE::MovieScene::FEntityLedger::IsEmpty(FEntityLedger *this)

{
  return *(int *)&(this->ImportedEntities).field_0x8 == *(int *)&(this->ImportedEntities).field_0x34
  ;
}

// MutateAll @ 146143fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityLedger::MutateAll
          (FEntityLedger *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityComponentFilter *param_2,IMovieScenePerEntityMutation *param_3)

{
  TMap<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  FMovieSceneEntityID FVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  UMovieSceneEntitySystemLinker *pUVar7;
  TMap<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
  *pTVar8;
  bool bVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  FComponentMask *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  uint *puVar19;
  longlong lVar20;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined1 local_187 [3];
  uint local_184;
  undefined2 local_180;
  <lambda_1> local_178;
  undefined2 local_15c;
  int local_158;
  int local_154;
  UMovieSceneEntitySystemLinker *local_150;
  undefined8 local_148;
  uint local_140;
  undefined4 local_13c;
  undefined8 local_138;
  uint local_130;
  undefined4 local_12c;
  TMap<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
  *local_128;
  int iStack_120;
  uint uStack_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  int iStack_10c;
  int local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  TMap<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  undefined4 local_ac;
  TBitArray<TFixedAllocator<12>_> local_a8;
  TBitArray<TFixedAllocator<12>_> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  pFVar16 = (this->OneShotEntities).AllocatorInstance.Data;
  iVar13 = (this->OneShotEntities).ArrayNum;
  pFVar2 = pFVar16 + (longlong)iVar13 * 2;
  local_178.Filter = param_2;
  local_178.Mutation = param_3;
  local_178.Linker = param_1;
  local_150 = param_1;
  while( true ) {
    if ((this->OneShotEntities).ArrayNum != iVar13) {
      local_188 = 0;
      `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_188);
    }
    if (pFVar16 == pFVar2) break;
    FVar3.Value = *(ushort *)pFVar16;
    uVar18 = (ulonglong)FVar3.Value;
    lVar10 = *(longlong *)&((local_178.Linker)->EntityManager).EntityLocations;
    uVar17 = *(uint *)(lVar10 + uVar18 * 8);
    local_15c = *(undefined2 *)(lVar10 + 4 + uVar18 * 8);
    if ((short)uVar17 == -1) {
      pFVar14 = &GEntityManagerEmptyMask;
    }
    else {
      pFVar14 = (FComponentMask *)
                ((ulonglong)(uVar17 & 0xffff) * 0x38 +
                *(longlong *)&((local_178.Linker)->EntityManager).EntityAllocationMasks);
    }
    bVar9 = FEntityComponentFilter::Match(local_178.Filter,pFVar14);
    if (bVar9) {
      local_a8.NumBits = 0;
      local_a8.MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_a8,&pFVar14->Bits);
      (**(code **)((longlong)*local_178.Mutation + 8))
                (local_178.Mutation,&(local_178.Linker)->EntityManager);
      bVar9 = TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
                        (&local_a8,&pFVar14->Bits,false);
      if (!bVar9) {
        FEntityManager::ChangeEntityType
                  (&(local_178.Linker)->EntityManager,FVar3,(FComponentMask *)&local_a8);
        pUVar7 = local_178.Linker;
        if ((int)(uint)FVar3.Value <
            *(int *)&((local_178.Linker)->EntityManager).EntityLocations.field_0x28) {
          puVar11 = *(undefined1 **)&((local_178.Linker)->EntityManager).EntityLocations.field_0x20;
          if (puVar11 == (undefined1 *)0x0) {
            puVar11 = &((local_178.Linker)->EntityManager).EntityLocations.field_0x10;
          }
          if ((*(uint *)(puVar11 + (ulonglong)(FVar3.Value >> 5) * 4) >> (FVar3.Value & 0x1f) & 1)
              == 0) goto LAB_146144118;
        }
        else {
LAB_146144118:
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("EntityLocations.IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                             ,0x22b,L"");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        lVar10 = *(longlong *)&(pUVar7->EntityManager).EntityLocations;
        local_184 = *(uint *)(lVar10 + uVar18 * 8);
        local_180 = *(undefined2 *)(lVar10 + 4 + uVar18 * 8);
        if ((short)local_184 == -1) {
          local_148 = 0;
          local_140 = 0xffffffff;
        }
        else {
          local_140 = local_184 >> 0x10;
          local_148 = *(undefined8 *)
                       (*(longlong *)&(pUVar7->EntityManager).EntityAllocations +
                       (ulonglong)(local_184 & 0xffff) * 8);
        }
        local_13c = 1;
        (**(code **)((longlong)*local_178.Mutation + 0x10))(local_178.Mutation,&local_148,&local_a8)
        ;
      }
    }
    FEntityManager::
    IterateChildren_ParentFirst<_UE::MovieScene::FEntityLedger::MutateAll_::__l2::<lambda_1>_&>
              (&param_1->EntityManager,FVar3,&local_178);
    pFVar16 = pFVar16 + 2;
  }
  iVar13 = *(int *)&(this->ImportedEntities).field_0x28;
  puVar11 = &(this->ImportedEntities).field_0x10;
  iStack_120 = 0;
  pTVar1 = &this->ImportedEntities;
  local_108 = 0;
  uStack_11c = 1;
  iStack_10c = 0;
  if (iVar13 != 0) {
    puVar19 = *(uint **)&(this->ImportedEntities).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar11;
    }
    uVar17 = *puVar19;
    while (uVar17 == 0) {
      lVar10 = (longlong)iStack_120;
      local_108 = local_108 + 0x20;
      iStack_120 = iStack_120 + 1;
      iStack_10c = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_120) goto LAB_14614423e;
      uVar17 = puVar19[lVar10 + 1];
    }
    uStack_11c = -uVar17 & uVar17;
    uVar18 = (ulonglong)uStack_11c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_158 = (int)lVar10;
    iStack_10c = local_108 + -1 + local_158;
    if (iVar13 < iStack_10c) {
      iStack_10c = iVar13;
    }
  }
LAB_14614423e:
  uVar17 = *(uint *)&(this->ImportedEntities).field_0x28;
  uStack_104 = local_ac;
  uVar15 = uVar17 & 0xffffffe0;
  iStack_100 = *(int *)&(this->ImportedEntities).field_0x8 -
               *(int *)&(this->ImportedEntities).field_0x34;
  uStack_110 = 0xffffffff;
  TStack_f0._padding_ = CONCAT44(uStack_11c,iStack_120);
  TStack_f0.CurrentBitIndex = iStack_10c;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar17 >> 5;
  TStack_f0._28_4_ = local_ac;
  TStack_f0.BaseBitIndex = local_108;
  uStack_d0 = CONCAT44(uStack_fc,iStack_100);
  local_128 = pTVar1;
  local_118 = puVar11;
  local_f8 = pTVar1;
  TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar11;
  if (((int)uVar17 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->ImportedEntities).field_0x28;
  if (uVar17 != uVar4) {
    puVar12 = *(undefined1 **)&(this->ImportedEntities).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar11;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (uVar17 == 0) {
      lVar10 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar17 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_146144330;
      uVar17 = *(uint *)(puVar12 + lVar10 * 4 + 4);
    }
    uVar18 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_154 = (int)lVar10;
    uVar17 = local_154 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar17) {
      uVar17 = uVar4;
    }
  }
LAB_146144330:
  do {
    pTVar8 = local_f8;
    if (*(int *)&local_f8->field_0x8 - *(int *)&local_f8->field_0x34 != (int)uStack_d0) {
      local_187[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_187);
    }
    if (((TStack_f0.CurrentBitIndex == uVar17) &&
        (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar11)) && (pTVar8 == pTVar1))
    {
      return;
    }
    lVar5 = *(longlong *)&((local_178.Linker)->EntityManager).EntityLocations;
    lVar20 = (longlong)TStack_f0.CurrentBitIndex * 0x1c + *(longlong *)pTVar8;
    FVar3.Value = *(ushort *)(lVar20 + 0x10);
    uVar15 = *(uint *)(lVar5 + (ulonglong)FVar3.Value * 8);
    lVar10 = (ulonglong)FVar3.Value * 8;
    local_15c = *(undefined2 *)(lVar5 + 4 + lVar10);
    if ((short)uVar15 == -1) {
      pFVar14 = &GEntityManagerEmptyMask;
    }
    else {
      pFVar14 = (FComponentMask *)
                ((ulonglong)(uVar15 & 0xffff) * 0x38 +
                *(longlong *)&((local_178.Linker)->EntityManager).EntityAllocationMasks);
    }
    bVar9 = FEntityComponentFilter::Match(local_178.Filter,pFVar14);
    if (bVar9) {
      local_70.NumBits = 0;
      local_70.MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_70,&pFVar14->Bits);
      (**(code **)((longlong)*local_178.Mutation + 8))
                (local_178.Mutation,&(local_178.Linker)->EntityManager);
      bVar9 = TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
                        (&local_70,&pFVar14->Bits,false);
      if (!bVar9) {
        FEntityManager::ChangeEntityType
                  (&(local_178.Linker)->EntityManager,FVar3,(FComponentMask *)&local_70);
        pUVar7 = local_178.Linker;
        if ((int)(uint)FVar3.Value <
            *(int *)&((local_178.Linker)->EntityManager).EntityLocations.field_0x28) {
          puVar12 = *(undefined1 **)&((local_178.Linker)->EntityManager).EntityLocations.field_0x20;
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = &((local_178.Linker)->EntityManager).EntityLocations.field_0x10;
          }
          if ((*(uint *)(puVar12 + (ulonglong)(FVar3.Value >> 5) * 4) >> (FVar3.Value & 0x1f) & 1)
              == 0) goto LAB_14614444f;
        }
        else {
LAB_14614444f:
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("EntityLocations.IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                             ,0x22b,L"");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        lVar5 = *(longlong *)&(pUVar7->EntityManager).EntityLocations;
        local_184 = *(uint *)(lVar5 + lVar10);
        local_180 = *(undefined2 *)(lVar5 + 4 + lVar10);
        if ((short)local_184 == -1) {
          local_138 = 0;
          local_130 = 0xffffffff;
        }
        else {
          local_130 = local_184 >> 0x10;
          local_138 = *(undefined8 *)
                       (*(longlong *)&(pUVar7->EntityManager).EntityAllocations +
                       (ulonglong)(local_184 & 0xffff) * 8);
        }
        local_12c = 1;
        (**(code **)((longlong)*local_178.Mutation + 0x10))(local_178.Mutation,&local_138,&local_70)
        ;
      }
    }
    FEntityManager::
    IterateChildren_ParentFirst<_UE::MovieScene::FEntityLedger::MutateAll_::__l2::<lambda_1>_&>
              (&local_150->EntityManager,(FMovieSceneEntityID)*(ushort *)(lVar20 + 0x10),&local_178)
    ;
    TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
  } while( true );
}

// TagGarbage @ 146155c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityLedger::TagGarbage
          (FEntityLedger *this,UMovieSceneEntitySystemLinker *param_1)

{
  FComponentTypeID FVar1;
  FComponentTypeID FVar2;
  FMovieSceneEntityID FVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  FBuiltInComponentTypes *pFVar7;
  ulonglong uVar8;
  uint uVar9;
  FEntityManager *this_00;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  longlong local_98;
  TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
  *local_88;
  char local_80;
  char cStack_7f;
  <lambda_1> local_78;
  <lambda_1> local_68;
  undefined1 local_58 [32];
  longlong local_38;
  TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
  *pTStack_30;
  
  pFVar7 = FBuiltInComponentTypes::Get();
  FVar1.Value = (pFVar7->Tags).NeedsLink.Value;
  pFVar7 = FBuiltInComponentTypes::Get();
  FVar2.Value = (pFVar7->Tags).NeedsUnlink.Value;
  TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_58,
             (TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
              *)&this->ImportedEntities);
  local_80 = '\0';
  cStack_7f = '\0';
  stack0xffffffffffffff58 = local_58._16_16_;
  auStack_b0._0_8_ = local_58._8_8_;
  local_98 = local_38;
  pTStack_90 = pTStack_30;
  uVar8 = local_58._24_8_ >> 0x20;
  uVar9 = local_58._28_4_;
  local_88 = (TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
              *)&this->ImportedEntities;
  if ((int)uVar9 < *(int *)(local_58._16_8_ + 0x18)) {
    do {
      bVar5 = FWeakObjectPtr::IsValid
                        ((FWeakObjectPtr *)
                         ((longlong)(int)uVar8 * 0x1c + *(longlong *)local_58._0_8_));
      if (!bVar5) {
        FVar3.Value = *(ushort *)(*(longlong *)local_58._0_8_ + 0x10 + (longlong)(int)uVar9 * 0x1c);
        if (FVar3.Value != 0xffff) {
          this_00 = &param_1->EntityManager;
          FEntityManager::RemoveComponent(this_00,FVar3,FVar1);
          local_78.__this = this_00;
          local_78.ComponentTypeID.Value = FVar1.Value;
          FEntityManager::
          IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::RemoveComponent_::__l8::<lambda_1>_>
                    (this_00,FVar3,&local_78);
          FVar3.Value = *(ushort *)
                         (*(longlong *)local_58._0_8_ + 0x10 + (longlong)(int)uVar9 * 0x1c);
          FEntityManager::AddComponent(this_00,FVar3,FVar2);
          local_68.__this = this_00;
          local_68.ComponentTypeID.Value = FVar2.Value;
          FEntityManager::
          IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponent_::__l8::<lambda_1>_>
                    (this_00,FVar3,&local_68);
        }
        TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_90,uVar9);
        local_80 = '\x01';
      }
      uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
      uVar8 = (ulonglong)uStack_9c;
      uVar9 = uStack_9c;
    } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
    if ((local_80 != '\0') && (cStack_7f != '\0')) {
      uVar9 = *(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34;
      if (uVar9 < 4) {
        iVar6 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((0 < (int)uVar9) && (local_88->HashSize < iVar6)) || (iVar6 < local_88->HashSize)) {
        local_88->HashSize = iVar6;
        TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
        ::Rehash(local_88);
      }
    }
  }
  return;
}

// UnlinkEverything @ 14615b8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityLedger::UnlinkEverything
          (FEntityLedger *this,UMovieSceneEntitySystemLinker *param_1,EUnlinkEverythingMode param_2)

{
  undefined1 *puVar1;
  TMap<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
  *pTVar2;
  ulonglong uVar3;
  FEntityManager *pFVar4;
  FComponentTypeID FVar5;
  FMovieSceneEntityID FVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  FEntityLedger *pFVar10;
  bool bVar11;
  FBuiltInComponentTypes *pFVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [4];
  EUnlinkEverythingMode local_114;
  TMap<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
  *local_110;
  int iStack_108;
  uint uStack_104;
  undefined1 *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  FEntityLedger *local_d8;
  TMap<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  <lambda_1> local_a0;
  <lambda_1> local_90;
  TBitArray<TFixedAllocator<12>_> local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_114 = param_2;
  local_d8 = this;
  pFVar12 = FBuiltInComponentTypes::Get();
  FVar5.Value = (pFVar12->Tags).NeedsLink.Value;
  pFVar12 = FBuiltInComponentTypes::Get();
  local_80.NumBits = 0;
  local_80.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&local_80,&(pFVar12->FinishedMask).Bits);
  iVar7 = *(int *)&(this->ImportedEntities).field_0x28;
  puVar1 = &(this->ImportedEntities).field_0x10;
  local_f0 = 0;
  local_110 = &this->ImportedEntities;
  iStack_108 = 0;
  uStack_104 = 1;
  iStack_f4 = iStack_108;
  if (iVar7 != 0) {
    puVar17 = *(uint **)&(this->ImportedEntities).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    iStack_108 = 0;
    while (uVar15 == 0) {
      lVar13 = (longlong)iStack_108;
      local_f0 = local_f0 + 0x20;
      iStack_108 = iStack_108 + 1;
      iStack_f4 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_108) goto LAB_14615b99e;
      uVar15 = puVar17[lVar13 + 1];
    }
    uStack_104 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_104 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_e0 = (int)lVar13;
    iStack_f4 = local_f0 + -1 + local_e0;
    if (iVar7 < iStack_f4) {
      iStack_f4 = iVar7;
    }
  }
LAB_14615b99e:
  iStack_e8 = *(int *)&(this->ImportedEntities).field_0x8 -
              *(int *)&(this->ImportedEntities).field_0x34;
  uVar15 = *(uint *)&(this->ImportedEntities).field_0x28;
  TStack_c8._padding_ = CONCAT44(uStack_104,iStack_108);
  uStack_f8 = 0xffffffff;
  uVar18 = uVar15 & 0xffffffe0;
  TStack_c8.CurrentBitIndex = iStack_f4;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar15 >> 5;
  TStack_c8._28_4_ = iStack_f4;
  TStack_c8.BaseBitIndex = local_f0;
  uStack_a8 = CONCAT44(uStack_e4,iStack_e8);
  local_100 = puVar1;
  iStack_ec = iStack_f4;
  local_d0 = local_110;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar7 < (int)uVar15)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar8 = *(uint *)&(this->ImportedEntities).field_0x28;
  if (uVar15 != uVar8) {
    puVar16 = *(undefined1 **)&(this->ImportedEntities).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar15 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14615baab;
      uVar15 = *(uint *)(puVar16 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar18;
    if ((int)uVar8 < (int)uVar15) {
      uVar15 = uVar8;
    }
  }
LAB_14615baab:
  while( true ) {
    pTVar2 = local_d0;
    if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0->field_0x34 != (int)uStack_a8) {
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
    }
    pFVar10 = local_d8;
    if (((TStack_c8.CurrentBitIndex == uVar15) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar2 == &local_d8->ImportedEntities)) break;
    lVar13 = (longlong)TStack_c8.CurrentBitIndex * 0x1c + *(longlong *)pTVar2;
    FVar6.Value = *(ushort *)(lVar13 + 0x10);
    if (FVar6.Value != 0xffff) {
      if (local_114 == CleanGarbage) {
        pFVar4 = &param_1->EntityManager;
        FEntityManager::RemoveComponent(pFVar4,FVar6,FVar5);
        local_a0.__this = pFVar4;
        local_a0.ComponentTypeID.Value = FVar5.Value;
        FEntityManager::
        IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::RemoveComponent_::__l8::<lambda_1>_>
                  (pFVar4,FVar6,&local_a0);
      }
      FVar6.Value = *(ushort *)(lVar13 + 0x10);
      pFVar4 = &param_1->EntityManager;
      FEntityManager::AddComponents(pFVar4,FVar6,(FComponentMask *)&local_80);
      local_90.EntityComponentMask = (FComponentMask *)&local_80;
      local_90.__this = pFVar4;
      FEntityManager::
      IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponents_::__l8::<lambda_1>_>
                (pFVar4,FVar6,&local_90);
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  pTVar2 = &local_d8->ImportedEntities;
  bVar11 = 1 < *(int *)&(local_d8->ImportedEntities).field_0x48;
  if (!bVar11) {
    TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
                      *)pTVar2);
  }
  puVar1 = &(pFVar10->ImportedEntities).field_0xc;
  *(undefined4 *)&(pFVar10->ImportedEntities).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
  }
  *(undefined4 *)&(pFVar10->ImportedEntities).field_0x30 = 0xffffffff;
  *(undefined4 *)&(pFVar10->ImportedEntities).field_0x34 = 0;
  iVar7 = *(int *)&(pFVar10->ImportedEntities).field_0x2c;
  *(undefined4 *)&(pFVar10->ImportedEntities).field_0x28 = 0;
  if ((iVar7 < 0) || (0x80 < iVar7)) {
    *(undefined4 *)&(pFVar10->ImportedEntities).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar10->ImportedEntities).field_0x10,0);
  }
  if (bVar11) {
    *(undefined4 *)&(pFVar10->ImportedEntities).field_0x48 = 1;
    TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
              *)pTVar2);
  }
  return;
}

// UnlinkOneShots @ 14615bc90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityLedger::UnlinkOneShots
          (FEntityLedger *this,UMovieSceneEntitySystemLinker *param_1)

{
  FEntityManager *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FMovieSceneEntityID FVar3;
  int iVar4;
  FBuiltInComponentTypes *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [8];
  <lambda_1> local_90;
  TBitArray<TFixedAllocator<12>_> local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pFVar5 = FBuiltInComponentTypes::Get();
  local_80.NumBits = 0;
  local_80.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&local_80,&(pFVar5->FinishedMask).Bits);
  pFVar6 = (this->OneShotEntities).AllocatorInstance.Data;
  iVar4 = (this->OneShotEntities).ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar4 * 2;
  while( true ) {
    if ((this->OneShotEntities).ArrayNum != iVar4) {
      `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_98);
    }
    if (pFVar6 == pFVar2) break;
    FVar3.Value = *(ushort *)pFVar6;
    this_00 = &param_1->EntityManager;
    FEntityManager::AddComponents(this_00,FVar3,(FComponentMask *)&local_80);
    local_90.EntityComponentMask = (FComponentMask *)&local_80;
    local_90.__this = this_00;
    FEntityManager::
    IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponents_::__l8::<lambda_1>_>
              (this_00,FVar3,&local_90);
    pFVar6 = pFVar6 + 2;
  }
  piVar1 = &(this->OneShotEntities).ArrayMax;
  (this->OneShotEntities).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// UpdateConditionalEntities @ 14615f210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityLedger::UpdateConditionalEntities
          (FEntityLedger *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportSequenceParams *param_2,FMovieSceneEntityComponentField *param_3,
          TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
          *param_4)

{
  FEntityManager *this_00;
  TObjectPtr<UObject> *pTVar1;
  ushort uVar2;
  FMovieSceneEntityID FVar3;
  undefined1 *puVar4;
  TObjectPtr<UObject> this_01;
  code *pcVar5;
  FMovieSceneEntityComponentField *this_02;
  FEntityLedger *pFVar6;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  FImportedEntityData *pFVar11;
  UMovieSceneSection *this_03;
  UClass *pUVar12;
  IMovieSceneEntityProvider *this_04;
  longlong *plVar13;
  FBuiltInComponentTypes *pFVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar17;
  ulonglong uVar18;
  uint uVar19;
  TObjectPtr<UObject>_u_0 *pTVar20;
  uint uVar21;
  uint uVar22;
  FMovieSceneEvaluationFieldEntityQuery *this_05;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 *puVar26;
  ForElementType<unsigned_int> FVar27;
  uint *puVar28;
  TBitArray<FDefaultBitArrayAllocator> *pTVar29;
  undefined1 auStackY_328 [32];
  undefined1 local_2e8 [4];
  FMovieSceneEntityID local_2e4;
  uint local_2e0;
  uint uStack_2dc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2d8;
  FInterrogationChannel local_2d0;
  undefined8 uStack_2cc;
  undefined4 uStack_2c4;
  longlong *local_2c0;
  undefined1 local_2b8 [8];
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2b0;
  uint local_2a8;
  int iStack_2a4;
  int iStack_2a0;
  undefined4 uStack_29c;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *local_298;
  uint uStack_290;
  uint uStack_28c;
  undefined1 *local_288;
  undefined4 uStack_280;
  uint uStack_27c;
  uint local_278;
  uint uStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  int local_264;
  int local_260;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *local_258;
  FMovieSceneEntityComponentField *local_250;
  FEntityImportSequenceParams *local_248;
  FEntityLedger *local_240;
  TBitArray<FDefaultBitArrayAllocator> *local_238;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_228;
  undefined8 uStack_208;
  undefined1 local_1f8 [8];
  FMovieSceneEvaluationFieldSharedEntityMetaData *pFStack_1f0;
  uint local_1e8;
  FInterrogationKey local_1e4;
  FInterrogationInstance local_1d8;
  FEntityImportSequenceParams local_1d0;
  TArrayView<TObjectPtr<UObject>_const_,int> local_1b8;
  <lambda_1> local_1a8;
  FWeakObjectPtr local_198;
  undefined1 local_188 [32];
  ForElementType<unsigned_int> local_168;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  FScriptContainerElement local_150 [8];
  ForAnyElementType local_148;
  uint local_140;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  local_138;
  FImportedEntity local_e8;
  TBitArray<TFixedAllocator<12>_> local_90;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_258 = param_4;
  uVar19 = *(int *)&(param_4->Elements).field_0x8 - *(int *)&(param_4->Elements).field_0x34;
  if (uVar19 == 0) {
    return;
  }
  if (param_3 == (FMovieSceneEntityComponentField *)0x0) {
    return;
  }
  local_1d0.DefaultCompletionMode = param_2->DefaultCompletionMode;
  local_1d0.SubSectionFlags = param_2->SubSectionFlags;
  local_1d0._18_2_ = *(undefined2 *)&param_2->field_0x12;
  local_1f8 = (undefined1  [8])0x0;
  pFStack_1f0 = (FMovieSceneEvaluationFieldSharedEntityMetaData *)0x0;
  local_1d0.HierarchicalBias = param_2->HierarchicalBias;
  local_1d0.SequenceID.Value = (param_2->SequenceID).Value;
  local_1d0.InstanceHandle = param_2->InstanceHandle;
  local_1d0.RootInstanceHandle = param_2->RootInstanceHandle;
  uVar25 = 0;
  local_1e8 = 0;
  local_1e4.Channel.Value = -1;
  local_1e4.InterrogationIndex = -1;
  local_1d8.Sequence = (UMovieSceneSequence *)0x0;
  local_138.Elements._0_8_ = 0;
  local_138.Elements._8_8_ = 0;
  local_138.Elements._32_8_ = 0;
  local_138.Elements._40_4_ = 0;
  local_138.Elements._44_4_ = 0x80;
  local_138.Elements._48_4_ = 0xffffffff;
  local_138.Elements._52_4_ = 0;
  local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_138.HashSize = 0;
  local_188._0_8_ = (FScriptContainerElement *)0x0;
  local_188._8_8_ = 0;
  local_168 = (ForElementType<unsigned_int>)0x0;
  local_160 = 0;
  local_15c = 0x80;
  local_158 = -1;
  local_154 = 0;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  local_250 = param_3;
  local_248 = param_2;
  local_240 = this;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar19);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_188,uVar19);
  uVar22 = 1;
  if (3 < uVar19) {
    uVar18 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_268 = (undefined4)lVar16;
    uVar22 = 1 << ((byte)lVar16 & 0x1f);
  }
  uVar19 = 0;
  if ((local_140 != 0) && ((int)uVar22 <= (int)local_140)) goto LAB_14615f59f;
  local_140 = uVar22;
  if (local_148.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_148,0,0,4);
  }
  if (uVar22 != 0) {
    uVar23 = uVar22;
    if (uVar22 < 2) {
      if (local_148.Data != (FScriptContainerElement *)0x0) {
        uVar23 = 0;
        goto LAB_14615f3bd;
      }
    }
    else {
LAB_14615f3bd:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_148,0,uVar23,4);
    }
    if (0 < (int)uVar22) {
      uVar24 = (ulonglong)uVar22;
      uVar18 = uVar25;
      do {
        FVar15.Data = local_150;
        if (local_148.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_148.Data;
        }
        uVar10 = (longlong)(int)uVar22 - 1U & uVar18;
        uVar18 = uVar18 + 1;
        *(undefined4 *)(FVar15.Data + uVar10 * 4) = 0xffffffff;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
  if (local_140 != 0) {
    pTStack_2d8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10);
    local_2e0 = 0;
    uStack_2dc = 1;
    uStack_2cc = 0;
    if (local_160 != 0) {
      FVar27 = (ForElementType<unsigned_int>)((longlong)local_188 + 0x10);
      if (local_168 != (ForElementType<unsigned_int>)0x0) {
        FVar27 = local_168;
      }
      uVar22 = *(uint *)FVar27;
      uVar18 = uVar25;
      uVar24 = uVar25;
      uVar23 = uVar19;
      while (uVar22 == 0) {
        uVar23 = (int)uVar24 + 0x20;
        uVar24 = (ulonglong)uVar23;
        iVar9 = (int)uVar18;
        local_2e0 = iVar9 + 1;
        uVar18 = (ulonglong)local_2e0;
        uStack_2cc = (ulonglong)uVar23 << 0x20;
        if ((int)(local_160 + -1 + (local_160 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_2e0) {
          uStack_2cc = CONCAT44(uVar23,local_160);
          goto LAB_14615f4e2;
        }
        uVar22 = ((uint *)((longlong)FVar27 + 4))[iVar9];
      }
      uStack_2dc = ~(uVar22 - 1) & uVar22;
      uVar18 = (ulonglong)uStack_2dc * 2 + 1;
      lVar16 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_264 = (int)lVar16;
      iVar9 = (uVar23 - 1) + local_264;
      if (local_160 < iVar9) {
        iVar9 = local_160;
      }
      uStack_2cc._4_4_ = (int)((ulonglong)uStack_2cc >> 0x20);
      uStack_2cc = CONCAT44(uStack_2cc._4_4_,iVar9);
    }
LAB_14615f4e2:
    local_2d0.Value = -1;
    local_2c0 = (longlong *)local_188;
    local_2b8 = (undefined1  [8])CONCAT44(uStack_2dc,local_2e0);
    local_2a8 = 0xffffffff;
    iStack_2a4 = (int)uStack_2cc;
    iStack_2a0 = uStack_2cc._4_4_;
    uStack_29c = uStack_2c4;
    pTStack_2b0 = pTStack_2d8;
    if ((int)uStack_2cc < local_160) {
      do {
        puVar28 = (uint *)((longlong)iStack_2a4 * 0x10 + *local_2c0);
        uVar22 = local_140 - 1 & *puVar28;
        puVar28[3] = uVar22;
        FVar15.Data = local_150;
        if (local_148.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_148.Data;
        }
        lVar16 = (longlong)(int)(local_140 - 1 & uVar22);
        puVar28[2] = *(uint *)(FVar15.Data + lVar16 * 4);
        *(int *)(FVar15.Data + lVar16 * 4) = iStack_2a4;
        local_2a8 = local_2a8 & ~local_2b8._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_2b8);
      } while (iStack_2a4 < pTStack_2b0->NumBits);
    }
  }
LAB_14615f59f:
  pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_4->Elements).field_0x10;
  uStack_28c = 1;
  uVar22 = *(uint *)&(param_4->Elements).field_0x28;
  uStack_27c = uVar19;
  local_278 = uVar19;
  if (uVar22 != 0) {
    puVar28 = *(uint **)&(param_4->Elements).field_0x20;
    if (puVar28 == (uint *)0x0) {
      puVar28 = (uint *)pTVar29;
    }
    uVar23 = *puVar28;
    uVar18 = uVar25;
    uVar19 = 0;
    local_278 = 0;
    while (uVar23 == 0) {
      uVar19 = (int)uVar25 + 1;
      uVar25 = (ulonglong)uVar19;
      local_278 = (int)uVar18 + 0x20;
      uVar18 = (ulonglong)local_278;
      uStack_27c = uVar22;
      if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
      goto LAB_14615f621;
      uVar23 = puVar28[(int)uVar19];
    }
    uStack_28c = ~(uVar23 - 1) & uVar23;
    uVar25 = (ulonglong)uStack_28c * 2 + 1;
    lVar16 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_260 = (int)lVar16;
    uStack_27c = (local_278 - 1) + local_260;
    if ((int)uVar22 < (int)uStack_27c) {
      uStack_27c = uVar22;
    }
  }
LAB_14615f621:
  uVar23 = *(uint *)&(param_4->Elements).field_0x28;
  local_298 = param_4;
  iStack_270 = *(int *)&(param_4->Elements).field_0x8 - *(int *)&(param_4->Elements).field_0x34;
  uStack_280 = 0xffffffff;
  uVar21 = uVar23 & 0xffffffe0;
  TStack_228._padding_ = CONCAT44(uStack_28c,uVar19);
  TStack_228.CurrentBitIndex = uStack_27c;
  TStack_228.UnvisitedBitMask = 0xffffffff;
  local_230 = param_4;
  iVar9 = (int)uVar23 >> 5;
  TStack_228._28_4_ = uStack_27c;
  TStack_228.BaseBitIndex = local_278;
  uStack_208 = CONCAT44(uStack_26c,iStack_270);
  uStack_290 = uVar19;
  local_288 = (undefined1 *)pTVar29;
  uStack_274 = uStack_27c;
  local_238 = pTVar29;
  TStack_228.Array = pTVar29;
  if ((((int)uVar23 < 0) || ((int)uVar22 < (int)uVar23)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar19 = *(uint *)&(param_4->Elements).field_0x28;
  if (uVar23 != uVar19) {
    puVar4 = *(undefined1 **)&(param_4->Elements).field_0x20;
    puVar26 = (undefined1 *)pTVar29;
    if (puVar4 != (undefined1 *)0x0) {
      puVar26 = puVar4;
    }
    uVar22 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar9 * 4);
    while (uVar22 == 0) {
      iVar9 = iVar9 + 1;
      uVar21 = uVar21 + 0x20;
      uVar23 = uVar19;
      if ((int)(((int)(uVar19 - 1) >> 0x1f & 0x1fU) + (uVar19 - 1)) >> 5 < iVar9)
      goto LAB_14615f720;
      uVar22 = *(uint *)(puVar26 + (longlong)iVar9 * 4);
    }
    uVar25 = (ulonglong)(~(uVar22 - 1) & uVar22) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar23 = (uVar21 - 1) + (int)lVar16;
    if ((int)uVar19 < (int)uVar23) {
      uVar23 = uVar19;
    }
  }
LAB_14615f720:
  do {
    pTVar7 = local_230;
    if (*(int *)&(local_230->Elements).field_0x8 - *(int *)&(local_230->Elements).field_0x34 !=
        (int)uStack_208) {
      `TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_2e8);
    }
    this_02 = local_250;
    if (((TStack_228.CurrentBitIndex == uVar23) && (TStack_228.Array == pTVar29)) &&
       (pTVar7 == local_258)) goto LAB_14615fa32;
    this_05 = (FMovieSceneEvaluationFieldEntityQuery *)
              ((longlong)TStack_228.CurrentBitIndex * 0x1c + *(longlong *)&pTVar7->Elements);
    local_1e8 = (this_05->Entity).Key.EntityID;
    local_1f8 = (undefined1  [8])FMovieSceneEntityComponentField::FindMetaData(local_250,this_05);
    pFStack_1f0 = FMovieSceneEntityComponentField::FindSharedMetaData(this_02,this_05);
    pFVar6 = local_240;
    bVar8 = CanImportEntity(local_240,param_1,local_248,this_02,this_05,&local_138,
                            (TMap<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
                             *)local_188,true);
    local_198 = (this_05->Entity).Key.EntityOwner.WeakPtr;
    pFVar11 = TMapBase<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
              ::FindOrAddImpl<FMovieSceneEvaluationFieldEntityKey_const_&>
                        ((TMapBase<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
                          *)&pFVar6->ImportedEntities,
                         local_198.ObjectSerialNumber ^ local_198.ObjectIndex ^
                         (this_05->Entity).Key.EntityID,
                         (FMovieSceneEvaluationFieldEntityKey *)this_05);
    uVar2 = (pFVar11->EntityID).Value;
    if (bVar8) {
      if ((uVar2 == 0xffff) || (pFVar11->MetaDataIndex != this_05->MetaDataIndex)) {
        pFVar11->MetaDataIndex = this_05->MetaDataIndex;
        this_03 = (UMovieSceneSection *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_05);
        if (this_03 == (UMovieSceneSection *)0x0) {
LAB_14615fa32:
          local_140 = 0;
          if (local_148.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data);
          }
          TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_188);
          local_138.HashSize = 0;
          if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_138.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_138.Elements);
          return;
        }
        pUVar12 = Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
        this_04 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_03,pUVar12);
        if (this_04 == (IMovieSceneEntityProvider *)0x0) goto LAB_14615fa32;
        local_e8.Builders.ArrayMax = 1;
        local_e8.Builders.AllocatorInstance.SecondaryData =
             (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0;
        local_e8.Builders.ArrayNum = 0;
        IMovieSceneEntityProvider::ImportEntity
                  (this_04,param_1,(FEntityImportParams *)local_1f8,&local_e8);
        if (local_e8.Builders.ArrayNum != 0) {
          pUVar12 = Z_Construct_UClass_UMovieSceneDecorationContainerObject_NoRegister();
          iVar9 = (int)pUVar12->_padding_;
          if ((iVar9 <= *(int *)(this_03->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
              &pUVar12->_padding_)) {
            FMovieSceneDecorationContainer::GetDecorations
                      ((FMovieSceneDecorationContainer *)&this_03->_padding_,&local_1b8);
            pTVar1 = local_1b8.DataPtr + local_1b8.ArrayNum;
            for (pTVar20 = &(local_1b8.DataPtr)->field0_0x0; pTVar20 != &pTVar1->field0_0x0;
                pTVar20 = pTVar20 + 1) {
              this_01.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar20->DebugPtr;
              if (this_01.field0_0x0 != (UObject *)0x0) {
                pUVar12 = Z_Construct_UClass_UMovieSceneEntityDecorator_NoRegister();
                plVar13 = UObjectBaseUtility::GetInterfaceAddress
                                    ((UObjectBaseUtility *)this_01.field0_0x0,pUVar12);
                if (plVar13 != (longlong *)0x0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13,param_1,local_1f8,&local_e8);
                }
              }
            }
          }
          pUVar12 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
          iVar9 = (int)pUVar12->_padding_;
          if ((iVar9 <= *(int *)(this_03->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
              &pUVar12->_padding_)) {
            UMovieSceneSection::BuildDefaultComponents
                      (this_03,param_1,(FEntityImportParams *)local_1f8,&local_e8);
          }
          FImportedEntity::Manufacture
                    (&local_e8,(FEntityImportParams *)&local_2e4,(FEntityManager *)local_1f8);
          FEntityManager::ReplaceEntityID(&param_1->EntityManager,&pFVar11->EntityID,local_2e4);
        }
        FVar17 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)&local_e8;
        if (local_e8.Builders.AllocatorInstance.SecondaryData !=
            (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
          FVar17 = local_e8.Builders.AllocatorInstance.SecondaryData;
        }
        DestructItems<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>,int>
                  ((TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *)FVar17,
                   local_e8.Builders.ArrayNum);
        if (local_e8.Builders.AllocatorInstance.SecondaryData !=
            (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
          FMemory::Free((void *)local_e8.Builders.AllocatorInstance.SecondaryData);
        }
      }
    }
    else if (uVar2 != 0xffff) {
      pFVar14 = FBuiltInComponentTypes::Get();
      local_90.NumBits = 0;
      local_90.MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                (&local_90,&(pFVar14->FinishedMask).Bits);
      FVar3.Value = (pFVar11->EntityID).Value;
      this_00 = &param_1->EntityManager;
      FEntityManager::AddComponents(this_00,FVar3,(FComponentMask *)&local_90);
      local_1a8.EntityComponentMask = (FComponentMask *)&local_90;
      local_1a8.__this = this_00;
      FEntityManager::
      IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponents_::__l8::<lambda_1>_>
                (this_00,FVar3,&local_1a8);
      (pFVar11->EntityID).Value = 0xffff;
      pFVar11->MetaDataIndex = -1;
    }
    TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_228);
    pTVar29 = local_238;
  } while( true );
}

// UpdateEntities @ 14615fad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityLedger::UpdateEntities
          (FEntityLedger *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportSequenceParams *param_2,FMovieSceneEntityComponentField *param_3,
          TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
          *param_4)

{
  int iVar1;
  undefined1 auStackY_108 [32];
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  void *local_88;
  undefined4 local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  UpdateEntities(this,param_1,param_2,param_3,param_4,
                 (TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
                  *)local_78,
                 (TMap<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
                  *)local_c8);
  local_80 = 0;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  iVar1 = SUB84(local_c8._8_8_,4);
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_a0 = 0;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// UpdateEntities @ 14615fc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityLedger::UpdateEntities
          (FEntityLedger *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportSequenceParams *param_2,FMovieSceneEntityComponentField *param_3,
          TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
          *param_4,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
                   *param_5,
          TMap<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
          *param_6)

{
  TMap<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>_>
  *pTVar1;
  FEntityManager *this_00;
  undefined1 *puVar2;
  FMovieSceneEntityID FVar3;
  uint uVar4;
  undefined1 *puVar5;
  code *pcVar6;
  UMovieSceneEntitySystemLinker *pUVar7;
  longlong *plVar8;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *pTVar9;
  bool bVar10;
  int iVar11;
  FBuiltInComponentTypes *pFVar12;
  FMovieSceneEvaluationFieldEntityQuery *pFVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  longlong lVar18;
  uint uVar19;
  FMovieSceneEvaluationFieldEntityKey *pFVar20;
  undefined1 *puVar21;
  uint *puVar22;
  ulonglong uVar23;
  undefined1 auStackY_298 [32];
  undefined1 local_258;
  undefined1 local_257 [7];
  undefined8 local_250;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *local_248;
  int iStack_240;
  uint uStack_23c;
  undefined1 *local_238;
  undefined4 uStack_230;
  int iStack_22c;
  int local_228;
  undefined4 uStack_224;
  int iStack_220;
  undefined4 uStack_21c;
  UMovieSceneEntitySystemLinker *local_218;
  TMap<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
  *local_210;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *local_208;
  FMovieSceneEntityComponentField *local_200;
  FEntityImportSequenceParams *local_1f8;
  longlong *local_1e8;
  undefined1 auStack_1e0 [16];
  uint uStack_1d0;
  uint uStack_1cc;
  longlong local_1c8;
  TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
  *pTStack_1c0;
  TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
  *local_1b8;
  undefined2 local_1b0;
  undefined4 local_1a8;
  int local_1a4;
  int local_1a0;
  FEntityLedger *local_198;
  FWeakObjectPtr local_188;
  uint local_180;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  <lambda_1> local_118;
  FWeakObjectPtr local_108;
  undefined1 local_f8 [32];
  longlong local_d8;
  TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
  *pTStack_d0;
  undefined4 local_ac;
  undefined4 local_8c;
  TBitArray<TFixedAllocator<12>_> local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_208 = param_5;
  local_210 = param_6;
  local_218 = param_1;
  local_200 = param_3;
  local_1f8 = param_2;
  local_198 = this;
  if (((param_1->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceRegistry.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                          ,0x96,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (*(int *)&(param_4->Elements).field_0x8 == *(int *)&(param_4->Elements).field_0x34) {
    UnlinkEverything(this,param_1,Normal);
    this->bInvalidated = false;
  }
  else {
    pTVar1 = &this->ImportedEntities;
    iVar16 = 0;
    iVar14 = 0;
    uVar17 = 1;
    local_250 = 1;
    if (*(int *)&(this->ImportedEntities).field_0x8 != *(int *)&(this->ImportedEntities).field_0x34)
    {
      pFVar12 = FBuiltInComponentTypes::Get();
      local_88.NumBits = 0;
      local_88.MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                (&local_88,&(pFVar12->FinishedMask).Bits);
      TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_f8,
                 (TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
                  *)pTVar1);
      local_1b0 = 0;
      stack0xfffffffffffffe28 = local_f8._16_16_;
      local_1e8 = (longlong *)local_f8._0_8_;
      auStack_1e0._0_8_ = local_f8._8_8_;
      local_1c8 = local_d8;
      pTStack_1c0 = pTStack_d0;
      uVar23 = local_f8._24_8_ >> 0x20;
      local_1b8 = (TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
                   *)pTVar1;
      if (local_f8._28_4_ < *(int *)(local_f8._16_8_ + 0x18)) {
        do {
          plVar8 = local_1e8;
          lVar18 = (longlong)(int)uVar23 * 0x1c;
          pFVar20 = (FMovieSceneEvaluationFieldEntityKey *)(*local_1e8 + lVar18);
          local_180 = pFVar20->EntityID;
          local_188 = (pFVar20->EntityOwner).WeakPtr;
          iVar11 = TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
                   ::FindIndexByHash<FMovieSceneEvaluationFieldEntityKey>
                             (param_4,local_188.ObjectSerialNumber ^ local_188.ObjectIndex ^
                                      local_180,pFVar20);
          if (iVar11 == -1) {
            FVar3.Value = *(ushort *)(lVar18 + 0x10 + *plVar8);
            if (FVar3.Value != 0xffff) {
              this_00 = &param_1->EntityManager;
              FEntityManager::AddComponents(this_00,FVar3,(FComponentMask *)&local_88);
              local_118.EntityComponentMask = (FComponentMask *)&local_88;
              local_118.__this = this_00;
              FEntityManager::
              IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponents_::__l8::<lambda_1>_>
                        (this_00,FVar3,&local_118);
            }
            TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_1c0,(int)uVar23);
            local_1b0 = CONCAT11(local_1b0._1_1_,1);
          }
          uStack_1d0 = uStack_1d0 & ~auStack_1e0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1e0);
          this = local_198;
          uVar17 = local_250;
          uVar23 = (ulonglong)uStack_1cc;
        } while ((int)uStack_1cc < *(int *)(auStack_1e0._8_8_ + 0x18));
        if (((char)local_1b0 != '\0') && (local_1b0._1_1_ != '\0')) {
          uVar19 = *(int *)&(local_1b8->Elements).field_0x8 -
                   *(int *)&(local_1b8->Elements).field_0x34;
          iVar11 = (int)local_250;
          if (3 < uVar19) {
            uVar23 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
            lVar18 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            local_1a8 = (undefined4)lVar18;
            iVar11 = iVar11 << ((byte)lVar18 & 0x1f);
          }
          if (((0 < (int)uVar19) && (local_1b8->HashSize < iVar11)) ||
             (iVar11 < local_1b8->HashSize)) {
            local_1b8->HashSize = iVar11;
            TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
            ::Rehash(local_1b8);
          }
        }
      }
    }
    uStack_23c = (uint)uVar17;
    local_228 = 0;
    if ((*(int *)&(this->ImportedEntities).field_0x8 == *(int *)&(this->ImportedEntities).field_0x34
        ) || (this->bInvalidated != false)) {
      iVar11 = *(int *)&(param_4->Elements).field_0x28;
      puVar2 = &(param_4->Elements).field_0x10;
      iStack_22c = local_228;
      if (iVar11 != 0) {
        puVar22 = *(uint **)&(param_4->Elements).field_0x20;
        if (puVar22 == (uint *)0x0) {
          puVar22 = (uint *)puVar2;
        }
        uVar19 = *puVar22;
        local_228 = iVar16;
        iVar14 = iVar16;
        while (uVar19 == 0) {
          lVar18 = (longlong)iVar14;
          local_228 = local_228 + 0x20;
          iVar14 = iVar14 + 1;
          iStack_22c = iVar11;
          if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1461601ed;
          uVar19 = puVar22[lVar18 + 1];
        }
        uStack_23c = -uVar19 & uVar19;
        uVar23 = (ulonglong)uStack_23c * 2 + 1;
        lVar18 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_1a0 = (int)lVar18;
        iStack_22c = local_228 + -1 + local_1a0;
        if (iVar11 < iStack_22c) {
          iStack_22c = iVar11;
        }
      }
LAB_1461601ed:
      uVar19 = *(uint *)&(param_4->Elements).field_0x28;
      uStack_224 = local_8c;
      iStack_220 = *(int *)&(param_4->Elements).field_0x8 - *(int *)&(param_4->Elements).field_0x34;
      uVar15 = uVar19 & 0xffffffe0;
      uStack_230 = 0xffffffff;
      local_248 = param_4;
      TStack_140._padding_ = CONCAT44(uStack_23c,iVar14);
      TStack_140.CurrentBitIndex = iStack_22c;
      TStack_140.UnvisitedBitMask = 0xffffffff;
      local_148 = param_4;
      iVar16 = (int)uVar19 >> 5;
      TStack_140._28_4_ = local_8c;
      TStack_140.BaseBitIndex = local_228;
      uStack_120 = CONCAT44(uStack_21c,iStack_220);
      iStack_240 = iVar14;
      local_238 = puVar2;
      TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if (((int)uVar19 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pUVar7 = local_218;
      uVar4 = *(uint *)&(param_4->Elements).field_0x28;
      if (uVar19 != uVar4) {
        puVar5 = *(undefined1 **)&(param_4->Elements).field_0x20;
        puVar21 = puVar2;
        if (puVar5 != (undefined1 *)0x0) {
          puVar21 = puVar5;
        }
        uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar16 * 4);
        while (uVar19 == 0) {
          lVar18 = (longlong)iVar16;
          uVar15 = uVar15 + 0x20;
          iVar16 = iVar16 + 1;
          uVar19 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
          goto LAB_146160300;
          uVar19 = *(uint *)(puVar21 + lVar18 * 4 + 4);
        }
        uVar23 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar19 = (int)lVar18 + -1 + uVar15;
        if ((int)uVar4 < (int)uVar19) {
          uVar19 = uVar4;
        }
      }
LAB_146160300:
      while( true ) {
        pTVar9 = local_148;
        if (*(int *)&(local_148->Elements).field_0x8 - *(int *)&(local_148->Elements).field_0x34 !=
            (int)uStack_120) {
          `TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_257);
        }
        if (((TStack_140.CurrentBitIndex == uVar19) &&
            (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (pTVar9 == param_4)) break;
        ImportEntity(this,pUVar7,local_1f8,local_200,
                     (FMovieSceneEvaluationFieldEntityQuery *)
                     ((longlong)TStack_140.CurrentBitIndex * 0x1c + *(longlong *)&pTVar9->Elements),
                     local_208,local_210);
        TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      }
    }
    else {
      iVar11 = *(int *)&(param_4->Elements).field_0x28;
      puVar2 = &(param_4->Elements).field_0x10;
      iStack_22c = iVar14;
      if (iVar11 != 0) {
        puVar22 = *(uint **)&(param_4->Elements).field_0x20;
        if (puVar22 == (uint *)0x0) {
          puVar22 = (uint *)puVar2;
        }
        uVar19 = *puVar22;
        local_228 = iVar16;
        iVar14 = iVar16;
        while (uVar19 == 0) {
          lVar18 = (longlong)iVar14;
          local_228 = local_228 + 0x20;
          iVar14 = iVar14 + 1;
          iStack_22c = iVar11;
          if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14615ff8f;
          uVar19 = puVar22[lVar18 + 1];
        }
        uStack_23c = -uVar19 & uVar19;
        uVar23 = (ulonglong)uStack_23c * 2 + 1;
        lVar18 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_1a4 = (int)lVar18;
        iStack_22c = local_228 + -1 + local_1a4;
        if (iVar11 < iStack_22c) {
          iStack_22c = iVar11;
        }
      }
LAB_14615ff8f:
      uVar19 = *(uint *)&(param_4->Elements).field_0x28;
      uStack_224 = local_ac;
      iStack_220 = *(int *)&(param_4->Elements).field_0x8 - *(int *)&(param_4->Elements).field_0x34;
      uVar15 = uVar19 & 0xffffffe0;
      uStack_230 = 0xffffffff;
      local_248 = param_4;
      TStack_170._padding_ = CONCAT44(uStack_23c,iVar14);
      TStack_170.CurrentBitIndex = iStack_22c;
      TStack_170.UnvisitedBitMask = 0xffffffff;
      local_178 = param_4;
      iVar16 = (int)uVar19 >> 5;
      TStack_170._28_4_ = local_ac;
      TStack_170.BaseBitIndex = local_228;
      uStack_150 = CONCAT44(uStack_21c,iStack_220);
      iStack_240 = iVar14;
      local_238 = puVar2;
      TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if (((int)uVar19 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pUVar7 = local_218;
      uVar4 = *(uint *)&(param_4->Elements).field_0x28;
      if (uVar19 != uVar4) {
        puVar5 = *(undefined1 **)&(param_4->Elements).field_0x20;
        puVar21 = puVar2;
        if (puVar5 != (undefined1 *)0x0) {
          puVar21 = puVar5;
        }
        uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar16 * 4);
        while (uVar19 == 0) {
          lVar18 = (longlong)iVar16;
          uVar15 = uVar15 + 0x20;
          iVar16 = iVar16 + 1;
          uVar19 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
          goto LAB_1461600a0;
          uVar19 = *(uint *)(puVar21 + lVar18 * 4 + 4);
        }
        uVar23 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar19 = (int)lVar18 + -1 + uVar15;
        if ((int)uVar4 < (int)uVar19) {
          uVar19 = uVar4;
        }
      }
LAB_1461600a0:
      while( true ) {
        pTVar9 = local_178;
        if (*(int *)&(local_178->Elements).field_0x8 - *(int *)&(local_178->Elements).field_0x34 !=
            (int)uStack_150) {
          `TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_258);
        }
        if (((TStack_170.CurrentBitIndex == uVar19) &&
            (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (pTVar9 == param_4)) break;
        pFVar13 = (FMovieSceneEvaluationFieldEntityQuery *)
                  (*(longlong *)&pTVar9->Elements + (longlong)TStack_170.CurrentBitIndex * 0x1c);
        local_108 = (pFVar13->Entity).Key.EntityOwner.WeakPtr;
        iVar14 = TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FMovieSceneEvaluationFieldEntityKey>
                           ((TSet<TTuple<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationFieldEntityKey,UE::MovieScene::FEntityLedger::FImportedEntityData,0>,FDefaultSetAllocator>
                             *)&this->ImportedEntities,
                            local_108.ObjectSerialNumber ^ local_108.ObjectIndex ^
                            (pFVar13->Entity).Key.EntityID,
                            (FMovieSceneEvaluationFieldEntityKey *)pFVar13);
        if ((((iVar14 == -1) ||
             (lVar18 = (longlong)iVar14 * 0x1c + *(longlong *)&this->ImportedEntities, lVar18 == 0))
            || (uVar17 = *(undefined8 *)(lVar18 + 0xc), (short)((ulonglong)uVar17 >> 0x20) == -1))
           || ((int)uVar17 != pFVar13->MetaDataIndex)) {
          ImportEntity(this,pUVar7,local_1f8,local_200,pFVar13,local_208,local_210);
        }
        TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
      }
    }
    this->bInvalidated = false;
  }
  return;
}

// UpdateOneShotEntities @ 146160630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityLedger::UpdateOneShotEntities
          (FEntityLedger *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportSequenceParams *param_2,FMovieSceneEntityComponentField *param_3,
          TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
          *param_4)

{
  int iVar1;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  UpdateOneShotEntities
            (this,param_1,param_2,param_3,param_4,
             (TMap<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
              *)local_78);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// UpdateOneShotEntities @ 146160730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityLedger::UpdateOneShotEntities
          (FEntityLedger *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportSequenceParams *param_2,FMovieSceneEntityComponentField *param_3,
          TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
          *param_4,TMap<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
                   *param_5)

{
  int *piVar1;
  TObjectPtr<UObject>_u_0 *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  TObjectPtr<UObject> this_00;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *pTVar8;
  bool bVar9;
  int iVar10;
  UMovieSceneSection *this_01;
  UClass *pUVar11;
  IMovieSceneEntityProvider *this_02;
  longlong *plVar12;
  byte bVar13;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar14;
  int iVar15;
  FMovieSceneEvaluationFieldEntityQuery *this_03;
  TObjectPtr<UObject>_u_0 *pTVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<unsigned_int> FVar19;
  uint *puVar20;
  undefined1 auStackY_248 [32];
  undefined1 local_1f8 [24];
  int local_1e0;
  int local_1dc;
  FInterrogationInstance local_1d8;
  TMap<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
  *local_1d0;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *local_1c8;
  int iStack_1c0;
  uint uStack_1bc;
  undefined1 *local_1b8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  int local_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198 [8];
  FMovieSceneEvaluationFieldSharedEntityMetaData *pFStack_190;
  uint local_188;
  FInterrogationKey local_184;
  FInterrogationInstance local_178;
  FEntityImportSequenceParams local_170;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *local_158;
  undefined1 auStack_150 [32];
  int iStack_130;
  TArrayView<TObjectPtr<UObject>_const_,int> local_128 [3];
  undefined1 local_f8 [52];
  undefined4 local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  FImportedEntity local_a8;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1d0 = param_5;
  local_1d8.Sequence = (UMovieSceneSequence *)param_2;
  if (((this->OneShotEntities).ArrayNum != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("OneShotEntities.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityLedger.cpp"
                         ,0x54,
                         L"One shot entities should not be updated multiple times per-evaluation. They must not have gotten cleaned up correctly."
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iStack_1a0 = *(int *)&(param_4->Elements).field_0x8 - *(int *)&(param_4->Elements).field_0x34;
  if (iStack_1a0 == 0) {
    return;
  }
  local_170.DefaultCompletionMode = param_2->DefaultCompletionMode;
  local_170.SubSectionFlags = param_2->SubSectionFlags;
  local_170._18_2_ = *(undefined2 *)&param_2->field_0x12;
  local_1f8._16_8_ = &(param_4->Elements).field_0x10;
  local_198 = (undefined1  [8])0x0;
  pFStack_190 = (FMovieSceneEvaluationFieldSharedEntityMetaData *)0x0;
  iStack_1c0 = 0;
  local_170.HierarchicalBias = param_2->HierarchicalBias;
  local_170.SequenceID.Value = (param_2->SequenceID).Value;
  local_170.InstanceHandle = param_2->InstanceHandle;
  local_170.RootInstanceHandle = param_2->RootInstanceHandle;
  local_188 = 0;
  uStack_1bc = 1;
  local_184.Channel.Value = -1;
  local_184.InterrogationIndex = -1;
  local_178.Sequence = (UMovieSceneSequence *)0x0;
  local_1a8 = 0;
  local_f8._0_8_ = 0;
  local_f8._8_8_ = 0;
  local_f8._32_8_ = 0;
  local_f8._40_4_ = 0;
  local_f8._44_4_ = 0x80;
  local_f8._48_4_ = 0xffffffff;
  local_c4 = 0;
  local_b8 = (ForElementType<FSetElementId>)0x0;
  local_b0 = 0;
  iVar10 = *(int *)&(param_4->Elements).field_0x28;
  iStack_1ac = iStack_1c0;
  if (iVar10 != 0) {
    puVar20 = *(uint **)&(param_4->Elements).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)&(param_4->Elements).field_0x10;
    }
    uVar17 = *puVar20;
    iStack_1c0 = 0;
    local_1a8 = 0;
    while (uVar17 == 0) {
      iStack_1c0 = iStack_1c0 + 1;
      local_1a8 = local_1a8 + 0x20;
      iStack_1ac = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1c0) goto LAB_1461608b1;
      uVar17 = puVar20[iStack_1c0];
    }
    uStack_1bc = ~(uVar17 - 1) & uVar17;
    uVar3 = (ulonglong)uStack_1bc * 2 + 1;
    lVar6 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_1e0 = (int)lVar6;
    iStack_1ac = local_1e0 + -1 + local_1a8;
    if (iVar10 < iStack_1ac) {
      iStack_1ac = iVar10;
    }
  }
LAB_1461608b1:
  local_1b8 = &(param_4->Elements).field_0x10;
  local_1c8 = param_4;
  local_1f8._8_4_ = *(undefined4 *)&(param_4->Elements).field_0x28;
  uStack_1b0 = 0xffffffff;
  auStack_150._0_8_ = CONCAT44(uStack_1bc,iStack_1c0);
  uVar17 = local_1f8._8_4_ & 0xffffffe0;
  auStack_150._20_4_ = iStack_1ac;
  auStack_150._16_4_ = 0xffffffff;
  uStack_1a4 = local_128[2]._12_4_;
  local_158 = param_4;
  auStack_150._28_4_ = local_128[2]._12_4_;
  auStack_150._24_4_ = local_1a8;
  unique0x10000444 = uStack_19c;
  iStack_130 = iStack_1a0;
  iVar15 = (int)local_1f8._8_4_ >> 5;
  bVar13 = (byte)local_1f8._8_4_;
  auStack_150._8_8_ = local_1b8;
  if ((((int)local_1f8._8_4_ < 0) || (iVar10 < (int)local_1f8._8_4_)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)(local_1f8._16_8_ + 0x18);
  if (local_1f8._8_4_ != uVar4) {
    FVar19 = *(ForElementType<unsigned_int> *)(local_1f8._16_8_ + 0x10);
    if (*(ForElementType<unsigned_int> *)(local_1f8._16_8_ + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar19 = (ForElementType<unsigned_int>)local_1f8._16_8_;
    }
    uVar18 = -1 << (bVar13 & 0x1f) & *(uint *)((longlong)FVar19 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      iVar15 = iVar15 + 1;
      uVar17 = uVar17 + 0x20;
      local_1f8._8_4_ = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar15) goto LAB_1461609c0;
      uVar18 = *(uint *)((longlong)FVar19 + (longlong)iVar15 * 4);
    }
    uVar3 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_1dc = (int)lVar6;
    local_1f8._8_4_ = local_1dc + -1 + uVar17;
    if ((int)uVar4 < (int)local_1f8._8_4_) {
      local_1f8._8_4_ = uVar4;
    }
  }
LAB_1461609c0:
  do {
    pTVar8 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        iStack_130) {
      local_1f8[4] = 0;
      `TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1f8 + 4);
    }
    if (((auStack_150._20_4_ == local_1f8._8_4_) && (auStack_150._8_8_ == local_1f8._16_8_)) &&
       (pTVar8 == param_4)) goto LAB_146160cce;
    this_03 = (FMovieSceneEvaluationFieldEntityQuery *)
              (*(longlong *)&pTVar8->Elements + (longlong)(int)auStack_150._20_4_ * 0x1c);
    this_01 = (UMovieSceneSection *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_03);
    if (this_01 != (UMovieSceneSection *)0x0) {
      pUVar11 = Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
      this_02 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar11);
      if (this_02 != (IMovieSceneEntityProvider *)0x0) {
        local_188 = (this_03->Entity).Key.EntityID;
        if (param_3 != (FMovieSceneEntityComponentField *)0x0) {
          local_198 = (undefined1  [8])
                      FMovieSceneEntityComponentField::FindMetaData(param_3,this_03);
          pFStack_190 = FMovieSceneEntityComponentField::FindSharedMetaData(param_3,this_03);
        }
        if (((((*(byte *)((longlong)&(local_1d8.Sequence)->_padding_ + 2) & 1) != 0) &&
             ((local_198 == (undefined1  [8])0x0 || (local_198->bEvaluateInSequencePreRoll == 0))))
            || (((*(byte *)((longlong)&(local_1d8.Sequence)->_padding_ + 2) & 2) != 0 &&
                ((local_198 == (undefined1  [8])0x0 ||
                 (local_198->bEvaluateInSequencePostRoll == '\0')))))) ||
           (bVar9 = CanImportEntity(this,param_1,(FEntityImportSequenceParams *)local_1d8.Sequence,
                                    param_3,this_03,
                                    (TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
                                     *)local_f8,local_1d0,false), !bVar9)) {
LAB_146160cce:
          local_b0 = 0;
          if (local_b8 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_b8);
          }
          TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_f8);
          return;
        }
        local_a8.Builders.ArrayMax = 1;
        local_a8.Builders.AllocatorInstance.SecondaryData =
             (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0;
        local_a8.Builders.ArrayNum = 0;
        IMovieSceneEntityProvider::ImportEntity
                  (this_02,param_1,(FEntityImportParams *)local_198,&local_a8);
        if (local_a8.Builders.ArrayNum != 0) {
          pUVar11 = Z_Construct_UClass_UMovieSceneDecorationContainerObject_NoRegister();
          iVar10 = (int)pUVar11->_padding_;
          if ((iVar10 <= *(int *)(this_01->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
              &pUVar11->_padding_)) {
            FMovieSceneDecorationContainer::GetDecorations
                      ((FMovieSceneDecorationContainer *)&this_01->_padding_,local_128);
            pTVar2 = &local_128[0].DataPtr[local_128[0].ArrayNum].field0_0x0;
            for (pTVar16 = &(local_128[0].DataPtr)->field0_0x0; pTVar16 != pTVar2;
                pTVar16 = pTVar16 + 1) {
              this_00.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar16->DebugPtr;
              if (this_00.field0_0x0 != (UObject *)0x0) {
                pUVar11 = Z_Construct_UClass_UMovieSceneEntityDecorator_NoRegister();
                plVar12 = UObjectBaseUtility::GetInterfaceAddress
                                    ((UObjectBaseUtility *)this_00.field0_0x0,pUVar11);
                if (plVar12 != (longlong *)0x0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12,param_1,local_198,&local_a8);
                }
              }
            }
          }
          pUVar11 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
          iVar10 = (int)pUVar11->_padding_;
          if ((iVar10 <= *(int *)(this_01->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
              &pUVar11->_padding_)) {
            UMovieSceneSection::BuildDefaultComponents
                      (this_01,param_1,(FEntityImportParams *)local_198,&local_a8);
          }
          FImportedEntity::Manufacture
                    (&local_a8,(FEntityImportParams *)local_1f8,(FEntityManager *)local_198);
          pFVar5 = (this->OneShotEntities).AllocatorInstance.Data;
          if (((pFVar5 <= (FScriptContainerElement *)local_1f8) &&
              ((FScriptContainerElement *)local_1f8 <
               pFVar5 + (longlong)(this->OneShotEntities).ArrayMax * 2)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar10 = (this->OneShotEntities).ArrayNum;
          piVar1 = &(this->OneShotEntities).ArrayMax;
          if (iVar10 == *piVar1) {
            iVar10 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x202,(ForAnyElementType *)this,piVar1);
          }
          (this->OneShotEntities).ArrayNum = iVar10 + 1;
          *(undefined2 *)((this->OneShotEntities).AllocatorInstance.Data + (longlong)iVar10 * 2) =
               local_1f8._0_2_;
        }
        FVar14 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)&local_a8;
        if (local_a8.Builders.AllocatorInstance.SecondaryData !=
            (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
          FVar14 = local_a8.Builders.AllocatorInstance.SecondaryData;
        }
        DestructItems<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>,int>
                  ((TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *)FVar14,
                   local_a8.Builders.ArrayNum);
        if (local_a8.Builders.AllocatorInstance.SecondaryData !=
            (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
          FMemory::Free((void *)local_a8.Builders.AllocatorInstance.SecondaryData);
        }
      }
    }
    auStack_150._16_4_ = auStack_150._16_4_ & ~auStack_150._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
  } while( true );
}

