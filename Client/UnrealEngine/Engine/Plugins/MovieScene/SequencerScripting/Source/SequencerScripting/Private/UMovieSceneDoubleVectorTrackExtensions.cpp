// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 10

// StaticClass @ 14c6ba750

UClass * __cdecl UMovieSceneDoubleVectorTrackExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrackExtensions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneDoubleVectorTrackExtensions",
               &Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrackExtensions.InnerSingleton,
               StaticRegisterNativesUMovieSceneDoubleVectorTrackExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneDoubleVectorTrackExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneDoubleVectorTrackExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrackExtensions.InnerSingleton;
}

// UMovieSceneDoubleVectorTrackExtensions @ 14c6bafb0

UMovieSceneDoubleVectorTrackExtensions * __thiscall
UMovieSceneDoubleVectorTrackExtensions::UMovieSceneDoubleVectorTrackExtensions
          (UMovieSceneDoubleVectorTrackExtensions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneDoubleVectorTrackExtensions__6B_;
  return this;
}

// UMovieSceneDoubleVectorTrackExtensions @ 14c6bafe0

UMovieSceneDoubleVectorTrackExtensions * __thiscall
UMovieSceneDoubleVectorTrackExtensions::UMovieSceneDoubleVectorTrackExtensions
          (UMovieSceneDoubleVectorTrackExtensions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneDoubleVectorTrackExtensions__6B_;
  return this;
}

// ~UMovieSceneDoubleVectorTrackExtensions @ 14c6bb0d0

void __thiscall
UMovieSceneDoubleVectorTrackExtensions::~UMovieSceneDoubleVectorTrackExtensions
          (UMovieSceneDoubleVectorTrackExtensions *this)

{
  *(undefined ***)this = &___7UMovieSceneDoubleVectorTrackExtensions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetNumChannelsUsed @ 14c6bb2f0

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UMovieSceneDoubleVectorTrackExtensions::GetNumChannelsUsed(UMovieSceneDoubleVectorTrack *param_1)

{
  if (param_1 == (UMovieSceneDoubleVectorTrack *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call GetNumChannelsUsed on a null track",Error,(FName)0x0);
    return -1;
  }
  return param_1->NumChannelsUsed;
}

// GetPrivateStaticClass @ 14c6bb370

UClass * __cdecl UMovieSceneDoubleVectorTrackExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrackExtensions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneDoubleVectorTrackExtensions",
               &Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrackExtensions.InnerSingleton,
               StaticRegisterNativesUMovieSceneDoubleVectorTrackExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneDoubleVectorTrackExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneDoubleVectorTrackExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrackExtensions.InnerSingleton;
}

// SetNumChannelsUsed @ 14c6bb770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneDoubleVectorTrackExtensions::SetNumChannelsUsed
          (UMovieSceneDoubleVectorTrack *param_1,int param_2)

{
  if (param_1 == (UMovieSceneDoubleVectorTrack *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetNumChannelsUsed on a null track",Error,(FName)0x0);
    return;
  }
  param_1->NumChannelsUsed = param_2;
  return;
}

// StaticRegisterNativesUMovieSceneDoubleVectorTrackExtensions @ 14c6bb840

void __cdecl
UMovieSceneDoubleVectorTrackExtensions::StaticRegisterNativesUMovieSceneDoubleVectorTrackExtensions
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetNumChannelsUsed @ 14c6bbd00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneDoubleVectorTrackExtensions::execGetNumChannelsUsed
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10;
  longlong local_res18;
  
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
    local_res18 = local_res10;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetNumChannelsUsed on a null track",Error,(FName)0x0);
    *(undefined4 *)param_3 = 0xffffffff;
    return;
  }
  *(undefined4 *)param_3 = *(undefined4 *)(local_res10 + 0x148);
  return;
}

// execSetNumChannelsUsed @ 14c6bc550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneDoubleVectorTrackExtensions::execSetNumChannelsUsed
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  longlong local_res20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == 0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetNumChannelsUsed on a null track",Error,(FName)0x0);
    return;
  }
  *(undefined4 *)(local_res20 + 0x148) = local_res10[0];
  return;
}

