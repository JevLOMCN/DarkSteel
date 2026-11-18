// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SessionServices
// Functions: 3

// FindOrAddImpl<FGuid_const_&> @ 148cebab0

TSharedPtr<FSessionInfo,1> * __thiscall
TMapBase<FGuid,TSharedPtr<FSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>_>
::FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,TSharedPtr<FSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FGuid,TSharedPtr<FSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FSessionInfo,1>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TSharedPtr<FSessionInfo,1> *)(lVar2 + 0x10);
}

// FindOrAddImpl<FMessageAddress_const_&> @ 148cebb30

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FSessionInstanceInfo,1> * __thiscall
TMapBase<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>_>
::FindOrAddImpl<FMessageAddress_const_&>
          (TMapBase<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>_>
           *this,uint param_1,FMessageAddress *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FMessageAddress *local_res20;
  
  iVar1 = TSet<TTuple<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMessageAddress>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FMessageAddress_const_&>_>
              (&this->Pairs,(uint)local_res8,
               (TKeyInitializer<FMessageAddress_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TSharedPtr<FSessionInstanceInfo,1> *)(lVar2 + 0x10);
}

// Find @ 148cf1e20

/* WARNING: Enum "Type": Some values do not have unique names */

FTracingInstance * __thiscall
TMapBase<FMessageAddress,FTraceController::FTracingInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>_>
::Find(TMapBase<FMessageAddress,FTraceController::FTracingInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>_>
       *this,FMessageAddress *param_1)

{
  uint uVar1;
  int iVar2;
  FTracingInstance *pFVar3;
  longlong lVar4;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(param_1,0x10,0);
  iVar2 = TSet<TTuple<FMessageAddress,FTraceController::FTracingInstance>,TDefaultMapHashableKeyFuncs<FMessageAddress,FTraceController::FTracingInstance,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMessageAddress>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x188 + *(longlong *)&(this->Pairs).Elements;
    pFVar3 = (FTracingInstance *)0x0;
    if (lVar4 != 0) {
      pFVar3 = (FTracingInstance *)(lVar4 + 0x10);
    }
    return pFVar3;
  }
  return (FTracingInstance *)0x0;
}

