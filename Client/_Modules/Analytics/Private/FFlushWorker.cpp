// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 2

// FFlushWorker @ 143133540

FFlushWorker * __thiscall
FAnalyticsPropertyStore::FFlushWorker::FFlushWorker
          (FFlushWorker *this,FAnalyticsPropertyStore *param_1)

{
  this->Store = param_1;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  return this;
}

// DoWork @ 143136890

void __thiscall FAnalyticsPropertyStore::FFlushWorker::DoWork(FFlushWorker *this)

{
  FlushInternal(this->Store,&this->Store->AsyncFlushDataCopy);
  return;
}

