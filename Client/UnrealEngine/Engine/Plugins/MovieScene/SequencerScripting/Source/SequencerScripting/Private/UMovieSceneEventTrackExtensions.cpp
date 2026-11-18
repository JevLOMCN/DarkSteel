// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 11

// StaticClass @ 14c694660

UClass * __cdecl UMovieSceneEventTrackExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEventTrackExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneEventTrackExtensions",
               &Z_Registration_Info_UClass_UMovieSceneEventTrackExtensions.InnerSingleton,
               StaticRegisterNativesUMovieSceneEventTrackExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneEventTrackExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneEventTrackExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEventTrackExtensions.InnerSingleton;
}

// UMovieSceneEventTrackExtensions @ 14c6986a0

UMovieSceneEventTrackExtensions * __thiscall
UMovieSceneEventTrackExtensions::UMovieSceneEventTrackExtensions
          (UMovieSceneEventTrackExtensions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneEventTrackExtensions__6B_;
  return this;
}

// UMovieSceneEventTrackExtensions @ 14c6986d0

UMovieSceneEventTrackExtensions * __thiscall
UMovieSceneEventTrackExtensions::UMovieSceneEventTrackExtensions
          (UMovieSceneEventTrackExtensions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneEventTrackExtensions__6B_;
  return this;
}

// ~UMovieSceneEventTrackExtensions @ 14c698d00

void __thiscall
UMovieSceneEventTrackExtensions::~UMovieSceneEventTrackExtensions
          (UMovieSceneEventTrackExtensions *this)

{
  *(undefined ***)this = &___7UMovieSceneEventTrackExtensions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AddEventRepeaterSection @ 14c6998f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneEventRepeaterSection * __cdecl
UMovieSceneEventTrackExtensions::AddEventRepeaterSection(UMovieSceneEventTrack *param_1)

{
  UClass *pUVar1;
  UMovieSceneEventRepeaterSection *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  if (param_1 == (UMovieSceneEventTrack *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call AddEventRepeaterSection on a null track",Error,(FName)0x0);
    pUVar2 = (UMovieSceneEventRepeaterSection *)0x0;
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = Z_Construct_UClass_UMovieSceneEventRepeaterSection_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_Transactional;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = param_1;
    pUVar2 = (UMovieSceneEventRepeaterSection *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar3 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (pUVar2 != (UMovieSceneEventRepeaterSection *)0x0) {
      (**(code **)param_1->_padding_)(&param_1->_padding_,pUVar2);
    }
  }
  return pUVar2;
}

// AddEventTriggerSection @ 14c699a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneEventTriggerSection * __cdecl
UMovieSceneEventTrackExtensions::AddEventTriggerSection(UMovieSceneEventTrack *param_1)

{
  UClass *pUVar1;
  UMovieSceneEventTriggerSection *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  if (param_1 == (UMovieSceneEventTrack *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call AddEventTriggerSection on a null track",Error,(FName)0x0);
    pUVar2 = (UMovieSceneEventTriggerSection *)0x0;
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = Z_Construct_UClass_UMovieSceneEventTriggerSection_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_Transactional;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = param_1;
    pUVar2 = (UMovieSceneEventTriggerSection *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar3 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (pUVar2 != (UMovieSceneEventTriggerSection *)0x0) {
      (**(code **)param_1->_padding_)(&param_1->_padding_,pUVar2);
    }
  }
  return pUVar2;
}

// GetPrivateStaticClass @ 14c6a1a50

UClass * __cdecl UMovieSceneEventTrackExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEventTrackExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneEventTrackExtensions",
               &Z_Registration_Info_UClass_UMovieSceneEventTrackExtensions.InnerSingleton,
               StaticRegisterNativesUMovieSceneEventTrackExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneEventTrackExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneEventTrackExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEventTrackExtensions.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneEventTrackExtensions @ 14c6a70a0

void __cdecl
UMovieSceneEventTrackExtensions::StaticRegisterNativesUMovieSceneEventTrackExtensions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneEventTrackExtensions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddEventRepeaterSection @ 14c6a8c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UMovieSceneEventTrackExtensions::execAddEventRepeaterSection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  UObject *local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  pUVar2 = local_b0;
  local_b8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_b0 == (UObject *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call AddEventRepeaterSection on a null track",Error,(FName)0x0);
    *(undefined8 *)param_3 = 0;
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              (local_b0,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UMovieSceneEventRepeaterSection_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar3);
    local_a8._8_8_ = pUVar2;
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transactional;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar5 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (pUVar4 != (UObject *)0x0) {
      (*(code *)**(undefined8 **)&pUVar2[2].field_0x20)(&pUVar2[2].field_0x20,pUVar4);
    }
    *(UObject **)param_3 = pUVar4;
  }
  return;
}

// execAddEventTriggerSection @ 14c6a8da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UMovieSceneEventTrackExtensions::execAddEventTriggerSection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  UObject *local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  pUVar2 = local_b0;
  local_b8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_b0 == (UObject *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call AddEventTriggerSection on a null track",Error,(FName)0x0);
    *(undefined8 *)param_3 = 0;
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              (local_b0,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UMovieSceneEventTriggerSection_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar3);
    local_a8._8_8_ = pUVar2;
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transactional;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar5 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (pUVar4 != (UObject *)0x0) {
      (*(code *)**(undefined8 **)&pUVar2[2].field_0x20)(&pUVar2[2].field_0x20,pUVar4);
    }
    *(UObject **)param_3 = pUVar4;
  }
  return;
}

// execGetBoundObjectPropertyClass @ 14c6ad370

void __cdecl
UMovieSceneEventTrackExtensions::execGetBoundObjectPropertyClass
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UClass *pUVar2;
  TObjectPtr<UFunction>_u_0 *this;
  TObjectPtr<UFunction>_u_0 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  void *local_20;
  undefined8 uStack_18;
  
  local_38.DebugPtr = (UFunction *)0x0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = (void *)0x0;
  uStack_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  this = &local_38;
  if ((TObjectPtr<UFunction>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UFunction>_u_0 *)0x0) {
    this = (TObjectPtr<UFunction>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = FMovieSceneEvent::GetBoundObjectPropertyClass((FMovieSceneEvent *)&this->ObjectPtr);
  *(UClass **)param_3 = pUVar2;
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

