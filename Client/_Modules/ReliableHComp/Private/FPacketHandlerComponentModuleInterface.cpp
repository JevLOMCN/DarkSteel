// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ReliableHComp
// Functions: 1

// CreateComponentInstance @ 14463c520

TSharedPtr<HandlerComponent,1> * __thiscall
FPacketHandlerComponentModuleInterface::CreateComponentInstance
          (FPacketHandlerComponentModuleInterface *this,
          TSharedPtr<HandlerComponent,1> *__return_storage_ptr__,FString *param_1)

{
  __return_storage_ptr__->Object = (HandlerComponent *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

