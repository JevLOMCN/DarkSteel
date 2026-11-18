// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// StaticClass @ 1473cb560

UClass * __cdecl AAmbientSound::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAmbientSound.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AmbientSound",
               &Z_Registration_Info_UClass_AAmbientSound.InnerSingleton,
               StaticRegisterNativesAAmbientSound,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AAmbientSound>,
               InternalVTableHelperCtorCaller<AAmbientSound>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAmbientSound.InnerSingleton;
}

// AAmbientSound @ 1473d4710

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AAmbientSound * __thiscall AAmbientSound::AAmbientSound(AAmbientSound *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AAmbientSound__6B_;
  (this->AudioComponent).field0_0x0.DebugPtr = (UAudioComponent *)0x0;
  return this;
}

// AAmbientSound @ 1473d4750

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AAmbientSound * __thiscall
AAmbientSound::AAmbientSound(AAmbientSound *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  FName FVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UAudioComponent *pUVar6;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AAmbientSound__6B_;
  (this->AudioComponent).field0_0x0.DebugPtr = (UAudioComponent *)0x0;
  pFVar4 = ::FName::FName(&local_res8,L"AudioComponent0");
  FVar3 = *pFVar4;
  pUVar5 = Z_Construct_UClass_UAudioComponent_NoRegister();
  pUVar6 = (UAudioComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UAudioComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->AudioComponent).field0_0x0.DebugPtr = pUVar6;
  pUVar6->field_0x9a = pUVar6->field_0x9a | 8;
  ((this->AudioComponent).field0_0x0.DebugPtr)->bStopWhenOwnerDestroyed = '\x01';
  ((this->AudioComponent).field0_0x0.DebugPtr)->bShouldRemainActiveIfDropped = '\x01';
  ((this->AudioComponent).field0_0x0.DebugPtr)->field_0x1ab = 2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (this->AudioComponent).field0_0x0.DebugPtr, pUVar6 != (UAudioComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  this->_padding_ = (longlong)(this->AudioComponent).field0_0x0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xf7;
  AActor::SetHidden((AActor *)this,true);
  AActor::SetCanBeDamaged((AActor *)this,false);
  return this;
}

// ~AAmbientSound @ 1473d9ce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AAmbientSound::~AAmbientSound(AAmbientSound *this)

{
  this->_padding_ = (longlong)&___7AAmbientSound__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// AdjustVolume @ 1473e1780

void __thiscall AAmbientSound::AdjustVolume(AAmbientSound *this,float param_1,float param_2)

{
  UAudioComponent *this_00;
  
  this_00 = (this->AudioComponent).field0_0x0.DebugPtr;
  if (this_00 != (UAudioComponent *)0x0) {
    UAudioComponent::AdjustVolume(this_00,param_1,param_2,Linear);
    return;
  }
  return;
}

// FadeIn @ 1473fc0f0

void __thiscall AAmbientSound::FadeIn(AAmbientSound *this,float param_1,float param_2)

{
  UAudioComponent *pUVar1;
  
  pUVar1 = (this->AudioComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UAudioComponent *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x640))();
  }
  return;
}

// FadeOut @ 1473fc120

void __thiscall AAmbientSound::FadeOut(AAmbientSound *this,float param_1,float param_2)

{
  UAudioComponent *pUVar1;
  
  pUVar1 = (this->AudioComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UAudioComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001473fc132. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x648))();
    return;
  }
  return;
}

// GetInternalSoundCueName @ 1474020d0

FString * __thiscall
AAmbientSound::GetInternalSoundCueName(AAmbientSound *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FName local_res10 [3];
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_res10[0] = (FName)this->_padding_;
  ::FName::ToString(local_res10,&local_18);
  if (__return_storage_ptr__ != &local_18) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChars(__return_storage_ptr__,L"_SoundCue",9);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1474033a0

UClass * __cdecl AAmbientSound::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAmbientSound.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AmbientSound",
               &Z_Registration_Info_UClass_AAmbientSound.InnerSingleton,
               StaticRegisterNativesAAmbientSound,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AAmbientSound>,
               InternalVTableHelperCtorCaller<AAmbientSound>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAmbientSound.InnerSingleton;
}

// Play @ 14740d610

void __thiscall AAmbientSound::Play(AAmbientSound *this,float param_1)

{
  UAudioComponent *pUVar1;
  wchar_t *pwVar2;
  
  if ((this->AudioComponent).field0_0x0.DebugPtr != (UAudioComponent *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pwVar2 = FCommandLine::Get();
        bMuteAmbientActors = FParse::Param(pwVar2,L"NoAmbientActors");
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (bMuteAmbientActors == false) {
      pUVar1 = (this->AudioComponent).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar1 + 0x650))(pUVar1,param_1);
    }
  }
  return;
}

// PostRegisterAllComponents @ 14740dc30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AAmbientSound::PostRegisterAllComponents(AAmbientSound *this)

{
  longlong *plVar1;
  undefined1 auStackX_8 [32];
  FReadAccessScope FStack_28;
  
  if ((this->_padding_ & 0x8000000000) == 0) {
    `AActor::PostRegisterAllComponents'::__l2::<lambda_1>::operator()(auStackX_8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNavigationSystem::Delegates.OnActorRegistered,&FStack_28);
  plVar1 = (longlong *)0x0;
  if (FNavigationSystem::Delegates.OnActorRegistered._16_4_ != 0) {
    plVar1 = (longlong *)FNavigationSystem::Delegates.OnActorRegistered._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  FActorInstanceGuid::ReleaseActorInstanceGuid((AActor *)this);
  return;
}

// StaticRegisterNativesAAmbientSound @ 147419b10

void __cdecl AAmbientSound::StaticRegisterNativesAAmbientSound(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_AAmbientSound_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Stop @ 147419c90

void __thiscall AAmbientSound::Stop(AAmbientSound *this)

{
  UAudioComponent *pUVar1;
  
  pUVar1 = (this->AudioComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UAudioComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147419c9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x668))();
    return;
  }
  return;
}

// execAdjustVolume @ 14741da30

void __cdecl AAmbientSound::execAdjustVolume(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  float local_res10 [2];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UAudioComponent **)&param_1[0x11].field_0x18 != (UAudioComponent *)0x0) {
    UAudioComponent::AdjustVolume
              (*(UAudioComponent **)&param_1[0x11].field_0x18,local_res10[0],local_res8[0],Linear);
  }
  return;
}

// execFadeIn @ 14741db10

void __cdecl AAmbientSound::execFadeIn(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[0x11].field_0x18;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x640))(plVar2,local_res10[0],local_res8[0],0,0);
  }
  return;
}

// execFadeOut @ 14741dc00

void __cdecl AAmbientSound::execFadeOut(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[0x11].field_0x18;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x648))(plVar2,local_res10[0],local_res8[0],0);
  }
  return;
}

// execPlay @ 14741e050

void __cdecl AAmbientSound::execPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  wchar_t *pwVar3;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x11].field_0x18 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pwVar3 = FCommandLine::Get();
        bMuteAmbientActors = FParse::Param(pwVar3,L"NoAmbientActors");
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (bMuteAmbientActors == false) {
      (**(code **)(**(longlong **)&param_1[0x11].field_0x18 + 0x650))
                (*(longlong **)&param_1[0x11].field_0x18,uVar2);
    }
  }
  return;
}

// execStop @ 14741e160

void __cdecl AAmbientSound::execStop(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)&param_1[0x11].field_0x18 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014741e184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)&param_1[0x11].field_0x18 + 0x668))();
    return;
  }
  return;
}

