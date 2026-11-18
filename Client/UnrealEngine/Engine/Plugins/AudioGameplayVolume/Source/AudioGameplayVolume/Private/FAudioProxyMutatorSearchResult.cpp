// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 1

// Reset @ 14d9a9240

void __thiscall FAudioProxyMutatorSearchResult::Reset(FAudioProxyMutatorSearchResult *this)

{
  int *piVar1;
  int iVar2;
  undefined3 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FInteriorSettings *pFVar7;
  FInteriorSettings local_38;
  
  if (*(int *)&(this->VolumeSet).Elements.field_0x8 !=
      *(int *)&(this->VolumeSet).Elements.field_0x34) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements
              (&this->VolumeSet);
    iVar2 = *(int *)&(this->VolumeSet).Elements.field_0xc;
    *(undefined4 *)&(this->VolumeSet).Elements.field_0x8 = 0;
    if (iVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)this,0,(int *)&(this->VolumeSet).Elements.field_0xc);
    }
    *(undefined4 *)&(this->VolumeSet).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->VolumeSet).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->VolumeSet).Elements.field_0x28 = 0;
  }
  DestructItems<TSharedPtr<FProxyVolumeMutator,1>,int>
            ((TSharedPtr<FProxyVolumeMutator,1> *)(this->MatchingMutators).AllocatorInstance.Data,
             (this->MatchingMutators).ArrayNum);
  piVar1 = &(this->MatchingMutators).ArrayMax;
  (this->MatchingMutators).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->MatchingMutators).AllocatorInstance,0,piVar1);
  }
  (this->ReverbSettings).bApplyReverb = true;
  (this->ReverbSettings).ReverbEffect.field0_0x0.DebugPtr = (UReverbEffect *)0x0;
  (this->ReverbSettings).ReverbPluginEffect.field0_0x0.DebugPtr = (USoundEffectSubmixPreset *)0x0;
  (this->ReverbSettings).Volume = 0.5;
  (this->ReverbSettings).FadeTime = 2.0;
  pFVar7 = FInteriorSettings::FInteriorSettings(&local_38);
  uVar3 = *(undefined3 *)&pFVar7->field_0x1;
  fVar4 = pFVar7->ExteriorVolume;
  fVar5 = pFVar7->ExteriorTime;
  fVar6 = pFVar7->ExteriorLPF;
  (this->InteriorSettings).bIsWorldSettings = pFVar7->bIsWorldSettings;
  *(undefined3 *)&(this->InteriorSettings).field_0x1 = uVar3;
  (this->InteriorSettings).ExteriorVolume = fVar4;
  (this->InteriorSettings).ExteriorTime = fVar5;
  (this->InteriorSettings).ExteriorLPF = fVar6;
  fVar4 = pFVar7->InteriorVolume;
  fVar5 = pFVar7->InteriorTime;
  fVar6 = pFVar7->InteriorLPF;
  (this->InteriorSettings).ExteriorLPFTime = pFVar7->ExteriorLPFTime;
  (this->InteriorSettings).InteriorVolume = fVar4;
  (this->InteriorSettings).InteriorTime = fVar5;
  (this->InteriorSettings).InteriorLPF = fVar6;
  (this->InteriorSettings).InteriorLPFTime = pFVar7->InteriorLPFTime;
  return;
}

