// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 18

// StaticStruct @ 14def3510

UScriptStruct * __cdecl FIKRetargetRunIKRigOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOp.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetRunIKRigOp,(UObject *)pUVar1,
                         L"IKRetargetRunIKRigOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOp.OuterSingleton;
}

// Initialize @ 14def3590

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FIKRetargetRunIKRigOp::Initialize
          (FIKRetargetRunIKRigOp *this,FIKRetargetProcessor *param_1,FRetargetSkeleton *param_2,
          FTargetSkeleton *param_3,FIKRetargetOpBase *param_4,FIKRigLogger *param_5)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  UIKRigDefinition *pUVar4;
  ITextData *pIVar5;
  FText *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  ITextData *pIVar10;
  FScriptContainerElement *pFVar11;
  FName local_res8;
  int local_a8 [2];
  undefined1 local_a0 [16];
  undefined1 local_90 [24];
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  pUVar4 = (this->Settings).IKRigAsset.field0_0x0.DebugPtr;
  if (pUVar4 == (UIKRigDefinition *)0x0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_a0,L"RunIKRigSolversOp",L"NoIKRigFound",
                        L"Run IK Rig Op: No IK Rig asset was specified.");
    FIKRigLogger::LogWarning(param_5,pFVar6);
    if ((ITextData *)local_a0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_a0._0_8_ + 0x10))();
    }
    return false;
  }
  FIKRigProcessor::Initialize
            (&this->IKRigProcessor,pUVar4,(USkeletalMesh *)param_3->_padding_,
             &param_1->GoalContainer);
  if ((this->IKRigProcessor).bInitialized == false) {
    local_res8 = *(FName *)(param_3->_padding_ + 0x18);
    ::FName::ToString(&local_res8,(FString *)local_a0);
    pFVar6 = FText::FromString(&local_58,(FString *)local_a0);
    local_res8 = (FName)((this->Settings).IKRigAsset.field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_res8,(FString *)(local_90 + 8));
    pFVar7 = FText::FromString(&local_48,(FString *)(local_90 + 8));
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"RunIKRigSolversOp",L"CouldNotInitializeIKRig",
                        L"Run IK Rig Op: unable to initialize the IK Rig, {0} for the Skeletal Mesh {1}. See previous warnings."
                       );
    pFVar9 = FTextFormat::FTextFormat(&local_38,pFVar8,Default);
    pFVar6 = FText::Format<FText,FText>(&local_78,pFVar9,pFVar7,pFVar6);
    FIKRigLogger::LogWarning(param_5,pFVar6);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    if ((int *)local_90._8_8_ != (int *)0x0) {
      FMemory::Free((void *)local_90._8_8_);
    }
    if ((ITextData *)local_a0._0_8_ != (ITextData *)0x0) {
      FMemory::Free((void *)local_a0._0_8_);
    }
  }
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->GoalBoneIndicesMap);
  pUVar4 = (this->Settings).IKRigAsset.field0_0x0.DebugPtr;
  pFVar11 = (pUVar4->Goals).AllocatorInstance.Data;
  iVar3 = (pUVar4->Goals).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar3 * 8;
LAB_14def3743:
  do {
    if ((pUVar4->Goals).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UIKRigEffectorGoal_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar11 == pFVar1) {
      bVar2 = (this->IKRigProcessor).bInitialized;
      *(bool *)((longlong)&this->_padding_ + 5) = bVar2;
      return bVar2;
    }
    pIVar5 = (ITextData *)param_3->_padding_;
    for (pIVar10 = pIVar5; pIVar10 != pIVar5 + (int)param_3->_padding_; pIVar10 = pIVar10 + 1) {
      if (*pIVar10 == *(ITextData *)(*(longlong *)pFVar11 + 0x30)) {
        local_a8[0] = (int)((longlong)pIVar10 - (longlong)pIVar5 >> 3);
        if (local_a8[0] == -1) goto LAB_14def378c;
        local_a0._8_8_ = local_a8;
        local_a0._0_8_ = (ITextData *)(*(longlong *)pFVar11 + 0x30);
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                  ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    *)&this->GoalBoneIndicesMap,
                   (TPairInitializer<FName_const_&,int_const_&> *)local_90,(bool *)local_a0);
        pFVar11 = pFVar11 + 8;
        goto LAB_14def3743;
      }
    }
    local_a8[0] = -1;
LAB_14def378c:
    pFVar11 = pFVar11 + 8;
  } while( true );
}

// Run @ 14def3820

void __thiscall
FIKRetargetRunIKRigOp::Run
          (FIKRetargetRunIKRigOp *this,FIKRetargetProcessor *param_1,double param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  FIKRigGoal *pFVar7;
  FIKRigGoal *pFVar8;
  undefined1 local_res10 [8];
  
  if (param_1->bIKForcedOff == false) {
    pFVar8 = (FIKRigGoal *)(param_1->GoalContainer).Goals.AllocatorInstance.Data;
    iVar2 = (param_1->GoalContainer).Goals.ArrayNum;
    pFVar7 = pFVar8 + iVar2;
    while( true ) {
      if ((param_1->GoalContainer).Goals.ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FIKRigGoal_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      bVar5 = (this->IKRigProcessor).bInitialized;
      if (pFVar8 == pFVar7) break;
      if (bVar5 == false) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_727633314675949218>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
                           ,0x15e,"bInitialized");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        FIKRigGoalContainer::SetIKGoal(&(this->IKRigProcessor).GoalContainer,pFVar8);
      }
      pFVar8 = pFVar8 + 1;
    }
    if ((bVar5 == false) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_727633314675949108>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
                           ,0x1cc,"bInitialized"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((this->IKRigProcessor).GoalContainer.bRigNeedsInitialized != false) {
      FIKRigProcessor::Initialize
                (&this->IKRigProcessor,(this->Settings).IKRigAsset.field0_0x0.DebugPtr,
                 (USkeletalMesh *)(param_1->TargetSkeleton)._padding_,&param_1->GoalContainer);
    }
    if ((this->IKRigProcessor).bInitialized == false) {
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
      if ((param_4->ArrayNum != (this->IKRigProcessor).Skeleton.CurrentPoseGlobal.ArrayNum) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InGlobalBoneTransforms.Num() == Skeleton.CurrentPoseGlobal.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigProcessor.cpp"
                             ,0x13d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar6 = &(this->IKRigProcessor).Skeleton.CurrentPoseGlobal;
      if (pTVar6 != param_4) {
        iVar2 = param_4->ArrayNum;
        piVar1 = &(this->IKRigProcessor).Skeleton.CurrentPoseGlobal.ArrayMax;
        _Src = (param_4->AllocatorInstance).Data;
        iVar3 = *piVar1;
        (this->IKRigProcessor).Skeleton.CurrentPoseGlobal.ArrayNum = iVar2;
        if ((iVar2 == 0) && (iVar3 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,iVar2,iVar3,&pTVar6->AllocatorInstance,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy((pTVar6->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x60);
          }
        }
      }
    }
    FIKRigProcessor::Solve(&this->IKRigProcessor,&UE::Math::TTransform<double>::Identity);
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              (param_4,&(this->IKRigProcessor).Skeleton.CurrentPoseGlobal);
  }
  return;
}

// OnAddedToStack @ 14def3a60

void __thiscall
FIKRetargetRunIKRigOp::OnAddedToStack
          (FIKRetargetRunIKRigOp *this,UIKRetargeter *param_1,FIKRetargetOpBase *param_2)

{
  UIKRigDefinition *pUVar1;
  UIKRigDefinition *pUVar2;
  
  pUVar1 = UIKRetargeter::GetIKRig(param_1,Target);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UIKRigDefinition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Settings).IKRigAsset.field0_0x0.DebugPtr = pUVar1;
  pUVar2 = UIKRetargeter::GetIKRig(param_1,Source);
  FRetargetChainMapping::ReinitializeWithIKRigs(&this->ChainMapping,pUVar2,pUVar1);
  FRetargetChainMapping::AutoMapChains(&this->ChainMapping,Fuzzy,bForceRemap);
  return;
}

// OnAssignIKRig @ 14def3ae0

void __thiscall
FIKRetargetRunIKRigOp::OnAssignIKRig
          (FIKRetargetRunIKRigOp *this,ERetargetSourceOrTarget param_1,UIKRigDefinition *param_2,
          FIKRetargetOpBase *param_3)

{
  if (param_1 != Target) {
    param_2 = (this->ChainMapping).TargetIKRig.field0_0x0.DebugPtr;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UIKRigDefinition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->Settings).IKRigAsset.field0_0x0.DebugPtr = param_2;
  FRetargetChainMapping::ReinitializeWithIKRigs
            (&this->ChainMapping,(this->ChainMapping).SourceIKRig.field0_0x0.DebugPtr,param_2);
  FRetargetChainMapping::AutoMapChains(&this->ChainMapping,Fuzzy,bForceRemap);
  return;
}

// GetSettings @ 14def3b50

FIKRetargetOpSettingsBase * __thiscall
FIKRetargetRunIKRigOp::GetSettings(FIKRetargetRunIKRigOp *this)

{
  return (FIKRetargetOpSettingsBase *)&this->Settings;
}

// GetSettingsType @ 14def3b60

UScriptStruct * __thiscall FIKRetargetRunIKRigOp::GetSettingsType(FIKRetargetRunIKRigOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetRunIKRigOpSettings,(UObject *)pUVar1,
                         L"IKRetargetRunIKRigOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOpSettings.OuterSingleton;
}

// GetType @ 14def3ba0

UScriptStruct * __thiscall FIKRetargetRunIKRigOp::GetType(FIKRetargetRunIKRigOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOp.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetRunIKRigOp,(UObject *)pUVar1,
                         L"IKRetargetRunIKRigOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOp.OuterSingleton;
}

// CanHaveChildOps @ 14def3be0

bool __thiscall FIKRetargetRunIKRigOp::CanHaveChildOps(FIKRetargetRunIKRigOp *this)

{
  return true;
}

// InitializeBeforeChildren @ 14def3cb0

void __thiscall
FIKRetargetRunIKRigOp::InitializeBeforeChildren
          (FIKRetargetRunIKRigOp *this,FIKRetargetProcessor *param_1,FRetargetSkeleton *param_2,
          FTargetSkeleton *param_3,FIKRigLogger *param_4)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = FResolvedRetargetPoseSet::GetGlobalRetargetPose
                     ((FResolvedRetargetPoseSet *)&param_3->_padding_);
  ResetGoalContainer(this,pTVar1,&param_1->GoalContainer);
  return;
}

// RunBeforeChildren @ 14def3e00

void __thiscall
FIKRetargetRunIKRigOp::RunBeforeChildren
          (FIKRetargetRunIKRigOp *this,FIKRetargetProcessor *param_1,double param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  ResetGoalContainer(this,param_4,&param_1->GoalContainer);
  return;
}

// GetCustomTargetIKRig @ 14def3e20

UIKRigDefinition * __thiscall
FIKRetargetRunIKRigOp::GetCustomTargetIKRig(FIKRetargetRunIKRigOp *this)

{
  return (this->Settings).IKRigAsset.field0_0x0.DebugPtr;
}

// GetChainMapping @ 14def3e30

FRetargetChainMapping * __thiscall
FIKRetargetRunIKRigOp::GetChainMapping(FIKRetargetRunIKRigOp *this)

{
  return &this->ChainMapping;
}

// OnReinitPropertyEdited @ 14def3e40

void __thiscall
FIKRetargetRunIKRigOp::OnReinitPropertyEdited
          (FIKRetargetRunIKRigOp *this,FPropertyChangedEvent *param_1)

{
  FRetargetChainMapping::ReinitializeWithIKRigs
            (&this->ChainMapping,(this->ChainMapping).SourceIKRig.field0_0x0.DebugPtr,
             (this->Settings).IKRigAsset.field0_0x0.DebugPtr);
  return;
}

// FIKRetargetRunIKRigOp @ 14df173a0

FIKRetargetRunIKRigOp * __thiscall
FIKRetargetRunIKRigOp::FIKRetargetRunIKRigOp(FIKRetargetRunIKRigOp *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7FIKRetargetRunIKRigOp__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  (this->Settings)._padding_ = (longlong)&___7FIKRetargetRunIKRigOpSettings__6B_;
  (this->Settings).GoalDrawSize = 5.0;
  (this->Settings).GoalDrawThickness = 1.0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined4 *)&(this->Settings)._padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&(this->Settings)._padding_ + 4) = 1;
  (this->Settings)._padding_ = 0;
  (this->Settings).IKRigAsset.field0_0x0.DebugPtr = (UIKRigDefinition *)0x0;
  (this->Settings).ExcludedGoals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Settings).ExcludedGoals.ArrayNum = 0;
  (this->Settings).ExcludedGoals.ArrayMax = 0;
  (this->Settings).bDrawGoals = true;
  (this->Settings).bDrawGoalBoneLocations = true;
  (this->ChainMapping).ChainMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChainMapping).ChainMap.ArrayNum = 0;
  (this->ChainMapping).ChainMap.ArrayMax = 0;
  (this->ChainMapping).SourceIKRig.field0_0x0.DebugPtr = (UIKRigDefinition *)0x0;
  (this->ChainMapping).TargetIKRig.field0_0x0.DebugPtr = (UIKRigDefinition *)0x0;
  FIKRigProcessor::FIKRigProcessor(&this->IKRigProcessor);
  *(undefined8 *)&this->GoalBoneIndicesMap = 0;
  *(undefined8 *)&(this->GoalBoneIndicesMap).field_0x8 = 0;
  *(undefined8 *)&(this->GoalBoneIndicesMap).field_0x20 = 0;
  *(undefined4 *)&(this->GoalBoneIndicesMap).field_0x28 = 0;
  *(undefined4 *)&(this->GoalBoneIndicesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->GoalBoneIndicesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GoalBoneIndicesMap).field_0x34 = 0;
  *(undefined8 *)&(this->GoalBoneIndicesMap).field_0x40 = 0;
  *(undefined4 *)&(this->GoalBoneIndicesMap).field_0x48 = 0;
  return this;
}

// ~FIKRetargetRunIKRigOp @ 14df1bc80

void __thiscall FIKRetargetRunIKRigOp::~FIKRetargetRunIKRigOp(FIKRetargetRunIKRigOp *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  
  *(undefined4 *)&(this->GoalBoneIndicesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GoalBoneIndicesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GoalBoneIndicesMap);
  FIKRigProcessor::~FIKRigProcessor(&this->IKRigProcessor);
  pFVar2 = (this->ChainMapping).ChainMap.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Settings).ExcludedGoals.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->Settings)._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  pUVar3 = (UObject *)(this->Settings)._padding_;
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
    (this->Settings)._padding_ = 0;
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpBase__6B_;
  return;
}

// GetRequiredTargetChains @ 14df3e540

/* WARNING: Type propagation algorithm not settling */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FIKRetargetRunIKRigOp::GetRequiredTargetChains
          (FIKRetargetRunIKRigOp *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UIKRigDefinition *pUVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> *local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  longlong local_68;
  ForAnyElementType local_58;
  undefined8 local_50;
  
  pUVar1 = (this->Settings).IKRigAsset.field0_0x0.DebugPtr;
  if (pUVar1 == (UIKRigDefinition *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_res20 = (pUVar1->RetargetDefinition).BoneChains.ArrayNum;
  uVar7 = (ulonglong)(int)local_res20;
  pFVar11 = (pUVar1->RetargetDefinition).BoneChains.AllocatorInstance.Data;
  pFVar8 = pFVar11 + uVar7 * 0x30;
  local_res10 = __return_storage_ptr__;
  do {
    if ((pUVar1->RetargetDefinition).BoneChains.ArrayNum != (int)uVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FBoneChain_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar8) {
      (local_res10->AllocatorInstance).Data = local_58.Data;
      local_res10->ArrayNum = (int)local_50;
      local_res10->ArrayMax = local_50._4_4_;
      return local_res10;
    }
    if (*(longlong *)(pFVar11 + 0x28) != 0) {
      iVar5 = (this->ChainMapping).ChainMap.ArrayNum;
      pFVar9 = (this->ChainMapping).ChainMap.AllocatorInstance.Data;
      lVar2 = *(longlong *)pFVar11;
      pFVar10 = pFVar9 + (longlong)iVar5 * 0x10;
      while( true ) {
        if ((this->ChainMapping).ChainMap.ArrayNum != iVar5) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FRetargetChainPair_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (pFVar9 == pFVar10) {
          local_68 = 0;
          goto LAB_14df3e654;
        }
        if (*(longlong *)pFVar9 == lVar2) break;
        pFVar9 = pFVar9 + 0x10;
      }
      local_68 = *(longlong *)(pFVar9 + 8);
LAB_14df3e654:
      if (local_68 != 0) {
        if (((local_58.Data <= pFVar11) && (pFVar11 < local_58.Data + (longlong)local_50._4_4_ * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar6;
        }
        iVar5 = (int)local_50;
        if ((int)local_50 == local_50._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_58,(int *)((longlong)&local_50 + 4));
        }
        local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
        *(longlong *)(local_58.Data + (longlong)iVar5 * 8) = *(longlong *)pFVar11;
      }
    }
    uVar7 = (ulonglong)local_res20;
    pFVar11 = pFVar11 + 0x30;
  } while( true );
}

// ResetGoalContainer @ 14df4f0c0

void __thiscall
FIKRetargetRunIKRigOp::ResetGoalContainer
          (FIKRetargetRunIKRigOp *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          FIKRigGoalContainer *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  UIKRigDefinition *pUVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  TTuple<FName,int> *pTVar13;
  TRotator<double> *pTVar14;
  FScriptContainerElement *pFVar15;
  uint *puVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res20 [8];
  TRotator<double> local_70;
  TQuat<double> local_58;
  
  pUVar6 = (this->Settings).IKRigAsset.field0_0x0.DebugPtr;
  if (pUVar6 == (UIKRigDefinition *)0x0) {
    piVar1 = &(param_2->Goals).ArrayMax;
    (param_2->Goals).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,0x10,0,&(param_2->Goals).AllocatorInstance,0,piVar1);
    }
    param_2->bRigNeedsInitialized = true;
    return;
  }
  FIKRigGoalContainer::FillWithGoalArray
            (param_2,(TArray<UIKRigEffectorGoal_*,TSizedDefaultAllocator<32>_> *)&pUVar6->Goals);
  iVar4 = (param_2->Goals).ArrayNum;
  pFVar15 = (param_2->Goals).AllocatorInstance.Data;
  pFVar17 = pFVar15 + (longlong)iVar4 * 0xb0;
  while( true ) {
    if ((param_2->Goals).ArrayNum != iVar4) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FIKRigGoal,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar15 == pFVar17) break;
    pTVar13 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                      *)&this->GoalBoneIndicesMap,*(FName *)(pFVar15 + 8));
    puVar16 = (uint *)&pTVar13->field_0x8;
    if (pTVar13 == (TTuple<FName,int> *)0x0) {
      puVar16 = (uint *)0x0;
    }
    if (((puVar16 == (uint *)0x0) || ((int)*puVar16 < 0)) || (param_1->ArrayNum <= (int)*puVar16)) {
      *(undefined2 *)(pFVar15 + 0x60) = 0x101;
      uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      *(double *)(pFVar15 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)(pFVar15 + 0x30) = uVar3;
      *(double *)(pFVar15 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar10 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      *(double *)(pFVar15 + 0x40) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      *(double *)(pFVar15 + 0x48) = dVar10;
      *(double *)(pFVar15 + 0x50) = UE::Math::TRotator<double>::ZeroRotator.Roll;
      pFVar15 = pFVar15 + 0xb0;
    }
    else {
      *(undefined2 *)(pFVar15 + 0x60) = 0;
      uVar5 = *puVar16;
      uVar12 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar12 = ~uVar5 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar7 = (param_1->AllocatorInstance).Data;
      pFVar2 = pFVar7 + (longlong)(int)uVar5 * 0x60 + 0x20;
      uVar9 = *(undefined8 *)(pFVar2 + 8);
      uVar3 = *(undefined8 *)(pFVar7 + (longlong)(int)uVar5 * 0x60 + 0x30);
      *(undefined8 *)(pFVar15 + 0x28) = *(undefined8 *)pFVar2;
      *(undefined8 *)(pFVar15 + 0x30) = uVar9;
      *(undefined8 *)(pFVar15 + 0x38) = uVar3;
      uVar5 = *puVar16;
      uVar12 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar12 = ~uVar5 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar7 = (param_1->AllocatorInstance).Data;
      pFVar2 = pFVar7 + (longlong)(int)uVar5 * 0x60;
      local_58.X = *(double *)pFVar2;
      local_58.Y = *(double *)(pFVar2 + 8);
      pFVar7 = pFVar7 + (longlong)(int)uVar5 * 0x60 + 0x10;
      local_58.Z = *(double *)pFVar7;
      local_58.W = *(double *)(pFVar7 + 8);
      pTVar14 = UE::Math::TQuat<double>::Rotator(&local_58,&local_70);
      dVar10 = pTVar14->Yaw;
      *(double *)(pFVar15 + 0x40) = pTVar14->Pitch;
      *(double *)(pFVar15 + 0x48) = dVar10;
      *(double *)(pFVar15 + 0x50) = pTVar14->Roll;
      pFVar15 = pFVar15 + 0xb0;
    }
  }
  return;
}

