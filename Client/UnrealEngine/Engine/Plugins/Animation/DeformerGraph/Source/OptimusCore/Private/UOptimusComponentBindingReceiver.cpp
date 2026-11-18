// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e1082e0

UClass * __cdecl UOptimusComponentBindingReceiver::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusComponentBindingReceiver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusComponentBindingReceiver",
               &Z_Registration_Info_UClass_UOptimusComponentBindingReceiver.InnerSingleton,
               StaticRegisterNativesUOptimusComponentBindingReceiver,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusComponentBindingReceiver>,
               InternalVTableHelperCtorCaller<UOptimusComponentBindingReceiver>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusComponentBindingReceiver.InnerSingleton;
}

// UOptimusComponentBindingReceiver @ 14e1586b0

UOptimusComponentBindingReceiver * __thiscall
UOptimusComponentBindingReceiver::UOptimusComponentBindingReceiver
          (UOptimusComponentBindingReceiver *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusComponentBindingReceiver__6B_;
  return this;
}

// UOptimusComponentBindingReceiver @ 14e1586e0

UOptimusComponentBindingReceiver * __thiscall
UOptimusComponentBindingReceiver::UOptimusComponentBindingReceiver
          (UOptimusComponentBindingReceiver *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusComponentBindingReceiver__6B_;
  return this;
}

// ~UOptimusComponentBindingReceiver @ 14e162310

void __thiscall
UOptimusComponentBindingReceiver::~UOptimusComponentBindingReceiver
          (UOptimusComponentBindingReceiver *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d4a20

UClass * __cdecl UOptimusComponentBindingReceiver::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusComponentBindingReceiver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusComponentBindingReceiver",
               &Z_Registration_Info_UClass_UOptimusComponentBindingReceiver.InnerSingleton,
               StaticRegisterNativesUOptimusComponentBindingReceiver,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusComponentBindingReceiver>,
               InternalVTableHelperCtorCaller<UOptimusComponentBindingReceiver>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusComponentBindingReceiver.InnerSingleton;
}

// StaticRegisterNativesUOptimusComponentBindingReceiver @ 14e2257d0

void __cdecl
UOptimusComponentBindingReceiver::StaticRegisterNativesUOptimusComponentBindingReceiver(void)

{
  return;
}

