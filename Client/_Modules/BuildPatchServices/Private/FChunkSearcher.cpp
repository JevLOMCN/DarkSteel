// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 7

// FChunkSearcher<FBuildPatchAppManifest> @ 143200060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FChunkSearcher * __thiscall
BuildPatchServices::FChunkSearcher::FChunkSearcher<FBuildPatchAppManifest>
          (FChunkSearcher *this,FBuildPatchAppManifest *param_1)

{
  TDoubleLinkedListNode *pTVar1;
  int iVar2;
  FChunkSearcher *pFVar3;
  code *pcVar4;
  FFileManifest *pFVar5;
  void *this_00;
  undefined ***pppuVar6;
  FString *pFVar7;
  FString *pFVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  FString *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  FChunkSearcher *local_88;
  code *local_78;
  undefined **local_68;
  undefined8 *local_60;
  FChunkSearcher *local_58;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  (this->FileLinkedList)._padding_ =
       (longlong)&___7__TDoubleLinkedList_UFFileNode_FChunkSearcher_BuildPatchServices____6B_;
  local_68 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0VFBuildPatchAppManifest___FChunkSearcher_BuildPatchServices__QEAA_AEBVFBuildPatchAppManifest___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_60 = &local_90;
  (this->FileLinkedList).HeadNode = (TDoubleLinkedListNode *)0x0;
  (this->FileLinkedList).TailNode = (TDoubleLinkedListNode *)0x0;
  (this->FileLinkedList).ListSize = 0;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`BuildPatchServices::FChunkSearcher::FChunkSearcher<FBuildPatchAppManifest>'::__l2::<lambda_1>,void,BuildPatchServices::FFileManifest_const_&>
             ::Call;
  local_90 = 0;
  local_50 = (undefined ***)0x0;
  local_a0 = (FString *)0x0;
  local_98 = 0;
  local_88 = this;
  local_58 = this;
  (**(code **)(param_1->_padding_ + 0x1c8))(param_1,&local_a0);
  iVar2 = (int)local_98;
  pFVar8 = local_a0 + (int)local_98;
  pFVar7 = local_a0;
  while( true ) {
    if ((int)local_98 != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_a8);
    }
    if (pFVar7 == pFVar8) break;
    pFVar5 = (FFileManifest *)(**(code **)(param_1->_padding_ + 0x1f8))(param_1,pFVar7);
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar4 = local_78;
    pppuVar6 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar6 = local_50;
    }
    this_00 = (void *)(*(code *)(*pppuVar6)[1])();
    if (pcVar4 == UE::Core::Private::Function::
                  TFunctionRefCaller<`BuildPatchServices::FChunkSearcher::FChunkSearcher<FBuildPatchAppManifest>'::__l2::<lambda_1>,void,BuildPatchServices::FFileManifest_const_&>
                  ::Call) {
      `BuildPatchServices::FChunkSearcher::FChunkSearcher<FBuildPatchAppManifest>'::__l2::<lambda_1>
      ::operator()(this_00,pFVar5);
      pFVar7 = pFVar7 + 1;
    }
    else {
      (*pcVar4)();
      pFVar7 = pFVar7 + 1;
    }
  }
  DestructItems<FString,int>(local_a0,(int)local_98);
  pFVar3 = local_88;
  if (local_a0 != (FString *)0x0) {
    FMemory::Free(local_a0);
  }
  if (local_78 != (code *)0x0) {
    pppuVar6 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar6 = local_50;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  pTVar1 = (pFVar3->FileLinkedList).HeadNode;
  pFVar3->CurrFile = pTVar1;
  pFVar3->CurrChunk = (pTVar1->Value).ChunkParts.HeadNode;
  return pFVar3;
}

// FindFirst<TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>,TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>::TDoubleLinkedListNode> @ 1432190e0

TDoubleLinkedListNode * __thiscall
BuildPatchServices::FChunkSearcher::
FindFirst<TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>,TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>::TDoubleLinkedListNode>
          (FChunkSearcher *this,
          TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode> *param_1,
          TDoubleLinkedListNode *param_2,FBlockRange *param_3)

{
  ulong64 uVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  TDoubleLinkedListNode *pTVar5;
  
  if ((param_3->Size == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                         ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TDoubleLinkedListNode *)(*pcVar3)();
    return pTVar5;
  }
  uVar1 = param_3->Size;
  uVar2 = param_3->First;
  if (((param_2->Value).BuildRange.Size == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                         ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TDoubleLinkedListNode *)(*pcVar3)();
    return pTVar5;
  }
  if ((uVar1 - 1) + uVar2 < (param_2->Value).BuildRange.First) {
    do {
      if ((((param_2->Value).BuildRange.Size != 0) && (param_3->Size != 0)) &&
         ((param_2->Value).BuildRange.First <= (param_3->Size - 1) + param_3->First)) {
        uVar1 = (param_2->Value).BuildRange.First;
        uVar2 = (param_2->Value).BuildRange.Size;
        if ((param_3->Size == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Size > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                               ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar5 = (TDoubleLinkedListNode *)(*pcVar3)();
          return pTVar5;
        }
        if (param_3->First <= (uVar1 - 1) + uVar2) goto LAB_143219250;
      }
      param_2 = param_2->PrevNode;
    } while (param_2 != (TDoubleLinkedListNode *)0x0);
  }
  else {
    do {
      if ((((param_2->Value).BuildRange.Size != 0) && (param_3->Size != 0)) &&
         ((param_2->Value).BuildRange.First <= (param_3->Size - 1) + param_3->First)) {
        uVar1 = (param_2->Value).BuildRange.First;
        uVar2 = (param_2->Value).BuildRange.Size;
        if ((param_3->Size == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Size > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                               ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar5 = (TDoubleLinkedListNode *)(*pcVar3)();
          return pTVar5;
        }
        if (param_3->First <= (uVar1 - 1) + uVar2) goto LAB_143219250;
      }
      param_2 = param_2->NextNode;
    } while (param_2 != (TDoubleLinkedListNode *)0x0);
  }
  goto LAB_1432191cc;
LAB_143219250:
  do {
    bVar4 = true;
    if ((param_2->Value).BuildRange.Size == 0) {
LAB_1432192b0:
      if (!bVar4) {
        do {
          if ((((param_2->Value).BuildRange.Size != 0) && (param_3->Size != 0)) &&
             ((param_2->Value).BuildRange.First <= (param_3->First - 1) + param_3->Size)) {
            uVar1 = (param_2->Value).BuildRange.First;
            uVar2 = (param_2->Value).BuildRange.Size;
            if ((param_3->Size == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Size > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                   ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar4))
            {
              pcVar3 = (code *)swi(3);
              pTVar5 = (TDoubleLinkedListNode *)(*pcVar3)();
              return pTVar5;
            }
            if (param_3->First <= (uVar1 - 1) + uVar2) {
              return param_2;
            }
          }
          param_2 = param_2->NextNode;
          if (param_2 == (TDoubleLinkedListNode *)0x0) {
            return (TDoubleLinkedListNode *)0x0;
          }
        } while( true );
      }
    }
    else {
      if ((param_3->Size == 0) ||
         ((param_3->First - 1) + param_3->Size < (param_2->Value).BuildRange.First)) {
LAB_1432192ab:
        bVar4 = (param_2->Value).BuildRange.Size == 0;
        goto LAB_1432192b0;
      }
      uVar1 = (param_2->Value).BuildRange.First;
      uVar2 = (param_2->Value).BuildRange.Size;
      if ((param_3->Size == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Size > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                             ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TDoubleLinkedListNode *)(*pcVar3)();
        return pTVar5;
      }
      if ((uVar1 - 1) + uVar2 < param_3->First) goto LAB_1432192ab;
    }
    param_2 = param_2->PrevNode;
  } while (param_2 != (TDoubleLinkedListNode *)0x0);
LAB_1432191cc:
  return param_1->HeadNode;
}

// FindFirst<TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>,TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>::TDoubleLinkedListNode> @ 143219340

TDoubleLinkedListNode * __thiscall
BuildPatchServices::FChunkSearcher::
FindFirst<TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>,TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>::TDoubleLinkedListNode>
          (FChunkSearcher *this,
          TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode> *param_1,
          TDoubleLinkedListNode *param_2,FBlockRange *param_3)

{
  ulong64 uVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  TDoubleLinkedListNode *pTVar5;
  ulong64 *puVar6;
  
  if ((param_3->Size == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                         ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TDoubleLinkedListNode *)(*pcVar3)();
    return pTVar5;
  }
  puVar6 = &param_3->Size;
  uVar1 = param_3->First;
  uVar2 = param_3->Size;
  if (((param_2->Value).BuildRange.Size == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                         ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TDoubleLinkedListNode *)(*pcVar3)();
    return pTVar5;
  }
  if (param_2 != (TDoubleLinkedListNode *)0x0) {
    if ((uVar1 - 1) + uVar2 < (param_2->Value).BuildRange.First) {
      do {
        if ((((param_2->Value).BuildRange.Size != 0) && (*puVar6 != 0)) &&
           ((param_2->Value).BuildRange.First <= (param_3->First - 1) + *puVar6)) {
          uVar1 = (param_2->Value).BuildRange.First;
          uVar2 = (param_2->Value).BuildRange.Size;
          if ((*puVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Size > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                 ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar5 = (TDoubleLinkedListNode *)(*pcVar3)();
            return pTVar5;
          }
          if (param_3->First <= (uVar1 - 1) + uVar2) goto joined_r0x0001432194d1;
        }
        param_2 = param_2->PrevNode;
      } while (param_2 != (TDoubleLinkedListNode *)0x0);
    }
    else {
      do {
        if ((((param_2->Value).BuildRange.Size != 0) && (*puVar6 != 0)) &&
           ((param_2->Value).BuildRange.First <= (param_3->First - 1) + *puVar6)) {
          uVar1 = (param_2->Value).BuildRange.First;
          uVar2 = (param_2->Value).BuildRange.Size;
          if ((*puVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Size > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                 ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar5 = (TDoubleLinkedListNode *)(*pcVar3)();
            return pTVar5;
          }
          if (param_3->First <= (uVar1 - 1) + uVar2) goto joined_r0x0001432194d1;
        }
        param_2 = param_2->NextNode;
      } while (param_2 != (TDoubleLinkedListNode *)0x0);
    }
  }
LAB_143219448:
  return param_1->HeadNode;
joined_r0x0001432194d1:
  if (param_2 == (TDoubleLinkedListNode *)0x0) goto LAB_143219448;
  bVar4 = true;
  if ((param_2->Value).BuildRange.Size == 0) {
LAB_143219539:
    if (!bVar4) {
      do {
        if ((((param_2->Value).BuildRange.Size != 0) && (param_3->Size != 0)) &&
           ((param_2->Value).BuildRange.First <= (param_3->First - 1) + param_3->Size)) {
          uVar1 = (param_2->Value).BuildRange.First;
          uVar2 = (param_2->Value).BuildRange.Size;
          if ((param_3->Size == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Size > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                 ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar5 = (TDoubleLinkedListNode *)(*pcVar3)();
            return pTVar5;
          }
          if (param_3->First <= (uVar1 - 1) + uVar2) {
            return param_2;
          }
        }
        param_2 = param_2->NextNode;
        if (param_2 == (TDoubleLinkedListNode *)0x0) {
          return (TDoubleLinkedListNode *)0x0;
        }
      } while( true );
    }
  }
  else {
    if ((param_3->Size == 0) ||
       ((param_3->First - 1) + param_3->Size < (param_2->Value).BuildRange.First)) {
LAB_143219534:
      bVar4 = (param_2->Value).BuildRange.Size == 0;
      goto LAB_143219539;
    }
    uVar1 = (param_2->Value).BuildRange.First;
    uVar2 = (param_2->Value).BuildRange.Size;
    if ((param_3->Size == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Size > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                           ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TDoubleLinkedListNode *)(*pcVar3)();
      return pTVar5;
    }
    if ((uVar1 - 1) + uVar2 < param_3->First) goto LAB_143219534;
  }
  param_2 = param_2->PrevNode;
  goto joined_r0x0001432194d1;
}

// operator() @ 14322bd20

void __thiscall
`BuildPatchServices::FChunkSearcher::FChunkSearcher<BuildPatchServices::FFileManifestList>'::__l2::
<lambda_1>::operator()(void *this,FFileManifest *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  undefined8 *puVar15;
  ulonglong *puVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res8 [8];
  ulonglong local_res10;
  undefined **local_60;
  ulonglong *local_58;
  ulonglong *local_50;
  undefined4 local_48;
  
  uVar3 = **(ulonglong **)this;
  uVar4 = param_1->FileSize;
  if (((uVar4 != 0) && ((uVar4 - 1) + uVar3 < uVar3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                          ,0x2f,L"Byte range has uint64 overflow."), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_58 = (ulonglong *)0x0;
  local_60 = &___7__TDoubleLinkedList_UFChunkNode_FChunkSearcher_BuildPatchServices____6B_;
  local_50 = (ulonglong *)0x0;
  local_48 = 0;
  iVar2 = (param_1->ChunkParts).ArrayNum;
  pFVar17 = (param_1->ChunkParts).AllocatorInstance.Data;
  pFVar1 = pFVar17 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((param_1->ChunkParts).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar17 == pFVar1) break;
    uVar5 = **(ulonglong **)this;
    uVar13 = (ulonglong)*(uint *)(pFVar17 + 0x14);
    if (((uVar13 != 0) && ((uVar13 - 1) + uVar5 < uVar5)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                            ,0x2f,L"Byte range has uint64 overflow."), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar10 = *(ulonglong *)pFVar17;
    uVar11 = *(ulonglong *)(pFVar17 + 8);
    local_res10 = *(ulonglong *)(pFVar17 + 0x10);
    puVar14 = ::operator_new(0x38);
    if (puVar14 != (ulonglong *)0x0) {
      *puVar14 = uVar5;
      puVar14[1] = uVar13;
      puVar14[2] = uVar10;
      puVar14[3] = uVar11;
      puVar14[4] = local_res10;
      puVar14[5] = 0;
      puVar14[6] = 0;
      puVar16 = puVar14;
      if (local_50 != (ulonglong *)0x0) {
        local_50[5] = (ulonglong)puVar14;
        puVar14[6] = (ulonglong)local_50;
        puVar16 = local_58;
      }
      local_58 = puVar16;
      local_50 = puVar14;
      (*(code *)local_60[1])(&local_60);
    }
    **(longlong **)this = **(longlong **)this + (ulonglong)*(uint *)(pFVar17 + 0x14);
    pFVar17 = pFVar17 + 0x18;
  }
  plVar6 = *(longlong **)((longlong)this + 8);
  puVar15 = ::operator_new(0x48);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = param_1;
    puVar15[1] = uVar3;
    puVar15[2] = uVar4;
    puVar15[3] = &___7__TDoubleLinkedList_UFChunkNode_FChunkSearcher_BuildPatchServices____6B_;
    puVar15[4] = 0;
    puVar15[5] = 0;
    *(undefined4 *)(puVar15 + 6) = 0;
    for (puVar14 = local_58; puVar14 != (ulonglong *)0x0; puVar14 = (ulonglong *)puVar14[5]) {
      puVar16 = ::operator_new(0x38);
      if (puVar16 != (ulonglong *)0x0) {
        uVar3 = puVar14[1];
        *puVar16 = *puVar14;
        puVar16[1] = uVar3;
        uVar8 = *(undefined4 *)((longlong)puVar14 + 0x14);
        uVar3 = puVar14[3];
        uVar9 = *(undefined4 *)((longlong)puVar14 + 0x1c);
        *(int *)(puVar16 + 2) = (int)puVar14[2];
        *(undefined4 *)((longlong)puVar16 + 0x14) = uVar8;
        *(int *)(puVar16 + 3) = (int)uVar3;
        *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar9;
        puVar16[4] = puVar14[4];
        puVar16[5] = 0;
        puVar16[6] = 0;
        if (puVar15[5] == 0) {
          puVar15[4] = puVar16;
        }
        else {
          *(ulonglong **)(puVar15[5] + 0x28) = puVar16;
          puVar16[6] = puVar15[5];
        }
        puVar15[5] = puVar16;
        if (*(code **)(puVar15[3] + 8) ==
            TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>::SetListSize) {
          *(int *)(puVar15 + 6) = *(int *)(puVar15 + 6) + 1;
        }
        else {
          (**(code **)(puVar15[3] + 8))(puVar15 + 3);
        }
      }
    }
    puVar15[7] = 0;
    puVar15[8] = 0;
    if (plVar6[2] == 0) {
      plVar6[1] = (longlong)puVar15;
    }
    else {
      *(undefined8 **)(plVar6[2] + 0x38) = puVar15;
      puVar15[8] = plVar6[2];
    }
    plVar6[2] = (longlong)puVar15;
    (**(code **)(*plVar6 + 8))(plVar6,(int)plVar6[3] + 1);
  }
  local_60 = &___7__TDoubleLinkedList_UFChunkNode_FChunkSearcher_BuildPatchServices____6B_;
  while (local_58 != (ulonglong *)0x0) {
    puVar14 = (ulonglong *)local_58[5];
    ::operator_delete(local_58,0x38);
    local_58 = puVar14;
  }
  local_50 = (ulonglong *)0x0;
  local_58 = (ulonglong *)0x0;
  if ((code *)local_60[1] !=
      TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>::SetListSize) {
    (*(code *)local_60[1])(&local_60,0);
  }
  return;
}

// operator() @ 14322c010

void __thiscall
`BuildPatchServices::FChunkSearcher::FChunkSearcher<FBuildPatchAppManifest>'::__l2::<lambda_1>::
operator()(void *this,FFileManifest *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  undefined8 *puVar15;
  ulonglong *puVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res8 [8];
  ulonglong local_res10;
  undefined **local_60;
  ulonglong *local_58;
  ulonglong *local_50;
  undefined4 local_48;
  
  uVar3 = **(ulonglong **)this;
  uVar4 = param_1->FileSize;
  if (((uVar4 != 0) && ((uVar4 - 1) + uVar3 < uVar3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                          ,0x2f,L"Byte range has uint64 overflow."), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_58 = (ulonglong *)0x0;
  local_60 = &___7__TDoubleLinkedList_UFChunkNode_FChunkSearcher_BuildPatchServices____6B_;
  local_50 = (ulonglong *)0x0;
  local_48 = 0;
  iVar2 = (param_1->ChunkParts).ArrayNum;
  pFVar17 = (param_1->ChunkParts).AllocatorInstance.Data;
  pFVar1 = pFVar17 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((param_1->ChunkParts).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar17 == pFVar1) break;
    uVar5 = **(ulonglong **)this;
    uVar13 = (ulonglong)*(uint *)(pFVar17 + 0x14);
    if (((uVar13 != 0) && ((uVar13 - 1) + uVar5 < uVar5)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                            ,0x2f,L"Byte range has uint64 overflow."), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar10 = *(ulonglong *)pFVar17;
    uVar11 = *(ulonglong *)(pFVar17 + 8);
    local_res10 = *(ulonglong *)(pFVar17 + 0x10);
    puVar14 = ::operator_new(0x38);
    if (puVar14 != (ulonglong *)0x0) {
      *puVar14 = uVar5;
      puVar14[1] = uVar13;
      puVar14[2] = uVar10;
      puVar14[3] = uVar11;
      puVar14[4] = local_res10;
      puVar14[5] = 0;
      puVar14[6] = 0;
      puVar16 = puVar14;
      if (local_50 != (ulonglong *)0x0) {
        local_50[5] = (ulonglong)puVar14;
        puVar14[6] = (ulonglong)local_50;
        puVar16 = local_58;
      }
      local_58 = puVar16;
      local_50 = puVar14;
      (*(code *)local_60[1])(&local_60);
    }
    **(longlong **)this = **(longlong **)this + (ulonglong)*(uint *)(pFVar17 + 0x14);
    pFVar17 = pFVar17 + 0x18;
  }
  plVar6 = *(longlong **)((longlong)this + 8);
  puVar15 = ::operator_new(0x48);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = param_1;
    puVar15[1] = uVar3;
    puVar15[2] = uVar4;
    puVar15[3] = &___7__TDoubleLinkedList_UFChunkNode_FChunkSearcher_BuildPatchServices____6B_;
    puVar15[4] = 0;
    puVar15[5] = 0;
    *(undefined4 *)(puVar15 + 6) = 0;
    for (puVar14 = local_58; puVar14 != (ulonglong *)0x0; puVar14 = (ulonglong *)puVar14[5]) {
      puVar16 = ::operator_new(0x38);
      if (puVar16 != (ulonglong *)0x0) {
        uVar3 = puVar14[1];
        *puVar16 = *puVar14;
        puVar16[1] = uVar3;
        uVar8 = *(undefined4 *)((longlong)puVar14 + 0x14);
        uVar3 = puVar14[3];
        uVar9 = *(undefined4 *)((longlong)puVar14 + 0x1c);
        *(int *)(puVar16 + 2) = (int)puVar14[2];
        *(undefined4 *)((longlong)puVar16 + 0x14) = uVar8;
        *(int *)(puVar16 + 3) = (int)uVar3;
        *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar9;
        puVar16[4] = puVar14[4];
        puVar16[5] = 0;
        puVar16[6] = 0;
        if (puVar15[5] == 0) {
          puVar15[4] = puVar16;
        }
        else {
          *(ulonglong **)(puVar15[5] + 0x28) = puVar16;
          puVar16[6] = puVar15[5];
        }
        puVar15[5] = puVar16;
        if (*(code **)(puVar15[3] + 8) ==
            TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>::SetListSize) {
          *(int *)(puVar15 + 6) = *(int *)(puVar15 + 6) + 1;
        }
        else {
          (**(code **)(puVar15[3] + 8))(puVar15 + 3);
        }
      }
    }
    puVar15[7] = 0;
    puVar15[8] = 0;
    if (plVar6[2] == 0) {
      plVar6[1] = (longlong)puVar15;
    }
    else {
      *(undefined8 **)(plVar6[2] + 0x38) = puVar15;
      puVar15[8] = plVar6[2];
    }
    plVar6[2] = (longlong)puVar15;
    (**(code **)(*plVar6 + 8))(plVar6,(int)plVar6[3] + 1);
  }
  local_60 = &___7__TDoubleLinkedList_UFChunkNode_FChunkSearcher_BuildPatchServices____6B_;
  while (local_58 != (ulonglong *)0x0) {
    puVar14 = (ulonglong *)local_58[5];
    ::operator_delete(local_58,0x38);
    local_58 = puVar14;
  }
  local_50 = (ulonglong *)0x0;
  local_58 = (ulonglong *)0x0;
  if ((code *)local_60[1] !=
      TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>::SetListSize) {
    (*(code *)local_60[1])(&local_60,0);
  }
  return;
}

// BuildNewFileManifestList @ 143241e00

FFileManifestList * __thiscall
BuildPatchServices::FChunkSearcher::BuildNewFileManifestList
          (FChunkSearcher *this,FFileManifestList *__return_storage_ptr__)

{
  int *piVar1;
  TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  FChunkPart *pFVar4;
  uint uVar5;
  TDoubleLinkedListNode *pTVar6;
  FFileManifest *pFVar7;
  TDoubleLinkedListNode *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  FFileManifestList *pFVar15;
  FFileManifest *pFVar16;
  
  piVar1 = &(__return_storage_ptr__->FileList).ArrayMax;
  (__return_storage_ptr__->FileList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FileList).ArrayNum = 0;
  *piVar1 = 0;
  uVar5 = (this->FileLinkedList).ListSize;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if (0 < (int)uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,uVar5,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  }
  pTVar6 = (this->FileLinkedList).HeadNode;
  while( true ) {
    if (pTVar6 == (TDoubleLinkedListNode *)0x0) {
      return __return_storage_ptr__;
    }
    pFVar16 = (pTVar6->Value).Manifest;
    pFVar7 = (FFileManifest *)(__return_storage_ptr__->FileList).AllocatorInstance.Data;
    if (((pFVar7 <= pFVar16) && (pFVar16 < pFVar7 + *piVar1)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) break;
    iVar14 = (__return_storage_ptr__->FileList).ArrayNum;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x860,(ForAnyElementType *)__return_storage_ptr__,piVar1);
    }
    (__return_storage_ptr__->FileList).ArrayNum = iVar14 + 1;
    pFVar16 = FFileManifest::FFileManifest
                        ((FFileManifest *)
                         ((__return_storage_ptr__->FileList).AllocatorInstance.Data +
                         (longlong)iVar14 * 0x60),pFVar16);
    pTVar2 = &pFVar16->ChunkParts;
    uVar5 = (pTVar6->Value).ChunkParts.ListSize;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    piVar3 = &(pFVar16->ChunkParts).ArrayMax;
    (pFVar16->ChunkParts).ArrayNum = 0;
    if (*piVar3 != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,uVar5,&pTVar2->AllocatorInstance,0,piVar3);
    }
    for (pTVar8 = (pTVar6->Value).ChunkParts.HeadNode; pTVar8 != (TDoubleLinkedListNode *)0x0;
        pTVar8 = pTVar8->NextNode) {
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      pFVar4 = &(pTVar8->Value).ChunkPart;
      if (((pFVar9 <= pFVar4) && (pFVar4 < pFVar9 + (longlong)*piVar3 * 0x18)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar11 = (code *)swi(3);
        pFVar15 = (FFileManifestList *)(*pcVar11)();
        return pFVar15;
      }
      iVar14 = (pFVar16->ChunkParts).ArrayNum;
      if (iVar14 == *piVar3) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,&pTVar2->AllocatorInstance,piVar3);
      }
      (pFVar16->ChunkParts).ArrayNum = iVar14 + 1;
      uVar12 = *(undefined8 *)&(pTVar8->Value).ChunkPart.Guid.C;
      pFVar10 = (pTVar2->AllocatorInstance).Data;
      pFVar9 = pFVar10 + (longlong)iVar14 * 0x18;
      *(undefined8 *)pFVar9 = *(undefined8 *)&pFVar4->Guid;
      *(undefined8 *)(pFVar9 + 8) = uVar12;
      *(undefined8 *)(pFVar10 + (longlong)iVar14 * 0x18 + 0x10) =
           *(undefined8 *)&(pTVar8->Value).ChunkPart.Offset;
    }
    pTVar6 = pTVar6->NextNode;
  }
  pcVar11 = (code *)swi(3);
  pFVar15 = (FFileManifestList *)(*pcVar11)();
  return pFVar15;
}

// ForEachOverlap @ 143252c60

void __thiscall
BuildPatchServices::FChunkSearcher::ForEachOverlap
          (FChunkSearcher *this,FBlockStructure *param_1,
          TFunction<void___cdecl(BuildPatchServices::FBlockRange_const_&,TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>::TDoubleLinkedListNode_*,TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>::TDoubleLinkedListNode_*)>
          *param_2)

{
  FBlockEntry *pFVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  TDoubleLinkedListNode *pTVar6;
  code *pcVar7;
  bool bVar8;
  TDoubleLinkedListNode *pTVar9;
  TDoubleLinkedListNode *pTVar10;
  undefined8 uVar11;
  longlong *plVar12;
  TDoubleLinkedListNode *pTVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  TDoubleLinkedListNode *local_res20;
  TDoubleLinkedListNode *local_68;
  FBlockRange local_60;
  FBlockRange local_50;
  
  pFVar1 = param_1->Head;
  do {
    if (pFVar1 == (FBlockEntry *)0x0) {
      return;
    }
    uVar2 = pFVar1->Size;
    uVar3 = pFVar1->Offset;
    local_60.First = uVar3;
    local_60.Size = uVar2;
    if (uVar2 != 0) {
      if ((uVar2 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Size > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                             ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (((uVar3 - 1) + uVar2 < uVar3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                             ,0x2f,L"Byte range has uint64 overflow."), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pTVar13 = this->CurrFile;
    if ((pTVar13 == (TDoubleLinkedListNode *)0x0) ||
       (this->CurrChunk == (TDoubleLinkedListNode *)0x0)) {
      pTVar13 = (this->FileLinkedList).HeadNode;
      this->CurrFile = pTVar13;
      this->CurrChunk = (pTVar13->Value).ChunkParts.HeadNode;
    }
    pTVar9 = FindFirst<TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>,TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>::TDoubleLinkedListNode>
                       (this,&this->FileLinkedList,pTVar13,&local_60);
    pTVar13 = this->CurrFile;
    if (this->CurrFile != pTVar9) {
      this->CurrFile = pTVar9;
      this->CurrChunk = (pTVar9->Value).ChunkParts.HeadNode;
      pTVar13 = pTVar9;
    }
    if ((((pTVar13->Value).BuildRange.Size == 0) || (uVar2 == 0)) ||
       ((uVar3 - 1) + uVar2 < (pTVar13->Value).BuildRange.First)) {
LAB_143252dc4:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrFile->GetValue().BuildRange.Overlaps(BlockRange)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ChunkSearch.h"
                         ,0x9d,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      uVar4 = (pTVar13->Value).BuildRange.First;
      uVar5 = (pTVar13->Value).BuildRange.Size;
      if ((uVar2 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Size > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                             ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((uVar4 - 1) + uVar5 < uVar3) goto LAB_143252dc4;
    }
    pTVar10 = FindFirst<TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>,TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>::TDoubleLinkedListNode>
                        (this,&(this->CurrFile->Value).ChunkParts,this->CurrChunk,&local_60);
    this->CurrChunk = pTVar10;
    if ((((pTVar10->Value).BuildRange.Size == 0) || (uVar2 == 0)) ||
       ((uVar3 - 1) + uVar2 < (pTVar10->Value).BuildRange.First)) {
LAB_143252e68:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrChunk->GetValue().BuildRange.Overlaps(BlockRange)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ChunkSearch.h"
                         ,0xa1,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      uVar4 = (pTVar10->Value).BuildRange.First;
      uVar5 = (pTVar10->Value).BuildRange.Size;
      if ((uVar2 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Size > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                             ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((uVar4 - 1) + uVar5 < uVar3) goto LAB_143252e68;
    }
    pTVar13 = this->CurrFile;
    if (pTVar13 != (TDoubleLinkedListNode *)0x0) {
      while ((((this->CurrChunk != (TDoubleLinkedListNode *)0x0 &&
               ((pTVar13->Value).BuildRange.Size != 0)) && (uVar2 != 0)) &&
             ((pTVar13->Value).BuildRange.First <= (uVar3 - 1) + uVar2))) {
        uVar4 = (pTVar13->Value).BuildRange.Size;
        uVar5 = (pTVar13->Value).BuildRange.First;
        if ((uVar2 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Size > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                               ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((((uVar4 - 1) + uVar5 < uVar3) ||
            (pTVar10 = this->CurrChunk, (pTVar10->Value).BuildRange.Size == 0)) ||
           ((uVar2 == 0 || ((uVar3 - 1) + uVar2 < (pTVar10->Value).BuildRange.First)))) break;
        uVar4 = (pTVar10->Value).BuildRange.First;
        uVar5 = (pTVar10->Value).BuildRange.Size;
        if ((uVar2 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Size > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                               ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((uVar4 - 1) + uVar5 < uVar3) break;
        pTVar10 = this->CurrChunk;
        pTVar6 = pTVar10->NextNode;
        if ((((pTVar10->Value).BuildRange.Size == 0) || (uVar2 == 0)) ||
           ((uVar3 - 1) + uVar2 < (pTVar10->Value).BuildRange.First)) {
LAB_143252fea:
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RangeA.Overlaps(RangeB)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                             ,0x3b,L"Invalid args, ranges must overlap.");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          uVar4 = (pTVar10->Value).BuildRange.Size;
          uVar5 = (pTVar10->Value).BuildRange.First;
          if ((uVar2 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Size > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                 ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((uVar4 - 1) + uVar5 < uVar3) goto LAB_143252fea;
        }
        if ((uVar2 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Size > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                               ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (((pTVar10->Value).BuildRange.Size == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Size > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                               ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar14 = (pTVar10->Value).BuildRange.Size + (pTVar10->Value).BuildRange.First;
        lVar16 = uVar2 + uVar3;
        if (lVar14 - 1U < (uVar2 + uVar3) - 1) {
          lVar16 = lVar14;
        }
        if ((uVar2 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Size > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                               ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (((pTVar10->Value).BuildRange.Size == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Size > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                               ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar15 = uVar3;
        if (uVar3 < (pTVar10->Value).BuildRange.First) {
          uVar15 = (pTVar10->Value).BuildRange.First;
        }
        FBlockRange::FromFirstAndLast(&local_50,uVar15,lVar16 - 1);
        local_res20 = this->CurrChunk;
        local_68 = this->CurrFile;
        UE::Core::Private::Function::CheckCallable(*(void **)param_2);
        pcVar7 = *(code **)param_2;
        plVar12 = *(longlong **)&param_2->field_0x28;
        if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
          plVar12 = (longlong *)&param_2->field_0x10;
        }
        uVar11 = (**(code **)(*plVar12 + 8))();
        (*pcVar7)(uVar11,&local_50,&local_68,&local_res20);
        this->CurrChunk = pTVar6;
        if (pTVar6 == (TDoubleLinkedListNode *)0x0) {
          pTVar10 = (TDoubleLinkedListNode *)0x0;
          do {
            if (this->CurrFile == (TDoubleLinkedListNode *)0x0) break;
            pTVar13 = this->CurrFile->NextNode;
            this->CurrFile = pTVar13;
            if (pTVar13 != (TDoubleLinkedListNode *)0x0) {
              pTVar10 = (pTVar13->Value).ChunkParts.HeadNode;
              this->CurrChunk = pTVar10;
            }
          } while (pTVar10 == (TDoubleLinkedListNode *)0x0);
        }
        pTVar13 = this->CurrFile;
        if (pTVar13 == (TDoubleLinkedListNode *)0x0) break;
      }
    }
    pFVar1 = pFVar1->Next;
  } while( true );
}

