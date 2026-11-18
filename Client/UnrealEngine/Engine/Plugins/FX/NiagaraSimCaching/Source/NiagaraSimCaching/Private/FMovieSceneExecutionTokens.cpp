// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraSimCaching
// Functions: 3

// Add<FNiagaraCacheExecutionToken> @ 14ea214b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneExecutionTokens::Add<FNiagaraCacheExecutionToken>
          (FMovieSceneExecutionTokens *this,FNiagaraCacheExecutionToken *param_1)

{
  int *piVar1;
  FEntry *pFVar2;
  code *pcVar3;
  TRangeBound<FFrameNumber> TVar4;
  bool bVar5;
  int iVar6;
  TInlineValue<IMovieSceneExecutionToken,64,8> *pTVar7;
  FEntry *pFVar8;
  undefined8 *******pppppppuVar9;
  TInlineValue<IMovieSceneExecutionToken,64,8> *pTVar10;
  undefined1 auStackY_1a8 [32];
  TInlineValue<IMovieSceneExecutionToken,64,8> *local_158 [8];
  byte local_118;
  undefined1 local_110 [168];
  undefined8 ******local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((((this->Scope).Key.SequenceID.Value == 0xffffffff) ||
      ((this->Scope).Key.TrackIdentifier.Value == 0xffffffff)) ||
     ((this->Operand).SequenceID.Value == 0xffffffff)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Scope.Key.IsValid() && Operand.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneExecutionTokens.h"
                       ,0x35,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_118 = local_118 & 0xfc;
  local_158[0] = FMemory::Malloc(0xb0,8);
  pTVar10 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_158;
  if ((local_118 & 2) == 0) {
    pTVar10 = local_158[0];
  }
  pTVar10[2].Data.Pad[0x10] = '\0';
  local_118 = local_118 | 1;
  *(undefined ***)(pTVar10->Data).Pad = &___7FNiagaraCacheExecutionToken__6B_;
  bVar5 = (param_1->CacheSection).bIsSet;
  pTVar10[2].Data.Pad[0x10] = bVar5;
  if (bVar5 != false) {
    TVar4 = (param_1->CacheSection).TypedValue.SectionRange.Value.UpperBound;
    *(TRangeBound<FFrameNumber> *)((pTVar10->Data).Pad + 8) =
         (param_1->CacheSection).TypedValue.SectionRange.Value.LowerBound;
    *(TRangeBound<FFrameNumber> *)((pTVar10->Data).Pad + 0x10) = TVar4;
    FMovieSceneNiagaraCacheParams::FMovieSceneNiagaraCacheParams
              ((FMovieSceneNiagaraCacheParams *)((pTVar10->Data).Pad + 0x18),
               &(param_1->CacheSection).TypedValue.Params);
  }
  pTVar10[2].Data.Pad[0x18] = param_1->ReplayMode;
  if ((local_118 & 1) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar10 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_158;
  if ((local_118 & 2) == 0) {
    pTVar10 = local_158[0];
  }
  if ((local_118 & 1) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_158;
  if ((local_118 & 2) == 0) {
    pTVar7 = local_158[0];
  }
  if (pTVar10 != pTVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = FEntry::FEntry((FEntry *)local_110,&this->Operand,&this->Scope,&this->Context,
                          (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_158);
  pFVar2 = (FEntry *)(this->OrderedTokens).AllocatorInstance.Data;
  if ((pFVar2 <= pFVar8) && (pFVar8 < pFVar2 + (this->OrderedTokens).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->OrderedTokens).ArrayNum;
  piVar1 = &(this->OrderedTokens).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8f0,(ForAnyElementType *)this,piVar1);
  }
  (this->OrderedTokens).ArrayNum = iVar6 + 1;
  FEntry::FEntry((FEntry *)((this->OrderedTokens).AllocatorInstance.Data + (longlong)iVar6 * 0xf0),
                 pFVar8);
  if ((local_28 & 1) != 0) {
    pppppppuVar9 = local_68;
    if ((local_28 & 2) == 0) {
      pppppppuVar9 = (undefined8 *******)local_68[0];
    }
    local_28 = local_28 & 0xfe;
    (*(code *)**pppppppuVar9)(pppppppuVar9,0);
    if ((local_28 & 2) == 0) {
      FMemory::Free(local_68[0]);
    }
  }
  FMovieSceneWarpCounter::~FMovieSceneWarpCounter((FMovieSceneWarpCounter *)(local_110 + 0x70));
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_110._96_8_,local_110._104_4_);
  if ((FMovieSceneNestedSequenceTransform *)local_110._96_8_ !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free((void *)local_110._96_8_);
  }
  if ((local_118 & 1) != 0) {
    pTVar10 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_158;
    if ((local_118 & 2) == 0) {
      pTVar10 = local_158[0];
    }
    local_118 = local_118 & 0xfe;
    (**(code **)((*(TInlineValue<IMovieSceneExecutionToken,64,8> **)(pTVar10->Data).Pad)->Data).Pad)
              (pTVar10,0);
    if ((local_118 & 2) == 0) {
      FMemory::Free(local_158[0]);
    }
  }
  return;
}

// Add<FNiagaraCacheResetToken> @ 14ea217b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneExecutionTokens::Add<FNiagaraCacheResetToken>
          (FMovieSceneExecutionTokens *this,FNiagaraCacheResetToken *param_1)

{
  int *piVar1;
  FEntry *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TInlineValue<IMovieSceneExecutionToken,64,8> *pTVar6;
  FEntry *pFVar7;
  undefined8 ******ppppppuVar8;
  TInlineValue<IMovieSceneExecutionToken,64,8> *pTVar9;
  undefined1 auStackY_198 [32];
  TInlineValue<IMovieSceneExecutionToken,64,8> *local_148 [8];
  byte local_108;
  undefined1 local_100 [168];
  undefined8 *****local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((((this->Scope).Key.SequenceID.Value == 0xffffffff) ||
      ((this->Scope).Key.TrackIdentifier.Value == 0xffffffff)) ||
     ((this->Operand).SequenceID.Value == 0xffffffff)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Scope.Key.IsValid() && Operand.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneExecutionTokens.h"
                       ,0x35,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_108 = local_108 | 3;
  local_148[0] = (TInlineValue<IMovieSceneExecutionToken,64,8> *)&___7FNiagaraCacheResetToken__6B_;
  if ((local_108 & 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar9 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_148;
  if ((local_108 & 2) == 0) {
    pTVar9 = local_148[0];
  }
  if ((local_108 & 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar6 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_148;
  if ((local_108 & 2) == 0) {
    pTVar6 = local_148[0];
  }
  if (pTVar9 != pTVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar7 = FEntry::FEntry((FEntry *)local_100,&this->Operand,&this->Scope,&this->Context,
                          (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_148);
  pFVar2 = (FEntry *)(this->OrderedTokens).AllocatorInstance.Data;
  if ((pFVar2 <= pFVar7) && (pFVar7 < pFVar2 + (this->OrderedTokens).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->OrderedTokens).ArrayNum;
  piVar1 = &(this->OrderedTokens).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8f0,(ForAnyElementType *)this,piVar1);
  }
  (this->OrderedTokens).ArrayNum = iVar5 + 1;
  FEntry::FEntry((FEntry *)((this->OrderedTokens).AllocatorInstance.Data + (longlong)iVar5 * 0xf0),
                 pFVar7);
  if ((local_18 & 1) != 0) {
    ppppppuVar8 = local_58;
    if ((local_18 & 2) == 0) {
      ppppppuVar8 = (undefined8 ******)local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppppuVar8)(ppppppuVar8,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  FMovieSceneWarpCounter::~FMovieSceneWarpCounter((FMovieSceneWarpCounter *)(local_100 + 0x70));
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_100._96_8_,local_100._104_4_);
  if ((FMovieSceneNestedSequenceTransform *)local_100._96_8_ !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free((void *)local_100._96_8_);
  }
  if ((local_108 & 1) != 0) {
    pTVar9 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_148;
    if ((local_108 & 2) == 0) {
      pTVar9 = local_148[0];
    }
    local_108 = local_108 & 0xfe;
    (**(code **)((*(TInlineValue<IMovieSceneExecutionToken,64,8> **)(pTVar9->Data).Pad)->Data).Pad)
              (pTVar9,0);
    if ((local_108 & 2) == 0) {
      FMemory::Free(local_148[0]);
    }
  }
  return;
}

// AddShared<FNiagaraSharedMarkerToken_&> @ 14ea21a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneExecutionTokens::AddShared<FNiagaraSharedMarkerToken_&>
          (FMovieSceneExecutionTokens *this,FMovieSceneSharedDataId param_1,
          FNiagaraSharedMarkerToken *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 ******ppppppuVar5;
  undefined8 ******ppppppuVar6;
  undefined1 *puVar7;
  uint local_res10;
  undefined1 auStack_88 [32];
  TPairInitializer<FMovieSceneSharedDataId_const_&,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_&&>
  local_68;
  undefined8 *****local_58;
  undefined8 *****local_50 [4];
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_res10 = param_1.UniqueId;
  if (*(int *)&(this->SharedTokens).field_0x8 != *(int *)&(this->SharedTokens).field_0x34) {
    puVar7 = *(undefined1 **)&(this->SharedTokens).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->SharedTokens).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->SharedTokens).field_0x48 - 1U & param_1.UniqueId) * 4
                    );
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&(this->SharedTokens).field_0x0;
      do {
        if (*(uint *)((longlong)iVar4 * 0x38 + lVar1) == param_1.UniqueId) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!SharedTokens.Contains(ID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneExecutionTokens.h"
                             ,0x3f,L"Already added a shared token of this type");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x38 + 0x30 + lVar1);
      } while (iVar4 != -1);
    }
  }
  local_30 = local_30 & 0xfc;
  local_50[0] = FMemory::Malloc(0x60,8);
  ppppppuVar6 = local_50;
  if ((local_30 & 2) == 0) {
    ppppppuVar6 = (undefined8 ******)local_50[0];
  }
  local_30 = local_30 | 1;
  *ppppppuVar6 = (undefined8 *****)&___7IMovieSceneSharedExecutionToken__6B_;
  *(int *)(ppppppuVar6 + 1) = (int)param_2->_padding_;
  *ppppppuVar6 = (undefined8 *****)&___7FNiagaraSharedMarkerToken__6B_;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>
            ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(ppppppuVar6 + 2),
             &param_2->BoundObjectIDs);
  if (((local_30 & 1) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ppppppuVar6 = local_50;
  if ((local_30 & 2) == 0) {
    ppppppuVar6 = (undefined8 ******)local_50[0];
  }
  if (((local_30 & 1) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ppppppuVar5 = local_50;
  if ((local_30 & 2) == 0) {
    ppppppuVar5 = (undefined8 ******)local_50[0];
  }
  if ((ppppppuVar6 != ppppppuVar5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_68.Value = (TInlineValue<IMovieSceneSharedExecutionToken,32,8> *)&local_res10;
  local_58 = local_50;
  TSet<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>,TDefaultMapHashableKeyFuncs<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FMovieSceneSharedDataId_const_&,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_&&>_>
            ((TSet<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>,TDefaultMapHashableKeyFuncs<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>,0>,FDefaultSetAllocator>
              *)&this->SharedTokens,&local_68,(bool *)&local_68.Value);
  if ((local_30 & 1) != 0) {
    ppppppuVar6 = local_50;
    if ((local_30 & 2) == 0) {
      ppppppuVar6 = (undefined8 ******)local_50[0];
    }
    local_30 = local_30 & 0xfe;
    (*(code *)**ppppppuVar6)(ppppppuVar6,0);
    if ((local_30 & 2) == 0) {
      FMemory::Free(local_50[0]);
    }
  }
  return;
}

