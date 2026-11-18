// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 6

// Add<TPropertyTrackExecutionToken<UObject_*,FMovieSceneObjectBindingID>_> @ 146597580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneExecutionTokens::Add<TPropertyTrackExecutionToken<UObject_*,FMovieSceneObjectBindingID>_>
          (FMovieSceneExecutionTokens *this,
          TPropertyTrackExecutionToken<UObject_*,FMovieSceneObjectBindingID> *param_1)

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
  TInlineValue<IMovieSceneExecutionToken,64,8> *local_148;
  uchar local_140 [8];
  uchar auStack_138 [8];
  uchar local_130 [40];
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
  local_148 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)
              &___7__TPropertyTrackExecutionToken_PEAVUObject__UFMovieSceneObjectBindingID____6B_;
  local_140 = *(uchar (*) [8])&(param_1->Value).Guid;
  auStack_138 = *(uchar (*) [8])&(param_1->Value).Guid.C;
  local_130._0_8_ = *(undefined8 *)&(param_1->Value).SequenceID;
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
  pTVar9 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)&local_148;
  if ((local_108 & 2) == 0) {
    pTVar9 = local_148;
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
  pTVar6 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)&local_148;
  if ((local_108 & 2) == 0) {
    pTVar6 = local_148;
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
                          (TInlineValue<IMovieSceneExecutionToken,64,8> *)&local_148);
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
    pTVar9 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)&local_148;
    if ((local_108 & 2) == 0) {
      pTVar9 = local_148;
    }
    local_108 = local_108 & 0xfe;
    (**(code **)((*(TInlineValue<IMovieSceneExecutionToken,64,8> **)(pTVar9->Data).Pad)->Data).Pad)
              (pTVar9,0);
    if ((local_108 & 2) == 0) {
      FMemory::Free(local_148);
    }
  }
  return;
}

// Add<TPropertyTrackExecutionToken<bool,bool>_> @ 146597840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneExecutionTokens::Add<TPropertyTrackExecutionToken<bool,bool>_>
          (FMovieSceneExecutionTokens *this,TPropertyTrackExecutionToken<bool,bool> *param_1)

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
  TInlineValue<IMovieSceneExecutionToken,64,8> *local_148;
  uchar local_140;
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
  local_148 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)
              &___7__TPropertyTrackExecutionToken__N_N__6B_;
  local_140 = param_1->Value;
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
  pTVar9 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)&local_148;
  if ((local_108 & 2) == 0) {
    pTVar9 = local_148;
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
  pTVar6 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)&local_148;
  if ((local_108 & 2) == 0) {
    pTVar6 = local_148;
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
                          (TInlineValue<IMovieSceneExecutionToken,64,8> *)&local_148);
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
    pTVar9 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)&local_148;
    if ((local_108 & 2) == 0) {
      pTVar9 = local_148;
    }
    local_108 = local_108 & 0xfe;
    (**(code **)((*(TInlineValue<IMovieSceneExecutionToken,64,8> **)(pTVar9->Data).Pad)->Data).Pad)
              (pTVar9,0);
    if ((local_108 & 2) == 0) {
      FMemory::Free(local_148);
    }
  }
  return;
}

// Add<F3DPathExecutionToken> @ 146597af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneExecutionTokens::Add<F3DPathExecutionToken>
          (FMovieSceneExecutionTokens *this,F3DPathExecutionToken *param_1)

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
  undefined1 local_148 [36];
  MovieScene3DPathSection_Axis local_124;
  MovieScene3DPathSection_Axis local_123;
  uchar local_122;
  uchar local_121;
  uchar local_120;
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
  local_148._0_8_ = &___7F3DPathExecutionToken__6B_;
  local_148._8_8_ = *(undefined8 *)&(param_1->PathBindingID).Guid;
  local_148._16_8_ = *(undefined8 *)&(param_1->PathBindingID).Guid.C;
  local_148._24_8_ = *(undefined8 *)&(param_1->PathBindingID).SequenceID;
  local_148._32_4_ = param_1->Timing;
  local_124 = param_1->FrontAxisEnum;
  local_123 = param_1->UpAxisEnum;
  local_122 = param_1->bFollow;
  local_121 = param_1->bReverse;
  local_120 = param_1->bForceUpright;
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

// Add<FEventTrackExecutionToken> @ 146597f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneExecutionTokens::Add<FEventTrackExecutionToken>
          (FMovieSceneExecutionTokens *this,FEventTrackExecutionToken *param_1)

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
  undefined1 auStackY_1a8 [32];
  TInlineValue<IMovieSceneExecutionToken,64,8> *local_158;
  FScriptContainerElement *local_150;
  int local_148;
  int local_144;
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
  local_118 = local_118 | 3;
  local_158 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)&___7FEventTrackExecutionToken__6B_;
  local_150 = (param_1->Events).AllocatorInstance.Data;
  (param_1->Events).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148 = (param_1->Events).ArrayNum;
  local_144 = (param_1->Events).ArrayMax;
  (param_1->Events).ArrayNum = 0;
  (param_1->Events).ArrayMax = 0;
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
  pTVar9 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)&local_158;
  if ((local_118 & 2) == 0) {
    pTVar9 = local_158;
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
  pTVar6 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)&local_158;
  if ((local_118 & 2) == 0) {
    pTVar6 = local_158;
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
                          (TInlineValue<IMovieSceneExecutionToken,64,8> *)&local_158);
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
    pTVar9 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)&local_158;
    if ((local_118 & 2) == 0) {
      pTVar9 = local_158;
    }
    local_118 = local_118 & 0xfe;
    (**(code **)((*(TInlineValue<IMovieSceneExecutionToken,64,8> **)(pTVar9->Data).Pad)->Data).Pad)
              (pTVar9,0);
    if ((local_118 & 2) == 0) {
      FMemory::Free(local_158);
    }
  }
  return;
}

// Add<FParticleParameterExecutionToken> @ 146598580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneExecutionTokens::Add<FParticleParameterExecutionToken>
          (FMovieSceneExecutionTokens *this,FParticleParameterExecutionToken *param_1)

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
  local_158[0] = FMemory::Malloc(0x1d8,8);
  pTVar9 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)local_158;
  if ((local_118 & 2) == 0) {
    pTVar9 = local_158[0];
  }
  local_118 = local_118 | 1;
  *(undefined ***)(pTVar9->Data).Pad = &___7FParticleParameterExecutionToken__6B_;
  FEvaluatedParameterSectionValues::FEvaluatedParameterSectionValues
            ((FEvaluatedParameterSectionValues *)((pTVar9->Data).Pad + 8),&param_1->Values);
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

// Add<FParticleTrackExecutionToken> @ 146598850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneExecutionTokens::Add<FParticleTrackExecutionToken>
          (FMovieSceneExecutionTokens *this,FParticleTrackExecutionToken *param_1)

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
  TInlineValue<IMovieSceneExecutionToken,64,8> *local_148;
  EParticleKey local_140;
  uint local_13c;
  uchar local_138;
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
  local_148 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)&___7FParticleTrackExecutionToken__6B_
  ;
  local_140 = param_1->ParticleKey;
  local_138 = (param_1->KeyHandle).bIsSet;
  if ((bool)local_138 != false) {
    local_13c = (param_1->KeyHandle).TypedValue.Index;
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
  pTVar9 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)&local_148;
  if ((local_108 & 2) == 0) {
    pTVar9 = local_148;
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
  pTVar6 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)&local_148;
  if ((local_108 & 2) == 0) {
    pTVar6 = local_148;
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
                          (TInlineValue<IMovieSceneExecutionToken,64,8> *)&local_148);
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
    pTVar9 = (TInlineValue<IMovieSceneExecutionToken,64,8> *)&local_148;
    if ((local_108 & 2) == 0) {
      pTVar9 = local_148;
    }
    local_108 = local_108 & 0xfe;
    (**(code **)((*(TInlineValue<IMovieSceneExecutionToken,64,8> **)(pTVar9->Data).Pad)->Data).Pad)
              (pTVar9,0);
    if ((local_108 & 2) == 0) {
      FMemory::Free(local_148);
    }
  }
  return;
}

