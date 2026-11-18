// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 2

// Contains<unsigned___int64> @ 14b045df0

bool __thiscall
Metasound::FMetasoundEnvironment::Contains<unsigned___int64>
          (FMetasoundEnvironment *this,FName *param_1)

{
  IMetasoundEnvironmentVariable *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar5;
  void *pvVar6;
  void *pvVar7;
  
  pTVar5 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(&this->Variables,*param_1);
  if (pTVar5 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    return false;
  }
  pTVar5 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(&this->Variables,*param_1);
  if (pTVar5 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x148,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pIVar1 = pTVar5->Ptr;
  pvVar6 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
  pvVar7 = (void *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
  return pvVar6 == pvVar7;
}

// GetValue<unsigned___int64> @ 14b0474b0

ulong64 __thiscall
Metasound::FMetasoundEnvironment::GetValue<unsigned___int64>
          (FMetasoundEnvironment *this,FName *param_1)

{
  IMetasoundEnvironmentVariable *pIVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar5;
  void *pvVar6;
  void *pvVar7;
  
  bVar3 = Contains<unsigned___int64>(this,param_1);
  if (bVar3) {
    pTVar5 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(&this->Variables,*param_1);
    if (pTVar5 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                   *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x148,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    pIVar1 = pTVar5->Ptr;
    pvVar6 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar7 = (void *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    if (pvVar6 != pvVar7) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEnvironmentVariableOfType<Type>(InVar)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundEnvironment.h"
                         ,0xaa,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    return (ulong64)pIVar1[2];
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1845334588512010475>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundEnvironment.h"
                     ,0xeb,"Contains<VarType>(InVariableName)");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  return 0;
}

