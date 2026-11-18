// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1483cc070

UClass * __cdecl ARectLight::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ARectLight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RectLight",&Z_Registration_Info_UClass_ARectLight.InnerSingleton,
               StaticRegisterNativesARectLight,0x2d8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<ARectLight>,InternalVTableHelperCtorCaller<ARectLight>,
               local_res8,ALight::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ARectLight.InnerSingleton;
}

// ARectLight @ 1483e0cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

ARectLight * __thiscall ARectLight::ARectLight(ARectLight *this,FVTableHelper *param_1)

{
  ALight::ALight((ALight *)this,param_1);
  this->_padding_ = (longlong)&___7ARectLight__6B_;
  (this->RectLightComponent).field0_0x0.DebugPtr = (URectLightComponent *)0x0;
  return this;
}

// ARectLight @ 1483e0cf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

ARectLight * __thiscall ARectLight::ARectLight(ARectLight *this,FObjectInitializer *param_1)

{
  int iVar1;
  FName FVar2;
  URectLightComponent *pUVar3;
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
  pUVar5 = Z_Construct_UClass_URectLightComponent_NoRegister();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar2);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar2,pUVar5,(TArrayView<FName_const_,int> *)0x0);
  ALight::ALight((ALight *)this,param_1);
  pUVar3 = (URectLightComponent *)this->_padding_;
  this->_padding_ = (longlong)&___7ARectLight__6B_;
  (this->RectLightComponent).field0_0x0.DebugPtr = (URectLightComponent *)0x0;
  if (pUVar3 == (URectLightComponent *)0x0) {
    pFVar6 = GetTypeName<URectLightComponent>(&local_28);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar7);
  }
  pUVar5 = Z_Construct_UClass_URectLightComponent_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar5->_padding_)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->RectLightComponent).field0_0x0.DebugPtr = pUVar3;
    pUVar3->field_0x1ab = 1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 = (this->RectLightComponent).field0_0x0.DebugPtr,
       pUVar3 != (URectLightComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    this->_padding_ = (longlong)(this->RectLightComponent).field0_0x0;
    return this;
  }
  pFVar6 = GetTypeName<URectLightComponent>(&local_28);
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

// ~ARectLight @ 1483e88b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ARectLight::~ARectLight(ARectLight *this)

{
  this->_padding_ = (longlong)&___7ARectLight__6B_;
  ALight::~ALight((ALight *)this);
  return;
}

// GetPrivateStaticClass @ 148409ce0

UClass * __cdecl ARectLight::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ARectLight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RectLight",&Z_Registration_Info_UClass_ARectLight.InnerSingleton,
               StaticRegisterNativesARectLight,0x2d8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<ARectLight>,InternalVTableHelperCtorCaller<ARectLight>,
               local_res8,ALight::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ARectLight.InnerSingleton;
}

// StaticRegisterNativesARectLight @ 148427a40

void __cdecl ARectLight::StaticRegisterNativesARectLight(void)

{
  return;
}

