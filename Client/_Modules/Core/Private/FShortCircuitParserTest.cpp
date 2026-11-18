// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1418a8750

EAutomationTestFlags __thiscall FShortCircuitParserTest::GetTestFlags(FShortCircuitParserTest *this)

{
  return SmokeFilter|HighPriority|ProgramContext|CommandletContext|ServerContext|ClientContext|
         EditorContext;
}

// IsStressTest @ 1418a8760

bool __thiscall FShortCircuitParserTest::IsStressTest(FShortCircuitParserTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1418a8770

uint __thiscall FShortCircuitParserTest::GetRequiredDeviceNum(FShortCircuitParserTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1418a8780

FString * __thiscall
FShortCircuitParserTest::GetTestSourceFileName
          (FShortCircuitParserTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ExpressionParser.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1418a87b0

int __thiscall FShortCircuitParserTest::GetTestSourceFileLine(FShortCircuitParserTest *this)

{
  return 0x48c;
}

// GetTests @ 1418a87c0

/* WARNING: Removing unreachable block (ram,0x0001418a88ad) */
/* WARNING: Removing unreachable block (ram,0x0001418a8978) */

void __thiscall
FShortCircuitParserTest::GetTests
          (FShortCircuitParserTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Expression Parser.Short Circuit");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 1418a89a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FShortCircuitParserTest::RunTest(FShortCircuitParserTest *this,FString *param_1)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  uchar *puVar6;
  undefined1 auStackY_a8 [32];
  FShortCircuitTestContext local_78 [2];
  wchar_t *local_70;
  undefined1 local_68;
  undefined4 local_64;
  wchar_t *local_60;
  undefined1 local_58;
  undefined4 local_54;
  TValueOrError<bool,FExpressionError> local_50;
  ulonglong local_38;
  
  pvVar2 = ThreadLocalStoragePointer;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_70 = L"true || (true && true)";
  local_68 = 1;
  local_60 = L"false && (true)";
  puVar6 = (uchar *)&local_70;
  local_64 = 0;
  local_58 = 0;
  local_54 = 0;
  do {
    local_78[0].NumOperatorsCalled = 0;
    if ((*(int *)(*(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8) + 0x9d4c) <
         `public:_static_class_FShortCircuitParser&___ptr64___cdecl_FShortCircuitParser::Get(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FShortCircuitParser&___ptr64___cdecl_FShortCircuitParser::Get(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FShortCircuitParser&___ptr64___cdecl_FShortCircuitParser::Get(void)'::
       __l2::_thread_safe_static_guard_0__ == -1)) {
      FShortCircuitParser::FShortCircuitParser
                (&`public:_static_class_FShortCircuitParser&___ptr64___cdecl_FShortCircuitParser::Get(void)'
                  ::__l2::Singleton);
      atexit(`FShortCircuitParser::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`public:_static_class_FShortCircuitParser&___ptr64___cdecl_FShortCircuitParser::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FShortCircuitParser::Evaluate
              (&`public:_static_class_FShortCircuitParser&___ptr64___cdecl_FShortCircuitParser::Get(void)'
                ::__l2::Singleton,&local_50,*(wchar_t **)puVar6,local_78);
    uVar5 = (ulonglong)local_50.Variant.TypeIndex;
    if ((2 < uVar5) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,FExpressionError>::FWrapErrorType,TValueOrError<bool,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5) == '\0') {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6855721686587669345>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ExpressionParser.cpp"
                         ,0x49f,"Result.IsValid()");
      if (bVar3) {
code_r0x0001418a8b96:
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    else {
      if ((local_50.Variant.TypeIndex != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if (((char)*(longlong *)(puVar6 + 8) != (char)local_50.Variant._padding_) &&
         (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6855721686587669343>,true,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ExpressionParser.cpp"
                             ,0x4a1,"Expected.Result == Result.GetValue()"), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if ((*(int *)(puVar6 + 0xc) != local_78[0].NumOperatorsCalled) &&
         (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6855721686587669342>,true,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ExpressionParser.cpp"
                             ,0x4a2,"Expected.NumOperatorsCalled == Context.NumOperatorsCalled"),
         bVar3)) goto code_r0x0001418a8b96;
    }
    uVar5 = (ulonglong)local_50.Variant.TypeIndex;
    if ((2 < local_50.Variant.TypeIndex) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TValueOrError<bool,FExpressionError>::FWrapErrorType,TValueOrError<bool,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_50);
    puVar6 = puVar6 + 0x10;
    if ((TValueOrError<bool,FExpressionError> *)puVar6 == &local_50) {
      return true;
    }
  } while( true );
}

// GetBeautifiedTestName @ 1418a8c20

FString * __thiscall
FShortCircuitParserTest::GetBeautifiedTestName
          (FShortCircuitParserTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Expression Parser.Short Circuit");
  return __return_storage_ptr__;
}

