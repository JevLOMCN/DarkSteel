// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 2

// CreateMutation @ 14ac744d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FCameraAnimationInstantiationMutation::CreateMutation
          (FCameraAnimationInstantiationMutation *this,FEntityManager *param_1,
          FComponentMask *param_2)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->BuiltInComponents->BoundObject);
  return;
}

// InitializeAllocation @ 14ac79d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FCameraAnimationInstantiationMutation::InitializeAllocation
          (FCameraAnimationInstantiationMutation *this,FEntityAllocation *param_1,
          FComponentMask *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ushort uVar3;
  TComponentTypeID<FGuid> TVar4;
  EComponentHeaderLockMode EVar5;
  EComponentHeaderLockMode EVar6;
  EComponentHeaderLockMode EVar7;
  uchar *puVar8;
  uchar *puVar9;
  uchar *puVar10;
  TReferenceControllerBase<1> *pTVar11;
  FSharedPlaybackState *this_00;
  code *pcVar12;
  bool bVar13;
  UObject *pUVar14;
  FComponentHeader *pFVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulong64 uVar18;
  ulonglong uVar19;
  FMovieSceneSequenceID local_res10 [2];
  FComponentHeader *local_80;
  FComponentHeader *local_78;
  FComponentHeader *local_70;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_50;
  
  local_70 = param_1->ComponentHeaders;
  uVar17 = 0;
  uVar3 = param_1->Size;
  pFVar15 = local_70 + param_1->NumComponents;
  for (; local_70 != pFVar15; local_70 = local_70 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FInstanceHandle>)(local_70->ComponentType).Value ==
        this->BuiltInComponents->InstanceHandle) goto LAB_14ac79db3;
  }
  local_70 = (FComponentHeader *)0x0;
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar13) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
LAB_14ac79db3:
  EVar5 = param_1->LockMode;
  if (EVar5 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_70->ReadWriteLock);
  }
  LOCK();
  local_70->ScheduledAccessCount = (atomic<int>)((int)local_70->ScheduledAccessCount + 1);
  UNLOCK();
  local_78 = param_1->ComponentHeaders;
  puVar8 = local_70->Components;
  pFVar15 = local_78 + param_1->NumComponents;
  for (; local_78 != pFVar15; local_78 = local_78 + 1) {
    if ((TComponentTypeID<UObject_*>)(local_78->ComponentType).Value ==
        this->BuiltInComponents->BoundObject) goto LAB_14ac79e39;
  }
  local_78 = (FComponentHeader *)0x0;
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar13) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
LAB_14ac79e39:
  EVar6 = param_1->LockMode;
  if (EVar6 == Mutex) {
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
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  puVar9 = local_78->Components;
  TVar4 = this->BuiltInComponents->GenericObjectBinding;
  if (((TVar4 != (TComponentTypeID<FGuid>)0xffff) &&
      ((int)(uint)(ushort)TVar4 < (param_2->Bits).NumBits)) &&
     ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[(ushort)TVar4 >> 5].Pad >>
       ((ushort)TVar4 & 0x1f) & 1) != 0)) {
    local_80 = param_1->ComponentHeaders;
    pFVar15 = local_80 + param_1->NumComponents;
    for (; local_80 != pFVar15; local_80 = local_80 + 1) {
      if ((TComponentTypeID<FGuid>)(local_80->ComponentType).Value ==
          this->BuiltInComponents->GenericObjectBinding) goto LAB_14ac79f32;
    }
    local_80 = (FComponentHeader *)0x0;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Header",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                        ,0x2cd,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
LAB_14ac79f32:
    EVar7 = param_1->LockMode;
    if (EVar7 == Mutex) {
      AcquireSRWLockShared((PSRWLOCK)&local_80->ReadWriteLock);
    }
    LOCK();
    local_80->ScheduledAccessCount = (atomic<int>)((int)local_80->ScheduledAccessCount + 1);
    UNLOCK();
    puVar10 = local_80->Components;
    uVar19 = uVar17;
    if ((ulonglong)uVar3 != 0) {
      do {
        lVar16 = (ulonglong)*(ushort *)(puVar8 + uVar17 * 4) * 0x140 +
                 *(longlong *)&this->InstanceRegistry->Instances;
        pTVar11 = *(TReferenceControllerBase<1> **)(lVar16 + 0x120);
        this_00 = *(FSharedPlaybackState **)(lVar16 + 0x118);
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        local_res10[0].Value = *(uint *)(lVar16 + 0x128);
        FSharedPlaybackState::FindBoundObjects
                  (this_00,&local_50,(FGuid *)(puVar10 + (longlong)(int)uVar19 * 0x10),local_res10);
        if (local_50.ArrayNum < 1) {
          bVar13 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6990050907643707457>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\CameraAnimationSequenceSubsystem.cpp"
                              ,0x41,"BoundObjects.Num() > 0");
          if (bVar13) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        else {
          pUVar14 = FWeakObjectPtr::Get(&(local_50.DataPtr)->WeakPtr);
          *(UObject **)(puVar9 + uVar17 * 8) = pUVar14;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        uVar17 = uVar17 + 1;
        uVar19 = (ulonglong)((int)uVar19 + 1);
      } while ((longlong)uVar17 < (longlong)(ulonglong)uVar3);
    }
    LOCK();
    local_80->ScheduledAccessCount = (atomic<int>)((int)local_80->ScheduledAccessCount + -1);
    UNLOCK();
    if (EVar7 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&local_80->ReadWriteLock);
    }
  }
  uVar18 = 0;
  if (local_78->SerialNumber != 0) {
    uVar18 = local_78->SerialNumber;
  }
  local_78->SerialNumber = uVar18;
  LOCK();
  local_78->ScheduledAccessCount = (atomic<int>)((int)local_78->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar6 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_78->ReadWriteLock);
  }
  LOCK();
  local_70->ScheduledAccessCount = (atomic<int>)((int)local_70->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar5 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_70->ReadWriteLock);
  }
  return;
}

