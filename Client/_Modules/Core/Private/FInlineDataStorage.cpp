// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 162

// Copy @ 14174dbd0

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TextFormatTokens::FArgumentModifierTokenSpecifier>::Copy
          (FInlineDataStorage<TextFormatTokens::FArgumentModifierTokenSpecifier> *this,
          FExpressionNode *__return_storage_ptr__)

{
  FArgumentModifierTokenSpecifier local_28;
  
  local_28.ModifierPatternStartPos = (this->Value).ModifierPatternStartPos;
  local_28.ModifierPatternLen = (this->Value).ModifierPatternLen;
  local_28.TextFormatArgumentModifier.Object = (this->Value).TextFormatArgumentModifier.Object;
  local_28.TextFormatArgumentModifier.SharedReferenceCount.ReferenceController =
       (this->Value).TextFormatArgumentModifier.SharedReferenceCount.ReferenceController;
  if (local_28.TextFormatArgumentModifier.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.TextFormatArgumentModifier.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.TextFormatArgumentModifier.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FExpressionNode::FExpressionNode<TextFormatTokens::FArgumentModifierTokenSpecifier>
            (__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// Copy @ 14174dc20

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TextFormatTokens::FArgumentTokenSpecifier>::Copy
          (FInlineDataStorage<TextFormatTokens::FArgumentTokenSpecifier> *this,
          FExpressionNode *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  
  pwVar1 = (this->Value).ArgumentNameStartPos;
  uVar2 = *(undefined8 *)&(this->Value).ArgumentNameLen;
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFArgumentTokenSpecifier_TextFormatTokens___Impl__6B_;
  *(wchar_t **)(__return_storage_ptr__->InlineBytes + 8) = pwVar1;
  *(undefined8 *)(__return_storage_ptr__->InlineBytes + 0x10) = uVar2;
  return __return_storage_ptr__;
}

// Copy @ 14174dc50

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TextFormatTokens::FEscapedCharacter>::Copy
          (FInlineDataStorage<TextFormatTokens::FEscapedCharacter> *this,
          FExpressionNode *__return_storage_ptr__)

{
  wchar_t wVar1;
  
  wVar1 = (this->Value).Character;
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
       ::__l2::Global;
  *(wchar_t *)(__return_storage_ptr__->InlineBytes + 8) = wVar1;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFEscapedCharacter_TextFormatTokens___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 14174dc80

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TextFormatTokens::FStringLiteral>::Copy
          (FInlineDataStorage<TextFormatTokens::FStringLiteral> *this,
          FExpressionNode *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  
  pwVar1 = (this->Value).StringStartPos;
  uVar2 = *(undefined8 *)&(this->Value).StringLen;
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFStringLiteral_TextFormatTokens___Impl__6B_;
  *(wchar_t **)(__return_storage_ptr__->InlineBytes + 8) = pwVar1;
  *(undefined8 *)(__return_storage_ptr__->InlineBytes + 0x10) = uVar2;
  return __return_storage_ptr__;
}

// MoveAssign @ 14176d350

void __thiscall
Impl::FInlineDataStorage<TextFormatTokens::FArgumentModifierTokenSpecifier>::MoveAssign
          (FInlineDataStorage<TextFormatTokens::FArgumentModifierTokenSpecifier> *this,
          uchar *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ITextFormatArgumentModifier *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  *(wchar_t **)(param_1 + 8) = (this->Value).ModifierPatternStartPos;
  *(int *)(param_1 + 0x10) = (this->Value).ModifierPatternLen;
  pTVar1 = (this->Value).TextFormatArgumentModifier.SharedReferenceCount.ReferenceController;
  pIVar2 = *(ITextFormatArgumentModifier **)(param_1 + 0x18);
  pTVar3 = *(TReferenceControllerBase<1> **)(param_1 + 0x20);
  *(ITextFormatArgumentModifier **)(param_1 + 0x18) =
       (this->Value).TextFormatArgumentModifier.Object;
  *(TReferenceControllerBase<1> **)(param_1 + 0x20) = pTVar1;
  (this->Value).TextFormatArgumentModifier.Object = pIVar2;
  (this->Value).TextFormatArgumentModifier.SharedReferenceCount.ReferenceController = pTVar3;
  return;
}

// MoveAssign @ 14176d380

void __thiscall
Impl::FInlineDataStorage<TextFormatTokens::FArgumentTokenSpecifier>::MoveAssign
          (FInlineDataStorage<TextFormatTokens::FArgumentTokenSpecifier> *this,uchar *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(this->Value).ArgumentNameLen;
  *(wchar_t **)(param_1 + 8) = (this->Value).ArgumentNameStartPos;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}

// MoveAssign @ 14176d390

void __thiscall
Impl::FInlineDataStorage<TextFormatTokens::FEscapedCharacter>::MoveAssign
          (FInlineDataStorage<TextFormatTokens::FEscapedCharacter> *this,uchar *param_1)

{
  *(wchar_t *)(param_1 + 8) = (this->Value).Character;
  return;
}

// MoveAssign @ 14176d3a0

void __thiscall
Impl::FInlineDataStorage<TextFormatTokens::FStringLiteral>::MoveAssign
          (FInlineDataStorage<TextFormatTokens::FStringLiteral> *this,uchar *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(this->Value).StringLen;
  *(wchar_t **)(param_1 + 8) = (this->Value).StringStartPos;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}

// Reseat @ 141776f50

void __thiscall
Impl::FInlineDataStorage<TextFormatTokens::FArgumentModifierTokenSpecifier>::Reseat
          (FInlineDataStorage<TextFormatTokens::FArgumentModifierTokenSpecifier> *this,
          uchar *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  ITextFormatArgumentModifier *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> *paVar5;
  
  pwVar2 = (this->Value).ModifierPatternStartPos;
  iVar1 = (this->Value).ModifierPatternLen;
  pIVar3 = (this->Value).TextFormatArgumentModifier.Object;
  pTVar4 = (this->Value).TextFormatArgumentModifier.SharedReferenceCount.ReferenceController;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar4->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  *(wchar_t **)(param_1 + 8) = pwVar2;
  *(undefined ***)param_1 =
       &___7__FInlineDataStorage_UFArgumentModifierTokenSpecifier_TextFormatTokens___Impl__6B_;
  *(int *)(param_1 + 0x10) = iVar1;
  *(ITextFormatArgumentModifier **)(param_1 + 0x18) = pIVar3;
  *(TReferenceControllerBase<1> **)(param_1 + 0x20) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Reseat @ 141776fa0

void __thiscall
Impl::FInlineDataStorage<TextFormatTokens::FArgumentTokenSpecifier>::Reseat
          (FInlineDataStorage<TextFormatTokens::FArgumentTokenSpecifier> *this,uchar *param_1)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  
  pwVar1 = (this->Value).ArgumentNameStartPos;
  uVar2 = *(undefined8 *)&(this->Value).ArgumentNameLen;
  *(undefined ***)param_1 =
       &___7__FInlineDataStorage_UFArgumentTokenSpecifier_TextFormatTokens___Impl__6B_;
  *(wchar_t **)(param_1 + 8) = pwVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return;
}

// Reseat @ 141776fc0

void __thiscall
Impl::FInlineDataStorage<TextFormatTokens::FEscapedCharacter>::Reseat
          (FInlineDataStorage<TextFormatTokens::FEscapedCharacter> *this,uchar *param_1)

{
  wchar_t wVar1;
  
  wVar1 = (this->Value).Character;
  *(undefined ***)param_1 =
       &___7__FInlineDataStorage_UFEscapedCharacter_TextFormatTokens___Impl__6B_;
  *(wchar_t *)(param_1 + 8) = wVar1;
  return;
}

// Reseat @ 141776fe0

void __thiscall
Impl::FInlineDataStorage<TextFormatTokens::FStringLiteral>::Reseat
          (FInlineDataStorage<TextFormatTokens::FStringLiteral> *this,uchar *param_1)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  
  pwVar1 = (this->Value).StringStartPos;
  uVar2 = *(undefined8 *)&(this->Value).StringLen;
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFStringLiteral_TextFormatTokens___Impl__6B_;
  *(wchar_t **)(param_1 + 8) = pwVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return;
}

// Copy @ 1417bd8d0

FExpressionNode * __thiscall
Impl::FInlineDataStorage<double>::Copy
          (FInlineDataStorage<double> *this,FExpressionNode *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = this->Value;
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes = &___7__FInlineDataStorage_N_Impl__6B_;
  *(double *)(__return_storage_ptr__->InlineBytes + 8) = dVar1;
  return __return_storage_ptr__;
}

// Copy @ 1417bd900

FExpressionNode * __thiscall
Impl::FInlineDataStorage<FNumericUnit<double>_>::Copy
          (FInlineDataStorage<FNumericUnit<double>_> *this,FExpressionNode *__return_storage_ptr__)

{
  double dVar1;
  EUnit EVar2;
  
  EVar2 = (this->Value).Units;
  dVar1 = (this->Value).Value;
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_U__FNumericUnit_N___Impl__6B_;
  __return_storage_ptr__->InlineBytes[0x10] = EVar2;
  *(double *)(__return_storage_ptr__->InlineBytes + 8) = dVar1;
  return __return_storage_ptr__;
}

// Copy @ 1417bd930

FExpressionNode * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FForwardSlash>::Copy
          (FInlineDataStorage<ExpressionParser::FForwardSlash> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlash>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFForwardSlash_ExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1417bd950

FExpressionNode * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FForwardSlashEquals>::Copy
          (FInlineDataStorage<ExpressionParser::FForwardSlashEquals> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlashEquals>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFForwardSlashEquals_ExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1417bd970

FExpressionNode * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FMinus>::Copy
          (FInlineDataStorage<ExpressionParser::FMinus> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFMinus_ExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1417bd990

FExpressionNode * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FMinusEquals>::Copy
          (FInlineDataStorage<ExpressionParser::FMinusEquals> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinusEquals>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFMinusEquals_ExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1417bd9b0

FExpressionNode * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FPercent>::Copy
          (FInlineDataStorage<ExpressionParser::FPercent> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPercent>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFPercent_ExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1417bd9d0

FExpressionNode * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FPlus>::Copy
          (FInlineDataStorage<ExpressionParser::FPlus> *this,FExpressionNode *__return_storage_ptr__
          )

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFPlus_ExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1417bd9f0

FExpressionNode * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FPlusEquals>::Copy
          (FInlineDataStorage<ExpressionParser::FPlusEquals> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlusEquals>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFPlusEquals_ExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1417bda10

FExpressionNode * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FPower>::Copy
          (FInlineDataStorage<ExpressionParser::FPower> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPower>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFPower_ExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1417bda30

FExpressionNode * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FSquareRoot>::Copy
          (FInlineDataStorage<ExpressionParser::FSquareRoot> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSquareRoot>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFSquareRoot_ExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1417bda50

FExpressionNode * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FStar>::Copy
          (FInlineDataStorage<ExpressionParser::FStar> *this,FExpressionNode *__return_storage_ptr__
          )

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFStar_ExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1417bda70

FExpressionNode * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FStarEquals>::Copy
          (FInlineDataStorage<ExpressionParser::FStarEquals> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStarEquals>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFStarEquals_ExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1417bda90

FExpressionNode * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FSubExpressionEnd>::Copy
          (FInlineDataStorage<ExpressionParser::FSubExpressionEnd> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFSubExpressionEnd_ExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1417bdab0

FExpressionNode * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FSubExpressionStart>::Copy
          (FInlineDataStorage<ExpressionParser::FSubExpressionStart> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSubExpressionStart>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFSubExpressionStart_ExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// MoveAssign @ 1417e5160

void __thiscall
Impl::FInlineDataStorage<double>::MoveAssign(FInlineDataStorage<double> *this,uchar *param_1)

{
  *(double *)(param_1 + 8) = this->Value;
  return;
}

// MoveAssign @ 1417e5170

void __thiscall
Impl::FInlineDataStorage<FNumericUnit<double>_>::MoveAssign
          (FInlineDataStorage<FNumericUnit<double>_> *this,uchar *param_1)

{
  FNumericUnit<double>::operator=((FNumericUnit<double> *)(param_1 + 8),&this->Value);
  return;
}

// MoveAssign @ 1417e5190

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FForwardSlash>::MoveAssign
          (FInlineDataStorage<ExpressionParser::FForwardSlash> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1417e51a0

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FForwardSlashEquals>::MoveAssign
          (FInlineDataStorage<ExpressionParser::FForwardSlashEquals> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1417e51b0

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FMinus>::MoveAssign
          (FInlineDataStorage<ExpressionParser::FMinus> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1417e51c0

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FMinusEquals>::MoveAssign
          (FInlineDataStorage<ExpressionParser::FMinusEquals> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1417e51d0

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FPercent>::MoveAssign
          (FInlineDataStorage<ExpressionParser::FPercent> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1417e51e0

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FPlus>::MoveAssign
          (FInlineDataStorage<ExpressionParser::FPlus> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1417e51f0

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FPlusEquals>::MoveAssign
          (FInlineDataStorage<ExpressionParser::FPlusEquals> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1417e5200

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FPower>::MoveAssign
          (FInlineDataStorage<ExpressionParser::FPower> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1417e5210

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FSquareRoot>::MoveAssign
          (FInlineDataStorage<ExpressionParser::FSquareRoot> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1417e5220

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FStar>::MoveAssign
          (FInlineDataStorage<ExpressionParser::FStar> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1417e5230

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FStarEquals>::MoveAssign
          (FInlineDataStorage<ExpressionParser::FStarEquals> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1417e5240

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FSubExpressionEnd>::MoveAssign
          (FInlineDataStorage<ExpressionParser::FSubExpressionEnd> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1417e5250

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FSubExpressionStart>::MoveAssign
          (FInlineDataStorage<ExpressionParser::FSubExpressionStart> *this,uchar *param_1)

{
  return;
}

// Reseat @ 1417f5930

void __thiscall
Impl::FInlineDataStorage<double>::Reseat(FInlineDataStorage<double> *this,uchar *param_1)

{
  *(double *)(param_1 + 8) = this->Value;
  *(undefined ***)param_1 = &___7__FInlineDataStorage_N_Impl__6B_;
  return;
}

// Reseat @ 1417f5950

void __thiscall
Impl::FInlineDataStorage<FNumericUnit<double>_>::Reseat
          (FInlineDataStorage<FNumericUnit<double>_> *this,uchar *param_1)

{
  double dVar1;
  EUnit EVar2;
  
  EVar2 = (this->Value).Units;
  dVar1 = (this->Value).Value;
  *(undefined ***)param_1 = &___7__FInlineDataStorage_U__FNumericUnit_N___Impl__6B_;
  *(double *)(param_1 + 8) = dVar1;
  param_1[0x10] = EVar2;
  return;
}

// Reseat @ 1417f5980

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FForwardSlash>::Reseat
          (FInlineDataStorage<ExpressionParser::FForwardSlash> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFForwardSlash_ExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 1417f59a0

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FForwardSlashEquals>::Reseat
          (FInlineDataStorage<ExpressionParser::FForwardSlashEquals> *this,uchar *param_1)

{
  *(undefined ***)param_1 =
       &___7__FInlineDataStorage_UFForwardSlashEquals_ExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 1417f59c0

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FMinus>::Reseat
          (FInlineDataStorage<ExpressionParser::FMinus> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFMinus_ExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 1417f59e0

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FMinusEquals>::Reseat
          (FInlineDataStorage<ExpressionParser::FMinusEquals> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFMinusEquals_ExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 1417f5a00

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FPercent>::Reseat
          (FInlineDataStorage<ExpressionParser::FPercent> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFPercent_ExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 1417f5a20

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FPlus>::Reseat
          (FInlineDataStorage<ExpressionParser::FPlus> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFPlus_ExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 1417f5a40

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FPlusEquals>::Reseat
          (FInlineDataStorage<ExpressionParser::FPlusEquals> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFPlusEquals_ExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 1417f5a60

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FPower>::Reseat
          (FInlineDataStorage<ExpressionParser::FPower> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFPower_ExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 1417f5a80

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FSquareRoot>::Reseat
          (FInlineDataStorage<ExpressionParser::FSquareRoot> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFSquareRoot_ExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 1417f5aa0

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FStar>::Reseat
          (FInlineDataStorage<ExpressionParser::FStar> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFStar_ExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 1417f5ac0

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FStarEquals>::Reseat
          (FInlineDataStorage<ExpressionParser::FStarEquals> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFStarEquals_ExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 1417f5ae0

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FSubExpressionEnd>::Reseat
          (FInlineDataStorage<ExpressionParser::FSubExpressionEnd> *this,uchar *param_1)

{
  *(undefined ***)param_1 =
       &___7__FInlineDataStorage_UFSubExpressionEnd_ExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 1417f5b00

void __thiscall
Impl::FInlineDataStorage<ExpressionParser::FSubExpressionStart>::Reseat
          (FInlineDataStorage<ExpressionParser::FSubExpressionStart> *this,uchar *param_1)

{
  *(undefined ***)param_1 =
       &___7__FInlineDataStorage_UFSubExpressionStart_ExpressionParser___Impl__6B_;
  return;
}

// Copy @ 1418d2a00

FExpressionNode * __thiscall
Impl::FInlineDataStorage<Tests::FAnd>::Copy
          (FInlineDataStorage<Tests::FAnd> *this,FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FAnd>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFAnd_Tests___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1418d2a20

FExpressionNode * __thiscall
Impl::FInlineDataStorage<Tests::FDigitsTokenTag>::Copy
          (FInlineDataStorage<Tests::FDigitsTokenTag> *this,FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FDigitsTokenTag>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFDigitsTokenTag_Tests___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1418d2a40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FExpressionNode * __thiscall
Impl::FInlineDataStorage<`anonymous_namespace'::FDropFrame>::Copy
          (FInlineDataStorage<_anonymous_namespace_::FDropFrame> *this,
          FExpressionNode *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = uRam0000000154b7f9b8;
  uVar1 = DAT_154b7f9b0_4;
  (__return_storage_ptr__->TypeId).A = _DAT_154b7f9b0;
  uVar3 = uRam0000000154b7f9b8;
  (__return_storage_ptr__->TypeId).B = uVar1;
  uRam0000000154b7f9b8._0_4_ = (undefined4)uVar2;
  uRam0000000154b7f9b8._4_4_ = SUB84(uVar2,4);
  uVar1 = uRam0000000154b7f9b8._4_4_;
  (__return_storage_ptr__->TypeId).C = (undefined4)uRam0000000154b7f9b8;
  uRam0000000154b7f9b8 = uVar3;
  (__return_storage_ptr__->TypeId).D = uVar1;
  *(undefined ***)__return_storage_ptr__->InlineBytes = &FInlineDataStorage<FDropFrame>::_vftable_;
  return __return_storage_ptr__;
}

// Copy @ 1418d2a60

FExpressionNode * __thiscall
Impl::FInlineDataStorage<FFrameRate>::Copy
          (FInlineDataStorage<FFrameRate> *this,FExpressionNode *__return_storage_ptr__)

{
  FFrameRate FVar1;
  
  FVar1 = this->Value;
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
       ::__l2::Global;
  *(FFrameRate *)(__return_storage_ptr__->InlineBytes + 8) = FVar1;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFFrameRate___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1418d2a90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FExpressionNode * __thiscall
Impl::FInlineDataStorage<`anonymous_namespace'::FFramesPerSecond>::Copy
          (FInlineDataStorage<_anonymous_namespace_::FFramesPerSecond> *this,
          FExpressionNode *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = uRam0000000154b7f998;
  uVar1 = DAT_154b7f990_4;
  (__return_storage_ptr__->TypeId).A = _DAT_154b7f990;
  uVar3 = uRam0000000154b7f998;
  (__return_storage_ptr__->TypeId).B = uVar1;
  uRam0000000154b7f998._0_4_ = (undefined4)uVar2;
  uRam0000000154b7f998._4_4_ = SUB84(uVar2,4);
  uVar1 = uRam0000000154b7f998._4_4_;
  (__return_storage_ptr__->TypeId).C = (undefined4)uRam0000000154b7f998;
  uRam0000000154b7f998 = uVar3;
  (__return_storage_ptr__->TypeId).D = uVar1;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &FInlineDataStorage<FFramesPerSecond>::_vftable_;
  return __return_storage_ptr__;
}

// Copy @ 1418d2ab0

FExpressionNode * __thiscall
Impl::FInlineDataStorage<Tests::FLowerAlphaTokenTag>::Copy
          (FInlineDataStorage<Tests::FLowerAlphaTokenTag> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FLowerAlphaTokenTag>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFLowerAlphaTokenTag_Tests___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1418d2ad0

FExpressionNode * __thiscall
Impl::FInlineDataStorage<Tests::FMoveableType>::Copy
          (FInlineDataStorage<Tests::FMoveableType> *this,FExpressionNode *__return_storage_ptr__)

{
  bool bVar1;
  
  bVar1 = (this->Value).bOwnsLeak;
  if (bVar1 != false) {
    *Tests::FMoveableType::LeakCount = *Tests::FMoveableType::LeakCount + 1;
  }
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFMoveableType_Tests___Impl__6B_;
  *(undefined ***)(__return_storage_ptr__->InlineBytes + 8) = &___7FMoveableType_Tests__6B_;
  __return_storage_ptr__->InlineBytes[0x10] = 0xff;
  __return_storage_ptr__->InlineBytes[0x11] = 0xff;
  __return_storage_ptr__->InlineBytes[0x12] = 0xff;
  __return_storage_ptr__->InlineBytes[0x13] = 0xff;
  __return_storage_ptr__->InlineBytes[0x14] = bVar1;
  return __return_storage_ptr__;
}

// Copy @ 1418d2b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FExpressionNode * __thiscall
Impl::FInlineDataStorage<`anonymous_namespace'::FNonDropFrame>::Copy
          (FInlineDataStorage<_anonymous_namespace_::FNonDropFrame> *this,
          FExpressionNode *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = uRam0000000154b7f9a8;
  uVar1 = DAT_154b7f9a0_4;
  (__return_storage_ptr__->TypeId).A = _DAT_154b7f9a0;
  uVar3 = uRam0000000154b7f9a8;
  (__return_storage_ptr__->TypeId).B = uVar1;
  uRam0000000154b7f9a8._0_4_ = (undefined4)uVar2;
  uRam0000000154b7f9a8._4_4_ = SUB84(uVar2,4);
  uVar1 = uRam0000000154b7f9a8._4_4_;
  (__return_storage_ptr__->TypeId).C = (undefined4)uRam0000000154b7f9a8;
  uRam0000000154b7f9a8 = uVar3;
  (__return_storage_ptr__->TypeId).D = uVar1;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &FInlineDataStorage<FNonDropFrame>::_vftable_;
  return __return_storage_ptr__;
}

// Copy @ 1418d2b40

FExpressionNode * __thiscall
Impl::FInlineDataStorage<Tests::FOperator>::Copy
          (FInlineDataStorage<Tests::FOperator> *this,FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFOperator_Tests___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1418d2b60

FExpressionNode * __thiscall
Impl::FInlineDataStorage<Tests::FOr>::Copy
          (FInlineDataStorage<Tests::FOr> *this,FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOr>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFOr_Tests___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1418d2b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FExpressionNode * __thiscall
Impl::FInlineDataStorage<`anonymous_namespace'::FSeconds>::Copy
          (FInlineDataStorage<_anonymous_namespace_::FSeconds> *this,
          FExpressionNode *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = uRam0000000154b7f988;
  uVar1 = DAT_154b7f980_4;
  (__return_storage_ptr__->TypeId).A = _DAT_154b7f980;
  uVar3 = uRam0000000154b7f988;
  (__return_storage_ptr__->TypeId).B = uVar1;
  uRam0000000154b7f988._0_4_ = (undefined4)uVar2;
  uRam0000000154b7f988._4_4_ = SUB84(uVar2,4);
  uVar1 = uRam0000000154b7f988._4_4_;
  (__return_storage_ptr__->TypeId).C = (undefined4)uRam0000000154b7f988;
  uRam0000000154b7f988 = uVar3;
  (__return_storage_ptr__->TypeId).D = uVar1;
  *(undefined ***)__return_storage_ptr__->InlineBytes = &FInlineDataStorage<FSeconds>::_vftable_;
  return __return_storage_ptr__;
}

// Copy @ 1418d2ba0

FExpressionNode * __thiscall
Impl::FInlineDataStorage<Tests::FStringTokenTag>::Copy
          (FInlineDataStorage<Tests::FStringTokenTag> *this,FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FStringTokenTag>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFStringTokenTag_Tests___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1418d2bc0

FExpressionNode * __thiscall
Impl::FInlineDataStorage<bool>::Copy
          (FInlineDataStorage<bool> *this,FExpressionNode *__return_storage_ptr__)

{
  bool bVar1;
  
  bVar1 = this->Value;
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global;
  __return_storage_ptr__->InlineBytes[8] = bVar1;
  *(undefined ***)__return_storage_ptr__->InlineBytes = &___7__FInlineDataStorage__N_Impl__6B_;
  return __return_storage_ptr__;
}

// MoveAssign @ 1418e9150

void __thiscall
Impl::FInlineDataStorage<Tests::FAnd>::MoveAssign
          (FInlineDataStorage<Tests::FAnd> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1418e9160

void __thiscall
Impl::FInlineDataStorage<Tests::FDigitsTokenTag>::MoveAssign
          (FInlineDataStorage<Tests::FDigitsTokenTag> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1418e9170

void __thiscall
Impl::FInlineDataStorage<`anonymous_namespace'::FDropFrame>::MoveAssign
          (FInlineDataStorage<_anonymous_namespace_::FDropFrame> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1418e9180

void __thiscall
Impl::FInlineDataStorage<FFrameRate>::MoveAssign
          (FInlineDataStorage<FFrameRate> *this,uchar *param_1)

{
  *(FFrameRate *)(param_1 + 8) = this->Value;
  return;
}

// MoveAssign @ 1418e9190

void __thiscall
Impl::FInlineDataStorage<`anonymous_namespace'::FFramesPerSecond>::MoveAssign
          (FInlineDataStorage<_anonymous_namespace_::FFramesPerSecond> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1418e91a0

void __thiscall
Impl::FInlineDataStorage<Tests::FLowerAlphaTokenTag>::MoveAssign
          (FInlineDataStorage<Tests::FLowerAlphaTokenTag> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1418e91b0

void __thiscall
Impl::FInlineDataStorage<Tests::FMoveableType>::MoveAssign
          (FInlineDataStorage<Tests::FMoveableType> *this,uchar *param_1)

{
  if (param_1[0x14] != '\0') {
    param_1[0x14] = '\0';
    *Tests::FMoveableType::LeakCount = *Tests::FMoveableType::LeakCount + -1;
  }
  *(int *)(param_1 + 0x10) = (this->Value).Id;
  (this->Value).Id = -1;
  param_1[0x14] = (this->Value).bOwnsLeak;
  (this->Value).bOwnsLeak = false;
  return;
}

// MoveAssign @ 1418e91f0

void __thiscall
Impl::FInlineDataStorage<`anonymous_namespace'::FNonDropFrame>::MoveAssign
          (FInlineDataStorage<_anonymous_namespace_::FNonDropFrame> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1418e9200

void __thiscall
Impl::FInlineDataStorage<Tests::FOperator>::MoveAssign
          (FInlineDataStorage<Tests::FOperator> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1418e9210

void __thiscall
Impl::FInlineDataStorage<Tests::FOr>::MoveAssign
          (FInlineDataStorage<Tests::FOr> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1418e9220

void __thiscall
Impl::FInlineDataStorage<`anonymous_namespace'::FSeconds>::MoveAssign
          (FInlineDataStorage<_anonymous_namespace_::FSeconds> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1418e9230

void __thiscall
Impl::FInlineDataStorage<Tests::FStringTokenTag>::MoveAssign
          (FInlineDataStorage<Tests::FStringTokenTag> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 1418e9240

void __thiscall
Impl::FInlineDataStorage<bool>::MoveAssign(FInlineDataStorage<bool> *this,uchar *param_1)

{
  param_1[8] = this->Value;
  return;
}

// Reseat @ 1418f3100

void __thiscall
Impl::FInlineDataStorage<Tests::FAnd>::Reseat(FInlineDataStorage<Tests::FAnd> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFAnd_Tests___Impl__6B_;
  return;
}

// Reseat @ 1418f3120

void __thiscall
Impl::FInlineDataStorage<Tests::FDigitsTokenTag>::Reseat
          (FInlineDataStorage<Tests::FDigitsTokenTag> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFDigitsTokenTag_Tests___Impl__6B_;
  return;
}

// Reseat @ 1418f3140

void __thiscall
Impl::FInlineDataStorage<`anonymous_namespace'::FDropFrame>::Reseat
          (FInlineDataStorage<_anonymous_namespace_::FDropFrame> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &FInlineDataStorage<FDropFrame>::_vftable_;
  return;
}

// Reseat @ 1418f3160

void __thiscall
Impl::FInlineDataStorage<FFrameRate>::Reseat(FInlineDataStorage<FFrameRate> *this,uchar *param_1)

{
  FFrameRate FVar1;
  
  FVar1 = this->Value;
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFFrameRate___Impl__6B_;
  *(FFrameRate *)(param_1 + 8) = FVar1;
  return;
}

// Reseat @ 1418f3180

void __thiscall
Impl::FInlineDataStorage<`anonymous_namespace'::FFramesPerSecond>::Reseat
          (FInlineDataStorage<_anonymous_namespace_::FFramesPerSecond> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &FInlineDataStorage<FFramesPerSecond>::_vftable_;
  return;
}

// Reseat @ 1418f31a0

void __thiscall
Impl::FInlineDataStorage<Tests::FLowerAlphaTokenTag>::Reseat
          (FInlineDataStorage<Tests::FLowerAlphaTokenTag> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFLowerAlphaTokenTag_Tests___Impl__6B_;
  return;
}

// Reseat @ 1418f31c0

void __thiscall
Impl::FInlineDataStorage<Tests::FMoveableType>::Reseat
          (FInlineDataStorage<Tests::FMoveableType> *this,uchar *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = (this->Value).Id;
  bVar1 = (this->Value).bOwnsLeak;
  (this->Value).Id = -1;
  (this->Value).bOwnsLeak = false;
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFMoveableType_Tests___Impl__6B_;
  *(undefined ***)(param_1 + 8) = &___7FMoveableType_Tests__6B_;
  *(int *)(param_1 + 0x10) = iVar2;
  param_1[0x14] = bVar1;
  return;
}

// Reseat @ 1418f3200

void __thiscall
Impl::FInlineDataStorage<`anonymous_namespace'::FNonDropFrame>::Reseat
          (FInlineDataStorage<_anonymous_namespace_::FNonDropFrame> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &FInlineDataStorage<FNonDropFrame>::_vftable_;
  return;
}

// Reseat @ 1418f3220

void __thiscall
Impl::FInlineDataStorage<Tests::FOperator>::Reseat
          (FInlineDataStorage<Tests::FOperator> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFOperator_Tests___Impl__6B_;
  return;
}

// Reseat @ 1418f3240

void __thiscall
Impl::FInlineDataStorage<Tests::FOr>::Reseat(FInlineDataStorage<Tests::FOr> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFOr_Tests___Impl__6B_;
  return;
}

// Reseat @ 1418f3260

void __thiscall
Impl::FInlineDataStorage<`anonymous_namespace'::FSeconds>::Reseat
          (FInlineDataStorage<_anonymous_namespace_::FSeconds> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &FInlineDataStorage<FSeconds>::_vftable_;
  return;
}

// Reseat @ 1418f3280

void __thiscall
Impl::FInlineDataStorage<Tests::FStringTokenTag>::Reseat
          (FInlineDataStorage<Tests::FStringTokenTag> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFStringTokenTag_Tests___Impl__6B_;
  return;
}

// Reseat @ 1418f32a0

void __thiscall
Impl::FInlineDataStorage<bool>::Reseat(FInlineDataStorage<bool> *this,uchar *param_1)

{
  bool bVar1;
  
  bVar1 = this->Value;
  *(undefined ***)param_1 = &___7__FInlineDataStorage__N_Impl__6B_;
  param_1[8] = bVar1;
  return;
}

// Copy @ 141930620

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TEscapedCharacter<char>_>::Copy
          (FInlineDataStorage<TEscapedCharacter<char>_> *this,
          FExpressionNode *__return_storage_ptr__)

{
  uchar uVar1;
  
  uVar1 = (this->Value).Character;
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<char>_>::GetTypeId(void)'
       ::__l2::Global;
  __return_storage_ptr__->InlineBytes[8] = uVar1;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_U__TEscapedCharacter_D___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 141930650

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TEscapedCharacter<char8_t>_>::Copy
          (FInlineDataStorage<TEscapedCharacter<char8_t>_> *this,
          FExpressionNode *__return_storage_ptr__)

{
  uchar uVar1;
  
  uVar1 = (this->Value).Character;
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<char8_t>_>::GetTypeId(void)'
       ::__l2::Global;
  __return_storage_ptr__->InlineBytes[8] = uVar1;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_U__TEscapedCharacter__Q___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 141930680

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TEscapedCharacter<wchar_t>_>::Copy
          (FInlineDataStorage<TEscapedCharacter<wchar_t>_> *this,
          FExpressionNode *__return_storage_ptr__)

{
  wchar_t wVar1;
  
  wVar1 = (this->Value).Character;
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<wchar_t>_>::GetTypeId(void)'
       ::__l2::Global;
  *(wchar_t *)(__return_storage_ptr__->InlineBytes + 8) = wVar1;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_U__TEscapedCharacter__W___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1419306b0

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TIndexSpecifier<char>_>::Copy
          (FInlineDataStorage<TIndexSpecifier<char>_> *this,FExpressionNode *__return_storage_ptr__)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)&this->Value;
  pcVar2 = (this->Value).EntireToken.TokenStart;
  pcVar3 = (this->Value).EntireToken.TokenEnd;
  uVar4 = *(undefined8 *)&(this->Value).EntireToken.LineNumber;
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<char>_>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_U__TIndexSpecifier_D___Impl__6B_;
  *(undefined8 *)(__return_storage_ptr__->InlineBytes + 8) = uVar1;
  *(char **)(__return_storage_ptr__->InlineBytes + 0x10) = pcVar2;
  *(char **)(__return_storage_ptr__->InlineBytes + 0x18) = pcVar3;
  *(undefined8 *)(__return_storage_ptr__->InlineBytes + 0x20) = uVar4;
  return __return_storage_ptr__;
}

// Copy @ 1419306e0

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TIndexSpecifier<char8_t>_>::Copy
          (FInlineDataStorage<TIndexSpecifier<char8_t>_> *this,
          FExpressionNode *__return_storage_ptr__)

{
  undefined8 uVar1;
  uchar *puVar2;
  uchar *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)&this->Value;
  puVar2 = (this->Value).EntireToken.TokenStart;
  puVar3 = (this->Value).EntireToken.TokenEnd;
  uVar4 = *(undefined8 *)&(this->Value).EntireToken.LineNumber;
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<char8_t>_>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_U__TIndexSpecifier__Q___Impl__6B_;
  *(undefined8 *)(__return_storage_ptr__->InlineBytes + 8) = uVar1;
  *(uchar **)(__return_storage_ptr__->InlineBytes + 0x10) = puVar2;
  *(uchar **)(__return_storage_ptr__->InlineBytes + 0x18) = puVar3;
  *(undefined8 *)(__return_storage_ptr__->InlineBytes + 0x20) = uVar4;
  return __return_storage_ptr__;
}

// Copy @ 141930710

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TIndexSpecifier<wchar_t>_>::Copy
          (FInlineDataStorage<TIndexSpecifier<wchar_t>_> *this,
          FExpressionNode *__return_storage_ptr__)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)&this->Value;
  pwVar2 = (this->Value).EntireToken.TokenStart;
  pwVar3 = (this->Value).EntireToken.TokenEnd;
  uVar4 = *(undefined8 *)&(this->Value).EntireToken.LineNumber;
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<wchar_t>_>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_U__TIndexSpecifier__W___Impl__6B_;
  *(undefined8 *)(__return_storage_ptr__->InlineBytes + 8) = uVar1;
  *(wchar_t **)(__return_storage_ptr__->InlineBytes + 0x10) = pwVar2;
  *(wchar_t **)(__return_storage_ptr__->InlineBytes + 0x18) = pwVar3;
  *(undefined8 *)(__return_storage_ptr__->InlineBytes + 0x20) = uVar4;
  return __return_storage_ptr__;
}

// Copy @ 141930740

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TStringLiteral<char>_>::Copy
          (FInlineDataStorage<TStringLiteral<char>_> *this,FExpressionNode *__return_storage_ptr__)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = (this->Value).String.TokenStart;
  pcVar2 = (this->Value).String.TokenEnd;
  uVar3 = *(undefined8 *)&(this->Value).String.LineNumber;
  uVar4 = *(undefined8 *)&(this->Value).Len;
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<char>_>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_U__TStringLiteral_D___Impl__6B_;
  *(char **)(__return_storage_ptr__->InlineBytes + 8) = pcVar1;
  *(char **)(__return_storage_ptr__->InlineBytes + 0x10) = pcVar2;
  *(undefined8 *)(__return_storage_ptr__->InlineBytes + 0x18) = uVar3;
  *(undefined8 *)(__return_storage_ptr__->InlineBytes + 0x20) = uVar4;
  return __return_storage_ptr__;
}

// Copy @ 141930770

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TStringLiteral<char8_t>_>::Copy
          (FInlineDataStorage<TStringLiteral<char8_t>_> *this,
          FExpressionNode *__return_storage_ptr__)

{
  uchar *puVar1;
  uchar *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (this->Value).String.TokenStart;
  puVar2 = (this->Value).String.TokenEnd;
  uVar3 = *(undefined8 *)&(this->Value).String.LineNumber;
  uVar4 = *(undefined8 *)&(this->Value).Len;
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<char8_t>_>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_U__TStringLiteral__Q___Impl__6B_;
  *(uchar **)(__return_storage_ptr__->InlineBytes + 8) = puVar1;
  *(uchar **)(__return_storage_ptr__->InlineBytes + 0x10) = puVar2;
  *(undefined8 *)(__return_storage_ptr__->InlineBytes + 0x18) = uVar3;
  *(undefined8 *)(__return_storage_ptr__->InlineBytes + 0x20) = uVar4;
  return __return_storage_ptr__;
}

// Copy @ 1419307a0

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TStringLiteral<wchar_t>_>::Copy
          (FInlineDataStorage<TStringLiteral<wchar_t>_> *this,
          FExpressionNode *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pwVar1 = (this->Value).String.TokenStart;
  pwVar2 = (this->Value).String.TokenEnd;
  uVar3 = *(undefined8 *)&(this->Value).String.LineNumber;
  uVar4 = *(undefined8 *)&(this->Value).Len;
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<wchar_t>_>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_U__TStringLiteral__W___Impl__6B_;
  *(wchar_t **)(__return_storage_ptr__->InlineBytes + 8) = pwVar1;
  *(wchar_t **)(__return_storage_ptr__->InlineBytes + 0x10) = pwVar2;
  *(undefined8 *)(__return_storage_ptr__->InlineBytes + 0x18) = uVar3;
  *(undefined8 *)(__return_storage_ptr__->InlineBytes + 0x20) = uVar4;
  return __return_storage_ptr__;
}

// Copy @ 1419307d0

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FAnd>::Copy
          (FInlineDataStorage<TextFilterExpressionParser::FAnd> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FAnd>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFAnd_TextFilterExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1419307f0

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FEqual>::Copy
          (FInlineDataStorage<TextFilterExpressionParser::FEqual> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FEqual>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFEqual_TextFilterExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 141930810

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FGreater>::Copy
          (FInlineDataStorage<TextFilterExpressionParser::FGreater> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreater>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFGreater_TextFilterExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 141930830

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FGreaterOrEqual>::Copy
          (FInlineDataStorage<TextFilterExpressionParser::FGreaterOrEqual> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreaterOrEqual>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFGreaterOrEqual_TextFilterExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 141930850

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FLess>::Copy
          (FInlineDataStorage<TextFilterExpressionParser::FLess> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLess>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFLess_TextFilterExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 141930870

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FLessOrEqual>::Copy
          (FInlineDataStorage<TextFilterExpressionParser::FLessOrEqual> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLessOrEqual>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFLessOrEqual_TextFilterExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 141930890

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FNot>::Copy
          (FInlineDataStorage<TextFilterExpressionParser::FNot> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNot>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFNot_TextFilterExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1419308b0

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FNotEqual>::Copy
          (FInlineDataStorage<TextFilterExpressionParser::FNotEqual> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNotEqual>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFNotEqual_TextFilterExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1419308d0

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FOr>::Copy
          (FInlineDataStorage<TextFilterExpressionParser::FOr> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FOr>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFOr_TextFilterExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 1419308f0

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FSubExpressionEnd>::Copy
          (FInlineDataStorage<TextFilterExpressionParser::FSubExpressionEnd> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFSubExpressionEnd_TextFilterExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 141930910

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FSubExpressionStart>::Copy
          (FInlineDataStorage<TextFilterExpressionParser::FSubExpressionStart> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_UFSubExpressionStart_TextFilterExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 141930930

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FFunction>::Copy
          (FInlineDataStorage<TextFilterExpressionParser::FFunction> *this,
          FExpressionNode *__return_storage_ptr__)

{
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FFunction>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FInlineDataStorage_VFFunction_TextFilterExpressionParser___Impl__6B_;
  return __return_storage_ptr__;
}

// Copy @ 141930950

FExpressionNode * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FTextToken>::Copy
          (FInlineDataStorage<TextFilterExpressionParser::FTextToken> *this,
          FExpressionNode *__return_storage_ptr__)

{
  FTextToken *pFVar1;
  FTextToken local_38;
  
  pFVar1 = TextFilterExpressionParser::FTextToken::FTextToken(&local_38,&this->Value);
  FExpressionNode::FExpressionNode<TextFilterExpressionParser::FTextToken>
            (__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// MoveAssign @ 141956c70

void __thiscall
Impl::FInlineDataStorage<TEscapedCharacter<char>_>::MoveAssign
          (FInlineDataStorage<TEscapedCharacter<char>_> *this,uchar *param_1)

{
  param_1[8] = (this->Value).Character;
  return;
}

// MoveAssign @ 141956c80

void __thiscall
Impl::FInlineDataStorage<TEscapedCharacter<char8_t>_>::MoveAssign
          (FInlineDataStorage<TEscapedCharacter<char8_t>_> *this,uchar *param_1)

{
  param_1[8] = (this->Value).Character;
  return;
}

// MoveAssign @ 141956c90

void __thiscall
Impl::FInlineDataStorage<TEscapedCharacter<wchar_t>_>::MoveAssign
          (FInlineDataStorage<TEscapedCharacter<wchar_t>_> *this,uchar *param_1)

{
  *(wchar_t *)(param_1 + 8) = (this->Value).Character;
  return;
}

// MoveAssign @ 141956ca0

void __thiscall
Impl::FInlineDataStorage<TIndexSpecifier<char>_>::MoveAssign
          (FInlineDataStorage<TIndexSpecifier<char>_> *this,uchar *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (this->Value).EntireToken.TokenStart;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)&this->Value;
  *(char **)(param_1 + 0x10) = pcVar1;
  uVar2 = *(undefined8 *)&(this->Value).EntireToken.LineNumber;
  *(char **)(param_1 + 0x18) = (this->Value).EntireToken.TokenEnd;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}

// MoveAssign @ 141956cc0

void __thiscall
Impl::FInlineDataStorage<TIndexSpecifier<char8_t>_>::MoveAssign
          (FInlineDataStorage<TIndexSpecifier<char8_t>_> *this,uchar *param_1)

{
  uchar *puVar1;
  undefined8 uVar2;
  
  puVar1 = (this->Value).EntireToken.TokenStart;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)&this->Value;
  *(uchar **)(param_1 + 0x10) = puVar1;
  uVar2 = *(undefined8 *)&(this->Value).EntireToken.LineNumber;
  *(uchar **)(param_1 + 0x18) = (this->Value).EntireToken.TokenEnd;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}

// MoveAssign @ 141956ce0

void __thiscall
Impl::FInlineDataStorage<TIndexSpecifier<wchar_t>_>::MoveAssign
          (FInlineDataStorage<TIndexSpecifier<wchar_t>_> *this,uchar *param_1)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  
  pwVar1 = (this->Value).EntireToken.TokenStart;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)&this->Value;
  *(wchar_t **)(param_1 + 0x10) = pwVar1;
  uVar2 = *(undefined8 *)&(this->Value).EntireToken.LineNumber;
  *(wchar_t **)(param_1 + 0x18) = (this->Value).EntireToken.TokenEnd;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}

// MoveAssign @ 141956d00

void __thiscall
Impl::FInlineDataStorage<TStringLiteral<char>_>::MoveAssign
          (FInlineDataStorage<TStringLiteral<char>_> *this,uchar *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (this->Value).String.TokenEnd;
  *(char **)(param_1 + 8) = (this->Value).String.TokenStart;
  *(char **)(param_1 + 0x10) = pcVar1;
  uVar2 = *(undefined8 *)&(this->Value).Len;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)&(this->Value).String.LineNumber;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}

// MoveAssign @ 141956d20

void __thiscall
Impl::FInlineDataStorage<TStringLiteral<char8_t>_>::MoveAssign
          (FInlineDataStorage<TStringLiteral<char8_t>_> *this,uchar *param_1)

{
  uchar *puVar1;
  undefined8 uVar2;
  
  puVar1 = (this->Value).String.TokenEnd;
  *(uchar **)(param_1 + 8) = (this->Value).String.TokenStart;
  *(uchar **)(param_1 + 0x10) = puVar1;
  uVar2 = *(undefined8 *)&(this->Value).Len;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)&(this->Value).String.LineNumber;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}

// MoveAssign @ 141956d40

void __thiscall
Impl::FInlineDataStorage<TStringLiteral<wchar_t>_>::MoveAssign
          (FInlineDataStorage<TStringLiteral<wchar_t>_> *this,uchar *param_1)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  
  pwVar1 = (this->Value).String.TokenEnd;
  *(wchar_t **)(param_1 + 8) = (this->Value).String.TokenStart;
  *(wchar_t **)(param_1 + 0x10) = pwVar1;
  uVar2 = *(undefined8 *)&(this->Value).Len;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)&(this->Value).String.LineNumber;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}

// MoveAssign @ 141956d60

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FAnd>::MoveAssign
          (FInlineDataStorage<TextFilterExpressionParser::FAnd> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 141956d70

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FEqual>::MoveAssign
          (FInlineDataStorage<TextFilterExpressionParser::FEqual> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 141956d80

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FGreater>::MoveAssign
          (FInlineDataStorage<TextFilterExpressionParser::FGreater> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 141956d90

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FGreaterOrEqual>::MoveAssign
          (FInlineDataStorage<TextFilterExpressionParser::FGreaterOrEqual> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 141956da0

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FLess>::MoveAssign
          (FInlineDataStorage<TextFilterExpressionParser::FLess> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 141956db0

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FLessOrEqual>::MoveAssign
          (FInlineDataStorage<TextFilterExpressionParser::FLessOrEqual> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 141956dc0

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FNot>::MoveAssign
          (FInlineDataStorage<TextFilterExpressionParser::FNot> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 141956dd0

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FNotEqual>::MoveAssign
          (FInlineDataStorage<TextFilterExpressionParser::FNotEqual> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 141956de0

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FOr>::MoveAssign
          (FInlineDataStorage<TextFilterExpressionParser::FOr> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 141956df0

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FSubExpressionEnd>::MoveAssign
          (FInlineDataStorage<TextFilterExpressionParser::FSubExpressionEnd> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 141956e00

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FSubExpressionStart>::MoveAssign
          (FInlineDataStorage<TextFilterExpressionParser::FSubExpressionStart> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 141956e10

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FFunction>::MoveAssign
          (FInlineDataStorage<TextFilterExpressionParser::FFunction> *this,uchar *param_1)

{
  return;
}

// MoveAssign @ 141956e20

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FTextToken>::MoveAssign
          (FInlineDataStorage<TextFilterExpressionParser::FTextToken> *this,uchar *param_1)

{
  FTextToken *pFVar1;
  uchar *puVar2;
  TArray<char,TSizedDefaultAllocator<32>_> *pTVar3;
  
  pFVar1 = &this->Value;
  puVar2 = param_1 + 8;
  if ((FTextToken *)puVar2 != pFVar1) {
    if (*(void **)puVar2 != (void *)0x0) {
      FMemory::Free(*(void **)puVar2);
    }
    *(FScriptContainerElement **)puVar2 =
         (pFVar1->String).InternalString.Data.AllocatorInstance.Data;
    (pFVar1->String).InternalString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(param_1 + 0x10) = (this->Value).String.InternalString.Data.ArrayNum;
    *(int *)(param_1 + 0x14) = (this->Value).String.InternalString.Data.ArrayMax;
    (this->Value).String.InternalString.Data.ArrayNum = 0;
    (this->Value).String.InternalString.Data.ArrayMax = 0;
  }
  pTVar3 = &(this->Value).String.InternalStringAnsi;
  puVar2 = param_1 + 0x18;
  if ((TArray<char,TSizedDefaultAllocator<32>_> *)puVar2 != pTVar3) {
    if (*(void **)puVar2 != (void *)0x0) {
      FMemory::Free(*(void **)puVar2);
    }
    *(FScriptContainerElement **)puVar2 = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)(param_1 + 0x20) = (this->Value).String.InternalStringAnsi.ArrayNum;
    *(int *)(param_1 + 0x24) = (this->Value).String.InternalStringAnsi.ArrayMax;
    (this->Value).String.InternalStringAnsi.ArrayNum = 0;
    (this->Value).String.InternalStringAnsi.ArrayMax = 0;
  }
  param_1[0x28] = (this->Value).TextComparisonMode;
  param_1[0x29] = (this->Value).InvertResult;
  return;
}

// Reseat @ 141966df0

void __thiscall
Impl::FInlineDataStorage<TEscapedCharacter<char>_>::Reseat
          (FInlineDataStorage<TEscapedCharacter<char>_> *this,uchar *param_1)

{
  uchar uVar1;
  
  uVar1 = (this->Value).Character;
  *(undefined ***)param_1 = &___7__FInlineDataStorage_U__TEscapedCharacter_D___Impl__6B_;
  param_1[8] = uVar1;
  return;
}

// Reseat @ 141966e10

void __thiscall
Impl::FInlineDataStorage<TEscapedCharacter<char8_t>_>::Reseat
          (FInlineDataStorage<TEscapedCharacter<char8_t>_> *this,uchar *param_1)

{
  uchar uVar1;
  
  uVar1 = (this->Value).Character;
  *(undefined ***)param_1 = &___7__FInlineDataStorage_U__TEscapedCharacter__Q___Impl__6B_;
  param_1[8] = uVar1;
  return;
}

// Reseat @ 141966e30

void __thiscall
Impl::FInlineDataStorage<TEscapedCharacter<wchar_t>_>::Reseat
          (FInlineDataStorage<TEscapedCharacter<wchar_t>_> *this,uchar *param_1)

{
  wchar_t wVar1;
  
  wVar1 = (this->Value).Character;
  *(undefined ***)param_1 = &___7__FInlineDataStorage_U__TEscapedCharacter__W___Impl__6B_;
  *(wchar_t *)(param_1 + 8) = wVar1;
  return;
}

// Reseat @ 141966e50

void __thiscall
Impl::FInlineDataStorage<TIndexSpecifier<char>_>::Reseat
          (FInlineDataStorage<TIndexSpecifier<char>_> *this,uchar *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)&this->Value;
  pcVar2 = (this->Value).EntireToken.TokenStart;
  pcVar3 = (this->Value).EntireToken.TokenEnd;
  uVar4 = *(undefined8 *)&(this->Value).EntireToken.LineNumber;
  *(undefined ***)param_1 = &___7__FInlineDataStorage_U__TIndexSpecifier_D___Impl__6B_;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(char **)(param_1 + 0x10) = pcVar2;
  *(char **)(param_1 + 0x18) = pcVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  return;
}

// Reseat @ 141966e80

void __thiscall
Impl::FInlineDataStorage<TIndexSpecifier<char8_t>_>::Reseat
          (FInlineDataStorage<TIndexSpecifier<char8_t>_> *this,uchar *param_1)

{
  undefined8 uVar1;
  uchar *puVar2;
  uchar *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)&this->Value;
  puVar2 = (this->Value).EntireToken.TokenStart;
  puVar3 = (this->Value).EntireToken.TokenEnd;
  uVar4 = *(undefined8 *)&(this->Value).EntireToken.LineNumber;
  *(undefined ***)param_1 = &___7__FInlineDataStorage_U__TIndexSpecifier__Q___Impl__6B_;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(uchar **)(param_1 + 0x10) = puVar2;
  *(uchar **)(param_1 + 0x18) = puVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  return;
}

// Reseat @ 141966eb0

void __thiscall
Impl::FInlineDataStorage<TIndexSpecifier<wchar_t>_>::Reseat
          (FInlineDataStorage<TIndexSpecifier<wchar_t>_> *this,uchar *param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)&this->Value;
  pwVar2 = (this->Value).EntireToken.TokenStart;
  pwVar3 = (this->Value).EntireToken.TokenEnd;
  uVar4 = *(undefined8 *)&(this->Value).EntireToken.LineNumber;
  *(undefined ***)param_1 = &___7__FInlineDataStorage_U__TIndexSpecifier__W___Impl__6B_;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(wchar_t **)(param_1 + 0x10) = pwVar2;
  *(wchar_t **)(param_1 + 0x18) = pwVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  return;
}

// Reseat @ 141966ee0

void __thiscall
Impl::FInlineDataStorage<TStringLiteral<char>_>::Reseat
          (FInlineDataStorage<TStringLiteral<char>_> *this,uchar *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = (this->Value).String.TokenStart;
  pcVar2 = (this->Value).String.TokenEnd;
  uVar3 = *(undefined8 *)&(this->Value).String.LineNumber;
  uVar4 = *(undefined8 *)&(this->Value).Len;
  *(undefined ***)param_1 = &___7__FInlineDataStorage_U__TStringLiteral_D___Impl__6B_;
  *(char **)(param_1 + 8) = pcVar1;
  *(char **)(param_1 + 0x10) = pcVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  return;
}

// Reseat @ 141966f10

void __thiscall
Impl::FInlineDataStorage<TStringLiteral<char8_t>_>::Reseat
          (FInlineDataStorage<TStringLiteral<char8_t>_> *this,uchar *param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (this->Value).String.TokenStart;
  puVar2 = (this->Value).String.TokenEnd;
  uVar3 = *(undefined8 *)&(this->Value).String.LineNumber;
  uVar4 = *(undefined8 *)&(this->Value).Len;
  *(undefined ***)param_1 = &___7__FInlineDataStorage_U__TStringLiteral__Q___Impl__6B_;
  *(uchar **)(param_1 + 8) = puVar1;
  *(uchar **)(param_1 + 0x10) = puVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  return;
}

// Reseat @ 141966f40

void __thiscall
Impl::FInlineDataStorage<TStringLiteral<wchar_t>_>::Reseat
          (FInlineDataStorage<TStringLiteral<wchar_t>_> *this,uchar *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pwVar1 = (this->Value).String.TokenStart;
  pwVar2 = (this->Value).String.TokenEnd;
  uVar3 = *(undefined8 *)&(this->Value).String.LineNumber;
  uVar4 = *(undefined8 *)&(this->Value).Len;
  *(undefined ***)param_1 = &___7__FInlineDataStorage_U__TStringLiteral__W___Impl__6B_;
  *(wchar_t **)(param_1 + 8) = pwVar1;
  *(wchar_t **)(param_1 + 0x10) = pwVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  return;
}

// Reseat @ 141966f70

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FAnd>::Reseat
          (FInlineDataStorage<TextFilterExpressionParser::FAnd> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFAnd_TextFilterExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 141966f90

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FEqual>::Reseat
          (FInlineDataStorage<TextFilterExpressionParser::FEqual> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFEqual_TextFilterExpressionParser___Impl__6B_
  ;
  return;
}

// Reseat @ 141966fb0

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FGreater>::Reseat
          (FInlineDataStorage<TextFilterExpressionParser::FGreater> *this,uchar *param_1)

{
  *(undefined ***)param_1 =
       &___7__FInlineDataStorage_UFGreater_TextFilterExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 141966fd0

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FGreaterOrEqual>::Reseat
          (FInlineDataStorage<TextFilterExpressionParser::FGreaterOrEqual> *this,uchar *param_1)

{
  *(undefined ***)param_1 =
       &___7__FInlineDataStorage_UFGreaterOrEqual_TextFilterExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 141966ff0

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FLess>::Reseat
          (FInlineDataStorage<TextFilterExpressionParser::FLess> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFLess_TextFilterExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 141967010

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FLessOrEqual>::Reseat
          (FInlineDataStorage<TextFilterExpressionParser::FLessOrEqual> *this,uchar *param_1)

{
  *(undefined ***)param_1 =
       &___7__FInlineDataStorage_UFLessOrEqual_TextFilterExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 141967030

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FNot>::Reseat
          (FInlineDataStorage<TextFilterExpressionParser::FNot> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFNot_TextFilterExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 141967050

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FNotEqual>::Reseat
          (FInlineDataStorage<TextFilterExpressionParser::FNotEqual> *this,uchar *param_1)

{
  *(undefined ***)param_1 =
       &___7__FInlineDataStorage_UFNotEqual_TextFilterExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 141967070

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FOr>::Reseat
          (FInlineDataStorage<TextFilterExpressionParser::FOr> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FInlineDataStorage_UFOr_TextFilterExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 141967090

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FSubExpressionEnd>::Reseat
          (FInlineDataStorage<TextFilterExpressionParser::FSubExpressionEnd> *this,uchar *param_1)

{
  *(undefined ***)param_1 =
       &___7__FInlineDataStorage_UFSubExpressionEnd_TextFilterExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 1419670b0

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FSubExpressionStart>::Reseat
          (FInlineDataStorage<TextFilterExpressionParser::FSubExpressionStart> *this,uchar *param_1)

{
  *(undefined ***)param_1 =
       &___7__FInlineDataStorage_UFSubExpressionStart_TextFilterExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 1419670d0

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FFunction>::Reseat
          (FInlineDataStorage<TextFilterExpressionParser::FFunction> *this,uchar *param_1)

{
  *(undefined ***)param_1 =
       &___7__FInlineDataStorage_VFFunction_TextFilterExpressionParser___Impl__6B_;
  return;
}

// Reseat @ 1419670f0

void __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FTextToken>::Reseat
          (FInlineDataStorage<TextFilterExpressionParser::FTextToken> *this,uchar *param_1)

{
  ETextFilterTextComparisonMode EVar1;
  EInvertResult EVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  
  pFVar7 = (this->Value).String.InternalString.Data.AllocatorInstance.Data;
  (this->Value).String.InternalString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (this->Value).String.InternalString.Data.ArrayNum;
  iVar4 = (this->Value).String.InternalString.Data.ArrayMax;
  (this->Value).String.InternalString.Data.ArrayNum = 0;
  (this->Value).String.InternalString.Data.ArrayMax = 0;
  pFVar8 = (this->Value).String.InternalStringAnsi.AllocatorInstance.Data;
  (this->Value).String.InternalStringAnsi.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (this->Value).String.InternalStringAnsi.ArrayNum;
  iVar6 = (this->Value).String.InternalStringAnsi.ArrayMax;
  (this->Value).String.InternalStringAnsi.ArrayNum = 0;
  (this->Value).String.InternalStringAnsi.ArrayMax = 0;
  EVar1 = (this->Value).TextComparisonMode;
  EVar2 = (this->Value).InvertResult;
  *(undefined ***)param_1 =
       &___7__FInlineDataStorage_VFTextToken_TextFilterExpressionParser___Impl__6B_;
  *(FScriptContainerElement **)(param_1 + 8) = pFVar7;
  *(int *)(param_1 + 0x10) = iVar3;
  *(int *)(param_1 + 0x14) = iVar4;
  *(FScriptContainerElement **)(param_1 + 0x18) = pFVar8;
  *(int *)(param_1 + 0x20) = iVar5;
  *(int *)(param_1 + 0x24) = iVar6;
  param_1[0x28] = EVar1;
  param_1[0x29] = EVar2;
  return;
}

