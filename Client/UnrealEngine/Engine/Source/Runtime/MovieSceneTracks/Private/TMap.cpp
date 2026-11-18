// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_> @ 14675ed50

TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
* __thiscall
TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
::
TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
          (TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
           *this,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
                 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (&this->field_0x10 != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(&this->field_0x10,&param_1->field_0x10,0x10);
      }
      if (*(void **)&this->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x20);
      }
      *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  return this;
}

// TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_> @ 146807400

TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>
* __thiscall
TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>
::
TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>
          (TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>
           *this,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>
                 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (&this->field_0x10 != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(&this->field_0x10,&param_1->field_0x10,0x10);
      }
      if (*(void **)&this->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x20);
      }
      *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  return this;
}

