// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 13

// StaticStruct @ 14a37c120

UScriptStruct * __cdecl FRigInfluenceMap::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigInfluenceMap.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigInfluenceMap.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigInfluenceMap,(UObject *)pUVar1,
                         L"RigInfluenceMap");
  }
  return Z_Registration_Info_UScriptStruct_FRigInfluenceMap.OuterSingleton;
}

// FRigInfluenceMap @ 14a3b7f00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigInfluenceMap * __thiscall
FRigInfluenceMap::FRigInfluenceMap(FRigInfluenceMap *this,FRigInfluenceMap *param_1)

{
  TArray<FRigInfluenceEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FRigInfluenceEntry *pFVar4;
  
  pTVar1 = &this->Entries;
  this->EventName = param_1->EventName;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Entries).ArrayMax;
  iVar3 = (param_1->Entries).ArrayNum;
  pFVar4 = (FRigInfluenceEntry *)(param_1->Entries).AllocatorInstance.Data;
  (this->Entries).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FRigInfluenceEntry,FRigInfluenceEntry,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  *(undefined8 *)&(this->KeyToIndex).field_0x0 = 0;
  *(undefined8 *)&(this->KeyToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->KeyToIndex).field_0x20 = 0;
  *(undefined4 *)&(this->KeyToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->KeyToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyToIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyToIndex).field_0x34 = 0;
  *(undefined8 *)&(this->KeyToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->KeyToIndex).field_0x48 = 0;
  TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
               *)&this->KeyToIndex,
              (TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
               *)&param_1->KeyToIndex);
  return this;
}

// operator= @ 14a3bdcc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigInfluenceMap * __thiscall
FRigInfluenceMap::operator=(FRigInfluenceMap *this,FRigInfluenceMap *param_1)

{
  TArray<FRigInfluenceEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FRigInfluenceEntry *pFVar4;
  
  pTVar1 = &this->Entries;
  this->EventName = param_1->EventName;
  if (pTVar1 != &param_1->Entries) {
    DestructItems<FRigInfluenceEntry,int>
              ((FRigInfluenceEntry *)(pTVar1->AllocatorInstance).Data,(this->Entries).ArrayNum);
    iVar3 = (param_1->Entries).ArrayNum;
    piVar2 = &(this->Entries).ArrayMax;
    pFVar4 = (FRigInfluenceEntry *)(param_1->Entries).AllocatorInstance.Data;
    (this->Entries).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FRigInfluenceEntry,FRigInfluenceEntry,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
               *)&this->KeyToIndex,
              (TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
               *)&param_1->KeyToIndex);
  return this;
}

// Find @ 14a40a1e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigInfluenceEntry * __thiscall
FRigInfluenceMap::Find(FRigInfluenceMap *this,FRigElementKey *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  FRigInfluenceEntry *pFVar6;
  
  puVar5 = (uint *)TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                   ::Find((TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                           *)&this->KeyToIndex,param_1);
  if (puVar5 != (uint *)0x0) {
    uVar1 = *puVar5;
    if (uVar1 != 0xffffffff) {
      uVar4 = 0;
      if ((int)uVar1 < (this->Entries).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FRigInfluenceEntry *)(*pcVar2)();
          return pFVar6;
        }
      }
      return (FRigInfluenceEntry *)
             ((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x20);
    }
  }
  return (FRigInfluenceEntry *)0x0;
}

// FindOrAdd @ 14a40bca0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigInfluenceEntry * __thiscall
FRigInfluenceMap::FindOrAdd(FRigInfluenceMap *this,FRigElementKey *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  void *_Src;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  FRigInfluenceEntry *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint local_res8 [2];
  TPairInitializer<FRigElementKey_const_&,int_const_&> local_res18;
  FRigElementKey *local_68;
  uint *local_60;
  undefined8 local_58;
  uint local_50;
  void *local_48;
  undefined8 local_40;
  
  puVar6 = (uint *)TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                   ::Find((TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                           *)&this->KeyToIndex,param_1);
  if (puVar6 == (uint *)0x0) {
    local_res8[0] = 0xffffffff;
  }
  else {
    local_res8[0] = *puVar6;
  }
  if (local_res8[0] == 0xffffffff) {
    local_50 = (param_1->Name).Number;
    pFVar2 = (this->Entries).AllocatorInstance.Data;
    local_58._0_1_ = param_1->Type;
    local_58._1_3_ = *(undefined3 *)&param_1->field_0x1;
    local_58._4_4_ = (param_1->Name).ComparisonIndex;
    local_48 = (void *)0x0;
    local_40 = 0;
    if ((pFVar2 <= (FScriptContainerElement *)&local_58) &&
       ((FScriptContainerElement *)&local_58 < pFVar2 + (longlong)(this->Entries).ArrayMax * 0x20))
    {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FRigInfluenceEntry *)(*pcVar3)();
        return pFVar7;
      }
    }
    uVar5 = (this->Entries).ArrayNum;
    piVar1 = &(this->Entries).ArrayMax;
    if (uVar5 == *piVar1) {
      uVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->Entries).AllocatorInstance,piVar1);
    }
    _Src = local_48;
    (this->Entries).ArrayNum = uVar5 + 1;
    pFVar9 = (this->Entries).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x20;
    *(undefined8 *)pFVar9 = local_58;
    pFVar2 = pFVar9 + 0x10;
    *(uint *)(pFVar9 + 8) = local_50;
    *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
    lVar8 = (longlong)(int)local_40;
    *(int *)(pFVar9 + 0x18) = (int)local_40;
    if ((int)local_40 == 0) {
      *(int *)(pFVar9 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,(int)local_40,0,(ForAnyElementType *)pFVar2,(int)local_40,
                 (int *)(pFVar9 + 0x1c));
      memcpy(*(FScriptContainerElement **)&pFVar2->field_0x0,_Src,lVar8 * 0xc);
    }
    local_60 = local_res8;
    local_res8[0] = uVar5;
    local_68 = param_1;
    TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FRigElementKey_const_&,int_const_&>_>
              ((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                *)&this->KeyToIndex,&local_res18,(bool *)&local_68);
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
  }
  lVar8 = (longlong)(int)local_res8[0];
  uVar5 = 0;
  if ((int)local_res8[0] < (this->Entries).ArrayNum) {
    uVar5 = ~local_res8[0] >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRigInfluenceEntry *)(*pcVar3)();
      return pFVar7;
    }
  }
  return (FRigInfluenceEntry *)((this->Entries).AllocatorInstance.Data + lVar8 * 0x20);
}

// GetEntryModifier @ 14a4139f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigInfluenceEntryModifier * __thiscall
FRigInfluenceMap::GetEntryModifier
          (FRigInfluenceMap *this,FRigInfluenceEntryModifier *__return_storage_ptr__,
          FRigElementKey *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint *puVar8;
  FRigInfluenceEntryModifier *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AffectedList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AffectedList).ArrayNum = 0;
  (__return_storage_ptr__->AffectedList).ArrayMax = 0;
  puVar8 = (uint *)TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                   ::Find((TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                           *)&this->KeyToIndex,param_1);
  if (puVar8 == (uint *)0x0) {
    return __return_storage_ptr__;
  }
  uVar2 = *puVar8;
  if (uVar2 != 0xffffffff) {
    uVar10 = 0;
    if ((int)uVar2 < (this->Entries).ArrayNum) {
      uVar10 = ~uVar2 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FRigInfluenceEntryModifier *)(*pcVar5)();
      return pFVar9;
    }
    pFVar11 = (this->Entries).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x20;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      iVar3 = *(int *)(pFVar11 + 0x18);
      pFVar12 = *(FScriptContainerElement **)(pFVar11 + 0x10);
      pFVar1 = pFVar12 + (longlong)iVar3 * 0xc;
      while( true ) {
        if (*(int *)(pFVar11 + 0x18) != iVar3) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar12 == pFVar1) break;
        pFVar4 = (__return_storage_ptr__->AffectedList).AllocatorInstance.Data;
        if (((pFVar4 <= pFVar12) &&
            (pFVar12 < pFVar4 + (longlong)(__return_storage_ptr__->AffectedList).ArrayMax * 0xc)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FRigInfluenceEntryModifier *)(*pcVar5)();
          return pFVar9;
        }
        iVar7 = (__return_storage_ptr__->AffectedList).ArrayNum;
        if (iVar7 == (__return_storage_ptr__->AffectedList).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,(ForAnyElementType *)__return_storage_ptr__,
                             &(__return_storage_ptr__->AffectedList).ArrayMax);
        }
        (__return_storage_ptr__->AffectedList).ArrayNum = iVar7 + 1;
        pFVar4 = (__return_storage_ptr__->AffectedList).AllocatorInstance.Data;
        *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0xc) = *(undefined8 *)pFVar12;
        *(undefined4 *)(pFVar4 + (longlong)iVar7 * 0xc + 8) = *(undefined4 *)(pFVar12 + 8);
        pFVar12 = pFVar12 + 0xc;
      }
    }
  }
  return __return_storage_ptr__;
}

// Inverse @ 14a424b30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigInfluenceMap * __thiscall
FRigInfluenceMap::Inverse(FRigInfluenceMap *this,FRigInfluenceMap *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRigInfluenceMap *pFVar4;
  FRigInfluenceEntry *pFVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  FRigElementKey *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar10 = 0;
  (__return_storage_ptr__->EventName).ComparisonIndex = 0;
  (__return_storage_ptr__->EventName).Number = 0;
  (__return_storage_ptr__->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Entries).ArrayNum = 0;
  (__return_storage_ptr__->Entries).ArrayMax = 0;
  *(undefined8 *)&__return_storage_ptr__->KeyToIndex = 0;
  *(undefined8 *)&(__return_storage_ptr__->KeyToIndex).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->KeyToIndex).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->KeyToIndex).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->KeyToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->KeyToIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->KeyToIndex).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->KeyToIndex).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->KeyToIndex).field_0x48 = 0;
  __return_storage_ptr__->EventName = this->EventName;
  uVar7 = uVar10;
  uVar11 = uVar10;
  if (0 < (this->Entries).ArrayNum) {
    do {
      uVar8 = (uint)uVar7;
      uVar3 = 0;
      if ((int)uVar8 < (this->Entries).ArrayNum) {
        uVar3 = ~uVar8 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FRigInfluenceMap *)(*pcVar1)();
        return pFVar4;
      }
      pFVar9 = (FRigElementKey *)((this->Entries).AllocatorInstance.Data + uVar11);
      uVar7 = uVar10;
      if (0 < *(int *)(pFVar9 + 2)) {
        do {
          uVar6 = (uint)uVar7;
          uVar3 = 0;
          if ((int)uVar6 < *(int *)(pFVar9 + 2)) {
            uVar3 = ~uVar6 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            pFVar4 = (FRigInfluenceMap *)(*pcVar1)();
            return pFVar4;
          }
          pFVar5 = FindOrAdd(__return_storage_ptr__,
                             (FRigElementKey *)
                             ((longlong)pFVar9[1].Name + (longlong)(int)uVar6 * 0xc));
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
                    (&pFVar5->AffectedList,pFVar9);
          uVar7 = (ulonglong)(uVar6 + 1);
        } while ((int)(uVar6 + 1) < *(int *)(pFVar9 + 2));
      }
      uVar7 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 0x20;
    } while ((int)(uVar8 + 1) < (this->Entries).ArrayNum);
  }
  return __return_storage_ptr__;
}

// Merge @ 14a42cec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigInfluenceMap::Merge(FRigInfluenceMap *this,FRigInfluenceMap *param_1,bool param_2)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  FRigInfluenceEntry *pFVar5;
  FName FVar6;
  FRigElementKey *pFVar7;
  FRigElementKey *pFVar8;
  FRigElementKey *pFVar9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [4];
  uint local_b4;
  FRigInfluenceMap *local_b0;
  undefined1 local_a8 [88];
  void *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((param_2) || (param_1->EventName == this->EventName)) {
    local_b0 = this;
    FRigInfluenceMap((FRigInfluenceMap *)local_a8,this);
    local_b4 = (param_1->Entries).ArrayNum;
    uVar4 = (ulonglong)(int)local_b4;
    pFVar7 = (FRigElementKey *)(param_1->Entries).AllocatorInstance.Data;
    pFVar9 = (FRigElementKey *)((longlong)pFVar7 + uVar4 * 0x20);
    pFVar8 = pFVar7 + 2;
    while( true ) {
      if ((param_1->Entries).ArrayNum != (int)uVar4) {
        `TCheckedPointerIterator<FRigInfluenceEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_b8);
      }
      if (pFVar7 == pFVar9) {
        operator=(local_b0,(FRigInfluenceMap *)local_a8);
        bVar3 = true;
        goto LAB_14a42cfeb;
      }
      pFVar5 = FindOrAdd((FRigInfluenceMap *)local_a8,pFVar7);
      if ((pFVar8[-2].Name != (pFVar5->Source).Name) || (pFVar7->Type != (pFVar5->Source).Type))
      break;
      iVar2 = *(int *)pFVar8;
      FVar6 = pFVar8[-1].Name;
      FVar1 = (FName)((longlong)FVar6 + (longlong)iVar2 * 0xc);
      while( true ) {
        if (*(int *)pFVar8 != iVar2) {
          `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_b8);
        }
        if (FVar6 == FVar1) break;
        TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
                  (&pFVar5->AffectedList,(FRigElementKey *)FVar6);
        FVar6 = (FName)((longlong)FVar6 + 0xc);
      }
      uVar4 = (ulonglong)local_b4;
      pFVar7 = (FRigElementKey *)&pFVar7[2].Name.Number;
      pFVar8 = (FRigElementKey *)&pFVar8[2].Name.Number;
    }
    bVar3 = false;
LAB_14a42cfeb:
    local_48 = 0;
    if (local_50 != (void *)0x0) {
      FMemory::Free(local_50);
    }
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_a8 + 0x18));
    DestructItems<FRigInfluenceEntry,int>((FRigInfluenceEntry *)local_a8._8_8_,local_a8._16_4_);
    if ((FRigInfluenceEntry *)local_a8._8_8_ != (FRigInfluenceEntry *)0x0) {
      FMemory::Free((void *)local_a8._8_8_);
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// Merge @ 14a42d090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigInfluenceMap::Merge(FRigInfluenceMap *this,FRigInfluenceMap *param_1)

{
  FName FVar1;
  int iVar2;
  ulonglong uVar3;
  FRigInfluenceEntry *pFVar4;
  FName FVar5;
  FRigElementKey *pFVar6;
  FRigElementKey *pFVar7;
  FRigElementKey *pFVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [4];
  uint local_b4;
  FRigInfluenceMap *local_b0;
  undefined1 local_a8 [88];
  void *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_1->EventName == this->EventName) {
    local_b0 = this;
    FRigInfluenceMap((FRigInfluenceMap *)local_a8,this);
    local_b4 = (param_1->Entries).ArrayNum;
    uVar3 = (ulonglong)(int)local_b4;
    pFVar6 = (FRigElementKey *)(param_1->Entries).AllocatorInstance.Data;
    pFVar8 = (FRigElementKey *)((longlong)pFVar6 + uVar3 * 0x20);
    pFVar7 = pFVar6 + 2;
    while( true ) {
      if ((param_1->Entries).ArrayNum != (int)uVar3) {
        `TCheckedPointerIterator<FRigInfluenceEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_b8);
      }
      if (pFVar6 == pFVar8) {
        operator=(local_b0,(FRigInfluenceMap *)local_a8);
        local_48 = 0;
        if (local_50 != (void *)0x0) {
          FMemory::Free(local_50);
        }
        TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_a8 + 0x18));
        DestructItems<FRigInfluenceEntry,int>((FRigInfluenceEntry *)local_a8._8_8_,local_a8._16_4_);
        if ((FRigInfluenceEntry *)local_a8._8_8_ != (FRigInfluenceEntry *)0x0) {
          FMemory::Free((void *)local_a8._8_8_);
        }
        return true;
      }
      pFVar4 = FindOrAdd((FRigInfluenceMap *)local_a8,pFVar6);
      if ((pFVar7[-2].Name != (pFVar4->Source).Name) || (pFVar6->Type != (pFVar4->Source).Type))
      break;
      iVar2 = *(int *)pFVar7;
      FVar5 = pFVar7[-1].Name;
      FVar1 = (FName)((longlong)FVar5 + (longlong)iVar2 * 0xc);
      while( true ) {
        if (*(int *)pFVar7 != iVar2) {
          `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_b8);
        }
        if (FVar5 == FVar1) break;
        TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
                  (&pFVar4->AffectedList,(FRigElementKey *)FVar5);
        FVar5 = (FName)((longlong)FVar5 + 0xc);
      }
      uVar3 = (ulonglong)local_b4;
      pFVar6 = (FRigElementKey *)&pFVar6[2].Name.Number;
      pFVar7 = (FRigElementKey *)&pFVar7[2].Name.Number;
    }
    local_48 = 0;
    if (local_50 != (void *)0x0) {
      FMemory::Free(local_50);
    }
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_a8 + 0x18));
    DestructItems<FRigInfluenceEntry,int>((FRigInfluenceEntry *)local_a8._8_8_,local_a8._16_4_);
    if ((FRigInfluenceEntry *)local_a8._8_8_ != (FRigInfluenceEntry *)0x0) {
      FMemory::Free((void *)local_a8._8_8_);
    }
  }
  return false;
}

// OnKeyRemoved @ 14a430480

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigInfluenceMap::OnKeyRemoved(FRigInfluenceMap *this,FRigElementKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Entries).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Entries).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = (this->Entries).AllocatorInstance.Data + lVar6;
      if ((*(FName *)(pFVar4 + 4) != param_1->Name) ||
         (*pFVar4 != (FScriptContainerElement)param_1->Type)) {
        TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::Remove
                  ((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(pFVar4 + 0x10),param_1);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x20;
    } while ((int)uVar5 < (this->Entries).ArrayNum);
  }
  Remove(this,param_1);
  return;
}

// OnKeyRenamed @ 14a4306f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigInfluenceMap::OnKeyRenamed
          (FRigInfluenceMap *this,FRigElementKey *param_1,FRigElementKey *param_2)

{
  ERigElementType *pEVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  ERigElementType *pEVar8;
  int *piVar9;
  longlong lVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  uint local_res20 [2];
  TPairInitializer<FRigElementKey_const_&,int_const_&> local_58;
  FRigElementKey *local_48;
  uint *local_40;
  
  uVar11 = 0;
  if (0 < (this->Entries).ArrayNum) {
    local_58.Value = (int *)0x0;
    do {
      piVar9 = local_58.Value;
      uVar6 = 0;
      if ((int)uVar11 < (this->Entries).ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar12 = (this->Entries).AllocatorInstance.Data + (longlong)piVar9;
      if ((*(FName *)(pFVar12 + 4) != param_1->Name) ||
         (*pFVar12 != (FScriptContainerElement)param_1->Type)) {
        iVar2 = *(int *)(pFVar12 + 0x18);
        pEVar8 = *(ERigElementType **)(pFVar12 + 0x10);
        pEVar1 = pEVar8 + (longlong)iVar2 * 0xc;
        while( true ) {
          if (*(int *)(pFVar12 + 0x18) != iVar2) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FRigElementKey,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          piVar9 = local_58.Value;
          if (pEVar8 == pEVar1) break;
          if ((*(FName *)(pEVar8 + 4) == param_1->Name) && (*pEVar8 == param_1->Type)) {
            *(undefined8 *)pEVar8 = *(undefined8 *)param_2;
            *(uint *)(pEVar8 + 8) = (param_2->Name).Number;
          }
          pEVar8 = pEVar8 + 0xc;
        }
      }
      local_58.Value = piVar9 + 8;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (this->Entries).ArrayNum);
  }
  puVar7 = (uint *)TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                   ::Find((TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                           *)&this->KeyToIndex,param_1);
  if (puVar7 != (uint *)0x0) {
    local_res20[0] = *puVar7;
    lVar10 = (longlong)(int)local_res20[0];
    if (local_res20[0] != 0xffffffff) {
      local_58.Value = *(int **)param_2;
      uVar11 = (param_2->Name).Number;
      uVar6 = 0;
      if ((int)local_res20[0] < (this->Entries).ArrayNum) {
        uVar6 = ~local_res20[0] >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar12 = (this->Entries).AllocatorInstance.Data;
      *(int **)(pFVar12 + lVar10 * 0x20) = local_58.Value;
      *(uint *)(pFVar12 + lVar10 * 0x20 + 8) = uVar11;
      if (*(int *)&(this->KeyToIndex).field_0x8 != *(int *)&(this->KeyToIndex).field_0x34) {
        FVar3 = param_1->Name;
        uVar11 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
        TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
        ::RemoveImpl<FRigElementKey>
                  ((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                    *)&this->KeyToIndex,(uint)param_1->Type + (uVar11 + FVar3.Number) * 10,param_1);
      }
      local_40 = local_res20;
      local_48 = param_2;
      TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FRigElementKey_const_&,int_const_&>_>
                ((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                  *)&this->KeyToIndex,&local_58,(bool *)&local_48);
    }
  }
  return;
}

// Remove @ 14a43b9d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigInfluenceMap::Remove(FRigInfluenceMap *this,FRigElementKey *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  FScriptContainerElement *_Dst;
  undefined1 local_res8 [8];
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar9 = (uint *)TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                   ::Find((TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                           *)&this->KeyToIndex,param_1);
  if (puVar9 != (uint *)0x0) {
    uVar4 = *puVar9;
    if (uVar4 != 0xffffffff) {
      iVar12 = 0;
      uVar7 = 0;
      if ((int)uVar4 < (this->Entries).ArrayNum) {
        uVar7 = ~uVar4 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      _Dst = (this->Entries).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20;
      if (*(void **)(_Dst + 0x10) != (void *)0x0) {
        FMemory::Free(*(void **)(_Dst + 0x10));
      }
      iVar10 = (this->Entries).ArrayNum + ~uVar4;
      if (iVar10 != 0) {
        memmove(_Dst,_Dst + 0x20,(longlong)iVar10 << 5);
      }
      piVar1 = &(this->Entries).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,&(this->Entries).AllocatorInstance,(this->Entries).ArrayNum,
                 &(this->Entries).ArrayMax);
      iVar10 = *(int *)&(this->KeyToIndex).field_0x28;
      puVar2 = &(this->KeyToIndex).field_0x10;
      uVar7 = 1;
      iVar15 = 0;
      iVar8 = 0;
      if (iVar10 != 0) {
        puVar9 = *(uint **)&(this->KeyToIndex).field_0x20;
        if (puVar9 == (uint *)0x0) {
          puVar9 = (uint *)puVar2;
        }
        uVar14 = *puVar9;
        iVar15 = 0;
        while (uVar14 == 0) {
          lVar11 = (longlong)iVar12;
          iVar15 = iVar15 + 0x20;
          iVar12 = iVar12 + 1;
          iVar8 = iVar10;
          if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14a43bb5d;
          uVar14 = puVar9[lVar11 + 1];
        }
        uVar7 = -uVar14 & uVar14;
        uVar3 = (ulonglong)uVar7 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar8 = iVar15 + -1 + (int)lVar11;
        if (iVar10 < iVar8) {
          iVar8 = iVar10;
        }
      }
LAB_14a43bb5d:
      uVar14 = *(uint *)&(this->KeyToIndex).field_0x28;
      uVar13 = uVar14 & 0xffffffe0;
      TStack_60._padding_ = CONCAT44(uVar7,iVar12);
      TStack_60.CurrentBitIndex = iVar8;
      TStack_60.UnvisitedBitMask = 0xffffffff;
      iVar12 = (int)uVar14 >> 5;
      TStack_60._28_4_ = local_9c;
      TStack_60.BaseBitIndex = iVar15;
      uStack_40 = CONCAT44(uStack_6c,
                           *(int *)&(this->KeyToIndex).field_0x8 -
                           *(int *)&(this->KeyToIndex).field_0x34);
      TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar14 < 0) || (iVar10 < (int)uVar14)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = *(uint *)&(this->KeyToIndex).field_0x28;
      if (uVar14 != uVar7) {
        puVar16 = *(undefined1 **)&(this->KeyToIndex).field_0x20;
        if (puVar16 == (undefined1 *)0x0) {
          puVar16 = puVar2;
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
        while (uVar14 == 0) {
          lVar11 = (longlong)iVar12;
          uVar13 = uVar13 + 0x20;
          iVar12 = iVar12 + 1;
          uVar14 = uVar7;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_14a43bc70;
          uVar14 = *(uint *)(puVar16 + lVar11 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar14 = (int)lVar11 + -1 + uVar13;
        if ((int)uVar7 < (int)uVar14) {
          uVar14 = uVar7;
        }
      }
LAB_14a43bc70:
      while( true ) {
        if (*(int *)&(this->KeyToIndex).field_0x8 - *(int *)&(this->KeyToIndex).field_0x34 !=
            (int)uStack_40) {
          `TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((TStack_60.CurrentBitIndex == uVar14) &&
           (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
        lVar11 = *(longlong *)&this->KeyToIndex;
        iVar12 = *(int *)(lVar11 + 0xc + (longlong)TStack_60.CurrentBitIndex * 0x18);
        if ((int)uVar4 < iVar12) {
          *(int *)(lVar11 + (longlong)TStack_60.CurrentBitIndex * 0x18 + 0xc) = iVar12 + -1;
        }
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      }
    }
  }
  return;
}

// SetEntryModifier @ 14a459770

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigInfluenceMap::SetEntryModifier
          (FRigInfluenceMap *this,FRigElementKey *param_1,FRigInfluenceEntryModifier *param_2)

{
  FRigElementKey *pFVar1;
  int iVar2;
  FRigInfluenceEntry *pFVar3;
  FRigElementKey *pFVar4;
  undefined1 local_res18 [16];
  
  pFVar3 = FindOrAdd(this,param_1);
  (pFVar3->AffectedList).ArrayNum = 0;
  if ((pFVar3->AffectedList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(pFVar3->AffectedList).AllocatorInstance,0,&(pFVar3->AffectedList).ArrayMax)
    ;
  }
  iVar2 = (param_2->AffectedList).ArrayNum;
  pFVar4 = (FRigElementKey *)(param_2->AffectedList).AllocatorInstance.Data;
  pFVar1 = pFVar4 + iVar2;
  while( true ) {
    if ((param_2->AffectedList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar4 == pFVar1) break;
    TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
              (&pFVar3->AffectedList,pFVar4);
    pFVar4 = pFVar4 + 1;
  }
  return;
}

