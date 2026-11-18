// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// operator() @ 14927d950

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
`FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_NiagaraEmitters>'::__l2::<lambda_1>::
operator()(void *this)

{
  bool bVar1;
  bool bVar2;
  Type TVar3;
  FName FVar4;
  FStartupMessages *this_00;
  IStatGroupEnableManager *pIVar5;
  TStatIdData *in_RDX;
  
  bVar1 = *(bool *)*(undefined8 *)((longlong)this + 0x18);
  FVar4 = **(FName **)this;
  bVar2 = *(bool *)*(undefined8 *)((longlong)this + 0x10);
  TVar3 = **(Type **)((longlong)this + 8);
  this_00 = FStartupMessages::Get();
  FStartupMessages::AddMetadata
            (this_00,FVar4,(wchar_t *)0x0,"STATGROUP_NiagaraEmitters","STATCAT_Niagara",
             L"Niagara Emitters",bVar1,TVar3,bVar2,false,MCR_Invalid);
  pIVar5 = IStatGroupEnableManager::Get();
  (**(code **)((longlong)*pIVar5 + 8))(pIVar5);
  return (TStatId)in_RDX;
}

// operator() @ 14938c530

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
`FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_NiagaraDetailed>'::__l2::<lambda_1>::
operator()(void *this)

{
  bool bVar1;
  bool bVar2;
  Type TVar3;
  FName FVar4;
  FStartupMessages *this_00;
  IStatGroupEnableManager *pIVar5;
  TStatIdData *in_RDX;
  
  bVar1 = *(bool *)*(undefined8 *)((longlong)this + 0x18);
  FVar4 = **(FName **)this;
  bVar2 = *(bool *)*(undefined8 *)((longlong)this + 0x10);
  TVar3 = **(Type **)((longlong)this + 8);
  this_00 = FStartupMessages::Get();
  FStartupMessages::AddMetadata
            (this_00,FVar4,(wchar_t *)0x0,"STATGROUP_NiagaraDetailed","STATCAT_Niagara",
             L"Niagara Detailed",bVar1,TVar3,bVar2,false,MCR_Invalid);
  pIVar5 = IStatGroupEnableManager::Get();
  (**(code **)((longlong)*pIVar5 + 8))(pIVar5);
  return (TStatId)in_RDX;
}

// operator() @ 1493d2360

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
`FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_NiagaraSystemCounts>'::__l2::<lambda_1>::
operator()(void *this)

{
  bool bVar1;
  bool bVar2;
  Type TVar3;
  FName FVar4;
  FStartupMessages *this_00;
  IStatGroupEnableManager *pIVar5;
  TStatIdData *in_RDX;
  
  bVar1 = *(bool *)*(undefined8 *)((longlong)this + 0x18);
  FVar4 = **(FName **)this;
  bVar2 = *(bool *)*(undefined8 *)((longlong)this + 0x10);
  TVar3 = **(Type **)((longlong)this + 8);
  this_00 = FStartupMessages::Get();
  FStartupMessages::AddMetadata
            (this_00,FVar4,(wchar_t *)0x0,"STATGROUP_NiagaraSystemCounts","STATCAT_Niagara",
             L"Niagara System Counts",bVar1,TVar3,bVar2,false,MCR_Invalid);
  pIVar5 = IStatGroupEnableManager::Get();
  (**(code **)((longlong)*pIVar5 + 8))(pIVar5);
  return (TStatId)in_RDX;
}

// operator() @ 1493d2460

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
`FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_NiagaraSystems>'::__l2::<lambda_1>::
operator()(void *this)

{
  bool bVar1;
  bool bVar2;
  Type TVar3;
  FName FVar4;
  FStartupMessages *this_00;
  IStatGroupEnableManager *pIVar5;
  TStatIdData *in_RDX;
  
  bVar1 = *(bool *)*(undefined8 *)((longlong)this + 0x18);
  FVar4 = **(FName **)this;
  bVar2 = *(bool *)*(undefined8 *)((longlong)this + 0x10);
  TVar3 = **(Type **)((longlong)this + 8);
  this_00 = FStartupMessages::Get();
  FStartupMessages::AddMetadata
            (this_00,FVar4,(wchar_t *)0x0,"STATGROUP_NiagaraSystems","STATCAT_Niagara",
             L"Niagara Systems",bVar1,TVar3,bVar2,false,MCR_Invalid);
  pIVar5 = IStatGroupEnableManager::Get();
  (**(code **)((longlong)*pIVar5 + 8))(pIVar5);
  return (TStatId)in_RDX;
}

