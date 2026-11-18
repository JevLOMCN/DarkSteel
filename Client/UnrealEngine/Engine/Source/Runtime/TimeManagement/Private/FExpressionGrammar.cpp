// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 2

// DefineBinaryOperator<ExpressionParser::FDropcodeDelimiter> @ 14603c7f0

void __thiscall
FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FDropcodeDelimiter>
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
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14603c8a0;
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
LAB_14603c8a0:
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
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FDropcodeDelimiter>::GetTypeId(void)'
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

// DefineBinaryOperator<ExpressionParser::FTimecodeDelimiter> @ 14603c9a0

void __thiscall
FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FTimecodeDelimiter>
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
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14603ca50;
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
LAB_14603ca50:
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
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FTimecodeDelimiter>::GetTypeId(void)'
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

