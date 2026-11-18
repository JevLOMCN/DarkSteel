// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// Map @ 14ae7bd20

FFrontendQueryKey * __thiscall
Metasound::FMapClassesToClassName::Map
          (FMapClassesToClassName *this,FFrontendQueryKey *__return_storage_ptr__,
          FFrontendQueryEntry *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FFrontendQueryKey *pFVar5;
  FName FVar6;
  
  if ((param_1->Value).TypeIndex != '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FFrontendQueryKey *)(*pcVar2)();
      return pFVar5;
    }
  }
  FVar6 = FMetasoundFrontendClassName::GetFullName
                    ((FMetasoundFrontendClassName *)&(param_1->Value)._padding_);
  (__return_storage_ptr__->Key)._padding_ = *(longlong *)FVar6;
  (__return_storage_ptr__->Key).TypeIndex = '\x03';
  uVar1 = *(undefined8 *)FVar6;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  __return_storage_ptr__->Hash = uVar4 + (int)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

