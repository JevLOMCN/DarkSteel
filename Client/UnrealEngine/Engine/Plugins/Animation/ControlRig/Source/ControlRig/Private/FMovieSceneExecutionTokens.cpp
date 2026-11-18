// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// Add<FControlRigParameterExecutionToken> @ 14a389110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FMovieSceneExecutionTokens::Add<FControlRigParameterExecutionToken>
          (FMovieSceneExecutionTokens *this,FControlRigParameterExecutionToken *param_1)

{
  int *piVar1;
  FEntry *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FControlRigParameterExecutionToken *pFVar6;
  FEntry *pFVar7;
  undefined8 ******ppppppuVar8;
  FControlRigParameterExecutionToken *pFVar9;
  undefined1 auStackY_1a8 [32];
  undefined1 local_158 [168];
  FMovieSceneNestedSequenceTransform *local_b0;
  int local_a8;
  FMovieSceneWarpCounter local_a0;
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
  local_158[0x40] = local_158[0x40] & 0xfc;
  local_158._0_8_ = FMemory::Malloc(0xd0,8);
  pFVar9 = (FControlRigParameterExecutionToken *)local_158;
  if ((local_158[0x40] & 2) == 0) {
    pFVar9 = (FControlRigParameterExecutionToken *)local_158._0_8_;
  }
  local_158[0x40] = local_158[0x40] | 1;
  FControlRigParameterExecutionToken::FControlRigParameterExecutionToken(pFVar9,param_1);
  if ((local_158[0x40] & 1) == 0) {
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
  pFVar9 = (FControlRigParameterExecutionToken *)local_158;
  if ((local_158[0x40] & 2) == 0) {
    pFVar9 = (FControlRigParameterExecutionToken *)local_158._0_8_;
  }
  if ((local_158[0x40] & 1) == 0) {
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
  pFVar6 = (FControlRigParameterExecutionToken *)local_158;
  if ((local_158[0x40] & 2) == 0) {
    pFVar6 = (FControlRigParameterExecutionToken *)local_158._0_8_;
  }
  if (pFVar9 != pFVar6) {
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
  pFVar7 = FEntry::FEntry((FEntry *)(local_158 + 0x48),&this->Operand,&this->Scope,&this->Context,
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
  FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_a0);
  DestructItems<FMovieSceneNestedSequenceTransform,int>(local_b0,local_a8);
  if (local_b0 != (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_b0);
  }
  if ((local_158[0x40] & 1) != 0) {
    pFVar9 = (FControlRigParameterExecutionToken *)local_158;
    if ((local_158[0x40] & 2) == 0) {
      pFVar9 = (FControlRigParameterExecutionToken *)local_158._0_8_;
    }
    local_158[0x40] = local_158[0x40] & 0xfe;
    (**(code **)pFVar9->_padding_)(pFVar9,0);
    if ((local_158[0x40] & 2) == 0) {
      FMemory::Free((void *)local_158._0_8_);
    }
  }
  return;
}

