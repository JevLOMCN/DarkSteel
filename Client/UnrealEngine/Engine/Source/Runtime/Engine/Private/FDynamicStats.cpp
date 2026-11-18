// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// operator() @ 1474b6d30

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
`FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_Anim>'::__l2::<lambda_1>::operator()
          (void *this)

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
            (this_00,FVar4,(wchar_t *)0x0,"STATGROUP_Anim","STATCAT_Advanced",L"Anim",bVar1,TVar3,
             bVar2,false,MCR_Invalid);
  pIVar5 = IStatGroupEnableManager::Get();
  (**(code **)((longlong)*pIVar5 + 8))(pIVar5);
  return (TStatId)in_RDX;
}

// operator() @ 1480f7f30

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
`FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_Emitters>'::__l2::<lambda_1>::operator()
          (void *this)

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
            (this_00,FVar4,(wchar_t *)0x0,"STATGROUP_Emitters","STATCAT_Advanced",L"Emitters",bVar1,
             TVar3,bVar2,false,MCR_Invalid);
  pIVar5 = IStatGroupEnableManager::Get();
  (**(code **)((longlong)*pIVar5 + 8))(pIVar5);
  return (TStatId)in_RDX;
}

// operator() @ 1480f8030

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
`FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_EmittersRT>'::__l2::<lambda_1>::operator()
          (void *this)

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
            (this_00,FVar4,(wchar_t *)0x0,"STATGROUP_EmittersRT","STATCAT_Advanced",L"Emitters",
             bVar1,TVar3,bVar2,false,MCR_Invalid);
  pIVar5 = IStatGroupEnableManager::Get();
  (**(code **)((longlong)*pIVar5 + 8))(pIVar5);
  return (TStatId)in_RDX;
}

