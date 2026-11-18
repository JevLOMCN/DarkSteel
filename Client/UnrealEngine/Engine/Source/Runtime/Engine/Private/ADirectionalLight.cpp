// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147269810

UClass * __cdecl ADirectionalLight::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADirectionalLight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DirectionalLight",
               &Z_Registration_Info_UClass_ADirectionalLight.InnerSingleton,
               StaticRegisterNativesADirectionalLight,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADirectionalLight>,
               InternalVTableHelperCtorCaller<ADirectionalLight>,local_res8,ALight::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADirectionalLight.InnerSingleton;
}

// ADirectionalLight @ 14726c880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

ADirectionalLight * __thiscall
ADirectionalLight::ADirectionalLight(ADirectionalLight *this,FVTableHelper *param_1)

{
  ALight::ALight((ALight *)this,param_1);
  *(undefined ***)this = &___7ADirectionalLight__6B_;
  return this;
}

// ~ADirectionalLight @ 14726d280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall ADirectionalLight::~ADirectionalLight(ADirectionalLight *this)

{
  *(undefined ***)this = &___7ADirectionalLight__6B_;
  ALight::~ALight((ALight *)this);
  return;
}

// GetPrivateStaticClass @ 14726ee60

UClass * __cdecl ADirectionalLight::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADirectionalLight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DirectionalLight",
               &Z_Registration_Info_UClass_ADirectionalLight.InnerSingleton,
               StaticRegisterNativesADirectionalLight,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADirectionalLight>,
               InternalVTableHelperCtorCaller<ADirectionalLight>,local_res8,ALight::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADirectionalLight.InnerSingleton;
}

// StaticRegisterNativesADirectionalLight @ 147270950

void __cdecl ADirectionalLight::StaticRegisterNativesADirectionalLight(void)

{
  return;
}

// ADirectionalLight @ 147ea36c0

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

ADirectionalLight * __thiscall
ADirectionalLight::ADirectionalLight(ADirectionalLight *this,FObjectInitializer *param_1)

{
  int iVar1;
  FName FVar2;
  ULightComponent *this_00;
  FName *pFVar3;
  UClass *pUVar4;
  FString *pFVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FName local_res8;
  FString local_48 [2];
  TVector<double>_u_0 local_28;
  
  pFVar3 = ::FName::FName(&local_res8,L"LightComponent0");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar2);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar2,pUVar4,(TArrayView<FName_const_,int> *)0x0);
  ALight::ALight((ALight *)this,param_1);
  uVar6 = (ulonglong)_tls_index;
  *(undefined ***)this = &___7ADirectionalLight__6B_;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar6 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::ConstructorStatics.ID_Lighting,L"Lighting");
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Lighting,L"SpriteCategory",L"Lighting",L"Lighting");
      atexit(`ADirectionalLight::ADirectionalLight'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  this_00 = *(ULightComponent **)&this->field_0x2c0;
  if (this_00 != (ULightComponent *)0x0) {
    pUVar4 = Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      local_28._s_0.X = ___xmm_0000000000000000c047000000000000;
      local_28._s_0.Y = _UNK_15198e288;
      local_28._s_0.Z = 0.0;
      *(undefined1 *)((longlong)&this_00->_padding_ + 3) = 1;
      USceneComponent::SetRelativeRotation
                ((USceneComponent *)this_00,(TRotator<double> *)&local_28._s_0,false,
                 (FHitResult *)0x0,None);
      local_28._s_0.X = ___xmm_40040000000000004004000000000000;
      local_28._s_0.Y = _UNK_15198e298;
      local_28._s_0.Z = __real_4004000000000000;
      USceneComponent::SetRelativeScale3D
                ((USceneComponent *)this_00,(TVector<double> *)&local_28._s_0);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      *(ULightComponent **)&this->field_0x1b8 = this_00;
      return this;
    }
    pFVar5 = GetTypeName<UDirectionalLightComponent>(local_48);
    pwVar7 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<ULightComponent>((FString *)&local_28._s_0,this_00);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar7,pwVar8);
  }
  pFVar5 = GetTypeName<UDirectionalLightComponent>(local_48);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar7);
}

// PostLoad @ 147ed1470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADirectionalLight::PostLoad(ADirectionalLight *this)

{
  ULightComponent *this_00;
  
  AActor::PostLoad((AActor *)this);
  this_00 = *(ULightComponent **)&this->field_0x2c0;
  if ((this_00 != (ULightComponent *)0x0) && (*(char *)((longlong)&this_00->_padding_ + 3) == '\0'))
  {
    ULightComponent::ClearLightFunctionMaterial(this_00);
    return;
  }
  return;
}

