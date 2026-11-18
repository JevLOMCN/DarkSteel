// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 2

// Accept @ 1465456a0

void __thiscall
Audio::Quartz::PrivateDefs::
TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::
TElementBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::Accept(TElementBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
         *this,IVisitorBase *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)0x0;
  puVar1 = &this->field_0x8;
  if (this == (TElementBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
               *)0x0) {
    puVar1 = puVar2;
  }
  (**(code **)((longlong)*param_1 + 0x18))(param_1,puVar1);
  puVar1 = &this->field_0x10;
  if (this == (TElementBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
               *)0x0) {
    puVar1 = puVar2;
  }
  (**(code **)((longlong)*param_1 + 0x10))(param_1,puVar1);
  puVar1 = &this->field_0x18;
  if (this == (TElementBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
               *)0x0) {
    puVar1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001465456ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1 + 8))(param_1,puVar1);
  return;
}

// Accept @ 146545710

void __thiscall
Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::
TElementBase<Audio::Quartz::IQuartzClock>::Accept
          (TElementBase<Audio::Quartz::IQuartzClock> *this,IVisitorBase *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = &this->field_0x8;
  if (this == (TElementBase<Audio::Quartz::IQuartzClock> *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x000146545726. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1 + 8))(param_1,puVar1);
  return;
}

