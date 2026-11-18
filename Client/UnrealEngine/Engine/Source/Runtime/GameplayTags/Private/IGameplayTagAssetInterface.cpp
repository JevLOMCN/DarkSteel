// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 8

// BP_GetOwnedGameplayTags @ 146ad25f0

FGameplayTagContainer * __thiscall
IGameplayTagAssetInterface::BP_GetOwnedGameplayTags
          (IGameplayTagAssetInterface *this,FGameplayTagContainer *__return_storage_ptr__)

{
  UObject *pUVar1;
  
  pUVar1 = (UObject *)(**(code **)((longlong)*this + 8))();
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  (__return_storage_ptr__->GameplayTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->GameplayTags).ArrayNum = 0;
  (__return_storage_ptr__->GameplayTags).ArrayMax = 0;
  if (pUVar1 == (UObject *)0x0) {
    this = (IGameplayTagAssetInterface *)0x0;
  }
  (__return_storage_ptr__->ParentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ParentTags).ArrayNum = 0;
  (__return_storage_ptr__->ParentTags).ArrayMax = 0;
  if (this != (IGameplayTagAssetInterface *)0x0) {
    (**(code **)((longlong)*this + 0x10))(this,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// HasAllMatchingGameplayTags @ 146ae17a0

bool __thiscall
IGameplayTagAssetInterface::HasAllMatchingGameplayTags
          (IGameplayTagAssetInterface *this,FGameplayTagContainer *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  (**(code **)((longlong)*this + 0x10))(this,&local_28);
  iVar2 = (param_1->GameplayTags).ArrayNum;
  plVar6 = local_18;
  if (iVar2 == 0) {
    bVar4 = true;
  }
  else {
    pFVar5 = (param_1->GameplayTags).AllocatorInstance.Data;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((param_1->GameplayTags).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
        plVar6 = local_18;
      }
      if (pFVar5 == pFVar1) {
        bVar4 = true;
        goto LAB_146ae1861;
      }
      if (local_28 != local_28 + (int)local_20) {
        plVar3 = local_28;
        do {
          if (*plVar3 == *(longlong *)pFVar5) goto LAB_146ae1854;
          plVar3 = plVar3 + 1;
        } while (plVar3 != local_28 + (int)local_20);
      }
      if (plVar6 == plVar6 + (int)local_10) break;
      plVar3 = plVar6;
      while (*plVar3 != *(longlong *)pFVar5) {
        plVar3 = plVar3 + 1;
        if (plVar3 == plVar6 + (int)local_10) goto LAB_146ae1850;
      }
LAB_146ae1854:
      pFVar5 = pFVar5 + 8;
    }
LAB_146ae1850:
    bVar4 = false;
  }
LAB_146ae1861:
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return bVar4;
}

// HasAnyMatchingGameplayTags @ 146ae1a30

bool __thiscall
IGameplayTagAssetInterface::HasAnyMatchingGameplayTags
          (IGameplayTagAssetInterface *this,FGameplayTagContainer *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  (**(code **)((longlong)*this + 0x10))(this,&local_28);
  iVar2 = (param_1->GameplayTags).ArrayNum;
  plVar6 = local_18;
  if (iVar2 == 0) {
    bVar4 = false;
  }
  else {
    pFVar5 = (param_1->GameplayTags).AllocatorInstance.Data;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((param_1->GameplayTags).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
        plVar6 = local_18;
      }
      if (pFVar5 == pFVar1) break;
      if (local_28 != local_28 + (int)local_20) {
        plVar3 = local_28;
        do {
          if (*plVar3 == *(longlong *)pFVar5) goto LAB_146ae1ae6;
          plVar3 = plVar3 + 1;
        } while (plVar3 != local_28 + (int)local_20);
      }
      if (plVar6 != plVar6 + (int)local_10) {
        plVar3 = plVar6;
        do {
          if (*plVar3 == *(longlong *)pFVar5) goto LAB_146ae1ae6;
          plVar3 = plVar3 + 1;
        } while (plVar3 != plVar6 + (int)local_10);
      }
      pFVar5 = pFVar5 + 8;
    }
    bVar4 = false;
  }
LAB_146ae1af1:
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return bVar4;
LAB_146ae1ae6:
  bVar4 = true;
  goto LAB_146ae1af1;
}

// HasMatchingGameplayTag @ 146ae1b70

bool __thiscall
IGameplayTagAssetInterface::HasMatchingGameplayTag
          (IGameplayTagAssetInterface *this,FGameplayTag param_1)

{
  FName *pFVar1;
  bool bVar2;
  FName *local_28;
  undefined8 local_20;
  FName *local_18;
  undefined8 local_10;
  
  local_28 = (FName *)0x0;
  local_20 = 0;
  local_18 = (FName *)0x0;
  local_10 = 0;
  (**(code **)((longlong)*this + 0x10))(this,&local_28);
  if (param_1.TagName != (FName)0x0) {
    for (pFVar1 = local_28; pFVar1 != local_28 + (int)local_20; pFVar1 = pFVar1 + 1) {
      if (*pFVar1 == param_1.TagName) goto LAB_146ae1c18;
    }
    for (pFVar1 = local_18; pFVar1 != local_18 + (int)local_10; pFVar1 = pFVar1 + 1) {
      if (*pFVar1 == param_1.TagName) goto LAB_146ae1c18;
    }
  }
  bVar2 = false;
LAB_146ae1bf0:
  if (local_18 != (FName *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (FName *)0x0) {
    FMemory::Free(local_28);
  }
  return bVar2;
LAB_146ae1c18:
  bVar2 = true;
  goto LAB_146ae1bf0;
}

// execBP_GetOwnedGameplayTags @ 146af1510

void __cdecl
IGameplayTagAssetInterface::execBP_GetOwnedGameplayTags
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGameplayTagContainer *pFVar1;
  void *local_28 [2];
  void *local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = (FGameplayTagContainer *)(**(code **)(*(longlong *)param_1 + 0x30))(param_1,local_28);
  FGameplayTagContainer::operator=(param_3,pFVar1);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  return;
}

// execHasAllMatchingGameplayTags @ 146af2980

void __cdecl
IGameplayTagAssetInterface::execHasAllMatchingGameplayTags
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  void **ppvVar3;
  void *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  ppvVar3 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x20))(param_1,ppvVar3);
  *(undefined1 *)param_3 = uVar2;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execHasAnyMatchingGameplayTags @ 146af2d50

void __cdecl
IGameplayTagAssetInterface::execHasAnyMatchingGameplayTags
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  void **ppvVar3;
  void *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  ppvVar3 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1,ppvVar3);
  *(undefined1 *)param_3 = uVar2;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execHasMatchingGameplayTag @ 146af3120

void __cdecl
IGameplayTagAssetInterface::execHasMatchingGameplayTag
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x18))(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

