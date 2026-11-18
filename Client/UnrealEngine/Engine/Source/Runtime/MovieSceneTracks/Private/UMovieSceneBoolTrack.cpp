// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 13

// StaticClass @ 14687fdc0

UClass * __cdecl UMovieSceneBoolTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBoolTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneBoolTrack",
               &Z_Registration_Info_UClass_UMovieSceneBoolTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneBoolTrack,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneBoolTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneBoolTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBoolTrack.InnerSingleton;
}

// UMovieSceneBoolTrack @ 14689cd00

UMovieSceneBoolTrack * __thiscall
UMovieSceneBoolTrack::UMovieSceneBoolTrack(UMovieSceneBoolTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined8 *)&this->field_0x128 = 0;
  this->field_0x130 = 0;
  *(undefined8 *)&this->field_0x138 = 0;
  *(undefined8 *)&this->field_0x140 = 0;
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(undefined ***)&this->field_0x148 = &_vftable__for__IMovieSceneTrackTemplateProducer__;
  *(undefined ***)&this->field_0x150 = &_vftable__for__IMovieSceneEntityProvider__;
  return this;
}

// UMovieSceneBoolTrack @ 14689cd80

UMovieSceneBoolTrack * __thiscall
UMovieSceneBoolTrack::UMovieSceneBoolTrack(UMovieSceneBoolTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined8 *)&this->field_0x128 = 0;
  this->field_0x130 = 0;
  *(undefined8 *)&this->field_0x138 = 0;
  *(undefined8 *)&this->field_0x140 = 0;
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(undefined ***)&this->field_0x148 = &_vftable__for__IMovieSceneTrackTemplateProducer__;
  *(undefined ***)&this->field_0x150 = &_vftable__for__IMovieSceneEntityProvider__;
  return this;
}

// ~UMovieSceneBoolTrack @ 1468a0380

void __thiscall UMovieSceneBoolTrack::~UMovieSceneBoolTrack(UMovieSceneBoolTrack *this)

{
  *(undefined ***)&this->field_0x150 = &___7IMovieSceneEntityProvider__6B_;
  *(undefined ***)&this->field_0x148 = &___7IMovieSceneTrackTemplateProducer__6B_;
  *(undefined ***)this =
       &UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 =
       &UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if (*(void **)&this->field_0x138 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x138);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// CreateNewSection @ 1468ada70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall UMovieSceneBoolTrack::CreateNewSection(UMovieSceneBoolTrack *this)

{
  UClass *pUVar1;
  UMovieSceneSection *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UMovieSceneBoolSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  pUVar2 = (UMovieSceneSection *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// CreateTemplateForSection @ 1468af900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneEvalTemplatePtr * __thiscall
UMovieSceneBoolTrack::CreateTemplateForSection
          (UMovieSceneBoolTrack *this,FMovieSceneEvalTemplatePtr *__return_storage_ptr__,
          UMovieSceneSection *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FMovieSceneBoolPropertySectionTemplate *pFVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined1 auStack_1b8 [32];
  FString local_198;
  FString local_188;
  FMovieSceneBoolPropertySectionTemplate local_178;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  if (UE::MovieScene::GCompileBooleanPropertyLegacyTemplate) {
    if (param_1 == (UMovieSceneSection *)0x0) {
      pFVar4 = GetTypeName<UMovieSceneBoolSection_const_>(&local_198);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar2 = Z_Construct_UClass_UMovieSceneBoolSection_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pFVar4 = GetTypeName<UMovieSceneBoolSection_const_>(&local_198);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UMovieSceneSection_const_>(&local_188,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
    pFVar3 = FMovieSceneBoolPropertySectionTemplate::FMovieSceneBoolPropertySectionTemplate
                       (&local_178,(UMovieSceneBoolSection *)param_1,
                        (UMovieScenePropertyTrack *)&this[-1].field_0x10);
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfe;
    TInlineValue<FMovieSceneEvalTemplate,128,8>::
    InitializeFrom<FMovieSceneBoolPropertySectionTemplate,FMovieSceneBoolPropertySectionTemplate>
              ((TInlineValue<FMovieSceneEvalTemplate,128,8> *)__return_storage_ptr__,pFVar3);
    FMovieSceneBoolChannel::~FMovieSceneBoolChannel(&local_178.BoolCurve);
    FMovieScenePropertySectionTemplate::~FMovieScenePropertySectionTemplate
              ((FMovieScenePropertySectionTemplate *)&local_178);
  }
  else {
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfe;
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 | 2;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1468b6550

UClass * __cdecl UMovieSceneBoolTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBoolTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneBoolTrack",
               &Z_Registration_Info_UClass_UMovieSceneBoolTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneBoolTrack,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneBoolTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneBoolTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBoolTrack.InnerSingleton;
}

// ImportEntityImpl @ 1468baf70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneBoolTrack::ImportEntityImpl
          (UMovieSceneBoolTrack *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  longlong lVar1;
  FObjectPtr_u_0 *this_00;
  ushort uVar2;
  TComponentTypeID<UE::MovieScene::FSourceBoolChannel> TVar3;
  TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_> TVar4;
  uint uVar5;
  FObjectPtr this_01;
  code *pcVar6;
  ulonglong uVar7;
  bool bVar8;
  uint uVar9;
  UClass *pUVar10;
  FBuiltInComponentTypes *pFVar11;
  FMovieSceneTracksComponentTypes *pFVar12;
  FString *pFVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  undefined **local_e8;
  ushort local_e0;
  TComponentTypeID<UE::MovieScene::FSourceBoolChannel> local_d8;
  longlong local_d0;
  undefined1 local_c8;
  TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_> local_c0;
  UClass *local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  FComponentTypeID local_a0;
  FEntityImportParams local_98;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (!UE::MovieScene::GBooleanPropertyLegacyTemplate) {
    uVar5 = param_2->EntityID;
    uVar9 = 0;
    if ((int)uVar5 < *(int *)&this[-1].field_0x148) {
      uVar9 = ~uVar5 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_00 = (FObjectPtr_u_0 *)(*(longlong *)&this[-1].field_0x140 + (longlong)(int)uVar5 * 8);
    if (*(longlong *)(*(longlong *)&this[-1].field_0x140 + (longlong)(int)uVar5 * 8) == 0) {
      pFVar13 = GetTypeName<UMovieSceneBoolSection>(&local_38);
      if ((pFVar13->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar14);
    }
    pUVar10 = Z_Construct_UClass_UMovieSceneBoolSection_NoRegister();
    bVar8 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar10);
    if ((!bVar8) ||
       (this_01.field0_0x0 = (FObjectPtr_u_0)this_00->Handle, this_01.field0_0x0 == (UObject *)0x0))
    {
      pFVar13 = GetTypeName<UMovieSceneBoolSection>(&local_58);
      pwVar14 = L"";
      if ((pFVar13->Data).ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
      }
      pFVar13 = GetFullNameForCastLogError<UMovieSceneSection>
                          (&local_48,(UMovieSceneSection *)this_00->Handle);
      if ((pFVar13->Data).ArrayNum != 0) {
        pwVar14 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar14,pwVar15);
    }
    lVar1 = (longlong)this_01.field0_0x0 + 0x118;
    if ((*(int *)((longlong)this_01.field0_0x0 + 400) != 0) ||
       (*(char *)((longlong)this_01.field0_0x0 + 0x199) == '\x01')) {
      pFVar11 = UE::MovieScene::FBuiltInComponentTypes::Get();
      pFVar12 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
      local_98.EntityMetaData = param_2->EntityMetaData;
      local_98.SharedMetaData = param_2->SharedMetaData;
      uVar7._0_4_ = param_2->EntityID;
      uVar7._4_4_ = (param_2->InterrogationKey).Channel;
      local_98._24_8_ = *(undefined8 *)&(param_2->InterrogationKey).InterrogationIndex;
      local_98.InterrogationInstance.Sequence = (param_2->InterrogationInstance).Sequence;
      local_98.Sequence.HierarchicalBias = (param_2->Sequence).HierarchicalBias;
      local_98.Sequence.SequenceID.Value = (param_2->Sequence).SequenceID.Value;
      local_98.Sequence.InstanceHandle = (param_2->Sequence).InstanceHandle;
      local_98.Sequence.RootInstanceHandle = (param_2->Sequence).RootInstanceHandle;
      local_98._56_8_ = *(undefined8 *)&(param_2->Sequence).DefaultCompletionMode;
      local_98._16_8_ = uVar7 & 0xffffffff00000000;
      uVar2 = (pFVar12->Bool).PropertyTag.Value;
      TVar3 = pFVar11->BoolChannel;
      pUVar10 = Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_NoRegister();
      TVar4 = pFVar11->BlenderType;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar10 != (UClass *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar10 != (UClass *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
        }
      }
      local_c8 = 1;
      local_b0 = 1;
      local_e0 = uVar2;
      local_d8 = TVar3;
      local_d0 = lVar1;
      local_c0 = TVar4;
      local_b8 = pUVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      local_a8 = 0;
      local_e8 = &
                 ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceBoolChannel_MovieScene_UE___23_U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____23__MovieScene_UE__6B_
      ;
      local_a0.Value = uVar2;
      UE::MovieScene::
      TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>_>
      ::Commit((TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>_>
                *)&local_e8,(UMovieSceneSection *)this_01.field0_0x0,&local_98,param_3);
      UMovieSceneSection::BuildDefaultComponents
                ((UMovieSceneSection *)this_01.field0_0x0,param_1,param_2,param_3);
    }
  }
  return;
}

// PopulateEvaluationFieldImpl @ 1468c4820

bool __thiscall
UMovieSceneBoolTrack::PopulateEvaluationFieldImpl
          (UMovieSceneBoolTrack *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  TRange<FFrameNumber> *this_00;
  TRangeBound<FFrameNumber> *pTVar1;
  uchar uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  TRangeBound<FFrameNumber> TVar8;
  FFrameNumber *pFVar9;
  longlong lVar10;
  ulonglong uVar11;
  TRangeBound<FFrameNumber> *pTVar12;
  uint uVar13;
  TRange<FFrameNumber> *pTVar14;
  TRangeBound<FFrameNumber> *pTVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res8 [8];
  TRange<FFrameNumber> local_d8;
  uint local_c8;
  uint local_c4;
  undefined4 uStack_c0;
  uint local_bc;
  undefined4 uStack_b8;
  uint local_b4;
  undefined4 uStack_b0;
  uint local_ac;
  undefined4 uStack_a8;
  UMovieSceneCondition *local_a0;
  FMovieSceneTrackEvaluationField *local_98;
  undefined1 local_88 [24];
  void *local_70;
  FString local_60;
  FName local_50;
  FFrameNumber local_48;
  ESectionEvaluationFlags local_44;
  byte local_43;
  
  local_98 = UMovieSceneTrack::GetEvaluationField((UMovieSceneTrack *)&this[-1].field_0x8);
  local_c8 = (local_98->Entries).ArrayNum;
  uVar11 = (ulonglong)(int)local_c8;
  pFVar17 = (local_98->Entries).AllocatorInstance.Data;
  pFVar16 = pFVar17 + uVar11 * 0x20;
  pTVar15 = (TRangeBound<FFrameNumber> *)(pFVar17 + 0x10);
  do {
    while( true ) {
      if ((local_98->Entries).ArrayNum != (int)uVar11) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMovieSceneTrackEvaluationFieldEntry_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar17 == pFVar16) {
        return true;
      }
      if ((*(longlong *)pFVar17 == 0) ||
         (bVar4 = UMovieSceneTrack::IsRowEvalDisabled
                            ((UMovieSceneTrack *)&this[-1].field_0x8,
                             *(int *)(*(longlong *)pFVar17 + 0xd0),true), !bVar4)) break;
LAB_1468c4b1f:
      pFVar17 = pFVar17 + 0x20;
      uVar11 = (ulonglong)local_c8;
      pTVar15 = pTVar15 + 4;
    }
    bVar4 = TRange<FFrameNumber>::IsEmpty(param_1);
    if (bVar4) {
      local_bc = local_bc & 0xffffff00;
      uStack_b8 = 0;
      TVar8.Value.Value = 0;
      TVar8._0_4_ = local_bc;
      local_c4 = local_c4 & 0xffffff00;
      uStack_c0 = 0;
      local_d8.LowerBound.Value.Value = 0;
      local_d8.LowerBound._0_4_ = local_c4;
    }
    else {
      this_00 = (TRange<FFrameNumber> *)(pTVar15 + -1);
      bVar4 = TRange<FFrameNumber>::IsEmpty(this_00);
      if (bVar4) {
        local_ac = local_ac & 0xffffff00;
        local_b4 = local_b4 & 0xffffff00;
        uStack_b0 = 0;
        local_d8.LowerBound.Value.Value = 0;
        local_d8.LowerBound._0_4_ = local_b4;
        uStack_a8 = 0;
        TVar8.Value.Value = 0;
        TVar8._0_4_ = local_ac;
      }
      else {
        uVar2 = (param_1->UpperBound).Type.Value;
        pTVar1 = &param_1->UpperBound;
        pTVar12 = pTVar15;
        if ((uVar2 != '\x02') && (pTVar12 = pTVar1, (pTVar15->Type).Value != '\x02')) {
          iVar6 = (pTVar15->Value).Value;
          iVar7 = (param_1->UpperBound).Value.Value;
          if ((iVar6 <= iVar7) && ((pTVar12 = pTVar15, iVar7 <= iVar6 && (uVar2 == '\0')))) {
            pTVar12 = pTVar1;
          }
        }
        uVar2 = (param_1->LowerBound).Type.Value;
        pTVar14 = this_00;
        if ((uVar2 != '\x02') && (pTVar14 = param_1, (this_00->LowerBound).Type.Value != '\x02')) {
          iVar6 = pTVar15[-1].Value.Value;
          iVar7 = (param_1->LowerBound).Value.Value;
          if ((iVar7 <= iVar6) && ((pTVar14 = this_00, iVar6 <= iVar7 && (uVar2 == '\0')))) {
            pTVar14 = param_1;
          }
        }
        local_d8.LowerBound = pTVar14->LowerBound;
        TVar8 = *pTVar12;
      }
    }
    local_d8.UpperBound = TVar8;
    if ((local_d8.LowerBound.Type.Value.Value != '\x02') && (TVar8.Type.Value.Value != '\x02')) {
      if ((local_d8.LowerBound.Type.Value.Value == '\x02') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (local_d8.LowerBound.Value.Value <= TVar8.Value.Value.Value) {
        pFVar9 = TRangeBound<FFrameNumber>::GetValue(&local_d8.UpperBound);
        iVar6 = pFVar9->Value;
        pFVar9 = TRangeBound<FFrameNumber>::GetValue(&local_d8.LowerBound);
        if ((pFVar9->Value != iVar6) ||
           ((local_d8.LowerBound.Type.Value != '\0' && (local_d8.UpperBound.Type.Value != '\0'))))
        goto LAB_1468c49ec;
      }
      goto LAB_1468c4b1f;
    }
LAB_1468c49ec:
    uVar13 = 0;
    lVar10 = 0;
    if (*(int *)&this[-1].field_0x148 < 1) goto LAB_1468c4b1f;
    do {
      if (*(longlong *)(*(longlong *)&this[-1].field_0x140 + lVar10 * 8) == *(longlong *)pFVar17) {
        if (uVar13 != 0xffffffff) {
          local_88._0_8_ = *(undefined8 *)&(param_2->Condition).SoftObjectPtr;
          FSoftObjectPath::FSoftObjectPath
                    ((FSoftObjectPath *)(local_88 + 8),
                     (FSoftObjectPath *)&(param_2->Condition).SoftObjectPtr.field_0x8);
          ::FString::FString(&local_60,&param_2->OverrideBoundPropertyPath);
          local_50 = param_2->NotifyFunctionName;
          local_48.Value = *(int *)(pTVar15 + 1);
          local_44 = (ESectionEvaluationFlags)pTVar15[1].Value.Value;
          local_43 = ((byte)(*(uint *)&this[-1].field_0x80 >> 3) & 1) * '\x02' |
                     (byte)(*(uint *)&this[-1].field_0x80 >> 2) & 1 | local_43 & 0xfc;
          local_a0 = MovieSceneHelpers::GetSequenceCondition
                               ((UMovieSceneTrack *)&this[-1].field_0x8,
                                *(UMovieSceneSection **)pFVar17,true);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_a0 != (UMovieSceneCondition *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_a0);
          }
          FSoftObjectPtr::operator=((FSoftObjectPtr *)local_88,(FObjectPtr)&local_a0);
          iVar6 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                            (param_3,(UObject *)&this[-1].field_0x8,uVar13);
          iVar7 = FMovieSceneEntityComponentFieldBuilder::AddMetaData
                            (param_3,(FMovieSceneEvaluationFieldEntityMetaData *)local_88);
          FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,&local_d8,iVar6,iVar7)
          ;
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
          if (local_70 != (void *)0x0) {
            FMemory::Free(local_70);
          }
        }
        goto LAB_1468c4b1f;
      }
      uVar13 = uVar13 + 1;
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)&this[-1].field_0x148);
    pFVar17 = pFVar17 + 0x20;
    uVar11 = (ulonglong)local_c8;
    pTVar15 = pTVar15 + 4;
  } while( true );
}

// StaticRegisterNativesUMovieSceneBoolTrack @ 1468cff50

void __cdecl UMovieSceneBoolTrack::StaticRegisterNativesUMovieSceneBoolTrack(void)

{
  return;
}

// SupportsType @ 1468d0f20

bool __thiscall
UMovieSceneBoolTrack::SupportsType
          (UMovieSceneBoolTrack *this,TSubclassOf<UMovieSceneSection> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_1468d0f6a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d0f6a:
  pUVar5 = Z_Construct_UClass_UMovieSceneBoolSection_NoRegister();
  return pUVar4 == pUVar5;
}

// _getUObject @ 1468d5550

UObject * __thiscall UMovieSceneBoolTrack::_getUObject(UMovieSceneBoolTrack *this)

{
  return (UObject *)&this[-1].field_0x10;
}

// _getUObject`adjustor{8}' @ 1468d5560

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMovieSceneBoolTrack::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall UMovieSceneBoolTrack::_getUObject_adjustor_8__(UMovieSceneBoolTrack *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMovieSceneBoolTrack *)&this[-1].field_0x150);
  return (UObject *)pUVar1;
}

