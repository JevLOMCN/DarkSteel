// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// FOutputWatcher @ 14b34a9c0

FOutputWatcher * __thiscall
Metasound::FMetasoundGeneratorHandle::FOutputWatcher::FOutputWatcher
          (FOutputWatcher *this,FOutputWatcher *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  TMulticastDelegate<void___cdecl(FName,FMetaSoundOutput_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined8 local_48 [2];
  FReadAccessScope local_38;
  
  puVar1 = &(this->OnOutputValueChanged).WatchDelegates.field_0x8;
  (this->AnalyzerAddress)._padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
  uVar6 = 0;
  (this->AnalyzerAddress).InstanceID = (param_1->AnalyzerAddress).InstanceID;
  uVar3 = (param_1->AnalyzerAddress).NodeID.B;
  uVar4 = (param_1->AnalyzerAddress).NodeID.C;
  uVar5 = (param_1->AnalyzerAddress).NodeID.D;
  (this->AnalyzerAddress).NodeID.A = (param_1->AnalyzerAddress).NodeID.A;
  (this->AnalyzerAddress).NodeID.B = uVar3;
  (this->AnalyzerAddress).NodeID.C = uVar4;
  (this->AnalyzerAddress).NodeID.D = uVar5;
  (this->AnalyzerAddress).OutputName = (param_1->AnalyzerAddress).OutputName;
  (this->AnalyzerAddress).DataType = (param_1->AnalyzerAddress).DataType;
  (this->AnalyzerAddress).AnalyzerName = (param_1->AnalyzerAddress).AnalyzerName;
  uVar3 = (param_1->AnalyzerAddress).AnalyzerInstanceID.B;
  uVar4 = (param_1->AnalyzerAddress).AnalyzerInstanceID.C;
  uVar5 = (param_1->AnalyzerAddress).AnalyzerInstanceID.D;
  (this->AnalyzerAddress).AnalyzerInstanceID.A = (param_1->AnalyzerAddress).AnalyzerInstanceID.A;
  (this->AnalyzerAddress).AnalyzerInstanceID.B = uVar3;
  (this->AnalyzerAddress).AnalyzerInstanceID.C = uVar4;
  (this->AnalyzerAddress).AnalyzerInstanceID.D = uVar5;
  (this->AnalyzerAddress).AnalyzerMemberName = (param_1->AnalyzerAddress).AnalyzerMemberName;
  (this->AnalyzerAddress).UseDataTransmissionCenter =
       (param_1->AnalyzerAddress).UseDataTransmissionCenter;
  *(undefined8 *)&(this->OnOutputValueChanged).WatchDelegates = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->OnOutputValueChanged).WatchDelegates.field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &param_1->OnOutputValueChanged,&local_38);
  puVar2 = &(param_1->OnOutputValueChanged).WatchDelegates.field_0x8;
  pvVar7 = (void *)0x0;
  uVar8 = uVar6;
  if (local_48 != (undefined8 *)puVar2) {
    pvVar7 = *(void **)puVar2;
    *(undefined8 *)puVar2 = 0;
    uVar6 = *(undefined4 *)&(param_1->OnOutputValueChanged).WatchDelegates.field_0x10;
    uVar8 = *(undefined4 *)&(param_1->OnOutputValueChanged).WatchDelegates.field_0x14;
    *(undefined8 *)&(param_1->OnOutputValueChanged).WatchDelegates.field_0x10 = 0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if ((undefined8 *)puVar1 != local_48) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(void **)puVar1 = pvVar7;
    *(undefined4 *)&(this->OnOutputValueChanged).WatchDelegates.field_0x10 = uVar6;
    *(undefined4 *)&(this->OnOutputValueChanged).WatchDelegates.field_0x14 = uVar8;
    pvVar7 = (void *)0x0;
  }
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  this_00 = &(this->OnOutputValueChanged).NativeWatchDelegates;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->OnOutputValueChanged).NativeWatchDelegates.field_0x8 = 0;
  *(undefined8 *)&(this->OnOutputValueChanged).NativeWatchDelegates.field_0x10 = 0;
  *(undefined8 *)&(this->OnOutputValueChanged).NativeWatchDelegates.field_0x18 = 2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,
             (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(param_1->OnOutputValueChanged).NativeWatchDelegates);
  return this;
}

