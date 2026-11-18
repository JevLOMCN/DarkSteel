// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// Create @ 141aa25a0

bool __thiscall FSingleThreadEvent::Create(FSingleThreadEvent *this,bool param_1)

{
  this->bManualReset = param_1;
  return true;
}

// IsManualReset @ 141ab2f30

bool __thiscall FSingleThreadEvent::IsManualReset(FSingleThreadEvent *this)

{
  return this->bManualReset;
}

// Reset @ 141abe9d0

void __thiscall FSingleThreadEvent::Reset(FSingleThreadEvent *this)

{
  this->bTriggered = false;
  return;
}

// Trigger @ 141ac30d0

void __thiscall FSingleThreadEvent::Trigger(FSingleThreadEvent *this)

{
  this->bTriggered = true;
  return;
}

// Wait @ 141ac50b0

bool __thiscall FSingleThreadEvent::Wait(FSingleThreadEvent *this,uint param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->bTriggered == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bTriggered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\SingleThreadEvent.h"
                       ,0x3a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this->bTriggered = this->bManualReset;
  return true;
}

