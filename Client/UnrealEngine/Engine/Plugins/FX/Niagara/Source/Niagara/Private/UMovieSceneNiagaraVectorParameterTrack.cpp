// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 18

// StaticClass @ 148ee52c0

UClass * __cdecl UMovieSceneNiagaraVectorParameterTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraVectorParameterTrack.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"MovieSceneNiagaraVectorParameterTrack",
               &Z_Registration_Info_UClass_UMovieSceneNiagaraVectorParameterTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneNiagaraVectorParameterTrack,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneNiagaraVectorParameterTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneNiagaraVectorParameterTrack>,local_res8,
               UMovieSceneNiagaraParameterTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraVectorParameterTrack.InnerSingleton;
}

// UMovieSceneNiagaraVectorParameterTrack @ 148f80b40

UMovieSceneNiagaraVectorParameterTrack * __thiscall
UMovieSceneNiagaraVectorParameterTrack::UMovieSceneNiagaraVectorParameterTrack
          (UMovieSceneNiagaraVectorParameterTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNiagaraParameterTrack::UMovieSceneNiagaraParameterTrack
            ((UMovieSceneNiagaraParameterTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneNiagaraVectorParameterTrack__6B_;
  return this;
}

// UMovieSceneNiagaraVectorParameterTrack @ 148f80b80

UMovieSceneNiagaraVectorParameterTrack * __thiscall
UMovieSceneNiagaraVectorParameterTrack::UMovieSceneNiagaraVectorParameterTrack
          (UMovieSceneNiagaraVectorParameterTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNiagaraParameterTrack::UMovieSceneNiagaraParameterTrack
            ((UMovieSceneNiagaraParameterTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneNiagaraVectorParameterTrack__6B_;
  return this;
}

// ~UMovieSceneNiagaraVectorParameterTrack @ 148f82090

void __thiscall
UMovieSceneNiagaraVectorParameterTrack::~UMovieSceneNiagaraVectorParameterTrack
          (UMovieSceneNiagaraVectorParameterTrack *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieSceneNiagaraParameterTrack::~UMovieSceneNiagaraParameterTrack
            ((UMovieSceneNiagaraParameterTrack *)this);
  return;
}

// CreateNewSection @ 148fa7300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneNiagaraVectorParameterTrack::CreateNewSection
          (UMovieSceneNiagaraVectorParameterTrack *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UMovieSceneFloatVectorSection *this_00;
  UMovieSceneSection *pUVar5;
  longlong *plVar6;
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
  pUVar4 = Z_Construct_UClass_UMovieSceneFloatVectorSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  this_00 = (UMovieSceneFloatVectorSection *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  iVar1 = this->ChannelsUsed;
  if (((iVar1 < 2) || (4 < iVar1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InChannelsUsed >= 2 && InChannelsUsed <= 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Sections\\MovieSceneVectorSection.h"
                         ,0xbe,L"Only 2-4 channels are supported."), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UMovieSceneSection *)(*pcVar2)();
    return pUVar5;
  }
  this_00->ChannelsUsed = iVar1;
  UMovieSceneFloatVectorSection::RecreateChannelProxy(this_00);
  return (UMovieSceneSection *)this_00;
}

// CreateTemplateForSection @ 148fa7aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneEvalTemplatePtr * __thiscall
UMovieSceneNiagaraVectorParameterTrack::CreateTemplateForSection
          (UMovieSceneNiagaraVectorParameterTrack *this,
          FMovieSceneEvalTemplatePtr *__return_storage_ptr__,UMovieSceneSection *param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FMovieSceneEvalTemplatePtr *pFVar4;
  FNiagaraVariable *pFVar5;
  FMovieSceneNiagaraVectorParameterSectionTemplate *pFVar6;
  FMovieSceneNiagaraVectorParameterSectionTemplate *pFVar7;
  FMovieSceneEvalTemplatePtr *pFVar8;
  longlong lVar9;
  FMovieSceneNiagaraVectorParameterSectionTemplate *this_00;
  int iVar10;
  FMovieSceneFloatChannel *pFVar11;
  int iVar12;
  undefined1 auStack_598 [32];
  FMovieSceneFloatChannel *local_578;
  FMovieSceneFloatChannel *local_570;
  longlong local_568;
  longlong local_560;
  undefined8 local_558;
  TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_> local_548;
  FNiagaraVariable local_538;
  FMovieSceneNiagaraVectorParameterSectionTemplate local_518;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_598;
  if (param_1 != (UMovieSceneSection *)0x0) {
    pUVar3 = Z_Construct_UClass_UMovieSceneFloatVectorSection_NoRegister();
    iVar10 = (int)pUVar3->_padding_;
    if ((iVar10 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
        &pUVar3->_padding_)) {
      iVar10 = (int)param_1[5]._padding_;
      iVar12 = 0;
      local_548.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_548.ArrayNum = 0;
      local_548.ArrayMax = 0;
      if (0 < iVar10) {
        do {
          if (((iVar12 < 0) || (iVar10 <= iVar12)) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < GetChannelsUsed()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Sections\\MovieSceneVectorSection.h"
                                 ,0xcb,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            pFVar4 = (FMovieSceneEvalTemplatePtr *)(*pcVar1)();
            return pFVar4;
          }
          pFVar11 = (FMovieSceneFloatChannel *)
                    ((longlong)iVar12 * 0x128 + 0x118 + (longlong)param_1);
          if ((local_548.AllocatorInstance.Data <= pFVar11) &&
             (pFVar11 < (FMovieSceneFloatChannel *)
                        (local_548.AllocatorInstance.Data + (longlong)local_548.ArrayMax * 0x128)))
          {
            local_560 = (longlong)local_548.ArrayNum;
            local_558 = 0x128;
            local_570 = (FMovieSceneFloatChannel *)local_548.AllocatorInstance.Data;
            local_578 = pFVar11;
            local_568 = (longlong)local_548.ArrayMax;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              pFVar4 = (FMovieSceneEvalTemplatePtr *)(*pcVar1)();
              return pFVar4;
            }
          }
          if (local_548.ArrayNum == local_548.ArrayMax) {
            local_548.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x128,8,&local_548.AllocatorInstance,&local_548.ArrayMax);
          }
          lVar9 = (longlong)local_548.ArrayNum;
          local_548.ArrayNum = local_548.ArrayNum + 1;
          FMovieSceneFloatChannel::FMovieSceneFloatChannel
                    ((FMovieSceneFloatChannel *)(local_548.AllocatorInstance.Data + lVar9 * 0x128),
                     pFVar11);
          iVar10 = (int)param_1[5]._padding_;
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar10);
      }
      pFVar5 = FNiagaraVariable::FNiagaraVariable
                         (&local_538,(FNiagaraVariable *)&this[-1]._padding_);
      pFVar6 = FMovieSceneNiagaraVectorParameterSectionTemplate::
               FMovieSceneNiagaraVectorParameterSectionTemplate(&local_518,pFVar5,&local_548,iVar10)
      ;
      __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfc;
      pFVar7 = FMemory::Malloc(0x4e8,8);
      __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 | 1;
      *(FMovieSceneNiagaraVectorParameterSectionTemplate **)__return_storage_ptr__ = pFVar7;
      this_00 = (FMovieSceneNiagaraVectorParameterSectionTemplate *)__return_storage_ptr__;
      if ((__return_storage_ptr__->field_0x80 & 2) == 0) {
        this_00 = pFVar7;
      }
      FMovieSceneNiagaraVectorParameterSectionTemplate::
      FMovieSceneNiagaraVectorParameterSectionTemplate(this_00,pFVar6);
      if (((__return_storage_ptr__->field_0x80 & 1) == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0x97,
                             L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FMovieSceneEvalTemplatePtr *)(*pcVar1)();
        return pFVar4;
      }
      pFVar4 = __return_storage_ptr__;
      if ((__return_storage_ptr__->field_0x80 & 2) == 0) {
        pFVar4 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
      }
      if (((__return_storage_ptr__->field_0x80 & 1) == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0x97,
                             L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FMovieSceneEvalTemplatePtr *)(*pcVar1)();
        return pFVar4;
      }
      pFVar8 = __return_storage_ptr__;
      if ((__return_storage_ptr__->field_0x80 & 2) == 0) {
        pFVar8 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
      }
      if ((pFVar4 != pFVar8) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FMovieSceneEvalTemplatePtr *)(*pcVar1)();
        return pFVar4;
      }
      FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_518.VectorChannels + 3);
      FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_518.VectorChannels + 2);
      FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_518.VectorChannels + 1);
      FMovieSceneFloatChannel::~FMovieSceneFloatChannel(local_518.VectorChannels);
      if ((void *)local_518._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_518._padding_);
      }
      local_518._padding_ = (longlong)&___7FMovieSceneEvalTemplateBase__6B_;
      DestructItems<FMovieSceneFloatChannel,int>
                ((FMovieSceneFloatChannel *)local_548.AllocatorInstance.Data,local_548.ArrayNum);
      if ((FMovieSceneFloatChannel *)local_548.AllocatorInstance.Data ==
          (FMovieSceneFloatChannel *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_548.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfe;
  __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 | 2;
  return __return_storage_ptr__;
}

// GetChannelsUsed @ 148fb2ec0

int __thiscall
UMovieSceneNiagaraVectorParameterTrack::GetChannelsUsed
          (UMovieSceneNiagaraVectorParameterTrack *this)

{
  return this->ChannelsUsed;
}

// GetPrivateStaticClass @ 148fb6900

UClass * __cdecl UMovieSceneNiagaraVectorParameterTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraVectorParameterTrack.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"MovieSceneNiagaraVectorParameterTrack",
               &Z_Registration_Info_UClass_UMovieSceneNiagaraVectorParameterTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneNiagaraVectorParameterTrack,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneNiagaraVectorParameterTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneNiagaraVectorParameterTrack>,local_res8,
               UMovieSceneNiagaraParameterTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraVectorParameterTrack.InnerSingleton;
}

// SetChannelsUsed @ 148fcba40

void __thiscall
UMovieSceneNiagaraVectorParameterTrack::SetChannelsUsed
          (UMovieSceneNiagaraVectorParameterTrack *this,int param_1)

{
  this->ChannelsUsed = param_1;
  return;
}

// SetSectionChannelDefaults @ 148fcbf90

void __thiscall
UMovieSceneNiagaraVectorParameterTrack::SetSectionChannelDefaults
          (UMovieSceneNiagaraVectorParameterTrack *this,UMovieSceneSection *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  UClass *pUVar9;
  FMovieSceneChannelProxy *pFVar10;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36 [6];
  undefined8 local_30;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
LAB_148fcbfc8:
    param_1 = (UMovieSceneSection *)0x0;
    local_res10[0] = 0;
    bVar8 = `UMovieSceneNiagaraVectorParameterTrack::SetSectionChannelDefaults'::__l3::<lambda_1>::
            operator()(local_res10);
    if (!bVar8) {
      return;
    }
  }
  else {
    pUVar9 = Z_Construct_UClass_UMovieSceneFloatVectorSection_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar9->_padding_)) goto LAB_148fcbfc8;
  }
  if ((longlong)param_2->ArrayNum != (longlong)(int)param_1[5]._padding_ * 4) {
    local_res20[0] = 0;
    bVar8 = `UMovieSceneNiagaraVectorParameterTrack::SetSectionChannelDefaults'::__l3::<lambda_2>::
            operator()(local_res20);
    if (!bVar8) {
      return;
    }
  }
  pFVar10 = UMovieSceneSection::GetChannelProxy(param_1);
  if ((int)param_1[5]._padding_ == 2) {
    if (param_2->ArrayNum == 8) {
LAB_148fcc045:
      local_30 = *(undefined8 *)(param_2->AllocatorInstance).Data;
      if (((int)param_1[5]._padding_ < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < GetChannelsUsed()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Sections\\MovieSceneVectorSection.h"
                             ,0xcb,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UMovieSceneNiagaraParameterTrack::SetChannelDefault<FMovieSceneFloatChannel,float>
                (pFVar10,(FMovieSceneFloatChannel *)&param_1[1]._padding_,(float)local_30);
      if (((int)param_1[5]._padding_ < 2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < GetChannelsUsed()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Sections\\MovieSceneVectorSection.h"
                             ,0xcb,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UMovieSceneNiagaraParameterTrack::SetChannelDefault<FMovieSceneFloatChannel,float>
                (pFVar10,(FMovieSceneFloatChannel *)&param_1[2]._padding_,local_30._4_4_);
      return;
    }
    local_38 = 0;
    bVar8 = `UMovieSceneNiagaraVectorParameterTrack::SetSectionChannelDefaults'::__l6::<lambda_3>::
            operator()(&local_38);
    if (bVar8) goto LAB_148fcc045;
  }
  if ((int)param_1[5]._padding_ != 3) {
LAB_148fcc1fa:
    if ((int)param_1[5]._padding_ == 4) {
      if (param_2->ArrayNum != 0x10) {
        local_36[0] = 0;
        bVar8 = `UMovieSceneNiagaraVectorParameterTrack::SetSectionChannelDefaults'::__l14::
                <lambda_5>::operator()(local_36);
        if (!bVar8) {
          return;
        }
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      fVar2 = *(float *)pFVar3;
      fVar5 = *(float *)(pFVar3 + 4);
      fVar6 = *(float *)(pFVar3 + 8);
      fVar7 = *(float *)(pFVar3 + 0xc);
      if (((int)param_1[5]._padding_ < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < GetChannelsUsed()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Sections\\MovieSceneVectorSection.h"
                             ,0xcb,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UMovieSceneNiagaraParameterTrack::SetChannelDefault<FMovieSceneFloatChannel,float>
                (pFVar10,(FMovieSceneFloatChannel *)&param_1[1]._padding_,fVar2);
      if (((int)param_1[5]._padding_ < 2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < GetChannelsUsed()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Sections\\MovieSceneVectorSection.h"
                             ,0xcb,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UMovieSceneNiagaraParameterTrack::SetChannelDefault<FMovieSceneFloatChannel,float>
                (pFVar10,(FMovieSceneFloatChannel *)&param_1[2]._padding_,fVar5);
      if (((int)param_1[5]._padding_ < 3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < GetChannelsUsed()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Sections\\MovieSceneVectorSection.h"
                             ,0xcb,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UMovieSceneNiagaraParameterTrack::SetChannelDefault<FMovieSceneFloatChannel,float>
                (pFVar10,(FMovieSceneFloatChannel *)&param_1[3]._padding_,fVar6);
      if (((int)param_1[5]._padding_ < 4) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < GetChannelsUsed()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Sections\\MovieSceneVectorSection.h"
                             ,0xcb,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UMovieSceneNiagaraParameterTrack::SetChannelDefault<FMovieSceneFloatChannel,float>
                (pFVar10,(FMovieSceneFloatChannel *)&param_1[4]._padding_,fVar7);
    }
    return;
  }
  if (param_2->ArrayNum != 0xc) {
    local_37 = 0;
    bVar8 = `UMovieSceneNiagaraVectorParameterTrack::SetSectionChannelDefaults'::__l10::<lambda_4>::
            operator()(&local_37);
    if (!bVar8) goto LAB_148fcc1fa;
  }
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_30 = *(undefined8 *)pFVar3;
  fVar2 = *(float *)(pFVar3 + 8);
  if (((int)param_1[5]._padding_ < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < GetChannelsUsed()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Sections\\MovieSceneVectorSection.h"
                         ,0xcb,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UMovieSceneNiagaraParameterTrack::SetChannelDefault<FMovieSceneFloatChannel,float>
            (pFVar10,(FMovieSceneFloatChannel *)&param_1[1]._padding_,(float)local_30);
  if (((int)param_1[5]._padding_ < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < GetChannelsUsed()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Sections\\MovieSceneVectorSection.h"
                         ,0xcb,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UMovieSceneNiagaraParameterTrack::SetChannelDefault<FMovieSceneFloatChannel,float>
            (pFVar10,(FMovieSceneFloatChannel *)&param_1[2]._padding_,local_30._4_4_);
  if (((int)param_1[5]._padding_ < 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < GetChannelsUsed()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Sections\\MovieSceneVectorSection.h"
                         ,0xcb,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UMovieSceneNiagaraParameterTrack::SetChannelDefault<FMovieSceneFloatChannel,float>
            (pFVar10,(FMovieSceneFloatChannel *)&param_1[3]._padding_,fVar2);
  return;
}

// StaticRegisterNativesUMovieSceneNiagaraVectorParameterTrack @ 148fcdcf0

void __cdecl
UMovieSceneNiagaraVectorParameterTrack::StaticRegisterNativesUMovieSceneNiagaraVectorParameterTrack
          (void)

{
  return;
}

// SupportsType @ 148fcdfd0

bool __thiscall
UMovieSceneNiagaraVectorParameterTrack::SupportsType
          (UMovieSceneNiagaraVectorParameterTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_148fce01a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_148fce01a:
  pUVar5 = Z_Construct_UClass_UMovieSceneFloatVectorSection_NoRegister();
  return pUVar4 == pUVar5;
}

// _getUObject @ 148fdaf90

UObject * __thiscall
UMovieSceneNiagaraVectorParameterTrack::_getUObject(UMovieSceneNiagaraVectorParameterTrack *this)

{
  return (UObject *)&this[-1]._padding_;
}

// operator() @ 15053c280

bool __thiscall
`UMovieSceneNiagaraVectorParameterTrack::SetSectionChannelDefaults'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<725703250862407706>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<725703250862407706>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15053c3c0

bool __thiscall
`UMovieSceneNiagaraVectorParameterTrack::SetSectionChannelDefaults'::__l3::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<725703250862407706>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<725703250862407706>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15053c400

bool __thiscall
`UMovieSceneNiagaraVectorParameterTrack::SetSectionChannelDefaults'::__l6::<lambda_3>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<725703250862407710>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<725703250862407710>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15053c440

bool __thiscall
`UMovieSceneNiagaraVectorParameterTrack::SetSectionChannelDefaults'::__l10::<lambda_4>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<725703250862407716>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<725703250862407716>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15053c480

bool __thiscall
`UMovieSceneNiagaraVectorParameterTrack::SetSectionChannelDefaults'::__l14::<lambda_5>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<725703250862407723>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<725703250862407723>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

