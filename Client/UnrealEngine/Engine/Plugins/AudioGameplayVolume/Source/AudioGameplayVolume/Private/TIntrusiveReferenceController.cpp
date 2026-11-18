// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 5

// DestroyObject @ 14d9a4390

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FProxyMutator_Attenuation,1>::DestroyObject
          (TIntrusiveReferenceController<FProxyMutator_Attenuation,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d9a43b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14d9a43c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FProxyMutator_Filter,1>::DestroyObject
          (TIntrusiveReferenceController<FProxyMutator_Filter,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d9a43e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14d9a43f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FProxyMutator_Reverb,1>::DestroyObject
          (TIntrusiveReferenceController<FProxyMutator_Reverb,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d9a4410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14d9a4420

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FProxyMutator_SubmixOverride,1>::DestroyObject
          (TIntrusiveReferenceController<FProxyMutator_SubmixOverride,1> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  DestructItems<FAudioVolumeSubmixOverrideSettings,int>
            (*(FAudioVolumeSubmixOverrideSettings **)((this->ObjectStorage).Pad + 0x30),
             *(int *)((this->ObjectStorage).Pad + 0x38));
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d9a4468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14d9a4480

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FProxyMutator_SubmixSend,1>::DestroyObject
          (TIntrusiveReferenceController<FProxyMutator_SubmixSend,1> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  DestructItems<FAudioVolumeSubmixSendSettings,int>
            (*(FAudioVolumeSubmixSendSettings **)((this->ObjectStorage).Pad + 0x30),
             *(int *)((this->ObjectStorage).Pad + 0x38));
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d9a44c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

