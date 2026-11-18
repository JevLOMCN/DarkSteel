// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 7

// StaticClass @ 14d813e80

UClass * __cdecl UAudioSynesthesiaNRTSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"AudioSynesthesiaNRTSettings",
               &Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettings.InnerSingleton,
               StaticRegisterNativesUAudioSynesthesiaNRTSettings,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioSynesthesiaNRTSettings>,
               InternalVTableHelperCtorCaller<UAudioSynesthesiaNRTSettings>,local_res8,
               UAudioAnalyzerNRTSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettings.InnerSingleton;
}

// UAudioSynesthesiaNRTSettings @ 14d81ad90

UAudioSynesthesiaNRTSettings * __thiscall
UAudioSynesthesiaNRTSettings::UAudioSynesthesiaNRTSettings
          (UAudioSynesthesiaNRTSettings *this,FVTableHelper *param_1)

{
  UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings((UAudioAnalyzerNRTSettings *)this,param_1);
  *(undefined ***)this = &___7UAudioSynesthesiaNRTSettings__6B_;
  return this;
}

// UAudioSynesthesiaNRTSettings @ 14d81adc0

UAudioSynesthesiaNRTSettings * __thiscall
UAudioSynesthesiaNRTSettings::UAudioSynesthesiaNRTSettings
          (UAudioSynesthesiaNRTSettings *this,FObjectInitializer *param_1)

{
  UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings((UAudioAnalyzerNRTSettings *)this,param_1);
  *(undefined ***)this = &___7UAudioSynesthesiaNRTSettings__6B_;
  return this;
}

// ~UAudioSynesthesiaNRTSettings @ 14d81c210

void __thiscall
UAudioSynesthesiaNRTSettings::~UAudioSynesthesiaNRTSettings(UAudioSynesthesiaNRTSettings *this)

{
  *(undefined ***)this = &___7UAudioSynesthesiaNRTSettings__6B_;
  UAudioAnalyzerNRTSettings::~UAudioAnalyzerNRTSettings((UAudioAnalyzerNRTSettings *)this);
  return;
}

// GetAssetActionSubmenus @ 14d821bf0

TArray<FText,TSizedDefaultAllocator<32>_> * __thiscall
UAudioSynesthesiaNRTSettings::GetAssetActionSubmenus(UAudioSynesthesiaNRTSettings *this)

{
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&local_18,L"AssetTypeActions",L"AssetTypeActions_AssetSoundAnalysisSubmenu",
                 L"Analysis");
      SubMenus.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      SubMenus.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,1,0,&SubMenus.AllocatorInstance,1,&SubMenus.ArrayMax);
      ConstructItems<FText,FText,int>(SubMenus.AllocatorInstance.Data,&local_18,1);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      atexit(`UAudioSynesthesiaNRTSettings::GetAssetActionSubmenus'::__l2::
             _dynamic_atexit_destructor_for__SubMenus__);
      _Init_thread_footer(&::_TSS0);
      return &SubMenus;
    }
  }
  return &SubMenus;
}

// GetPrivateStaticClass @ 14d8235e0

UClass * __cdecl UAudioSynesthesiaNRTSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"AudioSynesthesiaNRTSettings",
               &Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettings.InnerSingleton,
               StaticRegisterNativesUAudioSynesthesiaNRTSettings,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioSynesthesiaNRTSettings>,
               InternalVTableHelperCtorCaller<UAudioSynesthesiaNRTSettings>,local_res8,
               UAudioAnalyzerNRTSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettings.InnerSingleton;
}

// StaticRegisterNativesUAudioSynesthesiaNRTSettings @ 14d8271e0

void __cdecl UAudioSynesthesiaNRTSettings::StaticRegisterNativesUAudioSynesthesiaNRTSettings(void)

{
  return;
}

