// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 4

// IsTickable @ 1465618a0

bool __thiscall FQuartzTickableObjectsManager::IsTickable(FQuartzTickableObjectsManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  ushort uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar2 = (this->QuartzTickSubscribers).ArrayNum;
  lVar5 = (longlong)iVar2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    __TraceCounter149.CounterId._0_2_ =
         FCountersTrace::OutputInitCounter
                   (L"QuartzSubsystem::NumSubscribers",TraceCounterType_Int,
                    TraceCounterDisplayHint_None);
    LOCK();
    __TraceCounter149.CounterId._2_2_ = 0;
    UNLOCK();
    atexit(`FQuartzTickableObjectsManager::IsTickable'::__l2::
           _dynamic_atexit_destructor_for____TraceCounter149__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((__TraceCounter149.Value != lVar5) &&
     (__TraceCounter149.Value = lVar5, -1 < CountersChannel->Enabled)) {
    if (__TraceCounter149.CounterId == (atomic<unsigned_int>)0x0) {
      uVar4 = FCountersTrace::OutputInitCounter
                        (__TraceCounter149.CounterName,TraceCounterType_Int,
                         __TraceCounter149.CounterFlags & 0xf);
      LOCK();
      if (__TraceCounter149.CounterId == (atomic<unsigned_int>)0x0) {
        __TraceCounter149.CounterId._2_2_ = 0;
        __TraceCounter149.CounterId._0_2_ = uVar4;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue(__TraceCounter149.CounterId._0_2_,__TraceCounter149.Value);
  }
  if (iVar2 < 1) {
LAB_146561987:
    bVar3 = false;
  }
  else {
    pFVar6 = (this->QuartzTickSubscribers).AllocatorInstance.Data;
    iVar2 = (this->QuartzTickSubscribers).ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->QuartzTickSubscribers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FQuartzTickableObject_*_const,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar6 == pFVar1) goto LAB_146561987;
      if ((*(FQuartzTickableObject **)pFVar6 != (FQuartzTickableObject *)0x0) &&
         (bVar3 = FQuartzTickableObject::QuartzIsTickable(*(FQuartzTickableObject **)pFVar6), bVar3)
         ) break;
      pFVar6 = pFVar6 + 8;
    }
    bVar3 = true;
  }
  return bVar3;
}

// SubscribeToQuartzTick @ 146578970

void __thiscall
FQuartzTickableObjectsManager::SubscribeToQuartzTick
          (FQuartzTickableObjectsManager *this,FQuartzTickableObject *param_1)

{
  FQuartzTickableObject *local_res10 [3];
  
  if (param_1 != (FQuartzTickableObject *)0x0) {
    local_res10[0] = param_1;
    TArray<FQuartzTickableObject_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FQuartzTickableObject_*_const_&>(&this->QuartzTickSubscribers,local_res10);
  }
  return;
}

// Tick @ 146579620

void __thiscall
FQuartzTickableObjectsManager::Tick(FQuartzTickableObjectsManager *this,float param_1)

{
  int iVar1;
  uint uVar2;
  FQuartzTickableObject *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  int iVar9;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  int local_30;
  int local_2c [5];
  
  iVar1 = (this->QuartzTickSubscribers).ArrayNum;
  if ((MaxQuartzSubscribersToUpdatePerTickCvar < 1) ||
     (iVar1 <= MaxQuartzSubscribersToUpdatePerTickCvar)) {
    pFVar4 = (this->QuartzTickSubscribers).AllocatorInstance.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = iVar1;
    if (iVar1 == 0) {
      local_2c[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,0,&local_38,iVar1,local_2c);
      memcpy(local_38.Data,pFVar4,(longlong)iVar1 << 3);
    }
    iVar1 = local_30;
    pFVar4 = local_38.Data + (longlong)local_30 * 8;
    FVar8.Data = local_38.Data;
    while( true ) {
      if (local_30 != iVar1) {
        `TCheckedPointerIterator<FQuartzTickableObject_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar8.Data == pFVar4) break;
      pFVar3 = *(FQuartzTickableObject **)FVar8.Data;
      if ((pFVar3 != (FQuartzTickableObject *)0x0) &&
         (bVar6 = FQuartzTickableObject::QuartzIsTickable(pFVar3), bVar6)) {
        FQuartzTickableObject::QuartzTick(pFVar3,param_1);
      }
      FVar8.Data = FVar8.Data + 8;
    }
    this->UpdateIndex = 0;
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  else {
    iVar9 = 0;
    if (0 < MaxQuartzSubscribersToUpdatePerTickCvar) {
      do {
        uVar2 = this->UpdateIndex;
        uVar7 = 0;
        if ((int)uVar2 < (this->QuartzTickSubscribers).ArrayNum) {
          uVar7 = ~uVar2 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = *(FQuartzTickableObject **)
                  ((this->QuartzTickSubscribers).AllocatorInstance.Data + (longlong)(int)uVar2 * 8);
        if (pFVar3 == (FQuartzTickableObject *)0x0) {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7969031669896183935>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                             ,0x7f,"CurrentSubscriber");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          bVar6 = FQuartzTickableObject::QuartzIsTickable(pFVar3);
          if (bVar6) {
            FQuartzTickableObject::QuartzTick(pFVar3,param_1);
          }
          this->UpdateIndex = this->UpdateIndex + 1;
          if (this->UpdateIndex == iVar1) {
            this->UpdateIndex = 0;
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < MaxQuartzSubscribersToUpdatePerTickCvar);
    }
  }
  return;
}

// UnsubscribeFromQuartzTick @ 14657b340

void __thiscall
FQuartzTickableObjectsManager::UnsubscribeFromQuartzTick
          (FQuartzTickableObjectsManager *this,FQuartzTickableObject *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  if (param_1 != (FQuartzTickableObject *)0x0) {
    iVar6 = (this->QuartzTickSubscribers).ArrayNum;
    pFVar3 = (this->QuartzTickSubscribers).AllocatorInstance.Data;
    pFVar9 = pFVar3;
    if (pFVar3 != pFVar3 + (longlong)iVar6 * 8) {
      while (*(FQuartzTickableObject **)pFVar9 != param_1) {
        pFVar9 = pFVar9 + 8;
        if (pFVar9 == pFVar3 + (longlong)iVar6 * 8) {
          return;
        }
      }
      uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
      if (uVar8 != 0xffffffff) {
        uVar7 = 0;
        if ((int)(uVar8 + 1) <= iVar6) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = (this->QuartzTickSubscribers).ArrayNum;
        pFVar3 = (this->QuartzTickSubscribers).AllocatorInstance.Data;
        iVar6 = iVar2 + ~uVar8;
        if (1 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          memmove(pFVar3 + (longlong)(int)uVar8 * 8,pFVar3 + (longlong)(iVar2 - iVar6) * 8,
                  (longlong)iVar6 << 3);
        }
        piVar1 = &(this->QuartzTickSubscribers).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->QuartzTickSubscribers).AllocatorInstance,
                   (this->QuartzTickSubscribers).ArrayNum,&(this->QuartzTickSubscribers).ArrayMax);
      }
    }
  }
  return;
}

