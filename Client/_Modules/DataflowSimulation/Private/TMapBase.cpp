// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 6

// FindOrAddImpl<TObjectPtr<UDataflow>_const_&> @ 1462f01c0

FDataflowSimulationData * __thiscall
TMapBase<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
::FindOrAddImpl<TObjectPtr<UDataflow>_const_&>
          (TMapBase<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
           *this,uint param_1,TObjectPtr<UDataflow> *param_2)

{
  int iVar1;
  UDataflow *pUVar2;
  UDataflow *pUVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  int local_res8 [2];
  TObjectPtr<UDataflow> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDataflow *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      lVar5 = (longlong)iVar1 * 0x70;
      pUVar3 = *(UDataflow **)(lVar5 + *(longlong *)&(this->Pairs).Elements);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDataflow *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (pUVar3 == pUVar2) {
        if ((iVar1 != -1) && (lVar5 = *(longlong *)&(this->Pairs).Elements + lVar5, lVar5 != 0)) {
          return (FDataflowSimulationData *)(lVar5 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar5 + 0x68 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TObjectPtr<UDataflow>_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TObjectPtr<UDataflow>_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FDataflowSimulationData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x70 + 8);
}

// FindOrAddImpl<FString_const_&> @ 1462f02d0

TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
* __thiscall
TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x68 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
            *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x68 + 0x10);
}

// FindOrAddImpl<FString> @ 1462f0360

TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>
* __thiscall
TMapBase<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<FString>
          (TMapBase<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x68 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>
            *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x68 + 0x10);
}

// Find @ 1462f60b0

FDataflowSimulationData * __thiscall
TMapBase<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
::Find(TMapBase<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
       *this,TObjectPtr<UDataflow_const_> param_1)

{
  TObjectPtr<UDataflow_const_>_u_0 TVar1;
  int iVar2;
  FDataflowSimulationData *pFVar3;
  uint uVar4;
  longlong lVar5;
  TObjectPtr<UDataflow_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  TVar1.DebugPtr = *param_1.field0_0x0;
  local_res8 = TVar1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar1.DebugPtr != (UDataflow *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UDataflow *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
  }
  uVar4 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = TSet<TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UDataflow_const_>_>
                    (&this->Pairs,uVar4 >> 0x10 ^ uVar4,
                     (TObjectPtr<UDataflow_const_> *)&local_res8.ObjectPtr);
  if (iVar2 != -1) {
    lVar5 = (longlong)iVar2 * 0x70 + *(longlong *)&(this->Pairs).Elements;
    pFVar3 = (FDataflowSimulationData *)0x0;
    if (lVar5 != 0) {
      pFVar3 = (FDataflowSimulationData *)(lVar5 + 8);
    }
    return pFVar3;
  }
  return (FDataflowSimulationData *)0x0;
}

// Find @ 1462f6160

TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
* __thiscall
TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
::Find(TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
  *pTVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x68 + *(longlong *)&(this->Pairs).Elements;
    pTVar6 = (TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
              *)0x0;
    if (lVar4 != 0) {
      pTVar6 = (TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
                *)(lVar4 + 0x10);
    }
    return pTVar6;
  }
  return (TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
          *)0x0;
}

// Find @ 1462f61f0

TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>
* __thiscall
TMapBase<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,0>_>
::Find(TMapBase<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>
  *pTVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x68 + *(longlong *)&(this->Pairs).Elements;
    pTVar6 = (TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>
              *)0x0;
    if (lVar4 != 0) {
      pTVar6 = (TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>
                *)(lVar4 + 0x10);
    }
    return pTVar6;
  }
  return (TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>
          *)0x0;
}

