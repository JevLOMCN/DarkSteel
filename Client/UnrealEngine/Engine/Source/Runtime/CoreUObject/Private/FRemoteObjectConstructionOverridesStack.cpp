// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// ~FRemoteObjectConstructionOverridesStack @ 1421b6480

void __thiscall
UE::RemoteObject::Serialization::FRemoteObjectConstructionOverridesStack::
~FRemoteObjectConstructionOverridesStack(FRemoteObjectConstructionOverridesStack *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->Stack).ArrayNum != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObjectSerialization.cpp"
                       ,0xa8,L"RemoteObjectConstructionOverridesStack still contains overrides");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Stack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Find @ 1421ca670

FRemoteObjectConstructionParams * __thiscall
UE::RemoteObject::Serialization::FRemoteObjectConstructionOverridesStack::Find
          (FRemoteObjectConstructionOverridesStack *this,FName param_1,UObject *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  FRemoteObjectConstructionParams *pFVar6;
  long64 lVar7;
  uint uVar8;
  FRemoteObjectConstructionParams *pFVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  
  uVar8 = (this->Stack).ArrayNum - 1;
  lVar10 = (longlong)(int)uVar8 * 8;
  while( true ) {
    if ((int)uVar8 < 0) {
      return (FRemoteObjectConstructionParams *)0x0;
    }
    uVar5 = 0;
    if ((int)uVar8 < (this->Stack).ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    plVar1 = *(longlong **)((this->Stack).AllocatorInstance.Data + lVar10);
    lVar3 = plVar1[1];
    pFVar6 = (FRemoteObjectConstructionParams *)*plVar1;
    pFVar9 = pFVar6 + (int)lVar3;
    while( true ) {
      if ((int)plVar1[1] != (int)lVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::RemoteObject::Serialization::FRemoteObjectConstructionParams_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar9) break;
      if ((pFVar6->Name == param_1) &&
         (lVar7 = FRemoteObjectId::Compare(&pFVar6->OuterId,(FRemoteObjectId)0x0), lVar7 == 0)) {
        return pFVar6;
      }
      pFVar6 = pFVar6 + 1;
    }
    uVar8 = uVar8 - 1;
    lVar10 = lVar10 + -8;
  }
  pcVar2 = (code *)swi(3);
  pFVar6 = (FRemoteObjectConstructionParams *)(*pcVar2)();
  return pFVar6;
}

// Get @ 1421cdac0

FRemoteObjectConstructionOverridesStack * __cdecl
UE::RemoteObject::Serialization::FRemoteObjectConstructionOverridesStack::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FRemoteObjectConstructionOverridesStack *pFVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObjectSerialization.cpp"
                       ,0xa1,
                       L"Currently FRemoteObjectConstructionOverridesStack singleton can only be accessed from the game thread"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRemoteObjectConstructionOverridesStack *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::RemoteObject::Serialization::FRemoteObjectConstructionOverridesStack::Get'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Singleton;
}

