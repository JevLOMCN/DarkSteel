// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 1473200e0

UClass * __cdecl APointLight::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APointLight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PointLight",
               &Z_Registration_Info_UClass_APointLight.InnerSingleton,
               StaticRegisterNativesAPointLight,0x2d8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<APointLight>,
               InternalVTableHelperCtorCaller<APointLight>,local_res8,ALight::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APointLight.InnerSingleton;
}

// APointLight @ 147324710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

APointLight * __thiscall APointLight::APointLight(APointLight *this,FVTableHelper *param_1)

{
  ALight::ALight((ALight *)this,param_1);
  this->_padding_ = (longlong)&___7APointLight__6B_;
  (this->PointLightComponent).field0_0x0.DebugPtr = (UPointLightComponent *)0x0;
  return this;
}

// ~APointLight @ 147325050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall APointLight::~APointLight(APointLight *this)

{
  this->_padding_ = (longlong)&___7APointLight__6B_;
  ALight::~ALight((ALight *)this);
  return;
}

// GetPrivateStaticClass @ 1473268a0

UClass * __cdecl APointLight::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APointLight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PointLight",
               &Z_Registration_Info_UClass_APointLight.InnerSingleton,
               StaticRegisterNativesAPointLight,0x2d8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<APointLight>,
               InternalVTableHelperCtorCaller<APointLight>,local_res8,ALight::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APointLight.InnerSingleton;
}

// StaticRegisterNativesAPointLight @ 147328070

void __cdecl APointLight::StaticRegisterNativesAPointLight(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_APointLight_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetLightFalloffExponent @ 14732a9d0

void __cdecl
APointLight::execSetLightFalloffExponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetLightFalloffExponent((APointLight *)param_1,local_res10[0]);
  return;
}

// execSetRadius @ 14732aa60

void __cdecl APointLight::execSetRadius(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetRadius((APointLight *)param_1,local_res10[0]);
  return;
}

// APointLight @ 147ea49f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

APointLight * __thiscall APointLight::APointLight(APointLight *this,FObjectInitializer *param_1)

{
  int iVar1;
  FName FVar2;
  UPointLightComponent *pUVar3;
  FName *pFVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  pFVar4 = ::FName::FName(&local_res8,L"LightComponent0");
  FVar2 = *pFVar4;
  pUVar5 = Z_Construct_UClass_UPointLightComponent_NoRegister();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar2);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar2,pUVar5,(TArrayView<FName_const_,int> *)0x0);
  ALight::ALight((ALight *)this,param_1);
  pUVar3 = (UPointLightComponent *)this->_padding_;
  this->_padding_ = (longlong)&___7APointLight__6B_;
  (this->PointLightComponent).field0_0x0.DebugPtr = (UPointLightComponent *)0x0;
  if (pUVar3 == (UPointLightComponent *)0x0) {
    pFVar6 = GetTypeName<UPointLightComponent>(&local_28);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar7);
  }
  pUVar5 = Z_Construct_UClass_UPointLightComponent_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar5->_padding_)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->PointLightComponent).field0_0x0.DebugPtr = pUVar3;
    pUVar3->field_0x1ab = 1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 = (this->PointLightComponent).field0_0x0.DebugPtr,
       pUVar3 != (UPointLightComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    this->_padding_ = (longlong)(this->PointLightComponent).field0_0x0;
    return this;
  }
  pFVar6 = GetTypeName<UPointLightComponent>(&local_28);
  pwVar7 = L"";
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar6 = GetFullNameForCastLogError<ULightComponent>(&local_18,(ULightComponent *)pUVar3);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar7,pwVar8);
}

// SetLightFalloffExponent @ 147edc7a0

void __thiscall APointLight::SetLightFalloffExponent(APointLight *this,float param_1)

{
  UPointLightComponent::SetLightFalloffExponent
            ((this->PointLightComponent).field0_0x0.DebugPtr,param_1);
  return;
}

// SetRadius @ 147edcda0

void __thiscall APointLight::SetRadius(APointLight *this,float param_1)

{
  ULocalLightComponent::SetAttenuationRadius
            ((ULocalLightComponent *)(this->PointLightComponent).field0_0x0.DebugPtr,param_1);
  return;
}

