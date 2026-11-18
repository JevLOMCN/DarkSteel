// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// DrawToVLog @ 146e89b90

void __thiscall UAISenseEvent::DrawToVLog(UAISenseEvent *this,UObject *param_1)

{
  return;
}

// StaticClass @ 146ea0010

UClass * __cdecl UAISenseEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseEvent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseEvent",
               &Z_Registration_Info_UClass_UAISenseEvent.InnerSingleton,
               StaticRegisterNativesUAISenseEvent,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UAISenseEvent>,
               InternalVTableHelperCtorCaller<UAISenseEvent>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseEvent.InnerSingleton;
}

// UAISenseEvent @ 146f942b0

UAISenseEvent * __thiscall UAISenseEvent::UAISenseEvent(UAISenseEvent *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAISenseEvent__6B_;
  return this;
}

// UAISenseEvent @ 146f942e0

UAISenseEvent * __thiscall
UAISenseEvent::UAISenseEvent(UAISenseEvent *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAISenseEvent__6B_;
  return this;
}

// ~UAISenseEvent @ 146f96af0

void __thiscall UAISenseEvent::~UAISenseEvent(UAISenseEvent *this)

{
  *(undefined ***)this = &___7UAISenseEvent__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146fb3a80

UClass * __cdecl UAISenseEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseEvent",
               &Z_Registration_Info_UClass_UAISenseEvent.InnerSingleton,
               StaticRegisterNativesUAISenseEvent,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UAISenseEvent>,
               InternalVTableHelperCtorCaller<UAISenseEvent>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseEvent.InnerSingleton;
}

// GetSenseID @ 146fb4b30

FAINamedID<FAISenseCounter> * __thiscall
UAISenseEvent::GetSenseID(UAISenseEvent *this,FAINamedID<FAISenseCounter> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\Perception\\AISenseEvent.h"
             ,0x12,L"Pure virtual not implemented (%s)");
  FAINamedID<FAISenseCounter>::InvalidID(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUAISenseEvent @ 146fd3560

void __cdecl UAISenseEvent::StaticRegisterNativesUAISenseEvent(void)

{
  return;
}

