// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 11

// StaticClass @ 146877ef0

UClass * __cdecl UMovieSceneComponentMaterialTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneComponentMaterialTrack.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneComponentMaterialTrack",
               &Z_Registration_Info_UClass_UMovieSceneComponentMaterialTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneComponentMaterialTrack,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneComponentMaterialTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneComponentMaterialTrack>,local_res8,
               UMovieSceneMaterialTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneComponentMaterialTrack.InnerSingleton;
}

// UMovieSceneComponentMaterialTrack @ 14689d660

UMovieSceneComponentMaterialTrack * __thiscall
UMovieSceneComponentMaterialTrack::UMovieSceneComponentMaterialTrack
          (UMovieSceneComponentMaterialTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneParameterSectionExtender__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MaterialInfo).MaterialSlotName.ComparisonIndex = 0;
  (this->MaterialInfo).MaterialSlotName.Number = 0;
  (this->MaterialInfo).MaterialSlotIndex = 0;
  (this->MaterialInfo).MaterialType = Empty;
  return this;
}

// UMovieSceneComponentMaterialTrack @ 14689d6e0

UMovieSceneComponentMaterialTrack * __thiscall
UMovieSceneComponentMaterialTrack::UMovieSceneComponentMaterialTrack
          (UMovieSceneComponentMaterialTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneMaterialTrack::UMovieSceneMaterialTrack((UMovieSceneMaterialTrack *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneParameterSectionExtender__;
  (this->MaterialInfo).MaterialSlotName.ComparisonIndex = 0;
  (this->MaterialInfo).MaterialSlotName.Number = 0;
  (this->MaterialInfo).MaterialSlotIndex = 0;
  (this->MaterialInfo).MaterialType = Empty;
  return this;
}

// ~UMovieSceneComponentMaterialTrack @ 1468a0720

void __thiscall
UMovieSceneComponentMaterialTrack::~UMovieSceneComponentMaterialTrack
          (UMovieSceneComponentMaterialTrack *this)

{
  this->_padding_ = (longlong)&___7IMovieSceneParameterSectionExtender__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  this->_padding_ =
       (longlong)&UMovieSceneMaterialTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&UMovieSceneMaterialTrack::_vftable__for__IMovieSceneTrackVirtualAPI__
  ;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// ExtendEntityImpl @ 1468b2540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneComponentMaterialTrack::ExtendEntityImpl
          (UMovieSceneComponentMaterialTrack *this,UMovieSceneParameterSection *param_1,
          UMovieSceneEntitySystemLinker *param_2,FEntityImportParams *param_3,
          FImportedEntity *param_4)

{
  FBuiltInComponentTypes *pFVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  ushort local_res8;
  bool bStackX_a;
  undefined1 uStackX_b;
  undefined **local_38;
  TComponentTypeID<FComponentMaterialInfo> local_30;
  longlong local_2c;
  longlong lStack_24;
  undefined1 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  
  pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_2c = this->_padding_;
  lStack_24 = this->_padding_;
  local_30 = pFVar2->ComponentMaterialInfo;
  bStackX_a = (param_1->_padding_ & 0xff0000) == 0;
  local_res8 = (pFVar1->Tags).AbsoluteBlend.Value;
  local_18 = _local_res8;
  local_38 = &
             ___7__TEntityBuilder_U__TAdd_UFComponentMaterialInfo___MovieScene_UE__UFAddConditional_23__MovieScene_UE__6B_
  ;
  local_1c = 1;
  local_14 = 0;
  UE::MovieScene::FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>_>
            (param_4,(TEntityBuilder<UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>
                      *)&local_38);
  return;
}

// GetPrivateStaticClass @ 1468b6e50

UClass * __cdecl UMovieSceneComponentMaterialTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneComponentMaterialTrack.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneComponentMaterialTrack",
               &Z_Registration_Info_UClass_UMovieSceneComponentMaterialTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneComponentMaterialTrack,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneComponentMaterialTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneComponentMaterialTrack>,local_res8,
               UMovieSceneMaterialTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneComponentMaterialTrack.InnerSingleton;
}

// ImportEntityImpl @ 1468bb240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneComponentMaterialTrack::ImportEntityImpl
          (UMovieSceneComponentMaterialTrack *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tracks\\MovieSceneMaterialTrack.cpp"
                     ,0xf0,
                     L"This track should never have created entities for itself - this assertion indicates an error in the entity-component field"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// PopulateEvaluationFieldImpl @ 1468c4b60

bool __thiscall
UMovieSceneComponentMaterialTrack::PopulateEvaluationFieldImpl
          (UMovieSceneComponentMaterialTrack *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  TRangeBound<FFrameNumber> *pTVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  UClass *pUVar9;
  FObjectPtr_u_0 *pFVar10;
  FObjectPtr_u_0 FVar11;
  FFrameNumber *pFVar12;
  ulonglong uVar13;
  FObjectPtr_u_0 *pFVar14;
  UMovieSceneTrack *this_00;
  FScriptContainerElement *this_01;
  FObjectPtr_u_0 *pFVar15;
  UMovieSceneComponentMaterialParameterSection *this_02;
  UMovieSceneParameterSection *this_03;
  undefined1 local_res8 [8];
  undefined8 local_e8;
  FObjectPtr_u_0 local_e0;
  UMovieSceneTrack *local_d8;
  uint local_d0;
  uint local_cc;
  undefined4 uStack_c8;
  uint local_c4;
  undefined4 uStack_c0;
  uint local_bc;
  undefined4 uStack_b8;
  uint local_b4;
  undefined4 uStack_b0;
  UMovieSceneCondition *local_a8;
  FScriptContainerElement *local_a0;
  FMovieSceneTrackEvaluationField *local_98;
  undefined1 local_88 [24];
  void *local_70;
  FString local_60;
  FName local_50;
  FFrameNumber local_48;
  ESectionEvaluationFlags local_44;
  byte local_43;
  
  this_00 = (UMovieSceneTrack *)&this[-1]._padding_;
  local_d8 = this_00;
  local_98 = UMovieSceneTrack::GetEvaluationField(this_00);
  local_d0 = (local_98->Entries).ArrayNum;
  uVar13 = (ulonglong)(int)local_d0;
  this_01 = (local_98->Entries).AllocatorInstance.Data;
  local_a0 = this_01 + uVar13 * 0x20;
  pFVar15 = (FObjectPtr_u_0 *)(this_01 + 0x10);
  do {
    pFVar6 = local_a0;
    if ((local_98->Entries).ArrayNum != (int)uVar13) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMovieSceneTrackEvaluationFieldEntry_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (this_01 == pFVar6) {
      return true;
    }
    if (*(longlong *)this_01 == 0) {
LAB_1468c4bfa:
      this_03 = (UMovieSceneParameterSection *)0x0;
    }
    else {
      pUVar9 = Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar9);
      if (!bVar7) goto LAB_1468c4bfa;
      this_03 = *(UMovieSceneParameterSection **)this_01;
    }
    if (*(longlong *)this_01 == 0) {
LAB_1468c4c1c:
      this_02 = (UMovieSceneComponentMaterialParameterSection *)0x0;
    }
    else {
      pUVar9 = Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_NoRegister();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar9);
      if (!bVar7) goto LAB_1468c4c1c;
      this_02 = *(UMovieSceneComponentMaterialParameterSection **)this_01;
    }
    if (((this_03 != (UMovieSceneParameterSection *)0x0) ||
        (this_02 != (UMovieSceneComponentMaterialParameterSection *)0x0)) &&
       (bVar7 = UMovieSceneTrack::IsRowEvalDisabled
                          (this_00,*(int *)(*(longlong *)this_01 + 0xd0),true), !bVar7)) {
      bVar7 = TRange<FFrameNumber>::IsEmpty(param_1);
      if (bVar7) {
        local_c4 = local_c4 & 0xffffff00;
        uStack_c0 = 0;
        FVar11._4_4_ = 0;
        FVar11._0_4_ = local_c4;
        local_cc = local_cc & 0xffffff00;
        uStack_c8 = 0;
        local_e8._4_4_ = 0;
        local_e8._0_4_ = local_cc;
      }
      else {
        bVar7 = TRange<FFrameNumber>::IsEmpty((TRange<FFrameNumber> *)(pFVar15 + -1));
        if (bVar7) {
          local_b4 = local_b4 & 0xffffff00;
          local_bc = local_bc & 0xffffff00;
          uStack_b8 = 0;
          local_e8._4_4_ = 0;
          local_e8._0_4_ = local_bc;
          uStack_b0 = 0;
          FVar11._4_4_ = 0;
          FVar11._0_4_ = local_b4;
        }
        else {
          uVar2 = (param_1->UpperBound).Type.Value;
          pTVar1 = &param_1->UpperBound;
          pFVar14 = pFVar15;
          if ((uVar2 != '\x02') &&
             (pFVar14 = (FObjectPtr_u_0 *)pTVar1,
             *(FScriptContainerElement *)pFVar15 != (FScriptContainerElement)0x2)) {
            iVar4 = *(int *)&((FScriptContainerElement *)((longlong)pFVar15 + 4))->field_0x0;
            iVar3 = (param_1->UpperBound).Value.Value;
            if ((iVar4 <= iVar3) && ((pFVar14 = pFVar15, iVar3 <= iVar4 && (uVar2 == '\0')))) {
              pFVar14 = (FObjectPtr_u_0 *)pTVar1;
            }
          }
          uVar2 = (param_1->LowerBound).Type.Value;
          pFVar10 = pFVar15 + -1;
          if ((uVar2 != '\x02') &&
             (pFVar10 = (FObjectPtr_u_0 *)param_1,
             *(FScriptContainerElement *)(pFVar15 + -1) != (FScriptContainerElement)0x2)) {
            iVar4 = *(int *)&((FScriptContainerElement *)((longlong)pFVar15 + -4))->field_0x0;
            iVar3 = (param_1->LowerBound).Value.Value;
            if ((iVar3 <= iVar4) && ((iVar3 < iVar4 || (uVar2 != '\0')))) {
              pFVar10 = pFVar15 + -1;
            }
          }
          local_e8 = *pFVar10;
          FVar11 = *pFVar14;
        }
      }
      local_e0 = FVar11;
      if (((char)local_e8 == '\x02') || (FVar11._0_1_ == '\x02')) {
LAB_1468c4d90:
        local_88._0_8_ = *(undefined8 *)&(param_2->Condition).SoftObjectPtr;
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)(local_88 + 8),
                   (FSoftObjectPath *)&(param_2->Condition).SoftObjectPtr.field_0x8);
        ::FString::FString(&local_60,&param_2->OverrideBoundPropertyPath);
        this_00 = local_d8;
        local_50 = param_2->NotifyFunctionName;
        local_48.Value = (param_2->ForcedTime).Value;
        local_43 = param_2->field_0x45 & 3 | local_43 & 0xfc;
        local_44 = ((FScriptContainerElement *)((longlong)pFVar15 + 0xc))->field_0x0;
        if (*(UMovieSceneSection **)this_01 != (UMovieSceneSection *)0x0) {
          local_a8 = MovieSceneHelpers::GetSequenceCondition
                               (local_d8,*(UMovieSceneSection **)this_01,true);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_a8 != (UMovieSceneCondition *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_a8);
          }
          FSoftObjectPtr::operator=((FSoftObjectPtr *)local_88,(FObjectPtr)&local_a8);
        }
        if (this_03 == (UMovieSceneParameterSection *)0x0) {
          if (this_02 != (UMovieSceneComponentMaterialParameterSection *)0x0) {
            UMovieSceneComponentMaterialParameterSection::ExternalPopulateEvaluationField
                      (this_02,(TRange<FFrameNumber> *)&local_e8,
                       (FMovieSceneEvaluationFieldEntityMetaData *)local_88,param_3);
          }
        }
        else {
          UMovieSceneParameterSection::ExternalPopulateEvaluationField
                    (this_03,(TRange<FFrameNumber> *)&local_e8,
                     (FMovieSceneEvaluationFieldEntityMetaData *)local_88,param_3);
        }
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_70 != (void *)0x0) {
          FMemory::Free(local_70);
        }
      }
      else {
        if (((char)local_e8 == '\x02') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        this_00 = local_d8;
        if ((int)local_e8._4_4_ <= FVar11._4_4_) {
          pFVar12 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)&local_e0);
          iVar4 = pFVar12->Value;
          pFVar12 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)&local_e8);
          if ((pFVar12->Value != iVar4) ||
             ((this_00 = local_d8, local_e8._0_1_ != '\0' && (local_e0._0_1_ != '\0'))))
          goto LAB_1468c4d90;
        }
      }
    }
    this_01 = this_01 + 0x20;
    pFVar15 = pFVar15 + 4;
    uVar13 = (ulonglong)local_d0;
  } while( true );
}

// StaticRegisterNativesUMovieSceneComponentMaterialTrack @ 1468d0010

void __cdecl
UMovieSceneComponentMaterialTrack::StaticRegisterNativesUMovieSceneComponentMaterialTrack(void)

{
  return;
}

// _getUObject @ 1468d5570

UObject * __thiscall
UMovieSceneComponentMaterialTrack::_getUObject(UMovieSceneComponentMaterialTrack *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 1468d5580

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMovieSceneComponentMaterialTrack::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UMovieSceneComponentMaterialTrack::_getUObject_adjustor_8__(UMovieSceneComponentMaterialTrack *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMovieSceneComponentMaterialTrack *)&this[-1].MaterialInfo.MaterialSlotIndex
                      );
  return (UObject *)pUVar1;
}

