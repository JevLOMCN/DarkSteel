// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// Dequeue @ 14ec6b8f0

bool __thiscall
TCircularQueue<UIpNetDriver::FReceivedPacket>::Dequeue
          (TCircularQueue<UIpNetDriver::FReceivedPacket> *this,FReceivedPacket *param_1)

{
  TAtomic<unsigned_int> TVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  
  TVar1 = this->Head;
  if (TVar1 == this->Tail) {
    return false;
  }
  uVar6 = (uint)TVar1 & (this->Buffer).IndexMask;
  uVar5 = 0;
  if ((int)uVar6 < (this->Buffer).Elements.ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  UIpNetDriver::FReceivedPacket::operator=
            (param_1,(FReceivedPacket *)
                     ((this->Buffer).Elements.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x30))
  ;
  LOCK();
  this->Head = (TAtomic<unsigned_int>)((int)TVar1 + 1U & (this->Buffer).IndexMask);
  UNLOCK();
  return true;
}

