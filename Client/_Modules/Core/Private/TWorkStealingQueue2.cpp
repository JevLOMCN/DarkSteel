// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// TWorkStealingQueue2<LowLevelTasks::FTask,1024> @ 14147c890

TWorkStealingQueue2<LowLevelTasks::FTask,1024> * __thiscall
LowLevelTasks::LocalQueue_Impl::TWorkStealingQueue2<LowLevelTasks::FTask,1024>::
TWorkStealingQueue2<LowLevelTasks::FTask,1024>(TWorkStealingQueue2<LowLevelTasks::FTask,1024> *this)

{
  longlong lVar1;
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)&this->field_0x100;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)&this->field_0x80 = 0;
  memset(_Dst,0,0x20000);
  lVar1 = 0x400;
  do {
    *_Dst = 0;
    _Dst = _Dst + 0x10;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return this;
}

