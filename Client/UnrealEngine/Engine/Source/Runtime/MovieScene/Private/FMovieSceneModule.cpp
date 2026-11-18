// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// StartupModule @ 1461e2980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMovieSceneModule::StartupModule(FMovieSceneModule *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FModuleManager *this_00;
  FName *pFVar6;
  FSharedReferencer<1> FVar7;
  FName local_res8;
  FMovieSceneModule *local_38;
  FSharedReferencer<1> local_30;
  FGuid local_28;
  FGuid local_18;
  
  this_00 = FModuleManager::Get();
  pFVar6 = ::FName::FName(&local_res8,"UniversalObjectLocator");
  FModuleManager::LoadModuleChecked(this_00,*pFVar6);
  local_28.A = 0xaf15add3;
  local_28.B = 0xd76b4d2c;
  local_28.C = 0xa79d574b;
  local_28.D = 0xb4cd9706;
  UE::Core::FVisualizerDebuggingState::Assign
            (&local_28,&UE::MovieScene::GEntityManagerForDebuggingVisualizers);
  local_18.A = 0xf9062bb9;
  local_18.B = 0xd77c4bc7;
  local_18.C = 0x861e5d87;
  local_18.D = 0xd5afb22d;
  UE::Core::FVisualizerDebuggingState::Assign
            (&local_18,&UE::MovieScene::GPlaybackCapabilityIDRegistryForDebuggingVisualizers);
  UE::MovieScene::GPlaybackCapabilityIDRegistryForDebuggingVisualizers =
       UE::MovieScene::FPlaybackCapabilityIDRegistry::Get();
  if ((((this != (FMovieSceneModule *)0x0) && (this->_padding_ != 0)) && (this->_padding_ != 0)) &&
     ((0 < *(int *)(this->_padding_ + 8) &&
      (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InObject || !InObject->DoesSharedInstanceExist()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x7bd,L"Trying to share an already-shared object"), bVar5)))) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_38 = this;
  FVar7.ReferenceController = ::operator_new(0x18);
  if (FVar7.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (FVar7.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMovieSceneModule__UFNoopDefaultDeleter__1__StartupModule_1_UEAAXXZ__00_SharedPointerInternals__6B_
    ;
    FVar7.ReferenceController[1]._padding_ = (longlong)this;
  }
  local_30.ReferenceController = FVar7.ReferenceController;
  if ((this != (FMovieSceneModule *)0x0) &&
     (((this->_padding_ == 0 || (this->_padding_ == 0)) || (*(int *)(this->_padding_ + 8) < 1)))) {
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    this->_padding_ = (longlong)this;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)this->_padding_) {
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar7.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar7.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)this->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      this->_padding_ = (longlong)FVar7.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
  }
  if (&this->ModuleHandle != (TSharedPtr<FMovieSceneModule,1> *)&local_38) {
    (this->ModuleHandle).Object = this;
    local_38 = (FMovieSceneModule *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ModuleHandle).SharedReferenceCount,&local_30);
    FVar7.ReferenceController = local_30.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  UE::MovieScene::FBuiltInComponentTypes::Get();
  return;
}

// ShutdownModule @ 1461e2b70

void __thiscall FMovieSceneModule::ShutdownModule(FMovieSceneModule *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  TUniquePtr<UE::MovieScene::FBuiltInComponentTypes,TDefaultDelete<UE::MovieScene::FBuiltInComponentTypes>_>
  TVar3;
  
  TVar3.Ptr = UE::MovieScene::GMovieSceneBuiltInComponentTypes.Ptr;
  if ((UE::MovieScene::GMovieSceneBuiltInComponentTypes.Ptr != (FBuiltInComponentTypes *)0x0) &&
     (UE::MovieScene::GMovieSceneBuiltInComponentTypes.Ptr = (FBuiltInComponentTypes *)0x0,
     TVar3.Ptr != (FBuiltInComponentTypes *)0x0)) {
    *(undefined4 *)&((TVar3.Ptr)->ResultToBase).field_0x48 = 0;
    pvVar1 = *(void **)&((TVar3.Ptr)->ResultToBase).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(TVar3.Ptr)->ResultToBase);
    pFVar2 = ((TVar3.Ptr)->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<UE::MovieScene::FPropertyDefinition,int>
              ((FPropertyDefinition *)
               ((TVar3.Ptr)->PropertyRegistry).Properties.AllocatorInstance.Data,
               ((TVar3.Ptr)->PropertyRegistry).Properties.ArrayNum);
    pFVar2 = ((TVar3.Ptr)->PropertyRegistry).Properties.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(TVar3.Ptr,0x1e8);
  }
  UE::MovieScene::GMovieSceneBuiltInComponentTypesDestroyed = true;
  return;
}

// RegisterEvaluationGroupParameters @ 1461e2b80

void __thiscall
FMovieSceneModule::RegisterEvaluationGroupParameters
          (FMovieSceneModule *this,FName param_1,FMovieSceneEvaluationGroupParameters *param_2)

{
  TMap<FName,FMovieSceneEvaluationGroupParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneEvaluationGroupParameters,0>_>
  *this_00;
  FName *pFVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FName,FMovieSceneEvaluationGroupParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneEvaluationGroupParameters,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 *puVar14;
  undefined1 local_res8 [8];
  FName local_res10;
  int local_res18;
  int local_res20;
  TPairInitializer<FName_const_&,FMovieSceneEvaluationGroupParameters_const_&> local_e8;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  TMap<FName,FMovieSceneEvaluationGroupParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneEvaluationGroupParameters,0>_>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FName *local_80;
  FMovieSceneEvaluationGroupParameters *local_78;
  undefined4 local_54;
  
  local_res10 = param_1;
  if (((param_1 == (FName)0x0) || (param_2->EvaluationPriority == 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GroupName.IsNone() && GroupParameters.EvaluationPriority != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneModule.cpp"
                         ,0x7b,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iStack_d8 = 0;
  this_00 = &this->EvaluationGroupParameters;
  iVar3 = *(int *)&(this->EvaluationGroupParameters).field_0x28;
  local_d0 = &(this->EvaluationGroupParameters).field_0x10;
  uStack_d4 = 1;
  local_c0 = 0;
  iStack_c4 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->EvaluationGroupParameters).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)local_d0;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_d8;
      local_c0 = local_c0 + 0x20;
      iStack_d8 = iStack_d8 + 1;
      iStack_c4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_1461e2c5e;
      uVar11 = puVar13[lVar8 + 1];
    }
    uStack_d4 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_d4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iStack_c4 = local_c0 + -1 + local_res18;
    if (iVar3 < iStack_c4) {
      iStack_c4 = iVar3;
    }
  }
LAB_1461e2c5e:
  uVar11 = *(uint *)&(this->EvaluationGroupParameters).field_0x28;
  uStack_bc = local_54;
  puVar14 = &(this->EvaluationGroupParameters).field_0x10;
  iStack_b8 = *(int *)&(this->EvaluationGroupParameters).field_0x8 -
              *(int *)&(this->EvaluationGroupParameters).field_0x34;
  uStack_c8 = 0xffffffff;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_a8.CurrentBitIndex = iStack_c4;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  TStack_a8._padding_ = CONCAT44(uStack_d4,iStack_d8);
  iVar9 = (int)uVar11 >> 5;
  TStack_a8._28_4_ = local_54;
  TStack_a8.BaseBitIndex = local_c0;
  uStack_88 = CONCAT44(uStack_b4,iStack_b8);
  local_e8.Value = (FMovieSceneEvaluationGroupParameters *)this_00;
  local_b0 = this_00;
  TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d0;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->EvaluationGroupParameters).field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&(this->EvaluationGroupParameters).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar14;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1461e2d60;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    uVar11 = local_res20 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_1461e2d60:
  while( true ) {
    pTVar6 = local_b0;
    if (*(int *)(&local_b0->field_0x0 + 8) - *(int *)(&local_b0->field_0x0 + 0x34) != (int)uStack_88
       ) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneEvaluationGroupParameters>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_a8.CurrentBitIndex == uVar11) &&
        (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar14)) && (pTVar6 == this_00)
       ) {
      local_80 = &local_res10;
      local_78 = param_2;
      TSet<TTuple<FName,FMovieSceneEvaluationGroupParameters>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneEvaluationGroupParameters,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FMovieSceneEvaluationGroupParameters_const_&>_>
                ((TSet<TTuple<FName,FMovieSceneEvaluationGroupParameters>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneEvaluationGroupParameters,0>,FDefaultSetAllocator>
                  *)this_00,&local_e8,(bool *)&local_80);
      return;
    }
    pFVar1 = (FName *)(*(longlong *)&pTVar6->field_0x0 + (longlong)TStack_a8.CurrentBitIndex * 0x14)
    ;
    if ((*pFVar1 == local_res10) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair.Key != GroupName",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneModule.cpp"
                           ,0x7f,L"Cannot add 2 groups of the same name"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((ushort)pFVar1[1].ComparisonIndex.Value == param_2->EvaluationPriority) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair.Value.EvaluationPriority != GroupParameters.EvaluationPriority",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneModule.cpp"
                           ,0x80,L"Cannot add 2 groups of the same priority"), bVar7)) break;
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// GetEvaluationGroupParameters @ 1461e2e50

FMovieSceneEvaluationGroupParameters __thiscall
FMovieSceneModule::GetEvaluationGroupParameters(FMovieSceneModule *this,FName param_1)

{
  TTuple<FName,FMovieSceneEvaluationGroupParameters> *pTVar1;
  FName in_R8;
  
  pTVar1 = TSet<TTuple<FName,FMovieSceneEvaluationGroupParameters>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneEvaluationGroupParameters,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FMovieSceneEvaluationGroupParameters>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneEvaluationGroupParameters,0>,FDefaultSetAllocator>
                   *)&this->EvaluationGroupParameters,in_R8);
  if (pTVar1 != (TTuple<FName,FMovieSceneEvaluationGroupParameters> *)0x0) {
    *(undefined2 *)param_1 = *(undefined2 *)&pTVar1->field_0x8;
    return (FMovieSceneEvaluationGroupParameters)(ushort)param_1.ComparisonIndex.Value;
  }
  *(undefined2 *)param_1 = 0xff;
  return (FMovieSceneEvaluationGroupParameters)(ushort)param_1.ComparisonIndex.Value;
}

// GetWeakPtr @ 1461e2e90

TWeakPtr<IMovieSceneModule,1> * __thiscall
FMovieSceneModule::GetWeakPtr
          (FMovieSceneModule *this,TWeakPtr<IMovieSceneModule,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (IMovieSceneModule *)(this->ModuleHandle).Object;
  pTVar1 = (this->ModuleHandle).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

