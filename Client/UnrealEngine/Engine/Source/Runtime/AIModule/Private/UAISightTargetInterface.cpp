// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// StaticClass @ 146fe8d60

UClass * __cdecl UAISightTargetInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISightTargetInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISightTargetInterface",
               &Z_Registration_Info_UClass_UAISightTargetInterface.InnerSingleton,
               StaticRegisterNativesUAISightTargetInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAISightTargetInterface>,
               InternalVTableHelperCtorCaller<UAISightTargetInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISightTargetInterface.InnerSingleton;
}

// UAISightTargetInterface @ 146febde0

UAISightTargetInterface * __thiscall
UAISightTargetInterface::UAISightTargetInterface
          (UAISightTargetInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAISightTargetInterface__6B_;
  return this;
}

// UAISightTargetInterface @ 146febe10

UAISightTargetInterface * __thiscall
UAISightTargetInterface::UAISightTargetInterface
          (UAISightTargetInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAISightTargetInterface__6B_;
  return this;
}

// ~UAISightTargetInterface @ 146fec800

void __thiscall UAISightTargetInterface::~UAISightTargetInterface(UAISightTargetInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146ff0930

UClass * __cdecl UAISightTargetInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISightTargetInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISightTargetInterface",
               &Z_Registration_Info_UClass_UAISightTargetInterface.InnerSingleton,
               StaticRegisterNativesUAISightTargetInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAISightTargetInterface>,
               InternalVTableHelperCtorCaller<UAISightTargetInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISightTargetInterface.InnerSingleton;
}

// StaticRegisterNativesUAISightTargetInterface @ 146ff3c90

void __cdecl UAISightTargetInterface::StaticRegisterNativesUAISightTargetInterface(void)

{
  return;
}

