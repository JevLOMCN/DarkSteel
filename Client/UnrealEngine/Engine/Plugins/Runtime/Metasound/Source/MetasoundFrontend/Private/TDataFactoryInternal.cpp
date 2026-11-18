// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// CreateNew<Metasound::DataFactoryPrivate::TExplicitArgsConstructorForwarding<Metasound::FSendAddress>,0> @ 14ad83140

TDataReadReference<Metasound::FSendAddress> * __cdecl
Metasound::DataFactoryPrivate::
TDataFactoryInternal<Metasound::FSendAddress,Metasound::TDataReadReference<Metasound::FSendAddress>_>
::
CreateNew<Metasound::DataFactoryPrivate::TExplicitArgsConstructorForwarding<Metasound::FSendAddress>,0>
          (TDataReadReference<Metasound::FSendAddress> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReadReference<Metasound::FSendAddress> *pTVar4;
  
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x30);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_VFSendAddress_Metasound___0A__SharedPointerInternals__6B_
    ;
    puVar3[2] = &___7FSendAddress_Metasound__6B_;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0xffffffffffffffff;
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar3 + 2;
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReadReference<Metasound::FSendAddress> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateNew<Metasound::DataFactoryPrivate::TExplicitArgsConstructorForwarding<FString>,0> @ 14ad83210

TDataReadReference<FString> * __cdecl
Metasound::DataFactoryPrivate::TDataFactoryInternal<FString,Metasound::TDataReadReference<FString>_>
::CreateNew<Metasound::DataFactoryPrivate::TExplicitArgsConstructorForwarding<FString>,0>
          (TDataReadReference<FString> *__return_storage_ptr__,FOperatorSettings *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReadReference<FString> *pTVar4;
  
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_VFString___Metasound__6B_;
  puVar3 = ::operator_new(0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &___7__TIntrusiveReferenceController_VFString___0A__SharedPointerInternals__6B_;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar3 + 2;
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReadReference<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReadReference_VFString___Metasound__6B_;
  return __return_storage_ptr__;
}

