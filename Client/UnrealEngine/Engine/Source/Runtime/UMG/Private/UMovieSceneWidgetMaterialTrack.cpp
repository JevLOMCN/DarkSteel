// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 15

// StaticClass @ 1468d6190

UClass * __cdecl UMovieSceneWidgetMaterialTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneWidgetMaterialTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MovieSceneWidgetMaterialTrack",
               &Z_Registration_Info_UClass_UMovieSceneWidgetMaterialTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneWidgetMaterialTrack,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneWidgetMaterialTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneWidgetMaterialTrack>,local_res8,
               UMovieSceneMaterialTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneWidgetMaterialTrack.InnerSingleton;
}

// UMovieSceneWidgetMaterialTrack @ 146901f30

UMovieSceneWidgetMaterialTrack * __thiscall
UMovieSceneWidgetMaterialTrack::UMovieSceneWidgetMaterialTrack
          (UMovieSceneWidgetMaterialTrack *this,FVTableHelper *param_1)

{
  UMovieSceneMaterialTrack::UMovieSceneMaterialTrack((UMovieSceneMaterialTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneParameterSectionExtender__;
  (this->BrushPropertyNamePath).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BrushPropertyNamePath).ArrayNum = 0;
  (this->BrushPropertyNamePath).ArrayMax = 0;
  (this->TrackName).ComparisonIndex = 0;
  (this->TrackName).Number = 0;
  return this;
}

// UMovieSceneWidgetMaterialTrack @ 146901fa0

UMovieSceneWidgetMaterialTrack * __thiscall
UMovieSceneWidgetMaterialTrack::UMovieSceneWidgetMaterialTrack
          (UMovieSceneWidgetMaterialTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneMaterialTrack::UMovieSceneMaterialTrack((UMovieSceneMaterialTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneParameterSectionExtender__;
  (this->BrushPropertyNamePath).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BrushPropertyNamePath).ArrayNum = 0;
  (this->BrushPropertyNamePath).ArrayMax = 0;
  (this->TrackName).ComparisonIndex = 0;
  (this->TrackName).Number = 0;
  return this;
}

// ~UMovieSceneWidgetMaterialTrack @ 146904c00

void __thiscall
UMovieSceneWidgetMaterialTrack::~UMovieSceneWidgetMaterialTrack
          (UMovieSceneWidgetMaterialTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneParameterSectionExtender__;
  pFVar1 = (this->BrushPropertyNamePath).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneParameterSectionExtender__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneMaterialTrack::~UMovieSceneMaterialTrack((UMovieSceneMaterialTrack *)this);
  return;
}

// CreateNewSection @ 1469130e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneWidgetMaterialTrack::CreateNewSection(UMovieSceneWidgetMaterialTrack *this)

{
  ulonglong uVar1;
  UClass *pUVar2;
  UMovieSceneSection *pUVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  ulonglong local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  pUVar3 = (UMovieSceneSection *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  (**(code **)(pUVar3->_padding_ + 0x2e8))(pUVar3,1);
  uVar1 = (ulonglong)local_b8 >> 8;
  local_b8 = CONCAT71((uint7)uVar1 & 0xffffff,2);
  uStack_a4 = 0;
  local_a8 = CONCAT31(local_a8._1_3_,2);
  local_b0 = (ulonglong)local_a8;
  (**(code **)(pUVar3->_padding_ + 0x2c8))(pUVar3,&local_b8);
  return pUVar3;
}

// ExtendEntityImpl @ 1469194b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneWidgetMaterialTrack::ExtendEntityImpl
          (UMovieSceneWidgetMaterialTrack *this,UMovieSceneParameterSection *param_1,
          UMovieSceneEntitySystemLinker *param_2,FEntityImportParams *param_3,
          FImportedEntity *param_4)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  FBuiltInComponentTypes *pFVar3;
  FMovieSceneUMGComponentTypes *pFVar4;
  ForElementType<FName> _Dst;
  longlong lVar5;
  undefined1 auStackY_158 [32];
  ushort local_118;
  bool bStack_116;
  undefined1 uStack_115;
  undefined **local_108;
  TComponentTypeID<UE::MovieScene::FWidgetMaterialPath> local_100;
  ForElementType<FName> local_e8;
  uint local_e0;
  int local_dc;
  char local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  ForElementType<FName> local_48;
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar4 = UE::MovieScene::FMovieSceneUMGComponentTypes::Get();
  _Src = (void *)this->_padding_;
  local_30 = (uint)this->_padding_;
  lVar5 = (longlong)(int)local_30;
  if (((int)local_30 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_48.SecondaryData = (ForElementType<FName>)0x0;
  if ((int)local_30 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_30);
  }
  if (((_Src == (void *)0x0) && (local_30 != 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x2d3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_30 == 0) {
    local_e8 = local_48.SecondaryData;
    local_dc = 2;
    local_e0 = local_30;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
              (8,4,local_30,0,&local_48,local_30,&local_2c);
    _Dst = (ForElementType<FName>)&local_48;
    if (local_48.SecondaryData != (ForElementType<FName>)0x0) {
      _Dst = local_48.SecondaryData;
    }
    memcpy((void *)_Dst,_Src,lVar5 << 3);
    local_e8 = local_48.SecondaryData;
    local_dc = local_2c;
    local_e0 = local_30;
  }
  local_100 = pFVar4->WidgetMaterialPath;
  local_48.SecondaryData = (ForElementType<FName>)0x0;
  local_30 = 0;
  local_2c = 2;
  bStack_116 = (param_1->_padding_ & 0xff0000) == 0;
  local_118 = (pFVar3->Tags).AbsoluteBlend.Value;
  local_d8 = '\x01';
  local_d0 = _local_118;
  local_108 = &
              ___7__TEntityBuilder_U__TAdd_UFWidgetMaterialPath_MovieScene_UE___MovieScene_UE__UFAddConditional_23__MovieScene_UE__6B_
  ;
  local_c8 = 0;
  UE::MovieScene::FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>,UE::MovieScene::FAddConditional>_>
            (param_4,(TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>,UE::MovieScene::FAddConditional>
                      *)&local_108);
  if ((local_d8 != '\0') && (local_e8 != (ForElementType<FName>)0x0)) {
    FMemory::Free((void *)local_e8);
  }
  if (local_48.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_48.SecondaryData);
  }
  return;
}

// GetPrivateStaticClass @ 1469228f0

UClass * __cdecl UMovieSceneWidgetMaterialTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneWidgetMaterialTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MovieSceneWidgetMaterialTrack",
               &Z_Registration_Info_UClass_UMovieSceneWidgetMaterialTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneWidgetMaterialTrack,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneWidgetMaterialTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneWidgetMaterialTrack>,local_res8,
               UMovieSceneMaterialTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneWidgetMaterialTrack.InnerSingleton;
}

// GetTrackName @ 146924a90

FName __thiscall UMovieSceneWidgetMaterialTrack::GetTrackName(UMovieSceneWidgetMaterialTrack *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->TrackName;
  return in_RDX;
}

// ImportEntityImpl @ 146929ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneWidgetMaterialTrack::ImportEntityImpl
          (UMovieSceneWidgetMaterialTrack *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\MovieSceneWidgetMaterialTrack.cpp"
                     ,0x20,
                     L"This track should never have created entities for itself - this assertion indicates an error in the entity-component field"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// PopulateEvaluationFieldImpl @ 146931f10

bool __thiscall
UMovieSceneWidgetMaterialTrack::PopulateEvaluationFieldImpl
          (UMovieSceneWidgetMaterialTrack *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  FObjectPtr_u_0 *this_00;
  TRangeBound<FFrameNumber> *pTVar1;
  longlong *this_01;
  uchar uVar2;
  int iVar3;
  int iVar4;
  UMovieSceneParameterSection *this_02;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  UClass *pUVar8;
  FObjectPtr_u_0 FVar9;
  FFrameNumber *pFVar10;
  ulonglong uVar11;
  FObjectPtr_u_0 *pFVar12;
  FObjectPtr_u_0 *pFVar13;
  FScriptContainerElement *this_03;
  FObjectPtr_u_0 *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  undefined8 local_d8;
  FObjectPtr_u_0 local_d0;
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
  
  this_01 = &this[-1]._padding_;
  local_98 = UMovieSceneTrack::GetEvaluationField((UMovieSceneTrack *)this_01);
  local_c8 = (local_98->Entries).ArrayNum;
  uVar11 = (ulonglong)(int)local_c8;
  this_03 = (local_98->Entries).AllocatorInstance.Data;
  pFVar15 = this_03 + uVar11 * 0x20;
  pFVar14 = (FObjectPtr_u_0 *)(this_03 + 0x10);
  do {
    if ((local_98->Entries).ArrayNum != (int)uVar11) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMovieSceneTrackEvaluationFieldEntry_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (this_03 == pFVar15) {
      return true;
    }
    if (*(longlong *)this_03 != 0) {
      pUVar8 = Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
      bVar6 = FObjectPtr::IsA((FObjectPtr *)this_03,pUVar8);
      if (((bVar6) &&
          (this_02 = *(UMovieSceneParameterSection **)this_03,
          this_02 != (UMovieSceneParameterSection *)0x0)) &&
         (bVar6 = UMovieSceneTrack::IsRowEvalDisabled
                            ((UMovieSceneTrack *)this_01,(int)this_02->_padding_,true), !bVar6)) {
        bVar6 = TRange<FFrameNumber>::IsEmpty(param_1);
        if (bVar6) {
          local_bc = local_bc & 0xffffff00;
          uStack_b8 = 0;
          FVar9._4_4_ = 0;
          FVar9._0_4_ = local_bc;
          local_c4 = local_c4 & 0xffffff00;
          uStack_c0 = 0;
          local_d8._4_4_ = 0;
          local_d8._0_4_ = local_c4;
        }
        else {
          this_00 = pFVar14 + -1;
          bVar6 = TRange<FFrameNumber>::IsEmpty((TRange<FFrameNumber> *)this_00);
          if (bVar6) {
            local_ac = local_ac & 0xffffff00;
            local_b4 = local_b4 & 0xffffff00;
            uStack_b0 = 0;
            local_d8._4_4_ = 0;
            local_d8._0_4_ = local_b4;
            uStack_a8 = 0;
            FVar9._4_4_ = 0;
            FVar9._0_4_ = local_ac;
          }
          else {
            uVar2 = (param_1->UpperBound).Type.Value;
            pTVar1 = &param_1->UpperBound;
            pFVar12 = pFVar14;
            if ((uVar2 != '\x02') &&
               (pFVar12 = (FObjectPtr_u_0 *)pTVar1,
               *(FScriptContainerElement *)pFVar14 != (FScriptContainerElement)0x2)) {
              iVar4 = *(int *)&((FScriptContainerElement *)((longlong)pFVar14 + 4))->field_0x0;
              iVar3 = (param_1->UpperBound).Value.Value;
              if ((iVar4 <= iVar3) && ((pFVar12 = pFVar14, iVar3 <= iVar4 && (uVar2 == '\0')))) {
                pFVar12 = (FObjectPtr_u_0 *)pTVar1;
              }
            }
            uVar2 = (param_1->LowerBound).Type.Value;
            pFVar13 = this_00;
            if ((uVar2 != '\x02') &&
               (pFVar13 = (FObjectPtr_u_0 *)param_1, *(char *)this_00 != '\x02')) {
              iVar4 = *(int *)&((FScriptContainerElement *)((longlong)pFVar14 + -4))->field_0x0;
              iVar3 = (param_1->LowerBound).Value.Value;
              if ((iVar3 <= iVar4) && ((pFVar13 = this_00, iVar4 <= iVar3 && (uVar2 == '\0')))) {
                pFVar13 = (FObjectPtr_u_0 *)param_1;
              }
            }
            local_d8 = *pFVar13;
            FVar9 = *pFVar12;
          }
        }
        local_d0 = FVar9;
        if (((char)local_d8 == '\x02') || (FVar9._0_1_ == '\x02')) {
LAB_14693210c:
          local_88._0_8_ = *(undefined8 *)&(param_2->Condition).SoftObjectPtr;
          FSoftObjectPath::FSoftObjectPath
                    ((FSoftObjectPath *)(local_88 + 8),
                     (FSoftObjectPath *)&(param_2->Condition).SoftObjectPtr.field_0x8);
          ::FString::FString(&local_60,&param_2->OverrideBoundPropertyPath);
          local_50 = param_2->NotifyFunctionName;
          local_48.Value = (param_2->ForcedTime).Value;
          local_43 = param_2->field_0x45 & 3 | local_43 & 0xfc;
          local_44 = ((FScriptContainerElement *)((longlong)pFVar14 + 0xc))->field_0x0;
          local_a0 = MovieSceneHelpers::GetSequenceCondition
                               ((UMovieSceneTrack *)this_01,(UMovieSceneSection *)this_02,true);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_a0 != (UMovieSceneCondition *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_a0);
          }
          FSoftObjectPtr::operator=((FSoftObjectPtr *)local_88,(FObjectPtr)&local_a0);
          UMovieSceneParameterSection::ExternalPopulateEvaluationField
                    (this_02,(TRange<FFrameNumber> *)&local_d8,
                     (FMovieSceneEvaluationFieldEntityMetaData *)local_88,param_3);
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
          if (local_70 != (void *)0x0) {
            FMemory::Free(local_70);
          }
        }
        else {
          if (((char)local_d8 == '\x02') &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          if ((int)local_d8._4_4_ <= FVar9._4_4_) {
            pFVar10 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)&local_d0);
            iVar4 = pFVar10->Value;
            pFVar10 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)&local_d8);
            if ((pFVar10->Value != iVar4) || ((local_d8._0_1_ != '\0' && (local_d0._0_1_ != '\0'))))
            goto LAB_14693210c;
          }
        }
      }
    }
    this_03 = this_03 + 0x20;
    uVar11 = (ulonglong)local_c8;
    pFVar14 = pFVar14 + 4;
  } while( true );
}

// SetBrushPropertyNamePath @ 1469424b0

void __thiscall
UMovieSceneWidgetMaterialTrack::SetBrushPropertyNamePath
          (UMovieSceneWidgetMaterialTrack *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  int iVar7;
  FName *this_00;
  int iVar8;
  ForAnyElementType FVar9;
  FName local_res8;
  FString local_48;
  FString local_38;
  
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&this->BrushPropertyNamePath,param_1);
  iVar1 = (this->BrushPropertyNamePath).ArrayNum;
  this_00 = (FName *)(this->BrushPropertyNamePath).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_146942538:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if (iVar1 == 0) {
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      goto LAB_146942670;
    }
    if (iVar1 < 1) goto LAB_146942538;
  }
  ::FName::ToString(this_00,&local_48);
  iVar7 = 1;
  if (1 < iVar1) {
    do {
      this_00 = this_00 + 1;
      ::FString::AppendChar(&local_48,L'.');
      if ((iVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar6 = ::FName::ToString(this_00,&local_38);
      iVar2 = (pFVar6->Data).ArrayNum;
      iVar8 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar8 = 0;
      }
      ::FString::AppendChars(&local_48,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar8);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar9.Data = local_48.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar9.Data);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_146942670:
  this->TrackName = local_res8;
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar3);
  return;
}

// StaticRegisterNativesUMovieSceneWidgetMaterialTrack @ 1469459f0

void __cdecl
UMovieSceneWidgetMaterialTrack::StaticRegisterNativesUMovieSceneWidgetMaterialTrack(void)

{
  return;
}

// SupportsType @ 1469462a0

bool __thiscall
UMovieSceneWidgetMaterialTrack::SupportsType
          (UMovieSceneWidgetMaterialTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1469462ea;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1469462ea:
  pUVar5 = Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
  return pUVar4 == pUVar5;
}

// _getUObject @ 146950670

UObject * __thiscall
UMovieSceneWidgetMaterialTrack::_getUObject(UMovieSceneWidgetMaterialTrack *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 146950680

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMovieSceneWidgetMaterialTrack::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UMovieSceneWidgetMaterialTrack::_getUObject_adjustor_8__(UMovieSceneWidgetMaterialTrack *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMovieSceneWidgetMaterialTrack *)&this[-1].TrackName);
  return (UObject *)pUVar1;
}

