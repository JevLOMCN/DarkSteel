// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 25

// DefineBinaryOperator<ExpressionParser::FForwardSlash> @ 14178f4d0

void __thiscall
FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FForwardSlash>
          (FExpressionGrammar *this,int param_1,EAssociativity param_2,bool param_3)

{
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint *puVar7;
  int local_res8;
  EAssociativity local_resc;
  undefined1 local_resd;
  FGuid *local_a8;
  int *local_a0;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  iStack_90 = 0;
  this_00 = &this->BinaryOperators;
  iVar2 = *(int *)&(this->BinaryOperators).field_0x28;
  local_88 = &(this->BinaryOperators).field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)&(this->BinaryOperators).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)local_88;
    }
    uVar3 = *puVar7;
    while (uVar3 == 0) {
      lVar6 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14178f580;
      uVar3 = puVar7[lVar6 + 1];
    }
    uStack_8c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar6;
    if (iVar2 < iStack_7c) {
      iStack_7c = iVar2;
    }
  }
LAB_14178f580:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98 = this_00;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar2) {
    do {
      if (((*(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&local_68->field_0x0) == param_1) &&
          (*(EAssociativity *)
            ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x14 + *(longlong *)&local_68->field_0x0)
           != param_2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurValue.Associativity == InAssociativity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ExpressionParserTypes.h"
                             ,0x256,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlash>::GetTypeId(void)'
              ::__l2::Global;
  local_a0 = &local_res8;
  local_res8 = param_1;
  local_resc = param_2;
  local_resd = param_3;
  TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FOpParameters_&&>_>
            ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FGuid_const_&,FOpParameters_&&> *)&stack0x00000020,
             (bool *)&local_a8);
  return;
}

// DefineBinaryOperator<ExpressionParser::FMinus> @ 14178f680

void __thiscall
FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FMinus>
          (FExpressionGrammar *this,int param_1,EAssociativity param_2,bool param_3)

{
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint *puVar7;
  int local_res8;
  EAssociativity local_resc;
  undefined1 local_resd;
  FGuid *local_a8;
  int *local_a0;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  iStack_90 = 0;
  this_00 = &this->BinaryOperators;
  iVar2 = *(int *)&(this->BinaryOperators).field_0x28;
  local_88 = &(this->BinaryOperators).field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)&(this->BinaryOperators).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)local_88;
    }
    uVar3 = *puVar7;
    while (uVar3 == 0) {
      lVar6 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14178f730;
      uVar3 = puVar7[lVar6 + 1];
    }
    uStack_8c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar6;
    if (iVar2 < iStack_7c) {
      iStack_7c = iVar2;
    }
  }
LAB_14178f730:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98 = this_00;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar2) {
    do {
      if (((*(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&local_68->field_0x0) == param_1) &&
          (*(EAssociativity *)
            ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x14 + *(longlong *)&local_68->field_0x0)
           != param_2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurValue.Associativity == InAssociativity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ExpressionParserTypes.h"
                             ,0x256,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
              ::__l2::Global;
  local_a0 = &local_res8;
  local_res8 = param_1;
  local_resc = param_2;
  local_resd = param_3;
  TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FOpParameters_&&>_>
            ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FGuid_const_&,FOpParameters_&&> *)&stack0x00000020,
             (bool *)&local_a8);
  return;
}

// DefineBinaryOperator<ExpressionParser::FPercent> @ 14178f830

void __thiscall
FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FPercent>
          (FExpressionGrammar *this,int param_1,EAssociativity param_2,bool param_3)

{
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint *puVar7;
  int local_res8;
  EAssociativity local_resc;
  undefined1 local_resd;
  FGuid *local_a8;
  int *local_a0;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  iStack_90 = 0;
  this_00 = &this->BinaryOperators;
  iVar2 = *(int *)&(this->BinaryOperators).field_0x28;
  local_88 = &(this->BinaryOperators).field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)&(this->BinaryOperators).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)local_88;
    }
    uVar3 = *puVar7;
    while (uVar3 == 0) {
      lVar6 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14178f8e0;
      uVar3 = puVar7[lVar6 + 1];
    }
    uStack_8c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar6;
    if (iVar2 < iStack_7c) {
      iStack_7c = iVar2;
    }
  }
LAB_14178f8e0:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98 = this_00;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar2) {
    do {
      if (((*(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&local_68->field_0x0) == param_1) &&
          (*(EAssociativity *)
            ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x14 + *(longlong *)&local_68->field_0x0)
           != param_2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurValue.Associativity == InAssociativity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ExpressionParserTypes.h"
                             ,0x256,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPercent>::GetTypeId(void)'
              ::__l2::Global;
  local_a0 = &local_res8;
  local_res8 = param_1;
  local_resc = param_2;
  local_resd = param_3;
  TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FOpParameters_&&>_>
            ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FGuid_const_&,FOpParameters_&&> *)&stack0x00000020,
             (bool *)&local_a8);
  return;
}

// DefineBinaryOperator<ExpressionParser::FPlus> @ 14178f9e0

void __thiscall
FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FPlus>
          (FExpressionGrammar *this,int param_1,EAssociativity param_2,bool param_3)

{
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint *puVar7;
  int local_res8;
  EAssociativity local_resc;
  undefined1 local_resd;
  FGuid *local_a8;
  int *local_a0;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  iStack_90 = 0;
  this_00 = &this->BinaryOperators;
  iVar2 = *(int *)&(this->BinaryOperators).field_0x28;
  local_88 = &(this->BinaryOperators).field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)&(this->BinaryOperators).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)local_88;
    }
    uVar3 = *puVar7;
    while (uVar3 == 0) {
      lVar6 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14178fa90;
      uVar3 = puVar7[lVar6 + 1];
    }
    uStack_8c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar6;
    if (iVar2 < iStack_7c) {
      iStack_7c = iVar2;
    }
  }
LAB_14178fa90:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98 = this_00;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar2) {
    do {
      if (((*(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&local_68->field_0x0) == param_1) &&
          (*(EAssociativity *)
            ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x14 + *(longlong *)&local_68->field_0x0)
           != param_2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurValue.Associativity == InAssociativity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ExpressionParserTypes.h"
                             ,0x256,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
              ::__l2::Global;
  local_a0 = &local_res8;
  local_res8 = param_1;
  local_resc = param_2;
  local_resd = param_3;
  TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FOpParameters_&&>_>
            ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FGuid_const_&,FOpParameters_&&> *)&stack0x00000020,
             (bool *)&local_a8);
  return;
}

// DefineBinaryOperator<ExpressionParser::FPower> @ 14178fb90

void __thiscall
FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FPower>
          (FExpressionGrammar *this,int param_1,EAssociativity param_2,bool param_3)

{
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint *puVar7;
  int local_res8;
  EAssociativity local_resc;
  undefined1 local_resd;
  FGuid *local_a8;
  int *local_a0;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  iStack_90 = 0;
  this_00 = &this->BinaryOperators;
  iVar2 = *(int *)&(this->BinaryOperators).field_0x28;
  local_88 = &(this->BinaryOperators).field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)&(this->BinaryOperators).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)local_88;
    }
    uVar3 = *puVar7;
    while (uVar3 == 0) {
      lVar6 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14178fc40;
      uVar3 = puVar7[lVar6 + 1];
    }
    uStack_8c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar6;
    if (iVar2 < iStack_7c) {
      iStack_7c = iVar2;
    }
  }
LAB_14178fc40:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98 = this_00;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar2) {
    do {
      if (((*(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&local_68->field_0x0) == param_1) &&
          (*(EAssociativity *)
            ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x14 + *(longlong *)&local_68->field_0x0)
           != param_2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurValue.Associativity == InAssociativity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ExpressionParserTypes.h"
                             ,0x256,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPower>::GetTypeId(void)'
              ::__l2::Global;
  local_a0 = &local_res8;
  local_res8 = param_1;
  local_resc = param_2;
  local_resd = param_3;
  TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FOpParameters_&&>_>
            ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FGuid_const_&,FOpParameters_&&> *)&stack0x00000020,
             (bool *)&local_a8);
  return;
}

// DefineBinaryOperator<ExpressionParser::FStar> @ 14178fd40

void __thiscall
FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FStar>
          (FExpressionGrammar *this,int param_1,EAssociativity param_2,bool param_3)

{
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint *puVar7;
  int local_res8;
  EAssociativity local_resc;
  undefined1 local_resd;
  FGuid *local_a8;
  int *local_a0;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  iStack_90 = 0;
  this_00 = &this->BinaryOperators;
  iVar2 = *(int *)&(this->BinaryOperators).field_0x28;
  local_88 = &(this->BinaryOperators).field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)&(this->BinaryOperators).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)local_88;
    }
    uVar3 = *puVar7;
    while (uVar3 == 0) {
      lVar6 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14178fdf0;
      uVar3 = puVar7[lVar6 + 1];
    }
    uStack_8c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar6;
    if (iVar2 < iStack_7c) {
      iStack_7c = iVar2;
    }
  }
LAB_14178fdf0:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98 = this_00;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar2) {
    do {
      if (((*(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&local_68->field_0x0) == param_1) &&
          (*(EAssociativity *)
            ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x14 + *(longlong *)&local_68->field_0x0)
           != param_2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurValue.Associativity == InAssociativity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ExpressionParserTypes.h"
                             ,0x256,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
              ::__l2::Global;
  local_a0 = &local_res8;
  local_res8 = param_1;
  local_resc = param_2;
  local_resd = param_3;
  TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FOpParameters_&&>_>
            ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FGuid_const_&,FOpParameters_&&> *)&stack0x00000020,
             (bool *)&local_a8);
  return;
}

// FExpressionGrammar @ 1417a0eb0

FExpressionGrammar * __thiscall FExpressionGrammar::FExpressionGrammar(FExpressionGrammar *this)

{
  *(undefined8 *)&this->Groupings = 0;
  *(undefined8 *)&(this->Groupings).field_0x8 = 0;
  *(undefined8 *)&(this->Groupings).field_0x20 = 0;
  *(undefined4 *)&(this->Groupings).field_0x28 = 0;
  *(undefined4 *)&(this->Groupings).field_0x2c = 0x80;
  *(undefined4 *)&(this->Groupings).field_0x34 = 0;
  *(undefined4 *)&(this->Groupings).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Groupings).field_0x40 = 0;
  *(undefined4 *)&(this->Groupings).field_0x48 = 0;
  *(undefined8 *)&(this->PreUnaryOperators).Elements = 0;
  *(undefined8 *)&(this->PreUnaryOperators).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PreUnaryOperators).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PreUnaryOperators).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PreUnaryOperators).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PreUnaryOperators).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PreUnaryOperators).Elements.field_0x30 = 0xffffffff;
  (this->PreUnaryOperators).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PreUnaryOperators).HashSize = 0;
  *(undefined8 *)&(this->PostUnaryOperators).Elements = 0;
  *(undefined8 *)&(this->PostUnaryOperators).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PostUnaryOperators).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PostUnaryOperators).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PostUnaryOperators).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PostUnaryOperators).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PostUnaryOperators).Elements.field_0x30 = 0xffffffff;
  (this->PostUnaryOperators).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PostUnaryOperators).HashSize = 0;
  *(undefined8 *)&this->BinaryOperators = 0;
  *(undefined8 *)&(this->BinaryOperators).field_0x8 = 0;
  *(undefined8 *)&(this->BinaryOperators).field_0x20 = 0;
  *(undefined4 *)&(this->BinaryOperators).field_0x28 = 0;
  *(undefined4 *)&(this->BinaryOperators).field_0x2c = 0x80;
  *(undefined4 *)&(this->BinaryOperators).field_0x34 = 0;
  *(undefined4 *)&(this->BinaryOperators).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BinaryOperators).field_0x40 = 0;
  *(undefined4 *)&(this->BinaryOperators).field_0x48 = 0;
  return this;
}

// ~FExpressionGrammar @ 1417a6c20

void __thiscall FExpressionGrammar::~FExpressionGrammar(FExpressionGrammar *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined4 *)&(this->BinaryOperators).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BinaryOperators).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FOpParameters>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FOpParameters>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FOpParameters>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BinaryOperators);
  (this->PostUnaryOperators).HashSize = 0;
  FVar2 = (this->PostUnaryOperators).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PostUnaryOperators).Elements);
  (this->PreUnaryOperators).HashSize = 0;
  FVar2 = (this->PreUnaryOperators).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PreUnaryOperators).Elements);
  *(undefined4 *)&(this->Groupings).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Groupings).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// DefineBinaryOperator<Tests::FAnd> @ 1418ac280

void __thiscall
FExpressionGrammar::DefineBinaryOperator<Tests::FAnd>
          (FExpressionGrammar *this,int param_1,EAssociativity param_2,bool param_3)

{
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint *puVar7;
  int local_res8;
  EAssociativity local_resc;
  undefined1 local_resd;
  FGuid *local_a8;
  int *local_a0;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  iStack_90 = 0;
  this_00 = &this->BinaryOperators;
  iVar2 = *(int *)&(this->BinaryOperators).field_0x28;
  local_88 = &(this->BinaryOperators).field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)&(this->BinaryOperators).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)local_88;
    }
    uVar3 = *puVar7;
    while (uVar3 == 0) {
      lVar6 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1418ac330;
      uVar3 = puVar7[lVar6 + 1];
    }
    uStack_8c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar6;
    if (iVar2 < iStack_7c) {
      iStack_7c = iVar2;
    }
  }
LAB_1418ac330:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98 = this_00;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar2) {
    do {
      if (((*(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&local_68->field_0x0) == param_1) &&
          (*(EAssociativity *)
            ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x14 + *(longlong *)&local_68->field_0x0)
           != param_2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurValue.Associativity == InAssociativity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ExpressionParserTypes.h"
                             ,0x256,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FAnd>::GetTypeId(void)'
              ::__l2::Global;
  local_a0 = &local_res8;
  local_res8 = param_1;
  local_resc = param_2;
  local_resd = param_3;
  TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FOpParameters_&&>_>
            ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FGuid_const_&,FOpParameters_&&> *)&stack0x00000020,
             (bool *)&local_a8);
  return;
}

// DefineBinaryOperator<Tests::FOperator> @ 1418ac430

void __thiscall
FExpressionGrammar::DefineBinaryOperator<Tests::FOperator>
          (FExpressionGrammar *this,int param_1,EAssociativity param_2,bool param_3)

{
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint *puVar7;
  int local_res8;
  EAssociativity local_resc;
  undefined1 local_resd;
  FGuid *local_a8;
  int *local_a0;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  iStack_90 = 0;
  this_00 = &this->BinaryOperators;
  iVar2 = *(int *)&(this->BinaryOperators).field_0x28;
  local_88 = &(this->BinaryOperators).field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)&(this->BinaryOperators).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)local_88;
    }
    uVar3 = *puVar7;
    while (uVar3 == 0) {
      lVar6 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1418ac4e0;
      uVar3 = puVar7[lVar6 + 1];
    }
    uStack_8c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar6;
    if (iVar2 < iStack_7c) {
      iStack_7c = iVar2;
    }
  }
LAB_1418ac4e0:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98 = this_00;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar2) {
    do {
      if (((*(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&local_68->field_0x0) == param_1) &&
          (*(EAssociativity *)
            ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x14 + *(longlong *)&local_68->field_0x0)
           != param_2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurValue.Associativity == InAssociativity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ExpressionParserTypes.h"
                             ,0x256,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
              ::__l2::Global;
  local_a0 = &local_res8;
  local_res8 = param_1;
  local_resc = param_2;
  local_resd = param_3;
  TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FOpParameters_&&>_>
            ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FGuid_const_&,FOpParameters_&&> *)&stack0x00000020,
             (bool *)&local_a8);
  return;
}

// DefineBinaryOperator<Tests::FOr> @ 1418ac5e0

void __thiscall
FExpressionGrammar::DefineBinaryOperator<Tests::FOr>
          (FExpressionGrammar *this,int param_1,EAssociativity param_2,bool param_3)

{
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint *puVar7;
  int local_res8;
  EAssociativity local_resc;
  undefined1 local_resd;
  FGuid *local_a8;
  int *local_a0;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  iStack_90 = 0;
  this_00 = &this->BinaryOperators;
  iVar2 = *(int *)&(this->BinaryOperators).field_0x28;
  local_88 = &(this->BinaryOperators).field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)&(this->BinaryOperators).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)local_88;
    }
    uVar3 = *puVar7;
    while (uVar3 == 0) {
      lVar6 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1418ac690;
      uVar3 = puVar7[lVar6 + 1];
    }
    uStack_8c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar6;
    if (iVar2 < iStack_7c) {
      iStack_7c = iVar2;
    }
  }
LAB_1418ac690:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98 = this_00;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar2) {
    do {
      if (((*(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&local_68->field_0x0) == param_1) &&
          (*(EAssociativity *)
            ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x14 + *(longlong *)&local_68->field_0x0)
           != param_2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurValue.Associativity == InAssociativity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ExpressionParserTypes.h"
                             ,0x256,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOr>::GetTypeId(void)'
              ::__l2::Global;
  local_a0 = &local_res8;
  local_res8 = param_1;
  local_resc = param_2;
  local_resd = param_3;
  TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FOpParameters_&&>_>
            ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FGuid_const_&,FOpParameters_&&> *)&stack0x00000020,
             (bool *)&local_a8);
  return;
}

// GetBinaryOperatorDefParameters @ 1418dd8c0

FOpParameters * __thiscall
FExpressionGrammar::GetBinaryOperatorDefParameters(FExpressionGrammar *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  FOpParameters *pFVar3;
  FOpParameters *pFVar4;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
                      *)&this->BinaryOperators,(uint)uVar2,param_1);
  pFVar4 = (FOpParameters *)0x0;
  if (iVar1 != -1) {
    pFVar4 = (FOpParameters *)
             ((longlong)iVar1 * 0x20 + *(longlong *)&(this->BinaryOperators).field_0x0);
  }
  pFVar3 = pFVar4 + 2;
  if (pFVar4 == (FOpParameters *)0x0) {
    pFVar3 = (FOpParameters *)0x0;
  }
  return pFVar3;
}

// GetGrouping @ 1418df5d0

FGuid * __thiscall FExpressionGrammar::GetGrouping(FExpressionGrammar *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  FGuid *pFVar3;
  FGuid *pFVar4;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
                      *)this,(uint)uVar2,param_1);
  pFVar4 = (FGuid *)0x0;
  if (iVar1 != -1) {
    pFVar4 = (FGuid *)(*(longlong *)&this->Groupings + (longlong)iVar1 * 0x28);
  }
  pFVar3 = pFVar4 + 1;
  if (pFVar4 == (FGuid *)0x0) {
    pFVar3 = (FGuid *)0x0;
  }
  return pFVar3;
}

// HasPostUnaryOperator @ 1418e2280

bool __thiscall FExpressionGrammar::HasPostUnaryOperator(FExpressionGrammar *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                    (&this->PostUnaryOperators,(uint)uVar2,param_1);
  return iVar1 != -1;
}

// HasPreUnaryOperator @ 1418e22d0

bool __thiscall FExpressionGrammar::HasPreUnaryOperator(FExpressionGrammar *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                    (&this->PreUnaryOperators,(uint)uVar2,param_1);
  return iVar1 != -1;
}

// DefineBinaryOperator<TextFilterExpressionParser::FAnd> @ 1419081b0

void __thiscall
FExpressionGrammar::DefineBinaryOperator<TextFilterExpressionParser::FAnd>
          (FExpressionGrammar *this,int param_1,EAssociativity param_2,bool param_3)

{
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint *puVar7;
  int local_res8;
  EAssociativity local_resc;
  undefined1 local_resd;
  FGuid *local_a8;
  int *local_a0;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  iStack_90 = 0;
  this_00 = &this->BinaryOperators;
  iVar2 = *(int *)&(this->BinaryOperators).field_0x28;
  local_88 = &(this->BinaryOperators).field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)&(this->BinaryOperators).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)local_88;
    }
    uVar3 = *puVar7;
    while (uVar3 == 0) {
      lVar6 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141908260;
      uVar3 = puVar7[lVar6 + 1];
    }
    uStack_8c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar6;
    if (iVar2 < iStack_7c) {
      iStack_7c = iVar2;
    }
  }
LAB_141908260:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98 = this_00;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar2) {
    do {
      if (((*(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&local_68->field_0x0) == param_1) &&
          (*(EAssociativity *)
            ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x14 + *(longlong *)&local_68->field_0x0)
           != param_2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurValue.Associativity == InAssociativity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ExpressionParserTypes.h"
                             ,0x256,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FAnd>::GetTypeId(void)'
              ::__l2::Global;
  local_a0 = &local_res8;
  local_res8 = param_1;
  local_resc = param_2;
  local_resd = param_3;
  TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FOpParameters_&&>_>
            ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FGuid_const_&,FOpParameters_&&> *)&stack0x00000020,
             (bool *)&local_a8);
  return;
}

// DefineBinaryOperator<TextFilterExpressionParser::FEqual> @ 141908360

void __thiscall
FExpressionGrammar::DefineBinaryOperator<TextFilterExpressionParser::FEqual>
          (FExpressionGrammar *this,int param_1,EAssociativity param_2,bool param_3)

{
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint *puVar7;
  int local_res8;
  EAssociativity local_resc;
  undefined1 local_resd;
  FGuid *local_a8;
  int *local_a0;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  iStack_90 = 0;
  this_00 = &this->BinaryOperators;
  iVar2 = *(int *)&(this->BinaryOperators).field_0x28;
  local_88 = &(this->BinaryOperators).field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)&(this->BinaryOperators).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)local_88;
    }
    uVar3 = *puVar7;
    while (uVar3 == 0) {
      lVar6 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141908410;
      uVar3 = puVar7[lVar6 + 1];
    }
    uStack_8c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar6;
    if (iVar2 < iStack_7c) {
      iStack_7c = iVar2;
    }
  }
LAB_141908410:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98 = this_00;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar2) {
    do {
      if (((*(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&local_68->field_0x0) == param_1) &&
          (*(EAssociativity *)
            ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x14 + *(longlong *)&local_68->field_0x0)
           != param_2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurValue.Associativity == InAssociativity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ExpressionParserTypes.h"
                             ,0x256,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FEqual>::GetTypeId(void)'
              ::__l2::Global;
  local_a0 = &local_res8;
  local_res8 = param_1;
  local_resc = param_2;
  local_resd = param_3;
  TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FOpParameters_&&>_>
            ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FGuid_const_&,FOpParameters_&&> *)&stack0x00000020,
             (bool *)&local_a8);
  return;
}

// DefineBinaryOperator<TextFilterExpressionParser::FGreater> @ 141908510

void __thiscall
FExpressionGrammar::DefineBinaryOperator<TextFilterExpressionParser::FGreater>
          (FExpressionGrammar *this,int param_1,EAssociativity param_2,bool param_3)

{
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint *puVar7;
  int local_res8;
  EAssociativity local_resc;
  undefined1 local_resd;
  FGuid *local_a8;
  int *local_a0;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  iStack_90 = 0;
  this_00 = &this->BinaryOperators;
  iVar2 = *(int *)&(this->BinaryOperators).field_0x28;
  local_88 = &(this->BinaryOperators).field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)&(this->BinaryOperators).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)local_88;
    }
    uVar3 = *puVar7;
    while (uVar3 == 0) {
      lVar6 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1419085c0;
      uVar3 = puVar7[lVar6 + 1];
    }
    uStack_8c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar6;
    if (iVar2 < iStack_7c) {
      iStack_7c = iVar2;
    }
  }
LAB_1419085c0:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98 = this_00;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar2) {
    do {
      if (((*(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&local_68->field_0x0) == param_1) &&
          (*(EAssociativity *)
            ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x14 + *(longlong *)&local_68->field_0x0)
           != param_2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurValue.Associativity == InAssociativity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ExpressionParserTypes.h"
                             ,0x256,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreater>::GetTypeId(void)'
              ::__l2::Global;
  local_a0 = &local_res8;
  local_res8 = param_1;
  local_resc = param_2;
  local_resd = param_3;
  TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FOpParameters_&&>_>
            ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FGuid_const_&,FOpParameters_&&> *)&stack0x00000020,
             (bool *)&local_a8);
  return;
}

// DefineBinaryOperator<TextFilterExpressionParser::FGreaterOrEqual> @ 1419086c0

void __thiscall
FExpressionGrammar::DefineBinaryOperator<TextFilterExpressionParser::FGreaterOrEqual>
          (FExpressionGrammar *this,int param_1,EAssociativity param_2,bool param_3)

{
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint *puVar7;
  int local_res8;
  EAssociativity local_resc;
  undefined1 local_resd;
  FGuid *local_a8;
  int *local_a0;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  iStack_90 = 0;
  this_00 = &this->BinaryOperators;
  iVar2 = *(int *)&(this->BinaryOperators).field_0x28;
  local_88 = &(this->BinaryOperators).field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)&(this->BinaryOperators).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)local_88;
    }
    uVar3 = *puVar7;
    while (uVar3 == 0) {
      lVar6 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141908770;
      uVar3 = puVar7[lVar6 + 1];
    }
    uStack_8c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar6;
    if (iVar2 < iStack_7c) {
      iStack_7c = iVar2;
    }
  }
LAB_141908770:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98 = this_00;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar2) {
    do {
      if (((*(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&local_68->field_0x0) == param_1) &&
          (*(EAssociativity *)
            ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x14 + *(longlong *)&local_68->field_0x0)
           != param_2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurValue.Associativity == InAssociativity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ExpressionParserTypes.h"
                             ,0x256,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreaterOrEqual>::GetTypeId(void)'
              ::__l2::Global;
  local_a0 = &local_res8;
  local_res8 = param_1;
  local_resc = param_2;
  local_resd = param_3;
  TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FOpParameters_&&>_>
            ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FGuid_const_&,FOpParameters_&&> *)&stack0x00000020,
             (bool *)&local_a8);
  return;
}

// DefineBinaryOperator<TextFilterExpressionParser::FLess> @ 141908870

void __thiscall
FExpressionGrammar::DefineBinaryOperator<TextFilterExpressionParser::FLess>
          (FExpressionGrammar *this,int param_1,EAssociativity param_2,bool param_3)

{
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint *puVar7;
  int local_res8;
  EAssociativity local_resc;
  undefined1 local_resd;
  FGuid *local_a8;
  int *local_a0;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  iStack_90 = 0;
  this_00 = &this->BinaryOperators;
  iVar2 = *(int *)&(this->BinaryOperators).field_0x28;
  local_88 = &(this->BinaryOperators).field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)&(this->BinaryOperators).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)local_88;
    }
    uVar3 = *puVar7;
    while (uVar3 == 0) {
      lVar6 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141908920;
      uVar3 = puVar7[lVar6 + 1];
    }
    uStack_8c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar6;
    if (iVar2 < iStack_7c) {
      iStack_7c = iVar2;
    }
  }
LAB_141908920:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98 = this_00;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar2) {
    do {
      if (((*(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&local_68->field_0x0) == param_1) &&
          (*(EAssociativity *)
            ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x14 + *(longlong *)&local_68->field_0x0)
           != param_2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurValue.Associativity == InAssociativity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ExpressionParserTypes.h"
                             ,0x256,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLess>::GetTypeId(void)'
              ::__l2::Global;
  local_a0 = &local_res8;
  local_res8 = param_1;
  local_resc = param_2;
  local_resd = param_3;
  TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FOpParameters_&&>_>
            ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FGuid_const_&,FOpParameters_&&> *)&stack0x00000020,
             (bool *)&local_a8);
  return;
}

// DefineBinaryOperator<TextFilterExpressionParser::FLessOrEqual> @ 141908a20

void __thiscall
FExpressionGrammar::DefineBinaryOperator<TextFilterExpressionParser::FLessOrEqual>
          (FExpressionGrammar *this,int param_1,EAssociativity param_2,bool param_3)

{
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint *puVar7;
  int local_res8;
  EAssociativity local_resc;
  undefined1 local_resd;
  FGuid *local_a8;
  int *local_a0;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  iStack_90 = 0;
  this_00 = &this->BinaryOperators;
  iVar2 = *(int *)&(this->BinaryOperators).field_0x28;
  local_88 = &(this->BinaryOperators).field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)&(this->BinaryOperators).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)local_88;
    }
    uVar3 = *puVar7;
    while (uVar3 == 0) {
      lVar6 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141908ad0;
      uVar3 = puVar7[lVar6 + 1];
    }
    uStack_8c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar6;
    if (iVar2 < iStack_7c) {
      iStack_7c = iVar2;
    }
  }
LAB_141908ad0:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98 = this_00;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar2) {
    do {
      if (((*(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&local_68->field_0x0) == param_1) &&
          (*(EAssociativity *)
            ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x14 + *(longlong *)&local_68->field_0x0)
           != param_2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurValue.Associativity == InAssociativity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ExpressionParserTypes.h"
                             ,0x256,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLessOrEqual>::GetTypeId(void)'
              ::__l2::Global;
  local_a0 = &local_res8;
  local_res8 = param_1;
  local_resc = param_2;
  local_resd = param_3;
  TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FOpParameters_&&>_>
            ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FGuid_const_&,FOpParameters_&&> *)&stack0x00000020,
             (bool *)&local_a8);
  return;
}

// DefineBinaryOperator<TextFilterExpressionParser::FNotEqual> @ 141908bd0

void __thiscall
FExpressionGrammar::DefineBinaryOperator<TextFilterExpressionParser::FNotEqual>
          (FExpressionGrammar *this,int param_1,EAssociativity param_2,bool param_3)

{
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint *puVar7;
  int local_res8;
  EAssociativity local_resc;
  undefined1 local_resd;
  FGuid *local_a8;
  int *local_a0;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  iStack_90 = 0;
  this_00 = &this->BinaryOperators;
  iVar2 = *(int *)&(this->BinaryOperators).field_0x28;
  local_88 = &(this->BinaryOperators).field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)&(this->BinaryOperators).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)local_88;
    }
    uVar3 = *puVar7;
    while (uVar3 == 0) {
      lVar6 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141908c80;
      uVar3 = puVar7[lVar6 + 1];
    }
    uStack_8c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar6;
    if (iVar2 < iStack_7c) {
      iStack_7c = iVar2;
    }
  }
LAB_141908c80:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98 = this_00;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar2) {
    do {
      if (((*(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&local_68->field_0x0) == param_1) &&
          (*(EAssociativity *)
            ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x14 + *(longlong *)&local_68->field_0x0)
           != param_2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurValue.Associativity == InAssociativity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ExpressionParserTypes.h"
                             ,0x256,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNotEqual>::GetTypeId(void)'
              ::__l2::Global;
  local_a0 = &local_res8;
  local_res8 = param_1;
  local_resc = param_2;
  local_resd = param_3;
  TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FOpParameters_&&>_>
            ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FGuid_const_&,FOpParameters_&&> *)&stack0x00000020,
             (bool *)&local_a8);
  return;
}

// DefineBinaryOperator<TextFilterExpressionParser::FOr> @ 141908d80

void __thiscall
FExpressionGrammar::DefineBinaryOperator<TextFilterExpressionParser::FOr>
          (FExpressionGrammar *this,int param_1,EAssociativity param_2,bool param_3)

{
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint *puVar7;
  int local_res8;
  EAssociativity local_resc;
  undefined1 local_resd;
  FGuid *local_a8;
  int *local_a0;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  iStack_90 = 0;
  this_00 = &this->BinaryOperators;
  iVar2 = *(int *)&(this->BinaryOperators).field_0x28;
  local_88 = &(this->BinaryOperators).field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)&(this->BinaryOperators).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)local_88;
    }
    uVar3 = *puVar7;
    while (uVar3 == 0) {
      lVar6 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141908e30;
      uVar3 = puVar7[lVar6 + 1];
    }
    uStack_8c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar6;
    if (iVar2 < iStack_7c) {
      iStack_7c = iVar2;
    }
  }
LAB_141908e30:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98 = this_00;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar2) {
    do {
      if (((*(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&local_68->field_0x0) == param_1) &&
          (*(EAssociativity *)
            ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x14 + *(longlong *)&local_68->field_0x0)
           != param_2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurValue.Associativity == InAssociativity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ExpressionParserTypes.h"
                             ,0x256,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FOr>::GetTypeId(void)'
              ::__l2::Global;
  local_a0 = &local_res8;
  local_res8 = param_1;
  local_resc = param_2;
  local_resd = param_3;
  TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FOpParameters_&&>_>
            ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FGuid_const_&,FOpParameters_&&> *)&stack0x00000020,
             (bool *)&local_a8);
  return;
}

// DefineBinaryOperator<TextFilterExpressionParser::FFunction> @ 141908f30

void __thiscall
FExpressionGrammar::DefineBinaryOperator<TextFilterExpressionParser::FFunction>
          (FExpressionGrammar *this,int param_1,EAssociativity param_2,bool param_3)

{
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint *puVar7;
  int local_res8;
  EAssociativity local_resc;
  undefined1 local_resd;
  FGuid *local_a8;
  int *local_a0;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  iStack_90 = 0;
  this_00 = &this->BinaryOperators;
  iVar2 = *(int *)&(this->BinaryOperators).field_0x28;
  local_88 = &(this->BinaryOperators).field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)&(this->BinaryOperators).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)local_88;
    }
    uVar3 = *puVar7;
    while (uVar3 == 0) {
      lVar6 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141908fe0;
      uVar3 = puVar7[lVar6 + 1];
    }
    uStack_8c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar6;
    if (iVar2 < iStack_7c) {
      iStack_7c = iVar2;
    }
  }
LAB_141908fe0:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98 = this_00;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar2) {
    do {
      if (((*(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                    *(longlong *)&local_68->field_0x0) == param_1) &&
          (*(EAssociativity *)
            ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x14 + *(longlong *)&local_68->field_0x0)
           != param_2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurValue.Associativity == InAssociativity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ExpressionParserTypes.h"
                             ,0x256,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FFunction>::GetTypeId(void)'
              ::__l2::Global;
  local_a0 = &local_res8;
  local_res8 = param_1;
  local_resc = param_2;
  local_resd = param_3;
  TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FOpParameters_&&>_>
            ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FGuid_const_&,FOpParameters_&&> *)&stack0x00000020,
             (bool *)&local_a8);
  return;
}

// operator= @ 14191d630

FExpressionGrammar * __thiscall
FExpressionGrammar::operator=(FExpressionGrammar *this,FExpressionGrammar *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *pTVar3;
  void *pvVar4;
  TMap<FGuid,FOpParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>_>
  *pTVar5;
  
  if (this != param_1) {
    if (*(void **)&this->Groupings != (void *)0x0) {
      FMemory::Free(*(void **)&this->Groupings);
    }
    puVar1 = &(param_1->Groupings).field_0x10;
    *(undefined8 *)&this->Groupings = *(undefined8 *)&param_1->Groupings;
    puVar2 = &(this->Groupings).field_0x10;
    *(undefined8 *)&param_1->Groupings = 0;
    *(undefined4 *)&(this->Groupings).field_0x8 = *(undefined4 *)&(param_1->Groupings).field_0x8;
    *(undefined4 *)&(this->Groupings).field_0xc = *(undefined4 *)&(param_1->Groupings).field_0xc;
    *(undefined8 *)&(param_1->Groupings).field_0x8 = 0;
    if (puVar2 != puVar1) {
      if (*(longlong *)&(param_1->Groupings).field_0x20 == 0) {
        memmove(puVar2,puVar1,0x10);
      }
      pvVar4 = *(void **)&(this->Groupings).field_0x20;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      *(undefined8 *)&(this->Groupings).field_0x20 = *(undefined8 *)&(param_1->Groupings).field_0x20
      ;
      *(undefined8 *)&(param_1->Groupings).field_0x20 = 0;
      *(undefined4 *)&(this->Groupings).field_0x28 = *(undefined4 *)&(param_1->Groupings).field_0x28
      ;
      *(undefined4 *)&(this->Groupings).field_0x2c = *(undefined4 *)&(param_1->Groupings).field_0x2c
      ;
      *(undefined8 *)&(param_1->Groupings).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Groupings).field_0x30 = *(undefined4 *)&(param_1->Groupings).field_0x30;
    *(undefined4 *)&(this->Groupings).field_0x34 = *(undefined4 *)&(param_1->Groupings).field_0x34;
    *(undefined4 *)&(param_1->Groupings).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Groupings).field_0x34 = 0;
    if (*(longlong *)&(param_1->Groupings).field_0x40 == 0) {
      *(undefined4 *)&(this->Groupings).field_0x38 = *(undefined4 *)&(param_1->Groupings).field_0x38
      ;
    }
    pvVar4 = *(void **)&(this->Groupings).field_0x40;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    *(undefined8 *)&(this->Groupings).field_0x40 = *(undefined8 *)&(param_1->Groupings).field_0x40;
    *(undefined8 *)&(param_1->Groupings).field_0x40 = 0;
    *(undefined4 *)&(this->Groupings).field_0x48 = *(undefined4 *)&(param_1->Groupings).field_0x48;
    *(undefined4 *)&(param_1->Groupings).field_0x48 = 0;
  }
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=
            (&this->PreUnaryOperators,&param_1->PreUnaryOperators);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=
            (&this->PostUnaryOperators,&param_1->PostUnaryOperators);
  pTVar5 = &param_1->BinaryOperators;
  pTVar3 = &this->BinaryOperators;
  if (pTVar3 != pTVar5) {
    if (*(void **)pTVar3 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar3);
    }
    puVar1 = &(param_1->BinaryOperators).field_0x10;
    *(undefined8 *)pTVar3 = *(undefined8 *)pTVar5;
    puVar2 = &(this->BinaryOperators).field_0x10;
    *(undefined8 *)pTVar5 = 0;
    *(undefined4 *)&(this->BinaryOperators).field_0x8 =
         *(undefined4 *)&(param_1->BinaryOperators).field_0x8;
    *(undefined4 *)&(this->BinaryOperators).field_0xc =
         *(undefined4 *)&(param_1->BinaryOperators).field_0xc;
    *(undefined8 *)&(param_1->BinaryOperators).field_0x8 = 0;
    if (puVar2 != puVar1) {
      if (*(longlong *)&(param_1->BinaryOperators).field_0x20 == 0) {
        memmove(puVar2,puVar1,0x10);
      }
      pvVar4 = *(void **)&(this->BinaryOperators).field_0x20;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      *(undefined8 *)&(this->BinaryOperators).field_0x20 =
           *(undefined8 *)&(param_1->BinaryOperators).field_0x20;
      *(undefined8 *)&(param_1->BinaryOperators).field_0x20 = 0;
      *(undefined4 *)&(this->BinaryOperators).field_0x28 =
           *(undefined4 *)&(param_1->BinaryOperators).field_0x28;
      *(undefined4 *)&(this->BinaryOperators).field_0x2c =
           *(undefined4 *)&(param_1->BinaryOperators).field_0x2c;
      *(undefined8 *)&(param_1->BinaryOperators).field_0x28 = 0;
    }
    *(undefined4 *)&(this->BinaryOperators).field_0x30 =
         *(undefined4 *)&(param_1->BinaryOperators).field_0x30;
    *(undefined4 *)&(this->BinaryOperators).field_0x34 =
         *(undefined4 *)&(param_1->BinaryOperators).field_0x34;
    *(undefined4 *)&(param_1->BinaryOperators).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->BinaryOperators).field_0x34 = 0;
    if (*(longlong *)&(param_1->BinaryOperators).field_0x40 == 0) {
      *(undefined4 *)&(this->BinaryOperators).field_0x38 =
           *(undefined4 *)&(param_1->BinaryOperators).field_0x38;
    }
    pvVar4 = *(void **)&(this->BinaryOperators).field_0x40;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    *(undefined8 *)&(this->BinaryOperators).field_0x40 =
         *(undefined8 *)&(param_1->BinaryOperators).field_0x40;
    *(undefined8 *)&(param_1->BinaryOperators).field_0x40 = 0;
    *(undefined4 *)&(this->BinaryOperators).field_0x48 =
         *(undefined4 *)&(param_1->BinaryOperators).field_0x48;
    *(undefined4 *)&(param_1->BinaryOperators).field_0x48 = 0;
  }
  return this;
}

