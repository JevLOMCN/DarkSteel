// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 4

// FGenericFileIoStoreEventQueue @ 142a51e10

FGenericFileIoStoreEventQueue * __thiscall
FGenericFileIoStoreEventQueue::FGenericFileIoStoreEventQueue(FGenericFileIoStoreEventQueue *this)

{
  FEvent *pFVar1;
  
  pFVar1 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->ServiceEvent = pFVar1;
  return this;
}

// ~FGenericFileIoStoreEventQueue @ 142a564f0

void __thiscall
FGenericFileIoStoreEventQueue::~FGenericFileIoStoreEventQueue(FGenericFileIoStoreEventQueue *this)

{
  FGenericPlatformProcess::ReturnSynchEventToPool(this->ServiceEvent);
  return;
}

// ServiceNotify @ 142a9fc30

void __thiscall FGenericFileIoStoreEventQueue::ServiceNotify(FGenericFileIoStoreEventQueue *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142a9fc36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->ServiceEvent->_padding_ + 0x10))();
  return;
}

// ServiceWait @ 142a9fc60

void __thiscall FGenericFileIoStoreEventQueue::ServiceWait(FGenericFileIoStoreEventQueue *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142a9fc6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->ServiceEvent->_padding_ + 0x20))(this->ServiceEvent,0xffffffff,0);
  return;
}

