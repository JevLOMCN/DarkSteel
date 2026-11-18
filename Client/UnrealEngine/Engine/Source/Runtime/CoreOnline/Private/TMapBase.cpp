// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreOnline
// Functions: 4

// FindOrAddImpl<enum_UE::Online::EOnlineServices_const_&> @ 144613210

FRepData * __thiscall
TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData,0>_>
::FindOrAddImpl<enum_UE::Online::EOnlineServices_const_&>
          (void *this,uint param_1,EOnlineServices *param_2)

{
  undefined4 uVar1;
  EOnlineServices *pEVar2;
  longlong lVar3;
  int local_res8 [6];
  EOnlineServices *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar2 = (EOnlineServices *)((longlong)(int)uVar1 * 0x70 + *(longlong *)this);
        if (*pEVar2 == *param_2) {
          if (pEVar2 != (EOnlineServices *)0x0) {
            return (FRepData *)(pEVar2 + 8);
          }
          break;
        }
        uVar1 = *(undefined4 *)(pEVar2 + 0x68);
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_UE::Online::EOnlineServices_const_&>_>
            (this,(uint)local_res8,
             (TKeyInitializer<UE::Online::EOnlineServices_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FRepData *)(*(longlong *)this + (longlong)local_res8[0] * 0x70 + 8);
}

// Find @ 144616c10

FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> * __thiscall
TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,0>_>
::Find(void *this,EOnlineServices param_1)

{
  int iVar1;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *pFVar2;
  longlong lVar3;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar3 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *(longlong *)this + (longlong)iVar1 * 0x28;
        if (*(EOnlineServices *)(*(longlong *)this + (longlong)iVar1 * 0x28) == param_1) {
          pFVar2 = (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *)0x0;
          if (lVar3 != 0) {
            pFVar2 = (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *)
                     (lVar3 + 8);
          }
          return pFVar2;
        }
        iVar1 = *(int *)(lVar3 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *)0x0;
}

// Find @ 144616c80

FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> * __thiscall
TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,0>_>
::Find(void *this,EOnlineServices param_1)

{
  int iVar1;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *pFVar2;
  longlong lVar3;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar3 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *(longlong *)this + (longlong)iVar1 * 0x28;
        if (*(EOnlineServices *)(*(longlong *)this + (longlong)iVar1 * 0x28) == param_1) {
          pFVar2 = (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *)0x0;
          if (lVar3 != 0) {
            pFVar2 = (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *)
                     (lVar3 + 8);
          }
          return pFVar2;
        }
        iVar1 = *(int *)(lVar3 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *)0x0;
}

// Find @ 144616cf0

FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> * __thiscall
TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,0>_>
::Find(void *this,EOnlineServices param_1)

{
  int iVar1;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> *pFVar2;
  longlong lVar3;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar3 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *(longlong *)this + (longlong)iVar1 * 0x28;
        if (*(EOnlineServices *)(*(longlong *)this + (longlong)iVar1 * 0x28) == param_1) {
          pFVar2 = (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> *)
                   0x0;
          if (lVar3 != 0) {
            pFVar2 = (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> *
                     )(lVar3 + 8);
          }
          return pFVar2;
        }
        iVar1 = *(int *)(lVar3 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> *)0x0;
}

