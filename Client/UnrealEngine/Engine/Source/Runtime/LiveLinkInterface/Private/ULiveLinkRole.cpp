// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 13

// StaticClass @ 14cfb14d0

UClass * __cdecl ULiveLinkRole::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkRole",
               &Z_Registration_Info_UClass_ULiveLinkRole.InnerSingleton,
               StaticRegisterNativesULiveLinkRole,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkRole>,
               InternalVTableHelperCtorCaller<ULiveLinkRole>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkRole.InnerSingleton;
}

// ULiveLinkRole @ 14cfb5c50

ULiveLinkRole * __thiscall ULiveLinkRole::ULiveLinkRole(ULiveLinkRole *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkRole__6B_;
  return this;
}

// ULiveLinkRole @ 14cfb5c80

ULiveLinkRole * __thiscall
ULiveLinkRole::ULiveLinkRole(ULiveLinkRole *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkRole__6B_;
  return this;
}

// ~ULiveLinkRole @ 14cfb66b0

void __thiscall ULiveLinkRole::~ULiveLinkRole(ULiveLinkRole *this)

{
  *(undefined ***)this = &___7ULiveLinkRole__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetBlueprintDataStruct @ 14cfb8ee0

UScriptStruct * __thiscall ULiveLinkRole::GetBlueprintDataStruct(ULiveLinkRole *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkRole.h"
             ,0x18,L"Pure virtual not implemented (%s)");
  return (UScriptStruct *)0x0;
}

// GetDisplayName @ 14cfb97c0

FText * __thiscall ULiveLinkRole::GetDisplayName(ULiveLinkRole *this,FText *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0] = *(FName *)(*(longlong *)&this->field_0x10 + 0x18);
  FText::FromName(__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// GetFrameDataStruct @ 14cfb9a20

UScriptStruct * __thiscall ULiveLinkRole::GetFrameDataStruct(ULiveLinkRole *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkRole.h"
             ,0x17,L"Pure virtual not implemented (%s)");
  return (UScriptStruct *)0x0;
}

// GetPrivateStaticClass @ 14cfbb220

UClass * __cdecl ULiveLinkRole::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkRole",
               &Z_Registration_Info_UClass_ULiveLinkRole.InnerSingleton,
               StaticRegisterNativesULiveLinkRole,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkRole>,
               InternalVTableHelperCtorCaller<ULiveLinkRole>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkRole.InnerSingleton;
}

// GetStaticDataStruct @ 14cfbbf20

UScriptStruct * __thiscall ULiveLinkRole::GetStaticDataStruct(ULiveLinkRole *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkRole.h"
             ,0x16,L"Pure virtual not implemented (%s)");
  return (UScriptStruct *)0x0;
}

// InitializeBlueprintData @ 14cfbd9f0

bool __thiscall
ULiveLinkRole::InitializeBlueprintData
          (ULiveLinkRole *this,FLiveLinkSubjectFrameData *param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseBlueprintData> *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkRole.h"
             ,0x1a,L"Pure virtual not implemented (%s)");
  return false;
}

// IsFrameDataValid @ 14cfbdf00

bool __thiscall
ULiveLinkRole::IsFrameDataValid
          (ULiveLinkRole *this,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2,bool *param_3)

{
  return true;
}

// IsStaticDataValid @ 14cfbdf60

bool __thiscall
ULiveLinkRole::IsStaticDataValid
          (ULiveLinkRole *this,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_1,
          bool *param_2)

{
  return true;
}

// StaticRegisterNativesULiveLinkRole @ 14cfbe320

void __cdecl ULiveLinkRole::StaticRegisterNativesULiveLinkRole(void)

{
  return;
}

