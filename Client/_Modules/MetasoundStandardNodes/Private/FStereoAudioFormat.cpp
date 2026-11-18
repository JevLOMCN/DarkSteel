// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 1

// operator= @ 14affcdf0

FStereoAudioFormat * __thiscall
Metasound::FStereoAudioFormat::operator=(FStereoAudioFormat *this,FStereoAudioFormat *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)&param_1->field_0x8;
  puVar1 = &param_1->field_0x20;
  puVar2 = &this->field_0x20;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)&this->field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&this->field_0x18 = uVar3;
  if (puVar2 != puVar1) {
    DestructItems<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int>
              (*(TDataWriteReference<Metasound::FAudioBuffer> **)puVar2,*(int *)&this->field_0x28);
    if (*(void **)puVar2 != (void *)0x0) {
      FMemory::Free(*(void **)puVar2);
    }
    *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
    *(undefined8 *)puVar1 = 0;
    *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
    *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
    *(undefined8 *)&param_1->field_0x28 = 0;
  }
  puVar1 = &param_1->field_0x30;
  puVar2 = &this->field_0x30;
  if (puVar2 != puVar1) {
    DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
              (*(TDataReadReference<Metasound::FAudioBuffer> **)puVar2,*(int *)&this->field_0x38);
    if (*(void **)puVar2 != (void *)0x0) {
      FMemory::Free(*(void **)puVar2);
    }
    *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
    *(undefined8 *)puVar1 = 0;
    *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
    *(undefined4 *)&this->field_0x3c = *(undefined4 *)&param_1->field_0x3c;
    *(undefined8 *)&param_1->field_0x38 = 0;
  }
  return this;
}

