// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 12

// Push @ 142107ca0

void __thiscall FPropertyVisitorPath::Push(FPropertyVisitorPath *this,FPropertyVisitorInfo *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FPropertyVisitorInfo *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  UStruct *pUVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  
  pFVar3 = (FPropertyVisitorInfo *)(this->Path).AllocatorInstance.Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->Path).ArrayMax)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar9 = (this->Path).ArrayNum;
  piVar1 = &(this->Path).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)this,piVar1);
  }
  (this->Path).ArrayNum = iVar9 + 1;
  pUVar7 = param_1->ParentStructType;
  pFVar4 = (this->Path).AllocatorInstance.Data;
  pFVar2 = pFVar4 + (longlong)iVar9 * 0x18;
  *(FProperty **)pFVar2 = param_1->Property;
  *(UStruct **)(pFVar2 + 8) = pUVar7;
  *(undefined8 *)(pFVar4 + (longlong)iVar9 * 0x18 + 0x10) = *(undefined8 *)&param_1->Index;
  if (*(void **)&this->OnPushFunc != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->OnPushFunc);
    plVar5 = *(longlong **)&(this->OnPushFunc).field_0x28;
    pcVar6 = *(code **)&this->OnPushFunc;
    plVar11 = (longlong *)&(this->OnPushFunc).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar11 = plVar5;
    }
    uVar10 = (**(code **)(*plVar11 + 8))();
    (*pcVar6)(uVar10,param_1);
  }
  return;
}

// Top @ 142152e10

FPropertyVisitorInfo * __thiscall FPropertyVisitorPath::Top(FPropertyVisitorPath *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPropertyVisitorInfo *pFVar5;
  uint uVar6;
  
  iVar1 = (this->Path).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPropertyVisitorInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FPropertyVisitorInfo *)
         ((this->Path).AllocatorInstance.Data + (longlong)((this->Path).ArrayNum + -1) * 0x18);
}

// Top @ 142152e90

FPropertyVisitorInfo * __thiscall FPropertyVisitorPath::Top(FPropertyVisitorPath *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPropertyVisitorInfo *pFVar5;
  uint uVar6;
  
  iVar1 = (this->Path).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPropertyVisitorInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FPropertyVisitorInfo *)
         ((this->Path).AllocatorInstance.Data + (longlong)((this->Path).ArrayNum + -1) * 0x18);
}

// FPropertyVisitorPath @ 1421b2080

FPropertyVisitorPath * __thiscall
FPropertyVisitorPath::FPropertyVisitorPath
          (FPropertyVisitorPath *this,FArchiveSerializedPropertyChain *param_1)

{
  ForElementType<FProperty_*> FVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FPropertyVisitorPath *pFVar8;
  undefined8 uVar9;
  ForElementType<FProperty_*> FVar10;
  longlong *plVar11;
  int iVar12;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  
  (this->Path).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Path).ArrayNum = 0;
  (this->Path).ArrayMax = 0;
  *(undefined8 *)&this->OnPushFunc = 0;
  *(undefined8 *)&(this->OnPushFunc).field_0x28 = 0;
  *(undefined8 *)&this->OnPopFunc = 0;
  *(undefined8 *)&(this->OnPopFunc).field_0x28 = 0;
  for (iVar12 = 0; (-1 < iVar12 && (iVar12 < (param_1->SerializedPropertyChain).ArrayNum));
      iVar12 = iVar12 + 1) {
    if (iVar12 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FPropertyVisitorPath *)(*pcVar5)();
        return pFVar8;
      }
    }
    FVar1 = (param_1->SerializedPropertyChain).AllocatorInstance.SecondaryData;
    pFVar2 = (this->Path).AllocatorInstance.Data;
    uStack_30 = 0;
    FVar10 = (ForElementType<FProperty_*>)param_1;
    if (FVar1 != (ForElementType<FProperty_*>)0x0) {
      FVar10 = FVar1;
    }
    local_28 = 0xffffffff;
    uStack_24 = 0;
    local_38 = *(undefined8 *)((longlong)FVar10 + (longlong)iVar12 * 8);
    if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this->Path).ArrayMax * 0x18)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FPropertyVisitorPath *)(*pcVar5)();
        return pFVar8;
      }
    }
    iVar7 = (this->Path).ArrayNum;
    if (iVar7 == (this->Path).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)this,&(this->Path).ArrayMax);
    }
    (this->Path).ArrayNum = iVar7 + 1;
    pFVar3 = (this->Path).AllocatorInstance.Data;
    pFVar2 = pFVar3 + (longlong)iVar7 * 0x18;
    *(undefined8 *)pFVar2 = local_38;
    *(undefined8 *)(pFVar2 + 8) = uStack_30;
    *(ulonglong *)(pFVar3 + (longlong)iVar7 * 0x18 + 0x10) =
         CONCAT26(uStack_22,CONCAT24(uStack_24,local_28));
    if (*(void **)&this->OnPushFunc != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->OnPushFunc);
      plVar4 = *(longlong **)&(this->OnPushFunc).field_0x28;
      pcVar5 = *(code **)&this->OnPushFunc;
      plVar11 = (longlong *)&(this->OnPushFunc).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar11 = plVar4;
      }
      uVar9 = (**(code **)(*plVar11 + 8))();
      (*pcVar5)(uVar9,&local_38);
    }
  }
  return this;
}

// FPropertyVisitorPath @ 1421b2250

FPropertyVisitorPath * __thiscall
FPropertyVisitorPath::FPropertyVisitorPath
          (FPropertyVisitorPath *this,FPropertyChangedEvent *param_1,FEditPropertyChain *param_2)

{
  uint uVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TDoubleLinkedListNode *pTVar9;
  FPropertyVisitorPath *pFVar10;
  int *piVar11;
  undefined8 uVar12;
  longlong *plVar13;
  FProperty **ppFVar14;
  code *pcVar15;
  FString local_88;
  FProperty *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined2 uStack_64;
  undefined2 uStack_62;
  FProperty *local_60;
  undefined8 uStack_58;
  int local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  FProperty *local_48;
  undefined8 uStack_40;
  int local_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  
  (this->Path).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Path).ArrayNum = 0;
  (this->Path).ArrayMax = 0;
  *(undefined8 *)&this->OnPushFunc = 0;
  *(undefined8 *)&(this->OnPushFunc).field_0x28 = 0;
  *(undefined8 *)&this->OnPopFunc = 0;
  *(undefined8 *)&(this->OnPopFunc).field_0x28 = 0;
  pTVar9 = FEditPropertyChain::GetActiveMemberNode(param_2);
  if (pTVar9 == (TDoubleLinkedListNode *)0x0) {
    pTVar9 = (TDoubleLinkedListNode *)param_2->_padding_;
  }
  else {
    pTVar9 = FEditPropertyChain::GetActiveMemberNode(param_2);
  }
  do {
    if (pTVar9 == (TDoubleLinkedListNode *)0x0) {
      return this;
    }
    pFVar2 = pTVar9->Value;
    bVar6 = IsThisNotNull(pFVar2,"FField::GetName");
    if (bVar6) {
      ::FName::ToString((FName *)&pFVar2->_padding_,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    uVar1 = param_1->ObjectIteratorIndex;
    iVar8 = -1;
    if ((-1 < (int)uVar1) && ((int)uVar1 < (param_1->ArrayIndicesPerObject).ArrayNum)) {
      uVar7 = 0;
      if ((int)uVar1 < (param_1->ArrayIndicesPerObject).ArrayNum) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar15 = (code *)swi(3);
        pFVar10 = (FPropertyVisitorPath *)(*pcVar15)();
        return pFVar10;
      }
      piVar11 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                ::Find((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                        *)((param_1->ArrayIndicesPerObject).DataPtr + (int)uVar1),&local_88);
      if (piVar11 != (int *)0x0) {
        iVar8 = *piVar11;
      }
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    pFVar3 = (this->Path).AllocatorInstance.Data;
    if (iVar8 == -1) {
      uStack_70 = 0;
      uStack_64 = 0;
      local_78 = pFVar2;
      local_68 = iVar8;
      if (((pFVar3 <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < pFVar3 + (longlong)(this->Path).ArrayMax * 0x18))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar15 = (code *)swi(3);
        pFVar10 = (FPropertyVisitorPath *)(*pcVar15)();
        return pFVar10;
      }
      iVar8 = (this->Path).ArrayNum;
      if (iVar8 == (this->Path).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)this,&(this->Path).ArrayMax);
      }
      (this->Path).ArrayNum = iVar8 + 1;
      pFVar4 = (this->Path).AllocatorInstance.Data;
      pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
      *(FProperty **)pFVar3 = local_78;
      *(undefined8 *)(pFVar3 + 8) = uStack_70;
      *(ulonglong *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) =
           CONCAT26(uStack_62,CONCAT24(uStack_64,local_68));
      if (*(void **)&this->OnPushFunc != (void *)0x0) {
        UE::Core::Private::Function::CheckCallable(*(void **)&this->OnPushFunc);
        plVar5 = *(longlong **)&(this->OnPushFunc).field_0x28;
        pcVar15 = *(code **)&this->OnPushFunc;
        plVar13 = (longlong *)&(this->OnPushFunc).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar13 = plVar5;
        }
        uVar12 = (**(code **)(*plVar13 + 8))();
        ppFVar14 = &local_78;
        goto LAB_1421b2655;
      }
    }
    else if (pFVar2->ArrayDim < 2) {
      uStack_40 = 0;
      uStack_34 = 2;
      local_48 = pFVar2;
      local_38 = iVar8;
      if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)(this->Path).ArrayMax * 0x18))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar15 = (code *)swi(3);
        pFVar10 = (FPropertyVisitorPath *)(*pcVar15)();
        return pFVar10;
      }
      iVar8 = (this->Path).ArrayNum;
      if (iVar8 == (this->Path).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)this,&(this->Path).ArrayMax);
      }
      (this->Path).ArrayNum = iVar8 + 1;
      pFVar4 = (this->Path).AllocatorInstance.Data;
      pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
      *(FProperty **)pFVar3 = local_48;
      *(undefined8 *)(pFVar3 + 8) = uStack_40;
      *(ulonglong *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) =
           CONCAT26(uStack_32,CONCAT24(uStack_34,local_38));
      if (*(void **)&this->OnPushFunc != (void *)0x0) {
        UE::Core::Private::Function::CheckCallable(*(void **)&this->OnPushFunc);
        plVar5 = *(longlong **)&(this->OnPushFunc).field_0x28;
        pcVar15 = *(code **)&this->OnPushFunc;
        plVar13 = (longlong *)&(this->OnPushFunc).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar13 = plVar5;
        }
        uVar12 = (**(code **)(*plVar13 + 8))();
        ppFVar14 = &local_48;
        goto LAB_1421b2655;
      }
    }
    else {
      uStack_58 = 0;
      uStack_4c = 1;
      local_60 = pFVar2;
      local_50 = iVar8;
      if (((pFVar3 <= (FScriptContainerElement *)&local_60) &&
          ((FScriptContainerElement *)&local_60 < pFVar3 + (longlong)(this->Path).ArrayMax * 0x18))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar15 = (code *)swi(3);
        pFVar10 = (FPropertyVisitorPath *)(*pcVar15)();
        return pFVar10;
      }
      iVar8 = (this->Path).ArrayNum;
      if (iVar8 == (this->Path).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)this,&(this->Path).ArrayMax);
      }
      (this->Path).ArrayNum = iVar8 + 1;
      pFVar4 = (this->Path).AllocatorInstance.Data;
      pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
      *(FProperty **)pFVar3 = local_60;
      *(undefined8 *)(pFVar3 + 8) = uStack_58;
      *(ulonglong *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) =
           CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
      if (*(void **)&this->OnPushFunc != (void *)0x0) {
        UE::Core::Private::Function::CheckCallable(*(void **)&this->OnPushFunc);
        plVar5 = *(longlong **)&(this->OnPushFunc).field_0x28;
        pcVar15 = *(code **)&this->OnPushFunc;
        plVar13 = (longlong *)&(this->OnPushFunc).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar13 = plVar5;
        }
        uVar12 = (**(code **)(*plVar13 + 8))();
        ppFVar14 = &local_60;
LAB_1421b2655:
        (*pcVar15)(uVar12,ppFVar14);
      }
    }
    pTVar9 = pTVar9->NextNode;
  } while( true );
}

// AppendString @ 1421bd400

void __thiscall
FPropertyVisitorPath::AppendString
          (FPropertyVisitorPath *this,TStringBuilderBase<wchar_t> *param_1,wchar_t *param_2)

{
  int iVar1;
  FPropertyVisitorInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<FPropertyVisitorInfo_const_,int> local_18;
  
  pFVar2 = (FPropertyVisitorInfo *)(this->Path).AllocatorInstance.Data;
  iVar1 = (this->Path).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pFVar2;
  PropertyVisitorHelpers::PathAppendString(&local_18,param_1,param_2);
  return;
}

// Contained @ 1421c2d70

bool __thiscall
FPropertyVisitorPath::Contained
          (FPropertyVisitorPath *this,FPropertyVisitorPath *param_1,bool *param_2)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  
  uVar1 = (param_1->Path).ArrayNum;
  pFVar3 = (param_1->Path).AllocatorInstance.Data;
  if (((int)uVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pFVar4 = (this->Path).AllocatorInstance.Data;
  uVar2 = (this->Path).ArrayNum;
  if (((int)uVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar9 = 0;
  if (0 < (int)uVar2) {
    pFVar10 = pFVar3 + 0x14;
    lVar11 = (longlong)pFVar4 - (longlong)pFVar3;
    do {
      if ((int)uVar1 <= (int)uVar9) break;
      uVar8 = 0;
      if ((int)uVar9 < (int)uVar2) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (((int)uVar9 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (*(longlong *)(pFVar10 + lVar11 + -0x14) != *(longlong *)(pFVar10 + -0x14)) break;
      if (pFVar10[lVar11] == *pFVar10) {
        bVar6 = *(int *)(pFVar10 + lVar11 + -4) == *(int *)(pFVar10 + -4);
      }
      else {
        bVar6 = pFVar10[lVar11] == (FScriptContainerElement)0x0;
      }
      if (!bVar6) break;
      uVar9 = uVar9 + 1;
      pFVar10 = pFVar10 + 0x18;
    } while ((int)uVar9 < (int)uVar2);
  }
  if (param_2 != (bool *)0x0) {
    *param_2 = uVar9 == uVar1;
  }
  return uVar9 == uVar2;
}

// GetPropertyDataPtr @ 1421d0460

void * __thiscall
FPropertyVisitorPath::GetPropertyDataPtr(FPropertyVisitorPath *this,UObject *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  longlong lVar9;
  
  if ((param_1 == (UObject *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyVisitor.cpp"
                         ,0x5c,L"Expecting an valid object"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar4)();
    return pvVar7;
  }
  if ((this->Path).ArrayNum < 1) {
    return (void *)0x0;
  }
  pvVar7 = (void *)(**(code **)(**(longlong **)&param_1->field_0x10 + 0x348))
                             (*(longlong **)&param_1->field_0x10,param_1,
                              (this->Path).AllocatorInstance.Data);
  uVar8 = 1;
  if (pvVar7 != (void *)0x0) {
    lVar9 = 0;
    do {
      iVar1 = (this->Path).ArrayNum;
      if (iVar1 <= (int)uVar8) {
        return pvVar7;
      }
      uVar6 = 0;
      if ((int)(uVar8 - 1) < iVar1) {
        uVar6 = -uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pvVar7 = (void *)(*pcVar4)();
        return pvVar7;
      }
      pFVar2 = (this->Path).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar8 < (this->Path).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pvVar7 = (void *)(*pcVar4)();
        return pvVar7;
      }
      plVar3 = *(longlong **)(pFVar2 + lVar9);
      pvVar7 = (void *)(**(code **)(*plVar3 + 0xa0))
                                 (plVar3,pvVar7,
                                  (this->Path).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x18)
      ;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x18;
    } while (pvVar7 != (void *)0x0);
  }
  return (void *)0x0;
}

// InvalidIterator @ 1421d3340

TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
* __cdecl FPropertyVisitorPath::InvalidIterator
                    (TIndexedContainerIterator<TArray<FPropertyVisitorInfo,TSizedDefaultAllocator<32>_>_const_,FPropertyVisitorInfo_const_,int>
                     *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FPropertyVisitorPath::InvalidIterator'::__l2::
             _dynamic_atexit_destructor_for__EmptyPath__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->Index = 0;
  __return_storage_ptr__->Container = &EmptyPath.Path;
  return __return_storage_ptr__;
}

// ToSerializedPropertyChain @ 1421e95e0

FArchiveSerializedPropertyChain * __thiscall
FPropertyVisitorPath::ToSerializedPropertyChain
          (FPropertyVisitorPath *this,FArchiveSerializedPropertyChain *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FProperty_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FArchiveSerializedPropertyChain *pFVar6;
  ForElementType<FProperty_*> FVar7;
  uint uVar8;
  FScriptContainerElement *pFVar10;
  longlong local_18 [2];
  uint uVar9;
  
  iVar5 = (this->Path).ArrayNum;
  pFVar10 = (this->Path).AllocatorInstance.Data;
  if ((iVar5 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FArchiveSerializedPropertyChain *)(*pcVar3)();
    return pFVar6;
  }
  (__return_storage_ptr__->SerializedPropertyChain).AllocatorInstance.SecondaryData =
       (ForElementType<FProperty_*>)0x0;
  pFVar1 = pFVar10 + (longlong)iVar5 * 0x18;
  (__return_storage_ptr__->SerializedPropertyChain).ArrayNum = 0;
  *(undefined8 *)&(__return_storage_ptr__->SerializedPropertyChain).ArrayMax = 8;
  while( true ) {
    if (pFVar10 == pFVar1) {
      return __return_storage_ptr__;
    }
    local_18[0] = *(longlong *)pFVar10;
    if ((local_18[0] == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ArchiveSerializedPropertyChain.h"
                           ,0x1c,L""), bVar4)) break;
    FVar2 = (__return_storage_ptr__->SerializedPropertyChain).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<FProperty_*>)__return_storage_ptr__;
    if (FVar2 != (ForElementType<FProperty_*>)0x0) {
      FVar7 = FVar2;
    }
    if ((ulonglong)FVar7 <= local_18) {
      FVar7 = (ForElementType<FProperty_*>)__return_storage_ptr__;
      if (FVar2 != (ForElementType<FProperty_*>)0x0) {
        FVar7 = FVar2;
      }
      if ((local_18 <
           (longlong *)
           ((longlong)FVar7 +
           (longlong)(__return_storage_ptr__->SerializedPropertyChain).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FArchiveSerializedPropertyChain *)(*pcVar3)();
        return pFVar6;
      }
    }
    iVar5 = (__return_storage_ptr__->SerializedPropertyChain).ArrayNum;
    if (iVar5 == (__return_storage_ptr__->SerializedPropertyChain).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_*>_>
                        (0x808,(ForElementType<FProperty_*> *)__return_storage_ptr__,
                         &(__return_storage_ptr__->SerializedPropertyChain).ArrayMax);
    }
    (__return_storage_ptr__->SerializedPropertyChain).ArrayNum = iVar5 + 1;
    FVar2 = (__return_storage_ptr__->SerializedPropertyChain).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<FProperty_*>)__return_storage_ptr__;
    if (FVar2 != (ForElementType<FProperty_*>)0x0) {
      FVar7 = FVar2;
    }
    *(longlong *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_18[0];
    uVar9 = __return_storage_ptr__->SerializedPropertyChainUpdateCount;
    do {
      uVar8 = uVar9 + 1;
      uVar9 = 0;
    } while (uVar8 == 0);
    pFVar10 = pFVar10 + 0x18;
    __return_storage_ptr__->SerializedPropertyChainUpdateCount = uVar8;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FArchiveSerializedPropertyChain *)(*pcVar3)();
  return pFVar6;
}

// ToString @ 1421e9870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FPropertyVisitorPath::ToString
          (FPropertyVisitorPath *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  undefined1 auStack_898 [32];
  FPropertyVisitorInfo *local_878;
  int iStack_870;
  undefined4 uStack_86c;
  TArrayView<FPropertyVisitorInfo_const_,int> local_868;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_898;
  local_878 = (FPropertyVisitorInfo *)(this->Path).AllocatorInstance.Data;
  iVar1 = (this->Path).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_858.Base = local_838;
  local_868._12_4_ = uStack_86c;
  local_868.ArrayNum = iVar1;
  local_858.CurPos = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.End = local_22;
  local_868.DataPtr = local_878;
  iStack_870 = iVar1;
  PropertyVisitorHelpers::PathAppendString(&local_868,&local_858,param_1);
  if (local_858.End < local_858.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,1);
  }
  *local_858.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_858.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return __return_storage_ptr__;
}

// ToString @ 1421e9990

void __thiscall
FPropertyVisitorPath::ToString
          (FPropertyVisitorPath *this,TStringBuilderBase<wchar_t> *param_1,wchar_t *param_2)

{
  int iVar1;
  FPropertyVisitorInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<FPropertyVisitorInfo_const_,int> local_18;
  
  pFVar2 = (FPropertyVisitorInfo *)(this->Path).AllocatorInstance.Data;
  iVar1 = (this->Path).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  param_1->CurPos = param_1->Base;
  local_18.DataPtr = pFVar2;
  PropertyVisitorHelpers::PathAppendString(&local_18,param_1,param_2);
  return;
}

