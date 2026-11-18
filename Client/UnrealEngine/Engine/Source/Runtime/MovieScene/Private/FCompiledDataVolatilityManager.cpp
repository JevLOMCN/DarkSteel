// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// FCompiledDataVolatilityManager @ 146092c80

FCompiledDataVolatilityManager * __thiscall
UE::MovieScene::FCompiledDataVolatilityManager::FCompiledDataVolatilityManager
          (FCompiledDataVolatilityManager *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->WeakSharedPlaybackState).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->WeakSharedPlaybackState).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->CachedCompilationSignatures).Pairs.AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>)0x0;
  (this->CachedCompilationSignatures).Pairs.ArrayNum = 0;
  (this->CachedCompilationSignatures).Pairs.ArrayMax = 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ConditionalRecompile @ 1460b6f70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FCompiledDataVolatilityManager::ConditionalRecompile
          (FCompiledDataVolatilityManager *this)

{
  FMovieSceneCompiledDataID FVar1;
  UMovieSceneCompiledDataManager *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  ENetMode EVar6;
  UObject *pUVar7;
  UWorld *this_01;
  EMovieSceneServerClientMask EVar8;
  FSharedPlaybackState *pFVar9;
  FSharedPlaybackState *pFVar10;
  undefined1 *puVar11;
  FSharedPlaybackState *pFVar12;
  bool bVar13;
  
  pFVar10 = (FSharedPlaybackState *)
            (this->WeakSharedPlaybackState).WeakReferenceCount.ReferenceController;
  pFVar12 = (FSharedPlaybackState *)0x0;
  pFVar9 = pFVar10;
  if (pFVar10 == (FSharedPlaybackState *)0x0) {
LAB_1460b6fb5:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pFVar10 = pFVar9;
    if (bVar13) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    aVar3 = *(atomic<int> *)&pFVar10->_padding_;
    do {
      pFVar9 = pFVar12;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1460b6fb5;
      LOCK();
      aVar5 = *(atomic<int> *)&pFVar10->_padding_;
      bVar13 = aVar3 == aVar5;
      if (bVar13) {
        *(atomic<int> *)&pFVar10->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar13);
    pFVar12 = (this->WeakSharedPlaybackState).Object;
    pFVar9 = pFVar10;
    if (pFVar12 == (FSharedPlaybackState *)0x0) goto LAB_1460b6fb5;
  }
  FVar1.Value = (pFVar12->RootCompiledDataID).Value;
  this_00 = (pFVar12->CompiledDataManager).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UMovieSceneCompiledDataManager *)0x0)) {
    GC::MarkAsReachable((UObject *)this_00);
  }
  if ((FVar1.Value < 0) || (*(int *)&(this_00->CompiledDataEntries).field_0x28 <= FVar1.Value)) {
LAB_1460b7063:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("CompiledDataID.IsValid() && CompiledDataEntries.IsValidIndex(CompiledDataID.Value)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                        ,0x349,L"");
    if (bVar13) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    if ((*(int *)&(this_00->CompiledDataEntries).field_0x28 <= FVar1.Value) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    puVar11 = *(undefined1 **)&(this_00->CompiledDataEntries).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this_00->CompiledDataEntries).field_0x10;
    }
    if ((*(uint *)(puVar11 + (longlong)((int)(FVar1.Value + (FVar1.Value >> 0x1f & 0x1fU)) >> 5) * 4
                  ) >> (FVar1.Value & 0x1fU) & 1) == 0) goto LAB_1460b7063;
  }
  bVar13 = UMovieSceneCompiledDataManager::IsDirty
                     (this_00,(FMovieSceneCompiledDataEntry *)
                              ((longlong)FVar1.Value * 0x30 +
                              *(longlong *)&this_00->CompiledDataEntries));
  if (bVar13) {
    EVar8 = this_00->NetworkMask;
    pUVar7 = FWeakObjectPtr::Get(&(pFVar12->WeakPlaybackContext).WeakPtr);
    if ((pUVar7 != (UObject *)0x0) &&
       (this_01 = (UWorld *)(**(code **)(*(longlong *)pUVar7 + 0x180))(pUVar7),
       this_01 != (UWorld *)0x0)) {
      EVar6 = UWorld::InternalGetNetMode(this_01);
      if (EVar6 == NM_DedicatedServer) {
        UMovieSceneCompiledDataManager::Compile(this_00,FVar1,Server);
        bVar13 = true;
        goto LAB_1460b712c;
      }
      if (EVar6 == NM_Client) {
        EVar8 = Client;
      }
    }
    UMovieSceneCompiledDataManager::Compile(this_00,FVar1,EVar8);
    bVar13 = true;
  }
  else {
    bVar13 = HasBeenRecompiled(this);
    if (!bVar13) goto LAB_1460b7134;
  }
LAB_1460b712c:
  UpdateCachedSignatures(this);
LAB_1460b7134:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  return bVar13;
}

// Construct @ 1460b7420

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TUniquePtr<UE::MovieScene::FCompiledDataVolatilityManager,TDefaultDelete<UE::MovieScene::FCompiledDataVolatilityManager>_>
 __cdecl UE::MovieScene::FCompiledDataVolatilityManager::Construct
                   (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  FMovieSceneCompiledDataID FVar1;
  UMovieSceneCompiledDataManager *this;
  TReferenceControllerBase<1> *pTVar2;
  FSharedPlaybackState *pFVar3;
  FMovieSceneCompiledDataEntry *pFVar4;
  FCompiledDataVolatilityManager *this_00;
  longlong *in_RDX;
  
  FVar1.Value = *(int *)(*in_RDX + 0x34);
  this = *(UMovieSceneCompiledDataManager **)(*in_RDX + 0x28);
  if ((GC::GIsIncrementalReachabilityPending) && (this != (UMovieSceneCompiledDataManager *)0x0)) {
    GC::MarkAsReachable((UObject *)this);
  }
  pFVar4 = UMovieSceneCompiledDataManager::GetEntryRef(this,FVar1);
  if (((pFVar4->AccumulatedFlags & InheritedFlags) == None) &&
     ((((pFVar4->CompiledSignature).D != 0 || (pFVar4->CompiledSignature).C != 0) ||
      (pFVar4->CompiledSignature).B != 0) || (pFVar4->CompiledSignature).A != 0)) {
    param_1->Object = (FSharedPlaybackState *)0x0;
  }
  else {
    this_00 = ::operator_new(0x160);
    if (this_00 == (FCompiledDataVolatilityManager *)0x0) {
      this_00 = (FCompiledDataVolatilityManager *)0x0;
    }
    else {
      pTVar2 = (TReferenceControllerBase<1> *)in_RDX[1];
      pFVar3 = (FSharedPlaybackState *)*in_RDX;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        (this_00->WeakSharedPlaybackState).Object = pFVar3;
        (this_00->WeakSharedPlaybackState).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
      }
      else {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        (this_00->WeakSharedPlaybackState).Object = pFVar3;
        (this_00->WeakSharedPlaybackState).WeakReferenceCount.ReferenceController = pTVar2;
        LOCK();
        pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
        UNLOCK();
      }
      (this_00->CachedCompilationSignatures).Pairs.AllocatorInstance.SecondaryData =
           (ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>)0x0;
      (this_00->CachedCompilationSignatures).Pairs.ArrayNum = 0;
      (this_00->CachedCompilationSignatures).Pairs.ArrayMax = 0x10;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    ConditionalRecompile(this_00);
    param_1->Object = (FSharedPlaybackState *)this_00;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)in_RDX[1]);
  return (TUniquePtr<UE::MovieScene::FCompiledDataVolatilityManager,TDefaultDelete<UE::MovieScene::FCompiledDataVolatilityManager>_>
          )(FCompiledDataVolatilityManager *)param_1;
}

// HasBeenRecompiled @ 1460d11c0

bool __thiscall
UE::MovieScene::FCompiledDataVolatilityManager::HasBeenRecompiled
          (FCompiledDataVolatilityManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  FMovieSceneSequenceID FVar3;
  uint uVar4;
  UMovieSceneCompiledDataManager *this_00;
  longlong lVar5;
  code *pcVar6;
  atomic<int> aVar7;
  undefined1 uVar8;
  atomic<int> aVar9;
  uint uVar10;
  uint uVar11;
  FMovieSceneSequenceHierarchy *pFVar12;
  longlong lVar13;
  FSharedPlaybackState *pFVar14;
  uint uVar15;
  int iVar16;
  FSharedPlaybackState *pFVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  FSharedPlaybackState *pFVar21;
  FSharedPlaybackState *pFVar22;
  bool bVar23;
  undefined1 local_res10 [8];
  FMovieSceneCompiledDataID local_res18 [2];
  int local_res20;
  uint local_e0;
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  pFVar22 = (FSharedPlaybackState *)
            (this->WeakSharedPlaybackState).WeakReferenceCount.ReferenceController;
  pFVar17 = (FSharedPlaybackState *)0x0;
  uVar15 = 0;
  pFVar14 = pFVar17;
  pFVar21 = pFVar22;
  if (pFVar22 != (FSharedPlaybackState *)0x0) {
    aVar7 = *(atomic<int> *)&pFVar22->_padding_;
    do {
      pFVar14 = (FSharedPlaybackState *)0x0;
      pFVar21 = pFVar17;
      if (aVar7 == (atomic<int>)0x0) goto LAB_1460d1207;
      LOCK();
      aVar9 = *(atomic<int> *)&pFVar22->_padding_;
      bVar23 = aVar7 == aVar9;
      if (bVar23) {
        *(atomic<int> *)&pFVar22->_padding_ = (atomic<int>)((int)aVar7 + 1);
        aVar9 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar9;
    } while (!bVar23);
    pFVar14 = (this->WeakSharedPlaybackState).Object;
    pFVar21 = pFVar22;
    if (pFVar14 != (FSharedPlaybackState *)0x0) goto LAB_1460d122d;
  }
LAB_1460d1207:
  bVar23 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pFVar22 = pFVar21;
  if (bVar23) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
LAB_1460d122d:
  FVar3.Value = (pFVar14->RootCompiledDataID).Value;
  this_00 = (pFVar14->CompiledDataManager).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UMovieSceneCompiledDataManager *)0x0)) {
    GC::MarkAsReachable((UObject *)this_00);
  }
  bVar23 = HasSequenceBeenRecompiled
                     (this,(FMovieSceneCompiledDataID)FVar3.Value,MovieSceneSequenceID::Root);
  if (bVar23) {
LAB_1460d14d5:
    bVar23 = true;
  }
  else {
    pFVar12 = UMovieSceneCompiledDataManager::FindHierarchy
                        (this_00,(FMovieSceneCompiledDataID)FVar3.Value);
    if (pFVar12 != (FMovieSceneSequenceHierarchy *)0x0) {
      puVar1 = &(pFVar12->SubSequences).field_0x10;
      local_e0 = 1;
      uVar4 = *(uint *)&(pFVar12->SubSequences).field_0x28;
      uVar18 = 0;
      uVar10 = uVar15;
      if (uVar4 != 0) {
        puVar20 = *(uint **)&(pFVar12->SubSequences).field_0x20;
        if (puVar20 == (uint *)0x0) {
          puVar20 = (uint *)puVar1;
        }
        uVar10 = *puVar20;
        pFVar14 = pFVar17;
        uVar18 = 0;
        uVar15 = 0;
        while (uVar10 == 0) {
          iVar16 = (int)pFVar17;
          uVar18 = (int)pFVar14 + 0x20;
          pFVar14 = (FSharedPlaybackState *)(ulonglong)uVar18;
          uVar15 = iVar16 + 1;
          pFVar17 = (FSharedPlaybackState *)(ulonglong)uVar15;
          uVar10 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
          goto LAB_1460d1320;
          uVar10 = puVar20[(longlong)iVar16 + 1];
        }
        local_e0 = -uVar10 & uVar10;
        uVar2 = (ulonglong)local_e0 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_res20 = (int)lVar13;
        uVar10 = (uVar18 - 1) + local_res20;
        if ((int)uVar4 < (int)uVar10) {
          uVar10 = uVar4;
        }
      }
LAB_1460d1320:
      uVar11 = *(uint *)&(pFVar12->SubSequences).field_0x28;
      TStack_98._padding_ = CONCAT44(local_e0,uVar15);
      uVar15 = uVar11 & 0xffffffe0;
      TStack_98.CurrentBitIndex = uVar10;
      TStack_98.UnvisitedBitMask = 0xffffffff;
      iVar16 = (int)uVar11 >> 5;
      TStack_98._28_4_ = local_54;
      TStack_98.BaseBitIndex = uVar18;
      uStack_78 = CONCAT44(uStack_a4,
                           *(int *)&(pFVar12->SubSequences).field_0x8 -
                           *(int *)&(pFVar12->SubSequences).field_0x34);
      TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar11 < 0) || ((int)uVar4 < (int)uVar11)) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      uVar4 = *(uint *)&(pFVar12->SubSequences).field_0x28;
      if (uVar11 != uVar4) {
        puVar19 = *(undefined1 **)&(pFVar12->SubSequences).field_0x20;
        if (puVar19 == (undefined1 *)0x0) {
          puVar19 = puVar1;
        }
        uVar18 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar16 * 4);
        while (uVar18 == 0) {
          lVar13 = (longlong)iVar16;
          uVar15 = uVar15 + 0x20;
          iVar16 = iVar16 + 1;
          uVar11 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
          goto LAB_1460d1440;
          uVar18 = *(uint *)(puVar19 + lVar13 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar11 = (int)lVar13 + -1 + uVar15;
        if ((int)uVar4 < (int)uVar11) {
          uVar11 = uVar4;
        }
      }
LAB_1460d1440:
      do {
        if (*(int *)&(pFVar12->SubSequences).field_0x8 - *(int *)&(pFVar12->SubSequences).field_0x34
            != (int)uStack_78) {
          `TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        lVar13 = (longlong)TStack_98.CurrentBitIndex;
        if ((TStack_98.CurrentBitIndex == uVar11) &&
           (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
        lVar5 = *(longlong *)&pFVar12->SubSequences;
        UMovieSceneCompiledDataManager::GetSubDataID
                  (this_00,(FMovieSceneCompiledDataID)(int)local_res18,FVar3);
        if ((local_res18[0].Value != -1) &&
           (bVar23 = HasSequenceBeenRecompiled
                               (this,local_res18[0],
                                (FMovieSceneSequenceID)*(uint *)(lVar13 * 0x120 + lVar5)), bVar23))
        goto LAB_1460d14d5;
        TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
      } while( true );
    }
    bVar23 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar22);
  return bVar23;
}

// HasSequenceBeenRecompiled @ 1460d1580

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FCompiledDataVolatilityManager::HasSequenceBeenRecompiled
          (FCompiledDataVolatilityManager *this,FMovieSceneCompiledDataID param_1,
          FMovieSceneSequenceID param_2)

{
  UMovieSceneCompiledDataManager *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  FGuid *pFVar5;
  FMovieSceneCompiledDataEntry *pFVar6;
  FSharedPlaybackState *pFVar7;
  FSharedPlaybackState *pFVar8;
  FSharedPlaybackState *pFVar9;
  bool bVar10;
  FMovieSceneSequenceID local_res18 [4];
  
  local_res18[0].Value = param_2.Value;
  pFVar5 = TSortedMap<FMovieSceneSequenceID,FGuid,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
           ::Find(&this->CachedCompilationSignatures,local_res18);
  pFVar9 = (FSharedPlaybackState *)
           (this->WeakSharedPlaybackState).WeakReferenceCount.ReferenceController;
  pFVar7 = (FSharedPlaybackState *)0x0;
  pFVar8 = pFVar9;
  if (pFVar9 != (FSharedPlaybackState *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar9->_padding_;
    do {
      pFVar8 = pFVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1460d15d5;
      LOCK();
      aVar4 = *(atomic<int> *)&pFVar9->_padding_;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        *(atomic<int> *)&pFVar9->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar10);
    pFVar7 = (this->WeakSharedPlaybackState).Object;
    pFVar8 = pFVar9;
    if (pFVar7 != (FSharedPlaybackState *)0x0) goto LAB_1460d15fb;
  }
LAB_1460d15d5:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pFVar9 = pFVar8;
  if (bVar10) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_1460d15fb:
  this_00 = (pFVar7->CompiledDataManager).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UMovieSceneCompiledDataManager *)0x0)) {
    GC::MarkAsReachable((UObject *)this_00);
  }
  pFVar6 = UMovieSceneCompiledDataManager::GetEntryRef(this_00,param_1);
  if ((pFVar5 == (FGuid *)0x0) ||
     ((((pFVar6->CompiledSignature).D != pFVar5->D || (pFVar6->CompiledSignature).C != pFVar5->C) ||
      (pFVar6->CompiledSignature).B != pFVar5->B) || pFVar5->A != (pFVar6->CompiledSignature).A)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar9);
  return bVar10;
}

// UpdateCachedSignatures @ 1460fc640

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FCompiledDataVolatilityManager::UpdateCachedSignatures
          (FCompiledDataVolatilityManager *this)

{
  TSortedMap<FMovieSceneSequenceID,FGuid,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
  *this_00;
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  FMovieSceneSequenceID FVar4;
  UMovieSceneCompiledDataManager *this_01;
  code *pcVar5;
  undefined8 uVar6;
  atomic<int> aVar7;
  uint uVar8;
  TMap<FMovieSceneSequenceID,FMovieSceneSubSequenceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>_>
  *pTVar9;
  atomic<int> aVar10;
  FMovieSceneEvaluationState *this_02;
  FMovieSceneCompiledDataEntry *this_03;
  TTuple<FMovieSceneSequenceID,FGuid> *pTVar11;
  UMovieSceneSequence *pUVar12;
  FMovieSceneSequenceHierarchy *pFVar13;
  byte bVar14;
  longlong lVar15;
  int iVar16;
  undefined8 *puVar17;
  FSharedPlaybackState *pFVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 *puVar22;
  FSharedPlaybackState *this_04;
  uint uVar23;
  uint uVar24;
  FMovieSceneSequenceID *pFVar26;
  FSharedPlaybackState *pFVar27;
  bool bVar28;
  undefined1 local_res8 [8];
  uint local_res10;
  uint local_res18 [2];
  int local_res20;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_100;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_f0;
  TMap<FMovieSceneSequenceID,FMovieSceneSubSequenceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>_>
  *local_e0;
  uint uStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  uint uStack_c4;
  uint local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  TMap<FMovieSceneSequenceID,FMovieSceneSubSequenceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>_>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FString local_80 [2];
  undefined4 local_54;
  FSharedPlaybackState *pFVar25;
  
  this_00 = &this->CachedCompilationSignatures;
  pFVar18 = (FSharedPlaybackState *)0x0;
  piVar1 = &(this->CachedCompilationSignatures).Pairs.ArrayMax;
  iVar16 = *piVar1;
  uVar23 = 0;
  (this->CachedCompilationSignatures).Pairs.ArrayNum = 0;
  if (iVar16 < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>_>
              (0x14,4,0,(ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_> *)this_00,0,piVar1);
  }
  pFVar27 = (FSharedPlaybackState *)
            (this->WeakSharedPlaybackState).WeakReferenceCount.ReferenceController;
  this_04 = pFVar18;
  pFVar25 = pFVar27;
  if (pFVar27 != (FSharedPlaybackState *)0x0) {
    aVar7 = *(atomic<int> *)&pFVar27->_padding_;
    do {
      pFVar25 = pFVar18;
      if (aVar7 == (atomic<int>)0x0) goto LAB_1460fc6c6;
      LOCK();
      aVar10 = *(atomic<int> *)&pFVar27->_padding_;
      bVar28 = aVar7 == aVar10;
      if (bVar28) {
        *(atomic<int> *)&pFVar27->_padding_ = (atomic<int>)((int)aVar7 + 1);
        aVar10 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar10;
    } while (!bVar28);
    this_04 = (this->WeakSharedPlaybackState).Object;
    pFVar25 = pFVar27;
    if (this_04 != (FSharedPlaybackState *)0x0) goto LAB_1460fc6ec;
  }
LAB_1460fc6c6:
  bVar28 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pFVar27 = pFVar25;
  if (bVar28) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1460fc6ec:
  FVar4.Value = (this_04->RootCompiledDataID).Value;
  this_01 = (this_04->CompiledDataManager).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (this_01 != (UMovieSceneCompiledDataManager *)0x0)) {
    GC::MarkAsReachable((UObject *)this_01);
  }
  this_02 = FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>(this_04);
  this_03 = UMovieSceneCompiledDataManager::GetEntryRef
                      (this_01,(FMovieSceneCompiledDataID)FVar4.Value);
  pTVar11 = TSortedMap<FMovieSceneSequenceID,FGuid,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
            ::AllocateMemoryForEmplace<FMovieSceneSequenceID_const_&>
                      (this_00,&MovieSceneSequenceID::Root);
  *(undefined4 *)pTVar11 = 0;
  uVar24 = (this_03->CompiledSignature).B;
  uVar21 = (this_03->CompiledSignature).C;
  uVar8 = (this_03->CompiledSignature).D;
  *(uint *)&pTVar11->field_0x4 = (this_03->CompiledSignature).A;
  *(uint *)&pTVar11->field_0x8 = uVar24;
  *(uint *)&pTVar11->field_0xc = uVar21;
  *(uint *)&pTVar11->field_0x10 = uVar8;
  pUVar12 = FMovieSceneCompiledDataEntry::GetSequence(this_03);
  if ((pUVar12 != (UMovieSceneSequence *)0x0) && (this_02 != (FMovieSceneEvaluationState *)0x0)) {
    if (pFVar27 != (FSharedPlaybackState *)0x0) {
      LOCK();
      *(int *)&pFVar27->_padding_ = (int)pFVar27->_padding_ + 1;
      UNLOCK();
    }
    local_100.Object = this_04;
    local_100.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar27;
    if ((this_04 == (FSharedPlaybackState *)0x0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar28)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FMovieSceneEvaluationState::AssignSequence
              (this_02,&MovieSceneSequenceID::Root,pUVar12,&local_100);
  }
  pFVar13 = UMovieSceneCompiledDataManager::FindHierarchy
                      (this_01,(FMovieSceneCompiledDataID)FVar4.Value);
  if (pFVar13 == (FMovieSceneSequenceHierarchy *)0x0) {
LAB_1460fcbae:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar27);
    return;
  }
  uStack_d4 = 1;
  puVar2 = &(pFVar13->SubSequences).field_0x10;
  local_c0 = 0;
  uVar24 = *(uint *)&(pFVar13->SubSequences).field_0x28;
  uStack_c4 = uVar23;
  if (uVar24 != 0) {
    puVar20 = *(uint **)&(pFVar13->SubSequences).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar2;
    }
    uVar21 = *puVar20;
    pFVar25 = pFVar18;
    local_c0 = 0;
    uVar23 = 0;
    while (uVar21 == 0) {
      iVar16 = (int)pFVar25;
      local_c0 = (int)pFVar18 + 0x20;
      pFVar18 = (FSharedPlaybackState *)(ulonglong)local_c0;
      uVar23 = iVar16 + 1;
      pFVar25 = (FSharedPlaybackState *)(ulonglong)uVar23;
      uStack_c4 = uVar24;
      if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar23)
      goto LAB_1460fc865;
      uVar21 = puVar20[(longlong)iVar16 + 1];
    }
    uStack_d4 = -uVar21 & uVar21;
    uVar3 = (ulonglong)uStack_d4 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res20 = (int)lVar15;
    uStack_c4 = (local_c0 - 1) + local_res20;
    if ((int)uVar24 < (int)uStack_c4) {
      uStack_c4 = uVar24;
    }
  }
LAB_1460fc865:
  local_d0 = &(pFVar13->SubSequences).field_0x10;
  local_e0 = &pFVar13->SubSequences;
  uStack_bc = local_54;
  iStack_b8 = *(int *)&(pFVar13->SubSequences).field_0x8 -
              *(int *)&(pFVar13->SubSequences).field_0x34;
  local_res10 = *(uint *)&(pFVar13->SubSequences).field_0x28;
  uVar21 = local_res10 & 0xffffffe0;
  TStack_a8._padding_ = CONCAT44(uStack_d4,uVar23);
  uStack_c8 = 0xffffffff;
  TStack_a8.CurrentBitIndex = uStack_c4;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  TStack_a8._28_4_ = local_54;
  TStack_a8.BaseBitIndex = local_c0;
  uStack_88 = CONCAT44(uStack_b4,iStack_b8);
  iVar16 = (int)local_res10 >> 5;
  bVar14 = (byte)local_res10;
  uStack_d8 = uVar23;
  local_b0 = local_e0;
  TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d0;
  if ((((int)local_res10 < 0) || ((int)uVar24 < (int)local_res10)) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar28)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar23 = *(uint *)&(pFVar13->SubSequences).field_0x28;
  if (local_res10 != uVar23) {
    puVar19 = *(undefined1 **)&(pFVar13->SubSequences).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar2;
    }
    uVar24 = -1 << (bVar14 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar16 * 4);
    while (uVar24 == 0) {
      lVar15 = (longlong)iVar16;
      uVar21 = uVar21 + 0x20;
      iVar16 = iVar16 + 1;
      local_res10 = uVar23;
      if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_1460fc9a0;
      uVar24 = *(uint *)(puVar19 + lVar15 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res10 = (int)lVar15 + -1 + uVar21;
    if ((int)uVar23 < (int)local_res10) {
      local_res10 = uVar23;
    }
  }
LAB_1460fc9a0:
  do {
    pTVar9 = local_b0;
    if (*(int *)&local_b0->field_0x8 - *(int *)&local_b0->field_0x34 != (int)uStack_88) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_a8.CurrentBitIndex == local_res10) &&
        (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar9 == &pFVar13->SubSequences)) goto LAB_1460fcbae;
    pFVar26 = (FMovieSceneSequenceID *)
              ((longlong)TStack_a8.CurrentBitIndex * 0x120 + *(longlong *)pTVar9);
    UMovieSceneCompiledDataManager::GetSubDataID
              (this_01,(FMovieSceneCompiledDataID)(int)local_res18,FVar4);
    uVar23 = local_res18[0];
    lVar15 = (longlong)(int)local_res18[0];
    if (local_res18[0] == 0xffffffff) {
      if (1 < (byte)LogMovieScene._0_1_) {
        FSoftObjectPath::ToString((FSoftObjectPath *)(pFVar26 + 2),local_80);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if (((int)local_res18[0] < 0) ||
         (*(int *)&(this_01->CompiledDataEntries).field_0x28 <= (int)local_res18[0])) {
LAB_1460fcad0:
        bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("CompiledDataEntries.IsValidIndex(DataID.Value)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Compilation\\MovieSceneCompiledDataManager.h"
                            ,0xe1,L"");
        if (bVar28) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        if ((*(int *)&(this_01->CompiledDataEntries).field_0x28 <= (int)local_res18[0]) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar28)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar19 = *(undefined1 **)&(this_01->CompiledDataEntries).field_0x20;
        puVar22 = &(this_01->CompiledDataEntries).field_0x10;
        if (puVar19 != (undefined1 *)0x0) {
          puVar22 = puVar19;
        }
        uVar24 = uVar23 & 0x1f;
        if ((int)uVar23 < 0) {
          uVar23 = uVar23 + 0x1f;
        }
        if ((*(uint *)(puVar22 + (longlong)((int)uVar23 >> 5) * 4) >> uVar24 & 1) == 0)
        goto LAB_1460fcad0;
      }
      puVar17 = (undefined8 *)(lVar15 * 0x30 + *(longlong *)&this_01->CompiledDataEntries);
      pTVar11 = TSortedMap<FMovieSceneSequenceID,FGuid,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
                ::AllocateMemoryForEmplace<FMovieSceneSequenceID_const_&>(this_00,pFVar26);
      *(uint *)pTVar11 = pFVar26->Value;
      uVar6 = puVar17[1];
      *(undefined8 *)&pTVar11->field_0x4 = *puVar17;
      *(undefined8 *)&pTVar11->field_0xc = uVar6;
      pUVar12 = FMovieSceneSubSequenceData::GetSequence((FMovieSceneSubSequenceData *)(pFVar26 + 2))
      ;
      if ((pUVar12 != (UMovieSceneSequence *)0x0) && (this_02 != (FMovieSceneEvaluationState *)0x0))
      {
        if (pFVar27 != (FSharedPlaybackState *)0x0) {
          LOCK();
          *(int *)&pFVar27->_padding_ = (int)pFVar27->_padding_ + 1;
          UNLOCK();
        }
        local_f0.Object = this_04;
        local_f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar27;
        if ((this_04 == (FSharedPlaybackState *)0x0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar28)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FMovieSceneEvaluationState::AssignSequence(this_02,pFVar26,pUVar12,&local_f0);
      }
    }
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  } while( true );
}

