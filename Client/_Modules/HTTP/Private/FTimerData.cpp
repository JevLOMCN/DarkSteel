// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 1

// FTimerData @ 14314def0

FTimerData * __thiscall UE::EventLoop::FTimerData::FTimerData(FTimerData *this,FTimerData *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  *(undefined8 *)&this->Callback = *(undefined8 *)&param_1->Callback;
  *(undefined8 *)&(this->Callback).field_0x28 = *(undefined8 *)&(param_1->Callback).field_0x28;
  *(undefined8 *)&(param_1->Callback).field_0x28 = 0;
  uVar2 = *(undefined8 *)&(param_1->Callback).field_0x18;
  *(undefined8 *)&(this->Callback).field_0x10 = *(undefined8 *)&(param_1->Callback).field_0x10;
  *(undefined8 *)&(this->Callback).field_0x18 = uVar2;
  *(undefined8 *)&(this->Callback).field_0x20 = *(undefined8 *)&(param_1->Callback).field_0x20;
  if (*(longlong *)&this->Callback != 0) {
    *(undefined8 *)&param_1->Callback = 0;
  }
  (this->FirstDelay).bIsSet = false;
  bVar1 = (param_1->FirstDelay).bIsSet;
  (this->FirstDelay).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->FirstDelay).TypedValue.Ticks = (param_1->FirstDelay).TypedValue.Ticks;
  }
  (this->Rate).Ticks = (param_1->Rate).Ticks;
  (this->Expiration).Ticks = (param_1->Expiration).Ticks;
  this->Status = param_1->Status;
  this->field_0x51 = this->field_0x51 ^ (this->bRepeat ^ param_1->bRepeat) & 1;
  return this;
}

