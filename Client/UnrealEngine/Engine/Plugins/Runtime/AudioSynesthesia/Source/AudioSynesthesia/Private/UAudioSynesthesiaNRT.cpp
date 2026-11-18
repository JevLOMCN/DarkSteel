// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 7

// StaticClass @ 14d813f40

UClass * __cdecl UAudioSynesthesiaNRT::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioSynesthesiaNRT.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"AudioSynesthesiaNRT",
               &Z_Registration_Info_UClass_UAudioSynesthesiaNRT.InnerSingleton,
               StaticRegisterNativesUAudioSynesthesiaNRT,0x78,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioSynesthesiaNRT>,
               InternalVTableHelperCtorCaller<UAudioSynesthesiaNRT>,local_res8,
               UAudioAnalyzerNRT::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioSynesthesiaNRT.InnerSingleton;
}

// UAudioSynesthesiaNRT @ 14d81ad30

UAudioSynesthesiaNRT * __thiscall
UAudioSynesthesiaNRT::UAudioSynesthesiaNRT(UAudioSynesthesiaNRT *this,FVTableHelper *param_1)

{
  UAudioAnalyzerNRT::UAudioAnalyzerNRT((UAudioAnalyzerNRT *)this,param_1);
  *(undefined ***)this = &___7UAudioSynesthesiaNRT__6B_;
  return this;
}

// UAudioSynesthesiaNRT @ 14d81ad60

UAudioSynesthesiaNRT * __thiscall
UAudioSynesthesiaNRT::UAudioSynesthesiaNRT(UAudioSynesthesiaNRT *this,FObjectInitializer *param_1)

{
  UAudioAnalyzerNRT::UAudioAnalyzerNRT((UAudioAnalyzerNRT *)this,param_1);
  *(undefined ***)this = &___7UAudioSynesthesiaNRT__6B_;
  return this;
}

// ~UAudioSynesthesiaNRT @ 14d81c1f0

void __thiscall UAudioSynesthesiaNRT::~UAudioSynesthesiaNRT(UAudioSynesthesiaNRT *this)

{
  *(undefined ***)this = &___7UAudioSynesthesiaNRT__6B_;
  UAudioAnalyzerNRT::~UAudioAnalyzerNRT((UAudioAnalyzerNRT *)this);
  return;
}

// GetAssetActionSubmenus @ 14d821ae0

TArray<FText,TSizedDefaultAllocator<32>_> * __thiscall
UAudioSynesthesiaNRT::GetAssetActionSubmenus(UAudioSynesthesiaNRT *this)

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
      atexit(`UAudioSynesthesiaNRT::GetAssetActionSubmenus'::__l2::
             _dynamic_atexit_destructor_for__SubMenus__);
      _Init_thread_footer(&::_TSS0);
      return &SubMenus;
    }
  }
  return &SubMenus;
}

// GetPrivateStaticClass @ 14d823520

UClass * __cdecl UAudioSynesthesiaNRT::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioSynesthesiaNRT.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"AudioSynesthesiaNRT",
               &Z_Registration_Info_UClass_UAudioSynesthesiaNRT.InnerSingleton,
               StaticRegisterNativesUAudioSynesthesiaNRT,0x78,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioSynesthesiaNRT>,
               InternalVTableHelperCtorCaller<UAudioSynesthesiaNRT>,local_res8,
               UAudioAnalyzerNRT::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioSynesthesiaNRT.InnerSingleton;
}

// StaticRegisterNativesUAudioSynesthesiaNRT @ 14d8271d0

void __cdecl UAudioSynesthesiaNRT::StaticRegisterNativesUAudioSynesthesiaNRT(void)

{
  return;
}

