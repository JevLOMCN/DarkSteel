// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147b8eaa0

UClass * __cdecl ULocalMessage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ULocalMessage.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LocalMessage",
               &Z_Registration_Info_UClass_ULocalMessage.InnerSingleton,
               StaticRegisterNativesULocalMessage,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULocalMessage>,
               InternalVTableHelperCtorCaller<ULocalMessage>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalMessage.InnerSingleton;
}

// ULocalMessage @ 147ea6fe0

ULocalMessage * __thiscall ULocalMessage::ULocalMessage(ULocalMessage *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULocalMessage__6B_;
  return this;
}

// ULocalMessage @ 147ea7010

ULocalMessage * __thiscall
ULocalMessage::ULocalMessage(ULocalMessage *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULocalMessage__6B_;
  return this;
}

// ~ULocalMessage @ 147ea96c0

void __thiscall ULocalMessage::~ULocalMessage(ULocalMessage *this)

{
  *(undefined ***)this = &___7ULocalMessage__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ClientReceive @ 147eb42a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULocalMessage::ClientReceive(ULocalMessage *this,FClientReceiveData *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\LocalMessage.h"
             ,0x3d,L"Pure virtual not implemented (%s)");
  return;
}

// GetPrivateStaticClass @ 147ec4600

UClass * __cdecl ULocalMessage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalMessage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LocalMessage",
               &Z_Registration_Info_UClass_ULocalMessage.InnerSingleton,
               StaticRegisterNativesULocalMessage,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULocalMessage>,
               InternalVTableHelperCtorCaller<ULocalMessage>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalMessage.InnerSingleton;
}

// StaticRegisterNativesULocalMessage @ 147edf170

void __cdecl ULocalMessage::StaticRegisterNativesULocalMessage(void)

{
  return;
}

