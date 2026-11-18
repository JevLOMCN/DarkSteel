// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 5

// Add<FMediaPlayerSectionExecutionToken> @ 14ea63e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneExecutionTokens::Add<FMediaPlayerSectionExecutionToken>
          (FMovieSceneExecutionTokens *this,FMediaPlayerSectionExecutionToken *param_1)

{
  int *piVar1;
  FEntry *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined **ppuVar6;
  FEntry *pFVar7;
  undefined8 ******ppppppuVar8;
  undefined **ppuVar9;
  undefined1 auStackY_198 [32];
  undefined1 local_148 [16];
  long64 local_138;
  uchar local_130;
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
  local_148._0_8_ = &___7FMediaPlayerSectionExecutionToken__6B_;
  local_148._8_8_ = param_1->MediaSource;
  local_138 = (param_1->CurrentTime).Ticks;
  local_130 = param_1->bLoop;
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
  ppuVar9 = (undefined **)local_148;
  if ((local_108 & 2) == 0) {
    ppuVar9 = (undefined **)local_148._0_8_;
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
  ppuVar6 = (undefined **)local_148;
  if ((local_108 & 2) == 0) {
    ppuVar6 = (undefined **)local_148._0_8_;
  }
  if (ppuVar9 != ppuVar6) {
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
    ppuVar9 = (undefined **)local_148;
    if ((local_108 & 2) == 0) {
      ppuVar9 = (undefined **)local_148._0_8_;
    }
    local_108 = local_108 & 0xfe;
    (**(code **)*ppuVar9)(ppuVar9,0);
    if ((local_108 & 2) == 0) {
      FMemory::Free((void *)local_148._0_8_);
    }
  }
  return;
}

// Add<FMediaPlayerSectionPreRollExecutionToken> @ 14ea64120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneExecutionTokens::Add<FMediaPlayerSectionPreRollExecutionToken>
          (FMovieSceneExecutionTokens *this,FMediaPlayerSectionPreRollExecutionToken *param_1)

{
  int *piVar1;
  FEntry *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined **ppuVar6;
  FEntry *pFVar7;
  undefined8 ******ppppppuVar8;
  undefined **ppuVar9;
  undefined1 auStackY_198 [32];
  undefined1 local_148 [16];
  long64 local_138;
  uchar local_130;
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
  local_148._0_8_ = &___7FMediaPlayerSectionPreRollExecutionToken__6B_;
  local_148._8_8_ = param_1->MediaSource;
  local_138 = (param_1->StartTime).Ticks;
  local_130 = param_1->bLoop;
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
  ppuVar9 = (undefined **)local_148;
  if ((local_108 & 2) == 0) {
    ppuVar9 = (undefined **)local_148._0_8_;
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
  ppuVar6 = (undefined **)local_148;
  if ((local_108 & 2) == 0) {
    ppuVar6 = (undefined **)local_148._0_8_;
  }
  if (ppuVar9 != ppuVar6) {
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
    ppuVar9 = (undefined **)local_148;
    if ((local_108 & 2) == 0) {
      ppuVar9 = (undefined **)local_148._0_8_;
    }
    local_108 = local_108 & 0xfe;
    (**(code **)*ppuVar9)(ppuVar9,0);
    if ((local_108 & 2) == 0) {
      FMemory::Free((void *)local_148._0_8_);
    }
  }
  return;
}

// Add<FMediaSectionExecutionToken> @ 14ea643e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneExecutionTokens::Add<FMediaSectionExecutionToken>
          (FMovieSceneExecutionTokens *this,FMediaSectionExecutionToken *param_1)

{
  int *piVar1;
  FEntry *pFVar2;
  code *pcVar3;
  longlong lVar4;
  TInlineValue<IMovieSceneExecutionToken,64,8> *pTVar5;
  bool bVar6;
  int iVar7;
  TInlineValue<IMovieSceneExecutionToken,64,8> *pTVar8;
  FEntry *pFVar9;
  undefined8 ******ppppppuVar10;
  TInlineValue<IMovieSceneExecutionToken,64,8> *pTVar11;
  undefined1 auStackY_198 [32];
  TInlineValue<IMovieSceneExecutionToken,64,8> *local_148 [8];
  byte bStack_108;
  undefined1 local_100 [168];
  undefined8 *****local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((((this->Scope).Key.SequenceID.Value == 0xffffffff) ||
      ((this->Scope).Key.TrackIdentifier.Value == 0xffffffff)) ||
     ((this->Operand).SequenceID.Value == 0xffffffff)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Scope.Key.IsValid() && Operand.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneExecutionTokens.h"
                       ,0x35,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bStack_108 = bStack_108 & 0xfc;
  local_148[0] = FMemory::Malloc(0x78,8);
  pTVar11 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_148;
  if ((bStack_108 & 2) == 0) {
    pTVar11 = local_148[0];
  }
  bStack_108 = bStack_108 | 1;
  *(undefined ***)(pTVar11->Data).Pad = &___7FMediaSectionBaseExecutionToken__6B_;
  *(TInlineValue<IMovieSceneExecutionToken,64,8> **)((pTVar11->Data).Pad + 8) =
       (TInlineValue<IMovieSceneExecutionToken,64,8> *)param_1->_padding_;
  pTVar8 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)param_1->_padding_;
  *(TInlineValue<IMovieSceneExecutionToken,64,8> **)((pTVar11->Data).Pad + 0x10) =
       (TInlineValue<IMovieSceneExecutionToken,64,8> *)param_1->_padding_;
  *(TInlineValue<IMovieSceneExecutionToken,64,8> **)((pTVar11->Data).Pad + 0x18) = pTVar8;
  *(TInlineValue<IMovieSceneExecutionToken,64,8> **)((pTVar11->Data).Pad + 0x20) =
       (TInlineValue<IMovieSceneExecutionToken,64,8> *)param_1->_padding_;
  *(int *)((pTVar11->Data).Pad + 0x28) = (int)param_1->_padding_;
  *(undefined8 *)((pTVar11->Data).Pad + 0x2c) = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)((pTVar11->Data).Pad + 0x34) = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar4 = param_1->_padding_;
  *(TInlineValue<IMovieSceneExecutionToken,64,8> **)((pTVar11->Data).Pad + 0x38) =
       (TInlineValue<IMovieSceneExecutionToken,64,8> *)param_1->_padding_;
  *(longlong *)&pTVar11->field_0x40 = lVar4;
  pTVar8 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)param_1->_padding_;
  *(TInlineValue<IMovieSceneExecutionToken,64,8> **)pTVar11[1].Data.Pad =
       (TInlineValue<IMovieSceneExecutionToken,64,8> *)param_1->_padding_;
  *(TInlineValue<IMovieSceneExecutionToken,64,8> **)(pTVar11[1].Data.Pad + 8) = pTVar8;
  pTVar8 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)param_1->_padding_;
  pTVar5 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)param_1->_padding_;
  *(undefined ***)(pTVar11->Data).Pad = &___7FMediaSectionExecutionToken__6B_;
  *(TInlineValue<IMovieSceneExecutionToken,64,8> **)(pTVar11[1].Data.Pad + 0x10) = pTVar8;
  *(TInlineValue<IMovieSceneExecutionToken,64,8> **)(pTVar11[1].Data.Pad + 0x18) = pTVar5;
  *(TInlineValue<IMovieSceneExecutionToken,64,8> **)(pTVar11[1].Data.Pad + 0x20) =
       (TInlineValue<IMovieSceneExecutionToken,64,8> *)(param_1->CurrentTime).Ticks;
  *(float *)(pTVar11[1].Data.Pad + 0x28) = param_1->ProxyTextureBlend;
  pTVar11[1].Data.Pad[0x2c] = param_1->bCanPlayerBeOpen;
  if ((bStack_108 & 1) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar11 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_148;
  if ((bStack_108 & 2) == 0) {
    pTVar11 = local_148[0];
  }
  if ((bStack_108 & 1) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar8 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_148;
  if ((bStack_108 & 2) == 0) {
    pTVar8 = local_148[0];
  }
  if (pTVar11 != pTVar8) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = FEntry::FEntry((FEntry *)local_100,&this->Operand,&this->Scope,&this->Context,
                          (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_148);
  pFVar2 = (FEntry *)(this->OrderedTokens).AllocatorInstance.Data;
  if ((pFVar2 <= pFVar9) && (pFVar9 < pFVar2 + (this->OrderedTokens).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = (this->OrderedTokens).ArrayNum;
  piVar1 = &(this->OrderedTokens).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8f0,(ForAnyElementType *)this,piVar1);
  }
  (this->OrderedTokens).ArrayNum = iVar7 + 1;
  FEntry::FEntry((FEntry *)((this->OrderedTokens).AllocatorInstance.Data + (longlong)iVar7 * 0xf0),
                 pFVar9);
  if ((local_18 & 1) != 0) {
    ppppppuVar10 = local_58;
    if ((local_18 & 2) == 0) {
      ppppppuVar10 = (undefined8 ******)local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppppuVar10)(ppppppuVar10,0);
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
  if ((bStack_108 & 1) != 0) {
    pTVar11 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_148;
    if ((bStack_108 & 2) == 0) {
      pTVar11 = local_148[0];
    }
    bStack_108 = bStack_108 & 0xfe;
    (**(code **)((*(TInlineValue<IMovieSceneExecutionToken,64,8> **)(pTVar11->Data).Pad)->Data).Pad)
              (pTVar11,0);
    if ((bStack_108 & 2) == 0) {
      FMemory::Free(local_148[0]);
    }
  }
  return;
}

// Add<FMediaSectionPostRollExecutionToken> @ 14ea64710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneExecutionTokens::Add<FMediaSectionPostRollExecutionToken>
          (FMovieSceneExecutionTokens *this,FMediaSectionPostRollExecutionToken *param_1)

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
  local_148[0] = (TInlineValue<IMovieSceneExecutionToken,64,8> *)
                 &___7FMediaSectionPostRollExecutionToken__6B_;
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

// Add<FMediaSectionPreRollExecutionToken> @ 14ea649c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneExecutionTokens::Add<FMediaSectionPreRollExecutionToken>
          (FMovieSceneExecutionTokens *this,FMediaSectionPreRollExecutionToken *param_1)

{
  int *piVar1;
  FEntry *pFVar2;
  code *pcVar3;
  longlong lVar4;
  TInlineValue<IMovieSceneExecutionToken,64,8> *pTVar5;
  bool bVar6;
  int iVar7;
  TInlineValue<IMovieSceneExecutionToken,64,8> *pTVar8;
  FEntry *pFVar9;
  undefined8 ******ppppppuVar10;
  TInlineValue<IMovieSceneExecutionToken,64,8> *pTVar11;
  undefined1 auStackY_198 [32];
  TInlineValue<IMovieSceneExecutionToken,64,8> *local_148 [8];
  byte bStack_108;
  undefined1 local_100 [168];
  undefined8 *****local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((((this->Scope).Key.SequenceID.Value == 0xffffffff) ||
      ((this->Scope).Key.TrackIdentifier.Value == 0xffffffff)) ||
     ((this->Operand).SequenceID.Value == 0xffffffff)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Scope.Key.IsValid() && Operand.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneExecutionTokens.h"
                       ,0x35,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bStack_108 = bStack_108 & 0xfc;
  local_148[0] = FMemory::Malloc(0x70,8);
  pTVar11 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_148;
  if ((bStack_108 & 2) == 0) {
    pTVar11 = local_148[0];
  }
  bStack_108 = bStack_108 | 1;
  *(undefined ***)(pTVar11->Data).Pad = &___7FMediaSectionBaseExecutionToken__6B_;
  *(TInlineValue<IMovieSceneExecutionToken,64,8> **)((pTVar11->Data).Pad + 8) =
       (TInlineValue<IMovieSceneExecutionToken,64,8> *)param_1->_padding_;
  pTVar8 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)param_1->_padding_;
  *(TInlineValue<IMovieSceneExecutionToken,64,8> **)((pTVar11->Data).Pad + 0x10) =
       (TInlineValue<IMovieSceneExecutionToken,64,8> *)param_1->_padding_;
  *(TInlineValue<IMovieSceneExecutionToken,64,8> **)((pTVar11->Data).Pad + 0x18) = pTVar8;
  *(TInlineValue<IMovieSceneExecutionToken,64,8> **)((pTVar11->Data).Pad + 0x20) =
       (TInlineValue<IMovieSceneExecutionToken,64,8> *)param_1->_padding_;
  *(int *)((pTVar11->Data).Pad + 0x28) = (int)param_1->_padding_;
  *(undefined8 *)((pTVar11->Data).Pad + 0x2c) = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)((pTVar11->Data).Pad + 0x34) = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar4 = param_1->_padding_;
  *(TInlineValue<IMovieSceneExecutionToken,64,8> **)((pTVar11->Data).Pad + 0x38) =
       (TInlineValue<IMovieSceneExecutionToken,64,8> *)param_1->_padding_;
  *(longlong *)&pTVar11->field_0x40 = lVar4;
  pTVar8 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)param_1->_padding_;
  *(TInlineValue<IMovieSceneExecutionToken,64,8> **)pTVar11[1].Data.Pad =
       (TInlineValue<IMovieSceneExecutionToken,64,8> *)param_1->_padding_;
  *(TInlineValue<IMovieSceneExecutionToken,64,8> **)(pTVar11[1].Data.Pad + 8) = pTVar8;
  pTVar8 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)param_1->_padding_;
  pTVar5 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)param_1->_padding_;
  *(undefined ***)(pTVar11->Data).Pad = &___7FMediaSectionPreRollExecutionToken__6B_;
  *(TInlineValue<IMovieSceneExecutionToken,64,8> **)(pTVar11[1].Data.Pad + 0x10) = pTVar8;
  *(TInlineValue<IMovieSceneExecutionToken,64,8> **)(pTVar11[1].Data.Pad + 0x18) = pTVar5;
  *(TInlineValue<IMovieSceneExecutionToken,64,8> **)(pTVar11[1].Data.Pad + 0x20) =
       (TInlineValue<IMovieSceneExecutionToken,64,8> *)(param_1->StartTime).Ticks;
  if ((bStack_108 & 1) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar11 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_148;
  if ((bStack_108 & 2) == 0) {
    pTVar11 = local_148[0];
  }
  if ((bStack_108 & 1) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar8 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_148;
  if ((bStack_108 & 2) == 0) {
    pTVar8 = local_148[0];
  }
  if (pTVar11 != pTVar8) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = FEntry::FEntry((FEntry *)local_100,&this->Operand,&this->Scope,&this->Context,
                          (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_148);
  pFVar2 = (FEntry *)(this->OrderedTokens).AllocatorInstance.Data;
  if ((pFVar2 <= pFVar9) && (pFVar9 < pFVar2 + (this->OrderedTokens).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = (this->OrderedTokens).ArrayNum;
  piVar1 = &(this->OrderedTokens).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8f0,(ForAnyElementType *)this,piVar1);
  }
  (this->OrderedTokens).ArrayNum = iVar7 + 1;
  FEntry::FEntry((FEntry *)((this->OrderedTokens).AllocatorInstance.Data + (longlong)iVar7 * 0xf0),
                 pFVar9);
  if ((local_18 & 1) != 0) {
    ppppppuVar10 = local_58;
    if ((local_18 & 2) == 0) {
      ppppppuVar10 = (undefined8 ******)local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppppuVar10)(ppppppuVar10,0);
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
  if ((bStack_108 & 1) != 0) {
    pTVar11 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_148;
    if ((bStack_108 & 2) == 0) {
      pTVar11 = local_148[0];
    }
    bStack_108 = bStack_108 & 0xfe;
    (**(code **)((*(TInlineValue<IMovieSceneExecutionToken,64,8> **)(pTVar11->Data).Pad)->Data).Pad)
              (pTVar11,0);
    if ((bStack_108 & 2) == 0) {
      FMemory::Free(local_148[0]);
    }
  }
  return;
}

