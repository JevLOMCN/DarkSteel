// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 9

// StaticClass @ 14cfae650

UClass * __cdecl ULiveLinkController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkController",
               &Z_Registration_Info_UClass_ULiveLinkController.InnerSingleton,
               StaticRegisterNativesULiveLinkController,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkController>,
               InternalVTableHelperCtorCaller<ULiveLinkController>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkController.InnerSingleton;
}

// ULiveLinkController @ 14cfb5810

ULiveLinkController * __thiscall
ULiveLinkController::ULiveLinkController(ULiveLinkController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkController__6B_;
  return this;
}

// ULiveLinkController @ 14cfb5840

ULiveLinkController * __thiscall
ULiveLinkController::ULiveLinkController(ULiveLinkController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkController__6B_;
  return this;
}

// ~ULiveLinkController @ 14cfb6510

void __thiscall ULiveLinkController::~ULiveLinkController(ULiveLinkController *this)

{
  *(undefined ***)this = &___7ULiveLinkController__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14cfbab00

UClass * __cdecl ULiveLinkController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkController",
               &Z_Registration_Info_UClass_ULiveLinkController.InnerSingleton,
               StaticRegisterNativesULiveLinkController,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkController>,
               InternalVTableHelperCtorCaller<ULiveLinkController>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkController.InnerSingleton;
}

// GetRole @ 14cfbb740

TSubclassOf<ULiveLinkRole> __thiscall ULiveLinkController::GetRole(ULiveLinkController *this)

{
  TObjectPtr<UClass> in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkController.h"
             ,0x1a,L"Pure virtual not implemented (%s)");
  *(undefined8 *)in_RDX.field0_0x0 = 0;
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// OnRegistered @ 14cfbdfc0

void __thiscall ULiveLinkController::OnRegistered(ULiveLinkController *this)

{
  return;
}

// StaticRegisterNativesULiveLinkController @ 14cfbe280

void __cdecl ULiveLinkController::StaticRegisterNativesULiveLinkController(void)

{
  return;
}

// Tick @ 14cfbe640

void __thiscall
ULiveLinkController::Tick
          (ULiveLinkController *this,float param_1,FLiveLinkSubjectRepresentation *param_2)

{
  return;
}

