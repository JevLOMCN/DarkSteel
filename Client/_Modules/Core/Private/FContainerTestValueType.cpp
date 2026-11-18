// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FContainerTestValueType @ 141583c50

FContainerTestValueType * __thiscall
_anon_0E4C616A::FContainerTestValueType::FContainerTestValueType
          (FContainerTestValueType *this,FContainerTestValueType *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FContainerTestValueType *pFVar5;
  
  this->Str = param_1->Str;
  if (0x40 < (int)((longlong)(ContainerTestStats.End + -0x552dd969) >> 2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() < 65",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\ContainersTest.cpp"
                       ,0x50,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FContainerTestValueType *)(*pcVar1)();
      return pFVar5;
    }
  }
  iVar2 = ContainerTestStats.NextId;
  iVar3 = ContainerTestStats.NextId + 1;
  *ContainerTestStats.End = ContainerTestStats.NextId;
  ContainerTestStats.NextId = iVar3;
  ContainerTestStats.End = ContainerTestStats.End + 1;
  this->Id = iVar2;
  this->bMovedFrom = false;
  param_1->Str = (wchar_t *)0x0;
  param_1->bMovedFrom = true;
  return this;
}

// ~FContainerTestValueType @ 141589660

void __thiscall
_anon_0E4C616A::FContainerTestValueType::~FContainerTestValueType(FContainerTestValueType *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = ContainerTestStats.ConstructedIDs;
  piVar1 = ContainerTestStats.ConstructedIDs;
  while( true ) {
    if (ContainerTestStats.End == piVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\ContainersTest.cpp"
                         ,0x67,L"");
      if (!bVar3) {
        return;
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*piVar4 == this->Id) break;
    piVar4 = piVar4 + 1;
    piVar1 = piVar4;
  }
  ContainerTestStats.End = ContainerTestStats.End + -1;
  if (piVar4 == ContainerTestStats.End) {
    return;
  }
  do {
    piVar1 = piVar4 + 1;
    *piVar4 = piVar4[1];
    piVar4 = piVar1;
  } while (piVar1 != ContainerTestStats.End);
  return;
}

