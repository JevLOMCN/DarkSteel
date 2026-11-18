// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// StaticClass @ 14687d650

UClass * __cdecl UMovieSceneFadeTrackTestLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFadeTrackTestLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneFadeTrackTestLibrary",
               &Z_Registration_Info_UClass_UMovieSceneFadeTrackTestLibrary.InnerSingleton,
               StaticRegisterNativesUMovieSceneFadeTrackTestLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneFadeTrackTestLibrary>,
               InternalVTableHelperCtorCaller<UMovieSceneFadeTrackTestLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFadeTrackTestLibrary.InnerSingleton;
}

// UMovieSceneFadeTrackTestLibrary @ 14689df70

UMovieSceneFadeTrackTestLibrary * __thiscall
UMovieSceneFadeTrackTestLibrary::UMovieSceneFadeTrackTestLibrary
          (UMovieSceneFadeTrackTestLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneFadeTrackTestLibrary__6B_;
  return this;
}

// UMovieSceneFadeTrackTestLibrary @ 14689dfa0

UMovieSceneFadeTrackTestLibrary * __thiscall
UMovieSceneFadeTrackTestLibrary::UMovieSceneFadeTrackTestLibrary
          (UMovieSceneFadeTrackTestLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneFadeTrackTestLibrary__6B_;
  return this;
}

// ~UMovieSceneFadeTrackTestLibrary @ 1468a0aa0

void __thiscall
UMovieSceneFadeTrackTestLibrary::~UMovieSceneFadeTrackTestLibrary
          (UMovieSceneFadeTrackTestLibrary *this)

{
  *(undefined ***)this = &___7UMovieSceneFadeTrackTestLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetManualFadeAmount @ 1468b5ad0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

float __cdecl UMovieSceneFadeTrackTestLibrary::GetManualFadeAmount(APlayerCameraManager *param_1)

{
  if (param_1 != (APlayerCameraManager *)0x0) {
    return param_1->FadeAmount;
  }
  return 0.0;
}

// GetPrivateStaticClass @ 1468b7680

UClass * __cdecl UMovieSceneFadeTrackTestLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFadeTrackTestLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneFadeTrackTestLibrary",
               &Z_Registration_Info_UClass_UMovieSceneFadeTrackTestLibrary.InnerSingleton,
               StaticRegisterNativesUMovieSceneFadeTrackTestLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneFadeTrackTestLibrary>,
               InternalVTableHelperCtorCaller<UMovieSceneFadeTrackTestLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFadeTrackTestLibrary.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneFadeTrackTestLibrary @ 1468d00c0

void __cdecl
UMovieSceneFadeTrackTestLibrary::StaticRegisterNativesUMovieSceneFadeTrackTestLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneFadeTrackTestLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetManualFadeAmount @ 1468d5610

void __cdecl
UMovieSceneFadeTrackTestLibrary::execGetManualFadeAmount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  longlong local_res10;
  
  local_res10 = 0;
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
  if (local_res10 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(local_res10 + 0x2fc);
  }
  *(undefined4 *)param_3 = uVar2;
  return;
}

