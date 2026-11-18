// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 4

// ~TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle> @ 146903070

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle>
::
~TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle>
          (TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle>
           *this)

{
  this->_padding_ = (longlong)&___7IEntityGroupingHandler_MovieScene_UE__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  return;
}

// OnGroupIndexFreed @ 14692e5e0

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle>
::OnGroupIndexFreed(TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle>
                    *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  longlong *plVar7;
  undefined1 local_38 [8];
  FWidgetMaterialHandle FStack_30;
  FMaterialParameterInfo FStack_20;
  
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar7 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar7 = &this->_padding_;
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)this->_padding_ - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar6 = (int *)((longlong)iVar3 * 0x38 + this->_padding_);
        if (*piVar6 == param_1) {
          if (piVar6 != (int *)0x0) goto LAB_14692e672;
          goto LAB_14692e64c;
        }
        iVar3 = piVar6[0xc];
      } while (iVar3 != -1);
    }
  }
  piVar6 = (int *)0x0;
LAB_14692e64c:
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14692e672:
  local_38 = *(undefined1 (*) [8])(piVar6 + 2);
  FStack_30.TypeName = *(FName *)(piVar6 + 4);
  FStack_30.Data = *(void **)(piVar6 + 6);
  FStack_20.Name = *(FName *)(piVar6 + 8);
  FStack_20._8_8_ = *(undefined8 *)(piVar6 + 10);
  iVar3 = TMapBase<int,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,0>_>
          ::Remove((TMapBase<int,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,0>_>
                    *)&this->_padding_,param_1);
  if ((iVar3 != 1) &&
     (bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5379070732896567531>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityGroupingSystem.h"
                         ,0xeb,"this->IndexToGroupKey.Remove(GroupIndex) == 1"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    uVar4 = ((uint)((ulonglong)local_38 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_38 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar5 = uVar5 >> 0x10 ^ uVar5;
    uVar4 = ::GetTypeHash(&FStack_30);
    uVar5 = uVar5 * 0x40 + (uVar5 >> 2) + uVar4 + 0x9e3779b9 ^ uVar5;
    uVar4 = ::GetTypeHash(&FStack_20);
    iVar3 = TSet<TTuple<TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,int>,TDefaultMapHashableKeyFuncs<TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,int,0>,FDefaultSetAllocator>
            ::RemoveImpl<TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>_>
                      ((TSet<TTuple<TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,int>,TDefaultMapHashableKeyFuncs<TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo>,int,0>,FDefaultSetAllocator>
                        *)&this->_padding_,(uVar5 >> 2) + uVar5 * 0x40 + uVar4 + 0x9e3779b9 ^ uVar5,
                       (TTuple<UObject_*,FWidgetMaterialHandle,FMaterialParameterInfo> *)local_38);
    if (iVar3 == 1) {
      return;
    }
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5379070732896567532>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityGroupingSystem.h"
                     ,0xec,"this->GroupKeyToIndex.Remove(Key) == 1");
  if (!bVar2) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ProcessAllocation @ 1469342d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle>
::ProcessAllocation(TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle>
                    *this,FEntityAllocationProxy *param_1,
                   TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
                   TWrite<UE::MovieScene::FEntityGroupID> param_3,FEntityGroupBuilder *param_4)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FBuiltInComponentTypes *pFVar5;
  FComponentMask *pFVar6;
  FEntityAllocation *pFVar7;
  byte *pbVar8;
  longlong lVar9;
  FMovieSceneEntityID local_48 [8];
  FEntityAllocationProxy local_38;
  FEntityAllocationProxy local_28;
  
  pFVar5 = FBuiltInComponentTypes::Get();
  pFVar6 = FEntityAllocationProxy::GetAllocationType(param_1);
  uVar1 = (pFVar5->Tags).NeedsLink.Value;
  if (((uVar1 == 0xffff) || ((pFVar6->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar6->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  uVar1 = (pFVar5->Tags).NeedsUnlink.Value;
  if (((uVar1 == 0xffff) || ((pFVar6->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar6->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar4) {
    local_28.Manager = param_1->Manager;
    local_28.AllocationIndex = param_1->AllocationIndex;
    local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
    VisitLinkedEntities(this,&local_28,param_2,param_3,param_4);
  }
  else if (bVar3) {
    local_38.Manager = param_1->Manager;
    local_38.AllocationIndex = param_1->AllocationIndex;
    local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pFVar7 = FEntityAllocationProxy::GetAllocation(&local_38);
    uVar1 = pFVar7->Size;
    if ((ulonglong)uVar1 != 0) {
      lVar9 = 0;
      pbVar8 = (byte *)((longlong)param_3 + 8);
      do {
        local_48[0].Value = *(ushort *)((longlong)param_2 + lVar9 * 2);
        if (((*(int *)(pbVar8 + -8) != -1) && (*(int *)(pbVar8 + -4) != -1)) && ((*pbVar8 & 1) == 0)
           ) {
          FEntityGroupBuilder::RemoveEntityFromGroup
                    (param_4,local_48,(FEntityGroupID *)(pbVar8 + -8));
          if (((*pbVar8 & 1) != 0) &&
             (bVar4 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<5379070732896567522>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityGroupingSystem.h"
                                 ,0xe2,
                                 "!EnumHasAllFlags(GroupID.Flags , EEntityGroupFlags::RemovedFromGroup)"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *pbVar8 = *pbVar8 | 1;
        }
        lVar9 = lVar9 + 1;
        pbVar8 = pbVar8 + 0xc;
      } while (lVar9 < (longlong)(ulonglong)uVar1);
    }
  }
  else {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5379070732896567451>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityGroupingSystem.h"
                       ,0x9b,"bNeedsLink || bNeedsUnlink");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// VisitLinkedEntities @ 14694dc60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle>
::VisitLinkedEntities
          (TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle>
           *this,FEntityAllocationProxy *param_1,TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TWrite<UE::MovieScene::FEntityGroupID> param_3,FEntityGroupBuilder *param_4)

{
  EComponentHeaderLockMode EVar1;
  EComponentHeaderLockMode EVar2;
  TRead<FWidgetMaterialHandle> TVar3;
  code *pcVar4;
  bool bVar5;
  FEntityAllocation *pFVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  FComponentHeader *pFVar9;
  FEntityAllocationProxy local_48;
  
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  pFVar8 = pFVar6->ComponentHeaders;
  pFVar9 = pFVar8 + pFVar6->NumComponents;
  for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 1) {
    if ((pFVar8->ComponentType).Value == *(ushort *)&(this->Components).field_0x2)
    goto LAB_14694dcf8;
  }
  pFVar8 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14694dcf8:
  EVar1 = pFVar6->LockMode;
  if (EVar1 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar8->ReadWriteLock);
  }
  LOCK();
  pFVar8->ScheduledAccessCount = (atomic<int>)((int)pFVar8->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar9 = pFVar6->ComponentHeaders;
  TVar3 = (TRead<FWidgetMaterialHandle>)pFVar8->Components;
  pFVar7 = pFVar9 + pFVar6->NumComponents;
  for (; pFVar9 != pFVar7; pFVar9 = pFVar9 + 1) {
    if ((pFVar9->ComponentType).Value == *(ushort *)&this->Components) goto LAB_14694dd6d;
  }
  pFVar9 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14694dd6d:
  EVar2 = pFVar6->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar9->ReadWriteLock);
  }
  LOCK();
  pFVar9->ScheduledAccessCount = (atomic<int>)((int)pFVar9->ScheduledAccessCount + 1);
  UNLOCK();
  local_48.Manager = param_1->Manager;
  local_48.AllocationIndex = param_1->AllocationIndex;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
  ::FMaterialGroupingPolicy::InitializeGroupKeys
            (&this->Policy,
             (TEntityGroupingHandlerBase<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy>
              *)&this->_padding_,param_4,&local_48,param_2,param_3,
             (TRead<UObject_*>)pFVar9->Components,TVar3);
  LOCK();
  pFVar9->ScheduledAccessCount = (atomic<int>)((int)pFVar9->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar2 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar9->ReadWriteLock);
  }
  LOCK();
  pFVar8->ScheduledAccessCount = (atomic<int>)((int)pFVar8->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar1 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar8->ReadWriteLock);
  }
  return;
}

