// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 9

// FReceiveThreadRunnable @ 14ec52be0

FReceiveThreadRunnable * __thiscall
UIpNetDriver::FReceiveThreadRunnable::FReceiveThreadRunnable
          (FReceiveThreadRunnable *this,UIpNetDriver *param_1)

{
  int *piVar1;
  int *piVar2;
  ulonglong uVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  int iVar6;
  atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar7;
  ISocketSubsystem *pIVar8;
  longlong lVar9;
  int iVar10;
  
  this->_padding_ = (longlong)&___7FReceiveThreadRunnable_UIpNetDriver__6B_;
  pTVar4 = CVarNetIpNetDriverReceiveThreadQueueMaxPackets.Ref;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    lVar9 = 4;
    if (!bVar5) goto LAB_14ec52c2d;
  }
  lVar9 = 0;
LAB_14ec52c2d:
  iVar6 = *(int *)((longlong)pTVar4->ShadowedValue + lVar9);
  piVar1 = &(this->ReceiveQueue).Buffer.Elements.ArrayMax;
  piVar2 = &(this->ReceiveQueue).Buffer.Elements.ArrayNum;
  *piVar2 = 0;
  *piVar1 = 0;
  iVar10 = 1;
  if (iVar6 != 0) {
    iVar10 = iVar6;
  }
  (this->ReceiveQueue).Buffer.Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar3 = (ulonglong)(iVar10 - 1) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  iVar10 = 1 << ((byte)lVar9 & 0x1f);
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,iVar10,&(this->ReceiveQueue).Buffer.Elements.AllocatorInstance,piVar2,
                     piVar1);
  memset((this->ReceiveQueue).Buffer.Elements.AllocatorInstance.Data + (longlong)iVar6 * 0x30,0,
         (longlong)iVar10 * 0x30);
  (this->ReceiveQueue).Buffer.IndexMask = (this->ReceiveQueue).Buffer.Elements.ArrayNum - 1;
  (this->ReceiveQueue).Head = (TAtomic<unsigned_int>)0x0;
  (this->ReceiveQueue).Tail = (TAtomic<unsigned_int>)0x0;
  this->bIsRunning = (TAtomic<bool>)0x1;
  (this->CommandQueue).Tail =
       (atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0;
  (this->CommandQueue).NumElems = (atomic<int>)0x0;
  aVar7 = (atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)
          FMemory::Malloc(0x40,0x10);
  *(undefined8 *)aVar7 = 0;
  (this->CommandQueue).Tail = aVar7;
  (this->CommandQueue).TailCopy = (FNode *)aVar7;
  (this->CommandQueue).First = (FNode *)aVar7;
  (this->CommandQueue).Head = (FNode *)aVar7;
  LOCK();
  (this->CommandQueue).NumElems = (atomic<int>)0x0;
  UNLOCK();
  (this->OwnerEventQueue).Tail =
       (atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0;
  (this->OwnerEventQueue).NumElems = (atomic<int>)0x0;
  aVar7 = (atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)
          FMemory::Malloc(0x40,0x10);
  *(undefined8 *)aVar7 = 0;
  (this->OwnerEventQueue).Tail = aVar7;
  (this->OwnerEventQueue).TailCopy = (FNode *)aVar7;
  (this->OwnerEventQueue).First = (FNode *)aVar7;
  (this->OwnerEventQueue).Head = (FNode *)aVar7;
  LOCK();
  (this->OwnerEventQueue).NumElems = (atomic<int>)0x0;
  UNLOCK();
  this->OwningNetDriver = param_1;
  (this->Socket).Object = (FSocket *)0x0;
  (this->Socket).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pIVar8 = (ISocketSubsystem *)(**(code **)(param_1->_padding_ + 0x408))(param_1);
  this->SocketSubsystem = pIVar8;
  return this;
}

// operator() @ 14ec58420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ec58588) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x00014ec5858c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
`UIpNetDriver::FReceiveThreadRunnable::SetSocket'::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> *paVar1;
  FReceiveThreadRunnable *this_00;
  TReferenceControllerBase<1> *pTVar2;
  FSocket *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = *(longlong *)((longlong)this + 0x20);
  local_50 = *(longlong **)((longlong)this + 0x48);
  this_00 = *(FReceiveThreadRunnable **)this;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  local_58 = *(undefined8 *)((longlong)this + 0x40);
  local_68 = *(longlong *)((longlong)this + 0x30);
  uStack_60 = *(undefined8 *)((longlong)this + 0x38);
  if (local_78 != 0) {
    *(undefined8 *)((longlong)this + 0x20) = 0;
  }
  UIpNetDriver::FReceiveThreadRunnable::ClearSocket(this_00);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  pFVar3 = *(FSocket **)((longlong)this + 8);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this_00->Socket).SharedReferenceCount.ReferenceController;
  (this_00->Socket).Object = pFVar3;
  (this_00->Socket).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (local_78 != 0) {
    local_48 = local_78;
    local_20 = local_50;
    local_50 = (longlong *)0x0;
    local_38 = local_68;
    uStack_30 = uStack_60;
    local_28 = local_58;
    local_78 = 0;
    aVar5 = (atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)
            TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::AllocNode
                      (&this_00->OwnerEventQueue);
    *(undefined8 *)((longlong)aVar5 + 0x10) = 0;
    *(undefined8 *)((longlong)aVar5 + 0x38) = 0;
    puVar6 = FMemory::Malloc(0x40,0x10);
    *(undefined8 **)((longlong)aVar5 + 0x38) = puVar6;
    *puVar6 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UIpNetDriver::FReceiveThreadRunnable::SetSocketImpl'::`5'::<lambda_1>,1,1>
               ::_vftable_;
    plVar7 = puVar6 + 2;
    *plVar7 = local_48;
    puVar6[7] = local_20;
    local_20 = 0;
    puVar6[4] = local_38;
    puVar6[5] = uStack_30;
    puVar6[6] = local_28;
    if (*plVar7 != 0) {
      local_48 = 0;
    }
    if (plVar7 != (longlong *)0x0) {
      *(code **)((longlong)aVar5 + 0x10) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UIpNetDriver::FReceiveThreadRunnable::SetSocketImpl'::__l5::<lambda_1>,void>
           ::Call;
    }
    ((this_00->OwnerEventQueue).Head)->Next = aVar5;
    (this_00->OwnerEventQueue).Head = (FNode *)aVar5;
    LOCK();
    paVar1 = &(this_00->OwnerEventQueue).NumElems;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    if (local_48 != 0) {
      (**(code **)(local_38 + 0x10))();
    }
    if (local_78 != 0) {
      plVar7 = &local_68;
      if (local_50 != (longlong *)0x0) {
        plVar7 = local_50;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  return;
}

// ClearSocket @ 14ec62710

void __thiscall UIpNetDriver::FReceiveThreadRunnable::ClearSocket(FReceiveThreadRunnable *this)

{
  TTypeCompatibleBytes<TUniqueFunction<void___cdecl(void)>_> *pTVar1;
  atomic<int> *paVar2;
  FSocket *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  uchar *puVar5;
  atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar6;
  
  pFVar3 = (this->Socket).Object;
  if (pFVar3 != (FSocket *)0x0) {
    pTVar4 = (this->Socket).SharedReferenceCount.ReferenceController;
    (this->Socket).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (this->Socket).Object = (FSocket *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    aVar6 = (atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)
            TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::AllocNode
                      (&this->OwnerEventQueue);
    pTVar1 = (TTypeCompatibleBytes<TUniqueFunction<void___cdecl(void)>_> *)((longlong)aVar6 + 0x10);
    pTVar1->Pad[0] = '\0';
    pTVar1->Pad[1] = '\0';
    pTVar1->Pad[2] = '\0';
    pTVar1->Pad[3] = '\0';
    pTVar1->Pad[4] = '\0';
    pTVar1->Pad[5] = '\0';
    pTVar1->Pad[6] = '\0';
    pTVar1->Pad[7] = '\0';
    puVar5 = (uchar *)((longlong)aVar6 + 0x38);
    puVar5[0] = '\0';
    puVar5[1] = '\0';
    puVar5[2] = '\0';
    puVar5[3] = '\0';
    puVar5[4] = '\0';
    puVar5[5] = '\0';
    puVar5[6] = '\0';
    puVar5[7] = '\0';
    *(TReferenceControllerBase<1> **)((longlong)aVar6 + 0x30) = pTVar4;
    *(undefined ***)((longlong)aVar6 + 0x20) =
         &UE::Core::Private::Function::
          TFunction_OwnedObject<`UIpNetDriver::FReceiveThreadRunnable::ClearSocket'::`8'::<lambda_1>,1,0>
          ::_vftable_;
    *(FSocket **)((longlong)aVar6 + 0x28) = pFVar3;
    if ((uchar *)((longlong)aVar6 + 0x28) != (uchar *)0x0) {
      *(code **)((TTypeCompatibleBytes<TUniqueFunction<void___cdecl(void)>_> *)
                ((longlong)aVar6 + 0x10))->Pad =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UIpNetDriver::FReceiveThreadRunnable::ClearSocket'::__l8::<lambda_1>,void>
           ::Call;
    }
    ((this->OwnerEventQueue).Head)->Next = aVar6;
    (this->OwnerEventQueue).Head = (FNode *)aVar6;
    LOCK();
    paVar2 = &(this->OwnerEventQueue).NumElems;
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  return;
}

// DispatchPacket @ 14ec6cbc0

bool __thiscall
UIpNetDriver::FReceiveThreadRunnable::DispatchPacket
          (FReceiveThreadRunnable *this,FReceivedPacket *param_1,int param_2)

{
  int *piVar1;
  TAtomic<unsigned_int> TVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  uint uVar8;
  uint uVar9;
  TAtomic<unsigned_int> TVar10;
  LARGE_INTEGER local_res10;
  
  piVar1 = &(param_1->PacketBytes).ArrayNum;
  iVar7 = *piVar1;
  uVar8 = 0;
  if (0 < param_2) {
    uVar8 = param_2;
  }
  if (iVar7 < (int)uVar8) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar8 - iVar7,(ForAnyElementType *)param_1,piVar1,
                       &(param_1->PacketBytes).ArrayMax);
    memset((param_1->PacketBytes).AllocatorInstance.Data + iVar6,0,(longlong)(int)(uVar8 - iVar7));
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < iVar7) {
      uVar9 = iVar7 - uVar8;
      if ((int)(uVar9 | uVar8) < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      if (uVar9 != 0) {
        _Dst = (param_1->PacketBytes).AllocatorInstance.Data + (int)uVar8;
        iVar7 = (*piVar1 - uVar9) - uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + (int)uVar9,(longlong)iVar7);
        }
        *piVar1 = *piVar1 - uVar9;
      }
    }
  }
  QueryPerformanceCounter(&local_res10);
  param_1->PlatformTimeSeconds =
       (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  TVar2 = (this->ReceiveQueue).Tail;
  TVar10 = (TAtomic<unsigned_int>)((int)TVar2 + 1U & (this->ReceiveQueue).Buffer.IndexMask);
  if (TVar10 == (this->ReceiveQueue).Head) {
    bVar4 = false;
  }
  else {
    uVar9 = (uint)TVar2 & (this->ReceiveQueue).Buffer.IndexMask;
    uVar8 = 0;
    if ((int)uVar9 < (this->ReceiveQueue).Buffer.Elements.ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    FReceivedPacket::operator=
              ((FReceivedPacket *)
               ((this->ReceiveQueue).Buffer.Elements.AllocatorInstance.Data +
               (longlong)(int)uVar9 * 0x30),param_1);
    LOCK();
    (this->ReceiveQueue).Tail = TVar10;
    UNLOCK();
    bVar4 = true;
  }
  return bVar4;
}

// PumpCommandQueue @ 14ec8ece0

/* WARNING: Removing unreachable block (ram,0x00014ec8edbd) */

void __thiscall UIpNetDriver::FReceiveThreadRunnable::PumpCommandQueue(FReceiveThreadRunnable *this)

{
  atomic<int> *paVar1;
  undefined8 uVar2;
  atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong *plVar9;
  longlong *plVar10;
  code *local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *local_20;
  char local_18;
  
  while( true ) {
    aVar3 = *(atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> *)
             (this->CommandQueue).Tail;
    if (aVar3 == (atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0) {
      local_18 = '\0';
      cVar8 = local_18;
    }
    else {
      local_48 = *(code **)((longlong)aVar3 + 0x10);
      plVar10 = *(longlong **)((longlong)aVar3 + 0x38);
      *(undefined8 *)((longlong)aVar3 + 0x38) = 0;
      uVar4 = *(undefined4 *)((longlong)aVar3 + 0x20);
      uVar5 = *(undefined4 *)((longlong)aVar3 + 0x24);
      uVar6 = *(undefined4 *)((longlong)aVar3 + 0x28);
      uVar7 = *(undefined4 *)((longlong)aVar3 + 0x2c);
      uVar2 = *(undefined8 *)((longlong)aVar3 + 0x30);
      if (local_48 != (code *)0x0) {
        *(undefined8 *)((longlong)aVar3 + 0x10) = 0;
      }
      if (*(longlong *)((longlong)aVar3 + 0x10) != 0) {
        plVar9 = *(longlong **)((longlong)aVar3 + 0x38);
        if (*(longlong **)((longlong)aVar3 + 0x38) == (longlong *)0x0) {
          plVar9 = (longlong *)((longlong)aVar3 + 0x20);
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      (this->CommandQueue).Tail = aVar3;
      LOCK();
      paVar1 = &(this->CommandQueue).NumElems;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      local_18 = '\x01';
      local_38 = uVar4;
      uStack_34 = uVar5;
      uStack_30 = uVar6;
      uStack_2c = uVar7;
      local_28 = uVar2;
      local_20 = plVar10;
      cVar8 = '\x01';
      if (local_48 != (code *)0x0) {
        cVar8 = local_18;
      }
    }
    local_18 = cVar8;
    if (local_18 == '\0') break;
    UE::Core::Private::Function::CheckCallable(local_48);
    plVar10 = (longlong *)&local_38;
    if (local_20 != (longlong *)0x0) {
      plVar10 = local_20;
    }
    (**(code **)(*plVar10 + 8))();
    (*local_48)();
    if ((local_18 != '\0') && (local_48 != (code *)0x0)) {
      plVar10 = (longlong *)&local_38;
      if (local_20 != (longlong *)0x0) {
        plVar10 = local_20;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  return;
}

// PumpOwnerEventQueue @ 14ec8ee50

/* WARNING: Removing unreachable block (ram,0x00014ec8ef2d) */

void __thiscall
UIpNetDriver::FReceiveThreadRunnable::PumpOwnerEventQueue(FReceiveThreadRunnable *this)

{
  atomic<int> *paVar1;
  undefined8 uVar2;
  atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong *plVar9;
  longlong *plVar10;
  code *local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *local_20;
  char local_18;
  
  while( true ) {
    aVar3 = *(atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> *)
             (this->OwnerEventQueue).Tail;
    if (aVar3 == (atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0) {
      local_18 = '\0';
      cVar8 = local_18;
    }
    else {
      local_48 = *(code **)((longlong)aVar3 + 0x10);
      plVar10 = *(longlong **)((longlong)aVar3 + 0x38);
      *(undefined8 *)((longlong)aVar3 + 0x38) = 0;
      uVar4 = *(undefined4 *)((longlong)aVar3 + 0x20);
      uVar5 = *(undefined4 *)((longlong)aVar3 + 0x24);
      uVar6 = *(undefined4 *)((longlong)aVar3 + 0x28);
      uVar7 = *(undefined4 *)((longlong)aVar3 + 0x2c);
      uVar2 = *(undefined8 *)((longlong)aVar3 + 0x30);
      if (local_48 != (code *)0x0) {
        *(undefined8 *)((longlong)aVar3 + 0x10) = 0;
      }
      if (*(longlong *)((longlong)aVar3 + 0x10) != 0) {
        plVar9 = *(longlong **)((longlong)aVar3 + 0x38);
        if (*(longlong **)((longlong)aVar3 + 0x38) == (longlong *)0x0) {
          plVar9 = (longlong *)((longlong)aVar3 + 0x20);
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      (this->OwnerEventQueue).Tail = aVar3;
      LOCK();
      paVar1 = &(this->OwnerEventQueue).NumElems;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      local_18 = '\x01';
      local_38 = uVar4;
      uStack_34 = uVar5;
      uStack_30 = uVar6;
      uStack_2c = uVar7;
      local_28 = uVar2;
      local_20 = plVar10;
      cVar8 = '\x01';
      if (local_48 != (code *)0x0) {
        cVar8 = local_18;
      }
    }
    local_18 = cVar8;
    if (local_18 == '\0') break;
    UE::Core::Private::Function::CheckCallable(local_48);
    plVar10 = (longlong *)&local_38;
    if (local_20 != (longlong *)0x0) {
      plVar10 = local_20;
    }
    (**(code **)(*plVar10 + 8))();
    (*local_48)();
    if ((local_18 != '\0') && (local_48 != (code *)0x0)) {
      plVar10 = (longlong *)&local_38;
      if (local_20 != (longlong *)0x0) {
        plVar10 = local_20;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  return;
}

// Run @ 14ec93350

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall UIpNetDriver::FReceiveThreadRunnable::Run(FReceiveThreadRunnable *this)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  UIpNetDriver *pUVar4;
  FSocket *pFVar5;
  ISocketSubsystem *pIVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  TConsoleVariableData<int> *pTVar11;
  TConsoleVariableData<float> *pTVar12;
  bool bVar13;
  char cVar14;
  bool bVar15;
  uint uVar16;
  ESocketErrors EVar17;
  longlong lVar18;
  UClass *pUVar19;
  longlong *plVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_IpNetDriver_RecvFromSocket> FVar22;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar23;
  FName FVar24;
  int iVar25;
  longlong lVar26;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  int local_res8 [2];
  FColor_u_0 local_res10 [2];
  int local_res18;
  wchar_t *pwVar29;
  FReceivedPacket local_108;
  FName local_d8;
  uint local_d0;
  uint uStack_cc;
  FName local_c8;
  LARGE_INTEGER local_b8;
  undefined8 local_b0;
  FSharedReferencer<1> local_a8;
  FStatMessage local_a0;
  FName local_90;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  
  pTVar11 = CVarNetIpNetDriverReceiveThreadPollTimeMS.Ref;
  bVar13 = IsInParallelGameThread();
  lVar26 = 0;
  auVar27 = extraout_XMM0;
  if (bVar13) {
LAB_14ec9339d:
    lVar18 = lVar26;
  }
  else {
    bVar13 = IsInGameThread();
    lVar18 = 4;
    auVar27 = extraout_XMM0_00;
    if (bVar13) goto LAB_14ec9339d;
  }
  pTVar12 = CVarRcvThreadSleepTimeForWaitableErrorsInSeconds.Ref;
  iVar3 = *(int *)((longlong)pTVar11->ShadowedValue + lVar18);
  auVar28._0_8_ = (double)iVar3 * __real_40c3880000000000 + __real_3fe0000000000000;
  auVar28._8_8_ = 0;
  roundpd(auVar27,auVar28,1);
  bVar13 = IsInParallelGameThread();
  if (!bVar13) {
    bVar13 = IsInGameThread();
    lVar18 = 4;
    if (!bVar13) goto LAB_14ec933e7;
  }
  lVar18 = lVar26;
LAB_14ec933e7:
  pTVar11 = CVarRcvThreadShouldSleepForLongRecvErrors.Ref;
  fVar2 = *(float *)((longlong)pTVar12->ShadowedValue + lVar18);
  bVar13 = IsInParallelGameThread();
  if ((bVar13) || (bVar13 = IsInGameThread(), lVar18 = 4, bVar13)) {
    lVar18 = lVar26;
  }
  local_res18 = *(int *)((longlong)pTVar11->ShadowedValue + lVar18);
  fVar10 = __real_3cf5c28f;
  if (4 < (byte)LogNet._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    fVar10 = __real_3cf5c28f;
  }
  while ((this->bIsRunning != (TAtomic<bool>)0x0 && ((this->Socket).Object == (FSocket *)0x0))) {
    PumpCommandQueue(this);
    FWindowsPlatformProcess::SleepNoStats(fVar10);
  }
  do {
    fVar10 = __real_3a83126f;
    if ((this->bIsRunning == (TAtomic<bool>)0x0) || ((this->Socket).Object == (FSocket *)0x0))
    goto LAB_14ec938e0;
    pUVar4 = this->OwningNetDriver;
    if (pUVar4->_padding_ != 0) {
      pUVar19 = UIpConnection::StaticClass();
      bVar13 = FObjectPtr::IsA((FObjectPtr *)&pUVar4->_padding_,pUVar19);
      if (((bVar13) && (pUVar4->_padding_ != 0)) &&
         (*(char *)(*(longlong *)(pUVar4->_padding_ + 0x2018) + 0x44) == '\a')) {
        ClearSocket(this);
        fVar10 = __real_3a83126f;
LAB_14ec938e0:
        while ((this->bIsRunning != (TAtomic<bool>)0x0 && ((this->Socket).Object != (FSocket *)0x0))
              ) {
          PumpCommandQueue(this);
          FWindowsPlatformProcess::SleepNoStats((float)iVar3 * fVar10);
        }
        if (4 < (byte)LogNet._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        return 0;
      }
    }
    local_108.PlatformTimeSeconds = 0.0;
    local_108.PacketBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.PacketBytes.ArrayNum = 0;
    local_108.PacketBytes.ArrayMax = 0;
    local_108.FromAddress.Object = (FInternetAddr *)0x0;
    local_108.FromAddress.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_108.Error = SE_NO_ERROR;
    if (((this->Socket).Object == (FSocket *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      uVar16 = (*pcVar7)();
      return uVar16;
    }
    pFVar5 = (this->Socket).Object;
    cVar14 = (**(code **)(pFVar5->_padding_ + 0x80))(pFVar5,0);
    PumpCommandQueue(this);
    pIVar6 = this->SocketSubsystem;
    if (cVar14 == '\0') {
      EVar17 = (**(code **)(pIVar6->_padding_ + 0xb8))();
      if ((SE_TRY_AGAIN < EVar17) ||
         ((0x2000000000081U >> ((longlong)(int)EVar17 & 0x3fU) & 1) == 0)) {
        if ((EVar17 != SE_ECONNABORTED) && (EVar17 != SE_ENETDOWN)) {
          iVar25 = 0;
          goto LAB_14ec9393d;
        }
        goto LAB_14ec9395d;
      }
LAB_14ec93950:
      if (0.0 <= fVar2) {
        FWindowsPlatformProcess::SleepNoStats(fVar2);
      }
    }
    else {
      local_res8[0] = 0;
      plVar20 = (longlong *)(**(code **)(pIVar6->_padding_ + 0x90))(pIVar6,local_88);
      local_a8.ReferenceController = (TReferenceControllerBase<1> *)plVar20[1];
      local_108.FromAddress.Object = (FInternetAddr *)*plVar20;
      if (local_a8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_a8.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_b0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_108.FromAddress.SharedReferenceCount,&local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
      pwVar29 = (wchar_t *)&local_108.PacketBytes.ArrayMax;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0x400,(ForAnyElementType *)&local_108,&local_108.PacketBytes.ArrayNum,
                 (int *)pwVar29);
      FVar22 = StatPtr_STAT_IpNetDriver_RecvFromSocket;
      if (StatPtr_STAT_IpNetDriver_RecvFromSocket ==
          (FThreadSafeStaticStat<FStat_STAT_IpNetDriver_RecvFromSocket>)0x0) {
        pFVar21 = ::FName::FName(&local_90,"STAT_IpNetDriver_RecvFromSocket");
        pwVar29 = L"Net";
        FVar22 = (FThreadSafeStaticStat<FStat_STAT_IpNetDriver_RecvFromSocket>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IpNetDriver_RecvFromSocket,
                            *pFVar21,L"IpNetDriver Socket RecvFrom","STATGROUP_Net",
                            "STATCAT_Advanced",L"Net",true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar24 = *(FName *)FVar22;
      bVar13 = false;
      bVar9 = false;
      local_c8.ComparisonIndex.Value = 0;
      local_c8.Number = 0;
      FVar23 = FVar24.ComparisonIndex.Value;
      uVar16 = FVar24.Number;
      if ((FVar23.Value == 0) && (uVar16 == 0)) {
LAB_14ec936eb:
        bVar8 = false;
        FVar24 = local_c8;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_res10[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
          bVar13 = false;
          bVar9 = true;
          if (-1 < CpuChannel->Enabled) {
            local_d8.ComparisonIndex.Value = FVar23.Value;
            local_d8.Number = uVar16;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_d8,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\IpNetDriver.cpp"
                       ,0x811);
            bVar13 = true;
            bVar9 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_14ec936eb;
        local_d0 = FVar23.Value;
        uStack_cc = uVar16;
        local_c8 = FVar24;
        FThreadStats::AddMessage(FVar24,CycleScopeStart);
        bVar8 = true;
      }
      if (((this->Socket).Object == (FSocket *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        uVar16 = (*pcVar7)();
        return uVar16;
      }
      pFVar5 = (this->Socket).Object;
      pcVar7 = *(code **)(pFVar5->_padding_ + 0x68);
      if ((local_108.FromAddress.Object == (FInternetAddr *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        uVar16 = (*pcVar7)();
        return uVar16;
      }
      cVar14 = (*pcVar7)(pFVar5,local_108.PacketBytes.AllocatorInstance.Data,
                         local_108.PacketBytes._8_8_ & 0xffffffff,local_res8,
                         local_108.FromAddress.Object,(ulonglong)pwVar29 & 0xffffffff00000000);
      if (bVar9) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar8) && (FVar24 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_a0.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
          local_a0.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_b8);
          local_a0.StatData.Pad[4] = '\0';
          local_a0.StatData.Pad[5] = '\0';
          local_a0.StatData.Pad[6] = '\0';
          local_a0.StatData.Pad[7] = '\0';
          local_a0.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
          local_a0.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
          local_a0.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
          local_a0.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,&local_a0);
          piVar1 = &this_00->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
      if (cVar14 == '\0') {
        EVar17 = (**(code **)(this->SocketSubsystem->_padding_ + 0xb8))();
        if ((SE_ECONNABORTED < EVar17) || ((0x2000081U >> (EVar17 & SE_ETOOMANYREFS) & 1) == 0)) {
          iVar25 = local_res8[0];
          if (EVar17 != SE_ENETDOWN) goto LAB_14ec9393d;
          if (local_res18 == 1) goto LAB_14ec93950;
          bVar13 = false;
          if (local_res18 != 2) goto LAB_14ec9394c;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_108.FromAddress.SharedReferenceCount.ReferenceController);
          fVar10 = __real_3a83126f;
          if (local_108.PacketBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.PacketBytes.AllocatorInstance.Data);
            fVar10 = __real_3a83126f;
          }
          goto LAB_14ec938e0;
        }
      }
      else {
        iVar25 = local_res8[0];
        EVar17 = local_108.Error;
        if (local_res8[0] != 0) {
LAB_14ec9393d:
          local_108.Error = EVar17;
          bVar13 = DispatchPacket(this,&local_108,iVar25);
          bVar13 = !bVar13;
LAB_14ec9394c:
          if (bVar13) goto LAB_14ec93950;
        }
      }
    }
LAB_14ec9395d:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.FromAddress.SharedReferenceCount.ReferenceController);
    if (local_108.PacketBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.PacketBytes.AllocatorInstance.Data);
    }
  } while( true );
}

// SetSocket @ 14ec97c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ec97d6b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffb8 : 0x00014ec97d6f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
UIpNetDriver::FReceiveThreadRunnable::SetSocket
          (FReceiveThreadRunnable *this,TSharedPtr<FSocket,1> *param_1,
          TUniqueFunction<void___cdecl(void)> *param_2)

{
  TTypeCompatibleBytes<TUniqueFunction<void___cdecl(void)>_> *pTVar1;
  atomic<int> *paVar2;
  uchar *puVar3;
  atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  FReceiveThreadRunnable *local_78;
  FSocket *local_70;
  TReferenceControllerBase<1> *local_68;
  longlong local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_70 = param_1->Object;
  local_68 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_68 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_68->SharedReferenceCount = (atomic<int>)((int)local_68->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = *(longlong *)param_2;
  local_30 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  local_38 = *(undefined8 *)&param_2->field_0x20;
  local_48 = *(longlong *)&param_2->field_0x10;
  uStack_40 = *(undefined8 *)&param_2->field_0x18;
  if (local_58 != 0) {
    *(undefined8 *)param_2 = 0;
  }
  local_78 = this;
  aVar4 = (atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)
          TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::AllocNode(&this->CommandQueue);
  pTVar1 = (TTypeCompatibleBytes<TUniqueFunction<void___cdecl(void)>_> *)((longlong)aVar4 + 0x10);
  pTVar1->Pad[0] = '\0';
  pTVar1->Pad[1] = '\0';
  pTVar1->Pad[2] = '\0';
  pTVar1->Pad[3] = '\0';
  pTVar1->Pad[4] = '\0';
  pTVar1->Pad[5] = '\0';
  pTVar1->Pad[6] = '\0';
  pTVar1->Pad[7] = '\0';
  puVar3 = (uchar *)((longlong)aVar4 + 0x38);
  puVar3[0] = '\0';
  puVar3[1] = '\0';
  puVar3[2] = '\0';
  puVar3[3] = '\0';
  puVar3[4] = '\0';
  puVar3[5] = '\0';
  puVar3[6] = '\0';
  puVar3[7] = '\0';
  puVar5 = FMemory::Malloc(0x60,0x10);
  *(undefined8 **)((longlong)aVar4 + 0x38) = puVar5;
  *puVar5 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`UIpNetDriver::FReceiveThreadRunnable::SetSocket'::`2'::<lambda_1>,1,1>
             ::_vftable_;
  puVar5[2] = local_78;
  puVar5[3] = local_70;
  puVar5[4] = local_68;
  local_68 = (TReferenceControllerBase<1> *)0x0;
  local_70 = (FSocket *)0x0;
  puVar5[6] = local_58;
  puVar5[0xb] = local_30;
  local_30 = 0;
  *(undefined4 *)(puVar5 + 8) = (undefined4)local_48;
  *(undefined4 *)((longlong)puVar5 + 0x44) = local_48._4_4_;
  *(undefined4 *)(puVar5 + 9) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)puVar5 + 0x4c) = uStack_40._4_4_;
  puVar5[10] = local_38;
  if (puVar5[6] != 0) {
    local_58 = 0;
  }
  if (puVar5 + 2 != (undefined8 *)0x0) {
    *(code **)((TTypeCompatibleBytes<TUniqueFunction<void___cdecl(void)>_> *)
              ((longlong)aVar4 + 0x10))->Pad =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UIpNetDriver::FReceiveThreadRunnable::SetSocket'::__l2::<lambda_1>,void>
         ::Call;
  }
  ((this->CommandQueue).Head)->Next = aVar4;
  (this->CommandQueue).Head = (FNode *)aVar4;
  LOCK();
  paVar2 = &(this->CommandQueue).NumElems;
  *paVar2 = (atomic<int>)((int)*paVar2 + 1);
  UNLOCK();
  if (local_58 != 0) {
    (**(code **)(local_48 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
  if (*(longlong *)param_2 != 0) {
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

// SetSocketImpl @ 14ec97f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ec98056) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffb8 : 0x00014ec9805a */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
UIpNetDriver::FReceiveThreadRunnable::SetSocketImpl
          (FReceiveThreadRunnable *this,TSharedPtr<FSocket,1> *param_1,
          TUniqueFunction<void___cdecl(void)> *param_2)

{
  TTypeCompatibleBytes<TUniqueFunction<void___cdecl(void)>_> *pTVar1;
  atomic<int> *paVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSocket *pFVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  uchar *puVar7;
  atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  ClearSocket(this);
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->Socket).SharedReferenceCount.ReferenceController;
  (this->Socket).Object = pFVar4;
  (this->Socket).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  lVar5 = *(longlong *)param_2;
  if (lVar5 != 0) {
    local_30 = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_48 = *(longlong *)&param_2->field_0x10;
    uStack_40 = *(undefined8 *)&param_2->field_0x18;
    local_38 = *(undefined8 *)&param_2->field_0x20;
    *(undefined8 *)param_2 = 0;
    local_58 = lVar5;
    aVar8 = (atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)
            TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::AllocNode
                      (&this->OwnerEventQueue);
    pTVar1 = (TTypeCompatibleBytes<TUniqueFunction<void___cdecl(void)>_> *)((longlong)aVar8 + 0x10);
    pTVar1->Pad[0] = '\0';
    pTVar1->Pad[1] = '\0';
    pTVar1->Pad[2] = '\0';
    pTVar1->Pad[3] = '\0';
    pTVar1->Pad[4] = '\0';
    pTVar1->Pad[5] = '\0';
    pTVar1->Pad[6] = '\0';
    pTVar1->Pad[7] = '\0';
    puVar7 = (uchar *)((longlong)aVar8 + 0x38);
    puVar7[0] = '\0';
    puVar7[1] = '\0';
    puVar7[2] = '\0';
    puVar7[3] = '\0';
    puVar7[4] = '\0';
    puVar7[5] = '\0';
    puVar7[6] = '\0';
    puVar7[7] = '\0';
    puVar9 = FMemory::Malloc(0x40,0x10);
    *(undefined8 **)((longlong)aVar8 + 0x38) = puVar9;
    *puVar9 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UIpNetDriver::FReceiveThreadRunnable::SetSocketImpl'::`5'::<lambda_1>,1,1>
               ::_vftable_;
    plVar10 = puVar9 + 2;
    *plVar10 = local_58;
    puVar9[7] = local_30;
    local_30 = 0;
    puVar9[4] = local_48;
    puVar9[5] = uStack_40;
    puVar9[6] = local_38;
    if (*plVar10 != 0) {
      local_58 = 0;
    }
    if (plVar10 != (longlong *)0x0) {
      *(code **)((TTypeCompatibleBytes<TUniqueFunction<void___cdecl(void)>_> *)
                ((longlong)aVar8 + 0x10))->Pad =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UIpNetDriver::FReceiveThreadRunnable::SetSocketImpl'::__l5::<lambda_1>,void>
           ::Call;
    }
    ((this->OwnerEventQueue).Head)->Next = aVar8;
    (this->OwnerEventQueue).Head = (FNode *)aVar8;
    LOCK();
    paVar2 = &(this->OwnerEventQueue).NumElems;
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
    if (local_58 != 0) {
      (**(code **)(local_48 + 0x10))();
    }
  }
  if (*(longlong *)param_2 != 0) {
    plVar10 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

