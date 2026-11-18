// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 21

// FExpressionNode<ExpressionParser::FBracketEnd> @ 14603b920

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FBracketEnd>
          (FExpressionNode *this,FBracketEnd param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FBracketEnd>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFBracketEnd_ExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<ExpressionParser::FBracketStart> @ 14603b940

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FBracketStart>
          (FExpressionNode *this,FBracketStart param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FBracketStart>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFBracketStart_ExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<ExpressionParser::FDropcodeDelimiter> @ 14603b960

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FDropcodeDelimiter>
          (FExpressionNode *this,FDropcodeDelimiter param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FDropcodeDelimiter>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFDropcodeDelimiter_ExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<ExpressionParser::FFrames> @ 14603b980

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FFrames>(FExpressionNode *this,FFrames param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FFrames>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFFrames_ExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<ExpressionParser::FHour> @ 14603b9a0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FHour>(FExpressionNode *this,FHour param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FHour>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes = &___7__FInlineDataStorage_UFHour_ExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<ExpressionParser::FMillisecond> @ 14603b9c0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FMillisecond>
          (FExpressionNode *this,FMillisecond param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMillisecond>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFMillisecond_ExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<ExpressionParser::FMinute> @ 14603b9e0

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FMinute>(FExpressionNode *this,FMinute param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinute>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFMinute_ExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<ExpressionParser::FSecond> @ 14603ba00

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FSecond>(FExpressionNode *this,FSecond param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSecond>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFSecond_ExpressionParser___Impl__6B_;
  return this;
}

// FExpressionNode<ExpressionParser::FTimecodeDelimiter> @ 14603ba20

FExpressionNode * __thiscall
FExpressionNode::FExpressionNode<ExpressionParser::FTimecodeDelimiter>
          (FExpressionNode *this,FTimecodeDelimiter param_1)

{
  this->TypeId = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FTimecodeDelimiter>::GetTypeId(void)'
                 ::__l2::Global;
  *(undefined ***)this->InlineBytes =
       &___7__FInlineDataStorage_UFTimecodeDelimiter_ExpressionParser___Impl__6B_;
  return this;
}

// Cast<ExpressionParser::FBracketEnd> @ 14603bd00

FBracketEnd * __thiscall FExpressionNode::Cast<ExpressionParser::FBracketEnd>(FExpressionNode *this)

{
  FBracketEnd *pFVar1;
  
  pFVar1 = (FBracketEnd *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FBracketEnd>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FBracketEnd>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FBracketEnd>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FBracketEnd>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FBracketEnd *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<ExpressionParser::FBracketStart> @ 14603bd40

FBracketStart * __thiscall
FExpressionNode::Cast<ExpressionParser::FBracketStart>(FExpressionNode *this)

{
  FBracketStart *pFVar1;
  
  pFVar1 = (FBracketStart *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FBracketStart>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FBracketStart>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FBracketStart>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FBracketStart>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FBracketStart *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<ExpressionParser::FDropcodeDelimiter> @ 14603bd80

FDropcodeDelimiter * __thiscall
FExpressionNode::Cast<ExpressionParser::FDropcodeDelimiter>(FExpressionNode *this)

{
  FDropcodeDelimiter *pFVar1;
  
  pFVar1 = (FDropcodeDelimiter *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FDropcodeDelimiter>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FDropcodeDelimiter>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FDropcodeDelimiter>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FDropcodeDelimiter>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FDropcodeDelimiter *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<ExpressionParser::FFrames> @ 14603bdc0

FFrames * __thiscall FExpressionNode::Cast<ExpressionParser::FFrames>(FExpressionNode *this)

{
  FFrames *pFVar1;
  
  pFVar1 = (FFrames *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FFrames>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FFrames>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FFrames>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FFrames>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FFrames *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<ExpressionParser::FHour> @ 14603be00

FHour * __thiscall FExpressionNode::Cast<ExpressionParser::FHour>(FExpressionNode *this)

{
  FHour *pFVar1;
  
  pFVar1 = (FHour *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FHour>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FHour>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FHour>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FHour>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FHour *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<ExpressionParser::FMillisecond> @ 14603be40

FMillisecond * __thiscall
FExpressionNode::Cast<ExpressionParser::FMillisecond>(FExpressionNode *this)

{
  FMillisecond *pFVar1;
  
  pFVar1 = (FMillisecond *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMillisecond>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMillisecond>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMillisecond>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMillisecond>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FMillisecond *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<ExpressionParser::FMinus> @ 14603be80

FMinus * __thiscall FExpressionNode::Cast<ExpressionParser::FMinus>(FExpressionNode *this)

{
  FMinus *pFVar1;
  
  pFVar1 = (FMinus *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FMinus *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<ExpressionParser::FMinute> @ 14603bec0

FMinute * __thiscall FExpressionNode::Cast<ExpressionParser::FMinute>(FExpressionNode *this)

{
  FMinute *pFVar1;
  
  pFVar1 = (FMinute *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinute>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinute>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinute>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinute>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FMinute *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<ExpressionParser::FPlus> @ 14603bf00

FPlus * __thiscall FExpressionNode::Cast<ExpressionParser::FPlus>(FExpressionNode *this)

{
  FPlus *pFVar1;
  
  pFVar1 = (FPlus *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FPlus *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<ExpressionParser::FSecond> @ 14603bf40

FSecond * __thiscall FExpressionNode::Cast<ExpressionParser::FSecond>(FExpressionNode *this)

{
  FSecond *pFVar1;
  
  pFVar1 = (FSecond *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSecond>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSecond>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSecond>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSecond>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FSecond *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<ExpressionParser::FStar> @ 14603bf80

FStar * __thiscall FExpressionNode::Cast<ExpressionParser::FStar>(FExpressionNode *this)

{
  FStar *pFVar1;
  
  pFVar1 = (FStar *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FStar *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

// Cast<ExpressionParser::FTimecodeDelimiter> @ 14603bfc0

FTimecodeDelimiter * __thiscall
FExpressionNode::Cast<ExpressionParser::FTimecodeDelimiter>(FExpressionNode *this)

{
  FTimecodeDelimiter *pFVar1;
  
  pFVar1 = (FTimecodeDelimiter *)0x0;
  if ((((this->TypeId).D ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FTimecodeDelimiter>::GetTypeId(void)'
        ::__l2::Global.D &&
       (this->TypeId).C ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FTimecodeDelimiter>::GetTypeId(void)'
       ::__l2::Global.C) &&
      (this->TypeId).B ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FTimecodeDelimiter>::GetTypeId(void)'
      ::__l2::Global.B) &&
      (this->TypeId).A ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FTimecodeDelimiter>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar1 = (FTimecodeDelimiter *)(this->InlineBytes + 8);
  }
  return pFVar1;
}

