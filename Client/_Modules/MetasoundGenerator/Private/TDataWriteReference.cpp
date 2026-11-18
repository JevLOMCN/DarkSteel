// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 1

// CreateNew<Metasound::FOperatorSettings_const_&> @ 14b2a33c0

TDataWriteReference<Metasound::FTrigger> * __cdecl
Metasound::TDataWriteReference<Metasound::FTrigger>::CreateNew<Metasound::FOperatorSettings_const_&>
          (TDataWriteReference<Metasound::FTrigger> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataWriteReference<Metasound::FTrigger> *pTVar4;
  
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x30);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_VFTrigger_Metasound___0A__SharedPointerInternals__6B_
    ;
    FTrigger::FTrigger((FTrigger *)(puVar3 + 2),param_1);
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar3;
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataWriteReference<Metasound::FTrigger> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

