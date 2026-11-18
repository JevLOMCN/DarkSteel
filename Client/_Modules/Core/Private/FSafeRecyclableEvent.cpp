// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// Create @ 141630ba0

bool __thiscall FSafeRecyclableEvent::Create(FSafeRecyclableEvent *this,bool param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141630ba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)this->InnerEvent->_padding_)();
  return (bool)uVar1;
}

// IsManualReset @ 14164a040

bool __thiscall FSafeRecyclableEvent::IsManualReset(FSafeRecyclableEvent *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014164a047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->InnerEvent->_padding_ + 8))();
  return (bool)uVar1;
}

// Reset @ 141658030

void __thiscall FSafeRecyclableEvent::Reset(FSafeRecyclableEvent *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141658037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->InnerEvent->_padding_ + 0x18))();
  return;
}

// Trigger @ 141665ab0

void __thiscall FSafeRecyclableEvent::Trigger(FSafeRecyclableEvent *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141665ab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->InnerEvent->_padding_ + 0x10))();
  return;
}

// Wait @ 14166af20

bool __thiscall FSafeRecyclableEvent::Wait(FSafeRecyclableEvent *this,uint param_1,bool param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014166af27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->InnerEvent->_padding_ + 0x20))();
  return (bool)uVar1;
}

