// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 147281440

UClass * __cdecl ASpotLight::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ASpotLight.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SpotLight",&Z_Registration_Info_UClass_ASpotLight.InnerSingleton,
               StaticRegisterNativesASpotLight,0x2d8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<ASpotLight>,InternalVTableHelperCtorCaller<ASpotLight>,
               aFStackX_8,ALight::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASpotLight.InnerSingleton;
}

// ASpotLight @ 14870fa60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

ASpotLight * __thiscall ASpotLight::ASpotLight(ASpotLight *this,FVTableHelper *param_1)

{
  ALight::ALight((ALight *)this,param_1);
  this->_padding_ = (longlong)&___7ASpotLight__6B_;
  (this->SpotLightComponent).field0_0x0.DebugPtr = (USpotLightComponent *)0x0;
  return this;
}

// ASpotLight @ 14870faa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

ASpotLight * __thiscall ASpotLight::ASpotLight(ASpotLight *this,FObjectInitializer *param_1)

{
  int iVar1;
  FName FVar2;
  USpotLightComponent *pUVar3;
  void *pvVar4;
  FName *pFVar5;
  UClass *pUVar6;
  FString *pFVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FName local_res8;
  FString local_48 [2];
  TRotator<double> local_28;
  
  pFVar5 = ::FName::FName(&local_res8,L"LightComponent0");
  FVar2 = *pFVar5;
  pUVar6 = Z_Construct_UClass_USpotLightComponent_NoRegister();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar2);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar2,pUVar6,(TArrayView<FName_const_,int> *)0x0);
  ALight::ALight((ALight *)this,param_1);
  uVar8 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7ASpotLight__6B_;
  pvVar4 = ThreadLocalStoragePointer;
  (this->SpotLightComponent).field0_0x0.DebugPtr = (USpotLightComponent *)0x0;
  if (*(int *)(*(longlong *)((longlong)pvVar4 + uVar8 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::ConstructorStatics.ID_Lighting,L"Lighting");
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Lighting,L"SpriteCategory",L"Lighting",L"Lighting");
      atexit(`ASpotLight::ASpotLight'::__l2::_dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pUVar3 = (USpotLightComponent *)this->_padding_;
  if (pUVar3 != (USpotLightComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_USpotLightComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      local_28.Yaw = _UNK_1517cfbf8;
      local_28.Pitch = ___xmm_0000000000000000c056800000000000;
      (this->SpotLightComponent).field0_0x0.DebugPtr = pUVar3;
      *(undefined1 *)((longlong)&pUVar3->_padding_ + 3) = 1;
      local_28.Roll = 0.0;
      USceneComponent::SetRelativeRotation
                ((USceneComponent *)(this->SpotLightComponent).field0_0x0.DebugPtr,&local_28,false,
                 (FHitResult *)0x0,None);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (this->SpotLightComponent).field0_0x0.DebugPtr,
         pUVar3 != (USpotLightComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      this->_padding_ = (longlong)(this->SpotLightComponent).field0_0x0;
      return this;
    }
    pFVar7 = GetTypeName<USpotLightComponent>(local_48);
    pwVar9 = L"";
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    pFVar7 = GetFullNameForCastLogError<ULightComponent>
                       ((FString *)&local_28,(ULightComponent *)pUVar3);
    if ((pFVar7->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar9,pwVar10);
  }
  pFVar7 = GetTypeName<USpotLightComponent>(local_48);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar9);
}

// ~ASpotLight @ 148714070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ASpotLight::~ASpotLight(ASpotLight *this)

{
  this->_padding_ = (longlong)&___7ASpotLight__6B_;
  ALight::~ALight((ALight *)this);
  return;
}

// GetPrivateStaticClass @ 14873e520

UClass * __cdecl ASpotLight::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASpotLight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SpotLight",&Z_Registration_Info_UClass_ASpotLight.InnerSingleton,
               StaticRegisterNativesASpotLight,0x2d8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<ASpotLight>,InternalVTableHelperCtorCaller<ASpotLight>,
               local_res8,ALight::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASpotLight.InnerSingleton;
}

// PostLoad @ 14874f870

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ASpotLight::PostLoad(ASpotLight *this)

{
  ULightComponent *this_00;
  
  AActor::PostLoad((AActor *)this);
  this_00 = (ULightComponent *)this->_padding_;
  if ((this_00 != (ULightComponent *)0x0) && (*(char *)((longlong)&this_00->_padding_ + 3) == '\0'))
  {
    ULightComponent::ClearLightFunctionMaterial(this_00);
    return;
  }
  return;
}

// SetInnerConeAngle @ 14875aff0

void __thiscall ASpotLight::SetInnerConeAngle(ASpotLight *this,float param_1)

{
  USpotLightComponent::SetInnerConeAngle((this->SpotLightComponent).field0_0x0.DebugPtr,param_1);
  return;
}

// SetOuterConeAngle @ 14875b540

void __thiscall ASpotLight::SetOuterConeAngle(ASpotLight *this,float param_1)

{
  USpotLightComponent::SetOuterConeAngle((this->SpotLightComponent).field0_0x0.DebugPtr,param_1);
  return;
}

// StaticRegisterNativesASpotLight @ 14875d0a0

void __cdecl ASpotLight::StaticRegisterNativesASpotLight(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_ASpotLight_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetInnerConeAngle @ 1487620f0

void __cdecl ASpotLight::execSetInnerConeAngle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  
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
  USpotLightComponent::SetInnerConeAngle(*(USpotLightComponent **)(param_1 + 0x12),local_res8[0]);
  return;
}

// execSetOuterConeAngle @ 148762520

void __cdecl ASpotLight::execSetOuterConeAngle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  
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
  USpotLightComponent::SetOuterConeAngle(*(USpotLightComponent **)(param_1 + 0x12),local_res8[0]);
  return;
}

