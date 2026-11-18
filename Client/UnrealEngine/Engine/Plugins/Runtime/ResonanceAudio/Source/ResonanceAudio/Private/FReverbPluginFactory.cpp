// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 5

// CreateNewReverbPlugin @ 14f046890

TSharedPtr<IAudioReverb,1> * __thiscall
ResonanceAudio::FReverbPluginFactory::CreateNewReverbPlugin
          (FReverbPluginFactory *this,TSharedPtr<IAudioReverb,1> *__return_storage_ptr__,
          FAudioDevice *param_1)

{
  undefined8 uVar1;
  double dVar2;
  FName *pFVar3;
  FResonanceAudioModule *this_00;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FLLMScope local_res10 [2];
  FName local_res20;
  FMemScope local_18 [2];
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_Audio_SpatializationPlugins.UniqueName,false,None,Default
             ,true);
  local_res20 = LLMTagDeclaration_Audio_SpatializationPlugins.UniqueName;
  FMemScope::FMemScope(local_18,&local_res20,true);
  pFVar3 = ::FName::FName(&local_res20,"ResonanceAudio");
  this_00 = FModuleManager::GetModuleChecked<ResonanceAudio::FResonanceAudioModule>(*pFVar3);
  if (this_00 != (FResonanceAudioModule *)0x0) {
    FResonanceAudioModule::RegisterAudioDevice(this_00,param_1);
  }
  pTVar4 = ::operator_new(0x180);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = pTVar5;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    *(undefined2 *)&pTVar4[1]._padding_ = 0;
    pTVar4->_padding_ = (longlong)&___7FResonanceAudioReverb_ResonanceAudio__6B_;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&pTVar4[1].SharedReferenceCount =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    pTVar4[2]._padding_ = uVar1;
    *(double *)&pTVar4[2].SharedReferenceCount =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar2 = UE::Math::TQuat<double>::Identity.Y;
    pTVar4[3]._padding_ = (longlong)UE::Math::TQuat<double>::Identity.X;
    *(double *)&pTVar4[3].SharedReferenceCount = dVar2;
    dVar2 = UE::Math::TQuat<double>::Identity.W;
    pTVar4[4]._padding_ = (longlong)UE::Math::TQuat<double>::Identity.Z;
    *(double *)&pTVar4[4].SharedReferenceCount = dVar2;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pTVar4[5]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&pTVar4[5].SharedReferenceCount = uVar1;
    pTVar4[6]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    pTVar4[6].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined2 *)&pTVar4[6].WeakReferenceCount = 0;
    *(undefined4 *)&pTVar4[7]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&pTVar4[7]._padding_ + 4) = 0x3f800000;
    pTVar4[7].SharedReferenceCount = (atomic<int>)0x3f800000;
    pTVar4[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[8]._padding_ = 0;
    pTVar4[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[9]._padding_ = 0;
    pTVar4[9].SharedReferenceCount = (atomic<int>)0x3f800000;
    pTVar4[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[10]._padding_ = 0;
    pTVar4[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0xb]._padding_ = 0;
    pTVar4[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0xb].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar4[0xc]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&pTVar4[0xc]._padding_ + 4) = 0x3f800000;
    pTVar4[0xc].SharedReferenceCount = (atomic<int>)0x3f800000;
    pTVar4[0xc].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0xd]._padding_ = 0;
    pTVar4[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0xe]._padding_ = 0;
    pTVar4[0xe].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0xe].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0xf]._padding_ = 0;
    pTVar4[0xf].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0xf].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x10]._padding_ = 0;
    pTVar4[0x10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x11]._padding_ = 0x3f800000;
    pTVar4[0x11].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x11].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x12]._padding_ = 0;
    pTVar4[0x12].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x12].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x13]._padding_ = 0;
    pTVar4[0x13].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x13].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x14]._padding_ = 0;
    pTVar4[0x14].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x14].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x15]._padding_ = 0;
    pTVar4[0x15].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x15].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x16]._padding_ = 0;
    pTVar4[0x16].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x16].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x17]._padding_ = 0;
    pTVar4[0x17].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x17].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6 = pTVar4;
  }
  __return_storage_ptr__->Object = (IAudioReverb *)pTVar6;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFResonanceAudioReverb_ResonanceAudio__U__DefaultDeleter_VFResonanceAudioReverb_ResonanceAudio___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar6;
    pTVar5 = pTVar4;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res10);
  return __return_storage_ptr__;
}

// GetDisplayName @ 14f048550

FString * __thiscall
ResonanceAudio::FReverbPluginFactory::GetDisplayName
          (FReverbPluginFactory *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_FString___cdecl_ResonanceAudio::FReverbPluginFactory::GetDisplayName(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_FString___cdecl_ResonanceAudio::FReverbPluginFactory::GetDisplayName(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_FString___cdecl_ResonanceAudio::FReverbPluginFactory::GetDisplayName(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_virtual_class_FString___cdecl_ResonanceAudio::FReverbPluginFactory::GetDisplayName(void)___ptr64'
                          ::__l2::DisplayName,L"Resonance Audio");
      atexit(`ResonanceAudio::FReverbPluginFactory::GetDisplayName'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`public:_virtual_class_FString___cdecl_ResonanceAudio::FReverbPluginFactory::GetDisplayName(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = `public:_virtual_class_FString___cdecl_ResonanceAudio::FReverbPluginFactory::GetDisplayName(void)___ptr64'
          ::__l2::DisplayName.Data.ArrayNum;
  _Src = `public:_virtual_class_FString___cdecl_ResonanceAudio::FReverbPluginFactory::GetDisplayName(void)___ptr64'
         ::__l2::DisplayName.Data.AllocatorInstance;
  lVar3 = (longlong)
          `public:_virtual_class_FString___cdecl_ResonanceAudio::FReverbPluginFactory::GetDisplayName(void)___ptr64'
          ::__l2::DisplayName.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum =
       `public:_virtual_class_FString___cdecl_ResonanceAudio::FReverbPluginFactory::GetDisplayName(void)___ptr64'
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

// IsExternalSend @ 14f049b00

bool __thiscall ResonanceAudio::FReverbPluginFactory::IsExternalSend(FReverbPluginFactory *this)

{
  return true;
}

// ReturnsToSubmixGraph @ 14f04c6f0

bool __thiscall
ResonanceAudio::FReverbPluginFactory::ReturnsToSubmixGraph(FReverbPluginFactory *this)

{
  return true;
}

// SupportsPlatform @ 14f04d6e0

bool __thiscall
ResonanceAudio::FReverbPluginFactory::SupportsPlatform(FReverbPluginFactory *this,FString *param_1)

{
  return true;
}

