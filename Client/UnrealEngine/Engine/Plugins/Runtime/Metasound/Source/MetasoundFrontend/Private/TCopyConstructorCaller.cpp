// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 6

// Construct @ 14ae66440

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FMetasoundFrontendClass>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 = &___7FMetasoundFrontendClass__6B_;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x40);
  *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x48) = *(undefined4 *)((longlong)param_2 + 0x48);
  FMetasoundFrontendClassInterface::FMetasoundFrontendClassInterface
            ((FMetasoundFrontendClassInterface *)((longlong)param_1 + 0x50),
             (FMetasoundFrontendClassInterface *)((longlong)param_2 + 0x50));
  return;
}

// Construct @ 14ae66490

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FMetasoundFrontendInterface>::Construct
          (void *param_1,void *param_2)

{
  FMetasoundFrontendClassInterface::FMetasoundFrontendClassInterface(param_1,param_2);
  FMetasoundFrontendInterfaceMetadata::FMetasoundFrontendInterfaceMetadata
            ((FMetasoundFrontendInterfaceMetadata *)((longlong)param_1 + 0x40),
             (FMetasoundFrontendInterfaceMetadata *)((longlong)param_2 + 0x40));
  return;
}

// Construct @ 14ae664d0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FMetasoundFrontendVersion>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// Construct @ 14ae664e0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<Metasound::FFrontendQueryKey::FNull>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ae664f0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<Metasound::Frontend::FInterfaceRegistryTransaction>::
Construct(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)param_1 = *(undefined1 *)param_2;
  ::FString::FString((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
  return;
}

// Construct @ 14ae66540

void __cdecl
UE::Core::Private::TCopyConstructorCaller<Metasound::Frontend::FNodeClassRegistryTransaction>::
Construct(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)param_1 = *(undefined1 *)param_2;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined8 *)((longlong)param_1 + 4) = *(undefined8 *)((longlong)param_2 + 4);
  *(undefined8 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
  *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x48);
  return;
}

