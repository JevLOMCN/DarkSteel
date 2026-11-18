// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 4

// FindOrAddImpl<FGuid_const_&,UE::Anim::FAnimationEvaluationTask_const_&> @ 146493e70

FAnimationEvaluationTask * __thiscall
TMapBase<FGuid,UE::Anim::FAnimationEvaluationTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>_>
::FindOrAddImpl<FGuid_const_&,UE::Anim::FAnimationEvaluationTask_const_&>
          (TMapBase<FGuid,UE::Anim::FAnimationEvaluationTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>_>
           *this,uint param_1,FGuid *param_2,FAnimationEvaluationTask *param_3)

{
  int iVar1;
  longlong lVar2;
  FAnimationEvaluationTask *pFVar3;
  int local_res8 [2];
  FGuid *local_18;
  FAnimationEvaluationTask *local_10;
  
  iVar1 = TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = (longlong)iVar1 * 0x70 + *(longlong *)&(this->Pairs).Elements, lVar2 == 0)) {
    local_18 = param_2;
    local_10 = param_3;
    TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TPairInitializer<FGuid_const_&,UE::Anim::FAnimationEvaluationTask_const_&>_>
              (&this->Pairs,(uint)local_res8,
               (TPairInitializer<FGuid_const_&,UE::Anim::FAnimationEvaluationTask_const_&> *)
               (ulonglong)param_1,(bool *)&local_18);
    pFVar3 = (FAnimationEvaluationTask *)
             (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x70 + 0x10);
  }
  else {
    pFVar3 = (FAnimationEvaluationTask *)(lVar2 + 0x10);
  }
  return pFVar3;
}

// FindOrAddImpl<TWeakObjectPtr<ULevel,FWeakObjectPtr>_> @ 146493f00

FConstraintTickFunction * __thiscall
TMapBase<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>_>
::FindOrAddImpl<TWeakObjectPtr<ULevel,FWeakObjectPtr>_>
          (TMapBase<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>_>
           *this,uint param_1,TWeakObjectPtr<ULevel,FWeakObjectPtr> *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      local_res8 = param_2->WeakPtr;
      local_res20 = *(FWeakObjectPtr *)
                     ((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
      bVar2 = TWeakObjectPtr<ULevel_const_,FWeakObjectPtr>::UEOpEquals<ULevel,bool>
                        ((TWeakObjectPtr<ULevel_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<ULevel,FWeakObjectPtr> *)&local_res8);
      lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x50;
      if (bVar2) {
        if (lVar3 != 0) {
          return (FConstraintTickFunction *)(lVar3 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x48);
    }
  }
  local_res20 = (FWeakObjectPtr)param_2;
  TSet<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<ULevel,FWeakObjectPtr>_&&>_>
            (&this->Pairs,(uint)&local_res8,
             (TKeyInitializer<TWeakObjectPtr<ULevel,FWeakObjectPtr>_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FConstraintTickFunction *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8.ObjectIndex * 0x50);
}

// Find @ 1464af8e0

FTransformableInfo * __thiscall
TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
::Find(TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
       *this,UClass *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FTransformableInfo *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x80 + *(longlong *)&(this->Pairs).Elements);
        if ((UClass *)*plVar2 == param_1) {
          pFVar4 = (FTransformableInfo *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FTransformableInfo *)(plVar2 + 2);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[0xe];
      } while (iVar1 != -1);
    }
  }
  return (FTransformableInfo *)0x0;
}

// Find @ 1464af980

FAnimationEvaluator * __thiscall
TMapBase<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,0>_>
::Find(TMapBase<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,0>_>
       *this,USkeletalMeshComponent *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FAnimationEvaluator *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x1a8 + *(longlong *)&(this->Pairs).Elements);
        if ((USkeletalMeshComponent *)*plVar2 == param_1) {
          pFVar4 = (FAnimationEvaluator *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FAnimationEvaluator *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[0x34];
      } while (iVar1 != -1);
    }
  }
  return (FAnimationEvaluator *)0x0;
}

