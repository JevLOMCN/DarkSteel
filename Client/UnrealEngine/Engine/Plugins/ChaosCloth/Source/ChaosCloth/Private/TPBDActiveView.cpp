// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 8

// ActivateRange @ 14dbb4790

void __thiscall
Chaos::
TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
::ActivateRange(TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
                *this,int param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = GetRangeIndex(this,param_1);
  uVar5 = 0;
  if ((int)uVar4 < (this->Ranges).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Ranges).AllocatorInstance.Data;
  *(uint *)(pFVar1 + (longlong)(int)uVar4 * 4) =
       *(uint *)(pFVar1 + (longlong)(int)uVar4 * 4) & 0xfffffffe | (uint)param_2;
  return;
}

// ActivateRange @ 14dbb4820

void __thiscall
Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::ActivateRange
          (TPBDActiveView<Chaos::Softs::FSolverParticles> *this,int param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = GetRangeIndex(this,param_1);
  uVar5 = 0;
  if ((int)uVar4 < (this->Ranges).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Ranges).AllocatorInstance.Data;
  *(uint *)(pFVar1 + (longlong)(int)uVar4 * 4) =
       *(uint *)(pFVar1 + (longlong)(int)uVar4 * 4) & 0xfffffffe | (uint)param_2;
  return;
}

// GetActiveSize @ 14dbf5da0

int __thiscall
Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::GetActiveSize
          (TPBDActiveView<Chaos::Softs::FSolverParticles> *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Ranges).AllocatorInstance.Data;
  iVar6 = 0;
  iVar2 = (this->Ranges).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 4;
  uVar5 = 0;
  while( true ) {
    if ((this->Ranges).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    uVar3 = *(uint *)pFVar4;
    if (((uVar3 & 1) != 0) && (uVar3 >> 1 != 0)) {
      iVar6 = iVar6 + ((uVar3 >> 1) - uVar5);
    }
    pFVar4 = pFVar4 + 4;
    uVar5 = uVar3 >> 1;
  }
  return iVar6;
}

// GetRangeIndex @ 14dbff460

int __thiscall
Chaos::
TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
::GetRangeIndex(TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
                *this,int param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  uVar2 = (this->Ranges).ArrayNum;
  iVar6 = 0;
  if (0 < (int)uVar2) {
    uVar7 = uVar2;
    do {
      iVar1 = (uVar7 >> 1) + iVar6;
      if (*(uint *)((this->Ranges).AllocatorInstance.Data + (longlong)iVar1 * 4) >> 1 <=
          (param_1 & 0x7fffffffU)) {
        iVar6 = iVar1 + (uVar7 & 1);
      }
      uVar4 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar4 != 0);
    if (iVar6 < 0) goto LAB_14dbff4be;
  }
  if (iVar6 < (int)uVar2) {
    return iVar6;
  }
LAB_14dbff4be:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Ranges.IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDActiveView.h"
                     ,0x69,L"");
  if (!bVar5) {
    return iVar6;
  }
  pcVar3 = (code *)swi(3);
  iVar6 = (*pcVar3)();
  return iVar6;
}

// GetRangeIndex @ 14dbff500

int __thiscall
Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::GetRangeIndex
          (TPBDActiveView<Chaos::Softs::FSolverParticles> *this,int param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  uVar2 = (this->Ranges).ArrayNum;
  iVar6 = 0;
  if (0 < (int)uVar2) {
    uVar7 = uVar2;
    do {
      iVar1 = (uVar7 >> 1) + iVar6;
      if (*(uint *)((this->Ranges).AllocatorInstance.Data + (longlong)iVar1 * 4) >> 1 <=
          (param_1 & 0x7fffffffU)) {
        iVar6 = iVar1 + (uVar7 & 1);
      }
      uVar4 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar4 != 0);
    if (iVar6 < 0) goto LAB_14dbff55e;
  }
  if (iVar6 < (int)uVar2) {
    return iVar6;
  }
LAB_14dbff55e:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Ranges.IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDActiveView.h"
                     ,0x69,L"");
  if (!bVar5) {
    return iVar6;
  }
  pcVar3 = (code *)swi(3);
  iVar6 = (*pcVar3)();
  return iVar6;
}

// GetRangeSize @ 14dbff5a0

int __thiscall
Chaos::TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::GetRangeSize
          (TPBDActiveView<Chaos::Softs::FSolverCollisionParticles> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = GetRangeIndex(this,param_1);
  uVar5 = 0;
  if ((int)uVar3 < (this->Ranges).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return (*(uint *)((this->Ranges).AllocatorInstance.Data + (longlong)(int)uVar3 * 4) >> 1) -
         param_1;
}

// GetRangeSize @ 14dbff630

int __thiscall
Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::GetRangeSize
          (TPBDActiveView<Chaos::Softs::FSolverParticles> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = GetRangeIndex(this,param_1);
  uVar5 = 0;
  if ((int)uVar3 < (this->Ranges).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return (*(uint *)((this->Ranges).AllocatorInstance.Data + (longlong)(int)uVar3 * 4) >> 1) -
         param_1;
}

// HasActiveRange @ 14dc01e90

bool __thiscall
Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::HasActiveRange
          (TPBDActiveView<Chaos::Softs::FSolverParticles> *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Ranges).AllocatorInstance.Data;
  iVar2 = (this->Ranges).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->Ranges).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (((*(uint *)pFVar3 & 1) != 0) && ((*(uint *)pFVar3 & 0xfffffffe) != 0)) {
      return true;
    }
    pFVar3 = pFVar3 + 4;
  }
  return false;
}

