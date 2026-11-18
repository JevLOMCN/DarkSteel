// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 90

// FromString @ 1429369a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<signed_char> __thiscall
TDefaultNumericTypeInterface<signed_char>::FromString
          (TDefaultNumericTypeInterface<signed_char> *this,FString *param_1,schar *param_2)

{
  code *pcVar1;
  bool bVar2;
  TOptional<signed_char> TVar3;
  FNumberParsingOptions *pFVar4;
  FDecimalNumberFormattingRules *pFVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  char *in_R9;
  char cVar10;
  undefined1 auStackY_f8 [32];
  bool local_b8;
  bool local_b7 [3];
  FNumberParsingOptions local_b4;
  int local_b0;
  int local_ac;
  ulong64 local_a8;
  ulong64 local_a0;
  FNumberParsingOptions local_98 [2];
  FDecimalNumberIntegralLimits local_90;
  FDecimalNumberIntegralLimits local_78;
  TValueOrError<double,FExpressionError> local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar4 = FNumberParsingOptions::FNumberParsingOptions(local_98);
  local_b0 = 0;
  pFVar4->UseGrouping = false;
  pFVar4->UseClamping = true;
  local_b4.UseGrouping = pFVar4->UseGrouping;
  local_b4.InsideLimits = pFVar4->InsideLimits;
  local_b4.UseClamping = pFVar4->UseClamping;
  pFVar5 = ExpressionParser::GetLocalizedNumberFormattingRules();
  if (*(int *)(param_2 + 8) == 0) {
    pwVar9 = L"";
    iVar7 = 0;
  }
  else {
    pwVar9 = *(wchar_t **)param_2;
    iVar7 = *(int *)(param_2 + 8) + -1;
  }
  local_b8 = false;
  local_a8 = 0;
  local_90.NumericLimitLowest = -0x80;
  local_90.NumericLimitMax = 0x7f;
  local_90.bIsNumericSigned = true;
  bVar2 = FastDecimalFormat::Internal::StringToIntegral
                    (pwVar9,iVar7,pFVar5,&local_b4,&local_90,&local_b8,&local_a8,&local_b0);
  cVar10 = '\x01';
  cVar6 = '\x01';
  if (local_b8 != false) {
    cVar6 = -1;
  }
  if (bVar2) {
    iVar7 = *(int *)(param_2 + 8) + -1;
    if (*(int *)(param_2 + 8) == 0) {
      iVar7 = 0;
    }
    if (local_b0 == iVar7) {
      *(char *)&(param_1->Data).AllocatorInstance.Data = cVar6 * (char)local_a8;
      *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 1) = 1;
      goto LAB_142936c75;
    }
  }
  local_ac = 0;
  pFVar5 = FastDecimalFormat::GetCultureAgnosticFormattingRules();
  if (*(int *)(param_2 + 8) == 0) {
    pwVar9 = L"";
    iVar7 = 0;
  }
  else {
    pwVar9 = *(wchar_t **)param_2;
    iVar7 = *(int *)(param_2 + 8) + -1;
  }
  local_b7[0] = false;
  local_a0 = 0;
  local_78.NumericLimitLowest = -0x80;
  local_78.NumericLimitMax = 0x7f;
  local_78.bIsNumericSigned = true;
  bVar2 = FastDecimalFormat::Internal::StringToIntegral
                    (pwVar9,iVar7,pFVar5,&local_b4,&local_78,local_b7,&local_a0,&local_ac);
  if (local_b7[0] != false) {
    cVar10 = -1;
  }
  if (bVar2) {
    iVar7 = *(int *)(param_2 + 8) + -1;
    if (*(int *)(param_2 + 8) == 0) {
      iVar7 = 0;
    }
    if (local_ac == iVar7) {
      *(char *)&(param_1->Data).AllocatorInstance.Data = cVar10 * (char)local_a0;
      *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 1) = 1;
      goto LAB_142936c75;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TOptional<signed_char>___cdecl_TDefaultNumericTypeInterface<signed_char>::FromString(FString_const&___ptr64,signed_char_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TOptional<signed_char>___cdecl_TDefaultNumericTypeInterface<signed_char>::FromString(FString_const&___ptr64,signed_char_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TOptional<signed_char>___cdecl_TDefaultNumericTypeInterface<signed_char>::FromString(FString_const&___ptr64,signed_char_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FBasicMathExpressionEvaluator::FBasicMathExpressionEvaluator
              (&`public:_virtual_struct_TOptional<signed_char>___cdecl_TDefaultNumericTypeInterface<signed_char>::FromString(FString_const&___ptr64,signed_char_const&___ptr64)___ptr64'
                ::__l2::Parser);
    atexit(`TDefaultNumericTypeInterface<signed_char>::FromString'::__l2::
           _dynamic_atexit_destructor_for__Parser__);
    _Init_thread_footer(&`public:_virtual_struct_TOptional<signed_char>___cdecl_TDefaultNumericTypeInterface<signed_char>::FromString(FString_const&___ptr64,signed_char_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (*(int *)(param_2 + 8) == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = *(wchar_t **)param_2;
  }
  FBasicMathExpressionEvaluator::Evaluate
            (&`public:_virtual_struct_TOptional<signed_char>___cdecl_TDefaultNumericTypeInterface<signed_char>::FromString(FString_const&___ptr64,signed_char_const&___ptr64)___ptr64'
              ::__l2::Parser,&local_60,pwVar9,(double)(int)*in_R9);
  uVar8 = (ulonglong)local_60.Variant.TypeIndex;
  if ((2 < uVar8) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar3 = (TOptional<signed_char>)(*pcVar1)();
    return TVar3;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<double,double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar8) == '\0') {
    *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 1) = 0;
  }
  else {
    if ((local_60.Variant.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar3 = (TOptional<signed_char>)(*pcVar1)();
      return TVar3;
    }
    *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 1) = 1;
    cVar6 = '\x7f';
    if ((char)(int)(double)local_60.Variant._padding_ < '\x7f') {
      cVar6 = (char)(int)(double)local_60.Variant._padding_;
    }
    cVar10 = -0x80;
    if (-0x80 < cVar6) {
      cVar10 = cVar6;
    }
    *(char *)&(param_1->Data).AllocatorInstance.Data = cVar10;
  }
  if ((2 < local_60.Variant.TypeIndex) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar3 = (TOptional<signed_char>)(*pcVar1)();
    return TVar3;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_60.Variant.TypeIndex])(&local_60);
LAB_142936c75:
  return SUB82(param_1,0);
}

// FromString @ 142936cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<unsigned_char> __thiscall
TDefaultNumericTypeInterface<unsigned_char>::FromString
          (TDefaultNumericTypeInterface<unsigned_char> *this,FString *param_1,uchar *param_2)

{
  code *pcVar1;
  bool bVar2;
  TOptional<unsigned_char> TVar3;
  FNumberParsingOptions *pFVar4;
  FDecimalNumberFormattingRules *pFVar5;
  char cVar6;
  int iVar7;
  char cVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  byte *in_R9;
  undefined1 auStackY_f8 [32];
  bool local_b8;
  bool local_b7 [3];
  FNumberParsingOptions local_b4;
  int local_b0;
  int local_ac;
  ulong64 local_a8;
  ulong64 local_a0;
  FNumberParsingOptions local_98 [2];
  FDecimalNumberIntegralLimits local_90;
  FDecimalNumberIntegralLimits local_78;
  TValueOrError<double,FExpressionError> local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar4 = FNumberParsingOptions::FNumberParsingOptions(local_98);
  local_b0 = 0;
  pFVar4->UseGrouping = false;
  pFVar4->UseClamping = true;
  local_b4.UseGrouping = pFVar4->UseGrouping;
  local_b4.InsideLimits = pFVar4->InsideLimits;
  local_b4.UseClamping = pFVar4->UseClamping;
  pFVar5 = ExpressionParser::GetLocalizedNumberFormattingRules();
  if (*(int *)(param_2 + 8) == 0) {
    pwVar10 = L"";
    iVar7 = 0;
  }
  else {
    pwVar10 = *(wchar_t **)param_2;
    iVar7 = *(int *)(param_2 + 8) + -1;
  }
  local_b8 = false;
  local_a8 = 0;
  local_90.NumericLimitLowest = 0;
  local_90.NumericLimitMax = 0xff;
  local_90.bIsNumericSigned = false;
  bVar2 = FastDecimalFormat::Internal::StringToIntegral
                    (pwVar10,iVar7,pFVar5,&local_b4,&local_90,&local_b8,&local_a8,&local_b0);
  cVar8 = '\x01';
  cVar6 = '\x01';
  if (local_b8 != false) {
    cVar6 = -1;
  }
  if (bVar2) {
    iVar7 = *(int *)(param_2 + 8) + -1;
    if (*(int *)(param_2 + 8) == 0) {
      iVar7 = 0;
    }
    if (local_b0 == iVar7) {
      *(char *)&(param_1->Data).AllocatorInstance.Data = cVar6 * (char)local_a8;
      *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 1) = 1;
      goto LAB_142936fa9;
    }
  }
  local_ac = 0;
  pFVar5 = FastDecimalFormat::GetCultureAgnosticFormattingRules();
  if (*(int *)(param_2 + 8) == 0) {
    pwVar10 = L"";
    iVar7 = 0;
  }
  else {
    pwVar10 = *(wchar_t **)param_2;
    iVar7 = *(int *)(param_2 + 8) + -1;
  }
  local_b7[0] = false;
  local_a0 = 0;
  local_78.NumericLimitLowest = 0;
  local_78.NumericLimitMax = 0xff;
  local_78.bIsNumericSigned = false;
  bVar2 = FastDecimalFormat::Internal::StringToIntegral
                    (pwVar10,iVar7,pFVar5,&local_b4,&local_78,local_b7,&local_a0,&local_ac);
  if (local_b7[0] != false) {
    cVar8 = -1;
  }
  if (bVar2) {
    iVar7 = *(int *)(param_2 + 8) + -1;
    if (*(int *)(param_2 + 8) == 0) {
      iVar7 = 0;
    }
    if (local_ac == iVar7) {
      *(char *)&(param_1->Data).AllocatorInstance.Data = cVar8 * (char)local_a0;
      *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 1) = 1;
      goto LAB_142936fa9;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TOptional<unsigned_char>___cdecl_TDefaultNumericTypeInterface<unsigned_char>::FromString(FString_const&___ptr64,unsigned_char_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TOptional<unsigned_char>___cdecl_TDefaultNumericTypeInterface<unsigned_char>::FromString(FString_const&___ptr64,unsigned_char_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TOptional<unsigned_char>___cdecl_TDefaultNumericTypeInterface<unsigned_char>::FromString(FString_const&___ptr64,unsigned_char_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FBasicMathExpressionEvaluator::FBasicMathExpressionEvaluator
              (&`public:_virtual_struct_TOptional<unsigned_char>___cdecl_TDefaultNumericTypeInterface<unsigned_char>::FromString(FString_const&___ptr64,unsigned_char_const&___ptr64)___ptr64'
                ::__l2::Parser);
    atexit(`TDefaultNumericTypeInterface<unsigned_char>::FromString'::__l2::
           _dynamic_atexit_destructor_for__Parser__);
    _Init_thread_footer(&`public:_virtual_struct_TOptional<unsigned_char>___cdecl_TDefaultNumericTypeInterface<unsigned_char>::FromString(FString_const&___ptr64,unsigned_char_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (*(int *)(param_2 + 8) == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = *(wchar_t **)param_2;
  }
  FBasicMathExpressionEvaluator::Evaluate
            (&`public:_virtual_struct_TOptional<unsigned_char>___cdecl_TDefaultNumericTypeInterface<unsigned_char>::FromString(FString_const&___ptr64,unsigned_char_const&___ptr64)___ptr64'
              ::__l2::Parser,&local_60,pwVar10,(double)*in_R9);
  uVar9 = (ulonglong)local_60.Variant.TypeIndex;
  if ((2 < uVar9) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar3 = (TOptional<unsigned_char>)(*pcVar1)();
    return TVar3;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<double,double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar9) == '\0') {
    *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 1) = 0;
  }
  else {
    if ((local_60.Variant.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar3 = (TOptional<unsigned_char>)(*pcVar1)();
      return TVar3;
    }
    *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 1) = 1;
    cVar6 = -1;
    if ((char)(int)(double)local_60.Variant._padding_ != -1) {
      cVar6 = (char)(int)(double)local_60.Variant._padding_;
    }
    cVar8 = '\0';
    if (cVar6 != '\0') {
      cVar8 = cVar6;
    }
    *(char *)&(param_1->Data).AllocatorInstance.Data = cVar8;
  }
  if ((2 < local_60.Variant.TypeIndex) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar3 = (TOptional<unsigned_char>)(*pcVar1)();
    return TVar3;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_60.Variant.TypeIndex])(&local_60);
LAB_142936fa9:
  return SUB82(param_1,0);
}

// FromString @ 142937020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<short> __thiscall
TDefaultNumericTypeInterface<short>::FromString
          (TDefaultNumericTypeInterface<short> *this,FString *param_1,short *param_2)

{
  code *pcVar1;
  bool bVar2;
  TOptional<short> TVar3;
  FNumberParsingOptions *pFVar4;
  FDecimalNumberFormattingRules *pFVar5;
  short sVar6;
  int iVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  short *in_R9;
  short sVar10;
  undefined1 auStackY_f8 [32];
  bool local_b8;
  bool local_b7 [3];
  FNumberParsingOptions local_b4;
  int local_b0;
  int local_ac;
  ulong64 local_a8;
  ulong64 local_a0;
  FNumberParsingOptions local_98 [2];
  FDecimalNumberIntegralLimits local_90;
  FDecimalNumberIntegralLimits local_78;
  TValueOrError<double,FExpressionError> local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar4 = FNumberParsingOptions::FNumberParsingOptions(local_98);
  local_b0 = 0;
  pFVar4->UseGrouping = false;
  pFVar4->UseClamping = true;
  local_b4.UseGrouping = pFVar4->UseGrouping;
  local_b4.InsideLimits = pFVar4->InsideLimits;
  local_b4.UseClamping = pFVar4->UseClamping;
  pFVar5 = ExpressionParser::GetLocalizedNumberFormattingRules();
  if (*(int *)(param_2 + 4) == 0) {
    pwVar9 = L"";
    iVar7 = 0;
  }
  else {
    pwVar9 = *(wchar_t **)param_2;
    iVar7 = *(int *)(param_2 + 4) + -1;
  }
  local_b8 = false;
  local_a8 = 0;
  local_90.NumericLimitLowest = -0x8000;
  local_90.NumericLimitMax = 0x7fff;
  local_90.bIsNumericSigned = true;
  bVar2 = FastDecimalFormat::Internal::StringToIntegral
                    (pwVar9,iVar7,pFVar5,&local_b4,&local_90,&local_b8,&local_a8,&local_b0);
  sVar6 = 1;
  if (local_b8 != false) {
    sVar6 = -1;
  }
  if (bVar2) {
    iVar7 = *(int *)(param_2 + 4) + -1;
    if (*(int *)(param_2 + 4) == 0) {
      iVar7 = 0;
    }
    if (local_b0 == iVar7) {
      *(short *)&(param_1->Data).AllocatorInstance.Data = sVar6 * (short)local_a8;
      *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 2) = 1;
      goto LAB_1429372f6;
    }
  }
  local_ac = 0;
  pFVar5 = FastDecimalFormat::GetCultureAgnosticFormattingRules();
  if (*(int *)(param_2 + 4) == 0) {
    pwVar9 = L"";
    iVar7 = 0;
  }
  else {
    pwVar9 = *(wchar_t **)param_2;
    iVar7 = *(int *)(param_2 + 4) + -1;
  }
  local_b7[0] = false;
  local_a0 = 0;
  local_78.NumericLimitLowest = -0x8000;
  local_78.NumericLimitMax = 0x7fff;
  local_78.bIsNumericSigned = true;
  bVar2 = FastDecimalFormat::Internal::StringToIntegral
                    (pwVar9,iVar7,pFVar5,&local_b4,&local_78,local_b7,&local_a0,&local_ac);
  sVar6 = 1;
  if (local_b7[0] != false) {
    sVar6 = -1;
  }
  if (bVar2) {
    iVar7 = *(int *)(param_2 + 4) + -1;
    if (*(int *)(param_2 + 4) == 0) {
      iVar7 = 0;
    }
    if (local_ac == iVar7) {
      *(short *)&(param_1->Data).AllocatorInstance.Data = sVar6 * (short)local_a0;
      *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 2) = 1;
      goto LAB_1429372f6;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TOptional<short>___cdecl_TDefaultNumericTypeInterface<short>::FromString(FString_const&___ptr64,short_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TOptional<short>___cdecl_TDefaultNumericTypeInterface<short>::FromString(FString_const&___ptr64,short_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TOptional<short>___cdecl_TDefaultNumericTypeInterface<short>::FromString(FString_const&___ptr64,short_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FBasicMathExpressionEvaluator::FBasicMathExpressionEvaluator
              (&`public:_virtual_struct_TOptional<short>___cdecl_TDefaultNumericTypeInterface<short>::FromString(FString_const&___ptr64,short_const&___ptr64)___ptr64'
                ::__l2::Parser);
    atexit(`TDefaultNumericTypeInterface<short>::FromString'::__l2::
           _dynamic_atexit_destructor_for__Parser__);
    _Init_thread_footer(&`public:_virtual_struct_TOptional<short>___cdecl_TDefaultNumericTypeInterface<short>::FromString(FString_const&___ptr64,short_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (*(int *)(param_2 + 4) == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = *(wchar_t **)param_2;
  }
  FBasicMathExpressionEvaluator::Evaluate
            (&`public:_virtual_struct_TOptional<short>___cdecl_TDefaultNumericTypeInterface<short>::FromString(FString_const&___ptr64,short_const&___ptr64)___ptr64'
              ::__l2::Parser,&local_60,pwVar9,(double)(int)*in_R9);
  uVar8 = (ulonglong)local_60.Variant.TypeIndex;
  if ((2 < uVar8) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar3 = (TOptional<short>)(*pcVar1)();
    return TVar3;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<double,double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar8) == '\0') {
    *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 2) = 0;
  }
  else {
    if ((local_60.Variant.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar3 = (TOptional<short>)(*pcVar1)();
      return TVar3;
    }
    *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 2) = 1;
    sVar6 = 0x7fff;
    if ((short)(int)(double)local_60.Variant._padding_ < 0x7fff) {
      sVar6 = (short)(int)(double)local_60.Variant._padding_;
    }
    sVar10 = -0x8000;
    if (-0x8000 < sVar6) {
      sVar10 = sVar6;
    }
    *(short *)&(param_1->Data).AllocatorInstance.Data = sVar10;
  }
  if ((2 < local_60.Variant.TypeIndex) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar3 = (TOptional<short>)(*pcVar1)();
    return TVar3;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_60.Variant.TypeIndex])(&local_60);
LAB_1429372f6:
  return SUB84(param_1,0);
}

// FromString @ 142937370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<unsigned_short> __thiscall
TDefaultNumericTypeInterface<unsigned_short>::FromString
          (TDefaultNumericTypeInterface<unsigned_short> *this,FString *param_1,ushort *param_2)

{
  code *pcVar1;
  bool bVar2;
  TOptional<unsigned_short> TVar3;
  FNumberParsingOptions *pFVar4;
  FDecimalNumberFormattingRules *pFVar5;
  short sVar6;
  int iVar7;
  ulonglong uVar8;
  short sVar9;
  int iVar10;
  wchar_t *pwVar11;
  ushort *in_R9;
  undefined1 auStackY_f8 [32];
  bool local_b8;
  bool local_b7 [3];
  FNumberParsingOptions local_b4;
  int local_b0;
  int local_ac;
  ulong64 local_a8;
  ulong64 local_a0;
  FNumberParsingOptions local_98 [2];
  FDecimalNumberIntegralLimits local_90;
  FDecimalNumberIntegralLimits local_78;
  TValueOrError<double,FExpressionError> local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar4 = FNumberParsingOptions::FNumberParsingOptions(local_98);
  iVar10 = 0;
  local_b0 = 0;
  pFVar4->UseGrouping = false;
  pFVar4->UseClamping = true;
  local_b4.UseGrouping = pFVar4->UseGrouping;
  local_b4.InsideLimits = pFVar4->InsideLimits;
  local_b4.UseClamping = pFVar4->UseClamping;
  pFVar5 = ExpressionParser::GetLocalizedNumberFormattingRules();
  if (*(int *)(param_2 + 4) == 0) {
    pwVar11 = L"";
    iVar7 = iVar10;
  }
  else {
    pwVar11 = *(wchar_t **)param_2;
    iVar7 = *(int *)(param_2 + 4) + -1;
  }
  local_b8 = false;
  local_a8 = 0;
  local_90.NumericLimitLowest = 0;
  local_90.NumericLimitMax = 0xffff;
  local_90.bIsNumericSigned = false;
  bVar2 = FastDecimalFormat::Internal::StringToIntegral
                    (pwVar11,iVar7,pFVar5,&local_b4,&local_90,&local_b8,&local_a8,&local_b0);
  sVar6 = 1;
  if (local_b8 != false) {
    sVar6 = -1;
  }
  if (bVar2) {
    iVar7 = *(int *)(param_2 + 4) + -1;
    if (*(int *)(param_2 + 4) == 0) {
      iVar7 = iVar10;
    }
    if (local_b0 == iVar7) {
      *(short *)&(param_1->Data).AllocatorInstance.Data = sVar6 * (short)local_a8;
      *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 2) = 1;
      goto LAB_14293762b;
    }
  }
  local_ac = 0;
  pFVar5 = FastDecimalFormat::GetCultureAgnosticFormattingRules();
  if (*(int *)(param_2 + 4) == 0) {
    pwVar11 = L"";
    iVar7 = iVar10;
  }
  else {
    pwVar11 = *(wchar_t **)param_2;
    iVar7 = *(int *)(param_2 + 4) + -1;
  }
  local_b7[0] = false;
  local_a0 = 0;
  local_78.NumericLimitLowest = 0;
  local_78.NumericLimitMax = 0xffff;
  local_78.bIsNumericSigned = false;
  bVar2 = FastDecimalFormat::Internal::StringToIntegral
                    (pwVar11,iVar7,pFVar5,&local_b4,&local_78,local_b7,&local_a0,&local_ac);
  sVar6 = 1;
  if (local_b7[0] != false) {
    sVar6 = -1;
  }
  if (bVar2) {
    iVar7 = *(int *)(param_2 + 4) + -1;
    if (*(int *)(param_2 + 4) == 0) {
      iVar7 = iVar10;
    }
    if (local_ac == iVar7) {
      *(short *)&(param_1->Data).AllocatorInstance.Data = sVar6 * (short)local_a0;
      *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 2) = 1;
      goto LAB_14293762b;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TOptional<unsigned_short>___cdecl_TDefaultNumericTypeInterface<unsigned_short>::FromString(FString_const&___ptr64,unsigned_short_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TOptional<unsigned_short>___cdecl_TDefaultNumericTypeInterface<unsigned_short>::FromString(FString_const&___ptr64,unsigned_short_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TOptional<unsigned_short>___cdecl_TDefaultNumericTypeInterface<unsigned_short>::FromString(FString_const&___ptr64,unsigned_short_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FBasicMathExpressionEvaluator::FBasicMathExpressionEvaluator
              (&`public:_virtual_struct_TOptional<unsigned_short>___cdecl_TDefaultNumericTypeInterface<unsigned_short>::FromString(FString_const&___ptr64,unsigned_short_const&___ptr64)___ptr64'
                ::__l2::Parser);
    atexit(`TDefaultNumericTypeInterface<unsigned_short>::FromString'::__l2::
           _dynamic_atexit_destructor_for__Parser__);
    _Init_thread_footer(&`public:_virtual_struct_TOptional<unsigned_short>___cdecl_TDefaultNumericTypeInterface<unsigned_short>::FromString(FString_const&___ptr64,unsigned_short_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (*(int *)(param_2 + 4) == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = *(wchar_t **)param_2;
  }
  FBasicMathExpressionEvaluator::Evaluate
            (&`public:_virtual_struct_TOptional<unsigned_short>___cdecl_TDefaultNumericTypeInterface<unsigned_short>::FromString(FString_const&___ptr64,unsigned_short_const&___ptr64)___ptr64'
              ::__l2::Parser,&local_60,pwVar11,(double)*in_R9);
  uVar8 = (ulonglong)local_60.Variant.TypeIndex;
  if ((2 < uVar8) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar3 = (TOptional<unsigned_short>)(*pcVar1)();
    return TVar3;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<double,double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar8) == '\0') {
    *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 2) = 0;
  }
  else {
    if ((local_60.Variant.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar3 = (TOptional<unsigned_short>)(*pcVar1)();
      return TVar3;
    }
    *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 2) = 1;
    sVar6 = -1;
    if ((short)(int)(double)local_60.Variant._padding_ != -1) {
      sVar6 = (short)(int)(double)local_60.Variant._padding_;
    }
    sVar9 = 0;
    if (sVar6 != 0) {
      sVar9 = sVar6;
    }
    *(short *)&(param_1->Data).AllocatorInstance.Data = sVar9;
  }
  if ((2 < local_60.Variant.TypeIndex) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar3 = (TOptional<unsigned_short>)(*pcVar1)();
    return TVar3;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_60.Variant.TypeIndex])(&local_60);
LAB_14293762b:
  return SUB84(param_1,0);
}

// FromString @ 1429376a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<int> __thiscall
TDefaultNumericTypeInterface<int>::FromString
          (TDefaultNumericTypeInterface<int> *this,FString *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNumberParsingOptions *pFVar3;
  FDecimalNumberFormattingRules *pFVar4;
  TOptional<int> TVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  wchar_t *pwVar9;
  int *in_R9;
  int iVar10;
  undefined1 auStackY_f8 [32];
  bool local_b8;
  bool local_b7 [3];
  FNumberParsingOptions local_b4;
  int local_b0;
  int local_ac;
  ulong64 local_a8;
  ulong64 local_a0;
  FNumberParsingOptions local_98 [2];
  FDecimalNumberIntegralLimits local_90;
  FDecimalNumberIntegralLimits local_78;
  TValueOrError<double,FExpressionError> local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar3 = FNumberParsingOptions::FNumberParsingOptions(local_98);
  local_b0 = 0;
  pFVar3->UseGrouping = false;
  pFVar3->UseClamping = true;
  local_b4.UseGrouping = pFVar3->UseGrouping;
  local_b4.InsideLimits = pFVar3->InsideLimits;
  local_b4.UseClamping = pFVar3->UseClamping;
  pFVar4 = ExpressionParser::GetLocalizedNumberFormattingRules();
  if (param_2[2] == 0) {
    pwVar9 = L"";
    iVar8 = 0;
  }
  else {
    pwVar9 = *(wchar_t **)param_2;
    iVar8 = param_2[2] + -1;
  }
  local_b8 = false;
  local_a8 = 0;
  local_90.NumericLimitLowest = -0x80000000;
  local_90.NumericLimitMax = 0x7fffffff;
  local_90.bIsNumericSigned = true;
  bVar2 = FastDecimalFormat::Internal::StringToIntegral
                    (pwVar9,iVar8,pFVar4,&local_b4,&local_90,&local_b8,&local_a8,&local_b0);
  iVar10 = 1;
  iVar8 = 1;
  if (local_b8 != false) {
    iVar8 = -1;
  }
  if (bVar2) {
    iVar6 = param_2[2] + -1;
    if (param_2[2] == 0) {
      iVar6 = 0;
    }
    if (local_b0 == iVar6) {
      *(int *)&(param_1->Data).AllocatorInstance.Data = iVar8 * (int)local_a8;
      *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 1;
      return (TOptional<int>)param_1;
    }
  }
  local_ac = 0;
  pFVar4 = FastDecimalFormat::GetCultureAgnosticFormattingRules();
  if (param_2[2] == 0) {
    pwVar9 = L"";
    iVar8 = 0;
  }
  else {
    pwVar9 = *(wchar_t **)param_2;
    iVar8 = param_2[2] + -1;
  }
  local_b7[0] = false;
  local_a0 = 0;
  local_78.NumericLimitLowest = -0x80000000;
  local_78.NumericLimitMax = 0x7fffffff;
  local_78.bIsNumericSigned = true;
  bVar2 = FastDecimalFormat::Internal::StringToIntegral
                    (pwVar9,iVar8,pFVar4,&local_b4,&local_78,local_b7,&local_a0,&local_ac);
  if (local_b7[0] != false) {
    iVar10 = -1;
  }
  if (bVar2) {
    iVar8 = param_2[2] + -1;
    if (param_2[2] == 0) {
      iVar8 = 0;
    }
    if (local_ac == iVar8) {
      *(int *)&(param_1->Data).AllocatorInstance.Data = iVar10 * (int)local_a0;
      *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 1;
      return (TOptional<int>)param_1;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TOptional<int>___cdecl_TDefaultNumericTypeInterface<int>::FromString(FString_const&___ptr64,int_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TOptional<int>___cdecl_TDefaultNumericTypeInterface<int>::FromString(FString_const&___ptr64,int_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TOptional<int>___cdecl_TDefaultNumericTypeInterface<int>::FromString(FString_const&___ptr64,int_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FBasicMathExpressionEvaluator::FBasicMathExpressionEvaluator
              (&`public:_virtual_struct_TOptional<int>___cdecl_TDefaultNumericTypeInterface<int>::FromString(FString_const&___ptr64,int_const&___ptr64)___ptr64'
                ::__l2::Parser);
    atexit(`TDefaultNumericTypeInterface<int>::FromString'::__l2::
           _dynamic_atexit_destructor_for__Parser__);
    _Init_thread_footer(&`public:_virtual_struct_TOptional<int>___cdecl_TDefaultNumericTypeInterface<int>::FromString(FString_const&___ptr64,int_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (param_2[2] == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = *(wchar_t **)param_2;
  }
  FBasicMathExpressionEvaluator::Evaluate
            (&`public:_virtual_struct_TOptional<int>___cdecl_TDefaultNumericTypeInterface<int>::FromString(FString_const&___ptr64,int_const&___ptr64)___ptr64'
              ::__l2::Parser,&local_60,pwVar9,(double)*in_R9);
  uVar7 = (ulonglong)local_60.Variant.TypeIndex;
  if ((2 < uVar7) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar5 = (TOptional<int>)(*pcVar1)();
    return TVar5;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<double,double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7) == '\0') {
    *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 0;
  }
  else {
    if ((local_60.Variant.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar5 = (TOptional<int>)(*pcVar1)();
      return TVar5;
    }
    *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 1;
    iVar8 = 0x7fffffff;
    if ((int)(double)local_60.Variant._padding_ < 0x7fffffff) {
      iVar8 = (int)(double)local_60.Variant._padding_;
    }
    iVar10 = -0x80000000;
    if (-0x80000000 < iVar8) {
      iVar10 = iVar8;
    }
    *(int *)&(param_1->Data).AllocatorInstance.Data = iVar10;
  }
  if ((2 < local_60.Variant.TypeIndex) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar5 = (TOptional<int>)(*pcVar1)();
    return TVar5;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_60.Variant.TypeIndex])(&local_60);
  return (TOptional<int>)param_1;
}

// FromString @ 1429379d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<unsigned_int> __thiscall
TDefaultNumericTypeInterface<unsigned_int>::FromString
          (TDefaultNumericTypeInterface<unsigned_int> *this,FString *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNumberParsingOptions *pFVar3;
  FDecimalNumberFormattingRules *pFVar4;
  TOptional<unsigned_int> TVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  wchar_t *pwVar9;
  uint *in_R9;
  int iVar10;
  undefined1 auStackY_f8 [32];
  bool local_b8;
  bool local_b7 [3];
  FNumberParsingOptions local_b4;
  int local_b0;
  int local_ac;
  ulong64 local_a8;
  ulong64 local_a0;
  FNumberParsingOptions local_98 [2];
  FDecimalNumberIntegralLimits local_90;
  FDecimalNumberIntegralLimits local_78;
  TValueOrError<double,FExpressionError> local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar3 = FNumberParsingOptions::FNumberParsingOptions(local_98);
  local_b0 = 0;
  pFVar3->UseGrouping = false;
  pFVar3->UseClamping = true;
  local_b4.UseGrouping = pFVar3->UseGrouping;
  local_b4.InsideLimits = pFVar3->InsideLimits;
  local_b4.UseClamping = pFVar3->UseClamping;
  pFVar4 = ExpressionParser::GetLocalizedNumberFormattingRules();
  if (param_2[2] == 0) {
    pwVar9 = L"";
    iVar8 = 0;
  }
  else {
    pwVar9 = *(wchar_t **)param_2;
    iVar8 = param_2[2] - 1;
  }
  local_b8 = false;
  local_a8 = 0;
  local_90.NumericLimitLowest = 0;
  local_90.NumericLimitMax = 0xffffffff;
  local_90.bIsNumericSigned = false;
  bVar2 = FastDecimalFormat::Internal::StringToIntegral
                    (pwVar9,iVar8,pFVar4,&local_b4,&local_90,&local_b8,&local_a8,&local_b0);
  iVar10 = 1;
  iVar8 = 1;
  if (local_b8 != false) {
    iVar8 = -1;
  }
  if (bVar2) {
    iVar6 = param_2[2] - 1;
    if (param_2[2] == 0) {
      iVar6 = 0;
    }
    if (local_b0 == iVar6) {
      *(int *)&(param_1->Data).AllocatorInstance.Data = iVar8 * (int)local_a8;
      *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 1;
      return (TOptional<unsigned_int>)param_1;
    }
  }
  local_ac = 0;
  pFVar4 = FastDecimalFormat::GetCultureAgnosticFormattingRules();
  iVar8 = 0;
  if (param_2[2] == 0) {
    pwVar9 = L"";
    iVar6 = iVar8;
  }
  else {
    pwVar9 = *(wchar_t **)param_2;
    iVar6 = param_2[2] - 1;
  }
  local_b7[0] = false;
  local_a0 = 0;
  local_78.NumericLimitLowest = 0;
  local_78.NumericLimitMax = 0xffffffff;
  local_78.bIsNumericSigned = false;
  bVar2 = FastDecimalFormat::Internal::StringToIntegral
                    (pwVar9,iVar6,pFVar4,&local_b4,&local_78,local_b7,&local_a0,&local_ac);
  if (local_b7[0] != false) {
    iVar10 = -1;
  }
  if (bVar2) {
    iVar6 = param_2[2] - 1;
    if (param_2[2] == 0) {
      iVar6 = iVar8;
    }
    if (local_ac == iVar6) {
      *(int *)&(param_1->Data).AllocatorInstance.Data = iVar10 * (int)local_a0;
      *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 1;
      return (TOptional<unsigned_int>)param_1;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TOptional<unsigned_int>___cdecl_TDefaultNumericTypeInterface<unsigned_int>::FromString(FString_const&___ptr64,unsigned_int_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TOptional<unsigned_int>___cdecl_TDefaultNumericTypeInterface<unsigned_int>::FromString(FString_const&___ptr64,unsigned_int_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TOptional<unsigned_int>___cdecl_TDefaultNumericTypeInterface<unsigned_int>::FromString(FString_const&___ptr64,unsigned_int_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FBasicMathExpressionEvaluator::FBasicMathExpressionEvaluator
              (&`public:_virtual_struct_TOptional<unsigned_int>___cdecl_TDefaultNumericTypeInterface<unsigned_int>::FromString(FString_const&___ptr64,unsigned_int_const&___ptr64)___ptr64'
                ::__l2::Parser);
    atexit(`TDefaultNumericTypeInterface<unsigned_int>::FromString'::__l2::
           _dynamic_atexit_destructor_for__Parser__);
    _Init_thread_footer(&`public:_virtual_struct_TOptional<unsigned_int>___cdecl_TDefaultNumericTypeInterface<unsigned_int>::FromString(FString_const&___ptr64,unsigned_int_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (param_2[2] == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = *(wchar_t **)param_2;
  }
  FBasicMathExpressionEvaluator::Evaluate
            (&`public:_virtual_struct_TOptional<unsigned_int>___cdecl_TDefaultNumericTypeInterface<unsigned_int>::FromString(FString_const&___ptr64,unsigned_int_const&___ptr64)___ptr64'
              ::__l2::Parser,&local_60,pwVar9,(double)*in_R9);
  uVar7 = (ulonglong)local_60.Variant.TypeIndex;
  if ((2 < uVar7) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar5 = (TOptional<unsigned_int>)(*pcVar1)();
    return TVar5;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<double,double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7) == '\0') {
    *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 0;
  }
  else {
    if ((local_60.Variant.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar5 = (TOptional<unsigned_int>)(*pcVar1)();
      return TVar5;
    }
    *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 1;
    iVar10 = -1;
    if ((int)(longlong)(double)local_60.Variant._padding_ != -1) {
      iVar10 = (int)(longlong)(double)local_60.Variant._padding_;
    }
    if (iVar10 != 0) {
      iVar8 = iVar10;
    }
    *(int *)&(param_1->Data).AllocatorInstance.Data = iVar8;
  }
  if ((2 < local_60.Variant.TypeIndex) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar5 = (TOptional<unsigned_int>)(*pcVar1)();
    return TVar5;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_60.Variant.TypeIndex])(&local_60);
  return (TOptional<unsigned_int>)param_1;
}

// FromString @ 142937ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptional<float> __thiscall
TDefaultNumericTypeInterface<float>::FromString
          (TDefaultNumericTypeInterface<float> *this,FString *param_1,float *param_2)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  FNumberParsingOptions *pFVar4;
  FDecimalNumberFormattingRules *pFVar5;
  TOptional<float> TVar6;
  int iVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  float *in_R9;
  undefined1 auStackY_e8 [32];
  FNumberParsingOptions local_a8;
  int local_a4;
  int local_a0 [2];
  double local_98;
  double local_90;
  FNumberParsingOptions local_88 [2];
  FDecimalNumberFractionalLimits local_80;
  FDecimalNumberFractionalLimits local_70;
  TValueOrError<double,FExpressionError> local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pFVar4 = FNumberParsingOptions::FNumberParsingOptions(local_88);
  local_a4 = 0;
  pFVar4->UseGrouping = false;
  pFVar4->UseClamping = true;
  local_a8.UseGrouping = pFVar4->UseGrouping;
  local_a8.InsideLimits = pFVar4->InsideLimits;
  local_a8.UseClamping = pFVar4->UseClamping;
  pFVar5 = ExpressionParser::GetLocalizedNumberFormattingRules();
  iVar7 = (int)param_2[2] + -1;
  if (param_2[2] == 0.0) {
    iVar7 = 0;
    pwVar9 = L"";
  }
  else {
    pwVar9 = *(wchar_t **)param_2;
  }
  local_98 = 0.0;
  local_80.NumericLimitLowest = ___xmm_47efffffe0000000c7efffffe0000000;
  local_80.NumericLimitMax = _UNK_150744188;
  bVar3 = FastDecimalFormat::Internal::StringToFractional
                    (pwVar9,iVar7,pFVar5,&local_a8,&local_80,&local_98,&local_a4);
  if (bVar3) {
    iVar7 = (int)param_2[2] + -1;
    if (param_2[2] == 0.0) {
      iVar7 = 0;
    }
    local_90 = local_98;
    if (local_a4 != iVar7) goto LAB_142937dbf;
LAB_142937db2:
    *(float *)&(param_1->Data).AllocatorInstance.Data = (float)local_90;
    *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 1;
  }
  else {
LAB_142937dbf:
    local_a0[0] = 0;
    pFVar5 = FastDecimalFormat::GetCultureAgnosticFormattingRules();
    iVar7 = (int)param_2[2] + -1;
    if (param_2[2] == 0.0) {
      iVar7 = 0;
      pwVar9 = L"";
    }
    else {
      pwVar9 = *(wchar_t **)param_2;
    }
    local_90 = 0.0;
    local_70.NumericLimitLowest = ___xmm_47efffffe0000000c7efffffe0000000;
    local_70.NumericLimitMax = _UNK_150744188;
    bVar3 = FastDecimalFormat::Internal::StringToFractional
                      (pwVar9,iVar7,pFVar5,&local_a8,&local_70,&local_90,local_a0);
    if (bVar3) {
      iVar7 = (int)param_2[2] + -1;
      if (param_2[2] == 0.0) {
        iVar7 = 0;
      }
      if (local_a0[0] == iVar7) goto LAB_142937db2;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_virtual_struct_TOptional<float>___cdecl_TDefaultNumericTypeInterface<float>::FromString(FString_const&___ptr64,float_const&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_virtual_struct_TOptional<float>___cdecl_TDefaultNumericTypeInterface<float>::FromString(FString_const&___ptr64,float_const&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_virtual_struct_TOptional<float>___cdecl_TDefaultNumericTypeInterface<float>::FromString(FString_const&___ptr64,float_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      FBasicMathExpressionEvaluator::FBasicMathExpressionEvaluator
                (&`public:_virtual_struct_TOptional<float>___cdecl_TDefaultNumericTypeInterface<float>::FromString(FString_const&___ptr64,float_const&___ptr64)___ptr64'
                  ::__l2::Parser);
      atexit(`TDefaultNumericTypeInterface<float>::FromString'::__l2::
             _dynamic_atexit_destructor_for__Parser__);
      _Init_thread_footer(&`public:_virtual_struct_TOptional<float>___cdecl_TDefaultNumericTypeInterface<float>::FromString(FString_const&___ptr64,float_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    if (param_2[2] == 0.0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = *(wchar_t **)param_2;
    }
    FBasicMathExpressionEvaluator::Evaluate
              (&`public:_virtual_struct_TOptional<float>___cdecl_TDefaultNumericTypeInterface<float>::FromString(FString_const&___ptr64,float_const&___ptr64)___ptr64'
                ::__l2::Parser,&local_60,pwVar9,(double)*in_R9);
    uVar8 = (ulonglong)local_60.Variant.TypeIndex;
    if ((2 < uVar8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      TVar6 = (TOptional<float>)(*pcVar1)();
      return TVar6;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<double,double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar8) == '\0') {
      *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 0;
    }
    else {
      if ((local_60.Variant.TypeIndex != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        TVar6 = (TOptional<float>)(*pcVar1)();
        return TVar6;
      }
      *(undefined1 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 1;
      fVar2 = (float)(double)local_60.Variant._padding_;
      if (__real_7f7fffff <= (float)(double)local_60.Variant._padding_) {
        fVar2 = __real_7f7fffff;
      }
      if (fVar2 <= __real_ff7fffff) {
        fVar2 = __real_ff7fffff;
      }
      *(float *)&(param_1->Data).AllocatorInstance.Data = fVar2;
    }
    if ((2 < local_60.Variant.TypeIndex) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      TVar6 = (TOptional<float>)(*pcVar1)();
      return TVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_60.Variant.TypeIndex])(&local_60);
  }
  return (TOptional<float>)param_1;
}

// FromString @ 142937fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptional<double> * __thiscall
TDefaultNumericTypeInterface<double>::FromString
          (TDefaultNumericTypeInterface<double> *this,TOptional<double> *__return_storage_ptr__,
          FString *param_1,double *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FNumberParsingOptions *pFVar4;
  FDecimalNumberFormattingRules *pFVar5;
  TOptional<double> *pTVar6;
  int iVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  undefined1 auStackY_e8 [32];
  FNumberParsingOptions local_a8;
  int local_a4;
  int local_a0 [2];
  double local_98;
  double local_90;
  FNumberParsingOptions local_88 [2];
  FDecimalNumberFractionalLimits local_80;
  FDecimalNumberFractionalLimits local_70;
  TValueOrError<double,FExpressionError> local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pFVar4 = FNumberParsingOptions::FNumberParsingOptions(local_88);
  local_a4 = 0;
  pFVar4->UseGrouping = false;
  pFVar4->UseClamping = true;
  local_a8.UseGrouping = pFVar4->UseGrouping;
  local_a8.InsideLimits = pFVar4->InsideLimits;
  local_a8.UseClamping = pFVar4->UseClamping;
  pFVar5 = ExpressionParser::GetLocalizedNumberFormattingRules();
  iVar1 = (param_1->Data).ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  local_98 = 0.0;
  local_80.NumericLimitLowest = ___xmm_7fefffffffffffffffefffffffffffff;
  local_80.NumericLimitMax = _UNK_1506896f8;
  bVar3 = FastDecimalFormat::Internal::StringToFractional
                    (pwVar9,iVar7,pFVar5,&local_a8,&local_80,&local_98,&local_a4);
  if (bVar3) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    if (local_a4 == iVar7) {
      __return_storage_ptr__->TypedValue = local_98;
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
  }
  local_a0[0] = 0;
  pFVar5 = FastDecimalFormat::GetCultureAgnosticFormattingRules();
  iVar1 = (param_1->Data).ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  local_90 = 0.0;
  local_70.NumericLimitLowest = ___xmm_7fefffffffffffffffefffffffffffff;
  local_70.NumericLimitMax = _UNK_1506896f8;
  bVar3 = FastDecimalFormat::Internal::StringToFractional
                    (pwVar9,iVar7,pFVar5,&local_a8,&local_70,&local_90,local_a0);
  if (bVar3) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    if (local_a0[0] == iVar7) {
      __return_storage_ptr__->TypedValue = local_90;
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TOptional<double>___cdecl_TDefaultNumericTypeInterface<double>::FromString(FString_const&___ptr64,double_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TOptional<double>___cdecl_TDefaultNumericTypeInterface<double>::FromString(FString_const&___ptr64,double_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TOptional<double>___cdecl_TDefaultNumericTypeInterface<double>::FromString(FString_const&___ptr64,double_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FBasicMathExpressionEvaluator::FBasicMathExpressionEvaluator
              (&`public:_virtual_struct_TOptional<double>___cdecl_TDefaultNumericTypeInterface<double>::FromString(FString_const&___ptr64,double_const&___ptr64)___ptr64'
                ::__l2::Parser);
    atexit(`TDefaultNumericTypeInterface<double>::FromString'::__l2::
           _dynamic_atexit_destructor_for__Parser__);
    _Init_thread_footer(&`public:_virtual_struct_TOptional<double>___cdecl_TDefaultNumericTypeInterface<double>::FromString(FString_const&___ptr64,double_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FBasicMathExpressionEvaluator::Evaluate
            (&`public:_virtual_struct_TOptional<double>___cdecl_TDefaultNumericTypeInterface<double>::FromString(FString_const&___ptr64,double_const&___ptr64)___ptr64'
              ::__l2::Parser,&local_60,pwVar9,*param_2);
  uVar8 = (ulonglong)local_60.Variant.TypeIndex;
  if ((2 < uVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TOptional<double> *)(*pcVar2)();
    return pTVar6;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<double,double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar8) == '\0') {
    __return_storage_ptr__->bIsSet = false;
  }
  else {
    if ((local_60.Variant.TypeIndex != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TOptional<double> *)(*pcVar2)();
      return pTVar6;
    }
    if (__real_7fefffffffffffff <= (double)local_60.Variant._padding_) {
      local_60.Variant._padding_ = (longlong)__real_7fefffffffffffff;
    }
    __return_storage_ptr__->bIsSet = true;
    if ((double)local_60.Variant._padding_ <= __real_ffefffffffffffff) {
      local_60.Variant._padding_ = (longlong)__real_ffefffffffffffff;
    }
    __return_storage_ptr__->TypedValue = (double)local_60.Variant._padding_;
  }
  if ((2 < local_60.Variant.TypeIndex) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TOptional<double> *)(*pcVar2)();
    return pTVar6;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_60.Variant.TypeIndex])(&local_60);
  return __return_storage_ptr__;
}

// FromString @ 1429382c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<__int64> * __thiscall
TDefaultNumericTypeInterface<__int64>::FromString
          (TDefaultNumericTypeInterface<__int64> *this,TOptional<__int64> *__return_storage_ptr__,
          FString *param_1,long64 *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FNumberParsingOptions *pFVar4;
  FDecimalNumberFormattingRules *pFVar5;
  TOptional<__int64> *pTVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  long64 lVar11;
  longlong lVar12;
  undefined1 auStackY_f8 [32];
  bool local_b8;
  bool local_b7 [3];
  FNumberParsingOptions local_b4;
  int local_b0;
  int local_ac;
  ulong64 local_a8;
  ulong64 local_a0;
  FNumberParsingOptions local_98 [2];
  FDecimalNumberIntegralLimits local_90;
  FDecimalNumberIntegralLimits local_78;
  TValueOrError<double,FExpressionError> local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar4 = FNumberParsingOptions::FNumberParsingOptions(local_98);
  local_b0 = 0;
  pFVar4->UseGrouping = false;
  pFVar4->UseClamping = true;
  local_b4.UseGrouping = pFVar4->UseGrouping;
  local_b4.InsideLimits = pFVar4->InsideLimits;
  local_b4.UseClamping = pFVar4->UseClamping;
  pFVar5 = ExpressionParser::GetLocalizedNumberFormattingRules();
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == 0) {
    pwVar10 = L"";
    iVar1 = 0;
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar1 = iVar1 + -1;
  }
  local_b8 = false;
  local_a8 = 0;
  local_90.NumericLimitLowest = -0x8000000000000000;
  local_90.NumericLimitMax = 0x7fffffffffffffff;
  local_90.bIsNumericSigned = true;
  bVar3 = FastDecimalFormat::Internal::StringToIntegral
                    (pwVar10,iVar1,pFVar5,&local_b4,&local_90,&local_b8,&local_a8,&local_b0);
  lVar12 = 1;
  lVar9 = 1;
  if (local_b8 != false) {
    lVar9 = -1;
  }
  if (bVar3) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    if (local_b0 == iVar7) {
      __return_storage_ptr__->TypedValue = lVar9 * local_a8;
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
  }
  local_ac = 0;
  pFVar5 = FastDecimalFormat::GetCultureAgnosticFormattingRules();
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == 0) {
    pwVar10 = L"";
    iVar1 = 0;
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar1 = iVar1 + -1;
  }
  local_b7[0] = false;
  local_a0 = 0;
  local_78.NumericLimitLowest = -0x8000000000000000;
  local_78.NumericLimitMax = 0x7fffffffffffffff;
  local_78.bIsNumericSigned = true;
  bVar3 = FastDecimalFormat::Internal::StringToIntegral
                    (pwVar10,iVar1,pFVar5,&local_b4,&local_78,local_b7,&local_a0,&local_ac);
  if (local_b7[0] != false) {
    lVar12 = -1;
  }
  if (bVar3) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    if (local_ac == iVar7) {
      __return_storage_ptr__->TypedValue = lVar12 * local_a0;
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TOptional<__int64>___cdecl_TDefaultNumericTypeInterface<__int64>::FromString(FString_const&___ptr64,__int64_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TOptional<__int64>___cdecl_TDefaultNumericTypeInterface<__int64>::FromString(FString_const&___ptr64,__int64_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TOptional<__int64>___cdecl_TDefaultNumericTypeInterface<__int64>::FromString(FString_const&___ptr64,__int64_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FBasicMathExpressionEvaluator::FBasicMathExpressionEvaluator
              (&`public:_virtual_struct_TOptional<__int64>___cdecl_TDefaultNumericTypeInterface<__int64>::FromString(FString_const&___ptr64,__int64_const&___ptr64)___ptr64'
                ::__l2::Parser);
    atexit(`TDefaultNumericTypeInterface<__int64>::FromString'::__l2::
           _dynamic_atexit_destructor_for__Parser__);
    _Init_thread_footer(&`public:_virtual_struct_TOptional<__int64>___cdecl_TDefaultNumericTypeInterface<__int64>::FromString(FString_const&___ptr64,__int64_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FBasicMathExpressionEvaluator::Evaluate
            (&`public:_virtual_struct_TOptional<__int64>___cdecl_TDefaultNumericTypeInterface<__int64>::FromString(FString_const&___ptr64,__int64_const&___ptr64)___ptr64'
              ::__l2::Parser,&local_60,pwVar10,(double)*param_2);
  uVar8 = (ulonglong)local_60.Variant.TypeIndex;
  if ((2 < uVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TOptional<__int64> *)(*pcVar2)();
    return pTVar6;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<double,double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar8) == '\0') {
    __return_storage_ptr__->bIsSet = false;
  }
  else {
    if ((local_60.Variant.TypeIndex != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TOptional<__int64> *)(*pcVar2)();
      return pTVar6;
    }
    __return_storage_ptr__->bIsSet = true;
    lVar9 = 0x7fffffffffffffff;
    if ((longlong)(double)local_60.Variant._padding_ < 0x7fffffffffffffff) {
      lVar9 = (longlong)(double)local_60.Variant._padding_;
    }
    lVar11 = -0x8000000000000000;
    if (lVar9 != -0x8000000000000000) {
      lVar11 = lVar9;
    }
    __return_storage_ptr__->TypedValue = lVar11;
  }
  if ((2 < local_60.Variant.TypeIndex) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TOptional<__int64> *)(*pcVar2)();
    return pTVar6;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_60.Variant.TypeIndex])(&local_60);
  return __return_storage_ptr__;
}

// FromString @ 142938600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<unsigned___int64> * __thiscall
TDefaultNumericTypeInterface<unsigned___int64>::FromString
          (TDefaultNumericTypeInterface<unsigned___int64> *this,
          TOptional<unsigned___int64> *__return_storage_ptr__,FString *param_1,ulong64 *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FNumberParsingOptions *pFVar4;
  FDecimalNumberFormattingRules *pFVar5;
  TOptional<unsigned___int64> *pTVar6;
  int iVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  ulong64 uVar13;
  undefined1 auStackY_f8 [32];
  bool local_b8;
  bool local_b7 [3];
  FNumberParsingOptions local_b4;
  int local_b0;
  int local_ac;
  ulong64 local_a8;
  ulong64 local_a0;
  FNumberParsingOptions local_98 [2];
  FDecimalNumberIntegralLimits local_90;
  FDecimalNumberIntegralLimits local_78;
  TValueOrError<double,FExpressionError> local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar4 = FNumberParsingOptions::FNumberParsingOptions(local_98);
  local_b0 = 0;
  pFVar4->UseGrouping = false;
  pFVar4->UseClamping = true;
  local_b4.UseGrouping = pFVar4->UseGrouping;
  local_b4.InsideLimits = pFVar4->InsideLimits;
  local_b4.UseClamping = pFVar4->UseClamping;
  pFVar5 = ExpressionParser::GetLocalizedNumberFormattingRules();
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == 0) {
    pwVar11 = L"";
    iVar1 = 0;
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar1 = iVar1 + -1;
  }
  local_b8 = false;
  local_a8 = 0;
  local_90.NumericLimitLowest = 0;
  local_90.NumericLimitMax = 0xffffffffffffffff;
  local_90.bIsNumericSigned = false;
  bVar3 = FastDecimalFormat::Internal::StringToIntegral
                    (pwVar11,iVar1,pFVar5,&local_b4,&local_90,&local_b8,&local_a8,&local_b0);
  lVar12 = 1;
  lVar10 = 1;
  if (local_b8 != false) {
    lVar10 = -1;
  }
  if (bVar3) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    if (local_b0 == iVar7) {
      __return_storage_ptr__->TypedValue = lVar10 * local_a8;
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
  }
  local_ac = 0;
  pFVar5 = FastDecimalFormat::GetCultureAgnosticFormattingRules();
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == 0) {
    pwVar11 = L"";
    iVar1 = 0;
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar1 = iVar1 + -1;
  }
  local_b7[0] = false;
  local_a0 = 0;
  local_78.NumericLimitLowest = 0;
  local_78.NumericLimitMax = 0xffffffffffffffff;
  local_78.bIsNumericSigned = false;
  bVar3 = FastDecimalFormat::Internal::StringToIntegral
                    (pwVar11,iVar1,pFVar5,&local_b4,&local_78,local_b7,&local_a0,&local_ac);
  if (local_b7[0] != false) {
    lVar12 = -1;
  }
  if (bVar3) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    if (local_ac == iVar7) {
      __return_storage_ptr__->TypedValue = lVar12 * local_a0;
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TOptional<unsigned___int64>___cdecl_TDefaultNumericTypeInterface<unsigned___int64>::FromString(FString_const&___ptr64,unsigned___int64_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TOptional<unsigned___int64>___cdecl_TDefaultNumericTypeInterface<unsigned___int64>::FromString(FString_const&___ptr64,unsigned___int64_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TOptional<unsigned___int64>___cdecl_TDefaultNumericTypeInterface<unsigned___int64>::FromString(FString_const&___ptr64,unsigned___int64_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FBasicMathExpressionEvaluator::FBasicMathExpressionEvaluator
              (&`public:_virtual_struct_TOptional<unsigned___int64>___cdecl_TDefaultNumericTypeInterface<unsigned___int64>::FromString(FString_const&___ptr64,unsigned___int64_const&___ptr64)___ptr64'
                ::__l2::Parser);
    atexit(`TDefaultNumericTypeInterface<unsigned___int64>::FromString'::__l2::
           _dynamic_atexit_destructor_for__Parser__);
    _Init_thread_footer(&`public:_virtual_struct_TOptional<unsigned___int64>___cdecl_TDefaultNumericTypeInterface<unsigned___int64>::FromString(FString_const&___ptr64,unsigned___int64_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FBasicMathExpressionEvaluator::Evaluate
            (&`public:_virtual_struct_TOptional<unsigned___int64>___cdecl_TDefaultNumericTypeInterface<unsigned___int64>::FromString(FString_const&___ptr64,unsigned___int64_const&___ptr64)___ptr64'
              ::__l2::Parser,&local_60,pwVar11,(double)*param_2);
  uVar9 = (ulonglong)local_60.Variant.TypeIndex;
  if ((2 < uVar9) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TOptional<unsigned___int64> *)(*pcVar2)();
    return pTVar6;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<double,double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar9) == '\0') {
    __return_storage_ptr__->bIsSet = false;
  }
  else {
    if ((local_60.Variant.TypeIndex != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TOptional<unsigned___int64> *)(*pcVar2)();
      return pTVar6;
    }
    lVar10 = 0;
    if ((__real_43e0000000000000 <= (double)local_60.Variant._padding_) &&
       (local_60.Variant._padding_ =
             (longlong)((double)local_60.Variant._padding_ - __real_43e0000000000000),
       (double)local_60.Variant._padding_ < __real_43e0000000000000)) {
      lVar10 = -0x8000000000000000;
    }
    __return_storage_ptr__->bIsSet = true;
    uVar13 = 0xffffffffffffffff;
    if ((longlong)(double)local_60.Variant._padding_ + lVar10 != 0xffffffffffffffff) {
      uVar13 = (longlong)(double)local_60.Variant._padding_ + lVar10;
    }
    uVar8 = 0;
    if (uVar13 != 0) {
      uVar8 = uVar13;
    }
    __return_storage_ptr__->TypedValue = uVar8;
  }
  if ((2 < local_60.Variant.TypeIndex) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TOptional<unsigned___int64> *)(*pcVar2)();
    return pTVar6;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_60.Variant.TypeIndex])(&local_60);
  return __return_storage_ptr__;
}

// GetIndicateNearlyInteger @ 1429414d0

bool __thiscall
TDefaultNumericTypeInterface<signed_char>::GetIndicateNearlyInteger
          (TDefaultNumericTypeInterface<signed_char> *this)

{
  return this->bIndicateNearlyInteger;
}

// GetIndicateNearlyInteger @ 1429414e0

bool __thiscall
TDefaultNumericTypeInterface<unsigned_char>::GetIndicateNearlyInteger
          (TDefaultNumericTypeInterface<unsigned_char> *this)

{
  return this->bIndicateNearlyInteger;
}

// GetIndicateNearlyInteger @ 1429414f0

bool __thiscall
TDefaultNumericTypeInterface<short>::GetIndicateNearlyInteger
          (TDefaultNumericTypeInterface<short> *this)

{
  return this->bIndicateNearlyInteger;
}

// GetIndicateNearlyInteger @ 142941500

bool __thiscall
TDefaultNumericTypeInterface<unsigned_short>::GetIndicateNearlyInteger
          (TDefaultNumericTypeInterface<unsigned_short> *this)

{
  return this->bIndicateNearlyInteger;
}

// GetIndicateNearlyInteger @ 142941510

bool __thiscall
TDefaultNumericTypeInterface<int>::GetIndicateNearlyInteger(TDefaultNumericTypeInterface<int> *this)

{
  return this->bIndicateNearlyInteger;
}

// GetIndicateNearlyInteger @ 142941520

bool __thiscall
TDefaultNumericTypeInterface<unsigned_int>::GetIndicateNearlyInteger
          (TDefaultNumericTypeInterface<unsigned_int> *this)

{
  return this->bIndicateNearlyInteger;
}

// GetIndicateNearlyInteger @ 142941530

bool __thiscall
TDefaultNumericTypeInterface<float>::GetIndicateNearlyInteger
          (TDefaultNumericTypeInterface<float> *this)

{
  return this->bIndicateNearlyInteger;
}

// GetIndicateNearlyInteger @ 142941540

bool __thiscall
TDefaultNumericTypeInterface<double>::GetIndicateNearlyInteger
          (TDefaultNumericTypeInterface<double> *this)

{
  return this->bIndicateNearlyInteger;
}

// GetIndicateNearlyInteger @ 142941550

bool __thiscall
TDefaultNumericTypeInterface<__int64>::GetIndicateNearlyInteger
          (TDefaultNumericTypeInterface<__int64> *this)

{
  return this->bIndicateNearlyInteger;
}

// GetIndicateNearlyInteger @ 142941560

bool __thiscall
TDefaultNumericTypeInterface<unsigned___int64>::GetIndicateNearlyInteger
          (TDefaultNumericTypeInterface<unsigned___int64> *this)

{
  return this->bIndicateNearlyInteger;
}

// GetMaxFractionalDigits @ 142941f60

int __thiscall
TDefaultNumericTypeInterface<signed_char>::GetMaxFractionalDigits
          (TDefaultNumericTypeInterface<signed_char> *this)

{
  return (int)this->MaxFractionalDigits;
}

// GetMaxFractionalDigits @ 142941f70

int __thiscall
TDefaultNumericTypeInterface<unsigned_char>::GetMaxFractionalDigits
          (TDefaultNumericTypeInterface<unsigned_char> *this)

{
  return (int)this->MaxFractionalDigits;
}

// GetMaxFractionalDigits @ 142941f80

int __thiscall
TDefaultNumericTypeInterface<short>::GetMaxFractionalDigits
          (TDefaultNumericTypeInterface<short> *this)

{
  return (int)this->MaxFractionalDigits;
}

// GetMaxFractionalDigits @ 142941f90

int __thiscall
TDefaultNumericTypeInterface<unsigned_short>::GetMaxFractionalDigits
          (TDefaultNumericTypeInterface<unsigned_short> *this)

{
  return (int)this->MaxFractionalDigits;
}

// GetMaxFractionalDigits @ 142941fa0

int __thiscall
TDefaultNumericTypeInterface<int>::GetMaxFractionalDigits(TDefaultNumericTypeInterface<int> *this)

{
  return (int)this->MaxFractionalDigits;
}

// GetMaxFractionalDigits @ 142941fb0

int __thiscall
TDefaultNumericTypeInterface<unsigned_int>::GetMaxFractionalDigits
          (TDefaultNumericTypeInterface<unsigned_int> *this)

{
  return (int)this->MaxFractionalDigits;
}

// GetMaxFractionalDigits @ 142941fc0

int __thiscall
TDefaultNumericTypeInterface<float>::GetMaxFractionalDigits
          (TDefaultNumericTypeInterface<float> *this)

{
  return (int)this->MaxFractionalDigits;
}

// GetMaxFractionalDigits @ 142941fd0

int __thiscall
TDefaultNumericTypeInterface<double>::GetMaxFractionalDigits
          (TDefaultNumericTypeInterface<double> *this)

{
  return (int)this->MaxFractionalDigits;
}

// GetMaxFractionalDigits @ 142941fe0

int __thiscall
TDefaultNumericTypeInterface<__int64>::GetMaxFractionalDigits
          (TDefaultNumericTypeInterface<__int64> *this)

{
  return (int)this->MaxFractionalDigits;
}

// GetMaxFractionalDigits @ 142941ff0

int __thiscall
TDefaultNumericTypeInterface<unsigned___int64>::GetMaxFractionalDigits
          (TDefaultNumericTypeInterface<unsigned___int64> *this)

{
  return (int)this->MaxFractionalDigits;
}

// GetMinFractionalDigits @ 142942e20

int __thiscall
TDefaultNumericTypeInterface<signed_char>::GetMinFractionalDigits
          (TDefaultNumericTypeInterface<signed_char> *this)

{
  return (int)this->MinFractionalDigits;
}

// GetMinFractionalDigits @ 142942e30

int __thiscall
TDefaultNumericTypeInterface<unsigned_char>::GetMinFractionalDigits
          (TDefaultNumericTypeInterface<unsigned_char> *this)

{
  return (int)this->MinFractionalDigits;
}

// GetMinFractionalDigits @ 142942e40

int __thiscall
TDefaultNumericTypeInterface<short>::GetMinFractionalDigits
          (TDefaultNumericTypeInterface<short> *this)

{
  return (int)this->MinFractionalDigits;
}

// GetMinFractionalDigits @ 142942e50

int __thiscall
TDefaultNumericTypeInterface<unsigned_short>::GetMinFractionalDigits
          (TDefaultNumericTypeInterface<unsigned_short> *this)

{
  return (int)this->MinFractionalDigits;
}

// GetMinFractionalDigits @ 142942e60

int __thiscall
TDefaultNumericTypeInterface<int>::GetMinFractionalDigits(TDefaultNumericTypeInterface<int> *this)

{
  return (int)this->MinFractionalDigits;
}

// GetMinFractionalDigits @ 142942e70

int __thiscall
TDefaultNumericTypeInterface<unsigned_int>::GetMinFractionalDigits
          (TDefaultNumericTypeInterface<unsigned_int> *this)

{
  return (int)this->MinFractionalDigits;
}

// GetMinFractionalDigits @ 142942e80

int __thiscall
TDefaultNumericTypeInterface<float>::GetMinFractionalDigits
          (TDefaultNumericTypeInterface<float> *this)

{
  return (int)this->MinFractionalDigits;
}

// GetMinFractionalDigits @ 142942e90

int __thiscall
TDefaultNumericTypeInterface<double>::GetMinFractionalDigits
          (TDefaultNumericTypeInterface<double> *this)

{
  return (int)this->MinFractionalDigits;
}

// GetMinFractionalDigits @ 142942ea0

int __thiscall
TDefaultNumericTypeInterface<__int64>::GetMinFractionalDigits
          (TDefaultNumericTypeInterface<__int64> *this)

{
  return (int)this->MinFractionalDigits;
}

// GetMinFractionalDigits @ 142942eb0

int __thiscall
TDefaultNumericTypeInterface<unsigned___int64>::GetMinFractionalDigits
          (TDefaultNumericTypeInterface<unsigned___int64> *this)

{
  return (int)this->MinFractionalDigits;
}

// IsCharacterValid @ 1429537a0

bool __thiscall
TDefaultNumericTypeInterface<signed_char>::IsCharacterValid
          (TDefaultNumericTypeInterface<signed_char> *this,wchar_t param_1)

{
  FDecimalNumberFormattingRules *pFVar1;
  wchar_t *pwVar2;
  ForAnyElementType FVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<signed_char>::IsCharacterValid(wchar_t)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<signed_char>::IsCharacterValid(wchar_t)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<signed_char>::IsCharacterValid(wchar_t)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<signed_char>::IsCharacterValid(wchar_t)const___ptr64'
                        ::__l2::ValidChars,L"1234567890()-+=\\/.,*^%%");
    atexit(`TDefaultNumericTypeInterface<signed_char>::IsCharacterValid'::__l2::
           _dynamic_atexit_destructor_for__ValidChars__);
    _Init_thread_footer(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<signed_char>::IsCharacterValid(wchar_t)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (param_1 != L'\0') {
    for (FVar3.Data = `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<signed_char>::IsCharacterValid(wchar_t)const___ptr64'
                      ::__l2::ValidChars.Data.AllocatorInstance.Data;
        FVar3.Data !=
        `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<signed_char>::IsCharacterValid(wchar_t)const___ptr64'
        ::__l2::ValidChars.Data.AllocatorInstance.Data +
        (longlong)
        `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<signed_char>::IsCharacterValid(wchar_t)const___ptr64'
        ::__l2::ValidChars.Data.ArrayNum * 2; FVar3.Data = FVar3.Data + 2) {
      if (*(wchar_t *)FVar3.Data == param_1) {
        return true;
      }
    }
    pFVar1 = ExpressionParser::GetLocalizedNumberFormattingRules();
    if ((param_1 == pFVar1->GroupingSeparatorCharacter) ||
       (param_1 == pFVar1->DecimalSeparatorCharacter)) {
      return true;
    }
    for (pwVar2 = pFVar1->DigitCharacters;
        (FNumberFormattingOptions *)pwVar2 != &pFVar1->CultureDefaultFormattingOptions;
        pwVar2 = pwVar2 + 1) {
      if (*pwVar2 == param_1) {
        return true;
      }
    }
  }
  return false;
}

// IsCharacterValid @ 142953880

bool __thiscall
TDefaultNumericTypeInterface<unsigned_char>::IsCharacterValid
          (TDefaultNumericTypeInterface<unsigned_char> *this,wchar_t param_1)

{
  FDecimalNumberFormattingRules *pFVar1;
  wchar_t *pwVar2;
  ForAnyElementType FVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_char>::IsCharacterValid(wchar_t)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_char>::IsCharacterValid(wchar_t)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_char>::IsCharacterValid(wchar_t)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_char>::IsCharacterValid(wchar_t)const___ptr64'
                        ::__l2::ValidChars,L"1234567890()-+=\\/.,*^%%");
    atexit(`TDefaultNumericTypeInterface<unsigned_char>::IsCharacterValid'::__l2::
           _dynamic_atexit_destructor_for__ValidChars__);
    _Init_thread_footer(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_char>::IsCharacterValid(wchar_t)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (param_1 != L'\0') {
    for (FVar3.Data = `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_char>::IsCharacterValid(wchar_t)const___ptr64'
                      ::__l2::ValidChars.Data.AllocatorInstance.Data;
        FVar3.Data !=
        `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_char>::IsCharacterValid(wchar_t)const___ptr64'
        ::__l2::ValidChars.Data.AllocatorInstance.Data +
        (longlong)
        `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_char>::IsCharacterValid(wchar_t)const___ptr64'
        ::__l2::ValidChars.Data.ArrayNum * 2; FVar3.Data = FVar3.Data + 2) {
      if (*(wchar_t *)FVar3.Data == param_1) {
        return true;
      }
    }
    pFVar1 = ExpressionParser::GetLocalizedNumberFormattingRules();
    if ((param_1 == pFVar1->GroupingSeparatorCharacter) ||
       (param_1 == pFVar1->DecimalSeparatorCharacter)) {
      return true;
    }
    for (pwVar2 = pFVar1->DigitCharacters;
        (FNumberFormattingOptions *)pwVar2 != &pFVar1->CultureDefaultFormattingOptions;
        pwVar2 = pwVar2 + 1) {
      if (*pwVar2 == param_1) {
        return true;
      }
    }
  }
  return false;
}

// IsCharacterValid @ 142953960

bool __thiscall
TDefaultNumericTypeInterface<short>::IsCharacterValid
          (TDefaultNumericTypeInterface<short> *this,wchar_t param_1)

{
  FDecimalNumberFormattingRules *pFVar1;
  wchar_t *pwVar2;
  ForAnyElementType FVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<short>::IsCharacterValid(wchar_t)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<short>::IsCharacterValid(wchar_t)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<short>::IsCharacterValid(wchar_t)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<short>::IsCharacterValid(wchar_t)const___ptr64'
                        ::__l2::ValidChars,L"1234567890()-+=\\/.,*^%%");
    atexit(`TDefaultNumericTypeInterface<short>::IsCharacterValid'::__l2::
           _dynamic_atexit_destructor_for__ValidChars__);
    _Init_thread_footer(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<short>::IsCharacterValid(wchar_t)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (param_1 != L'\0') {
    for (FVar3.Data = `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<short>::IsCharacterValid(wchar_t)const___ptr64'
                      ::__l2::ValidChars.Data.AllocatorInstance.Data;
        FVar3.Data !=
        `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<short>::IsCharacterValid(wchar_t)const___ptr64'
        ::__l2::ValidChars.Data.AllocatorInstance.Data +
        (longlong)
        `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<short>::IsCharacterValid(wchar_t)const___ptr64'
        ::__l2::ValidChars.Data.ArrayNum * 2; FVar3.Data = FVar3.Data + 2) {
      if (*(wchar_t *)FVar3.Data == param_1) {
        return true;
      }
    }
    pFVar1 = ExpressionParser::GetLocalizedNumberFormattingRules();
    if ((param_1 == pFVar1->GroupingSeparatorCharacter) ||
       (param_1 == pFVar1->DecimalSeparatorCharacter)) {
      return true;
    }
    for (pwVar2 = pFVar1->DigitCharacters;
        (FNumberFormattingOptions *)pwVar2 != &pFVar1->CultureDefaultFormattingOptions;
        pwVar2 = pwVar2 + 1) {
      if (*pwVar2 == param_1) {
        return true;
      }
    }
  }
  return false;
}

// IsCharacterValid @ 142953a40

bool __thiscall
TDefaultNumericTypeInterface<unsigned_short>::IsCharacterValid
          (TDefaultNumericTypeInterface<unsigned_short> *this,wchar_t param_1)

{
  FDecimalNumberFormattingRules *pFVar1;
  wchar_t *pwVar2;
  ForAnyElementType FVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_short>::IsCharacterValid(wchar_t)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_short>::IsCharacterValid(wchar_t)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_short>::IsCharacterValid(wchar_t)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_short>::IsCharacterValid(wchar_t)const___ptr64'
                        ::__l2::ValidChars,L"1234567890()-+=\\/.,*^%%");
    atexit(`TDefaultNumericTypeInterface<unsigned_short>::IsCharacterValid'::__l2::
           _dynamic_atexit_destructor_for__ValidChars__);
    _Init_thread_footer(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_short>::IsCharacterValid(wchar_t)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (param_1 != L'\0') {
    for (FVar3.Data = `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_short>::IsCharacterValid(wchar_t)const___ptr64'
                      ::__l2::ValidChars.Data.AllocatorInstance.Data;
        FVar3.Data !=
        `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_short>::IsCharacterValid(wchar_t)const___ptr64'
        ::__l2::ValidChars.Data.AllocatorInstance.Data +
        (longlong)
        `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_short>::IsCharacterValid(wchar_t)const___ptr64'
        ::__l2::ValidChars.Data.ArrayNum * 2; FVar3.Data = FVar3.Data + 2) {
      if (*(wchar_t *)FVar3.Data == param_1) {
        return true;
      }
    }
    pFVar1 = ExpressionParser::GetLocalizedNumberFormattingRules();
    if ((param_1 == pFVar1->GroupingSeparatorCharacter) ||
       (param_1 == pFVar1->DecimalSeparatorCharacter)) {
      return true;
    }
    for (pwVar2 = pFVar1->DigitCharacters;
        (FNumberFormattingOptions *)pwVar2 != &pFVar1->CultureDefaultFormattingOptions;
        pwVar2 = pwVar2 + 1) {
      if (*pwVar2 == param_1) {
        return true;
      }
    }
  }
  return false;
}

// IsCharacterValid @ 142953b20

bool __thiscall
TDefaultNumericTypeInterface<int>::IsCharacterValid
          (TDefaultNumericTypeInterface<int> *this,wchar_t param_1)

{
  FDecimalNumberFormattingRules *pFVar1;
  wchar_t *pwVar2;
  ForAnyElementType FVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<int>::IsCharacterValid(wchar_t)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<int>::IsCharacterValid(wchar_t)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<int>::IsCharacterValid(wchar_t)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<int>::IsCharacterValid(wchar_t)const___ptr64'
                        ::__l2::ValidChars,L"1234567890()-+=\\/.,*^%%");
    atexit(`TDefaultNumericTypeInterface<int>::IsCharacterValid'::__l2::
           _dynamic_atexit_destructor_for__ValidChars__);
    _Init_thread_footer(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<int>::IsCharacterValid(wchar_t)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (param_1 != L'\0') {
    for (FVar3.Data = `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<int>::IsCharacterValid(wchar_t)const___ptr64'
                      ::__l2::ValidChars.Data.AllocatorInstance.Data;
        FVar3.Data !=
        `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<int>::IsCharacterValid(wchar_t)const___ptr64'
        ::__l2::ValidChars.Data.AllocatorInstance.Data +
        (longlong)
        `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<int>::IsCharacterValid(wchar_t)const___ptr64'
        ::__l2::ValidChars.Data.ArrayNum * 2; FVar3.Data = FVar3.Data + 2) {
      if (*(wchar_t *)FVar3.Data == param_1) {
        return true;
      }
    }
    pFVar1 = ExpressionParser::GetLocalizedNumberFormattingRules();
    if ((param_1 == pFVar1->GroupingSeparatorCharacter) ||
       (param_1 == pFVar1->DecimalSeparatorCharacter)) {
      return true;
    }
    for (pwVar2 = pFVar1->DigitCharacters;
        (FNumberFormattingOptions *)pwVar2 != &pFVar1->CultureDefaultFormattingOptions;
        pwVar2 = pwVar2 + 1) {
      if (*pwVar2 == param_1) {
        return true;
      }
    }
  }
  return false;
}

// IsCharacterValid @ 142953c00

bool __thiscall
TDefaultNumericTypeInterface<unsigned_int>::IsCharacterValid
          (TDefaultNumericTypeInterface<unsigned_int> *this,wchar_t param_1)

{
  FDecimalNumberFormattingRules *pFVar1;
  wchar_t *pwVar2;
  ForAnyElementType FVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_int>::IsCharacterValid(wchar_t)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_int>::IsCharacterValid(wchar_t)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_int>::IsCharacterValid(wchar_t)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_int>::IsCharacterValid(wchar_t)const___ptr64'
                        ::__l2::ValidChars,L"1234567890()-+=\\/.,*^%%");
    atexit(`TDefaultNumericTypeInterface<unsigned_int>::IsCharacterValid'::__l2::
           _dynamic_atexit_destructor_for__ValidChars__);
    _Init_thread_footer(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_int>::IsCharacterValid(wchar_t)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (param_1 != L'\0') {
    for (FVar3.Data = `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_int>::IsCharacterValid(wchar_t)const___ptr64'
                      ::__l2::ValidChars.Data.AllocatorInstance.Data;
        FVar3.Data !=
        `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_int>::IsCharacterValid(wchar_t)const___ptr64'
        ::__l2::ValidChars.Data.AllocatorInstance.Data +
        (longlong)
        `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_int>::IsCharacterValid(wchar_t)const___ptr64'
        ::__l2::ValidChars.Data.ArrayNum * 2; FVar3.Data = FVar3.Data + 2) {
      if (*(wchar_t *)FVar3.Data == param_1) {
        return true;
      }
    }
    pFVar1 = ExpressionParser::GetLocalizedNumberFormattingRules();
    if ((param_1 == pFVar1->GroupingSeparatorCharacter) ||
       (param_1 == pFVar1->DecimalSeparatorCharacter)) {
      return true;
    }
    for (pwVar2 = pFVar1->DigitCharacters;
        (FNumberFormattingOptions *)pwVar2 != &pFVar1->CultureDefaultFormattingOptions;
        pwVar2 = pwVar2 + 1) {
      if (*pwVar2 == param_1) {
        return true;
      }
    }
  }
  return false;
}

// IsCharacterValid @ 142953ce0

bool __thiscall
TDefaultNumericTypeInterface<float>::IsCharacterValid
          (TDefaultNumericTypeInterface<float> *this,wchar_t param_1)

{
  FDecimalNumberFormattingRules *pFVar1;
  wchar_t *pwVar2;
  ForAnyElementType FVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<float>::IsCharacterValid(wchar_t)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<float>::IsCharacterValid(wchar_t)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<float>::IsCharacterValid(wchar_t)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<float>::IsCharacterValid(wchar_t)const___ptr64'
                        ::__l2::ValidChars,L"1234567890()-+=\\/.,*^%%");
    atexit(`TDefaultNumericTypeInterface<float>::IsCharacterValid'::__l2::
           _dynamic_atexit_destructor_for__ValidChars__);
    _Init_thread_footer(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<float>::IsCharacterValid(wchar_t)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (param_1 != L'\0') {
    for (FVar3.Data = `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<float>::IsCharacterValid(wchar_t)const___ptr64'
                      ::__l2::ValidChars.Data.AllocatorInstance.Data;
        FVar3.Data !=
        `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<float>::IsCharacterValid(wchar_t)const___ptr64'
        ::__l2::ValidChars.Data.AllocatorInstance.Data +
        (longlong)
        `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<float>::IsCharacterValid(wchar_t)const___ptr64'
        ::__l2::ValidChars.Data.ArrayNum * 2; FVar3.Data = FVar3.Data + 2) {
      if (*(wchar_t *)FVar3.Data == param_1) {
        return true;
      }
    }
    pFVar1 = ExpressionParser::GetLocalizedNumberFormattingRules();
    if ((param_1 == pFVar1->GroupingSeparatorCharacter) ||
       (param_1 == pFVar1->DecimalSeparatorCharacter)) {
      return true;
    }
    for (pwVar2 = pFVar1->DigitCharacters;
        (FNumberFormattingOptions *)pwVar2 != &pFVar1->CultureDefaultFormattingOptions;
        pwVar2 = pwVar2 + 1) {
      if (*pwVar2 == param_1) {
        return true;
      }
    }
  }
  return false;
}

// IsCharacterValid @ 142953dc0

bool __thiscall
TDefaultNumericTypeInterface<double>::IsCharacterValid
          (TDefaultNumericTypeInterface<double> *this,wchar_t param_1)

{
  FDecimalNumberFormattingRules *pFVar1;
  wchar_t *pwVar2;
  ForAnyElementType FVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<double>::IsCharacterValid(wchar_t)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<double>::IsCharacterValid(wchar_t)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<double>::IsCharacterValid(wchar_t)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<double>::IsCharacterValid(wchar_t)const___ptr64'
                        ::__l2::ValidChars,L"1234567890()-+=\\/.,*^%%");
    atexit(`TDefaultNumericTypeInterface<double>::IsCharacterValid'::__l2::
           _dynamic_atexit_destructor_for__ValidChars__);
    _Init_thread_footer(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<double>::IsCharacterValid(wchar_t)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (param_1 != L'\0') {
    for (FVar3.Data = `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<double>::IsCharacterValid(wchar_t)const___ptr64'
                      ::__l2::ValidChars.Data.AllocatorInstance.Data;
        FVar3.Data !=
        `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<double>::IsCharacterValid(wchar_t)const___ptr64'
        ::__l2::ValidChars.Data.AllocatorInstance.Data +
        (longlong)
        `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<double>::IsCharacterValid(wchar_t)const___ptr64'
        ::__l2::ValidChars.Data.ArrayNum * 2; FVar3.Data = FVar3.Data + 2) {
      if (*(wchar_t *)FVar3.Data == param_1) {
        return true;
      }
    }
    pFVar1 = ExpressionParser::GetLocalizedNumberFormattingRules();
    if ((param_1 == pFVar1->GroupingSeparatorCharacter) ||
       (param_1 == pFVar1->DecimalSeparatorCharacter)) {
      return true;
    }
    for (pwVar2 = pFVar1->DigitCharacters;
        (FNumberFormattingOptions *)pwVar2 != &pFVar1->CultureDefaultFormattingOptions;
        pwVar2 = pwVar2 + 1) {
      if (*pwVar2 == param_1) {
        return true;
      }
    }
  }
  return false;
}

// IsCharacterValid @ 142953ea0

bool __thiscall
TDefaultNumericTypeInterface<__int64>::IsCharacterValid
          (TDefaultNumericTypeInterface<__int64> *this,wchar_t param_1)

{
  FDecimalNumberFormattingRules *pFVar1;
  wchar_t *pwVar2;
  ForAnyElementType FVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<__int64>::IsCharacterValid(wchar_t)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<__int64>::IsCharacterValid(wchar_t)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<__int64>::IsCharacterValid(wchar_t)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<__int64>::IsCharacterValid(wchar_t)const___ptr64'
                        ::__l2::ValidChars,L"1234567890()-+=\\/.,*^%%");
    atexit(`TDefaultNumericTypeInterface<__int64>::IsCharacterValid'::__l2::
           _dynamic_atexit_destructor_for__ValidChars__);
    _Init_thread_footer(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<__int64>::IsCharacterValid(wchar_t)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (param_1 != L'\0') {
    for (FVar3.Data = `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<__int64>::IsCharacterValid(wchar_t)const___ptr64'
                      ::__l2::ValidChars.Data.AllocatorInstance.Data;
        FVar3.Data !=
        `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<__int64>::IsCharacterValid(wchar_t)const___ptr64'
        ::__l2::ValidChars.Data.AllocatorInstance.Data +
        (longlong)
        `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<__int64>::IsCharacterValid(wchar_t)const___ptr64'
        ::__l2::ValidChars.Data.ArrayNum * 2; FVar3.Data = FVar3.Data + 2) {
      if (*(wchar_t *)FVar3.Data == param_1) {
        return true;
      }
    }
    pFVar1 = ExpressionParser::GetLocalizedNumberFormattingRules();
    if ((param_1 == pFVar1->GroupingSeparatorCharacter) ||
       (param_1 == pFVar1->DecimalSeparatorCharacter)) {
      return true;
    }
    for (pwVar2 = pFVar1->DigitCharacters;
        (FNumberFormattingOptions *)pwVar2 != &pFVar1->CultureDefaultFormattingOptions;
        pwVar2 = pwVar2 + 1) {
      if (*pwVar2 == param_1) {
        return true;
      }
    }
  }
  return false;
}

// IsCharacterValid @ 142953f80

bool __thiscall
TDefaultNumericTypeInterface<unsigned___int64>::IsCharacterValid
          (TDefaultNumericTypeInterface<unsigned___int64> *this,wchar_t param_1)

{
  FDecimalNumberFormattingRules *pFVar1;
  wchar_t *pwVar2;
  ForAnyElementType FVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned___int64>::IsCharacterValid(wchar_t)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned___int64>::IsCharacterValid(wchar_t)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned___int64>::IsCharacterValid(wchar_t)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned___int64>::IsCharacterValid(wchar_t)const___ptr64'
                        ::__l2::ValidChars,L"1234567890()-+=\\/.,*^%%");
    atexit(`TDefaultNumericTypeInterface<unsigned___int64>::IsCharacterValid'::__l2::
           _dynamic_atexit_destructor_for__ValidChars__);
    _Init_thread_footer(&`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned___int64>::IsCharacterValid(wchar_t)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (param_1 != L'\0') {
    for (FVar3.Data = `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned___int64>::IsCharacterValid(wchar_t)const___ptr64'
                      ::__l2::ValidChars.Data.AllocatorInstance.Data;
        FVar3.Data !=
        `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned___int64>::IsCharacterValid(wchar_t)const___ptr64'
        ::__l2::ValidChars.Data.AllocatorInstance.Data +
        (longlong)
        `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned___int64>::IsCharacterValid(wchar_t)const___ptr64'
        ::__l2::ValidChars.Data.ArrayNum * 2; FVar3.Data = FVar3.Data + 2) {
      if (*(wchar_t *)FVar3.Data == param_1) {
        return true;
      }
    }
    pFVar1 = ExpressionParser::GetLocalizedNumberFormattingRules();
    if ((param_1 == pFVar1->GroupingSeparatorCharacter) ||
       (param_1 == pFVar1->DecimalSeparatorCharacter)) {
      return true;
    }
    for (pwVar2 = pFVar1->DigitCharacters;
        (FNumberFormattingOptions *)pwVar2 != &pFVar1->CultureDefaultFormattingOptions;
        pwVar2 = pwVar2 + 1) {
      if (*pwVar2 == param_1) {
        return true;
      }
    }
  }
  return false;
}

// SetIndicateNearlyInteger @ 142991000

void __thiscall
TDefaultNumericTypeInterface<signed_char>::SetIndicateNearlyInteger
          (TDefaultNumericTypeInterface<signed_char> *this,TAttribute<TOptional<bool>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<bool> *pTVar3;
  
  pTVar3 = TAttribute<TOptional<bool>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->bIndicateNearlyInteger = false;
    return;
  }
  pTVar3 = TAttribute<TOptional<bool>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bIndicateNearlyInteger = pTVar3->TypedValue;
  return;
}

// SetIndicateNearlyInteger @ 142991080

void __thiscall
TDefaultNumericTypeInterface<unsigned_char>::SetIndicateNearlyInteger
          (TDefaultNumericTypeInterface<unsigned_char> *this,TAttribute<TOptional<bool>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<bool> *pTVar3;
  
  pTVar3 = TAttribute<TOptional<bool>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->bIndicateNearlyInteger = false;
    return;
  }
  pTVar3 = TAttribute<TOptional<bool>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bIndicateNearlyInteger = pTVar3->TypedValue;
  return;
}

// SetIndicateNearlyInteger @ 142991100

void __thiscall
TDefaultNumericTypeInterface<short>::SetIndicateNearlyInteger
          (TDefaultNumericTypeInterface<short> *this,TAttribute<TOptional<bool>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<bool> *pTVar3;
  
  pTVar3 = TAttribute<TOptional<bool>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->bIndicateNearlyInteger = false;
    return;
  }
  pTVar3 = TAttribute<TOptional<bool>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bIndicateNearlyInteger = pTVar3->TypedValue;
  return;
}

// SetIndicateNearlyInteger @ 142991180

void __thiscall
TDefaultNumericTypeInterface<unsigned_short>::SetIndicateNearlyInteger
          (TDefaultNumericTypeInterface<unsigned_short> *this,TAttribute<TOptional<bool>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<bool> *pTVar3;
  
  pTVar3 = TAttribute<TOptional<bool>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->bIndicateNearlyInteger = false;
    return;
  }
  pTVar3 = TAttribute<TOptional<bool>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bIndicateNearlyInteger = pTVar3->TypedValue;
  return;
}

// SetIndicateNearlyInteger @ 142991200

void __thiscall
TDefaultNumericTypeInterface<int>::SetIndicateNearlyInteger
          (TDefaultNumericTypeInterface<int> *this,TAttribute<TOptional<bool>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<bool> *pTVar3;
  
  pTVar3 = TAttribute<TOptional<bool>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->bIndicateNearlyInteger = false;
    return;
  }
  pTVar3 = TAttribute<TOptional<bool>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bIndicateNearlyInteger = pTVar3->TypedValue;
  return;
}

// SetIndicateNearlyInteger @ 142991280

void __thiscall
TDefaultNumericTypeInterface<unsigned_int>::SetIndicateNearlyInteger
          (TDefaultNumericTypeInterface<unsigned_int> *this,TAttribute<TOptional<bool>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<bool> *pTVar3;
  
  pTVar3 = TAttribute<TOptional<bool>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->bIndicateNearlyInteger = false;
    return;
  }
  pTVar3 = TAttribute<TOptional<bool>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bIndicateNearlyInteger = pTVar3->TypedValue;
  return;
}

// SetIndicateNearlyInteger @ 142991300

void __thiscall
TDefaultNumericTypeInterface<float>::SetIndicateNearlyInteger
          (TDefaultNumericTypeInterface<float> *this,TAttribute<TOptional<bool>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<bool> *pTVar3;
  
  pTVar3 = TAttribute<TOptional<bool>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->bIndicateNearlyInteger = false;
    return;
  }
  pTVar3 = TAttribute<TOptional<bool>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bIndicateNearlyInteger = pTVar3->TypedValue;
  return;
}

// SetIndicateNearlyInteger @ 142991380

void __thiscall
TDefaultNumericTypeInterface<double>::SetIndicateNearlyInteger
          (TDefaultNumericTypeInterface<double> *this,TAttribute<TOptional<bool>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<bool> *pTVar3;
  
  pTVar3 = TAttribute<TOptional<bool>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->bIndicateNearlyInteger = false;
    return;
  }
  pTVar3 = TAttribute<TOptional<bool>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bIndicateNearlyInteger = pTVar3->TypedValue;
  return;
}

// SetIndicateNearlyInteger @ 142991400

void __thiscall
TDefaultNumericTypeInterface<__int64>::SetIndicateNearlyInteger
          (TDefaultNumericTypeInterface<__int64> *this,TAttribute<TOptional<bool>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<bool> *pTVar3;
  
  pTVar3 = TAttribute<TOptional<bool>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->bIndicateNearlyInteger = false;
    return;
  }
  pTVar3 = TAttribute<TOptional<bool>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bIndicateNearlyInteger = pTVar3->TypedValue;
  return;
}

// SetIndicateNearlyInteger @ 142991480

void __thiscall
TDefaultNumericTypeInterface<unsigned___int64>::SetIndicateNearlyInteger
          (TDefaultNumericTypeInterface<unsigned___int64> *this,
          TAttribute<TOptional<bool>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<bool> *pTVar3;
  
  pTVar3 = TAttribute<TOptional<bool>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->bIndicateNearlyInteger = false;
    return;
  }
  pTVar3 = TAttribute<TOptional<bool>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bIndicateNearlyInteger = pTVar3->TypedValue;
  return;
}

// SetMaxFractionalDigits @ 142994530

void __thiscall
TDefaultNumericTypeInterface<signed_char>::SetMaxFractionalDigits
          (TDefaultNumericTypeInterface<signed_char> *this,TAttribute<TOptional<int>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<int> *pTVar3;
  int iVar4;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->MaxFractionalDigits = 6;
    return;
  }
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = pTVar3->TypedValue;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar4 != (short)iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MaxFractionalDigits = (short)iVar4;
  return;
}

// SetMaxFractionalDigits @ 1429945f0

void __thiscall
TDefaultNumericTypeInterface<unsigned_char>::SetMaxFractionalDigits
          (TDefaultNumericTypeInterface<unsigned_char> *this,TAttribute<TOptional<int>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<int> *pTVar3;
  int iVar4;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->MaxFractionalDigits = 6;
    return;
  }
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = pTVar3->TypedValue;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar4 != (short)iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MaxFractionalDigits = (short)iVar4;
  return;
}

// SetMaxFractionalDigits @ 1429946b0

void __thiscall
TDefaultNumericTypeInterface<short>::SetMaxFractionalDigits
          (TDefaultNumericTypeInterface<short> *this,TAttribute<TOptional<int>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<int> *pTVar3;
  int iVar4;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->MaxFractionalDigits = 6;
    return;
  }
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = pTVar3->TypedValue;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar4 != (short)iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MaxFractionalDigits = (short)iVar4;
  return;
}

// SetMaxFractionalDigits @ 142994770

void __thiscall
TDefaultNumericTypeInterface<unsigned_short>::SetMaxFractionalDigits
          (TDefaultNumericTypeInterface<unsigned_short> *this,TAttribute<TOptional<int>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<int> *pTVar3;
  int iVar4;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->MaxFractionalDigits = 6;
    return;
  }
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = pTVar3->TypedValue;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar4 != (short)iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MaxFractionalDigits = (short)iVar4;
  return;
}

// SetMaxFractionalDigits @ 142994830

void __thiscall
TDefaultNumericTypeInterface<int>::SetMaxFractionalDigits
          (TDefaultNumericTypeInterface<int> *this,TAttribute<TOptional<int>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<int> *pTVar3;
  int iVar4;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->MaxFractionalDigits = 6;
    return;
  }
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = pTVar3->TypedValue;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar4 != (short)iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MaxFractionalDigits = (short)iVar4;
  return;
}

// SetMaxFractionalDigits @ 1429948f0

void __thiscall
TDefaultNumericTypeInterface<unsigned_int>::SetMaxFractionalDigits
          (TDefaultNumericTypeInterface<unsigned_int> *this,TAttribute<TOptional<int>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<int> *pTVar3;
  int iVar4;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->MaxFractionalDigits = 6;
    return;
  }
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = pTVar3->TypedValue;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar4 != (short)iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MaxFractionalDigits = (short)iVar4;
  return;
}

// SetMaxFractionalDigits @ 1429949b0

void __thiscall
TDefaultNumericTypeInterface<float>::SetMaxFractionalDigits
          (TDefaultNumericTypeInterface<float> *this,TAttribute<TOptional<int>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<int> *pTVar3;
  int iVar4;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->MaxFractionalDigits = 6;
    return;
  }
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = pTVar3->TypedValue;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar4 != (short)iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MaxFractionalDigits = (short)iVar4;
  return;
}

// SetMaxFractionalDigits @ 142994a70

void __thiscall
TDefaultNumericTypeInterface<double>::SetMaxFractionalDigits
          (TDefaultNumericTypeInterface<double> *this,TAttribute<TOptional<int>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<int> *pTVar3;
  int iVar4;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->MaxFractionalDigits = 6;
    return;
  }
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = pTVar3->TypedValue;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar4 != (short)iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MaxFractionalDigits = (short)iVar4;
  return;
}

// SetMaxFractionalDigits @ 142994b30

void __thiscall
TDefaultNumericTypeInterface<__int64>::SetMaxFractionalDigits
          (TDefaultNumericTypeInterface<__int64> *this,TAttribute<TOptional<int>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<int> *pTVar3;
  int iVar4;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->MaxFractionalDigits = 6;
    return;
  }
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = pTVar3->TypedValue;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar4 != (short)iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MaxFractionalDigits = (short)iVar4;
  return;
}

// SetMaxFractionalDigits @ 142994bf0

void __thiscall
TDefaultNumericTypeInterface<unsigned___int64>::SetMaxFractionalDigits
          (TDefaultNumericTypeInterface<unsigned___int64> *this,TAttribute<TOptional<int>_> *param_1
          )

{
  code *pcVar1;
  bool bVar2;
  TOptional<int> *pTVar3;
  int iVar4;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->MaxFractionalDigits = 6;
    return;
  }
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = pTVar3->TypedValue;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar4 != (short)iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MaxFractionalDigits = (short)iVar4;
  return;
}

// SetMinFractionalDigits @ 142996ff0

void __thiscall
TDefaultNumericTypeInterface<signed_char>::SetMinFractionalDigits
          (TDefaultNumericTypeInterface<signed_char> *this,TAttribute<TOptional<int>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<int> *pTVar3;
  int iVar4;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->MinFractionalDigits = 1;
    return;
  }
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = pTVar3->TypedValue;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar4 != (short)iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MinFractionalDigits = (short)iVar4;
  return;
}

// SetMinFractionalDigits @ 1429970b0

void __thiscall
TDefaultNumericTypeInterface<unsigned_char>::SetMinFractionalDigits
          (TDefaultNumericTypeInterface<unsigned_char> *this,TAttribute<TOptional<int>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<int> *pTVar3;
  int iVar4;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->MinFractionalDigits = 1;
    return;
  }
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = pTVar3->TypedValue;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar4 != (short)iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MinFractionalDigits = (short)iVar4;
  return;
}

// SetMinFractionalDigits @ 142997170

void __thiscall
TDefaultNumericTypeInterface<short>::SetMinFractionalDigits
          (TDefaultNumericTypeInterface<short> *this,TAttribute<TOptional<int>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<int> *pTVar3;
  int iVar4;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->MinFractionalDigits = 1;
    return;
  }
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = pTVar3->TypedValue;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar4 != (short)iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MinFractionalDigits = (short)iVar4;
  return;
}

// SetMinFractionalDigits @ 142997230

void __thiscall
TDefaultNumericTypeInterface<unsigned_short>::SetMinFractionalDigits
          (TDefaultNumericTypeInterface<unsigned_short> *this,TAttribute<TOptional<int>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<int> *pTVar3;
  int iVar4;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->MinFractionalDigits = 1;
    return;
  }
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = pTVar3->TypedValue;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar4 != (short)iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MinFractionalDigits = (short)iVar4;
  return;
}

// SetMinFractionalDigits @ 1429972f0

void __thiscall
TDefaultNumericTypeInterface<int>::SetMinFractionalDigits
          (TDefaultNumericTypeInterface<int> *this,TAttribute<TOptional<int>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<int> *pTVar3;
  int iVar4;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->MinFractionalDigits = 1;
    return;
  }
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = pTVar3->TypedValue;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar4 != (short)iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MinFractionalDigits = (short)iVar4;
  return;
}

// SetMinFractionalDigits @ 1429973b0

void __thiscall
TDefaultNumericTypeInterface<unsigned_int>::SetMinFractionalDigits
          (TDefaultNumericTypeInterface<unsigned_int> *this,TAttribute<TOptional<int>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<int> *pTVar3;
  int iVar4;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->MinFractionalDigits = 1;
    return;
  }
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = pTVar3->TypedValue;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar4 != (short)iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MinFractionalDigits = (short)iVar4;
  return;
}

// SetMinFractionalDigits @ 142997470

void __thiscall
TDefaultNumericTypeInterface<float>::SetMinFractionalDigits
          (TDefaultNumericTypeInterface<float> *this,TAttribute<TOptional<int>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<int> *pTVar3;
  int iVar4;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->MinFractionalDigits = 1;
    return;
  }
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = pTVar3->TypedValue;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar4 != (short)iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MinFractionalDigits = (short)iVar4;
  return;
}

// SetMinFractionalDigits @ 142997530

void __thiscall
TDefaultNumericTypeInterface<double>::SetMinFractionalDigits
          (TDefaultNumericTypeInterface<double> *this,TAttribute<TOptional<int>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<int> *pTVar3;
  int iVar4;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->MinFractionalDigits = 1;
    return;
  }
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = pTVar3->TypedValue;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar4 != (short)iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MinFractionalDigits = (short)iVar4;
  return;
}

// SetMinFractionalDigits @ 1429975f0

void __thiscall
TDefaultNumericTypeInterface<__int64>::SetMinFractionalDigits
          (TDefaultNumericTypeInterface<__int64> *this,TAttribute<TOptional<int>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<int> *pTVar3;
  int iVar4;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->MinFractionalDigits = 1;
    return;
  }
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = pTVar3->TypedValue;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar4 != (short)iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MinFractionalDigits = (short)iVar4;
  return;
}

// SetMinFractionalDigits @ 1429976b0

void __thiscall
TDefaultNumericTypeInterface<unsigned___int64>::SetMinFractionalDigits
          (TDefaultNumericTypeInterface<unsigned___int64> *this,TAttribute<TOptional<int>_> *param_1
          )

{
  code *pcVar1;
  bool bVar2;
  TOptional<int> *pTVar3;
  int iVar4;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    this->MinFractionalDigits = 1;
    return;
  }
  pTVar3 = TAttribute<TOptional<int>_>::Get(param_1);
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = pTVar3->TypedValue;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar4 != (short)iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MinFractionalDigits = (short)iVar4;
  return;
}

// ToString @ 1429abdb0

FString * __thiscall
TDefaultNumericTypeInterface<signed_char>::ToString
          (TDefaultNumericTypeInterface<signed_char> *this,FString *__return_storage_ptr__,
          schar *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  FNumberFormattingOptions *pFVar3;
  FDecimalNumberFormattingRules *pFVar4;
  ulong64 uVar5;
  FNumberFormattingOptions local_48;
  FNumberFormattingOptions local_28;
  
  pFVar3 = FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
  pFVar3->UseGrouping = false;
  pFVar3->IndicateNearlyInteger = false;
  pFVar3->MinimumFractionalDigits = 0;
  pFVar3->MaximumFractionalDigits = 0;
  local_48.AlwaysSign = pFVar3->AlwaysSign;
  local_48.UseGrouping = pFVar3->UseGrouping;
  local_48.IndicateNearlyInteger = pFVar3->IndicateNearlyInteger;
  local_48._3_1_ = pFVar3->field_0x3;
  local_48.RoundingMode = pFVar3->RoundingMode;
  local_48.MinimumIntegralDigits = pFVar3->MinimumIntegralDigits;
  local_48.MaximumIntegralDigits = pFVar3->MaximumIntegralDigits;
  uVar1._0_4_ = pFVar3->MinimumFractionalDigits;
  uVar1._4_4_ = pFVar3->MaximumFractionalDigits;
  pFVar4 = ExpressionParser::GetLocalizedNumberFormattingRules();
  bVar2 = *param_1;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar5 = -(longlong)(char)bVar2;
  if (-1 < (char)bVar2) {
    uVar5 = (longlong)(char)bVar2;
  }
  local_48._16_8_ = uVar1;
  FastDecimalFormat::Internal::IntegralToString
            ((bool)(bVar2 >> 7),uVar5,pFVar4,&local_48,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToString @ 1429abe60

FString * __thiscall
TDefaultNumericTypeInterface<unsigned_char>::ToString
          (TDefaultNumericTypeInterface<unsigned_char> *this,FString *__return_storage_ptr__,
          uchar *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  FNumberFormattingOptions *pFVar3;
  FDecimalNumberFormattingRules *pFVar4;
  FNumberFormattingOptions local_48;
  FNumberFormattingOptions local_28;
  
  pFVar3 = FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
  pFVar3->UseGrouping = false;
  pFVar3->IndicateNearlyInteger = false;
  pFVar3->MinimumFractionalDigits = 0;
  pFVar3->MaximumFractionalDigits = 0;
  local_48.AlwaysSign = pFVar3->AlwaysSign;
  local_48.UseGrouping = pFVar3->UseGrouping;
  local_48.IndicateNearlyInteger = pFVar3->IndicateNearlyInteger;
  local_48._3_1_ = pFVar3->field_0x3;
  local_48.RoundingMode = pFVar3->RoundingMode;
  local_48.MinimumIntegralDigits = pFVar3->MinimumIntegralDigits;
  local_48.MaximumIntegralDigits = pFVar3->MaximumIntegralDigits;
  uVar1._0_4_ = pFVar3->MinimumFractionalDigits;
  uVar1._4_4_ = pFVar3->MaximumFractionalDigits;
  pFVar4 = ExpressionParser::GetLocalizedNumberFormattingRules();
  bVar2 = *param_1;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_48._16_8_ = uVar1;
  FastDecimalFormat::Internal::IntegralToString
            (false,(ulonglong)bVar2,pFVar4,&local_48,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToString @ 1429abf00

FString * __thiscall
TDefaultNumericTypeInterface<short>::ToString
          (TDefaultNumericTypeInterface<short> *this,FString *__return_storage_ptr__,short *param_1)

{
  undefined8 uVar1;
  short sVar2;
  FNumberFormattingOptions *pFVar3;
  FDecimalNumberFormattingRules *pFVar4;
  ulong64 uVar5;
  bool bVar6;
  FNumberFormattingOptions local_48;
  FNumberFormattingOptions local_28;
  
  pFVar3 = FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
  pFVar3->UseGrouping = false;
  pFVar3->IndicateNearlyInteger = false;
  pFVar3->MinimumFractionalDigits = 0;
  pFVar3->MaximumFractionalDigits = 0;
  local_48.AlwaysSign = pFVar3->AlwaysSign;
  local_48.UseGrouping = pFVar3->UseGrouping;
  local_48.IndicateNearlyInteger = pFVar3->IndicateNearlyInteger;
  local_48._3_1_ = pFVar3->field_0x3;
  local_48.RoundingMode = pFVar3->RoundingMode;
  local_48.MinimumIntegralDigits = pFVar3->MinimumIntegralDigits;
  local_48.MaximumIntegralDigits = pFVar3->MaximumIntegralDigits;
  uVar1._0_4_ = pFVar3->MinimumFractionalDigits;
  uVar1._4_4_ = pFVar3->MaximumFractionalDigits;
  pFVar4 = ExpressionParser::GetLocalizedNumberFormattingRules();
  sVar2 = *param_1;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar6 = (bool)-(char)(sVar2 >> 0xf);
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar5 = -(longlong)sVar2;
  if (bVar6 == false) {
    uVar5 = (longlong)sVar2;
  }
  local_48._16_8_ = uVar1;
  FastDecimalFormat::Internal::IntegralToString(bVar6,uVar5,pFVar4,&local_48,__return_storage_ptr__)
  ;
  return __return_storage_ptr__;
}

// ToString @ 1429abfc0

FString * __thiscall
TDefaultNumericTypeInterface<unsigned_short>::ToString
          (TDefaultNumericTypeInterface<unsigned_short> *this,FString *__return_storage_ptr__,
          ushort *param_1)

{
  undefined8 uVar1;
  ushort uVar2;
  FNumberFormattingOptions *pFVar3;
  FDecimalNumberFormattingRules *pFVar4;
  FNumberFormattingOptions local_48;
  FNumberFormattingOptions local_28;
  
  pFVar3 = FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
  pFVar3->UseGrouping = false;
  pFVar3->IndicateNearlyInteger = false;
  pFVar3->MinimumFractionalDigits = 0;
  pFVar3->MaximumFractionalDigits = 0;
  local_48.AlwaysSign = pFVar3->AlwaysSign;
  local_48.UseGrouping = pFVar3->UseGrouping;
  local_48.IndicateNearlyInteger = pFVar3->IndicateNearlyInteger;
  local_48._3_1_ = pFVar3->field_0x3;
  local_48.RoundingMode = pFVar3->RoundingMode;
  local_48.MinimumIntegralDigits = pFVar3->MinimumIntegralDigits;
  local_48.MaximumIntegralDigits = pFVar3->MaximumIntegralDigits;
  uVar1._0_4_ = pFVar3->MinimumFractionalDigits;
  uVar1._4_4_ = pFVar3->MaximumFractionalDigits;
  pFVar4 = ExpressionParser::GetLocalizedNumberFormattingRules();
  uVar2 = *param_1;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_48._16_8_ = uVar1;
  FastDecimalFormat::Internal::IntegralToString
            (false,(ulonglong)uVar2,pFVar4,&local_48,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToString @ 1429ac060

FString * __thiscall
TDefaultNumericTypeInterface<int>::ToString
          (TDefaultNumericTypeInterface<int> *this,FString *__return_storage_ptr__,int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  FNumberFormattingOptions *pFVar3;
  FDecimalNumberFormattingRules *pFVar4;
  ulong64 uVar5;
  bool bVar6;
  FNumberFormattingOptions local_48;
  FNumberFormattingOptions local_28;
  
  pFVar3 = FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
  pFVar3->UseGrouping = false;
  pFVar3->IndicateNearlyInteger = false;
  pFVar3->MinimumFractionalDigits = 0;
  pFVar3->MaximumFractionalDigits = 0;
  local_48.AlwaysSign = pFVar3->AlwaysSign;
  local_48.UseGrouping = pFVar3->UseGrouping;
  local_48.IndicateNearlyInteger = pFVar3->IndicateNearlyInteger;
  local_48._3_1_ = pFVar3->field_0x3;
  local_48.RoundingMode = pFVar3->RoundingMode;
  local_48.MinimumIntegralDigits = pFVar3->MinimumIntegralDigits;
  local_48.MaximumIntegralDigits = pFVar3->MaximumIntegralDigits;
  uVar1._0_4_ = pFVar3->MinimumFractionalDigits;
  uVar1._4_4_ = pFVar3->MaximumFractionalDigits;
  pFVar4 = ExpressionParser::GetLocalizedNumberFormattingRules();
  iVar2 = *param_1;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar6 = (bool)-(char)(iVar2 >> 0x1f);
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar5 = -(longlong)iVar2;
  if (bVar6 == false) {
    uVar5 = (longlong)iVar2;
  }
  local_48._16_8_ = uVar1;
  FastDecimalFormat::Internal::IntegralToString(bVar6,uVar5,pFVar4,&local_48,__return_storage_ptr__)
  ;
  return __return_storage_ptr__;
}

// ToString @ 1429ac110

FString * __thiscall
TDefaultNumericTypeInterface<unsigned_int>::ToString
          (TDefaultNumericTypeInterface<unsigned_int> *this,FString *__return_storage_ptr__,
          uint *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FNumberFormattingOptions *pFVar3;
  FDecimalNumberFormattingRules *pFVar4;
  FNumberFormattingOptions local_48;
  FNumberFormattingOptions local_28;
  
  pFVar3 = FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
  pFVar3->UseGrouping = false;
  pFVar3->IndicateNearlyInteger = false;
  pFVar3->MinimumFractionalDigits = 0;
  pFVar3->MaximumFractionalDigits = 0;
  local_48.AlwaysSign = pFVar3->AlwaysSign;
  local_48.UseGrouping = pFVar3->UseGrouping;
  local_48.IndicateNearlyInteger = pFVar3->IndicateNearlyInteger;
  local_48._3_1_ = pFVar3->field_0x3;
  local_48.RoundingMode = pFVar3->RoundingMode;
  local_48.MinimumIntegralDigits = pFVar3->MinimumIntegralDigits;
  local_48.MaximumIntegralDigits = pFVar3->MaximumIntegralDigits;
  uVar1._0_4_ = pFVar3->MinimumFractionalDigits;
  uVar1._4_4_ = pFVar3->MaximumFractionalDigits;
  pFVar4 = ExpressionParser::GetLocalizedNumberFormattingRules();
  uVar2 = *param_1;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_48._16_8_ = uVar1;
  FastDecimalFormat::Internal::IntegralToString
            (false,(ulonglong)uVar2,pFVar4,&local_48,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToString @ 1429ac1b0

FString * __thiscall
TDefaultNumericTypeInterface<float>::ToString
          (TDefaultNumericTypeInterface<float> *this,FString *__return_storage_ptr__,float *param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FNumberFormattingOptions *pFVar5;
  FDecimalNumberFormattingRules *pFVar6;
  short sVar7;
  FNumberFormattingOptions local_48 [2];
  
  pFVar5 = FNumberFormattingOptions::FNumberFormattingOptions(local_48);
  pFVar5->UseGrouping = false;
  pFVar5->MinimumFractionalDigits = (int)this->MinFractionalDigits;
  sVar7 = this->MinFractionalDigits;
  if (this->MinFractionalDigits < this->MaxFractionalDigits) {
    sVar7 = this->MaxFractionalDigits;
  }
  pFVar5->MaximumFractionalDigits = (int)sVar7;
  pFVar5->IndicateNearlyInteger = this->bIndicateNearlyInteger;
  uVar3._0_1_ = pFVar5->AlwaysSign;
  uVar3._1_1_ = pFVar5->UseGrouping;
  uVar3._2_1_ = pFVar5->IndicateNearlyInteger;
  uVar3._3_1_ = pFVar5->field_0x3;
  uVar3._4_4_ = pFVar5->RoundingMode;
  uVar4._0_4_ = pFVar5->MinimumIntegralDigits;
  uVar4._4_4_ = pFVar5->MaximumIntegralDigits;
  uVar2._0_4_ = pFVar5->MinimumFractionalDigits;
  uVar2._4_4_ = pFVar5->MaximumFractionalDigits;
  pFVar6 = ExpressionParser::GetLocalizedNumberFormattingRules();
  fVar1 = *param_1;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_48[0]._0_8_ = uVar3;
  local_48[0]._8_8_ = uVar4;
  local_48[0]._16_8_ = uVar2;
  FastDecimalFormat::Internal::FractionalToString
            ((double)fVar1,pFVar6,local_48,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToString @ 1429ac270

FString * __thiscall
TDefaultNumericTypeInterface<double>::ToString
          (TDefaultNumericTypeInterface<double> *this,FString *__return_storage_ptr__,
          double *param_1)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FNumberFormattingOptions *pFVar5;
  FDecimalNumberFormattingRules *pFVar6;
  short sVar7;
  FNumberFormattingOptions local_48 [2];
  
  pFVar5 = FNumberFormattingOptions::FNumberFormattingOptions(local_48);
  pFVar5->UseGrouping = false;
  pFVar5->MinimumFractionalDigits = (int)this->MinFractionalDigits;
  sVar7 = this->MinFractionalDigits;
  if (this->MinFractionalDigits < this->MaxFractionalDigits) {
    sVar7 = this->MaxFractionalDigits;
  }
  pFVar5->MaximumFractionalDigits = (int)sVar7;
  pFVar5->IndicateNearlyInteger = this->bIndicateNearlyInteger;
  uVar3._0_1_ = pFVar5->AlwaysSign;
  uVar3._1_1_ = pFVar5->UseGrouping;
  uVar3._2_1_ = pFVar5->IndicateNearlyInteger;
  uVar3._3_1_ = pFVar5->field_0x3;
  uVar3._4_4_ = pFVar5->RoundingMode;
  uVar4._0_4_ = pFVar5->MinimumIntegralDigits;
  uVar4._4_4_ = pFVar5->MaximumIntegralDigits;
  uVar1._0_4_ = pFVar5->MinimumFractionalDigits;
  uVar1._4_4_ = pFVar5->MaximumFractionalDigits;
  pFVar6 = ExpressionParser::GetLocalizedNumberFormattingRules();
  dVar2 = *param_1;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_48[0]._0_8_ = uVar3;
  local_48[0]._8_8_ = uVar4;
  local_48[0]._16_8_ = uVar1;
  FastDecimalFormat::Internal::FractionalToString(dVar2,pFVar6,local_48,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToString @ 1429ac320

FString * __thiscall
TDefaultNumericTypeInterface<__int64>::ToString
          (TDefaultNumericTypeInterface<__int64> *this,FString *__return_storage_ptr__,
          long64 *param_1)

{
  undefined8 uVar1;
  FNumberFormattingOptions *pFVar2;
  FDecimalNumberFormattingRules *pFVar3;
  bool bVar4;
  ulong64 uVar5;
  FNumberFormattingOptions local_48;
  FNumberFormattingOptions local_28;
  
  pFVar2 = FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
  pFVar2->UseGrouping = false;
  pFVar2->IndicateNearlyInteger = false;
  pFVar2->MinimumFractionalDigits = 0;
  pFVar2->MaximumFractionalDigits = 0;
  local_48.AlwaysSign = pFVar2->AlwaysSign;
  local_48.UseGrouping = pFVar2->UseGrouping;
  local_48.IndicateNearlyInteger = pFVar2->IndicateNearlyInteger;
  local_48._3_1_ = pFVar2->field_0x3;
  local_48.RoundingMode = pFVar2->RoundingMode;
  local_48.MinimumIntegralDigits = pFVar2->MinimumIntegralDigits;
  local_48.MaximumIntegralDigits = pFVar2->MaximumIntegralDigits;
  uVar1._0_4_ = pFVar2->MinimumFractionalDigits;
  uVar1._4_4_ = pFVar2->MaximumFractionalDigits;
  pFVar3 = ExpressionParser::GetLocalizedNumberFormattingRules();
  uVar5 = *param_1;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  bVar4 = (bool)-(char)((longlong)uVar5 >> 0x3f);
  if (bVar4 != false) {
    uVar5 = -uVar5;
  }
  local_48._16_8_ = uVar1;
  FastDecimalFormat::Internal::IntegralToString(bVar4,uVar5,pFVar3,&local_48,__return_storage_ptr__)
  ;
  return __return_storage_ptr__;
}

// ToString @ 1429ac3d0

FString * __thiscall
TDefaultNumericTypeInterface<unsigned___int64>::ToString
          (TDefaultNumericTypeInterface<unsigned___int64> *this,FString *__return_storage_ptr__,
          ulong64 *param_1)

{
  undefined8 uVar1;
  ulong64 uVar2;
  FNumberFormattingOptions *pFVar3;
  FDecimalNumberFormattingRules *pFVar4;
  FNumberFormattingOptions local_48;
  FNumberFormattingOptions local_28;
  
  pFVar3 = FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
  pFVar3->UseGrouping = false;
  pFVar3->IndicateNearlyInteger = false;
  pFVar3->MinimumFractionalDigits = 0;
  pFVar3->MaximumFractionalDigits = 0;
  local_48.AlwaysSign = pFVar3->AlwaysSign;
  local_48.UseGrouping = pFVar3->UseGrouping;
  local_48.IndicateNearlyInteger = pFVar3->IndicateNearlyInteger;
  local_48._3_1_ = pFVar3->field_0x3;
  local_48.RoundingMode = pFVar3->RoundingMode;
  local_48.MinimumIntegralDigits = pFVar3->MinimumIntegralDigits;
  local_48.MaximumIntegralDigits = pFVar3->MaximumIntegralDigits;
  uVar1._0_4_ = pFVar3->MinimumFractionalDigits;
  uVar1._4_4_ = pFVar3->MaximumFractionalDigits;
  pFVar4 = ExpressionParser::GetLocalizedNumberFormattingRules();
  uVar2 = *param_1;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_48._16_8_ = uVar1;
  FastDecimalFormat::Internal::IntegralToString(false,uVar2,pFVar4,&local_48,__return_storage_ptr__)
  ;
  return __return_storage_ptr__;
}

