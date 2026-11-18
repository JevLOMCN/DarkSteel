// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 11

// StaticClass @ 14d097a50

UClass * __cdecl UMovieSceneLiveLinkTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkMovieScene",L"MovieSceneLiveLinkTrack",
               &Z_Registration_Info_UClass_UMovieSceneLiveLinkTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneLiveLinkTrack,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneLiveLinkTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneLiveLinkTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkTrack.InnerSingleton;
}

// UMovieSceneLiveLinkTrack @ 14d09ea00

UMovieSceneLiveLinkTrack * __thiscall
UMovieSceneLiveLinkTrack::UMovieSceneLiveLinkTrack
          (UMovieSceneLiveLinkTrack *this,FVTableHelper *param_1)

{
  UMovieScenePropertyTrack::UMovieScenePropertyTrack((UMovieScenePropertyTrack *)this,param_1);
  (this->TrackRole).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkTrack__6B_;
  return this;
}

// UMovieSceneLiveLinkTrack @ 14d09ea50

UMovieSceneLiveLinkTrack * __thiscall
UMovieSceneLiveLinkTrack::UMovieSceneLiveLinkTrack
          (UMovieSceneLiveLinkTrack *this,FObjectInitializer *param_1)

{
  FMovieSceneBlendTypeField FVar1;
  undefined7 extraout_var;
  
  UMovieScenePropertyTrack::UMovieScenePropertyTrack((UMovieScenePropertyTrack *)this,param_1);
  (this->TrackRole).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkTrack__6B_;
  FVar1 = FMovieSceneBlendTypeField::All();
  *(undefined1 *)&this->_padding_ = *(undefined1 *)CONCAT71(extraout_var,FVar1.BlendTypeField);
  return this;
}

// ~UMovieSceneLiveLinkTrack @ 14d09f220

void __thiscall UMovieSceneLiveLinkTrack::~UMovieSceneLiveLinkTrack(UMovieSceneLiveLinkTrack *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieScenePropertyTrack::~UMovieScenePropertyTrack((UMovieScenePropertyTrack *)this);
  return;
}

// CreateNewSection @ 14d0a6080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneLiveLinkTrack::CreateNewSection(UMovieSceneLiveLinkTrack *this)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UMovieSceneSection *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = UMovieSceneLiveLinkSection::StaticClass();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = this;
  pUVar5 = (UMovieSceneSection *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return pUVar5;
}

// CreateTemplateForSection @ 14d0a6e80

FMovieSceneEvalTemplatePtr * __thiscall
UMovieSceneLiveLinkTrack::CreateTemplateForSection
          (UMovieSceneLiveLinkTrack *this,FMovieSceneEvalTemplatePtr *__return_storage_ptr__,
          UMovieSceneSection *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FMovieSceneLiveLinkSectionTemplate *pFVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_e8;
  FString local_d8;
  FMovieSceneLiveLinkSectionTemplate local_c8;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    pFVar4 = GetTypeName<UMovieSceneLiveLinkSection_const_>(&local_e8);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar2 = UMovieSceneLiveLinkSection::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    pFVar3 = FMovieSceneLiveLinkSectionTemplate::FMovieSceneLiveLinkSectionTemplate
                       (&local_c8,(UMovieSceneLiveLinkSection *)param_1,
                        (UMovieScenePropertyTrack *)&this[-1]._padding_);
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfe;
    TInlineValue<FMovieSceneEvalTemplate,128,8>::
    InitializeFrom<FMovieSceneLiveLinkSectionTemplate,FMovieSceneLiveLinkSectionTemplate>
              ((TInlineValue<FMovieSceneEvalTemplate,128,8> *)__return_storage_ptr__,pFVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.StaticData.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>,int>
              ((TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)
               local_c8.PropertyHandlers.AllocatorInstance.Data,local_c8.PropertyHandlers.ArrayNum);
    if ((TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)
        local_c8.PropertyHandlers.AllocatorInstance.Data !=
        (TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)0x0) {
      FMemory::Free(local_c8.PropertyHandlers.AllocatorInstance.Data);
    }
    DestructItems<FLiveLinkSubSectionData,int>
              ((FLiveLinkSubSectionData *)local_c8.SubSectionsData.AllocatorInstance.Data,
               local_c8.SubSectionsData.ArrayNum);
    if (local_c8.SubSectionsData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.SubSectionsData.AllocatorInstance.Data);
    }
    if (local_c8.ChannelMask.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.ChannelMask.AllocatorInstance.Data);
    }
    FMovieScenePropertySectionTemplate::~FMovieScenePropertySectionTemplate
              ((FMovieScenePropertySectionTemplate *)&local_c8);
    return __return_storage_ptr__;
  }
  pFVar4 = GetTypeName<UMovieSceneLiveLinkSection_const_>(&local_e8);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UMovieSceneSection_const_>(&local_d8,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetPrivateStaticClass @ 14d0b2a40

UClass * __cdecl UMovieSceneLiveLinkTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkMovieScene",L"MovieSceneLiveLinkTrack",
               &Z_Registration_Info_UClass_UMovieSceneLiveLinkTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneLiveLinkTrack,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneLiveLinkTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneLiveLinkTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkTrack.InnerSingleton;
}

// PostCompile @ 14d0b4450

void __thiscall
UMovieSceneLiveLinkTrack::PostCompile
          (UMovieSceneLiveLinkTrack *this,FMovieSceneEvaluationTrack *param_1,
          FMovieSceneTrackCompilerArgs *param_2)

{
  param_1->EvaluationMethod = Swept;
  return;
}

// StaticRegisterNativesUMovieSceneLiveLinkTrack @ 14d0b8000

void __cdecl UMovieSceneLiveLinkTrack::StaticRegisterNativesUMovieSceneLiveLinkTrack(void)

{
  return;
}

// SupportsType @ 14d0b8010

bool __thiscall
UMovieSceneLiveLinkTrack::SupportsType
          (UMovieSceneLiveLinkTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_14d0b805a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14d0b805a:
  pUVar5 = UMovieSceneLiveLinkSection::StaticClass();
  return pUVar4 == pUVar5;
}

// _getUObject @ 14d0b8950

UObject * __thiscall UMovieSceneLiveLinkTrack::_getUObject(UMovieSceneLiveLinkTrack *this)

{
  return (UObject *)&this[-1]._padding_;
}

