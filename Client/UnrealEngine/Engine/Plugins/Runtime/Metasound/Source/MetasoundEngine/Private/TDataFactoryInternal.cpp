// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// CreateNew<Metasound::DataFactoryPrivate::TExplicitArgsConstructorForwarding<Metasound::FTime>,0> @ 14b30c980

TDataReadReference<Metasound::FTime> * __cdecl
Metasound::DataFactoryPrivate::
TDataFactoryInternal<Metasound::FTime,Metasound::TDataReadReference<Metasound::FTime>_>::
CreateNew<Metasound::DataFactoryPrivate::TExplicitArgsConstructorForwarding<Metasound::FTime>,0>
          (TDataReadReference<Metasound::FTime> *__return_storage_ptr__,FOperatorSettings *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReadReference<Metasound::FTime> *pTVar4;
  
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_VFTime_Metasound___0A__SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = 0;
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar3 + 2;
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReadReference<Metasound::FTime> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

