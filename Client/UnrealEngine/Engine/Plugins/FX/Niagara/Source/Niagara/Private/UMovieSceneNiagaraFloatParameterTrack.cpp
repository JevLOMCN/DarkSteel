// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 13

// StaticClass @ 148ee3140

UClass * __cdecl UMovieSceneNiagaraFloatParameterTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraFloatParameterTrack.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"MovieSceneNiagaraFloatParameterTrack",
               &Z_Registration_Info_UClass_UMovieSceneNiagaraFloatParameterTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneNiagaraFloatParameterTrack,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneNiagaraFloatParameterTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneNiagaraFloatParameterTrack>,local_res8,
               UMovieSceneNiagaraParameterTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraFloatParameterTrack.InnerSingleton;
}

// UMovieSceneNiagaraFloatParameterTrack @ 148f80760

UMovieSceneNiagaraFloatParameterTrack * __thiscall
UMovieSceneNiagaraFloatParameterTrack::UMovieSceneNiagaraFloatParameterTrack
          (UMovieSceneNiagaraFloatParameterTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNiagaraParameterTrack::UMovieSceneNiagaraParameterTrack
            ((UMovieSceneNiagaraParameterTrack *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(undefined ***)&this->field_0x148 = &___7UMovieSceneNiagaraFloatParameterTrack__6B_;
  return this;
}

// UMovieSceneNiagaraFloatParameterTrack @ 148f807a0

UMovieSceneNiagaraFloatParameterTrack * __thiscall
UMovieSceneNiagaraFloatParameterTrack::UMovieSceneNiagaraFloatParameterTrack
          (UMovieSceneNiagaraFloatParameterTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNiagaraParameterTrack::UMovieSceneNiagaraParameterTrack
            ((UMovieSceneNiagaraParameterTrack *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(undefined ***)&this->field_0x148 = &___7UMovieSceneNiagaraFloatParameterTrack__6B_;
  return this;
}

// ~UMovieSceneNiagaraFloatParameterTrack @ 148f81f00

void __thiscall
UMovieSceneNiagaraFloatParameterTrack::~UMovieSceneNiagaraFloatParameterTrack
          (UMovieSceneNiagaraFloatParameterTrack *this)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(undefined ***)&this->field_0x148 = &___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieSceneNiagaraParameterTrack::~UMovieSceneNiagaraParameterTrack
            ((UMovieSceneNiagaraParameterTrack *)this);
  return;
}

// CreateNewSection @ 148fa7060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneNiagaraFloatParameterTrack::CreateNewSection(UMovieSceneNiagaraFloatParameterTrack *this)

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
  pUVar1 = Z_Construct_UClass_UMovieSceneFloatSection_NoRegister();
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

// CreateTemplateForSection @ 148fa7700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneEvalTemplatePtr * __thiscall
UMovieSceneNiagaraFloatParameterTrack::CreateTemplateForSection
          (UMovieSceneNiagaraFloatParameterTrack *this,
          FMovieSceneEvalTemplatePtr *__return_storage_ptr__,UMovieSceneSection *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FNiagaraVariable *pFVar6;
  FNiagaraVariable *pFVar7;
  FMovieSceneEvalTemplatePtr *pFVar8;
  FMovieSceneEvalTemplatePtr *pFVar9;
  undefined1 auStack_208 [32];
  FNiagaraVariable local_1e8;
  FNiagaraVariable local_1c8;
  undefined **local_1a8;
  undefined1 local_1a0;
  undefined1 local_198;
  undefined8 local_194;
  FNiagaraVariable local_188;
  FMovieSceneFloatChannel local_168;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_208;
  if (param_1 != (UMovieSceneSection *)0x0) {
    pUVar5 = Z_Construct_UClass_UMovieSceneFloatSection_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_148fa775e;
  }
  param_1 = (UMovieSceneSection *)0x0;
LAB_148fa775e:
  if (param_1 == (UMovieSceneSection *)0x0) {
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfe;
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 | 2;
  }
  else {
    pFVar6 = FNiagaraVariable::FNiagaraVariable
                       (&local_1e8,(FNiagaraVariable *)&this[-1].field_0x130);
    pFVar7 = FNiagaraVariable::FNiagaraVariable(&local_1c8,pFVar6);
    local_1a0 = 0;
    local_1a8 = &___7FMovieSceneNiagaraParameterSectionTemplate__6B_;
    local_194 = 0;
    local_198 = 0;
    FNiagaraVariable::FNiagaraVariable(&local_188,pFVar7);
    pFVar2 = (pFVar7->VarData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    local_1a8 = &___7FMovieSceneNiagaraFloatParameterSectionTemplate__6B_;
    FMovieSceneFloatChannel::FMovieSceneFloatChannel
              (&local_168,(FMovieSceneFloatChannel *)&param_1[1]._padding_);
    pFVar2 = (pFVar6->VarData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfc;
    pFVar8 = FMemory::Malloc(0x168,8);
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 | 1;
    *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__ = pFVar8;
    pFVar9 = __return_storage_ptr__;
    if ((__return_storage_ptr__->field_0x80 & 2) == 0) {
      pFVar9 = pFVar8;
    }
    *(undefined ***)pFVar9 = &___7FMovieSceneEvalTemplateBase__6B_;
    pFVar9->field_0x8 = local_1a0;
    *(undefined ***)pFVar9 = &___7FMovieSceneEvalTemplate__6B_;
    pFVar9->field_0x10 = local_198;
    *(undefined ***)pFVar9 = &___7FMovieSceneNiagaraParameterSectionTemplate__6B_;
    *(undefined8 *)&pFVar9->field_0x14 = local_194;
    *(longlong *)&pFVar9->field_0x20 = local_188._padding_;
    *(undefined4 *)&pFVar9->field_0x28 = (undefined4)local_188._padding_;
    *(undefined8 *)&pFVar9->field_0x30 = 0;
    *(FScriptContainerElement **)&pFVar9->field_0x30 = local_188.VarData.AllocatorInstance.Data;
    local_188.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar9->field_0x38 = local_188.VarData.ArrayNum;
    *(int *)&pFVar9->field_0x3c = local_188.VarData.ArrayMax;
    local_188.VarData.ArrayNum = 0;
    local_188.VarData.ArrayMax = 0;
    *(undefined ***)pFVar9 = &___7FMovieSceneNiagaraFloatParameterSectionTemplate__6B_;
    FMovieSceneFloatChannel::FMovieSceneFloatChannel
              ((FMovieSceneFloatChannel *)&pFVar9->field_0x40,&local_168);
    if ((__return_storage_ptr__->field_0x80 & 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FMovieSceneEvalTemplatePtr *)(*pcVar3)();
        return pFVar9;
      }
    }
    pFVar9 = __return_storage_ptr__;
    if ((__return_storage_ptr__->field_0x80 & 2) == 0) {
      pFVar9 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
    }
    if ((__return_storage_ptr__->field_0x80 & 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FMovieSceneEvalTemplatePtr *)(*pcVar3)();
        return pFVar9;
      }
    }
    pFVar8 = __return_storage_ptr__;
    if ((__return_storage_ptr__->field_0x80 & 2) == 0) {
      pFVar8 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
    }
    if (pFVar9 != pFVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FMovieSceneEvalTemplatePtr *)(*pcVar3)();
        return pFVar9;
      }
    }
    FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_168);
    if (local_188.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.VarData.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 148fb6480

UClass * __cdecl UMovieSceneNiagaraFloatParameterTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraFloatParameterTrack.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"MovieSceneNiagaraFloatParameterTrack",
               &Z_Registration_Info_UClass_UMovieSceneNiagaraFloatParameterTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneNiagaraFloatParameterTrack,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneNiagaraFloatParameterTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneNiagaraFloatParameterTrack>,local_res8,
               UMovieSceneNiagaraParameterTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraFloatParameterTrack.InnerSingleton;
}

// SetSectionChannelDefaults @ 148fcbdb0

void __thiscall
UMovieSceneNiagaraFloatParameterTrack::SetSectionChannelDefaults
          (UMovieSceneNiagaraFloatParameterTrack *this,UMovieSceneSection *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FMovieSceneChannelProxy *pFVar4;
  undefined1 local_res10 [24];
  
  if (param_1 != (UMovieSceneSection *)0x0) {
    pUVar3 = Z_Construct_UClass_UMovieSceneFloatSection_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_148fcbdf8;
  }
  param_1 = (UMovieSceneSection *)0x0;
  bVar2 = `UMovieSceneNiagaraFloatParameterTrack::SetSectionChannelDefaults'::__l3::<lambda_1>::
          operator()(local_res10);
  if (!bVar2) {
    return;
  }
LAB_148fcbdf8:
  if ((param_2->ArrayNum != 4) &&
     (bVar2 = `UMovieSceneNiagaraFloatParameterTrack::SetSectionChannelDefaults'::__l3::<lambda_2>::
              operator()(local_res10), !bVar2)) {
    return;
  }
  pFVar4 = UMovieSceneSection::GetChannelProxy(param_1);
  UMovieSceneNiagaraParameterTrack::SetChannelDefault<FMovieSceneFloatChannel,float>
            (pFVar4,(FMovieSceneFloatChannel *)&param_1[1]._padding_,
             *(float *)(param_2->AllocatorInstance).Data);
  return;
}

// StaticRegisterNativesUMovieSceneNiagaraFloatParameterTrack @ 148fcdc60

void __cdecl
UMovieSceneNiagaraFloatParameterTrack::StaticRegisterNativesUMovieSceneNiagaraFloatParameterTrack
          (void)

{
  return;
}

// SupportsType @ 148fcde80

bool __thiscall
UMovieSceneNiagaraFloatParameterTrack::SupportsType
          (UMovieSceneNiagaraFloatParameterTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_148fcdeca;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_148fcdeca:
  pUVar5 = Z_Construct_UClass_UMovieSceneFloatSection_NoRegister();
  return pUVar4 == pUVar5;
}

// _getUObject @ 148fdaf60

UObject * __thiscall
UMovieSceneNiagaraFloatParameterTrack::_getUObject(UMovieSceneNiagaraFloatParameterTrack *this)

{
  return (UObject *)&this[-1].field_0x8;
}

// operator() @ 15053c200

bool __thiscall
`UMovieSceneNiagaraFloatParameterTrack::SetSectionChannelDefaults'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3524322319101067239>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3524322319101067239>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15053c340

bool __thiscall
`UMovieSceneNiagaraFloatParameterTrack::SetSectionChannelDefaults'::__l3::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3524322319101067239>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3524322319101067239>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

