// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Configure @ 148b2cd50

void __thiscall
`UEngine::InitializePortalServices'::__l11::FNullPortalServiceLocator::Configure
          (void *this,FString *param_1,FWildcardString *param_2,FName *param_3)

{
  return;
}

// GetService @ 148b422e0

TSharedPtr<IPortalService,1> * __thiscall
`UEngine::InitializePortalServices'::__l11::FNullPortalServiceLocator::GetService
          (void *this,TSharedPtr<IPortalService,1> *__return_storage_ptr__,FString *param_1,
          FString *param_2)

{
  __return_storage_ptr__->Object = (IPortalService *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

