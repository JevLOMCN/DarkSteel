// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 1

// DestroyIORequest @ 14315c930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014315ca06) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x00014315ca0a */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
UE::EventLoop::FIOAccessBSDSocket::DestroyIORequest
          (FIOAccessBSDSocket *this,TResourceHandle<UE::EventLoop::FIORequestHandleTraits> *param_1,
          TUniqueFunction<void___cdecl(void)> *param_2)

{
  TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>
  *pTVar1;
  atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
  aVar2;
  TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>
  *pTVar3;
  atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
  aVar4;
  undefined1 auStack_78 [32];
  ulong64 local_58;
  longlong local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = param_1->ID;
  pTVar3 = this->IORequestStorage;
  local_48 = *(longlong *)param_2;
  local_20 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  local_28 = *(undefined8 *)&param_2->field_0x20;
  local_38 = *(longlong *)&param_2->field_0x10;
  uStack_30 = *(undefined8 *)&param_2->field_0x18;
  if (local_48 != 0) {
    *(undefined8 *)param_2 = 0;
  }
  aVar4 = (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
           )FMemory::Malloc(0x50,0x10);
  *(undefined8 *)aVar4 = 0;
  *(ulong64 *)((longlong)aVar4 + 0x10) = local_58;
  *(longlong *)((longlong)aVar4 + 0x20) = local_48;
  *(undefined8 *)((longlong)aVar4 + 0x48) = local_20;
  local_20 = 0;
  *(undefined4 *)((longlong)aVar4 + 0x30) = (undefined4)local_38;
  *(undefined4 *)((longlong)aVar4 + 0x34) = local_38._4_4_;
  *(undefined4 *)((longlong)aVar4 + 0x38) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)aVar4 + 0x3c) = uStack_30._4_4_;
  *(undefined8 *)((longlong)aVar4 + 0x40) = local_28;
  if (*(longlong *)((longlong)aVar4 + 0x20) != 0) {
    local_48 = 0;
  }
  LOCK();
  pTVar1 = &pTVar3->RemoveRequests;
  aVar2 = pTVar1->Head;
  pTVar1->Head = aVar4;
  UNLOCK();
  *(atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
    *)aVar2 = aVar4;
  if (local_48 != 0) {
    (**(code **)(local_38 + 0x10))();
  }
  return;
}

