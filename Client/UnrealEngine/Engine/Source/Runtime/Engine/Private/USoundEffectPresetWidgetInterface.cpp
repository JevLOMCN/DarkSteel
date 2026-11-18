// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14732d590

UClass * __cdecl USoundEffectPresetWidgetInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundEffectPresetWidgetInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundEffectPresetWidgetInterface",
               &Z_Registration_Info_UClass_USoundEffectPresetWidgetInterface.InnerSingleton,
               StaticRegisterNativesUSoundEffectPresetWidgetInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundEffectPresetWidgetInterface>,
               InternalVTableHelperCtorCaller<USoundEffectPresetWidgetInterface>,local_res8,
               UAudioPanelWidgetInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundEffectPresetWidgetInterface.InnerSingleton;
}

// USoundEffectPresetWidgetInterface @ 147330f80

USoundEffectPresetWidgetInterface * __thiscall
USoundEffectPresetWidgetInterface::USoundEffectPresetWidgetInterface
          (USoundEffectPresetWidgetInterface *this,FVTableHelper *param_1)

{
  UAudioPanelWidgetInterface::UAudioPanelWidgetInterface((UAudioPanelWidgetInterface *)this,param_1)
  ;
  *(undefined ***)this = &___7USoundEffectPresetWidgetInterface__6B_;
  return this;
}

// USoundEffectPresetWidgetInterface @ 147330fb0

USoundEffectPresetWidgetInterface * __thiscall
USoundEffectPresetWidgetInterface::USoundEffectPresetWidgetInterface
          (USoundEffectPresetWidgetInterface *this,FObjectInitializer *param_1)

{
  UAudioPanelWidgetInterface::UAudioPanelWidgetInterface((UAudioPanelWidgetInterface *)this,param_1)
  ;
  *(undefined ***)this = &___7USoundEffectPresetWidgetInterface__6B_;
  return this;
}

// ~USoundEffectPresetWidgetInterface @ 147331420

void __thiscall
USoundEffectPresetWidgetInterface::~USoundEffectPresetWidgetInterface
          (USoundEffectPresetWidgetInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1473329e0

UClass * __cdecl USoundEffectPresetWidgetInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundEffectPresetWidgetInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundEffectPresetWidgetInterface",
               &Z_Registration_Info_UClass_USoundEffectPresetWidgetInterface.InnerSingleton,
               StaticRegisterNativesUSoundEffectPresetWidgetInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundEffectPresetWidgetInterface>,
               InternalVTableHelperCtorCaller<USoundEffectPresetWidgetInterface>,local_res8,
               UAudioPanelWidgetInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundEffectPresetWidgetInterface.InnerSingleton;
}

// StaticRegisterNativesUSoundEffectPresetWidgetInterface @ 147333420

void __cdecl
USoundEffectPresetWidgetInterface::StaticRegisterNativesUSoundEffectPresetWidgetInterface(void)

{
  return;
}

