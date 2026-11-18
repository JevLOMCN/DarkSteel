// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FArchiveStackTraceMemoryWriter @ 141ed1f40

FArchiveStackTraceMemoryWriter * __thiscall
FArchiveStackTraceMemoryWriter::FArchiveStackTraceMemoryWriter
          (FArchiveStackTraceMemoryWriter *this,FArchiveCallstacks *param_1,FArchiveDiffMap *param_2
          ,long64 param_3,long64 param_4,bool param_5,wchar_t *param_6)

{
  int *piVar1;
  
  FLargeMemoryWriter::FLargeMemoryWriter((FLargeMemoryWriter *)this,param_4,param_5,param_6);
  this->_padding_ = (longlong)&___7FArchiveStackTraceMemoryWriter__6B_;
  FArchiveProxy::FArchiveProxy((FArchiveProxy *)&this->StackTraceWriter,(FArchive *)this);
  (this->StackTraceWriter).Callstacks = param_1;
  (this->StackTraceWriter)._padding_ = (longlong)&___7FArchiveStackTraceWriter__6B_;
  (this->StackTraceWriter).DiffMap = param_2;
  (this->StackTraceWriter).DiffMapOffset = param_3;
  (this->StackTraceWriter).StackIgnoreCount = 2;
  piVar1 = &(this->StackTraceWriter).StackIgnoreCount;
  *piVar1 = *piVar1 + 1;
  (this->StackTraceWriter).bInnerArchiveDisabled = true;
  return this;
}

// Serialize @ 141f0f3a0

void __thiscall
FArchiveStackTraceMemoryWriter::Serialize
          (FArchiveStackTraceMemoryWriter *this,void *param_1,long64 param_2)

{
  (**(code **)((this->StackTraceWriter)._padding_ + 0x188))();
  FLargeMemoryWriter::Serialize((FLargeMemoryWriter *)this,param_1,param_2);
  return;
}

