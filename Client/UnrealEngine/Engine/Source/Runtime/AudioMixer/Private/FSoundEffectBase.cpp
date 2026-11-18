// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 2

// ~FSoundEffectBase @ 146540e70

void __thiscall FSoundEffectBase::~FSoundEffectBase(FSoundEffectBase *this)

{
  TNode *pTVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  pTVar1 = (this->CommandQueue).Tail;
  while (pTVar1 != (TNode *)0x0) {
    (this->CommandQueue).Tail = pTVar1->NextNode;
    if (*(longlong *)&pTVar1->Item != 0) {
      plVar2 = *(longlong **)&(pTVar1->Item).field_0x28;
      plVar4 = (longlong *)&(pTVar1->Item).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar4 = plVar2;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    ::operator_delete(pTVar1,0x40);
    pTVar1 = (this->CommandQueue).Tail;
  }
  pFVar3 = (this->CurrentAudioThreadSettingsData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000146540ee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  return;
}

// OnPresetChanged @ 146563ee0

void __thiscall FSoundEffectBase::OnPresetChanged(FSoundEffectBase *this)

{
  return;
}

