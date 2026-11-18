// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 54

// StaticClass @ 1461e3070

UClass * __cdecl UMovieSceneTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTrack",
               &Z_Registration_Info_UClass_UMovieSceneTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneTrack,0x118,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneTrack>,local_res8,
               UMovieSceneDecorationContainerObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrack.InnerSingleton;
}

// UMovieSceneTrack @ 1461fe830

UMovieSceneTrack * __thiscall
UMovieSceneTrack::UMovieSceneTrack(UMovieSceneTrack *this,FVTableHelper *param_1)

{
  FMovieSceneTrackEvalOptions *pFVar1;
  
  UMovieSceneDecorationContainerObject::UMovieSceneDecorationContainerObject
            ((UMovieSceneDecorationContainerObject *)this,param_1);
  pFVar1->bCanEvaluateNearestSection = 0;
  pFVar1->bEvaluateNearestSection_DEPRECATED = 0;
  pFVar1->bEvaluateInPostroll = 0;
  pFVar1->bEvaluateInPreroll = 0;
  pFVar1->bEvalNearestSection = 0;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->ConditionContainer).Condition.field0_0x0.DebugPtr = (UMovieSceneCondition *)0x0;
  FMovieSceneBlendTypeField::FMovieSceneBlendTypeField(&this->SupportedBlendTypes);
  (this->RowsDisabled).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowsDisabled).ArrayNum = 0;
  (this->RowsDisabled).ArrayMax = 0;
  (this->EvaluationFieldGuid).A = 0;
  (this->EvaluationFieldGuid).B = 0;
  (this->EvaluationFieldGuid).C = 0;
  (this->EvaluationFieldGuid).D = 0;
  (this->EvaluationField).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EvaluationField).Entries.ArrayNum = 0;
  (this->EvaluationField).Entries.ArrayMax = 0;
  *(undefined8 *)&this->TrackRowMetadata = 0;
  *(undefined8 *)&(this->TrackRowMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->TrackRowMetadata).field_0x20 = 0;
  *(undefined4 *)&(this->TrackRowMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->TrackRowMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackRowMetadata).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TrackRowMetadata).field_0x34 = 0;
  *(undefined8 *)&(this->TrackRowMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->TrackRowMetadata).field_0x48 = 0;
  return this;
}

// UMovieSceneTrack @ 1461fe8f0

UMovieSceneTrack * __thiscall
UMovieSceneTrack::UMovieSceneTrack(UMovieSceneTrack *this,FObjectInitializer *param_1)

{
  FMovieSceneTrackEvalOptions *pFVar1;
  
  UMovieSceneDecorationContainerObject::UMovieSceneDecorationContainerObject
            ((UMovieSceneDecorationContainerObject *)this,param_1);
  pFVar1->bCanEvaluateNearestSection = 0;
  pFVar1->bEvaluateNearestSection_DEPRECATED = 0;
  pFVar1->bEvaluateInPostroll = 0;
  pFVar1->bEvaluateInPreroll = 0;
  pFVar1->bEvalNearestSection = 0;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->ConditionContainer).Condition.field0_0x0.DebugPtr = (UMovieSceneCondition *)0x0;
  FMovieSceneBlendTypeField::FMovieSceneBlendTypeField(&this->SupportedBlendTypes);
  (this->RowsDisabled).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowsDisabled).ArrayNum = 0;
  (this->RowsDisabled).ArrayMax = 0;
  (this->EvaluationFieldGuid).A = 0;
  (this->EvaluationFieldGuid).B = 0;
  (this->EvaluationFieldGuid).C = 0;
  (this->EvaluationFieldGuid).D = 0;
  (this->EvaluationField).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EvaluationField).Entries.ArrayNum = 0;
  (this->EvaluationField).Entries.ArrayMax = 0;
  *(undefined8 *)&this->TrackRowMetadata = 0;
  *(undefined8 *)&(this->TrackRowMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->TrackRowMetadata).field_0x20 = 0;
  *(undefined4 *)&(this->TrackRowMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->TrackRowMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackRowMetadata).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TrackRowMetadata).field_0x34 = 0;
  *(undefined8 *)&(this->TrackRowMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->TrackRowMetadata).field_0x48 = 0;
  this->BuiltInTreePopulationMode = HighPassPerRow;
  return this;
}

// ~UMovieSceneTrack @ 146200130

void __thiscall UMovieSceneTrack::~UMovieSceneTrack(UMovieSceneTrack *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(undefined4 *)&(this->TrackRowMetadata).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TrackRowMetadata).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TrackRowMetadata);
  pFVar2 = (this->EvaluationField).Entries.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RowsDisabled).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UMovieSceneDecorationContainerObject::~UMovieSceneDecorationContainerObject
            ((UMovieSceneDecorationContainerObject *)this);
  return;
}

// AddSection @ 146206230

void __thiscall UMovieSceneTrack::AddSection(UMovieSceneTrack *this,FSectionParameter param_1)

{
  TObjectPtr<UObject> this_00;
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  TObjectPtr<UObject>_u_0 *pTVar4;
  TArrayView<TObjectPtr<UObject>_const_,int> local_28;
  
  (**(code **)this->_padding_)(&this->_padding_);
  (**(code **)((param_1.Section)->_padding_ + 0x380))(param_1.Section,this);
  pUVar1 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  if (pUVar2 != (UObject *)0x0) {
    FMovieSceneDecorationContainer::GetDecorations
              ((FMovieSceneDecorationContainer *)&(param_1.Section)->_padding_,&local_28);
    for (pTVar4 = &(local_28.DataPtr)->field0_0x0;
        pTVar4 != &local_28.DataPtr[local_28.ArrayNum].field0_0x0; pTVar4 = pTVar4 + 1) {
      this_00.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar4->DebugPtr;
      if (this_00.field0_0x0 != (UObject *)0x0) {
        pUVar1 = Z_Construct_UClass_UMovieSceneLifetimeDecoration_NoRegister();
        plVar3 = UObjectBaseUtility::GetInterfaceAddress
                           ((UObjectBaseUtility *)this_00.field0_0x0,pUVar1);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3,pUVar2);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001462062f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x370))(this,param_1.Section);
  return;
}

// AddSectionPrePostRollRangesToTree @ 146206310

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UMovieSceneTrack::AddSectionPrePostRollRangesToTree
          (UMovieSceneTrack *this,TArrayView<UMovieSceneSection_*_const,int> *param_1,
          TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *param_2)

{
  UMovieSceneSection **ppUVar1;
  int iVar2;
  UMovieSceneSection *pUVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  FFrameNumber FVar8;
  bool bVar9;
  FFrameNumber FVar10;
  FFrameNumber *pFVar11;
  UMovieSceneSection **ppUVar12;
  undefined4 local_res10;
  uint local_res20;
  TRangeBound<FFrameNumber> local_108;
  TRangeBound<FFrameNumber> TStack_100;
  undefined4 local_f8;
  FFrameNumber FStack_f4;
  uint local_f0;
  FFrameNumber FStack_ec;
  undefined8 local_e8;
  FWeakObjectPtr FStack_e0;
  undefined4 local_d8;
  undefined2 uStack_d4;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined8 local_d0;
  FWeakObjectPtr FStack_c8;
  undefined4 local_c0;
  undefined2 uStack_bc;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  UMovieSceneSection *local_b8;
  UMovieSceneSection *local_b0;
  TRange<FFrameNumber> local_a8;
  TRange<FFrameNumber> local_98;
  IMovieSceneEvaluationTreeNodeOperator local_88;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *local_80;
  undefined8 local_78;
  FWeakObjectPtr FStack_70;
  undefined8 local_68;
  IMovieSceneEvaluationTreeNodeOperator local_60;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *local_58;
  undefined8 local_50;
  FWeakObjectPtr FStack_48;
  undefined8 local_40;
  
  ppUVar12 = param_1->DataPtr;
  ppUVar1 = ppUVar12 + param_1->ArrayNum;
  uVar6 = local_res20;
  do {
    if (ppUVar12 == ppUVar1) {
      return;
    }
    pUVar3 = *ppUVar12;
    local_res20 = uVar6;
    if ((pUVar3 == (UMovieSceneSection *)0x0) || (pUVar3->bIsActive == 0)) goto LAB_1462065e8;
    uVar5._0_1_ = (pUVar3->SectionRange).Value.LowerBound.Type.Value;
    uVar5._1_3_ = *(undefined3 *)&(pUVar3->SectionRange).Value.LowerBound.field_0x1;
    local_108.Value.Value = (pUVar3->SectionRange).Value.LowerBound.Value.Value;
    TStack_100.Type.Value = (pUVar3->SectionRange).Value.UpperBound.Type.Value;
    TStack_100._1_3_ = *(undefined3 *)&(pUVar3->SectionRange).Value.UpperBound.field_0x1;
    iVar2 = (pUVar3->SectionRange).Value.UpperBound.Value.Value;
    local_108._0_4_ = uVar5;
    TStack_100.Value.Value = iVar2;
    if (uVar5._0_1_ == '\x02') {
LAB_1462064f3:
      if ((TStack_100.Type.Value != '\x02') && (iVar2 = (pUVar3->PostRollFrames).Value, 0 < iVar2))
      {
        if ((TStack_100.Type.Value == '\x02') &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FStack_f4.Value = TStack_100.Value.Value;
        FStack_ec.Value = TStack_100.Value.Value + iVar2;
        local_f8 = CONCAT31(local_f8._1_3_,1);
        local_f0 = local_f0 & 0xffffff00;
        local_d0 = 0;
        FStack_c8.ObjectIndex = 0;
        FStack_c8.ObjectSerialNumber = 0;
        local_c0 = 0x80000000;
        uStack_bc = 0;
        uStack_ba = 0;
        local_b0 = pUVar3;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        FWeakObjectPtr::operator=(&FStack_c8,(FObjectPtr)&local_b0);
        local_98.LowerBound.Value.Value = FStack_f4.Value;
        local_98.LowerBound._0_4_ = local_f8;
        local_98.UpperBound.Value.Value = FStack_ec.Value;
        local_98.UpperBound._0_4_ = local_f0;
        uStack_ba = 2;
        local_40 = CONCAT17(uStack_b9,CONCAT16(2,CONCAT24(uStack_bc,local_c0)));
        local_60 = (IMovieSceneEvaluationTreeNodeOperator)
                   &
                   ___7FAddOperator___TMovieSceneEvaluationTree_UFMovieSceneTrackEvaluationData____6B_
        ;
        local_50 = local_d0;
        FStack_48 = FStack_c8;
        local_58 = param_2;
        FMovieSceneEvaluationTree::AddTimeRange
                  ((FMovieSceneEvaluationTree *)param_2,&local_98,&local_60,
                   (FMovieSceneEvaluationTreeNodeHandle)0xffffffff,
                   (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)0x0);
        local_60 = (IMovieSceneEvaluationTreeNodeOperator)
                   &___7IMovieSceneEvaluationTreeNodeOperator__6B_;
      }
    }
    else {
      if (TStack_100.Type.Value == '\x02') {
LAB_146206408:
        if ((uVar5._0_1_ != '\x02') && (iVar2 = (pUVar3->PreRollFrames).Value, 0 < iVar2)) {
          if ((uVar5._0_1_ == '\x02') &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar8.Value = local_108.Value.Value;
          FVar10.Value = local_108.Value.Value - iVar2;
          local_res20 = uVar6 & 0xffffff00;
          uVar7 = (uint)local_res10 >> 8;
          local_res10 = CONCAT31((int3)uVar7,1);
          local_e8 = 0;
          FStack_e0.ObjectIndex = 0;
          FStack_e0.ObjectSerialNumber = 0;
          local_d8 = 0x80000000;
          uStack_d4 = 0;
          uStack_d2 = 0;
          local_b8 = pUVar3;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar3);
          }
          FWeakObjectPtr::operator=(&FStack_e0,(FObjectPtr)&local_b8);
          local_a8.LowerBound.Value.Value = FVar10.Value;
          local_a8.LowerBound._0_4_ = local_res10;
          local_a8.UpperBound =
               (TRangeBound<FFrameNumber>)(CONCAT44(FVar8.Value,uVar6) & 0xffffffffffffff00);
          uStack_d2 = 1;
          local_68 = CONCAT17(uStack_d1,CONCAT16(1,CONCAT24(uStack_d4,local_d8)));
          local_88 = (IMovieSceneEvaluationTreeNodeOperator)
                     &
                     ___7FAddOperator___TMovieSceneEvaluationTree_UFMovieSceneTrackEvaluationData____6B_
          ;
          local_78 = local_e8;
          FStack_70 = FStack_e0;
          local_80 = param_2;
          FMovieSceneEvaluationTree::AddTimeRange
                    ((FMovieSceneEvaluationTree *)param_2,&local_a8,&local_88,
                     (FMovieSceneEvaluationTreeNodeHandle)0xffffffff,
                     (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)0x0);
          local_88 = (IMovieSceneEvaluationTreeNodeOperator)
                     &___7IMovieSceneEvaluationTreeNodeOperator__6B_;
        }
        goto LAB_1462064f3;
      }
      if ((uVar5._0_1_ == '\x02') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_108.Value.Value <= iVar2) {
        pFVar11 = TRangeBound<FFrameNumber>::GetValue(&TStack_100);
        iVar2 = pFVar11->Value;
        pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_108);
        uVar5._0_1_ = local_108.Type.Value;
        if ((pFVar11->Value != iVar2) || ((uVar5._0_1_ != '\0' && (TStack_100.Type.Value != '\0'))))
        goto LAB_146206408;
      }
    }
LAB_1462065e8:
    ppUVar12 = ppUVar12 + 1;
    uVar6 = local_res20;
  } while( true );
}

// AddSectionRangesToTree @ 146206630

void __thiscall
UMovieSceneTrack::AddSectionRangesToTree
          (UMovieSceneTrack *this,TArrayView<UMovieSceneSection_*_const,int> *param_1,
          TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *param_2)

{
  char cVar1;
  bool bVar2;
  ETreePopulationMode EVar3;
  undefined1 local_res8 [8];
  TArrayView<UMovieSceneSection_*_const,int> local_18;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2e8))(this,param_2);
  if (cVar1 == '\0') {
    EVar3 = this->BuiltInTreePopulationMode;
    if (EVar3 == None) {
      bVar2 = `UMovieSceneTrack::AddSectionRangesToTree'::__l6::<lambda_1>::operator()(local_res8);
      if (!bVar2) {
        EVar3 = HighPassPerRow;
      }
    }
    if (EVar3 == Blended) {
      local_18.DataPtr = param_1->DataPtr;
      local_18.ArrayNum = param_1->ArrayNum;
      local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
      UE::MovieScene::FEvaluationTreePopulationRules::Blended(&local_18,param_2);
    }
    else {
      if (EVar3 == HighPass) {
        local_18.DataPtr = param_1->DataPtr;
        local_18.ArrayNum = param_1->ArrayNum;
        local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
        UE::MovieScene::FEvaluationTreePopulationRules::HighPass(&local_18,param_2);
        return;
      }
      if (EVar3 == HighPassPerRow) {
        local_18.DataPtr = param_1->DataPtr;
        local_18.ArrayNum = param_1->ArrayNum;
        local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
        UE::MovieScene::FEvaluationTreePopulationRules::HighPassPerRow(&local_18,param_2);
        return;
      }
    }
  }
  return;
}

// CreateNewSection @ 14620ddf0

UMovieSceneSection * __thiscall UMovieSceneTrack::CreateNewSection(UMovieSceneTrack *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTrack.h"
             ,0x20a,L"Pure virtual not implemented (%s)");
  return (UMovieSceneSection *)0x0;
}

// FindObjectBindingGuid @ 146212340

FGuid * __thiscall
UMovieSceneTrack::FindObjectBindingGuid(UMovieSceneTrack *this,FGuid *__return_storage_ptr__)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_res18 [8];
  
  pUVar5 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar6 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
  if (pUVar6 != (UObject *)0x0) {
    iVar2 = *(int *)(pUVar6 + 4);
    lVar8 = *(longlong *)&pUVar6[3].field_0x20;
    lVar9 = (longlong)iVar2 * 0x40 + lVar8;
    while( true ) {
      if (*(int *)(pUVar6 + 4) != iVar2) {
        `TCheckedPointerIterator<FMovieSceneBinding_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (lVar8 == lVar9) break;
      plVar7 = *(longlong **)(lVar8 + 0x30);
      plVar1 = plVar7 + *(int *)(lVar8 + 0x38);
      for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
        if ((UMovieSceneTrack *)*plVar7 == this) {
          uVar3 = *(undefined8 *)(lVar8 + 0x10);
          uVar4 = *(undefined8 *)(lVar8 + 0x18);
          __return_storage_ptr__->A = (int)uVar3;
          __return_storage_ptr__->B = (int)((ulonglong)uVar3 >> 0x20);
          __return_storage_ptr__->C = (int)uVar4;
          __return_storage_ptr__->D = (int)((ulonglong)uVar4 >> 0x20);
          return __return_storage_ptr__;
        }
      }
      lVar8 = lVar8 + 0x40;
    }
  }
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// FindOrAddTrackRowMetadata @ 146212410

FMovieSceneTrackRowMetadata * __thiscall
UMovieSceneTrack::FindOrAddTrackRowMetadata(UMovieSceneTrack *this,int param_1)

{
  FMovieSceneTrackRowMetadata *pFVar1;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  pFVar1 = TMapBase<int,FMovieSceneTrackRowMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneTrackRowMetadata,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,FMovieSceneTrackRowMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneTrackRowMetadata,0>_>
                       *)&this->TrackRowMetadata,param_1,local_res10);
  return pFVar1;
}

// FindTrackRowMetadata @ 146212f10

FMovieSceneTrackRowMetadata * __thiscall
UMovieSceneTrack::FindTrackRowMetadata(UMovieSceneTrack *this,int param_1)

{
  int iVar1;
  FMovieSceneTrackRowMetadata *pFVar2;
  FMovieSceneTrackRowMetadata *pFVar3;
  undefined1 *puVar4;
  FMovieSceneTrackRowMetadata *pFVar5;
  
  pFVar5 = (FMovieSceneTrackRowMetadata *)0x0;
  pFVar2 = pFVar5;
  if (*(int *)&(this->TrackRowMetadata).field_0x8 != *(int *)&(this->TrackRowMetadata).field_0x34) {
    puVar4 = *(undefined1 **)&(this->TrackRowMetadata).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TrackRowMetadata).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->TrackRowMetadata).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        pFVar2 = (FMovieSceneTrackRowMetadata *)
                 (*(longlong *)&this->TrackRowMetadata + (longlong)iVar1 * 0x18);
        if (*(int *)(*(longlong *)&this->TrackRowMetadata + (longlong)iVar1 * 0x18) == param_1)
        break;
        iVar1 = *(int *)&pFVar2[2].ConditionContainer.Condition.field0_0x0;
        pFVar2 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar3 = pFVar2 + 1;
  if (pFVar2 == (FMovieSceneTrackRowMetadata *)0x0) {
    pFVar3 = pFVar5;
  }
  return pFVar3;
}

// FindTrackRowMetadata @ 146212f90

FMovieSceneTrackRowMetadata * __thiscall
UMovieSceneTrack::FindTrackRowMetadata(UMovieSceneTrack *this,int param_1)

{
  int iVar1;
  FMovieSceneTrackRowMetadata *pFVar2;
  FMovieSceneTrackRowMetadata *pFVar3;
  undefined1 *puVar4;
  FMovieSceneTrackRowMetadata *pFVar5;
  
  pFVar5 = (FMovieSceneTrackRowMetadata *)0x0;
  pFVar2 = pFVar5;
  if (*(int *)&(this->TrackRowMetadata).field_0x8 != *(int *)&(this->TrackRowMetadata).field_0x34) {
    puVar4 = *(undefined1 **)&(this->TrackRowMetadata).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TrackRowMetadata).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->TrackRowMetadata).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        pFVar2 = (FMovieSceneTrackRowMetadata *)
                 (*(longlong *)&this->TrackRowMetadata + (longlong)iVar1 * 0x18);
        if (*(int *)(*(longlong *)&this->TrackRowMetadata + (longlong)iVar1 * 0x18) == param_1)
        break;
        iVar1 = *(int *)&pFVar2[2].ConditionContainer.Condition.field0_0x0;
        pFVar2 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar3 = pFVar2 + 1;
  if (pFVar2 == (FMovieSceneTrackRowMetadata *)0x0) {
    pFVar3 = pFVar5;
  }
  return pFVar3;
}

// FixRowIndices @ 146213140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UMovieSceneTrack::FixRowIndices(UMovieSceneTrack *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  int iVar4;
  void *_Src;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  uint uVar18;
  ForElementType<FSetElementId> FVar19;
  uint uVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  longlong *plVar23;
  TPairInitializer<int_const_&,int_const_&> *pTVar24;
  TPairInitializer<int_const_&,int_const_&> *pTVar25;
  uint uVar26;
  ForAnyElementType FVar27;
  int iVar28;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *pTVar29;
  undefined1 auStackY_138 [32];
  undefined1 local_e8 [4];
  uint local_e4;
  ForAnyElementType local_e0;
  uint local_d8;
  int local_d4;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined1 local_ce [6];
  ForAnyElementType local_c8;
  int local_c0 [2];
  longlong local_b8;
  int local_b0;
  undefined1 local_ac [4];
  UMovieSceneTrack *local_a8;
  uint *local_a0;
  int *local_98;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  bVar9 = false;
  bVar7 = false;
  pTVar24 = (TPairInitializer<int_const_&,int_const_&> *)0x0;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_a8 = this;
  puVar14 = (undefined8 *)(**(code **)(this->_padding_ + 0x360))();
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8 = *(uint *)(puVar14 + 1);
  lVar21 = (longlong)(int)local_d8;
  _Src = (void *)*puVar14;
  if (local_d8 == 0) {
    local_d4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_d8,0,&local_e0,local_d8,&local_d4);
    memcpy(local_e0.Data,_Src,lVar21 << 3);
  }
  cVar6 = (**(code **)(this->_padding_ + 800))(this);
  if (cVar6 == '\0') {
    pTVar25 = pTVar24;
    uVar18 = local_d8;
    if (0 < (int)local_d8) {
      do {
        uVar20 = (uint)pTVar24;
        uVar26 = ~uVar20 >> 0x1f;
        uVar12 = 0;
        uVar13 = uVar12;
        if ((int)uVar20 < (int)uVar18) {
          uVar13 = uVar26;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar18 = local_d8, bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        bVar7 = bVar9;
        if (*(int *)(*(longlong *)(local_e0.Data + (longlong)&pTVar25->Key) + 0xd0) != 0) {
          uVar13 = uVar12;
          if ((int)uVar20 < (int)uVar18) {
            uVar13 = uVar26;
          }
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             uVar18 = local_d8, bVar9)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          if ((int)uVar20 < (int)uVar18) {
            uVar12 = uVar26;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          bVar7 = true;
          *(undefined4 *)(*(longlong *)(local_e0.Data + (longlong)&pTVar25->Key) + 0xd0) = 0;
          uVar18 = local_d8;
        }
        pTVar24 = (TPairInitializer<int_const_&,int_const_&> *)(ulonglong)(uVar20 + 1);
        pTVar25 = (TPairInitializer<int_const_&,int_const_&> *)&pTVar25->Value;
        bVar9 = bVar7;
      } while ((int)(uVar20 + 1) < (int)uVar18);
    }
  }
  else {
    local_c8.Data = (FScriptContainerElement *)0x0;
    local_c0[0] = 0;
    local_c0[1] = 0;
    iVar10 = GetMaxRowIndex(this);
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,iVar10 + 1,&local_c8,local_c0,local_c0 + 1);
    memset(local_c8.Data + (longlong)iVar11 * 0x10,0,(longlong)(iVar10 + 1) << 4);
    uVar18 = local_d8;
    uVar17 = (ulonglong)(int)local_d8;
    pFVar2 = local_e0.Data + uVar17 * 8;
    FVar27.Data = local_e0.Data;
    while( true ) {
      if ((uint)uVar17 != uVar18) {
        local_e8[0] = 0;
        `TCheckedPointerIterator<UMovieSceneSection_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_e8);
      }
      iVar10 = local_c0[0];
      if (FVar27.Data == pFVar2) break;
      local_b8 = *(longlong *)FVar27.Data;
      uVar13 = *(uint *)(local_b8 + 0xd0);
      uVar12 = 0;
      if ((int)uVar13 < local_c0[0]) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pFVar22 = local_c8.Data + (longlong)(int)uVar13 * 0x10;
      if (((*(FScriptContainerElement **)&pFVar22->field_0x0 <= (FScriptContainerElement *)&local_b8
           ) && ((FScriptContainerElement *)&local_b8 <
                 *(FScriptContainerElement **)&pFVar22->field_0x0 +
                 (longlong)*(int *)(pFVar22 + 0xc) * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar10 = *(int *)(pFVar22 + 8);
      if (iVar10 == *(int *)(pFVar22 + 0xc)) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)pFVar22,(int *)(pFVar22 + 0xc));
      }
      FVar27.Data = FVar27.Data + 8;
      *(int *)(pFVar22 + 8) = iVar10 + 1;
      *(longlong *)(*(FScriptContainerElement **)&pFVar22->field_0x0 + (longlong)iVar10 * 8) =
           local_b8;
      uVar17 = (ulonglong)local_d8;
    }
    local_e4 = 0;
    pTVar29 = (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)
              (local_c8.Data + (longlong)local_c0[0] * 0x10);
    FVar27.Data = local_c8.Data;
    bVar7 = bVar9;
    while( true ) {
      if (local_c0[0] != iVar10) {
        `TCheckedPointerIterator<TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_d0);
        pTVar24 = (TPairInitializer<int_const_&,int_const_&> *)(ulonglong)local_e4;
      }
      this = local_a8;
      if ((TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)FVar27.Data == pTVar29) break;
      iVar11 = ((TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)FVar27.Data)->ArrayNum;
      if (0 < iVar11) {
        pFVar22 = (((TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)FVar27.Data)->
                  AllocatorInstance).Data;
        pFVar2 = pFVar22 + (longlong)iVar11 * 8;
        while( true ) {
          if (((TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)FVar27.Data)->ArrayNum !=
              iVar11) {
            `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_cf);
            pTVar24 = (TPairInitializer<int_const_&,int_const_&> *)(ulonglong)local_e4;
          }
          iVar28 = (int)pTVar24;
          if (pFVar22 == pFVar2) break;
          iVar4 = *(int *)(*(longlong *)pFVar22 + 0xd0);
          if (iVar4 != iVar28) {
            *(int *)(*(longlong *)pFVar22 + 0xd0) = iVar28;
            pTVar24 = (TPairInitializer<int_const_&,int_const_&> *)(ulonglong)local_e4;
            local_b0 = iVar4;
            if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
              FVar19 = (ForElementType<FSetElementId>)&local_88.Hash;
              if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar19 = local_88.Hash.SecondaryData;
              }
              uVar18 = *(uint *)((longlong)FVar19 +
                                (ulonglong)(local_88.HashSize - 1U & local_e4) * 4);
              while (uVar18 != 0xffffffff) {
                puVar15 = (uint *)((longlong)(int)uVar18 * 0x10 + local_88.Elements._0_8_);
                if (*puVar15 == local_e4) {
                  if (puVar15 != (uint *)0x0) goto LAB_1462134bd;
                  break;
                }
                uVar18 = puVar15[2];
              }
            }
            local_a0 = &local_e4;
            local_98 = &local_b0;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            EmplaceByHash<TPairInitializer<int_const_&,int_const_&>_>
                      (&local_88,(uint)local_ac,pTVar24,(bool *)&local_a0);
            pTVar24 = (TPairInitializer<int_const_&,int_const_&> *)(ulonglong)local_e4;
LAB_1462134bd:
            bVar7 = true;
          }
          pFVar22 = pFVar22 + 8;
        }
        local_e4 = iVar28 + 1;
        pTVar24 = (TPairInitializer<int_const_&,int_const_&> *)(ulonglong)local_e4;
      }
      FVar27.Data = FVar27.Data + 0x10;
    }
    plVar16 = (longlong *)(**(code **)(local_a8->_padding_ + 0x360))(local_a8);
    plVar23 = (longlong *)*plVar16;
    lVar21 = plVar16[1];
    plVar3 = plVar23 + (int)lVar21;
    iVar10 = 0;
    while( true ) {
      if ((int)plVar16[1] != (int)lVar21) {
        `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_ce);
      }
      if (plVar23 == plVar3) break;
      iVar11 = *(int *)(*plVar23 + 0xd0);
      if (*(int *)(*plVar23 + 0xd0) < iVar10) {
        iVar11 = iVar10;
      }
      plVar23 = plVar23 + 1;
      iVar10 = iVar11;
    }
    if ((iVar10 == 0) && ((this->RowsDisabled).ArrayNum != 0)) {
      piVar1 = &(this->RowsDisabled).ArrayMax;
      (this->RowsDisabled).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->RowsDisabled).AllocatorInstance,0,piVar1);
      }
    }
    DestructItems<TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)local_c8.Data,local_c0[0]
              );
    if ((TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)local_c8.Data !=
        (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_c8.Data);
    }
  }
  if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
    (**(code **)(this->_padding_ + 0x348))(this,&local_88);
  }
  if (local_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data);
  }
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return bVar7;
}

// ForceUpdateEvaluationTree @ 146214dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMovieSceneTrack::ForceUpdateEvaluationTree(UMovieSceneTrack *this)

{
  ForAnyElementType *pFVar1;
  TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_> *this_00;
  ulonglong uVar2;
  void *_Src;
  FMovieSceneTrackEvaluationData *pFVar3;
  FMovieSceneEvaluationTreeNodeHandle FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *pTVar9;
  TRangeBound<FFrameNumber> TVar10;
  TRangeBound<FFrameNumber> TVar11;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *pTVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  TArrayView<FMovieSceneTrackEvaluationData_const_,int> *pTVar19;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar20;
  byte bVar21;
  uint uVar22;
  longlong *plVar23;
  ForElementType<FSetElementId> FVar24;
  ETreePopulationMode EVar25;
  FEvaluationTreeEntryHandle FVar26;
  longlong lVar27;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *pTVar28;
  longlong lVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  uint *puVar32;
  longlong lVar33;
  longlong lVar34;
  int *piVar35;
  uint uVar36;
  FMovieSceneTrackEvaluationField *pFVar37;
  undefined1 auStackY_3b8 [32];
  undefined1 uStack_368;
  undefined1 auStack_367 [3];
  int iStack_364;
  uint uStack_360;
  ForAnyElementType FStack_358;
  int iStack_350;
  int iStack_34c;
  int iStack_348;
  uint uStack_344;
  undefined8 uStack_340;
  UObject *pUStack_338;
  TRangeBound<FFrameNumber> TStack_330;
  TRangeBound<FFrameNumber> TStack_328;
  int iStack_320;
  FScriptContainerElement FStack_31c;
  short sStack_31a;
  uint uStack_318;
  undefined4 uStack_314;
  uint uStack_310;
  undefined4 uStack_30c;
  UObject *pUStack_308;
  FMovieSceneTrackEvaluationField *pFStack_300;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *pTStack_2f8;
  undefined8 uStack_2f0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2e8;
  undefined4 uStack_2e0;
  uint uStack_2dc;
  uint uStack_2d8;
  undefined4 uStack_2d4;
  int iStack_2d0;
  undefined4 uStack_2cc;
  FScriptContainerElement *pFStack_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> TStack_2b8;
  int iStack_258;
  UObject **ppUStack_250;
  FMovieSceneEvaluationTreeNodeHandle FStack_248;
  longlong lStack_240;
  longlong lStack_230;
  UMovieSceneTrack *pUStack_228;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> TStack_220;
  int *piStack_208;
  longlong *plStack_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f8;
  undefined8 uStack_1d8;
  FScriptContainerElement *pFStack_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  FScriptContainerElement *pFStack_1b8;
  int iStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  FScriptContainerElement *pFStack_198;
  int iStack_190;
  undefined4 uStack_18c;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> TStack_188;
  FMovieSceneEvaluationTreeRangeIterator FStack_170;
  TArrayView<UMovieSceneSection_*_const,int> TStack_148;
  TArrayView<UMovieSceneSection_*_const,int> TStack_138;
  TArrayView<UMovieSceneSection_*_const,int> TStack_128;
  TArrayView<UMovieSceneSection_*_const,int> TStack_118;
  TArrayView<UMovieSceneSection_*_const,int> TStack_108;
  TArrayView<FMovieSceneTrackEvaluationData_const_,int> TStack_f8;
  TArrayView<FMovieSceneTrackEvaluationData_const_,int> TStack_e8;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> TStack_d8;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> aTStack_c8 [2];
  undefined4 uStack_9c;
  undefined1 auStack_98 [32];
  uint *puStack_78;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined1 auStack_60 [8];
  ForElementType<FSetElementId> FStack_58;
  int iStack_50;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  uStack_318 = CONCAT31(uStack_318._1_3_,2);
  uStack_314 = 0;
  TStack_2b8._padding_ = (longlong)uStack_318;
  uStack_30c = 0;
  uStack_310 = CONCAT31(uStack_310._1_3_,2);
  TStack_2b8._padding_ = (longlong)uStack_310;
  uStack_340 = 0xffffffffffffffff;
  TStack_2b8._padding_ = -1;
  TStack_2b8._padding_ = -1;
  TStack_2b8._padding_ = 0;
  TStack_2b8._padding_ = 0;
  TStack_2b8._padding_ = 0;
  TStack_2b8._padding_ = 0;
  TStack_2b8.Data.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_2b8.Data.Entries.ArrayNum = 0;
  TStack_2b8.Data.Entries.ArrayMax = 0;
  TStack_2b8.Data.Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_2b8.Data.Items.ArrayNum = 0;
  TStack_2b8.Data.Items.ArrayMax = 0;
  pUStack_228 = this;
  puVar18 = (undefined8 *)(**(code **)(this->_padding_ + 0x360))();
  FStack_358.Data = (FScriptContainerElement *)0x0;
  iStack_350 = *(int *)(puVar18 + 1);
  lVar27 = (longlong)iStack_350;
  _Src = (void *)*puVar18;
  if (iStack_350 == 0) {
    iStack_34c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iStack_350,0,&FStack_358,iStack_350,&iStack_34c);
    memcpy(FStack_358.Data,_Src,lVar27 << 3);
  }
  iVar15 = iStack_350;
  pFStack_2c8 = FStack_358.Data;
  if ((iStack_350 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iStack_2c0 = iVar15;
  cVar14 = (**(code **)(this->_padding_ + 0x2e8))(this,&TStack_2b8);
  if (cVar14 == '\0') {
    EVar25 = this->BuiltInTreePopulationMode;
    if (EVar25 == None) {
      uStack_368 = 0;
      bVar13 = `UMovieSceneTrack::AddSectionRangesToTree'::__l6::<lambda_1>::operator()(&uStack_368)
      ;
      if (!bVar13) {
        EVar25 = HighPassPerRow;
      }
    }
    if (EVar25 == Blended) {
      TStack_128._12_4_ = uStack_2bc;
      TStack_128.ArrayNum = iStack_2c0;
      TStack_128.DataPtr = (UMovieSceneSection **)pFStack_2c8;
      UE::MovieScene::FEvaluationTreePopulationRules::Blended(&TStack_128,&TStack_2b8);
    }
    else if (EVar25 == HighPass) {
      TStack_138._12_4_ = uStack_2bc;
      TStack_138.ArrayNum = iStack_2c0;
      TStack_138.DataPtr = (UMovieSceneSection **)pFStack_2c8;
      UE::MovieScene::FEvaluationTreePopulationRules::HighPass(&TStack_138,&TStack_2b8);
    }
    else if (EVar25 == HighPassPerRow) {
      TStack_148._12_4_ = uStack_2bc;
      TStack_148.ArrayNum = iStack_2c0;
      TStack_148.DataPtr = (UMovieSceneSection **)pFStack_2c8;
      UE::MovieScene::FEvaluationTreePopulationRules::HighPassPerRow(&TStack_148,&TStack_2b8);
    }
  }
  iVar15 = iStack_350;
  if ((this->EvalOptions).bCanEvaluateNearestSection == 1 &&
      (this->EvalOptions).bEvalNearestSection == 1) {
    pFStack_198 = FStack_358.Data;
    if ((iStack_350 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iStack_190 = iVar15;
    TStack_118._12_4_ = uStack_18c;
    TStack_118.ArrayNum = iVar15;
    TStack_118.DataPtr = (UMovieSceneSection **)pFStack_198;
    UE::MovieScene::FEvaluationTreePopulationRules::PopulateNearestSection(&TStack_118,&TStack_2b8);
  }
  iVar15 = iStack_350;
  pFStack_1c8 = FStack_358.Data;
  if ((iStack_350 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iStack_1c0 = iVar15;
  TStack_108._12_4_ = uStack_1bc;
  TStack_108.ArrayNum = iVar15;
  TStack_108.DataPtr = (UMovieSceneSection **)pFStack_1c8;
  AddSectionPrePostRollRangesToTree(this,&TStack_108,&TStack_2b8);
  pFStack_300 = &this->EvaluationField;
  iVar15 = (this->EvaluationField).Entries.ArrayMax;
  piVar35 = &(this->EvaluationField).Entries.ArrayMax;
  (this->EvaluationField).Entries.ArrayNum = 0;
  piStack_208 = piVar35;
  if (iVar15 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)pFStack_300,0,piVar35);
  }
  auStack_98._0_8_ = 0;
  auStack_98._8_8_ = 0;
  puStack_78 = (uint *)0x0;
  uStack_70 = 0;
  uStack_6c = 0x80;
  uStack_68 = 0xffffffff;
  iStack_64 = 0;
  FStack_58 = (ForElementType<FSetElementId>)0x0;
  iStack_50 = 0;
  FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
            (&FStack_170,(FMovieSceneEvaluationTree *)&TStack_2b8);
  while( true ) {
    uVar22 = uStack_70;
    TVar11 = FStack_170.CurrentRange.UpperBound;
    TVar10 = FStack_170.CurrentRange.LowerBound;
    uVar36 = 0;
    FVar4.Index = FStack_170.CurrentNodeHandle.Index;
    FVar4.ChildrenHandle.EntryIndex = FStack_170.CurrentNodeHandle.ChildrenHandle.EntryIndex;
    if ((FStack_170.CurrentNodeHandle.ChildrenHandle.EntryIndex == -1) &&
       (FStack_170.CurrentNodeHandle.Index != 0)) break;
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>::
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>
              (&TStack_220,&TStack_2b8,FVar4);
    pTVar9 = TStack_220.Tree;
    if ((((TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)TStack_220.CurrentNode !=
          (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)0x0) &&
        (pTVar19 = TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData>::GetDataForSingleNode
                             (TStack_220.Tree,&TStack_f8,TStack_220.CurrentNode),
        -1 < TStack_220.DataIndex)) && (TStack_220.DataIndex < pTVar19->ArrayNum)) {
      pTStack_2e8._0_4_ = TStack_220.DataIndex;
      pTStack_2f8 = TStack_220.Tree;
      uStack_2f0 = (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)
                   TStack_220.CurrentNode;
      TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>::
      TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>
                (&TStack_188,pTVar9,(FMovieSceneEvaluationTreeNodeHandle)0xffffffffffffffff);
      pTVar9 = pTStack_2f8;
      pTVar28 = uStack_2f0;
      uVar36 = (uint)pTStack_2e8;
LAB_14623c930:
      if (((pTVar9 != TStack_188.Tree) ||
          (pTVar28 !=
           (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)TStack_188.CurrentNode)) ||
         (uVar36 != TStack_188.DataIndex)) {
        pTVar19 = TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData>::GetDataForSingleNode
                            (pTVar9,&TStack_e8,(FMovieSceneEvaluationTreeNode *)pTVar28);
        uVar22 = 0;
        if ((int)uVar36 < pTVar19->ArrayNum) {
          uVar22 = ~uVar36 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar3 = pTVar19->DataPtr;
        pUStack_308 = FWeakObjectPtr::Get(&pFVar3[(int)uVar36].Section.WeakPtr);
        uVar22 = ((uint)((ulonglong)pUStack_308 >> 0x14) & 0xffff ^
                 (uint)((ulonglong)pUStack_308 >> 4)) * -0x7a143595;
        uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
        uVar22 = uVar22 >> 0x10 ^ uVar22;
        if (auStack_98._8_4_ != iStack_64) {
          FVar24 = (ForElementType<FSetElementId>)auStack_60;
          if (FStack_58 != (ForElementType<FSetElementId>)0x0) {
            FVar24 = FStack_58;
          }
          iVar15 = *(int *)((longlong)FVar24 + (ulonglong)(iStack_50 - 1U & uVar22) * 4);
          while (iVar15 != -1) {
            plVar23 = (longlong *)((longlong)iVar15 * 0x20 + auStack_98._0_8_);
            if ((UObject *)*plVar23 == pUStack_308) {
              if (plVar23 != (longlong *)0x0) goto LAB_14623ca9b;
              break;
            }
            iVar15 = (int)plVar23[3];
          }
        }
        ppUStack_250 = &pUStack_308;
        TSet<TTuple<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<UMovieSceneSection_*_const_&>_>
                  ((TSet<TTuple<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)auStack_98,(uint)&iStack_348,
                   (TKeyInitializer<UMovieSceneSection_*_const_&> *)(ulonglong)uVar22,
                   (bool *)&ppUStack_250);
        plVar23 = (longlong *)((longlong)iStack_348 * 0x20 + auStack_98._0_8_);
LAB_14623ca9b:
        pFVar1 = (ForAnyElementType *)(plVar23 + 1);
        pUStack_338 = pUStack_308;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStack_308 != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(pUStack_308);
        }
        iStack_320 = pFVar3[(int)uVar36].ForcedTime.Value;
        FStack_31c = (FScriptContainerElement)pFVar3[(int)uVar36].Flags;
        sStack_31a = pFVar3[(int)uVar36].SortOrder;
        TStack_330 = TVar10;
        TStack_328 = TVar11;
        if (((pFVar1->Data <= (FScriptContainerElement *)&pUStack_338) &&
            ((FScriptContainerElement *)&pUStack_338 <
             pFVar1->Data + (longlong)*(int *)((longlong)plVar23 + 0x14) * 0x20)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar15 = (int)plVar23[2];
        if (iVar15 == *(int *)((longlong)plVar23 + 0x14)) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,pFVar1,(int *)((longlong)plVar23 + 0x14));
        }
        *(int *)(plVar23 + 2) = iVar15 + 1;
        pFVar31 = pFVar1->Data + (longlong)iVar15 * 0x20;
        *(UObject **)pFVar31 = pUStack_338;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStack_338 != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(pUStack_338);
        }
        uVar36 = uVar36 + 1;
        *(TRangeBound<FFrameNumber> *)(pFVar31 + 8) = TStack_330;
        *(TRangeBound<FFrameNumber> *)(pFVar31 + 0x10) = TStack_328;
        *(int *)(pFVar31 + 0x18) = iStack_320;
        pFVar31[0x1c] = FStack_31c;
        *(short *)(pFVar31 + 0x1e) = sStack_31a;
        pTVar12 = pTVar28;
        while (pTVar28 = pTVar12,
              pTVar28 != (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)0x0) {
          uVar22 = ((FEvaluationTreeEntryHandle *)&pTVar28->_padding_)[1].EntryIndex;
          if (uVar22 == 0xffffffff) {
            uStack_1a8 = 0;
            uStack_1a0 = 0;
            iVar15 = 0;
          }
          else {
            uVar16 = 0;
            if ((int)uVar22 < (pTVar9->Data).Entries.ArrayNum) {
              uVar16 = ~uVar22 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar31 = (pTVar9->Data).Entries.AllocatorInstance.Data;
            uVar16 = *(uint *)(pFVar31 + (longlong)(int)uVar22 * 0xc);
            iVar15 = *(int *)(pFVar31 + (longlong)(int)uVar22 * 0xc + 4);
            uVar22 = 0;
            if ((int)uVar16 < (pTVar9->Data).Items.ArrayNum) {
              uVar22 = ~uVar16 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFStack_1b8 = (pTVar9->Data).Items.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x18
            ;
            iStack_1b0 = iVar15;
            if ((iVar15 < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), iVar15 = iStack_1b0, bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          if ((-1 < (int)uVar36) && ((int)uVar36 < iVar15)) break;
          uVar36 = 0;
          if (((((FMovieSceneEvaluationTreeNodeHandle *)&pTVar28->_padding_)->ChildrenHandle).
               EntryIndex != -1) ||
             (pTVar12 = (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)0x0,
             ((FMovieSceneEvaluationTreeNodeHandle *)&pTVar28->_padding_)->Index == 0)) {
            FVar4 = *(FMovieSceneEvaluationTreeNodeHandle *)&pTVar28->_padding_;
            FVar26 = FVar4.ChildrenHandle.EntryIndex;
            FStack_248 = FVar4;
            if (FVar26.EntryIndex == -1) {
              bVar13 = FVar4.Index == 0;
            }
            else {
              pTVar20 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                                  ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
                                   &pTVar9->_padding_,aTStack_c8,FVar26);
              if (((longlong)FVar4 < 0) || (pTVar20->ArrayNum <= FVar4.Index)) {
                bVar13 = false;
              }
              else {
                bVar13 = true;
              }
            }
            if ((!bVar13) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid(Handle)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneEvaluationTree.h"
                                    ,0x18d,L""), bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pTVar12 = pTVar9;
            if (FVar26.EntryIndex != -1) {
              pTVar20 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                                  ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
                                   &pTVar9->_padding_,&TStack_d8,FVar26);
              lVar27 = (longlong)FStack_248.Index;
              uVar22 = uVar36;
              if (FStack_248.Index < pTVar20->ArrayNum) {
                uVar22 = (uint)~FStack_248.Index >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pTVar12 = (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)
                        (pTVar20->DataPtr + lVar27);
            }
          }
        }
        goto LAB_14623c930;
      }
    }
    FMovieSceneEvaluationTreeRangeIterator::Iter(&FStack_170,true);
  }
  uVar16 = 1;
  uStack_2dc = uVar36;
  uStack_2d8 = uVar36;
  if (uStack_70 != 0) {
    puVar32 = (uint *)(auStack_98 + 0x10);
    if (puStack_78 != (uint *)0x0) {
      puVar32 = puStack_78;
    }
    uVar30 = *puVar32;
    while (uVar30 == 0) {
      lVar27 = (longlong)(int)uVar36;
      uStack_2d8 = uStack_2d8 + 0x20;
      uVar36 = uVar36 + 1;
      uStack_2dc = uStack_70;
      if ((int)((uStack_70 - 1) + ((int)(uStack_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar36)
      goto LAB_14623ce70;
      uVar30 = puVar32[lVar27 + 1];
    }
    uVar16 = -uVar30 & uVar30;
    uVar2 = (ulonglong)uVar16 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    iStack_258 = (int)lVar27;
    uStack_2dc = (uStack_2d8 - 1) + iStack_258;
    if ((int)uStack_70 < (int)uStack_2dc) {
      uStack_2dc = uStack_70;
    }
  }
LAB_14623ce70:
  pTStack_2f8 = (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)auStack_98;
  uVar30 = uStack_70 & 0xffffffe0;
  uStack_2d4 = uStack_9c;
  pTStack_2e8 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_98 + 0x10);
  iStack_2d0 = auStack_98._8_4_ - iStack_64;
  uStack_2e0 = 0xffffffff;
  TStack_1f8.CurrentBitIndex = uStack_2dc;
  TStack_1f8.UnvisitedBitMask = 0xffffffff;
  uStack_2f0 = (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)CONCAT44(uVar16,uVar36);
  TStack_1f8._padding_ = (longlong)uStack_2f0;
  iVar15 = (int)uStack_70 >> 5;
  TStack_1f8._28_4_ = uStack_9c;
  TStack_1f8.BaseBitIndex = uStack_2d8;
  uStack_1d8 = CONCAT44(uStack_2cc,iStack_2d0);
  bVar21 = (byte)uStack_70;
  uStack_360 = uStack_70;
  plStack_200 = (longlong *)pTStack_2f8;
  TStack_1f8.Array = pTStack_2e8;
  if (((int)uStack_70 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar37 = pFStack_300;
  if (uVar22 != uStack_70) {
    puVar32 = (uint *)(auStack_98 + 0x10);
    if (puStack_78 != (uint *)0x0) {
      puVar32 = puStack_78;
    }
    uVar36 = -1 << (bVar21 & 0x1f) & puVar32[iVar15];
    while (uVar36 == 0) {
      lVar27 = (longlong)iVar15;
      uVar30 = uVar30 + 0x20;
      iVar15 = iVar15 + 1;
      if ((int)((uStack_70 - 1) + ((int)(uStack_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) {
        uStack_360 = uStack_70;
        uVar22 = uStack_70;
        goto LAB_14623cfa0;
      }
      uVar36 = puVar32[lVar27 + 1];
    }
    uVar2 = (ulonglong)(-uVar36 & uVar36) * 2 + 1;
    lVar27 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    uVar22 = (uVar30 - 1) + (int)lVar27;
    uStack_340 = CONCAT44(uStack_340._4_4_,(int)lVar27);
    uStack_360 = uVar22;
    if ((int)uStack_70 < (int)uVar22) {
      uVar22 = uStack_70;
      uStack_360 = uStack_70;
    }
  }
LAB_14623cfa0:
  do {
    plVar23 = plStack_200;
    if ((int)plStack_200[1] - *(int *)((longlong)plStack_200 + 0x34) != (int)uStack_1d8) {
      auStack_367[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_367);
    }
    if (((TStack_1f8.CurrentBitIndex == uVar22) &&
        (TStack_1f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_98 + 0x10))) &&
       (plVar23 == (longlong *)auStack_98)) {
      iStack_50 = 0;
      uVar7 = *(undefined8 *)((longlong)&pUStack_228->_padding_ + 4);
      uVar8 = *(undefined8 *)((longlong)&pUStack_228->_padding_ + 4);
      (pUStack_228->EvaluationFieldGuid).A = (int)uVar7;
      (pUStack_228->EvaluationFieldGuid).B = (int)((ulonglong)uVar7 >> 0x20);
      (pUStack_228->EvaluationFieldGuid).C = (int)uVar8;
      (pUStack_228->EvaluationFieldGuid).D = (int)((ulonglong)uVar8 >> 0x20);
      if (FStack_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_58);
      }
      TSparseArray<TSparseSetElement<TTuple<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)auStack_98);
      if (FStack_358.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_358.Data);
      }
      if (TStack_2b8.Data.Items.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_2b8.Data.Items.AllocatorInstance.Data);
      }
      if (TStack_2b8.Data.Entries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_2b8.Data.Entries.AllocatorInstance.Data);
      }
      if ((void *)TStack_2b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_2b8._padding_);
      }
      if ((void *)TStack_2b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_2b8._padding_);
      }
      return;
    }
    uVar36 = 0;
    lVar29 = 0;
    lVar27 = *plVar23 + (longlong)TStack_1f8.CurrentBitIndex * 0x20;
    iVar15 = *(int *)(lVar27 + 0x10);
    iStack_364 = iVar15;
    lStack_230 = lVar27;
    if (0 < iVar15) {
      this_00 = (TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_> *)
                (lVar27 + 8);
      do {
        uVar22 = 0;
        if ((int)uVar36 < *(int *)(lVar27 + 0x10)) {
          uVar22 = ~uVar36 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar31 = (this_00->AllocatorInstance).Data;
        lStack_240 = (longlong)(iVar15 + -1);
        lVar33 = lVar29 * 0x20;
        lVar34 = lVar33;
        uVar22 = uVar36;
        uStack_344 = uVar36;
        if (lVar29 < lStack_240) {
          do {
            uVar22 = uVar22 + 1;
            uVar16 = 0;
            if ((int)uVar22 < *(int *)(lVar27 + 0x10)) {
              uVar16 = ~uVar22 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar5 = (this_00->AllocatorInstance).Data;
            bVar13 = TRange<FFrameNumber>::Adjoins
                               ((TRange<FFrameNumber> *)(pFVar5 + lVar34 + 0x28),
                                (TRange<FFrameNumber> *)(pFVar31 + lVar33 + 8));
            iVar15 = iStack_364;
            if (((!bVar13) || (pFVar5[lVar34 + 0x3c] != pFVar31[lVar33 + 0x1c])) ||
               (*(int *)(pFVar5 + lVar34 + 0x38) != *(int *)(pFVar31 + lVar33 + 0x18))) break;
            uVar36 = uVar36 + 1;
            *(undefined8 *)(pFVar31 + lVar33 + 0x10) = *(undefined8 *)(pFVar5 + lVar34 + 0x30);
            lVar29 = lVar29 + 1;
            lVar34 = lVar34 + 0x20;
          } while (lVar29 < lStack_240);
        }
        uVar22 = uVar36 - uStack_344;
        uVar36 = uVar36 + 1;
        if (0 < (int)uVar22) {
          uVar30 = uStack_344 + 1;
          uVar16 = 0;
          if ((int)uVar36 <= *(int *)(lVar27 + 0x10)) {
            uVar16 = ~(uVar22 | uVar30) >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (this_00,uVar30,uVar22);
          iVar15 = iStack_364 - uVar22;
          iStack_364 = iVar15;
        }
        lVar29 = lVar29 + 1;
        piVar35 = piStack_208;
        pFVar37 = pFStack_300;
      } while ((int)uVar36 < iVar15);
    }
    lVar27 = lStack_230;
    if (0 < *(int *)(lStack_230 + 0x10)) {
      puVar18 = (undefined8 *)(lStack_230 + 8);
      if ((pFVar37 == (FMovieSceneTrackEvaluationField *)puVar18) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar15 = *(int *)(lVar27 + 0x10);
      if (iVar15 != 0) {
        iVar17 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x20,8,iVar15,(ForAnyElementType *)pFVar37,&(pFVar37->Entries).ArrayNum,
                            piVar35);
        ConstructItems<FMovieSceneTrackEvaluationFieldEntry,FMovieSceneTrackEvaluationFieldEntry,int>
                  ((pFVar37->Entries).AllocatorInstance.Data + (longlong)iVar17 * 0x20,
                   (FMovieSceneTrackEvaluationFieldEntry *)*puVar18,iVar15);
      }
    }
    TStack_1f8.UnvisitedBitMask = TStack_1f8.UnvisitedBitMask & ~TStack_1f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f8);
    uVar22 = uStack_360;
  } while( true );
}

// GetAllSections @ 146216300

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneTrack::GetAllSections(UMovieSceneTrack *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTrack.h"
             ,0x211,L"Pure virtual not implemented (%s)");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<UMovieSceneSection*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UMovieSceneTrack::GetAllSections(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<UMovieSceneSection*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UMovieSceneTrack::GetAllSections(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<UMovieSceneSection*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UMovieSceneTrack::GetAllSections(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`UMovieSceneTrack::GetAllSections'::__l2::_dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&`public:_virtual_class_TArray<UMovieSceneSection*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UMovieSceneTrack::GetAllSections(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<UMovieSceneSection*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UMovieSceneTrack::GetAllSections(void)const___ptr64'
          ::__l2::Empty;
}

// GetEvaluationField @ 146218670

FMovieSceneTrackEvaluationField * __thiscall
UMovieSceneTrack::GetEvaluationField(UMovieSceneTrack *this)

{
  if ((((this->EvaluationFieldGuid).D != (uint)this->_padding_ ||
       (this->EvaluationFieldGuid).C != *(uint *)((longlong)&this->_padding_ + 4)) ||
      (this->EvaluationFieldGuid).B != (uint)this->_padding_) ||
      (this->EvaluationFieldGuid).A != *(uint *)((longlong)&this->_padding_ + 4)) {
    UpdateEvaluationTree(this);
    return &this->EvaluationField;
  }
  return &this->EvaluationField;
}

// GetEvaluationFieldVersion @ 1462186d0

schar __thiscall UMovieSceneTrack::GetEvaluationFieldVersion(UMovieSceneTrack *this)

{
  return '\0';
}

// GetMaxRowIndex @ 1462195f0

int __thiscall UMovieSceneTrack::GetMaxRowIndex(UMovieSceneTrack *this)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x360))();
  plVar5 = (longlong *)*plVar3;
  lVar2 = plVar3[1];
  plVar1 = plVar5 + (int)lVar2;
  iVar6 = 0;
  while( true ) {
    if ((int)plVar3[1] != (int)lVar2) {
      `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar5 == plVar1) break;
    iVar4 = *(int *)(*plVar5 + 0xd0);
    if (*(int *)(*plVar5 + 0xd0) < iVar6) {
      iVar4 = iVar6;
    }
    plVar5 = plVar5 + 1;
    iVar6 = iVar4;
  }
  return iVar6;
}

// GetPrivateStaticClass @ 14621c070

UClass * __cdecl UMovieSceneTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTrack",
               &Z_Registration_Info_UClass_UMovieSceneTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneTrack,0x118,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneTrack>,local_res8,
               UMovieSceneDecorationContainerObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrack.InnerSingleton;
}

// GetRowSegmentBlender @ 14621c520

TInlineValue<FMovieSceneTrackRowSegmentBlender,16,8> * __thiscall
UMovieSceneTrack::GetRowSegmentBlender
          (UMovieSceneTrack *this,
          TInlineValue<FMovieSceneTrackRowSegmentBlender,16,8> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<FMovieSceneTrackRowSegmentBlender,16,8> *pTVar4;
  TInlineValue<FMovieSceneTrackRowSegmentBlender,16,8> *pTVar5;
  
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad = &___7FDefaultTrackRowSegmentBlender__6B_;
  if (!__return_storage_ptr__->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<FMovieSceneTrackRowSegmentBlender,16,8> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar4 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar4 = *(TInlineValue<FMovieSceneTrackRowSegmentBlender,16,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (!__return_storage_ptr__->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<FMovieSceneTrackRowSegmentBlender,16,8> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar5 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar5 = *(TInlineValue<FMovieSceneTrackRowSegmentBlender,16,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (pTVar4 != pTVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<FMovieSceneTrackRowSegmentBlender,16,8> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetSectionToKey @ 14621c830

UMovieSceneSection * __thiscall UMovieSceneTrack::GetSectionToKey(UMovieSceneTrack *this)

{
  return (UMovieSceneSection *)0x0;
}

// GetTrackName @ 14621d730

FName __thiscall UMovieSceneTrack::GetTrackName(UMovieSceneTrack *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetTrackSegmentBlender @ 14621d740

TInlineValue<FMovieSceneTrackSegmentBlender,16,8> * __thiscall
UMovieSceneTrack::GetTrackSegmentBlender
          (UMovieSceneTrack *this,
          TInlineValue<FMovieSceneTrackSegmentBlender,16,8> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TInlineValue<FMovieSceneTrackSegmentBlender,16,8> *pTVar3;
  TInlineValue<FMovieSceneTrackSegmentBlender,16,8> *pTVar4;
  byte bVar5;
  
  bVar5 = __return_storage_ptr__->field_0x10 & 0xfe;
  if ((this->EvalOptions).bCanEvaluateNearestSection == 1 &&
      (this->EvalOptions).bEvalNearestSection == 1) {
    __return_storage_ptr__->field_0x10 = bVar5 | 3;
    (__return_storage_ptr__->Data).Pad[8] = '\0';
    (__return_storage_ptr__->Data).Pad[9] = '\x01';
    *(undefined ***)(__return_storage_ptr__->Data).Pad = &___7FEvaluateNearestSegmentBlender__6B_;
    if (!__return_storage_ptr__->bIsValid) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TInlineValue<FMovieSceneTrackSegmentBlender,16,8> *)(*pcVar1)();
        return pTVar3;
      }
    }
    pTVar3 = __return_storage_ptr__;
    if (!__return_storage_ptr__->bInline) {
      pTVar3 = *(TInlineValue<FMovieSceneTrackSegmentBlender,16,8> **)
                (__return_storage_ptr__->Data).Pad;
    }
    if (!__return_storage_ptr__->bIsValid) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TInlineValue<FMovieSceneTrackSegmentBlender,16,8> *)(*pcVar1)();
        return pTVar3;
      }
    }
    pTVar4 = __return_storage_ptr__;
    if (!__return_storage_ptr__->bInline) {
      pTVar4 = *(TInlineValue<FMovieSceneTrackSegmentBlender,16,8> **)
                (__return_storage_ptr__->Data).Pad;
    }
    if (pTVar3 != pTVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TInlineValue<FMovieSceneTrackSegmentBlender,16,8> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  else {
    __return_storage_ptr__->field_0x10 = bVar5 | 2;
  }
  return __return_storage_ptr__;
}

// HasSection @ 14621e160

bool __thiscall UMovieSceneTrack::HasSection(UMovieSceneTrack *this,UMovieSceneSection *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTrack.h"
             ,0x219,L"Pure virtual not implemented (%s)");
  return false;
}

// IsEmpty @ 146222600

bool __thiscall UMovieSceneTrack::IsEmpty(UMovieSceneTrack *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTrack.h"
             ,0x184,L"Pure virtual not implemented (%s)");
  return true;
}

// IsEvalDisabled @ 146222630

bool __thiscall UMovieSceneTrack::IsEvalDisabled(UMovieSceneTrack *this,bool param_1)

{
  return this->bIsEvalDisabled;
}

// IsPostLoadThreadSafe @ 146222710

bool __thiscall UMovieSceneTrack::IsPostLoadThreadSafe(UMovieSceneTrack *this)

{
  return true;
}

// IsRowEvalDisabled @ 146222770

bool __thiscall UMovieSceneTrack::IsRowEvalDisabled(UMovieSceneTrack *this,int param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->RowsDisabled).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->RowsDisabled).ArrayNum * 4;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(int *)pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 4;
  }
  return true;
}

// OnAddedToMovieScene @ 146225730

void __thiscall UMovieSceneTrack::OnAddedToMovieScene(UMovieSceneTrack *this,UMovieScene *param_1)

{
  TObjectPtr<UObject>_u_0 *pTVar1;
  TObjectPtr<UObject> this_00;
  UObjectBaseUtility *this_01;
  longlong lVar2;
  UClass *pUVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  TObjectPtr<UObject>_u_0 *pTVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  TArrayView<TObjectPtr<UObject>_const_,int> local_38;
  
  (**(code **)(this->_padding_ + 0x2f8))();
  FMovieSceneDecorationContainer::GetDecorations
            ((FMovieSceneDecorationContainer *)&this->_padding_,&local_38);
  pTVar1 = &local_38.DataPtr[local_38.ArrayNum].field0_0x0;
  for (pTVar7 = &(local_38.DataPtr)->field0_0x0; pTVar7 != pTVar1; pTVar7 = pTVar7 + 1) {
    this_00.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar7->DebugPtr;
    if (this_00.field0_0x0 != (UObject *)0x0) {
      pUVar3 = Z_Construct_UClass_UMovieSceneLifetimeDecoration_NoRegister();
      plVar4 = UObjectBaseUtility::GetInterfaceAddress
                         ((UObjectBaseUtility *)this_00.field0_0x0,pUVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,param_1);
      }
    }
  }
  plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x360))(this);
  plVar8 = (longlong *)*plVar5;
  lVar2 = plVar5[1];
  plVar4 = plVar8 + (int)lVar2;
  while( true ) {
    if ((int)plVar5[1] != (int)lVar2) {
      `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar8 == plVar4) break;
    FMovieSceneDecorationContainer::GetDecorations
              ((FMovieSceneDecorationContainer *)(*plVar8 + 0x60),&local_38);
    pTVar1 = &local_38.DataPtr[local_38.ArrayNum].field0_0x0;
    for (pTVar7 = &(local_38.DataPtr)->field0_0x0; pTVar7 != pTVar1; pTVar7 = pTVar7 + 1) {
      this_01 = (UObjectBaseUtility *)pTVar7->DebugPtr;
      if (this_01 != (UObjectBaseUtility *)0x0) {
        pUVar3 = Z_Construct_UClass_UMovieSceneLifetimeDecoration_NoRegister();
        plVar6 = UObjectBaseUtility::GetInterfaceAddress(this_01,pUVar3);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,param_1);
        }
      }
    }
    plVar8 = plVar8 + 1;
  }
  return;
}

// OnAddedToMovieSceneImpl @ 146225870

void __thiscall
UMovieSceneTrack::OnAddedToMovieSceneImpl(UMovieSceneTrack *this,UMovieScene *param_1)

{
  return;
}

// OnDecorationAdded @ 146225b00

void __thiscall UMovieSceneTrack::OnDecorationAdded(UMovieSceneTrack *this,UObject *param_1)

{
  UClass *pUVar1;
  longlong *plVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = Z_Construct_UClass_UMovieSceneTrackDecoration_NoRegister();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,this);
    }
  }
  return;
}

// OnDecorationRemoved @ 146225bf0

void __thiscall UMovieSceneTrack::OnDecorationRemoved(UMovieSceneTrack *this,UObject *param_1)

{
  UClass *pUVar1;
  longlong *plVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = Z_Construct_UClass_UMovieSceneTrackDecoration_NoRegister();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  return;
}

// OnRemovedFromMovieScene @ 146225c80

void __thiscall UMovieSceneTrack::OnRemovedFromMovieScene(UMovieSceneTrack *this)

{
  TObjectPtr<UObject>_u_0 *pTVar1;
  TObjectPtr<UObject> this_00;
  UObjectBaseUtility *this_01;
  longlong lVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  TObjectPtr<UObject>_u_0 *pTVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  TArrayView<TObjectPtr<UObject>_const_,int> local_38;
  
  (**(code **)(this->_padding_ + 0x300))();
  pUVar3 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if (pUVar4 != (UObject *)0x0) {
    FMovieSceneDecorationContainer::GetDecorations
              ((FMovieSceneDecorationContainer *)&this->_padding_,&local_38);
    pTVar1 = &local_38.DataPtr[local_38.ArrayNum].field0_0x0;
    for (pTVar8 = &(local_38.DataPtr)->field0_0x0; pTVar8 != pTVar1; pTVar8 = pTVar8 + 1) {
      this_00.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar8->DebugPtr;
      if (this_00.field0_0x0 != (UObject *)0x0) {
        pUVar3 = Z_Construct_UClass_UMovieSceneLifetimeDecoration_NoRegister();
        plVar5 = UObjectBaseUtility::GetInterfaceAddress
                           ((UObjectBaseUtility *)this_00.field0_0x0,pUVar3);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x18))(plVar5,pUVar4);
        }
      }
    }
    plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x360))(this);
    plVar9 = (longlong *)*plVar6;
    lVar2 = plVar6[1];
    plVar5 = plVar9 + (int)lVar2;
    while( true ) {
      if ((int)plVar6[1] != (int)lVar2) {
        `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (plVar9 == plVar5) break;
      FMovieSceneDecorationContainer::GetDecorations
                ((FMovieSceneDecorationContainer *)(*plVar9 + 0x60),&local_38);
      pTVar1 = &local_38.DataPtr[local_38.ArrayNum].field0_0x0;
      for (pTVar8 = &(local_38.DataPtr)->field0_0x0; pTVar8 != pTVar1; pTVar8 = pTVar8 + 1) {
        this_01 = (UObjectBaseUtility *)pTVar8->DebugPtr;
        if (this_01 != (UObjectBaseUtility *)0x0) {
          pUVar3 = Z_Construct_UClass_UMovieSceneLifetimeDecoration_NoRegister();
          plVar7 = UObjectBaseUtility::GetInterfaceAddress(this_01,pUVar3);
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x18))(plVar7,pUVar4);
          }
        }
      }
      plVar9 = plVar9 + 1;
    }
  }
  return;
}

// OnRemovedFromMovieSceneImpl @ 146225df0

void __thiscall UMovieSceneTrack::OnRemovedFromMovieSceneImpl(UMovieSceneTrack *this)

{
  return;
}

// OnRowIndicesChanged @ 146226750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneTrack::OnRowIndicesChanged
          (UMovieSceneTrack *this,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_1)

{
  TMap<int,FMovieSceneTrackRowMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneTrackRowMetadata,0>_>
  *pTVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  uint *puVar5;
  longlong lVar6;
  UMovieSceneTrackRowDecoration *this_00;
  UClass *pUVar7;
  FString *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 *puVar11;
  ForElementType<FSetElementId> _Src;
  longlong *plVar12;
  wchar_t *pwVar13;
  int iVar14;
  wchar_t *pwVar15;
  TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_01;
  uint uVar16;
  uint uVar17;
  TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *_Dst;
  undefined1 auStackY_108 [32];
  uint local_d8 [2];
  UMovieSceneTrack *local_d0;
  undefined1 local_c8 [8];
  TObjectPtr<UClass>_u_0 local_c0;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pTVar1 = &this->TrackRowMetadata;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_d8[0] = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  this_01 = (TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)pTVar1;
  local_d0 = this;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  while( true ) {
    plVar4 = (longlong *)(**(code **)(local_d0->_padding_ + 0x360))();
    plVar12 = (longlong *)*plVar4;
    lVar6 = plVar4[1];
    plVar2 = plVar12 + (int)lVar6;
    iVar14 = 0;
    while( true ) {
      if ((int)plVar4[1] != (int)lVar6) {
        `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_c8);
        this_01 = (TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)pTVar1;
      }
      uVar17 = local_50;
      if (plVar12 == plVar2) break;
      iVar9 = *(int *)(*plVar12 + 0xd0);
      if (*(int *)(*plVar12 + 0xd0) < iVar14) {
        iVar9 = iVar14;
      }
      plVar12 = plVar12 + 1;
      this_01 = (TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pTVar1;
      iVar14 = iVar9;
    }
    if (iVar14 < (int)local_d8[0]) break;
    uVar17 = local_d8[0];
    if (*(int *)(local_b8.Data.AllocatorInstance.Data + 8) !=
        *(int *)(local_b8.Data.AllocatorInstance.Data + 0x34)) {
      pFVar10 = local_b8.Data.AllocatorInstance.Data + 0x38;
      if (*(FScriptContainerElement **)(local_b8.Data.AllocatorInstance.Data + 0x40) !=
          (FScriptContainerElement *)0x0) {
        pFVar10 = *(FScriptContainerElement **)(local_b8.Data.AllocatorInstance.Data + 0x40);
      }
      iVar14 = *(int *)(pFVar10 +
                       (ulonglong)
                       (*(int *)(local_b8.Data.AllocatorInstance.Data + 0x48) - 1U & local_d8[0]) *
                       4);
      if (iVar14 != -1) {
        lVar6 = *(longlong *)local_b8.Data.AllocatorInstance.Data;
        do {
          if (*(uint *)(lVar6 + (longlong)iVar14 * 0x10) == local_d8[0]) {
            if (((iVar14 != -1) && (lVar6 = (longlong)iVar14 * 0x10 + lVar6, lVar6 != 0)) &&
               (puVar5 = (uint *)(lVar6 + 4), puVar5 != (uint *)0x0)) {
              uVar17 = *puVar5;
            }
            break;
          }
          iVar14 = *(int *)(lVar6 + 8 + (longlong)iVar14 * 0x10);
        } while (iVar14 != -1);
      }
    }
    this_01 = (TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&local_d0->TrackRowMetadata;
    if (*(int *)&(local_d0->TrackRowMetadata).field_0x8 ==
        *(int *)&(local_d0->TrackRowMetadata).field_0x34) {
LAB_14622693e:
      local_d8[0] = local_d8[0] + 1;
    }
    else {
      puVar3 = *(undefined1 **)&(local_d0->TrackRowMetadata).field_0x40;
      puVar11 = &(local_d0->TrackRowMetadata).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar11 = puVar3;
      }
      iVar14 = *(int *)(puVar11 +
                       (ulonglong)(*(int *)&(local_d0->TrackRowMetadata).field_0x48 - 1U & uVar17) *
                       4);
      if (iVar14 == -1) goto LAB_14622693e;
      lVar6 = *(longlong *)this_01;
      do {
        if (*(uint *)(lVar6 + (longlong)iVar14 * 0x18) == uVar17) {
          if (((iVar14 != -1) && (lVar6 = lVar6 + (longlong)iVar14 * 0x18, lVar6 != 0)) &&
             (lVar6 = lVar6 + 8, lVar6 != 0)) {
            local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_d8;
            local_a8.Data._8_8_ = lVar6;
            TSet<TTuple<int,FMovieSceneTrackRowMetadata>,TDefaultMapHashableKeyFuncs<int,FMovieSceneTrackRowMetadata,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_const_&,FMovieSceneTrackRowMetadata_const_&>_>
                      ((TSet<TTuple<int,FMovieSceneTrackRowMetadata>,TDefaultMapHashableKeyFuncs<int,FMovieSceneTrackRowMetadata,0>,FDefaultSetAllocator>
                        *)local_98,
                       (TPairInitializer<int_const_&,FMovieSceneTrackRowMetadata_const_&> *)
                       &local_c0.ObjectPtr,(bool *)&local_a8);
          }
          goto LAB_14622693e;
        }
        iVar14 = *(int *)(lVar6 + 0x10 + (longlong)iVar14 * 0x18);
      } while (iVar14 != -1);
      local_d8[0] = local_d8[0] + 1;
    }
  }
  if (this_01 ==
      (TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)local_98) goto LAB_1462269c0;
  lVar6 = (longlong)(int)local_50;
  uVar16 = local_50;
  if (local_50 < 2) {
    if (*(longlong *)&this_01[1].field_0x8 != 0) {
      uVar16 = 0;
      goto LAB_146226973;
    }
  }
  else {
LAB_146226973:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this_01[1].field_0x8,0,uVar16,4);
  }
  _Src = (ForElementType<FSetElementId>)local_60;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    _Src = local_58;
  }
  _Dst = this_01 + 1;
  if (*(TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        **)&this_01[1].field_0x8 !=
      (TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)0x0) {
    _Dst = *(TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             **)&this_01[1].field_0x8;
  }
  if (uVar17 != 0) {
    memcpy(_Dst,(void *)_Src,lVar6 << 2);
  }
  *(uint *)&this_01[1].field_0x10 = uVar17;
  TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::operator=(this_01,(TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneTrackRowMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_98);
LAB_1462269c0:
  local_c0.DebugPtr = Z_Construct_UClass_UMovieSceneTrackRowDecoration_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c0.DebugPtr != (UClass *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_c0.DebugPtr);
  }
  this_00 = (UMovieSceneTrackRowDecoration *)
            FMovieSceneDecorationContainer::FindDecoration
                      ((FMovieSceneDecorationContainer *)&local_d0->_padding_,
                       (TSubclassOf<UObject> *)&local_c0.ObjectPtr);
  if (this_00 != (UMovieSceneTrackRowDecoration *)0x0) {
    pUVar7 = Z_Construct_UClass_UMovieSceneTrackRowDecoration_NoRegister();
    iVar14 = (int)pUVar7->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar14) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
        &pUVar7->_padding_)) {
      pFVar8 = GetTypeName<UMovieSceneTrackRowDecoration>(&local_a8);
      pwVar13 = L"";
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<UObject>(&local_b8,(UObject *)this_00);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar13 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar13,pwVar15);
    }
    UMovieSceneTrackRowDecoration::OnRowIndicesChanged
              (this_00,(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *
                       )local_b8.Data.AllocatorInstance.Data);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  iVar14 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar14 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return;
}

// OnSectionAddedImpl @ 146226b20

void __thiscall
UMovieSceneTrack::OnSectionAddedImpl(UMovieSceneTrack *this,UMovieSceneSection *param_1)

{
  return;
}

// OnSectionRemovedImpl @ 146226b30

void __thiscall
UMovieSceneTrack::OnSectionRemovedImpl(UMovieSceneTrack *this,UMovieSceneSection *param_1)

{
  return;
}

// PopulateEvaluationTree @ 146228220

bool __thiscall
UMovieSceneTrack::PopulateEvaluationTree
          (UMovieSceneTrack *this,TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *param_1
          )

{
  return false;
}

// PostInitProperties @ 146228780

void __thiscall UMovieSceneTrack::PostInitProperties(UMovieSceneTrack *this)

{
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
  if ((*(uint *)(this->_padding_ + 8) & 0x30) != 0) {
    UObjectBase::AtomicallySetFlags
              ((UObjectBase *)this,
               *(EObjectFlags *)(this->_padding_ + 8) &
               (RF_Transient|RF_ArchetypeObject|RF_Transactional|RF_Public));
  }
  UMovieSceneSignedObject::PostInitProperties((UMovieSceneSignedObject *)this);
  return;
}

// PostLoad @ 146228a00

void __thiscall UMovieSceneTrack::PostLoad(UMovieSceneTrack *this)

{
  FMovieSceneTrackEvalOptions FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  FFrameNumber *pFVar7;
  longlong lVar8;
  uint uVar9;
  FSectionIndexParameter FVar10;
  TRangeBound<FFrameNumber> local_28;
  TRangeBound<FFrameNumber> TStack_20;
  FGuid local_18;
  
  UObject::PostLoad((UObject *)this);
  local_18 = FMovieSceneEvaluationCustomVersion::GUID;
  iVar4 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if (iVar4 < 1) {
    FVar1 = this->EvalOptions;
    this->EvalOptions =
         (FMovieSceneTrackEvalOptions)(((uint)FVar1 >> 3 ^ (uint)FVar1) & 2 ^ (uint)FVar1);
  }
  FVar10.SectionIndex = 0;
  lVar5 = (**(code **)(this->_padding_ + 0x360))(this);
  if (0 < *(int *)(lVar5 + 8)) {
    lVar5 = 0;
    do {
      plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x360))();
      uVar9 = 0;
      if (FVar10.SectionIndex < (int)plVar6[1]) {
        uVar9 = (uint)~FVar10.SectionIndex >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar8 = *(longlong *)(lVar5 + *plVar6);
      if (lVar8 == 0) {
        RemoveSectionAt(this,FVar10);
      }
      else {
        local_28._0_4_ = *(undefined4 *)(lVar8 + 0xb0);
        local_28.Value.Value = *(int *)(lVar8 + 0xb4);
        TStack_20._0_4_ = *(undefined4 *)(lVar8 + 0xb8);
        iVar4 = *(int *)(lVar8 + 0xbc);
        TStack_20.Value.Value = iVar4;
        if ((local_28.Type.Value == '\x02') || (TStack_20.Type.Value == '\x02')) {
LAB_146228b7c:
          FVar10.SectionIndex = FVar10.SectionIndex + 1;
          lVar5 = lVar5 + 8;
        }
        else {
          if ((local_28.Type.Value == '\x02') &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (local_28.Value.Value <= iVar4) {
            pFVar7 = TRangeBound<FFrameNumber>::GetValue(&TStack_20);
            iVar4 = pFVar7->Value;
            pFVar7 = TRangeBound<FFrameNumber>::GetValue(&local_28);
            if ((pFVar7->Value != iVar4) ||
               ((local_28.Type.Value != '\0' && (TStack_20.Type.Value != '\0'))))
            goto LAB_146228b7c;
          }
          RemoveSectionAt(this,FVar10);
        }
      }
      lVar8 = (**(code **)(this->_padding_ + 0x360))(this);
    } while (FVar10.SectionIndex < *(int *)(lVar8 + 8));
  }
  return;
}

// PreCompile @ 146229a40

void __thiscall
UMovieSceneTrack::PreCompile(UMovieSceneTrack *this,FMovieSceneTrackPreCompileResult *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146229a43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2f0))();
  return;
}

// PreCompileImpl @ 146229a50

void __thiscall
UMovieSceneTrack::PreCompileImpl(UMovieSceneTrack *this,FMovieSceneTrackPreCompileResult *param_1)

{
  return;
}

// RemoveAllAnimationData @ 14622e9c0

void __thiscall UMovieSceneTrack::RemoveAllAnimationData(UMovieSceneTrack *this)

{
  return;
}

// RemoveSection @ 1462302a0

void __thiscall UMovieSceneTrack::RemoveSection(UMovieSceneTrack *this,FSectionParameter param_1)

{
  (**(code **)(this->_padding_ + 8))(&this->_padding_);
  UMovieSceneSection::OnRemovedFromTrack(param_1.Section);
                    /* WARNING: Could not recover jumptable at 0x0001462302d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x378))(this,param_1.Section);
  return;
}

// RemoveSectionAt @ 146230320

void __thiscall
UMovieSceneTrack::RemoveSectionAt(UMovieSceneTrack *this,FSectionIndexParameter param_1)

{
  UMovieSceneSection *this_00;
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x360))();
  if ((-1 < param_1.SectionIndex) && (param_1.SectionIndex < (int)plVar3[1])) {
    if (param_1.SectionIndex < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this_00 = *(UMovieSceneSection **)(*plVar3 + (longlong)param_1.SectionIndex * 8);
    (**(code **)(this->_padding_ + 0x10))(&this->_padding_,param_1.SectionIndex);
    if (this_00 != (UMovieSceneSection *)0x0) {
      UMovieSceneSection::OnRemovedFromTrack(this_00);
    }
  }
  return;
}

// SetRowEvalDisabled @ 146235590

void __thiscall
UMovieSceneTrack::SetRowEvalDisabled(UMovieSceneTrack *this,bool param_1,int param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_res18 [2];
  
  this_00 = &this->RowsDisabled;
  local_res18[0] = param_2;
  if (param_1) {
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(this_00,local_res18);
    return;
  }
  pFVar2 = (this_00->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_res18) &&
      ((FScriptContainerElement *)local_res18 < pFVar2 + (longlong)(this->RowsDisabled).ArrayMax * 4
      )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->RowsDisabled).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this_00->AllocatorInstance).Data;
    bVar4 = *(int *)pFVar2 != local_res18[0];
    lVar5 = 0;
    iVar8 = local_res18[0];
    iVar6 = 0;
    do {
      iVar7 = iVar6;
      do {
        lVar5 = lVar5 + 1;
        iVar7 = iVar7 + 1;
        if (iVar1 <= lVar5) break;
      } while (bVar4 == (*(int *)(pFVar2 + lVar5 * 4) != iVar8));
      if (bVar4 != false) {
        if (iVar9 != iVar6) {
          memmove(pFVar2 + (longlong)iVar9 * 4,pFVar2 + (longlong)iVar6 * 4,
                  (longlong)(iVar7 - iVar6) << 2);
          iVar8 = local_res18[0];
        }
        iVar9 = iVar9 + (iVar7 - iVar6);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar6 = iVar7;
    } while (lVar5 < iVar1);
    (this->RowsDisabled).ArrayNum = iVar9;
  }
  return;
}

// SetSectionToKey @ 146235740

void __thiscall
UMovieSceneTrack::SetSectionToKey(UMovieSceneTrack *this,UMovieSceneSection *param_1)

{
  return;
}

// StaticRegisterNativesUMovieSceneTrack @ 146237d30

void __cdecl UMovieSceneTrack::StaticRegisterNativesUMovieSceneTrack(void)

{
  return;
}

// SupportsEasing @ 146238550

EMovieSceneTrackEasingSupportFlags __thiscall
UMovieSceneTrack::SupportsEasing(UMovieSceneTrack *this,FMovieSceneSupportsEasingParams *param_1)

{
  int iVar1;
  EMovieSceneTrackEasingSupportFlags EVar2;
  
  iVar1 = FMovieSceneBlendTypeField::Num(&this->SupportedBlendTypes);
  EVar2 = None;
  if (0 < iVar1) {
    EVar2 = All;
  }
  return EVar2;
}

// SupportsMultipleRows @ 146238580

bool __thiscall UMovieSceneTrack::SupportsMultipleRows(UMovieSceneTrack *this)

{
  int iVar1;
  
  iVar1 = FMovieSceneBlendTypeField::Num(&this->SupportedBlendTypes);
  return iVar1 != 0;
}

// SupportsType @ 146238690

bool __thiscall
UMovieSceneTrack::SupportsType(UMovieSceneTrack *this,TSubclassOf<UMovieSceneSection> param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTrack.h"
             ,0x1e1,L"Pure virtual not implemented (%s)");
  return false;
}

// UpdateEasing @ 14623b9f0

void __thiscall UMovieSceneTrack::UpdateEasing(UMovieSceneTrack *this)

{
  longlong *plVar1;
  UObjectBaseUtility *this_00;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  byte bVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  UClass *pUVar16;
  UObjectBaseUtility *pUVar17;
  UObject *pUVar18;
  int iVar19;
  int *piVar20;
  char cVar21;
  longlong *plVar22;
  undefined8 uVar23;
  longlong lVar24;
  char cVar25;
  uint uVar26;
  char cVar27;
  char cVar28;
  undefined8 uVar29;
  undefined1 local_res18 [8];
  int local_res20;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  undefined4 local_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  longlong local_c0;
  uint local_b8;
  int local_b4;
  longlong local_b0;
  longlong local_a8;
  UObject *local_a0;
  int local_98;
  undefined1 local_94;
  int local_90;
  undefined1 local_8c;
  int local_88;
  undefined1 local_84;
  int local_80;
  undefined1 local_7c;
  int local_78 [2];
  undefined8 local_70;
  UObjectBaseUtility *local_68;
  undefined8 local_60;
  UObjectBaseUtility *local_58;
  
  local_98 = GetMaxRowIndex(this);
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_dc = 0;
  local_e0 = 0;
  local_b4 = 0;
  if (-1 < local_98) {
    do {
      iVar13 = local_b4;
      local_e0 = 0;
      if ((local_dc < 0) && (local_dc != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_e8,0,&local_dc);
      }
      plVar15 = (longlong *)(**(code **)(this->_padding_ + 0x360))(this);
      plVar22 = (longlong *)*plVar15;
      lVar24 = plVar15[1];
      plVar1 = plVar22 + (int)lVar24;
      while( true ) {
        if ((int)plVar15[1] != (int)lVar24) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res18);
        }
        if (plVar22 == plVar1) break;
        local_a8 = *plVar22;
        if ((local_a8 != 0) && (*(int *)(local_a8 + 0xd0) == iVar13)) {
          if ((local_e8.Data <= (FScriptContainerElement *)&local_a8) &&
             (((FScriptContainerElement *)&local_a8 < local_e8.Data + (longlong)local_dc * 8 &&
              (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)))) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (local_e0 == local_dc) {
            local_e0 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_e8,&local_dc);
          }
          *(longlong *)(local_e8.Data + (longlong)local_e0 * 8) = local_a8;
          local_e0 = local_e0 + 1;
        }
        plVar22 = plVar22 + 1;
      }
      local_b8 = 0;
      local_c0 = 0;
      if (0 < local_e0) {
        do {
          lVar24 = local_c0;
          uVar26 = 0;
          uVar11 = 0;
          if ((int)local_b8 < local_e0) {
            uVar11 = ~local_b8 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          this_00 = *(UObjectBaseUtility **)(local_e8.Data + lVar24 * 8);
          local_68 = this_00;
          local_58 = this_00;
          bVar7 = (**(code **)(this->_padding_ + 0x328))(this,&local_68);
          if ((bVar7 & 4) == 0) {
            this_00[3].field_0x18 = 0;
          }
          if ((bVar7 & 8) == 0) {
            this_00[4].field_0x8 = 0;
          }
          if ((bVar7 & 3) == 3) {
            pUVar16 = StaticClass();
            pUVar17 = (UObjectBaseUtility *)UObjectBaseUtility::GetTypedOuter(this_00,pUVar16);
            uVar3 = *(undefined8 *)&this_00[4].field_0x10;
            uStack_f0 = *(undefined8 *)&this_00[4].field_0x18;
            bVar6 = false;
            local_res20 = 0;
            local_c8 = 0;
            local_a0 = (UObject *)pUVar17;
            bVar8 = false;
            local_b0 = 0;
            cVar27 = (char)uVar3;
            cVar25 = (char)uStack_f0;
            iVar13 = (int)((ulonglong)uStack_f0 >> 0x20);
            local_f8 = uVar3;
            if (0 < local_e0) {
              do {
                lVar5 = local_b0;
                iVar12 = local_res20;
                if (local_b0 != lVar24) {
                  uVar11 = 0;
                  if ((int)uVar26 < local_e0) {
                    uVar11 = ~uVar26 >> 0x1f;
                  }
                  if ((uVar11 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  uVar29 = *(undefined8 *)(*(longlong *)(local_e8.Data + lVar5 * 8) + 0xb0);
                  uVar23 = *(undefined8 *)(*(longlong *)(local_e8.Data + lVar5 * 8) + 0xb8);
                  local_d8 = (undefined4)uVar29;
                  iStack_d4 = (int)((ulonglong)uVar29 >> 0x20);
                  uStack_d0 = (undefined4)uVar23;
                  iStack_cc = (int)((ulonglong)uVar23 >> 0x20);
                  if (((char)uVar29 == '\x02') && ((char)uVar23 == '\x02')) {
                    pUVar16 = Z_Construct_UClass_UMovieScene_NoRegister();
                    pUVar18 = UObjectBaseUtility::GetTypedOuter(pUVar17,pUVar16);
                    uVar29 = *(undefined8 *)&pUVar18[7].field_0x10;
                    uVar23 = *(undefined8 *)&pUVar18[7].field_0x18;
                    local_d8 = (undefined4)uVar29;
                    iStack_d4 = (int)((ulonglong)uVar29 >> 0x20);
                    uStack_d0 = (undefined4)uVar23;
                    iStack_cc = (int)((ulonglong)uVar23 >> 0x20);
                  }
                  cVar28 = (char)uVar29;
                  cVar21 = (char)uVar23;
                  iVar14 = (int)((ulonglong)uVar23 >> 0x20);
                  if (bVar6) {
LAB_14623be1c:
                    bVar6 = true;
                  }
                  else {
                    iVar12 = (int)((ulonglong)uVar29 >> 0x20);
                    cVar9 = cVar28;
                    if (cVar28 == '\x02') {
                      piVar20 = &iStack_d4;
LAB_14623bdaa:
                      if (cVar9 == cVar28) goto LAB_14623bdaf;
                    }
                    else {
                      if (cVar27 == '\x02') {
LAB_14623bda1:
                        piVar20 = (int *)((longlong)&local_f8 + 4);
                        cVar9 = cVar27;
                        goto LAB_14623bdaa;
                      }
                      if (local_f8._4_4_ <= iVar12) {
                        if ((iVar12 <= local_f8._4_4_) && (cVar28 == '\x01')) {
                          piVar20 = &iStack_d4;
                          goto LAB_14623bdaa;
                        }
                        goto LAB_14623bda1;
                      }
                      piVar20 = &iStack_d4;
LAB_14623bdaf:
                      if ((cVar9 == '\x02') || (*piVar20 == iVar12)) {
                        cVar9 = cVar21;
                        if (cVar21 == '\x02') {
                          piVar20 = &iStack_cc;
LAB_14623be04:
                          if (cVar9 != cVar21) goto LAB_14623be17;
                        }
                        else {
                          if (cVar25 == '\x02') {
LAB_14623bdfb:
                            piVar20 = (int *)((longlong)&uStack_f0 + 4);
                            cVar9 = cVar25;
                            goto LAB_14623be04;
                          }
                          if (iVar14 <= uStack_f0._4_4_) {
                            if ((uStack_f0._4_4_ <= iVar14) && (cVar21 == '\x01')) {
                              piVar20 = &iStack_cc;
                              goto LAB_14623be04;
                            }
                            goto LAB_14623bdfb;
                          }
                          piVar20 = &iStack_cc;
                        }
                        if ((cVar9 == '\x02') || (*piVar20 == iVar14)) goto LAB_14623be1c;
                      }
                    }
LAB_14623be17:
                    bVar6 = false;
                  }
                  if ((cVar21 == '\x02') || (cVar27 == '\x02')) {
LAB_14623bf24:
                    bVar10 = false;
                  }
                  else {
                    if ((cVar21 == '\x02') &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Type != ERangeBoundTypes::Open",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                           ,99,L""), bVar8)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    local_90 = iStack_cc;
                    local_94 = 1;
                    cVar9 = cVar27;
                    if (cVar27 == '\x02') {
                      piVar20 = (int *)((longlong)&local_f8 + 4);
LAB_14623bebb:
                      if (cVar9 != cVar27) goto LAB_14623bf24;
                    }
                    else {
                      if (iStack_cc <= local_f8._4_4_) {
                        if ((iStack_cc < local_f8._4_4_) || (cVar27 != '\x01')) {
                          piVar20 = &local_90;
                          cVar9 = '\x01';
                        }
                        else {
                          piVar20 = (int *)((longlong)&local_f8 + 4);
                        }
                        goto LAB_14623bebb;
                      }
                      piVar20 = (int *)((longlong)&local_f8 + 4);
                    }
                    if ((cVar9 != '\x02') && (*piVar20 != local_f8._4_4_)) goto LAB_14623bf24;
                    local_8c = 1;
                    local_88 = iStack_cc;
                    cVar9 = cVar25;
                    if (cVar25 == '\x02') {
                      piVar20 = (int *)((longlong)&uStack_f0 + 4);
LAB_14623bf0e:
                      if (cVar9 != cVar25) goto LAB_14623bf24;
                    }
                    else {
                      if (uStack_f0._4_4_ <= iStack_cc) {
                        if ((uStack_f0._4_4_ < iStack_cc) || (cVar25 != '\x01')) {
                          piVar20 = &local_88;
                          cVar9 = '\x01';
                        }
                        else {
                          piVar20 = (int *)((longlong)&uStack_f0 + 4);
                        }
                        goto LAB_14623bf0e;
                      }
                      piVar20 = (int *)((longlong)&uStack_f0 + 4);
                    }
                    if ((cVar9 != '\x02') && (*piVar20 != uStack_f0._4_4_)) goto LAB_14623bf24;
                    bVar10 = true;
                  }
                  if ((cVar28 == '\x02') || (cVar25 == '\x02')) {
LAB_14623c02a:
                    bVar4 = false;
                  }
                  else {
                    if ((cVar28 == '\x02') &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Type != ERangeBoundTypes::Open",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                           ,99,L""), bVar8)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    local_80 = iStack_d4;
                    local_84 = 1;
                    cVar9 = cVar27;
                    if (cVar27 == '\x02') {
                      piVar20 = (int *)((longlong)&local_f8 + 4);
LAB_14623bfc2:
                      if (cVar9 != cVar27) goto LAB_14623c02a;
                    }
                    else {
                      if (iStack_d4 <= local_f8._4_4_) {
                        if ((iStack_d4 < local_f8._4_4_) || (cVar27 != '\x01')) {
                          piVar20 = &local_80;
                          cVar9 = '\x01';
                        }
                        else {
                          piVar20 = (int *)((longlong)&local_f8 + 4);
                        }
                        goto LAB_14623bfc2;
                      }
                      piVar20 = (int *)((longlong)&local_f8 + 4);
                    }
                    if ((cVar9 != '\x02') && (*piVar20 != local_f8._4_4_)) goto LAB_14623c02a;
                    local_7c = 1;
                    local_78[0] = iStack_d4;
                    cVar9 = cVar25;
                    if (cVar25 == '\x02') {
                      piVar20 = (int *)((longlong)&uStack_f0 + 4);
LAB_14623c015:
                      if (cVar9 != cVar25) goto LAB_14623c02a;
                    }
                    else {
                      if (uStack_f0._4_4_ <= iStack_d4) {
                        if ((uStack_f0._4_4_ < iStack_d4) || (cVar25 != '\x01')) {
                          piVar20 = local_78;
                          cVar9 = '\x01';
                        }
                        else {
                          piVar20 = (int *)((longlong)&uStack_f0 + 4);
                        }
                        goto LAB_14623c015;
                      }
                      piVar20 = (int *)((longlong)&uStack_f0 + 4);
                    }
                    if ((cVar9 != '\x02') && (*piVar20 != uStack_f0._4_4_)) goto LAB_14623c02a;
                    bVar4 = true;
                  }
                  lVar24 = local_c0;
                  pUVar17 = (UObjectBaseUtility *)local_a0;
                  iVar12 = local_res20;
                  bVar8 = bVar6;
                  if (bVar10) {
                    if (!bVar4) {
                      local_70 = uVar3;
                      if ((cVar21 == '\x02') &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("!InUpperBound.IsOpen()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                                              ,0x44,L""), bVar10)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      lVar24 = 0;
                      if (cVar21 == '\x01') {
                        lVar24 = 4;
                      }
                      iVar12 = *(int *)((longlong)
                                        &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                                         ::__l2::Offsets + lVar24);
                      if ((cVar21 == '\x02') &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Type != ERangeBoundTypes::Open",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                              ,99,L""), bVar10)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      if ((cVar27 == '\x02') &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("!InLowerBound.IsOpen()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                                              ,0x2c,L""), bVar10)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      lVar24 = 0;
                      if (cVar27 == '\0') {
                        lVar24 = 4;
                      }
                      iVar19 = *(int *)((longlong)
                                        &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                                         ::__l2::Offsets + lVar24);
                      if ((cVar27 == '\x02') &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Type != ERangeBoundTypes::Open",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                              ,99,L""), bVar10)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      iVar12 = ((iVar12 - iVar19) - local_70._4_4_) + iVar14;
                      pUVar17 = (UObjectBaseUtility *)local_a0;
                      lVar24 = local_c0;
                      if (iVar12 < local_res20) {
                        iVar12 = local_res20;
                      }
                    }
                  }
                  else if (bVar4) {
                    local_70 = uVar29;
                    if ((cVar25 == '\x02') &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("!InUpperBound.IsOpen()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                                            ,0x44,L""), bVar10)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    lVar24 = 0;
                    if (cVar25 == '\x01') {
                      lVar24 = 4;
                    }
                    iVar12 = *(int *)((longlong)
                                      &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                                       ::__l2::Offsets + lVar24);
                    if ((cVar25 == '\x02') &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Type != ERangeBoundTypes::Open",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                            ,99,L""), bVar10)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    if ((cVar28 == '\x02') &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("!InLowerBound.IsOpen()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                                            ,0x2c,L""), bVar10)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    lVar24 = 0;
                    if (cVar28 == '\0') {
                      lVar24 = 4;
                    }
                    iVar14 = *(int *)((longlong)
                                      &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                                       ::__l2::Offsets + lVar24);
                    if ((cVar28 == '\x02') &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Type != ERangeBoundTypes::Open",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                            ,99,L""), bVar10)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    iVar12 = ((iVar13 - iVar14) - local_70._4_4_) + iVar12;
                    if (iVar12 < local_c8) {
                      iVar12 = local_c8;
                    }
                    local_c8 = iVar12;
                    pUVar17 = (UObjectBaseUtility *)local_a0;
                    lVar24 = local_c0;
                    iVar12 = local_res20;
                  }
                }
                local_res20 = iVar12;
                uVar26 = uVar26 + 1;
                local_b0 = local_b0 + 1;
              } while ((int)uVar26 < local_e0);
            }
            if ((cVar27 == '\x02') || (cVar25 == '\x02')) {
              iVar12 = 0x7fffffff;
            }
            else {
              if ((cVar25 == '\x02') &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!InUpperBound.IsOpen()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                                     ,0x44,L""), bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              lVar24 = 0;
              if (cVar25 == '\x01') {
                lVar24 = 4;
              }
              iVar12 = *(int *)((longlong)
                                &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                                 ::__l2::Offsets + lVar24);
              if ((cVar25 == '\x02') &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Type != ERangeBoundTypes::Open",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                     ,99,L""), bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              local_60 = uVar3;
              if ((cVar27 == '\x02') &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!InLowerBound.IsOpen()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                                     ,0x2c,L""), bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              lVar24 = 0;
              if (cVar27 == '\0') {
                lVar24 = 4;
              }
              iVar14 = *(int *)((longlong)
                                &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                                 ::__l2::Offsets + lVar24);
              if ((cVar27 == '\x02') &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Type != ERangeBoundTypes::Open",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                     ,99,L""), bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar12 = ((iVar13 - iVar14) - local_60._4_4_) + iVar12;
            }
            iVar13 = local_c8;
            iVar14 = local_res20;
            if (((local_c8 == 0) && (local_res20 == 0)) && (bVar8)) {
              iVar13 = (int)(iVar12 + (iVar12 >> 0x1f & 3U)) >> 2;
              iVar14 = iVar13;
            }
            iVar19 = iVar12;
            if (iVar14 < iVar12) {
              iVar19 = iVar14;
            }
            iVar14 = 0;
            if (0 < iVar19) {
              iVar14 = iVar19;
            }
            if (iVar13 < iVar12) {
              iVar12 = iVar13;
            }
            iVar13 = 0;
            if (0 < iVar12) {
              iVar13 = iVar12;
            }
            if ((*(int *)(local_58 + 3) != iVar14) || (*(int *)&local_58[3].field_0x4 != iVar13)) {
              *(int *)(local_58 + 3) = iVar14;
              *(int *)&local_58[3].field_0x4 = iVar13;
            }
          }
          else {
            local_c0 = lVar24;
            if ((*(int *)(this_00 + 3) != 0) || (*(int *)&this_00[3].field_0x4 != 0)) {
              *(undefined8 *)(this_00 + 3) = 0;
            }
          }
          local_c0 = local_c0 + 1;
          local_b8 = local_b8 + 1;
        } while ((int)local_b8 < local_e0);
      }
      local_b4 = local_b4 + 1;
    } while (local_b4 <= local_98);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  return;
}

// UpdateEvaluationTree @ 14623c530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMovieSceneTrack::UpdateEvaluationTree(UMovieSceneTrack *this)

{
  ForAnyElementType *pFVar1;
  TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_> *this_00;
  ulonglong uVar2;
  void *_Src;
  FMovieSceneTrackEvaluationData *pFVar3;
  FMovieSceneEvaluationTreeNodeHandle FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *pTVar9;
  TRangeBound<FFrameNumber> TVar10;
  TRangeBound<FFrameNumber> TVar11;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *pTVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  TArrayView<FMovieSceneTrackEvaluationData_const_,int> *pTVar19;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar20;
  byte bVar21;
  uint uVar22;
  longlong *plVar23;
  ForElementType<FSetElementId> FVar24;
  ETreePopulationMode EVar25;
  FEvaluationTreeEntryHandle FVar26;
  longlong lVar27;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *pTVar28;
  longlong lVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  uint *puVar32;
  longlong lVar33;
  longlong lVar34;
  int *piVar35;
  uint uVar36;
  FMovieSceneTrackEvaluationField *pFVar37;
  undefined1 auStackY_3b8 [32];
  undefined1 local_368;
  undefined1 local_367 [3];
  int local_364;
  uint local_360;
  ForAnyElementType local_358;
  int local_350;
  int local_34c;
  int local_348;
  uint local_344;
  undefined8 local_340;
  UObject *local_338;
  TRangeBound<FFrameNumber> local_330;
  TRangeBound<FFrameNumber> TStack_328;
  int local_320;
  FScriptContainerElement local_31c;
  short local_31a;
  uint local_318;
  undefined4 uStack_314;
  uint local_310;
  undefined4 uStack_30c;
  UObject *local_308;
  FMovieSceneTrackEvaluationField *local_300;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *local_2f8;
  undefined8 uStack_2f0;
  TBitArray<FDefaultBitArrayAllocator> *local_2e8;
  undefined4 uStack_2e0;
  uint uStack_2dc;
  uint local_2d8;
  undefined4 uStack_2d4;
  int iStack_2d0;
  undefined4 uStack_2cc;
  FScriptContainerElement *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> local_2b8;
  int local_258;
  UObject **local_250;
  FMovieSceneEvaluationTreeNodeHandle local_248;
  longlong local_240;
  longlong local_230;
  UMovieSceneTrack *local_228;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> local_220;
  int *local_208;
  longlong *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f8;
  undefined8 uStack_1d8;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  FScriptContainerElement *local_1b8;
  int iStack_1b0;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> local_188;
  FMovieSceneEvaluationTreeRangeIterator local_170;
  TArrayView<UMovieSceneSection_*_const,int> local_148;
  TArrayView<UMovieSceneSection_*_const,int> local_138;
  TArrayView<UMovieSceneSection_*_const,int> local_128;
  TArrayView<UMovieSceneSection_*_const,int> local_118;
  TArrayView<UMovieSceneSection_*_const,int> local_108;
  TArrayView<FMovieSceneTrackEvaluationData_const_,int> local_f8;
  TArrayView<FMovieSceneTrackEvaluationData_const_,int> local_e8;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_d8;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_c8 [2];
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_318 = CONCAT31(local_318._1_3_,2);
  uStack_314 = 0;
  local_2b8._padding_ = (longlong)local_318;
  uStack_30c = 0;
  local_310 = CONCAT31(local_310._1_3_,2);
  local_2b8._padding_ = (longlong)local_310;
  local_340 = 0xffffffffffffffff;
  local_2b8._padding_ = -1;
  local_2b8._padding_ = -1;
  local_2b8._padding_ = 0;
  local_2b8._padding_ = 0;
  local_2b8._padding_ = 0;
  local_2b8._padding_ = 0;
  local_2b8.Data.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.Data.Entries.ArrayNum = 0;
  local_2b8.Data.Entries.ArrayMax = 0;
  local_2b8.Data.Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.Data.Items.ArrayNum = 0;
  local_2b8.Data.Items.ArrayMax = 0;
  local_228 = this;
  puVar18 = (undefined8 *)(**(code **)(this->_padding_ + 0x360))();
  local_358.Data = (FScriptContainerElement *)0x0;
  local_350 = *(int *)(puVar18 + 1);
  lVar27 = (longlong)local_350;
  _Src = (void *)*puVar18;
  if (local_350 == 0) {
    local_34c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_350,0,&local_358,local_350,&local_34c);
    memcpy(local_358.Data,_Src,lVar27 << 3);
  }
  iVar15 = local_350;
  local_2c8 = local_358.Data;
  if ((local_350 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iStack_2c0 = iVar15;
  cVar14 = (**(code **)(this->_padding_ + 0x2e8))(this,&local_2b8);
  if (cVar14 == '\0') {
    EVar25 = this->BuiltInTreePopulationMode;
    if (EVar25 == None) {
      local_368 = 0;
      bVar13 = `UMovieSceneTrack::AddSectionRangesToTree'::__l6::<lambda_1>::operator()(&local_368);
      if (!bVar13) {
        EVar25 = HighPassPerRow;
      }
    }
    if (EVar25 == Blended) {
      local_128._12_4_ = uStack_2bc;
      local_128.ArrayNum = iStack_2c0;
      local_128.DataPtr = (UMovieSceneSection **)local_2c8;
      UE::MovieScene::FEvaluationTreePopulationRules::Blended(&local_128,&local_2b8);
    }
    else if (EVar25 == HighPass) {
      local_138._12_4_ = uStack_2bc;
      local_138.ArrayNum = iStack_2c0;
      local_138.DataPtr = (UMovieSceneSection **)local_2c8;
      UE::MovieScene::FEvaluationTreePopulationRules::HighPass(&local_138,&local_2b8);
    }
    else if (EVar25 == HighPassPerRow) {
      local_148._12_4_ = uStack_2bc;
      local_148.ArrayNum = iStack_2c0;
      local_148.DataPtr = (UMovieSceneSection **)local_2c8;
      UE::MovieScene::FEvaluationTreePopulationRules::HighPassPerRow(&local_148,&local_2b8);
    }
  }
  iVar15 = local_350;
  if ((this->EvalOptions).bCanEvaluateNearestSection == 1 &&
      (this->EvalOptions).bEvalNearestSection == 1) {
    local_198 = local_358.Data;
    if ((local_350 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iStack_190 = iVar15;
    local_118._12_4_ = uStack_18c;
    local_118.ArrayNum = iVar15;
    local_118.DataPtr = (UMovieSceneSection **)local_198;
    UE::MovieScene::FEvaluationTreePopulationRules::PopulateNearestSection(&local_118,&local_2b8);
  }
  iVar15 = local_350;
  local_1c8 = local_358.Data;
  if ((local_350 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iStack_1c0 = iVar15;
  local_108._12_4_ = uStack_1bc;
  local_108.ArrayNum = iVar15;
  local_108.DataPtr = (UMovieSceneSection **)local_1c8;
  AddSectionPrePostRollRangesToTree(this,&local_108,&local_2b8);
  local_300 = &this->EvaluationField;
  iVar15 = (this->EvaluationField).Entries.ArrayMax;
  piVar35 = &(this->EvaluationField).Entries.ArrayMax;
  (this->EvaluationField).Entries.ArrayNum = 0;
  local_208 = piVar35;
  if (iVar15 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_300,0,piVar35);
  }
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
            (&local_170,(FMovieSceneEvaluationTree *)&local_2b8);
  while( true ) {
    uVar22 = local_70;
    TVar11 = local_170.CurrentRange.UpperBound;
    TVar10 = local_170.CurrentRange.LowerBound;
    uVar36 = 0;
    FVar4.Index = local_170.CurrentNodeHandle.Index;
    FVar4.ChildrenHandle.EntryIndex = local_170.CurrentNodeHandle.ChildrenHandle.EntryIndex;
    if ((local_170.CurrentNodeHandle.ChildrenHandle.EntryIndex == -1) &&
       (local_170.CurrentNodeHandle.Index != 0)) break;
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>::
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>
              (&local_220,&local_2b8,FVar4);
    pTVar9 = local_220.Tree;
    if ((((TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)local_220.CurrentNode !=
          (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)0x0) &&
        (pTVar19 = TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData>::GetDataForSingleNode
                             (local_220.Tree,&local_f8,local_220.CurrentNode),
        -1 < local_220.DataIndex)) && (local_220.DataIndex < pTVar19->ArrayNum)) {
      local_2e8._0_4_ = local_220.DataIndex;
      local_2f8 = local_220.Tree;
      uStack_2f0 = (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)
                   local_220.CurrentNode;
      TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>::
      TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>
                (&local_188,pTVar9,(FMovieSceneEvaluationTreeNodeHandle)0xffffffffffffffff);
      pTVar9 = local_2f8;
      pTVar28 = uStack_2f0;
      uVar36 = (uint)local_2e8;
LAB_14623c930:
      if (((pTVar9 != local_188.Tree) ||
          (pTVar28 !=
           (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)local_188.CurrentNode)) ||
         (uVar36 != local_188.DataIndex)) {
        pTVar19 = TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData>::GetDataForSingleNode
                            (pTVar9,&local_e8,(FMovieSceneEvaluationTreeNode *)pTVar28);
        uVar22 = 0;
        if ((int)uVar36 < pTVar19->ArrayNum) {
          uVar22 = ~uVar36 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar3 = pTVar19->DataPtr;
        local_308 = FWeakObjectPtr::Get(&pFVar3[(int)uVar36].Section.WeakPtr);
        uVar22 = ((uint)((ulonglong)local_308 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_308 >> 4))
                 * -0x7a143595;
        uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
        uVar22 = uVar22 >> 0x10 ^ uVar22;
        if (local_98._8_4_ != local_64) {
          FVar24 = (ForElementType<FSetElementId>)local_60;
          if (local_58 != (ForElementType<FSetElementId>)0x0) {
            FVar24 = local_58;
          }
          iVar15 = *(int *)((longlong)FVar24 + (ulonglong)(local_50 - 1U & uVar22) * 4);
          while (iVar15 != -1) {
            plVar23 = (longlong *)((longlong)iVar15 * 0x20 + local_98._0_8_);
            if ((UObject *)*plVar23 == local_308) {
              if (plVar23 != (longlong *)0x0) goto LAB_14623ca9b;
              break;
            }
            iVar15 = (int)plVar23[3];
          }
        }
        local_250 = &local_308;
        TSet<TTuple<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<UMovieSceneSection_*_const_&>_>
                  ((TSet<TTuple<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)local_98,(uint)&local_348,
                   (TKeyInitializer<UMovieSceneSection_*_const_&> *)(ulonglong)uVar22,
                   (bool *)&local_250);
        plVar23 = (longlong *)((longlong)local_348 * 0x20 + local_98._0_8_);
LAB_14623ca9b:
        pFVar1 = (ForAnyElementType *)(plVar23 + 1);
        local_338 = local_308;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_308 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_308);
        }
        local_320 = pFVar3[(int)uVar36].ForcedTime.Value;
        local_31c = (FScriptContainerElement)pFVar3[(int)uVar36].Flags;
        local_31a = pFVar3[(int)uVar36].SortOrder;
        local_330 = TVar10;
        TStack_328 = TVar11;
        if (((pFVar1->Data <= (FScriptContainerElement *)&local_338) &&
            ((FScriptContainerElement *)&local_338 <
             pFVar1->Data + (longlong)*(int *)((longlong)plVar23 + 0x14) * 0x20)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar15 = (int)plVar23[2];
        if (iVar15 == *(int *)((longlong)plVar23 + 0x14)) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,pFVar1,(int *)((longlong)plVar23 + 0x14));
        }
        *(int *)(plVar23 + 2) = iVar15 + 1;
        pFVar31 = pFVar1->Data + (longlong)iVar15 * 0x20;
        *(UObject **)pFVar31 = local_338;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_338 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_338);
        }
        uVar36 = uVar36 + 1;
        *(TRangeBound<FFrameNumber> *)(pFVar31 + 8) = local_330;
        *(TRangeBound<FFrameNumber> *)(pFVar31 + 0x10) = TStack_328;
        *(int *)(pFVar31 + 0x18) = local_320;
        pFVar31[0x1c] = local_31c;
        *(short *)(pFVar31 + 0x1e) = local_31a;
        pTVar12 = pTVar28;
        while (pTVar28 = pTVar12,
              pTVar28 != (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)0x0) {
          uVar22 = ((FEvaluationTreeEntryHandle *)&pTVar28->_padding_)[1].EntryIndex;
          if (uVar22 == 0xffffffff) {
            local_1a8 = 0;
            uStack_1a0 = 0;
            iVar15 = 0;
          }
          else {
            uVar16 = 0;
            if ((int)uVar22 < (pTVar9->Data).Entries.ArrayNum) {
              uVar16 = ~uVar22 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar31 = (pTVar9->Data).Entries.AllocatorInstance.Data;
            uVar16 = *(uint *)(pFVar31 + (longlong)(int)uVar22 * 0xc);
            iVar15 = *(int *)(pFVar31 + (longlong)(int)uVar22 * 0xc + 4);
            uVar22 = 0;
            if ((int)uVar16 < (pTVar9->Data).Items.ArrayNum) {
              uVar22 = ~uVar16 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_1b8 = (pTVar9->Data).Items.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x18;
            iStack_1b0 = iVar15;
            if ((iVar15 < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), iVar15 = iStack_1b0, bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          if ((-1 < (int)uVar36) && ((int)uVar36 < iVar15)) break;
          uVar36 = 0;
          if (((((FMovieSceneEvaluationTreeNodeHandle *)&pTVar28->_padding_)->ChildrenHandle).
               EntryIndex != -1) ||
             (pTVar12 = (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)0x0,
             ((FMovieSceneEvaluationTreeNodeHandle *)&pTVar28->_padding_)->Index == 0)) {
            FVar4 = *(FMovieSceneEvaluationTreeNodeHandle *)&pTVar28->_padding_;
            FVar26 = FVar4.ChildrenHandle.EntryIndex;
            local_248 = FVar4;
            if (FVar26.EntryIndex == -1) {
              bVar13 = FVar4.Index == 0;
            }
            else {
              pTVar20 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                                  ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
                                   &pTVar9->_padding_,local_c8,FVar26);
              if (((longlong)FVar4 < 0) || (pTVar20->ArrayNum <= FVar4.Index)) {
                bVar13 = false;
              }
              else {
                bVar13 = true;
              }
            }
            if ((!bVar13) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid(Handle)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneEvaluationTree.h"
                                    ,0x18d,L""), bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pTVar12 = pTVar9;
            if (FVar26.EntryIndex != -1) {
              pTVar20 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                                  ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
                                   &pTVar9->_padding_,&local_d8,FVar26);
              lVar27 = (longlong)local_248.Index;
              uVar22 = uVar36;
              if (local_248.Index < pTVar20->ArrayNum) {
                uVar22 = (uint)~local_248.Index >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pTVar12 = (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)
                        (pTVar20->DataPtr + lVar27);
            }
          }
        }
        goto LAB_14623c930;
      }
    }
    FMovieSceneEvaluationTreeRangeIterator::Iter(&local_170,true);
  }
  uVar16 = 1;
  uStack_2dc = uVar36;
  local_2d8 = uVar36;
  if (local_70 != 0) {
    puVar32 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar32 = local_78;
    }
    uVar30 = *puVar32;
    while (uVar30 == 0) {
      lVar27 = (longlong)(int)uVar36;
      local_2d8 = local_2d8 + 0x20;
      uVar36 = uVar36 + 1;
      uStack_2dc = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar36)
      goto LAB_14623ce70;
      uVar30 = puVar32[lVar27 + 1];
    }
    uVar16 = -uVar30 & uVar30;
    uVar2 = (ulonglong)uVar16 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_258 = (int)lVar27;
    uStack_2dc = (local_2d8 - 1) + local_258;
    if ((int)local_70 < (int)uStack_2dc) {
      uStack_2dc = local_70;
    }
  }
LAB_14623ce70:
  local_2f8 = (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)local_98;
  uVar30 = local_70 & 0xffffffe0;
  uStack_2d4 = local_9c;
  local_2e8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_2d0 = local_98._8_4_ - local_64;
  uStack_2e0 = 0xffffffff;
  TStack_1f8.CurrentBitIndex = uStack_2dc;
  TStack_1f8.UnvisitedBitMask = 0xffffffff;
  uStack_2f0 = (TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *)CONCAT44(uVar16,uVar36);
  TStack_1f8._padding_ = (longlong)uStack_2f0;
  iVar15 = (int)local_70 >> 5;
  TStack_1f8._28_4_ = local_9c;
  TStack_1f8.BaseBitIndex = local_2d8;
  uStack_1d8 = CONCAT44(uStack_2cc,iStack_2d0);
  bVar21 = (byte)local_70;
  local_360 = local_70;
  local_200 = (longlong *)local_2f8;
  TStack_1f8.Array = local_2e8;
  if (((int)local_70 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar37 = local_300;
  if (uVar22 != local_70) {
    puVar32 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar32 = local_78;
    }
    uVar36 = -1 << (bVar21 & 0x1f) & puVar32[iVar15];
    while (uVar36 == 0) {
      lVar27 = (longlong)iVar15;
      uVar30 = uVar30 + 0x20;
      iVar15 = iVar15 + 1;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) {
        local_360 = local_70;
        uVar22 = local_70;
        goto LAB_14623cfa0;
      }
      uVar36 = puVar32[lVar27 + 1];
    }
    uVar2 = (ulonglong)(-uVar36 & uVar36) * 2 + 1;
    lVar27 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    uVar22 = (uVar30 - 1) + (int)lVar27;
    local_340 = CONCAT44(local_340._4_4_,(int)lVar27);
    local_360 = uVar22;
    if ((int)local_70 < (int)uVar22) {
      uVar22 = local_70;
      local_360 = local_70;
    }
  }
LAB_14623cfa0:
  do {
    plVar23 = local_200;
    if ((int)local_200[1] - *(int *)((longlong)local_200 + 0x34) != (int)uStack_1d8) {
      local_367[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_367);
    }
    if (((TStack_1f8.CurrentBitIndex == uVar22) &&
        (TStack_1f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar23 == (longlong *)local_98)) {
      local_50 = 0;
      uVar7 = *(undefined8 *)((longlong)&local_228->_padding_ + 4);
      uVar8 = *(undefined8 *)((longlong)&local_228->_padding_ + 4);
      (local_228->EvaluationFieldGuid).A = (int)uVar7;
      (local_228->EvaluationFieldGuid).B = (int)((ulonglong)uVar7 >> 0x20);
      (local_228->EvaluationFieldGuid).C = (int)uVar8;
      (local_228->EvaluationFieldGuid).D = (int)((ulonglong)uVar8 >> 0x20);
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UMovieSceneSection_*,TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      if (local_358.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_358.Data);
      }
      if (local_2b8.Data.Items.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.Items.AllocatorInstance.Data);
      }
      if (local_2b8.Data.Entries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.Entries.AllocatorInstance.Data);
      }
      if ((void *)local_2b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_2b8._padding_);
      }
      if ((void *)local_2b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_2b8._padding_);
      }
      return;
    }
    uVar36 = 0;
    lVar29 = 0;
    lVar27 = *plVar23 + (longlong)TStack_1f8.CurrentBitIndex * 0x20;
    iVar15 = *(int *)(lVar27 + 0x10);
    local_364 = iVar15;
    local_230 = lVar27;
    if (0 < iVar15) {
      this_00 = (TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_> *)
                (lVar27 + 8);
      do {
        uVar22 = 0;
        if ((int)uVar36 < *(int *)(lVar27 + 0x10)) {
          uVar22 = ~uVar36 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar31 = (this_00->AllocatorInstance).Data;
        local_240 = (longlong)(iVar15 + -1);
        lVar33 = lVar29 * 0x20;
        lVar34 = lVar33;
        uVar22 = uVar36;
        local_344 = uVar36;
        if (lVar29 < local_240) {
          do {
            uVar22 = uVar22 + 1;
            uVar16 = 0;
            if ((int)uVar22 < *(int *)(lVar27 + 0x10)) {
              uVar16 = ~uVar22 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar5 = (this_00->AllocatorInstance).Data;
            bVar13 = TRange<FFrameNumber>::Adjoins
                               ((TRange<FFrameNumber> *)(pFVar5 + lVar34 + 0x28),
                                (TRange<FFrameNumber> *)(pFVar31 + lVar33 + 8));
            iVar15 = local_364;
            if (((!bVar13) || (pFVar5[lVar34 + 0x3c] != pFVar31[lVar33 + 0x1c])) ||
               (*(int *)(pFVar5 + lVar34 + 0x38) != *(int *)(pFVar31 + lVar33 + 0x18))) break;
            uVar36 = uVar36 + 1;
            *(undefined8 *)(pFVar31 + lVar33 + 0x10) = *(undefined8 *)(pFVar5 + lVar34 + 0x30);
            lVar29 = lVar29 + 1;
            lVar34 = lVar34 + 0x20;
          } while (lVar29 < local_240);
        }
        uVar22 = uVar36 - local_344;
        uVar36 = uVar36 + 1;
        if (0 < (int)uVar22) {
          uVar30 = local_344 + 1;
          uVar16 = 0;
          if ((int)uVar36 <= *(int *)(lVar27 + 0x10)) {
            uVar16 = ~(uVar22 | uVar30) >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (this_00,uVar30,uVar22);
          iVar15 = local_364 - uVar22;
          local_364 = iVar15;
        }
        lVar29 = lVar29 + 1;
        piVar35 = local_208;
        pFVar37 = local_300;
      } while ((int)uVar36 < iVar15);
    }
    lVar27 = local_230;
    if (0 < *(int *)(local_230 + 0x10)) {
      puVar18 = (undefined8 *)(local_230 + 8);
      if ((pFVar37 == (FMovieSceneTrackEvaluationField *)puVar18) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar15 = *(int *)(lVar27 + 0x10);
      if (iVar15 != 0) {
        iVar17 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x20,8,iVar15,(ForAnyElementType *)pFVar37,&(pFVar37->Entries).ArrayNum,
                            piVar35);
        ConstructItems<FMovieSceneTrackEvaluationFieldEntry,FMovieSceneTrackEvaluationFieldEntry,int>
                  ((pFVar37->Entries).AllocatorInstance.Data + (longlong)iVar17 * 0x20,
                   (FMovieSceneTrackEvaluationFieldEntry *)*puVar18,iVar15);
      }
    }
    TStack_1f8.UnvisitedBitMask = TStack_1f8.UnvisitedBitMask & ~TStack_1f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f8);
    uVar22 = local_360;
  } while( true );
}

// operator() @ 1504e7200

bool __thiscall `UMovieSceneTrack::AddSectionRangesToTree'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8297084248376999355>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8297084248376999355>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

