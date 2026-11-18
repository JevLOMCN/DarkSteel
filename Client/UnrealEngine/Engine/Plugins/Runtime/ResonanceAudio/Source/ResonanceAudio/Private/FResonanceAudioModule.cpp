// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 8

// FResonanceAudioModule @ 14f043d60

FResonanceAudioModule * __thiscall
ResonanceAudio::FResonanceAudioModule::FResonanceAudioModule(FResonanceAudioModule *this)

{
  this->_padding_ = (longlong)&___7FResonanceAudioModule_ResonanceAudio__6B_;
  (this->RegisteredAudioDevices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SpatializationPluginFactory =
       (FSpatializationPluginFactory)&___7FSpatializationPluginFactory_ResonanceAudio__6B_;
  this->ReverbPluginFactory = (FReverbPluginFactory)&___7FReverbPluginFactory_ResonanceAudio__6B_;
  (this->RegisteredAudioDevices).ArrayNum = 0;
  (this->RegisteredAudioDevices).ArrayMax = 0;
  (this->AmbisonicsFactory)._padding_ = (longlong)&___7FAmbisonicsFactory_ResonanceAudio__6B_;
  *(undefined8 *)&(this->AmbisonicsFactory).ResonanceAudioAPIMap = 0;
  *(undefined8 *)&(this->AmbisonicsFactory).ResonanceAudioAPIMap.field_0x8 = 0;
  *(undefined8 *)&(this->AmbisonicsFactory).ResonanceAudioAPIMap.field_0x20 = 0;
  *(undefined4 *)&(this->AmbisonicsFactory).ResonanceAudioAPIMap.field_0x28 = 0;
  *(undefined4 *)&(this->AmbisonicsFactory).ResonanceAudioAPIMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->AmbisonicsFactory).ResonanceAudioAPIMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AmbisonicsFactory).ResonanceAudioAPIMap.field_0x34 = 0;
  *(undefined8 *)&(this->AmbisonicsFactory).ResonanceAudioAPIMap.field_0x40 = 0;
  *(undefined4 *)&(this->AmbisonicsFactory).ResonanceAudioAPIMap.field_0x48 = 0;
  ISoundfieldFactory::RegisterSoundfieldFormat((ISoundfieldFactory *)&this->AmbisonicsFactory);
  return this;
}

// ~FResonanceAudioModule @ 14f044940

void __thiscall
ResonanceAudio::FResonanceAudioModule::~FResonanceAudioModule(FResonanceAudioModule *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FResonanceAudioModule_ResonanceAudio__6B_;
  (this->AmbisonicsFactory)._padding_ = (longlong)&___7FAmbisonicsFactory_ResonanceAudio__6B_;
  ISoundfieldFactory::UnregisterSoundfieldFormat((ISoundfieldFactory *)&this->AmbisonicsFactory);
  *(undefined4 *)&(this->AmbisonicsFactory).ResonanceAudioAPIMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->AmbisonicsFactory).ResonanceAudioAPIMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<vraudio::ResonanceAudioApi,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<vraudio::ResonanceAudioApi,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<vraudio::ResonanceAudioApi,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->AmbisonicsFactory).ResonanceAudioAPIMap);
  (this->AmbisonicsFactory)._padding_ = (longlong)&___7ISoundfieldFactory__6B_;
  this->ReverbPluginFactory = (FReverbPluginFactory)&___7IAudioReverbFactory__6B_;
  this->SpatializationPluginFactory =
       (FSpatializationPluginFactory)&___7IAudioSpatializationFactory__6B_;
  pFVar2 = (this->RegisteredAudioDevices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  return;
}

// GetGlobalSpatializationSourceSettings @ 14f048b50

UResonanceAudioSpatializationSourceSettings * __cdecl
ResonanceAudio::FResonanceAudioModule::GetGlobalSpatializationSourceSettings(void)

{
  return GlobalSpatializationSourceSettings;
}

// GetPluginFactory @ 14f048b80

IAudioPluginFactory * __thiscall
ResonanceAudio::FResonanceAudioModule::GetPluginFactory
          (FResonanceAudioModule *this,EAudioPlugin param_1)

{
  if (param_1 == SPATIALIZATION) {
    return (IAudioPluginFactory *)&this->SpatializationPluginFactory;
  }
  if (param_1 != REVERB) {
    return (IAudioPluginFactory *)0x0;
  }
  return (IAudioPluginFactory *)&this->ReverbPluginFactory;
}

// RegisterAudioDevice @ 14f04bf20

void __thiscall
ResonanceAudio::FResonanceAudioModule::RegisterAudioDevice
          (FResonanceAudioModule *this,FAudioDevice *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  int iVar6;
  IAudioPluginListener *pIVar7;
  FScriptContainerElement *pFVar8;
  FLLMScope local_res8 [2];
  FAudioDevice *local_res10;
  FName local_res18;
  FMemScope local_res20;
  TSharedPtr<IAudioPluginListener,1> local_38;
  
  local_res10 = param_1;
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_SpatializationPlugins.UniqueName,false,None,Default,
             true);
  local_res18 = LLMTagDeclaration_Audio_SpatializationPlugins.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  pFVar8 = (this->RegisteredAudioDevices).AllocatorInstance.Data;
  pFVar2 = pFVar8 + (longlong)(this->RegisteredAudioDevices).ArrayNum * 8;
  for (; pFVar8 != pFVar2; pFVar8 = pFVar8 + 8) {
    if (*(FAudioDevice **)pFVar8 == local_res10) goto LAB_14f04c0fb;
  }
  pIVar7 = ::operator_new(0x38);
  local_38.Object = (IAudioPluginListener *)0x0;
  if (pIVar7 != (IAudioPluginListener *)0x0) {
    pIVar7[1] = (IAudioPluginListener)0x0;
    *pIVar7 = (IAudioPluginListener)&___7FResonanceAudioPluginListener_ResonanceAudio__6B_;
    pIVar7[2] = (IAudioPluginListener)0x0;
    pIVar7[3] = (IAudioPluginListener)0x0;
    pIVar7[4] = (IAudioPluginListener)0x0;
    pIVar7[5] = (IAudioPluginListener)0x0;
    pIVar7[6] = (IAudioPluginListener)0x0;
    local_38.Object = pIVar7;
  }
  local_38.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_38.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_38.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_38.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFResonanceAudioPluginListener_ResonanceAudio__U__DefaultDeleter_VFResonanceAudioPluginListener_ResonanceAudio___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    local_38.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)local_38.Object;
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar4.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  FAudioDevice::RegisterPluginListener(local_res10,&local_38);
  pFVar2 = (this->RegisteredAudioDevices).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar2 + (longlong)(this->RegisteredAudioDevices).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (this->RegisteredAudioDevices).ArrayNum;
  piVar1 = &(this->RegisteredAudioDevices).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->RegisteredAudioDevices).AllocatorInstance,piVar1);
  }
  (this->RegisteredAudioDevices).ArrayNum = iVar6 + 1;
  *(FAudioDevice **)((this->RegisteredAudioDevices).AllocatorInstance.Data + (longlong)iVar6 * 8) =
       local_res10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
LAB_14f04c0fb:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ShutdownModule @ 14f04d020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ResonanceAudio::FResonanceAudioModule::ShutdownModule(FResonanceAudioModule *this)

{
  code *pcVar1;
  bool bVar2;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_Audio_SpatializationPlugins.UniqueName,false,None,Default
             ,true);
  local_res18 = LLMTagDeclaration_Audio_SpatializationPlugins.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  if (bModuleInitialized != true) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bModuleInitialized == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioModule.cpp"
                       ,0x42,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bModuleInitialized = false;
  if (4 < (byte)LogResonanceAudio._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// StartupModule @ 14f04d230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall ResonanceAudio::FResonanceAudioModule::StartupModule(FResonanceAudioModule *this)

{
  UObject *pUVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  IModularFeatures *pIVar5;
  UClass *pUVar6;
  FString *pFVar7;
  size_t sVar8;
  FName *pFVar9;
  UClass *pUVar10;
  UResonanceAudioSpatializationSourceSettings *pUVar11;
  FUObjectItem *this_00;
  longlong *plVar12;
  FAmbisonicsFactory *pFVar13;
  int iVar14;
  int *piVar15;
  undefined1 auStackY_198 [32];
  FLLMScope local_158;
  FName local_154;
  FMemScope local_148 [2];
  wchar_t *local_138;
  undefined8 uStack_130;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FSoftObjectPath local_118;
  FName local_f8 [2];
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  FString local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  FLLMScope::FLLMScope
            (&local_158,LLMTagDeclaration_Audio_SpatializationPlugins.UniqueName,false,None,Default,
             true);
  local_154 = LLMTagDeclaration_Audio_SpatializationPlugins.UniqueName;
  FMemScope::FMemScope(local_148,&local_154,true);
  if ((bModuleInitialized != false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bModuleInitialized == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioModule.cpp"
                         ,0x23,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bModuleInitialized = true;
  pIVar5 = IModularFeatures::Get();
  pcVar3 = *(code **)((longlong)*pIVar5 + 0x28);
  pFVar13 = (FAmbisonicsFactory *)&this->ReverbPluginFactory;
  if (this == (FResonanceAudioModule *)0xffffffffffffffe8) {
    pFVar13 = (FAmbisonicsFactory *)0x0;
  }
  piVar15 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar15 <
       `public:_static_class_FName___cdecl_IAudioSpatializationFactory::GetModularFeatureName(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_IAudioSpatializationFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_IAudioSpatializationFactory::GetModularFeatureName(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_IAudioSpatializationFactory::GetModularFeatureName(void)'
                    ::__l2::AudioExtFeatureName,L"AudioSpatializationPlugin");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_IAudioSpatializationFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  (*pcVar3)(pIVar5,`public:_static_class_FName___cdecl_IAudioSpatializationFactory::GetModularFeatureName(void)'
                   ::__l2::AudioExtFeatureName,pFVar13);
  pIVar5 = IModularFeatures::Get();
  pcVar3 = *(code **)((longlong)*pIVar5 + 0x28);
  pFVar13 = &this->AmbisonicsFactory;
  if (this == (FResonanceAudioModule *)0xffffffffffffffe0) {
    pFVar13 = (FAmbisonicsFactory *)0x0;
  }
  if ((*piVar15 <
       `public:_static_class_FName___cdecl_IAudioReverbFactory::GetModularFeatureName(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_IAudioReverbFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_IAudioReverbFactory::GetModularFeatureName(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_IAudioReverbFactory::GetModularFeatureName(void)'
                    ::__l2::AudioExtFeatureName,L"AudioReverbPlugin");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_IAudioReverbFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  (*pcVar3)(pIVar5,`public:_static_class_FName___cdecl_IAudioReverbFactory::GetModularFeatureName(void)'
                   ::__l2::AudioExtFeatureName,pFVar13);
  if (GlobalSpatializationSourceSettings != (UResonanceAudioSpatializationSourceSettings *)0x0)
  goto LAB_14f04d521;
  pUVar6 = UResonanceAudioSettings::StaticClass();
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  pUVar1 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
  local_118.AssetPath.PackageName.ComparisonIndex.Value = *(uint *)&pUVar1[2].field_0x20;
  local_118.AssetPath.PackageName.Number = *(uint *)&pUVar1[2].field_0x24;
  local_118.AssetPath.AssetName.ComparisonIndex.Value = *(uint *)&pUVar1[3].field_0x0;
  local_118.AssetPath.AssetName.Number = *(uint *)&pUVar1[3].field_0x4;
  FUtf8String::FUtf8String(&local_118.SubPathString,(FUtf8String *)&pUVar1[3].field_0x8);
  iVar14 = 0;
  if (local_118.AssetPath.PackageName != (FName)0x0) {
    uStack_130._0_4_ = 0;
    uStack_130._4_4_ = 0;
    local_138 = (wchar_t *)0x0;
    pFVar7 = FSoftObjectPath::ToString(&local_118,&local_c8);
    if ((pFVar7->Data).ArrayNum == 0) {
      local_128 = (FScriptContainerElement *)0x15060d16c;
LAB_14f04d3f5:
      sVar8 = wcslen((wchar_t *)local_128);
      iVar14 = (int)sVar8;
    }
    else {
      local_128 = (pFVar7->Data).AllocatorInstance.Data;
      if (local_128 != (FScriptContainerElement *)0x0) goto LAB_14f04d3f5;
    }
    iStack_120 = iVar14;
    pUVar6 = UResonanceAudioSpatializationSourceSettings::StaticClass();
    local_d8._12_4_ = uStack_11c;
    local_d8.Size = iStack_120;
    local_e8.DataPtr = local_138;
    local_e8.Size = (int)uStack_130;
    local_e8._12_4_ = uStack_130._4_4_;
    local_d8.DataPtr = (wchar_t *)local_128;
    GlobalSpatializationSourceSettings =
         (UResonanceAudioSpatializationSourceSettings *)
         StaticLoadObject(pUVar6,(UObject *)0x0,&local_d8,&local_e8,0,(UPackageMap *)0x0,true,
                          (FLinkerInstancingContext *)0x0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (GlobalSpatializationSourceSettings == (UResonanceAudioSpatializationSourceSettings *)0x0) {
    pFVar9 = ::FName::FName(local_f8,L"Default Global Resonance Spatialization Preset");
    FVar2 = *pFVar9;
    pUVar6 = UResonanceAudioSpatializationSourceSettings::StaticClass();
    if (FVar2 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar6,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar10 = UResonanceAudioSpatializationSourceSettings::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar10);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._24_4_ = RF_NoFlags;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = pUVar6;
    local_b8._16_8_ = FVar2;
    pUVar11 = (UResonanceAudioSpatializationSourceSettings *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar12 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    GlobalSpatializationSourceSettings = pUVar11;
    if (pUVar11 != (UResonanceAudioSpatializationSourceSettings *)0x0) goto LAB_14f04d4f7;
  }
  else {
LAB_14f04d4f7:
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,
                         *(int *)((longlong)&GlobalSpatializationSourceSettings->_padding_ + 4));
    FUObjectItem::SetRootFlags(this_00,RootSet);
  }
  if (local_118.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.SubPathString.Data.AllocatorInstance.Data);
  }
LAB_14f04d521:
  FMemScope::~FMemScope(local_148);
  FLLMScope::~FLLMScope(&local_158);
  return;
}

// UnregisterAudioDevice @ 14f04da20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ResonanceAudio::FResonanceAudioModule::UnregisterAudioDevice
          (FResonanceAudioModule *this,FAudioDevice *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAudioDevice *pFVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FLLMScope local_res8 [2];
  FAudioDevice *local_res10;
  FName local_res18;
  FMemScope local_res20;
  
  local_res10 = param_1;
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_SpatializationPlugins.UniqueName,false,None,Default,
             true);
  local_res18 = LLMTagDeclaration_Audio_SpatializationPlugins.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  pFVar2 = (this->RegisteredAudioDevices).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar2 + (longlong)(this->RegisteredAudioDevices).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->RegisteredAudioDevices).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->RegisteredAudioDevices).AllocatorInstance.Data;
    bVar4 = *(FAudioDevice **)pFVar2 != local_res10;
    lVar6 = 0;
    pFVar5 = local_res10;
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(FAudioDevice **)(pFVar2 + lVar6 * 8) != pFVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pFVar5 = local_res10;
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->RegisteredAudioDevices).ArrayNum = iVar9;
  }
  if (4 < (byte)LogResonanceAudio._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

