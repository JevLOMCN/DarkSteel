// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// StaticClass @ 148998b40

UClass * __cdecl UVOIPTalker::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVOIPTalker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VOIPTalker",
               &Z_Registration_Info_UClass_UVOIPTalker.InnerSingleton,
               StaticRegisterNativesUVOIPTalker,0x100,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<UVOIPTalker>,
               InternalVTableHelperCtorCaller<UVOIPTalker>,local_res8,UActorComponent::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVOIPTalker.InnerSingleton;
}

// UVOIPTalker @ 1489b6e70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UVOIPTalker * __thiscall UVOIPTalker::UVOIPTalker(UVOIPTalker *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->PlayerId)._padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  (this->Settings).ComponentToAttachTo.field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->Settings).AttenuationSettings.field0_0x0.DebugPtr = (USoundAttenuation *)0x0;
  (this->Settings).SourceEffectChain.field0_0x0.DebugPtr = (USoundEffectSourcePresetChain *)0x0;
  (this->PlayerId).Variant._padding_ = 0;
  (this->PlayerId).Variant._padding_ = 0;
  (this->PlayerId).Variant.TypeIndex = '\0';
  return this;
}

// UVOIPTalker @ 1489b6ef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UVOIPTalker * __thiscall UVOIPTalker::UVOIPTalker(UVOIPTalker *this,FObjectInitializer *param_1)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->Settings).ComponentToAttachTo.field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->Settings).AttenuationSettings.field0_0x0.DebugPtr = (USoundAttenuation *)0x0;
  (this->Settings).SourceEffectChain.field0_0x0.DebugPtr = (USoundEffectSourcePresetChain *)0x0;
  *(undefined4 *)&(this->PlayerId).Variant.field_0x11 = 0;
  *(undefined2 *)&(this->PlayerId).Variant.field_0x15 = 0;
  (this->PlayerId).Variant.field_0x17 = 0;
  this->bIsRegistered = '\0';
  (this->PlayerId)._padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  (this->PlayerId).Variant._padding_ = 0;
  (this->PlayerId).Variant._padding_ = 0;
  (this->PlayerId).Variant.TypeIndex = '\0';
  this->CachedVolumeLevel = 0.0;
  return this;
}

// ~UVOIPTalker @ 1489ba8e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UVOIPTalker::~UVOIPTalker(UVOIPTalker *this)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  if (this->bIsRegistered != 0) {
    UnregisterFromVoiceTalkerMap(this);
  }
  uVar3 = (ulonglong)(this->PlayerId).Variant.TypeIndex;
  if (1 < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar3])(&(this->PlayerId).Variant);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// BPOnTalkingBegin @ 1489cbac0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UVOIPTalker::BPOnTalkingBegin(UVOIPTalker *this,UAudioComponent *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  UAudioComponent *local_res18 [2];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UVOIPTalker_BPOnTalkingBegin);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res18[0] = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001489cbb31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x500))(this,param_1);
  return;
}

// BPOnTalkingBegin_Implementation @ 1489cbb40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UVOIPTalker::BPOnTalkingBegin_Implementation(UVOIPTalker *this,UAudioComponent *param_1)

{
  return;
}

// BPOnTalkingEnd @ 1489cbb50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UVOIPTalker::BPOnTalkingEnd(UVOIPTalker *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UVOIPTalker_BPOnTalkingEnd);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x0001489cbb93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001489cbba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x4f8))(this);
  return;
}

// BPOnTalkingEnd_Implementation @ 1489cbbc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UVOIPTalker::BPOnTalkingEnd_Implementation(UVOIPTalker *this)

{
  return;
}

// CreateTalkerForPlayer @ 1489d51c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UVOIPTalker * __cdecl UVOIPTalker::CreateTalkerForPlayer(APlayerState *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UVOIPTalker *this;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  this = (UVOIPTalker *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98)
  ;
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (this != (UVOIPTalker *)0x0) {
    RegisterWithPlayerState(this,param_1);
  }
  return this;
}

// GetPrivateStaticClass @ 1489ebd10

UClass * __cdecl UVOIPTalker::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVOIPTalker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VOIPTalker",
               &Z_Registration_Info_UClass_UVOIPTalker.InnerSingleton,
               StaticRegisterNativesUVOIPTalker,0x100,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<UVOIPTalker>,
               InternalVTableHelperCtorCaller<UVOIPTalker>,local_res8,UActorComponent::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVOIPTalker.InnerSingleton;
}

// GetVoiceLevel @ 1489f0b30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UVOIPTalker::GetVoiceLevel(UVOIPTalker *this)

{
  return this->CachedVolumeLevel;
}

// OnAudioComponentEnvelopeValue @ 148a00950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UVOIPTalker::OnAudioComponentEnvelopeValue(UVOIPTalker *this,UAudioComponent *param_1,float param_2)

{
  this->CachedVolumeLevel = param_2;
  return;
}

// OnComponentDestroyed @ 148a00960

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UVOIPTalker::OnComponentDestroyed(UVOIPTalker *this,bool param_1)

{
  uint uVar1;
  
  if (this->bIsRegistered == 0) {
    return;
  }
  if (UVOIPStatics::VoiceTalkerMap._8_4_ != UVOIPStatics::VoiceTalkerMap._52_4_) {
    uVar1 = ::GetTypeHash(&this->PlayerId);
    TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FUniqueNetIdWrapper>
              ((TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
                *)&UVOIPStatics::VoiceTalkerMap,uVar1,&this->PlayerId);
    this->bIsRegistered = '\0';
    return;
  }
  this->bIsRegistered = '\0';
  return;
}

// OnTalkingBegin @ 148a00b30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UVOIPTalker::OnTalkingBegin(UVOIPTalker *this,UAudioComponent *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  UAudioComponent *local_res18 [2];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UVOIPTalker_BPOnTalkingBegin);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res18[0] = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148a00ba1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x500))(this,param_1);
  return;
}

// OnTalkingEnd @ 148a00bb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UVOIPTalker::OnTalkingEnd(UVOIPTalker *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UVOIPTalker_BPOnTalkingEnd);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x000148a00bf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148a00c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x4f8))(this);
  return;
}

// RegisterWithPlayerState @ 148a05e80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UVOIPTalker::RegisterWithPlayerState(UVOIPTalker *this,APlayerState *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FUniqueNetIdRepl *this_00;
  longlong lVar5;
  
  if ((param_1 == (APlayerState *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwningState != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VoiceConfig.cpp"
                         ,0x14b,L"RegisterWithPlayerState called with null pointer to OwningState"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this->bIsRegistered != 0) {
    UnregisterFromVoiceTalkerMap(this);
  }
  this_00 = &param_1->UniqueId;
  bVar2 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)this_00);
  if (!bVar2) {
    return;
  }
  uVar3 = ::GetTypeHash((FUniqueNetIdWrapper *)this_00);
  TMapBase<FUniqueNetIdWrapper,UVOIPTalker_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>_>
  ::FindOrAddImpl<FUniqueNetIdWrapper_const_&>
            ((TMapBase<FUniqueNetIdWrapper,UVOIPTalker_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>_>
              *)&UVOIPStatics::VoiceTalkerMap,uVar3,(FUniqueNetIdWrapper *)this_00);
  uVar3 = ::GetTypeHash((FUniqueNetIdWrapper *)this_00);
  iVar4 = TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FUniqueNetIdWrapper>
                    ((TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
                      *)&UVOIPStatics::VoiceTalkerMap,uVar3,(FUniqueNetIdWrapper *)this_00);
  if (iVar4 == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)iVar4 * 0x30 + UVOIPStatics::VoiceTalkerMap._0_8_;
    if (lVar5 != 0) goto LAB_148a05f5c;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_148a05f5c:
  *(UVOIPTalker **)(lVar5 + 0x20) = this;
  FUniqueNetIdWrapper::operator=(&this->PlayerId,(FUniqueNetIdWrapper *)this_00);
  this->bIsRegistered = '\x01';
  return;
}

// StaticRegisterNativesUVOIPTalker @ 148a18830

void __cdecl UVOIPTalker::StaticRegisterNativesUVOIPTalker(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UVOIPTalker_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnregisterFromVoiceTalkerMap @ 148a1dcb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UVOIPTalker::UnregisterFromVoiceTalkerMap(UVOIPTalker *this)

{
  uint uVar1;
  
  if (UVOIPStatics::VoiceTalkerMap._8_4_ != UVOIPStatics::VoiceTalkerMap._52_4_) {
    uVar1 = ::GetTypeHash(&this->PlayerId);
    TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FUniqueNetIdWrapper>
              ((TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
                *)&UVOIPStatics::VoiceTalkerMap,uVar1,&this->PlayerId);
    this->bIsRegistered = '\0';
    return;
  }
  this->bIsRegistered = '\0';
  return;
}

// execBPOnTalkingBegin @ 148a22550

void __cdecl UVOIPTalker::execBPOnTalkingBegin(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x500))(param_1,local_res8);
  return;
}

// execBPOnTalkingEnd @ 148a225e0

void __cdecl UVOIPTalker::execBPOnTalkingEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000148a225f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x4f8))();
  return;
}

// execCreateTalkerForPlayer @ 148a22610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UVOIPTalker::execCreateTalkerForPlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  APlayerState *pAVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UVOIPTalker *this;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  APlayerState *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8[0] = (APlayerState *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  pAVar2 = local_a8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._8_8_ = pUVar3;
  this = (UVOIPTalker *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98)
  ;
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (this != (UVOIPTalker *)0x0) {
    RegisterWithPlayerState(this,pAVar2);
  }
  *(UVOIPTalker **)param_3 = this;
  return;
}

// execGetVoiceLevel @ 148a22a00

void __cdecl UVOIPTalker::execGetVoiceLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[6].field_0x8;
  return;
}

// execRegisterWithPlayerState @ 148a24fe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UVOIPTalker::execRegisterWithPlayerState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  APlayerState *local_res10;
  
  local_res10 = (APlayerState *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RegisterWithPlayerState((UVOIPTalker *)param_1,local_res10);
  return;
}

