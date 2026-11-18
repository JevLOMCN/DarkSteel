// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// Add<FGroomCacheExecutionToken> @ 14e0cb8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneExecutionTokens::Add<FGroomCacheExecutionToken>
          (FMovieSceneExecutionTokens *this,FGroomCacheExecutionToken *param_1)

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
  undefined1 auStackY_1a8 [32];
  undefined1 local_158 [16];
  uchar local_148 [4];
  uchar local_144 [4];
  uchar local_140 [4];
  uchar local_13c [4];
  uint local_138;
  int local_130;
  int local_12c;
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
  local_158._0_8_ = &___7FGroomCacheExecutionToken__6B_;
  local_158._8_8_ = (param_1->Params)._padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)local_158._8_8_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_158._8_8_);
  }
  local_148 = *(uchar (*) [4])&(param_1->Params)._padding_;
  local_144 = *(uchar (*) [4])((longlong)&(param_1->Params)._padding_ + 4);
  local_140 = *(uchar (*) [4])&(param_1->Params)._padding_;
  local_13c = *(uchar (*) [4])((longlong)&(param_1->Params)._padding_ + 4);
  local_138 = local_138 ^ (local_138 ^ (uint)(param_1->Params)._padding_) & 1;
  local_130 = (param_1->Params).SectionStartTime.Value;
  local_12c = (param_1->Params).SectionEndTime.Value;
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
  ppuVar9 = (undefined **)local_158;
  if ((local_118 & 2) == 0) {
    ppuVar9 = (undefined **)local_158._0_8_;
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
  ppuVar6 = (undefined **)local_158;
  if ((local_118 & 2) == 0) {
    ppuVar6 = (undefined **)local_158._0_8_;
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
    ppuVar9 = (undefined **)local_158;
    if ((local_118 & 2) == 0) {
      ppuVar9 = (undefined **)local_158._0_8_;
    }
    local_118 = local_118 & 0xfe;
    (**(code **)*ppuVar9)(ppuVar9,0);
    if ((local_118 & 2) == 0) {
      FMemory::Free((void *)local_158._0_8_);
    }
  }
  return;
}

