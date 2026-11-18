// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 6

// operator[] @ 144434740

FDataflowConnection * __thiscall
UE::Dataflow::FContextCallstack::operator[](FContextCallstack *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FDataflowConnection *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Callstack).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDataflowConnection *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FDataflowConnection **)
          ((this->Callstack).AllocatorInstance.Data + (longlong)param_1 * 0x18);
}

// Contains @ 14443d040

bool __thiscall
UE::Dataflow::FContextCallstack::Contains(FContextCallstack *this,FDataflowConnection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->Callstack).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->Callstack).ArrayNum * 0x18;
  for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 0x18) {
    if (param_1 == *(FDataflowConnection **)pFVar2) goto LAB_14443d064;
  }
  pFVar2 = (FScriptContainerElement *)0x0;
LAB_14443d064:
  return pFVar2 != (FScriptContainerElement *)0x0;
}

// Num @ 144452940

int __thiscall UE::Dataflow::FContextCallstack::Num(FContextCallstack *this)

{
  return (this->Callstack).ArrayNum;
}

// Pop @ 144452f30

void __thiscall
UE::Dataflow::FContextCallstack::Pop
          (FContextCallstack *this,FDataflowConnection *param_1,ulong64 *param_2,ulong64 *param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  LARGE_INTEGER local_res8;
  
  *param_2 = 0;
  iVar2 = (this->Callstack).ArrayNum;
  if (iVar2 == 0) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5258191021539327936>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNodeParameters.cpp"
                       ,0x40,"!Callstack.IsEmpty()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    uVar6 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar6 = ~(iVar2 - 1U) >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar2 = (this->Callstack).ArrayNum;
    pFVar3 = (this->Callstack).AllocatorInstance.Data;
    QueryPerformanceCounter(&local_res8);
    *param_2 = local_res8.QuadPart - *(longlong *)(pFVar3 + (longlong)iVar2 * 0x18 + -0x10);
    *param_3 = *(ulong64 *)(pFVar3 + (longlong)iVar2 * 0x18 + -8);
    if ((this->Callstack).ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar2 = (this->Callstack).ArrayNum;
    uVar6 = iVar2 - 1;
    pFVar3 = (this->Callstack).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x18;
    iVar2 = ~uVar6 + iVar2;
    if (iVar2 != 0) {
      memmove(pFVar3,pFVar3 + 0x18,(longlong)iVar2 * 0x18);
    }
    piVar1 = &(this->Callstack).ArrayNum;
    *piVar1 = *piVar1 + -1;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(ForAnyElementType *)this,(this->Callstack).ArrayNum,
               &(this->Callstack).ArrayMax);
    iVar2 = (this->Callstack).ArrayNum;
    if (0 < iVar2) {
      uVar6 = 0;
      if ((int)(iVar2 - 1U) < iVar2) {
        uVar6 = ~(iVar2 - 1U) >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = (this->Callstack).AllocatorInstance.Data +
               (longlong)(this->Callstack).ArrayNum * 0x18 + -8;
      *(ulong64 *)pFVar3 = *(longlong *)pFVar3 + *param_2;
    }
  }
  return;
}

// Push @ 144453650

void __thiscall
UE::Dataflow::FContextCallstack::Push(FContextCallstack *this,FDataflowConnection *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  LARGE_INTEGER local_res8 [4];
  FDataflowConnection *local_28;
  LARGE_INTEGER LStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  QueryPerformanceCounter(local_res8);
  pFVar2 = (this->Callstack).AllocatorInstance.Data;
  LStack_20 = local_res8[0];
  local_18 = 0;
  if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar2 + (longlong)(this->Callstack).ArrayMax * 0x18))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Callstack).ArrayNum;
  piVar1 = &(this->Callstack).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)this,piVar1);
  }
  (this->Callstack).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Callstack).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x18;
  *(FDataflowConnection **)pFVar2 = local_28;
  *(LARGE_INTEGER *)(pFVar2 + 8) = LStack_20;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x18 + 0x10) = local_18;
  return;
}

// Top @ 1444670c0

FDataflowConnection * __thiscall UE::Dataflow::FContextCallstack::Top(FContextCallstack *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDataflowConnection *pFVar5;
  
  iVar1 = (this->Callstack).ArrayNum;
  if (iVar1 == 0) {
    return (FDataflowConnection *)0x0;
  }
  uVar4 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar4 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDataflowConnection *)(*pcVar2)();
      return pFVar5;
    }
  }
  return *(FDataflowConnection **)
          ((this->Callstack).AllocatorInstance.Data +
          (longlong)(this->Callstack).ArrayNum * 0x18 + -0x18);
}

