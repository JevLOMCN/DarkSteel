// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// StaticClass @ 146f82660

UClass * __cdecl UAIPerceptionListenerInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIPerceptionListenerInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIPerceptionListenerInterface",
               &Z_Registration_Info_UClass_UAIPerceptionListenerInterface.InnerSingleton,
               StaticRegisterNativesUAIPerceptionListenerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAIPerceptionListenerInterface>,
               InternalVTableHelperCtorCaller<UAIPerceptionListenerInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIPerceptionListenerInterface.InnerSingleton;
}

// UAIPerceptionListenerInterface @ 146f93a10

UAIPerceptionListenerInterface * __thiscall
UAIPerceptionListenerInterface::UAIPerceptionListenerInterface
          (UAIPerceptionListenerInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAIPerceptionListenerInterface__6B_;
  return this;
}

// UAIPerceptionListenerInterface @ 146f93a40

UAIPerceptionListenerInterface * __thiscall
UAIPerceptionListenerInterface::UAIPerceptionListenerInterface
          (UAIPerceptionListenerInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAIPerceptionListenerInterface__6B_;
  return this;
}

// ~UAIPerceptionListenerInterface @ 146f96950

void __thiscall
UAIPerceptionListenerInterface::~UAIPerceptionListenerInterface
          (UAIPerceptionListenerInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146fb36d0

UClass * __cdecl UAIPerceptionListenerInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIPerceptionListenerInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIPerceptionListenerInterface",
               &Z_Registration_Info_UClass_UAIPerceptionListenerInterface.InnerSingleton,
               StaticRegisterNativesUAIPerceptionListenerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAIPerceptionListenerInterface>,
               InternalVTableHelperCtorCaller<UAIPerceptionListenerInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIPerceptionListenerInterface.InnerSingleton;
}

// StaticRegisterNativesUAIPerceptionListenerInterface @ 146fd34b0

void __cdecl
UAIPerceptionListenerInterface::StaticRegisterNativesUAIPerceptionListenerInterface(void)

{
  return;
}

