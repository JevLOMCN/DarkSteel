// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticClass @ 14798da60

UClass * __cdecl USplineMetadata::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USplineMetadata.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SplineMetadata",
               &Z_Registration_Info_UClass_USplineMetadata.InnerSingleton,
               StaticRegisterNativesUSplineMetadata,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USplineMetadata>,
               InternalVTableHelperCtorCaller<USplineMetadata>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USplineMetadata.InnerSingleton;
}

// USplineMetadata @ 1479a7740

USplineMetadata * __thiscall
USplineMetadata::USplineMetadata(USplineMetadata *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USplineMetadata__6B_;
  return this;
}

// USplineMetadata @ 1479a7770

USplineMetadata * __thiscall
USplineMetadata::USplineMetadata(USplineMetadata *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USplineMetadata__6B_;
  return this;
}

// ~USplineMetadata @ 1479a9990

void __thiscall USplineMetadata::~USplineMetadata(USplineMetadata *this)

{
  *(undefined ***)this = &___7USplineMetadata__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddPoint @ 1479af770

void __thiscall USplineMetadata::AddPoint(USplineMetadata *this,float param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineComponent.h"
             ,0x42,L"Pure virtual not implemented (%s)");
  return;
}

// CopyPoint @ 1479bae20

void __thiscall
USplineMetadata::CopyPoint(USplineMetadata *this,USplineMetadata *param_1,int param_2,int param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineComponent.h"
             ,0x45,L"Pure virtual not implemented (%s)");
  return;
}

// DuplicatePoint @ 1479bf880

void __thiscall USplineMetadata::DuplicatePoint(USplineMetadata *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineComponent.h"
             ,0x44,L"Pure virtual not implemented (%s)");
  return;
}

// Fixup @ 1479c2030

void __thiscall USplineMetadata::Fixup(USplineMetadata *this,int param_1,USplineComponent *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineComponent.h"
             ,0x47,L"Pure virtual not implemented (%s)");
  return;
}

// GetPrivateStaticClass @ 1479ce040

UClass * __cdecl USplineMetadata::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USplineMetadata.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SplineMetadata",
               &Z_Registration_Info_UClass_USplineMetadata.InnerSingleton,
               StaticRegisterNativesUSplineMetadata,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USplineMetadata>,
               InternalVTableHelperCtorCaller<USplineMetadata>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USplineMetadata.InnerSingleton;
}

// InsertPoint @ 1479d89d0

void __thiscall
USplineMetadata::InsertPoint(USplineMetadata *this,int param_1,float param_2,bool param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineComponent.h"
             ,0x3f,L"Pure virtual not implemented (%s)");
  return;
}

// RemovePoint @ 1479e40c0

void __thiscall USplineMetadata::RemovePoint(USplineMetadata *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineComponent.h"
             ,0x43,L"Pure virtual not implemented (%s)");
  return;
}

// Reset @ 1479e4c60

void __thiscall USplineMetadata::Reset(USplineMetadata *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineComponent.h"
             ,0x46,L"Pure virtual not implemented (%s)");
  return;
}

// StaticRegisterNativesUSplineMetadata @ 1479edfa0

void __cdecl USplineMetadata::StaticRegisterNativesUSplineMetadata(void)

{
  return;
}

// UpdatePoint @ 1479f2320

void __thiscall
USplineMetadata::UpdatePoint(USplineMetadata *this,int param_1,float param_2,bool param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineComponent.h"
             ,0x41,L"Pure virtual not implemented (%s)");
  return;
}

