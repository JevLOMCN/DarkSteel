// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 7

// StaticClass @ 14d77e5c0

UClass * __cdecl UVideoDeinterlacer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVideoDeinterlacer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"VideoDeinterlacer",
               &Z_Registration_Info_UClass_UVideoDeinterlacer.InnerSingleton,
               StaticRegisterNativesUVideoDeinterlacer,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UVideoDeinterlacer>,
               InternalVTableHelperCtorCaller<UVideoDeinterlacer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVideoDeinterlacer.InnerSingleton;
}

// UVideoDeinterlacer @ 14d78ba40

UVideoDeinterlacer * __thiscall
UVideoDeinterlacer::UVideoDeinterlacer(UVideoDeinterlacer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UVideoDeinterlacer__6B_;
  return this;
}

// UVideoDeinterlacer @ 14d78ba70

UVideoDeinterlacer * __thiscall
UVideoDeinterlacer::UVideoDeinterlacer(UVideoDeinterlacer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UVideoDeinterlacer__6B_;
  return this;
}

// ~UVideoDeinterlacer @ 14d78d3e0

void __thiscall UVideoDeinterlacer::~UVideoDeinterlacer(UVideoDeinterlacer *this)

{
  *(undefined ***)this = &___7UVideoDeinterlacer__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d7ad470

UClass * __cdecl UVideoDeinterlacer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVideoDeinterlacer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"VideoDeinterlacer",
               &Z_Registration_Info_UClass_UVideoDeinterlacer.InnerSingleton,
               StaticRegisterNativesUVideoDeinterlacer,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UVideoDeinterlacer>,
               InternalVTableHelperCtorCaller<UVideoDeinterlacer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVideoDeinterlacer.InnerSingleton;
}

// Instantiate @ 14d7b14c0

TSharedPtr<UE::MediaIOCore::FDeinterlacer,1> * __thiscall
UVideoDeinterlacer::Instantiate
          (UVideoDeinterlacer *this,
          TSharedPtr<UE::MediaIOCore::FDeinterlacer,1> *__return_storage_ptr__,
          TDelegate<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy>
          *param_1,EMediaIOInterlaceFieldOrder param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Public\\MediaIOCoreDeinterlacer.h"
             ,0x83,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->Object = (FDeinterlacer *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUVideoDeinterlacer @ 14d7be500

void __cdecl UVideoDeinterlacer::StaticRegisterNativesUVideoDeinterlacer(void)

{
  return;
}

