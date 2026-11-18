// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// Run @ 1461d0170

void __thiscall
UE::MovieScene::FTrackInstanceInputComponentInitializer::Run
          (FTrackInstanceInputComponentInitializer *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  int iVar5;
  EComponentHeaderLockMode EVar6;
  FEntityAllocation *pFVar7;
  uchar *puVar8;
  uchar *puVar9;
  UMovieSceneTrackInstanceInstantiator *pUVar10;
  code *pcVar11;
  longlong *plVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  FBuiltInComponentTypes *pFVar17;
  UClass *pUVar18;
  UClass *pUVar19;
  FComponentHeader *pFVar20;
  UClass *pUVar21;
  longlong lVar22;
  UClass *pUVar23;
  UClass *pUVar24;
  UClass *pUVar25;
  uint uVar26;
  FComponentHeader *local_80;
  FComponentHeader *local_78;
  
  if ((param_3->ArrayNum != param_1->Num) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentAllocationOffsets.Num() == ChildRange.Num",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\TrackInstance\\MovieSceneTrackInstanceSystem.cpp"
                          ,0x25,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_80 = param_2->ComponentHeaders;
  pUVar25 = (UClass *)0x0;
  pFVar20 = local_80 + param_2->NumComponents;
  for (; local_80 != pFVar20; local_80 = local_80 + 1) {
    if ((local_80->ComponentType).Value == (ushort)this->_padding_) goto LAB_1461d0232;
  }
  local_80 = (FComponentHeader *)0x0;
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar13) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1461d0232:
  EVar3 = param_2->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_80->ReadWriteLock);
  }
  LOCK();
  local_80->ScheduledAccessCount = (atomic<int>)((int)local_80->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar7 = param_1->Allocation;
  puVar8 = local_80->Components;
  local_78 = pFVar7->ComponentHeaders;
  pFVar20 = local_78 + pFVar7->NumComponents;
  for (; local_78 != pFVar20; local_78 = local_78 + 1) {
    if ((local_78->ComponentType).Value == *(ushort *)((longlong)&this->_padding_ + 2))
    goto LAB_1461d02b7;
  }
  local_78 = (FComponentHeader *)0x0;
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar13) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1461d02b7:
  EVar4 = pFVar7->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_78->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_78->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  puVar9 = local_78->Components;
  pFVar7 = param_1->Allocation;
  pFVar17 = FBuiltInComponentTypes::Get();
  pUVar21 = (UClass *)pFVar7->ComponentHeaders;
  plVar12 = &pUVar21->_padding_;
  do {
    if (pUVar21 == (UClass *)(plVar12 + (ulonglong)pFVar7->NumComponents * 7)) {
      EVar6 = LockFree;
      pUVar21 = pUVar25;
      pUVar24 = pUVar25;
LAB_1461d0357:
      if (pUVar24 == (UClass *)0x0) {
        pUVar24 = pUVar25;
        pUVar23 = pUVar25;
        if (0 < param_1->Num) {
          do {
            uVar26 = (uint)pUVar23;
            uVar14 = 0;
            if ((int)uVar26 < param_3->ArrayNum) {
              uVar14 = ~uVar26 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar13)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            iVar15 = param_1->ComponentStartOffset;
            pUVar10 = this->Instantiator;
            iVar16 = *(int *)((longlong)&pUVar24->_padding_ + (longlong)param_3->DataPtr);
            lVar22 = *(longlong *)(puVar8 + (longlong)iVar16 * 0x10 + 8);
            pUVar23 = pUVar25;
            if ((lVar22 != 0) &&
               (pUVar19 = UMovieSceneTrackInstance::StaticClass(), pUVar19 != (UClass *)0x0)) {
              iVar5 = (int)pUVar19->_padding_;
              if ((*(int *)(lVar22 + 0x38) < iVar5) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar22 + 0x30) + (longlong)iVar5 * 8)
                  != &pUVar19->_padding_)) {
                bVar13 = false;
              }
              else {
                bVar13 = true;
              }
              if (bVar13) {
                pUVar23 = *(UClass **)(puVar8 + (longlong)iVar16 * 0x10 + 8);
              }
            }
            iVar16 = UMovieSceneTrackInstanceInstantiator::MakeOutput
                               (pUVar10,(UObject *)0x0,pUVar23);
            *(int *)(puVar9 + (longlong)(int)(iVar15 + uVar26) * 0x10 + 8) = iVar16;
            pUVar24 = (UClass *)((longlong)&pUVar24->_padding_ + 4);
            pUVar23 = (UClass *)(ulonglong)(uVar26 + 1);
          } while ((int)(uVar26 + 1) < param_1->Num);
        }
      }
      else {
        pUVar23 = pUVar25;
        pUVar19 = pUVar25;
        if (0 < param_1->Num) {
          do {
            uVar26 = (uint)pUVar19;
            uVar14 = 0;
            if ((int)uVar26 < param_3->ArrayNum) {
              uVar14 = ~uVar26 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar13)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            iVar15 = param_1->ComponentStartOffset;
            pUVar10 = this->Instantiator;
            iVar16 = *(int *)((longlong)&pUVar23->_padding_ + (longlong)param_3->DataPtr);
            lVar22 = *(longlong *)(puVar8 + (longlong)iVar16 * 0x10 + 8);
            pUVar19 = pUVar25;
            if ((lVar22 != 0) &&
               (pUVar18 = UMovieSceneTrackInstance::StaticClass(), pUVar18 != (UClass *)0x0)) {
              iVar5 = (int)pUVar18->_padding_;
              if ((*(int *)(lVar22 + 0x38) < iVar5) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar22 + 0x30) + (longlong)iVar5 * 8)
                  != &pUVar18->_padding_)) {
                bVar13 = false;
              }
              else {
                bVar13 = true;
              }
              if (bVar13) {
                pUVar19 = *(UClass **)(puVar8 + (longlong)iVar16 * 0x10 + 8);
              }
            }
            lVar22 = (longlong)(int)(iVar15 + uVar26);
            iVar15 = UMovieSceneTrackInstanceInstantiator::MakeOutput
                               (pUVar10,(UObject *)(&pUVar24->_padding_)[lVar22],pUVar19);
            *(int *)(puVar9 + lVar22 * 0x10 + 8) = iVar15;
            pUVar23 = (UClass *)((longlong)&pUVar23->_padding_ + 4);
            pUVar19 = (UClass *)(ulonglong)(uVar26 + 1);
          } while ((int)(uVar26 + 1) < param_1->Num);
        }
      }
      if (pUVar21 != (UClass *)0x0) {
        LOCK();
        *(atomic<int> *)&pUVar21->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pUVar21->_padding_ + -1);
        UNLOCK();
        if (EVar6 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pUVar21->_padding_);
        }
      }
      if ((UClass *)local_78->SerialNumber != (UClass *)0x0) {
        pUVar25 = (UClass *)local_78->SerialNumber;
      }
      local_78->SerialNumber = (ulong64)pUVar25;
      LOCK();
      local_78->ScheduledAccessCount = (atomic<int>)((int)local_78->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar4 == Mutex) {
        ReleaseSRWLockExclusive((PSRWLOCK)&local_78->ReadWriteLock);
      }
      LOCK();
      local_80->ScheduledAccessCount = (atomic<int>)((int)local_80->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar3 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&local_80->ReadWriteLock);
      }
      return;
    }
    if ((TComponentTypeID<UObject_*>)
        ((FComponentTypeID *)((longlong)((atomic<int> *)&pUVar21->_padding_ + 1) + 2))->Value ==
        pFVar17->BoundObject) {
      EVar6 = pFVar7->LockMode;
      if (EVar6 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pUVar21->_padding_);
      }
      LOCK();
      *(atomic<int> *)&pUVar21->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pUVar21->_padding_ + 1);
      UNLOCK();
      pUVar24 = (UClass *)pUVar21->_padding_;
      goto LAB_1461d0357;
    }
    pUVar21 = (UClass *)&pUVar21->_padding_;
  } while( true );
}

