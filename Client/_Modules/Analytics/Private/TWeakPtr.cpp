// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 3

// TWeakPtr<IAnalyticsSpan,1><IAnalyticsSpan> @ 1431321c0

TWeakPtr<IAnalyticsSpan,1> * __thiscall
TWeakPtr<IAnalyticsSpan,1>::TWeakPtr<IAnalyticsSpan,1><IAnalyticsSpan>
          (TWeakPtr<IAnalyticsSpan,1> *this,TSharedPtr<IAnalyticsSpan,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TWeakPtr<IAnalyticsSpan,1> @ 143133250

TWeakPtr<IAnalyticsSpan,1> * __thiscall
TWeakPtr<IAnalyticsSpan,1>::TWeakPtr<IAnalyticsSpan,1>
          (TWeakPtr<IAnalyticsSpan,1> *this,TWeakPtr<IAnalyticsSpan,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  (this->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~TWeakPtr<IAnalyticsSpan,1> @ 143133940

void __thiscall
TWeakPtr<IAnalyticsSpan,1>::~TWeakPtr<IAnalyticsSpan,1>(TWeakPtr<IAnalyticsSpan,1> *this)

{
  SharedPointerInternals::FWeakReferencer<1>::~FWeakReferencer<1>(&this->WeakReferenceCount);
  return;
}

