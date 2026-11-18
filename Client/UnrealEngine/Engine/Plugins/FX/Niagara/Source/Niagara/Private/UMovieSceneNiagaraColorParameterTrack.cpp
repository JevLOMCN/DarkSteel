// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 13

// StaticClass @ 148ee55d0

UClass * __cdecl UMovieSceneNiagaraColorParameterTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraColorParameterTrack.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"MovieSceneNiagaraColorParameterTrack",
               &Z_Registration_Info_UClass_UMovieSceneNiagaraColorParameterTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneNiagaraColorParameterTrack,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneNiagaraColorParameterTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneNiagaraColorParameterTrack>,local_res8,
               UMovieSceneNiagaraParameterTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraColorParameterTrack.InnerSingleton;
}

// UMovieSceneNiagaraColorParameterTrack @ 148f806e0

UMovieSceneNiagaraColorParameterTrack * __thiscall
UMovieSceneNiagaraColorParameterTrack::UMovieSceneNiagaraColorParameterTrack
          (UMovieSceneNiagaraColorParameterTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNiagaraParameterTrack::UMovieSceneNiagaraParameterTrack
            ((UMovieSceneNiagaraParameterTrack *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(undefined ***)&this->field_0x148 = &___7UMovieSceneNiagaraColorParameterTrack__6B_;
  return this;
}

// UMovieSceneNiagaraColorParameterTrack @ 148f80720

UMovieSceneNiagaraColorParameterTrack * __thiscall
UMovieSceneNiagaraColorParameterTrack::UMovieSceneNiagaraColorParameterTrack
          (UMovieSceneNiagaraColorParameterTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNiagaraParameterTrack::UMovieSceneNiagaraParameterTrack
            ((UMovieSceneNiagaraParameterTrack *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(undefined ***)&this->field_0x148 = &___7UMovieSceneNiagaraColorParameterTrack__6B_;
  return this;
}

// ~UMovieSceneNiagaraColorParameterTrack @ 148f81ed0

void __thiscall
UMovieSceneNiagaraColorParameterTrack::~UMovieSceneNiagaraColorParameterTrack
          (UMovieSceneNiagaraColorParameterTrack *this)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(undefined ***)&this->field_0x148 = &___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieSceneNiagaraParameterTrack::~UMovieSceneNiagaraParameterTrack
            ((UMovieSceneNiagaraParameterTrack *)this);
  return;
}

// CreateNewSection @ 148fa6f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneNiagaraColorParameterTrack::CreateNewSection(UMovieSceneNiagaraColorParameterTrack *this)

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
  pUVar1 = Z_Construct_UClass_UMovieSceneColorSection_NoRegister();
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

// CreateTemplateForSection @ 148fa7500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneEvalTemplatePtr * __thiscall
UMovieSceneNiagaraColorParameterTrack::CreateTemplateForSection
          (UMovieSceneNiagaraColorParameterTrack *this,
          FMovieSceneEvalTemplatePtr *__return_storage_ptr__,UMovieSceneSection *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UClass *pUVar3;
  FNiagaraVariable *pFVar4;
  FNiagaraVariable *pFVar5;
  undefined1 auStack_588 [32];
  FNiagaraVariable local_568;
  FNiagaraVariable local_548;
  undefined1 local_528 [48];
  void *local_4f8;
  FMovieSceneFloatChannel local_4e8;
  FMovieSceneFloatChannel local_3c0;
  FMovieSceneFloatChannel local_298;
  FMovieSceneFloatChannel local_170;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_588;
  if (param_1 != (UMovieSceneSection *)0x0) {
    pUVar3 = Z_Construct_UClass_UMovieSceneColorSection_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_148fa7550;
  }
  param_1 = (UMovieSceneSection *)0x0;
LAB_148fa7550:
  if (param_1 == (UMovieSceneSection *)0x0) {
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfe;
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 | 2;
  }
  else {
    pFVar4 = FNiagaraVariable::FNiagaraVariable
                       (&local_568,(FNiagaraVariable *)&this[-1].field_0x130);
    pFVar5 = FNiagaraVariable::FNiagaraVariable(&local_548,pFVar4);
    local_528[8] = 0;
    local_528._20_8_ = 0;
    local_528._0_8_ = &___7FMovieSceneNiagaraParameterSectionTemplate__6B_;
    local_528[0x10] = 0;
    FNiagaraVariable::FNiagaraVariable((FNiagaraVariable *)(local_528 + 0x20),pFVar5);
    pFVar2 = (pFVar5->VarData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    local_528._0_8_ = &___7FMovieSceneNiagaraColorParameterSectionTemplate__6B_;
    FMovieSceneFloatChannel::FMovieSceneFloatChannel
              (&local_4e8,(FMovieSceneFloatChannel *)&param_1[1]._padding_);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel
              (&local_3c0,(FMovieSceneFloatChannel *)&param_1[2]._padding_);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel
              (&local_298,(FMovieSceneFloatChannel *)&param_1[3]._padding_);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel
              (&local_170,(FMovieSceneFloatChannel *)&param_1[4]._padding_);
    pFVar2 = (pFVar4->VarData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfe;
    TInlineValue<FMovieSceneEvalTemplate,128,8>::
    InitializeFrom<FMovieSceneNiagaraColorParameterSectionTemplate,FMovieSceneNiagaraColorParameterSectionTemplate>
              ((TInlineValue<FMovieSceneEvalTemplate,128,8> *)__return_storage_ptr__,
               (FMovieSceneNiagaraColorParameterSectionTemplate *)local_528);
    FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_170);
    FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_298);
    FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_3c0);
    FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_4e8);
    if (local_4f8 != (void *)0x0) {
      FMemory::Free(local_4f8);
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 148fb63c0

UClass * __cdecl UMovieSceneNiagaraColorParameterTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraColorParameterTrack.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"MovieSceneNiagaraColorParameterTrack",
               &Z_Registration_Info_UClass_UMovieSceneNiagaraColorParameterTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneNiagaraColorParameterTrack,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneNiagaraColorParameterTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneNiagaraColorParameterTrack>,local_res8,
               UMovieSceneNiagaraParameterTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraColorParameterTrack.InnerSingleton;
}

// SetSectionChannelDefaults @ 148fcbcd0

void __thiscall
UMovieSceneNiagaraColorParameterTrack::SetSectionChannelDefaults
          (UMovieSceneNiagaraColorParameterTrack *this,UMovieSceneSection *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  UClass *pUVar8;
  FMovieSceneChannelProxy *pFVar9;
  undefined1 local_res10 [24];
  
  if (param_1 != (UMovieSceneSection *)0x0) {
    pUVar8 = Z_Construct_UClass_UMovieSceneColorSection_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar8->_padding_)) goto LAB_148fcbd1c;
  }
  param_1 = (UMovieSceneSection *)0x0;
  bVar7 = `UMovieSceneNiagaraColorParameterTrack::SetSectionChannelDefaults'::__l3::<lambda_1>::
          operator()(local_res10);
  if (!bVar7) {
    return;
  }
LAB_148fcbd1c:
  if ((param_2->ArrayNum != 0x10) &&
     (bVar7 = `UMovieSceneNiagaraColorParameterTrack::SetSectionChannelDefaults'::__l3::<lambda_2>::
              operator()(local_res10), !bVar7)) {
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  fVar3 = *(float *)pFVar2;
  fVar4 = *(float *)(pFVar2 + 4);
  fVar5 = *(float *)(pFVar2 + 8);
  fVar6 = *(float *)(pFVar2 + 0xc);
  pFVar9 = UMovieSceneSection::GetChannelProxy(param_1);
  UMovieSceneNiagaraParameterTrack::SetChannelDefault<FMovieSceneFloatChannel,float>
            (pFVar9,(FMovieSceneFloatChannel *)&param_1[1]._padding_,fVar3);
  UMovieSceneNiagaraParameterTrack::SetChannelDefault<FMovieSceneFloatChannel,float>
            (pFVar9,(FMovieSceneFloatChannel *)&param_1[2]._padding_,fVar4);
  UMovieSceneNiagaraParameterTrack::SetChannelDefault<FMovieSceneFloatChannel,float>
            (pFVar9,(FMovieSceneFloatChannel *)&param_1[3]._padding_,fVar5);
  UMovieSceneNiagaraParameterTrack::SetChannelDefault<FMovieSceneFloatChannel,float>
            (pFVar9,(FMovieSceneFloatChannel *)&param_1[4]._padding_,fVar6);
  return;
}

// StaticRegisterNativesUMovieSceneNiagaraColorParameterTrack @ 148fcdc50

void __cdecl
UMovieSceneNiagaraColorParameterTrack::StaticRegisterNativesUMovieSceneNiagaraColorParameterTrack
          (void)

{
  return;
}

// SupportsType @ 148fcde10

bool __thiscall
UMovieSceneNiagaraColorParameterTrack::SupportsType
          (UMovieSceneNiagaraColorParameterTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_148fcde5a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_148fcde5a:
  pUVar5 = Z_Construct_UClass_UMovieSceneColorSection_NoRegister();
  return pUVar4 == pUVar5;
}

// _getUObject @ 148fdaf50

UObject * __thiscall
UMovieSceneNiagaraColorParameterTrack::_getUObject(UMovieSceneNiagaraColorParameterTrack *this)

{
  return (UObject *)&this[-1].field_0x8;
}

// operator() @ 15053c1c0

bool __thiscall
`UMovieSceneNiagaraColorParameterTrack::SetSectionChannelDefaults'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6646213061629706216>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6646213061629706216>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15053c300

bool __thiscall
`UMovieSceneNiagaraColorParameterTrack::SetSectionChannelDefaults'::__l3::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6646213061629706216>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6646213061629706216>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

