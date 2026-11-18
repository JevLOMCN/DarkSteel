// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Run @ 1414af400

uint __thiscall UE::FIoServiceThread::Run(FIoServiceThread *this)

{
  FEvent *pFVar1;
  char cVar2;
  
  while( true ) {
    do {
      cVar2 = (**(code **)&this->ThreadEntry)
                        ((longlong)&this->Dispatcher->_padding_ +
                         (longlong)*(int *)&(this->ThreadEntry).field_0x8);
    } while (cVar2 != '\0');
    if (this->bStopRequested != (atomic<bool>)0x0) break;
    pFVar1 = (this->WakeUpEvent).Event;
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,0xffffffff,0);
  }
  return 0;
}

// Stop @ 1414b1a40

void __thiscall UE::FIoServiceThread::Stop(FIoServiceThread *this)

{
  LOCK();
  this->bStopRequested = (atomic<bool>)0x1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001414b1a4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->WakeUpEvent).Event)->_padding_ + 0x10))();
  return;
}

