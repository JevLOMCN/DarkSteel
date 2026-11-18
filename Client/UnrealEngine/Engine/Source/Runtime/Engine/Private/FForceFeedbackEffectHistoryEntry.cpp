// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FForceFeedbackEffectHistoryEntry @ 14834a500

FForceFeedbackEffectHistoryEntry * __thiscall
FForceFeedbackEffectHistoryEntry::FForceFeedbackEffectHistoryEntry
          (FForceFeedbackEffectHistoryEntry *this,FActiveForceFeedbackEffect *param_1,float param_2)

{
  UForceFeedbackEffect *pUVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  
  (this->LastActiveForceFeedbackEffect).ForceFeedbackEffect.field0_0x0.DebugPtr =
       (UForceFeedbackEffect *)0x0;
  (this->LastActiveForceFeedbackEffect).Parameters.Tag.ComparisonIndex = 0;
  (this->LastActiveForceFeedbackEffect).Parameters.Tag.Number = 0;
  (this->LastActiveForceFeedbackEffect).Parameters.bLooping = false;
  (this->LastActiveForceFeedbackEffect).Parameters.bIgnoreTimeDilation = false;
  (this->LastActiveForceFeedbackEffect).Parameters.bPlayWhilePaused = false;
  (this->LastActiveForceFeedbackEffect).PlatformUser.InternalId = -1;
  (this->LastActiveForceFeedbackEffect).PlayTime = 0.0;
  *(undefined8 *)&(this->LastActiveForceFeedbackEffect).ActiveDeviceProperties.Elements = 0;
  *(undefined8 *)&(this->LastActiveForceFeedbackEffect).ActiveDeviceProperties.Elements.field_0x8 =
       0;
  *(undefined8 *)&(this->LastActiveForceFeedbackEffect).ActiveDeviceProperties.Elements.field_0x20 =
       0;
  (this->LastActiveForceFeedbackEffect).bActivatedDeviceProperties = false;
  *(undefined4 *)&(this->LastActiveForceFeedbackEffect).ActiveDeviceProperties.Elements.field_0x28 =
       0;
  *(undefined4 *)&(this->LastActiveForceFeedbackEffect).ActiveDeviceProperties.Elements.field_0x2c =
       0x80;
  *(undefined4 *)&(this->LastActiveForceFeedbackEffect).ActiveDeviceProperties.Elements.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->LastActiveForceFeedbackEffect).ActiveDeviceProperties.Elements.field_0x34 =
       0;
  (this->LastActiveForceFeedbackEffect).ActiveDeviceProperties.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->LastActiveForceFeedbackEffect).ActiveDeviceProperties.HashSize = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->ForceFeedbackEffect).field0_0x0.DebugPtr,
     pUVar1 != (UForceFeedbackEffect *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->LastActiveForceFeedbackEffect).ForceFeedbackEffect.field0_0x0 =
       (param_1->ForceFeedbackEffect).field0_0x0;
  (this->LastActiveForceFeedbackEffect).Parameters.Tag = (param_1->Parameters).Tag;
  bVar2 = (param_1->Parameters).bIgnoreTimeDilation;
  bVar3 = (param_1->Parameters).bPlayWhilePaused;
  uVar4 = (param_1->Parameters).field_0xb;
  (this->LastActiveForceFeedbackEffect).Parameters.bLooping = (param_1->Parameters).bLooping;
  (this->LastActiveForceFeedbackEffect).Parameters.bIgnoreTimeDilation = bVar2;
  (this->LastActiveForceFeedbackEffect).Parameters.bPlayWhilePaused = bVar3;
  (this->LastActiveForceFeedbackEffect).Parameters.field_0xb = uVar4;
  (this->LastActiveForceFeedbackEffect).PlayTime = param_1->PlayTime;
  (this->LastActiveForceFeedbackEffect).PlatformUser.InternalId = (param_1->PlatformUser).InternalId
  ;
  (this->LastActiveForceFeedbackEffect).bActivatedDeviceProperties =
       param_1->bActivatedDeviceProperties;
  TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
  ::operator=(&(this->LastActiveForceFeedbackEffect).ActiveDeviceProperties,
              &param_1->ActiveDeviceProperties);
  this->TimeShown = param_2;
  FActiveForceFeedbackEffect::~FActiveForceFeedbackEffect(param_1);
  return this;
}

