// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkComponents
// Functions: 3

// FindOrAddImpl<TSubclassOf<ULiveLinkRole>_const_&> @ 14d090fc0

TObjectPtr<ULiveLinkControllerBase> * __thiscall
TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
::FindOrAddImpl<TSubclassOf<ULiveLinkRole>_const_&>
          (TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
           *this,uint param_1,TSubclassOf<ULiveLinkRole> *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  TSubclassOf<ULiveLinkRole> *local_res20;
  
  iVar1 = TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSubclassOf<ULiveLinkRole>_>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x18, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TSubclassOf<ULiveLinkRole>_const_&>_>
              (&this->Pairs,(uint)local_res8,
               (TKeyInitializer<TSubclassOf<ULiveLinkRole>_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
  }
  return (TObjectPtr<ULiveLinkControllerBase> *)(lVar2 + 8);
}

// Find @ 14d092ff0

TObjectPtr<ULiveLinkControllerBase> * __thiscall
TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
::Find(TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
       *this,TSubclassOf<ULiveLinkRole_const_> param_1)

{
  longlong lVar1;
  TObjectPtr<UClass>_u_0 TVar2;
  int iVar3;
  TObjectPtr<ULiveLinkControllerBase> *pTVar4;
  uint uVar5;
  TObjectPtr<UClass>_u_0 local_res8;
  
  TVar2 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  local_res8 = TVar2;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar2.DebugPtr != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
  }
  uVar5 = ((uint)((ulonglong)TVar2.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar2.DebugPtr >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar3 = TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSubclassOf<ULiveLinkRole_const_>_>
                    (&this->Pairs,uVar5 >> 0x10 ^ uVar5,
                     (TSubclassOf<ULiveLinkRole_const_> *)&local_res8.ObjectPtr);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x18;
    pTVar4 = (TObjectPtr<ULiveLinkControllerBase> *)0x0;
    if (lVar1 != 0) {
      pTVar4 = (TObjectPtr<ULiveLinkControllerBase> *)(lVar1 + 8);
    }
    return pTVar4;
  }
  return (TObjectPtr<ULiveLinkControllerBase> *)0x0;
}

// Find @ 14d0930b0

TSubclassOf<ULiveLinkControllerBase> * __thiscall
TMapBase<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>,0>_>
::Find(TMapBase<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>,0>_>
       *this,TSubclassOf<ULiveLinkRole_const_> param_1)

{
  longlong lVar1;
  TObjectPtr<UClass>_u_0 TVar2;
  int iVar3;
  TSubclassOf<ULiveLinkControllerBase> *pTVar4;
  uint uVar5;
  TObjectPtr<UClass>_u_0 local_res8;
  
  TVar2 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  local_res8 = TVar2;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar2.DebugPtr != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
  }
  uVar5 = ((uint)((ulonglong)TVar2.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar2.DebugPtr >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar3 = TSet<TTuple<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSubclassOf<ULiveLinkRole_const_>_>
                    (&this->Pairs,uVar5 >> 0x10 ^ uVar5,
                     (TSubclassOf<ULiveLinkRole_const_> *)&local_res8.ObjectPtr);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x18;
    pTVar4 = (TSubclassOf<ULiveLinkControllerBase> *)0x0;
    if (lVar1 != 0) {
      pTVar4 = (TSubclassOf<ULiveLinkControllerBase> *)(lVar1 + 8);
    }
    return pTVar4;
  }
  return (TSubclassOf<ULiveLinkControllerBase> *)0x0;
}

