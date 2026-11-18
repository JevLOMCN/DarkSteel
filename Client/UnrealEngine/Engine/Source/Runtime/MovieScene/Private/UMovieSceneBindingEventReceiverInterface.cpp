// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146056e20

UClass * __cdecl UMovieSceneBindingEventReceiverInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBindingEventReceiverInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBindingEventReceiverInterface",
               &Z_Registration_Info_UClass_UMovieSceneBindingEventReceiverInterface.InnerSingleton,
               StaticRegisterNativesUMovieSceneBindingEventReceiverInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneBindingEventReceiverInterface>,
               InternalVTableHelperCtorCaller<UMovieSceneBindingEventReceiverInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingEventReceiverInterface.InnerSingleton;
}

// UMovieSceneBindingEventReceiverInterface @ 146058c10

UMovieSceneBindingEventReceiverInterface * __thiscall
UMovieSceneBindingEventReceiverInterface::UMovieSceneBindingEventReceiverInterface
          (UMovieSceneBindingEventReceiverInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneBindingEventReceiverInterface__6B_;
  return this;
}

// UMovieSceneBindingEventReceiverInterface @ 146058c40

UMovieSceneBindingEventReceiverInterface * __thiscall
UMovieSceneBindingEventReceiverInterface::UMovieSceneBindingEventReceiverInterface
          (UMovieSceneBindingEventReceiverInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneBindingEventReceiverInterface__6B_;
  return this;
}

// ~UMovieSceneBindingEventReceiverInterface @ 146059580

void __thiscall
UMovieSceneBindingEventReceiverInterface::~UMovieSceneBindingEventReceiverInterface
          (UMovieSceneBindingEventReceiverInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14605ae90

UClass * __cdecl UMovieSceneBindingEventReceiverInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBindingEventReceiverInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBindingEventReceiverInterface",
               &Z_Registration_Info_UClass_UMovieSceneBindingEventReceiverInterface.InnerSingleton,
               StaticRegisterNativesUMovieSceneBindingEventReceiverInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneBindingEventReceiverInterface>,
               InternalVTableHelperCtorCaller<UMovieSceneBindingEventReceiverInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingEventReceiverInterface.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneBindingEventReceiverInterface @ 14605cee0

void __cdecl
UMovieSceneBindingEventReceiverInterface::
StaticRegisterNativesUMovieSceneBindingEventReceiverInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneBindingEventReceiverInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

