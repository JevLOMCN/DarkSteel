// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 13

// StaticClass @ 148ee3940

UClass * __cdecl UMovieSceneNiagaraBoolParameterTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraBoolParameterTrack.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"MovieSceneNiagaraBoolParameterTrack",
               &Z_Registration_Info_UClass_UMovieSceneNiagaraBoolParameterTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneNiagaraBoolParameterTrack,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneNiagaraBoolParameterTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneNiagaraBoolParameterTrack>,local_res8,
               UMovieSceneNiagaraParameterTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraBoolParameterTrack.InnerSingleton;
}

// UMovieSceneNiagaraBoolParameterTrack @ 148f80660

UMovieSceneNiagaraBoolParameterTrack * __thiscall
UMovieSceneNiagaraBoolParameterTrack::UMovieSceneNiagaraBoolParameterTrack
          (UMovieSceneNiagaraBoolParameterTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNiagaraParameterTrack::UMovieSceneNiagaraParameterTrack
            ((UMovieSceneNiagaraParameterTrack *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(undefined ***)&this->field_0x148 = &___7UMovieSceneNiagaraBoolParameterTrack__6B_;
  return this;
}

// UMovieSceneNiagaraBoolParameterTrack @ 148f806a0

UMovieSceneNiagaraBoolParameterTrack * __thiscall
UMovieSceneNiagaraBoolParameterTrack::UMovieSceneNiagaraBoolParameterTrack
          (UMovieSceneNiagaraBoolParameterTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNiagaraParameterTrack::UMovieSceneNiagaraParameterTrack
            ((UMovieSceneNiagaraParameterTrack *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(undefined ***)&this->field_0x148 = &___7UMovieSceneNiagaraBoolParameterTrack__6B_;
  return this;
}

// ~UMovieSceneNiagaraBoolParameterTrack @ 148f81ea0

void __thiscall
UMovieSceneNiagaraBoolParameterTrack::~UMovieSceneNiagaraBoolParameterTrack
          (UMovieSceneNiagaraBoolParameterTrack *this)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(undefined ***)&this->field_0x148 = &___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieSceneNiagaraParameterTrack::~UMovieSceneNiagaraParameterTrack
            ((UMovieSceneNiagaraParameterTrack *)this);
  return;
}

// CreateNewSection @ 148fa6ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneNiagaraBoolParameterTrack::CreateNewSection(UMovieSceneNiagaraBoolParameterTrack *this)

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

// CreateTemplateForSection @ 148fa7420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneEvalTemplatePtr * __thiscall
UMovieSceneNiagaraBoolParameterTrack::CreateTemplateForSection
          (UMovieSceneNiagaraBoolParameterTrack *this,
          FMovieSceneEvalTemplatePtr *__return_storage_ptr__,UMovieSceneSection *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FNiagaraVariable *pFVar3;
  FMovieSceneNiagaraBoolParameterSectionTemplate *pFVar4;
  undefined1 auStack_1c8 [32];
  FNiagaraVariable local_1a8;
  FMovieSceneNiagaraBoolParameterSectionTemplate local_188;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if (param_1 != (UMovieSceneSection *)0x0) {
    pUVar2 = Z_Construct_UClass_UMovieSceneBoolSection_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_148fa7470;
  }
  param_1 = (UMovieSceneSection *)0x0;
LAB_148fa7470:
  if (param_1 == (UMovieSceneSection *)0x0) {
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfe;
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 | 2;
  }
  else {
    pFVar3 = FNiagaraVariable::FNiagaraVariable
                       (&local_1a8,(FNiagaraVariable *)&this[-1].field_0x130);
    pFVar4 = FMovieSceneNiagaraBoolParameterSectionTemplate::
             FMovieSceneNiagaraBoolParameterSectionTemplate
                       (&local_188,pFVar3,(FMovieSceneBoolChannel *)&param_1[1]._padding_);
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfe;
    TInlineValue<FMovieSceneEvalTemplate,128,8>::
    InitializeFrom<FMovieSceneNiagaraBoolParameterSectionTemplate,FMovieSceneNiagaraBoolParameterSectionTemplate>
              ((TInlineValue<FMovieSceneEvalTemplate,128,8> *)__return_storage_ptr__,pFVar4);
    FMovieSceneBoolChannel::~FMovieSceneBoolChannel(&local_188.BoolChannel);
    if ((void *)local_188._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_188._padding_);
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 148fb6300

UClass * __cdecl UMovieSceneNiagaraBoolParameterTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraBoolParameterTrack.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"MovieSceneNiagaraBoolParameterTrack",
               &Z_Registration_Info_UClass_UMovieSceneNiagaraBoolParameterTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneNiagaraBoolParameterTrack,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneNiagaraBoolParameterTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneNiagaraBoolParameterTrack>,local_res8,
               UMovieSceneNiagaraParameterTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraBoolParameterTrack.InnerSingleton;
}

// SetSectionChannelDefaults @ 148fcbb90

void __thiscall
UMovieSceneNiagaraBoolParameterTrack::SetSectionChannelDefaults
          (UMovieSceneNiagaraBoolParameterTrack *this,UMovieSceneSection *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  FMovieSceneChannelProxy *this_00;
  UScriptStruct *pUVar6;
  FMovieSceneChannelEntry *pFVar7;
  int iVar8;
  UMovieSceneSection *pUVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  
  pUVar9 = (UMovieSceneSection *)0x0;
  if (param_1 != (UMovieSceneSection *)0x0) {
    pUVar5 = Z_Construct_UClass_UMovieSceneBoolSection_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_148fcbbe1;
  }
  local_res10[0] = 0;
  bVar3 = `UMovieSceneNiagaraBoolParameterTrack::SetSectionChannelDefaults'::__l3::<lambda_1>::
          operator()(local_res10);
  param_1 = pUVar9;
  if (!bVar3) {
    return;
  }
LAB_148fcbbe1:
  if (param_2->ArrayNum != 4) {
    local_res20[0] = 0;
    bVar3 = `UMovieSceneNiagaraBoolParameterTrack::SetSectionChannelDefaults'::__l3::<lambda_2>::
            operator()(local_res20);
    if (!bVar3) {
      return;
    }
  }
  this_00 = UMovieSceneSection::GetChannelProxy(param_1);
  iVar1 = *(int *)(param_2->AllocatorInstance).Data;
  iVar8 = 0;
  pUVar6 = FMovieSceneBoolChannel::StaticStruct();
  iVar4 = FMovieSceneChannelProxy::FindIndex
                    (this_00,(FName)pUVar6->_padding_,(FMovieSceneChannel *)&param_1[1]._padding_);
  if (iVar4 != -1) {
    pUVar6 = FMovieSceneBoolChannel::StaticStruct();
    pFVar7 = FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar6->_padding_);
    if (pFVar7 == (FMovieSceneChannelEntry *)0x0) {
      pFVar10 = (FScriptContainerElement *)0x0;
    }
    else {
      iVar8 = (pFVar7->Channels).ArrayNum;
      pFVar10 = (pFVar7->Channels).AllocatorInstance.Data;
      if ((iVar8 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((-1 < iVar4) && (iVar4 < iVar8)) {
      pUVar9 = *(UMovieSceneSection **)(pFVar10 + (longlong)iVar4 * 8);
    }
    if (pUVar9 != (UMovieSceneSection *)0x0) {
      (pUVar9->Easing).EaseIn.field_0x1 = 1;
      *(bool *)&(pUVar9->Easing).EaseIn = iVar1 != 0;
    }
  }
  return;
}

// StaticRegisterNativesUMovieSceneNiagaraBoolParameterTrack @ 148fcdc40

void __cdecl
UMovieSceneNiagaraBoolParameterTrack::StaticRegisterNativesUMovieSceneNiagaraBoolParameterTrack
          (void)

{
  return;
}

// SupportsType @ 148fcdda0

bool __thiscall
UMovieSceneNiagaraBoolParameterTrack::SupportsType
          (UMovieSceneNiagaraBoolParameterTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_148fcddea;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_148fcddea:
  pUVar5 = Z_Construct_UClass_UMovieSceneBoolSection_NoRegister();
  return pUVar4 == pUVar5;
}

// _getUObject @ 148fdaf40

UObject * __thiscall
UMovieSceneNiagaraBoolParameterTrack::_getUObject(UMovieSceneNiagaraBoolParameterTrack *this)

{
  return (UObject *)&this[-1].field_0x8;
}

// operator() @ 15053c180

bool __thiscall
`UMovieSceneNiagaraBoolParameterTrack::SetSectionChannelDefaults'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<101320529075503129>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<101320529075503129>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15053c2c0

bool __thiscall
`UMovieSceneNiagaraBoolParameterTrack::SetSectionChannelDefaults'::__l3::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<101320529075503129>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<101320529075503129>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

