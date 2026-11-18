// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 14

// StaticClass @ 1467268c0

UClass * __cdecl UMovieSceneFloatSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFloatSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneFloatSection",
               &Z_Registration_Info_UClass_UMovieSceneFloatSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneFloatSection,0x250,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneFloatSection>,
               InternalVTableHelperCtorCaller<UMovieSceneFloatSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFloatSection.InnerSingleton;
}

// UMovieSceneFloatSection @ 146765420

UMovieSceneFloatSection * __thiscall
UMovieSceneFloatSection::UMovieSceneFloatSection
          (UMovieSceneFloatSection *this,FObjectInitializer *param_1)

{
  char cVar1;
  int iVar2;
  FGuid local_18;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneChannelOverrideProvider__;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->FloatCurve);
  (this->OverrideRegistry).field0_0x0.DebugPtr = (UMovieSceneSectionChannelOverrideRegistry *)0x0;
  local_18 = FSequencerObjectVersion::GUID;
  iVar2 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if (iVar2 < 4) {
    cVar1 = '\0';
  }
  else {
    local_18 = FSequencerObjectVersion::GUID;
    iVar2 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
    cVar1 = (5 < iVar2) + '\x01';
  }
  *(char *)((longlong)&this->_padding_ + 1) = cVar1;
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0x101;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// UMovieSceneFloatSection @ 1467654e0

UMovieSceneFloatSection * __thiscall
UMovieSceneFloatSection::UMovieSceneFloatSection
          (UMovieSceneFloatSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneChannelOverrideProvider__;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->FloatCurve);
  (this->OverrideRegistry).field0_0x0.DebugPtr = (UMovieSceneSectionChannelOverrideRegistry *)0x0;
  return this;
}

// ~UMovieSceneFloatSection @ 14676a850

void __thiscall UMovieSceneFloatSection::~UMovieSceneFloatSection(UMovieSceneFloatSection *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneChannelOverrideProvider__;
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->FloatCurve);
  this->_padding_ = (longlong)&___7IMovieSceneChannelOverrideProvider__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// CacheChannelProxy @ 14677e790

EMovieSceneChannelProxyType __thiscall
UMovieSceneFloatSection::CacheChannelProxy(UMovieSceneFloatSection *this)

{
  TSharedPtr<FMovieSceneChannelProxy,1> *pTVar1;
  TSharedPtr<FMovieSceneChannelProxy,1> local_18;
  
  pTVar1 = UE::MovieScene::MakeChannelProxy<FMovieSceneFloatChannel>
                     (&local_18,(this->OverrideRegistry).field0_0x0.DebugPtr,&this->FloatCurve);
  if ((TSharedPtr<FMovieSceneChannelProxy,1> *)&this->_padding_ != pTVar1) {
    this->_padding_ = (longlong)pTVar1->Object;
    pTVar1->Object = (FMovieSceneChannelProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&pTVar1->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return Static;
}

// GetChannelOverrideProviderTraits @ 146794820

TInlineValue<UE::MovieScene::FChannelOverrideProviderTraits,64,8> * __thiscall
UMovieSceneFloatSection::GetChannelOverrideProviderTraits
          (UMovieSceneFloatSection *this,
          TInlineValue<UE::MovieScene::FChannelOverrideProviderTraits,64,8> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<UE::MovieScene::FChannelOverrideProviderTraits,64,8> *pTVar4;
  TInlineValue<UE::MovieScene::FChannelOverrideProviderTraits,64,8> *pTVar5;
  
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7__TSingleChannelOverrideProviderTraits_UFMovieSceneFloatChannel___09_MovieScene_UE__6B_;
  (__return_storage_ptr__->Data).Pad[8] = '\0';
  (__return_storage_ptr__->Data).Pad[9] = '\0';
  (__return_storage_ptr__->Data).Pad[10] = '\0';
  (__return_storage_ptr__->Data).Pad[0xb] = '\0';
  (__return_storage_ptr__->Data).Pad[0xc] = '\0';
  (__return_storage_ptr__->Data).Pad[0xd] = '\0';
  (__return_storage_ptr__->Data).Pad[0xe] = '\0';
  (__return_storage_ptr__->Data).Pad[0xf] = '\0';
  if (!__return_storage_ptr__->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::FChannelOverrideProviderTraits,64,8> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar4 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar4 = *(TInlineValue<UE::MovieScene::FChannelOverrideProviderTraits,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (!__return_storage_ptr__->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::FChannelOverrideProviderTraits,64,8> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar5 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::FChannelOverrideProviderTraits,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (pTVar4 != pTVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::FChannelOverrideProviderTraits,64,8> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetChannelOverrideRegistry @ 146794900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSectionChannelOverrideRegistry * __thiscall
UMovieSceneFloatSection::GetChannelOverrideRegistry(UMovieSceneFloatSection *this,bool param_1)

{
  UClass *pUVar1;
  UMovieSceneSectionChannelOverrideRegistry *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_1) {
    plVar3 = &this[-1].FloatCurve._padding_;
    if ((this->FloatCurve)._padding_ == 0) {
      local_a8 = 0;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)plVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar1 = Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar1);
      local_98._48_8_ = (FObjectInstancingGraph *)0x0;
      local_98._56_8_ = (UPackage *)0x0;
      local_98._16_4_ = 0;
      local_98._20_4_ = 0;
      local_98._24_4_ = RF_Transactional;
      local_98._40_8_ = (UObject *)0x0;
      local_98[0x20] = false;
      local_98._8_8_ = plVar3;
      pUVar2 = (UMovieSceneSectionChannelOverrideRegistry *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar3 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar3 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UMovieSceneSectionChannelOverrideRegistry *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (this->FloatCurve)._padding_ = (longlong)pUVar2;
    }
    else {
      pUVar2 = (UMovieSceneSectionChannelOverrideRegistry *)(this->FloatCurve)._padding_;
    }
  }
  else {
    pUVar2 = (UMovieSceneSectionChannelOverrideRegistry *)(this->FloatCurve)._padding_;
  }
  return pUVar2;
}

// GetPrivateStaticClass @ 146798e60

UClass * __cdecl UMovieSceneFloatSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFloatSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneFloatSection",
               &Z_Registration_Info_UClass_UMovieSceneFloatSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneFloatSection,0x250,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneFloatSection>,
               InternalVTableHelperCtorCaller<UMovieSceneFloatSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFloatSection.InnerSingleton;
}

// ImportEntityImpl @ 14679f750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneFloatSection::ImportEntityImpl
          (UMovieSceneFloatSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  ushort uVar1;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> TVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  FBuiltInComponentTypes *pFVar6;
  FMovieSceneTracksComponentTypes *pFVar7;
  UMovieSceneSectionChannelOverrideRegistry *pUVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 local_108;
  undefined4 local_100;
  undefined **local_f8;
  ushort local_f0;
  undefined1 local_ee;
  UObject *local_e8;
  longlong *local_e0;
  UMovieSceneSectionChannelOverrideRegistry *local_d8;
  ForAnyElementType FStack_d0;
  undefined8 local_c8;
  ushort local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined **local_a8;
  ushort local_a0;
  undefined4 local_98;
  longlong *local_90;
  undefined1 local_88;
  undefined1 local_80;
  UObject *local_78;
  longlong *local_70;
  TObjectPtr<UMovieSceneSectionChannelOverrideRegistry>_u_0 local_68;
  ForAnyElementType local_60;
  int local_58;
  int local_54;
  FComponentTypeID local_50;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_48;
  undefined2 uStack_46;
  
  if (((int)this->_padding_ == 0) && (*(char *)((longlong)&this->_padding_ + 4) != '\x01')) {
    pUVar8 = (UMovieSceneSectionChannelOverrideRegistry *)(this->FloatCurve)._padding_;
    if (pUVar8 == (UMovieSceneSectionChannelOverrideRegistry *)0x0) {
      return;
    }
    iVar5 = UMovieSceneSectionChannelOverrideRegistry::NumChannels(pUVar8);
    if (iVar5 == 0) {
      return;
    }
  }
  plVar10 = &this[-1].FloatCurve._padding_;
  pFVar6 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar7 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar10 != (longlong *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)plVar10);
  }
  plVar12 = &this->_padding_;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar10 != (longlong *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)plVar10);
  }
  uVar1 = (pFVar7->Float).PropertyTag.Value;
  local_f8 = &___7__TEntityBuilder_UFAdd_MovieScene_UE___MovieScene_UE__6B_;
  local_ee = 0;
  local_f0 = uVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar10 != (longlong *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)plVar10);
  }
  local_e8 = (UObject *)plVar10;
  local_e0 = plVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (plVar10 == (longlong *)0x0)) {
    local_c8 = 0;
    local_d8 = (UMovieSceneSectionChannelOverrideRegistry *)0x0;
    FStack_d0.Data = (FScriptContainerElement *)0x0;
    pUVar8 = local_d8;
    if (plVar10 == (longlong *)0x0) goto LAB_14679f8bf;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)plVar10);
  }
  local_c8 = 0;
  FStack_d0.Data = (FScriptContainerElement *)0x0;
  local_d8 = (UMovieSceneSectionChannelOverrideRegistry *)0x0;
  pUVar8 = local_d8;
  if (plVar12 != (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
    if (plVar10 != (longlong *)0x0) {
      plVar9 = plVar12;
    }
    pUVar8 = (UMovieSceneSectionChannelOverrideRegistry *)(**(code **)(*plVar9 + 0x10))(plVar9,0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UMovieSceneSectionChannelOverrideRegistry *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
  }
LAB_14679f8bf:
  local_d8 = pUVar8;
  TVar2 = pFVar6->FloatChannel[0];
  plVar12 = &this->_padding_;
  local_b8 = 0;
  local_b0 = CONCAT22(local_b0._2_2_,pFVar6->DoubleResult[0]);
  local_100 = local_b0;
  local_108 = 0;
  local_c0 = uVar1;
  if ((local_d8 == (UMovieSceneSectionChannelOverrideRegistry *)0x0) ||
     (bVar4 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(local_d8,(FName)0x0),
     !bVar4)) {
    uStack_46._0_1_ = 1;
  }
  else {
    if (((FStack_d0.Data <= (FScriptContainerElement *)&local_108) &&
        ((FScriptContainerElement *)&local_108 < FStack_d0.Data + (longlong)local_c8._4_4_ * 0xc))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (int)local_c8;
    if ((int)local_c8 == local_c8._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&FStack_d0,(int *)((longlong)&local_c8 + 4));
    }
    local_c8 = CONCAT44(local_c8._4_4_,iVar5 + 1);
    *(undefined8 *)(FStack_d0.Data + (longlong)iVar5 * 0xc) = local_108;
    *(undefined4 *)(FStack_d0.Data + (longlong)iVar5 * 0xc + 8) = local_100;
    uStack_46._0_1_ = 0;
  }
  uVar1 = local_c0;
  local_a0 = local_f0;
  local_48 = TVar2;
  local_98 = _local_48;
  local_80 = local_ee;
  local_a8 = &
             ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  local_88 = 1;
  local_78 = local_e8;
  local_90 = plVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_e8);
  }
  local_70 = local_e0;
  local_68.DebugPtr = local_d8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_d8 != (UMovieSceneSectionChannelOverrideRegistry *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_d8);
  }
  _Src.Data = FStack_d0.Data;
  lVar11 = (longlong)(int)local_c8;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = (int)local_c8;
  if ((int)local_c8 == 0) {
    local_54 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,(int)local_c8,0,&local_60,(int)local_c8,&local_54);
    memcpy(local_60.Data,_Src.Data,lVar11 * 0xc);
  }
  local_50.Value = uVar1;
  UE::MovieScene::
  TPropertyTrackWithOverridableChannelsEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  ::Commit((TPropertyTrackWithOverridableChannelsEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
            *)&local_a8,(UMovieSceneSection *)plVar10,param_2,param_3);
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  local_a8 = &___7IEntityBuilder_MovieScene_UE__6B_;
  if (FStack_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d0.Data);
  }
  return;
}

// OnChannelOverridesChanged @ 1467a8740

void __thiscall UMovieSceneFloatSection::OnChannelOverridesChanged(UMovieSceneFloatSection *this)

{
  undefined1 *puVar1;
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  puVar1 = &this[-1].FloatCurve.KeyHandles.field_0x78;
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)puVar1 != &local_18) {
    *(undefined8 *)puVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this[-1].FloatCurve.KeyHandles.field_0x80,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// PopulateEvaluationFieldImpl @ 1467b1600

bool __thiscall
UMovieSceneFloatSection::PopulateEvaluationFieldImpl
          (UMovieSceneFloatSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  FMovieScenePropertyTrackEntityImportHelper::PopulateEvaluationField
            ((UMovieSceneSection *)&this[-1].FloatCurve._padding_,param_1,param_2,param_3);
  return true;
}

// StaticRegisterNativesUMovieSceneFloatSection @ 1467c2950

void __cdecl UMovieSceneFloatSection::StaticRegisterNativesUMovieSceneFloatSection(void)

{
  return;
}

// _getUObject @ 1467ca7d0

UObject * __thiscall UMovieSceneFloatSection::_getUObject(UMovieSceneFloatSection *this)

{
  return (UObject *)&this[-1].FloatCurve._padding_;
}

// _getUObject`adjustor{8}' @ 1467ca7e0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMovieSceneFloatSection::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UMovieSceneFloatSection::_getUObject_adjustor_8__(UMovieSceneFloatSection *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMovieSceneFloatSection *)&this[-1].OverrideRegistry);
  return (UObject *)pUVar1;
}

