// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 19

// ~TEntityGroupingHandlerImpl<UE::MovieScene::FCustomPrimitiveDataGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FName> @ 1467676c0

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UE::MovieScene::FCustomPrimitiveDataGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FName>
::
~TEntityGroupingHandlerImpl<UE::MovieScene::FCustomPrimitiveDataGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FName>
          (TEntityGroupingHandlerImpl<UE::MovieScene::FCustomPrimitiveDataGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FName>
           *this)

{
  this->_padding_ = (longlong)&___7IEntityGroupingHandler_MovieScene_UE__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TTuple<FObjectKey,FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<FObjectKey,FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TTuple<FObjectKey,FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  return;
}

// ~TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FComponentMaterialInfo> @ 146767730

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FComponentMaterialInfo>
::
~TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FComponentMaterialInfo>
          (TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FComponentMaterialInfo>
           *this)

{
  this->_padding_ = (longlong)&___7IEntityGroupingHandler_MovieScene_UE__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  return;
}

// OnGroupIndexFreed @ 1467a89f0

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UE::MovieScene::FCustomPrimitiveDataGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FName>
::OnGroupIndexFreed(TEntityGroupingHandlerImpl<UE::MovieScene::FCustomPrimitiveDataGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FName>
                    *this,int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  longlong *plVar9;
  TTuple<FObjectKey,FName> local_18;
  
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar9 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar9 = &this->_padding_;
    }
    iVar4 = *(int *)((longlong)plVar9 + (ulonglong)((int)this->_padding_ - 1U & param_1) * 4);
    if (iVar4 != -1) {
      do {
        piVar7 = (int *)((longlong)iVar4 * 0x1c + this->_padding_);
        if (*piVar7 == param_1) {
          if (piVar7 != (int *)0x0) goto LAB_1467a8a82;
          goto LAB_1467a8a5c;
        }
        iVar4 = piVar7[5];
      } while (iVar4 != -1);
    }
  }
  piVar7 = (int *)0x0;
LAB_1467a8a5c:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1467a8a82:
  local_18._0_4_ = piVar7[1];
  local_18._4_4_ = piVar7[2];
  local_18._8_4_ = piVar7[3];
  local_18._12_4_ = piVar7[4];
  iVar4 = TMapBase<int,TTuple<FObjectKey,FName>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<FObjectKey,FName>,0>_>
          ::Remove((TMapBase<int,TTuple<FObjectKey,FName>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<FObjectKey,FName>,0>_>
                    *)&this->_padding_,param_1);
  if ((iVar4 != 1) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5379070732896567531>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityGroupingSystem.h"
                         ,0xeb,"this->IndexToGroupKey.Remove(GroupIndex) == 1"), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = local_18._8_8_;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    uVar6 = local_18._0_4_ - local_18._4_4_ ^ (uint)local_18._4_4_ >> 0xd;
    uVar5 = (-0x61c88647 - uVar6) - local_18._4_4_ ^ uVar6 << 8;
    uVar8 = (local_18._4_4_ - uVar5) - uVar6 ^ uVar5 >> 0xd;
    uVar6 = (uVar6 - uVar8) - uVar5 ^ uVar8 >> 0xc;
    uVar5 = (uVar5 - uVar8) - uVar6 ^ uVar6 << 0x10;
    uVar8 = (uVar8 - uVar5) - uVar6 ^ uVar5 >> 5;
    uVar6 = (uVar6 - uVar8) - uVar5 ^ uVar8 >> 3;
    uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar6 << 10;
    uVar6 = (uVar8 - uVar5) - uVar6 ^ uVar5 >> 0xf;
    uVar5 = ::GetTypeHash((FNameEntryId)local_18._8_4_);
    iVar4 = TSet<TTuple<TTuple<FObjectKey,FName>,int>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,int,0>,FDefaultSetAllocator>
            ::RemoveImpl<TTuple<FObjectKey,FName>_>
                      ((TSet<TTuple<TTuple<FObjectKey,FName>,int>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,int,0>,FDefaultSetAllocator>
                        *)&this->_padding_,
                       (uVar6 >> 2) + SUB84(uVar2,4) + uVar6 * 0x40 + uVar5 + 0x9e3779b9 ^ uVar6,
                       &local_18);
    if (iVar4 == 1) {
      return;
    }
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5379070732896567532>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityGroupingSystem.h"
                     ,0xec,"this->GroupKeyToIndex.Remove(Key) == 1");
  if (!bVar3) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// OnGroupIndexFreed @ 1467a8bd0

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FComponentMaterialInfo>
::OnGroupIndexFreed(TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FComponentMaterialInfo>
                    *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  longlong *plVar7;
  undefined1 local_38 [16];
  uint local_28;
  byte bStack_24;
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
          if (piVar6 != (int *)0x0) goto LAB_1467a8c62;
          goto LAB_1467a8c3c;
        }
        iVar3 = piVar6[0xc];
      } while (iVar3 != -1);
    }
  }
  piVar6 = (int *)0x0;
LAB_1467a8c3c:
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1467a8c62:
  local_38._0_8_ = *(undefined8 *)(piVar6 + 2);
  local_38._8_4_ = piVar6[4];
  local_38._12_4_ = piVar6[5];
  local_28 = piVar6[6];
  unique0x10000190 = piVar6[7];
  FStack_20.Name = *(FName *)(piVar6 + 8);
  FStack_20._8_8_ = *(undefined8 *)(piVar6 + 10);
  iVar3 = TMapBase<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,0>_>
          ::Remove((TMapBase<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,0>_>
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
    uVar4 = ((uint)((ulonglong)local_38._0_8_ >> 0x14) & 0xffff ^
            (uint)((ulonglong)local_38._0_8_ >> 4)) * -0x7a143595;
    uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar5 = uVar5 >> 0x10 ^ uVar5;
    uVar4 = ::GetTypeHash((FNameEntryId)local_38._8_4_);
    uVar5 = (uVar5 >> 2) +
            (uVar4 + SUB84(local_38._8_8_,4) ^ (uint)bStack_24 ^ local_28) + 0x9e3779b9 +
            uVar5 * 0x40 ^ uVar5;
    uVar4 = ::GetTypeHash(&FStack_20);
    iVar3 = TSet<TTuple<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,int>,TDefaultMapHashableKeyFuncs<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,int,0>,FDefaultSetAllocator>
            ::RemoveImpl<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>_>
                      ((TSet<TTuple<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,int>,TDefaultMapHashableKeyFuncs<TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo>,int,0>,FDefaultSetAllocator>
                        *)&this->_padding_,(uVar5 >> 2) + uVar5 * 0x40 + uVar4 + 0x9e3779b9 ^ uVar5,
                       (TTuple<UObject_*,FComponentMaterialInfo,FMaterialParameterInfo> *)local_38);
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

// ProcessAllocation @ 1467b4550

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UE::MovieScene::FCustomPrimitiveDataGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FName>
::ProcessAllocation(TEntityGroupingHandlerImpl<UE::MovieScene::FCustomPrimitiveDataGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FName>
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

// ProcessAllocation @ 1467b4730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FComponentMaterialInfo>
::ProcessAllocation(TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FComponentMaterialInfo>
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

// VisitLinkedEntities @ 1467c6c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UE::MovieScene::FCustomPrimitiveDataGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FName>
::VisitLinkedEntities
          (TEntityGroupingHandlerImpl<UE::MovieScene::FCustomPrimitiveDataGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FName>
           *this,FEntityAllocationProxy *param_1,TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TWrite<UE::MovieScene::FEntityGroupID> param_3,FEntityGroupBuilder *param_4)

{
  EComponentHeaderLockMode EVar1;
  EComponentHeaderLockMode EVar2;
  TRead<FName> TVar3;
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
    goto LAB_1467c6cf8;
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
LAB_1467c6cf8:
  EVar1 = pFVar6->LockMode;
  if (EVar1 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar8->ReadWriteLock);
  }
  LOCK();
  pFVar8->ScheduledAccessCount = (atomic<int>)((int)pFVar8->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar9 = pFVar6->ComponentHeaders;
  TVar3 = (TRead<FName>)pFVar8->Components;
  pFVar7 = pFVar9 + pFVar6->NumComponents;
  for (; pFVar9 != pFVar7; pFVar9 = pFVar9 + 1) {
    if ((pFVar9->ComponentType).Value == *(ushort *)&this->Components) goto LAB_1467c6d6d;
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
LAB_1467c6d6d:
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
  FCustomPrimitiveDataGroupingPolicy::InitializeGroupKeys
            (&this->Policy,
             (TEntityGroupingHandlerBase<UE::MovieScene::FCustomPrimitiveDataGroupingPolicy> *)
             &this->_padding_,param_4,&local_48,param_2,param_3,(TRead<UObject_*>)pFVar9->Components
             ,TVar3);
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

// VisitLinkedEntities @ 1467c6e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FComponentMaterialInfo>
::VisitLinkedEntities
          (TEntityGroupingHandlerImpl<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>::FMaterialGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FComponentMaterialInfo>
           *this,FEntityAllocationProxy *param_1,TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TWrite<UE::MovieScene::FEntityGroupID> param_3,FEntityGroupBuilder *param_4)

{
  EComponentHeaderLockMode EVar1;
  EComponentHeaderLockMode EVar2;
  TRead<FComponentMaterialInfo> TVar3;
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
    goto LAB_1467c6eb8;
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
LAB_1467c6eb8:
  EVar1 = pFVar6->LockMode;
  if (EVar1 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar8->ReadWriteLock);
  }
  LOCK();
  pFVar8->ScheduledAccessCount = (atomic<int>)((int)pFVar8->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar9 = pFVar6->ComponentHeaders;
  TVar3 = (TRead<FComponentMaterialInfo>)pFVar8->Components;
  pFVar7 = pFVar9 + pFVar6->NumComponents;
  for (; pFVar9 != pFVar7; pFVar9 = pFVar9 + 1) {
    if ((pFVar9->ComponentType).Value == *(ushort *)&this->Components) goto LAB_1467c6f2d;
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
LAB_1467c6f2d:
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
  TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
  ::FMaterialGroupingPolicy::InitializeGroupKeys
            (&this->Policy,
             (TEntityGroupingHandlerBase<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>::FMaterialGroupingPolicy>
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

// ~TEntityGroupingHandlerImpl<UMovieSceneSkeletalAnimationSystem::FAnimationGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FMovieSceneSkeletalAnimationComponentData> @ 14680c9b0

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UMovieSceneSkeletalAnimationSystem::FAnimationGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FMovieSceneSkeletalAnimationComponentData>
::
~TEntityGroupingHandlerImpl<UMovieSceneSkeletalAnimationSystem::FAnimationGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FMovieSceneSkeletalAnimationComponentData>
          (TEntityGroupingHandlerImpl<UMovieSceneSkeletalAnimationSystem::FAnimationGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FMovieSceneSkeletalAnimationComponentData>
           *this)

{
  this->_padding_ = (longlong)&___7IEntityGroupingHandler_MovieScene_UE__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FObjectKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FObjectKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FObjectKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  return;
}

// ~TEntityGroupingHandlerImpl<UE::MovieScene::FMPCGroupingPolicy,TIntegerSequence<int,0>,TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_> @ 14680ca20

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UE::MovieScene::FMPCGroupingPolicy,TIntegerSequence<int,0>,TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>
::
~TEntityGroupingHandlerImpl<UE::MovieScene::FMPCGroupingPolicy,TIntegerSequence<int,0>,TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>
          (TEntityGroupingHandlerImpl<UE::MovieScene::FMPCGroupingPolicy,TIntegerSequence<int,0>,TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>
           *this)

{
  this->_padding_ = (longlong)&___7IEntityGroupingHandler_MovieScene_UE__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TTuple<FObjectKey,FMaterialParameterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<FObjectKey,FMaterialParameterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TTuple<FObjectKey,FMaterialParameterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FMaterialParameterInfo>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FMaterialParameterInfo>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FMaterialParameterInfo>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  return;
}

// ~TEntityGroupingHandlerImpl<UE::MovieScene::FPropertyInstantiatorGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FMovieScenePropertyBinding> @ 14680ca90

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UE::MovieScene::FPropertyInstantiatorGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FMovieScenePropertyBinding>
::
~TEntityGroupingHandlerImpl<UE::MovieScene::FPropertyInstantiatorGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FMovieScenePropertyBinding>
          (TEntityGroupingHandlerImpl<UE::MovieScene::FPropertyInstantiatorGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FMovieScenePropertyBinding>
           *this)

{
  this->_padding_ = (longlong)&___7IEntityGroupingHandler_MovieScene_UE__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TTuple<UObject_*,FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<UObject_*,FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TTuple<UObject_*,FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UObject_*,FName>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UObject_*,FName>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UObject_*,FName>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  return;
}

// OnGroupIndexFreed @ 146842520

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UMovieSceneSkeletalAnimationSystem::FAnimationGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FMovieSceneSkeletalAnimationComponentData>
::OnGroupIndexFreed(TEntityGroupingHandlerImpl<UMovieSceneSkeletalAnimationSystem::FAnimationGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FMovieSceneSkeletalAnimationComponentData>
                    *this,int param_1)

{
  FObjectKey FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  FObjectKey local_res8;
  int local_res10 [2];
  
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar6 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar6 = &this->_padding_;
    }
    iVar4 = *(int *)((longlong)plVar6 + (ulonglong)((int)this->_padding_ - 1U & param_1) * 4);
    if (iVar4 != -1) {
      do {
        lVar8 = this->_padding_ + (longlong)iVar4 * 0x14;
        if (*(int *)(this->_padding_ + (longlong)iVar4 * 0x14) == param_1) {
          if (lVar8 != 0) goto LAB_1468425b3;
          goto LAB_14684258d;
        }
        iVar4 = *(int *)(lVar8 + 0xc);
      } while (iVar4 != -1);
    }
  }
  lVar8 = 0;
LAB_14684258d:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1468425b3:
  FVar1 = *(FObjectKey *)(lVar8 + 4);
  local_res8 = FVar1;
  local_res10[0] = param_1;
  if ((((int)this->_padding_ == *(int *)((longlong)&this->_padding_ + 4)) ||
      (iVar4 = TSet<TTuple<int,FObjectKey>,TDefaultMapHashableKeyFuncs<int,FObjectKey,0>,FDefaultSetAllocator>
               ::RemoveImpl<int>((TSet<TTuple<int,FObjectKey>,TDefaultMapHashableKeyFuncs<int,FObjectKey,0>,FDefaultSetAllocator>
                                  *)&this->_padding_,param_1,local_res10), iVar4 != 1)) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5379070732896567531>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityGroupingSystem.h"
                         ,0xeb,"this->IndexToGroupKey.Remove(GroupIndex) == 1"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    uVar7 = FVar1.ObjectIndex - local_res8.ObjectSerialNumber ^
            (uint)local_res8.ObjectSerialNumber >> 0xd;
    uVar9 = (-0x61c88647 - uVar7) - local_res8.ObjectSerialNumber ^ uVar7 << 8;
    uVar5 = (local_res8.ObjectSerialNumber - uVar9) - uVar7 ^ uVar9 >> 0xd;
    uVar7 = (uVar7 - uVar5) - uVar9 ^ uVar5 >> 0xc;
    uVar9 = (uVar9 - uVar5) - uVar7 ^ uVar7 << 0x10;
    uVar5 = (uVar5 - uVar9) - uVar7 ^ uVar9 >> 5;
    uVar7 = (uVar7 - uVar5) - uVar9 ^ uVar5 >> 3;
    uVar9 = (uVar9 - uVar7) - uVar5 ^ uVar7 << 10;
    iVar4 = TSet<TTuple<FObjectKey,int>,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>,FDefaultSetAllocator>
            ::RemoveImpl<FObjectKey>
                      ((TSet<TTuple<FObjectKey,int>,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>,FDefaultSetAllocator>
                        *)&this->_padding_,(uVar5 - uVar9) - uVar7 ^ uVar9 >> 0xf,&local_res8);
    if (iVar4 == 1) {
      return;
    }
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5379070732896567532>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityGroupingSystem.h"
                     ,0xec,"this->GroupKeyToIndex.Remove(Key) == 1");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// OnGroupIndexFreed @ 146842700

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UE::MovieScene::FMPCGroupingPolicy,TIntegerSequence<int,0>,TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>
::OnGroupIndexFreed(TEntityGroupingHandlerImpl<UE::MovieScene::FMPCGroupingPolicy,TIntegerSequence<int,0>,TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>
                    *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  int local_res10 [2];
  undefined1 local_28 [8];
  FMaterialParameterInfo FStack_20;
  
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar6 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar6 = &this->_padding_;
    }
    iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)this->_padding_ - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar8 = this->_padding_ + (longlong)iVar3 * 0x24;
        if (*(int *)(this->_padding_ + (longlong)iVar3 * 0x24) == param_1) {
          if (lVar8 != 0) goto LAB_146842793;
          goto LAB_14684276d;
        }
        iVar3 = *(int *)(lVar8 + 0x1c);
      } while (iVar3 != -1);
    }
  }
  lVar8 = 0;
LAB_14684276d:
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_146842793:
  local_28 = *(undefined1 (*) [8])(lVar8 + 4);
  FStack_20.Name = *(FName *)(lVar8 + 0xc);
  FStack_20._8_8_ = *(undefined8 *)(lVar8 + 0x14);
  local_res10[0] = param_1;
  if ((((int)this->_padding_ == *(int *)((longlong)&this->_padding_ + 4)) ||
      (iVar3 = TSet<TTuple<int,TTuple<FObjectKey,FMaterialParameterInfo>_>,TDefaultMapHashableKeyFuncs<int,TTuple<FObjectKey,FMaterialParameterInfo>,0>,FDefaultSetAllocator>
               ::RemoveImpl<int>((TSet<TTuple<int,TTuple<FObjectKey,FMaterialParameterInfo>_>,TDefaultMapHashableKeyFuncs<int,TTuple<FObjectKey,FMaterialParameterInfo>,0>,FDefaultSetAllocator>
                                  *)&this->_padding_,param_1,local_res10), iVar3 != 1)) &&
     (bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5379070732896567531>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityGroupingSystem.h"
                         ,0xeb,"this->IndexToGroupKey.Remove(GroupIndex) == 1"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    uVar5 = local_28._0_4_ - local_28._4_4_ ^ (uint)local_28._4_4_ >> 0xd;
    uVar4 = (-0x61c88647 - uVar5) - local_28._4_4_ ^ uVar5 << 8;
    uVar7 = (local_28._4_4_ - uVar4) - uVar5 ^ uVar4 >> 0xd;
    uVar5 = (uVar5 - uVar7) - uVar4 ^ uVar7 >> 0xc;
    uVar4 = (uVar4 - uVar7) - uVar5 ^ uVar5 << 0x10;
    uVar7 = (uVar7 - uVar4) - uVar5 ^ uVar4 >> 5;
    uVar5 = (uVar5 - uVar7) - uVar4 ^ uVar7 >> 3;
    uVar4 = (uVar4 - uVar5) - uVar7 ^ uVar5 << 10;
    uVar5 = (uVar7 - uVar4) - uVar5 ^ uVar4 >> 0xf;
    uVar4 = ::GetTypeHash(&FStack_20);
    iVar3 = TSet<TTuple<TTuple<FObjectKey,FMaterialParameterInfo>,int>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMaterialParameterInfo>,int,0>,FDefaultSetAllocator>
            ::RemoveImpl<TTuple<FObjectKey,FMaterialParameterInfo>_>
                      ((TSet<TTuple<TTuple<FObjectKey,FMaterialParameterInfo>,int>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMaterialParameterInfo>,int,0>,FDefaultSetAllocator>
                        *)&this->_padding_,(uVar5 >> 2) + uVar5 * 0x40 + uVar4 + 0x9e3779b9 ^ uVar5,
                       (TTuple<FObjectKey,FMaterialParameterInfo> *)local_28);
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

// OnGroupIndexFreed @ 146842900

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UE::MovieScene::FPropertyInstantiatorGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FMovieScenePropertyBinding>
::OnGroupIndexFreed(TEntityGroupingHandlerImpl<UE::MovieScene::FPropertyInstantiatorGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FMovieScenePropertyBinding>
                    *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  longlong *plVar5;
  TTuple<UObject_*,FName> local_18;
  
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar5 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar5 = &this->_padding_;
    }
    iVar3 = *(int *)((longlong)plVar5 + (ulonglong)((int)this->_padding_ - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar3 * 0x20 + this->_padding_);
        if (*piVar4 == param_1) {
          if (piVar4 == (int *)0x0) goto LAB_14684296d;
          goto LAB_146842993;
        }
        iVar3 = piVar4[6];
      } while (iVar3 != -1);
    }
  }
  piVar4 = (int *)0x0;
LAB_14684296d:
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_146842993:
  local_18._0_4_ = piVar4[2];
  local_18._4_4_ = piVar4[3];
  local_18._8_4_ = piVar4[4];
  local_18._12_4_ = piVar4[5];
  iVar3 = TSet<TTuple<int,TTuple<UObject_*,FName>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FName>,0>,FDefaultSetAllocator>
          ::Remove((TSet<TTuple<int,TTuple<UObject_*,FName>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FName>,0>,FDefaultSetAllocator>
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
  iVar3 = TSet<TTuple<TTuple<UObject_*,FName>,int>,TDefaultMapHashableKeyFuncs<TTuple<UObject_*,FName>,int,0>,FDefaultSetAllocator>
          ::Remove((TSet<TTuple<TTuple<UObject_*,FName>,int>,TDefaultMapHashableKeyFuncs<TTuple<UObject_*,FName>,int,0>,FDefaultSetAllocator>
                    *)&this->_padding_,&local_18);
  if ((iVar3 != 1) &&
     (bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5379070732896567532>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityGroupingSystem.h"
                         ,0xec,"this->GroupKeyToIndex.Remove(Key) == 1"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ProcessAllocation @ 1468582e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UMovieSceneSkeletalAnimationSystem::FAnimationGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FMovieSceneSkeletalAnimationComponentData>
::ProcessAllocation(TEntityGroupingHandlerImpl<UMovieSceneSkeletalAnimationSystem::FAnimationGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FMovieSceneSkeletalAnimationComponentData>
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

// ProcessAllocation @ 1468584c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UE::MovieScene::FMPCGroupingPolicy,TIntegerSequence<int,0>,TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>
::ProcessAllocation(TEntityGroupingHandlerImpl<UE::MovieScene::FMPCGroupingPolicy,TIntegerSequence<int,0>,TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>
                    *this,FEntityAllocationProxy *param_1,
                   TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
                   TWrite<UE::MovieScene::FEntityGroupID> param_3,FEntityGroupBuilder *param_4)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FBuiltInComponentTypes *pFVar6;
  FComponentMask *pFVar7;
  FEntityAllocation *pFVar8;
  FComponentHeader *pFVar9;
  byte *pbVar10;
  longlong lVar11;
  FComponentHeader *pFVar12;
  FMovieSceneEntityID local_58 [8];
  FEntityAllocationProxy local_48;
  FEntityAllocationProxy local_38;
  FEntityAllocationProxy local_28;
  
  pFVar6 = FBuiltInComponentTypes::Get();
  pFVar7 = FEntityAllocationProxy::GetAllocationType(param_1);
  uVar1 = (pFVar6->Tags).NeedsLink.Value;
  if (((uVar1 == 0xffff) || ((pFVar7->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar7->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  uVar1 = (pFVar6->Tags).NeedsUnlink.Value;
  if (((uVar1 == 0xffff) || ((pFVar7->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar7->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar5) {
    local_48.Manager = param_1->Manager;
    local_48.AllocationIndex = param_1->AllocationIndex;
    local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pFVar8 = FEntityAllocationProxy::GetAllocation(&local_48);
    pFVar12 = pFVar8->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar8->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((TTuple<UE::MovieScene::TComponentTypeID<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>_>
           )(pFVar12->ComponentType).Value == this->Components) goto LAB_1468586b8;
    }
    pFVar12 = (FComponentHeader *)0x0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Header",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0x2cd,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_1468586b8:
    EVar2 = pFVar8->LockMode;
    if (EVar2 == Mutex) {
      AcquireSRWLockShared((PSRWLOCK)&pFVar12->ReadWriteLock);
    }
    LOCK();
    pFVar12->ScheduledAccessCount = (atomic<int>)((int)pFVar12->ScheduledAccessCount + 1);
    UNLOCK();
    local_28.Manager = local_48.Manager;
    local_28.AllocationIndex = local_48.AllocationIndex;
    local_28._12_4_ = local_48._12_4_;
    FMPCGroupingPolicy::InitializeGroupKeys
              (&this->Policy,
               (TEntityGroupingHandlerBase<UE::MovieScene::FMPCGroupingPolicy> *)&this->_padding_,
               param_4,&local_28,param_2,param_3,
               (TRead<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>)
               pFVar12->Components);
    LOCK();
    pFVar12->ScheduledAccessCount = (atomic<int>)((int)pFVar12->ScheduledAccessCount + -1);
    UNLOCK();
    if (EVar2 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar12->ReadWriteLock);
    }
  }
  else if (bVar4) {
    local_38.Manager = param_1->Manager;
    local_38.AllocationIndex = param_1->AllocationIndex;
    local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pFVar8 = FEntityAllocationProxy::GetAllocation(&local_38);
    uVar1 = pFVar8->Size;
    if ((ulonglong)uVar1 != 0) {
      lVar11 = 0;
      pbVar10 = (byte *)((longlong)param_3 + 8);
      do {
        local_58[0].Value = *(ushort *)((longlong)param_2 + lVar11 * 2);
        if (((*(int *)(pbVar10 + -8) != -1) && (*(int *)(pbVar10 + -4) != -1)) &&
           ((*pbVar10 & 1) == 0)) {
          FEntityGroupBuilder::RemoveEntityFromGroup
                    (param_4,local_58,(FEntityGroupID *)(pbVar10 + -8));
          if (((*pbVar10 & 1) != 0) &&
             (bVar5 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<5379070732896567522>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityGroupingSystem.h"
                                 ,0xe2,
                                 "!EnumHasAllFlags(GroupID.Flags , EEntityGroupFlags::RemovedFromGroup)"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *pbVar10 = *pbVar10 | 1;
        }
        lVar11 = lVar11 + 1;
        pbVar10 = pbVar10 + 0xc;
      } while (lVar11 < (longlong)(ulonglong)uVar1);
    }
  }
  else {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5379070732896567451>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityGroupingSystem.h"
                       ,0x9b,"bNeedsLink || bNeedsUnlink");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ProcessAllocation @ 146858750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UE::MovieScene::FPropertyInstantiatorGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FMovieScenePropertyBinding>
::ProcessAllocation(TEntityGroupingHandlerImpl<UE::MovieScene::FPropertyInstantiatorGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FMovieScenePropertyBinding>
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

// VisitLinkedEntities @ 146872b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UMovieSceneSkeletalAnimationSystem::FAnimationGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FMovieSceneSkeletalAnimationComponentData>
::VisitLinkedEntities
          (TEntityGroupingHandlerImpl<UMovieSceneSkeletalAnimationSystem::FAnimationGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FMovieSceneSkeletalAnimationComponentData>
           *this,FEntityAllocationProxy *param_1,TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TWrite<UE::MovieScene::FEntityGroupID> param_3,FEntityGroupBuilder *param_4)

{
  uint *puVar1;
  UObject *pUVar2;
  code *pcVar3;
  uchar *puVar4;
  bool bVar5;
  uint uVar6;
  FEntityAllocation *pFVar7;
  longlong lVar8;
  uint uVar9;
  FComponentHeader *pFVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  FComponentHeader *pFVar14;
  int iVar15;
  uint uVar16;
  EComponentHeaderLockMode EVar17;
  FComponentHeader *pFVar18;
  ulonglong uVar19;
  longlong lVar20;
  FMovieSceneEntityID local_res8 [4];
  TWrite<UE::MovieScene::FEntityGroupID> local_res20;
  FWeakObjectPtr local_c8;
  FWeakObjectPtr local_c0;
  FWeakObjectPtr local_b8;
  ulonglong local_b0;
  int local_a8;
  EComponentHeaderLockMode local_a4;
  EComponentHeaderLockMode local_a0;
  FComponentHeader *local_98;
  FComponentHeader *local_90;
  FEntityGroupID local_88;
  undefined1 local_78 [8];
  uchar *local_70;
  UObject *local_68;
  uchar *local_60;
  FWeakObjectPtr *local_58;
  ulonglong *local_50;
  uint *local_48;
  FWeakObjectPtr *local_40;
  
  pFVar7 = FEntityAllocationProxy::GetAllocation(param_1);
  uVar19 = (ulonglong)pFVar7->Size;
  pFVar18 = pFVar7->ComponentHeaders;
  pFVar14 = pFVar18 + pFVar7->NumComponents;
  for (; pFVar18 != pFVar14; pFVar18 = pFVar18 + 1) {
    local_90 = pFVar18;
    if ((pFVar18->ComponentType).Value == *(ushort *)&(this->Components).field_0x2)
    goto LAB_146872c28;
  }
  pFVar18 = (FComponentHeader *)0x0;
  local_90 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_146872c28:
  local_a0 = pFVar7->LockMode;
  if (local_a0 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar18->ReadWriteLock);
  }
  LOCK();
  pFVar18->ScheduledAccessCount = (atomic<int>)((int)pFVar18->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar14 = pFVar7->ComponentHeaders;
  local_70 = pFVar18->Components;
  pFVar10 = pFVar14 + pFVar7->NumComponents;
  for (; pFVar14 != pFVar10; pFVar14 = pFVar14 + 1) {
    local_98 = pFVar14;
    if ((pFVar14->ComponentType).Value == *(ushort *)&this->Components) goto LAB_146872caf;
  }
  pFVar14 = (FComponentHeader *)0x0;
  local_98 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_146872caf:
  EVar17 = pFVar7->LockMode;
  local_a4 = EVar17;
  if (EVar17 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
  }
  LOCK();
  pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + 1);
  UNLOCK();
  local_60 = pFVar14->Components;
  local_b0 = uVar19;
  if (uVar19 != 0) {
    lVar20 = 0;
    local_res20 = param_3;
    do {
      puVar4 = local_60;
      local_b8.ObjectIndex = 0;
      local_b8.ObjectSerialNumber = 0;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)(local_70 + lVar20 * 8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)(local_70 + lVar20 * 8));
      }
      pUVar2 = *(UObject **)(puVar4 + lVar20 * 8);
      iVar11 = 0;
      local_c0.ObjectIndex = 0;
      local_c0.ObjectSerialNumber = 0;
      uVar6 = 0;
      if (pUVar2 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar2);
        }
        local_c8.ObjectIndex = 0;
        local_c8.ObjectSerialNumber = 0;
        local_68 = pUVar2;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar2);
        }
        FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_68);
        iVar11 = local_c8.ObjectIndex;
        local_c0 = local_c8;
        uVar6 = local_c8.ObjectSerialNumber;
      }
      local_res8[0].Value = *(ushort *)((longlong)param_2 + lVar20 * 2);
      uVar12 = iVar11 - uVar6 ^ uVar6 >> 0xd;
      local_b0 = CONCAT44(local_b0._4_4_,0xffffffff);
      uVar9 = (-0x61c88647 - uVar12) - uVar6 ^ uVar12 << 8;
      uVar16 = (uVar6 - uVar9) - uVar12 ^ uVar9 >> 0xd;
      uVar12 = (uVar12 - uVar16) - uVar9 ^ uVar16 >> 0xc;
      uVar9 = (uVar9 - uVar16) - uVar12 ^ uVar12 << 0x10;
      uVar16 = (uVar16 - uVar9) - uVar12 ^ uVar9 >> 5;
      uVar12 = (uVar12 - uVar16) - uVar9 ^ uVar16 >> 3;
      uVar9 = (uVar9 - uVar12) - uVar16 ^ uVar12 << 10;
      uVar9 = (uVar16 - uVar9) - uVar12 ^ uVar9 >> 0xf;
      local_b8 = local_c0;
      if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
        plVar13 = &this->_padding_;
        if ((longlong *)this->_padding_ != (longlong *)0x0) {
          plVar13 = (longlong *)this->_padding_;
        }
        iVar15 = *(int *)((longlong)plVar13 + (ulonglong)((int)this->_padding_ - 1U & uVar9) * 4);
        if (iVar15 != -1) {
          do {
            lVar8 = this->_padding_ + (longlong)iVar15 * 0x14;
            if ((*(int *)(this->_padding_ + (longlong)iVar15 * 0x14) == iVar11) &&
               (*(uint *)(lVar8 + 4) == uVar6)) {
              if ((iVar15 != -1) && (lVar8 != 0)) goto LAB_146872ebb;
              break;
            }
            iVar15 = *(int *)(lVar8 + 0xc);
          } while (iVar15 != -1);
        }
      }
      local_58 = &local_b8;
      local_50 = &local_b0;
      TSet<TTuple<FObjectKey,int>,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TPairInitializer<FObjectKey_const_&,int_&&>_>
                ((TSet<TTuple<FObjectKey,int>,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>,FDefaultSetAllocator>
                  *)&this->_padding_,(uint)&local_a8,
                 (TPairInitializer<FObjectKey_const_&,int_&&> *)(ulonglong)uVar9,(bool *)&local_58);
      lVar8 = this->_padding_ + (longlong)local_a8 * 0x14;
LAB_146872ebb:
      puVar1 = (uint *)(lVar8 + 8);
      if (*(int *)(lVar8 + 8) == -1) {
        uVar6 = FEntityGroupBuilder::AllocateGroupIndex(param_4);
        *puVar1 = uVar6;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar13 = &this->_padding_;
          if ((longlong *)this->_padding_ != (longlong *)0x0) {
            plVar13 = (longlong *)this->_padding_;
          }
          iVar11 = *(int *)((longlong)plVar13 + (ulonglong)((int)this->_padding_ - 1U & uVar6) * 4);
          if (iVar11 != -1) {
            do {
              lVar8 = this->_padding_ + (longlong)iVar11 * 0x14;
              if (*(uint *)(this->_padding_ + (longlong)iVar11 * 0x14) == uVar6) {
                if (lVar8 != 0) goto LAB_146872f5c;
                break;
              }
              iVar11 = *(int *)(lVar8 + 0xc);
            } while (iVar11 != -1);
          }
        }
        local_40 = &local_b8;
        local_48 = puVar1;
        TSet<TTuple<int,FObjectKey>,TDefaultMapHashableKeyFuncs<int,FObjectKey,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TPairInitializer<int_const_&,FObjectKey_const_&>_>
                  ((TSet<TTuple<int,FObjectKey>,TDefaultMapHashableKeyFuncs<int,FObjectKey,0>,FDefaultSetAllocator>
                    *)&this->_padding_,(uint)local_78,
                   (TPairInitializer<int_const_&,FObjectKey_const_&> *)(ulonglong)uVar6,
                   (bool *)&local_48);
      }
      else {
        FEntityGroupBuilder::ReportUsedGroupIndex(param_4,*(int *)(lVar8 + 8));
      }
LAB_146872f5c:
      local_88.GroupIndex = *puVar1;
      local_88.PolicyKey.Index = (param_4->PolicyKey).Index;
      local_88._8_4_ = local_88._8_4_ & 0xffffff00;
      FEntityGroupBuilder::AddEntityToGroup(param_4,local_res8,&local_88);
      lVar20 = lVar20 + 1;
      *(ulonglong *)local_res20 = CONCAT44(local_88.GroupIndex,local_88.PolicyKey.Index);
      *(undefined4 *)((longlong)local_res20 + 8) = local_88._8_4_;
      local_res20 = (TWrite<UE::MovieScene::FEntityGroupID>)((longlong)local_res20 + 0xc);
      pFVar14 = local_98;
      pFVar18 = local_90;
      EVar17 = local_a4;
    } while (lVar20 < (longlong)uVar19);
  }
  LOCK();
  pFVar18->ScheduledAccessCount = (atomic<int>)((int)pFVar18->ScheduledAccessCount + -1);
  UNLOCK();
  if (local_a0 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar18->ReadWriteLock);
  }
  LOCK();
  pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar17 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
  }
  return;
}

// VisitLinkedEntities @ 146873010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityGroupingHandlerImpl<UE::MovieScene::FPropertyInstantiatorGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FMovieScenePropertyBinding>
::VisitLinkedEntities
          (TEntityGroupingHandlerImpl<UE::MovieScene::FPropertyInstantiatorGroupingPolicy,TIntegerSequence<int,0,1>,UObject_*,FMovieScenePropertyBinding>
           *this,FEntityAllocationProxy *param_1,TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TWrite<UE::MovieScene::FEntityGroupID> param_3,FEntityGroupBuilder *param_4)

{
  ulonglong *puVar1;
  code *pcVar2;
  FEntityGroupBuilder *this_00;
  bool bVar3;
  FEntityAllocation *pFVar4;
  ulonglong *puVar5;
  uint uVar6;
  uint uVar7;
  FComponentHeader *pFVar8;
  uint *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  EComponentHeaderLockMode EVar12;
  int iVar13;
  FComponentHeader *pFVar14;
  FComponentHeader *pFVar15;
  longlong lVar16;
  FMovieSceneEntityID local_res8 [4];
  TWrite<UE::MovieScene::FEntityGroupID> local_res20;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined4 local_a8;
  int local_a4;
  EComponentHeaderLockMode local_a0;
  EComponentHeaderLockMode local_9c;
  FComponentHeader *local_98;
  FComponentHeader *local_90;
  FEntityGroupID local_88;
  undefined1 local_78 [8];
  uchar *local_70;
  ulonglong local_68;
  uchar *local_60;
  ulonglong *local_58;
  undefined4 *local_50;
  ulonglong *local_48;
  ulonglong *local_40;
  
  this_00 = param_4;
  pFVar4 = FEntityAllocationProxy::GetAllocation(param_1);
  uVar11 = (ulonglong)pFVar4->Size;
  pFVar15 = pFVar4->ComponentHeaders;
  pFVar14 = pFVar15 + pFVar4->NumComponents;
  for (; pFVar15 != pFVar14; pFVar15 = pFVar15 + 1) {
    local_90 = pFVar15;
    if ((pFVar15->ComponentType).Value == *(ushort *)&(this->Components).field_0x2)
    goto LAB_1468730b1;
  }
  pFVar15 = (FComponentHeader *)0x0;
  local_90 = (FComponentHeader *)0x0;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1468730b1:
  local_9c = pFVar4->LockMode;
  if (local_9c == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
  }
  LOCK();
  pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar14 = pFVar4->ComponentHeaders;
  local_70 = pFVar15->Components;
  pFVar8 = pFVar14 + pFVar4->NumComponents;
  for (; pFVar14 != pFVar8; pFVar14 = pFVar14 + 1) {
    local_98 = pFVar14;
    if ((pFVar14->ComponentType).Value == *(ushort *)&this->Components) goto LAB_146873134;
  }
  pFVar14 = (FComponentHeader *)0x0;
  local_98 = (FComponentHeader *)0x0;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_146873134:
  EVar12 = pFVar4->LockMode;
  local_a0 = EVar12;
  if (EVar12 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
  }
  LOCK();
  pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + 1);
  UNLOCK();
  local_60 = pFVar14->Components;
  local_68 = uVar11;
  if (uVar11 != 0) {
    lVar16 = 0;
    param_4 = (FEntityGroupBuilder *)0x0;
    local_res20 = param_3;
    do {
      local_b8 = *(ulonglong *)(local_60 + lVar16 * 8);
      uVar11 = *(ulonglong *)(local_70 + 8 + (longlong)param_4);
      local_res8[0].Value = *(ushort *)((longlong)param_2 + lVar16 * 2);
      local_a8 = 0xffffffff;
      uVar6 = ((uint)(local_b8 >> 0x14) & 0xffff ^ (uint)(local_b8 >> 4)) * -0x7a143595;
      uVar7 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      uVar7 = uVar7 >> 0x10 ^ uVar7;
      local_b0 = uVar11;
      uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar11);
      uVar7 = uVar7 * 0x40 + -0x61c88647 + (int)(uVar11 >> 0x20) + (uVar7 >> 2) + uVar6 ^ uVar7;
      if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
        plVar10 = &this->_padding_;
        if ((longlong *)this->_padding_ != (longlong *)0x0) {
          plVar10 = (longlong *)this->_padding_;
        }
        iVar13 = *(int *)((longlong)plVar10 + (ulonglong)((int)this->_padding_ - 1U & uVar7) * 4);
        if (iVar13 != -1) {
          do {
            puVar5 = (ulonglong *)((longlong)iVar13 * 0x20 + this->_padding_);
            if ((*puVar5 == local_b8) && (puVar5[1] == local_b0)) {
              if ((iVar13 != -1) && (puVar5 != (ulonglong *)0x0)) goto LAB_14687329a;
              break;
            }
            iVar13 = (int)puVar5[3];
          } while (iVar13 != -1);
        }
      }
      local_58 = &local_b8;
      local_50 = &local_a8;
      TSet<TTuple<TTuple<UObject_*,FName>,int>,TDefaultMapHashableKeyFuncs<TTuple<UObject_*,FName>,int,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TPairInitializer<TTuple<UObject_*,FName>_const_&,int_&&>_>
                ((TSet<TTuple<TTuple<UObject_*,FName>,int>,TDefaultMapHashableKeyFuncs<TTuple<UObject_*,FName>,int,0>,FDefaultSetAllocator>
                  *)&this->_padding_,(uint)&local_a4,
                 (TPairInitializer<TTuple<UObject_*,FName>_const_&,int_&&> *)(ulonglong)uVar7,
                 (bool *)&local_58);
      puVar5 = (ulonglong *)((longlong)local_a4 * 0x20 + this->_padding_);
LAB_14687329a:
      puVar1 = puVar5 + 2;
      if ((int)puVar5[2] == -1) {
        uVar6 = FEntityGroupBuilder::AllocateGroupIndex(this_00);
        *(uint *)puVar1 = uVar6;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar10 = &this->_padding_;
          if ((longlong *)this->_padding_ != (longlong *)0x0) {
            plVar10 = (longlong *)this->_padding_;
          }
          uVar7 = *(uint *)((longlong)plVar10 + (ulonglong)((int)this->_padding_ - 1U & uVar6) * 4);
          if (uVar7 != 0xffffffff) {
            do {
              puVar9 = (uint *)((longlong)(int)uVar7 * 0x20 + this->_padding_);
              if (*puVar9 == uVar6) {
                if (puVar9 != (uint *)0x0) goto LAB_146873351;
                break;
              }
              uVar7 = puVar9[6];
            } while (uVar7 != 0xffffffff);
          }
        }
        local_40 = &local_b8;
        local_48 = puVar1;
        TSet<TTuple<int,TTuple<UObject_*,FName>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FName>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TPairInitializer<int_const_&,TTuple<UObject_*,FName>_const_&>_>
                  ((TSet<TTuple<int,TTuple<UObject_*,FName>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UObject_*,FName>,0>,FDefaultSetAllocator>
                    *)&this->_padding_,(uint)local_78,
                   (TPairInitializer<int_const_&,TTuple<UObject_*,FName>_const_&> *)(ulonglong)uVar6
                   ,(bool *)&local_48);
      }
      else {
        FEntityGroupBuilder::ReportUsedGroupIndex(this_00,(int)puVar5[2]);
      }
LAB_146873351:
      local_88.GroupIndex = (int)*puVar1;
      local_88.PolicyKey.Index = (this_00->PolicyKey).Index;
      local_88._8_4_ = local_88._8_4_ & 0xffffff00;
      FEntityGroupBuilder::AddEntityToGroup(this_00,local_res8,&local_88);
      lVar16 = lVar16 + 1;
      *(ulonglong *)local_res20 = CONCAT44(local_88.GroupIndex,local_88.PolicyKey.Index);
      *(undefined4 *)((longlong)local_res20 + 8) = local_88._8_4_;
      local_res20 = (TWrite<UE::MovieScene::FEntityGroupID>)((longlong)local_res20 + 0xc);
      param_4 = (FEntityGroupBuilder *)((longlong)&param_4[1].Owner + 4);
      pFVar14 = local_98;
      pFVar15 = local_90;
      EVar12 = local_a0;
    } while (lVar16 < (longlong)local_68);
  }
  LOCK();
  pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + -1);
  UNLOCK();
  if (local_9c == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
  }
  LOCK();
  pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar12 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
  }
  return;
}

