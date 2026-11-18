// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 4

// FResolveInfoCached @ 14310b0f0

FResolveInfoCached * __thiscall
FResolveInfoCached::FResolveInfoCached(FResolveInfoCached *this,FInternetAddr *param_1)

{
  TSharedPtr<FInternetAddr,1> *pTVar1;
  undefined8 *puVar2;
  FInternetAddr *local_28;
  FSharedReferencer<1> local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pTVar1 = &this->Addr;
  pTVar1->Object = (FInternetAddr *)0x0;
  this->_padding_ = (longlong)&___7FResolveInfoCached__6B_;
  (this->Addr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  puVar2 = (undefined8 *)(**(code **)((longlong)*param_1 + 0xa0))(param_1,local_18);
  local_20.ReferenceController = (TReferenceControllerBase<1> *)puVar2[1];
  local_28 = (FInternetAddr *)*puVar2;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TSharedPtr<FInternetAddr,1> *)&local_28) {
    pTVar1->Object = local_28;
    local_28 = (FInternetAddr *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Addr).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return this;
}

// GetErrorCode @ 1431107e0

int __thiscall FResolveInfoCached::GetErrorCode(FResolveInfoCached *this)

{
  return 0;
}

// GetResolvedAddress @ 1431132b0

FInternetAddr * __thiscall FResolveInfoCached::GetResolvedAddress(FResolveInfoCached *this)

{
  code *pcVar1;
  bool bVar2;
  FInternetAddr *pFVar3;
  
  if ((this->Addr).Object != (FInternetAddr *)0x0) {
    return (this->Addr).Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInternetAddr *)(*pcVar1)();
    return pFVar3;
  }
  return (this->Addr).Object;
}

// IsComplete @ 143114050

bool __thiscall FResolveInfoCached::IsComplete(FResolveInfoCached *this)

{
  return true;
}

