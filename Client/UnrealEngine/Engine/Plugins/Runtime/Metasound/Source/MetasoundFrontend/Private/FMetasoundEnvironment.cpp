// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 6

// Contains<unsigned_int> @ 14aef5ac0

bool __thiscall
Metasound::FMetasoundEnvironment::Contains<unsigned_int>(FMetasoundEnvironment *this,FName *param_1)

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
  pvVar6 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
  pvVar7 = (void *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
  return pvVar6 == pvVar7;
}

// Contains<FString> @ 14aef5b50

bool __thiscall
Metasound::FMetasoundEnvironment::Contains<FString>(FMetasoundEnvironment *this,FName *param_1)

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
  pvVar6 = TEnvironmentVariableTypeInfo<FString>::GetTypeId();
  pvVar7 = (void *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
  return pvVar6 == pvVar7;
}

// Contains<bool> @ 14aef5be0

bool __thiscall
Metasound::FMetasoundEnvironment::Contains<bool>(FMetasoundEnvironment *this,FName *param_1)

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
  pvVar6 = TEnvironmentVariableTypeInfo<bool>::GetTypeId();
  pvVar7 = (void *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
  return pvVar6 == pvVar7;
}

// GetValue<unsigned_int> @ 14af07380

uint __thiscall
Metasound::FMetasoundEnvironment::GetValue<unsigned_int>(FMetasoundEnvironment *this,FName *param_1)

{
  IMetasoundEnvironmentVariable *pIVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar5;
  void *pvVar6;
  void *pvVar7;
  
  bVar3 = Contains<unsigned_int>(this,param_1);
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
    pvVar6 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
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
    return *(uint *)(pIVar1 + 2);
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

// GetValue<FString> @ 14af07470

FString * __thiscall
Metasound::FMetasoundEnvironment::GetValue<FString>
          (FMetasoundEnvironment *this,FString *__return_storage_ptr__,FName *param_1)

{
  IMetasoundEnvironmentVariable *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar5;
  void *pvVar6;
  void *pvVar7;
  
  bVar3 = Contains<FString>(this,param_1);
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
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
    }
    pIVar1 = pTVar5->Ptr;
    pvVar6 = TEnvironmentVariableTypeInfo<FString>::GetTypeId();
    pvVar7 = (void *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    if (pvVar6 != pvVar7) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEnvironmentVariableOfType<Type>(InVar)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundEnvironment.h"
                         ,0xaa,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
    }
    ::FString::FString(__return_storage_ptr__,(FString *)(pIVar1 + 2));
    return __return_storage_ptr__;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1845334588512010475>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundEnvironment.h"
                     ,0xeb,"Contains<VarType>(InVariableName)");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetValue<bool> @ 14af07580

bool __thiscall
Metasound::FMetasoundEnvironment::GetValue<bool>(FMetasoundEnvironment *this,FName *param_1)

{
  IMetasoundEnvironmentVariable *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar5;
  void *pvVar6;
  void *pvVar7;
  
  bVar3 = Contains<bool>(this,param_1);
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
        return (bool)uVar4;
      }
    }
    pIVar1 = pTVar5->Ptr;
    pvVar6 = TEnvironmentVariableTypeInfo<bool>::GetTypeId();
    pvVar7 = (void *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    if (pvVar6 != pvVar7) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEnvironmentVariableOfType<Type>(InVar)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundEnvironment.h"
                         ,0xaa,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    return (bool)*(undefined1 *)(pIVar1 + 2);
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1845334588512010475>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundEnvironment.h"
                     ,0xeb,"Contains<VarType>(InVariableName)");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

