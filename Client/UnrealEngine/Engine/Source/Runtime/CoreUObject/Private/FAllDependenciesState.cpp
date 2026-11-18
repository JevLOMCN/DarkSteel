// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// RemoveFromWaitList @ 142339880

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FAsyncPackage2::FAllDependenciesState::RemoveFromWaitList
          (pdm_72c38f00 param_1,FAsyncPackage2 *param_2,FAsyncPackage2 *param_3)

{
  uchar *puVar1;
  FAsyncPackage2 *this;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar4 = (longlong)(int)param_1;
  if (param_2 == (FAsyncPackage2 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("WaitListPackage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0xee6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_3 == (FAsyncPackage2 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PackageToRemove",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0xee7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(FAsyncPackage2 **)(param_3->PackageNodesMemory + lVar4 + -0x10) != param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PackageToRemoveState.WaitingForPackage == WaitListPackage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0xeec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(longlong *)(param_3->PackageNodesMemory + lVar4 + 8) == 0) {
    if (*(FAsyncPackage2 **)(param_2->PackageNodesMemory + lVar4 + -8) != param_3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("WaitListPackageState.PackagesWaitingForThisHead == PackageToRemove",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0xef4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined8 *)(param_2->PackageNodesMemory + lVar4 + -8) =
         *(undefined8 *)(param_3->PackageNodesMemory + lVar4 + 0x10);
  }
  else {
    *(undefined8 *)(*(longlong *)(param_3->PackageNodesMemory + lVar4 + 8) + 0x20 + lVar4) =
         *(undefined8 *)(param_3->PackageNodesMemory + lVar4 + 0x10);
  }
  if (*(longlong *)(param_3->PackageNodesMemory + lVar4 + 0x10) == 0) {
    if (*(FAsyncPackage2 **)(param_2->PackageNodesMemory + lVar4) != param_3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("WaitListPackageState.PackagesWaitingForThisTail == PackageToRemove",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0xeff,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined8 *)(param_2->PackageNodesMemory + lVar4) =
         *(undefined8 *)(param_3->PackageNodesMemory + lVar4 + 8);
  }
  else {
    *(undefined8 *)(*(longlong *)(param_3->PackageNodesMemory + lVar4 + 0x10) + 0x18 + lVar4) =
         *(undefined8 *)(param_3->PackageNodesMemory + lVar4 + 8);
  }
  this = *(FAsyncPackage2 **)(param_3->PackageNodesMemory + lVar4 + -0x10);
  puVar1 = param_3->PackageNodesMemory + lVar4 + 8;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1 = param_3->PackageNodesMemory + lVar4 + 0x10;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1 = param_3->PackageNodesMemory + lVar4 + -0x10;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  FAsyncPackage2::Release(this);
  return;
}

