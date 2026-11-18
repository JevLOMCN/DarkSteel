// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// FTree @ 1499c2fb0

FTree * __thiscall PCGDataTypeHierarchy::FTree::FTree(FTree *this)

{
  UScriptStruct *pUVar1;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res8 [4];
  
  FPCGDataTypeBaseId::FPCGDataTypeBaseId((FPCGDataTypeBaseId *)this,(UScriptStruct *)0x0);
  (this->Root).Parent = (FNode *)0x0;
  (this->Root).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Root).Children.ArrayNum = 0;
  (this->Root).Children.ArrayMax = 0;
  pUVar1 = FPCGDataTypeInfo::StaticStruct();
  FPCGDataTypeBaseId::FPCGDataTypeBaseId((FPCGDataTypeBaseId *)&local_res8[0].ObjectPtr,pUVar1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res8[0].DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0].DebugPtr);
  }
  (this->Root).BaseID.Struct.field0_0x0.DebugPtr = (UScriptStruct *)local_res8[0];
  return this;
}

// operator() @ 1499c8a90

ESearchCommand __thiscall
`PCGDataTypeHierarchy::FTree::RemoveEntry'::__l2::<lambda_1>::operator()
          (void *this,FNode *param_1,int param_2)

{
  TArray<PCGDataTypeHierarchy::FNode_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FNode *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ESearchCommand EVar7;
  int iVar8;
  FNode *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  int iVar12;
  TArray<PCGDataTypeHierarchy::FNode_*,TSizedDefaultAllocator<32>_> *pTVar13;
  int iVar14;
  undefined1 local_res8 [8];
  FNode *local_res10;
  
  if ((param_1->BaseID).Struct.field0_0x0.DebugPtr != (UScriptStruct *)**(longlong **)this) {
    return ExpandAndContinue;
  }
  pFVar10 = (param_1->Children).AllocatorInstance.Data;
  iVar2 = (param_1->Children).ArrayNum;
  pFVar4 = pFVar10 + (longlong)iVar2 * 8;
  local_res10 = param_1;
  while( true ) {
    if ((param_1->Children).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<PCGDataTypeHierarchy::FNode_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar4) break;
    lVar11 = *(longlong *)pFVar10;
    pFVar10 = pFVar10 + 8;
    *(FNode **)(lVar11 + 8) = local_res10->Parent;
  }
  pFVar3 = local_res10->Parent;
  pFVar4 = (pFVar3->Children).AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 < pFVar4 + (longlong)(pFVar3->Children).ArrayMax * 8)
      ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
    pcVar5 = (code *)swi(3);
    EVar7 = (*pcVar5)();
    return EVar7;
  }
  iVar2 = (pFVar3->Children).ArrayNum;
  if (iVar2 != 0) {
    iVar14 = 0;
    pFVar4 = (pFVar3->Children).AllocatorInstance.Data;
    bVar6 = *(FNode **)pFVar4 != local_res10;
    lVar11 = 0;
    pFVar9 = local_res10;
    iVar8 = 0;
    do {
      iVar12 = iVar8;
      do {
        lVar11 = lVar11 + 1;
        iVar12 = iVar12 + 1;
        if (iVar2 <= lVar11) break;
      } while (bVar6 == (*(FNode **)(pFVar4 + lVar11 * 8) != pFVar9));
      if (bVar6 != false) {
        if (iVar14 != iVar8) {
          memmove(pFVar4 + (longlong)iVar14 * 8,pFVar4 + (longlong)iVar8 * 8,
                  (longlong)(iVar12 - iVar8) << 3);
          pFVar9 = local_res10;
        }
        iVar14 = iVar14 + (iVar12 - iVar8);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar8 = iVar12;
    } while (lVar11 < iVar2);
    (pFVar3->Children).ArrayNum = iVar14;
  }
  pFVar9 = local_res10;
  pFVar3 = local_res10->Parent;
  pTVar1 = &local_res10->Children;
  pTVar13 = &pFVar3->Children;
  if ((pTVar13 == pTVar1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    EVar7 = (*pcVar5)();
    return EVar7;
  }
  iVar2 = (pFVar9->Children).ArrayNum;
  if (iVar2 != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar2,&pTVar13->AllocatorInstance,&(pFVar3->Children).ArrayNum,
                       &(pFVar3->Children).ArrayMax);
    memcpy((pTVar13->AllocatorInstance).Data + (longlong)iVar8 * 8,(pTVar1->AllocatorInstance).Data,
           (longlong)iVar2 << 3);
  }
  (local_res10->Children).ArrayNum = 0;
  if ((local_res10->Children).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(local_res10->Children).AllocatorInstance,0,&(local_res10->Children).ArrayMax)
    ;
  }
  pFVar3 = local_res10;
  if (local_res10 != (FNode *)0x0) {
    PCGDataTypeHierarchy::FNode::~FNode(local_res10);
    ::operator_delete(pFVar3,0x20);
  }
  return Stop;
}

// AddEntry @ 1499d32f0

void __thiscall PCGDataTypeHierarchy::FTree::AddEntry(FTree *this,FPCGDataTypeBaseId *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  UScriptStruct *pUVar2;
  FNode *pFVar3;
  UScriptStruct *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FNode *this_00;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FNode *local_res8;
  <lambda_1> local_28;
  
  local_res8 = &this->Root;
  this_00 = ::operator_new(0x20);
  if (this_00 == (FNode *)0x0) {
    this_00 = (FNode *)0x0;
  }
  else {
    (this_00->BaseID).Struct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    this_00->Parent = (FNode *)0x0;
    (this_00->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->Children).ArrayNum = 0;
    (this_00->Children).ArrayMax = 0;
    FPCGDataTypeBaseId::FPCGDataTypeBaseId(&this_00->BaseID,(UScriptStruct *)0x0);
    this_00->Parent = (FNode *)0x0;
    (this_00->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->Children).ArrayNum = 0;
    (this_00->Children).ArrayMax = 0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->Struct).field0_0x0.DebugPtr, pUVar2 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this_00->BaseID).Struct.field0_0x0 = (param_1->Struct).field0_0x0;
  pUVar2 = (param_1->Struct).field0_0x0.DebugPtr;
  local_28.Parent = &local_res8;
  local_28.EntryStruct = pUVar2;
  BreadthSearch<_PCGDataTypeHierarchy::FTree::AddEntry_::__l2::<lambda_1>_>(this,&local_28);
  uVar8 = 0;
  if (0 < (local_res8->Children).ArrayNum) {
    lVar10 = 0;
    do {
      pFVar3 = local_res8;
      uVar7 = 0;
      if ((int)uVar8 < (local_res8->Children).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
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
      pFVar3 = *(FNode **)((pFVar3->Children).AllocatorInstance.Data + lVar10);
      if (pUVar2 == (UScriptStruct *)0x0) {
LAB_1499d34d8:
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 8;
      }
      else {
        pUVar4 = (pFVar3->BaseID).Struct.field0_0x0.DebugPtr;
        iVar9 = (int)pUVar2->_padding_;
        if (((int)pUVar4->_padding_ < iVar9) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar9 * 8) !=
            &pUVar2->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_1499d34d8;
        PCGDataTypeHierarchy::FNode::AddChild(this_00,pFVar3);
        pFVar3 = local_res8;
        uVar7 = 0;
        if ((int)uVar8 < (local_res8->Children).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        _Dst = (pFVar3->Children).AllocatorInstance.Data + (longlong)(int)uVar8 * 8;
        iVar9 = ~uVar8 + (pFVar3->Children).ArrayNum;
        if (iVar9 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar9 << 3);
        }
        piVar1 = &(pFVar3->Children).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(pFVar3->Children).AllocatorInstance,(pFVar3->Children).ArrayNum,
                   &(pFVar3->Children).ArrayMax);
      }
    } while ((int)uVar8 < (local_res8->Children).ArrayNum);
  }
  PCGDataTypeHierarchy::FNode::AddChild(local_res8,this_00);
  return;
}

// QueryHierarchy @ 149a09350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
PCGDataTypeHierarchy::FTree::QueryHierarchy
          (FTree *this,FPCGDataTypeIdentifier *param_1,FPCGDataTypeIdentifier *param_2,
          FPCGDataTypeIdentifier *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  ForElementType<PCGDataTypeHierarchy::FNode_const_*> FVar6;
  ForElementType<PCGDataTypeHierarchy::FNode_const_*> FVar7;
  ForElementType<PCGDataTypeHierarchy::FNode_const_*> FVar8;
  FPCGDataTypeIdentifier *pFVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_208 [32];
  FNode **local_1e8;
  ForElementType<PCGDataTypeHierarchy::FNode_const_*> local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  FNode *local_1b8;
  FNode *local_1b0;
  FNode *local_1a8;
  FNode *local_1a0;
  <lambda_1> local_198;
  FPCGDataTypeIdentifier local_178;
  ForElementType<PCGDataTypeHierarchy::FNode_const_*> local_160;
  int local_d8;
  int local_d4;
  ForElementType<PCGDataTypeHierarchy::FNode_const_*> local_d0;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_208;
  bVar2 = FPCGDataTypeIdentifier::IsValid(param_1);
  if ((bVar2) && (bVar2 = FPCGDataTypeIdentifier::IsValid(param_2), bVar2)) {
    bVar2 = FPCGDataTypeIdentifier::IsSameType(param_1,param_2);
    if (bVar2) {
LAB_149a093d1:
      FPCGDataTypeIdentifier::operator=(param_3,param_1);
      return true;
    }
    iVar4 = (param_2->Ids).ArrayNum;
    if ((param_1->Ids).ArrayNum < 2) {
      if ((1 < iVar4) && (bVar2 = FPCGDataTypeIdentifier::SupportsType(param_2,param_1), bVar2)) {
        FPCGDataTypeIdentifier::operator=(param_3,param_2);
        return true;
      }
    }
    else if ((iVar4 < 2) && (bVar2 = FPCGDataTypeIdentifier::SupportsType(param_1,param_2), bVar2))
    goto LAB_149a093d1;
    local_198.FirstFound = &local_1a0;
    local_198.SecondFound = &local_1a8;
    local_1a0 = (FNode *)0x0;
    local_1a8 = (FNode *)0x0;
    local_198.TypeA = param_1;
    local_198.TypeB = param_2;
    BreadthSearch<_PCGDataTypeHierarchy::FTree::QueryHierarchy_::__l2::<lambda_1>_>(this,&local_198)
    ;
    if ((local_1a0 != (FNode *)0x0) && (local_1a8 != (FNode *)0x0)) {
      local_d0.SecondaryData = (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)0x0;
      local_48 = 0;
      local_44 = 0x10;
      local_1b8 = local_1a0;
      do {
        FVar8 = (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)&local_d0;
        if (local_d0.SecondaryData != (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)0x0) {
          FVar8 = local_d0.SecondaryData;
        }
        if ((ulonglong)FVar8 <= &local_1b8) {
          FVar8 = (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)&local_d0;
          if (local_d0.SecondaryData != (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)0x0) {
            FVar8 = local_d0.SecondaryData;
          }
          if (&local_1b8 < (FNode **)((longlong)FVar8 + (longlong)local_44 * 8)) {
            local_1d0 = (longlong)local_48;
            local_1c8 = 8;
            local_1e8 = &local_1b8;
            local_1e0 = (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)&local_d0;
            if (local_d0.SecondaryData != (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)0x0)
            {
              local_1e0 = local_d0.SecondaryData;
            }
            local_1d8 = (longlong)local_44;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
          }
        }
        iVar4 = local_48;
        if (local_48 == local_44) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGDataTypeHierarchy::FNode_const_*>_>
                            (0x808,&local_d0,&local_44);
        }
        local_48 = iVar4 + 1;
        FVar8 = (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)&local_d0;
        if (local_d0.SecondaryData != (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)0x0) {
          FVar8 = local_d0.SecondaryData;
        }
        *(FNode **)((longlong)FVar8 + (longlong)iVar4 * 8) = local_1b8;
        local_1b8 = local_1b8->Parent;
      } while (local_1b8 != (FNode *)0x0);
      local_160.SecondaryData = (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)0x0;
      local_d8 = 0;
      local_d4 = 0x10;
      local_1b8 = (FNode *)0x0;
      FVar8 = local_160.SecondaryData;
      lVar10 = local_1d8;
      for (local_1b0 = local_1a8; local_160.SecondaryData = FVar8, local_1b0 != (FNode *)0x0;
          local_1b0 = local_1b0->Parent) {
        FVar6 = (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)&local_160;
        if (FVar8 != (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)0x0) {
          FVar6 = FVar8;
        }
        if ((ulonglong)FVar6 <= &local_1b0) {
          local_1d8 = (longlong)local_d4;
          FVar6 = (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)&local_160;
          if (FVar8 != (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)0x0) {
            FVar6 = FVar8;
          }
          if (&local_1b0 < (FNode **)((longlong)FVar6 + local_1d8 * 8)) {
            local_1d0 = (longlong)local_d8;
            local_1c8 = 8;
            local_1e8 = &local_1b0;
            local_1e0 = (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)&local_160;
            if (FVar8 != (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)0x0) {
              local_1e0 = FVar8;
            }
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            lVar10 = local_1d8;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
          }
        }
        local_1d8 = lVar10;
        if (local_d8 == local_d4) {
          local_d8 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGDataTypeHierarchy::FNode_const_*>_>
                               (0x808,&local_160,&local_d4);
        }
        lVar10 = (longlong)local_d8;
        FVar8 = (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)&local_160;
        if (local_160.SecondaryData != (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)0x0) {
          FVar8 = local_160.SecondaryData;
        }
        local_d8 = local_d8 + 1;
        *(FNode **)((longlong)FVar8 + lVar10 * 8) = local_1b0;
        FVar8 = local_160.SecondaryData;
        lVar10 = local_1d8;
      }
      uVar12 = local_d8 - 1;
      uVar11 = local_48 - 1;
      local_1b0 = (FNode *)0x0;
      local_1d8 = lVar10;
      if (-1 < (int)uVar11) {
        lVar10 = (longlong)(int)uVar11 * 8;
        lVar13 = (longlong)(int)uVar12 * 8;
        do {
          if ((int)uVar12 < 0) break;
          uVar5 = 0;
          if ((int)uVar11 < local_48) {
            uVar5 = ~uVar11 >> 0x1f;
          }
          if (uVar5 == 0) {
            local_1e8 = (FNode **)(ulonglong)uVar11;
            local_1e0 = (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)(longlong)local_48;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            FVar8 = local_160.SecondaryData;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
          }
          FVar6 = (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)&local_d0;
          if (local_d0.SecondaryData != (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)0x0) {
            FVar6 = local_d0.SecondaryData;
          }
          uVar5 = 0;
          if ((int)uVar12 < local_d8) {
            uVar5 = ~uVar12 >> 0x1f;
          }
          if (uVar5 == 0) {
            local_1e8 = (FNode **)(longlong)(int)uVar12;
            local_1e0 = (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)(longlong)local_d8;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            FVar8 = local_160.SecondaryData;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
          }
          FVar7 = (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)&local_160;
          if (FVar8 != (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)0x0) {
            FVar7 = FVar8;
          }
          if (*(longlong *)(lVar10 + (longlong)FVar6) != *(longlong *)((longlong)FVar7 + lVar13))
          break;
          lVar10 = lVar10 + -8;
          uVar12 = uVar12 - 1;
          lVar13 = lVar13 + -8;
          uVar11 = uVar11 - 1;
        } while (-1 < (int)uVar11);
      }
      uVar11 = uVar11 + 1;
      uVar12 = 0;
      if ((int)uVar11 < local_48) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_1e8 = (FNode **)(longlong)(int)uVar11;
        local_1e0 = (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)(longlong)local_48;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      FVar8 = (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)&local_d0;
      if (local_d0.SecondaryData != (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)0x0) {
        FVar8 = local_d0.SecondaryData;
      }
      pFVar9 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
                         (&local_178,
                          *(FPCGDataTypeBaseId **)((longlong)FVar8 + (longlong)(int)uVar11 * 8));
      FPCGDataTypeIdentifier::operator=(param_3,pFVar9);
      if (local_178.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Ids.AllocatorInstance.Data);
      }
      bVar2 = FPCGDataTypeIdentifier::IsValid(param_3);
      if (local_160.SecondaryData != (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)0x0) {
        FMemory::Free((void *)local_160.SecondaryData);
      }
      if (local_d0.SecondaryData == (ForElementType<PCGDataTypeHierarchy::FNode_const_*>)0x0) {
        return bVar2;
      }
      FMemory::Free((void *)local_d0.SecondaryData);
      return bVar2;
    }
  }
  return false;
}

// RemoveEntry @ 149a0b410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall PCGDataTypeHierarchy::FTree::RemoveEntry(FTree *this,FPCGDataTypeBaseId *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  FNode *pFVar5;
  bool bVar6;
  int iVar7;
  ESearchCommand EVar8;
  int iVar9;
  ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_> FVar10;
  longlong lVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  FPCGDataTypeBaseId *pFStackX_10;
  undefined1 auStackY_4b8 [32];
  undefined1 auStack_478 [8];
  FTree *pFStack_470;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  int iStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  int iStack_448;
  undefined4 uStack_444;
  ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_> FStack_440;
  int iStack_38;
  int iStack_34;
  ulonglong uStack_30;
  
  uStack_30 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  uStack_468 = 0;
  FStack_440.SecondaryData = (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>)0x0;
  iStack_38 = 1;
  pFStackX_10 = param_1;
  pFStack_470 = this;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>_>
            (0x10,8,1,0,&FStack_440,1,&iStack_34);
  FVar10 = (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>)&FStack_440;
  if (FStack_440.SecondaryData != (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>)0x0) {
    FVar10 = FStack_440.SecondaryData;
  }
  *(FTree **)FVar10 = pFStack_470;
  *(ulonglong *)((longlong)FVar10 + 8) = CONCAT44(uStack_464,uStack_468);
  while (iStack_38 != 0) {
    if ((iStack_38 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar10 = (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>)&FStack_440;
    if (FStack_440.SecondaryData != (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>)0x0)
    {
      FVar10 = FStack_440.SecondaryData;
    }
    lVar11 = (longlong)(iStack_38 + -1) * 0x10;
    puVar12 = (undefined8 *)(lVar11 + (longlong)FVar10);
    uStack_460 = *(undefined4 *)puVar12;
    uStack_45c = *(undefined4 *)((longlong)puVar12 + 4);
    iStack_458 = *(int *)(puVar12 + 1);
    uStack_454 = *(undefined4 *)((longlong)puVar12 + 0xc);
    FVar10 = (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>)&FStack_440;
    if (FStack_440.SecondaryData != (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>)0x0)
    {
      FVar10 = FStack_440.SecondaryData;
    }
    puVar12 = (undefined8 *)(lVar11 + (longlong)FVar10);
    iVar7 = (iStack_38 - (iStack_38 + -1)) + -1;
    uStack_450 = uStack_460;
    uStack_44c = uStack_45c;
    iStack_448 = iStack_458;
    uStack_444 = uStack_454;
    if (iVar7 != 0) {
      memmove(puVar12,puVar12 + 2,(longlong)iVar7 << 4);
    }
    iVar7 = iStack_458;
    pFVar5 = (FNode *)CONCAT44(uStack_45c,uStack_460);
    iStack_38 = iStack_38 + -1;
    EVar8 = `PCGDataTypeHierarchy::FTree::RemoveEntry'::__l2::<lambda_1>::operator()
                      (&pFStackX_10,pFVar5,iStack_458);
    if (EVar8 == Stop) break;
    if (EVar8 == ExpandAndContinue) {
      pFVar13 = (pFVar5->Children).AllocatorInstance.Data;
      iVar2 = (pFVar5->Children).ArrayNum;
      pFVar1 = pFVar13 + (longlong)iVar2 * 8;
      while( true ) {
        if ((pFVar5->Children).ArrayNum != iVar2) {
          auStack_478[0] = 0;
          `TCheckedPointerIterator<PCGDataTypeHierarchy::FNode_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(auStack_478);
        }
        if (pFVar13 == pFVar1) break;
        uVar3 = *(undefined8 *)pFVar13;
        iVar9 = iStack_38;
        if (iStack_38 == iStack_34) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>_>
                            (0x810,&FStack_440,&iStack_34);
        }
        iStack_38 = iVar9 + 1;
        FVar10 = (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>)&FStack_440;
        if (FStack_440.SecondaryData !=
            (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>)0x0) {
          FVar10 = FStack_440.SecondaryData;
        }
        pFVar13 = pFVar13 + 8;
        *(undefined8 *)((longlong)FVar10 + (longlong)iVar9 * 0x10) = uVar3;
        *(int *)((uchar *)((longlong)FVar10 + 8) + (longlong)iVar9 * 0x10) = iVar7 + 1;
      }
    }
  }
  if (FStack_440.SecondaryData != (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>)0x0) {
    FMemory::Free((void *)FStack_440.SecondaryData);
  }
  return;
}

