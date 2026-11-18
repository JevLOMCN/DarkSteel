// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 52

// operator= @ 14b444780

TArray<EDS_StatusType,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>::operator=
          (void *this,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    *(int *)((longlong)this + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)this + 0xc) == 0)) {
      *(int *)((longlong)this + 0xc) = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,*(int *)((longlong)this + 0xc),this,iVar1,(int *)((longlong)this + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)this,_Src,(longlong)iVar1 << 2);
    }
  }
  return this;
}

// operator= @ 14b49ad80

TArray<EDS_FactionType,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_EDS_FactionType,TSizedDefaultAllocator<32>_>::operator=
          (void *this,TArray<EDS_FactionType,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    *(int *)((longlong)this + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)this + 0xc) == 0)) {
      *(int *)((longlong)this + 0xc) = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,*(int *)((longlong)this + 0xc),this,iVar1,(int *)((longlong)this + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)this,_Src,(longlong)iVar1);
    }
  }
  return this;
}

// operator= @ 14b4cc240

TArray<EDS_ItemType,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_EDS_ItemType,TSizedDefaultAllocator<32>_>::operator=
          (void *this,TArray<EDS_ItemType,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    *(int *)((longlong)this + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)this + 0xc) == 0)) {
      *(int *)((longlong)this + 0xc) = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,*(int *)((longlong)this + 0xc),this,iVar1,(int *)((longlong)this + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)this,_Src,(longlong)iVar1 << 2);
    }
  }
  return this;
}

// operator= @ 14b4cc2e0

TArray<EDS_SortingType,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_EDS_SortingType,TSizedDefaultAllocator<32>_>::operator=
          (void *this,TArray<EDS_SortingType,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    *(int *)((longlong)this + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)this + 0xc) == 0)) {
      *(int *)((longlong)this + 0xc) = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,*(int *)((longlong)this + 0xc),this,iVar1,(int *)((longlong)this + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)this,_Src,(longlong)iVar1);
    }
  }
  return this;
}

// operator= @ 14b4d4a50

TArray<EDS_MoneyType,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_EDS_MoneyType,TSizedDefaultAllocator<32>_>::operator=
          (void *this,TArray<EDS_MoneyType,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    *(int *)((longlong)this + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)this + 0xc) == 0)) {
      *(int *)((longlong)this + 0xc) = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,*(int *)((longlong)this + 0xc),this,iVar1,(int *)((longlong)this + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)this,_Src,(longlong)iVar1);
    }
  }
  return this;
}

// operator= @ 14b4d9a50

TArray<EDS_InventoryType,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_EDS_InventoryType,TSizedDefaultAllocator<32>_>::operator=
          (void *this,TArray<EDS_InventoryType,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    *(int *)((longlong)this + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)this + 0xc) == 0)) {
      *(int *)((longlong)this + 0xc) = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,*(int *)((longlong)this + 0xc),this,iVar1,(int *)((longlong)this + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)this,_Src,(longlong)iVar1);
    }
  }
  return this;
}

// operator= @ 14b4f1ad0

TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>::operator=
          (void *this,TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    *(int *)((longlong)this + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)this + 0xc) == 0)) {
      *(int *)((longlong)this + 0xc) = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,*(int *)((longlong)this + 0xc),this,iVar1,(int *)((longlong)this + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)this,_Src,(longlong)iVar1 << 2);
    }
  }
  return this;
}

// operator= @ 14b541b70

TArray<EDS_AbnormalType,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_EDS_AbnormalType,TSizedDefaultAllocator<32>_>::operator=
          (void *this,TArray<EDS_AbnormalType,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    *(int *)((longlong)this + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)this + 0xc) == 0)) {
      *(int *)((longlong)this + 0xc) = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,*(int *)((longlong)this + 0xc),this,iVar1,(int *)((longlong)this + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)this,_Src,(longlong)iVar1);
    }
  }
  return this;
}

// operator= @ 14b54b9c0

TArray<EDS_GradeType,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_EDS_GradeType,TSizedDefaultAllocator<32>_>::operator=
          (void *this,TArray<EDS_GradeType,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    *(int *)((longlong)this + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)this + 0xc) == 0)) {
      *(int *)((longlong)this + 0xc) = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,*(int *)((longlong)this + 0xc),this,iVar1,(int *)((longlong)this + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)this,_Src,(longlong)iVar1);
    }
  }
  return this;
}

// operator= @ 14b58e5a0

TArray<EDS_ConditionCheckType,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_EDS_ConditionCheckType,TSizedDefaultAllocator<32>_>::operator=
          (void *this,TArray<EDS_ConditionCheckType,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    *(int *)((longlong)this + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)this + 0xc) == 0)) {
      *(int *)((longlong)this + 0xc) = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,*(int *)((longlong)this + 0xc),this,iVar1,(int *)((longlong)this + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)this,_Src,(longlong)iVar1);
    }
  }
  return this;
}

// operator= @ 14b58e630

TArray<EDS_SkillCostType,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_EDS_SkillCostType,TSizedDefaultAllocator<32>_>::operator=
          (void *this,TArray<EDS_SkillCostType,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    *(int *)((longlong)this + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)this + 0xc) == 0)) {
      *(int *)((longlong)this + 0xc) = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,*(int *)((longlong)this + 0xc),this,iVar1,(int *)((longlong)this + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)this,_Src,(longlong)iVar1);
    }
  }
  return this;
}

// operator= @ 14b5a2cf0

TArray<EDS_StatusContentsInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_EDS_StatusContentsInfo,TSizedDefaultAllocator<32>_>::operator=
          (void *this,TArray<EDS_StatusContentsInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    *(int *)((longlong)this + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)this + 0xc) == 0)) {
      *(int *)((longlong)this + 0xc) = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,*(int *)((longlong)this + 0xc),this,iVar1,(int *)((longlong)this + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)this,_Src,(longlong)iVar1 << 2);
    }
  }
  return this;
}

// operator= @ 14b5f7c50

TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *this,
          TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FDS_TextFormatArg *pFVar3;
  
  if (this != param_1) {
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FDS_TextFormatArg *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// AddUniqueImpl<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_const_&> @ 14b795f80

int __thiscall
TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_const_&>
          (TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this,
          TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&this->AllocatorInstance,&this->ArrayMax);
    }
    pFVar1 = (this->AllocatorInstance).Data;
    this->ArrayNum = iVar4 + 1;
    *(FWeakObjectPtr *)(pFVar1 + (longlong)iVar4 * 8) = param_1->WeakPtr;
  }
  return iVar4;
}

// Find @ 14b7a8bb0

int __thiscall
TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this,
          TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *this_00;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + (longlong)iVar1 * 8) {
      return -1;
    }
    bVar3 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals<UDS_SkillData,bool>
                      ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 8;
  }
  return (int)((longlong)this_00 - (longlong)pFVar2 >> 3);
}

// Remove @ 14b7c1200

int __thiscall
TArray<enum_EDS_StateTagType,TSizedDefaultAllocator<32>_>::Remove
          (void *this,EDS_StateTagType *param_1)

{
  EDS_StateTagType *pEVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if ((*(EDS_StateTagType **)this <= param_1) &&
     (param_1 < *(EDS_StateTagType **)this + *(int *)((longlong)this + 0xc))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = *(int *)((longlong)this + 8);
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pEVar1 = *(EDS_StateTagType **)this;
  iVar9 = 0;
  bVar3 = *pEVar1 != *param_1;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (pEVar1[lVar6] != *param_1)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pEVar1 + iVar9,pEVar1 + iVar7,(longlong)(iVar8 - iVar7));
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      *(int *)((longlong)this + 8) = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// CopyToEmpty<enum_EDS_KeyActionType,int> @ 14b7d0f70

void __thiscall
TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>::CopyToEmpty<enum_EDS_KeyActionType,int>
          (void *this,EDS_KeyActionType *param_1,int param_2,int param_3)

{
  *(int *)((longlong)this + 8) = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    *(undefined4 *)((longlong)this + 0xc) = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,param_2,param_3,this,param_2,(int *)((longlong)this + 0xc));
  if (param_2 != 0) {
    memcpy(*(void **)this,param_1,(longlong)param_2 << 2);
  }
  return;
}

// RemoveAtImpl @ 14b898280

void __thiscall
TArray<TSharedPtr<FWN_AsyncCollision,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TSharedPtr<FWN_AsyncCollision,1>,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  TSharedPtr<FWN_AsyncCollision,1> *_Dst;
  
  _Dst = (TSharedPtr<FWN_AsyncCollision,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<FWN_AsyncCollision,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14b898300

void __thiscall
TArray<FDS_ISKM_BoidsFSM_ExecutionContext,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FDS_ISKM_BoidsFSM_ExecutionContext,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FDS_ISKM_BoidsFSM_ExecutionContext *_Dst;
  
  _Dst = (FDS_ISKM_BoidsFSM_ExecutionContext *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x280);
  DestructItems<FDS_ISKM_BoidsFSM_ExecutionContext,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x280);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// TArray<enum_EDS_KeyType,TSizedDefaultAllocator<32>_> @ 14b8b0ec0

TArray<EDS_KeyType,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_EDS_KeyType,TSizedDefaultAllocator<32>_>::
TArray<enum_EDS_KeyType,TSizedDefaultAllocator<32>_>
          (void *this,initializer_list<EDS_KeyType> *param_1)

{
  EDS_KeyType *_Src;
  EDS_KeyType *pEVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pEVar1 = param_1->_Last;
  *(undefined8 *)this = 0;
  iVar2 = (int)((longlong)pEVar1 - (longlong)_Src >> 2);
  *(int *)((longlong)this + 8) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,0,this,iVar2,(int *)((longlong)this + 0xc));
  memcpy(*(void **)this,_Src,(longlong)iVar2 << 2);
  return this;
}

// AddUniqueImpl<ADS_WorldDrawingBoard_*_const_&> @ 14b98db30

int __thiscall
TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<ADS_WorldDrawingBoard_*_const_&>
          (TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_> *this,
          ADS_WorldDrawingBoard **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(ADS_WorldDrawingBoard **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(ADS_WorldDrawingBoard **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<ADS_WorldInteractVolume_*_const_&> @ 14b98dc30

int __thiscall
TArray<ADS_WorldInteractVolume_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<ADS_WorldInteractVolume_*_const_&>
          (TArray<ADS_WorldInteractVolume_*,TSizedDefaultAllocator<32>_> *this,
          ADS_WorldInteractVolume **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(ADS_WorldInteractVolume **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(ADS_WorldInteractVolume **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<UDS_InteractBrush_*_const_&> @ 14b98dd30

int __thiscall
TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UDS_InteractBrush_*_const_&>
          (TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_> *this,UDS_InteractBrush **param_1
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UDS_InteractBrush **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(UDS_InteractBrush **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<ADS_WorldDrawingBoard_*> @ 14b98de30

int __thiscall
TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<ADS_WorldDrawingBoard_*>
          (TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_> *this,
          ADS_WorldDrawingBoard **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(ADS_WorldDrawingBoard **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(ADS_WorldDrawingBoard **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// Find @ 14b9a9c10

int __thiscall
TArray<TSubclassOf<ADS_WorldDrawingBoard>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TSubclassOf<ADS_WorldDrawingBoard>,TSizedDefaultAllocator<32>_> *this,
          TSubclassOf<ADS_WorldDrawingBoard> *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  UClass *pUVar8;
  
  pFVar3 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  pFVar7 = pFVar3;
  do {
    if (pFVar7 == pFVar3 + (longlong)iVar1 * 8) {
      return -1;
    }
    pUVar8 = *(UClass **)pFVar7;
    if ((pUVar8 == (UClass *)0x0) ||
       (pUVar5 = Z_Construct_UClass_ADS_WorldDrawingBoard_NoRegister(), pUVar5 == (UClass *)0x0)) {
LAB_14b9a9c78:
      pUVar8 = (UClass *)0x0;
    }
    else {
      iVar2 = (int)pUVar5->_padding_;
      if (((int)pUVar8->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_14b9a9c78;
    }
    pUVar5 = (param_1->Class).field0_0x0.DebugPtr;
    if ((pUVar5 == (UClass *)0x0) ||
       (pUVar6 = Z_Construct_UClass_ADS_WorldDrawingBoard_NoRegister(), pUVar6 == (UClass *)0x0)) {
LAB_14b9a9cb5:
      pUVar5 = (UClass *)0x0;
    }
    else {
      iVar2 = (int)pUVar6->_padding_;
      if (((int)pUVar5->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_14b9a9cb5;
      pUVar5 = (param_1->Class).field0_0x0.DebugPtr;
    }
    if (pUVar8 == pUVar5) {
      return (int)((longlong)pFVar7 - (longlong)pFVar3 >> 3);
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// Remove @ 14b9c21c0

int __thiscall
TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_>::Remove
          (TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_> *this,
          ADS_WorldDrawingBoard **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(ADS_WorldDrawingBoard **)pFVar1 != *param_1;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(ADS_WorldDrawingBoard **)(pFVar1 + lVar6 * 8) != *param_1)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// Remove @ 14b9c2330

int __thiscall
TArray<ADS_WorldInteractVolume_*,TSizedDefaultAllocator<32>_>::Remove
          (TArray<ADS_WorldInteractVolume_*,TSizedDefaultAllocator<32>_> *this,
          ADS_WorldInteractVolume **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(ADS_WorldInteractVolume **)pFVar1 != *param_1;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(ADS_WorldInteractVolume **)(pFVar1 + lVar6 * 8) != *param_1)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// Remove @ 14b9c24a0

int __thiscall
TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_>::Remove
          (TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_> *this,UDS_InteractBrush **param_1
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(UDS_InteractBrush **)pFVar1 != *param_1;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(UDS_InteractBrush **)(pFVar1 + lVar6 * 8) != *param_1)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// Remove @ 14ba0ddb0

int __thiscall
TArray<__int64,TSizedDefaultAllocator<32>_>::Remove
          (TArray<__int64,TSizedDefaultAllocator<32>_> *this,long64 *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(longlong *)pFVar1 != *param_1;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(longlong *)(pFVar1 + lVar6 * 8) != *param_1)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// AddUniqueImpl<enum_EDS_StatusType_const_&> @ 14ba270f0

int __thiscall
TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>::AddUniqueImpl<enum_EDS_StatusType_const_&>
          (void *this,EDS_StatusType *param_1)

{
  EDS_StatusType *pEVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EDS_StatusType *pEVar5;
  
  pEVar1 = *(EDS_StatusType **)this;
  if (pEVar1 != pEVar1 + *(int *)((longlong)this + 8)) {
    pEVar5 = pEVar1;
    do {
      if (*pEVar5 == *param_1) {
        iVar4 = (int)((longlong)pEVar5 - (longlong)pEVar1 >> 2);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pEVar5 = pEVar5 + 1;
    } while (pEVar5 != pEVar1 + *(int *)((longlong)this + 8));
  }
  if (((pEVar1 <= param_1) && (param_1 < pEVar1 + *(int *)((longlong)this + 0xc))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = *(int *)((longlong)this + 8);
  if (iVar4 == *(int *)((longlong)this + 0xc)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,this,(int *)((longlong)this + 0xc));
    *(int *)((longlong)this + 8) = iVar4;
  }
  *(int *)((longlong)this + 8) = iVar4 + 1;
  *(EDS_StatusType *)(*(longlong *)this + (longlong)iVar4 * 4) = *param_1;
  return iVar4;
}

// AddUniqueImpl<enum_EDS_StatusType> @ 14ba271f0

int __thiscall
TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>::AddUniqueImpl<enum_EDS_StatusType>
          (void *this,EDS_StatusType *param_1)

{
  EDS_StatusType *pEVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EDS_StatusType *pEVar5;
  
  pEVar1 = *(EDS_StatusType **)this;
  if (pEVar1 != pEVar1 + *(int *)((longlong)this + 8)) {
    pEVar5 = pEVar1;
    do {
      if (*pEVar5 == *param_1) {
        iVar4 = (int)((longlong)pEVar5 - (longlong)pEVar1 >> 2);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pEVar5 = pEVar5 + 1;
    } while (pEVar5 != pEVar1 + *(int *)((longlong)this + 8));
  }
  if (((pEVar1 <= param_1) && (param_1 < pEVar1 + *(int *)((longlong)this + 0xc))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = *(int *)((longlong)this + 8);
  if (iVar4 == *(int *)((longlong)this + 0xc)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,this,(int *)((longlong)this + 0xc));
    *(int *)((longlong)this + 8) = iVar4;
  }
  *(int *)((longlong)this + 8) = iVar4 + 1;
  *(EDS_StatusType *)(*(longlong *)this + (longlong)iVar4 * 4) = *param_1;
  return iVar4;
}

// Remove @ 14ba65510

int __thiscall
TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::Remove
          (TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *this,FGameplayTag *param_1)

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  lVar6 = (longlong)iVar5;
  if (iVar5 == 0) {
    return 0;
  }
  pFVar2 = (FName *)(this->AllocatorInstance).Data;
  iVar10 = 0;
  bVar4 = *pFVar2 != param_1->TagName;
  lVar7 = 0;
  iVar8 = 0;
  do {
    lVar7 = lVar7 + 1;
    iVar9 = iVar8 + 1;
    if (lVar7 < lVar6) {
      do {
        if (bVar4 != (pFVar2[lVar7] != param_1->TagName)) break;
        iVar9 = iVar9 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar6);
    }
    if (bVar4 != false) {
      if (iVar10 != iVar8) {
        memmove(pFVar2 + iVar10,pFVar2 + iVar8,(longlong)(iVar9 - iVar8) << 3);
      }
      iVar10 = iVar10 + (iVar9 - iVar8);
    }
    bVar4 = (bool)(bVar4 ^ 1);
    iVar8 = iVar9;
    if (lVar6 <= lVar7) {
      this->ArrayNum = iVar10;
      return iVar5 - iVar10;
    }
  } while( true );
}

// Remove @ 14bb30810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
TArray<AActor_*,TSizedDefaultAllocator<32>_>::Remove
          (TArray<AActor_*,TSizedDefaultAllocator<32>_> *this,AActor **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(AActor **)pFVar1 != *param_1;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(AActor **)(pFVar1 + lVar6 * 8) != *param_1)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// RemoveAt @ 14bb30d40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FDS_HistoryData,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FDS_HistoryData,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FDS_HistoryData *this_00;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FDS_HistoryData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x288);
  FDS_HistoryData::~FDS_HistoryData(this_00);
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(this_00,this_00 + 1,(longlong)iVar4 * 0x288);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x288,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// Remove @ 14bb834d0

int __thiscall
TArray<TObjectPtr<UDS_MultipleWindowInfo>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TObjectPtr<UDS_MultipleWindowInfo>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UDS_MultipleWindowInfo> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(UDS_MultipleWindowInfo **)pFVar1 != (param_1->field0_0x0).DebugPtr;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(UDS_MultipleWindowInfo **)(pFVar1 + lVar6 * 8) !=
                     (param_1->field0_0x0).DebugPtr)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// RemoveAt @ 14bb83970

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FDS_UIMessageInfo *this_00;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FDS_UIMessageInfo *)((this->AllocatorInstance).Data + (longlong)param_1 * 0xd0);
  FDS_UIMessageInfo::~FDS_UIMessageInfo(this_00);
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(this_00,this_00 + 1,(longlong)iVar4 * 0xd0);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 14bb83a60

void __thiscall
TArray<FDS_TableDefineData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FDS_TableDefineData,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FDS_TableDefineData *_Dst;
  int iVar1;
  
  _Dst = (FDS_TableDefineData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<FDS_TableDefineData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// AddUniqueImpl<enum_EDS_StateTagType> @ 14bb9c1e0

int __thiscall
TArray<enum_EDS_StateTagType,TSizedDefaultAllocator<32>_>::AddUniqueImpl<enum_EDS_StateTagType>
          (void *this,EDS_StateTagType *param_1)

{
  EDS_StateTagType *pEVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EDS_StateTagType *pEVar5;
  
  pEVar1 = *(EDS_StateTagType **)this;
  if (pEVar1 != pEVar1 + *(int *)((longlong)this + 8)) {
    pEVar5 = pEVar1;
    do {
      if (*pEVar5 == *param_1) {
        iVar4 = (int)pEVar5 - (int)pEVar1;
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pEVar5 = pEVar5 + 1;
    } while (pEVar5 != pEVar1 + *(int *)((longlong)this + 8));
  }
  if (((pEVar1 <= param_1) && (param_1 < pEVar1 + *(int *)((longlong)this + 0xc))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = *(int *)((longlong)this + 8);
  if (iVar4 == *(int *)((longlong)this + 0xc)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,this,(int *)((longlong)this + 0xc));
    *(int *)((longlong)this + 8) = iVar4;
  }
  *(int *)((longlong)this + 8) = iVar4 + 1;
  *(EDS_StateTagType *)((longlong)iVar4 + *(longlong *)this) = *param_1;
  return iVar4;
}

// RemoveAtImpl @ 14bbd8d50

void __thiscall
TArray<FDS_ServerInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FDS_ServerInfo,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FDS_ServerInfo *_Dst;
  
  _Dst = (FDS_ServerInfo *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x68);
  DestructItems<FDS_ServerInfo,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x68);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// operator= @ 14bc2b730

TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->ArrayNum = param_1->ArrayNum;
    this->ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return this;
}

// CopyToEmpty<FDS_TextFormatArg,int> @ 14bc7a940

void __thiscall
TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_>::CopyToEmpty<FDS_TextFormatArg,int>
          (TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *this,FDS_TextFormatArg *param_1,
          int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// operator= @ 14bc84c30

TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *this,
          TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<TObjectPtr<UDS_UserObjectListItem>,TObjectPtr<UDS_UserObjectListItem>,int>
              ((this->AllocatorInstance).Data,(TObjectPtr<UDS_UserObjectListItem> *)pFVar2,iVar1);
  }
  return this;
}

// SetNumZeroed @ 14bcc7bc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,0,
           (longlong)(param_1 - iVar5) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x10,(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// Remove @ 14bd1a7d0

int __thiscall
TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  iVar6 = this->ArrayNum;
  iVar8 = 0;
  if (iVar6 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  bVar4 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals<UDS_M_ItemImplBase,bool>
                    ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)pFVar1,param_1);
  bVar4 = !bVar4;
  iVar7 = 0;
  do {
    iVar3 = iVar7;
    do {
      iVar3 = iVar3 + 1;
      if (iVar6 <= iVar3) break;
      bVar5 = TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals<UDS_M_ItemImplBase,bool>
                        ((TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *)
                         (pFVar1 + (longlong)iVar3 * 8),param_1);
    } while (bVar4 == !bVar5);
    if (bVar4 != false) {
      if (iVar8 != iVar7) {
        memmove(pFVar1 + (longlong)iVar8 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar3 - iVar7) << 3);
      }
      iVar8 = iVar8 + (iVar3 - iVar7);
    }
    bVar4 = (bool)(bVar4 ^ 1);
    iVar7 = iVar3;
    if (iVar6 <= iVar3) {
      this->ArrayNum = iVar8;
      return iVar6 - iVar8;
    }
  } while( true );
}

// Append<FDS_RewardData,TSizedDefaultAllocator<32>_> @ 14bd9d250

void __thiscall
TArray<FDS_RewardData,TSizedDefaultAllocator<32>_>::
Append<FDS_RewardData,TSizedDefaultAllocator<32>_>
          (TArray<FDS_RewardData,TSizedDefaultAllocator<32>_> *this,
          TArray<FDS_RewardData,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,(param_1->AllocatorInstance).Data
           ,(longlong)iVar1 << 4);
  }
  return;
}

// CopyToEmpty<enum_EDS_MoneyType,int> @ 14bd9d440

void __thiscall
TArray<enum_EDS_MoneyType,TSizedDefaultAllocator<32>_>::CopyToEmpty<enum_EDS_MoneyType,int>
          (void *this,EDS_MoneyType *param_1,int param_2,int param_3)

{
  *(int *)((longlong)this + 8) = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    *(undefined4 *)((longlong)this + 0xc) = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,param_2,param_3,this,param_2,(int *)((longlong)this + 0xc));
  if (param_2 != 0) {
    memcpy(*(void **)this,param_1,(longlong)param_2);
  }
  return;
}

// operator= @ 14be0f150

TArray<EDS_TicketType,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_EDS_TicketType,TSizedDefaultAllocator<32>_>::operator=
          (void *this,TArray<EDS_TicketType,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    *(int *)((longlong)this + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)this + 0xc) == 0)) {
      *(int *)((longlong)this + 0xc) = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,*(int *)((longlong)this + 0xc),this,iVar1,(int *)((longlong)this + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)this,_Src,(longlong)iVar1);
    }
  }
  return this;
}

// TArray<enum_EDS_CampMenu,TSizedDefaultAllocator<32>_> @ 14be72c80

TArray<EDS_CampMenu,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_EDS_CampMenu,TSizedDefaultAllocator<32>_>::
TArray<enum_EDS_CampMenu,TSizedDefaultAllocator<32>_>
          (void *this,initializer_list<EDS_CampMenu> *param_1)

{
  EDS_CampMenu *_Src;
  EDS_CampMenu *pEVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pEVar1 = param_1->_Last;
  *(undefined8 *)this = 0;
  iVar2 = (int)((longlong)pEVar1 - (longlong)_Src >> 2);
  *(int *)((longlong)this + 8) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,0,this,iVar2,(int *)((longlong)this + 0xc));
  memcpy(*(void **)this,_Src,(longlong)iVar2 << 2);
  return this;
}

// operator= @ 14bf3dde0

TArray<EDS_TotalMenuId,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_EDS_TotalMenuId,TSizedDefaultAllocator<32>_>::operator=
          (void *this,TArray<EDS_TotalMenuId,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    *(int *)((longlong)this + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)this + 0xc) == 0)) {
      *(int *)((longlong)this + 0xc) = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,*(int *)((longlong)this + 0xc),this,iVar1,(int *)((longlong)this + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)this,_Src,(longlong)iVar1 << 2);
    }
  }
  return this;
}

// CopyToEmpty<enum_EDS_AirWalkStep,int> @ 14bf8ff10

void __thiscall
TArray<enum_EDS_AirWalkStep,TSizedDefaultAllocator<32>_>::CopyToEmpty<enum_EDS_AirWalkStep,int>
          (void *this,EDS_AirWalkStep *param_1,int param_2,int param_3)

{
  *(int *)((longlong)this + 8) = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    *(undefined4 *)((longlong)this + 0xc) = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,param_2,param_3,this,param_2,(int *)((longlong)this + 0xc));
  if (param_2 != 0) {
    memcpy(*(void **)this,param_1,(longlong)param_2);
  }
  return;
}

// RemoveAt @ 14bfd52b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FName,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FName,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// Append<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> @ 14c05cac0

void __thiscall
TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>::
Append<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>
          (TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *this,
          TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memmove((this->AllocatorInstance).Data + (longlong)iVar4 * 8,(param_1->AllocatorInstance).Data,
            (longlong)iVar1 << 3);
    param_1->ArrayNum = 0;
  }
  return;
}

