// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// CreateMutation @ 1460b9960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UMovieSceneBoundSceneComponentInstantiator::OnRun'::__l2::FSceneComponentBindingMutation::
CreateMutation(void *this,FEntityManager *param_1,FComponentMask *param_2)

{
  FBuiltInComponentTypes *pFVar1;
  FComponentTypeID local_res20;
  TComponentTypeID<UObject_*_(__cdecl*)(UObject_*)> local_res22;
  FComponentTypeID local_res24 [2];
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_res20.Value = *(ushort *)&pFVar1->GenericObjectBinding;
  local_res22 = pFVar1->BoundObjectResolver;
  local_18._First = &local_res20;
  local_18._Last = local_res24;
  UE::MovieScene::FComponentMask::SetAll(param_2,&local_18);
  return;
}

// InitializeAllocation @ 1460d2450

void __thiscall
`UMovieSceneBoundSceneComponentInstantiator::OnRun'::__l2::FSceneComponentBindingMutation::
InitializeAllocation(void *this,FEntityAllocation *param_1,FComponentMask *param_2)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  uchar *_Src;
  void *_Dst;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FBuiltInComponentTypes *pFVar6;
  TComponentLock<UE::MovieScene::TWrite<FGuid>_> *pTVar7;
  TComponentLock<UE::MovieScene::TWrite<UObject_*_(__cdecl*)(UObject_*)>_> *pTVar8;
  FComponentHeader *pFVar9;
  FComponentHeader *pFVar10;
  FComponentHeader *pFVar11;
  TComponentLock<UE::MovieScene::TWrite<FGuid>_> local_58;
  TComponentLock<UE::MovieScene::TWrite<UObject_*_(__cdecl*)(UObject_*)>_> local_38;
  
  pFVar6 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar9 = param_1->ComponentHeaders;
  pFVar10 = (FComponentHeader *)0x0;
  pFVar11 = pFVar9 + param_1->NumComponents;
  for (; pFVar9 != pFVar11; pFVar9 = pFVar9 + 1) {
    if ((TComponentTypeID<FGuid>)(pFVar9->ComponentType).Value == pFVar6->SceneComponentBinding)
    goto LAB_1460d24ce;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar9 = pFVar10;
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1460d24ce:
  EVar2 = param_1->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar9->ReadWriteLock);
  }
  LOCK();
  pFVar9->ScheduledAccessCount = (atomic<int>)((int)pFVar9->ScheduledAccessCount + 1);
  UNLOCK();
  _Src = pFVar9->Components;
  LOCK();
  pFVar9->ScheduledAccessCount = (atomic<int>)((int)pFVar9->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar2 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar9->ReadWriteLock);
  }
  pTVar7 = UE::MovieScene::FEntityAllocation::WriteComponents<FGuid>
                     (param_1,&local_58,pFVar6->GenericObjectBinding,
                      (FEntityAllocationWriteContext)0x0);
  _Dst = *(void **)&pTVar7->field_0x18;
  if (local_58._0_8_ != 0) {
    if ((ulonglong)local_58._8_8_ < *(ulonglong *)(local_58._0_8_ + 0x28)) {
      local_58._8_8_ = *(ulonglong *)(local_58._0_8_ + 0x28);
    }
    *(undefined8 *)(local_58._0_8_ + 0x28) = local_58._8_8_;
    LOCK();
    *(int *)(local_58._0_8_ + 0x30) = *(int *)(local_58._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_58._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_58._0_8_ + 0x20));
    }
  }
  pTVar8 = UE::MovieScene::FEntityAllocation::WriteComponents<UObject_*_(__cdecl*)(UObject_*)>
                     (param_1,&local_38,pFVar6->BoundObjectResolver,
                      (FEntityAllocationWriteContext)0x0);
  lVar3 = *(longlong *)&pTVar8->field_0x18;
  if (local_38._0_8_ != 0) {
    if ((ulonglong)local_38._8_8_ < *(ulonglong *)(local_38._0_8_ + 0x28)) {
      local_38._8_8_ = *(ulonglong *)(local_38._0_8_ + 0x28);
    }
    *(undefined8 *)(local_38._0_8_ + 0x28) = local_38._8_8_;
    LOCK();
    *(int *)(local_38._0_8_ + 0x30) = *(int *)(local_38._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_38._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_38._0_8_ + 0x20));
    }
  }
  uVar1 = param_1->Size;
  memcpy(_Dst,_Src,(ulonglong)uVar1 << 4);
  if ((ulonglong)uVar1 != 0) {
    do {
      *(code **)(lVar3 + (longlong)pFVar10 * 8) =
           MovieSceneHelpers::ResolveSceneComponentBoundObject;
      pFVar10 = (FComponentHeader *)((longlong)&pFVar10->_padding_ + 1);
    } while ((longlong)pFVar10 < (longlong)(ulonglong)uVar1);
  }
  return;
}

