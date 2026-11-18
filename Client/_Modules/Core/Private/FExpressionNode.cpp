// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 97

// FExpressionNode<TextFormatTokens::FArgumentModifierTokenSpecifier> @ 141722330

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TextFormatTokens::FArgumentModifierTokenSpecifier>
          (FExpressionNode *this,FArgumentModifierTokenSpecifier *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  TReferenceControllerBase<1> *pTVar3;
  ITextFormatArgumentModifier *pIVar4;
  atomic<int> *paVar5;
  
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
                 ::__l2::Global;
  pwVar2 = param_1->ModifierPatternStartPos;
  pTVar3 = (param_1->TextFormatArgumentModifier).SharedReferenceCount.ReferenceController;
  iVar1 = param_1->ModifierPatternLen;
  pIVar4 = (param_1->TextFormatArgumentModifier).Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar3->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  *(wchar_t **)(this->InlineBytes + 8) = pwVar2;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFArgumentModifierTokenSpecifier_TextFormatTokens___Impl__6B_;
  *(int *)(this->InlineBytes + 0x10) = iVar1;
  *(ITextFormatArgumentModifier **)(this->InlineBytes + 0x18) = pIVar4;
  *(TReferenceControllerBase<1> **)(this->InlineBytes + 0x20) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatArgumentModifier).SharedReferenceCount.ReferenceController);
  return this;
}

// FExpressionNode<TextFormatTokens::FArgumentTokenSpecifier> @ 1417223c0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TextFormatTokens::FArgumentTokenSpecifier>
          (FExpressionNode *this,FArgumentTokenSpecifier *param_1)

{
  undefined8 uVar1;
  
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFArgumentTokenSpecifier_TextFormatTokens___Impl__6B_;
  uVar1 = *(undefined8 *)&param_1->ArgumentNameLen;
  *(wchar_t **)(this->InlineBytes + 8) = param_1->ArgumentNameStartPos;
  *(undefined8 *)(this->InlineBytes + 0x10) = uVar1;
  return this;
}

// FExpressionNode<TextFormatTokens::FEscapedCharacter> @ 1417223f0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TextFormatTokens::FEscapedCharacter>
          (FExpressionNode *this,FEscapedCharacter param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFEscapedCharacter_TextFormatTokens___Impl__6B_;
  *(wchar_t *)(this->InlineBytes + 8) = param_1.Character;
  return this;
}

// FExpressionNode<TextFormatTokens::FStringLiteral> @ 141722420

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TextFormatTokens::FStringLiteral>
          (FExpressionNode *this,FStringLiteral *param_1)

{
  undefined8 uVar1;
  
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFStringLiteral_TextFormatTokens___Impl__6B_;
  uVar1 = *(undefined8 *)&param_1->StringLen;
  *(wchar_t **)(this->InlineBytes + 8) = param_1->StringStartPos;
  *(undefined8 *)(this->InlineBytes + 0x10) = uVar1;
  return this;
}

// Cast<TextFormatTokens::FArgumentModifierTokenSpecifier> @ 141727eb0

FArgumentModifierTokenSpecifier * __thiscall
FExpressionNode::Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(FExpressionNode *this)

{
  FArgumentModifierTokenSpecifier *pFVar1;
  
  pFVar1 = (FArgumentModifierTokenSpecifier *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentModifierTokenSpecifier>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FArgumentModifierTokenSpecifier *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<TextFormatTokens::FArgumentTokenSpecifier> @ 141727ef0

FArgumentTokenSpecifier * __thiscall
FExpressionNode::Cast<TextFormatTokens::FArgumentTokenSpecifier>(FExpressionNode *this)

{
  FArgumentTokenSpecifier *pFVar1;
  
  pFVar1 = (FArgumentTokenSpecifier *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FArgumentTokenSpecifier *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<TextFormatTokens::FEscapedCharacter> @ 141727f30

FEscapedCharacter * __thiscall
FExpressionNode::Cast<TextFormatTokens::FEscapedCharacter>(FExpressionNode *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar1 = this->InlineBytes + 8;
  }
  return (FEscapedCharacter *)puVar1;
}

// Cast<TextFormatTokens::FStringLiteral> @ 141727f70

FStringLiteral * __thiscall
FExpressionNode::Cast<TextFormatTokens::FStringLiteral>(FExpressionNode *this)

{
  FStringLiteral *pFVar1;
  
  pFVar1 = (FStringLiteral *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FStringLiteral *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// FExpressionNode<double> @ 141786d80

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<double>(FExpressionNode *this,double param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_N_Impl__6B_;
  *(double *)(this->InlineBytes + 8) = param_1;
  return this;
}

// FExpressionNode<FNumericUnit<double>_> @ 141786db0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<FNumericUnit<double>_>
          (FExpressionNode *this,FNumericUnit<double> *param_1)

{
  double dVar1;
  EUnit EVar2;
  
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
                 ::__l2::Global;
  EVar2 = param_1->Units;
  dVar1 = param_1->Value;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_U__FNumericUnit_N___Impl__6B_;
  this->InlineBytes[0x10] = EVar2;
  *(double *)(this->InlineBytes + 8) = dVar1;
  return this;
}

// FExpressionNode<ExpressionParser::FForwardSlash> @ 141786de0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FForwardSlash>
          (FExpressionNode *this,FForwardSlash param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlash>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFForwardSlash_ExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<ExpressionParser::FForwardSlashEquals> @ 141786e00

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FForwardSlashEquals>
          (FExpressionNode *this,FForwardSlashEquals param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlashEquals>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFForwardSlashEquals_ExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<ExpressionParser::FMinus> @ 141786e20

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FMinus>(FExpressionNode *this,FMinus param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_UFMinus_ExpressionParser___Impl__6B_
  ;
  return this;
}

// FExpressionNode<ExpressionParser::FMinusEquals> @ 141786e40

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FMinusEquals>
          (FExpressionNode *this,FMinusEquals param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinusEquals>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFMinusEquals_ExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<ExpressionParser::FPercent> @ 141786e60

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FPercent>(FExpressionNode *this,FPercent param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPercent>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFPercent_ExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<ExpressionParser::FPlus> @ 141786e80

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FPlus>(FExpressionNode *this,FPlus param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_UFPlus_ExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<ExpressionParser::FPlusEquals> @ 141786ea0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FPlusEquals>
          (FExpressionNode *this,FPlusEquals param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlusEquals>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFPlusEquals_ExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<ExpressionParser::FPower> @ 141786ec0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FPower>(FExpressionNode *this,FPower param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPower>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_UFPower_ExpressionParser___Impl__6B_
  ;
  return this;
}

// FExpressionNode<ExpressionParser::FSquareRoot> @ 141786ee0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FSquareRoot>
          (FExpressionNode *this,FSquareRoot param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSquareRoot>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFSquareRoot_ExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<ExpressionParser::FStar> @ 141786f00

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FStar>(FExpressionNode *this,FStar param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_UFStar_ExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<ExpressionParser::FStarEquals> @ 141786f20

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FStarEquals>
          (FExpressionNode *this,FStarEquals param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStarEquals>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFStarEquals_ExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<ExpressionParser::FSubExpressionEnd> @ 141786f40

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FSubExpressionEnd>
          (FExpressionNode *this,FSubExpressionEnd param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFSubExpressionEnd_ExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<ExpressionParser::FSubExpressionStart> @ 141786f60

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FSubExpressionStart>
          (FExpressionNode *this,FSubExpressionStart param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSubExpressionStart>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFSubExpressionStart_ExpressionParser___Impl__6B_;
  return this;
}

// Cast<double> @ 141788aa0

double * __thiscall FExpressionNode::Cast<double>(FExpressionNode *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar1 = this->InlineBytes + 8;
  }
  return (double *)puVar1;
}

// Cast<FNumericUnit<double>_> @ 141788ae0

FNumericUnit<double> * __thiscall
FExpressionNode::Cast<FNumericUnit<double>_>(FExpressionNode *this)

{
  FNumericUnit<double> *pFVar1;
  
  pFVar1 = (FNumericUnit<double> *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FNumericUnit<double> *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<ExpressionParser::FForwardSlashEquals> @ 141788b20

FForwardSlashEquals * __thiscall
FExpressionNode::Cast<ExpressionParser::FForwardSlashEquals>(FExpressionNode *this)

{
  FForwardSlashEquals *pFVar1;
  
  pFVar1 = (FForwardSlashEquals *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlashEquals>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlashEquals>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlashEquals>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlashEquals>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FForwardSlashEquals *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<ExpressionParser::FMinusEquals> @ 141788b60

FMinusEquals * __thiscall
FExpressionNode::Cast<ExpressionParser::FMinusEquals>(FExpressionNode *this)

{
  FMinusEquals *pFVar1;
  
  pFVar1 = (FMinusEquals *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinusEquals>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinusEquals>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinusEquals>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinusEquals>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FMinusEquals *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<ExpressionParser::FPlusEquals> @ 141788ba0

FPlusEquals * __thiscall FExpressionNode::Cast<ExpressionParser::FPlusEquals>(FExpressionNode *this)

{
  FPlusEquals *pFVar1;
  
  pFVar1 = (FPlusEquals *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlusEquals>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlusEquals>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlusEquals>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlusEquals>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FPlusEquals *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<ExpressionParser::FStarEquals> @ 141788be0

FStarEquals * __thiscall FExpressionNode::Cast<ExpressionParser::FStarEquals>(FExpressionNode *this)

{
  FStarEquals *pFVar1;
  
  pFVar1 = (FStarEquals *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStarEquals>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStarEquals>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStarEquals>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStarEquals>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FStarEquals *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// FExpressionNode<Tests::FAnd> @ 1418a9760

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<Tests::FAnd>(FExpressionNode *this,FAnd param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FAnd>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_UFAnd_Tests___Impl__6B_;
  return this;
}

// FExpressionNode<Tests::FDigitsTokenTag> @ 1418a9780

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<Tests::FDigitsTokenTag>
          (FExpressionNode *this,FDigitsTokenTag param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FDigitsTokenTag>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_UFDigitsTokenTag_Tests___Impl__6B_;
  return this;
}

// FExpressionNode<FFrameRate> @ 1418a97a0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<FFrameRate>(FExpressionNode *this,FFrameRate param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_UFFrameRate___Impl__6B_;
  *(FFrameRate *)(this->InlineBytes + 8) = param_1;
  return this;
}

// FExpressionNode<Tests::FHugeType> @ 1418a97d0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<Tests::FHugeType>(FExpressionNode *this,FHugeType *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                 ::__l2::Global;
  lVar2 = param_1->_padding_;
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)&param_1->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 0;
  *(undefined ***)this->InlineBytes = &___7__FHeapDataStorage_UFHugeType_Tests___Impl__6B_;
  puVar3 = ::operator_new(0x410);
  if (puVar3 == (undefined8 *)0x0) {
    this->InlineBytes[8] = '\0';
    this->InlineBytes[9] = '\0';
    this->InlineBytes[10] = '\0';
    this->InlineBytes[0xb] = '\0';
    this->InlineBytes[0xc] = '\0';
    this->InlineBytes[0xd] = '\0';
    this->InlineBytes[0xe] = '\0';
    this->InlineBytes[0xf] = '\0';
    if (cVar1 != '\0') {
      *Tests::FMoveableType::LeakCount = *Tests::FMoveableType::LeakCount + -1;
    }
  }
  else {
    *(int *)(puVar3 + 1) = (int)lVar2;
    *puVar3 = &___7FHugeType_Tests__6B_;
    *(char *)((longlong)puVar3 + 0xc) = cVar1;
    *(undefined8 **)(this->InlineBytes + 8) = puVar3;
  }
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = (longlong)&___7FMoveableType_Tests__6B_;
  if (cVar1 != '\0') {
    *Tests::FMoveableType::LeakCount = *Tests::FMoveableType::LeakCount + -1;
  }
  return this;
}

// FExpressionNode<Tests::FLowerAlphaTokenTag> @ 1418a9890

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<Tests::FLowerAlphaTokenTag>
          (FExpressionNode *this,FLowerAlphaTokenTag param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FLowerAlphaTokenTag>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFLowerAlphaTokenTag_Tests___Impl__6B_;
  return this;
}

// FExpressionNode<Tests::FMoveableType> @ 1418a98b0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<Tests::FMoveableType>(FExpressionNode *this,FMoveableType *param_1)

{
  bool bVar1;
  int iVar2;
  
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
                 ::__l2::Global;
  iVar2 = param_1->Id;
  bVar1 = param_1->bOwnsLeak;
  param_1->bOwnsLeak = false;
  param_1->Id = -1;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_UFMoveableType_Tests___Impl__6B_;
  *(undefined ***)(this->InlineBytes + 8) = &___7FMoveableType_Tests__6B_;
  *(int *)(this->InlineBytes + 0x10) = iVar2;
  this->InlineBytes[0x14] = bVar1;
  param_1->_padding_ = (longlong)&___7FMoveableType_Tests__6B_;
  if (param_1->bOwnsLeak != false) {
    *Tests::FMoveableType::LeakCount = *Tests::FMoveableType::LeakCount + -1;
  }
  return this;
}

// FExpressionNode<Tests::FOperator> @ 1418a9910

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<Tests::FOperator>(FExpressionNode *this,FOperator param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_UFOperator_Tests___Impl__6B_;
  return this;
}

// FExpressionNode<Tests::FOr> @ 1418a9930

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<Tests::FOr>(FExpressionNode *this,FOr param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOr>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_UFOr_Tests___Impl__6B_;
  return this;
}

// FExpressionNode<Tests::FStringTokenTag> @ 1418a9950

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<Tests::FStringTokenTag>
          (FExpressionNode *this,FStringTokenTag param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FStringTokenTag>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_UFStringTokenTag_Tests___Impl__6B_;
  return this;
}

// FExpressionNode<bool> @ 1418a9a70

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<bool>(FExpressionNode *this,bool param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage__N_Impl__6B_;
  this->InlineBytes[8] = param_1;
  return this;
}

// Cast<FFrameRate> @ 1418aab50

FFrameRate * __thiscall FExpressionNode::Cast<FFrameRate>(FExpressionNode *this)

{
  FFrameRate *pFVar1;
  
  pFVar1 = (FFrameRate *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FFrameRate *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<Tests::FHugeType> @ 1418aab90

FHugeType * __thiscall FExpressionNode::Cast<Tests::FHugeType>(FExpressionNode *this)

{
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
      ::__l2::Global.A) {
    return *(FHugeType **)(this->InlineBytes + 8);
  }
  return (FHugeType *)0x0;
}

// Cast<Tests::FMoveableType> @ 1418aabd0

FMoveableType * __thiscall FExpressionNode::Cast<Tests::FMoveableType>(FExpressionNode *this)

{
  FMoveableType *pFVar1;
  
  pFVar1 = (FMoveableType *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FMoveableType *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<bool> @ 1418aac10

bool * __thiscall FExpressionNode::Cast<bool>(FExpressionNode *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar1 = this->InlineBytes + 8;
  }
  return (bool *)puVar1;
}

// FExpressionNode @ 1418bb290

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode(FExpressionNode *this,FExpressionNode *param_1)

{
  (this->TypeId).A = 0;
  (this->TypeId).B = 0;
  (this->TypeId).C = 0;
  (this->TypeId).D = 0;
  operator=(this,param_1);
  return this;
}

// ~FExpressionNode @ 1418beb20

void __thiscall FExpressionNode::~FExpressionNode(FExpressionNode *this)

{
  uchar *puVar1;
  
  puVar1 = this->InlineBytes;
  if ((((this->TypeId).D == 0 && (this->TypeId).C == 0) && (this->TypeId).B == 0) &&
      (this->TypeId).A == 0) {
    puVar1 = (uchar *)0x0;
  }
  if (puVar1 != (uchar *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418beb42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)puVar1)(puVar1,0);
    return;
  }
  return;
}

// operator= @ 1418bf4c0

FExpressionNode * __thiscall
FExpressionNode::operator=(FExpressionNode *this,FExpressionNode *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uchar *puVar9;
  
  uVar1 = (this->TypeId).A;
  uVar2 = (this->TypeId).B;
  uVar3 = (this->TypeId).C;
  uVar4 = (this->TypeId).D;
  uVar5 = (param_1->TypeId).A;
  uVar6 = (param_1->TypeId).B;
  uVar7 = (param_1->TypeId).C;
  uVar8 = (param_1->TypeId).D;
  if ((((uVar4 == uVar8 && uVar3 == uVar7) && uVar2 == uVar6) && uVar1 == uVar5) &&
     ((uVar4 != 0 || uVar3 != 0) || (uVar2 != 0 || uVar1 != 0))) {
    puVar9 = param_1->InlineBytes;
    if (((uVar8 == 0 && uVar7 == 0) && uVar6 == 0) && uVar5 == 0) {
      puVar9 = (uchar *)0x0;
    }
    (**(code **)(*(longlong *)puVar9 + 0x10))(puVar9,this->InlineBytes);
  }
  else {
    puVar9 = this->InlineBytes;
    if ((uVar4 == 0 && uVar3 == 0) && (uVar2 == 0 && uVar1 == 0)) {
      puVar9 = (uchar *)0x0;
    }
    if (puVar9 != (uchar *)0x0) {
      (*(code *)**(undefined8 **)puVar9)(puVar9,0);
    }
    uVar1 = (param_1->TypeId).B;
    uVar2 = (param_1->TypeId).C;
    uVar3 = (param_1->TypeId).D;
    (this->TypeId).A = (param_1->TypeId).A;
    (this->TypeId).B = uVar1;
    (this->TypeId).C = uVar2;
    (this->TypeId).D = uVar3;
    puVar9 = param_1->InlineBytes;
    if ((((param_1->TypeId).D == 0 && (param_1->TypeId).C == 0) && (param_1->TypeId).B == 0) &&
        (param_1->TypeId).A == 0) {
      puVar9 = (uchar *)0x0;
    }
    if (puVar9 != (uchar *)0x0) {
      (**(code **)(*(longlong *)puVar9 + 8))(puVar9,this->InlineBytes);
      (param_1->TypeId).A = 0;
      (param_1->TypeId).B = 0;
      (param_1->TypeId).C = 0;
      (param_1->TypeId).D = 0;
      (*(code *)**(undefined8 **)puVar9)(puVar9,0);
    }
  }
  return this;
}

// Copy @ 1418d2bf0

FExpressionNode * __thiscall
FExpressionNode::Copy(FExpressionNode *this,FExpressionNode *__return_storage_ptr__)

{
  uchar *puVar1;
  
  puVar1 = this->InlineBytes;
  if ((((this->TypeId).D == 0 && (this->TypeId).C == 0) && (this->TypeId).B == 0) &&
      (this->TypeId).A == 0) {
    puVar1 = (uchar *)0x0;
  }
  if (puVar1 != (uchar *)0x0) {
    (**(code **)(*(longlong *)puVar1 + 0x18))();
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->InlineBytes[0] = '\0';
  __return_storage_ptr__->InlineBytes[1] = '\0';
  __return_storage_ptr__->InlineBytes[2] = '\0';
  __return_storage_ptr__->InlineBytes[3] = '\0';
  __return_storage_ptr__->InlineBytes[4] = '\0';
  __return_storage_ptr__->InlineBytes[5] = '\0';
  __return_storage_ptr__->InlineBytes[6] = '\0';
  __return_storage_ptr__->InlineBytes[7] = '\0';
  __return_storage_ptr__->InlineBytes[8] = '\0';
  __return_storage_ptr__->InlineBytes[9] = '\0';
  __return_storage_ptr__->InlineBytes[10] = '\0';
  __return_storage_ptr__->InlineBytes[0xb] = '\0';
  __return_storage_ptr__->InlineBytes[0xc] = '\0';
  __return_storage_ptr__->InlineBytes[0xd] = '\0';
  __return_storage_ptr__->InlineBytes[0xe] = '\0';
  __return_storage_ptr__->InlineBytes[0xf] = '\0';
  __return_storage_ptr__->InlineBytes[0x10] = '\0';
  __return_storage_ptr__->InlineBytes[0x11] = '\0';
  __return_storage_ptr__->InlineBytes[0x12] = '\0';
  __return_storage_ptr__->InlineBytes[0x13] = '\0';
  __return_storage_ptr__->InlineBytes[0x14] = '\0';
  __return_storage_ptr__->InlineBytes[0x15] = '\0';
  __return_storage_ptr__->InlineBytes[0x16] = '\0';
  __return_storage_ptr__->InlineBytes[0x17] = '\0';
  __return_storage_ptr__->InlineBytes[0x18] = '\0';
  __return_storage_ptr__->InlineBytes[0x19] = '\0';
  __return_storage_ptr__->InlineBytes[0x1a] = '\0';
  __return_storage_ptr__->InlineBytes[0x1b] = '\0';
  __return_storage_ptr__->InlineBytes[0x1c] = '\0';
  __return_storage_ptr__->InlineBytes[0x1d] = '\0';
  __return_storage_ptr__->InlineBytes[0x1e] = '\0';
  __return_storage_ptr__->InlineBytes[0x1f] = '\0';
  __return_storage_ptr__->InlineBytes[0x20] = '\0';
  __return_storage_ptr__->InlineBytes[0x21] = '\0';
  __return_storage_ptr__->InlineBytes[0x22] = '\0';
  __return_storage_ptr__->InlineBytes[0x23] = '\0';
  __return_storage_ptr__->InlineBytes[0x24] = '\0';
  __return_storage_ptr__->InlineBytes[0x25] = '\0';
  __return_storage_ptr__->InlineBytes[0x26] = '\0';
  __return_storage_ptr__->InlineBytes[0x27] = '\0';
  __return_storage_ptr__->InlineBytes[0x28] = '\0';
  __return_storage_ptr__->InlineBytes[0x29] = '\0';
  __return_storage_ptr__->InlineBytes[0x2a] = '\0';
  __return_storage_ptr__->InlineBytes[0x2b] = '\0';
  __return_storage_ptr__->InlineBytes[0x2c] = '\0';
  __return_storage_ptr__->InlineBytes[0x2d] = '\0';
  __return_storage_ptr__->InlineBytes[0x2e] = '\0';
  __return_storage_ptr__->InlineBytes[0x2f] = '\0';
  (__return_storage_ptr__->TypeId).A = 0;
  (__return_storage_ptr__->TypeId).B = 0;
  (__return_storage_ptr__->TypeId).C = 0;
  (__return_storage_ptr__->TypeId).D = 0;
  return __return_storage_ptr__;
}

// GetData @ 1418de150

IExpressionNodeStorage * __thiscall FExpressionNode::GetData(FExpressionNode *this)

{
  IExpressionNodeStorage *pIVar1;
  
  pIVar1 = (IExpressionNodeStorage *)this->InlineBytes;
  if ((((this->TypeId).D == 0 && (this->TypeId).C == 0) && (this->TypeId).B == 0) &&
      (this->TypeId).A == 0) {
    pIVar1 = (IExpressionNodeStorage *)0x0;
  }
  return pIVar1;
}

// GetData @ 1418de170

IExpressionNodeStorage * __thiscall FExpressionNode::GetData(FExpressionNode *this)

{
  IExpressionNodeStorage *pIVar1;
  
  pIVar1 = (IExpressionNodeStorage *)this->InlineBytes;
  if ((((this->TypeId).D == 0 && (this->TypeId).C == 0) && (this->TypeId).B == 0) &&
      (this->TypeId).A == 0) {
    pIVar1 = (IExpressionNodeStorage *)0x0;
  }
  return pIVar1;
}

// GetTypeId @ 1418e1b50

FGuid * __thiscall FExpressionNode::GetTypeId(FExpressionNode *this)

{
  return &this->TypeId;
}

// FExpressionNode<TEscapedCharacter<char>_> @ 141902d90

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TEscapedCharacter<char>_>
          (FExpressionNode *this,TEscapedCharacter<char> param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<char>_>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_U__TEscapedCharacter_D___Impl__6B_;
  this->InlineBytes[8] = param_1.Character;
  return this;
}

// FExpressionNode<TEscapedCharacter<char8_t>_> @ 141902dc0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TEscapedCharacter<char8_t>_>
          (FExpressionNode *this,TEscapedCharacter<char8_t> param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<char8_t>_>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_U__TEscapedCharacter__Q___Impl__6B_;
  this->InlineBytes[8] = param_1.Character;
  return this;
}

// FExpressionNode<TEscapedCharacter<wchar_t>_> @ 141902df0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TEscapedCharacter<wchar_t>_>
          (FExpressionNode *this,TEscapedCharacter<wchar_t> param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<wchar_t>_>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_U__TEscapedCharacter__W___Impl__6B_;
  *(wchar_t *)(this->InlineBytes + 8) = param_1.Character;
  return this;
}

// FExpressionNode<TIndexSpecifier<char>_> @ 141902e20

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TIndexSpecifier<char>_>
          (FExpressionNode *this,TIndexSpecifier<char> *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  pcVar1 = (param_1->EntireToken).TokenEnd;
  uVar2 = *(undefined8 *)&(param_1->EntireToken).LineNumber;
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<char>_>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_U__TIndexSpecifier_D___Impl__6B_;
  pcVar3 = (param_1->EntireToken).TokenStart;
  *(undefined8 *)(this->InlineBytes + 8) = *(undefined8 *)param_1;
  *(char **)(this->InlineBytes + 0x10) = pcVar3;
  *(char **)(this->InlineBytes + 0x18) = pcVar1;
  *(undefined8 *)(this->InlineBytes + 0x20) = uVar2;
  return this;
}

// FExpressionNode<TIndexSpecifier<char8_t>_> @ 141902e50

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TIndexSpecifier<char8_t>_>
          (FExpressionNode *this,TIndexSpecifier<char8_t> *param_1)

{
  uchar *puVar1;
  undefined8 uVar2;
  uchar *puVar3;
  
  puVar1 = (param_1->EntireToken).TokenEnd;
  uVar2 = *(undefined8 *)&(param_1->EntireToken).LineNumber;
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<char8_t>_>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_U__TIndexSpecifier__Q___Impl__6B_;
  puVar3 = (param_1->EntireToken).TokenStart;
  *(undefined8 *)(this->InlineBytes + 8) = *(undefined8 *)param_1;
  *(uchar **)(this->InlineBytes + 0x10) = puVar3;
  *(uchar **)(this->InlineBytes + 0x18) = puVar1;
  *(undefined8 *)(this->InlineBytes + 0x20) = uVar2;
  return this;
}

// FExpressionNode<TIndexSpecifier<wchar_t>_> @ 141902e80

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TIndexSpecifier<wchar_t>_>
          (FExpressionNode *this,TIndexSpecifier<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  
  pwVar1 = (param_1->EntireToken).TokenEnd;
  uVar2 = *(undefined8 *)&(param_1->EntireToken).LineNumber;
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<wchar_t>_>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_U__TIndexSpecifier__W___Impl__6B_;
  pwVar3 = (param_1->EntireToken).TokenStart;
  *(undefined8 *)(this->InlineBytes + 8) = *(undefined8 *)param_1;
  *(wchar_t **)(this->InlineBytes + 0x10) = pwVar3;
  *(wchar_t **)(this->InlineBytes + 0x18) = pwVar1;
  *(undefined8 *)(this->InlineBytes + 0x20) = uVar2;
  return this;
}

// FExpressionNode<TStringLiteral<char>_> @ 141902eb0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TStringLiteral<char>_>
          (FExpressionNode *this,TStringLiteral<char> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  uVar1 = *(undefined8 *)&(param_1->String).LineNumber;
  uVar2 = *(undefined8 *)&param_1->Len;
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<char>_>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_U__TStringLiteral_D___Impl__6B_;
  pcVar3 = (param_1->String).TokenEnd;
  *(char **)(this->InlineBytes + 8) = (param_1->String).TokenStart;
  *(char **)(this->InlineBytes + 0x10) = pcVar3;
  *(undefined8 *)(this->InlineBytes + 0x18) = uVar1;
  *(undefined8 *)(this->InlineBytes + 0x20) = uVar2;
  return this;
}

// FExpressionNode<TStringLiteral<char8_t>_> @ 141902ee0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TStringLiteral<char8_t>_>
          (FExpressionNode *this,TStringLiteral<char8_t> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uchar *puVar3;
  
  uVar1 = *(undefined8 *)&(param_1->String).LineNumber;
  uVar2 = *(undefined8 *)&param_1->Len;
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<char8_t>_>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_U__TStringLiteral__Q___Impl__6B_;
  puVar3 = (param_1->String).TokenEnd;
  *(uchar **)(this->InlineBytes + 8) = (param_1->String).TokenStart;
  *(uchar **)(this->InlineBytes + 0x10) = puVar3;
  *(undefined8 *)(this->InlineBytes + 0x18) = uVar1;
  *(undefined8 *)(this->InlineBytes + 0x20) = uVar2;
  return this;
}

// FExpressionNode<TStringLiteral<wchar_t>_> @ 141902f10

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TStringLiteral<wchar_t>_>
          (FExpressionNode *this,TStringLiteral<wchar_t> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  
  uVar1 = *(undefined8 *)&(param_1->String).LineNumber;
  uVar2 = *(undefined8 *)&param_1->Len;
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<wchar_t>_>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_U__TStringLiteral__W___Impl__6B_;
  pwVar3 = (param_1->String).TokenEnd;
  *(wchar_t **)(this->InlineBytes + 8) = (param_1->String).TokenStart;
  *(wchar_t **)(this->InlineBytes + 0x10) = pwVar3;
  *(undefined8 *)(this->InlineBytes + 0x18) = uVar1;
  *(undefined8 *)(this->InlineBytes + 0x20) = uVar2;
  return this;
}

// FExpressionNode<TTokenFormatSpecifier<char>_> @ 141902f40

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TTokenFormatSpecifier<char>_>
          (FExpressionNode *this,TTokenFormatSpecifier<char> *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<char>_>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FHeapDataStorage_U__TTokenFormatSpecifier_D___Impl__6B_
  ;
  puVar5 = ::operator_new(0x38);
  if (puVar5 != (undefined8 *)0x0) {
    pcVar2 = (param_1->Identifier).TokenEnd;
    uVar1 = *(undefined8 *)&(param_1->Identifier).LineNumber;
    pcVar3 = (param_1->EntireToken).TokenStart;
    *puVar5 = (param_1->Identifier).TokenStart;
    puVar5[1] = pcVar2;
    pcVar2 = (param_1->EntireToken).TokenEnd;
    uVar4 = *(undefined8 *)&(param_1->EntireToken).LineNumber;
    puVar5[2] = uVar1;
    puVar5[3] = pcVar3;
    uVar1 = *(undefined8 *)&param_1->Len;
    puVar5[4] = pcVar2;
    puVar5[5] = uVar4;
    puVar5[6] = uVar1;
    *(undefined8 **)(this->InlineBytes + 8) = puVar5;
    return this;
  }
  this->InlineBytes[8] = '\0';
  this->InlineBytes[9] = '\0';
  this->InlineBytes[10] = '\0';
  this->InlineBytes[0xb] = '\0';
  this->InlineBytes[0xc] = '\0';
  this->InlineBytes[0xd] = '\0';
  this->InlineBytes[0xe] = '\0';
  this->InlineBytes[0xf] = '\0';
  return this;
}

// FExpressionNode<TTokenFormatSpecifier<char8_t>_> @ 141902fd0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TTokenFormatSpecifier<char8_t>_>
          (FExpressionNode *this,TTokenFormatSpecifier<char8_t> *param_1)

{
  undefined8 uVar1;
  uchar *puVar2;
  uchar *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<char8_t>_>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FHeapDataStorage_U__TTokenFormatSpecifier__Q___Impl__6B_;
  puVar5 = ::operator_new(0x38);
  if (puVar5 != (undefined8 *)0x0) {
    puVar2 = (param_1->Identifier).TokenEnd;
    uVar1 = *(undefined8 *)&(param_1->Identifier).LineNumber;
    puVar3 = (param_1->EntireToken).TokenStart;
    *puVar5 = (param_1->Identifier).TokenStart;
    puVar5[1] = puVar2;
    puVar2 = (param_1->EntireToken).TokenEnd;
    uVar4 = *(undefined8 *)&(param_1->EntireToken).LineNumber;
    puVar5[2] = uVar1;
    puVar5[3] = puVar3;
    uVar1 = *(undefined8 *)&param_1->Len;
    puVar5[4] = puVar2;
    puVar5[5] = uVar4;
    puVar5[6] = uVar1;
    *(undefined8 **)(this->InlineBytes + 8) = puVar5;
    return this;
  }
  this->InlineBytes[8] = '\0';
  this->InlineBytes[9] = '\0';
  this->InlineBytes[10] = '\0';
  this->InlineBytes[0xb] = '\0';
  this->InlineBytes[0xc] = '\0';
  this->InlineBytes[0xd] = '\0';
  this->InlineBytes[0xe] = '\0';
  this->InlineBytes[0xf] = '\0';
  return this;
}

// FExpressionNode<TTokenFormatSpecifier<wchar_t>_> @ 141903060

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TTokenFormatSpecifier<wchar_t>_>
          (FExpressionNode *this,TTokenFormatSpecifier<wchar_t> *param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<wchar_t>_>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FHeapDataStorage_U__TTokenFormatSpecifier__W___Impl__6B_;
  puVar5 = ::operator_new(0x38);
  if (puVar5 != (undefined8 *)0x0) {
    pwVar2 = (param_1->Identifier).TokenEnd;
    uVar1 = *(undefined8 *)&(param_1->Identifier).LineNumber;
    pwVar3 = (param_1->EntireToken).TokenStart;
    *puVar5 = (param_1->Identifier).TokenStart;
    puVar5[1] = pwVar2;
    pwVar2 = (param_1->EntireToken).TokenEnd;
    uVar4 = *(undefined8 *)&(param_1->EntireToken).LineNumber;
    puVar5[2] = uVar1;
    puVar5[3] = pwVar3;
    uVar1 = *(undefined8 *)&param_1->Len;
    puVar5[4] = pwVar2;
    puVar5[5] = uVar4;
    puVar5[6] = uVar1;
    *(undefined8 **)(this->InlineBytes + 8) = puVar5;
    return this;
  }
  this->InlineBytes[8] = '\0';
  this->InlineBytes[9] = '\0';
  this->InlineBytes[10] = '\0';
  this->InlineBytes[0xb] = '\0';
  this->InlineBytes[0xc] = '\0';
  this->InlineBytes[0xd] = '\0';
  this->InlineBytes[0xe] = '\0';
  this->InlineBytes[0xf] = '\0';
  return this;
}

// FExpressionNode<TextFilterExpressionParser::FAnd> @ 1419030f0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TextFilterExpressionParser::FAnd>
          (FExpressionNode *this,FAnd param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FAnd>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFAnd_TextFilterExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<TextFilterExpressionParser::FEqual> @ 141903110

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TextFilterExpressionParser::FEqual>
          (FExpressionNode *this,FEqual param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FEqual>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFEqual_TextFilterExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<TextFilterExpressionParser::FGreater> @ 141903130

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TextFilterExpressionParser::FGreater>
          (FExpressionNode *this,FGreater param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreater>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFGreater_TextFilterExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<TextFilterExpressionParser::FGreaterOrEqual> @ 141903150

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TextFilterExpressionParser::FGreaterOrEqual>
          (FExpressionNode *this,FGreaterOrEqual param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreaterOrEqual>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFGreaterOrEqual_TextFilterExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<TextFilterExpressionParser::FLess> @ 141903170

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TextFilterExpressionParser::FLess>
          (FExpressionNode *this,FLess param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLess>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFLess_TextFilterExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<TextFilterExpressionParser::FLessOrEqual> @ 141903190

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TextFilterExpressionParser::FLessOrEqual>
          (FExpressionNode *this,FLessOrEqual param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLessOrEqual>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFLessOrEqual_TextFilterExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<TextFilterExpressionParser::FNot> @ 1419031b0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TextFilterExpressionParser::FNot>
          (FExpressionNode *this,FNot param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNot>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFNot_TextFilterExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<TextFilterExpressionParser::FNotEqual> @ 1419031d0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TextFilterExpressionParser::FNotEqual>
          (FExpressionNode *this,FNotEqual param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNotEqual>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFNotEqual_TextFilterExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<TextFilterExpressionParser::FOr> @ 1419031f0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TextFilterExpressionParser::FOr>(FExpressionNode *this,FOr param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FOr>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFOr_TextFilterExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<TextFilterExpressionParser::FSubExpressionEnd> @ 141903210

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TextFilterExpressionParser::FSubExpressionEnd>
          (FExpressionNode *this,FSubExpressionEnd param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFSubExpressionEnd_TextFilterExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<TextFilterExpressionParser::FSubExpressionStart> @ 141903230

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TextFilterExpressionParser::FSubExpressionStart>
          (FExpressionNode *this,FSubExpressionStart param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFSubExpressionStart_TextFilterExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<TextFilterExpressionParser::FFunction> @ 1419032c0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TextFilterExpressionParser::FFunction>
          (FExpressionNode *this,FFunction param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FFunction>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_VFFunction_TextFilterExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<TextFilterExpressionParser::FTextToken> @ 1419032e0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<TextFilterExpressionParser::FTextToken>
          (FExpressionNode *this,FTextToken *param_1)

{
  EInvertResult EVar1;
  ETextFilterTextComparisonMode EVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
                 ::__l2::Global;
  pFVar7 = (param_1->String).InternalString.Data.AllocatorInstance.Data;
  (param_1->String).InternalString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->String).InternalString.Data.ArrayNum;
  iVar4 = (param_1->String).InternalString.Data.ArrayMax;
  (param_1->String).InternalString.Data.ArrayNum = 0;
  (param_1->String).InternalString.Data.ArrayMax = 0;
  pFVar8 = (param_1->String).InternalStringAnsi.AllocatorInstance.Data;
  (param_1->String).InternalStringAnsi.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->String).InternalStringAnsi.ArrayNum;
  iVar6 = (param_1->String).InternalStringAnsi.ArrayMax;
  (param_1->String).InternalStringAnsi.ArrayNum = 0;
  (param_1->String).InternalStringAnsi.ArrayMax = 0;
  EVar1 = param_1->InvertResult;
  EVar2 = param_1->TextComparisonMode;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_VFTextToken_TextFilterExpressionParser___Impl__6B_;
  *(FScriptContainerElement **)(this->InlineBytes + 8) = pFVar7;
  *(int *)(this->InlineBytes + 0x10) = iVar3;
  *(int *)(this->InlineBytes + 0x14) = iVar4;
  *(FScriptContainerElement **)(this->InlineBytes + 0x18) = pFVar8;
  *(int *)(this->InlineBytes + 0x20) = iVar5;
  *(int *)(this->InlineBytes + 0x24) = iVar6;
  this->InlineBytes[0x28] = EVar2;
  this->InlineBytes[0x29] = EVar1;
  pFVar7 = (param_1->String).InternalStringAnsi.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  pFVar7 = (param_1->String).InternalString.Data.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return this;
}

// Cast<TEscapedCharacter<char>_> @ 141905d60

TEscapedCharacter<char> * __thiscall
FExpressionNode::Cast<TEscapedCharacter<char>_>(FExpressionNode *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<char>_>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<char>_>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<char>_>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<char>_>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar1 = this->InlineBytes + 8;
  }
  return (TEscapedCharacter<char> *)puVar1;
}

// Cast<TEscapedCharacter<char8_t>_> @ 141905da0

TEscapedCharacter<char8_t> * __thiscall
FExpressionNode::Cast<TEscapedCharacter<char8_t>_>(FExpressionNode *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<char8_t>_>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<char8_t>_>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<char8_t>_>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<char8_t>_>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar1 = this->InlineBytes + 8;
  }
  return (TEscapedCharacter<char8_t> *)puVar1;
}

// Cast<TEscapedCharacter<wchar_t>_> @ 141905de0

TEscapedCharacter<wchar_t> * __thiscall
FExpressionNode::Cast<TEscapedCharacter<wchar_t>_>(FExpressionNode *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<wchar_t>_>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<wchar_t>_>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<wchar_t>_>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<wchar_t>_>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar1 = this->InlineBytes + 8;
  }
  return (TEscapedCharacter<wchar_t> *)puVar1;
}

// Cast<TIndexSpecifier<char>_> @ 141905e20

TIndexSpecifier<char> * __thiscall
FExpressionNode::Cast<TIndexSpecifier<char>_>(FExpressionNode *this)

{
  TIndexSpecifier<char> *pTVar1;
  
  pTVar1 = (TIndexSpecifier<char> *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<char>_>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<char>_>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<char>_>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<char>_>::GetTypeId(void)'
      ::__l2::Global.A) {
    pTVar1 = (TIndexSpecifier<char> *)(this->InlineBytes + 8);
  }
  return pTVar1;
}

// Cast<TIndexSpecifier<char8_t>_> @ 141905e60

TIndexSpecifier<char8_t> * __thiscall
FExpressionNode::Cast<TIndexSpecifier<char8_t>_>(FExpressionNode *this)

{
  TIndexSpecifier<char8_t> *pTVar1;
  
  pTVar1 = (TIndexSpecifier<char8_t> *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<char8_t>_>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<char8_t>_>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<char8_t>_>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<char8_t>_>::GetTypeId(void)'
      ::__l2::Global.A) {
    pTVar1 = (TIndexSpecifier<char8_t> *)(this->InlineBytes + 8);
  }
  return pTVar1;
}

// Cast<TIndexSpecifier<wchar_t>_> @ 141905ea0

TIndexSpecifier<wchar_t> * __thiscall
FExpressionNode::Cast<TIndexSpecifier<wchar_t>_>(FExpressionNode *this)

{
  TIndexSpecifier<wchar_t> *pTVar1;
  
  pTVar1 = (TIndexSpecifier<wchar_t> *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<wchar_t>_>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<wchar_t>_>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<wchar_t>_>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<wchar_t>_>::GetTypeId(void)'
      ::__l2::Global.A) {
    pTVar1 = (TIndexSpecifier<wchar_t> *)(this->InlineBytes + 8);
  }
  return pTVar1;
}

// Cast<TStringLiteral<char>_> @ 141905ee0

TStringLiteral<char> * __thiscall
FExpressionNode::Cast<TStringLiteral<char>_>(FExpressionNode *this)

{
  TStringLiteral<char> *pTVar1;
  
  pTVar1 = (TStringLiteral<char> *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<char>_>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<char>_>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<char>_>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<char>_>::GetTypeId(void)'
      ::__l2::Global.A) {
    pTVar1 = (TStringLiteral<char> *)(this->InlineBytes + 8);
  }
  return pTVar1;
}

// Cast<TStringLiteral<char8_t>_> @ 141905f20

TStringLiteral<char8_t> * __thiscall
FExpressionNode::Cast<TStringLiteral<char8_t>_>(FExpressionNode *this)

{
  TStringLiteral<char8_t> *pTVar1;
  
  pTVar1 = (TStringLiteral<char8_t> *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<char8_t>_>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<char8_t>_>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<char8_t>_>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<char8_t>_>::GetTypeId(void)'
      ::__l2::Global.A) {
    pTVar1 = (TStringLiteral<char8_t> *)(this->InlineBytes + 8);
  }
  return pTVar1;
}

// Cast<TStringLiteral<wchar_t>_> @ 141905f60

TStringLiteral<wchar_t> * __thiscall
FExpressionNode::Cast<TStringLiteral<wchar_t>_>(FExpressionNode *this)

{
  TStringLiteral<wchar_t> *pTVar1;
  
  pTVar1 = (TStringLiteral<wchar_t> *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<wchar_t>_>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<wchar_t>_>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<wchar_t>_>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<wchar_t>_>::GetTypeId(void)'
      ::__l2::Global.A) {
    pTVar1 = (TStringLiteral<wchar_t> *)(this->InlineBytes + 8);
  }
  return pTVar1;
}

// Cast<TTokenFormatSpecifier<char>_> @ 141905fa0

TTokenFormatSpecifier<char> * __thiscall
FExpressionNode::Cast<TTokenFormatSpecifier<char>_>(FExpressionNode *this)

{
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<char>_>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<char>_>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<char>_>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<char>_>::GetTypeId(void)'
      ::__l2::Global.A) {
    return *(TTokenFormatSpecifier<char> **)(this->InlineBytes + 8);
  }
  return (TTokenFormatSpecifier<char> *)0x0;
}

// Cast<TTokenFormatSpecifier<char8_t>_> @ 141905fe0

TTokenFormatSpecifier<char8_t> * __thiscall
FExpressionNode::Cast<TTokenFormatSpecifier<char8_t>_>(FExpressionNode *this)

{
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<char8_t>_>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<char8_t>_>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<char8_t>_>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<char8_t>_>::GetTypeId(void)'
      ::__l2::Global.A) {
    return *(TTokenFormatSpecifier<char8_t> **)(this->InlineBytes + 8);
  }
  return (TTokenFormatSpecifier<char8_t> *)0x0;
}

// Cast<TTokenFormatSpecifier<wchar_t>_> @ 141906020

TTokenFormatSpecifier<wchar_t> * __thiscall
FExpressionNode::Cast<TTokenFormatSpecifier<wchar_t>_>(FExpressionNode *this)

{
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<wchar_t>_>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<wchar_t>_>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<wchar_t>_>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<wchar_t>_>::GetTypeId(void)'
      ::__l2::Global.A) {
    return *(TTokenFormatSpecifier<wchar_t> **)(this->InlineBytes + 8);
  }
  return (TTokenFormatSpecifier<wchar_t> *)0x0;
}

// Cast<TextFilterExpressionParser::FEqual> @ 141906060

FEqual * __thiscall FExpressionNode::Cast<TextFilterExpressionParser::FEqual>(FExpressionNode *this)

{
  FEqual *pFVar1;
  
  pFVar1 = (FEqual *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FEqual>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FEqual>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FEqual>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FEqual>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FEqual *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<TextFilterExpressionParser::FGreater> @ 1419060a0

FGreater * __thiscall
FExpressionNode::Cast<TextFilterExpressionParser::FGreater>(FExpressionNode *this)

{
  FGreater *pFVar1;
  
  pFVar1 = (FGreater *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreater>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreater>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreater>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreater>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FGreater *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<TextFilterExpressionParser::FGreaterOrEqual> @ 1419060e0

FGreaterOrEqual * __thiscall
FExpressionNode::Cast<TextFilterExpressionParser::FGreaterOrEqual>(FExpressionNode *this)

{
  FGreaterOrEqual *pFVar1;
  
  pFVar1 = (FGreaterOrEqual *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreaterOrEqual>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreaterOrEqual>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreaterOrEqual>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreaterOrEqual>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FGreaterOrEqual *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<TextFilterExpressionParser::FLess> @ 141906120

FLess * __thiscall FExpressionNode::Cast<TextFilterExpressionParser::FLess>(FExpressionNode *this)

{
  FLess *pFVar1;
  
  pFVar1 = (FLess *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLess>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLess>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLess>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLess>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FLess *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<TextFilterExpressionParser::FLessOrEqual> @ 141906160

FLessOrEqual * __thiscall
FExpressionNode::Cast<TextFilterExpressionParser::FLessOrEqual>(FExpressionNode *this)

{
  FLessOrEqual *pFVar1;
  
  pFVar1 = (FLessOrEqual *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLessOrEqual>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLessOrEqual>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLessOrEqual>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLessOrEqual>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FLessOrEqual *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<TextFilterExpressionParser::FNot> @ 1419061a0

FNot * __thiscall FExpressionNode::Cast<TextFilterExpressionParser::FNot>(FExpressionNode *this)

{
  FNot *pFVar1;
  
  pFVar1 = (FNot *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNot>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNot>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNot>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNot>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FNot *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<TextFilterExpressionParser::FNotEqual> @ 1419061e0

FNotEqual * __thiscall
FExpressionNode::Cast<TextFilterExpressionParser::FNotEqual>(FExpressionNode *this)

{
  FNotEqual *pFVar1;
  
  pFVar1 = (FNotEqual *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNotEqual>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNotEqual>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNotEqual>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNotEqual>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FNotEqual *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<TextFilterExpressionParser::FSubExpressionEnd> @ 141906220

FSubExpressionEnd * __thiscall
FExpressionNode::Cast<TextFilterExpressionParser::FSubExpressionEnd>(FExpressionNode *this)

{
  FSubExpressionEnd *pFVar1;
  
  pFVar1 = (FSubExpressionEnd *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FSubExpressionEnd *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<TextFilterExpressionParser::FSubExpressionStart> @ 141906260

FSubExpressionStart * __thiscall
FExpressionNode::Cast<TextFilterExpressionParser::FSubExpressionStart>(FExpressionNode *this)

{
  FSubExpressionStart *pFVar1;
  
  pFVar1 = (FSubExpressionStart *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FSubExpressionStart *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<TextFilterExpressionParser::FTextToken> @ 1419062a0

FTextToken * __thiscall
FExpressionNode::Cast<TextFilterExpressionParser::FTextToken>(FExpressionNode *this)

{
  FTextToken *pFVar1;
  
  pFVar1 = (FTextToken *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FTextToken *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

