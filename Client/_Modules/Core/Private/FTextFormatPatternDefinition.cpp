// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FTextFormatPatternDefinition @ 141736460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTextFormatPatternDefinition * __thiscall
FTextFormatPatternDefinition::FTextFormatPatternDefinition(FTextFormatPatternDefinition *this)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  FTextFormatPatternDefinition *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  this->EscapeChar = L'`';
  this->ArgStartChar = L'{';
  this->_padding_ = 0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  this->_padding_ = 0;
  this->ArgEndChar = L'}';
  this->ArgModChar = L'|';
  (this->TextFormatDefinitions).bIgnoreWhitespace = false;
  (this->TextFormatDefinitions).Definitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextFormatDefinitions).Definitions.ArrayNum = 0;
  (this->TextFormatDefinitions).Definitions.ArrayMax = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_1>,TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  local_20 = (undefined ***)0x0;
  local_30 = this;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TextFormatDefinitions,
             (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_2>,TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  local_30 = this;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TextFormatDefinitions,
             (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_3>,TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  local_30 = this;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TextFormatDefinitions,
             (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_4>,TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  local_30 = this;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TextFormatDefinitions,
             (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return this;
}

// operator() @ 14173b880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __thiscall
`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_1>::operator()
          (void *this,TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  wchar_t wVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TTokenStream<wchar_t> *this_00;
  TOptional<TStringToken<wchar_t>_> *pTVar5;
  TOptional<FExpressionError> *pTVar6;
  wchar_t *pwVar7;
  int iVar8;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  int iStack_100;
  int iStack_fc;
  longlong local_f8;
  code *local_f0;
  longlong *local_e8;
  TOptional<TStringToken<wchar_t>_> local_e0;
  TOptional<TStringToken<wchar_t>_> local_c0;
  TOptional<TStringToken<wchar_t>_> local_a0;
  undefined1 local_78 [24];
  wchar_t *local_60;
  uchar auStack_58 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  lVar2 = *(longlong *)this;
  this_00 = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseSymbol
            (this_00,&local_c0,*(wchar_t *)(lVar2 + 0x12),(TStringToken<wchar_t> *)0x0);
  if (local_c0.bIsSet != false) {
    local_e8 = &local_f8;
    local_f0 = UE::Core::Private::Function::
               TFunctionRefCaller<`TextFormatTokens::ParseArgument'::__l2::<lambda_1>,enum_EParseState,wchar_t>
               ::Call;
    local_f8 = lVar2;
    TTokenStream<wchar_t>::ParseToken
              (this_00,&local_e0,(TFunctionRef<EParseState___cdecl(wchar_t)> *)&local_f0,
               &local_c0.TypedValue);
    if ((local_e0.bIsSet != false) &&
       (pTVar5 = TTokenStream<wchar_t>::ParseSymbol
                           (this_00,&local_a0,*(wchar_t *)(lVar2 + 0x14),&local_c0.TypedValue),
       pTVar5->bIsSet != false)) {
      if ((local_e0.bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TOptional<FExpressionError> *)(*pcVar3)();
        return pTVar6;
      }
      local_108 = local_e0.TypedValue.TokenStart;
      iStack_100 = (int)((longlong)local_e0.TypedValue.TokenEnd -
                         (longlong)local_e0.TypedValue.TokenStart >> 1);
      iStack_fc = -1;
      if (0 < iStack_100) {
        iVar8 = 0;
        iStack_fc = 0;
        pwVar7 = local_e0.TypedValue.TokenStart;
        do {
          wVar1 = *pwVar7;
          if (9 < (ushort)(wVar1 + L'￐')) {
            iStack_fc = -1;
            break;
          }
          iVar8 = iVar8 + 1;
          pwVar7 = pwVar7 + 1;
          iStack_fc = (uint)(ushort)wVar1 + (iStack_fc * 5 + -0x18) * 2;
        } while (iVar8 < iStack_100);
      }
      local_78._16_8_ =
           &___7__FInlineDataStorage_UFArgumentTokenSpecifier_TextFormatTokens___Impl__6B_;
      local_78._0_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
           ::__l2::Global.A;
      local_78._4_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
           ::__l2::Global.B;
      local_78._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
           ::__l2::Global.C;
      local_78._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
           ::__l2::Global.D;
      auStack_58[4] = (undefined1)iStack_fc;
      auStack_58[5] = iStack_fc._1_1_;
      auStack_58[6] = iStack_fc._2_1_;
      auStack_58[7] = iStack_fc._3_1_;
      auStack_58[0] = (char)iStack_100;
      auStack_58[1] = (char)((uint)iStack_100 >> 8);
      auStack_58[2] = (char)((uint)iStack_100 >> 0x10);
      auStack_58[3] = (char)((uint)iStack_100 >> 0x18);
      local_60 = local_e0.TypedValue.TokenStart;
      TExpressionTokenConsumer<wchar_t>::Add
                (param_1,&local_c0.TypedValue,(FExpressionNode *)local_78);
      FExpressionNode::~FExpressionNode((FExpressionNode *)local_78);
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// operator() @ 14173f3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __thiscall
`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_3>::operator()
          (void *this,TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  longlong lVar1;
  TTokenStream<wchar_t> *pTVar2;
  undefined1 auStack_c8 [32];
  TOptional<TStringToken<wchar_t>_> local_a8;
  TOptional<TStringToken<wchar_t>_> local_88;
  undefined1 local_68 [24];
  wchar_t local_50;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  lVar1 = *(longlong *)this;
  pTVar2 = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseSymbol
            (pTVar2,&local_a8,*(wchar_t *)(lVar1 + 0x10),(TStringToken<wchar_t> *)0x0);
  if (local_a8.bIsSet != false) {
    pTVar2 = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
    TTokenStream<wchar_t>::ParseSymbol(pTVar2,&local_88,&local_a8.TypedValue);
    if ((local_88.bIsSet != false) &&
       ((((local_50 = *local_88.TypedValue.TokenStart, local_50 == *(wchar_t *)(lVar1 + 0x10) ||
          (local_50 == *(wchar_t *)(lVar1 + 0x12))) || (local_50 == *(wchar_t *)(lVar1 + 0x14))) ||
        (local_50 == *(wchar_t *)(lVar1 + 0x16))))) {
      local_68._16_8_ = &___7__FInlineDataStorage_UFEscapedCharacter_TextFormatTokens___Impl__6B_;
      local_68._0_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
           ::__l2::Global.A;
      local_68._4_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
           ::__l2::Global.B;
      local_68._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
           ::__l2::Global.C;
      local_68._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
           ::__l2::Global.D;
      TExpressionTokenConsumer<wchar_t>::Add
                (param_1,&local_a8.TypedValue,(FExpressionNode *)local_68);
      FExpressionNode::~FExpressionNode((FExpressionNode *)local_68);
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// operator() @ 14173fc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __thiscall
`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_4>::operator()
          (void *this,TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  undefined8 uVar1;
  undefined1 **ppuVar2;
  TTokenStream<wchar_t> *this_00;
  TOptional<TStringToken<wchar_t>_> *pTVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  TOptional<TStringToken<wchar_t>_> local_b0;
  code *local_90;
  undefined1 **local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined1 local_68 [24];
  wchar_t *local_50;
  uchar local_48 [32];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  uVar1 = *(undefined8 *)this;
  this_00 = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  local_80 = local_b8;
  local_b0.bIsSet = false;
  local_88 = &local_80;
  local_b8[0] = 1;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`TextFormatTokens::ParseLiteral'::__l3::<lambda_1>,enum_EParseState,wchar_t>
             ::Call;
  local_78 = uVar1;
  pTVar3 = TTokenStream<wchar_t>::ParseToken
                     (this_00,(TOptional<TStringToken<wchar_t>_> *)local_68,
                      (TFunctionRef<EParseState___cdecl(wchar_t)> *)&local_90,
                      (TStringToken<wchar_t> *)0x0);
  ppuVar2 = local_88;
  if (pTVar3 == &local_b0) {
    if (local_b0.bIsSet == false) goto LAB_14173fd63;
  }
  else {
    if (pTVar3->bIsSet == false) goto LAB_14173fd63;
    local_b0.TypedValue.TokenStart = (pTVar3->TypedValue).TokenStart;
    local_b0.TypedValue.TokenEnd = (pTVar3->TypedValue).TokenEnd;
    local_b0.TypedValue.LineNumber = (pTVar3->TypedValue).LineNumber;
    local_b0.TypedValue.CharacterIndex = (pTVar3->TypedValue).CharacterIndex;
    local_b0.bIsSet = true;
  }
  local_68._16_8_ = &___7__FInlineDataStorage_UFStringLiteral_TextFormatTokens___Impl__6B_;
  local_50 = local_b0.TypedValue.TokenStart;
  local_48._0_4_ =
       (undefined4)
       ((longlong)local_b0.TypedValue.TokenEnd - (longlong)local_b0.TypedValue.TokenStart >> 1);
  local_68._0_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
       ::__l2::Global.A;
  local_68._4_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
       ::__l2::Global.B;
  local_68._8_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
       ::__l2::Global.C;
  local_68._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
       ::__l2::Global.D;
  local_48[4] = local_88._4_1_;
  local_48[5] = local_88._5_1_;
  local_48[6] = local_88._6_1_;
  local_48[7] = local_88._7_1_;
  local_88 = ppuVar2;
  TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_b0.TypedValue,(FExpressionNode *)local_68);
  FExpressionNode::~FExpressionNode((FExpressionNode *)local_68);
LAB_14173fd63:
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetDefault @ 14175c370

TSharedRef<FTextFormatPatternDefinition_const_,1> * __cdecl
FTextFormatPatternDefinition::GetDefault
          (TSharedRef<FTextFormatPatternDefinition_const_,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  TSharedRef<FTextFormatPatternDefinition,1> *pTVar3;
  TSharedRef<FTextFormatPatternDefinition,1> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pTVar3 = MakeShared<FTextFormatPatternDefinition,1>(&local_18);
      DefaultFormatPatternDefinition.Object = pTVar3->Object;
      DefaultFormatPatternDefinition.SharedReferenceCount.ReferenceController =
           (pTVar3->SharedReferenceCount).ReferenceController;
      if (DefaultFormatPatternDefinition.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (DefaultFormatPatternDefinition.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(DefaultFormatPatternDefinition.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      atexit(`FTextFormatPatternDefinition::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__DefaultFormatPatternDefinition__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->Object = DefaultFormatPatternDefinition.Object;
  FVar2 = DefaultFormatPatternDefinition.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       DefaultFormatPatternDefinition.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetTextFormatDefinitions @ 141761670

TTokenDefinitions<wchar_t> * __thiscall
FTextFormatPatternDefinition::GetTextFormatDefinitions(FTextFormatPatternDefinition *this)

{
  return &this->TextFormatDefinitions;
}

