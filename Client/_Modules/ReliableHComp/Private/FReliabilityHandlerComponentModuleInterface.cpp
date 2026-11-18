// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ReliableHComp
// Functions: 1

// CreateComponentInstance @ 14463c580

TSharedPtr<HandlerComponent,1> * __thiscall
FReliabilityHandlerComponentModuleInterface::CreateComponentInstance
          (FReliabilityHandlerComponentModuleInterface *this,
          TSharedPtr<HandlerComponent,1> *__return_storage_ptr__,FString *param_1)

{
  FName *pFVar1;
  FName local_res10 [3];
  
  local_res10[0] = (FName)::operator_new(0x58);
  if (local_res10[0] != (FName)0x0) {
    pFVar1 = ::FName::FName(local_res10,L"ReliabilityHandlerComponent");
    HandlerComponent::HandlerComponent((HandlerComponent *)local_res10[0],*pFVar1);
    *(undefined8 *)((longlong)local_res10[0] + 0x38) = 1;
    *(undefined ***)local_res10[0] = &___7ReliabilityHandlerComponent__6B_;
    *(undefined8 *)((longlong)local_res10[0] + 0x48) = 0x3fb999999999999a;
    ((HandlerComponent *)((longlong)local_res10[0] + 0x28))->_padding_ = 0;
    *(PacketHandler **)((longlong)local_res10[0] + 0x30) = (PacketHandler *)0x0;
    *(undefined8 *)((longlong)local_res10[0] + 0x40) = 0;
    ((HandlerComponent *)((longlong)local_res10[0] + 0x50))->_padding_ = 0;
  }
  TSharedPtr<HandlerComponent,1>::TSharedPtr<HandlerComponent,1><ReliabilityHandlerComponent>
            (__return_storage_ptr__,(TRawPtrProxy<ReliabilityHandlerComponent> *)local_res10);
  return __return_storage_ptr__;
}

