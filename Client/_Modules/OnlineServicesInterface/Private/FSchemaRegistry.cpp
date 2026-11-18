// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 3

// GetDefinition @ 14ec29130

TSharedPtr<UE::Online::FSchemaDefinition_const_,1> * __thiscall
UE::Online::FSchemaRegistry::GetDefinition
          (FSchemaRegistry *this,
          TSharedPtr<UE::Online::FSchemaDefinition_const_,1> *__return_storage_ptr__,FName *param_1)

{
  FSchemaDefinition *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedRef<UE::Online::FSchemaDefinition_const_,1> *pTVar3;
  
  pTVar3 = TMapBase<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,0>_>
                   *)this,*param_1);
  if (pTVar3 != (TSharedRef<UE::Online::FSchemaDefinition_const_,1> *)0x0) {
    pFVar1 = pTVar3->Object;
    pTVar2 = (pTVar3->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pFVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FSchemaDefinition *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetDefinition @ 14ec291a0

TSharedPtr<UE::Online::FSchemaDefinition_const_,1> * __thiscall
UE::Online::FSchemaRegistry::GetDefinition
          (FSchemaRegistry *this,
          TSharedPtr<UE::Online::FSchemaDefinition_const_,1> *__return_storage_ptr__,long64 param_1)

{
  FSchemaDefinition *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedRef<UE::Online::FSchemaDefinition_const_,1> *pTVar3;
  
  pTVar3 = TMapBase<__int64,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,0>_>
           ::Find((TMapBase<__int64,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,0>_>
                   *)&this->SchemaDefinitionsByCompatibilityId,param_1);
  if (pTVar3 != (TSharedRef<UE::Online::FSchemaDefinition_const_,1> *)0x0) {
    pFVar1 = pTVar3->Object;
    pTVar2 = (pTVar3->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pFVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FSchemaDefinition *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// IsSchemaChildOf @ 14ec2a3e0

bool __thiscall
UE::Online::FSchemaRegistry::IsSchemaChildOf(FSchemaRegistry *this,FName *param_1,FName *param_2)

{
  TSharedRef<UE::Online::FSchemaDefinition_const_,1> *pTVar1;
  FName *pFVar2;
  
  pFVar2 = (FName *)0x0;
  pTVar1 = TMapBase<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,0>_>
                   *)this,*param_1);
  if (pTVar1 != (TSharedRef<UE::Online::FSchemaDefinition_const_,1> *)0x0) {
    pFVar2 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                       (&pTVar1->Object->ParentSchemaIds,*param_2);
  }
  return pFVar2 != (FName *)0x0;
}

