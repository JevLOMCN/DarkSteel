// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 10

// StaticClass @ 146875d90

UClass * __cdecl UMovieSceneActorReferenceTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneActorReferenceTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneActorReferenceTrack",
               &Z_Registration_Info_UClass_UMovieSceneActorReferenceTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneActorReferenceTrack,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneActorReferenceTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneActorReferenceTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneActorReferenceTrack.InnerSingleton;
}

// UMovieSceneActorReferenceTrack @ 14689cb80

UMovieSceneActorReferenceTrack * __thiscall
UMovieSceneActorReferenceTrack::UMovieSceneActorReferenceTrack
          (UMovieSceneActorReferenceTrack *this,FVTableHelper *param_1)

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
  *(undefined ***)&this->field_0x148 = &___7UMovieSceneActorReferenceTrack__6B_;
  return this;
}

// UMovieSceneActorReferenceTrack @ 14689cbf0

UMovieSceneActorReferenceTrack * __thiscall
UMovieSceneActorReferenceTrack::UMovieSceneActorReferenceTrack
          (UMovieSceneActorReferenceTrack *this,FObjectInitializer *param_1)

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
  *(undefined ***)&this->field_0x148 = &___7UMovieSceneActorReferenceTrack__6B_;
  return this;
}

// ~UMovieSceneActorReferenceTrack @ 1468a02e0

void __thiscall
UMovieSceneActorReferenceTrack::~UMovieSceneActorReferenceTrack
          (UMovieSceneActorReferenceTrack *this)

{
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

// CreateNewSection @ 1468ad8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneActorReferenceTrack::CreateNewSection(UMovieSceneActorReferenceTrack *this)

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
  pUVar1 = Z_Construct_UClass_UMovieSceneActorReferenceSection_NoRegister();
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

// CreateTemplateForSection @ 1468af7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneEvalTemplatePtr * __thiscall
UMovieSceneActorReferenceTrack::CreateTemplateForSection
          (UMovieSceneActorReferenceTrack *this,FMovieSceneEvalTemplatePtr *__return_storage_ptr__,
          UMovieSceneSection *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FMovieSceneActorReferenceSectionTemplate *pFVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined1 auStack_1d8 [32];
  FString local_1b8;
  FString local_1a8;
  FMovieSceneActorReferenceSectionTemplate local_198;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  if (param_1 == (UMovieSceneSection *)0x0) {
    pFVar4 = GetTypeName<UMovieSceneActorReferenceSection>(&local_1b8);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar2 = Z_Construct_UClass_UMovieSceneActorReferenceSection_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    pFVar3 = FMovieSceneActorReferenceSectionTemplate::FMovieSceneActorReferenceSectionTemplate
                       (&local_198,(UMovieSceneActorReferenceSection *)param_1,
                        (UMovieScenePropertyTrack *)&this[-1].field_0x8);
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfe;
    TInlineValue<FMovieSceneEvalTemplate,128,8>::
    InitializeFrom<FMovieSceneActorReferenceSectionTemplate,FMovieSceneActorReferenceSectionTemplate>
              ((TInlineValue<FMovieSceneEvalTemplate,128,8> *)__return_storage_ptr__,pFVar3);
    FMovieSceneActorReferenceData::~FMovieSceneActorReferenceData(&local_198.ActorReferenceData);
    if (local_198.PropertyData.PropertyPath.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.PropertyData.PropertyPath.Data.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  pFVar4 = GetTypeName<UMovieSceneActorReferenceSection>(&local_1b8);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UMovieSceneSection_const_>(&local_1a8,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetPrivateStaticClass @ 1468b63d0

UClass * __cdecl UMovieSceneActorReferenceTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneActorReferenceTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneActorReferenceTrack",
               &Z_Registration_Info_UClass_UMovieSceneActorReferenceTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneActorReferenceTrack,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneActorReferenceTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneActorReferenceTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneActorReferenceTrack.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneActorReferenceTrack @ 1468cff30

void __cdecl
UMovieSceneActorReferenceTrack::StaticRegisterNativesUMovieSceneActorReferenceTrack(void)

{
  return;
}

// SupportsType @ 1468d0e40

bool __thiscall
UMovieSceneActorReferenceTrack::SupportsType
          (UMovieSceneActorReferenceTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1468d0e8a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d0e8a:
  pUVar5 = Z_Construct_UClass_UMovieSceneActorReferenceSection_NoRegister();
  return pUVar4 == pUVar5;
}

// _getUObject @ 1468d5540

UObject * __thiscall
UMovieSceneActorReferenceTrack::_getUObject(UMovieSceneActorReferenceTrack *this)

{
  return (UObject *)&this[-1].field_0x8;
}

