// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// FSlateResourceHandle @ 1424eb1c0

FSlateResourceHandle * __thiscall
FSlateResourceHandle::FSlateResourceHandle
          (FSlateResourceHandle *this,TSharedPtr<FSlateSharedHandleData,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->Data).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Data).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// FSlateResourceHandle @ 1424eb1f0

FSlateResourceHandle * __thiscall
FSlateResourceHandle::FSlateResourceHandle(FSlateResourceHandle *this)

{
  (this->Data).Object = (FSlateSharedHandleData *)0x0;
  (this->Data).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// GetResourceProxy @ 14250f100

FSlateShaderResourceProxy * __thiscall
FSlateResourceHandle::GetResourceProxy(FSlateResourceHandle *this)

{
  FSlateSharedHandleData *pFVar1;
  
  pFVar1 = (this->Data).Object;
  if (pFVar1 != (FSlateSharedHandleData *)0x0) {
    return pFVar1->Proxy;
  }
  return (FSlateShaderResourceProxy *)0x0;
}

// IsValid @ 142511940

bool __thiscall FSlateResourceHandle::IsValid(FSlateResourceHandle *this)

{
  FSlateSharedHandleData *pFVar1;
  
  pFVar1 = (this->Data).Object;
  if ((pFVar1 != (FSlateSharedHandleData *)0x0) &&
     (pFVar1->Proxy != (FSlateShaderResourceProxy *)0x0)) {
    return true;
  }
  return false;
}

// operator= @ 14254dfe0

FSlateResourceHandle * __thiscall
FSlateResourceHandle::operator=(FSlateResourceHandle *this,FSlateResourceHandle *param_1)

{
  if (this != param_1) {
    (this->Data).Object = (param_1->Data).Object;
    (param_1->Data).Object = (FSlateSharedHandleData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Data).SharedReferenceCount,&(param_1->Data).SharedReferenceCount);
  }
  return this;
}

