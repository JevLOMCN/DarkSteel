// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 7

// CreateNewSpatializationPlugin @ 14f046b00

TSharedPtr<IAudioSpatialization,1> * __thiscall
ResonanceAudio::FSpatializationPluginFactory::CreateNewSpatializationPlugin
          (FSpatializationPluginFactory *this,
          TSharedPtr<IAudioSpatialization,1> *__return_storage_ptr__,FAudioDevice *param_1)

{
  FName *pFVar1;
  FResonanceAudioModule *this_00;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FLLMScope local_res10 [2];
  FName local_res20;
  FMemScope local_18 [2];
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_Audio_SpatializationPlugins.UniqueName,false,None,Default
             ,true);
  local_res20 = LLMTagDeclaration_Audio_SpatializationPlugins.UniqueName;
  FMemScope::FMemScope(local_18,&local_res20,true);
  pFVar1 = ::FName::FName(&local_res20,"ResonanceAudio");
  this_00 = FModuleManager::GetModuleChecked<ResonanceAudio::FResonanceAudioModule>(*pFVar1);
  if (this_00 != (FResonanceAudioModule *)0x0) {
    FResonanceAudioModule::RegisterAudioDevice(this_00,param_1);
  }
  pTVar2 = ::operator_new(0x40);
  pTVar3 = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = pTVar3;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2[1]._padding_ = 0;
    pTVar2->_padding_ = (longlong)&___7FResonanceAudioSpatialization_ResonanceAudio__6B_;
    pTVar2[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[2]._padding_ = 0;
    pTVar2[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[3]._padding_ = 0;
    pTVar2[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4 = pTVar2;
  }
  __return_storage_ptr__->Object = (IAudioSpatialization *)pTVar4;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFResonanceAudioSpatialization_ResonanceAudio__U__DefaultDeleter_VFResonanceAudioSpatialization_ResonanceAudio___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar4;
    pTVar3 = pTVar2;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res10);
  return __return_storage_ptr__;
}

// GetCustomSpatializationSettingsClass @ 14f0484e0

UClass * __thiscall
ResonanceAudio::FSpatializationPluginFactory::GetCustomSpatializationSettingsClass
          (FSpatializationPluginFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UResonanceAudioSpatializationSourceSettings.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ResonanceAudio",L"ResonanceAudioSpatializationSourceSettings",
               &Z_Registration_Info_UClass_UResonanceAudioSpatializationSourceSettings.
                InnerSingleton,
               UResonanceAudioSpatializationSourceSettings::
               StaticRegisterNativesUResonanceAudioSpatializationSourceSettings,0x50,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UResonanceAudioSpatializationSourceSettings>,
               InternalVTableHelperCtorCaller<UResonanceAudioSpatializationSourceSettings>,
               aFStackX_8,USpatializationPluginSourceSettingsBase::StaticClass,UObject::StaticClass)
    ;
  }
  return Z_Registration_Info_UClass_UResonanceAudioSpatializationSourceSettings.InnerSingleton;
}

// GetDisplayName @ 14f048650

FString * __thiscall
ResonanceAudio::FSpatializationPluginFactory::GetDisplayName
          (FSpatializationPluginFactory *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_FString___cdecl_ResonanceAudio::FSpatializationPluginFactory::GetDisplayName(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_FString___cdecl_ResonanceAudio::FSpatializationPluginFactory::GetDisplayName(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_FString___cdecl_ResonanceAudio::FSpatializationPluginFactory::GetDisplayName(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_virtual_class_FString___cdecl_ResonanceAudio::FSpatializationPluginFactory::GetDisplayName(void)___ptr64'
                          ::__l2::DisplayName,L"Resonance Audio");
      atexit(`ResonanceAudio::FSpatializationPluginFactory::GetDisplayName'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`public:_virtual_class_FString___cdecl_ResonanceAudio::FSpatializationPluginFactory::GetDisplayName(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = `public:_virtual_class_FString___cdecl_ResonanceAudio::FSpatializationPluginFactory::GetDisplayName(void)___ptr64'
          ::__l2::DisplayName.Data.ArrayNum;
  _Src = `public:_virtual_class_FString___cdecl_ResonanceAudio::FSpatializationPluginFactory::GetDisplayName(void)___ptr64'
         ::__l2::DisplayName.Data.AllocatorInstance;
  lVar3 = (longlong)
          `public:_virtual_class_FString___cdecl_ResonanceAudio::FSpatializationPluginFactory::GetDisplayName(void)___ptr64'
          ::__l2::DisplayName.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum =
       `public:_virtual_class_FString___cdecl_ResonanceAudio::FSpatializationPluginFactory::GetDisplayName(void)___ptr64'
       ::__l2::DisplayName.Data.ArrayNum;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar3 * 2);
  return __return_storage_ptr__;
}

// GetMaxSupportedChannels @ 14f048b60

int __thiscall
ResonanceAudio::FSpatializationPluginFactory::GetMaxSupportedChannels
          (FSpatializationPluginFactory *this)

{
  return 2;
}

// IsExternalSend @ 14f049b10

bool __thiscall
ResonanceAudio::FSpatializationPluginFactory::IsExternalSend(FSpatializationPluginFactory *this)

{
  return true;
}

// ReturnsToSubmixGraph @ 14f04c700

bool __thiscall
ResonanceAudio::FSpatializationPluginFactory::ReturnsToSubmixGraph
          (FSpatializationPluginFactory *this)

{
  return true;
}

// SupportsPlatform @ 14f04d6f0

bool __thiscall
ResonanceAudio::FSpatializationPluginFactory::SupportsPlatform
          (FSpatializationPluginFactory *this,FString *param_1)

{
  return true;
}

