// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 12

// StaticClass @ 1492632a0

UClass * __cdecl UNiagaraDebugHUDSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDebugHUDSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDebugHUDSettings",
               &Z_Registration_Info_UClass_UNiagaraDebugHUDSettings.InnerSingleton,
               StaticRegisterNativesUNiagaraDebugHUDSettings,0x290,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,
               L"EditorPerProjectUserSettings",InternalConstructor<UNiagaraDebugHUDSettings>,
               InternalVTableHelperCtorCaller<UNiagaraDebugHUDSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDebugHUDSettings.InnerSingleton;
}

// UNiagaraDebugHUDSettings @ 149277f00

UNiagaraDebugHUDSettings * __thiscall
UNiagaraDebugHUDSettings::UNiagaraDebugHUDSettings
          (UNiagaraDebugHUDSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->OnChangedDelegate).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FNotifyHook__;
  *(undefined8 *)&this->OnChangedDelegate = 0;
  *(undefined8 *)&(this->OnChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedDelegate).field_0x10 = 0;
  FNiagaraDebugHUDSettingsData::FNiagaraDebugHUDSettingsData(&this->Data);
  return this;
}

// UNiagaraDebugHUDSettings @ 149277f60

UNiagaraDebugHUDSettings * __thiscall
UNiagaraDebugHUDSettings::UNiagaraDebugHUDSettings
          (UNiagaraDebugHUDSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->OnChangedDelegate).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FNotifyHook__;
  *(undefined8 *)&this->OnChangedDelegate = 0;
  *(undefined8 *)&(this->OnChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedDelegate).field_0x10 = 0;
  FNiagaraDebugHUDSettingsData::FNiagaraDebugHUDSettingsData(&this->Data);
  return this;
}

// ~UNiagaraDebugHUDSettings @ 14927aa80

void __thiscall UNiagaraDebugHUDSettings::~UNiagaraDebugHUDSettings(UNiagaraDebugHUDSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FNotifyHook__;
  FNiagaraDebugHUDSettingsData::~FNiagaraDebugHUDSettingsData(&this->Data);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedDelegate).field_0x8,*(int *)&(this->OnChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedDelegate);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1492a5fa0

UClass * __cdecl UNiagaraDebugHUDSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDebugHUDSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDebugHUDSettings",
               &Z_Registration_Info_UClass_UNiagaraDebugHUDSettings.InnerSingleton,
               StaticRegisterNativesUNiagaraDebugHUDSettings,0x290,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,
               L"EditorPerProjectUserSettings",InternalConstructor<UNiagaraDebugHUDSettings>,
               InternalVTableHelperCtorCaller<UNiagaraDebugHUDSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDebugHUDSettings.InnerSingleton;
}

// NotifyPostChange @ 1492ae5f0

void __thiscall
UNiagaraDebugHUDSettings::NotifyPostChange
          (UNiagaraDebugHUDSettings *this,FPropertyChangedEvent *param_1,FEditPropertyChain *param_2
          )

{
  NotifyPropertyChanged((UNiagaraDebugHUDSettings *)&this[-1].Data.SystemColorHSVMax);
  return;
}

// NotifyPostChange @ 1492ae600

void __thiscall
UNiagaraDebugHUDSettings::NotifyPostChange
          (UNiagaraDebugHUDSettings *this,FPropertyChangedEvent *param_1,FProperty *param_2)

{
  NotifyPropertyChanged((UNiagaraDebugHUDSettings *)&this[-1].Data.SystemColorHSVMax);
  return;
}

// NotifyPreChange @ 1492ae620

void __thiscall
UNiagaraDebugHUDSettings::NotifyPreChange
          (UNiagaraDebugHUDSettings *this,FEditPropertyChain *param_1)

{
  return;
}

// NotifyPreChange @ 1492ae630

void __thiscall
UNiagaraDebugHUDSettings::NotifyPreChange(UNiagaraDebugHUDSettings *this,FProperty *param_1)

{
  return;
}

// NotifyPropertyChanged @ 1492ae640

void __thiscall UNiagaraDebugHUDSettings::NotifyPropertyChanged(UNiagaraDebugHUDSettings *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnChangedDelegate,
             (FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnChangedDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnChangedDelegate).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnChangedDelegate).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnChangedDelegate).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnChangedDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnChangedDelegate,false)
    ;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  UObject::SaveConfig((UObject *)this,0x4000,(wchar_t *)0x0,GConfig,true);
  return;
}

// PostInitProperties @ 1492af1d0

void __thiscall UNiagaraDebugHUDSettings::PostInitProperties(UNiagaraDebugHUDSettings *this)

{
  FNiagaraDebugHUDSettingsData local_248;
  
  UObject::PostInitProperties((UObject *)this);
  FNiagaraDebugHUDSettingsData::FNiagaraDebugHUDSettingsData(&local_248);
  (this->Data).PlaybackMode = local_248.PlaybackMode;
  (this->Data).bPlaybackRateEnabled = local_248.bPlaybackRateEnabled;
  DestructItems<FNiagaraDebugHUDVariable,int>
            ((FNiagaraDebugHUDVariable *)local_248.ParticlesVariables.AllocatorInstance.Data,
             local_248.ParticlesVariables.ArrayNum);
  if ((FNiagaraDebugHUDVariable *)local_248.ParticlesVariables.AllocatorInstance.Data !=
      (FNiagaraDebugHUDVariable *)0x0) {
    FMemory::Free(local_248.ParticlesVariables.AllocatorInstance.Data);
  }
  DestructItems<FNiagaraDebugHUDVariable,int>
            ((FNiagaraDebugHUDVariable *)local_248.SystemVariables.AllocatorInstance.Data,
             local_248.SystemVariables.ArrayNum);
  if ((FNiagaraDebugHUDVariable *)local_248.SystemVariables.AllocatorInstance.Data !=
      (FNiagaraDebugHUDVariable *)0x0) {
    FMemory::Free(local_248.SystemVariables.AllocatorInstance.Data);
  }
  if (local_248.ComponentFilter.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.ComponentFilter.Data.AllocatorInstance.Data);
  }
  if (local_248.ActorFilter.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.ActorFilter.Data.AllocatorInstance.Data);
  }
  if (local_248.EmitterFilter.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.EmitterFilter.Data.AllocatorInstance.Data);
  }
  if (local_248.SystemFilter.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.SystemFilter.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUNiagaraDebugHUDSettings @ 1492b6920

void __cdecl UNiagaraDebugHUDSettings::StaticRegisterNativesUNiagaraDebugHUDSettings(void)

{
  return;
}

