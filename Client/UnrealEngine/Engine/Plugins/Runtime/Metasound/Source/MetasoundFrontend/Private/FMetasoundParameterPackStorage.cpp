// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 4

// FindParameter<int,0> @ 14aefcfd0

FMetasoundParameterPackItem<int,0> * __thiscall
FMetasoundParameterPackStorage::FindParameter<int,0>
          (FMetasoundParameterPackStorage *this,FName *param_1,FName *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMetasoundParameterPackItem<int,0> *pFVar5;
  uint uVar6;
  
  iVar1 = (this->Storage).ArrayNum;
  if (iVar1 != 0) {
    if ((iVar1 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMetasoundParameterPackItem<int,0> *)(*pcVar2)();
      return pFVar5;
    }
    uVar6 = 0;
    pFVar5 = (FMetasoundParameterPackItem<int,0> *)(this->Storage).AllocatorInstance.Data;
    while (pFVar5 != (FMetasoundParameterPackItem<int,0> *)0x0) {
      if ((FName)pFVar5->_padding_ == *param_1) {
        if ((FName)pFVar5->_padding_ != *param_2) {
          return (FMetasoundParameterPackItem<int,0> *)0x0;
        }
        return pFVar5;
      }
      uVar6 = uVar6 + (ushort)pFVar5->_padding_;
      if (this->StorageBytesInUse <= (int)uVar6) {
        return (FMetasoundParameterPackItem<int,0> *)0x0;
      }
      uVar4 = 0;
      if ((int)uVar6 < (this->Storage).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMetasoundParameterPackItem<int,0> *)(*pcVar2)();
        return pFVar5;
      }
      pFVar5 = (FMetasoundParameterPackItem<int,0> *)
               ((this->Storage).AllocatorInstance.Data + (int)uVar6);
    }
  }
  return (FMetasoundParameterPackItem<int,0> *)0x0;
}

// FindParameter<float,0> @ 14aefd0d0

FMetasoundParameterPackItem<float,0> * __thiscall
FMetasoundParameterPackStorage::FindParameter<float,0>
          (FMetasoundParameterPackStorage *this,FName *param_1,FName *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMetasoundParameterPackItem<float,0> *pFVar5;
  uint uVar6;
  
  iVar1 = (this->Storage).ArrayNum;
  if (iVar1 != 0) {
    if ((iVar1 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMetasoundParameterPackItem<float,0> *)(*pcVar2)();
      return pFVar5;
    }
    uVar6 = 0;
    pFVar5 = (FMetasoundParameterPackItem<float,0> *)(this->Storage).AllocatorInstance.Data;
    while (pFVar5 != (FMetasoundParameterPackItem<float,0> *)0x0) {
      if ((FName)pFVar5->_padding_ == *param_1) {
        if ((FName)pFVar5->_padding_ != *param_2) {
          return (FMetasoundParameterPackItem<float,0> *)0x0;
        }
        return pFVar5;
      }
      uVar6 = uVar6 + (ushort)pFVar5->_padding_;
      if (this->StorageBytesInUse <= (int)uVar6) {
        return (FMetasoundParameterPackItem<float,0> *)0x0;
      }
      uVar4 = 0;
      if ((int)uVar6 < (this->Storage).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMetasoundParameterPackItem<float,0> *)(*pcVar2)();
        return pFVar5;
      }
      pFVar5 = (FMetasoundParameterPackItem<float,0> *)
               ((this->Storage).AllocatorInstance.Data + (int)uVar6);
    }
  }
  return (FMetasoundParameterPackItem<float,0> *)0x0;
}

// FindParameter<FString,0> @ 14aefd1d0

FMetasoundParameterPackItem<FString,0> * __thiscall
FMetasoundParameterPackStorage::FindParameter<FString,0>
          (FMetasoundParameterPackStorage *this,FName *param_1,FName *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMetasoundParameterPackItem<FString,0> *pFVar5;
  uint uVar6;
  
  iVar1 = (this->Storage).ArrayNum;
  if (iVar1 != 0) {
    if ((iVar1 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMetasoundParameterPackItem<FString,0> *)(*pcVar2)();
      return pFVar5;
    }
    uVar6 = 0;
    pFVar5 = (FMetasoundParameterPackItem<FString,0> *)(this->Storage).AllocatorInstance.Data;
    while (pFVar5 != (FMetasoundParameterPackItem<FString,0> *)0x0) {
      if ((FName)pFVar5->_padding_ == *param_1) {
        if ((FName)pFVar5->_padding_ != *param_2) {
          return (FMetasoundParameterPackItem<FString,0> *)0x0;
        }
        return pFVar5;
      }
      uVar6 = uVar6 + (ushort)pFVar5->_padding_;
      if (this->StorageBytesInUse <= (int)uVar6) {
        return (FMetasoundParameterPackItem<FString,0> *)0x0;
      }
      uVar4 = 0;
      if ((int)uVar6 < (this->Storage).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMetasoundParameterPackItem<FString,0> *)(*pcVar2)();
        return pFVar5;
      }
      pFVar5 = (FMetasoundParameterPackItem<FString,0> *)
               ((this->Storage).AllocatorInstance.Data + (int)uVar6);
    }
  }
  return (FMetasoundParameterPackItem<FString,0> *)0x0;
}

// FindParameter<bool,0> @ 14aefd2d0

FMetasoundParameterPackItem<bool,0> * __thiscall
FMetasoundParameterPackStorage::FindParameter<bool,0>
          (FMetasoundParameterPackStorage *this,FName *param_1,FName *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMetasoundParameterPackItem<bool,0> *pFVar5;
  uint uVar6;
  
  iVar1 = (this->Storage).ArrayNum;
  if (iVar1 != 0) {
    if ((iVar1 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMetasoundParameterPackItem<bool,0> *)(*pcVar2)();
      return pFVar5;
    }
    uVar6 = 0;
    pFVar5 = (FMetasoundParameterPackItem<bool,0> *)(this->Storage).AllocatorInstance.Data;
    while (pFVar5 != (FMetasoundParameterPackItem<bool,0> *)0x0) {
      if ((FName)pFVar5->_padding_ == *param_1) {
        if ((FName)pFVar5->_padding_ != *param_2) {
          return (FMetasoundParameterPackItem<bool,0> *)0x0;
        }
        return pFVar5;
      }
      uVar6 = uVar6 + (ushort)pFVar5->_padding_;
      if (this->StorageBytesInUse <= (int)uVar6) {
        return (FMetasoundParameterPackItem<bool,0> *)0x0;
      }
      uVar4 = 0;
      if ((int)uVar6 < (this->Storage).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMetasoundParameterPackItem<bool,0> *)(*pcVar2)();
        return pFVar5;
      }
      pFVar5 = (FMetasoundParameterPackItem<bool,0> *)
               ((this->Storage).AllocatorInstance.Data + (int)uVar6);
    }
  }
  return (FMetasoundParameterPackItem<bool,0> *)0x0;
}

