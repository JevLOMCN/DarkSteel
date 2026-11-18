// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 10

// FResonanceAudioPluginListener @ 14f043de0

FResonanceAudioPluginListener * __thiscall
ResonanceAudio::FResonanceAudioPluginListener::FResonanceAudioPluginListener
          (FResonanceAudioPluginListener *this)

{
  this->_padding_ = (longlong)&___7FResonanceAudioPluginListener_ResonanceAudio__6B_;
  (this->ResonanceAudioApi).Object = (ResonanceAudioApi *)0x0;
  (this->ResonanceAudioApi).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->OwningAudioDevice = (FAudioDevice *)0x0;
  this->ResonanceAudioModule = (FResonanceAudioModule *)0x0;
  this->ReverbPtr = (FResonanceAudioReverb *)0x0;
  this->SpatializationPtr = (FResonanceAudioSpatialization *)0x0;
  return this;
}

// ~FResonanceAudioPluginListener @ 14f0449e0

void __thiscall
ResonanceAudio::FResonanceAudioPluginListener::~FResonanceAudioPluginListener
          (FResonanceAudioPluginListener *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAudioDevice *local_res8 [4];
  
  this->_padding_ = (longlong)&___7FResonanceAudioPluginListener_ResonanceAudio__6B_;
  if ((this->ResonanceAudioApi).Object != (ResonanceAudioApi *)0x0) {
    if (this->OwningAudioDevice == (FAudioDevice *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwningAudioDevice",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioPluginListener.cpp"
                         ,0x27,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&ResonanceApiMapCriticalSection);
    local_res8[0] = this->OwningAudioDevice;
    if (ResonanceApiMap._8_4_ != ResonanceApiMap._52_4_) {
      uVar3 = ((uint)((ulonglong)local_res8[0] >> 0x14) & 0xffff ^
              (uint)((ulonglong)local_res8[0] >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      TSet<TTuple<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>_>,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FAudioDevice_const_*>
                ((TSet<TTuple<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>_>,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>,FDefaultSetAllocator>
                  *)&ResonanceApiMap,uVar3 >> 0x10 ^ uVar3,local_res8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&ResonanceApiMapCriticalSection);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ResonanceAudioApi).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IAudioPluginListener__6B_;
  return;
}

// GetResonanceAPIForAudioDevice @ 14f049130

TSharedPtr<vraudio::ResonanceAudioApi,1> * __cdecl
ResonanceAudio::FResonanceAudioPluginListener::GetResonanceAPIForAudioDevice
          (TSharedPtr<vraudio::ResonanceAudioApi,1> *__return_storage_ptr__,FAudioDevice *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<vraudio::ResonanceAudioApi,1> *pTVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&ResonanceApiMapCriticalSection);
  if ((param_1 == (FAudioDevice *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAudioDevice",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioPluginListener.cpp"
                         ,0xa7,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TSharedPtr<vraudio::ResonanceAudioApi,1> *)(*pcVar3)();
    return pTVar5;
  }
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (ResonanceApiMap._8_4_ != ResonanceApiMap._52_4_) {
    lVar8 = 0x154dd7868;
    if (ResonanceApiMap._64_8_ != 0) {
      lVar8 = ResonanceApiMap._64_8_;
    }
    iVar1 = *(int *)(lVar8 + (ulonglong)(ResonanceApiMap._72_4_ - 1 & (uVar6 >> 0x10 ^ uVar6)) * 4);
    while (iVar1 != -1) {
      plVar7 = (longlong *)((longlong)iVar1 * 0x20 + ResonanceApiMap._0_8_);
      if ((FAudioDevice *)*plVar7 == param_1) {
        plVar9 = plVar7 + 1;
        if (plVar7 == (longlong *)0x0) {
          plVar9 = (longlong *)0x0;
        }
        if (plVar9 != (longlong *)0x0) {
          __return_storage_ptr__->Object = (ResonanceAudioApi *)*plVar9;
          pTVar2 = (TReferenceControllerBase<1> *)plVar9[1];
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          goto LAB_14f04920e;
        }
        break;
      }
      iVar1 = (int)plVar7[3];
    }
  }
  __return_storage_ptr__->Object = (ResonanceAudioApi *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14f04920e:
  LeaveCriticalSection((LPCRITICAL_SECTION)&ResonanceApiMapCriticalSection);
  return __return_storage_ptr__;
}

// OnListenerInitialize @ 14f04ab10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ResonanceAudio::FResonanceAudioPluginListener::OnListenerInitialize
          (FResonanceAudioPluginListener *this,FAudioDevice *param_1,UWorld *param_2)

{
  TSharedPtr<vraudio::ResonanceAudioApi,1> *pTVar1;
  FResonanceAudioReverb *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  FResonanceAudioModule *pFVar8;
  ResonanceAudioApi *pRVar9;
  TReferenceControllerBase<1> *pTVar10;
  FAudioSpatializationInterfaceInfo *pFVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  TReferenceControllerBase<1> *pTVar15;
  bool bVar16;
  bool bVar17;
  FName local_res8;
  FAudioDevice *local_res10;
  TSharedPtr<vraudio::ResonanceAudioApi,1> local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FAudioSpatializationInterfaceInfo local_58;
  
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  local_res10 = param_1;
  if (this->ResonanceAudioModule == (FResonanceAudioModule *)0x0) {
    pFVar7 = ::FName::FName(&local_res8,"ResonanceAudio");
    pFVar8 = FModuleManager::GetModuleChecked<ResonanceAudio::FResonanceAudioModule>(*pFVar7);
    this->ResonanceAudioModule = pFVar8;
  }
  pRVar9 = ::CreateResonanceAudioApi
                     (2,(longlong)(local_res10->PlatformSettings).CallbackBufferFrameSize,
                      (int)(float)local_res10->SampleRate);
  local_c8.Object = pRVar9;
  pTVar10 = ::operator_new(0x18);
  local_c8.SharedReferenceCount.ReferenceController = pTVar15;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VResonanceAudioApi_vraudio__U__DefaultDeleter_VResonanceAudioApi_vraudio___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10[1]._padding_ = (longlong)pRVar9;
    local_c8.SharedReferenceCount.ReferenceController = pTVar10;
  }
  pTVar1 = &this->ResonanceAudioApi;
  if (pTVar1 != &local_c8) {
    pTVar1->Object = pRVar9;
    local_c8.Object = (ResonanceAudioApi *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ResonanceAudioApi).SharedReferenceCount,&local_c8.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  if (pTVar1->Object == (ResonanceAudioApi *)0x0) {
    if ((byte)LogResonanceAudio._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&ResonanceApiMapCriticalSection);
  if ((local_res10 == (FAudioDevice *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioDevice",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioPluginListener.cpp"
                         ,0x45,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar12 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
           -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  uVar12 = uVar12 >> 0x10 ^ uVar12;
  if (ResonanceApiMap._8_4_ != ResonanceApiMap._52_4_) {
    lVar14 = 0x154dd7868;
    if (ResonanceApiMap._64_8_ != 0) {
      lVar14 = ResonanceApiMap._64_8_;
    }
    iVar6 = *(int *)(lVar14 + (ulonglong)(ResonanceApiMap._72_4_ - 1 & uVar12) * 4);
    while (iVar6 != -1) {
      plVar13 = (longlong *)((longlong)iVar6 * 0x20 + ResonanceApiMap._0_8_);
      if ((FAudioDevice *)*plVar13 == local_res10) {
        if (plVar13 != (longlong *)0x0) goto LAB_14f04ad18;
        break;
      }
      iVar6 = (int)plVar13[3];
    }
  }
  TMapBase<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>_>
  ::EmplaceByHash<FAudioDevice_const_*_const_&,TSharedPtr<vraudio::ResonanceAudioApi,1>_const_&>
            ((TMapBase<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>_>
              *)&ResonanceApiMap,uVar12,&local_res10,pTVar1);
LAB_14f04ad18:
  this->OwningAudioDevice = local_res10;
  LeaveCriticalSection((LPCRITICAL_SECTION)&ResonanceApiMapCriticalSection);
  AudioPluginUtilities::GetDesiredPluginName(&local_a8,SPATIALIZATION);
  AudioPluginUtilities::GetDesiredPluginName(&local_b8,REVERB);
  pFVar2 = (FResonanceAudioReverb *)(local_res10->ReverbPluginInterface).Object;
  pFVar11 = FAudioDevice::GetCurrentSpatializationPluginInterfaceInfo(local_res10,&local_58);
  FVar3 = (FName)(pFVar11->SpatializationPlugin).Object;
  pTVar10 = (pFVar11->SpatializationPlugin).SharedReferenceCount.ReferenceController;
  (pFVar11->SpatializationPlugin).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (pFVar11->SpatializationPlugin).Object = (IAudioSpatialization *)0x0;
  local_res8 = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SpatializationPlugin.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (pFVar2 == (FResonanceAudioReverb *)0x0) {
LAB_14f04add1:
    bVar5 = false;
  }
  else {
    ::FString::FString(&local_88,"Resonance Audio");
    if (local_b8.Data.ArrayNum == local_88.Data.ArrayNum) {
      if (1 < local_b8.Data.ArrayNum) {
        iVar6 = wcscmp((wchar_t *)local_b8.Data.AllocatorInstance.Data,
                       (wchar_t *)local_88.Data.AllocatorInstance.Data);
        bVar5 = iVar6 == 0;
        goto LAB_14f04adb7;
      }
    }
    else {
      bVar5 = local_b8.Data.ArrayNum + local_88.Data.ArrayNum == 1;
LAB_14f04adb7:
      pTVar15 = (TReferenceControllerBase<1> *)&DAT_00000001;
      if (!bVar5) goto LAB_14f04add1;
    }
    bVar5 = true;
    pTVar15 = (TReferenceControllerBase<1> *)&DAT_00000001;
  }
  if ((pTVar15 != (TReferenceControllerBase<1> *)0x0) &&
     (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  bVar17 = false;
  if (FVar3 == (FName)0x0) {
LAB_14f04ae3c:
    bVar16 = false;
  }
  else {
    ::FString::FString(&local_78,"Resonance Audio");
    bVar17 = true;
    if (local_a8.Data.ArrayNum == local_78.Data.ArrayNum) {
      if (1 < local_a8.Data.ArrayNum) {
        iVar6 = wcscmp((wchar_t *)local_a8.Data.AllocatorInstance.Data,
                       (wchar_t *)local_78.Data.AllocatorInstance.Data);
        bVar16 = iVar6 == 0;
        goto LAB_14f04ae2c;
      }
    }
    else {
      bVar16 = local_a8.Data.ArrayNum + local_78.Data.ArrayNum == 1;
LAB_14f04ae2c:
      if (!bVar16) goto LAB_14f04ae3c;
    }
    bVar16 = true;
  }
  if ((bVar17) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (bVar16)) {
    this->SpatializationPtr = (FResonanceAudioSpatialization *)local_res8;
    pRVar9 = pTVar1->Object;
    this->ReverbPtr = pFVar2;
    pFVar2->ResonanceAudioApi = pRVar9;
    this->SpatializationPtr->ResonanceAudioApi = pTVar1->Object;
    if (3 < (byte)LogResonanceAudio._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
    }
    goto LAB_14f04af80;
  }
  ::FString::FString(&local_68,"Resonance Audio");
  bVar5 = false;
  if (local_b8.Data.ArrayNum == local_68.Data.ArrayNum) {
    if (1 < local_b8.Data.ArrayNum) {
      iVar6 = wcscmp((wchar_t *)local_b8.Data.AllocatorInstance.Data,
                     (wchar_t *)local_68.Data.AllocatorInstance.Data);
      bVar17 = iVar6 == 0;
      goto LAB_14f04aee7;
    }
LAB_14f04af3b:
    bVar17 = true;
  }
  else {
    bVar17 = local_b8.Data.ArrayNum + local_68.Data.ArrayNum == 1;
LAB_14f04aee7:
    if (bVar17) goto LAB_14f04af3b;
    ::FString::FString(&local_98,"Resonance Audio");
    bVar5 = true;
    if (local_a8.Data.ArrayNum == local_98.Data.ArrayNum) {
      if (local_a8.Data.ArrayNum < 2) goto LAB_14f04af3b;
      iVar6 = wcscmp((wchar_t *)local_a8.Data.AllocatorInstance.Data,
                     (wchar_t *)local_98.Data.AllocatorInstance.Data);
      bVar17 = iVar6 == 0;
    }
    else {
      bVar17 = local_a8.Data.ArrayNum + local_98.Data.ArrayNum == 1;
    }
    if (bVar17) goto LAB_14f04af3b;
    bVar17 = false;
  }
  if ((bVar5) && (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((bVar17) && (1 < (byte)LogResonanceAudio._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
  }
LAB_14f04af80:
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return;
}

// OnListenerShutdown @ 14f04afd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ResonanceAudio::FResonanceAudioPluginListener::OnListenerShutdown
          (FResonanceAudioPluginListener *this,FAudioDevice *param_1)

{
  if (this->ResonanceAudioModule != (FResonanceAudioModule *)0x0) {
    FResonanceAudioModule::UnregisterAudioDevice(this->ResonanceAudioModule,param_1);
  }
  if (3 < (byte)LogResonanceAudio._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
    return;
  }
  return;
}

// OnListenerUpdated @ 14f04b020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ResonanceAudio::FResonanceAudioPluginListener::OnListenerUpdated
          (FResonanceAudioPluginListener *this,FAudioDevice *param_1,int param_2,
          TTransform<double> *param_3,float param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ResonanceAudioApi *pRVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  pRVar3 = (this->ResonanceAudioApi).Object;
  if (pRVar3 == (ResonanceAudioApi *)0x0) {
    if (1 < (byte)LogResonanceAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
      return;
    }
  }
  else {
    (**(code **)((longlong)*pRVar3 + 0x28))
              (pRVar3,(float)((param_3->Translation).XY.m128d_f64[1] * __real_3f847ae140000000),
               (float)((param_3->Translation).ZW.m128d_f64[0] * __real_3f847ae140000000),
               (float)((param_3->Translation).XY.m128d_f64[0] * __real_bf847ae140000000));
    auVar1 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
    auVar2 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
    uVar6 = auVar1._8_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    uVar7 = auVar1._12_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    uVar8 = auVar2._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    uVar9 = auVar2._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    if ((this->ResonanceAudioApi).Object == (ResonanceAudioApi *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pRVar3 = (this->ResonanceAudioApi).Object;
    (**(code **)((longlong)*pRVar3 + 0x30))
              (pRVar3,(float)(double)CONCAT44(uVar7,uVar6),(float)(double)CONCAT44(uVar9,uVar8),
               (float)auVar1._0_8_,(float)auVar2._8_8_);
  }
  return;
}

// OnTick @ 14f04b350

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ResonanceAudio::FResonanceAudioPluginListener::OnTick
          (FResonanceAudioPluginListener *this,UWorld *param_1,int param_2,
          TTransform<double> *param_3,float param_4)

{
  UResonanceAudioReverbPluginPreset *this_00;
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  bool bVar5;
  int iVar6;
  AAudioVolume *this_01;
  UClass *pUVar7;
  undefined4 uVar8;
  uint uVar9;
  UResonanceAudioReverbPluginPreset *pUVar10;
  UResonanceAudioReverbPluginPreset **ppUVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  double dVar20;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  TObjectPtr<USoundEffectSubmixPreset> *this_02;
  
  if (ResonanceAudioConsoleVariables::bUsingReverb == 0) {
    return;
  }
  if (this->ReverbPtr == (FResonanceAudioReverb *)0x0) {
    return;
  }
  if ((param_1->AudioVolumes).ArrayNum < 1) {
    return;
  }
  local_20._s_0.X = (param_3->Translation).XY.m128d_f64[0];
  local_20._s_0.Y = (param_3->Translation).XY.m128d_f64[1];
  local_20._s_0.Z = (param_3->Translation).ZW.m128d_f64[0];
  this_01 = UWorld::GetAudioSettings
                      (param_1,(TVector<double> *)&local_20._s_0,(FReverbSettings *)0x0,
                       (FInteriorSettings *)0x0);
  if (this_01 == (AAudioVolume *)0x0) {
    this->ReverbPtr->ReverbPluginPreset = GlobalReverbPluginPreset;
    if ((byte)LogResonanceAudio._0_1_ < 6) {
      return;
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
    return;
  }
  if ((this_01->Settings).ReverbPluginEffect.field0_0x0.DebugPtr != (USoundEffectSubmixPreset *)0x0)
  {
    pUVar7 = UResonanceAudioReverbPluginPreset::StaticClass();
    this_02 = &(this_01->Settings).ReverbPluginEffect;
    bVar5 = FObjectPtr::IsA((FObjectPtr *)this_02,pUVar7);
    uVar8 = SUB84(this_02,0);
    if (bVar5) {
      this_00 = (UResonanceAudioReverbPluginPreset *)
                (this_01->Settings).ReverbPluginEffect.field0_0x0.DebugPtr;
      if ((this_00 != (UResonanceAudioReverbPluginPreset *)0x0) &&
         ((this_00->Settings).bGetTransformFromAudioVolume != false)) {
        lVar1 = this_01->_padding_;
        if (lVar1 == 0) {
          uVar13 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar14 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          local_38._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        }
        else {
          local_38._s_0.Z = *(double *)(lVar1 + 0x220);
          uVar13 = SUB84(local_38._s_0.Z,0);
          uVar14 = (undefined4)((ulonglong)local_38._s_0.Z >> 0x20);
          uVar15 = *(undefined4 *)(lVar1 + 0x210);
          uVar16 = *(undefined4 *)(lVar1 + 0x214);
          uVar17 = *(undefined4 *)(lVar1 + 0x218);
          uVar18 = *(undefined4 *)(lVar1 + 0x21c);
        }
        if ((((double)CONCAT44(uVar16,uVar15) != (this_00->Settings).RoomPosition.field0_0x0._s_0.X)
            || ((double)CONCAT44(uVar18,uVar17) !=
                (this_00->Settings).RoomPosition.field0_0x0._s_0.Y)) ||
           (local_38._s_0.Z != (this_00->Settings).RoomPosition.field0_0x0._s_0.Z)) {
          *(undefined4 *)&(this_00->Settings).RoomPosition.field0_0x0 = uVar15;
          *(undefined4 *)((longlong)&(this_00->Settings).RoomPosition.field0_0x0 + 4) = uVar16;
          *(undefined4 *)((longlong)&(this_00->Settings).RoomPosition.field0_0x0 + 8) = uVar17;
          *(undefined4 *)((longlong)&(this_00->Settings).RoomPosition.field0_0x0 + 0xc) = uVar18;
          (this_00->Settings).RoomPosition.field0_0x0._s_0.Z = (double)CONCAT44(uVar14,uVar13);
          pUVar10 = this_00;
          UResonanceAudioReverbPluginPreset::UpdateSettings(this_00,&this_00->Settings);
          uVar8 = SUB84(pUVar10,0);
        }
        lVar1 = this_01->_padding_;
        if (lVar1 == 0) {
          uVar15 = 0;
          uVar16 = 0;
          uVar17 = 0;
          uVar18 = 0;
          dVar19 = ___xmm_3ff00000000000000000000000000000;
          dVar20 = _UNK_15061cbc8;
        }
        else {
          uVar15 = *(undefined4 *)(lVar1 + 0x1f0);
          uVar16 = *(undefined4 *)(lVar1 + 500);
          uVar17 = *(undefined4 *)(lVar1 + 0x1f8);
          uVar18 = *(undefined4 *)(lVar1 + 0x1fc);
          dVar19 = *(double *)(lVar1 + 0x200);
          dVar20 = *(double *)(lVar1 + 0x208);
        }
        lVar12 = -(ulonglong)((this_00->Settings).RoomRotation.W != dVar20);
        auVar2._8_4_ = (int)lVar12;
        auVar2._0_8_ = -(ulonglong)((this_00->Settings).RoomRotation.Z != dVar19);
        auVar2._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
        uVar9 = movmskpd(uVar8,auVar2);
        lVar12 = -(ulonglong)((this_00->Settings).RoomRotation.Y != (double)CONCAT44(uVar18,uVar17))
        ;
        auVar3._8_4_ = (int)lVar12;
        auVar3._0_8_ = -(ulonglong)
                        ((this_00->Settings).RoomRotation.X != (double)CONCAT44(uVar16,uVar15));
        auVar3._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
        iVar6 = movmskpd((int)lVar1,auVar3);
        if ((uVar9 & 0x3fffffff) != 0 || iVar6 != 0) {
          *(undefined4 *)&(this_00->Settings).RoomRotation.X = uVar15;
          *(undefined4 *)((longlong)&(this_00->Settings).RoomRotation.X + 4) = uVar16;
          *(undefined4 *)&(this_00->Settings).RoomRotation.Y = uVar17;
          *(undefined4 *)((longlong)&(this_00->Settings).RoomRotation.Y + 4) = uVar18;
          (this_00->Settings).RoomRotation.Z = dVar19;
          (this_00->Settings).RoomRotation.W = dVar20;
          UResonanceAudioReverbPluginPreset::UpdateSettings(this_00,&this_00->Settings);
        }
        AActor::GetActorScale3D((AActor *)this_01,(TVector<double> *)&local_38._s_0);
        lVar1 = *(longlong *)(this_01->_padding_ + 0x548);
        dVar4 = (*(double *)(lVar1 + 0x298) + *(double *)(lVar1 + 0x298)) * local_38._s_0.X;
        dVar19 = (*(double *)(lVar1 + 0x2a0) + *(double *)(lVar1 + 0x2a0)) * local_38._s_0.Y;
        dVar20 = (*(double *)(lVar1 + 0x2a8) + *(double *)(lVar1 + 0x2a8)) * local_38._s_0.Z;
        if (((dVar4 != (this_00->Settings).RoomDimensions.field0_0x0._s_0.X) ||
            (dVar19 != (this_00->Settings).RoomDimensions.field0_0x0._s_0.Y)) ||
           (dVar20 != (this_00->Settings).RoomDimensions.field0_0x0._s_0.Z)) {
          (this_00->Settings).RoomDimensions.field0_0x0._s_0.X = dVar4;
          (this_00->Settings).RoomDimensions.field0_0x0._s_0.Y = dVar19;
          (this_00->Settings).RoomDimensions.field0_0x0._s_0.Z = dVar20;
          UResonanceAudioReverbPluginPreset::UpdateSettings(this_00,&this_00->Settings);
        }
        ppUVar11 = &this->ReverbPtr->ReverbPluginPreset;
LAB_14f04b5ad:
        *ppUVar11 = this_00;
        return;
      }
      ppUVar11 = &this->ReverbPtr->ReverbPluginPreset;
      if (this_00 != (UResonanceAudioReverbPluginPreset *)0x0) goto LAB_14f04b5ad;
      goto LAB_14f04b5d0;
    }
  }
  ppUVar11 = &this->ReverbPtr->ReverbPluginPreset;
LAB_14f04b5d0:
  *ppUVar11 = GlobalReverbPluginPreset;
  return;
}

// RemoveResonanceAPIForAudioDevice @ 14f04c380

void __cdecl
ResonanceAudio::FResonanceAudioPluginListener::RemoveResonanceAPIForAudioDevice
          (FAudioDevice *param_1)

{
  uint uVar1;
  FAudioDevice *local_res10 [3];
  
  EnterCriticalSection((LPCRITICAL_SECTION)&ResonanceApiMapCriticalSection);
  local_res10[0] = param_1;
  if (ResonanceApiMap._8_4_ != ResonanceApiMap._52_4_) {
    uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    TSet<TTuple<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>_>,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FAudioDevice_const_*>
              ((TSet<TTuple<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>_>,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>,FDefaultSetAllocator>
                *)&ResonanceApiMap,uVar1 >> 0x10 ^ uVar1,local_res10);
  }
                    /* WARNING: Could not recover jumptable at 0x00014f04c3ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&ResonanceApiMapCriticalSection);
  return;
}

// RemoveResonanceAPIForAudioDevice @ 14f04c400

void __cdecl
ResonanceAudio::FResonanceAudioPluginListener::RemoveResonanceAPIForAudioDevice
          (ResonanceAudioApi *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  byte bVar3;
  TMap<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>_>
  *pTVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FAudioDevice *pFVar10;
  longlong lVar11;
  FAudioDevice *pFVar12;
  uint uVar13;
  uint *puVar14;
  FAudioDevice *pFVar15;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  FAudioDevice *local_a8;
  TMap<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>_>
  *local_a0;
  uint uStack_98;
  uint uStack_94;
  undefined8 local_90;
  undefined4 uStack_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&ResonanceApiMapCriticalSection);
  pFVar15 = (FAudioDevice *)0x0;
  uStack_94 = 1;
  uStack_98 = 0;
  uVar9 = ResonanceApiMap._40_4_;
  uStack_84 = uStack_98;
  local_80 = uStack_98;
  if (uVar9 != 0) {
    puVar14 = (uint *)&ResonanceApiMap.field_0x10;
    if (ResonanceApiMap._32_8_ != 0) {
      puVar14 = (uint *)ResonanceApiMap._32_8_;
    }
    uVar8 = *puVar14;
    pFVar10 = pFVar15;
    pFVar12 = pFVar15;
    local_80 = 0;
    uStack_98 = 0;
    while (uVar8 == 0) {
      iVar7 = (int)pFVar10;
      local_80 = (int)pFVar12 + 0x20;
      pFVar12 = (FAudioDevice *)(ulonglong)local_80;
      uStack_98 = iVar7 + 1;
      pFVar10 = (FAudioDevice *)(ulonglong)uStack_98;
      uStack_84 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_98)
      goto LAB_14f04c4bd;
      uVar8 = puVar14[(longlong)iVar7 + 1];
    }
    uStack_94 = -uVar8 & uVar8;
    uVar1 = (ulonglong)uStack_94 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    uStack_84 = (local_80 - 1) + local_res18;
    if ((int)uVar9 < (int)uStack_84) {
      uStack_84 = uVar9;
    }
  }
LAB_14f04c4bd:
  local_a0 = &ResonanceApiMap;
  bVar3 = ResonanceApiMap._40_1_;
  uVar8 = uVar9 & 0xffffffe0;
  iStack_78 = ResonanceApiMap._8_4_ - ResonanceApiMap._52_4_;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,uStack_98);
  local_90 = 0x154dd7840;
  TStack_68.CurrentBitIndex = uStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  local_70 = &ResonanceApiMap;
  iVar7 = (int)uVar9 >> 5;
  TStack_68._28_4_ = uStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)&ResonanceApiMap.field_0x10;
  uVar13 = uVar9;
  uStack_7c = uStack_84;
  if ((int)uVar9 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar13 = ResonanceApiMap._40_4_;
  }
  if (uVar9 != uVar13) {
    lVar11 = 0x154dd7840;
    if (ResonanceApiMap._32_8_ != 0) {
      lVar11 = ResonanceApiMap._32_8_;
    }
    uVar9 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar11 + (longlong)iVar7 * 4);
    while (uVar9 == 0) {
      lVar6 = (longlong)iVar7;
      uVar8 = uVar8 + 0x20;
      iVar7 = iVar7 + 1;
      uVar9 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
      goto LAB_14f04c5e0;
      uVar9 = *(uint *)(lVar11 + 4 + lVar6 * 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    uVar9 = local_res20 + -1 + uVar8;
    if ((int)uVar13 < (int)uVar9) {
      uVar9 = uVar13;
    }
  }
LAB_14f04c5e0:
  do {
    pTVar4 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_68.CurrentBitIndex == uVar9) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)&ResonanceApiMap.field_0x10)) &&
       (pTVar4 == &ResonanceApiMap)) goto LAB_14f04c63d;
    lVar11 = *(longlong *)pTVar4;
    if (*(ResonanceAudioApi **)((longlong)TStack_68.CurrentBitIndex * 0x20 + 8 + lVar11) == param_1)
    {
      pFVar15 = *(FAudioDevice **)((longlong)TStack_68.CurrentBitIndex * 0x20 + lVar11);
      if (pFVar15 == (FAudioDevice *)0x0) {
LAB_14f04c63d:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("AudioDeviceKey",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioPluginListener.cpp"
                           ,0xcc,
                           L"RemoveResonanceAPIForAudioDevice was called for a resonance system that wasn\'t registered using SetResonanceAPIForAudioDevice!"
                          );
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_a8 = pFVar15;
      if (ResonanceApiMap._8_4_ != ResonanceApiMap._52_4_) {
        uVar9 = ((uint)((ulonglong)pFVar15 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar15 >> 4)) *
                -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        TSet<TTuple<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>_>,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FAudioDevice_const_*>
                  ((TSet<TTuple<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>_>,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>,FDefaultSetAllocator>
                    *)&ResonanceApiMap,uVar9 >> 0x10 ^ uVar9,&local_a8);
      }
                    /* WARNING: Could not recover jumptable at 0x00014f04c6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&ResonanceApiMapCriticalSection);
      return;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// SetResonanceAPIForAudioDevice @ 14f04c890

void __cdecl
ResonanceAudio::FResonanceAudioPluginListener::SetResonanceAPIForAudioDevice
          (FAudioDevice *param_1,TSharedPtr<vraudio::ResonanceAudioApi,1> *param_2)

{
  FAudioDevice *local_res8 [4];
  
  local_res8[0] = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&ResonanceApiMapCriticalSection);
  TMapBase<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>_>
  ::Emplace<FAudioDevice_const_*_const_&,TSharedPtr<vraudio::ResonanceAudioApi,1>_const_&>
            ((TMapBase<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>_>
              *)&ResonanceApiMap,local_res8,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)&ResonanceApiMapCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

