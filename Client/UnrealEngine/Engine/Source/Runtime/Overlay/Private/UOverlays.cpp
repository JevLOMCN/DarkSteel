// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Overlay
// Functions: 8

// StaticClass @ 148bba2e0

UClass * __cdecl UOverlays::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOverlays.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Overlay",L"Overlays",&Z_Registration_Info_UClass_UOverlays.InnerSingleton,
               StaticRegisterNativesUOverlays,0x28,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<UOverlays>,InternalVTableHelperCtorCaller<UOverlays>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOverlays.InnerSingleton;
}

// UOverlays @ 148bbad50

UOverlays * __thiscall UOverlays::UOverlays(UOverlays *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UOverlays__6B_;
  return this;
}

// UOverlays @ 148bbad80

UOverlays * __thiscall UOverlays::UOverlays(UOverlays *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UOverlays__6B_;
  return this;
}

// ~UOverlays @ 148bbaf60

void __thiscall UOverlays::~UOverlays(UOverlays *this)

{
  *(undefined ***)this = &___7UOverlays__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetAllOverlays @ 148bbb430

TArray<FOverlayItem,TSizedDefaultAllocator<32>_> * __thiscall
UOverlays::GetAllOverlays
          (UOverlays *this,TArray<FOverlayItem,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Overlay\\Public\\Overlays.h",
             0x39,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetOverlaysForTime @ 148bbb870

void __thiscall
UOverlays::GetOverlaysForTime
          (UOverlays *this,FTimespan *param_1,
          TArray<FOverlayItem,TSizedDefaultAllocator<32>_> *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Overlay\\Public\\Overlays.h",
             0x41,L"Pure virtual not implemented (%s)");
  return;
}

// GetPrivateStaticClass @ 148bbba20

UClass * __cdecl UOverlays::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOverlays.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Overlay",L"Overlays",&Z_Registration_Info_UClass_UOverlays.InnerSingleton,
               StaticRegisterNativesUOverlays,0x28,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<UOverlays>,InternalVTableHelperCtorCaller<UOverlays>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOverlays.InnerSingleton;
}

// StaticRegisterNativesUOverlays @ 148bbc5c0

void __cdecl UOverlays::StaticRegisterNativesUOverlays(void)

{
  return;
}

