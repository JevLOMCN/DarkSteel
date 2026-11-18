// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 4

// Contains<int> @ 14b30abf0

bool __thiscall
Metasound::FMetasoundEnvironment::Contains<int>(FMetasoundEnvironment *this,FName *param_1)

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
  pvVar6 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
  pvVar7 = (void *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
  return pvVar6 == pvVar7;
}

// Contains<float> @ 14b30ac80

bool __thiscall
Metasound::FMetasoundEnvironment::Contains<float>(FMetasoundEnvironment *this,FName *param_1)

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
  pvVar6 = TEnvironmentVariableTypeInfo<float>::GetTypeId();
  pvVar7 = (void *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
  return pvVar6 == pvVar7;
}

// GetValue<int> @ 14b31b930

int __thiscall
Metasound::FMetasoundEnvironment::GetValue<int>(FMetasoundEnvironment *this,FName *param_1)

{
  IMetasoundEnvironmentVariable *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar5;
  void *pvVar6;
  void *pvVar7;
  
  bVar3 = Contains<int>(this,param_1);
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
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    pIVar1 = pTVar5->Ptr;
    pvVar6 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
    pvVar7 = (void *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    if (pvVar6 != pvVar7) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEnvironmentVariableOfType<Type>(InVar)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundEnvironment.h"
                         ,0xaa,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    return *(int *)(pIVar1 + 2);
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1845334588512010475>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundEnvironment.h"
                     ,0xeb,"Contains<VarType>(InVariableName)");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  return 0;
}

// GetValue<float> @ 14b31ba20

float __thiscall
Metasound::FMetasoundEnvironment::GetValue<float>(FMetasoundEnvironment *this,FName *param_1)

{
  IMetasoundEnvironmentVariable *pIVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar4;
  void *pvVar5;
  void *pvVar6;
  float fVar7;
  
  bVar3 = Contains<float>(this,param_1);
  if (bVar3) {
    pTVar4 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(&this->Variables,*param_1);
    if (pTVar4 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                   *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x148,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar7 = (float)(*pcVar2)();
        return fVar7;
      }
    }
    pIVar1 = pTVar4->Ptr;
    pvVar5 = TEnvironmentVariableTypeInfo<float>::GetTypeId();
    pvVar6 = (void *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    if (pvVar5 != pvVar6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEnvironmentVariableOfType<Type>(InVar)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundEnvironment.h"
                         ,0xaa,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar7 = (float)(*pcVar2)();
        return fVar7;
      }
    }
    return *(float *)(pIVar1 + 2);
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1845334588512010475>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundEnvironment.h"
                     ,0xeb,"Contains<VarType>(InVariableName)");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    fVar7 = (float)(*pcVar2)();
    return fVar7;
  }
  return 0.0;
}

