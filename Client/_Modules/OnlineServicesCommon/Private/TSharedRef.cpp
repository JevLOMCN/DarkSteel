// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// TSharedRef<UE::Online::FSchemaRegistry_const_,1><UE::Online::FSchemaRegistry> @ 14efd3160

TSharedRef<UE::Online::FSchemaRegistry_const_,1> * __thiscall
TSharedRef<UE::Online::FSchemaRegistry_const_,1>::
TSharedRef<UE::Online::FSchemaRegistry_const_,1><UE::Online::FSchemaRegistry>
          (TSharedRef<UE::Online::FSchemaRegistry_const_,1> *this,
          TSharedRef<UE::Online::FSchemaRegistry,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

