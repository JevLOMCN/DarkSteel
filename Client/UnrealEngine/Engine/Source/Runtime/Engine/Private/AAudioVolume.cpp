// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 31

// StaticClass @ 147671330

UClass * __cdecl AAudioVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAudioVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AudioVolume",
               &Z_Registration_Info_UClass_AAudioVolume.InnerSingleton,
               StaticRegisterNativesAAudioVolume,0x368,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<AAudioVolume>,
               InternalVTableHelperCtorCaller<AAudioVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAudioVolume.InnerSingleton;
}

// AAudioVolume @ 1476857f0

AAudioVolume * __thiscall AAudioVolume::AAudioVolume(AAudioVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  this->_padding_ = (longlong)&___7AAudioVolume__6B_;
  (this->Settings).ReverbEffect.field0_0x0.DebugPtr = (UReverbEffect *)0x0;
  (this->Settings).ReverbPluginEffect.field0_0x0.DebugPtr = (USoundEffectSubmixPreset *)0x0;
  (this->AmbientZoneSettings).bIsWorldSettings = false;
  (this->SubmixSendSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubmixSendSettings).ArrayNum = 0;
  (this->SubmixSendSettings).ArrayMax = 0;
  (this->SubmixOverrideSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubmixOverrideSettings).ArrayNum = 0;
  (this->SubmixOverrideSettings).ArrayMax = 0;
  (this->Settings).bApplyReverb = true;
  (this->Settings).Volume = 0.5;
  (this->Settings).FadeTime = 2.0;
  (this->AmbientZoneSettings).ExteriorVolume = 1.0;
  (this->AmbientZoneSettings).ExteriorTime = 0.5;
  (this->AmbientZoneSettings).ExteriorLPF = 20000.0;
  (this->AmbientZoneSettings).ExteriorLPFTime = 0.5;
  (this->AmbientZoneSettings).InteriorVolume = 1.0;
  (this->AmbientZoneSettings).InteriorTime = 0.5;
  (this->AmbientZoneSettings).InteriorLPF = 20000.0;
  (this->AmbientZoneSettings).InteriorLPFTime = 0.5;
  return this;
}

// AAudioVolume @ 1476858c0

AAudioVolume * __thiscall AAudioVolume::AAudioVolume(AAudioVolume *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  
  AVolume::AVolume((AVolume *)this,param_1);
  this->_padding_ = (longlong)&___7AAudioVolume__6B_;
  (this->Settings).ReverbEffect.field0_0x0.DebugPtr = (UReverbEffect *)0x0;
  (this->Settings).ReverbPluginEffect.field0_0x0.DebugPtr = (USoundEffectSubmixPreset *)0x0;
  (this->AmbientZoneSettings).bIsWorldSettings = false;
  (this->SubmixSendSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubmixSendSettings).ArrayNum = 0;
  (this->SubmixSendSettings).ArrayMax = 0;
  (this->SubmixOverrideSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubmixOverrideSettings).ArrayNum = 0;
  (this->SubmixOverrideSettings).ArrayMax = 0;
  (this->Settings).bApplyReverb = true;
  (this->Settings).Volume = 0.5;
  (this->Settings).FadeTime = 2.0;
  (this->AmbientZoneSettings).ExteriorVolume = 1.0;
  (this->AmbientZoneSettings).ExteriorTime = 0.5;
  (this->AmbientZoneSettings).ExteriorLPF = 20000.0;
  (this->AmbientZoneSettings).ExteriorLPFTime = 0.5;
  (this->AmbientZoneSettings).InteriorVolume = 1.0;
  (this->AmbientZoneSettings).InteriorTime = 0.5;
  (this->AmbientZoneSettings).InteriorLPF = 20000.0;
  (this->AmbientZoneSettings).InteriorLPFTime = 0.5;
  (**(code **)(*(longlong *)this->_padding_ + 0x788))
            ((longlong *)this->_padding_,UCollisionProfile::NoCollision_ProfileName,1);
  pbVar1 = (byte *)(this->_padding_ + 0x27b);
  *pbVar1 = *pbVar1 | 4;
  puVar2 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar2 = *puVar2 | 1;
  this->bEnabled = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffff00;
  return this;
}

// ~AAudioVolume @ 147689d00

void __thiscall AAudioVolume::~AAudioVolume(AAudioVolume *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AAudioVolume__6B_;
  DestructItems<FAudioVolumeSubmixOverrideSettings,int>
            ((FAudioVolumeSubmixOverrideSettings *)
             (this->SubmixOverrideSettings).AllocatorInstance.Data,
             (this->SubmixOverrideSettings).ArrayNum);
  pFVar1 = (this->SubmixOverrideSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAudioVolumeSubmixSendSettings,int>
            ((FAudioVolumeSubmixSendSettings *)(this->SubmixSendSettings).AllocatorInstance.Data,
             (this->SubmixSendSettings).ArrayNum);
  pFVar1 = (this->SubmixSendSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AVolume::~AVolume((AVolume *)this);
  return;
}

// operator() @ 14768c2e0

void __thiscall `AAudioVolume::AddProxy'::__l8::<lambda_1>::operator()(void *this)

{
  FAudioDevice *this_00;
  code *pcVar1;
  bool bVar2;
  TPairInitializer<unsigned_int_const_&,FAudioVolumeProxy_const_&> local_res10;
  longlong local_18;
  longlong local_10;
  
  bVar2 = FAudioDeviceHandle::IsValid(this);
  if (bVar2) {
    bVar2 = FAudioDeviceHandle::IsValid(this);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                         ,0x60,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this_00 = *(FAudioDevice **)((longlong)this + 8);
    bVar2 = IsInAudioThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioVolume.cpp"
                         ,0x75,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_18 = (longlong)this + 0x18;
    local_10 = (longlong)this + 0x18;
    TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,FAudioVolumeProxy_const_&>_>
              ((TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>
                *)&this_00->AudioVolumeProxies,&local_res10,(bool *)&local_18);
    local_res10.Value = (FAudioVolumeProxy *)&stack0x00000008;
    TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>
    ::
    Sort<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<_FAudioDevice::AddAudioVolumeProxy_::__l2::<lambda_1>_>_>
              ((TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>
                *)&this_00->AudioVolumeProxies,
               (FValueComparisonClass<_public:_void___cdecl_FAudioDevice::AddAudioVolumeProxy(FAudioVolumeProxy_const_&)_::_2_::<lambda_1>_>
                *)&local_res10.Value);
    FAudioDevice::InvalidateCachedInteriorVolumes(this_00);
  }
  return;
}

// operator() @ 14768c540

void __thiscall `AAudioVolume::RemoveProxy'::__l8::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  FAudioDevice *this_00;
  code *pcVar2;
  bool bVar3;
  uint local_res8 [2];
  
  bVar3 = FAudioDeviceHandle::IsValid(this);
  if (bVar3) {
    bVar3 = FAudioDeviceHandle::IsValid(this);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                         ,0x60,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = *(FAudioDevice **)((longlong)this + 8);
    uVar1 = *(uint *)((longlong)this + 0x18);
    bVar3 = IsInAudioThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioVolume.cpp"
                         ,0x96,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_res8[0] = uVar1;
    if (*(int *)&(this_00->AudioVolumeProxies).field_0x8 !=
        *(int *)&(this_00->AudioVolumeProxies).field_0x34) {
      TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned_int>
                ((TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>
                  *)&this_00->AudioVolumeProxies,uVar1,local_res8);
    }
    FAudioDevice::InvalidateCachedInteriorVolumes(this_00);
  }
  return;
}

// operator() @ 14768c600

void __thiscall `AAudioVolume::UpdateProxy'::__l8::<lambda_1>::operator()(void *this)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  undefined1 local_res8 [8];
  FValueComparisonClass<_public:_void___cdecl_FAudioDevice::UpdateAudioVolumeProxy(FAudioVolumeProxy_const_&)_::_15_::<lambda_1>_>
  local_res10;
  
  lVar3 = *(longlong *)this;
  bVar6 = IsInAudioThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioVolume.cpp"
                         ,0xb1,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(uint *)((longlong)this + 8);
  if (*(int *)(lVar3 + 0x7e0) != *(int *)(lVar3 + 0x80c)) {
    lVar9 = *(longlong *)(lVar3 + 0x818);
    if (*(longlong *)(lVar3 + 0x818) == 0) {
      lVar9 = lVar3 + 0x810;
    }
    uVar7 = *(uint *)(lVar9 + (ulonglong)(*(int *)(lVar3 + 0x820) - 1U & uVar2) * 4);
    if (uVar7 != 0xffffffff) {
      while (puVar8 = (uint *)((longlong)(int)uVar7 * 0x98 +
                              *(longlong *)
                               &((TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>
                                  *)(lVar3 + 0x7d8))->Elements), *puVar8 != uVar2) {
        uVar7 = puVar8[0x24];
        if (uVar7 == 0xffffffff) {
          return;
        }
      }
      puVar10 = puVar8 + 2;
      if (puVar8 == (uint *)0x0) {
        puVar10 = (uint *)0x0;
      }
      if (puVar10 != (uint *)0x0) {
        *puVar10 = uVar2;
        puVar10[1] = *(uint *)((longlong)this + 0xc);
        fVar1 = (float)puVar10[2];
        puVar10[2] = *(uint *)((longlong)this + 0x10);
        FReverbSettings::operator=
                  ((FReverbSettings *)(puVar10 + 4),(FReverbSettings *)((longlong)this + 0x18));
        uVar5 = *(undefined8 *)((longlong)this + 0x40);
        *(undefined8 *)(puVar10 + 0xc) = *(undefined8 *)((longlong)this + 0x38);
        *(undefined8 *)(puVar10 + 0xe) = uVar5;
        uVar5 = *(undefined8 *)((longlong)this + 0x50);
        *(undefined8 *)(puVar10 + 0x10) = *(undefined8 *)((longlong)this + 0x48);
        *(undefined8 *)(puVar10 + 0x12) = uVar5;
        puVar10[0x14] = *(uint *)((longlong)this + 0x58);
        TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> *)
                   (puVar10 + 0x16),
                   (TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> *)
                   ((longlong)this + 0x60));
        TArray<FAudioVolumeSubmixOverrideSettings,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<FAudioVolumeSubmixOverrideSettings,TSizedDefaultAllocator<32>_> *)
                   (puVar10 + 0x1a),
                   (TArray<FAudioVolumeSubmixOverrideSettings,TSizedDefaultAllocator<32>_> *)
                   ((longlong)this + 0x70));
        *(undefined8 *)(puVar10 + 0x1e) = *(undefined8 *)((longlong)this + 0x80);
        *(undefined1 *)(puVar10 + 0x20) = 1;
        if (fVar1 != *(float *)((longlong)this + 0x10)) {
          local_res10.Predicate.Predicate =
               (TDereferenceWrapper<FAudioVolumeProxy,_public:_void___cdecl_FAudioDevice::UpdateAudioVolumeProxy(FAudioVolumeProxy_const_&)_::_15_::<lambda_1>_>
                )local_res8;
          TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>
          ::
          Sort<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<_FAudioDevice::UpdateAudioVolumeProxy_::__l15::<lambda_1>_>_>
                    ((TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>
                      *)(lVar3 + 0x7d8),&local_res10);
        }
      }
    }
  }
  return;
}

// AddProxy @ 147692600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AAudioVolume::AddProxy(AAudioVolume *this)

{
  bool bVar1;
  UWorld *this_00;
  FName *pFVar2;
  TStatId TVar3;
  undefined8 *puVar4;
  FName local_res10;
  FAudioDeviceHandle local_198;
  code *local_178 [5];
  undefined8 *local_150;
  FAudioDeviceHandle local_148;
  FAudioVolumeProxy local_130;
  FAudioVolumeProxy local_a8;
  
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 != (UWorld *)0x0) {
    UWorld::GetAudioDevice(this_00,&local_198);
    bVar1 = FAudioDeviceHandle::IsValid(&local_198);
    if (bVar1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          if (StatPtr_STAT_AudioAddAudioVolumeProxy ==
              (FThreadSafeStaticStat<_private:_void___cdecl_AAudioVolume::AddProxy(void)const_::_8_::FStat_STAT_AudioAddAudioVolumeProxy>
               )0x0) {
            pFVar2 = ::FName::FName(&local_res10,"STAT_AudioAddAudioVolumeProxy");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioAddAudioVolumeProxy,*pFVar2,
                       L"FAudioThreadTask.AddAudioVolumeProxy","STATGROUP_TaskGraphTasks",
                       "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                       MCR_Invalid);
          }
          _Init_thread_footer(&::_TSS0);
        }
      }
      FAudioVolumeProxy::FAudioVolumeProxy(&local_a8,this);
      TVar3.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioAddAudioVolumeProxy;
      if (StatPtr_STAT_AudioAddAudioVolumeProxy ==
          (FThreadSafeStaticStat<_private:_void___cdecl_AAudioVolume::AddProxy(void)const_::_8_::FStat_STAT_AudioAddAudioVolumeProxy>
           )0x0) {
        pFVar2 = ::FName::FName(&local_res10,"STAT_AudioAddAudioVolumeProxy");
        TVar3.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioAddAudioVolumeProxy,*pFVar2,
                        L"FAudioThreadTask.AddAudioVolumeProxy","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
      }
      FAudioDeviceHandle::FAudioDeviceHandle(&local_148,&local_198);
      FAudioVolumeProxy::FAudioVolumeProxy(&local_130,&local_a8);
      local_178[0] = (code *)0x0;
      puVar4 = FMemory::Malloc(0xa8,8);
      *puVar4 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`AAudioVolume::AddProxy'::`8'::<lambda_1>,1,1>::_vftable_;
      local_150 = puVar4;
      FAudioDeviceHandle::FAudioDeviceHandle((FAudioDeviceHandle *)(puVar4 + 1),&local_148);
      FAudioVolumeProxy::FAudioVolumeProxy((FAudioVolumeProxy *)(puVar4 + 4),&local_130);
      if ((FAudioDeviceHandle *)(puVar4 + 1) != (FAudioDeviceHandle *)0x0) {
        local_178[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`AAudioVolume::AddProxy'::__l8::<lambda_1>,void>::Call;
      }
      FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_178,TVar3);
      DestructItems<FAudioVolumeSubmixOverrideSettings,int>
                ((FAudioVolumeSubmixOverrideSettings *)
                 local_130.SubmixOverrideSettings.AllocatorInstance.Data,
                 local_130.SubmixOverrideSettings.ArrayNum);
      if ((FAudioVolumeSubmixOverrideSettings *)
          local_130.SubmixOverrideSettings.AllocatorInstance.Data !=
          (FAudioVolumeSubmixOverrideSettings *)0x0) {
        FMemory::Free(local_130.SubmixOverrideSettings.AllocatorInstance.Data);
      }
      DestructItems<FAudioVolumeSubmixSendSettings,int>
                ((FAudioVolumeSubmixSendSettings *)
                 local_130.SubmixSendSettings.AllocatorInstance.Data,
                 local_130.SubmixSendSettings.ArrayNum);
      if ((FAudioVolumeSubmixSendSettings *)local_130.SubmixSendSettings.AllocatorInstance.Data !=
          (FAudioVolumeSubmixSendSettings *)0x0) {
        FMemory::Free(local_130.SubmixSendSettings.AllocatorInstance.Data);
      }
      FAudioDeviceHandle::~FAudioDeviceHandle(&local_148);
      DestructItems<FAudioVolumeSubmixOverrideSettings,int>
                ((FAudioVolumeSubmixOverrideSettings *)
                 local_a8.SubmixOverrideSettings.AllocatorInstance.Data,
                 local_a8.SubmixOverrideSettings.ArrayNum);
      if ((FAudioVolumeSubmixOverrideSettings *)
          local_a8.SubmixOverrideSettings.AllocatorInstance.Data !=
          (FAudioVolumeSubmixOverrideSettings *)0x0) {
        FMemory::Free(local_a8.SubmixOverrideSettings.AllocatorInstance.Data);
      }
      DestructItems<FAudioVolumeSubmixSendSettings,int>
                ((FAudioVolumeSubmixSendSettings *)
                 local_a8.SubmixSendSettings.AllocatorInstance.Data,
                 local_a8.SubmixSendSettings.ArrayNum);
      if ((FAudioVolumeSubmixSendSettings *)local_a8.SubmixSendSettings.AllocatorInstance.Data !=
          (FAudioVolumeSubmixSendSettings *)0x0) {
        FMemory::Free(local_a8.SubmixSendSettings.AllocatorInstance.Data);
      }
    }
    FAudioDeviceHandle::~FAudioDeviceHandle(&local_198);
  }
  return;
}

// GetLifetimeReplicatedProps @ 1476b1990

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AAudioVolume::GetLifetimeReplicatedProps
          (AAudioVolume *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *this_00;
  FName local_res18 [2];
  FDoRepLifetimeParams local_28;
  
  AActor::GetLifetimeReplicatedProps((AActor *)this,param_1);
  pFVar2 = ::FName::FName(local_res18,8,L"bEnabled",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  this_00 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((this_00->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)this_00,(FString *)&local_28);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_28._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_28.Condition = COND_None;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.bIsPushBased = false;
  local_28._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(this_00,param_1,&local_28);
  return;
}

// GetPrivateStaticClass @ 1476b3710

UClass * __cdecl AAudioVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAudioVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AudioVolume",
               &Z_Registration_Info_UClass_AAudioVolume.InnerSingleton,
               StaticRegisterNativesAAudioVolume,0x368,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<AAudioVolume>,
               InternalVTableHelperCtorCaller<AAudioVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAudioVolume.InnerSingleton;
}

// OnRep_bEnabled @ 1476bd9c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AAudioVolume::OnRep_bEnabled(AAudioVolume *this)

{
  bool bVar1;
  UWorld *this_00;
  FName *pFVar2;
  TStatId TVar3;
  undefined8 *puVar4;
  FName FStackX_10;
  FAudioDeviceHandle FStack_198;
  code *apcStack_178 [5];
  undefined8 *puStack_150;
  FAudioDeviceHandle FStack_148;
  FAudioVolumeProxy FStack_130;
  FAudioVolumeProxy FStack_a8;
  
  if (this->bEnabled == 0) {
    RemoveProxy(this);
    return;
  }
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 != (UWorld *)0x0) {
    UWorld::GetAudioDevice(this_00,&FStack_198);
    bVar1 = FAudioDeviceHandle::IsValid(&FStack_198);
    if (bVar1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          if (StatPtr_STAT_AudioAddAudioVolumeProxy ==
              (FThreadSafeStaticStat<_private:_void___cdecl_AAudioVolume::AddProxy(void)const_::_8_::FStat_STAT_AudioAddAudioVolumeProxy>
               )0x0) {
            pFVar2 = ::FName::FName(&FStackX_10,"STAT_AudioAddAudioVolumeProxy");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioAddAudioVolumeProxy,*pFVar2,
                       L"FAudioThreadTask.AddAudioVolumeProxy","STATGROUP_TaskGraphTasks",
                       "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                       MCR_Invalid);
          }
          _Init_thread_footer(&::_TSS0);
        }
      }
      FAudioVolumeProxy::FAudioVolumeProxy(&FStack_a8,this);
      TVar3.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioAddAudioVolumeProxy;
      if (StatPtr_STAT_AudioAddAudioVolumeProxy ==
          (FThreadSafeStaticStat<_private:_void___cdecl_AAudioVolume::AddProxy(void)const_::_8_::FStat_STAT_AudioAddAudioVolumeProxy>
           )0x0) {
        pFVar2 = ::FName::FName(&FStackX_10,"STAT_AudioAddAudioVolumeProxy");
        TVar3.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioAddAudioVolumeProxy,*pFVar2,
                        L"FAudioThreadTask.AddAudioVolumeProxy","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
      }
      FAudioDeviceHandle::FAudioDeviceHandle(&FStack_148,&FStack_198);
      FAudioVolumeProxy::FAudioVolumeProxy(&FStack_130,&FStack_a8);
      apcStack_178[0] = (code *)0x0;
      puVar4 = FMemory::Malloc(0xa8,8);
      *puVar4 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`AAudioVolume::AddProxy'::`8'::<lambda_1>,1,1>::_vftable_;
      puStack_150 = puVar4;
      FAudioDeviceHandle::FAudioDeviceHandle((FAudioDeviceHandle *)(puVar4 + 1),&FStack_148);
      FAudioVolumeProxy::FAudioVolumeProxy((FAudioVolumeProxy *)(puVar4 + 4),&FStack_130);
      if ((FAudioDeviceHandle *)(puVar4 + 1) != (FAudioDeviceHandle *)0x0) {
        apcStack_178[0] =
             UE::Core::Private::Function::
             TFunctionRefCaller<`AAudioVolume::AddProxy'::__l8::<lambda_1>,void>::Call;
      }
      FAudioThread::RunCommandOnAudioThread
                ((TUniqueFunction<void___cdecl(void)> *)apcStack_178,TVar3);
      DestructItems<FAudioVolumeSubmixOverrideSettings,int>
                ((FAudioVolumeSubmixOverrideSettings *)
                 FStack_130.SubmixOverrideSettings.AllocatorInstance.Data,
                 FStack_130.SubmixOverrideSettings.ArrayNum);
      if ((FAudioVolumeSubmixOverrideSettings *)
          FStack_130.SubmixOverrideSettings.AllocatorInstance.Data !=
          (FAudioVolumeSubmixOverrideSettings *)0x0) {
        FMemory::Free(FStack_130.SubmixOverrideSettings.AllocatorInstance.Data);
      }
      DestructItems<FAudioVolumeSubmixSendSettings,int>
                ((FAudioVolumeSubmixSendSettings *)
                 FStack_130.SubmixSendSettings.AllocatorInstance.Data,
                 FStack_130.SubmixSendSettings.ArrayNum);
      if ((FAudioVolumeSubmixSendSettings *)FStack_130.SubmixSendSettings.AllocatorInstance.Data !=
          (FAudioVolumeSubmixSendSettings *)0x0) {
        FMemory::Free(FStack_130.SubmixSendSettings.AllocatorInstance.Data);
      }
      FAudioDeviceHandle::~FAudioDeviceHandle(&FStack_148);
      DestructItems<FAudioVolumeSubmixOverrideSettings,int>
                ((FAudioVolumeSubmixOverrideSettings *)
                 FStack_a8.SubmixOverrideSettings.AllocatorInstance.Data,
                 FStack_a8.SubmixOverrideSettings.ArrayNum);
      if ((FAudioVolumeSubmixOverrideSettings *)
          FStack_a8.SubmixOverrideSettings.AllocatorInstance.Data !=
          (FAudioVolumeSubmixOverrideSettings *)0x0) {
        FMemory::Free(FStack_a8.SubmixOverrideSettings.AllocatorInstance.Data);
      }
      DestructItems<FAudioVolumeSubmixSendSettings,int>
                ((FAudioVolumeSubmixSendSettings *)
                 FStack_a8.SubmixSendSettings.AllocatorInstance.Data,
                 FStack_a8.SubmixSendSettings.ArrayNum);
      if ((FAudioVolumeSubmixSendSettings *)FStack_a8.SubmixSendSettings.AllocatorInstance.Data !=
          (FAudioVolumeSubmixSendSettings *)0x0) {
        FMemory::Free(FStack_a8.SubmixSendSettings.AllocatorInstance.Data);
      }
    }
    FAudioDeviceHandle::~FAudioDeviceHandle(&FStack_198);
  }
  return;
}

// PostRegisterAllComponents @ 1476be3b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AAudioVolume::PostRegisterAllComponents(AAudioVolume *this)

{
  int *piVar1;
  TArray<AAudioVolume_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UWorld *pUVar7;
  FIdentityFunctor local_res8 [16];
  AAudioVolume *local_18 [2];
  
  AActor::PostRegisterAllComponents((AActor *)this);
  TMulticastDelegateRegistration<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
  ::AddUObject<AAudioVolume>
            ((void *)(this->_padding_ + 0x1b0),(AAudioVolume *)(local_res8 + 8),(pmf_d89df312)this);
  if (this->bEnabled != 0) {
    AddProxy(this);
  }
  pUVar7 = AActor::GetWorld((AActor *)this);
  pTVar2 = &pUVar7->AudioVolumes;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_18[0] = this;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(pUVar7->AudioVolumes).ArrayMax * 8))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (pUVar7->AudioVolumes).ArrayNum;
  piVar1 = &(pUVar7->AudioVolumes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (pUVar7->AudioVolumes).ArrayNum = iVar6 + 1;
  *(AAudioVolume **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  AlgoImpl::
  IntroSortInternal<AAudioVolume_*,int,FIdentityFunctor,TDereferenceWrapper<AAudioVolume_*,_AAudioVolume::PostRegisterAllComponents_::__l2::<lambda_1>_>_>
            ((AAudioVolume **)(pTVar2->AllocatorInstance).Data,(pUVar7->AudioVolumes).ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return;
}

// PostUnregisterAllComponents @ 1476be4d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AAudioVolume::PostUnregisterAllComponents(AAudioVolume *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  longlong lVar6;
  AAudioVolume *pAVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  AAudioVolume *local_38 [2];
  
  AActor::PostUnregisterAllComponents((AActor *)this);
  if (this->_padding_ != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x1b0),this)
    ;
  }
  RemoveProxy(this);
  pUVar5 = AActor::GetWorld((AActor *)this);
  if (pUVar5 != (UWorld *)0x0) {
    pFVar2 = (pUVar5->AudioVolumes).AllocatorInstance.Data;
    local_38[0] = this;
    if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 <
         pFVar2 + (longlong)(pUVar5->AudioVolumes).ArrayMax * 8)) &&
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
    iVar1 = (pUVar5->AudioVolumes).ArrayNum;
    if (iVar1 != 0) {
      iVar10 = 0;
      pFVar2 = (pUVar5->AudioVolumes).AllocatorInstance.Data;
      bVar4 = *(AAudioVolume **)pFVar2 != local_38[0];
      lVar6 = 0;
      pAVar7 = local_38[0];
      iVar8 = 0;
      do {
        iVar9 = iVar8;
        do {
          lVar6 = lVar6 + 1;
          iVar9 = iVar9 + 1;
          if (iVar1 <= lVar6) break;
        } while (bVar4 == (*(AAudioVolume **)(pFVar2 + lVar6 * 8) != pAVar7));
        if (bVar4 != false) {
          if (iVar10 != iVar8) {
            memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar8 * 8,
                    (longlong)(iVar9 - iVar8) << 3);
            pAVar7 = local_38[0];
          }
          iVar10 = iVar10 + (iVar9 - iVar8);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar8 = iVar9;
      } while (lVar6 < iVar1);
      (pUVar5->AudioVolumes).ArrayNum = iVar10;
    }
  }
  return;
}

// RemoveProxy @ 1476c2f50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AAudioVolume::RemoveProxy(AAudioVolume *this)

{
  undefined4 uVar1;
  bool bVar2;
  UWorld *this_00;
  FName *pFVar3;
  TStatId TVar4;
  undefined8 *puVar5;
  FName local_res10;
  FAudioDeviceHandle local_78;
  FAudioDeviceHandle local_60;
  undefined4 local_48;
  code *local_38 [5];
  undefined8 *local_10;
  
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 != (UWorld *)0x0) {
    UWorld::GetAudioDevice(this_00,&local_78);
    bVar2 = FAudioDeviceHandle::IsValid(&local_78);
    if (bVar2) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          if (StatPtr_STAT_AudioRemoveAudioVolumeProxy ==
              (FThreadSafeStaticStat<_private:_void___cdecl_AAudioVolume::RemoveProxy(void)const_::_8_::FStat_STAT_AudioRemoveAudioVolumeProxy>
               )0x0) {
            pFVar3 = ::FName::FName(&local_res10,"STAT_AudioRemoveAudioVolumeProxy");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioRemoveAudioVolumeProxy,
                       *pFVar3,L"FAudioThreadTask.RemoveAudioVolumeProxy","STATGROUP_TaskGraphTasks"
                       ,"STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                       MCR_Invalid);
          }
          _Init_thread_footer(&::_TSS0);
        }
      }
      uVar1 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      TVar4.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioRemoveAudioVolumeProxy;
      if (StatPtr_STAT_AudioRemoveAudioVolumeProxy ==
          (FThreadSafeStaticStat<_private:_void___cdecl_AAudioVolume::RemoveProxy(void)const_::_8_::FStat_STAT_AudioRemoveAudioVolumeProxy>
           )0x0) {
        pFVar3 = ::FName::FName(&local_res10,"STAT_AudioRemoveAudioVolumeProxy");
        TVar4.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioRemoveAudioVolumeProxy,
                        *pFVar3,L"FAudioThreadTask.RemoveAudioVolumeProxy",
                        "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true,
                        ST_int64,true,false,MCR_Invalid);
      }
      FAudioDeviceHandle::FAudioDeviceHandle(&local_60,&local_78);
      local_38[0] = (code *)0x0;
      local_48 = uVar1;
      puVar5 = FMemory::Malloc(0x28,8);
      *puVar5 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`AAudioVolume::RemoveProxy'::`8'::<lambda_1>,1,1>::_vftable_;
      local_10 = puVar5;
      FAudioDeviceHandle::FAudioDeviceHandle((FAudioDeviceHandle *)(puVar5 + 1),&local_60);
      *(undefined4 *)(puVar5 + 4) = local_48;
      if ((FAudioDeviceHandle *)(puVar5 + 1) != (FAudioDeviceHandle *)0x0) {
        local_38[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`AAudioVolume::RemoveProxy'::__l8::<lambda_1>,void>::Call;
      }
      FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_38,TVar4);
      FAudioDeviceHandle::~FAudioDeviceHandle(&local_60);
    }
    FAudioDeviceHandle::~FAudioDeviceHandle(&local_78);
  }
  return;
}

// SetEnabled @ 1476c7c20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AAudioVolume::SetEnabled(AAudioVolume *this,bool param_1)

{
  bool bVar1;
  UWorld *this_00;
  FName *pFVar2;
  TStatId TVar3;
  undefined8 *puVar4;
  FName FStackX_10;
  FAudioDeviceHandle FStack_198;
  code *apcStack_178 [5];
  undefined8 *puStack_150;
  FAudioDeviceHandle FStack_148;
  FAudioVolumeProxy FStack_130;
  FAudioVolumeProxy FStack_a8;
  
  if ((uint)param_1 == ZPULL(*(undefined4 *)&this->field_0x2fc,0,1)) {
    return;
  }
  *(uint *)&this->field_0x2fc = *(undefined4 *)&this->field_0x2fc & 0xfffffffe | (uint)param_1;
  if (!param_1) {
    RemoveProxy(this);
    return;
  }
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 != (UWorld *)0x0) {
    UWorld::GetAudioDevice(this_00,&FStack_198);
    bVar1 = FAudioDeviceHandle::IsValid(&FStack_198);
    if (bVar1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          if (StatPtr_STAT_AudioAddAudioVolumeProxy ==
              (FThreadSafeStaticStat<_private:_void___cdecl_AAudioVolume::AddProxy(void)const_::_8_::FStat_STAT_AudioAddAudioVolumeProxy>
               )0x0) {
            pFVar2 = ::FName::FName(&FStackX_10,"STAT_AudioAddAudioVolumeProxy");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioAddAudioVolumeProxy,*pFVar2,
                       L"FAudioThreadTask.AddAudioVolumeProxy","STATGROUP_TaskGraphTasks",
                       "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                       MCR_Invalid);
          }
          _Init_thread_footer(&::_TSS0);
        }
      }
      FAudioVolumeProxy::FAudioVolumeProxy(&FStack_a8,this);
      TVar3.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioAddAudioVolumeProxy;
      if (StatPtr_STAT_AudioAddAudioVolumeProxy ==
          (FThreadSafeStaticStat<_private:_void___cdecl_AAudioVolume::AddProxy(void)const_::_8_::FStat_STAT_AudioAddAudioVolumeProxy>
           )0x0) {
        pFVar2 = ::FName::FName(&FStackX_10,"STAT_AudioAddAudioVolumeProxy");
        TVar3.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioAddAudioVolumeProxy,*pFVar2,
                        L"FAudioThreadTask.AddAudioVolumeProxy","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
      }
      FAudioDeviceHandle::FAudioDeviceHandle(&FStack_148,&FStack_198);
      FAudioVolumeProxy::FAudioVolumeProxy(&FStack_130,&FStack_a8);
      apcStack_178[0] = (code *)0x0;
      puVar4 = FMemory::Malloc(0xa8,8);
      *puVar4 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`AAudioVolume::AddProxy'::`8'::<lambda_1>,1,1>::_vftable_;
      puStack_150 = puVar4;
      FAudioDeviceHandle::FAudioDeviceHandle((FAudioDeviceHandle *)(puVar4 + 1),&FStack_148);
      FAudioVolumeProxy::FAudioVolumeProxy((FAudioVolumeProxy *)(puVar4 + 4),&FStack_130);
      if ((FAudioDeviceHandle *)(puVar4 + 1) != (FAudioDeviceHandle *)0x0) {
        apcStack_178[0] =
             UE::Core::Private::Function::
             TFunctionRefCaller<`AAudioVolume::AddProxy'::__l8::<lambda_1>,void>::Call;
      }
      FAudioThread::RunCommandOnAudioThread
                ((TUniqueFunction<void___cdecl(void)> *)apcStack_178,TVar3);
      DestructItems<FAudioVolumeSubmixOverrideSettings,int>
                ((FAudioVolumeSubmixOverrideSettings *)
                 FStack_130.SubmixOverrideSettings.AllocatorInstance.Data,
                 FStack_130.SubmixOverrideSettings.ArrayNum);
      if ((FAudioVolumeSubmixOverrideSettings *)
          FStack_130.SubmixOverrideSettings.AllocatorInstance.Data !=
          (FAudioVolumeSubmixOverrideSettings *)0x0) {
        FMemory::Free(FStack_130.SubmixOverrideSettings.AllocatorInstance.Data);
      }
      DestructItems<FAudioVolumeSubmixSendSettings,int>
                ((FAudioVolumeSubmixSendSettings *)
                 FStack_130.SubmixSendSettings.AllocatorInstance.Data,
                 FStack_130.SubmixSendSettings.ArrayNum);
      if ((FAudioVolumeSubmixSendSettings *)FStack_130.SubmixSendSettings.AllocatorInstance.Data !=
          (FAudioVolumeSubmixSendSettings *)0x0) {
        FMemory::Free(FStack_130.SubmixSendSettings.AllocatorInstance.Data);
      }
      FAudioDeviceHandle::~FAudioDeviceHandle(&FStack_148);
      DestructItems<FAudioVolumeSubmixOverrideSettings,int>
                ((FAudioVolumeSubmixOverrideSettings *)
                 FStack_a8.SubmixOverrideSettings.AllocatorInstance.Data,
                 FStack_a8.SubmixOverrideSettings.ArrayNum);
      if ((FAudioVolumeSubmixOverrideSettings *)
          FStack_a8.SubmixOverrideSettings.AllocatorInstance.Data !=
          (FAudioVolumeSubmixOverrideSettings *)0x0) {
        FMemory::Free(FStack_a8.SubmixOverrideSettings.AllocatorInstance.Data);
      }
      DestructItems<FAudioVolumeSubmixSendSettings,int>
                ((FAudioVolumeSubmixSendSettings *)
                 FStack_a8.SubmixSendSettings.AllocatorInstance.Data,
                 FStack_a8.SubmixSendSettings.ArrayNum);
      if ((FAudioVolumeSubmixSendSettings *)FStack_a8.SubmixSendSettings.AllocatorInstance.Data !=
          (FAudioVolumeSubmixSendSettings *)0x0) {
        FMemory::Free(FStack_a8.SubmixSendSettings.AllocatorInstance.Data);
      }
    }
    FAudioDeviceHandle::~FAudioDeviceHandle(&FStack_198);
  }
  return;
}

// SetInteriorSettings @ 1476c8660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AAudioVolume::SetInteriorSettings(AAudioVolume *this,FInteriorSettings *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UWorld *this_00;
  FAudioDevice *pFVar7;
  FName *pFVar8;
  TStatId TVar9;
  FName FStackX_10;
  code *apcStack_168 [5];
  undefined8 *puStack_140;
  FAudioDevice *pFStack_138;
  FAudioVolumeProxy FStack_130;
  FAudioVolumeProxy FStack_a8;
  
  if (((((((this->AmbientZoneSettings).bIsWorldSettings != param_1->bIsWorldSettings) ||
         (param_1->ExteriorVolume != (this->AmbientZoneSettings).ExteriorVolume)) ||
        (param_1->ExteriorTime != (this->AmbientZoneSettings).ExteriorTime)) ||
       ((param_1->ExteriorLPF != (this->AmbientZoneSettings).ExteriorLPF ||
        (param_1->ExteriorLPFTime != (this->AmbientZoneSettings).ExteriorLPFTime)))) ||
      ((param_1->InteriorVolume != (this->AmbientZoneSettings).InteriorVolume ||
       ((param_1->InteriorTime != (this->AmbientZoneSettings).InteriorTime ||
        (param_1->InteriorLPF != (this->AmbientZoneSettings).InteriorLPF)))))) ||
     (param_1->InteriorLPFTime != (this->AmbientZoneSettings).InteriorLPFTime)) {
    uVar3 = *(undefined3 *)&param_1->field_0x1;
    fVar4 = param_1->ExteriorVolume;
    fVar5 = param_1->ExteriorTime;
    fVar6 = param_1->ExteriorLPF;
    (this->AmbientZoneSettings).bIsWorldSettings = param_1->bIsWorldSettings;
    *(undefined3 *)&(this->AmbientZoneSettings).field_0x1 = uVar3;
    (this->AmbientZoneSettings).ExteriorVolume = fVar4;
    (this->AmbientZoneSettings).ExteriorTime = fVar5;
    (this->AmbientZoneSettings).ExteriorLPF = fVar6;
    fVar4 = param_1->InteriorVolume;
    fVar5 = param_1->InteriorTime;
    fVar6 = param_1->InteriorLPF;
    (this->AmbientZoneSettings).ExteriorLPFTime = param_1->ExteriorLPFTime;
    (this->AmbientZoneSettings).InteriorVolume = fVar4;
    (this->AmbientZoneSettings).InteriorTime = fVar5;
    (this->AmbientZoneSettings).InteriorLPF = fVar6;
    (this->AmbientZoneSettings).InteriorLPFTime = param_1->InteriorLPFTime;
    if (this->bEnabled != 0) {
      this_00 = AActor::GetWorld((AActor *)this);
      if ((this_00 != (UWorld *)0x0) &&
         (pFVar7 = UWorld::GetAudioDeviceRaw(this_00), pFVar7 != (FAudioDevice *)0x0)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          if (StatPtr_STAT_AudioUpdateAudioVolumeProxy ==
              (FThreadSafeStaticStat<_private:_void___cdecl_AAudioVolume::UpdateProxy(void)const_::_8_::FStat_STAT_AudioUpdateAudioVolumeProxy>
               )0x0) {
            pFVar8 = ::FName::FName(&FStackX_10,"STAT_AudioUpdateAudioVolumeProxy");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioUpdateAudioVolumeProxy,
                       *pFVar8,L"FAudioThreadTask.UpdateAudioVolumeProxy","STATGROUP_TaskGraphTasks"
                       ,"STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                       MCR_Invalid);
          }
          _Init_thread_footer(&::_TSS0);
        }
        FAudioVolumeProxy::FAudioVolumeProxy(&FStack_a8,this);
        TVar9.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioUpdateAudioVolumeProxy;
        if (StatPtr_STAT_AudioUpdateAudioVolumeProxy ==
            (FThreadSafeStaticStat<_private:_void___cdecl_AAudioVolume::UpdateProxy(void)const_::_8_::FStat_STAT_AudioUpdateAudioVolumeProxy>
             )0x0) {
          pFVar8 = ::FName::FName(&FStackX_10,"STAT_AudioUpdateAudioVolumeProxy");
          TVar9.StatIdPtr =
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioUpdateAudioVolumeProxy,
                          *pFVar8,L"FAudioThreadTask.UpdateAudioVolumeProxy",
                          "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,
                          true,ST_int64,true,false,MCR_Invalid);
        }
        pFStack_138 = pFVar7;
        FAudioVolumeProxy::FAudioVolumeProxy(&FStack_130,&FStack_a8);
        apcStack_168[0] = (code *)0x0;
        puStack_140 = FMemory::Malloc(0x98,8);
        puVar1 = puStack_140 + 1;
        *puStack_140 = &UE::Core::Private::Function::
                        TFunction_OwnedObject<`AAudioVolume::UpdateProxy'::`8'::<lambda_1>,1,1>::
                        _vftable_;
        *puVar1 = pFStack_138;
        FAudioVolumeProxy::FAudioVolumeProxy((FAudioVolumeProxy *)(puStack_140 + 2),&FStack_130);
        if (puVar1 != (undefined8 *)0x0) {
          apcStack_168[0] =
               UE::Core::Private::Function::
               TFunctionRefCaller<`AAudioVolume::UpdateProxy'::__l8::<lambda_1>,void>::Call;
        }
        FAudioThread::RunCommandOnAudioThread
                  ((TUniqueFunction<void___cdecl(void)> *)apcStack_168,TVar9);
        DestructItems<FAudioVolumeSubmixOverrideSettings,int>
                  ((FAudioVolumeSubmixOverrideSettings *)
                   FStack_130.SubmixOverrideSettings.AllocatorInstance.Data,
                   FStack_130.SubmixOverrideSettings.ArrayNum);
        if ((FAudioVolumeSubmixOverrideSettings *)
            FStack_130.SubmixOverrideSettings.AllocatorInstance.Data !=
            (FAudioVolumeSubmixOverrideSettings *)0x0) {
          FMemory::Free(FStack_130.SubmixOverrideSettings.AllocatorInstance.Data);
        }
        DestructItems<FAudioVolumeSubmixSendSettings,int>
                  ((FAudioVolumeSubmixSendSettings *)
                   FStack_130.SubmixSendSettings.AllocatorInstance.Data,
                   FStack_130.SubmixSendSettings.ArrayNum);
        if ((FAudioVolumeSubmixSendSettings *)FStack_130.SubmixSendSettings.AllocatorInstance.Data
            != (FAudioVolumeSubmixSendSettings *)0x0) {
          FMemory::Free(FStack_130.SubmixSendSettings.AllocatorInstance.Data);
        }
        DestructItems<FAudioVolumeSubmixOverrideSettings,int>
                  ((FAudioVolumeSubmixOverrideSettings *)
                   FStack_a8.SubmixOverrideSettings.AllocatorInstance.Data,
                   FStack_a8.SubmixOverrideSettings.ArrayNum);
        if ((FAudioVolumeSubmixOverrideSettings *)
            FStack_a8.SubmixOverrideSettings.AllocatorInstance.Data !=
            (FAudioVolumeSubmixOverrideSettings *)0x0) {
          FMemory::Free(FStack_a8.SubmixOverrideSettings.AllocatorInstance.Data);
        }
        DestructItems<FAudioVolumeSubmixSendSettings,int>
                  ((FAudioVolumeSubmixSendSettings *)
                   FStack_a8.SubmixSendSettings.AllocatorInstance.Data,
                   FStack_a8.SubmixSendSettings.ArrayNum);
        if ((FAudioVolumeSubmixSendSettings *)FStack_a8.SubmixSendSettings.AllocatorInstance.Data !=
            (FAudioVolumeSubmixSendSettings *)0x0) {
          FMemory::Free(FStack_a8.SubmixSendSettings.AllocatorInstance.Data);
        }
      }
      return;
    }
  }
  return;
}

// SetPriority @ 1476c91d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AAudioVolume::SetPriority(AAudioVolume *this,float param_1)

{
  UWorld *pUVar1;
  FIdentityFunctor local_res10 [24];
  
  if (param_1 != this->Priority) {
    this->Priority = param_1;
    pUVar1 = AActor::GetWorld((AActor *)this);
    if (pUVar1 != (UWorld *)0x0) {
      AlgoImpl::
      IntroSortInternal<AAudioVolume_*,int,FIdentityFunctor,TDereferenceWrapper<AAudioVolume_*,_AAudioVolume::SetPriority_::__l8::<lambda_1>_>_>
                ((AAudioVolume **)(pUVar1->AudioVolumes).AllocatorInstance.Data,
                 (pUVar1->AudioVolumes).ArrayNum,local_res10[0],(<lambda_1> *)local_res10);
      if (this->bEnabled != 0) {
        UpdateProxy(this);
        return;
      }
    }
  }
  return;
}

// SetReverbSettings @ 1476c92e0

void __thiscall AAudioVolume::SetReverbSettings(AAudioVolume *this,FReverbSettings *param_1)

{
  bool bVar1;
  
  bVar1 = FReverbSettings::operator==(param_1,&this->Settings);
  if (!bVar1) {
    FReverbSettings::operator=(&this->Settings,param_1);
    if (this->bEnabled != 0) {
      UpdateProxy(this);
    }
  }
  return;
}

// SetSubmixOverrideSettings @ 1476c96d0

void __thiscall
AAudioVolume::SetSubmixOverrideSettings
          (AAudioVolume *this,
          TArray<FAudioVolumeSubmixOverrideSettings,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FAudioVolumeSubmixOverrideSettings,TSizedDefaultAllocator<32>_>::operator=
            (&this->SubmixOverrideSettings,param_1);
  if (this->bEnabled != 0) {
    UpdateProxy(this);
    return;
  }
  return;
}

// SetSubmixSendSettings @ 1476c9710

void __thiscall
AAudioVolume::SetSubmixSendSettings
          (AAudioVolume *this,
          TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_>::operator=
            (&this->SubmixSendSettings,param_1);
  if (this->bEnabled != 0) {
    UpdateProxy(this);
    return;
  }
  return;
}

// StaticRegisterNativesAAudioVolume @ 1476ca0e0

void __cdecl AAudioVolume::StaticRegisterNativesAAudioVolume(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_AAudioVolume_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TransformUpdated @ 1476cad00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AAudioVolume::TransformUpdated
          (AAudioVolume *this,USceneComponent *param_1,EUpdateTransformFlags param_2,
          ETeleportType param_3)

{
  undefined8 *puVar1;
  UWorld *this_00;
  FAudioDevice *pFVar2;
  FName *pFVar3;
  TStatId TVar4;
  FName FStackX_10;
  code *apcStack_168 [5];
  undefined8 *puStack_140;
  FAudioDevice *pFStack_138;
  FAudioVolumeProxy FStack_130;
  FAudioVolumeProxy FStack_a8;
  
  this_00 = AActor::GetWorld((AActor *)this);
  if ((this_00 != (UWorld *)0x0) &&
     (pFVar2 = UWorld::GetAudioDeviceRaw(this_00), pFVar2 != (FAudioDevice *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_AudioUpdateAudioVolumeProxy ==
          (FThreadSafeStaticStat<_private:_void___cdecl_AAudioVolume::UpdateProxy(void)const_::_8_::FStat_STAT_AudioUpdateAudioVolumeProxy>
           )0x0) {
        pFVar3 = ::FName::FName(&FStackX_10,"STAT_AudioUpdateAudioVolumeProxy");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioUpdateAudioVolumeProxy,*pFVar3,
                   L"FAudioThreadTask.UpdateAudioVolumeProxy","STATGROUP_TaskGraphTasks",
                   "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      _Init_thread_footer(&::_TSS0);
    }
    FAudioVolumeProxy::FAudioVolumeProxy(&FStack_a8,this);
    TVar4.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioUpdateAudioVolumeProxy;
    if (StatPtr_STAT_AudioUpdateAudioVolumeProxy ==
        (FThreadSafeStaticStat<_private:_void___cdecl_AAudioVolume::UpdateProxy(void)const_::_8_::FStat_STAT_AudioUpdateAudioVolumeProxy>
         )0x0) {
      pFVar3 = ::FName::FName(&FStackX_10,"STAT_AudioUpdateAudioVolumeProxy");
      TVar4.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioUpdateAudioVolumeProxy,*pFVar3
                      ,L"FAudioThreadTask.UpdateAudioVolumeProxy","STATGROUP_TaskGraphTasks",
                      "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    pFStack_138 = pFVar2;
    FAudioVolumeProxy::FAudioVolumeProxy(&FStack_130,&FStack_a8);
    apcStack_168[0] = (code *)0x0;
    puStack_140 = FMemory::Malloc(0x98,8);
    puVar1 = puStack_140 + 1;
    *puStack_140 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`AAudioVolume::UpdateProxy'::`8'::<lambda_1>,1,1>::
                    _vftable_;
    *puVar1 = pFStack_138;
    FAudioVolumeProxy::FAudioVolumeProxy((FAudioVolumeProxy *)(puStack_140 + 2),&FStack_130);
    if (puVar1 != (undefined8 *)0x0) {
      apcStack_168[0] =
           UE::Core::Private::Function::
           TFunctionRefCaller<`AAudioVolume::UpdateProxy'::__l8::<lambda_1>,void>::Call;
    }
    FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)apcStack_168,TVar4)
    ;
    DestructItems<FAudioVolumeSubmixOverrideSettings,int>
              ((FAudioVolumeSubmixOverrideSettings *)
               FStack_130.SubmixOverrideSettings.AllocatorInstance.Data,
               FStack_130.SubmixOverrideSettings.ArrayNum);
    if ((FAudioVolumeSubmixOverrideSettings *)
        FStack_130.SubmixOverrideSettings.AllocatorInstance.Data !=
        (FAudioVolumeSubmixOverrideSettings *)0x0) {
      FMemory::Free(FStack_130.SubmixOverrideSettings.AllocatorInstance.Data);
    }
    DestructItems<FAudioVolumeSubmixSendSettings,int>
              ((FAudioVolumeSubmixSendSettings *)
               FStack_130.SubmixSendSettings.AllocatorInstance.Data,
               FStack_130.SubmixSendSettings.ArrayNum);
    if ((FAudioVolumeSubmixSendSettings *)FStack_130.SubmixSendSettings.AllocatorInstance.Data !=
        (FAudioVolumeSubmixSendSettings *)0x0) {
      FMemory::Free(FStack_130.SubmixSendSettings.AllocatorInstance.Data);
    }
    DestructItems<FAudioVolumeSubmixOverrideSettings,int>
              ((FAudioVolumeSubmixOverrideSettings *)
               FStack_a8.SubmixOverrideSettings.AllocatorInstance.Data,
               FStack_a8.SubmixOverrideSettings.ArrayNum);
    if ((FAudioVolumeSubmixOverrideSettings *)
        FStack_a8.SubmixOverrideSettings.AllocatorInstance.Data !=
        (FAudioVolumeSubmixOverrideSettings *)0x0) {
      FMemory::Free(FStack_a8.SubmixOverrideSettings.AllocatorInstance.Data);
    }
    DestructItems<FAudioVolumeSubmixSendSettings,int>
              ((FAudioVolumeSubmixSendSettings *)FStack_a8.SubmixSendSettings.AllocatorInstance.Data
               ,FStack_a8.SubmixSendSettings.ArrayNum);
    if ((FAudioVolumeSubmixSendSettings *)FStack_a8.SubmixSendSettings.AllocatorInstance.Data !=
        (FAudioVolumeSubmixSendSettings *)0x0) {
      FMemory::Free(FStack_a8.SubmixSendSettings.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateProxy @ 1476cca70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AAudioVolume::UpdateProxy(AAudioVolume *this)

{
  undefined8 *puVar1;
  UWorld *this_00;
  FAudioDevice *pFVar2;
  FName *pFVar3;
  TStatId TVar4;
  FName local_res10;
  code *local_168 [5];
  undefined8 *local_140;
  FAudioDevice *local_138;
  FAudioVolumeProxy local_130;
  FAudioVolumeProxy local_a8;
  
  this_00 = AActor::GetWorld((AActor *)this);
  if ((this_00 != (UWorld *)0x0) &&
     (pFVar2 = UWorld::GetAudioDeviceRaw(this_00), pFVar2 != (FAudioDevice *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_AudioUpdateAudioVolumeProxy ==
          (FThreadSafeStaticStat<_private:_void___cdecl_AAudioVolume::UpdateProxy(void)const_::_8_::FStat_STAT_AudioUpdateAudioVolumeProxy>
           )0x0) {
        pFVar3 = ::FName::FName(&local_res10,"STAT_AudioUpdateAudioVolumeProxy");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioUpdateAudioVolumeProxy,*pFVar3,
                   L"FAudioThreadTask.UpdateAudioVolumeProxy","STATGROUP_TaskGraphTasks",
                   "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      _Init_thread_footer(&::_TSS0);
    }
    FAudioVolumeProxy::FAudioVolumeProxy(&local_a8,this);
    TVar4.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioUpdateAudioVolumeProxy;
    if (StatPtr_STAT_AudioUpdateAudioVolumeProxy ==
        (FThreadSafeStaticStat<_private:_void___cdecl_AAudioVolume::UpdateProxy(void)const_::_8_::FStat_STAT_AudioUpdateAudioVolumeProxy>
         )0x0) {
      pFVar3 = ::FName::FName(&local_res10,"STAT_AudioUpdateAudioVolumeProxy");
      TVar4.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioUpdateAudioVolumeProxy,*pFVar3
                      ,L"FAudioThreadTask.UpdateAudioVolumeProxy","STATGROUP_TaskGraphTasks",
                      "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    local_138 = pFVar2;
    FAudioVolumeProxy::FAudioVolumeProxy(&local_130,&local_a8);
    local_168[0] = (code *)0x0;
    local_140 = FMemory::Malloc(0x98,8);
    puVar1 = local_140 + 1;
    *local_140 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`AAudioVolume::UpdateProxy'::`8'::<lambda_1>,1,1>::_vftable_
    ;
    *puVar1 = local_138;
    FAudioVolumeProxy::FAudioVolumeProxy((FAudioVolumeProxy *)(local_140 + 2),&local_130);
    if (puVar1 != (undefined8 *)0x0) {
      local_168[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`AAudioVolume::UpdateProxy'::__l8::<lambda_1>,void>::Call;
    }
    FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_168,TVar4);
    DestructItems<FAudioVolumeSubmixOverrideSettings,int>
              ((FAudioVolumeSubmixOverrideSettings *)
               local_130.SubmixOverrideSettings.AllocatorInstance.Data,
               local_130.SubmixOverrideSettings.ArrayNum);
    if ((FAudioVolumeSubmixOverrideSettings *)
        local_130.SubmixOverrideSettings.AllocatorInstance.Data !=
        (FAudioVolumeSubmixOverrideSettings *)0x0) {
      FMemory::Free(local_130.SubmixOverrideSettings.AllocatorInstance.Data);
    }
    DestructItems<FAudioVolumeSubmixSendSettings,int>
              ((FAudioVolumeSubmixSendSettings *)local_130.SubmixSendSettings.AllocatorInstance.Data
               ,local_130.SubmixSendSettings.ArrayNum);
    if ((FAudioVolumeSubmixSendSettings *)local_130.SubmixSendSettings.AllocatorInstance.Data !=
        (FAudioVolumeSubmixSendSettings *)0x0) {
      FMemory::Free(local_130.SubmixSendSettings.AllocatorInstance.Data);
    }
    DestructItems<FAudioVolumeSubmixOverrideSettings,int>
              ((FAudioVolumeSubmixOverrideSettings *)
               local_a8.SubmixOverrideSettings.AllocatorInstance.Data,
               local_a8.SubmixOverrideSettings.ArrayNum);
    if ((FAudioVolumeSubmixOverrideSettings *)local_a8.SubmixOverrideSettings.AllocatorInstance.Data
        != (FAudioVolumeSubmixOverrideSettings *)0x0) {
      FMemory::Free(local_a8.SubmixOverrideSettings.AllocatorInstance.Data);
    }
    DestructItems<FAudioVolumeSubmixSendSettings,int>
              ((FAudioVolumeSubmixSendSettings *)local_a8.SubmixSendSettings.AllocatorInstance.Data,
               local_a8.SubmixSendSettings.ArrayNum);
    if ((FAudioVolumeSubmixSendSettings *)local_a8.SubmixSendSettings.AllocatorInstance.Data !=
        (FAudioVolumeSubmixSendSettings *)0x0) {
      FMemory::Free(local_a8.SubmixSendSettings.AllocatorInstance.Data);
    }
  }
  return;
}

// ValidateGeneratedRepEnums @ 1476cce50

void __thiscall
AAudioVolume::ValidateGeneratedRepEnums
          (AAudioVolume *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&Name_bEnabled,L"bEnabled");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1->ArrayNum < 0xb) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xa0);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  else {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
  }
  if (Name_bEnabled != FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\AudioVolume.gen.cpp"
                       ,0x3cd,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAudioVolume"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execOnRep_bEnabled @ 1476d3100

void __cdecl AAudioVolume::execOnRep_bEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001476d3118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x788))();
  return;
}

// execSetEnabled @ 1476d39c0

void __cdecl AAudioVolume::execSetEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (uint)(local_res8[0] != 0);
  if (uVar2 != (*(uint *)&param_1[0x13].field_0x4 & 1)) {
    *(uint *)&param_1[0x13].field_0x4 = *(uint *)&param_1[0x13].field_0x4 & 0xfffffffe | uVar2;
    if (uVar2 != 0) {
      AddProxy((AAudioVolume *)param_1);
      return;
    }
    RemoveProxy((AAudioVolume *)param_1);
  }
  return;
}

// execSetInteriorSettings @ 1476d4190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl AAudioVolume::execSetInteriorSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  FProperty *pFVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar *puVar18;
  uchar local_38 [4];
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  undefined8 uStack_1c;
  
  uStack_1c = _UNK_15174b768;
  local_24 = ___xmm_3f000000469c40003f0000003f800000;
  local_38[0] = '\0';
  local_34 = ___xmm_3f000000469c40003f0000003f800000;
  uStack_2c = _UNK_15174b768;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar18 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar18 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((((*(uchar *)(param_1 + 0x14) != *puVar18) ||
         (*(float *)(puVar18 + 4) != *(float *)&param_1[0x14].field_0x4)) ||
        (*(float *)(puVar18 + 8) != *(float *)&param_1[0x14].field_0x8)) ||
       ((*(float *)(puVar18 + 0xc) != *(float *)&param_1[0x14].field_0xc ||
        (*(float *)(puVar18 + 0x10) != *(float *)&param_1[0x14].field_0x10)))) ||
      ((*(float *)(puVar18 + 0x14) != *(float *)&param_1[0x14].field_0x14 ||
       ((*(float *)(puVar18 + 0x18) != *(float *)&param_1[0x14].field_0x18 ||
        (*(float *)(puVar18 + 0x1c) != *(float *)&param_1[0x14].field_0x1c)))))) ||
     (*(float *)(puVar18 + 0x20) != *(float *)&param_1[0x14].field_0x20)) {
    bVar1 = param_1[0x13].field_0x4;
    uVar3 = puVar18[1];
    uVar4 = puVar18[2];
    uVar5 = puVar18[3];
    uVar6 = puVar18[4];
    uVar7 = puVar18[5];
    uVar8 = puVar18[6];
    uVar9 = puVar18[7];
    uVar10 = puVar18[8];
    uVar11 = puVar18[9];
    uVar12 = puVar18[10];
    uVar13 = puVar18[0xb];
    uVar14 = puVar18[0xc];
    uVar15 = puVar18[0xd];
    uVar16 = puVar18[0xe];
    uVar17 = puVar18[0xf];
    param_1[0x14].field_0x0 = puVar18[0];
    param_1[0x14].field_0x1 = uVar3;
    param_1[0x14].field_0x2 = uVar4;
    param_1[0x14].field_0x3 = uVar5;
    param_1[0x14].field_0x4 = uVar6;
    param_1[0x14].field_0x5 = uVar7;
    param_1[0x14].field_0x6 = uVar8;
    param_1[0x14].field_0x7 = uVar9;
    param_1[0x14].field_0x8 = uVar10;
    param_1[0x14].field_0x9 = uVar11;
    param_1[0x14].field_0xa = uVar12;
    param_1[0x14].field_0xb = uVar13;
    param_1[0x14].field_0xc = uVar14;
    param_1[0x14].field_0xd = uVar15;
    param_1[0x14].field_0xe = uVar16;
    param_1[0x14].field_0xf = uVar17;
    uVar3 = puVar18[0x11];
    uVar4 = puVar18[0x12];
    uVar5 = puVar18[0x13];
    uVar6 = puVar18[0x14];
    uVar7 = puVar18[0x15];
    uVar8 = puVar18[0x16];
    uVar9 = puVar18[0x17];
    uVar10 = puVar18[0x18];
    uVar11 = puVar18[0x19];
    uVar12 = puVar18[0x1a];
    uVar13 = puVar18[0x1b];
    uVar14 = puVar18[0x1c];
    uVar15 = puVar18[0x1d];
    uVar16 = puVar18[0x1e];
    uVar17 = puVar18[0x1f];
    param_1[0x14].field_0x10 = puVar18[0x10];
    param_1[0x14].field_0x11 = uVar3;
    param_1[0x14].field_0x12 = uVar4;
    param_1[0x14].field_0x13 = uVar5;
    param_1[0x14].field_0x14 = uVar6;
    param_1[0x14].field_0x15 = uVar7;
    param_1[0x14].field_0x16 = uVar8;
    param_1[0x14].field_0x17 = uVar9;
    param_1[0x14].field_0x18 = uVar10;
    param_1[0x14].field_0x19 = uVar11;
    param_1[0x14].field_0x1a = uVar12;
    param_1[0x14].field_0x1b = uVar13;
    param_1[0x14].field_0x1c = uVar14;
    param_1[0x14].field_0x1d = uVar15;
    param_1[0x14].field_0x1e = uVar16;
    param_1[0x14].field_0x1f = uVar17;
    uVar3 = puVar18[0x21];
    uVar4 = puVar18[0x22];
    uVar5 = puVar18[0x23];
    param_1[0x14].field_0x20 = puVar18[0x20];
    param_1[0x14].field_0x21 = uVar3;
    param_1[0x14].field_0x22 = uVar4;
    param_1[0x14].field_0x23 = uVar5;
    if ((bVar1 & 1) != 0) {
      UpdateProxy((AAudioVolume *)param_1);
    }
  }
  return;
}

// execSetPriority @ 1476d4790

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl AAudioVolume::execSetPriority(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWorld *pUVar2;
  FIdentityFunctor local_res8 [8];
  float local_res10 [2];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != *(float *)(param_1 + 0x13)) {
    *(float *)(param_1 + 0x13) = local_res10[0];
    pUVar2 = AActor::GetWorld((AActor *)param_1);
    if (pUVar2 != (UWorld *)0x0) {
      AlgoImpl::
      IntroSortInternal<AAudioVolume_*,int,FIdentityFunctor,TDereferenceWrapper<AAudioVolume_*,_AAudioVolume::SetPriority_::__l8::<lambda_1>_>_>
                ((AAudioVolume **)(pUVar2->AudioVolumes).AllocatorInstance.Data,
                 (pUVar2->AudioVolumes).ArrayNum,local_res8[0],(<lambda_1> *)local_res8);
      if ((param_1[0x13].field_0x4 & 1) != 0) {
        UpdateProxy((AAudioVolume *)param_1);
      }
    }
  }
  return;
}

// execSetReverbSettings @ 1476d48e0

void __cdecl AAudioVolume::execSetReverbSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FReverbSettings *this;
  FReverbSettings local_28;
  
  local_28.bApplyReverb = true;
  local_28.Volume = 0.5;
  local_28.FadeTime = 2.0;
  local_28.ReverbEffect.field0_0x0.DebugPtr = (TObjectPtr<UReverbEffect>_u_0)0x0;
  local_28.ReverbPluginEffect.field0_0x0.DebugPtr = (TObjectPtr<USoundEffectSubmixPreset>_u_0)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = &local_28;
  if ((FReverbSettings *)param_2->MostRecentPropertyAddress != (FReverbSettings *)0x0) {
    this = (FReverbSettings *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FReverbSettings::operator==(this,(FReverbSettings *)&param_1[0x13].field_0x8);
  if (!bVar2) {
    FReverbSettings::operator=((FReverbSettings *)&param_1[0x13].field_0x8,this);
    if ((param_1[0x13].field_0x4 & 1) != 0) {
      UpdateProxy((AAudioVolume *)param_1);
    }
  }
  return;
}

// execSetSubmixOverrideSettings @ 1476d4c40

void __cdecl
AAudioVolume::execSetSubmixOverrideSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FAudioVolumeSubmixOverrideSettings,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FAudioVolumeSubmixOverrideSettings,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FAudioVolumeSubmixOverrideSettings,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FAudioVolumeSubmixOverrideSettings,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FAudioVolumeSubmixOverrideSettings,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FAudioVolumeSubmixOverrideSettings,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FAudioVolumeSubmixOverrideSettings,TSizedDefaultAllocator<32>_> *)
             &param_1[0x15].field_0x10,pTVar2);
  if ((param_1[0x13].field_0x4 & 1) != 0) {
    UpdateProxy((AAudioVolume *)param_1);
  }
  DestructItems<FAudioVolumeSubmixOverrideSettings,int>
            ((FAudioVolumeSubmixOverrideSettings *)local_18.AllocatorInstance.Data,local_18.ArrayNum
            );
  if ((FAudioVolumeSubmixOverrideSettings *)local_18.AllocatorInstance.Data !=
      (FAudioVolumeSubmixOverrideSettings *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetSubmixSendSettings @ 1476d4d10

void __cdecl AAudioVolume::execSetSubmixSendSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> *)(param_1 + 0x15),
             pTVar2);
  if ((param_1[0x13].field_0x4 & 1) != 0) {
    UpdateProxy((AAudioVolume *)param_1);
  }
  DestructItems<FAudioVolumeSubmixSendSettings,int>
            ((FAudioVolumeSubmixSendSettings *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FAudioVolumeSubmixSendSettings *)local_18.AllocatorInstance.Data !=
      (FAudioVolumeSubmixSendSettings *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

