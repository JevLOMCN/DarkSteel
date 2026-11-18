// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 13

// StaticClass @ 146876070

UClass * __cdecl UMovieSceneMaterialParameterCollectionTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionTrack.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneMaterialParameterCollectionTrack",
               &Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionTrack.
                InnerSingleton,StaticRegisterNativesUMovieSceneMaterialParameterCollectionTrack,
               0x148,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneMaterialParameterCollectionTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneMaterialParameterCollectionTrack>,
               local_res8,UMovieSceneMaterialTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionTrack.InnerSingleton;
}

// UMovieSceneMaterialParameterCollectionTrack @ 14689e770

UMovieSceneMaterialParameterCollectionTrack * __thiscall
UMovieSceneMaterialParameterCollectionTrack::UMovieSceneMaterialParameterCollectionTrack
          (UMovieSceneMaterialParameterCollectionTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneParameterSectionExtender__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MPC).field0_0x0.DebugPtr = (UMaterialParameterCollection *)0x0;
  return this;
}

// UMovieSceneMaterialParameterCollectionTrack @ 14689e7e0

UMovieSceneMaterialParameterCollectionTrack * __thiscall
UMovieSceneMaterialParameterCollectionTrack::UMovieSceneMaterialParameterCollectionTrack
          (UMovieSceneMaterialParameterCollectionTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneMaterialTrack::UMovieSceneMaterialTrack((UMovieSceneMaterialTrack *)this,param_1);
  (this->MPC).field0_0x0.DebugPtr = (UMaterialParameterCollection *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneParameterSectionExtender__;
  return this;
}

// ~UMovieSceneMaterialParameterCollectionTrack @ 1468a0ca0

void __thiscall
UMovieSceneMaterialParameterCollectionTrack::~UMovieSceneMaterialParameterCollectionTrack
          (UMovieSceneMaterialParameterCollectionTrack *this)

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

// CreateNewSection @ 1468aed40

UMovieSceneSection * __thiscall
UMovieSceneMaterialParameterCollectionTrack::CreateNewSection
          (UMovieSceneMaterialParameterCollectionTrack *this)

{
  UMovieSceneParameterSection *pUVar1;
  uint local_res18;
  undefined8 local_18;
  ulonglong local_10;
  
  pUVar1 = NewObject<UMovieSceneParameterSection>
                     ((UObject *)this,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  (**(code **)(pUVar1->_padding_ + 0x2e8))(pUVar1,1);
  local_18 = 2;
  local_res18 = CONCAT31(local_res18._1_3_,2);
  local_10 = (ulonglong)local_res18;
  (**(code **)(pUVar1->_padding_ + 0x2c8))(pUVar1,&local_18);
  return (UMovieSceneSection *)pUVar1;
}

// ExtendEntityImpl @ 1468b2660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneMaterialParameterCollectionTrack::ExtendEntityImpl
          (UMovieSceneMaterialParameterCollectionTrack *this,UMovieSceneParameterSection *param_1,
          UMovieSceneEntitySystemLinker *param_2,FEntityImportParams *param_3,
          FImportedEntity *param_4)

{
  TComponentTypeID<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_> TVar1;
  UObject *pUVar2;
  FBuiltInComponentTypes *pFVar3;
  FMovieSceneTracksComponentTypes *pFVar4;
  undefined8 local_res8;
  FWeakObjectPtr local_res10;
  undefined **local_48;
  TComponentTypeID<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_> local_40;
  FWeakObjectPtr local_3c;
  undefined1 local_34;
  ushort local_30;
  undefined4 local_2e;
  undefined1 local_28;
  
  pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar4 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  pUVar2 = (UObject *)this->_padding_;
  TVar1 = pFVar4->MPC;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar2 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
  local_3c = local_res10;
  local_res8._0_3_ =
       CONCAT12((param_1->_padding_ & 0xff0000) == 0,(pFVar3->Tags).AbsoluteBlend.Value);
  local_30 = (pFVar3->Tags).Root.Value;
  local_2e = (undefined4)local_res8;
  local_48 = &
             ___7__TEntityBuilder_U__TAdd_U__TWeakObjectPtr_VUMaterialParameterCollection__UFWeakObjectPtr_____MovieScene_UE__UFAdd_23_UFAddConditional_23__MovieScene_UE__6B_
  ;
  local_34 = 1;
  local_28 = 0;
  local_40 = TVar1;
  UE::MovieScene::FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>_>
            (param_4,(TEntityBuilder<UE::MovieScene::TAdd<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>
                      *)&local_48);
  return;
}

// GetPrivateStaticClass @ 1468b7c80

UClass * __cdecl UMovieSceneMaterialParameterCollectionTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionTrack.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneMaterialParameterCollectionTrack",
               &Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionTrack.
                InnerSingleton,StaticRegisterNativesUMovieSceneMaterialParameterCollectionTrack,
               0x148,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneMaterialParameterCollectionTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneMaterialParameterCollectionTrack>,
               local_res8,UMovieSceneMaterialTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionTrack.InnerSingleton;
}

// ImportEntityImpl @ 1468bb2c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneMaterialParameterCollectionTrack::ImportEntityImpl
          (UMovieSceneMaterialParameterCollectionTrack *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tracks\\MovieSceneMaterialParameterCollectionTrack.cpp"
                     ,0x23,
                     L"This track should never have created entities for itself - this assertion indicates an error in the entity-component field"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// PopulateEvaluationFieldImpl @ 1468c5190

bool __thiscall
UMovieSceneMaterialParameterCollectionTrack::PopulateEvaluationFieldImpl
          (UMovieSceneMaterialParameterCollectionTrack *this,TRange<FFrameNumber> *param_1,
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
LAB_1468c522a:
      this_03 = (UMovieSceneParameterSection *)0x0;
    }
    else {
      pUVar9 = Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar9);
      if (!bVar7) goto LAB_1468c522a;
      this_03 = *(UMovieSceneParameterSection **)this_01;
    }
    if (*(longlong *)this_01 == 0) {
LAB_1468c524c:
      this_02 = (UMovieSceneComponentMaterialParameterSection *)0x0;
    }
    else {
      pUVar9 = Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_NoRegister();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar9);
      if (!bVar7) goto LAB_1468c524c;
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
LAB_1468c53c0:
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
          goto LAB_1468c53c0;
        }
      }
    }
    this_01 = this_01 + 0x20;
    pFVar15 = pFVar15 + 4;
    uVar13 = (ulonglong)local_d0;
  } while( true );
}

// StaticRegisterNativesUMovieSceneMaterialParameterCollectionTrack @ 1468d0170

void __cdecl
UMovieSceneMaterialParameterCollectionTrack::
StaticRegisterNativesUMovieSceneMaterialParameterCollectionTrack(void)

{
  return;
}

// SupportsType @ 1468d18c0

bool __thiscall
UMovieSceneMaterialParameterCollectionTrack::SupportsType
          (UMovieSceneMaterialParameterCollectionTrack *this,TSubclassOf<UMovieSceneSection> param_1
          )

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  pUVar6 = (UClass *)0x0;
  pUVar5 = pUVar6;
  if ((lVar2 != 0) &&
     (pUVar4 = Z_Construct_UClass_UMovieSceneSection_NoRegister(), pUVar4 != (UClass *)0x0)) {
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
      pUVar5 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  pUVar4 = Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_NoRegister();
  if (pUVar5 != pUVar4) {
    lVar2 = *(longlong *)param_1.Class.field0_0x0;
    if ((lVar2 != 0) &&
       (pUVar5 = Z_Construct_UClass_UMovieSceneSection_NoRegister(), pUVar5 != (UClass *)0x0)) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar6 = *(UClass **)param_1.Class.field0_0x0;
      }
    }
    pUVar5 = Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
    if (pUVar6 != pUVar5) {
      return false;
    }
  }
  return true;
}

// _getUObject @ 1468d55d0

UObject * __thiscall
UMovieSceneMaterialParameterCollectionTrack::_getUObject
          (UMovieSceneMaterialParameterCollectionTrack *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 1468d55e0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMovieSceneMaterialParameterCollectionTrack::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UMovieSceneMaterialParameterCollectionTrack::_getUObject_adjustor_8__
          (UMovieSceneMaterialParameterCollectionTrack *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMovieSceneMaterialParameterCollectionTrack *)&this[-1].MPC);
  return (UObject *)pUVar1;
}

