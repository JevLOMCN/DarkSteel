// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// DecodeCollisionIndex @ 143f5b0c0

int __cdecl Chaos::FEventManager::DecodeCollisionIndex(int param_1,bool *param_2)

{
  *param_2 = SUB41((uint)param_1 >> 0x1f,0);
  return param_1 & 0x7fffffff;
}

// DispatchEvents @ 143f5f270

void __thiscall Chaos::FEventManager::DispatchEvents(FEventManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  if (this->BufferMode == Double) {
    AcquireSRWLockShared((PSRWLOCK)&this->ResourceLock);
  }
  AcquireSRWLockShared((PSRWLOCK)&this->ContainerLock);
  pFVar4 = (this->EventContainers).AllocatorInstance.Data;
  iVar2 = (this->EventContainers).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->EventContainers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FEventContainerBase_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(longlong **)pFVar4 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar4 + 0x30))();
    }
    pFVar4 = pFVar4 + 8;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->ContainerLock);
  if (this->BufferMode == Double) {
    ReleaseSRWLockShared((PSRWLOCK)&this->ResourceLock);
  }
  else if (this->BufferMode == Single) {
    pFVar4 = (this->EventContainers).AllocatorInstance.Data;
    iVar2 = (this->EventContainers).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->EventContainers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::FEventContainerBase_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      plVar3 = *(longlong **)pFVar4;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
        (**(code **)(*plVar3 + 0x20))(plVar3);
      }
      pFVar4 = pFVar4 + 8;
    }
  }
  return;
}

// EncodeCollisionIndex @ 143f5f3f0

int __cdecl Chaos::FEventManager::EncodeCollisionIndex(int param_1,bool param_2)

{
  uint uVar1;
  
  uVar1 = param_1 | 0x80000000;
  if (!param_2) {
    uVar1 = param_1;
  }
  return uVar1;
}

// FillProducerData @ 143f67080

void __thiscall
Chaos::FEventManager::FillProducerData(FEventManager *this,FPBDRigidsSolver *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  if (this->BufferMode == Double) {
    AcquireSRWLockShared((PSRWLOCK)&this->ResourceLock);
  }
  AcquireSRWLockShared((PSRWLOCK)&this->ContainerLock);
  pFVar4 = (this->EventContainers).AllocatorInstance.Data;
  iVar2 = (this->EventContainers).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->EventContainers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FEventContainerBase_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    plVar3 = *(longlong **)pFVar4;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,param_1,param_2);
    }
    pFVar4 = pFVar4 + 8;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->ContainerLock);
  if (this->BufferMode == Double) {
    ReleaseSRWLockShared((PSRWLOCK)&this->ResourceLock);
  }
  return;
}

// FlipBuffersIfRequired @ 143f6c150

void __thiscall Chaos::FEventManager::FlipBuffersIfRequired(FEventManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  if (this->BufferMode != Single) {
    if (this->BufferMode == Double) {
      AcquireSRWLockExclusive((PSRWLOCK)&this->ResourceLock);
    }
    AcquireSRWLockShared((PSRWLOCK)&this->ContainerLock);
    pFVar4 = (this->EventContainers).AllocatorInstance.Data;
    iVar2 = (this->EventContainers).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->EventContainers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::FEventContainerBase_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      plVar3 = *(longlong **)pFVar4;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
        (**(code **)(*plVar3 + 0x20))(plVar3);
      }
      pFVar4 = pFVar4 + 8;
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->ContainerLock);
    if (this->BufferMode == Double) {
                    /* WARNING: Could not recover jumptable at 0x000143f6c206. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&this->ResourceLock);
      return;
    }
  }
  return;
}

// InternalRegisterInjector @ 143f6fcd0

void __thiscall
Chaos::FEventManager::InternalRegisterInjector
          (FEventManager *this,int *param_1,FEventContainerBase **param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined8 local_38 [2];
  
  iVar5 = (this->EventContainers).ArrayNum;
  iVar3 = *param_1;
  if (iVar5 < iVar3) {
    do {
      pFVar4 = (this->EventContainers).AllocatorInstance.Data;
      local_38[0] = 0;
      if ((pFVar4 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 <
          pFVar4 + (longlong)(this->EventContainers).ArrayMax * 8)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar3 = (this->EventContainers).ArrayNum;
      if (iVar3 == (this->EventContainers).ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->EventContainers).AllocatorInstance,
                           &(this->EventContainers).ArrayMax);
      }
      iVar5 = iVar5 + 1;
      (this->EventContainers).ArrayNum = iVar3 + 1;
      *(undefined8 *)((this->EventContainers).AllocatorInstance.Data + (longlong)iVar3 * 8) =
           local_38[0];
      iVar3 = *param_1;
    } while (iVar5 < iVar3);
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,1,&(this->EventContainers).AllocatorInstance,
                     &(this->EventContainers).ArrayNum,&(this->EventContainers).ArrayMax);
  pFVar4 = (this->EventContainers).AllocatorInstance.Data + (longlong)iVar3 * 8;
  memmove(pFVar4 + 8,pFVar4,(longlong)(iVar5 - iVar3) << 3);
  *(FEventContainerBase **)((this->EventContainers).AllocatorInstance.Data + (longlong)iVar3 * 8) =
       *param_2;
  return;
}

// Reset @ 143f73600

void __thiscall Chaos::FEventManager::Reset(FEventManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->ContainerLock);
  pFVar4 = (this->EventContainers).AllocatorInstance.Data;
  iVar2 = (this->EventContainers).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->EventContainers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FEventContainerBase_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    puVar3 = *(undefined8 **)pFVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    pFVar4 = pFVar4 + 8;
  }
  (this->EventContainers).ArrayNum = 0;
  if ((this->EventContainers).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->EventContainers).AllocatorInstance,0,&(this->EventContainers).ArrayMax)
    ;
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7369c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ContainerLock);
  return;
}

// UnregisterEvent @ 143f777b0

void __thiscall Chaos::FEventManager::UnregisterEvent(FEventManager *this,EEventType *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  EEventType EVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  
  EVar2 = *param_1;
  AcquireSRWLockExclusive((PSRWLOCK)&this->ContainerLock);
  if ((int)EVar2 < (this->EventContainers).ArrayNum) {
    if ((int)EVar2 < 0) {
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
    puVar3 = *(undefined8 **)
              ((this->EventContainers).AllocatorInstance.Data + (longlong)(int)EVar2 * 8);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    uVar6 = 0;
    if ((int)EVar2 < (this->EventContainers).ArrayNum) {
      uVar6 = ~EVar2 >> 0x1f;
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
    iVar7 = (this->EventContainers).ArrayNum + ~EVar2;
    _Dst = (this->EventContainers).AllocatorInstance.Data + (longlong)(int)EVar2 * 8;
    if (iVar7 != 0) {
      memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
    }
    piVar1 = &(this->EventContainers).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->EventContainers).AllocatorInstance,(this->EventContainers).ArrayNum,
               &(this->EventContainers).ArrayMax);
  }
                    /* WARNING: Could not recover jumptable at 0x000143f778d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ContainerLock);
  return;
}

// UnregisterHandler @ 143f799e0

void __thiscall
Chaos::FEventManager::UnregisterHandler(FEventManager *this,EEventType *param_1,void *param_2)

{
  EEventType EVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  EVar1 = *param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->ContainerLock);
  if ((this->EventContainers).ArrayNum <= (int)EVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventID < EventContainers.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\EventManager.cpp"
                       ,0x2a,L"Unregistering event Handler for an event ID that does not exist");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = 0;
  if ((int)EVar1 < (this->EventContainers).ArrayNum) {
    uVar5 = ~EVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar2 = *(longlong **)((this->EventContainers).AllocatorInstance.Data + (longlong)(int)EVar1 * 8)
  ;
  (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
                    /* WARNING: Could not recover jumptable at 0x000143f79aa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->ContainerLock);
  return;
}

