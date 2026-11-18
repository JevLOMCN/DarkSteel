// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FAudioVolumeProxy @ 147686850

FAudioVolumeProxy * __thiscall
FAudioVolumeProxy::FAudioVolumeProxy(FAudioVolumeProxy *this,FAudioVolumeProxy *param_1)

{
  UReverbEffect *pUVar1;
  USoundEffectSubmixPreset *pUVar2;
  undefined3 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  this->AudioVolumeID = param_1->AudioVolumeID;
  this->WorldID = param_1->WorldID;
  this->Priority = param_1->Priority;
  (this->ReverbSettings).bApplyReverb = (param_1->ReverbSettings).bApplyReverb;
  pUVar1 = (param_1->ReverbSettings).ReverbEffect.field0_0x0.DebugPtr;
  (this->ReverbSettings).ReverbEffect.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UReverbEffect *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar2 = (param_1->ReverbSettings).ReverbPluginEffect.field0_0x0.DebugPtr;
  (this->ReverbSettings).ReverbPluginEffect.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (USoundEffectSubmixPreset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->ReverbSettings).Volume = (param_1->ReverbSettings).Volume;
  (this->ReverbSettings).FadeTime = (param_1->ReverbSettings).FadeTime;
  uVar3 = *(undefined3 *)&(param_1->InteriorSettings).field_0x1;
  fVar4 = (param_1->InteriorSettings).ExteriorVolume;
  fVar5 = (param_1->InteriorSettings).ExteriorTime;
  fVar6 = (param_1->InteriorSettings).ExteriorLPF;
  (this->InteriorSettings).bIsWorldSettings = (param_1->InteriorSettings).bIsWorldSettings;
  *(undefined3 *)&(this->InteriorSettings).field_0x1 = uVar3;
  (this->InteriorSettings).ExteriorVolume = fVar4;
  (this->InteriorSettings).ExteriorTime = fVar5;
  (this->InteriorSettings).ExteriorLPF = fVar6;
  fVar4 = (param_1->InteriorSettings).InteriorVolume;
  fVar5 = (param_1->InteriorSettings).InteriorTime;
  fVar6 = (param_1->InteriorSettings).InteriorLPF;
  (this->InteriorSettings).ExteriorLPFTime = (param_1->InteriorSettings).ExteriorLPFTime;
  (this->InteriorSettings).InteriorVolume = fVar4;
  (this->InteriorSettings).InteriorTime = fVar5;
  (this->InteriorSettings).InteriorLPF = fVar6;
  (this->InteriorSettings).InteriorLPFTime = (param_1->InteriorSettings).InteriorLPFTime;
  (this->SubmixSendSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubmixSendSettings).AllocatorInstance.Data =
       (param_1->SubmixSendSettings).AllocatorInstance.Data;
  (param_1->SubmixSendSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubmixSendSettings).ArrayNum = (param_1->SubmixSendSettings).ArrayNum;
  (this->SubmixSendSettings).ArrayMax = (param_1->SubmixSendSettings).ArrayMax;
  (param_1->SubmixSendSettings).ArrayNum = 0;
  (param_1->SubmixSendSettings).ArrayMax = 0;
  (this->SubmixOverrideSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubmixOverrideSettings).AllocatorInstance.Data =
       (param_1->SubmixOverrideSettings).AllocatorInstance.Data;
  (param_1->SubmixOverrideSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubmixOverrideSettings).ArrayNum = (param_1->SubmixOverrideSettings).ArrayNum;
  (this->SubmixOverrideSettings).ArrayMax = (param_1->SubmixOverrideSettings).ArrayMax;
  (param_1->SubmixOverrideSettings).ArrayNum = 0;
  (param_1->SubmixOverrideSettings).ArrayMax = 0;
  this->BodyInstance = param_1->BodyInstance;
  this->bChanged = param_1->bChanged;
  return this;
}

// FAudioVolumeProxy @ 147686940

FAudioVolumeProxy * __thiscall
FAudioVolumeProxy::FAudioVolumeProxy(FAudioVolumeProxy *this,FAudioVolumeProxy *param_1)

{
  TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FAudioVolumeSubmixOverrideSettings,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  UReverbEffect *pUVar5;
  USoundEffectSubmixPreset *pUVar6;
  FAudioVolumeSubmixSendSettings *pFVar7;
  FAudioVolumeSubmixOverrideSettings *pFVar8;
  undefined3 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  this->AudioVolumeID = param_1->AudioVolumeID;
  this->WorldID = param_1->WorldID;
  this->Priority = param_1->Priority;
  (this->ReverbSettings).bApplyReverb = (param_1->ReverbSettings).bApplyReverb;
  pUVar5 = (param_1->ReverbSettings).ReverbEffect.field0_0x0.DebugPtr;
  (this->ReverbSettings).ReverbEffect.field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UReverbEffect *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar6 = (param_1->ReverbSettings).ReverbPluginEffect.field0_0x0.DebugPtr;
  (this->ReverbSettings).ReverbPluginEffect.field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (USoundEffectSubmixPreset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pTVar1 = &this->SubmixSendSettings;
  (this->ReverbSettings).Volume = (param_1->ReverbSettings).Volume;
  (this->ReverbSettings).FadeTime = (param_1->ReverbSettings).FadeTime;
  uVar9 = *(undefined3 *)&(param_1->InteriorSettings).field_0x1;
  fVar10 = (param_1->InteriorSettings).ExteriorVolume;
  fVar11 = (param_1->InteriorSettings).ExteriorTime;
  fVar12 = (param_1->InteriorSettings).ExteriorLPF;
  (this->InteriorSettings).bIsWorldSettings = (param_1->InteriorSettings).bIsWorldSettings;
  *(undefined3 *)&(this->InteriorSettings).field_0x1 = uVar9;
  (this->InteriorSettings).ExteriorVolume = fVar10;
  (this->InteriorSettings).ExteriorTime = fVar11;
  (this->InteriorSettings).ExteriorLPF = fVar12;
  fVar10 = (param_1->InteriorSettings).InteriorVolume;
  fVar11 = (param_1->InteriorSettings).InteriorTime;
  fVar12 = (param_1->InteriorSettings).InteriorLPF;
  (this->InteriorSettings).ExteriorLPFTime = (param_1->InteriorSettings).ExteriorLPFTime;
  (this->InteriorSettings).InteriorVolume = fVar10;
  (this->InteriorSettings).InteriorTime = fVar11;
  (this->InteriorSettings).InteriorLPF = fVar12;
  (this->InteriorSettings).InteriorLPFTime = (param_1->InteriorSettings).InteriorLPFTime;
  piVar2 = &(this->SubmixSendSettings).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->SubmixSendSettings).ArrayNum;
  pFVar7 = (FAudioVolumeSubmixSendSettings *)(param_1->SubmixSendSettings).AllocatorInstance.Data;
  (this->SubmixSendSettings).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FAudioVolumeSubmixSendSettings,FAudioVolumeSubmixSendSettings,int>
              ((pTVar1->AllocatorInstance).Data,pFVar7,iVar4);
  }
  pTVar3 = &this->SubmixOverrideSettings;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SubmixOverrideSettings).ArrayMax;
  iVar4 = (param_1->SubmixOverrideSettings).ArrayNum;
  pFVar8 = (FAudioVolumeSubmixOverrideSettings *)
           (param_1->SubmixOverrideSettings).AllocatorInstance.Data;
  (this->SubmixOverrideSettings).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FAudioVolumeSubmixOverrideSettings,FAudioVolumeSubmixOverrideSettings,int>
              ((pTVar3->AllocatorInstance).Data,pFVar8,iVar4);
  }
  this->BodyInstance = param_1->BodyInstance;
  this->bChanged = param_1->bChanged;
  return this;
}

// FAudioVolumeProxy @ 147686ab0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAudioVolumeProxy * __thiscall
FAudioVolumeProxy::FAudioVolumeProxy(FAudioVolumeProxy *this,AAudioVolume *param_1)

{
  TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FAudioVolumeSubmixOverrideSettings,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  UReverbEffect *pUVar5;
  USoundEffectSubmixPreset *pUVar6;
  FAudioVolumeSubmixSendSettings *pFVar7;
  FAudioVolumeSubmixOverrideSettings *pFVar8;
  undefined3 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UWorld *pUVar13;
  FBodyInstance *pFVar14;
  
  this->AudioVolumeID = *(uint *)((longlong)&param_1->_padding_ + 4);
  pUVar13 = AActor::GetWorld((AActor *)param_1);
  this->WorldID = *(uint *)((longlong)&pUVar13->_padding_ + 4);
  this->Priority = param_1->Priority;
  (this->ReverbSettings).bApplyReverb = (param_1->Settings).bApplyReverb;
  pUVar5 = (param_1->Settings).ReverbEffect.field0_0x0.DebugPtr;
  (this->ReverbSettings).ReverbEffect.field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UReverbEffect *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar6 = (param_1->Settings).ReverbPluginEffect.field0_0x0.DebugPtr;
  (this->ReverbSettings).ReverbPluginEffect.field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (USoundEffectSubmixPreset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pTVar1 = &this->SubmixSendSettings;
  (this->ReverbSettings).Volume = (param_1->Settings).Volume;
  (this->ReverbSettings).FadeTime = (param_1->Settings).FadeTime;
  uVar9 = *(undefined3 *)&(param_1->AmbientZoneSettings).field_0x1;
  fVar10 = (param_1->AmbientZoneSettings).ExteriorVolume;
  fVar11 = (param_1->AmbientZoneSettings).ExteriorTime;
  fVar12 = (param_1->AmbientZoneSettings).ExteriorLPF;
  (this->InteriorSettings).bIsWorldSettings = (param_1->AmbientZoneSettings).bIsWorldSettings;
  *(undefined3 *)&(this->InteriorSettings).field_0x1 = uVar9;
  (this->InteriorSettings).ExteriorVolume = fVar10;
  (this->InteriorSettings).ExteriorTime = fVar11;
  (this->InteriorSettings).ExteriorLPF = fVar12;
  fVar10 = (param_1->AmbientZoneSettings).InteriorVolume;
  fVar11 = (param_1->AmbientZoneSettings).InteriorTime;
  fVar12 = (param_1->AmbientZoneSettings).InteriorLPF;
  (this->InteriorSettings).ExteriorLPFTime = (param_1->AmbientZoneSettings).ExteriorLPFTime;
  (this->InteriorSettings).InteriorVolume = fVar10;
  (this->InteriorSettings).InteriorTime = fVar11;
  (this->InteriorSettings).InteriorLPF = fVar12;
  (this->InteriorSettings).InteriorLPFTime = (param_1->AmbientZoneSettings).InteriorLPFTime;
  piVar2 = &(this->SubmixSendSettings).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->SubmixSendSettings).ArrayNum;
  pFVar7 = (FAudioVolumeSubmixSendSettings *)(param_1->SubmixSendSettings).AllocatorInstance.Data;
  (this->SubmixSendSettings).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FAudioVolumeSubmixSendSettings,FAudioVolumeSubmixSendSettings,int>
              ((pTVar1->AllocatorInstance).Data,pFVar7,iVar4);
  }
  pTVar3 = &this->SubmixOverrideSettings;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SubmixOverrideSettings).ArrayMax;
  iVar4 = (param_1->SubmixOverrideSettings).ArrayNum;
  pFVar8 = (FAudioVolumeSubmixOverrideSettings *)
           (param_1->SubmixOverrideSettings).AllocatorInstance.Data;
  (this->SubmixOverrideSettings).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FAudioVolumeSubmixOverrideSettings,FAudioVolumeSubmixOverrideSettings,int>
              ((pTVar3->AllocatorInstance).Data,pFVar8,iVar4);
  }
  pFVar14 = (FBodyInstance *)
            (**(code **)(*(longlong *)param_1->_padding_ + 0x818))
                      ((longlong *)param_1->_padding_,0,1,0xffffffff);
  this->BodyInstance = pFVar14;
  this->bChanged = false;
  return this;
}

