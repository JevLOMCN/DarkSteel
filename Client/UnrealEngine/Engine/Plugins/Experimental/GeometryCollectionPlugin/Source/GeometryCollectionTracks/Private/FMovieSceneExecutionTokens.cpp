// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionTracks
// Functions: 1

// Add<FGeometryCollectionExecutionToken> @ 14e7fbbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneExecutionTokens::Add<FGeometryCollectionExecutionToken>
          (FMovieSceneExecutionTokens *this,FGeometryCollectionExecutionToken *param_1)

{
  FMovieSceneGeometryCollectionParams *this_00;
  int *piVar1;
  FEntry *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TInlineValue<IMovieSceneExecutionToken,64,8> *pTVar6;
  FEntry *pFVar7;
  undefined8 ******ppppppuVar8;
  TInlineValue<IMovieSceneExecutionToken,64,8> *pTVar9;
  undefined1 auStackY_1a8 [32];
  TInlineValue<IMovieSceneExecutionToken,64,8> *local_158 [8];
  byte local_118;
  undefined1 local_110 [168];
  undefined8 *****local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
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
  local_118 = local_118 & 0xfc;
  local_158[0] = FMemory::Malloc(0x48,8);
  pTVar9 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_158;
  if ((local_118 & 2) == 0) {
    pTVar9 = local_158[0];
  }
  this_00 = (FMovieSceneGeometryCollectionParams *)((pTVar9->Data).Pad + 8);
  local_118 = local_118 | 1;
  *(undefined ***)(pTVar9->Data).Pad = &___7FGeometryCollectionExecutionToken__6B_;
  FMovieSceneGeometryCollectionParams::FMovieSceneGeometryCollectionParams
            (this_00,(FMovieSceneGeometryCollectionParams *)&param_1->Params);
  this_00->_padding_ = (longlong)&___7FMovieSceneGeometryCollectionSectionTemplateParameters__6B_;
  *(int *)&pTVar9->field_0x40 = (param_1->Params).SectionStartTime.Value;
  *(int *)&pTVar9->field_0x44 = (param_1->Params).SectionEndTime.Value;
  if ((local_118 & 1) == 0) {
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
  pTVar9 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_158;
  if ((local_118 & 2) == 0) {
    pTVar9 = local_158[0];
  }
  if ((local_118 & 1) == 0) {
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
  pTVar6 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_158;
  if ((local_118 & 2) == 0) {
    pTVar6 = local_158[0];
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
  pFVar7 = FEntry::FEntry((FEntry *)local_110,&this->Operand,&this->Scope,&this->Context,
                          (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_158);
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
  if ((local_28 & 1) != 0) {
    ppppppuVar8 = local_68;
    if ((local_28 & 2) == 0) {
      ppppppuVar8 = (undefined8 ******)local_68[0];
    }
    local_28 = local_28 & 0xfe;
    (*(code *)**ppppppuVar8)(ppppppuVar8,0);
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
    pTVar9 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_158;
    if ((local_118 & 2) == 0) {
      pTVar9 = local_158[0];
    }
    local_118 = local_118 & 0xfe;
    (**(code **)((*(TInlineValue<IMovieSceneExecutionToken,64,8> **)(pTVar9->Data).Pad)->Data).Pad)
              (pTVar9,0);
    if ((local_118 & 2) == 0) {
      FMemory::Free(local_158[0]);
    }
  }
  return;
}

