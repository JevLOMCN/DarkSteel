// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 23

// FIKRigProcessor @ 14df17c00

FIKRigProcessor * __thiscall FIKRigProcessor::FIKRigProcessor(FIKRigProcessor *this)

{
  (this->GoalContainer).bRigNeedsInitialized = true;
  (this->Log).LogName.ComparisonIndex = 0;
  (this->Log).LogName.Number = 0;
  (this->Log).Errors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Log).Errors.ArrayNum = 0;
  (this->Log).Errors.ArrayMax = 0;
  (this->Log).Warnings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Log).Warnings.ArrayNum = 0;
  (this->Log).Warnings.ArrayMax = 0;
  (this->Log).Messages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Log).Messages.ArrayNum = 0;
  (this->Log).Messages.ArrayMax = 0;
  (this->Solvers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Solvers).ArrayNum = 0;
  (this->Solvers).ArrayMax = 0;
  (this->GoalContainer).Goals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GoalContainer).Goals.ArrayNum = 0;
  (this->GoalContainer).Goals.ArrayMax = 0;
  *(undefined8 *)&this->GoalBones = 0;
  *(undefined8 *)&(this->GoalBones).field_0x8 = 0;
  *(undefined8 *)&(this->GoalBones).field_0x20 = 0;
  *(undefined4 *)&(this->GoalBones).field_0x28 = 0;
  *(undefined4 *)&(this->GoalBones).field_0x2c = 0x80;
  *(undefined4 *)&(this->GoalBones).field_0x34 = 0;
  *(undefined4 *)&(this->GoalBones).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GoalBones).field_0x40 = 0;
  *(undefined4 *)&(this->GoalBones).field_0x48 = 0;
  (this->Skeleton).BoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeleton).BoneNames.ArrayNum = 0;
  (this->Skeleton).BoneNames.ArrayMax = 0;
  (this->Skeleton).ParentIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeleton).ParentIndices.ArrayNum = 0;
  (this->Skeleton).ParentIndices.ArrayMax = 0;
  (this->Skeleton).ExcludedBones.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeleton).ExcludedBones.ArrayNum = 0;
  (this->Skeleton).ExcludedBones.ArrayMax = 0;
  (this->Skeleton).CurrentPoseGlobal.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeleton).CurrentPoseGlobal.ArrayNum = 0;
  (this->Skeleton).CurrentPoseGlobal.ArrayMax = 0;
  (this->Skeleton).CurrentPoseLocal.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeleton).CurrentPoseLocal.ArrayNum = 0;
  (this->Skeleton).CurrentPoseLocal.ArrayMax = 0;
  (this->Skeleton).RefPoseGlobal.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeleton).RefPoseGlobal.ArrayNum = 0;
  (this->Skeleton).RefPoseGlobal.ArrayMax = 0;
  (this->Skeleton).CachedEndOfBranchIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeleton).CachedEndOfBranchIndices.ArrayNum = 0;
  (this->Skeleton).CachedEndOfBranchIndices.ArrayMax = 0;
  this->bInitialized = false;
  this->bTriedToInitialize = false;
  return this;
}

// ~FIKRigProcessor @ 14df1bec0

void __thiscall FIKRigProcessor::~FIKRigProcessor(FIKRigProcessor *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  FIKRigSkeleton::~FIKRigSkeleton(&this->Skeleton);
  *(undefined4 *)&(this->GoalBones).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GoalBones).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FGoalBone>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FGoalBone>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FGoalBone>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GoalBones);
  pFVar2 = (this->GoalContainer).Goals.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->Solvers).AllocatorInstance.Data,(this->Solvers).ArrayNum);
  pFVar2 = (this->Solvers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FIKRigLogger::~FIKRigLogger(&this->Log);
  return;
}

// operator= @ 14df1e5c0

FIKRigProcessor * __thiscall
FIKRigProcessor::operator=(FIKRigProcessor *this,FIKRigProcessor *param_1)

{
  TMap<FName,FGoalBone,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGoalBone,0>_>
  *this_00;
  undefined1 *puVar1;
  undefined1 *this_01;
  int iVar2;
  
  (this->Log).LogName = (param_1->Log).LogName;
  TArray<FText,TSizedDefaultAllocator<32>_>::operator=(&(this->Log).Errors,&(param_1->Log).Errors);
  TArray<FText,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Log).Warnings,&(param_1->Log).Warnings);
  TArray<FText,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Log).Messages,&(param_1->Log).Messages);
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::operator=(&this->Solvers,&param_1->Solvers);
  (this->GoalContainer).bRigNeedsInitialized = (param_1->GoalContainer).bRigNeedsInitialized;
  TArray<FIKRigGoal,TSizedDefaultAllocator<32>_>::operator=
            (&(this->GoalContainer).Goals,&(param_1->GoalContainer).Goals);
  this_00 = &this->GoalBones;
  if (this_00 != &param_1->GoalBones) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->GoalBones).field_0x38,
               (int *)&(this->GoalBones).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->GoalBones).field_0x38,
               *(int *)&(param_1->GoalBones).field_0x48);
    iVar2 = *(int *)&(param_1->GoalBones).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,FGoalBone>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,FGoalBone>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,iVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,iVar2,(ForAnyElementType *)this_00,(int *)&(this->GoalBones).field_0x8,
               (int *)&(this->GoalBones).field_0xc);
    puVar1 = &(param_1->GoalBones).field_0x10;
    this_01 = &(this->GoalBones).field_0x10;
    *(undefined4 *)&(this->GoalBones).field_0x30 = *(undefined4 *)&(param_1->GoalBones).field_0x30;
    *(undefined4 *)&(this->GoalBones).field_0x34 = *(undefined4 *)&(param_1->GoalBones).field_0x34;
    if (this_01 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar2 != 0) {
      memcpy(*(void **)this_00,*(void **)&param_1->GoalBones,(longlong)iVar2 << 5);
    }
  }
  FIKRigSkeleton::operator=(&this->Skeleton,&param_1->Skeleton);
  this->bInitialized = param_1->bInitialized;
  this->bTriedToInitialize = param_1->bTriedToInitialize;
  return this;
}

// ApplyGoalsFromOtherContainer @ 14df25360

void __thiscall
FIKRigProcessor::ApplyGoalsFromOtherContainer(FIKRigProcessor *this,FIKRigGoalContainer *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FIKRigGoal *pFVar4;
  FIKRigGoal *pFVar5;
  undefined1 local_res10 [8];
  
  iVar1 = (param_1->Goals).ArrayNum;
  pFVar4 = (FIKRigGoal *)(param_1->Goals).AllocatorInstance.Data;
  pFVar5 = pFVar4 + iVar1;
  while( true ) {
    if ((param_1->Goals).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FIKRigGoal_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar4 == pFVar5) break;
    if (this->bInitialized == false) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_727633314675949218>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
                         ,0x15e,"bInitialized");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      FIKRigGoalContainer::SetIKGoal(&this->GoalContainer,pFVar4);
    }
    pFVar4 = pFVar4 + 1;
  }
  return;
}

// CopyAllSettingsFromAsset @ 14df2c750

void __thiscall
FIKRigProcessor::CopyAllSettingsFromAsset(FIKRigProcessor *this,UIKRigDefinition *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FIKRigSolverBase *pFVar8;
  UPackage *pUVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 local_res10 [8];
  
  if (((param_1 != (UIKRigDefinition *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) &&
     (this->bInitialized != false)) {
    pFVar10 = (param_1->Goals).AllocatorInstance.Data;
    iVar1 = (param_1->Goals).ArrayNum;
    pFVar2 = pFVar10 + (longlong)iVar1 * 8;
    while( true ) {
      if ((param_1->Goals).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UIKRigEffectorGoal_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar10 == pFVar2) break;
      if (this->bInitialized == false) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_727633314675949208>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
                           ,0x168,"bInitialized");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        FIKRigGoalContainer::SetIKGoal(&this->GoalContainer,*(UIKRigEffectorGoal **)pFVar10);
      }
      pFVar10 = pFVar10 + 8;
    }
    if (((this->Solvers).ArrayNum != (param_1->SolverStack).ArrayNum) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Solvers.Num() == AssetSolverStructs.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
                           ,0x1bb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar11 = 0;
    if (0 < (this->Solvers).ArrayNum) {
      lVar12 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar11 < (param_1->SolverStack).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = (param_1->SolverStack).AllocatorInstance.Data;
        pFVar8 = UE::StructUtils::GetStructRef<FIKRigSolverBase>
                           (*(UScriptStruct **)(pFVar2 + lVar12),*(void **)(pFVar2 + lVar12 + 8));
        uVar7 = 0;
        if ((int)uVar11 < (this->Solvers).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = (this->Solvers).AllocatorInstance.Data;
        plVar3 = *(longlong **)(pFVar2 + lVar12 + 8);
        lVar4 = *(longlong *)(pFVar2 + lVar12);
        if ((plVar3 == (longlong *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Memory != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                               ,0xd1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((lVar4 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Struct != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                               ,0xd2,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar9 = Z_Construct_UPackage__Script_IKRig();
          Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FIKRigSolverBase,(UObject *)pUVar9,
                               L"IKRigSolverBase");
          if (Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton !=
              (UScriptStruct *)0x0) goto LAB_14df2c9ac;
LAB_14df2c9d0:
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                             ,0xd3,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
LAB_14df2c9ac:
          iVar1 = (int)(Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton)->
                       _padding_;
          if ((*(int *)(lVar4 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
              &(Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton)->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (!bVar6) goto LAB_14df2c9d0;
        }
        (**(code **)(*plVar3 + 0x28))(plVar3,pFVar8);
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0x10;
      } while ((int)uVar11 < (this->Solvers).ArrayNum);
    }
  }
  return;
}

// GetGoalBone @ 14df385c0

FGoalBone * __thiscall FIKRigProcessor::GetGoalBone(FIKRigProcessor *this,FName *param_1)

{
  TTuple<FName,FGoalBone> *pTVar1;
  FGoalBone *pFVar2;
  
  pTVar1 = TSet<TTuple<FName,FGoalBone>,TDefaultMapHashableKeyFuncs<FName,FGoalBone,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FGoalBone>,TDefaultMapHashableKeyFuncs<FName,FGoalBone,0>,FDefaultSetAllocator>
                   *)&this->GoalBones,*param_1);
  pFVar2 = (FGoalBone *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,FGoalBone> *)0x0) {
    pFVar2 = (FGoalBone *)0x0;
  }
  return pFVar2;
}

// GetGoalContainer @ 14df385f0

FIKRigGoalContainer * __thiscall FIKRigProcessor::GetGoalContainer(FIKRigProcessor *this)

{
  code *pcVar1;
  bool bVar2;
  FIKRigGoalContainer *pFVar3;
  
  if (this->bInitialized != false) {
    return &this->GoalContainer;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_727633314675949108>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
                     ,0x1cc,"bInitialized");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIKRigGoalContainer *)(*pcVar1)();
    return pFVar3;
  }
  return &this->GoalContainer;
}

// GetGoalContainer @ 14df38650

FIKRigGoalContainer * __thiscall FIKRigProcessor::GetGoalContainer(FIKRigProcessor *this)

{
  code *pcVar1;
  bool bVar2;
  FIKRigGoalContainer *pFVar3;
  
  if (this->bInitialized != false) {
    return &this->GoalContainer;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_727633314675949114>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
                     ,0x1c6,"bInitialized");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIKRigGoalContainer *)(*pcVar1)();
    return pFVar3;
  }
  return &this->GoalContainer;
}

// GetOutputPoseGlobal @ 14df3b0b0

void __thiscall
FIKRigProcessor::GetOutputPoseGlobal
          (FIKRigProcessor *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (param_1,&(this->Skeleton).CurrentPoseGlobal);
  return;
}

// GetSkeleton @ 14df400d0

FIKRigSkeleton * __thiscall FIKRigProcessor::GetSkeleton(FIKRigProcessor *this)

{
  return &this->Skeleton;
}

// GetSkeletonWriteable @ 14df400e0

FIKRigSkeleton * __thiscall FIKRigProcessor::GetSkeletonWriteable(FIKRigProcessor *this)

{
  return &this->Skeleton;
}

// GetSolver @ 14df400f0

FIKRigSolverBase * __thiscall FIKRigProcessor::GetSolver(FIKRigProcessor *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FIKRigSolverBase *pFVar7;
  UPackage *pUVar8;
  
  if ((param_1 < 0) || ((this->Solvers).ArrayNum <= param_1)) {
    return (FIKRigSolverBase *)0x0;
  }
  uVar6 = 0;
  if (param_1 < (this->Solvers).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FIKRigSolverBase *)(*pcVar4)();
    return pFVar7;
  }
  pFVar2 = (this->Solvers).AllocatorInstance.Data;
  pFVar7 = *(FIKRigSolverBase **)(pFVar2 + (longlong)param_1 * 0x10 + 8);
  if ((pFVar7 != (FIKRigSolverBase *)0x0) &&
     (pUVar3 = *(UScriptStruct **)(pFVar2 + (longlong)param_1 * 0x10),
     pUVar3 != (UScriptStruct *)0x0)) {
    if (Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar8 = Z_Construct_UPackage__Script_IKRig();
      Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIKRigSolverBase,(UObject *)pUVar8,
                           L"IKRigSolverBase");
    }
    if (pUVar3 == Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton) {
      return pFVar7;
    }
    if (Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar8 = Z_Construct_UPackage__Script_IKRig();
      Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIKRigSolverBase,(UObject *)pUVar8,
                           L"IKRigSolverBase");
      if (Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton == (UScriptStruct *)0x0)
      {
        return (FIKRigSolverBase *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton)->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      return pFVar7;
    }
  }
  return (FIKRigSolverBase *)0x0;
}

// Initialize @ 14df435f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FIKRigProcessor::Initialize
          (FIKRigProcessor *this,UIKRigDefinition *param_1,USkeletalMesh *param_2,
          FIKRigGoalContainer *param_3)

{
  TMap<FName,FGoalBone,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGoalBone,0>_>
  *this_00;
  ITextData *pIVar1;
  code *pcVar2;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar3;
  USkeletalMesh *pUVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  FIKRigSolverBase *pFVar11;
  TTuple<FName,FGoalBone> *pTVar12;
  FText *pFVar13;
  FText *pFVar14;
  FText *pFVar15;
  UPackage *pUVar16;
  FString *pFVar17;
  byte bVar18;
  ulonglong uVar19;
  FInstancedStruct *this_01;
  undefined1 *puVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  FName FVar23;
  FName *pFVar24;
  FBoneChain *this_02;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  UIKRigDefinition *pUVar27;
  longlong lVar28;
  uint uVar29;
  uint *puVar31;
  longlong *plVar32;
  FName *pFVar33;
  longlong *plVar34;
  uint uVar35;
  UIKRigDefinition *pUVar36;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar37;
  FIKRigProcessor *pFVar38;
  FBoneChain *pFVar39;
  undefined1 auStackY_7c8 [32];
  undefined1 local_788;
  undefined1 local_787;
  undefined1 local_786;
  undefined1 local_785;
  undefined1 local_784;
  undefined1 local_783;
  undefined1 local_782 [2];
  UIKRigDefinition *local_780;
  FIKRigProcessor *local_778;
  uint local_770;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_768;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_758;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_748;
  FIKRigSkeleton *local_738;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *local_730;
  longlong *local_728;
  undefined8 uStack_720;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  int local_700;
  undefined4 uStack_6fc;
  FName local_6f8;
  int local_6f0;
  undefined4 local_6ec;
  longlong *local_6e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_6e0;
  int local_6c0;
  undefined4 uStack_6bc;
  TArray<int,TSizedDefaultAllocator<32>_> local_6b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6a8;
  FIKRigInputSkeleton local_688;
  FIKRigInputSkeleton local_650;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_618;
  FName local_5f8;
  FName local_5f0;
  FScriptContainerElement *local_5e8;
  USkeletalMesh *local_5e0;
  FName local_5d8;
  FName local_5d0;
  FName local_5c8;
  undefined8 local_5c0;
  undefined1 local_5b8 [8];
  undefined1 local_5b0 [12];
  FName local_5a4;
  FName local_59c;
  longlong local_590;
  FName local_588;
  FName local_580;
  undefined1 local_578 [12];
  uint uStack_56c;
  TBitArray<FDefaultBitArrayAllocator> *local_568;
  undefined8 uStack_560;
  longlong local_558;
  int iStack_550;
  undefined4 uStack_54c;
  FString local_548;
  FString local_538;
  FTextFormat local_528;
  FText local_518;
  FString local_508;
  FTextFormat local_4f8;
  FText local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FTextFormat local_488;
  FText local_478;
  FString local_468;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *local_458;
  FName *local_450;
  FFormatArgumentValue local_448;
  FFormatArgumentValue local_428;
  undefined4 local_408;
  FText local_3f8;
  FFormatArgumentValue local_3e8;
  undefined4 local_3c8;
  FText local_3b8;
  FText local_3a8;
  FString local_398;
  FText local_388;
  FText local_378;
  FText local_368;
  FText local_358;
  FText local_348;
  FText local_338;
  FText local_328;
  FText local_318;
  FText local_308;
  FText local_2f8;
  FText local_2e8;
  FText local_2d8;
  TRangedForIterator local_2c8;
  FText local_298;
  FTextFormat local_288;
  FText local_278;
  FText local_268;
  FText local_258;
  FTextFormat local_248;
  FText local_238;
  FTextFormat local_228;
  FText local_218;
  FText local_208;
  FTextFormat local_1f8;
  FText local_1e8;
  FText local_1d8;
  FTextFormat local_1c8;
  FTextFormat local_1b8;
  FText local_1a8;
  FText local_198;
  FTextFormat local_188;
  FText local_178;
  FText local_168;
  FTextFormat local_158;
  FText local_148;
  FText local_138;
  FText local_128 [2];
  undefined4 local_fc;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  longlong *plVar30;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_7c8;
  this->bInitialized = false;
  if (param_1 == (UIKRigDefinition *)0x0) {
    return;
  }
  if (this->bTriedToInitialize != false) {
    return;
  }
  this->bTriedToInitialize = true;
  local_688.BoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_688.BoneNames.ArrayNum = 0;
  local_688.BoneNames.ArrayMax = 0;
  local_688.ParentIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_688.ParentIndices.ArrayNum = 0;
  local_688.ParentIndices.ArrayMax = 0;
  local_688.LocalRefPose.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_688.LocalRefPose.ArrayNum = 0;
  local_688.LocalRefPose.ArrayMax = 0;
  local_688.SkeletalMeshName.ComparisonIndex.Value = 0;
  local_688.SkeletalMeshName.Number = 0;
  local_780 = param_1;
  local_778 = this;
  local_5e0 = param_2;
  FIKRigInputSkeleton::Initialize(&local_688,param_2);
  local_738 = &this->Skeleton;
  FIKRigSkeleton::SetInputSkeleton(local_738,&local_688,&(param_1->Skeleton).ExcludedBones);
  if (local_688.LocalRefPose.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_688.LocalRefPose.AllocatorInstance.Data);
  }
  if (local_688.ParentIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_688.ParentIndices.AllocatorInstance.Data);
  }
  if (local_688.BoneNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_688.BoneNames.AllocatorInstance.Data);
  }
  if ((param_1->Skeleton).BoneNames.ArrayNum == 0) {
    local_5a4 = (FName)param_1->_padding_;
    ::FName::ToString(&local_5a4,&local_4a8);
    pFVar8 = FText::FromString(&local_268,&local_4a8);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_358,L"IKRigProcessor",L"NoSkeleton",
                        L"Trying to initialize IK Rig, \'{0}\' that has no skeleton.");
    pFVar10 = FTextFormat::FTextFormat(&local_1b8,pFVar9,Default);
    pFVar8 = FText::Format<FText>(&local_368,pFVar10,pFVar8);
    FIKRigLogger::LogError(&this->Log,pFVar8);
    if (local_368.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_368.TextData.Reference + 0x10))();
    }
    if (local_358.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
    }
    if (local_4a8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
    return;
  }
  local_650.BoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_650.BoneNames.ArrayNum = 0;
  local_650.BoneNames.ArrayMax = 0;
  local_650.ParentIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_650.ParentIndices.ArrayNum = 0;
  local_650.ParentIndices.ArrayMax = 0;
  local_650.LocalRefPose.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_650.LocalRefPose.ArrayNum = 0;
  local_650.LocalRefPose.ArrayMax = 0;
  local_650.SkeletalMeshName.ComparisonIndex.Value = 0;
  local_650.SkeletalMeshName.Number = 0;
  FIKRigInputSkeleton::Initialize(&local_650,param_2);
  bVar5 = IsIKRigCompatibleWithSkeleton(param_1,&local_650,&this->Log);
  if (local_650.LocalRefPose.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_650.LocalRefPose.AllocatorInstance.Data);
  }
  if (local_650.ParentIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_650.ParentIndices.AllocatorInstance.Data);
  }
  if (local_650.BoneNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_650.BoneNames.AllocatorInstance.Data);
  }
  if (!bVar5) {
    local_59c = (FName)param_1->_padding_;
    ::FName::ToString(&local_59c,&local_498);
    pFVar8 = FText::FromString(&local_198,&local_498);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_338,L"IKRigProcessor",L"SkeletonMissingRequiredBones",
                        L"Trying to initialize IKRig, \'{0}\' with a Skeleton that is missing required bones. See prior warnings."
                       );
    pFVar10 = FTextFormat::FTextFormat(&local_188,pFVar9,Default);
    pFVar8 = FText::Format<FText>(&local_348,pFVar10,pFVar8);
    FIKRigLogger::LogError(&this->Log,pFVar8);
    if (local_348.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_348.TextData.Reference + 0x10))();
    }
    if (local_338.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_338.TextData.Reference + 0x10))();
    }
    if (local_498.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
    return;
  }
  FIKRigGoalContainer::Empty(&this->GoalContainer);
  if ((param_3->Goals).ArrayNum < 1) {
    FIKRigGoalContainer::FillWithGoalArray
              (&this->GoalContainer,
               (TArray<UIKRigEffectorGoal_*,TSizedDefaultAllocator<32>_> *)&param_1->Goals);
  }
  else {
    FIKRigGoalContainer::operator=(&this->GoalContainer,param_3);
  }
  iVar21 = (param_1->SolverStack).ArrayNum;
  pFVar22 = (param_1->SolverStack).AllocatorInstance.Data;
  pFVar26 = pFVar22 + (longlong)iVar21 * 0x10;
  local_f8._0_8_ = 0;
  local_f8._8_8_ = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0;
  while( true ) {
    if ((param_1->SolverStack).ArrayNum != iVar21) {
      local_788 = 0;
      `TCheckedPointerIterator<FInstancedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_788);
    }
    if (pFVar22 == pFVar26) break;
    pFVar11 = UE::StructUtils::GetStructRef<FIKRigSolverBase>
                        (*(UScriptStruct **)pFVar22,*(void **)(pFVar22 + 8));
    (**(code **)(pFVar11->_padding_ + 0x20))(pFVar11,local_f8);
    pFVar22 = pFVar22 + 0x10;
  }
  local_618.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
  local_a8._0_8_ = 0;
  local_a8._8_8_ = 0;
  local_88 = (uint *)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = (ForElementType<FSetElementId>)0x0;
  local_60 = 0;
  local_618._padding_._0_4_ = 0;
  local_618._padding_._4_4_ = 1;
  local_618.UnvisitedBitMask = 0xffffffff;
  local_618.CurrentBitIndex = 0;
  local_618.BaseBitIndex = 0;
  if (local_d0 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_618);
  }
  uVar6 = local_d0;
  TStack_6e0._padding_ = CONCAT44(local_618._padding_._4_4_,(undefined4)local_618._padding_);
  local_6e8 = (longlong *)local_f8;
  TStack_6e0._16_8_ = CONCAT44(local_618.CurrentBitIndex,local_618.UnvisitedBitMask);
  TStack_6e0._24_8_ = CONCAT44(local_618._28_4_,local_618.BaseBitIndex);
  local_6a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
  bVar18 = (byte)local_d0 & 0x1f;
  local_6c0 = local_f8._8_4_ - local_c4;
  local_6a8._padding_._0_4_ = (int)local_d0 >> 5;
  local_6a8._padding_._4_4_ = 1 << bVar18;
  local_6a8.UnvisitedBitMask = -1 << bVar18;
  TStack_6e0.Array = local_618.Array;
  local_6a8.BaseBitIndex = local_d0 & 0xffffffe0;
  local_6a8.CurrentBitIndex = local_d0;
  local_568 = local_618.Array;
  iStack_550 = local_f8._8_4_ - local_c4;
  uStack_54c = uStack_6bc;
  local_578._0_8_ = local_6e8;
  unique0x100021d7 = TStack_6e0._padding_;
  uStack_560 = TStack_6e0._16_8_;
  local_558 = TStack_6e0._24_8_;
  if (((int)local_d0 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar6 != local_d0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_6a8);
  }
  uStack_720 = CONCAT44(local_6a8._padding_._4_4_,(int)local_6a8._padding_);
  local_728 = (longlong *)local_f8;
  uStack_710 = CONCAT44(local_6a8.CurrentBitIndex,local_6a8.UnvisitedBitMask);
  uStack_708 = CONCAT44(local_6a8._28_4_,local_6a8.BaseBitIndex);
  local_700 = local_f8._8_4_ - local_c4;
  pTStack_718 = local_6a8.Array;
  local_2c8._44_4_ = uStack_6fc;
  local_2c8.InitialNum = local_700;
  local_2c8._padding_ = (longlong)local_6a8.Array;
  local_2c8._padding_ = (longlong)local_728;
  local_2c8._padding_ = uStack_720;
  local_2c8._padding_ = uStack_710;
  local_2c8._padding_ = uStack_708;
  bVar5 = TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!=((TRangedForIterator *)local_578,&local_2c8);
  if (bVar5) {
    do {
      local_590 = *(longlong *)(*(longlong *)local_578._0_8_ + (longlong)uStack_560._4_4_ * 0x10);
      pFVar22 = (this->GoalContainer).Goals.AllocatorInstance.Data;
      pFVar26 = pFVar22 + (longlong)(this->GoalContainer).Goals.ArrayNum * 0xb0;
      for (; pFVar22 != pFVar26; pFVar22 = pFVar22 + 0xb0) {
        if (*(longlong *)pFVar22 == local_590) goto LAB_14df43be6;
      }
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_a8,
                 (FName *)local_5b8,(bool *)&local_590);
LAB_14df43be6:
      uStack_560 = CONCAT44(uStack_560._4_4_,(uint)uStack_560 & ~uStack_56c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_578 + 8));
      bVar5 = TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!=((TRangedForIterator *)local_578,&local_2c8);
    } while (bVar5);
  }
  iVar21 = (param_3->Goals).ArrayNum;
  if (0 < iVar21) {
    pFVar22 = (param_3->Goals).AllocatorInstance.Data;
    pFVar26 = pFVar22 + (longlong)iVar21 * 0xb0;
    while( true ) {
      if ((param_3->Goals).ArrayNum != iVar21) {
        local_787 = 0;
        `TCheckedPointerIterator<FIKRigGoal_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_787);
      }
      if (pFVar22 == pFVar26) break;
      if (pFVar22[0xa0] == (FScriptContainerElement)0x0) {
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_a8,
                   (FName *)(local_5b8 + 4),(bool *)pFVar22);
      }
      pFVar22 = pFVar22 + 0xb0;
    }
  }
  this_00 = &this->GoalBones;
  TSet<TTuple<FName,FGoalBone>,TDefaultMapHashableKeyFuncs<FName,FGoalBone,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FGoalBone>,TDefaultMapHashableKeyFuncs<FName,FGoalBone,0>,FDefaultSetAllocator>
           *)this_00);
  local_770 = (this->GoalContainer).Goals.ArrayNum;
  uVar19 = (ulonglong)(int)local_770;
  pTVar37 = (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *)
            (this->GoalContainer).Goals.AllocatorInstance.Data;
  pFVar33 = (FName *)&pTVar37->ArrayNum;
  local_730 = pTVar37 + uVar19 * 0xb;
  pUVar36 = local_780;
  do {
    pTVar3 = local_730;
    if ((local_778->GoalContainer).Goals.ArrayNum != (int)uVar19) {
      local_786 = 0;
      `TCheckedPointerIterator<FIKRigGoal,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_786);
    }
    pFVar38 = local_778;
    pUVar27 = local_780;
    if (pTVar37 == pTVar3) {
      pTVar37 = &local_778->Solvers;
      local_730 = pTVar37;
      TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::Reset
                (pTVar37,(local_780->SolverStack).ArrayNum);
      local_770 = (pUVar27->SolverStack).ArrayNum;
      uVar19 = (ulonglong)(int)local_770;
      pFVar22 = (pUVar27->SolverStack).AllocatorInstance.Data;
      local_5e8 = pFVar22 + uVar19 * 0x10;
      break;
    }
    FVar23 = *pFVar33;
    if (FVar23 == (FName)0x0) {
      pFVar26 = (local_780->Goals).AllocatorInstance.Data;
      iVar21 = (local_780->Goals).ArrayNum;
      pFVar22 = pFVar26 + (longlong)iVar21 * 8;
      while( true ) {
        if ((local_780->Goals).ArrayNum != iVar21) {
          local_785 = 0;
          `TCheckedPointerIterator<UIKRigEffectorGoal_*_const,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_785);
        }
        pUVar36 = local_780;
        if (pFVar26 == pFVar22) goto LAB_14df43d2e;
        if (*(FScriptContainerElement **)(*(longlong *)pFVar26 + 0x28) ==
            (pTVar37->AllocatorInstance).Data) break;
        pFVar26 = pFVar26 + 8;
      }
      FVar23 = *(FName *)(*(longlong *)pFVar26 + 0x30);
    }
LAB_14df43d2e:
    local_6ec = 0xffffffff;
    local_6f8 = FVar23;
    local_6f0 = FIKRigSkeleton::GetBoneIndexFromName(local_738,*pFVar33);
    if (local_6f0 == -1) {
      pFVar8 = FText::FromName(&local_278,(FName *)&pTVar37->ArrayNum);
      pFVar9 = FText::FromName(&local_1a8,(FName *)pTVar37);
      local_5f8 = (FName)local_780->_padding_;
      ::FName::ToString(&local_5f8,&local_538);
      pFVar13 = FText::FromString(&local_258,&local_538);
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_2e8,L"IKRigProcessor",L"MissingGoalBone",
                           L"IK Rig, \'{0}\' has a Goal, \'{1}\' that references an unknown bone, \'{2}\'. Cannot evaluate."
                          );
      pFVar10 = FTextFormat::FTextFormat(&local_248,pFVar14,Default);
      pFVar8 = FText::Format<FText,FText,FText>(&local_2f8,pFVar10,pFVar13,pFVar9,pFVar8);
      FIKRigLogger::LogError(&local_778->Log,pFVar8);
      if (local_2f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
      }
      if (local_2e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2e8.TextData.Reference + 0x10))();
      }
      goto LAB_14df44c2f;
    }
    pTVar12 = TSet<TTuple<FName,FGoalBone>,TDefaultMapHashableKeyFuncs<FName,FGoalBone,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FGoalBone>,TDefaultMapHashableKeyFuncs<FName,FGoalBone,0>,FDefaultSetAllocator>
                      *)this_00,(FName)(pTVar37->AllocatorInstance).Data);
    pFVar24 = (FName *)&pTVar12->field_0x8;
    if (pTVar12 == (TTuple<FName,FGoalBone> *)0x0) {
      pFVar24 = (FName *)0x0;
    }
    if ((pFVar24 != (FName *)0x0) && (*pFVar24 != local_6f8)) goto LAB_14df44088;
    pFVar22 = (pTVar37->AllocatorInstance).Data;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)pFVar22);
    if (local_f8._8_4_ != local_c4) {
      puVar20 = local_c0;
      if (local_b8 != (undefined1 *)0x0) {
        puVar20 = local_b8;
      }
      for (iVar21 = *(int *)(puVar20 +
                            (ulonglong)(local_b0 - 1U & (int)((ulonglong)pFVar22 >> 0x20) + uVar6) *
                            4); iVar21 != -1;
          iVar21 = *(int *)(local_f8._0_8_ + 8 + (longlong)iVar21 * 0x10)) {
        if (*(FScriptContainerElement **)(local_f8._0_8_ + (longlong)iVar21 * 0x10) == pFVar22)
        goto LAB_14df44042;
      }
    }
    pFVar8 = FText::FromName(&local_178,(FName *)pTVar37);
    local_588 = (FName)pUVar36->_padding_;
    ::FName::ToString(&local_588,&local_468);
    pFVar9 = FText::FromString(&local_168,&local_468);
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_328,L"IKRigProcessor",L"DisconnectedGoal",
                         L"IK Rig, \'{0}\' has a Goal, \'{1}\' that is not connected to any solvers. It will have no effect."
                        );
    pFVar10 = FTextFormat::FTextFormat(&local_158,pFVar13,Default);
    local_428.Type = Text;
    FText::FText((FText *)&local_428.TextValue,pFVar9);
    if ((local_428.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_408 = 4;
    FText::FText(&local_3f8,pFVar8);
    if ((local_3f8.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_768.ArrayNum = 2;
    local_768.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_768.AllocatorInstance,2,&local_768.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_768.AllocatorInstance.Data,&local_428,2);
    local_488.TextFormatData.Object = (pFVar10->TextFormatData).Object;
    local_488.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar10->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_488.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_488.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_488.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_478,&local_488,&local_768);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_768.AllocatorInstance.Data,local_768.ArrayNum);
    if ((FFormatArgumentValue *)local_768.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_768.AllocatorInstance.Data);
    }
    if (local_3f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3f8.TextData.Reference + 0x10))();
    }
    if (local_428.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_428.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar10->TextFormatData).SharedReferenceCount.ReferenceController);
    pIVar1 = (pFVar9->TextData).Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    pIVar1 = (pFVar8->TextData).Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    FIKRigLogger::LogWarning(&local_778->Log,&local_478);
    if (local_478.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_478.TextData.Reference + 0x10))();
    }
    if (local_328.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_328.TextData.Reference + 0x10))();
    }
    if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_468.Data.AllocatorInstance.Data);
    }
LAB_14df44042:
    local_450 = &local_6f8;
    local_458 = pTVar37;
    TSet<TTuple<FName,FGoalBone>,TDefaultMapHashableKeyFuncs<FName,FGoalBone,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FGoalBone_const_&>_>
              ((TSet<TTuple<FName,FGoalBone>,TDefaultMapHashableKeyFuncs<FName,FGoalBone,0>,FDefaultSetAllocator>
                *)this_00,(TPairInitializer<FName_const_&,FGoalBone_const_&> *)local_5b0,
               (bool *)&local_458);
    pTVar37 = pTVar37 + 0xb;
    uVar19 = (ulonglong)local_770;
    pFVar33 = pFVar33 + 0x16;
  } while( true );
LAB_14df442b2:
  pFVar26 = local_5e8;
  if ((pUVar27->SolverStack).ArrayNum != (int)uVar19) {
    local_784 = 0;
    `TCheckedPointerIterator<FInstancedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(&local_784);
  }
  pUVar4 = local_5e0;
  if (pFVar22 == pFVar26) {
    iVar21 = (pUVar27->RetargetDefinition).BoneChains.ArrayNum;
    this_02 = (FBoneChain *)(pUVar27->RetargetDefinition).BoneChains.AllocatorInstance.Data;
    local_6b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6b8.ArrayNum = 0;
    local_6b8.ArrayMax = 0;
    pFVar39 = this_02 + iVar21;
    while( true ) {
      if ((pUVar27->RetargetDefinition).BoneChains.ArrayNum != iVar21) {
        local_782[0] = 0;
        `TCheckedPointerIterator<FBoneChain_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_782);
      }
      if (this_02 == pFVar39) break;
      bVar5 = FIKRigSkeleton::ValidateChainAndGetBones(local_738,this_02,&local_6b8);
      if (!bVar5) {
        local_5d8 = (FName)pUVar4->_padding_;
        ::FName::ToString(&local_5d8,&local_4d8);
        pFVar8 = FText::FromString(&local_218,&local_4d8);
        pFVar17 = ::FName::ToString(&this_02->ChainName,&local_398);
        pFVar9 = FText::FromString(&local_208,pFVar17);
        pFVar13 = FText::AsLocalizable_Advanced_LocText
                            (&local_3a8,L"IKRigProcessor",L"InvalidRetargetChain",
                             L"Invalid Retarget Chain: \'{0}\'. End bone is not a child of the start bone in Skeletal Mesh, \'{1}\'."
                            );
        pFVar10 = FTextFormat::FTextFormat(&local_1f8,pFVar13,Default);
        local_3e8.Type = Text;
        FText::FText((FText *)&local_3e8.TextValue,pFVar9);
        if ((local_3e8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_3c8 = 4;
        FText::FText(&local_3b8,pFVar8);
        if ((local_3b8.TextData.Reference == (ITextData *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_748.ArrayNum = 2;
        local_748.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,&local_748.AllocatorInstance,2,&local_748.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_748.AllocatorInstance.Data,&local_3e8,2);
        local_4f8.TextFormatData.Object = (pFVar10->TextFormatData).Object;
        local_4f8.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar10->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_4f8.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_4f8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_4f8.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_4e8,&local_4f8,&local_748);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_748.AllocatorInstance.Data,local_748.ArrayNum);
        if ((FFormatArgumentValue *)local_748.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_748.AllocatorInstance.Data);
        }
        if (local_3b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_3b8.TextData.Reference + 0x10))();
        }
        if (local_3e8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_3e8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar10->TextFormatData).SharedReferenceCount.ReferenceController);
        pIVar1 = (pFVar9->TextData).Reference;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 0x10))();
        }
        pIVar1 = (pFVar8->TextData).Reference;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 0x10))();
        }
        FIKRigLogger::LogWarning(&local_778->Log,&local_4e8);
        if (local_4e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_4e8.TextData.Reference + 0x10))();
        }
        if (local_3a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_3a8.TextData.Reference + 0x10))();
        }
        if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_398.Data.AllocatorInstance.Data);
        }
        pUVar27 = local_780;
        if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
          pUVar27 = local_780;
        }
      }
      this_02 = this_02 + 1;
    }
    local_5d0 = (FName)pUVar4->_padding_;
    ::FName::ToString(&local_5d0,&local_4b8);
    pFVar8 = FText::FromString(&local_1e8,&local_4b8);
    local_5c8 = (FName)pUVar27->_padding_;
    ::FName::ToString(&local_5c8,&local_4c8);
    pFVar9 = FText::FromString(&local_1d8,&local_4c8);
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_378,L"IKRigProcessor",L"SuccessfulInit",
                         L"IK Rig, \'{0}\' ready to run on {1}.");
    pFVar10 = FTextFormat::FTextFormat(&local_1c8,pFVar13,Default);
    pFVar8 = FText::Format<FText,FText>(&local_388,pFVar10,pFVar9,pFVar8);
    pFVar38 = local_778;
    FIKRigLogger::LogInfo(&local_778->Log,pFVar8);
    if (local_388.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_388.TextData.Reference + 0x10))();
    }
    if (local_378.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_378.TextData.Reference + 0x10))();
    }
    if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
    }
    if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
    }
    (pFVar38->GoalContainer).bRigNeedsInitialized = false;
    pFVar38->bInitialized = true;
    pFVar38->bTriedToInitialize = false;
    local_538.Data.AllocatorInstance.Data = local_6b8.AllocatorInstance.Data;
    goto LAB_14df44c2f;
  }
  if ((*(longlong *)(pFVar22 + 8) != 0) && (*(longlong *)pFVar22 != 0)) {
    uVar6 = pTVar37->ArrayNum;
    if (uVar6 == pTVar37->ArrayMax) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar37->AllocatorInstance,&pTVar37->ArrayMax);
    }
    pTVar37->ArrayNum = uVar6 + 1;
    plVar30 = (longlong *)0x0;
    lVar28 = (longlong)(int)uVar6 * 0x10;
    this_01 = (FInstancedStruct *)((pTVar37->AllocatorInstance).Data + lVar28);
    (this_01->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    this_01->StructMemory = (uchar *)0x0;
    FInstancedStruct::InitializeAs(this_01,*(UScriptStruct **)pFVar22,*(uchar **)(pFVar22 + 8));
    uVar29 = 0;
    uVar35 = uVar29;
    if ((int)uVar6 < pTVar37->ArrayNum) {
      uVar35 = ~uVar6 >> 0x1f;
    }
    if ((uVar35 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar26 = (pTVar37->AllocatorInstance).Data;
    plVar34 = *(longlong **)(pFVar26 + lVar28 + 8);
    if ((plVar34 == (longlong *)0x0) || (lVar28 = *(longlong *)(pFVar26 + lVar28), lVar28 == 0)) {
LAB_14df443e6:
      plVar34 = plVar30;
    }
    else {
      if (Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton == (UScriptStruct *)0x0)
      {
        pUVar16 = Z_Construct_UPackage__Script_IKRig();
        Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FIKRigSolverBase,(UObject *)pUVar16,
                             L"IKRigSolverBase");
        if (Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton ==
            (UScriptStruct *)0x0) goto LAB_14df443e6;
      }
      iVar21 = (int)(Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton)->_padding_;
      if ((*(int *)(lVar28 + 0x38) < iVar21) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar28 + 0x30) + (longlong)iVar21 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton)->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_14df443e6;
    }
    uVar35 = local_80;
    uVar6 = 0;
    uVar7 = 1;
    TStack_6e0.CurrentBitIndex = uVar6;
    if (local_80 != 0) {
      puVar31 = (uint *)(local_a8 + 0x10);
      if (local_88 != (uint *)0x0) {
        puVar31 = local_88;
      }
      uVar25 = *puVar31;
      plVar32 = plVar30;
      uVar6 = 0;
      uVar29 = 0;
      while (uVar25 == 0) {
        iVar21 = (int)plVar30;
        uVar6 = (int)plVar32 + 0x20;
        plVar32 = (longlong *)(ulonglong)uVar6;
        uVar29 = iVar21 + 1;
        plVar30 = (longlong *)(ulonglong)uVar29;
        TStack_6e0.CurrentBitIndex = local_80;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar29)
        goto LAB_14df44473;
        uVar25 = (puVar31 + 1)[iVar21];
      }
      uVar7 = -uVar25 & uVar25;
      uVar19 = (ulonglong)uVar7 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      local_5b0._4_4_ = (undefined4)lVar28;
      TStack_6e0.CurrentBitIndex = local_5b0._4_4_ + -1 + uVar6;
      if ((int)local_80 < TStack_6e0.CurrentBitIndex) {
        TStack_6e0.CurrentBitIndex = local_80;
      }
    }
LAB_14df44473:
    local_728 = (longlong *)local_a8;
    pTStack_718 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    uVar25 = local_80 & 0xffffffe0;
    local_700 = local_a8._8_4_ - local_74;
    uStack_720 = CONCAT44(uVar7,uVar29);
    uStack_710 = CONCAT44(TStack_6e0.CurrentBitIndex,0xffffffff);
    uStack_708 = CONCAT44(local_fc,uVar6);
    TStack_6e0._padding_ = uStack_720;
    iVar21 = (int)local_80 >> 5;
    uStack_6bc = uStack_6fc;
    local_6c0 = local_700;
    bVar18 = (byte)local_80;
    TStack_6e0.UnvisitedBitMask = 0xffffffff;
    TStack_6e0._24_8_ = uStack_708;
    local_6e8 = local_728;
    TStack_6e0.Array = pTStack_718;
    if (((int)local_80 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar35 != local_80) {
      puVar31 = (uint *)(local_a8 + 0x10);
      if (local_88 != (uint *)0x0) {
        puVar31 = local_88;
      }
      uVar6 = -1 << (bVar18 & 0x1f) & puVar31[iVar21];
      while (uVar6 == 0) {
        lVar28 = (longlong)iVar21;
        uVar25 = uVar25 + 0x20;
        iVar21 = iVar21 + 1;
        uVar35 = local_80;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_14df445a0;
        uVar6 = (puVar31 + 1)[lVar28];
      }
      uVar19 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
      lVar28 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      local_5b0._8_4_ = (undefined4)lVar28;
      uVar35 = (uVar25 - 1) + local_5b0._8_4_;
      if ((int)local_80 < (int)uVar35) {
        uVar35 = local_80;
      }
    }
LAB_14df445a0:
    while( true ) {
      plVar30 = local_6e8;
      if ((int)local_6e8[1] - *(int *)((longlong)local_6e8 + 0x34) != local_6c0) {
        local_783 = 0;
        `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_783);
      }
      if (((TStack_6e0.CurrentBitIndex == uVar35) &&
          (TStack_6e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
         (plVar30 == (longlong *)local_a8)) break;
      local_5c0 = *(undefined8 *)(*plVar30 + (longlong)TStack_6e0.CurrentBitIndex * 0x10);
      (**(code **)(*plVar34 + 0x60))(plVar34,&local_5c0);
      TStack_6e0.UnvisitedBitMask = TStack_6e0.UnvisitedBitMask & ~TStack_6e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_6e0);
    }
    (**(code **)(*plVar34 + 8))(plVar34,local_738);
    uVar19 = (ulonglong)local_770;
    pFVar22 = pFVar22 + 0x10;
    pUVar27 = local_780;
    pTVar37 = local_730;
    pFVar38 = local_778;
    goto LAB_14df442b2;
  }
  local_5f0 = (FName)pUVar27->_padding_;
  ::FName::ToString(&local_5f0,&local_508);
  pFVar8 = FText::FromString(&local_238,&local_508);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_2d8,L"IKRigProcessor",L"UnknownSolver",
                      L"IK Rig, \'{0}\' has null/unknown solver in it. Please remove it.");
  pFVar10 = FTextFormat::FTextFormat(&local_228,pFVar9,Default);
  local_448.Type = Text;
  FText::FText((FText *)&local_448.TextValue,pFVar8);
  if ((local_448.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_758.ArrayNum = 1;
  local_758.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_758.AllocatorInstance,1,&local_758.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_758.AllocatorInstance.Data,&local_448,1);
  local_528.TextFormatData.Object = (pFVar10->TextFormatData).Object;
  local_528.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar10->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_528.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_528.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_528.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(&local_518,&local_528,&local_758);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_758.AllocatorInstance.Data,local_758.ArrayNum);
  if ((FFormatArgumentValue *)local_758.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_758.AllocatorInstance.Data);
  }
  if (local_448.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_448.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar10->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (pFVar8->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FIKRigLogger::LogWarning(&pFVar38->Log,&local_518);
  if (local_518.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_518.TextData.Reference + 0x10))();
  }
  if (local_2d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2d8.TextData.Reference + 0x10))();
  }
  if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.Data.AllocatorInstance.Data);
  }
  pFVar22 = pFVar22 + 0x10;
  uVar19 = (ulonglong)local_770;
  goto LAB_14df442b2;
LAB_14df44088:
  pFVar8 = FText::FromName(&local_148,&local_6f8);
  pFVar9 = FText::FromName(&local_138,pFVar24);
  pFVar13 = FText::FromName(local_128,(FName *)pTVar37);
  local_580 = (FName)local_780->_padding_;
  ::FName::ToString(&local_580,&local_548);
  pFVar14 = FText::FromString(&local_298,&local_548);
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_308,L"IKRigProcessor",L"DuplicateGoal",
                       L"IK Rig, \'{0}\' has a Goal, \'{1}\' that references different bones in different solvers, \'{2}\' and \'{3}\'. Cannot evaluate."
                      );
  pFVar10 = FTextFormat::FTextFormat(&local_288,pFVar15,Default);
  pFVar8 = FText::Format<FText,FText,FText,FText>(&local_318,pFVar10,pFVar14,pFVar13,pFVar9,pFVar8);
  FIKRigLogger::LogError(&local_778->Log,pFVar8);
  if (local_318.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_318.TextData.Reference + 0x10))();
  }
  local_538.Data.AllocatorInstance.Data = local_548.Data.AllocatorInstance.Data;
  if (local_308.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_308.TextData.Reference + 0x10))();
    local_538.Data.AllocatorInstance.Data = local_548.Data.AllocatorInstance.Data;
  }
LAB_14df44c2f:
  if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_538.Data.AllocatorInstance.Data);
  }
  local_60 = 0;
  if (local_68 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  local_b0 = 0;
  if (local_b8 != (undefined1 *)0x0) {
    FMemory::Free(local_b8);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8);
  return;
}

// IsIKRigCompatibleWithSkeleton @ 14df479e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
FIKRigProcessor::IsIKRigCompatibleWithSkeleton
          (UIKRigDefinition *param_1,FIKRigInputSkeleton *param_2,FIKRigLogger *param_3)

{
  ulonglong uVar1;
  ITextData *pIVar2;
  FName *pFVar3;
  code *pcVar4;
  UIKRigDefinition *pUVar5;
  FIKRigLogger *pFVar6;
  FIKRigInputSkeleton *pFVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  FIKRigSolverBase *pFVar12;
  FText *pFVar13;
  FText *pFVar14;
  FText *pFVar15;
  FTextFormat *pFVar16;
  FText *pFVar17;
  byte bVar18;
  longlong lVar19;
  TRefCountPtr<ITextData> TVar20;
  FName *pFVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  uint *puVar30;
  FName *pFVar31;
  undefined1 auStackY_4a8 [32];
  undefined1 local_468;
  undefined1 local_467;
  undefined1 local_466;
  undefined1 local_465 [5];
  UIKRigDefinition *local_460;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_458;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_448;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_438;
  int local_428;
  uint uStack_424;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_420;
  uint local_418;
  uint uStack_414;
  uint uStack_410;
  undefined4 uStack_40c;
  FIKRigLogger *local_408;
  longlong *local_400;
  undefined8 uStack_3f8;
  TBitArray<FDefaultBitArrayAllocator> *local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  int iStack_3d8;
  undefined4 uStack_3d4;
  FIKRigInputSkeleton *local_3d0;
  undefined8 local_3c8;
  longlong *local_3c0;
  int iStack_3b8;
  uint uStack_3b4;
  TBitArray<FDefaultBitArrayAllocator> *local_3b0;
  undefined4 uStack_3a8;
  uint uStack_3a4;
  int local_3a0;
  undefined4 uStack_39c;
  int iStack_398;
  undefined4 uStack_394;
  FName local_390;
  int local_388;
  int local_384;
  int local_380;
  FName local_37c;
  longlong *local_370;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_368;
  undefined8 uStack_348;
  longlong *local_340;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_338;
  undefined8 uStack_318;
  FTextFormat local_310;
  FText local_300;
  FString local_2f0;
  FTextFormat local_2e0;
  FText local_2d0;
  FTextFormat local_2c0;
  FText local_2b0;
  FFormatArgumentValue local_298;
  undefined4 local_278;
  FText local_268;
  FFormatArgumentValue local_258;
  undefined4 local_238;
  FText local_228;
  FText local_218;
  longlong *local_208;
  undefined8 uStack_200;
  TBitArray<FDefaultBitArrayAllocator> *local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  FText local_1d8;
  FText local_1c8;
  FText local_1b8;
  FTextFormat local_1a8;
  FText local_198;
  FTextFormat local_188;
  FText local_178;
  FText local_168;
  FText local_158;
  FText local_148;
  FTextFormat local_138;
  FText local_128 [2];
  undefined4 local_fc;
  undefined1 local_f8 [32];
  uint *local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  FFormatArgumentValue local_a8;
  undefined4 local_88;
  FText local_78;
  undefined4 local_68;
  FText local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  iVar22 = (param_1->SolverStack).ArrayNum;
  iVar29 = 0;
  pFVar23 = (param_1->SolverStack).AllocatorInstance.Data;
  pFVar24 = pFVar23 + (longlong)iVar22 * 0x10;
  local_f8._0_8_ = 0;
  local_f8._8_8_ = 0;
  local_d8 = (uint *)0x0;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = (ForElementType<FSetElementId>)0x0;
  local_b0 = 0;
  local_460 = param_1;
  local_408 = param_3;
  local_3d0 = param_2;
  while( true ) {
    if ((local_460->SolverStack).ArrayNum != iVar22) {
      local_468 = 0;
      `TCheckedPointerIterator<FInstancedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_468);
    }
    if (pFVar23 == pFVar24) break;
    pFVar12 = UE::StructUtils::GetStructRef<FIKRigSolverBase>
                        (*(UScriptStruct **)pFVar23,*(void **)(pFVar23 + 8));
    (**(code **)(pFVar12->_padding_ + 0x18))(pFVar12,local_f8);
    pFVar23 = pFVar23 + 0x10;
  }
  pFVar24 = (local_460->Goals).AllocatorInstance.Data;
  iVar22 = (local_460->Goals).ArrayNum;
  pFVar23 = pFVar24 + (longlong)iVar22 * 8;
  while( true ) {
    if ((local_460->Goals).ArrayNum != iVar22) {
      local_467 = 0;
      `TCheckedPointerIterator<UIKRigEffectorGoal_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_467);
    }
    if (pFVar24 == pFVar23) break;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_f8,&local_390,
               (bool *)(*(longlong *)pFVar24 + 0x30));
    pFVar24 = pFVar24 + 8;
  }
  local_3c8 = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_f8,(FName)0x0);
  uVar27 = local_d0;
  bVar11 = true;
  uStack_3b4 = 1;
  uStack_3a4 = 0;
  local_3a0 = 0;
  if (local_d0 != 0) {
    puVar30 = (uint *)(local_f8 + 0x10);
    if (local_d8 != (uint *)0x0) {
      puVar30 = local_d8;
    }
    uVar25 = *puVar30;
    iVar29 = 0;
    while (uVar25 == 0) {
      lVar19 = (longlong)iVar29;
      local_3a0 = local_3a0 + 0x20;
      iVar29 = iVar29 + 1;
      uStack_3a4 = local_d0;
      if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
      goto LAB_14df47bb3;
      uVar25 = puVar30[lVar19 + 1];
    }
    uStack_3b4 = -uVar25 & uVar25;
    uVar1 = (ulonglong)uStack_3b4 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_390.Number = (uint)lVar19;
    uStack_3a4 = (local_390.Number - 1) + local_3a0;
    if ((int)local_d0 < (int)uStack_3a4) {
      uStack_3a4 = local_d0;
    }
  }
LAB_14df47bb3:
  local_3c0 = (longlong *)local_f8;
  uStack_39c = local_fc;
  local_3b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
  uVar25 = local_d0 & 0xffffffe0;
  iStack_398 = local_f8._8_4_ - local_c4;
  TStack_368._padding_ = CONCAT44(uStack_3b4,iVar29);
  uStack_3a8 = 0xffffffff;
  TStack_368.CurrentBitIndex = uStack_3a4;
  TStack_368.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)local_d0 >> 5;
  TStack_368._28_4_ = local_fc;
  TStack_368.BaseBitIndex = local_3a0;
  uStack_348 = CONCAT44(uStack_394,iStack_398);
  bVar18 = (byte)local_d0;
  iStack_3b8 = iVar29;
  local_370 = local_3c0;
  TStack_368.Array = local_3b0;
  if (((int)local_d0 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  pFVar7 = local_3d0;
  pUVar5 = local_460;
  if (uVar27 != local_d0) {
    puVar30 = (uint *)(local_f8 + 0x10);
    if (local_d8 != (uint *)0x0) {
      puVar30 = local_d8;
    }
    uVar27 = -1 << (bVar18 & 0x1f) & puVar30[iVar22];
    while (uVar27 == 0) {
      lVar19 = (longlong)iVar22;
      uVar25 = uVar25 + 0x20;
      iVar22 = iVar22 + 1;
      uVar27 = local_d0;
      if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
      goto LAB_14df47ce0;
      uVar27 = puVar30[lVar19 + 1];
    }
    uVar1 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_380 = (int)lVar19;
    uVar27 = local_380 + -1 + uVar25;
    if ((int)local_d0 < (int)uVar27) {
      uVar27 = local_d0;
    }
  }
LAB_14df47ce0:
  while( true ) {
    plVar8 = local_370;
    if ((int)local_370[1] - *(int *)((longlong)local_370 + 0x34) != (int)uStack_348) {
      local_466 = 0;
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_466);
    }
    uVar25 = local_d0;
    pFVar6 = local_408;
    if (((TStack_368.CurrentBitIndex == uVar27) &&
        (TStack_368.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10))) &&
       (plVar8 == (longlong *)local_f8)) break;
    pFVar31 = (FName *)(pFVar7->BoneNames).AllocatorInstance.Data;
    pFVar21 = (FName *)((longlong)TStack_368.CurrentBitIndex * 0x10 + *plVar8);
    pFVar3 = pFVar31 + (pFVar7->BoneNames).ArrayNum;
    if (pFVar31 != pFVar3) {
      do {
        if (*pFVar31 == *pFVar21) goto LAB_14df47fa5;
        pFVar31 = pFVar31 + 1;
      } while (pFVar31 != pFVar3);
    }
    if (local_408 != (FIKRigLogger *)0x0) {
      pFVar13 = FText::FromName(&local_1b8,pFVar21);
      local_37c = (FName)pUVar5->_padding_;
      ::FName::ToString(&local_37c,&local_2f0);
      pFVar14 = FText::FromString(&local_198,&local_2f0);
      pFVar15 = FText::AsLocalizable_Advanced_LocText
                          (&local_1c8,L"IKRigProcessor",L"MissingBone",
                           L"IK Rig, \'{0}\' is missing a required bone, \'{1}\' in the Skeletal Mesh."
                          );
      pFVar16 = FTextFormat::FTextFormat(&local_188,pFVar15,Default);
      local_298.Type = Text;
      FText::FText((FText *)&local_298.TextValue,pFVar14);
      if ((local_298.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar11)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      local_278 = 4;
      FText::FText(&local_268,pFVar13);
      if ((local_268.TextData.Reference == (ITextData *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar11)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      local_458.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_458.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_458.AllocatorInstance,2,&local_458.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_458.AllocatorInstance.Data,&local_298,2);
      local_310.TextFormatData.Object = (pFVar16->TextFormatData).Object;
      local_310.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar16->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_310.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_310.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_310.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_300,&local_310,&local_458);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_458.AllocatorInstance.Data,local_458.ArrayNum);
      if ((FFormatArgumentValue *)local_458.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_458.AllocatorInstance.Data);
      }
      if (local_268.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
      }
      if (local_298.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_298.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar16->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar2 = (pFVar14->TextData).Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      pIVar2 = (pFVar13->TextData).Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      FIKRigLogger::LogError(pFVar6,&local_300);
      if (local_300.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_300.TextData.Reference + 0x10))();
      }
      if (local_1c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
      }
      if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
      }
    }
    bVar11 = false;
LAB_14df47fa5:
    TStack_368.UnvisitedBitMask = TStack_368.UnvisitedBitMask & ~TStack_368._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_368);
  }
  if (bVar11) {
    iVar22 = 0;
    local_3e0._0_4_ = 0;
    bVar11 = true;
    uStack_3e8._4_4_ = 0;
    uVar27 = 1;
    if (local_d0 != 0) {
      puVar30 = (uint *)(local_f8 + 0x10);
      if (local_d8 != (uint *)0x0) {
        puVar30 = local_d8;
      }
      uVar27 = *puVar30;
      while (uVar27 == 0) {
        lVar19 = (longlong)iVar22;
        local_3e0._0_4_ = (int)local_3e0 + 0x20;
        iVar22 = iVar22 + 1;
        uStack_3e8._4_4_ = local_d0;
        uVar27 = 1;
        if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
        goto LAB_14df480c0;
        uVar27 = puVar30[lVar19 + 1];
      }
      uVar27 = -uVar27 & uVar27;
      uVar1 = (ulonglong)uVar27 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_388 = (int)lVar19;
      uStack_3e8._4_4_ = (int)local_3e0 + -1 + local_388;
      if ((int)local_d0 < (int)uStack_3e8._4_4_) {
        uStack_3e8._4_4_ = local_d0;
      }
    }
LAB_14df480c0:
    local_400 = (longlong *)local_f8;
    local_3f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
    uVar28 = local_d0 & 0xffffffe0;
    iStack_3d8 = local_f8._8_4_ - local_c4;
    bVar18 = (byte)local_d0 & 0x1f;
    uStack_424 = 1 << bVar18;
    pTStack_420 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
    uVar26 = -1 << bVar18;
    iVar29 = (int)local_d0 >> 5;
    uStack_3f8 = CONCAT44(uVar27,iVar22);
    uStack_3e8._0_4_ = 0xffffffff;
    local_3e0._4_4_ = uStack_3a4;
    uStack_414 = local_d0;
    TStack_338._padding_ = uStack_3f8;
    uStack_318 = CONCAT44(uStack_3d4,iStack_3d8);
    TStack_338.UnvisitedBitMask = 0xffffffff;
    TStack_338.CurrentBitIndex = uStack_3e8._4_4_;
    TStack_338.BaseBitIndex = (int)local_3e0;
    TStack_338._28_4_ = uStack_3a4;
    local_428 = iVar29;
    local_418 = uVar26;
    uStack_410 = uVar28;
    local_340 = local_400;
    TStack_338.Array = local_3f0;
    if (((int)local_d0 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    pFVar7 = local_3d0;
    if (uVar25 != local_d0) {
      puVar30 = (uint *)(local_f8 + 0x10);
      if (local_d8 != (uint *)0x0) {
        puVar30 = local_d8;
      }
      uVar26 = uVar26 & puVar30[iVar29];
      while (uVar26 == 0) {
        uStack_410 = uVar28 + 0x20;
        local_428 = iVar29 + 1;
        if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < local_428) {
          uStack_414 = local_d0;
          goto LAB_14df4821e;
        }
        uVar26 = puVar30[(longlong)iVar29 + 1];
        local_418 = 0xffffffff;
        uVar28 = uStack_410;
        iVar29 = local_428;
      }
      uStack_424 = -uVar26 & uVar26;
      uVar1 = (ulonglong)uStack_424 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_384 = (int)lVar19;
      uStack_414 = local_384 + -1 + uVar28;
      if ((int)local_d0 < (int)uStack_414) {
        uStack_414 = local_d0;
      }
    }
LAB_14df4821e:
    uStack_3f8 = CONCAT44(uStack_424,local_428);
    local_400 = (longlong *)local_f8;
    uStack_3e8 = CONCAT44(uStack_414,local_418);
    local_3e0 = CONCAT44(uStack_40c,uStack_410);
    iStack_3d8 = local_f8._8_4_ - local_c4;
    local_3f0 = pTStack_420;
    uStack_1e0 = CONCAT44(uStack_3d4,iStack_3d8);
    local_1f8 = pTStack_420;
    local_208 = local_400;
    uStack_200 = uStack_3f8;
    uStack_1f0 = uStack_3e8;
    local_1e8 = local_3e0;
    while( true ) {
      plVar8 = local_340;
      if ((int)local_340[1] - *(int *)((longlong)local_340 + 0x34) != (int)uStack_318) {
        local_465[0] = 0;
        `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_465);
      }
      pUVar5 = local_460;
      if (((TStack_338.CurrentBitIndex == uStack_1f0._4_4_) && (TStack_338.Array == local_1f8)) &&
         (plVar8 == local_208)) break;
      pFVar3 = (FName *)(pFVar7->BoneNames).AllocatorInstance.Data;
      pFVar31 = (FName *)((longlong)TStack_338.CurrentBitIndex * 0x10 + *plVar8);
      if (pFVar3 != pFVar3 + (pFVar7->BoneNames).ArrayNum) {
        pFVar21 = pFVar3;
        do {
          if (*pFVar21 == *pFVar31) {
            uVar27 = (uint)((longlong)pFVar21 - (longlong)pFVar3 >> 3);
            goto LAB_14df482f7;
          }
          pFVar21 = pFVar21 + 1;
        } while (pFVar21 != pFVar3 + (pFVar7->BoneNames).ArrayNum);
      }
      uVar27 = 0xffffffff;
LAB_14df482f7:
      pFVar3 = (FName *)(local_460->Skeleton).BoneNames.AllocatorInstance.Data;
      if (pFVar3 != pFVar3 + (local_460->Skeleton).BoneNames.ArrayNum) {
        pFVar21 = pFVar3;
        do {
          if (*pFVar21 == *pFVar31) {
            uVar25 = (uint)((longlong)pFVar21 - (longlong)pFVar3 >> 3);
            goto LAB_14df4832a;
          }
          pFVar21 = pFVar21 + 1;
        } while (pFVar21 != pFVar3 + (local_460->Skeleton).BoneNames.ArrayNum);
      }
      uVar25 = 0xffffffff;
LAB_14df4832a:
      if (((uVar27 == 0xffffffff) || (uVar25 == 0xffffffff)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InputBoneIndex != INDEX_NONE && AssetBoneIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
                             ,0x10b,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      uVar26 = 0;
      if ((int)uVar25 < (pUVar5->Skeleton).ParentIndices.ArrayNum) {
        uVar26 = ~uVar25 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      iVar22 = *(int *)((pUVar5->Skeleton).ParentIndices.AllocatorInstance.Data +
                       (longlong)(int)uVar25 * 4);
      if ((-1 < iVar22) && (iVar22 < (pUVar5->Skeleton).BoneNames.ArrayNum)) {
        if ((iVar22 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        pFVar3 = (FName *)((pUVar5->Skeleton).BoneNames.AllocatorInstance.Data +
                          (longlong)iVar22 * 8);
        uVar25 = 0;
        if ((int)uVar27 < (pFVar7->ParentIndices).ArrayNum) {
          uVar25 = ~uVar27 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        pFVar6 = local_408;
        iVar22 = *(int *)((pFVar7->ParentIndices).AllocatorInstance.Data + (longlong)(int)uVar27 * 4
                         );
        if ((iVar22 < 0) || ((pFVar7->BoneNames).ArrayNum <= iVar22)) {
          bVar11 = false;
          if (local_408 != (FIKRigLogger *)0x0) {
            pFVar13 = FText::FromName(local_128,pFVar3);
            pFVar14 = FText::FromName(&local_168,pFVar31);
            pFVar15 = FText::AsLocalizable_Advanced_LocText
                                (&local_1d8,L"IKRigProcessor",L"InvalidParent",
                                 L"IK Rig is running on a skeleton with a required bone, \'{0}\', that expected to have a valid parent. The expected parent was, \'{1}\'."
                                );
            pFVar16 = FTextFormat::FTextFormat(&local_1a8,pFVar15,Default);
            local_258.Type = Text;
            FText::FText((FText *)&local_258.TextValue,pFVar14);
            if ((local_258.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
               && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0xbd,
                                      L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                     ), bVar9)) {
              pcVar4 = (code *)swi(3);
              uVar10 = (*pcVar4)();
              return (bool)uVar10;
            }
            local_238 = 4;
            FText::FText(&local_228,pFVar13);
            if ((local_228.TextData.Reference == (ITextData *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0xbd,
                                   L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                  ), bVar9)) {
              pcVar4 = (code *)swi(3);
              uVar10 = (*pcVar4)();
              return (bool)uVar10;
            }
            local_438.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_438.ArrayNum = 2;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,2,0,&local_438.AllocatorInstance,2,&local_438.ArrayMax);
            ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                      (local_438.AllocatorInstance.Data,&local_258,2);
            local_2c0.TextFormatData.Object = (pFVar16->TextFormatData).Object;
            local_2c0.TextFormatData.SharedReferenceCount.ReferenceController =
                 (pFVar16->TextFormatData).SharedReferenceCount.ReferenceController;
            if (local_2c0.TextFormatData.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_2c0.TextFormatData.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_2c0.TextFormatData.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            FText::Format(&local_2b0,&local_2c0,&local_438);
            DestructItems<FFormatArgumentValue,int>
                      ((FFormatArgumentValue *)local_438.AllocatorInstance.Data,local_438.ArrayNum);
            if ((FFormatArgumentValue *)local_438.AllocatorInstance.Data !=
                (FFormatArgumentValue *)0x0) {
              FMemory::Free(local_438.AllocatorInstance.Data);
            }
            if (local_228.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
            }
            if (local_258.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)
                           *(ITextData *)
                            local_258.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((pFVar16->TextFormatData).SharedReferenceCount.ReferenceController);
            pIVar2 = (pFVar14->TextData).Reference;
            if (pIVar2 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar2 + 0x10))();
            }
            pIVar2 = (pFVar13->TextData).Reference;
            if (pIVar2 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar2 + 0x10))();
            }
            FIKRigLogger::LogError(pFVar6,&local_2b0);
            TVar20.Reference = local_1d8.TextData.Reference;
            if (local_2b0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_2b0.TextData.Reference + 0x10))();
              TVar20.Reference = local_1d8.TextData.Reference;
            }
            goto LAB_14df48993;
          }
        }
        else {
          if ((iVar22 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar10 = (*pcVar4)();
            return (bool)uVar10;
          }
          pFVar6 = local_408;
          pFVar21 = (FName *)((pFVar7->BoneNames).AllocatorInstance.Data + (longlong)iVar22 * 8);
          if ((*pFVar3 != *pFVar21) && (local_408 != (FIKRigLogger *)0x0)) {
            pFVar13 = FText::FromName(&local_178,pFVar3);
            pFVar14 = FText::FromName(&local_158,pFVar21);
            pFVar15 = FText::FromName(&local_148,pFVar31);
            pFVar17 = FText::AsLocalizable_Advanced_LocText
                                (&local_218,L"IKRigProcessor",L"UnexpectedParent",
                                 L"IK Rig is running on a skeleton with a required bone, \'{0}\', that has a different parent \'{1}\'. The expected parent was, \'{2}\'."
                                );
            pFVar16 = FTextFormat::FTextFormat(&local_138,pFVar17,Default);
            local_a8.Type = Text;
            FText::FText((FText *)&local_a8.TextValue,pFVar15);
            if ((local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0xbd,
                                   L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                  ), bVar9)) {
              pcVar4 = (code *)swi(3);
              uVar10 = (*pcVar4)();
              return (bool)uVar10;
            }
            local_88 = 4;
            FText::FText(&local_78,pFVar14);
            if ((local_78.TextData.Reference == (ITextData *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0xbd,
                                   L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                  ), bVar9)) {
              pcVar4 = (code *)swi(3);
              uVar10 = (*pcVar4)();
              return (bool)uVar10;
            }
            local_68 = 4;
            FText::FText(&local_58,pFVar13);
            if ((local_58.TextData.Reference == (ITextData *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0xbd,
                                   L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                  ), bVar9)) {
              pcVar4 = (code *)swi(3);
              uVar10 = (*pcVar4)();
              return (bool)uVar10;
            }
            local_448.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_448.ArrayNum = 3;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,3,0,&local_448.AllocatorInstance,3,&local_448.ArrayMax);
            ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                      (local_448.AllocatorInstance.Data,&local_a8,3);
            local_2e0.TextFormatData.Object = (pFVar16->TextFormatData).Object;
            local_2e0.TextFormatData.SharedReferenceCount.ReferenceController =
                 (pFVar16->TextFormatData).SharedReferenceCount.ReferenceController;
            if (local_2e0.TextFormatData.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_2e0.TextFormatData.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_2e0.TextFormatData.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            FText::Format(&local_2d0,&local_2e0,&local_448);
            DestructItems<FFormatArgumentValue,int>
                      ((FFormatArgumentValue *)local_448.AllocatorInstance.Data,local_448.ArrayNum);
            if ((FFormatArgumentValue *)local_448.AllocatorInstance.Data !=
                (FFormatArgumentValue *)0x0) {
              FMemory::Free(local_448.AllocatorInstance.Data);
            }
            if (local_58.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
            }
            if (local_78.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
            }
            if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)
                           *(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference
                          + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((pFVar16->TextFormatData).SharedReferenceCount.ReferenceController);
            pIVar2 = (pFVar15->TextData).Reference;
            if (pIVar2 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar2 + 0x10))();
            }
            pIVar2 = (pFVar14->TextData).Reference;
            if (pIVar2 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar2 + 0x10))();
            }
            pIVar2 = (pFVar13->TextData).Reference;
            if (pIVar2 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar2 + 0x10))();
            }
            FIKRigLogger::LogWarning(pFVar6,&local_2d0);
            TVar20.Reference = local_218.TextData.Reference;
            if (local_2d0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_2d0.TextData.Reference + 0x10))();
              TVar20.Reference = local_218.TextData.Reference;
            }
LAB_14df48993:
            if (TVar20.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*TVar20.Reference + 0x10))();
            }
          }
        }
      }
      TStack_338.UnvisitedBitMask = TStack_338.UnvisitedBitMask & ~TStack_338._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_338);
    }
  }
  else {
    bVar11 = false;
  }
  local_b0 = 0;
  if (local_b8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8);
  return bVar11;
}

// Reset @ 14df4ec10

void __thiscall FIKRigProcessor::Reset(FIKRigProcessor *this)

{
  int *piVar1;
  int iVar2;
  FInstancedStruct *pFVar3;
  
  piVar1 = &(this->Solvers).ArrayMax;
  pFVar3 = (FInstancedStruct *)(this->Solvers).AllocatorInstance.Data;
  iVar2 = (this->Solvers).ArrayNum;
  if ((this->Solvers).ArrayMax < 0) {
    DestructItems<FInstancedStruct,int>(pFVar3,iVar2);
    (this->Solvers).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Solvers).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FInstancedStruct,int>(pFVar3,iVar2);
    (this->Solvers).ArrayNum = 0;
  }
  piVar1 = &(this->GoalContainer).Goals.ArrayMax;
  (this->GoalContainer).Goals.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,0,&(this->GoalContainer).Goals.AllocatorInstance,0,piVar1);
  }
  (this->GoalContainer).bRigNeedsInitialized = true;
  TSet<TTuple<FName,FGoalBone>,TDefaultMapHashableKeyFuncs<FName,FGoalBone,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FGoalBone>,TDefaultMapHashableKeyFuncs<FName,FGoalBone,0>,FDefaultSetAllocator>
           *)&this->GoalBones);
  FIKRigSkeleton::Reset(&this->Skeleton);
  this->bInitialized = false;
  this->bTriedToInitialize = false;
  return;
}

// ResolveFinalGoalTransforms @ 14df4f350

void __thiscall
FIKRigProcessor::ResolveFinalGoalTransforms(FIKRigProcessor *this,TTransform<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  FName FVar7;
  undefined1 *puVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [12];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  TTransform<double> *pTVar19;
  FName *pFVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  TTuple<FName,FGoalBone> *pTVar24;
  TQuat<double> *pTVar25;
  ulonglong uVar26;
  undefined1 *puVar27;
  FName *pFVar28;
  FScriptContainerElement *pFVar29;
  FName *pFVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  double extraout_XMM0_Qb_01;
  double extraout_XMM0_Qb_02;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double extraout_XMM0_Qb_03;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar46;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  uint uVar60;
  undefined4 uVar61;
  undefined1 local_res8 [8];
  TTransform<double> *local_res10;
  uint local_res18;
  FName *local_res20;
  double local_268;
  undefined1 local_258 [32];
  double local_238;
  TQuat<double> local_228;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined1 local_1f0 [16];
  double local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined1 local_1c0 [16];
  double local_1b0;
  double local_1a8;
  double dStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  double dStack_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  TQuat<double> local_128;
  TQuat<double> local_108;
  TQuat<double> local_e8 [5];
  
  dVar18 = __real_3e45798ee0000000;
  pFVar30 = (FName *)(this->GoalContainer).Goals.AllocatorInstance.Data;
  local_res18 = (this->GoalContainer).Goals.ArrayNum;
  uVar26 = (ulonglong)(int)local_res18;
  pFVar28 = (FName *)&pFVar30[2].Number;
  local_res20 = pFVar30 + uVar26 * 0x16;
  local_res10 = param_1;
  do {
    pFVar20 = local_res20;
    if ((this->GoalContainer).Goals.ArrayNum != (int)uVar26) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FIKRigGoal,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar30 == pFVar20) {
      return;
    }
    FVar7 = *pFVar30;
    uVar22 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
    if (*(int *)&(this->GoalBones).field_0x8 != *(int *)&(this->GoalBones).field_0x34) {
      puVar8 = *(undefined1 **)&(this->GoalBones).field_0x40;
      puVar27 = &(this->GoalBones).field_0x38;
      if (puVar8 != (undefined1 *)0x0) {
        puVar27 = puVar8;
      }
      iVar23 = *(int *)(puVar27 +
                       (ulonglong)
                       (*(int *)&(this->GoalBones).field_0x48 - 1U & FVar7.Number + uVar22) * 4);
      if (iVar23 != -1) {
        do {
          if (*(FName *)((longlong)iVar23 * 0x20 + *(longlong *)&this->GoalBones) == FVar7) {
            pTVar24 = TSet<TTuple<FName,FGoalBone>,TDefaultMapHashableKeyFuncs<FName,FGoalBone,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FName,FGoalBone>,TDefaultMapHashableKeyFuncs<FName,FGoalBone,0>,FDefaultSetAllocator>
                              *)&this->GoalBones,*pFVar30);
            if ((pTVar24 == (TTuple<FName,FGoalBone> *)0x0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Pair != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                    ,0x288,L""), bVar21)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar22 = *(uint *)&pTVar24->field_0x10;
            uVar60 = 0;
            if ((int)uVar22 < (this->Skeleton).CurrentPoseGlobal.ArrayNum) {
              uVar60 = ~uVar22 >> 0x1f;
            }
            if ((uVar60 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            dVar11 = *(double *)&pFVar28[2].Number;
            dVar42 = *(double *)&pFVar28[3].Number;
            local_268 = *(double *)&pFVar28[4].Number;
            pFVar29 = (this->Skeleton).CurrentPoseGlobal.AllocatorInstance.Data +
                      (longlong)(int)uVar22 * 0x60;
            UE::Math::TRotator<double>::Quaternion
                      ((TRotator<double> *)&pFVar28[5].Number,(TQuat<double> *)local_258);
            uVar22 = 0xffffffff;
            auVar57._0_8_ = extraout_XMM0_Qb;
            if (((char)pFVar28[-1].Number == '\x01') && (*pFVar28 != (FName)0x0)) {
              uVar22 = FIKRigSkeleton::GetBoneIndexFromName(&this->Skeleton,*pFVar28);
              auVar57._0_8_ = extraout_XMM0_Qb_00;
            }
            if (uVar22 == 0xffffffff) {
              cVar6 = (char)pFVar28[9].Number;
              if (cVar6 != '\0') {
                if (cVar6 == '\x01') {
                  uVar22 = *(uint *)&pTVar24->field_0x10;
                  uVar60 = 0;
                  if ((int)uVar22 < (this->Skeleton).CurrentPoseGlobal.ArrayNum) {
                    uVar60 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar60 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), auVar57._0_8_ = extraout_XMM0_Qb_03, bVar21)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pFVar9 = (this->Skeleton).CurrentPoseGlobal.AllocatorInstance.Data;
                  pFVar1 = pFVar9 + (longlong)(int)uVar22 * 0x60 + 0x20;
                  local_1d8 = *(double *)pFVar1;
                  dStack_1d0 = *(double *)(pFVar1 + 8);
                  local_1c8 = *(double *)(pFVar9 + (longlong)(int)uVar22 * 0x60 + 0x30);
                  dVar11 = local_1d8 + *(double *)&pFVar28[2].Number;
                  dVar42 = dStack_1d0 + *(double *)&pFVar28[3].Number;
                  local_268 = local_1c8 + *(double *)&pFVar28[4].Number;
                }
                else if (cVar6 == '\x02') {
                  auVar54 = *(undefined1 (*) [16])(local_res10->Rotation).ZW.m128d_f64;
                  dVar41 = auVar54._0_8_;
                  dVar51 = *(double *)&pFVar28[4].Number * (local_res10->Scale3D).ZW.m128d_f64[0];
                  auVar57._0_8_ = (local_res10->Scale3D).ZW.m128d_f64[1] * 0.0;
                  auVar59 = *(undefined1 (*) [16])(local_res10->Rotation).XY.m128d_f64;
                  dVar12 = (local_res10->Rotation).ZW.m128d_f64[1];
                  dVar11 = (local_res10->Scale3D).XY.m128d_f64[0] * *(double *)&pFVar28[2].Number;
                  dVar42 = (local_res10->Scale3D).XY.m128d_f64[1] * *(double *)&pFVar28[3].Number;
                  uVar61 = (undefined4)((ulonglong)dVar42 >> 0x20);
                  local_148 = *(undefined1 (*) [16])(local_res10->Rotation).XY.m128d_f64;
                  auVar47 = blendpd(local_148,auVar54,2);
                  auVar55._8_4_ = SUB84(dVar42,0);
                  auVar55._0_8_ = dVar11;
                  auVar55._12_4_ = uVar61;
                  auVar56._0_8_ = auVar55._8_8_ * local_148._0_8_ - local_148._8_8_ * dVar11;
                  auVar56._8_8_ = dVar51 * local_148._8_8_ - dVar41 * dVar42;
                  auVar34._8_4_ = SUB84(dVar42,0);
                  auVar34._0_8_ = dVar11;
                  auVar34._12_4_ = uVar61;
                  auVar35._8_4_ = SUB84(auVar57._0_8_,0);
                  auVar35._0_8_ = dVar51;
                  auVar35._12_4_ = (int)((ulonglong)auVar57._0_8_ >> 0x20);
                  auVar35 = blendpd(auVar34,auVar35,2);
                  auVar36._0_8_ = auVar35._0_8_ * dVar41 - auVar47._0_8_ * dVar51;
                  auVar36._8_8_ = auVar35._8_8_ * auVar54._8_8_ - auVar47._8_8_ * auVar57._0_8_;
                  auVar57 = blendpd(auVar56,auVar36,2);
                  dVar43 = auVar56._8_8_ + auVar56._8_8_;
                  dVar46 = auVar36._0_8_ + auVar36._0_8_;
                  uVar61 = (undefined4)((ulonglong)dVar46 >> 0x20);
                  auVar58._0_8_ = auVar57._0_8_ + auVar57._0_8_;
                  auVar58._8_8_ = auVar57._8_8_ + auVar57._8_8_;
                  auVar52._8_4_ = SUB84(dVar46,0);
                  auVar52._0_8_ = dVar43;
                  auVar52._12_4_ = uVar61;
                  auVar48._8_4_ = SUB84(dVar46,0);
                  auVar48._0_8_ = dVar43;
                  auVar48._12_4_ = uVar61;
                  auVar35 = blendpd(auVar48,auVar58,2);
                  auVar53._0_8_ = auVar52._8_8_ * auVar59._0_8_ - auVar59._8_8_ * dVar43;
                  auVar53._8_8_ = auVar58._0_8_ * auVar59._8_8_ - dVar41 * dVar46;
                  auVar47._8_4_ = SUB84(auVar53._8_8_,0);
                  auVar47._0_8_ = auVar53._0_8_;
                  auVar47._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
                  auVar59 = blendpd(auVar59,auVar54,2);
                  auVar57._0_8_ = auVar35._0_8_ * dVar41 - auVar59._0_8_ * auVar58._0_8_;
                  auVar57._8_8_ = auVar35._8_8_ * auVar54._8_8_ - auVar59._8_8_ * auVar58._8_8_;
                  auVar54 = blendpd(auVar53,auVar57,2);
                  dVar11 = dVar43 * dVar12 + dVar11 + auVar47._8_8_ +
                           (local_res10->Translation).XY.m128d_f64[0];
                  dVar42 = dVar46 * dVar12 + dVar42 + auVar57._0_8_ +
                           (local_res10->Translation).XY.m128d_f64[1];
                  local_268 = auVar58._0_8_ * dVar12 + dVar51 + auVar54._0_8_ +
                              (local_res10->Translation).ZW.m128d_f64[0];
                  local_1f0._8_4_ = SUB84(dVar42,0);
                  local_1f0._0_8_ = dVar11;
                  local_1f0._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
                  local_1e0 = local_268;
                }
                else {
                  bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!\"Enclosing block should never be called\"",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
                                      ,0x20d,L"");
                  auVar57._0_8_ = extraout_XMM0_Qb_01;
                  if (bVar21) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                }
              }
              pTVar19 = local_res10;
              cVar6 = *(char *)((longlong)&pFVar28[9].Number + 1);
              if (cVar6 != '\0') {
                if (cVar6 == '\x01') {
                  pTVar25 = UE::Math::TRotator<double>::Quaternion
                                      ((TRotator<double> *)&pFVar28[5].Number,&local_108);
                  uVar22 = *(uint *)&pTVar24->field_0x10;
                  uVar60 = 0;
                  if ((int)uVar22 < (this->Skeleton).CurrentPoseGlobal.ArrayNum) {
                    uVar60 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar60 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  uVar2 = pTVar25->X;
                  uVar4 = pTVar25->Y;
                  uVar3 = pTVar25->Z;
                  uVar5 = pTVar25->W;
                  pFVar1 = (this->Skeleton).CurrentPoseGlobal.AllocatorInstance.Data;
                  auVar50._8_4_ = (int)uVar2;
                  auVar50._0_8_ = uVar2;
                  auVar50._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
                  auVar59._8_4_ = (int)uVar4;
                  auVar59._0_8_ = uVar4;
                  auVar59._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
                  pFVar9 = pFVar1 + (longlong)(int)uVar22 * 0x60 + 0x10;
                  dVar43 = *(double *)pFVar9;
                  dVar46 = *(double *)(pFVar9 + 8);
                  pFVar1 = pFVar1 + (longlong)(int)uVar22 * 0x60;
                  dVar12 = *(double *)pFVar1;
                  dVar41 = *(double *)(pFVar1 + 8);
                  auVar54._8_4_ = (int)uVar3;
                  auVar54._0_8_ = uVar3;
                  auVar54._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
                  auVar57._0_8_ =
                       auVar54._8_8_ * dVar12 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                  local_258._0_8_ =
                       (double)uVar2 * dVar46 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                       dVar12 * (double)uVar5 +
                       (double)uVar4 * dVar43 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                       (double)uVar3 * dVar41 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                  local_258._8_8_ =
                       auVar50._8_8_ * dVar43 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                       dVar41 * (double)uVar5 +
                       auVar59._8_8_ * dVar46 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                       auVar57._0_8_;
                  dVar51 = (double)uVar2 * dVar41 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                           dVar43 * (double)uVar5 +
                           (double)uVar4 * dVar12 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                           (double)uVar3 * dVar46 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                  dVar43 = (double)uVar2 * dVar12 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                           dVar46 * (double)uVar5 +
                           (double)uVar4 * dVar41 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                           (double)uVar3 * dVar43 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                  local_178._8_4_ = SUB84(dVar43,0);
                  local_178._0_8_ = dVar51;
                  local_178._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
                  local_188 = (double)local_258._0_8_;
                  dStack_180 = (double)local_258._8_8_;
                }
                else {
                  if (cVar6 != '\x02') {
                    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!\"Enclosing block should never be called\"",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
                                        ,0x227,L"");
                    auVar57._0_8_ = extraout_XMM0_Qb_02;
                    if (bVar21) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    goto LAB_14df4fac5;
                  }
                  pTVar25 = UE::Math::TRotator<double>::Quaternion
                                      ((TRotator<double> *)&pFVar28[5].Number,&local_128);
                  auVar57 = *(undefined1 (*) [16])(pTVar19->Rotation).XY.m128d_f64;
                  auVar54 = *(undefined1 (*) [16])(pTVar19->Rotation).ZW.m128d_f64;
                  dVar43 = auVar57._0_8_;
                  dVar14 = pTVar25->Z;
                  dVar15 = pTVar25->W;
                  auVar49._8_4_ = auVar57._0_4_;
                  auVar49._0_8_ = dVar43;
                  auVar49._12_4_ = auVar57._4_4_;
                  dVar16 = pTVar25->X;
                  dVar17 = pTVar25->Y;
                  dVar41 = auVar54._8_8_;
                  dVar12 = auVar54._0_8_;
                  dVar46 = auVar57._8_8_;
                  auVar37._8_4_ = auVar54._0_4_;
                  auVar37._0_8_ = dVar12;
                  auVar37._12_4_ = auVar54._4_4_;
                  auVar57._0_8_ =
                       auVar37._8_8_ * dVar16 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                  local_258._0_8_ =
                       dVar43 * dVar15 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                       dVar16 * dVar41 +
                       dVar14 * dVar46 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                       dVar12 * dVar17 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                  local_258._8_8_ =
                       auVar49._8_8_ * dVar14 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                       dVar17 * dVar41 +
                       dVar15 * dVar46 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                       auVar57._0_8_;
                  dVar51 = dVar43 * dVar17 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                           dVar14 * dVar41 +
                           dVar16 * dVar46 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                           dVar12 * dVar15 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                  dVar43 = dVar43 * dVar16 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                           dVar15 * dVar41 +
                           dVar17 * dVar46 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                           dVar12 * dVar14 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                  local_198._8_4_ = SUB84(dVar43,0);
                  local_198._0_8_ = dVar51;
                  local_198._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
                  local_1a8 = (double)local_258._0_8_;
                  dStack_1a0 = (double)local_258._8_8_;
                }
                local_258._24_4_ = SUB84(dVar43,0);
                local_258._16_8_ = dVar51;
                local_258._28_4_ = (int)((ulonglong)dVar43 >> 0x20);
              }
            }
            else {
              uVar60 = 0;
              if ((int)uVar22 < (this->Skeleton).CurrentPoseGlobal.ArrayNum) {
                uVar60 = ~uVar22 >> 0x1f;
              }
              if ((uVar60 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pFVar9 = (this->Skeleton).CurrentPoseGlobal.AllocatorInstance.Data;
              lVar31 = (longlong)(int)uVar22 * 0x60;
              pFVar1 = pFVar9 + lVar31 + 0x20;
              dVar11 = *(double *)pFVar1;
              dVar42 = *(double *)(pFVar1 + 8);
              local_268 = *(double *)(pFVar9 + lVar31 + 0x30);
              uVar60 = 0;
              if ((int)uVar22 < (this->Skeleton).CurrentPoseGlobal.ArrayNum) {
                uVar60 = ~uVar22 >> 0x1f;
              }
              local_208 = dVar11;
              dStack_200 = dVar42;
              local_1f8 = local_268;
              if ((uVar60 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pFVar9 = (this->Skeleton).CurrentPoseGlobal.AllocatorInstance.Data;
              pFVar1 = pFVar9 + lVar31;
              local_258._0_8_ = *(undefined8 *)pFVar1;
              local_258._8_8_ = *(undefined8 *)(pFVar1 + 8);
              pFVar9 = pFVar9 + lVar31 + 0x10;
              auVar57._0_8_ = *(double *)(pFVar9 + 8);
              local_258._16_16_ = *(undefined1 (*) [16])pFVar9;
            }
LAB_14df4fac5:
            auVar54 = *(undefined1 (*) [16])(pFVar29 + 0x20);
            local_1b0 = *(double *)(pFVar29 + 0x30);
            dVar51 = (double)(float)pFVar28[8].Number;
            auVar13._4_8_ = auVar57._0_8_;
            auVar13._0_4_ = auVar54._4_4_;
            auVar38._0_8_ = auVar13._0_8_ << 0x20;
            auVar38._8_4_ = auVar54._8_4_;
            auVar38._12_4_ = auVar54._12_4_;
            *(double *)&pFVar28[10].Number = (dVar11 - auVar54._0_8_) * dVar51 + auVar54._0_8_;
            *(double *)&pFVar28[0xb].Number = (dVar42 - auVar38._8_8_) * dVar51 + auVar38._8_8_;
            *(double *)&pFVar28[0xc].Number = (local_268 - local_1b0) * dVar51 + local_1b0;
            local_228.X = *(double *)pFVar29;
            local_228.Y = *(double *)(pFVar29 + 8);
            local_228.Z = *(double *)(pFVar29 + 0x10);
            local_228.W = *(double *)(pFVar29 + 0x18);
            local_1c0 = auVar54;
            pTVar25 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                (local_e8,&local_228,(TQuat<double> *)local_258,
                                 (double)(float)pFVar28[9].ComparisonIndex.Value);
            local_238 = dVar18;
            dVar11 = pTVar25->X;
            dVar42 = pTVar25->Y;
            auVar57._0_8_ = pTVar25->Z;
            dVar51 = pTVar25->W;
            dVar43 = dVar11 * dVar11 + auVar57._0_8_ * auVar57._0_8_;
            dVar46 = dVar42 * dVar42 + dVar51 * dVar51;
            auVar39._8_4_ = SUB84(dVar46,0);
            auVar39._0_8_ = dVar43;
            auVar39._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
            auVar40._0_8_ = auVar39._8_8_ + dVar43;
            auVar40._8_8_ = dVar43 + dVar46;
            auVar54 = sqrtpd(auVar54,auVar40);
            uVar32 = -(ulonglong)(dVar18 <= auVar40._0_8_);
            uVar33 = -(ulonglong)(dVar18 <= auVar40._8_8_);
            uVar22 = (uint)(uVar32 >> 0x20);
            uVar60 = (uint)(uVar33 >> 0x20);
            auVar59 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar54)
            ;
            local_168._0_8_ = uVar32 & (ulonglong)(auVar59._0_8_ * dVar11);
            uVar26 = uVar33 & (ulonglong)(auVar59._8_8_ * dVar42);
            local_168._8_4_ = (undefined4)uVar26;
            local_168._12_4_ = (undefined4)(uVar26 >> 0x20);
            auVar44._0_4_ =
                 ~(uint)uVar32 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
            auVar44._4_4_ =
                 ~uVar22 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                 0x20);
            auVar44._8_4_ =
                 ~(uint)uVar33 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            auVar44._12_4_ =
                 ~uVar60 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                                 0x20);
            local_168 = local_168 | auVar44;
            auVar54 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar54)
            ;
            local_158._0_4_ =
                 ~(uint)uVar32 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
            local_158._4_4_ =
                 ~uVar22 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                                 0x20);
            local_158._8_4_ =
                 ~(uint)uVar33 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_158._12_4_ =
                 ~uVar60 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                                 0x20);
            auVar45._0_8_ = (ulonglong)(auVar54._0_8_ * auVar57._0_8_) & uVar32;
            uVar33 = (ulonglong)(auVar54._8_8_ * dVar51) & uVar33;
            auVar45._8_4_ = (undefined4)uVar33;
            auVar45._12_4_ = (undefined4)(uVar33 >> 0x20);
            local_158 = local_158 | auVar45;
            *(undefined1 (*) [16])&pFVar28[0xd].Number = local_168;
            *(undefined1 (*) [16])&pFVar28[0xf].Number = local_158;
            break;
          }
          iVar23 = *(int *)((longlong)iVar23 * 0x20 + 0x18 + *(longlong *)&this->GoalBones);
        } while (iVar23 != -1);
      }
    }
    pFVar30 = pFVar30 + 0x16;
    uVar26 = (ulonglong)local_res18;
    pFVar28 = pFVar28 + 0x16;
  } while( true );
}

// SetIKGoal @ 14df54dd0

void __thiscall FIKRigProcessor::SetIKGoal(FIKRigProcessor *this,FIKRigGoal *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bInitialized != false) {
    FIKRigGoalContainer::SetIKGoal(&this->GoalContainer,param_1);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_727633314675949218>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
                     ,0x15e,"bInitialized");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetIKGoal @ 14df54e30

void __thiscall FIKRigProcessor::SetIKGoal(FIKRigProcessor *this,UIKRigEffectorGoal *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bInitialized != false) {
    FIKRigGoalContainer::SetIKGoal(&this->GoalContainer,param_1);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_727633314675949208>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
                     ,0x168,"bInitialized");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetInputBoneGlobal @ 14df54e90

void __thiscall
FIKRigProcessor::SetInputBoneGlobal(FIKRigProcessor *this,int *param_1,TTransform<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  uint uVar20;
  longlong lVar21;
  
  uVar2 = *param_1;
  if (((int)uVar2 < 0) || ((this->Skeleton).CurrentPoseGlobal.ArrayNum <= (int)uVar2)) {
    bVar19 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_727633314675949245>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
                        ,0x143,"Skeleton.CurrentPoseGlobal.IsValidIndex(InBoneIndex)");
    if (!bVar19) {
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar5 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
  uVar6 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
  uVar7 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
  uVar8 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
  dVar9 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar10 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar11 = (param_2->Translation).XY.m128d_f64[0];
  dVar12 = (param_2->Translation).XY.m128d_f64[1];
  dVar13 = (param_2->Translation).ZW.m128d_f64[0];
  dVar14 = (param_2->Translation).ZW.m128d_f64[1];
  dVar15 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar16 = (param_2->Scale3D).XY.m128d_f64[1];
  dVar17 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar18 = (param_2->Scale3D).ZW.m128d_f64[1];
  uVar20 = 0;
  if ((int)uVar2 < (this->Skeleton).CurrentPoseGlobal.ArrayNum) {
    uVar20 = ~uVar2 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->Skeleton).CurrentPoseGlobal.AllocatorInstance.Data;
  lVar21 = (longlong)(int)uVar2 * 0x60;
  pFVar1 = pFVar3 + lVar21;
  *(undefined4 *)pFVar1 = uVar5;
  *(undefined4 *)(pFVar1 + 4) = uVar6;
  *(undefined4 *)(pFVar1 + 8) = uVar7;
  *(undefined4 *)(pFVar1 + 0xc) = uVar8;
  *(double *)(pFVar3 + lVar21 + 0x10) = dVar9;
  *(double *)(pFVar3 + lVar21 + 0x10 + 8) = dVar10;
  *(double *)(pFVar3 + lVar21 + 0x20) = dVar11;
  *(double *)(pFVar3 + lVar21 + 0x20 + 8) = dVar12;
  *(double *)(pFVar3 + lVar21 + 0x30) = dVar13;
  *(double *)(pFVar3 + lVar21 + 0x30 + 8) = dVar14;
  *(double *)(pFVar3 + lVar21 + 0x40) = dVar15;
  *(double *)(pFVar3 + lVar21 + 0x40 + 8) = dVar16;
  *(double *)(pFVar3 + lVar21 + 0x50) = dVar17;
  *(double *)(pFVar3 + lVar21 + 0x50 + 8) = dVar18;
  return;
}

// SetInputPoseGlobal @ 14df54fe0

void __thiscall
FIKRigProcessor::SetInputPoseGlobal
          (FIKRigProcessor *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if (this->bInitialized == false) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_727633314675949255>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
                       ,0x139,"bInitialized");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if ((param_1->ArrayNum != (this->Skeleton).CurrentPoseGlobal.ArrayNum) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InGlobalBoneTransforms.Num() == Skeleton.CurrentPoseGlobal.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
                           ,0x13d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar6 = &(this->Skeleton).CurrentPoseGlobal;
    if (pTVar6 != param_1) {
      iVar2 = (this->Skeleton).CurrentPoseGlobal.ArrayMax;
      piVar1 = &(this->Skeleton).CurrentPoseGlobal.ArrayMax;
      iVar3 = param_1->ArrayNum;
      _Src = (param_1->AllocatorInstance).Data;
      (this->Skeleton).CurrentPoseGlobal.ArrayNum = iVar3;
      if ((iVar3 == 0) && (iVar2 == 0)) {
        *piVar1 = 0;
        return;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar3,iVar2,&pTVar6->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x60);
      }
    }
  }
  return;
}

// SetInputPoseToRefPose @ 14df55100

void __thiscall FIKRigProcessor::SetInputPoseToRefPose(FIKRigProcessor *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bInitialized != false) {
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              (&(this->Skeleton).CurrentPoseGlobal,&(this->Skeleton).RefPoseGlobal);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_727633314675949236>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
                     ,0x14c,"bInitialized");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetNeedsInitialized @ 14df55700

void __thiscall FIKRigProcessor::SetNeedsInitialized(FIKRigProcessor *this)

{
  this->bInitialized = false;
  this->bTriedToInitialize = false;
  return;
}

// Solve @ 14df561d0

void __thiscall FIKRigProcessor::Solve(FIKRigProcessor *this,TTransform<double> *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UPackage *pUVar4;
  UScriptStruct *pUVar5;
  int iVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  if (this->bInitialized != false) {
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              (&(this->Skeleton).CurrentPoseLocal,&(this->Skeleton).CurrentPoseGlobal);
    iVar6 = 0;
    if (0 < (this->Skeleton).CurrentPoseGlobal.ArrayNum) {
      do {
        FIKRigSkeleton::UpdateLocalTransformFromGlobal(&this->Skeleton,iVar6);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (this->Skeleton).CurrentPoseGlobal.ArrayNum);
    }
    ResolveFinalGoalTransforms(this,param_1);
    iVar6 = (this->Solvers).ArrayNum;
    pFVar8 = (this->Solvers).AllocatorInstance.Data;
    pFVar9 = pFVar8 + (longlong)iVar6 * 0x10;
    pUVar5 = Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton;
    while( true ) {
      if ((this->Solvers).ArrayNum != iVar6) {
        `TCheckedPointerIterator<FInstancedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        pUVar5 = Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton;
      }
      if (pFVar8 == pFVar9) break;
      plVar7 = *(longlong **)(pFVar8 + 8);
      if ((plVar7 == (longlong *)0x0) || (lVar2 = *(longlong *)pFVar8, lVar2 == 0)) {
LAB_14df562e4:
        plVar7 = (longlong *)0x0;
      }
      else {
        if (pUVar5 == (UScriptStruct *)0x0) {
          pUVar4 = Z_Construct_UPackage__Script_IKRig();
          pUVar5 = GetStaticStruct(Z_Construct_UScriptStruct_FIKRigSolverBase,(UObject *)pUVar4,
                                   L"IKRigSolverBase");
          Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton = pUVar5;
          if (pUVar5 == (UScriptStruct *)0x0) goto LAB_14df562e4;
        }
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_14df562e4;
      }
      if ((char)plVar7[1] != '\0') {
        (**(code **)(*plVar7 + 0x10))(plVar7,&this->Skeleton,&this->GoalContainer);
        pUVar5 = Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton;
      }
      pFVar8 = pFVar8 + 0x10;
    }
  }
  return;
}

