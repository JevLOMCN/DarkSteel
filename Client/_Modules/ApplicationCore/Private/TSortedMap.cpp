// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 2

// AllocateMemoryForEmplace<int_const_&> @ 1423ba940

TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification> * __thiscall
TSortedMap<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::AllocateMemoryForEmplace<int_const_&>
          (TSortedMap<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification> *pTVar7;
  FScriptContainerElement *_Src;
  int iVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  piVar1 = &(this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar9 = uVar2;
    do {
      iVar6 = (uVar9 >> 1) + iVar8;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x38) < *param_1) {
        iVar8 = iVar6 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification> *)
               (*pcVar3)();
      return pTVar7;
    }
    if (iVar8 < 0) goto LAB_1423baa39;
  }
  if (iVar8 < *piVar1) {
    if ((iVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification> *)
               (*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x38);
    if (*(int *)pTVar7 <= *param_1) {
      DestructItems<TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification>,int>
                (pTVar7,1);
      return pTVar7;
    }
  }
LAB_1423baa39:
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,1,(ForAnyElementType *)this,piVar1,&(this->Pairs).ArrayMax);
  _Src = (this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x38;
  memmove(_Src + 0x38,_Src,(longlong)(iVar6 - iVar8) * 0x38);
  return (TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x38);
}

// FindOrAddImpl<int_const_&> @ 1423bda60

ActivityModification * __thiscall
TSortedMap<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::FindOrAddImpl<int_const_&>
          (TSortedMap<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           *this,int *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ActivityModification *pAVar5;
  TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification> *pTVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  uVar1 = (this->Pairs).ArrayNum;
  pFVar2 = (this->Pairs).AllocatorInstance.Data;
  iVar10 = 0;
  uVar8 = uVar1;
  iVar7 = 0;
  if (0 < (int)uVar1) {
    do {
      uVar9 = uVar8 >> 1;
      iVar10 = iVar7;
      if (*(int *)(pFVar2 + (longlong)(int)(uVar9 + iVar7) * 0x38) < *param_1) {
        iVar10 = uVar9 + iVar7 + (uVar8 & 1);
      }
      uVar8 = uVar9;
      iVar7 = iVar10;
    } while (uVar9 != 0);
  }
  if (((iVar10 < (int)uVar1) && (*(int *)(pFVar2 + (longlong)iVar10 * 0x38) <= *param_1)) &&
     (iVar10 != -1)) {
    if ((iVar10 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pAVar5 = (ActivityModification *)(*pcVar3)();
      return pAVar5;
    }
    pAVar5 = (ActivityModification *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 0x38 + 8);
    if (pAVar5 != (ActivityModification *)0x0) {
      return pAVar5;
    }
  }
  pTVar6 = AllocateMemoryForEmplace<int_const_&>(this,param_1);
  iVar7 = *param_1;
  *(undefined8 *)&pTVar6->field_0x8 = 0;
  *(int *)pTVar6 = iVar7;
  *(undefined8 *)&pTVar6->field_0x10 = 0;
  *(undefined8 *)&pTVar6->field_0x18 = 0;
  *(undefined8 *)&pTVar6->field_0x20 = 0;
  *(undefined4 *)&pTVar6->field_0x28 = 0;
  *(undefined4 *)&pTVar6->field_0x2c = 0;
  *(undefined2 *)&pTVar6->field_0x30 = 0;
  return (ActivityModification *)&pTVar6->field_0x8;
}

