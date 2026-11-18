// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 9

// ~FSoundEffectSubmix @ 146540f00

void __thiscall FSoundEffectSubmix::~FSoundEffectSubmix(FSoundEffectSubmix *this)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)&this->field_0x68;
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)&this->field_0x68 = *puVar1;
    if (puVar1[2] != 0) {
      plVar2 = puVar1 + 4;
      if ((longlong *)puVar1[7] != (longlong *)0x0) {
        plVar2 = (longlong *)puVar1[7];
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    ::operator_delete(puVar1,0x40);
    puVar1 = *(undefined8 **)&this->field_0x68;
  }
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x000146540ee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->field_0x10);
  return;
}

// GetDesiredInputChannelCountOverride @ 146557530

uint __thiscall FSoundEffectSubmix::GetDesiredInputChannelCountOverride(FSoundEffectSubmix *this)

{
  return 0xffffffff;
}

// GetDryLevel @ 146557590

float __thiscall FSoundEffectSubmix::GetDryLevel(FSoundEffectSubmix *this)

{
  return 0.0;
}

// Init @ 14655d060

void __thiscall
FSoundEffectSubmix::Init(FSoundEffectSubmix *this,FSoundEffectSubmixInitData *param_1)

{
  return;
}

// OnProcessAudio @ 146564760

void __thiscall
FSoundEffectSubmix::OnProcessAudio
          (FSoundEffectSubmix *this,FSoundEffectSubmixInputData *param_1,
          FSoundEffectSubmixOutputData *param_2)

{
  return;
}

// SetParameters @ 146573710

bool __thiscall
FSoundEffectSubmix::SetParameters(FSoundEffectSubmix *this,FAudioEffectParameters *param_1)

{
  return false;
}

// SupportsDefaultEQ @ 146578d10

bool __thiscall FSoundEffectSubmix::SupportsDefaultEQ(FSoundEffectSubmix *this)

{
  return false;
}

// SupportsDefaultReverb @ 146578d30

bool __thiscall FSoundEffectSubmix::SupportsDefaultReverb(FSoundEffectSubmix *this)

{
  return false;
}

// Tick @ 146579820

void __thiscall FSoundEffectSubmix::Tick(FSoundEffectSubmix *this)

{
  return;
}

