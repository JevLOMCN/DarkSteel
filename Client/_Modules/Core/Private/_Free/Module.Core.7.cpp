// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 377

// DefaultMessageTokenActivated'' @ 140f046a0

void __cdecl `dynamic_initializer_for_'FActorToken::DefaultMessageTokenActivated__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FActorToken::DefaultMessageTokenActivated__);
  return;
}

// GetLog'' @ 140f046c0

void __cdecl `dynamic_initializer_for_'FMessageLog::GetLog__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FMessageLog::GetLog__);
  return;
}

// GotoAsset'' @ 140f046e0

void __cdecl `dynamic_initializer_for_'FAssetNameToken::GotoAsset__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FAssetNameToken::GotoAsset__);
  return;
}

// Identity'' @ 140f04700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'UE::Math::TTransform<float>::Identity__(void)

{
  UE::Math::TTransform<float>::Identity.Rotation = ___xmm_3f800000000000000000000000000000;
  UE::Math::TTransform<float>::Identity.Translation = (__m128)ZEXT816(0);
  UE::Math::TTransform<float>::Identity.Scale3D = ___xmm_000000003f8000003f8000003f800000;
  return;
}

// Identity'' @ 140f04730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'UE::Math::TTransform<double>::Identity__(void)

{
  double adVar1 [2];
  
  UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64 =
       ___xmm_3ff00000000000000000000000000000;
  adVar1 = (double  [2])ZEXT816(0);
  UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0] = adVar1[0];
  UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1] = adVar1[1];
  UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0] = adVar1[0];
  UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1] = adVar1[1];
  UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0] = 0.0;
  UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1] = 0.0;
  UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64 =
       ___xmm_3ff00000000000003ff0000000000000;
  UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64 =
       ___xmm_00000000000000003ff0000000000000;
  return;
}

// Invalid'' @ 140f04780

void __cdecl `dynamic_initializer_for_'FIoStatus::Invalid__(void)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  puVar2 = FMemory::Malloc(0x22,0);
  *puVar2 = 1;
  puVar2[1] = 0xc;
  uVar1 = u_Invalid_Code._8_8_;
  FIoStatus::Invalid.ErrorMessage.Chars = (wchar_t *)(puVar2 + 2);
  *(undefined8 *)FIoStatus::Invalid.ErrorMessage.Chars = u_Invalid_Code._0_8_;
  *(undefined8 *)(puVar2 + 4) = uVar1;
  *(undefined8 *)(puVar2 + 6) = u_Invalid_Code._16_8_;
  FIoStatus::Invalid.ErrorMessage.Chars[0xc] = L'\0';
  FIoStatus::Invalid.ErrorCode = InvalidCode;
  FIoStatus::Invalid.SystemErrorCode = 0;
  atexit(`dynamic_atexit_destructor_for_'FIoStatus::Invalid__);
  return;
}

// InvalidChunkId'' @ 140f047f0

void __cdecl `dynamic_initializer_for_'FIoChunkId::InvalidChunkId__(void)

{
  FIoChunkId::InvalidChunkId.Id[0] = '\0';
  FIoChunkId::InvalidChunkId.Id[1] = '\0';
  FIoChunkId::InvalidChunkId.Id[2] = '\0';
  FIoChunkId::InvalidChunkId.Id[3] = '\0';
  FIoChunkId::InvalidChunkId.Id[4] = '\0';
  FIoChunkId::InvalidChunkId.Id[5] = '\0';
  FIoChunkId::InvalidChunkId.Id[6] = '\0';
  FIoChunkId::InvalidChunkId.Id[7] = '\0';
  FIoChunkId::InvalidChunkId.Id[8] = '\0';
  FIoChunkId::InvalidChunkId.Id[9] = '\0';
  FIoChunkId::InvalidChunkId.Id[10] = '\0';
  FIoChunkId::InvalidChunkId.Id[0xb] = '\0';
  return;
}

// MessageSelectionChanged'' @ 140f04820

void __cdecl `dynamic_initializer_for_'FMessageLog::MessageSelectionChanged__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FMessageLog::MessageSelectionChanged__);
  return;
}

// MultiSelectActorBegin'' @ 140f04840

void __cdecl `dynamic_initializer_for_'FMessageLog::MultiSelectActorBegin__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FMessageLog::MultiSelectActorBegin__);
  return;
}

// MultiSelectActorEnd'' @ 140f04860

void __cdecl `dynamic_initializer_for_'FMessageLog::MultiSelectActorEnd__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FMessageLog::MultiSelectActorEnd__);
  return;
}

// Ok'' @ 140f04880

void __cdecl `dynamic_initializer_for_'FIoStatus::Ok__(void)

{
  undefined4 *puVar1;
  
  puVar1 = FMemory::Malloc(0xe,0);
  FIoStatus::Ok.ErrorMessage.Chars = (wchar_t *)(puVar1 + 2);
  *puVar1 = 1;
  puVar1[1] = 2;
  *(undefined4 *)FIoStatus::Ok.ErrorMessage.Chars = u_OK._0_4_;
  FIoStatus::Ok.ErrorMessage.Chars[2] = L'\0';
  FIoStatus::Ok.ErrorCode = Ok;
  FIoStatus::Ok.SystemErrorCode = 0;
  atexit(`dynamic_atexit_destructor_for_'FIoStatus::Ok__);
  return;
}

// Unknown'' @ 140f048e0

void __cdecl `dynamic_initializer_for_'FIoStatus::Unknown__(void)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  puVar2 = FMemory::Malloc(0x26,0);
  *puVar2 = 1;
  FIoStatus::Unknown.ErrorMessage.Chars = (wchar_t *)(puVar2 + 2);
  puVar2[1] = 0xe;
  uVar1 = u_Unknown_Status._8_8_;
  *(undefined8 *)FIoStatus::Unknown.ErrorMessage.Chars = u_Unknown_Status._0_8_;
  *(undefined8 *)(puVar2 + 4) = uVar1;
  *(undefined8 *)(puVar2 + 6) = u_Unknown_Status._16_8_;
  puVar2[8] = u_Unknown_Status._24_4_;
  FIoStatus::Unknown.ErrorMessage.Chars[0xe] = L'\0';
  FIoStatus::Unknown.ErrorCode = Unknown;
  FIoStatus::Unknown.SystemErrorCode = 0;
  atexit(`dynamic_atexit_destructor_for_'FIoStatus::Unknown__);
  return;
}

// `dynamic_initializer_for_'CVarIoStoreAllowMemoryMappedUtoc'' @ 140f04960

void __cdecl _dynamic_initializer_for__CVarIoStoreAllowMemoryMappedUtoc__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarIoStoreAllowMemoryMappedUtoc,L"IoStore.AllowMemoryMappedUtoc",local_res8,
             L"Allow IoStore to memory map utoc containers instead of loading thier content as a whole into memory."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarIoStoreAllowMemoryMappedUtoc__);
  return;
}

// `dynamic_initializer_for_'CVarLogInfoMessagesAtDisplayVerbosity'' @ 140f049b0

void __cdecl
UE::MessageLog::Private::_dynamic_initializer_for__CVarLogInfoMessagesAtDisplayVerbosity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLogInfoMessagesAtDisplayVerbosity,L"MessageLog.InfoMessagesAtDisplayVerbosity",
             &LogInfoMessagesAtDisplayVerbosity,
             L"MessageLog messages at level \'info\' will be mirrored to the log at \'Display\' verbosity rather than \'Log\' verbosity."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLogInfoMessagesAtDisplayVerbosity__);
  return;
}

// `dynamic_initializer_for_'FBasicMathExpressionEvaluatorGroupedExpressionsTestAutomationTestInstance'' @ 140f04a00

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FBasicMathExpressionEvaluatorGroupedExpressionsTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FBasicMathExpressionEvaluatorGroupedExpressionsTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FBasicMathExpressionEvaluatorGroupedExpressionsTestAutomationTestInstance,&local_18,
             false);
  FBasicMathExpressionEvaluatorGroupedExpressionsTestAutomationTestInstance._0_8_ =
       &___7FBasicMathExpressionEvaluatorGroupedExpressionsTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FBasicMathExpressionEvaluatorGroupedExpressionsTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FBasicMathExpressionEvaluatorInvalidExpressionTestAutomationTestInstance'' @ 140f04a60

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FBasicMathExpressionEvaluatorInvalidExpressionTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FBasicMathExpressionEvaluatorInvalidExpressionTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FBasicMathExpressionEvaluatorInvalidExpressionTestAutomationTestInstance,&local_18,
             false);
  FBasicMathExpressionEvaluatorInvalidExpressionTestAutomationTestInstance._0_8_ =
       &___7FBasicMathExpressionEvaluatorInvalidExpressionTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FBasicMathExpressionEvaluatorInvalidExpressionTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FBasicMathExpressionEvaluatorTestAutomationTestInstance'' @ 140f04ac0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FBasicMathExpressionEvaluatorTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FBasicMathExpressionEvaluatorTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FBasicMathExpressionEvaluatorTestAutomationTestInstance,
             &local_18,false);
  FBasicMathExpressionEvaluatorTestAutomationTestInstance._0_8_ =
       &___7FBasicMathExpressionEvaluatorTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FBasicMathExpressionEvaluatorTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FBasicMathExpressionEvaluatorWhitespaceExpressionsTestAutomationTestInstance'' @ 140f04b20

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FBasicMathExpressionEvaluatorWhitespaceExpressionsTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FBasicMathExpressionEvaluatorWhitespaceExpressionsTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FBasicMathExpressionEvaluatorWhitespaceExpressionsTestAutomationTestInstance,&local_18
             ,false);
  FBasicMathExpressionEvaluatorWhitespaceExpressionsTestAutomationTestInstance._0_8_ =
       &___7FBasicMathExpressionEvaluatorWhitespaceExpressionsTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FBasicMathExpressionEvaluatorWhitespaceExpressionsTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'GColorList'' @ 140f04b80

void __cdecl _dynamic_initializer_for__GColorList__(void)

{
  atexit(_dynamic_atexit_destructor_for__GColorList__);
  return;
}

// `dynamic_initializer_for_'GIoDispatcher'' @ 140f04ba0

void __cdecl _dynamic_initializer_for__GIoDispatcher__(void)

{
  atexit(_dynamic_atexit_destructor_for__GIoDispatcher__);
  return;
}

// `dynamic_initializer_for_'InitDummy'' @ 140f04bc0

void __cdecl _dynamic_initializer_for__InitDummy__(void)

{
  InitDummy = InitSHTables();
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_EngineMisc_MessageLog'' @ 140f04be0

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_EngineMisc_MessageLog__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_EngineMisc_MessageLog,L"EngineMisc_MessageLog",(FName)0x0,(FName)0x0
             ,(FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LogChannelReg'' @ 140f04c30

void __cdecl _dynamic_initializer_for__LogChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&LogChannelObject,"LogChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'LogColorList'' @ 140f04c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogColorList__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = FName::FName(local_res8,L"LogColorList");
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogColorList,pFVar1,Log,All);
  atexit(_dynamic_atexit_destructor_for__LogColorList__);
  return;
}

// `dynamic_initializer_for_'LogFloatPacker'' @ 140f04ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogFloatPacker__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = FName::FName(local_res8,L"LogFloatPacker");
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogFloatPacker,pFVar1,Log,All);
  atexit(_dynamic_atexit_destructor_for__LogFloatPacker__);
  return;
}

// `dynamic_initializer_for_'LogGenericOctree'' @ 140f04ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGenericOctree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = FName::FName(local_res8,L"LogGenericOctree");
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogGenericOctree,pFVar1,Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGenericOctree__);
  return;
}

// `dynamic_initializer_for_'LogIoDispatcher'' @ 140f04d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogIoDispatcher__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = FName::FName(local_res8,L"LogIoDispatcher");
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogIoDispatcher,pFVar1,Log,All);
  atexit(_dynamic_atexit_destructor_for__LogIoDispatcher__);
  return;
}

// `dynamic_initializer_for_'LogIoStatus'' @ 140f04d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogIoStatus__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = FName::FName(local_res8,L"LogIoStatus");
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogIoStatus,pFVar1,Log,All);
  atexit(_dynamic_atexit_destructor_for__LogIoStatus__);
  return;
}

// `dynamic_initializer_for_'LogIoStore'' @ 140f04da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogIoStore__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = FName::FName(local_res8,L"LogIoStore");
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogIoStore,pFVar1,Log,All);
  atexit(_dynamic_atexit_destructor_for__LogIoStore__);
  return;
}

// `dynamic_initializer_for_'LogTransform'' @ 140f04de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTransform__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = FName::FName(local_res8,L"LogTransform");
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogTransform,pFVar1,Log,All);
  atexit(_dynamic_atexit_destructor_for__LogTransform__);
  return;
}

// `dynamic_initializer_for_'LogUnrealMath'' @ 140f04e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogUnrealMath__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = FName::FName(local_res8,L"LogUnrealMath");
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogUnrealMath,pFVar1,Log,All);
  atexit(_dynamic_atexit_destructor_for__LogUnrealMath__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_FMsgLogf'' @ 140f04e60

void __cdecl _dynamic_initializer_for___GCsvCategory_FMsgLogf__(void)

{
  FString::operator=(&_GCsvCategory_FMsgLogf.Name,L"FMsgLogf");
  _GCsvCategory_FMsgLogf.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_FMsgLogf.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_FMsgLogf__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_IoDispatcher'' @ 140f04eb0

void __cdecl _dynamic_initializer_for___GCsvCategory_IoDispatcher__(void)

{
  FString::operator=(&_GCsvCategory_IoDispatcher.Name,L"IoDispatcher");
  _GCsvCategory_IoDispatcher.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_IoDispatcher.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_IoDispatcher__);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_PendingIoRequests'' @ 140f04f00

void __cdecl _dynamic_initializer_for___GCsvStat_PendingIoRequests__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcher.Index;
  FName::FName(&_GCsvStat_PendingIoRequests.Name,L"PendingIoRequests");
  _GCsvStat_PendingIoRequests.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_PendingIoRequests.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterAvailableChunkDecoderWorkerCount'' @ 140f04f40

void __cdecl UE::_dynamic_initializer_for____GTraceCounterAvailableChunkDecoderWorkerCount__(void)

{
  __GTraceCounterAvailableChunkDecoderWorkerCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"IoDispatcher/AvailableChunkDecoderWorkerCount",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterAvailableChunkDecoderWorkerCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterAvailableChunkDecoderWorkerCount__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterChunkDecoderQueueCount'' @ 140f04f80

void __cdecl UE::_dynamic_initializer_for____GTraceCounterChunkDecoderQueueCount__(void)

{
  __GTraceCounterChunkDecoderQueueCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"IoDispatcher/ChunkDecoderQueueCount",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterChunkDecoderQueueCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterChunkDecoderQueueCount__);
  return;
}

// `scalar_deleting_destructor' @ 1417860e0

void * __thiscall
FBasicMathExpressionEvaluatorTest::_scalar_deleting_destructor_
          (FBasicMathExpressionEvaluatorTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417863e0

void * __thiscall
FBasicMathExpressionEvaluatorWhitespaceExpressionsTest::_scalar_deleting_destructor_
          (FBasicMathExpressionEvaluatorWhitespaceExpressionsTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141786760

void * __thiscall
FBasicMathExpressionEvaluatorGroupedExpressionsTest::_scalar_deleting_destructor_
          (FBasicMathExpressionEvaluatorGroupedExpressionsTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141786ae0

void * __thiscall
FBasicMathExpressionEvaluatorInvalidExpressionTest::_scalar_deleting_destructor_
          (FBasicMathExpressionEvaluatorInvalidExpressionTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// atomic<bool><bool,0> @ 141787010

atomic<bool> * __thiscall std::atomic<bool>::atomic<bool><bool,0>(atomic<bool> *this)

{
  *this = (atomic<bool>)0x0;
  return this;
}

// operator<<<char8_t> @ 1417874e0

TStringBuilderBase<char8_t> * __cdecl
operator<<<char8_t>(TStringBuilderBase<char8_t> *param_1,FIoHash *param_2)

{
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_18.ArrayNum = 0x14;
  local_18.DataPtr = param_2->Hash;
  UE::String::BytesToHexLower(&local_18,param_1);
  return param_1;
}

// operator<<<wchar_t> @ 141787520

TStringBuilderBase<wchar_t> * __cdecl
operator<<<wchar_t>(TStringBuilderBase<wchar_t> *param_1,FIoHash *param_2)

{
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_18.ArrayNum = 0x14;
  local_18.DataPtr = param_2->Hash;
  UE::String::BytesToHexLower(&local_18,param_1);
  return param_1;
}

// AddLambda<`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_1>_> @ 141787560

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_FIoDispatcherImpl::FIoDispatcherImpl_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FIoDispatcherImpl *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FIoDispatcherImpl *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1___0FIoDispatcherImpl__QEAA__N_Z___V__6B_
    ;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (FIoDispatcherImpl *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FIoDispatcherImpl *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pFVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`FIoDispatcherImpl::Initialize'::__l2::<lambda_1>_> @ 1417877b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
AddLambda<_FIoDispatcherImpl::Initialize_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  undefined8 uVar8;
  ForElementType<TAlignedBytes<16,16>_> *pFVar9;
  undefined8 *in_R8;
  undefined1 auStack_98 [40];
  _RTL_CRITICAL_SECTION local_70;
  FDelegateAllocation local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  uVar8 = 0;
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48.DelegateSize = 0;
  EnterCriticalSection(&local_70);
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_48);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultTSDelegateUserPolicy__V<lambda_1>__1__Initialize_FIoDispatcherImpl__QEAAXXZ___V__6B_
    ;
    puVar5[3] = *in_R8;
  }
  LeaveCriticalSection(&local_70);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
               0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar7.ID = (*pcVar1)();
    return (FDelegateHandle)FVar7.ID;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  *(undefined8 *)param_1 = 0;
  EnterCriticalSection(&local_70);
  if (((local_48.DelegateSize != 0) &&
      (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)local_48.DelegateAllocator + 0x38))(), cVar3 != '\0')) {
    LeaveCriticalSection(&local_70);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,true);
    EnterCriticalSection(&local_70);
    if ((local_48.DelegateSize != 0) &&
       (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar5 = (undefined8 *)(**(code **)(*(longlong *)local_48.DelegateAllocator + 0x40))();
      uVar8 = *puVar5;
    }
    LeaveCriticalSection(&local_70);
    *(undefined8 *)param_1 = uVar8;
    iVar4 = *(int *)&this->field_0x30;
    if (iVar4 == *(int *)&this->field_0x34) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
    }
    pFVar9 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x28 + (longlong)iVar4 * 0x10);
    *(int *)&this->field_0x30 = iVar4 + 1;
    *pFVar9 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar9 + 1) = 0;
    EnterCriticalSection(&local_70);
    if (*pFVar9 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar9);
    }
    *pFVar9 = local_48.DelegateAllocator;
    local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar9 + 1) = local_48.DelegateSize;
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (this != (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)0x0
     ) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  EnterCriticalSection(&local_70);
  if ((local_48.DelegateSize != 0) &&
     (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_48,0,0,0x10);
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_48.DelegateAllocator);
  }
  DeleteCriticalSection(&local_70);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`FLogSuppressionImplementation::ProcessConfigAndCommandLine'::__l35::<lambda_1>_> @ 141787a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::AddLambda<_FLogSuppressionImplementation::ProcessConfigAndCommandLine_::__l35::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
           *this,<lambda_1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  FLogSuppressionImplementation *pFVar8;
  ForElementType<TAlignedBytes<16,16>_> *pFVar9;
  undefined8 *in_R8;
  undefined1 auStack_98 [40];
  _RTL_CRITICAL_SECTION local_70;
  FDelegateAllocation local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  pFVar8 = (FLogSuppressionImplementation *)0x0;
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48.DelegateSize = 0;
  EnterCriticalSection(&local_70);
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_48);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy__V<lambda_1>__CD___ProcessConfigAndCommandLine_FLogSuppressionImplementation__EEAAXXZ___V__6B_
    ;
    puVar5[3] = *in_R8;
  }
  LeaveCriticalSection(&local_70);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
                *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar7.ID = (*pcVar1)();
    return (FDelegateHandle)FVar7.ID;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  param_1->__this = (FLogSuppressionImplementation *)0x0;
  EnterCriticalSection(&local_70);
  if (((local_48.DelegateSize != 0) &&
      (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)local_48.DelegateAllocator + 0x38))(), cVar3 != '\0')) {
    LeaveCriticalSection(&local_70);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,true);
    EnterCriticalSection(&local_70);
    if ((local_48.DelegateSize != 0) &&
       (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar5 = (undefined8 *)(**(code **)(*(longlong *)local_48.DelegateAllocator + 0x40))();
      pFVar8 = (FLogSuppressionImplementation *)*puVar5;
    }
    LeaveCriticalSection(&local_70);
    param_1->__this = pFVar8;
    iVar4 = *(int *)&this->field_0x30;
    if (iVar4 == *(int *)&this->field_0x34) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
    }
    pFVar9 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x28 + (longlong)iVar4 * 0x10);
    *(int *)&this->field_0x30 = iVar4 + 1;
    *pFVar9 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar9 + 1) = 0;
    EnterCriticalSection(&local_70);
    if (*pFVar9 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar9);
    }
    *pFVar9 = local_48.DelegateAllocator;
    local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar9 + 1) = local_48.DelegateSize;
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (this != (TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
               *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  EnterCriticalSection(&local_70);
  if ((local_48.DelegateSize != 0) &&
     (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_48,0,0,0x10);
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_48.DelegateAllocator);
  }
  DeleteCriticalSection(&local_70);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_2>_> @ 141787c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
AddLambda<_FIoDispatcherImpl::FIoDispatcherImpl_::__l2::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this,
          <lambda_2> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  FIoDispatcherImpl *pFVar8;
  ForElementType<TAlignedBytes<16,16>_> *pFVar9;
  undefined8 *in_R8;
  undefined1 auStack_98 [40];
  _RTL_CRITICAL_SECTION local_70;
  FDelegateAllocation local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  pFVar8 = (FIoDispatcherImpl *)0x0;
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48.DelegateSize = 0;
  EnterCriticalSection(&local_70);
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_48);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultTSDelegateUserPolicy__V<lambda_2>__1___0FIoDispatcherImpl__QEAA__N_Z___V__6B_
    ;
    puVar5[3] = *in_R8;
  }
  LeaveCriticalSection(&local_70);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
               0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar7.ID = (*pcVar1)();
    return (FDelegateHandle)FVar7.ID;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  param_1->__this = (FIoDispatcherImpl *)0x0;
  EnterCriticalSection(&local_70);
  if (((local_48.DelegateSize != 0) &&
      (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)local_48.DelegateAllocator + 0x38))(), cVar3 != '\0')) {
    LeaveCriticalSection(&local_70);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,true);
    EnterCriticalSection(&local_70);
    if ((local_48.DelegateSize != 0) &&
       (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar5 = (undefined8 *)(**(code **)(*(longlong *)local_48.DelegateAllocator + 0x40))();
      pFVar8 = (FIoDispatcherImpl *)*puVar5;
    }
    LeaveCriticalSection(&local_70);
    param_1->__this = pFVar8;
    iVar4 = *(int *)&this->field_0x30;
    if (iVar4 == *(int *)&this->field_0x34) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
    }
    pFVar9 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x28 + (longlong)iVar4 * 0x10);
    *(int *)&this->field_0x30 = iVar4 + 1;
    *pFVar9 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar9 + 1) = 0;
    EnterCriticalSection(&local_70);
    if (*pFVar9 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar9);
    }
    *pFVar9 = local_48.DelegateAllocator;
    local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar9 + 1) = local_48.DelegateSize;
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (this != (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)0x0
     ) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  EnterCriticalSection(&local_70);
  if ((local_48.DelegateSize != 0) &&
     (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_48,0,0,0x10);
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_48.DelegateAllocator);
  }
  DeleteCriticalSection(&local_70);
  return (FDelegateHandle)(ulong64)param_1;
}

// AllOf<TArrayView<UE::Logging::Private::FLogField_const_,int>,char_const_*_UE::Logging::Private::FLogField::*> @ 1417881e0

bool __cdecl
Algo::
AllOf<TArrayView<UE::Logging::Private::FLogField_const_,int>,char_const_*_UE::Logging::Private::FLogField::*>
          (TArrayView<UE::Logging::Private::FLogField_const_,int> *param_1,pdm_3770962b param_2)

{
  FLogField *pFVar1;
  FLogField *pFVar2;
  
  pFVar2 = param_1->DataPtr;
  pFVar1 = pFVar2 + param_1->ArrayNum;
  if (pFVar2 != pFVar1) {
    do {
      if (*(longlong *)((longlong)&pFVar2->Name + (longlong)(int)param_2) == 0) {
        return false;
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar1);
  }
  return true;
}

// AllOf<TArrayView<UE::Logging::Private::FLogField_const_,int>,`UE::FLogTemplate::Create<char8_t>'::__l13::<lambda_1>_> @ 141788220

bool __cdecl
Algo::
AllOf<TArrayView<UE::Logging::Private::FLogField_const_,int>,_UE::FLogTemplate::Create<char8_t>_::__l13::<lambda_1>_>
          (TArrayView<UE::Logging::Private::FLogField_const_,int> *param_1,<lambda_1> param_2)

{
  FLogField *pFVar1;
  char cVar2;
  bool bVar3;
  FLogField *pFVar4;
  FAsciiSet local_18;
  
  pFVar4 = param_1->DataPtr;
  pFVar1 = pFVar4 + param_1->ArrayNum;
  while( true ) {
    if (pFVar4 == pFVar1) {
      return true;
    }
    cVar2 = *pFVar4->Name;
    if (((cVar2 == '\0') || (cVar2 == '_')) ||
       (local_18 = UE::Logging::Private::GValidLogFieldName,
       bVar3 = FAsciiSet::HasOnly<char>(pFVar4->Name,&local_18), !bVar3)) break;
    pFVar4 = pFVar4 + 1;
  }
  return false;
}

// AllOf<TArrayView<UE::Logging::Private::FLogField_const_,int>,`UE::FLogTemplate::Create<wchar_t>'::__l13::<lambda_1>_> @ 1417882a0

bool __cdecl
Algo::
AllOf<TArrayView<UE::Logging::Private::FLogField_const_,int>,_UE::FLogTemplate::Create<wchar_t>_::__l13::<lambda_1>_>
          (TArrayView<UE::Logging::Private::FLogField_const_,int> *param_1,<lambda_1> param_2)

{
  FLogField *pFVar1;
  char cVar2;
  bool bVar3;
  FLogField *pFVar4;
  FAsciiSet local_18;
  
  pFVar4 = param_1->DataPtr;
  pFVar1 = pFVar4 + param_1->ArrayNum;
  while( true ) {
    if (pFVar4 == pFVar1) {
      return true;
    }
    cVar2 = *pFVar4->Name;
    if (((cVar2 == '\0') || (cVar2 == '_')) ||
       (local_18 = UE::Logging::Private::GValidLogFieldName,
       bVar3 = FAsciiSet::HasOnly<char>(pFVar4->Name,&local_18), !bVar3)) break;
    pFVar4 = pFVar4 + 1;
  }
  return false;
}

// BinarySearchBy<TArray<TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 141788870

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TArray<TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *param_1,FName *param_2,FKeyForward param_3,FNameFastLess param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = param_1->ArrayNum;
  iVar4 = 0;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (0 < (int)uVar1) {
    uVar7 = uVar1;
    do {
      iVar5 = (uVar7 >> 1) + iVar4;
      iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0x18) - (param_2->ComparisonIndex).Value;
      if (iVar6 == 0) {
        iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0x18 + 4) - param_2->Number;
      }
      if (iVar6 < 0) {
        iVar4 = iVar5 + (uVar7 & 1);
      }
      uVar3 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar3 != 0);
    if (iVar4 < (int)uVar1) {
      iVar5 = (param_2->ComparisonIndex).Value - *(int *)(pFVar2 + (longlong)iVar4 * 0x18);
      if (iVar5 == 0) {
        iVar5 = param_2->Number - *(int *)(pFVar2 + (longlong)iVar4 * 0x18 + 4);
      }
      iVar6 = -1;
      if (-1 < iVar5) {
        iVar6 = iVar4;
      }
      return iVar6;
    }
  }
  return -1;
}

// BinarySearchBy<TArray<TTuple<enum_EMessageSeverity::Type,enum_EMessageSeverity::Type>,TSizedDefaultAllocator<32>_>,enum_EMessageSeverity::Type,TSortedMap<enum_EMessageSeverity::Type,enum_EMessageSeverity::Type,TSizedDefaultAllocator<32>,TLess<enum_EMessageSeverity::Type_const_>_>::FKeyForward,TLess<enum_EMessageSeverity::Type_const_>_> @ 141788910

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<enum_EMessageSeverity::Type,enum_EMessageSeverity::Type>,TSizedDefaultAllocator<32>_>,enum_EMessageSeverity::Type,TSortedMap<enum_EMessageSeverity::Type,enum_EMessageSeverity::Type,TSizedDefaultAllocator<32>,TLess<enum_EMessageSeverity::Type_const_>_>::FKeyForward,TLess<enum_EMessageSeverity::Type_const_>_>
          (TArray<TTuple<EMessageSeverity::Type,EMessageSeverity::Type>,TSizedDefaultAllocator<32>_>
           *param_1,Type *param_2,FKeyForward param_3,TLess<EMessageSeverity::Type_const_> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(int *)(pFVar2 + (longlong)iVar4 * 8) < (int)*param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  iVar4 = -1;
  if ((iVar5 < (int)uVar1) && (iVar4 = -1, *(int *)(pFVar2 + (longlong)iVar5 * 8) <= (int)*param_2))
  {
    iVar4 = iVar5;
  }
  return iVar4;
}

// Call<`UE::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>'::__l2::<lambda_1>_> @ 141788a40

void * __cdecl
UE::TFunctionWithContext<void_*___cdecl(int)>::
Call<_UE::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>_::__l2::<lambda_1>_>
          (void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = Logging::Private::FInlineLogTemplateStorage::Allocate
                     (*(FInlineLogTemplateStorage **)param_1,param_2);
  return pvVar1;
}

// Call<`UE::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>'::__l2::<lambda_1>_> @ 141788a50

void * __cdecl
UE::TFunctionWithContext<void_*___cdecl(int)>::
Call<_UE::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>_::__l2::<lambda_1>_>
          (void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = Logging::Private::FInlineLogTemplateStorage::Allocate
                     (*(FInlineLogTemplateStorage **)param_1,param_2);
  return pvVar1;
}

// Call<`UE::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>'::__l2::<lambda_1>_> @ 141788a60

void * __cdecl
UE::TFunctionWithContext<void_*___cdecl(int)>::
Call<_UE::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>_::__l2::<lambda_1>_>
          (void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = Logging::Private::FInlineLogTemplateStorage::Allocate
                     (*(FInlineLogTemplateStorage **)param_1,param_2);
  return pvVar1;
}

// Call<`UE::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>'::__l2::<lambda_1>_> @ 141788a70

void * __cdecl
UE::TFunctionWithContext<void_*___cdecl(int)>::
Call<_UE::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>_::__l2::<lambda_1>_>
          (void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = Logging::Private::FInlineLogTemplateStorage::Allocate
                     (*(FInlineLogTemplateStorage **)param_1,param_2);
  return pvVar1;
}

// Call<`UE::TLogTemplate<UE::Logging::Private::FStaticLogTemplateStorage>::TLogTemplate<UE::Logging::Private::FStaticLogTemplateStorage>'::__l2::<lambda_1>_> @ 141788a80

void * __cdecl
UE::TFunctionWithContext<void_*___cdecl(int)>::
Call<_UE::TLogTemplate<UE::Logging::Private::FStaticLogTemplateStorage>::TLogTemplate<UE::Logging::Private::FStaticLogTemplateStorage>_::__l2::<lambda_1>_>
          (void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = Logging::Private::FStaticLogTemplateStorage::Allocate
                     (*(FStaticLogTemplateStorage **)param_1,param_2);
  return pvVar1;
}

// Call<`UE::TLogTemplate<UE::Logging::Private::FStaticLogTemplateStorage>::TLogTemplate<UE::Logging::Private::FStaticLogTemplateStorage>'::__l2::<lambda_1>_> @ 141788a90

void * __cdecl
UE::TFunctionWithContext<void_*___cdecl(int)>::
Call<_UE::TLogTemplate<UE::Logging::Private::FStaticLogTemplateStorage>::TLogTemplate<UE::Logging::Private::FStaticLogTemplateStorage>_::__l2::<lambda_1>_>
          (void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = Logging::Private::FStaticLogTemplateStorage::Allocate
                     (*(FStaticLogTemplateStorage **)param_1,param_2);
  return pvVar1;
}

// ConstructItems<FStringFormatArg,FStringFormatArg,int> @ 141789530

void __cdecl
ConstructItems<FStringFormatArg,FStringFormatArg,int>
          (void *param_1,FStringFormatArg *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x18);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      FStringFormatArg::operator=((FStringFormatArg *)(puVar1 + -3),param_2);
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedRef<FTokenizedMessage,1>,TSharedRef<FTokenizedMessage,1>,int> @ 1417895a0

void __cdecl
ConstructItems<TSharedRef<FTokenizedMessage,1>,TSharedRef<FTokenizedMessage,1>,int>
          (void *param_1,TSharedRef<FTokenizedMessage,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FTokenizedMessage **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedRef<IMessageToken,1>,TSharedRef<IMessageToken,1>,int> @ 1417895e0

void __cdecl
ConstructItems<TSharedRef<IMessageToken,1>,TSharedRef<IMessageToken,1>,int>
          (void *param_1,TSharedRef<IMessageToken,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(IMessageToken **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConsumeSymbol<ExpressionParser::FForwardSlash> @ 141789620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeSymbol<ExpressionParser::FForwardSlash>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  undefined1 auStack_98 [32];
  TOptional<TStringToken<wchar_t>_> local_78;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseToken(this,&local_78,L"/",(TStringToken<wchar_t> *)0x0);
  if (local_78.bIsSet != false) {
    local_58._16_8_ = &___7__FInlineDataStorage_UFForwardSlash_ExpressionParser___Impl__6B_;
    local_58._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlash>::GetTypeId(void)'
         ::__l2::Global.A;
    local_58._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlash>::GetTypeId(void)'
         ::__l2::Global.B;
    local_58._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlash>::GetTypeId(void)'
         ::__l2::Global.C;
    local_58._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlash>::GetTypeId(void)'
         ::__l2::Global.D;
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_78.TypedValue,(FExpressionNode *)local_58)
    ;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_58);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeSymbol<ExpressionParser::FForwardSlashEquals> @ 1417896d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeSymbol<ExpressionParser::FForwardSlashEquals>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  undefined1 auStack_98 [32];
  TOptional<TStringToken<wchar_t>_> local_78;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseToken(this,&local_78,L"/=",(TStringToken<wchar_t> *)0x0);
  if (local_78.bIsSet != false) {
    local_58._16_8_ = &___7__FInlineDataStorage_UFForwardSlashEquals_ExpressionParser___Impl__6B_;
    local_58._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlashEquals>::GetTypeId(void)'
         ::__l2::Global.A;
    local_58._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlashEquals>::GetTypeId(void)'
         ::__l2::Global.B;
    local_58._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlashEquals>::GetTypeId(void)'
         ::__l2::Global.C;
    local_58._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlashEquals>::GetTypeId(void)'
         ::__l2::Global.D;
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_78.TypedValue,(FExpressionNode *)local_58)
    ;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_58);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeSymbol<ExpressionParser::FMinus> @ 141789780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeSymbol<ExpressionParser::FMinus>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  undefined1 auStack_98 [32];
  TOptional<TStringToken<wchar_t>_> local_78;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseToken(this,&local_78,L"-",(TStringToken<wchar_t> *)0x0);
  if (local_78.bIsSet != false) {
    local_58._16_8_ = &___7__FInlineDataStorage_UFMinus_ExpressionParser___Impl__6B_;
    local_58._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
         ::__l2::Global.A;
    local_58._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
         ::__l2::Global.B;
    local_58._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
         ::__l2::Global.C;
    local_58._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
         ::__l2::Global.D;
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_78.TypedValue,(FExpressionNode *)local_58)
    ;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_58);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeSymbol<ExpressionParser::FMinusEquals> @ 141789830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeSymbol<ExpressionParser::FMinusEquals>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  undefined1 auStack_98 [32];
  TOptional<TStringToken<wchar_t>_> local_78;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseToken(this,&local_78,L"-=",(TStringToken<wchar_t> *)0x0);
  if (local_78.bIsSet != false) {
    local_58._16_8_ = &___7__FInlineDataStorage_UFMinusEquals_ExpressionParser___Impl__6B_;
    local_58._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinusEquals>::GetTypeId(void)'
         ::__l2::Global.A;
    local_58._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinusEquals>::GetTypeId(void)'
         ::__l2::Global.B;
    local_58._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinusEquals>::GetTypeId(void)'
         ::__l2::Global.C;
    local_58._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinusEquals>::GetTypeId(void)'
         ::__l2::Global.D;
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_78.TypedValue,(FExpressionNode *)local_58)
    ;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_58);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeSymbol<ExpressionParser::FPercent> @ 1417898e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeSymbol<ExpressionParser::FPercent>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  undefined1 auStack_98 [32];
  TOptional<TStringToken<wchar_t>_> local_78;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseToken(this,&local_78,L"%",(TStringToken<wchar_t> *)0x0);
  if (local_78.bIsSet != false) {
    local_58._16_8_ = &___7__FInlineDataStorage_UFPercent_ExpressionParser___Impl__6B_;
    local_58._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPercent>::GetTypeId(void)'
         ::__l2::Global.A;
    local_58._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPercent>::GetTypeId(void)'
         ::__l2::Global.B;
    local_58._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPercent>::GetTypeId(void)'
         ::__l2::Global.C;
    local_58._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPercent>::GetTypeId(void)'
         ::__l2::Global.D;
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_78.TypedValue,(FExpressionNode *)local_58)
    ;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_58);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeSymbol<ExpressionParser::FPlus> @ 141789990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeSymbol<ExpressionParser::FPlus>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  undefined1 auStack_98 [32];
  TOptional<TStringToken<wchar_t>_> local_78;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseToken(this,&local_78,L"+",(TStringToken<wchar_t> *)0x0);
  if (local_78.bIsSet != false) {
    local_58._16_8_ = &___7__FInlineDataStorage_UFPlus_ExpressionParser___Impl__6B_;
    local_58._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
         ::__l2::Global.A;
    local_58._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
         ::__l2::Global.B;
    local_58._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
         ::__l2::Global.C;
    local_58._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
         ::__l2::Global.D;
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_78.TypedValue,(FExpressionNode *)local_58)
    ;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_58);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeSymbol<ExpressionParser::FPlusEquals> @ 141789a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeSymbol<ExpressionParser::FPlusEquals>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  undefined1 auStack_98 [32];
  TOptional<TStringToken<wchar_t>_> local_78;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseToken(this,&local_78,L"+=",(TStringToken<wchar_t> *)0x0);
  if (local_78.bIsSet != false) {
    local_58._16_8_ = &___7__FInlineDataStorage_UFPlusEquals_ExpressionParser___Impl__6B_;
    local_58._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlusEquals>::GetTypeId(void)'
         ::__l2::Global.A;
    local_58._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlusEquals>::GetTypeId(void)'
         ::__l2::Global.B;
    local_58._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlusEquals>::GetTypeId(void)'
         ::__l2::Global.C;
    local_58._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlusEquals>::GetTypeId(void)'
         ::__l2::Global.D;
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_78.TypedValue,(FExpressionNode *)local_58)
    ;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_58);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeSymbol<ExpressionParser::FPower> @ 141789af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeSymbol<ExpressionParser::FPower>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  undefined1 auStack_98 [32];
  TOptional<TStringToken<wchar_t>_> local_78;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseToken(this,&local_78,L"^",(TStringToken<wchar_t> *)0x0);
  if (local_78.bIsSet != false) {
    local_58._16_8_ = &___7__FInlineDataStorage_UFPower_ExpressionParser___Impl__6B_;
    local_58._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPower>::GetTypeId(void)'
         ::__l2::Global.A;
    local_58._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPower>::GetTypeId(void)'
         ::__l2::Global.B;
    local_58._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPower>::GetTypeId(void)'
         ::__l2::Global.C;
    local_58._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPower>::GetTypeId(void)'
         ::__l2::Global.D;
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_78.TypedValue,(FExpressionNode *)local_58)
    ;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_58);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeSymbol<ExpressionParser::FSquareRoot> @ 141789ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  undefined1 auStack_98 [32];
  TOptional<TStringToken<wchar_t>_> local_78;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseToken(this,&local_78,L"sqrt",(TStringToken<wchar_t> *)0x0);
  if (local_78.bIsSet != false) {
    local_58._16_8_ = &___7__FInlineDataStorage_UFSquareRoot_ExpressionParser___Impl__6B_;
    local_58._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSquareRoot>::GetTypeId(void)'
         ::__l2::Global.A;
    local_58._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSquareRoot>::GetTypeId(void)'
         ::__l2::Global.B;
    local_58._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSquareRoot>::GetTypeId(void)'
         ::__l2::Global.C;
    local_58._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSquareRoot>::GetTypeId(void)'
         ::__l2::Global.D;
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_78.TypedValue,(FExpressionNode *)local_58)
    ;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_58);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeSymbol<ExpressionParser::FStar> @ 141789c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeSymbol<ExpressionParser::FStar>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  undefined1 auStack_98 [32];
  TOptional<TStringToken<wchar_t>_> local_78;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseToken(this,&local_78,L"*",(TStringToken<wchar_t> *)0x0);
  if (local_78.bIsSet != false) {
    local_58._16_8_ = &___7__FInlineDataStorage_UFStar_ExpressionParser___Impl__6B_;
    local_58._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
         ::__l2::Global.A;
    local_58._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
         ::__l2::Global.B;
    local_58._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
         ::__l2::Global.C;
    local_58._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
         ::__l2::Global.D;
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_78.TypedValue,(FExpressionNode *)local_58)
    ;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_58);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeSymbol<ExpressionParser::FStarEquals> @ 141789d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeSymbol<ExpressionParser::FStarEquals>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  undefined1 auStack_98 [32];
  TOptional<TStringToken<wchar_t>_> local_78;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseToken(this,&local_78,L"*=",(TStringToken<wchar_t> *)0x0);
  if (local_78.bIsSet != false) {
    local_58._16_8_ = &___7__FInlineDataStorage_UFStarEquals_ExpressionParser___Impl__6B_;
    local_58._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStarEquals>::GetTypeId(void)'
         ::__l2::Global.A;
    local_58._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStarEquals>::GetTypeId(void)'
         ::__l2::Global.B;
    local_58._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStarEquals>::GetTypeId(void)'
         ::__l2::Global.C;
    local_58._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStarEquals>::GetTypeId(void)'
         ::__l2::Global.D;
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_78.TypedValue,(FExpressionNode *)local_58)
    ;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_58);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeSymbol<ExpressionParser::FSubExpressionEnd> @ 141789db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeSymbol<ExpressionParser::FSubExpressionEnd>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  undefined1 auStack_98 [32];
  TOptional<TStringToken<wchar_t>_> local_78;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseToken(this,&local_78,L")",(TStringToken<wchar_t> *)0x0);
  if (local_78.bIsSet != false) {
    local_58._16_8_ = &___7__FInlineDataStorage_UFSubExpressionEnd_ExpressionParser___Impl__6B_;
    local_58._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
         ::__l2::Global.A;
    local_58._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
         ::__l2::Global.B;
    local_58._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
         ::__l2::Global.C;
    local_58._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
         ::__l2::Global.D;
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_78.TypedValue,(FExpressionNode *)local_58)
    ;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_58);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeSymbol<ExpressionParser::FSubExpressionStart> @ 141789e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeSymbol<ExpressionParser::FSubExpressionStart>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  undefined1 auStack_98 [32];
  TOptional<TStringToken<wchar_t>_> local_78;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseToken(this,&local_78,L"(",(TStringToken<wchar_t> *)0x0);
  if (local_78.bIsSet != false) {
    local_58._16_8_ = &___7__FInlineDataStorage_UFSubExpressionStart_ExpressionParser___Impl__6B_;
    local_58._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSubExpressionStart>::GetTypeId(void)'
         ::__l2::Global.A;
    local_58._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSubExpressionStart>::GetTypeId(void)'
         ::__l2::Global.B;
    local_58._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSubExpressionStart>::GetTypeId(void)'
         ::__l2::Global.C;
    local_58._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSubExpressionStart>::GetTypeId(void)'
         ::__l2::Global.D;
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_78.TypedValue,(FExpressionNode *)local_58)
    ;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_58);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// DefaultConstructItems<UE::FIoDispatcherChunkBlockDecoder::FDecodeContext,int> @ 14178f470

void __cdecl
DefaultConstructItems<UE::FIoDispatcherChunkBlockDecoder::FDecodeContext,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<FIoStoreCompressedBlockInfo,int> @ 14178f4a0

void __cdecl DefaultConstructItems<FIoStoreCompressedBlockInfo,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 0x20);
  }
  return;
}

// DestructItems<TCompiledToken<wchar_t>,int> @ 14178ff30

void __cdecl
DestructItems<TCompiledToken<wchar_t>,int>(TCompiledToken<wchar_t> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FExpressionNode::~FExpressionNode((FExpressionNode *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TTuple<int,TSharedRef<IIoDispatcherBackend,1>_>,int> @ 14178ff70

void __cdecl
DestructItems<TTuple<int,TSharedRef<IIoDispatcherBackend,1>_>,int>
          (TTuple<int,TSharedRef<IIoDispatcherBackend,1>_> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x10;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)*puVar1);
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_>,int> @ 14178ffb0

void __cdecl
DestructItems<TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_>,int>
          (TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::FIoDispatcherChunkBlockDecoder::FDecodeContext,int> @ 14178fff0

void __cdecl
DestructItems<UE::FIoDispatcherChunkBlockDecoder::FDecodeContext,int>
          (FDecodeContext *param_1,int param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar3 = (param_1->Task).Pimpl.Reference;
    if (pFVar3 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar3->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<`anonymous_namespace'::FLogCategoryPtrs,int> @ 141790040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<_anonymous_namespace_::FLogCategoryPtrs,int>(FLogCategoryPtrs *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FIoRequestStats::FRequestCategory,int> @ 141790080

void __cdecl
DestructItems<FIoRequestStats::FRequestCategory,int>(FRequestCategory *param_1,int param_2)

{
  wchar_t **ppwVar1;
  
  if (param_2 != 0) {
    ppwVar1 = &(param_1->AverageDurationCounter).CounterName;
    do {
      if ((*(uchar *)((longlong)ppwVar1 + 0xc) & 0x20) != 0) {
        FCountersTrace::FreeCounterName(*ppwVar1);
      }
      if ((*(byte *)((longlong)ppwVar1 + -0xc) & 0x20) != 0) {
        FCountersTrace::FreeCounterName(ppwVar1[-3]);
      }
      ppwVar1 = ppwVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FStringFormatArg,int> @ 1417900d0

void __cdecl DestructItems<FStringFormatArg,int>(FStringFormatArg *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->StringValue;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>,int> @ 141790110

void __cdecl
DestructItems<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>,int>
          (TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
           *param_1,int param_2)

{
  uchar *puVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar1 = (param_1->AllocatorInstance).Data;
    if (puVar1 != (uchar *)0x0) {
      TLinearAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>::Free(puVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedRef<FTokenizedMessage,1>,int> @ 141790150

void __cdecl
DestructItems<TSharedRef<FTokenizedMessage,1>,int>
          (TSharedRef<FTokenizedMessage,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<IMessageToken,1>,int> @ 141790190

void __cdecl
DestructItems<TSharedRef<IMessageToken,1>,int>(TSharedRef<IMessageToken,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<FIoStoreReaderImpl::FContainerFileAccess,TDefaultDelete<FIoStoreReaderImpl::FContainerFileAccess>_>,int> @ 1417901d0

void __cdecl
DestructItems<TUniquePtr<FIoStoreReaderImpl::FContainerFileAccess,TDefaultDelete<FIoStoreReaderImpl::FContainerFileAccess>_>,int>
          (TUniquePtr<FIoStoreReaderImpl::FContainerFileAccess,TDefaultDelete<FIoStoreReaderImpl::FContainerFileAccess>_>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDefaultDelete<FIoStoreReaderImpl::FContainerFileAccess>::operator()
              ((TDefaultDelete<FIoStoreReaderImpl::FContainerFileAccess> *)param_1,param_1->Ptr);
    param_1 = (TUniquePtr<FIoStoreReaderImpl::FContainerFileAccess,TDefaultDelete<FIoStoreReaderImpl::FContainerFileAccess>_>
               *)((longlong)param_1 + 8);
  }
  return;
}

// DestructItems<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>,int> @ 141790210

void __cdecl
DestructItems<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>,int>
          (TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> *param_1,int param_2)

{
  IMappedFileRegion *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = param_1->Ptr;
    if (pIVar1 != (IMappedFileRegion *)0x0) {
      (**(code **)pIVar1->_padding_)(pIVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// FindBounds<float> @ 141791ac0

void __cdecl
FindBounds<float>(float *param_1,float *param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,bool param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_3;
  if (param_6 <= param_3) {
    fVar1 = param_6;
  }
  *param_1 = fVar1;
  fVar1 = param_3;
  if (param_3 <= param_6) {
    fVar1 = param_6;
  }
  *param_2 = fVar1;
  if (!param_9) {
    return;
  }
  fVar9 = param_8 - param_5;
  fVar7 = fVar9 * param_7;
  fVar8 = fVar9 * param_4;
  fVar1 = ((fVar7 + fVar8) * __real_40400000 + param_3 * __real_40c00000) -
          param_6 * __real_40c00000;
  fVar6 = param_6 * __real_40c00000 -
          (fVar8 * __real_40800000 + param_3 * __real_40c00000 + fVar7 + fVar7);
  if (__real_322bcc77 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar2 = fVar6 * fVar6 - fVar1 * __real_40800000 * fVar8;
    if (fVar2 < 0.0) {
      return;
    }
    fVar2 = SQRT(fVar2);
    fVar1 = __real_3f000000 / fVar1;
    fVar4 = (fVar2 - fVar6) * fVar1;
    fVar3 = fVar4 * fVar9 + param_5;
    if ((param_5 < fVar3) && (fVar3 < param_8)) {
      fVar3 = fVar4 * fVar4;
      fVar5 = fVar3 * fVar4;
      fVar4 = ((fVar5 - (fVar3 + fVar3)) + fVar4) * fVar8 +
              (((fVar5 + fVar5) - fVar3 * __real_40400000) + __real_3f800000) * param_3 +
              (fVar5 - fVar3) * fVar7 + (fVar3 * __real_40400000 - (fVar5 + fVar5)) * param_6;
      fVar3 = fVar4;
      if (*param_1 <= fVar4) {
        fVar3 = *param_1;
      }
      *param_1 = fVar3;
      if (fVar4 <= *param_2) {
        fVar4 = *param_2;
      }
      *param_2 = fVar4;
    }
    fVar1 = ((float)((uint)fVar6 ^ __xmm_80000000800000008000000080000000) - fVar2) * fVar1;
    fVar6 = fVar1 * fVar9 + param_5;
    if (fVar6 <= param_5) {
      return;
    }
    if (param_8 <= fVar6) {
      return;
    }
    fVar2 = fVar1 * fVar1;
    fVar3 = fVar2 * fVar1;
    fVar9 = fVar2 * __real_40400000;
    fVar6 = fVar3 + fVar3;
    fVar4 = fVar3 - fVar2;
    fVar1 = (fVar3 - (fVar2 + fVar2)) + fVar1;
  }
  else {
    if ((float)((uint)fVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
      return;
    }
    fVar1 = (float)((uint)(fVar8 / fVar6) ^ __xmm_80000000800000008000000080000000);
    fVar6 = fVar1 * fVar9 + param_5;
    if (fVar6 <= param_5) {
      return;
    }
    if (param_8 <= fVar6) {
      return;
    }
    fVar2 = fVar1 * fVar1;
    fVar3 = fVar2 * fVar1;
    fVar9 = fVar2 * __real_40400000;
    fVar6 = fVar3 + fVar3;
    fVar4 = fVar3 - fVar2;
    fVar1 = (fVar3 - (fVar2 + fVar2)) + fVar1;
  }
  fVar6 = fVar1 * fVar8 + ((fVar6 - fVar9) + __real_3f800000) * param_3 +
          (fVar9 - fVar6) * param_6 + fVar4 * fVar7;
  fVar1 = fVar6;
  if (*param_1 <= fVar6) {
    fVar1 = *param_1;
  }
  *param_1 = fVar1;
  if (fVar6 <= *param_2) {
    fVar6 = *param_2;
  }
  *param_2 = fVar6;
  return;
}

// FindBounds<double> @ 141791e50

void __cdecl
FindBounds<double>(double *param_1,double *param_2,double param_3,double param_4,float param_5,
                  double param_6,double param_7,float param_8,bool param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  undefined1 unaff_XMM15 [16];
  undefined1 auVar12 [16];
  
  dVar5 = param_3;
  if (param_6 <= param_3) {
    dVar5 = param_6;
  }
  *param_1 = dVar5;
  dVar5 = param_3;
  if (param_3 <= param_6) {
    dVar5 = param_6;
  }
  *param_2 = dVar5;
  if (param_9) {
    dVar9 = (double)(param_8 - param_5);
    dVar1 = dVar9 * param_7;
    dVar3 = dVar9 * param_4;
    dVar7 = ((dVar1 + dVar3) * __real_4008000000000000 + param_3 * __real_4018000000000000) -
            param_6 * __real_4018000000000000;
    dVar5 = param_6 * __real_4018000000000000 -
            (dVar3 * __real_4010000000000000 + param_3 * __real_4018000000000000 + dVar1 + dVar1);
    uVar10 = (uint)((ulonglong)dVar5 >> 0x20);
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      auVar12._0_8_ = dVar5 * dVar5 - dVar7 * __real_4010000000000000 * dVar3;
      auVar12._8_8_ = 0;
      if (0.0 <= auVar12._0_8_) {
        auVar12 = sqrtpd(unaff_XMM15,auVar12);
        dVar7 = __real_3fe0000000000000 / dVar7;
        dVar2 = (double)param_5;
        dVar4 = (auVar12._0_8_ - dVar5) * dVar7;
        dVar6 = dVar4 * dVar9 + dVar2;
        if ((dVar2 < dVar6) && (dVar6 < (double)param_8)) {
          dVar6 = dVar4 * dVar4;
          dVar8 = dVar6 * dVar4;
          dVar6 = ((dVar8 - (dVar6 + dVar6)) + dVar4) * dVar3 +
                  (((dVar8 + dVar8) - dVar6 * __real_4008000000000000) + __real_3ff0000000000000) *
                  param_3 + (dVar6 * __real_4008000000000000 - (dVar8 + dVar8)) * param_6 +
                            (dVar8 - dVar6) * dVar1;
          dVar4 = dVar6;
          if (*param_1 <= dVar6) {
            dVar4 = *param_1;
          }
          *param_1 = dVar4;
          if (dVar6 <= *param_2) {
            dVar6 = *param_2;
          }
          *param_2 = dVar6;
        }
        dVar7 = ((double)CONCAT44(uVar10 ^ __xmm_80000000000000008000000000000000._4_4_,
                                  SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000) -
                auVar12._0_8_) * dVar7;
        dVar5 = dVar7 * dVar9 + dVar2;
        if ((dVar2 < dVar5) && (dVar5 < (double)param_8)) {
          dVar5 = dVar7 * dVar7;
          dVar9 = dVar5 * dVar7;
          dVar7 = ((dVar9 - (dVar5 + dVar5)) + dVar7) * dVar3 +
                  (((dVar9 + dVar9) - dVar5 * __real_4008000000000000) + __real_3ff0000000000000) *
                  param_3 + (dVar5 * __real_4008000000000000 - (dVar9 + dVar9)) * param_6 +
                            (dVar9 - dVar5) * dVar1;
          dVar5 = dVar7;
          if (*param_1 <= dVar7) {
            dVar5 = *param_1;
          }
          *param_1 = dVar5;
          if (dVar7 <= *param_2) {
            dVar7 = *param_2;
          }
          *param_2 = dVar7;
        }
      }
    }
    else if (__real_3e45798ee2308c3a <
             (double)CONCAT44(uVar10 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      uVar10 = SUB84(dVar3 / dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar11 = (uint)((ulonglong)(dVar3 / dVar5) >> 0x20) ^
               __xmm_80000000000000008000000000000000._4_4_;
      dVar5 = (double)CONCAT44(uVar11,uVar10) * dVar9 + (double)param_5;
      if (((double)param_5 < dVar5) && (dVar5 < (double)param_8)) {
        dVar5 = (double)CONCAT44(uVar11,uVar10) * (double)CONCAT44(uVar11,uVar10);
        dVar7 = dVar5 * (double)CONCAT44(uVar11,uVar10);
        dVar7 = ((dVar7 - (dVar5 + dVar5)) + (double)CONCAT44(uVar11,uVar10)) * dVar3 +
                (((dVar7 + dVar7) - dVar5 * __real_4008000000000000) + __real_3ff0000000000000) *
                param_3 + (dVar7 - dVar5) * dVar1 +
                          (dVar5 * __real_4008000000000000 - (dVar7 + dVar7)) * param_6;
        dVar5 = *param_1;
        if (dVar7 <= *param_1) {
          dVar5 = dVar7;
        }
        *param_1 = dVar5;
        if (dVar7 <= *param_2) {
          dVar7 = *param_2;
        }
        *param_2 = dVar7;
      }
    }
  }
  return;
}

// GetTocChunkInfoInternal<FIoStoreTocResource> @ 141794ba0

FIoStoreTocChunkInfo * __cdecl
GetTocChunkInfoInternal<FIoStoreTocResource>
          (FIoStoreTocChunkInfo *__return_storage_ptr__,FIoStoreTocResource *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  EIoContainerFlags EVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FIoStoreTocChunkInfo *pFVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  
  lVar19 = (longlong)param_2;
  uVar16 = (uint)~param_2 >> 0x1f;
  uVar10 = 0;
  if (param_2 < (param_1->ChunkMetas).ArrayNum) {
    uVar10 = uVar16;
  }
  if (uVar10 == 0) {
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FIoStoreTocChunkInfo *)(*pcVar7)();
      return pFVar12;
    }
  }
  pFVar1 = (param_1->ChunkMetas).AllocatorInstance.Data + lVar19 * 0x18;
  uVar10 = 0;
  if (param_2 < (param_1->ChunkOffsetLengths).ArrayNum) {
    uVar10 = uVar16;
  }
  if (uVar10 == 0) {
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FIoStoreTocChunkInfo *)(*pcVar7)();
      return pFVar12;
    }
  }
  pFVar3 = (param_1->ChunkOffsetLengths).AllocatorInstance.Data;
  EVar2 = (param_1->Header).ContainerFlags;
  (__return_storage_ptr__->ChunkHash).Hash[0] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[1] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[2] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[3] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[4] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[5] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[6] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[7] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[8] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[9] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[10] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[0xb] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[0xc] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[0xd] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[0xe] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[0xf] = '\0';
  pFVar3 = pFVar3 + lVar19 * 10;
  (__return_storage_ptr__->ChunkHash).Hash[0x10] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[0x11] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[0x12] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[0x13] = '\0';
  (__return_storage_ptr__->FileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FileName).Data.ArrayNum = 0;
  (__return_storage_ptr__->FileName).Data.ArrayMax = 0;
  uVar10 = 0;
  if (param_2 < (param_1->ChunkIds).ArrayNum) {
    uVar10 = uVar16;
  }
  if (uVar10 == 0) {
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FIoStoreTocChunkInfo *)(*pcVar7)();
      return pFVar12;
    }
  }
  pFVar4 = (param_1->ChunkIds).AllocatorInstance.Data;
  *(undefined8 *)(__return_storage_ptr__->Id).Id = *(undefined8 *)(pFVar4 + lVar19 * 0xc);
  *(undefined4 *)((__return_storage_ptr__->Id).Id + 8) = *(undefined4 *)(pFVar4 + lVar19 * 0xc + 8);
  __return_storage_ptr__->ChunkType = (__return_storage_ptr__->Id).Id[0xb];
  uVar8 = *(undefined8 *)(pFVar1 + 8);
  uVar10 = *(uint *)(pFVar1 + 0x10);
  *(undefined8 *)(__return_storage_ptr__->Hash).Hash = *(undefined8 *)pFVar1;
  *(undefined8 *)((__return_storage_ptr__->Hash).Hash + 8) = uVar8;
  *(ulonglong *)((__return_storage_ptr__->Hash).Hash + 0x10) = (ulonglong)uVar10;
  (__return_storage_ptr__->Hash).Hash[0x18] = '\0';
  (__return_storage_ptr__->Hash).Hash[0x19] = '\0';
  (__return_storage_ptr__->Hash).Hash[0x1a] = '\0';
  (__return_storage_ptr__->Hash).Hash[0x1b] = '\0';
  (__return_storage_ptr__->Hash).Hash[0x1c] = '\0';
  (__return_storage_ptr__->Hash).Hash[0x1d] = '\0';
  (__return_storage_ptr__->Hash).Hash[0x1e] = '\0';
  (__return_storage_ptr__->Hash).Hash[0x1f] = '\0';
  uVar8 = *(undefined8 *)(pFVar1 + 8);
  *(undefined8 *)(__return_storage_ptr__->ChunkHash).Hash = *(undefined8 *)pFVar1;
  *(undefined8 *)((__return_storage_ptr__->ChunkHash).Hash + 8) = uVar8;
  *(undefined4 *)((__return_storage_ptr__->ChunkHash).Hash + 0x10) = *(undefined4 *)(pFVar1 + 0x10);
  __return_storage_ptr__->bHasValidFileName = false;
  __return_storage_ptr__->bIsCompressed = (bool)((byte)pFVar1[0x14] & 1);
  __return_storage_ptr__->bIsMemoryMapped = (bool)((byte)pFVar1[0x14] >> 1 & 1);
  if (((EVar2 & Compressed) == None) || (((byte)pFVar1[0x14] & 1) != 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  __return_storage_ptr__->bForceUncompressed = bVar9;
  uVar18 = CONCAT35(0,CONCAT41(CONCAT31(CONCAT21(CONCAT11(*pFVar3,pFVar3[1]),pFVar3[2]),pFVar3[3]),
                               pFVar3[4]));
  __return_storage_ptr__->Offset = uVar18;
  uVar14 = (ulonglong)
           CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar3[5],pFVar3[6]),pFVar3[7]),pFVar3[8]),pFVar3[9])
  ;
  __return_storage_ptr__->Size = uVar14;
  uVar17 = CONCAT44(0,(param_1->Header).CompressionBlockSize);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar17;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar18;
  uVar13 = SUB168(auVar6 / auVar5,0);
  iVar11 = (int)((((uVar17 - 1) + uVar14 + uVar18 & ~(uVar17 - 1)) - 1) / uVar17);
  uVar16 = SUB164(auVar6 / auVar5,0);
  __return_storage_ptr__->NumCompressedBlocks = (iVar11 - uVar16) + 1;
  uVar10 = 0;
  if ((int)uVar16 < (param_1->CompressionBlocks).ArrayNum) {
    uVar10 = ~uVar16 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FIoStoreTocChunkInfo *)(*pcVar7)();
      return pFVar12;
    }
  }
  lVar15 = (longlong)(int)uVar16;
  lVar19 = lVar15 * 0xc;
  uVar14 = *(ulonglong *)((param_1->CompressionBlocks).AllocatorInstance.Data + lVar19);
  __return_storage_ptr__->CompressedSize = 0;
  __return_storage_ptr__->OffsetOnDisk = uVar14 & 0xffffffffff;
  __return_storage_ptr__->PartitionIndex = -1;
  if (lVar15 <= iVar11) {
    lVar15 = (iVar11 - lVar15) + 1;
    do {
      uVar16 = (uint)uVar13;
      uVar10 = 0;
      if ((int)uVar16 < (param_1->CompressionBlocks).ArrayNum) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          pFVar12 = (FIoStoreTocChunkInfo *)(*pcVar7)();
          return pFVar12;
        }
      }
      pFVar1 = (param_1->CompressionBlocks).AllocatorInstance.Data;
      __return_storage_ptr__->CompressedSize =
           __return_storage_ptr__->CompressedSize + (ulonglong)(*(uint *)(pFVar1 + lVar19 + 4) >> 8)
      ;
      if (__return_storage_ptr__->PartitionIndex < 0) {
        __return_storage_ptr__->PartitionIndex =
             (int)((*(ulonglong *)(pFVar1 + lVar19) & 0xffffffffff) /
                  (param_1->Header).PartitionSize);
      }
      uVar13 = (ulonglong)(uVar16 + 1);
      lVar19 = lVar19 + 0xc;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return __return_storage_ptr__;
}

// GetTocChunkInfoInternal<FIoStoreTocResourceView> @ 141794f50

FIoStoreTocChunkInfo * __cdecl
GetTocChunkInfoInternal<FIoStoreTocResourceView>
          (FIoStoreTocChunkInfo *__return_storage_ptr__,FIoStoreTocResourceView *param_1,int param_2
          )

{
  FIoStoreTocEntryMeta *pFVar1;
  EIoContainerFlags EVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  FIoStoreTocChunkInfo *pFVar9;
  FIoOffsetAndLength *pFVar10;
  FIoChunkId *pFVar11;
  ulonglong uVar12;
  FIoStoreTocCompressedBlockEntry *pFVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  
  uVar15 = 0;
  if (param_2 < (param_1->ChunkMetas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FIoStoreTocChunkInfo *)(*pcVar5)();
      return pFVar9;
    }
  }
  pFVar1 = (param_1->ChunkMetas).DataPtr + param_2;
  pFVar10 = TArrayView<FIoOffsetAndLength_const_,int>::operator[]
                      (&param_1->ChunkOffsetLengths,param_2);
  EVar2 = (param_1->Header).ContainerFlags;
  (__return_storage_ptr__->ChunkHash).Hash[0] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[1] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[2] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[3] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[4] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[5] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[6] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[7] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[8] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[9] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[10] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[0xb] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[0xc] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[0xd] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[0xe] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[0xf] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[0x10] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[0x11] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[0x12] = '\0';
  (__return_storage_ptr__->ChunkHash).Hash[0x13] = '\0';
  (__return_storage_ptr__->FileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FileName).Data.ArrayNum = 0;
  (__return_storage_ptr__->FileName).Data.ArrayMax = 0;
  pFVar11 = TArrayView<FIoChunkId_const_,int>::operator[](&param_1->ChunkIds,param_2);
  *(undefined8 *)(__return_storage_ptr__->Id).Id = *(undefined8 *)pFVar11->Id;
  *(undefined4 *)((__return_storage_ptr__->Id).Id + 8) = *(undefined4 *)(pFVar11->Id + 8);
  __return_storage_ptr__->ChunkType = (__return_storage_ptr__->Id).Id[0xb];
  uVar6 = *(undefined8 *)((pFVar1->ChunkHash).Hash + 8);
  uVar15 = *(uint *)((pFVar1->ChunkHash).Hash + 0x10);
  *(undefined8 *)(__return_storage_ptr__->Hash).Hash = *(undefined8 *)(pFVar1->ChunkHash).Hash;
  *(undefined8 *)((__return_storage_ptr__->Hash).Hash + 8) = uVar6;
  *(ulonglong *)((__return_storage_ptr__->Hash).Hash + 0x10) = (ulonglong)uVar15;
  (__return_storage_ptr__->Hash).Hash[0x18] = '\0';
  (__return_storage_ptr__->Hash).Hash[0x19] = '\0';
  (__return_storage_ptr__->Hash).Hash[0x1a] = '\0';
  (__return_storage_ptr__->Hash).Hash[0x1b] = '\0';
  (__return_storage_ptr__->Hash).Hash[0x1c] = '\0';
  (__return_storage_ptr__->Hash).Hash[0x1d] = '\0';
  (__return_storage_ptr__->Hash).Hash[0x1e] = '\0';
  (__return_storage_ptr__->Hash).Hash[0x1f] = '\0';
  uVar6 = *(undefined8 *)((pFVar1->ChunkHash).Hash + 8);
  *(undefined8 *)(__return_storage_ptr__->ChunkHash).Hash = *(undefined8 *)(pFVar1->ChunkHash).Hash;
  *(undefined8 *)((__return_storage_ptr__->ChunkHash).Hash + 8) = uVar6;
  *(undefined4 *)((__return_storage_ptr__->ChunkHash).Hash + 0x10) =
       *(undefined4 *)((pFVar1->ChunkHash).Hash + 0x10);
  __return_storage_ptr__->bHasValidFileName = false;
  __return_storage_ptr__->bIsCompressed = (bool)(pFVar1->Flags & Compressed);
  __return_storage_ptr__->bIsMemoryMapped = (bool)(pFVar1->Flags >> 1 & 1);
  if (((EVar2 & Compressed) == None) || ((pFVar1->Flags & Compressed) != None)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  __return_storage_ptr__->bForceUncompressed = bVar7;
  uVar21 = CONCAT35(0,CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar10->OffsetAndLength[0],
                                                          pFVar10->OffsetAndLength[1]),
                                                 pFVar10->OffsetAndLength[2]),
                                        pFVar10->OffsetAndLength[3]),pFVar10->OffsetAndLength[4]));
  __return_storage_ptr__->Offset = uVar21;
  uVar16 = (ulonglong)
           CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar10->OffsetAndLength[5],
                                               pFVar10->OffsetAndLength[6]),
                                      pFVar10->OffsetAndLength[7]),pFVar10->OffsetAndLength[8]),
                    pFVar10->OffsetAndLength[9]);
  __return_storage_ptr__->Size = uVar16;
  uVar20 = CONCAT44(0,(param_1->Header).CompressionBlockSize);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar20;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar21;
  uVar12 = SUB168(auVar4 / auVar3,0);
  iVar17 = SUB164(auVar4 / auVar3,0);
  iVar8 = (int)((((uVar21 - 1) + uVar16 + uVar20 & ~(uVar20 - 1)) - 1) / uVar20);
  __return_storage_ptr__->NumCompressedBlocks = (iVar8 - iVar17) + 1;
  pFVar13 = TArrayView<FIoStoreTocCompressedBlockEntry_const_,int>::operator[]
                      (&param_1->CompressionBlocks,iVar17);
  lVar14 = (longlong)iVar17;
  __return_storage_ptr__->OffsetOnDisk = *(ulonglong *)pFVar13->Data & 0xffffffffff;
  __return_storage_ptr__->CompressedSize = 0;
  __return_storage_ptr__->PartitionIndex = -1;
  if (lVar14 <= iVar8) {
    lVar19 = lVar14 * 0xc;
    lVar14 = (iVar8 - lVar14) + 1;
    do {
      uVar18 = (uint)uVar12;
      uVar15 = 0;
      if ((int)uVar18 < (param_1->CompressionBlocks).ArrayNum) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if (uVar15 == 0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FIoStoreTocChunkInfo *)(*pcVar5)();
          return pFVar9;
        }
      }
      pFVar13 = (param_1->CompressionBlocks).DataPtr;
      __return_storage_ptr__->CompressedSize =
           __return_storage_ptr__->CompressedSize +
           (ulonglong)(*(uint *)(pFVar13->Data + lVar19 + 4) >> 8);
      if (__return_storage_ptr__->PartitionIndex < 0) {
        __return_storage_ptr__->PartitionIndex =
             (int)((*(ulonglong *)(pFVar13->Data + lVar19) & 0xffffffffff) /
                  (param_1->Header).PartitionSize);
      }
      uVar12 = (ulonglong)(uVar18 + 1);
      lVar19 = lVar19 + 0xc;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return __return_storage_ptr__;
}

// HeapSortInternal<`anonymous_namespace'::FLogCategoryPtrs,int,FIdentityFunctor,TDereferenceWrapper<`anonymous_namespace'::FLogCategoryPtrs,TLess<void>_>_> @ 1417952c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<_anonymous_namespace_::FLogCategoryPtrs,int,FIdentityFunctor,TDereferenceWrapper<_anonymous_namespace_::FLogCategoryPtrs,TLess<void>_>_>
          (FLogCategoryPtrs *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_anonymous_namespace_::FLogCategoryPtrs,TLess<void>_> param_4)

{
  FLogCategoryPtrs *pFVar1;
  FLogCategoryPtrs *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  undefined6 uVar5;
  int iVar6;
  int iVar7;
  Type TVar8;
  bool bVar9;
  undefined6 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  int iVar20;
  FLogCategoryPtrs *pFVar21;
  int iVar22;
  
  if (param_2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar12 = (param_2 + -2) / 2;
  iVar14 = iVar12 * 2 + 1;
  iVar15 = iVar14;
  iVar22 = iVar12;
  do {
    while (param_2 <= iVar14) {
LAB_141795432:
      if (iVar22 == 0) {
        iVar14 = param_2 + -1;
        lVar16 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar21 = param_1 + lVar16;
          do {
            iVar15 = (pFVar21->Name).Data.ArrayNum;
            iVar12 = (pFVar21->Name).Data.ArrayMax;
            TVar8 = param_1->Verbosity;
            bVar9 = param_1->Postfix;
            uVar10 = *(undefined6 *)&param_1->field_0x12;
            pFVar4 = (param_1->Name).Data.AllocatorInstance.Data;
            iVar22 = (param_1->Name).Data.ArrayNum;
            iVar20 = (param_1->Name).Data.ArrayMax;
            (param_1->Name).Data.AllocatorInstance.Data =
                 (pFVar21->Name).Data.AllocatorInstance.Data;
            (param_1->Name).Data.ArrayNum = iVar15;
            (param_1->Name).Data.ArrayMax = iVar12;
            bVar11 = pFVar21->Postfix;
            uVar5 = *(undefined6 *)&pFVar21->field_0x12;
            param_1->Verbosity = pFVar21->Verbosity;
            param_1->Postfix = bVar11;
            *(undefined6 *)&param_1->field_0x12 = uVar5;
            (pFVar21->Name).Data.AllocatorInstance.Data = pFVar4;
            (pFVar21->Name).Data.ArrayNum = iVar22;
            (pFVar21->Name).Data.ArrayMax = iVar20;
            pFVar21->Verbosity = TVar8;
            pFVar21->Postfix = bVar9;
            *(undefined6 *)&pFVar21->field_0x12 = uVar10;
            iVar15 = 0;
            if (1 < iVar14) {
              do {
                iVar22 = iVar15 * 2;
                iVar12 = iVar22 + 1;
                if (iVar22 + 2 < iVar14) {
                  lVar17 = (longlong)iVar22;
                  if (param_1[lVar17 + 1].Name.Data.ArrayNum == 0) {
                    pwVar19 = L"";
                  }
                  else {
                    pwVar19 = (wchar_t *)param_1[lVar17 + 1].Name.Data.AllocatorInstance.Data;
                  }
                  if (param_1[lVar17 + 2].Name.Data.ArrayNum == 0) {
                    pwVar18 = L"";
                  }
                  else {
                    pwVar18 = (wchar_t *)param_1[lVar17 + 2].Name.Data.AllocatorInstance.Data;
                  }
                  iVar20 = FGenericPlatformStricmp::Stricmp(pwVar18,pwVar19);
                  if (iVar20 < 0) {
                    iVar12 = iVar22;
                  }
                  iVar12 = iVar12 + 1;
                }
                pFVar1 = param_1 + iVar15;
                pFVar2 = param_1 + iVar12;
                if (param_1[iVar12].Name.Data.ArrayNum == 0) {
                  pwVar19 = L"";
                }
                else {
                  pwVar19 = (wchar_t *)(pFVar2->Name).Data.AllocatorInstance.Data;
                }
                if ((pFVar1->Name).Data.ArrayNum == 0) {
                  pwVar18 = L"";
                }
                else {
                  pwVar18 = (wchar_t *)(pFVar1->Name).Data.AllocatorInstance.Data;
                }
                iVar15 = FGenericPlatformStricmp::Stricmp(pwVar18,pwVar19);
                if (-1 < iVar15) break;
                iVar15 = (pFVar2->Name).Data.ArrayNum;
                iVar22 = (pFVar2->Name).Data.ArrayMax;
                pFVar4 = (pFVar1->Name).Data.AllocatorInstance.Data;
                iVar20 = (pFVar1->Name).Data.ArrayNum;
                iVar13 = (pFVar1->Name).Data.ArrayMax;
                TVar8 = pFVar1->Verbosity;
                bVar9 = pFVar1->Postfix;
                uVar10 = *(undefined6 *)&pFVar1->field_0x12;
                (pFVar1->Name).Data.AllocatorInstance.Data =
                     (pFVar2->Name).Data.AllocatorInstance.Data;
                (pFVar1->Name).Data.ArrayNum = iVar15;
                (pFVar1->Name).Data.ArrayMax = iVar22;
                bVar11 = pFVar2->Postfix;
                uVar5 = *(undefined6 *)&pFVar2->field_0x12;
                pFVar1->Verbosity = pFVar2->Verbosity;
                pFVar1->Postfix = bVar11;
                *(undefined6 *)&pFVar1->field_0x12 = uVar5;
                (pFVar2->Name).Data.AllocatorInstance.Data = pFVar4;
                (pFVar2->Name).Data.ArrayNum = iVar20;
                (pFVar2->Name).Data.ArrayMax = iVar13;
                pFVar2->Verbosity = TVar8;
                pFVar2->Postfix = bVar9;
                *(undefined6 *)&pFVar2->field_0x12 = uVar10;
                iVar15 = iVar12;
              } while (iVar12 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar16 = lVar16 + -1;
            pFVar21 = pFVar21 + -1;
          } while (0 < lVar16);
        }
        return;
      }
      iVar12 = iVar22 + -1;
      iVar14 = iVar15 + -2;
      iVar15 = iVar14;
      iVar22 = iVar12;
    }
    iVar14 = iVar12 * 2;
    iVar20 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      lVar16 = (longlong)iVar14;
      if (param_1[lVar16 + 1].Name.Data.ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)param_1[lVar16 + 1].Name.Data.AllocatorInstance.Data;
      }
      if (param_1[lVar16 + 2].Name.Data.ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)param_1[lVar16 + 2].Name.Data.AllocatorInstance.Data;
      }
      iVar13 = FGenericPlatformStricmp::Stricmp(pwVar18,pwVar19);
      if (iVar13 < 0) {
        iVar20 = iVar14;
      }
      iVar20 = iVar20 + 1;
    }
    pFVar21 = param_1 + iVar12;
    pFVar1 = param_1 + iVar20;
    if (param_1[iVar20].Name.Data.ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(pFVar1->Name).Data.AllocatorInstance.Data;
    }
    if ((pFVar21->Name).Data.ArrayNum == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(pFVar21->Name).Data.AllocatorInstance.Data;
    }
    iVar14 = FGenericPlatformStricmp::Stricmp(pwVar18,pwVar19);
    if (-1 < iVar14) goto LAB_141795432;
    iVar12 = (pFVar1->Name).Data.ArrayNum;
    iVar13 = (pFVar1->Name).Data.ArrayMax;
    iVar14 = iVar20 * 2 + 1;
    TVar8 = pFVar21->Verbosity;
    bVar9 = pFVar21->Postfix;
    uVar10 = *(undefined6 *)&pFVar21->field_0x12;
    pFVar4 = (pFVar21->Name).Data.AllocatorInstance.Data;
    iVar6 = (pFVar21->Name).Data.ArrayNum;
    iVar7 = (pFVar21->Name).Data.ArrayMax;
    (pFVar21->Name).Data.AllocatorInstance.Data = (pFVar1->Name).Data.AllocatorInstance.Data;
    (pFVar21->Name).Data.ArrayNum = iVar12;
    (pFVar21->Name).Data.ArrayMax = iVar13;
    bVar11 = pFVar1->Postfix;
    uVar5 = *(undefined6 *)&pFVar1->field_0x12;
    pFVar21->Verbosity = pFVar1->Verbosity;
    pFVar21->Postfix = bVar11;
    *(undefined6 *)&pFVar21->field_0x12 = uVar5;
    (pFVar1->Name).Data.AllocatorInstance.Data = pFVar4;
    (pFVar1->Name).Data.ArrayNum = iVar6;
    (pFVar1->Name).Data.ArrayMax = iVar7;
    pFVar1->Verbosity = TVar8;
    pFVar1->Postfix = bVar9;
    *(undefined6 *)&pFVar1->field_0x12 = uVar10;
    iVar12 = iVar20;
  } while( true );
}

// IntCastChecked<unsigned_char,int> @ 1417955b0

uchar __cdecl IntCastChecked<unsigned_char,int>(int param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  
  if ((param_1 != (param_1 & 0xffU)) || (param_1 < 0)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (uchar)param_1;
}

// IntroSortInternal<`anonymous_namespace'::FLogCategoryPtrs,int,FIdentityFunctor,TDereferenceWrapper<`anonymous_namespace'::FLogCategoryPtrs,TLess<void>_>_> @ 141795600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<_anonymous_namespace_::FLogCategoryPtrs,int,FIdentityFunctor,TDereferenceWrapper<_anonymous_namespace_::FLogCategoryPtrs,TLess<void>_>_>
          (FLogCategoryPtrs *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_anonymous_namespace_::FLogCategoryPtrs,TLess<void>_> param_4)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined6 uVar8;
  int iVar9;
  int iVar10;
  Type TVar11;
  bool bVar12;
  undefined6 uVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  int iVar16;
  wchar_t *pwVar17;
  FLogCategoryPtrs *pFVar18;
  FLogCategoryPtrs *pFVar19;
  int iVar20;
  FLogCategoryPtrs **ppFVar21;
  FLogCategoryPtrs *pFVar22;
  FLogCategoryPtrs *pFVar23;
  FLogCategoryPtrs *pFVar24;
  FLogCategoryPtrs *pFVar25;
  float fVar26;
  undefined1 auStack_388 [48];
  FLogCategoryPtrs *local_358;
  FLogCategoryPtrs *local_348;
  FLogCategoryPtrs *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar26 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar26;
    memset(local_330,0,0x2e8);
    ppFVar21 = &local_348;
    do {
      pFVar18 = ppFVar21[1];
      pFVar25 = *ppFVar21;
      local_358 = ppFVar21[2];
      iVar16 = (int)(((longlong)pFVar18 - (longlong)pFVar25) / 0x18) + 1;
      pFVar24 = pFVar25;
      iVar20 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1417956e0:
        if (8 < iVar16) {
          iVar5 = (pFVar24->Name).Data.ArrayNum;
          iVar6 = (pFVar24->Name).Data.ArrayMax;
          pFVar22 = pFVar18 + 1;
          iVar16 = iVar16 / 2;
          pFVar25 = pFVar24 + iVar16;
          pFVar1 = (pFVar25->Name).Data.AllocatorInstance.Data;
          iVar9 = (pFVar25->Name).Data.ArrayNum;
          iVar10 = (pFVar25->Name).Data.ArrayMax;
          pFVar25 = pFVar24 + iVar16;
          TVar11 = pFVar25->Verbosity;
          bVar12 = pFVar25->Postfix;
          uVar13 = *(undefined6 *)&pFVar25->field_0x12;
          pFVar25 = pFVar24 + iVar16;
          (pFVar25->Name).Data.AllocatorInstance.Data = (pFVar24->Name).Data.AllocatorInstance.Data;
          (pFVar25->Name).Data.ArrayNum = iVar5;
          (pFVar25->Name).Data.ArrayMax = iVar6;
          bVar7 = pFVar24->Postfix;
          uVar8 = *(undefined6 *)&pFVar24->field_0x12;
          pFVar25 = pFVar24 + iVar16;
          pFVar25->Verbosity = pFVar24->Verbosity;
          pFVar25->Postfix = bVar7;
          *(undefined6 *)&pFVar25->field_0x12 = uVar8;
          (pFVar24->Name).Data.AllocatorInstance.Data = pFVar1;
          (pFVar24->Name).Data.ArrayNum = iVar9;
          (pFVar24->Name).Data.ArrayMax = iVar10;
          pFVar24->Verbosity = TVar11;
          pFVar24->Postfix = bVar12;
          *(undefined6 *)&pFVar24->field_0x12 = uVar13;
          pFVar25 = pFVar24;
LAB_141795730:
          pFVar19 = pFVar25;
          pFVar25 = pFVar19 + 1;
          if (pFVar25 <= pFVar18) goto code_r0x000141795739;
          goto LAB_141795770;
        }
        for (; pFVar22 = pFVar24, pFVar25 = pFVar24, pFVar24 < pFVar18; pFVar18 = pFVar18 + -1) {
          while (pFVar19 = pFVar22, pFVar25 = pFVar25 + 1, pFVar25 <= pFVar18) {
            if ((pFVar25->Name).Data.ArrayNum == 0) {
              pwVar17 = L"";
            }
            else {
              pwVar17 = (wchar_t *)(pFVar25->Name).Data.AllocatorInstance.Data;
            }
            if ((pFVar19->Name).Data.ArrayNum == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = (wchar_t *)(pFVar19->Name).Data.AllocatorInstance.Data;
            }
            iVar20 = FGenericPlatformStricmp::Stricmp(pwVar14,pwVar17);
            pFVar22 = pFVar25;
            if (-1 < iVar20) {
              pFVar22 = pFVar19;
            }
          }
          pFVar1 = (pFVar19->Name).Data.AllocatorInstance.Data;
          iVar5 = (pFVar19->Name).Data.ArrayNum;
          iVar6 = (pFVar19->Name).Data.ArrayMax;
          TVar11 = pFVar19->Verbosity;
          bVar12 = pFVar19->Postfix;
          uVar13 = *(undefined6 *)&pFVar19->field_0x12;
          iVar20 = (pFVar18->Name).Data.ArrayNum;
          iVar16 = (pFVar18->Name).Data.ArrayMax;
          (pFVar19->Name).Data.AllocatorInstance.Data = (pFVar18->Name).Data.AllocatorInstance.Data;
          (pFVar19->Name).Data.ArrayNum = iVar20;
          (pFVar19->Name).Data.ArrayMax = iVar16;
          bVar7 = pFVar18->Postfix;
          uVar8 = *(undefined6 *)&pFVar18->field_0x12;
          pFVar19->Verbosity = pFVar18->Verbosity;
          pFVar19->Postfix = bVar7;
          *(undefined6 *)&pFVar19->field_0x12 = uVar8;
          (pFVar18->Name).Data.AllocatorInstance.Data = pFVar1;
          (pFVar18->Name).Data.ArrayNum = iVar5;
          (pFVar18->Name).Data.ArrayMax = iVar6;
          pFVar18->Verbosity = TVar11;
          pFVar18->Postfix = bVar12;
          *(undefined6 *)&pFVar18->field_0x12 = uVar13;
        }
        goto LAB_1417958d1;
      }
LAB_1417958b8:
      HeapSortInternal<_anonymous_namespace_::FLogCategoryPtrs,int,FIdentityFunctor,TDereferenceWrapper<_anonymous_namespace_::FLogCategoryPtrs,TLess<void>_>_>
                (pFVar25,iVar16,param_3,param_4);
LAB_1417958d1:
      ppFVar21 = ppFVar21 + -3;
    } while (&local_348 <= ppFVar21);
  }
  return;
code_r0x000141795739:
  if (pFVar19[1].Name.Data.ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(pFVar25->Name).Data.AllocatorInstance.Data;
  }
  if ((pFVar24->Name).Data.ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar24->Name).Data.AllocatorInstance.Data;
  }
  iVar16 = FGenericPlatformStricmp::Stricmp(pwVar14,pwVar17);
  if (-1 < iVar16) goto LAB_141795730;
LAB_141795770:
  do {
    pFVar23 = pFVar22;
    pFVar22 = pFVar23 + -1;
    if (pFVar22 <= pFVar24) break;
    if ((pFVar24->Name).Data.ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar24->Name).Data.AllocatorInstance.Data;
    }
    if (pFVar23[-1].Name.Data.ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar22->Name).Data.AllocatorInstance.Data;
    }
    iVar16 = FGenericPlatformStricmp::Stricmp(pwVar14,pwVar17);
  } while (-1 < iVar16);
  pFVar1 = (pFVar22->Name).Data.AllocatorInstance.Data;
  uVar2 = pFVar23[-1].Name.Data.ArrayNum;
  uVar3 = pFVar23[-1].Name.Data.ArrayMax;
  if (pFVar25 <= pFVar22) {
    pFVar4 = (pFVar25->Name).Data.AllocatorInstance.Data;
    iVar16 = pFVar19[1].Name.Data.ArrayNum;
    iVar5 = pFVar19[1].Name.Data.ArrayMax;
    TVar11 = pFVar19[1].Verbosity;
    bVar12 = pFVar19[1].Postfix;
    uVar13 = *(undefined6 *)&pFVar19[1].field_0x12;
    (pFVar25->Name).Data.AllocatorInstance.Data = pFVar1;
    pFVar19[1].Name.Data.ArrayNum = uVar2;
    pFVar19[1].Name.Data.ArrayMax = uVar3;
    bVar7 = pFVar23[-1].Postfix;
    uVar8 = *(undefined6 *)&pFVar23[-1].field_0x12;
    pFVar19[1].Verbosity = pFVar23[-1].Verbosity;
    pFVar19[1].Postfix = bVar7;
    *(undefined6 *)&pFVar19[1].field_0x12 = uVar8;
    (pFVar22->Name).Data.AllocatorInstance.Data = pFVar4;
    pFVar23[-1].Name.Data.ArrayNum = iVar16;
    pFVar23[-1].Name.Data.ArrayMax = iVar5;
    pFVar23[-1].Verbosity = TVar11;
    pFVar23[-1].Postfix = bVar12;
    *(undefined6 *)&pFVar23[-1].field_0x12 = uVar13;
    goto LAB_141795730;
  }
  pFVar4 = (pFVar24->Name).Data.AllocatorInstance.Data;
  iVar16 = (pFVar24->Name).Data.ArrayNum;
  iVar5 = (pFVar24->Name).Data.ArrayMax;
  TVar11 = pFVar24->Verbosity;
  bVar12 = pFVar24->Postfix;
  uVar13 = *(undefined6 *)&pFVar24->field_0x12;
  lVar15 = (longlong)pFVar22 + (-0x18 - (longlong)pFVar24);
  lVar15 = lVar15 / 6 + (lVar15 >> 0x3f);
  (pFVar24->Name).Data.AllocatorInstance.Data = pFVar1;
  (pFVar24->Name).Data.ArrayNum = uVar2;
  (pFVar24->Name).Data.ArrayMax = uVar3;
  bVar7 = pFVar23[-1].Postfix;
  uVar8 = *(undefined6 *)&pFVar23[-1].field_0x12;
  pFVar24->Verbosity = pFVar23[-1].Verbosity;
  pFVar24->Postfix = bVar7;
  *(undefined6 *)&pFVar24->field_0x12 = uVar8;
  iVar20 = iVar20 + -1;
  (pFVar22->Name).Data.AllocatorInstance.Data = pFVar4;
  pFVar23[-1].Name.Data.ArrayNum = iVar16;
  pFVar23[-1].Name.Data.ArrayMax = iVar5;
  pFVar23[-1].Verbosity = TVar11;
  pFVar23[-1].Postfix = bVar12;
  *(undefined6 *)&pFVar23[-1].field_0x12 = uVar13;
  if ((lVar15 >> 2) - (lVar15 >> 0x3f) < ((longlong)pFVar18 - (longlong)pFVar25) / 0x18) {
    if (pFVar25 < pFVar18) {
      *ppFVar21 = pFVar25;
      ppFVar21[1] = pFVar18;
      *(int *)(ppFVar21 + 2) = iVar20;
      ppFVar21 = ppFVar21 + 3;
    }
    if (pFVar22 <= pFVar24 + 1) goto LAB_1417958d1;
    pFVar18 = pFVar23 + -2;
    pFVar25 = pFVar24;
  }
  else {
    if (pFVar24 + 1 < pFVar22) {
      *ppFVar21 = pFVar24;
      ppFVar21[1] = pFVar23 + -2;
      *(int *)(ppFVar21 + 2) = iVar20;
      ppFVar21 = ppFVar21 + 3;
    }
    if (pFVar18 <= pFVar25) goto LAB_1417958d1;
  }
  iVar16 = (int)(((longlong)pFVar18 - (longlong)pFVar25) / 0x18) + 1;
  pFVar24 = pFVar25;
  if (iVar20 == 0) goto LAB_1417958b8;
  goto LAB_1417956e0;
}

// Launch<`FIoStoreReaderImpl::StartAsyncRead'::__l2::<lambda_1>_> @ 1417959e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_FIoStoreReaderImpl::StartAsyncRead_::__l2::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  FTaskBase *this;
  undefined7 in_register_00000081;
  longlong *plVar7;
  ETaskFlags in_stack_00000030;
  
  plVar7 = (longlong *)CONCAT71(in_register_00000081,param_3);
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = FMemory::Malloc(0x140,0x40);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1__StartAsyncRead_FIoStoreReaderImpl__QEBA_AVFTaskHandle_Private_Tasks_UE__H_J0PEAEPEAU__atomic__N_std___Z_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    lVar6 = plVar7[1];
    this[1]._padding_ = *plVar7;
    this[1]._padding_ = lVar6;
    lVar6 = plVar7[3];
    this[1]._padding_ = plVar7[2];
    this[1]._padding_ = lVar6;
    uVar4 = *(undefined4 *)((longlong)plVar7 + 0x24);
    lVar6 = plVar7[5];
    uVar5 = *(undefined4 *)((longlong)plVar7 + 0x2c);
    *(int *)&this[1]._padding_ = (int)plVar7[4];
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar4;
    *(int *)&this[1]._padding_ = (int)lVar6;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar5;
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1__StartAsyncRead_FIoStoreReaderImpl__QEBA_AVFTaskHandle_Private_Tasks_UE__H_J0PEAEPEAU__atomic__N_std___Z__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x140);
  return (TTask<void>)param_1;
}

// Launch<``FIoStoreReaderImpl::ReadAsync'::__l2::<lambda_3>::operator()'::__l5::<lambda_1>_> @ 141795af0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<__FIoStoreReaderImpl::ReadAsync_::__l2::<lambda_3>::operator()_::__l5::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FTaskBase *this;
  undefined7 in_register_00000081;
  longlong *plVar7;
  ETaskFlags in_stack_00000030;
  
  plVar7 = (longlong *)CONCAT71(in_register_00000081,param_3);
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = FMemory::Malloc(0x140,0x40);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__4___R<lambda_3>__1__ReadAsync_FIoStoreReaderImpl__QEBA_AV__TTask_V__TIoStatusOr_VFIoBuffer_____Tasks_UE__AEBVFIoChunkId__AEBVFIoReadOptions___Z_QEBA_XZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    lVar3 = plVar7[1];
    this[1]._padding_ = *plVar7;
    this[1]._padding_ = lVar3;
    lVar3 = plVar7[3];
    this[1]._padding_ = plVar7[2];
    this[1]._padding_ = lVar3;
    uVar5 = *(undefined4 *)((longlong)plVar7 + 0x24);
    lVar3 = plVar7[5];
    uVar6 = *(undefined4 *)((longlong)plVar7 + 0x2c);
    *(int *)&this[1]._padding_ = (int)plVar7[4];
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar5;
    *(int *)&this[1]._padding_ = (int)lVar3;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar6;
    lVar3 = plVar7[6];
    this[1].RefCount = (atomic<unsigned_int>)(int)lVar3;
    this[1].NumLocks = (atomic<unsigned_int>)(int)((ulonglong)lVar3 >> 0x20);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__4___R<lambda_3>__1__ReadAsync_FIoStoreReaderImpl__QEBA_AV__TTask_V__TIoStatusOr_VFIoBuffer_____Tasks_UE__AEBVFIoChunkId__AEBVFIoReadOptions___Z_QEBA_XZ__Private_Tasks_UE__6B_
    ;
  }
  puVar4 = *(undefined8 **)param_1;
  if (puVar4 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x140);
  return (TTask<void>)param_1;
}

// Launch<`FIoStoreReaderImpl::ReadAsync'::__l5::<lambda_1>_> @ 141795c10

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<TIoStatusOr<FIoBuffer>_> __cdecl
UE::Tasks::Launch<_FIoStoreReaderImpl::ReadAsync_::__l5::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  undefined7 in_register_00000081;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)&___7__TTaskWithResult_V__TIoStatusOr_VFIoBuffer_____Private_Tasks_UE__6B_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__4__ReadAsync_FIoStoreReaderImpl__QEBA_AV__TTask_V__TIoStatusOr_VFIoBuffer_____Tasks_UE__AEBVFIoChunkId__AEBVFIoReadOptions___Z_V__TIoStatusOr_VFIoBuffer____X_Private_Tasks_UE__6B_
    ;
    this[1]._padding_ = *(longlong *)CONCAT71(in_register_00000081,param_3);
    *(int *)&this[1]._padding_ = (int)((longlong *)CONCAT71(in_register_00000081,param_3))[1];
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__4__ReadAsync_FIoStoreReaderImpl__QEBA_AV__TTask_V__TIoStatusOr_VFIoBuffer_____Tasks_UE__AEBVFIoChunkId__AEBVFIoReadOptions___Z__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<TIoStatusOr<FIoBuffer>_>)param_1;
}

// Launch<`FIoStoreReaderImpl::ReadAsync'::__l8::<lambda_2>_> @ 141795d20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<TIoStatusOr<FIoBuffer>_> __cdecl
UE::Tasks::Launch<_FIoStoreReaderImpl::ReadAsync_::__l8::<lambda_2>_>
          (wchar_t *param_1,<lambda_2> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)&___7__TTaskWithResult_V__TIoStatusOr_VFIoBuffer_____Private_Tasks_UE__6B_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_2>__7__ReadAsync_FIoStoreReaderImpl__QEBA_AV__TTask_V__TIoStatusOr_VFIoBuffer_____Tasks_UE__AEBVFIoChunkId__AEBVFIoReadOptions___Z__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<TIoStatusOr<FIoBuffer>_>)param_1;
}

// Launch<`FIoStoreReaderImpl::ReadAsync'::__l2::<lambda_3>,TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>_> @ 141795e00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<TIoStatusOr<FIoBuffer>_> __cdecl
UE::Tasks::
Launch<_FIoStoreReaderImpl::ReadAsync_::__l2::<lambda_3>,TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>_>
          (wchar_t *param_1,<lambda_3> *param_2,
          TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> *param_3,ETaskPriority param_4,
          EExtendedTaskPriority param_5,ETaskFlags param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *pFVar4;
  atomic<unsigned___int64> aVar5;
  FTaskBase *this;
  undefined7 in_register_00000089;
  ETaskFlags in_stack_00000038;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = FMemory::Malloc(0x140,0x40);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)&___7__TTaskWithResult_V__TIoStatusOr_VFIoBuffer_____Private_Tasks_UE__6B_;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_5,(undefined1)param_6,in_stack_00000038);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_3>__1__ReadAsync_FIoStoreReaderImpl__QEBA_AV__TTask_V__TIoStatusOr_VFIoBuffer_____Tasks_UE__AEBVFIoChunkId__AEBVFIoReadOptions___Z_V__TIoStatusOr_VFIoBuffer____X_Private_Tasks_UE__6B_
    ;
    pFVar4 = param_3[1].Elements[0];
    this[1]._padding_ = (longlong)param_3->Elements[0];
    this[1]._padding_ = (longlong)pFVar4;
    pFVar4 = param_3[3].Elements[0];
    this[1]._padding_ = (longlong)param_3[2].Elements[0];
    *(FTaskBase **)&this[1].RefCount = pFVar4;
    pFVar4 = param_3[5].Elements[0];
    this[1].Pipe = (FPipe *)param_3[4].Elements[0];
    *(FTaskBase **)&this[1].StateChangeEvent = pFVar4;
    aVar5 = *(atomic<unsigned___int64> *)(param_3 + 7);
    *(FTaskBase **)&this[1].ExecutingThreadId = param_3[6].Elements[0];
    this[1].TraceId = aVar5;
    *(FTaskBase **)this[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData =
         param_3[8].Elements[0];
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_3>__1__ReadAsync_FIoStoreReaderImpl__QEBA_AV__TTask_V__TIoStatusOr_VFIoBuffer_____Tasks_UE__AEBVFIoChunkId__AEBVFIoReadOptions___Z__Private_Tasks_UE__6B_
    ;
  }
  Private::FTaskBase::AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>,0>
            (this,(TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> *)
                  CONCAT71(in_register_00000089,param_4),true);
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x140);
  return (TTask<TIoStatusOr<FIoBuffer>_>)param_1;
}

// LowerBoundInternal<TTuple<int,TSharedRef<IIoDispatcherBackend,1>_>_const_,int,int,int_UE::Core::Private::Tuple::TTupleBaseElement<int,0,2>::*,TGreater<void>_> @ 141797d90

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<int,TSharedRef<IIoDispatcherBackend,1>_>_const_,int,int,int_UE::Core::Private::Tuple::TTupleBaseElement<int,0,2>::*,TGreater<void>_>
          (TTuple<int,TSharedRef<IIoDispatcherBackend,1>_> *param_1,int param_2,int *param_3,
          pdm_b2452e88 param_4,TGreater<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*param_3 < *(int *)(&param_1[iVar1].field_0x0 + (int)param_4)) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_>_const_,int,FName,TSortedMap<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 141797df0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_>_const_,int,FName,TSortedMap<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2,FName *param_3,FKeyForward param_4,FNameFastLess param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      iVar4 = *(int *)(param_1 + iVar1) - (param_3->ComparisonIndex).Value;
      if (iVar4 == 0) {
        iVar4 = *(int *)&param_1[iVar1].field_0x4 - param_3->Number;
      }
      if (iVar4 < 0) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<enum_EMessageSeverity::Type,enum_EMessageSeverity::Type>_const_,int,enum_EMessageSeverity::Type,TSortedMap<enum_EMessageSeverity::Type,enum_EMessageSeverity::Type,TSizedDefaultAllocator<32>,TLess<enum_EMessageSeverity::Type_const_>_>::FKeyForward,TLess<enum_EMessageSeverity::Type_const_>_> @ 141797e60

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<enum_EMessageSeverity::Type,enum_EMessageSeverity::Type>_const_,int,enum_EMessageSeverity::Type,TSortedMap<enum_EMessageSeverity::Type,enum_EMessageSeverity::Type,TSizedDefaultAllocator<32>,TLess<enum_EMessageSeverity::Type_const_>_>::FKeyForward,TLess<enum_EMessageSeverity::Type_const_>_>
          (TTuple<EMessageSeverity::Type,EMessageSeverity::Type> *param_1,int param_2,Type *param_3,
          FKeyForward param_4,TLess<EMessageSeverity::Type_const_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(int *)(param_1 + iVar1) < (int)*param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// MakeConstArrayView<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_&,TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_> @ 141797eb0

TArrayView<unsigned_char_const_,int> * __cdecl
MakeConstArrayView<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_&,TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>_>
          (TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,
          TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_char_const_,int> *pTVar4;
  
  iVar1 = param_1->ArrayNum;
  __return_storage_ptr__->DataPtr = (param_1->AllocatorInstance).Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<unsigned_char_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// MapBinary<ExpressionParser::FForwardSlash,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_7>_> @ 1417980d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TOperatorJumpTable<void,wchar_t>::
MapBinary<ExpressionParser::FForwardSlash,_FUnitExpressionParser::FUnitExpressionParser_::__l2::<lambda_7>_>
          (TOperatorJumpTable<void,wchar_t> *this,<lambda_7> param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_b8 [36];
  undefined1 local_94 [4];
  FGuid *local_90;
  code **local_88;
  FGuid local_80;
  FGuid local_70;
  FGuid local_60;
  code *local_48 [2];
  undefined **local_38 [3];
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_38[0] = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_U__FNumericUnit_N__U1_XV<lambda_7>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_7>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_7>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_90 = &local_80;
  local_88 = local_48;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlash>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
             ::__l2::Global;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)&this->BinaryOps,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
              *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// MapBinary<ExpressionParser::FMinus,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_5>_> @ 1417981a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TOperatorJumpTable<void,wchar_t>::
MapBinary<ExpressionParser::FMinus,_FUnitExpressionParser::FUnitExpressionParser_::__l2::<lambda_5>_>
          (TOperatorJumpTable<void,wchar_t> *this,<lambda_5> param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_b8 [32];
  TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
  local_98;
  code **local_88;
  FGuid local_80;
  FGuid local_70;
  FGuid local_60;
  code *local_48 [2];
  undefined **local_38;
  EUnit local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_38 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_U__FNumericUnit_N__U1_XV<lambda_5>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_5>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_98.Value =
       (TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>
        *)&local_80;
  local_88 = local_48;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
             ::__l2::Global;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
             ::__l2::Global;
  local_30 = param_1.InDefaultUnit;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)&this->BinaryOps,&local_98,(bool *)&local_98.Value);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// MapBinary<ExpressionParser::FPlus,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_4>_> @ 141798270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TOperatorJumpTable<void,wchar_t>::
MapBinary<ExpressionParser::FPlus,_FUnitExpressionParser::FUnitExpressionParser_::__l2::<lambda_4>_>
          (TOperatorJumpTable<void,wchar_t> *this,<lambda_4> param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_b8 [32];
  TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
  local_98;
  code **local_88;
  FGuid local_80;
  FGuid local_70;
  FGuid local_60;
  code *local_48 [2];
  undefined **local_38;
  EUnit local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_38 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_U__FNumericUnit_N__U1_XV<lambda_4>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_4>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_98.Value =
       (TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>
        *)&local_80;
  local_88 = local_48;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
             ::__l2::Global;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
             ::__l2::Global;
  local_30 = param_1.InDefaultUnit;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)&this->BinaryOps,&local_98,(bool *)&local_98.Value);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// MapBinary<ExpressionParser::FStar,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_6>_> @ 141798340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TOperatorJumpTable<void,wchar_t>::
MapBinary<ExpressionParser::FStar,_FUnitExpressionParser::FUnitExpressionParser_::__l2::<lambda_6>_>
          (TOperatorJumpTable<void,wchar_t> *this,<lambda_6> param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_b8 [36];
  undefined1 local_94 [4];
  FGuid *local_90;
  code **local_88;
  FGuid local_80;
  FGuid local_70;
  FGuid local_60;
  code *local_48 [2];
  undefined **local_38 [3];
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_38[0] = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_U__FNumericUnit_N__U1_XV<lambda_6>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_6>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_6>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_90 = &local_80;
  local_88 = local_48;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
             ::__l2::Global;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)&this->BinaryOps,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
              *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// MapPreUnary<ExpressionParser::FMinus,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_3>_> @ 141798410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TOperatorJumpTable<void,wchar_t>::
MapPreUnary<ExpressionParser::FMinus,_FUnitExpressionParser::FUnitExpressionParser_::__l2::<lambda_3>_>
          (TOperatorJumpTable<void,wchar_t> *this,<lambda_3> param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_b8 [36];
  undefined1 local_94 [4];
  FGuid *local_90;
  code **local_88;
  FGuid local_80;
  undefined8 local_70;
  undefined8 local_68;
  FGuid local_60;
  code *local_48 [2];
  undefined **local_38 [3];
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_20 = (undefined ***)0x0;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = 0;
  local_68 = 0;
  local_38[0] = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_U__FNumericUnit_N__XV<lambda_3>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_3>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapUnaryFunction<FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_90 = &local_80;
  local_88 = local_48;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>
                      *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// MapPreUnary<ExpressionParser::FPlus,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_2>_> @ 1417984e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TOperatorJumpTable<void,wchar_t>::
MapPreUnary<ExpressionParser::FPlus,_FUnitExpressionParser::FUnitExpressionParser_::__l2::<lambda_2>_>
          (TOperatorJumpTable<void,wchar_t> *this,<lambda_2> param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_b8 [36];
  undefined1 local_94 [4];
  FGuid *local_90;
  code **local_88;
  FGuid local_80;
  undefined8 local_70;
  undefined8 local_68;
  FGuid local_60;
  code *local_48 [2];
  undefined **local_38 [3];
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_20 = (undefined ***)0x0;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = 0;
  local_68 = 0;
  local_38[0] = &
                ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_U__FNumericUnit_N__XV<lambda_2>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_2>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapUnaryFunction<FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_90 = &local_80;
  local_88 = local_48;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>
                      *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// NoneOf<TArrayView<UE::Logging::Private::FLogField_const_,int>,char_const_*_UE::Logging::Private::FLogField::*> @ 1417985b0

bool __cdecl
Algo::
NoneOf<TArrayView<UE::Logging::Private::FLogField_const_,int>,char_const_*_UE::Logging::Private::FLogField::*>
          (TArrayView<UE::Logging::Private::FLogField_const_,int> *param_1,pdm_3770962b param_2)

{
  FLogField *pFVar1;
  FLogField *pFVar2;
  
  pFVar2 = param_1->DataPtr;
  pFVar1 = pFVar2 + param_1->ArrayNum;
  if (pFVar2 != pFVar1) {
    do {
      if (*(longlong *)((longlong)&pFVar2->Name + (longlong)(int)param_2) != 0) {
        return false;
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar1);
  }
  return true;
}

// SerializeFromMismatchedTag<UE::Math::TMatrix<float>,UE::Math::TMatrix<double>,FArchive> @ 14179a1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TMatrix<float>,UE::Math::TMatrix<double>,FArchive>
          (TMatrix<double> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auStack_a8 [32];
  TMatrix<float> local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if ((param_2 == param_5) || (param_2 == param_4)) {
    UE::Math::operator<<(param_3,param_1);
  }
  else {
    if (param_2 != param_6) {
      return false;
    }
    UE::Math::operator<<(param_3,&local_88);
    auVar3._8_4_ = SUB84((double)local_88.M[0][1],0);
    auVar3._0_8_ = (double)local_88.M[0][0];
    auVar3._12_4_ = (int)((ulonglong)(double)local_88.M[0][1] >> 0x20);
    *(undefined1 (*) [16])param_1->M[0] = auVar3;
    auVar2._8_4_ = SUB84((double)local_88.M[0][3],0);
    auVar2._0_8_ = (double)local_88.M[0][2];
    auVar2._12_4_ = (int)((ulonglong)(double)local_88.M[0][3] >> 0x20);
    *(undefined1 (*) [16])(param_1->M[0] + 2) = auVar2;
    auVar1._8_4_ = SUB84((double)local_88.M[1][1],0);
    auVar1._0_8_ = (double)local_88.M[1][0];
    auVar1._12_4_ = (int)((ulonglong)(double)local_88.M[1][1] >> 0x20);
    *(undefined1 (*) [16])param_1->M[1] = auVar1;
    param_1->M[1][2] = (double)local_88.M[1][2];
    param_1->M[1][3] = (double)local_88.M[1][3];
    param_1->M[2][0] = (double)local_88.M[2][0];
    param_1->M[2][1] = (double)local_88.M[2][1];
    param_1->M[2][2] = (double)local_88.M[2][2];
    param_1->M[2][3] = (double)local_88.M[2][3];
    param_1->M[3][0] = (double)local_88.M[3][0];
    param_1->M[3][1] = (double)local_88.M[3][1];
    param_1->M[3][2] = (double)local_88.M[3][2];
    param_1->M[3][3] = (double)local_88.M[3][3];
  }
  return true;
}

// SerializeFromMismatchedTag<UE::Math::TMatrix<double>,UE::Math::TMatrix<float>,FArchive> @ 14179a2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TMatrix<double>,UE::Math::TMatrix<float>,FArchive>
          (TMatrix<float> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  undefined1 auStack_b8 [32];
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((param_2 == param_5) ||
     ((param_2 == param_4 && ((int)((ulonglong)*(undefined8 *)&param_3->field_0x40 >> 0x20) < 0x3ec)
      ))) {
    UE::Math::operator<<(param_3,param_1);
  }
  else {
    if ((param_2 != param_6) && (param_2 != param_4)) {
      return false;
    }
    UE::Math::operator<<(param_3,&local_98);
    param_1->M[0][0] = (float)local_98.M[0][0];
    param_1->M[0][1] = (float)local_98.M[0][1];
    param_1->M[0][2] = (float)local_98.M[0][2];
    param_1->M[0][3] = (float)local_98.M[0][3];
    param_1->M[1][0] = (float)local_98.M[1][0];
    param_1->M[1][1] = (float)local_98.M[1][1];
    param_1->M[1][2] = (float)local_98.M[1][2];
    param_1->M[1][3] = (float)local_98.M[1][3];
    param_1->M[2][0] = (float)local_98.M[2][0];
    param_1->M[2][1] = (float)local_98.M[2][1];
    param_1->M[2][2] = (float)local_98.M[2][2];
    param_1->M[2][3] = (float)local_98.M[2][3];
    param_1->M[3][0] = (float)local_98.M[3][0];
    param_1->M[3][1] = (float)local_98.M[3][1];
    param_1->M[3][2] = (float)local_98.M[3][2];
    param_1->M[3][3] = (float)local_98.M[3][3];
  }
  return true;
}

// SerializeFromMismatchedTag<UE::Math::TQuat<float>,UE::Math::TQuat<double>,FArchive> @ 14179a3d0

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TQuat<float>,UE::Math::TQuat<double>,FArchive>
          (TQuat<double> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  TQuat<float> local_18;
  
  if ((param_2 != param_5) && (param_2 != param_4)) {
    if (param_2 != param_6) {
      return false;
    }
    UE::Math::operator<<(param_3,&local_18);
    param_1->X = (double)local_18.X;
    param_1->Y = (double)local_18.Y;
    param_1->Z = (double)local_18.Z;
    param_1->W = (double)local_18.W;
    return true;
  }
  UE::Math::operator<<(param_3,param_1);
  return true;
}

// SerializeFromMismatchedTag<UE::Math::TQuat<double>,UE::Math::TQuat<float>,FArchive> @ 14179a460

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TQuat<double>,UE::Math::TQuat<float>,FArchive>
          (TQuat<float> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  TQuat<double> local_28;
  
  if ((param_2 != param_5) &&
     ((param_2 != param_4 || (0x3eb < (int)((ulonglong)*(undefined8 *)&param_3->field_0x40 >> 0x20))
      ))) {
    if ((param_2 != param_6) && (param_2 != param_4)) {
      return false;
    }
    UE::Math::operator<<(param_3,&local_28);
    param_1->X = (float)local_28.X;
    param_1->Y = (float)local_28.Y;
    param_1->Z = (float)local_28.Z;
    param_1->W = (float)local_28.W;
    return true;
  }
  UE::Math::operator<<(param_3,param_1);
  return true;
}

// SerializeFromMismatchedTag<UE::Math::TRotator<float>,UE::Math::TRotator<double>,FArchive> @ 14179a520

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TRotator<float>,UE::Math::TRotator<double>,FArchive>
          (TRotator<double> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  bool bVar1;
  TRotator<float> local_18;
  
  if ((param_2 != param_5) && (param_2 != param_4)) {
    if (param_2 != param_6) {
      return false;
    }
    bVar1 = UE::Math::TRotator<float>::Serialize(&local_18,param_3);
    param_1->Pitch = (double)local_18.Pitch;
    param_1->Yaw = (double)local_18.Yaw;
    param_1->Roll = (double)local_18.Roll;
    return bVar1;
  }
  UE::Math::operator<<(param_3,param_1);
  return true;
}

// SerializeFromMismatchedTag<UE::Math::TRotator<double>,UE::Math::TRotator<float>,FArchive> @ 14179a5a0

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TRotator<double>,UE::Math::TRotator<float>,FArchive>
          (TRotator<float> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  bool bVar1;
  TRotator<double> local_28;
  
  if ((param_2 != param_5) &&
     ((param_2 != param_4 || (0x3eb < (int)((ulonglong)*(undefined8 *)&param_3->field_0x40 >> 0x20))
      ))) {
    if ((param_2 != param_6) && (param_2 != param_4)) {
      return false;
    }
    UE::Math::operator<<(param_3,&local_28);
    param_1->Pitch = (float)local_28.Pitch;
    param_1->Yaw = (float)local_28.Yaw;
    param_1->Roll = (float)local_28.Roll;
    return true;
  }
  bVar1 = UE::Math::TRotator<float>::Serialize(param_1,param_3);
  return bVar1;
}

// SerializeFromMismatchedTag<UE::Math::TTransform<float>,UE::Math::TTransform<double>,FArchive> @ 14179a630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TTransform<float>,UE::Math::TTransform<double>,FArchive>
          (TTransform<double> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  __m128 local_48;
  __m128 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  if ((param_2 == param_5) || (param_2 == param_4)) {
    bVar2 = UE::Math::TTransform<double>::Serialize(param_1,param_3);
  }
  else if (param_2 == param_6) {
    _local_58 = GlobalVectorConstants::Float0001;
    local_38 = GlobalVectorConstants::Float1110;
    local_48 = GlobalVectorConstants::FloatZero;
    UE::Math::operator<<(param_3,(TQuat<float> *)local_58);
    UE::Math::operator<<(param_3,(TVector<float> *)&local_48);
    UE::Math::operator<<(param_3,(TVector<float> *)&local_38);
    if ((param_3->field_0x28 & 1) != 0) {
      local_48.m128_f32 = (float  [4])insertps(local_48.m128_f32,local_48.m128_f32,8);
      local_38.m128_f32 = (float  [4])insertps(local_38.m128_f32,local_38.m128_f32,8);
    }
    bVar2 = true;
    (param_1->Rotation).XY.m128d_f64[0] = (double)(float)local_58._0_4_;
    (param_1->Rotation).XY.m128d_f64[1] = (double)(float)local_58._4_4_;
    (param_1->Rotation).ZW.m128d_f64[0] = (double)fStack_50;
    (param_1->Rotation).ZW.m128d_f64[1] = (double)fStack_4c;
    (param_1->Translation).XY.m128d_f64[0] = (double)local_48.m128_f32[0];
    (param_1->Translation).XY.m128d_f64[1] = (double)local_48.m128_f32[1];
    (param_1->Translation).ZW.m128d_f64[0] = (double)local_48.m128_f32[2];
    (param_1->Translation).ZW.m128d_f64[1] = (double)local_48.m128_f32[3];
    auVar1._8_4_ = SUB84((double)local_38.m128_f32[1],0);
    auVar1._0_8_ = (double)local_38.m128_f32[0];
    auVar1._12_4_ = (int)((ulonglong)(double)local_38.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64 = auVar1;
    (param_1->Scale3D).ZW.m128d_f64[0] = (double)local_38.m128_f32[2];
    (param_1->Scale3D).ZW.m128d_f64[1] = (double)local_38.m128_f32[3];
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// SerializeFromMismatchedTag<UE::Math::TTransform<double>,UE::Math::TTransform<float>,FArchive> @ 14179a750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TTransform<double>,UE::Math::TTransform<float>,FArchive>
          (TTransform<float> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [24];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((param_2 == param_5) ||
     ((param_2 == param_4 && ((int)((ulonglong)*(undefined8 *)&param_3->field_0x40 >> 0x20) < 0x3ec)
      ))) {
    bVar1 = UE::Math::TTransform<float>::Serialize(param_1,param_3);
  }
  else if ((param_2 == param_6) || (param_2 == param_4)) {
    local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
    ;
    local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_68._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
    ;
    local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
    ;
    uStack_40 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_58._16_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    uStack_3c = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
    ;
    uStack_20 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_38._16_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    uStack_1c = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::operator<<(param_3,(TQuat<double> *)local_78);
    UE::Math::operator<<(param_3,(TVector<double> *)local_58);
    UE::Math::operator<<(param_3,(TVector<double> *)local_38);
    if ((param_3->field_0x28 & 1) == 0) {
      uVar2 = uStack_20;
      uVar3 = uStack_1c;
      uVar4 = uStack_40;
      uVar5 = uStack_3c;
    }
    else {
      uVar2 = 0;
      uVar3 = 0;
      uVar4 = 0;
      uVar5 = 0;
    }
    bVar1 = true;
    (param_1->Rotation).m128_f32[0] = (float)(double)local_78._0_8_;
    (param_1->Rotation).m128_f32[1] = (float)(double)local_78._8_8_;
    (param_1->Rotation).m128_f32[2] = (float)(double)local_68._0_8_;
    (param_1->Rotation).m128_f32[3] = (float)(double)local_68._8_8_;
    (param_1->Translation).m128_f32[0] = (float)(double)local_58._0_8_;
    (param_1->Translation).m128_f32[1] = (float)(double)local_58._8_8_;
    (param_1->Translation).m128_f32[2] = (float)local_58._16_8_;
    (param_1->Translation).m128_f32[3] = (float)(double)CONCAT44(uVar5,uVar4);
    (param_1->Scale3D).m128_f32[0] = (float)(double)local_38._0_8_;
    (param_1->Scale3D).m128_f32[1] = (float)(double)local_38._8_8_;
    (param_1->Scale3D).m128_f32[2] = (float)local_38._16_8_;
    (param_1->Scale3D).m128_f32[3] = (float)(double)CONCAT44(uVar3,uVar2);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// SerializeFromMismatchedTag<UE::Math::TVector2<float>,UE::Math::TVector2<double>,FArchive> @ 14179a8c0

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TVector2<float>,UE::Math::TVector2<double>,FArchive>
          (TVector2<double> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  bool bVar1;
  
  if ((param_2 != param_5) && (param_2 != param_4)) {
    if (param_2 != param_6) {
      return false;
    }
    bVar1 = UE::Math::TVector2<float>::Serialize((TVector2<float> *)&param_5,param_3);
    (param_1->field0_0x0)._s_0.X = (double)(float)param_5.ComparisonIndex.Value;
    (param_1->field0_0x0)._s_0.Y = (double)(float)param_5.Number;
    return bVar1;
  }
  UE::Math::operator<<(param_3,param_1);
  return true;
}

// SerializeFromMismatchedTag<UE::Math::TVector2<double>,UE::Math::TVector2<float>,FArchive> @ 14179a930

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TVector2<double>,UE::Math::TVector2<float>,FArchive>
          (TVector2<float> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  TVector2<float>_u_0 TVar1;
  bool bVar2;
  TVector2<double>_u_0 local_18;
  
  if ((param_2 != param_5) &&
     ((param_2 != param_4 || (0x3eb < (int)((ulonglong)*(undefined8 *)&param_3->field_0x40 >> 0x20))
      ))) {
    if ((param_2 != param_6) && (param_2 != param_4)) {
      return false;
    }
    UE::Math::operator<<(param_3,(TVector2<double> *)&local_18._s_0);
    TVar1._s_0.Y = (float)local_18._s_0.Y;
    TVar1._s_0.X = (float)local_18._s_0.X;
    param_1->field0_0x0 = TVar1;
    return true;
  }
  bVar2 = UE::Math::TVector2<float>::Serialize(param_1,param_3);
  return bVar2;
}

// SerializeFromMismatchedTag<UE::Math::TVector4<float>,UE::Math::TVector4<double>,FArchive> @ 14179a9c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TVector4<float>,UE::Math::TVector4<double>,FArchive>
          (TVector4<double> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  TVector4<float>_u_0 local_18;
  
  if ((param_2 != param_5) && (param_2 != param_4)) {
    if (param_2 != param_6) {
      return false;
    }
    local_18._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_18._8_8_ = _UNK_150689648;
    UE::Math::operator<<(param_3,(TVector4<float> *)&local_18._s_0);
    (param_1->field0_0x0)._s_0.X = (double)local_18._s_0.X;
    (param_1->field0_0x0)._s_0.Y = (double)local_18._s_0.Y;
    (param_1->field0_0x0)._s_0.Z = (double)local_18._s_0.Z;
    (param_1->field0_0x0)._s_0.W = (double)local_18._s_0.W;
    return true;
  }
  UE::Math::operator<<(param_3,param_1);
  return true;
}

// SerializeFromMismatchedTag<UE::Math::TVector4<double>,UE::Math::TVector4<float>,FArchive> @ 14179aa60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TVector4<double>,UE::Math::TVector4<float>,FArchive>
          (TVector4<float> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  TVector4<double>_u_0 local_28;
  
  if ((param_2 != param_5) &&
     ((param_2 != param_4 || (0x3eb < (int)((ulonglong)*(undefined8 *)&param_3->field_0x40 >> 0x20))
      ))) {
    if ((param_2 != param_6) && (param_2 != param_4)) {
      return false;
    }
    local_28._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_28._s_0.W = _UNK_15061cbc8;
    local_28._s_0.X = 0.0;
    local_28._s_0.Y = 0.0;
    UE::Math::operator<<(param_3,(TVector4<double> *)&local_28._s_0);
    (param_1->field0_0x0)._s_0.X = (float)local_28._s_0.X;
    (param_1->field0_0x0)._s_0.Y = (float)local_28._s_0.Y;
    (param_1->field0_0x0)._s_0.Z = (float)local_28._s_0.Z;
    (param_1->field0_0x0)._s_0.W = (float)local_28._s_0.W;
    return true;
  }
  UE::Math::operator<<(param_3,param_1);
  return true;
}

// SerializeFromMismatchedTag<UE::Math::TVector<float>,UE::Math::TVector<double>,FStructuredArchiveSlot> @ 14179ab40

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TVector<float>,UE::Math::TVector<double>,FStructuredArchiveSlot>
          (TVector<double> *param_1,FName param_2,FStructuredArchiveSlot *param_3,FName param_4,
          FName param_5,FName param_6)

{
  bool bVar1;
  TVector<float>_u_0 local_18;
  
  if ((param_2 != param_5) && (param_2 != param_4)) {
    if (param_2 != param_6) {
      return false;
    }
    bVar1 = UE::Math::TVector<float>::Serialize((TVector<float> *)&local_18._s_0,*param_3);
    (param_1->field0_0x0)._s_0.X = (double)local_18._s_0.X;
    (param_1->field0_0x0)._s_0.Y = (double)local_18._s_0.Y;
    (param_1->field0_0x0)._s_0.Z = (double)local_18._s_0.Z;
    return bVar1;
  }
  UE::Math::operator<<(*param_3,param_1);
  return true;
}

// SerializeFromMismatchedTag<UE::Math::TVector<double>,UE::Math::TVector<float>,FStructuredArchiveSlot> @ 14179abc0

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TVector<double>,UE::Math::TVector<float>,FStructuredArchiveSlot>
          (TVector<float> *param_1,FName param_2,FStructuredArchiveSlot *param_3,FName param_4,
          FName param_5,FName param_6)

{
  bool bVar1;
  FArchive *pFVar2;
  TVector<double>_u_0 local_28;
  
  if (param_2 == param_5) {
LAB_14179ac52:
    bVar1 = UE::Math::TVector<float>::Serialize(param_1,*param_3);
  }
  else {
    if (param_2 == param_4) {
      pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive((FSlotBase *)param_3)
      ;
      if ((int)((ulonglong)*(undefined8 *)&pFVar2->field_0x40 >> 0x20) < 0x3ec) goto LAB_14179ac52;
    }
    if ((param_2 == param_6) || (param_2 == param_4)) {
      UE::Math::operator<<(*param_3,(TVector<double> *)&local_28._s_0);
      bVar1 = true;
      (param_1->field0_0x0)._s_0.X = (float)local_28._s_0.X;
      (param_1->field0_0x0)._s_0.Y = (float)local_28._s_0.Y;
      (param_1->field0_0x0)._s_0.Z = (float)local_28._s_0.Z;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}

// StringCast<char8_t,32,wchar_t> @ 14179adc0

TStringConversion<TStringConvert<wchar_t,char8_t>,32> * __cdecl
StringCast<char8_t,32,wchar_t>
          (TStringConversion<TStringConvert<wchar_t,char8_t>,32> *__return_storage_ptr__,
          wchar_t *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uchar *puVar4;
  TStringConversion<TStringConvert<wchar_t,char8_t>,32> *pTVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar6 = 0;
  __return_storage_ptr__->_padding_ = 0;
  if (param_1 == (wchar_t *)0x0) {
    __return_storage_ptr__->Ptr = (uchar *)0x0;
    __return_storage_ptr__->StringLength = 0;
    return __return_storage_ptr__;
  }
  if ((0 < param_2) && (param_1[(longlong)param_2 + -1] == L'\0')) {
    iVar6 = 1;
    param_2 = param_2 + -1;
  }
  iVar3 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,param_2);
  __return_storage_ptr__->StringLength = iVar3;
  uVar8 = iVar3 + iVar6;
  uVar7 = uVar8;
  if (uVar8 < 0x21) {
    if (__return_storage_ptr__->_padding_ == 0) goto LAB_14179ae39;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&__return_storage_ptr__->_padding_,0,uVar7,1);
LAB_14179ae39:
  pTVar5 = __return_storage_ptr__;
  if ((TStringConversion<TStringConvert<wchar_t,char8_t>,32> *)__return_storage_ptr__->_padding_ !=
      (TStringConversion<TStringConvert<wchar_t,char8_t>,32> *)0x0) {
    pTVar5 = (TStringConversion<TStringConvert<wchar_t,char8_t>,32> *)
             __return_storage_ptr__->_padding_;
  }
  __return_storage_ptr__->Ptr = (uchar *)pTVar5;
  puVar4 = UE::Core::Private::Convert((uchar *)pTVar5,uVar8,param_1,iVar6 + param_2);
  if ((puVar4 == (uchar *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TStringConversion<TStringConvert<wchar_t,char8_t>,32> *)(*pcVar1)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

// StringCast<wchar_t,128,char8_t> @ 14179aeb0

TStringConversion<TStringConvert<char8_t,wchar_t>,128> * __cdecl
StringCast<wchar_t,128,char8_t>
          (TStringConversion<TStringConvert<char8_t,wchar_t>,128> *__return_storage_ptr__,
          uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> *pTVar6;
  
  __return_storage_ptr__->_padding_ = 0;
  if (param_1 == (uchar *)0x0) {
    __return_storage_ptr__->Ptr = (wchar_t *)0x0;
    __return_storage_ptr__->StringLength = 0;
  }
  else {
    sVar4 = strlen((char *)param_1);
    iVar3 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,param_1,(int)sVar4);
    __return_storage_ptr__->StringLength = iVar3;
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
    ResizeAllocation((ForElementType<wchar_t> *)__return_storage_ptr__,0,iVar3 + 1,2);
    pTVar6 = __return_storage_ptr__;
    if ((TStringConversion<TStringConvert<char8_t,wchar_t>,128> *)__return_storage_ptr__->_padding_
        != (TStringConversion<TStringConvert<char8_t,wchar_t>,128> *)0x0) {
      pTVar6 = (TStringConversion<TStringConvert<char8_t,wchar_t>,128> *)
               __return_storage_ptr__->_padding_;
    }
    __return_storage_ptr__->Ptr = (wchar_t *)pTVar6;
    pwVar5 = UE::Core::Private::Convert((wchar_t *)pTVar6,iVar3 + 1,param_1,(int)sVar4 + 1);
    if (pwVar5 == (wchar_t *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TStringConversion<TStringConvert<char8_t,wchar_t>,128> *)(*pcVar1)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// TransformAccumulate<int,TArray<UE::Logging::Private::FLogTemplateOp,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,unsigned_int_(__cdecl*)(UE::Logging::Private::FLogTemplateOp_const_&),TPlus<void>_> @ 14179afa0

int __cdecl
Algo::
TransformAccumulate<int,TArray<UE::Logging::Private::FLogTemplateOp,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,unsigned_int_(__cdecl*)(UE::Logging::Private::FLogTemplateOp_const_&),TPlus<void>_>
          (TArray<UE::Logging::Private::FLogTemplateOp,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
           *param_1,_func___cdecl_uint_FLogTemplateOp_ptr *param_2,int param_3,TPlus<void> param_4)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::Logging::Private::FLogTemplateOp> FVar3;
  uint uVar4;
  undefined1 local_res18 [8];
  
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  piVar1 = &param_1->ArrayNum;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<UE::Logging::Private::FLogTemplateOp>)0x0) {
    param_1 = (TArray<UE::Logging::Private::FLogTemplateOp,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
               *)FVar3;
  }
  FVar3 = (ForElementType<UE::Logging::Private::FLogTemplateOp>)
          ((longlong)param_1 + (longlong)iVar2 * 8);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<UE::Logging::Private::FLogTemplateOp_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res18);
    }
    if ((ForElementType<UE::Logging::Private::FLogTemplateOp>)param_1 == FVar3) break;
    uVar4 = (*param_2)((FLogTemplateOp *)param_1);
    param_3 = param_3 + uVar4;
    param_1 = (TArray<UE::Logging::Private::FLogTemplateOp,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
               *)((longlong)param_1 + 8);
  }
  return param_3;
}

// Visit<`FIoStoreTocResourceStorage::ChopBytes'::__l2::<lambda_1>,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&> @ 14179b180

TArrayView<unsigned_char_const_,int> * __cdecl
Visit<_FIoStoreTocResourceStorage::ChopBytes_::__l2::<lambda_1>,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&>
          (TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,<lambda_1> *param_1,
          TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
          *param_2)

{
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64>(unsigned___int64,`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64)'
    ::__l2::Invokers[param_2->TypeIndex])(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// VisitApplyEncoded<1,0,`FIoStoreTocResourceStorage::FinalizeRead'::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&> @ 14179b1b0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_FIoStoreTocResourceStorage::FinalizeRead_::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&>
          (<lambda_1> *param_1,
          TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
          *param_2)

{
  return;
}

// VisitApplyEncoded<1,0,`FIoStoreTocResourceStorage::GetAllocatedSize'::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_const_&> @ 14179b1c0

long64 __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_FIoStoreTocResourceStorage::GetAllocatedSize_::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_const_&>
          (<lambda_1> *param_1,
          TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
          *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)((longlong)&param_2->_padding_ + 4);
  lVar2 = 0;
  if (10 < uVar1) {
    lVar2 = (longlong)(int)uVar1 << 3;
  }
  uVar1 = *(uint *)((longlong)&param_2->_padding_ + 4);
  if (uVar1 < 0xb) {
    return lVar2 + 0x10;
  }
  return (longlong)(int)uVar1 * 0x10 + 0x10 + lVar2;
}

// VisitApplyEncoded<1,0,`FIoStoreTocResourceStorage::ReleaseOwnershipOfLastBlock'::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&> @ 14179b200

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_FIoStoreTocResourceStorage::ReleaseOwnershipOfLastBlock_::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&>
          (<lambda_1> *param_1,
          TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
          *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
  local_18;
  
  if (*(char *)((longlong)&param_2->_padding_ + 4) == '\0') {
    if (((int)param_2->_padding_ < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar7 = (longlong)(int)param_2->_padding_;
    plVar8 = (longlong *)param_2->_padding_;
    if ((longlong *)param_2->_padding_ == (longlong *)0x0) {
      plVar8 = &param_2->_padding_;
    }
    puVar2 = (undefined8 *)plVar8[lVar7 + -1];
    plVar8[lVar7 + -1] = 0;
    iVar1 = (int)param_2->_padding_;
    plVar8 = (longlong *)param_2->_padding_;
    if ((longlong *)param_2->_padding_ == (longlong *)0x0) {
      plVar8 = &param_2->_padding_;
    }
    puVar3 = (undefined8 *)plVar8[(longlong)iVar1 + -1];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    iVar6 = (int)param_2->_padding_ - iVar1;
    if (iVar6 != 0) {
      memmove((TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
               *)(plVar8 + iVar1 + -1),plVar8 + iVar1,(longlong)iVar6 << 3);
    }
    *(int *)&param_2->_padding_ = (int)param_2->_padding_ + -1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  else {
    TArray<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
    ::Pop((TArray<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
           *)&param_2->_padding_,&local_18,No);
    if (local_18.AllocatorInstance.Data != (uchar *)0x0) {
      TLinearAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>::Free
                (local_18.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// VisitApplyEncoded<1,0,`FIoStoreTocResourceStorage::ChopBytes'::__l2::<lambda_1>,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&> @ 14179b320

TArrayView<unsigned_char_const_,int> * __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_FIoStoreTocResourceStorage::ChopBytes_::__l2::<lambda_1>,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&>
          (TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,<lambda_1> *param_1,
          TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
          *param_2)

{
  FIoStoreTocResourceStorage::ChopBytes
            (__return_storage_ptr__,(FMappedFile *)param_2,*(int *)(param_1 + 8));
  return __return_storage_ptr__;
}

// VisitApplyEncoded<2,0,`FIoStoreTocResourceStorage::FinalizeRead'::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&> @ 14179b350

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_FIoStoreTocResourceStorage::FinalizeRead_::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&>
          (<lambda_1> *param_1,
          TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
          *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_2->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
    param_2->_padding_ = 0;
                    /* WARNING: Could not recover jumptable at 0x00014179b367. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// VisitApplyEncoded<2,0,`FIoStoreTocResourceStorage::GetAllocatedSize'::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_const_&> @ 14179b380

long64 __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_FIoStoreTocResourceStorage::GetAllocatedSize_::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_const_&>
          (<lambda_1> *param_1,
          TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
          *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)((longlong)&param_2->_padding_ + 4);
  if (10 < uVar1) {
    return (longlong)(int)uVar1 << 4;
  }
  return 0;
}

// VisitApplyEncoded<2,0,`FIoStoreTocResourceStorage::ReleaseOwnershipOfLastBlock'::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&> @ 14179b3a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_FIoStoreTocResourceStorage::ReleaseOwnershipOfLastBlock_::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&>
          (<lambda_1> *param_1,
          TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
          *param_2)

{
  TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>
  local_18;
  
  TArray<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
  ::Pop((TArray<TArray<unsigned_char,TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>_>,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
         *)&param_2->_padding_,&local_18,No);
  if (local_18.AllocatorInstance.Data != (uchar *)0x0) {
    TLinearAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>::Free
              (local_18.AllocatorInstance.Data);
    return;
  }
  return;
}

// VisitApplyEncoded<2,0,`FIoStoreTocResourceStorage::ChopBytes'::__l2::<lambda_1>,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&> @ 14179b3e0

TArrayView<unsigned_char_const_,int> * __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_FIoStoreTocResourceStorage::ChopBytes_::__l2::<lambda_1>,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&>
          (TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,<lambda_1> *param_1,
          TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
          *param_2)

{
  FIoStoreTocResourceStorage::ChopBytes
            (__return_storage_ptr__,(FReadBlocks *)param_2,*(int *)(param_1 + 8));
  return __return_storage_ptr__;
}

// VisitApplyEncoded<0,0,`FIoStoreTocResourceStorage::FinalizeRead'::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&> @ 14179b410

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_FIoStoreTocResourceStorage::FinalizeRead_::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&>
          (<lambda_1> *param_1,
          TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
          *param_2)

{
  return;
}

// VisitApplyEncoded<0,0,`FIoStoreTocResourceStorage::GetAllocatedSize'::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_const_&> @ 14179b420

long64 __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_FIoStoreTocResourceStorage::GetAllocatedSize_::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_const_&>
          (<lambda_1> *param_1,
          TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
          *param_2)

{
  return 0;
}

// VisitApplyEncoded<0,0,`FIoStoreTocResourceStorage::ReleaseOwnershipOfLastBlock'::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&> @ 14179b430

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_FIoStoreTocResourceStorage::ReleaseOwnershipOfLastBlock_::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&>
          (<lambda_1> *param_1,
          TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
          *param_2)

{
  return;
}

// VisitApplyEncoded<0,0,`FIoStoreTocResourceStorage::ChopBytes'::__l2::<lambda_1>,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&> @ 14179b440

TArrayView<unsigned_char_const_,int> * __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_FIoStoreTocResourceStorage::ChopBytes_::__l2::<lambda_1>,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&>
          (TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,<lambda_1> *param_1,
          TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
          *param_2)

{
  __return_storage_ptr__->DataPtr = (uchar *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// VisitImpl<`FIoStoreTocResourceStorage::ChopBytes'::__l2::<lambda_1>,0,1,2,0,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&> @ 14179b460

TArrayView<unsigned_char_const_,int> * __cdecl
UE::Core::Private::
VisitImpl<_FIoStoreTocResourceStorage::ChopBytes_::__l2::<lambda_1>,0,1,2,0,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&>
          (TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,ulong64 param_1,
          <lambda_1> *param_2,TIntegerSequence<unsigned___int64,0,1,2> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
          *param_5)

{
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64>(unsigned___int64,`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64)'
    ::__l2::Invokers[param_1])(__return_storage_ptr__,param_2,param_5);
  return __return_storage_ptr__;
}

// WriteArray<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14179b490

bool __cdecl
WriteArray<TArray<int,TSizedDefaultAllocator<32>_>_>
          (IFileHandle *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014179b49e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*param_1 + 0x30))
                    (param_1,(param_2->AllocatorInstance).Data,param_2->ArrayNum << 2);
  return (bool)uVar1;
}

// WriteArray<TArray<FIoOffsetAndLength,TSizedDefaultAllocator<32>_>_> @ 14179b4b0

bool __cdecl
WriteArray<TArray<FIoOffsetAndLength,TSizedDefaultAllocator<32>_>_>
          (IFileHandle *param_1,TArray<FIoOffsetAndLength,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014179b4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*param_1 + 0x30))
                    (param_1,(param_2->AllocatorInstance).Data,param_2->ArrayNum * 10);
  return (bool)uVar1;
}

// WriteArray<TArray<FIoStoreTocCompressedBlockEntry,TSizedDefaultAllocator<32>_>_> @ 14179b4d0

bool __cdecl
WriteArray<TArray<FIoStoreTocCompressedBlockEntry,TSizedDefaultAllocator<32>_>_>
          (IFileHandle *param_1,
          TArray<FIoStoreTocCompressedBlockEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014179b4e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*param_1 + 0x30))
                    (param_1,(param_2->AllocatorInstance).Data,param_2->ArrayNum * 0xc);
  return (bool)uVar1;
}

// WriteArray<TArray<FIoStoreTocEntryMeta,TSizedDefaultAllocator<32>_>_> @ 14179b4f0

bool __cdecl
WriteArray<TArray<FIoStoreTocEntryMeta,TSizedDefaultAllocator<32>_>_>
          (IFileHandle *param_1,TArray<FIoStoreTocEntryMeta,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014179b501. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*param_1 + 0x30))
                    (param_1,(param_2->AllocatorInstance).Data,param_2->ArrayNum * 0x18);
  return (bool)uVar1;
}

// WriteArray<TArray<FIoChunkId,TSizedDefaultAllocator<32>_>_> @ 14179b510

bool __cdecl
WriteArray<TArray<FIoChunkId,TSizedDefaultAllocator<32>_>_>
          (IFileHandle *param_1,TArray<FIoChunkId,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014179b521. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*param_1 + 0x30))
                    (param_1,(param_2->AllocatorInstance).Data,param_2->ArrayNum * 0xc);
  return (bool)uVar1;
}

// WriteArray<TArray<FSHAHash,TSizedDefaultAllocator<32>_>_> @ 14179b530

bool __cdecl
WriteArray<TArray<FSHAHash,TSizedDefaultAllocator<32>_>_>
          (IFileHandle *param_1,TArray<FSHAHash,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014179b541. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*param_1 + 0x30))
                    (param_1,(param_2->AllocatorInstance).Data,param_2->ArrayNum * 0x14);
  return (bool)uVar1;
}

// WriteToString<32,TStringView<char8_t>_&> @ 14179b550

TStringBuilderWithBuffer<wchar_t,32> * __cdecl
WriteToString<32,TStringView<char8_t>_&>
          (TStringBuilderWithBuffer<wchar_t,32> *__return_storage_ptr__,
          TStringView<char8_t> *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  TStringBuilderBase<wchar_t>::Append<char8_t,0>
            ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,param_1->DataPtr,
             (int)*(undefined8 *)&param_1->Size);
  return __return_storage_ptr__;
}

// WriteToString<32,TStringView<char8_t>_> @ 14179b590

TStringBuilderWithBuffer<wchar_t,32> * __cdecl
WriteToString<32,TStringView<char8_t>_>
          (TStringBuilderWithBuffer<wchar_t,32> *__return_storage_ptr__,
          TStringView<char8_t> *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  TStringBuilderBase<wchar_t>::Append<char8_t,0>
            ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,param_1->DataPtr,
             (int)*(undefined8 *)&param_1->Size);
  return __return_storage_ptr__;
}

// WriteToString<32,TStringView<wchar_t>_> @ 14179b5d0

TStringBuilderWithBuffer<wchar_t,32> * __cdecl
WriteToString<32,TStringView<wchar_t>_>
          (TStringBuilderWithBuffer<wchar_t,32> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,param_1->DataPtr,
             (int)*(undefined8 *)&param_1->Size);
  return __return_storage_ptr__;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::FLogTemplate_*>_> @ 14179b610

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<UE::FLogTemplate_*>_>
          (_Atomic_padded<UE::FLogTemplate_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::FLogTemplate_*>_> @ 14179b620

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<UE::FLogTemplate_*>_>
          (_Atomic_padded<UE::FLogTemplate_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,UE::FLogTemplate_*> @ 14179b630

long64 __cdecl std::_Atomic_reinterpret_as<__int64,UE::FLogTemplate_*>(FLogTemplate **param_1)

{
  return (long64)*param_1;
}

// ~TFunction_OwnedObject<`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_1>,0,0> @ 1417a5e40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FUnitExpressionParser::FUnitExpressionParser_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_4>_>'::__l3::<lambda_1>,0,0> @ 1417a5e60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_4>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<double,double,void,_FBasicMathExpressionEvaluator::MapArithmeticOperators_::__l2::<lambda_4>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_4>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_5>_>'::__l3::<lambda_1>,0,0> @ 1417a5e80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_5>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<double,double,void,_FBasicMathExpressionEvaluator::MapArithmeticOperators_::__l2::<lambda_5>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_5>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_6>_>'::__l3::<lambda_1>,0,0> @ 1417a5ea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_6>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<double,double,void,_FBasicMathExpressionEvaluator::MapArithmeticOperators_::__l2::<lambda_6>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_6>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_7>_>'::__l3::<lambda_1>,0,0> @ 1417a5ec0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_7>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<double,double,void,_FBasicMathExpressionEvaluator::MapArithmeticOperators_::__l2::<lambda_7>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_7>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_8>_>'::__l3::<lambda_1>,0,0> @ 1417a5ee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_8>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<double,double,void,_FBasicMathExpressionEvaluator::MapArithmeticOperators_::__l2::<lambda_8>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_8>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_9>_>'::__l3::<lambda_1>,0,0> @ 1417a5f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_9>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<double,double,void,_FBasicMathExpressionEvaluator::MapArithmeticOperators_::__l2::<lambda_9>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_9>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,0,0> @ 1417a5f20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,_FUnitExpressionParser::FUnitExpressionParser_::__l2::<lambda_4>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_U__FNumericUnit_N__U1_XV<lambda_4>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_4>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,0,0> @ 1417a5f40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,_FUnitExpressionParser::FUnitExpressionParser_::__l2::<lambda_5>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_U__FNumericUnit_N__U1_XV<lambda_5>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_5>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_6>_>'::__l3::<lambda_1>,0,0> @ 1417a5f60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_6>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,_FUnitExpressionParser::FUnitExpressionParser_::__l2::<lambda_6>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_U__FNumericUnit_N__U1_XV<lambda_6>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_6>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_7>_>'::__l3::<lambda_1>,0,0> @ 1417a5f80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_7>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,_FUnitExpressionParser::FUnitExpressionParser_::__l2::<lambda_7>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_U__FNumericUnit_N__U1_XV<lambda_7>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_7>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_1>_>'::__l3::<lambda_1>,0,0> @ 1417a5fa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_1>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapUnaryFunction<double,void,_FBasicMathExpressionEvaluator::MapArithmeticOperators_::__l2::<lambda_1>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_1>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_2>_>'::__l3::<lambda_1>,0,0> @ 1417a5fc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_2>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapUnaryFunction<double,void,_FBasicMathExpressionEvaluator::MapArithmeticOperators_::__l2::<lambda_2>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_2>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_3>_>'::__l3::<lambda_1>,0,0> @ 1417a5fe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_3>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapUnaryFunction<double,void,_FBasicMathExpressionEvaluator::MapArithmeticOperators_::__l2::<lambda_3>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_3>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapUnaryFunction<FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,0,0> @ 1417a6000

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapUnaryFunction<FNumericUnit<double>,void,_FUnitExpressionParser::FUnitExpressionParser_::__l2::<lambda_2>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_U__FNumericUnit_N__XV<lambda_2>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_2>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapUnaryFunction<FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,0,0> @ 1417a6020

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapUnaryFunction<FNumericUnit<double>,void,_FUnitExpressionParser::FUnitExpressionParser_::__l2::<lambda_3>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_U__FNumericUnit_N__XV<lambda_3>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_3>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// operator<< @ 1417a83b0

FArchive * __cdecl operator<<(FArchive *param_1,float *param_2)

{
  float *pfVar1;
  
  pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar1 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *param_2 = *pfVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
  return param_1;
}

// operator<< @ 1417a8420

FArchive * __cdecl operator<<(FArchive *param_1,double *param_2)

{
  double *pdVar1;
  
  pdVar1 = (double *)**(longlong **)&param_1->field_0x8;
  if (pdVar1 + 1 <= (double *)(*(longlong **)&param_1->field_0x8)[1]) {
    *param_2 = *pdVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
  return param_1;
}

// operator<< @ 1417a8490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl operator<<(FArchive *param_1,FPackageId *param_2)

{
  FArchive *this;
  ulong64 *puVar1;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar2;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar2 = FStructuredArchiveFromArchive::GetSlot(this_00);
  this = *(FArchive **)(**(longlong **)FVar2 + 8);
  puVar1 = (ulong64 *)**(longlong **)&this->field_0x8;
  if ((ulong64 *)(*(longlong **)&this->field_0x8)[1] < puVar1 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,&param_2->Id);
    }
  }
  else {
    param_2->Id = *puVar1;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 8;
  }
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return param_1;
}

// operator<< @ 1417a8560

void __cdecl operator<<(FStructuredArchiveSlot param_1,FPackageId *param_2)

{
  FArchive *this;
  ulong64 *puVar1;
  
  this = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar1 = (ulong64 *)**(longlong **)&this->field_0x8;
  if (puVar1 + 1 <= (ulong64 *)(*(longlong **)&this->field_0x8)[1]) {
    param_2->Id = *puVar1;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 8;
    return;
  }
  if ((this->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001417a859a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x188))(this,param_2,8);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this,&param_2->Id);
  return;
}

// operator== @ 1417aa000

bool __cdecl operator==(FOperatorFunctionID *param_1,FOperatorFunctionID *param_2)

{
  if ((((((param_1->OperatorType).D == (param_2->OperatorType).D &&
         (param_1->OperatorType).C == (param_2->OperatorType).C) &&
        (param_1->OperatorType).B == (param_2->OperatorType).B) &&
        (param_1->OperatorType).A == (param_2->OperatorType).A) &&
      ((((param_1->LeftOperandType).D == (param_2->LeftOperandType).D &&
        (param_1->LeftOperandType).C == (param_2->LeftOperandType).C) &&
       (param_1->LeftOperandType).B == (param_2->LeftOperandType).B) &&
       (param_1->LeftOperandType).A == (param_2->LeftOperandType).A)) &&
     ((((param_1->RightOperandType).D == (param_2->RightOperandType).D &&
       (param_1->RightOperandType).C == (param_2->RightOperandType).C) &&
      (param_1->RightOperandType).B == (param_2->RightOperandType).B) &&
      (param_1->RightOperandType).A == (param_2->RightOperandType).A)) {
    return true;
  }
  return false;
}

// operator() @ 1417ac9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_8>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,void *param_3)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  uchar *puVar5;
  FText *pFVar6;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  FText local_80;
  undefined1 local_68 [24];
  double local_50;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  puVar4 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar4 = (uchar *)0x0;
  }
  puVar5 = param_1->InlineBytes + 8;
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar5 = (uchar *)0x0;
  }
  if (*(double *)puVar4 == 0.0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_80,L"BasicMathExpressionEvaluator",L"DivisionByZero",
                        L"Division by zero");
    pIVar1 = (pFVar6->TextData).Reference;
    local_68._0_8_ = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_88);
    }
    local_68._8_4_ = pFVar6->Flags;
    local_28 = 1;
    if (local_80.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
    }
  }
  else {
    local_68._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.B;
    local_68._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.A;
    local_68._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.C;
    local_68._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.D;
    local_28 = 0;
    local_50 = *(double *)puVar5 / *(double *)puVar4;
    local_68._16_8_ = &___7__FInlineDataStorage_N_Impl__6B_;
  }
  ::Impl::ForwardReturnType
            (__return_storage_ptr__,(TValueOrError<FExpressionNode,FExpressionError> *)local_68);
  uVar8 = (ulonglong)local_28;
  if (2 < local_28) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar2)();
      return pTVar7;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] ==
      UE::Core::Private::TDestructorCaller<FExpressionNode>::Destruct) {
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_68);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])();
  }
  return __return_storage_ptr__;
}

// operator() @ 1417acb90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_9>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,void *param_3)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  FText *pFVar5;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar6;
  uchar *puVar7;
  ulonglong uVar8;
  float fVar9;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  FText local_90;
  undefined1 local_78 [24];
  double local_60;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  puVar7 = param_1->InlineBytes + 8;
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar7 = (uchar *)0x0;
  }
  puVar4 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A != (param_2->TypeId).A) {
    puVar4 = (uchar *)0x0;
  }
  if (*(double *)puVar4 == 0.0) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_90,L"BasicMathExpressionEvaluator",L"ModZero",L"Modulo zero");
    pIVar1 = (pFVar5->TextData).Reference;
    local_78._0_8_ = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_98);
    }
    local_78._8_4_ = pFVar5->Flags;
    local_38 = 1;
    if (local_90.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
    }
  }
  else {
    fVar9 = FGenericPlatformMath::Fmod((float)*(double *)puVar7,(float)*(double *)puVar4);
    local_78._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.B;
    local_78._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.A;
    local_78._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.C;
    local_78._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.D;
    local_38 = 0;
    local_78._16_8_ = &___7__FInlineDataStorage_N_Impl__6B_;
    local_60 = (double)fVar9;
  }
  ::Impl::ForwardReturnType
            (__return_storage_ptr__,(TValueOrError<FExpressionNode,FExpressionError> *)local_78);
  uVar8 = (ulonglong)local_38;
  if (2 < local_38) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar2)();
      return pTVar6;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] ==
      UE::Core::Private::TDestructorCaller<FExpressionNode>::Destruct) {
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_78);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])();
  }
  return __return_storage_ptr__;
}

// operator() @ 1417acd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_4>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar3;
  FNumericUnit<double> *pFVar4;
  FNumericUnit<double> *pFVar5;
  undefined1 auStack_a8 [32];
  TValueOrError<FExpressionNode,FExpressionError> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar5 = (FNumericUnit<double> *)(param_2->InlineBytes + 8);
  pFVar4 = (FNumericUnit<double> *)(param_1->InlineBytes + 8);
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar5 = (FNumericUnit<double> *)0x0;
  }
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.B) ||
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.A != (param_1->TypeId).A) {
    pFVar4 = (FNumericUnit<double> *)0x0;
  }
  pTVar3 = `FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_4>::operator()
                     (this,&local_88,pFVar4,pFVar5);
  ::Impl::ForwardReturnType(__return_storage_ptr__,pTVar3);
  if (2 < local_88.Variant.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_88.Variant.TypeIndex])(&local_88);
  return __return_storage_ptr__;
}

// operator() @ 1417ace60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_5>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar3;
  FNumericUnit<double> *pFVar4;
  FNumericUnit<double> *pFVar5;
  undefined1 auStack_a8 [32];
  TValueOrError<FExpressionNode,FExpressionError> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar5 = (FNumericUnit<double> *)(param_2->InlineBytes + 8);
  pFVar4 = (FNumericUnit<double> *)(param_1->InlineBytes + 8);
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar5 = (FNumericUnit<double> *)0x0;
  }
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.B) ||
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.A != (param_1->TypeId).A) {
    pFVar4 = (FNumericUnit<double> *)0x0;
  }
  pTVar3 = `FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_5>::operator()
                     (this,&local_88,pFVar4,pFVar5);
  ::Impl::ForwardReturnType(__return_storage_ptr__,pTVar3);
  if (2 < local_88.Variant.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_88.Variant.TypeIndex])(&local_88);
  return __return_storage_ptr__;
}

// operator() @ 1417acf70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_6>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,void *param_3)

{
  ITextData *pIVar1;
  uchar uVar2;
  FText *pFVar3;
  uchar *puVar4;
  uchar *puVar5;
  bool bVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  FText local_80;
  undefined1 local_68 [16];
  undefined **local_58;
  double local_50;
  uchar local_48;
  uchar local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  puVar4 = param_1->InlineBytes + 8;
  puVar5 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar5 = (uchar *)0x0;
  }
  uVar2 = puVar5[8];
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar4 = (uchar *)0x0;
  }
  if ((puVar4[8] == 'L') || (bVar6 = uVar2 == 'L', uVar2 = puVar4[8], bVar6)) {
    local_68._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
         ::__l2::Global.B;
    local_68._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
         ::__l2::Global.A;
    local_68._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
         ::__l2::Global.C;
    local_68._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
         ::__l2::Global.D;
    local_58 = &___7__FInlineDataStorage_U__FNumericUnit_N___Impl__6B_;
    local_50 = *(double *)puVar4 * *(double *)puVar5;
    local_28 = '\0';
    local_48 = uVar2;
  }
  else {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_80,L"UnitConversion",L"InvalidMultiplication",
                        L"Cannot multiply by numbers with units");
    pIVar1 = (pFVar3->TextData).Reference;
    local_68._0_8_ = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_88);
    }
    local_68._8_4_ = pFVar3->Flags;
    local_28 = '\x01';
    if (local_80.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
    }
  }
  ::Impl::ForwardReturnType
            (__return_storage_ptr__,(TValueOrError<FExpressionNode,FExpressionError> *)local_68);
  TVariant<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<FExpressionNode,FExpressionError>::FEmptyType>
  ::
  ~TVariant<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<FExpressionNode,FExpressionError>::FEmptyType>
            ((TVariant<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<FExpressionNode,FExpressionError>::FEmptyType>
              *)local_68);
  return __return_storage_ptr__;
}

// operator() @ 1417ad0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_7>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,void *param_3)

{
  ITextData *pIVar1;
  FText *pFVar2;
  uchar *puVar3;
  wchar_t *pwVar4;
  uchar *puVar5;
  wchar_t *pwVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  FText local_80;
  undefined1 local_68 [16];
  undefined **local_58;
  double local_50;
  uchar local_48;
  uchar local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  puVar3 = param_1->InlineBytes + 8;
  puVar5 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar5 = (uchar *)0x0;
  }
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar3 = (uchar *)0x0;
  }
  if (puVar5[8] == 'L') {
    if (*(double *)puVar5 != 0.0) {
      local_68._4_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
           ::__l2::Global.B;
      local_68._0_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
           ::__l2::Global.A;
      local_68._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
           ::__l2::Global.C;
      local_68._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
           ::__l2::Global.D;
      local_48 = puVar3[8];
      local_58 = &___7__FInlineDataStorage_U__FNumericUnit_N___Impl__6B_;
      local_50 = *(double *)puVar3 / *(double *)puVar5;
      local_28 = '\0';
      goto LAB_1417ad23d;
    }
    pwVar6 = L"DivideByZero";
    pwVar4 = L"DivideByZero";
  }
  else {
    pwVar6 = L"Cannot divide by numbers with units";
    pwVar4 = L"InvalidDivision";
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText(&local_80,L"UnitConversion",pwVar4,pwVar6);
  pIVar1 = (pFVar2->TextData).Reference;
  local_68._0_8_ = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_88);
  }
  local_68._8_4_ = pFVar2->Flags;
  local_28 = '\x01';
  if (local_80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
  }
LAB_1417ad23d:
  ::Impl::ForwardReturnType
            (__return_storage_ptr__,(TValueOrError<FExpressionNode,FExpressionError> *)local_68);
  TValueOrError<FExpressionNode,FExpressionError>::~TValueOrError<FExpressionNode,FExpressionError>
            ((TValueOrError<FExpressionNode,FExpressionError> *)local_68);
  return __return_storage_ptr__;
}

// operator() @ 1417ad290

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
``FIoStoreReaderImpl::ReadAsync'::__l2::<lambda_3>::operator()'::__l5::<lambda_1>::operator()
          (void *this)

{
  longlong *plVar1;
  longlong lVar2;
  FName FVar3;
  longlong lVar4;
  uchar *puVar5;
  BufCore *pBVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  bool bVar10;
  FIoStoreTocCompressedBlockEntry *pFVar11;
  FIoBuffer *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  uchar *puVar15;
  ulonglong uVar16;
  void *_Dst;
  uint uVar17;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_38;
  
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0x38) != '\0') {
    plVar1 = *(longlong **)((longlong)this + 8);
    puVar15 = (uchar *)(*(longlong *)((longlong)this + 0x18) + *plVar1);
    if (((char)plVar1[6] == '\0') &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar2 = *(longlong *)this;
    _Dst = (void *)(*(longlong *)((longlong)this + 0x20) + *(longlong *)plVar1[5]);
    pFVar11 = TArrayView<FIoStoreTocCompressedBlockEntry_const_,int>::operator[]
                        ((TArrayView<FIoStoreTocCompressedBlockEntry_const_,int> *)(lVar2 + 0xd0),
                         *(int *)((longlong)this + 0x10));
    uVar17 = *(uint *)(pFVar11->Data + 8) & 0xffffff;
    uVar13 = *(uint *)(pFVar11->Data + 8) >> 0x18;
    uVar16 = (ulonglong)((*(uint *)(pFVar11->Data + 4) >> 8) + 0xf & 0xfffffff0);
    if ((*(int *)(lVar2 + 0xe8) <= (int)uVar13) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar3 = *(FName *)(*(longlong *)(lVar2 + 0xe0) + (ulonglong)uVar13 * 8);
    if ((*(byte *)(lVar2 + 0x50) & 2) != 0) {
      bVar9 = -1 < CpuChannel->Enabled;
      if (bVar9) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`public:___cdecl_`public:___cdecl_`public:_class_UE::Tasks::TTask<TIoStatusOr<FIoBuffer>_>___cdecl_FIoStoreReaderImpl::ReadAsync(FIoChunkId_const&___ptr64,FIoReadOptions_const&___ptr64)const___ptr64'::`2'::<lambda_3>::operator()(void)const___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l8::__CpuProfilerEventSpecId592,"Decrypt",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
                   ,0x250);
        FCpuProfilerTrace::OutputBeginEvent
                  (`public:___cdecl_`public:___cdecl_`public:_class_UE::Tasks::TTask<TIoStatusOr<FIoBuffer>_>___cdecl_FIoStoreReaderImpl::ReadAsync(FIoChunkId_const&___ptr64,FIoReadOptions_const&___ptr64)const___ptr64'::`2'::<lambda_3>::operator()(void)const___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                   ::__l8::__CpuProfilerEventSpecId592);
      }
      if (((uchar *)((*(longlong **)((longlong)this + 8))[3] + **(longlong **)((longlong)this + 8))
           < puVar15 + uVar16) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("CompressedSource + RawSize <= State->CompressedBuffer.GetData() + State->CompressedSize"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
                              ,0x251,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FAES::DecryptData(puVar15,uVar16,(FAESKey *)(*(longlong *)this + 0x278));
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    if (FVar3 == (FName)0x0) {
      lVar2 = *(longlong *)((longlong)this + 8);
      if ((*(char *)(lVar2 + 0x30) == '\0') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar4 = *(longlong *)((longlong)this + 8);
      lVar2 = **(longlong **)(lVar2 + 0x28);
      if ((*(char *)(lVar4 + 0x30) == '\0') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar4 = *(longlong *)(lVar4 + 0x28);
      if (((ulonglong)CONCAT14(*(undefined1 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 8)) + lVar2 <
           ((ulonglong)uVar17 - *(longlong *)((longlong)this + 0x28)) + (longlong)_Dst) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("UncompressedDestination + UncompressedSize - OffsetInBlock <= State->UncompressedBuffer->Data() + State->UncompressedBuffer->DataSize()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
                             ,0x256,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      memcpy(_Dst,puVar15 + *(longlong *)((longlong)this + 0x28),
             (ulonglong)uVar17 - *(longlong *)((longlong)this + 0x28));
    }
    else {
      if ((*(longlong *)((longlong)this + 0x28) == 0) &&
         ((ulonglong)uVar17 <= *(ulonglong *)((longlong)this + 0x30))) {
        pFVar12 = TOptional<FIoBuffer>::operator->
                            ((TOptional<FIoBuffer> *)(*(longlong *)((longlong)this + 8) + 0x28));
        puVar5 = ((pFVar12->CorePtr).Reference)->DataPtr;
        pFVar12 = TOptional<FIoBuffer>::operator->
                            ((TOptional<FIoBuffer> *)(*(longlong *)((longlong)this + 8) + 0x28));
        pBVar6 = (pFVar12->CorePtr).Reference;
        if ((puVar5 + CONCAT14(pBVar6->DataSizeHigh,pBVar6->DataSizeLow) <
             (uchar *)((longlong)_Dst + (ulonglong)uVar17)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("UncompressedDestination + UncompressedSize <= State->UncompressedBuffer->Data() + State->UncompressedBuffer->DataSize()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
                               ,0x266,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        bVar9 = FCompression::UncompressMemory
                          (FVar3,_Dst,(ulonglong)uVar17,puVar15,
                           (ulonglong)(*(uint *)(pFVar11->Data + 4) >> 8),COMPRESS_NoFlags,0);
      }
      else {
        local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.ArrayNum = 0;
        local_38.ArrayMax = 0;
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&local_38,uVar17,Default);
        bVar9 = FCompression::UncompressMemory
                          (FVar3,local_38.AllocatorInstance.Data,(ulonglong)uVar17,puVar15,
                           (ulonglong)(*(uint *)(pFVar11->Data + 4) >> 8),COMPRESS_NoFlags,0);
        FVar8.Data = local_38.AllocatorInstance.Data;
        uVar14 = (ulonglong)uVar17 - *(longlong *)((longlong)this + 0x28);
        uVar16 = *(ulonglong *)((longlong)this + 0x30);
        if (uVar14 < *(ulonglong *)((longlong)this + 0x30)) {
          uVar16 = uVar14;
        }
        memcpy(_Dst,local_38.AllocatorInstance.Data + *(longlong *)((longlong)this + 0x28),uVar16);
        if (FVar8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar8.Data);
        }
      }
      if (bVar9 == false) {
        LOCK();
        *(undefined1 *)(*(longlong *)((longlong)this + 8) + 0x39) = 1;
        UNLOCK();
      }
    }
  }
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1417b0588

/* [thunk]:public: virtual void * __ptr64 __cdecl FLogSuppressionImplementation::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FLogSuppressionImplementation::_vector_deleting_destructor__adjustor_8__
          (FLogSuppressionImplementation *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FLogSuppressionImplementation *)&this[-1].bInitialized,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1417b05a0

void * __thiscall
Impl::FInlineDataStorage<double>::_scalar_deleting_destructor_
          (FInlineDataStorage<double> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b05d0

void * __thiscall
Impl::FInlineDataStorage<FNumericUnit<double>_>::_scalar_deleting_destructor_
          (FInlineDataStorage<FNumericUnit<double>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0600

void * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FForwardSlash>::_scalar_deleting_destructor_
          (FInlineDataStorage<ExpressionParser::FForwardSlash> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0630

void * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FForwardSlashEquals>::_scalar_deleting_destructor_
          (FInlineDataStorage<ExpressionParser::FForwardSlashEquals> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0660

void * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FMinus>::_scalar_deleting_destructor_
          (FInlineDataStorage<ExpressionParser::FMinus> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0690

void * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FMinusEquals>::_scalar_deleting_destructor_
          (FInlineDataStorage<ExpressionParser::FMinusEquals> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b06c0

void * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FPercent>::_scalar_deleting_destructor_
          (FInlineDataStorage<ExpressionParser::FPercent> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b06f0

void * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FPlus>::_scalar_deleting_destructor_
          (FInlineDataStorage<ExpressionParser::FPlus> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0720

void * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FPlusEquals>::_scalar_deleting_destructor_
          (FInlineDataStorage<ExpressionParser::FPlusEquals> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0750

void * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FPower>::_scalar_deleting_destructor_
          (FInlineDataStorage<ExpressionParser::FPower> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0780

void * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FSquareRoot>::_scalar_deleting_destructor_
          (FInlineDataStorage<ExpressionParser::FSquareRoot> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b07b0

void * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FStar>::_scalar_deleting_destructor_
          (FInlineDataStorage<ExpressionParser::FStar> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b07e0

void * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FStarEquals>::_scalar_deleting_destructor_
          (FInlineDataStorage<ExpressionParser::FStarEquals> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0810

void * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FSubExpressionEnd>::_scalar_deleting_destructor_
          (FInlineDataStorage<ExpressionParser::FSubExpressionEnd> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0840

void * __thiscall
Impl::FInlineDataStorage<ExpressionParser::FSubExpressionStart>::_scalar_deleting_destructor_
          (FInlineDataStorage<ExpressionParser::FSubExpressionStart> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0870

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b08a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b08d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy,`FLogSuppressionImplementation::ProcessConfigAndCommandLine'::__l35::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0900

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0930

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::Initialize'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0960

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0990

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b09c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b09f0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
           *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0a40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
           *this,uint param_1)

{
  if (*(void **)&this->Payload != (void *)0x0) {
    FMemory::Free(*(void **)&this->Payload);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0a90

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0ac0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::FIoDispatcherChunkBlockDecoder::LaunchDecodeTask'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x180,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0b20

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FIoStoreReaderImpl::StartAsyncRead'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0b80

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``FIoStoreReaderImpl::ReadAsync'::__l2::<lambda_3>::operator()'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0be0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FIoStoreReaderImpl::ReadAsync'::__l5::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined ***)this = &___7__TTaskWithResult_V__TIoStatusOr_VFIoBuffer_____Private_Tasks_UE__6B_;
  TIoStatusOr<FIoBuffer>::Reset((TIoStatusOr<FIoBuffer> *)((longlong)this + 0xd8));
  if (*(longlong *)((longlong)this + 0xd8) != 0) {
    piVar2 = (int *)(*(longlong *)((longlong)this + 0xd8) + -8);
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(piVar2);
    }
  }
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0c90

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FIoStoreReaderImpl::ReadAsync'::__l8::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined ***)this = &___7__TTaskWithResult_V__TIoStatusOr_VFIoBuffer_____Private_Tasks_UE__6B_;
  TIoStatusOr<FIoBuffer>::Reset((TIoStatusOr<FIoBuffer> *)((longlong)this + 0xd8));
  if (*(longlong *)((longlong)this + 0xd8) != 0) {
    piVar2 = (int *)(*(longlong *)((longlong)this + 0xd8) + -8);
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(piVar2);
    }
  }
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0d40

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FIoStoreReaderImpl::ReadAsync'::__l2::<lambda_3>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined ***)this = &___7__TTaskWithResult_V__TIoStatusOr_VFIoBuffer_____Private_Tasks_UE__6B_;
  TIoStatusOr<FIoBuffer>::Reset((TIoStatusOr<FIoBuffer> *)((longlong)this + 0xd8));
  if (*(longlong *)((longlong)this + 0xd8) != 0) {
    piVar2 = (int *)(*(longlong *)((longlong)this + 0xd8) + -8);
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(piVar2);
    }
  }
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0df0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::FIoDispatcherChunkBlockDecoder::LaunchDecodeTask'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0e30

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FIoStoreReaderImpl::StartAsyncRead'::__l2::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0e70

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``FIoStoreReaderImpl::ReadAsync'::__l2::<lambda_3>::operator()'::__l5::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0eb0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FIoStoreReaderImpl::ReadAsync'::__l5::<lambda_1>,TIoStatusOr<FIoBuffer>,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined ***)this = &___7__TTaskWithResult_V__TIoStatusOr_VFIoBuffer_____Private_Tasks_UE__6B_;
  TIoStatusOr<FIoBuffer>::Reset((TIoStatusOr<FIoBuffer> *)((longlong)this + 0xd8));
  if (*(longlong *)((longlong)this + 0xd8) != 0) {
    piVar2 = (int *)(*(longlong *)((longlong)this + 0xd8) + -8);
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(piVar2);
    }
  }
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0f40

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FIoStoreReaderImpl::ReadAsync'::__l8::<lambda_2>,TIoStatusOr<FIoBuffer>,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined ***)this = &___7__TTaskWithResult_V__TIoStatusOr_VFIoBuffer_____Private_Tasks_UE__6B_;
  TIoStatusOr<FIoBuffer>::Reset((TIoStatusOr<FIoBuffer> *)((longlong)this + 0xd8));
  if (*(longlong *)((longlong)this + 0xd8) != 0) {
    piVar2 = (int *)(*(longlong *)((longlong)this + 0xd8) + -8);
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(piVar2);
    }
  }
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b0fd0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FIoStoreReaderImpl::ReadAsync'::__l2::<lambda_3>,TIoStatusOr<FIoBuffer>,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined ***)this = &___7__TTaskWithResult_V__TIoStatusOr_VFIoBuffer_____Private_Tasks_UE__6B_;
  TIoStatusOr<FIoBuffer>::Reset((TIoStatusOr<FIoBuffer> *)((longlong)this + 0xd8));
  if (*(longlong *)((longlong)this + 0xd8) != 0) {
    piVar2 = (int *)(*(longlong *)((longlong)this + 0xd8) + -8);
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(piVar2);
    }
  }
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b10a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b10e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_4>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_4>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_5>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_5>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_6>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_6>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b11a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_7>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_7>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b11e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_8>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_8>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_9>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_9>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_U__FNumericUnit_N__U1_XV<lambda_4>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_4>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b12a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_U__FNumericUnit_N__U1_XV<lambda_5>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_5>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b12e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_6>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_U__FNumericUnit_N__U1_XV<lambda_6>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_6>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_7>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_U__FNumericUnit_N__U1_XV<lambda_7>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_7>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_1>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_1>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b13a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_2>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_2>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b13e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_3>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_3>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_U__FNumericUnit_N__XV<lambda_2>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_2>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_U__FNumericUnit_N__XV<lambda_3>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_3>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b14a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FIoDispatcherBackendContext,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FIoDispatcherBackendContext,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b14e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FActionToken,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FActionToken,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1520

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FActorToken,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FActorToken,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1560

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAssetNameToken,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FAssetNameToken,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b15a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDocumentationToken,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FDocumentationToken,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b15e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDynamicTextToken,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FDynamicTextToken,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1620

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FFixToken,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FFixToken,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1660

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FImageToken,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FImageToken,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b16a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSeverityToken,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FSeverityToken,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b16e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTextToken,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FTextToken,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1720

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTokenizedMessage,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FTokenizedMessage,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1760

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTutorialToken,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FTutorialToken,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b17a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FURLToken,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FURLToken,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b17e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FBasicMessageLog,SharedPointerInternals::DefaultDeleter<FBasicMessageLog>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FBasicMessageLog,SharedPointerInternals::DefaultDeleter<FBasicMessageLog>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1820

void * __thiscall
UE::Tasks::Private::TTaskWithResult<TIoStatusOr<FIoBuffer>_>::_scalar_deleting_destructor_
          (TTaskWithResult<TIoStatusOr<FIoBuffer>_> *this,uint param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  
  this->_padding_ =
       (longlong)&___7__TTaskWithResult_V__TIoStatusOr_VFIoBuffer_____Private_Tasks_UE__6B_;
  TIoStatusOr<FIoBuffer>::Reset((TIoStatusOr<FIoBuffer> *)&this->ResultStorage);
  lVar2 = *(longlong *)(this->ResultStorage).Pad;
  if (lVar2 != 0) {
    piVar3 = (int *)(lVar2 + -8);
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(piVar3);
    }
  }
  FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b18b0

void * __thiscall FActionToken::_scalar_deleting_destructor_(FActionToken *this,uint param_1)

{
  ~FActionToken(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b18f0

void * __thiscall FActorToken::_scalar_deleting_destructor_(FActorToken *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ActorPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  IMessageToken::~IMessageToken((IMessageToken *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1940

void * __thiscall FAssetNameToken::_scalar_deleting_destructor_(FAssetNameToken *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AssetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  IMessageToken::~IMessageToken((IMessageToken *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1990

void * __thiscall
FBasicMessageLog::_scalar_deleting_destructor_(FBasicMessageLog *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7IMessageLog__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1a00

void * __thiscall
FDocumentationToken::_scalar_deleting_destructor_(FDocumentationToken *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PreviewExcerptName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviewExcerptLink).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DocumentationLink).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  IMessageToken::~IMessageToken((IMessageToken *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1a70

void * __thiscall
FDynamicTextToken::_scalar_deleting_destructor_(FDynamicTextToken *this,uint param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Message).Getter);
  pvVar1 = *(void **)&(this->Message).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Message).Getter);
  pIVar2 = (this->Message).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  IMessageToken::~IMessageToken((IMessageToken *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1af0

void * __thiscall FFixToken::_scalar_deleting_destructor_(FFixToken *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Fixer).SharedReferenceCount.ReferenceController);
  IMessageToken::~IMessageToken((IMessageToken *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1b40

void * __thiscall FImageToken::_scalar_deleting_destructor_(FImageToken *this,uint param_1)

{
  IMessageToken::~IMessageToken((IMessageToken *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1b80

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void * __thiscall
UE::FIoDispatcherChunkBlockDecoder::_scalar_deleting_destructor_
          (FIoDispatcherChunkBlockDecoder *this,uint param_1)

{
  ~FIoDispatcherChunkBlockDecoder(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1bc0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void * __thiscall
FIoDispatcherImpl::_scalar_deleting_destructor_(FIoDispatcherImpl *this,uint param_1)

{
  ~FIoDispatcherImpl(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x208);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1c00

void * __thiscall
FLogSuppressionImplementation::_scalar_deleting_destructor_
          (FLogSuppressionImplementation *this,uint param_1)

{
  void *pvVar1;
  ForElementType<FLogCategoryBase_*> FVar2;
  
  *(undefined4 *)&(this->ToggleAssociations).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ToggleAssociations).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ToggleAssociations);
  *(undefined4 *)&(this->BootAssociations).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BootAssociations).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BootAssociations);
  *(undefined4 *)&(this->ReverseAssociations).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ReverseAssociations).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FLogCategoryBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FLogCategoryBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FLogCategoryBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReverseAssociations);
  FVar2 = (this->PendingAssociations).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FLogCategoryBase_*>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x918);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1cd0

void * __thiscall FSeverityToken::_scalar_deleting_destructor_(FSeverityToken *this,uint param_1)

{
  IMessageToken::~IMessageToken((IMessageToken *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1d10

void * __thiscall
UE::Tasks::Private::FTaskEventBase::_scalar_deleting_destructor_(FTaskEventBase *this,uint param_1)

{
  undefined8 *puVar1;
  undefined8 *lpTlsValue;
  
  FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      puVar1 = TlsGetValue(TaskEventBaseAllocator._0_4_);
      lpTlsValue = (undefined8 *)0x0;
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = ::operator_new(0x18);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined4 *)(puVar1 + 2) = 0;
          lpTlsValue = puVar1;
        }
        TlsSetValue(TaskEventBaseAllocator._0_4_,lpTlsValue);
        puVar1 = lpTlsValue;
      }
      if (0x12e < *(int *)(puVar1 + 2)) {
        if ((void **)*puVar1 != (void **)0x0) {
          TLockFreePointerListLIFOPad<void_*,64>::Push
                    ((TLockFreePointerListLIFOPad<void_*,64> *)&TaskEventBaseAllocator.field_0x40,
                     (void **)*puVar1);
        }
        *puVar1 = puVar1[1];
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
      }
      *(undefined8 *)this = puVar1[1];
      *(int *)(puVar1 + 2) = *(int *)(puVar1 + 2) + 1;
      puVar1[1] = this;
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1df0

void * __thiscall FTextToken::_scalar_deleting_destructor_(FTextToken *this,uint param_1)

{
  IMessageToken::~IMessageToken((IMessageToken *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1e30

void * __thiscall FTutorialToken::_scalar_deleting_destructor_(FTutorialToken *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TutorialAssetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  IMessageToken::~IMessageToken((IMessageToken *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1e80

void * __thiscall FURLToken::_scalar_deleting_destructor_(FURLToken *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->URL).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  IMessageToken::~IMessageToken((IMessageToken *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1ed0

void * __thiscall
IIoChunkBlockDecoder::_scalar_deleting_destructor_(IIoChunkBlockDecoder *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1f00

void * __thiscall IMessageLog::_scalar_deleting_destructor_(IMessageLog *this,uint param_1)

{
  *this = (IMessageLog)&___7IMessageLog__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417b1f40

void * __thiscall IMessageToken::_scalar_deleting_destructor_(IMessageToken *this,uint param_1)

{
  ~IMessageToken(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// AccelerationUnificationFactor @ 1417b1f80

double __cdecl UnitConversion::AccelerationUnificationFactor(EUnit param_1)

{
  if (param_1 != CentimetersPerSecondSquared) {
    return __real_3ff0000000000000;
  }
  return __real_3f847ae140000000;
}

// AngleUnificationFactor @ 1417b4690

double __cdecl UnitConversion::AngleUnificationFactor(EUnit param_1)

{
  if (param_1 != Radians) {
    return __real_3ff0000000000000;
  }
  return __real_404ca5dc0d03cf26;
}

// AngularSpeedUnificationFactor @ 1417b4790

double __cdecl UnitConversion::AngularSpeedUnificationFactor(EUnit param_1)

{
  if (param_1 != RadiansPerSecond) {
    return __real_3ff0000000000000;
  }
  return __real_404ca5dc1a63c1f8;
}

// CheckMatrixPrecision @ 1417b7c60

TMatrix<double> * __cdecl
CheckMatrixPrecision(TMatrix<double> *__return_storage_ptr__,TMatrix<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  dVar1 = param_1->M[3][0];
  uVar5 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_413fffff00000000 <= (double)CONCAT44(uVar6,uVar5) &&
        (double)CONCAT44(uVar6,uVar5) != __real_413fffff00000000) ||
      (dVar1 = param_1->M[3][1],
      uVar5 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_413fffff00000000 <= (double)CONCAT44(uVar6,uVar5) &&
      (double)CONCAT44(uVar6,uVar5) != __real_413fffff00000000)) ||
     (dVar1 = param_1->M[3][2],
     uVar5 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_413fffff00000000 <= (double)CONCAT44(uVar6,uVar5) &&
     (double)CONCAT44(uVar6,uVar5) != __real_413fffff00000000)) {
    `CheckMatrixPrecision'::__l2::<lambda_1>::operator()(local_res8);
  }
  dVar1 = param_1->M[0][1];
  dVar2 = param_1->M[0][2];
  dVar3 = param_1->M[0][3];
  __return_storage_ptr__->M[0][0] = param_1->M[0][0];
  __return_storage_ptr__->M[0][1] = dVar1;
  dVar1 = param_1->M[1][0];
  dVar4 = param_1->M[1][1];
  __return_storage_ptr__->M[0][2] = dVar2;
  __return_storage_ptr__->M[0][3] = dVar3;
  dVar2 = param_1->M[1][2];
  dVar3 = param_1->M[1][3];
  __return_storage_ptr__->M[1][0] = dVar1;
  __return_storage_ptr__->M[1][1] = dVar4;
  dVar1 = param_1->M[2][0];
  dVar4 = param_1->M[2][1];
  __return_storage_ptr__->M[1][2] = dVar2;
  __return_storage_ptr__->M[1][3] = dVar3;
  dVar2 = param_1->M[2][2];
  dVar3 = param_1->M[2][3];
  __return_storage_ptr__->M[2][0] = dVar1;
  __return_storage_ptr__->M[2][1] = dVar4;
  dVar1 = param_1->M[3][0];
  dVar4 = param_1->M[3][1];
  __return_storage_ptr__->M[2][2] = dVar2;
  __return_storage_ptr__->M[2][3] = dVar3;
  dVar2 = param_1->M[3][2];
  dVar3 = param_1->M[3][3];
  __return_storage_ptr__->M[3][0] = dVar1;
  __return_storage_ptr__->M[3][1] = dVar4;
  __return_storage_ptr__->M[3][2] = dVar2;
  __return_storage_ptr__->M[3][3] = dVar3;
  return __return_storage_ptr__;
}

// ClampFloatTangent @ 1417b8510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl
ClampFloatTangent(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = param_3 - param_1;
  fVar5 = param_5 - param_1;
  fVar3 = param_6 - param_2;
  if (param_6 - param_2 <= __real_38d1b717) {
    fVar3 = __real_38d1b717;
  }
  fVar7 = param_4 - param_2;
  if (param_4 - param_2 <= __real_38d1b717) {
    fVar7 = __real_38d1b717;
  }
  fVar6 = param_6 - param_4;
  if (param_6 - param_4 <= __real_38d1b717) {
    fVar6 = __real_38d1b717;
  }
  fVar4 = param_5 - param_3;
  if (0.0 <= fVar1) {
    if (fVar4 <= 0.0) {
      return 0.0;
    }
    if (0.0 < fVar1) goto LAB_1417b8589;
  }
  if (0.0 <= fVar4) {
    return 0.0;
  }
LAB_1417b8589:
  fVar3 = fVar5 / fVar3;
  fVar2 = fVar1 / fVar5;
  if (fVar5 <= 0.0) {
    if (___real_3eaa7efa <= fVar2) {
      if (fVar2 <= __real_3f2ac083) {
        return fVar3;
      }
      fVar1 = (fVar2 - __real_3f2ac083) * ___real_40403133 * (fVar4 / fVar6 - fVar3);
    }
    else {
      fVar1 = (__real_3f800000 - fVar2 * ___real_40403133) * (fVar1 / fVar7 - fVar3);
    }
    fVar5 = fVar1 + fVar3;
    if (fVar1 + fVar3 <= fVar3) {
      fVar5 = fVar3;
    }
  }
  else {
    if (fVar2 < ___real_3eaa7efa) {
      fVar1 = (__real_3f800000 - fVar2 * ___real_40403133) * (fVar1 / fVar7 - fVar3) + fVar3;
      if (fVar3 <= fVar1) {
        fVar1 = fVar3;
      }
      return fVar1;
    }
    fVar5 = fVar3;
    if (__real_3f2ac083 < fVar2) {
      fVar1 = (fVar2 - __real_3f2ac083) * ___real_40403133 * (fVar4 / fVar6 - fVar3) + fVar3;
      if (fVar3 <= fVar1) {
        fVar1 = fVar3;
      }
      return fVar1;
    }
  }
  return fVar5;
}

// ComputeAndFixedColorAndIntensity @ 1417bae00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ComputeAndFixedColorAndIntensity(FLinearColor *param_1,FColor *param_2,float *param_3)

{
  short sVar1;
  short sVar2;
  FColor_u_0 FVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  
  fVar6 = (param_1->field0_0x0)._s_0.G;
  fVar8 = (param_1->field0_0x0)._s_0.B;
  fVar12 = fVar6;
  if (fVar6 <= fVar8) {
    fVar12 = fVar8;
  }
  fVar8 = (param_1->field0_0x0)._s_0.R;
  if (fVar12 <= fVar8) {
    fVar12 = fVar8;
  }
  if (fVar12 <= __real_3727c5ac) {
    fVar12 = __real_3727c5ac;
  }
  fVar8 = __real_3f800000 / fVar12;
  auVar11._0_4_ = fVar8 * (param_1->field0_0x0)._s_0.R;
  auVar11._4_4_ = fVar8 * fVar6;
  auVar11._8_4_ = fVar8 * (param_1->field0_0x0)._s_0.B;
  auVar11._12_4_ = fVar8 * (param_1->field0_0x0)._s_0.A;
  auVar10._4_4_ = _UNK_1506895f4;
  auVar10._0_4_ = ___xmm_39000000390000003900000039000000;
  auVar10._8_4_ = _UNK_1506895f8;
  auVar10._12_4_ = _UNK_1506895fc;
  auVar10 = maxps(auVar11,auVar10);
  auVar11 = minps(auVar10,___xmm_3f7fffff3f7fffff3f7fffff3f7fffff);
  fVar6 = auVar11._0_4_;
  fVar8 = auVar11._4_4_;
  fVar7 = auVar11._8_4_;
  auVar9._4_4_ = stb_fp32_to_srgb8_tab4[(ushort)((uint)((int)fVar8 - _UNK_1506895f4) >> 0x14)];
  auVar9._0_4_ = stb_fp32_to_srgb8_tab4
                 [(uint)((int)fVar6 - ___xmm_39000000390000003900000039000000) >> 0x14];
  auVar9._8_4_ = stb_fp32_to_srgb8_tab4[(ushort)((uint)((int)fVar7 - _UNK_1506895f8) >> 0x14)];
  auVar9._12_4_ = 0;
  auVar4._0_4_ = (uint)fVar6 >> 0xc & ___xmm_000000ff000000ff000000ff000000ff;
  auVar4._4_4_ = (uint)fVar8 >> 0xc & _UNK_150631f64;
  auVar4._8_4_ = (uint)fVar7 >> 0xc & _UNK_150631f68;
  auVar4._12_4_ = (uint)auVar11._12_4_ >> 0xc & _UNK_150631f6c;
  auVar10 = pmaddwd(auVar9,auVar4 | ___xmm_02000000020000000200000002000000);
  auVar5._4_4_ = auVar10._4_4_ >> 0x10 | (int)(_UNK_1506896c4 * fVar8 + _UNK_150689624);
  auVar5._0_4_ = auVar10._8_4_ >> 0x10 | (int)(_UNK_1506896c8 * fVar7 + _UNK_150689628);
  auVar5._8_4_ = auVar10._0_4_ >> 0x10 |
                 (int)(___xmm_437f0000000000000000000000000000 * fVar6 +
                      ___xmm_3f0000003f0000003f0000003f000000);
  auVar5._12_4_ = auVar10._12_4_ >> 0x10 | (int)(_UNK_1506896cc * auVar11._12_4_ + _UNK_15068962c);
  auVar10 = packssdw(auVar5,auVar5);
  sVar1 = auVar10._0_2_;
  sVar2 = auVar10._2_2_;
  FVar3._s_0.G = (0 < sVar2) * (sVar2 < 0x100) * auVar10[2] - (0xff < sVar2);
  FVar3._s_0.B = (0 < sVar1) * (sVar1 < 0x100) * auVar10[0] - (0xff < sVar1);
  sVar1 = auVar10._4_2_;
  FVar3._s_0.R = (0 < sVar1) * (sVar1 < 0x100) * auVar10[4] - (0xff < sVar1);
  sVar1 = auVar10._6_2_;
  FVar3._s_0.A = (0 < sVar1) * (sVar1 < 0x100) * auVar10[6] - (0xff < sVar1);
  param_2->field0_0x0 = FVar3;
  *param_3 = fVar12;
  return;
}

// ComputeProjectedSphereShaft @ 1417bba70

bool __cdecl
ComputeProjectedSphereShaft
          (double param_1,double param_2,double param_3,TMatrix<double> *param_4,
          TVector<double> *param_5,double param_6,int *param_7,int *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar5 = __real_bfe0000000000000;
  dVar3 = __real_3ff0000000000000;
  dVar15 = param_2 * param_2;
  iVar9 = *param_7;
  iVar7 = *param_8;
  dVar11 = ((param_1 * param_1 - param_3 * param_3) + dVar15) * dVar15;
  if (0.0 <= dVar11) {
    dVar15 = __real_3ff0000000000000 / (param_1 * param_1 + dVar15);
    dVar11 = SQRT(dVar11);
    dVar4 = (param_1 * param_3 - dVar11) * dVar15;
    dVar15 = (param_1 * param_3 + dVar11) * dVar15;
    dVar14 = (param_3 - dVar4 * param_1) * (__real_3ff0000000000000 / param_2);
    dVar12 = (param_3 - dVar15 * param_1) * (__real_3ff0000000000000 / param_2);
    dVar16 = param_2 - dVar14 * param_3;
    dVar11 = param_2 - dVar12 * param_3;
    uVar10 = (uint)__xmm_80000000000000008000000000000000;
    uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    if (0.0 < dVar16) {
      dVar1 = (param_5->field0_0x0)._s_0.X;
      dVar2 = (param_5->field0_0x0)._s_0.Y;
      dVar14 = (dVar16 * dVar14) / dVar4;
      dVar17 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) ^ uVar13,SUB84(dVar14,0) ^ uVar10)
      ;
      dVar14 = dVar2 * dVar17;
      dVar17 = dVar1 * dVar17;
      dVar14 = ((dVar2 * (dVar14 * param_4->M[1][1] + dVar17 * param_4->M[0][1] +
                          dVar16 * param_4->M[2][1] + __real_3ff0000000000000 * param_4->M[3][1]) +
                 dVar1 * (dVar14 * param_4->M[1][0] + dVar17 * param_4->M[0][0] +
                          dVar16 * param_4->M[2][0] + __real_3ff0000000000000 * param_4->M[3][0]) +
                (param_4->M[0][2] * dVar17 + param_4->M[1][2] * dVar14 + param_4->M[2][2] * dVar16 +
                param_4->M[3][2] * __real_3ff0000000000000) * (param_5->field0_0x0)._s_0.Z) /
                (param_4->M[0][3] * dVar17 + param_4->M[1][3] * dVar14 + param_4->M[2][3] * dVar16 +
                param_4->M[3][3] * __real_3ff0000000000000) + param_6) * (double)(iVar7 - iVar9) *
               (param_6 * __real_3fe0000000000000 + param_6 * __real_3fe0000000000000) +
               (double)iVar9 + (double)iVar9;
      if (dVar4 < 0.0 == param_6 < 0.0) {
        iVar8 = (int)ROUND(dVar14 - __real_3fe0000000000000) >> 1;
        iVar6 = iVar9;
        if (iVar9 < iVar8) {
          iVar6 = iVar8;
        }
        *param_7 = iVar6;
      }
      else {
        iVar8 = -((int)ROUND(__real_bfe0000000000000 - dVar14) >> 1);
        iVar6 = iVar7;
        if (iVar8 < iVar7) {
          iVar6 = iVar8;
        }
        *param_8 = iVar6;
      }
    }
    if (0.0 < dVar11) {
      dVar4 = (param_5->field0_0x0)._s_0.X;
      dVar14 = (param_5->field0_0x0)._s_0.Y;
      dVar12 = (dVar11 * dVar12) / dVar15;
      uVar10 = SUB84(dVar12,0) ^ uVar10;
      uVar13 = (uint)((ulonglong)dVar12 >> 0x20) ^ uVar13;
      dVar12 = (double)CONCAT44(uVar13,uVar10) * dVar14;
      dVar16 = (double)CONCAT44(uVar13,uVar10) * dVar4;
      dVar3 = ((dVar14 * (param_4->M[1][1] * dVar12 + param_4->M[0][1] * dVar16 +
                          dVar11 * param_4->M[2][1] + param_4->M[3][1] * dVar3) +
                dVar4 * (param_4->M[1][0] * dVar12 + param_4->M[0][0] * dVar16 +
                         dVar11 * param_4->M[2][0] + param_4->M[3][0] * dVar3) +
               (param_4->M[1][2] * dVar12 + param_4->M[0][2] * dVar16 + param_4->M[2][2] * dVar11 +
               param_4->M[3][2] * dVar3) * (param_5->field0_0x0)._s_0.Z) /
               (param_4->M[1][3] * dVar12 + param_4->M[0][3] * dVar16 + param_4->M[2][3] * dVar11 +
               param_4->M[3][3] * dVar3) + param_6) * (double)(iVar7 - iVar9) *
              (param_6 * __real_3fe0000000000000 + param_6 * __real_3fe0000000000000) +
              (double)iVar9 + (double)iVar9;
      if (dVar15 < 0.0 == param_6 < 0.0) {
        iVar7 = (int)ROUND(dVar3 - __real_3fe0000000000000) >> 1;
        iVar9 = *param_7;
        if (*param_7 < iVar7) {
          iVar9 = iVar7;
        }
        *param_7 = iVar9;
      }
      else {
        iVar7 = -((int)ROUND(dVar5 - dVar3) >> 1);
        iVar9 = *param_8;
        if (iVar7 < *param_8) {
          iVar9 = iVar7;
        }
        *param_8 = iVar9;
      }
    }
  }
  return *param_7 < *param_8;
}

// ConsumeLocalizedNumber @ 1417bc580

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeLocalizedNumber
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  FDecimalNumberFormattingRules *pFVar1;
  
  pFVar1 = GetLocalizedNumberFormattingRules();
  ConsumeNumberWithRules(__return_storage_ptr__,param_1,pFVar1);
  return __return_storage_ptr__;
}

// ConsumeLocalizedNumberWithAgnosticFallback @ 1417bc5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeLocalizedNumberWithAgnosticFallback
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *pTVar1;
  undefined1 auStack_a8 [32];
  double local_88;
  TOptional<TStringToken<wchar_t>_> local_80;
  undefined1 local_58 [24];
  double local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pTVar1 = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  local_88 = 0.0;
  ParseLocalizedNumberWithAgnosticFallback(&local_80,pTVar1,(TStringToken<wchar_t> *)0x0,&local_88);
  if (local_80.bIsSet != false) {
    local_58._16_8_ = &___7__FInlineDataStorage_N_Impl__6B_;
    local_58._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.A;
    local_58._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.B;
    local_58._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.C;
    local_58._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.D;
    local_40 = local_88;
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_80.TypedValue,(FExpressionNode *)local_58)
    ;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_58);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeNumber @ 1417bc680

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeNumber
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  FDecimalNumberFormattingRules *pFVar1;
  
  pFVar1 = FastDecimalFormat::GetCultureAgnosticFormattingRules();
  ConsumeNumberWithRules(__return_storage_ptr__,param_1,pFVar1);
  return __return_storage_ptr__;
}

// ConsumeNumberWithRules @ 1417bc6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptional<FExpressionError> * __cdecl
ExpressionParser::ConsumeNumberWithRules
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1,FDecimalNumberFormattingRules *param_2)

{
  TTokenStream<wchar_t> *this;
  FNumberParsingOptions *pFVar1;
  TOptional<TStringToken<wchar_t>_> *pTVar2;
  undefined1 auStackY_d8 [32];
  int local_98 [2];
  double local_90;
  TStringToken<wchar_t> local_88;
  char local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  double local_50;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  local_98[0] = 0;
  pFVar1 = FNumberParsingOptions::DefaultNoGrouping();
  local_90 = 0.0;
  local_68._8_8_ = _UNK_1506896f8;
  local_68._0_8_ = ___xmm_7fefffffffffffffffefffffffffffff;
  FastDecimalFormat::Internal::StringToFractional
            (this->ReadPos,(int)((longlong)this->End - (longlong)this->ReadPos >> 1),param_2,pFVar1,
             (FDecimalNumberFractionalLimits *)local_68,&local_90,local_98);
  if (local_98[0] < 1) {
    local_50 = (double)((ulonglong)local_50 & 0xffffffffffffff00);
    pTVar2 = (TOptional<TStringToken<wchar_t>_> *)local_68;
  }
  else {
    pTVar2 = TTokenStream<wchar_t>::GenerateToken
                       (this,(TOptional<TStringToken<wchar_t>_> *)local_68,local_98[0],
                        (TStringToken<wchar_t> *)0x0);
  }
  local_70 = pTVar2->bIsSet;
  if ((bool)local_70 != false) {
    local_88.TokenStart = (pTVar2->TypedValue).TokenStart;
    local_88.TokenEnd = (pTVar2->TypedValue).TokenEnd;
    local_88.LineNumber = (pTVar2->TypedValue).LineNumber;
    local_88.CharacterIndex = (pTVar2->TypedValue).CharacterIndex;
    local_58 = &___7__FInlineDataStorage_N_Impl__6B_;
    local_68._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.A;
    local_68._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.B;
    local_68._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.C;
    local_68._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.D;
    local_50 = local_90;
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_88,(FExpressionNode *)local_68);
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_68);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConvertFLinearColorsToFColorSRGB @ 1417bd050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ConvertFLinearColorsToFColorSRGB(FLinearColor *param_1,FColor *param_2,long64 param_3)

{
  FLinearColor_u_0 FVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong lVar19;
  FColor FVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  fVar18 = _UNK_1506896cc;
  fVar17 = _UNK_1506896c8;
  fVar16 = _UNK_1506896c4;
  fVar15 = ___xmm_437f0000000000000000000000000000;
  auVar14 = ___xmm_3f7fffff3f7fffff3f7fffff3f7fffff;
  fVar13 = _UNK_15068962c;
  fVar12 = _UNK_150689628;
  fVar11 = _UNK_150689624;
  fVar10 = ___xmm_3f0000003f0000003f0000003f000000;
  auVar9 = ___xmm_39000000390000003900000039000000;
  auVar8 = ___xmm_02000000020000000200000002000000;
  uVar7 = _UNK_150631f6c;
  uVar6 = _UNK_150631f68;
  uVar5 = _UNK_150631f64;
  uVar4 = ___xmm_000000ff000000ff000000ff000000ff;
  lVar19 = 0;
  if (0 < param_3) {
    do {
      FVar1 = param_1->field0_0x0;
      param_1 = param_1 + 1;
      auVar26 = maxps((undefined1  [16])FVar1,auVar9);
      auVar27 = minps(auVar26,auVar14);
      fVar22 = auVar27._0_4_;
      fVar23 = auVar27._4_4_;
      fVar24 = auVar27._8_4_;
      auVar25._4_4_ = stb_fp32_to_srgb8_tab4[(ushort)((uint)((int)fVar23 - auVar9._4_4_) >> 0x14)];
      auVar25._0_4_ = stb_fp32_to_srgb8_tab4[(uint)((int)fVar22 - auVar9._0_4_) >> 0x14];
      auVar26._0_4_ = (uint)fVar22 >> 0xc & uVar4;
      auVar26._4_4_ = (uint)fVar23 >> 0xc & uVar5;
      auVar26._8_4_ = (uint)fVar24 >> 0xc & uVar6;
      auVar26._12_4_ = (uint)auVar27._12_4_ >> 0xc & uVar7;
      auVar25._8_4_ = stb_fp32_to_srgb8_tab4[(ushort)((uint)((int)fVar24 - auVar9._8_4_) >> 0x14)];
      auVar25._12_4_ = 0;
      auVar26 = pmaddwd(auVar25,auVar26 | auVar8);
      auVar21._4_4_ = auVar26._4_4_ >> 0x10 | (int)(fVar23 * fVar16 + fVar11);
      auVar21._0_4_ = auVar26._8_4_ >> 0x10 | (int)(fVar24 * fVar17 + fVar12);
      auVar21._8_4_ = auVar26._0_4_ >> 0x10 | (int)(fVar22 * fVar15 + fVar10);
      auVar21._12_4_ = auVar26._12_4_ >> 0x10 | (int)(auVar27._12_4_ * fVar18 + fVar13);
      auVar26 = packssdw(auVar21,auVar21);
      sVar2 = auVar26._0_2_;
      sVar3 = auVar26._2_2_;
      FVar20.field0_0x0._s_0.G = (0 < sVar3) * (sVar3 < 0x100) * auVar26[2] - (0xff < sVar3);
      FVar20.field0_0x0._s_0.B = (0 < sVar2) * (sVar2 < 0x100) * auVar26[0] - (0xff < sVar2);
      sVar2 = auVar26._4_2_;
      FVar20.field0_0x0._s_0.R = (0 < sVar2) * (sVar2 < 0x100) * auVar26[4] - (0xff < sVar2);
      sVar2 = auVar26._6_2_;
      FVar20.field0_0x0._s_0.A = (0 < sVar2) * (sVar2 < 0x100) * auVar26[6] - (0xff < sVar2);
      param_2[lVar19].field0_0x0 = FVar20.field0_0x0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < param_3);
  }
  return;
}

// CreateContainerSignature @ 1417bf9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIoStatus * __cdecl
CreateContainerSignature
          (FIoStatus *__return_storage_ptr__,void *param_1,FIoStoreTocHeader *param_2,
          TArrayView<FSHAHash_const_,int> *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  EIoErrorCode EVar5;
  undefined4 *puVar6;
  IEngineCrypto *pIVar7;
  TSharedString<wchar_t> TVar8;
  wchar_t *pwVar9;
  uint uVar10;
  TSharedString<wchar_t> TVar11;
  undefined1 auStack_a8 [32];
  TStringView<wchar_t> local_88;
  undefined4 local_78;
  wchar_t local_74 [22];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar10 = 0;
  local_78 = 0;
  if (param_1 == (void *)0x0) {
    (__return_storage_ptr__->ErrorMessage).Chars = (wchar_t *)0x0;
    puVar6 = FMemory::Malloc(0x30,0);
    *puVar6 = 1;
    puVar6[1] = 0x13;
    (__return_storage_ptr__->ErrorMessage).Chars = (wchar_t *)(puVar6 + 2);
    uVar3 = u_Invalid_signing._8_8_;
    *(undefined8 *)(puVar6 + 2) = u_Invalid_signing._0_8_;
    *(undefined8 *)(puVar6 + 4) = uVar3;
    uVar3 = u_Invalid_signing._24_8_;
    *(undefined8 *)(puVar6 + 6) = u_Invalid_signing._16_8_;
    *(undefined8 *)(puVar6 + 8) = uVar3;
    puVar6[10] = u_Invalid_signing._32_4_;
    *(wchar_t *)(puVar6 + 0xb) = u_Invalid_signing[0x12];
    (__return_storage_ptr__->ErrorMessage).Chars[0x13] = L'\0';
    __return_storage_ptr__->ErrorCode = SignatureError;
    __return_storage_ptr__->SystemErrorCode = 0;
  }
  else {
    local_74[8] = L'\0';
    local_74[9] = L'\0';
    local_74[0x12] = L'\0';
    local_74[0x13] = L'\0';
    local_74[0] = L'\0';
    local_74[1] = L'\0';
    local_74[2] = L'\0';
    local_74[3] = L'\0';
    local_74[4] = L'\0';
    local_74[5] = L'\0';
    local_74[6] = L'\0';
    local_74[7] = L'\0';
    local_74[10] = L'\0';
    local_74[0xb] = L'\0';
    local_74[0xc] = L'\0';
    local_74[0xd] = L'\0';
    local_74[0xe] = L'\0';
    local_74[0xf] = L'\0';
    local_74[0x10] = L'\0';
    local_74[0x11] = L'\0';
    FSHA1::HashBuffer(param_2,0x90,(uchar *)local_74);
    FSHA1::HashBuffer(param_3->DataPtr,(longlong)param_3->ArrayNum * 0x14,(uchar *)(local_74 + 10));
    pIVar7 = GetEngineCrypto();
    local_88.DataPtr = local_74;
    local_88.Size = 0x14;
    iVar4 = (**(code **)((longlong)*pIVar7 + 0x30))(pIVar7,&local_88,param_4,param_1);
    if (iVar4 < 1) {
      local_88.Size = 0x1f;
      local_88.DataPtr = L"Failed to encrypt TOC signature";
      FIoStatus::FIoStatus(__return_storage_ptr__,SignatureError,&local_88);
    }
    else {
      pIVar7 = GetEngineCrypto();
      local_88.DataPtr = local_74 + 10;
      local_88.Size = 0x14;
      iVar4 = (**(code **)((longlong)*pIVar7 + 0x30))(pIVar7,&local_88,param_5,param_1);
      TVar8 = FIoStatus::Ok.ErrorMessage;
      if (iVar4 < 1) {
        puVar6 = FMemory::Malloc(0x4c,0);
        bVar2 = false;
        bVar1 = true;
        *puVar6 = 1;
        TVar8.Chars = (wchar_t *)(puVar6 + 2);
        puVar6[1] = 0x21;
        uVar3 = u_Failed_to_encry._8_8_;
        *(undefined8 *)TVar8.Chars = u_Failed_to_encry._0_8_;
        *(undefined8 *)(puVar6 + 4) = uVar3;
        uVar3 = u_Failed_to_encry._24_8_;
        *(undefined8 *)(puVar6 + 6) = u_Failed_to_encry._16_8_;
        *(undefined8 *)(puVar6 + 8) = uVar3;
        uVar3 = u_Failed_to_encry._40_8_;
        *(undefined8 *)(puVar6 + 10) = u_Failed_to_encry._32_8_;
        *(undefined8 *)(puVar6 + 0xc) = uVar3;
        uVar3 = u_Failed_to_encry._56_8_;
        *(undefined8 *)(puVar6 + 0xe) = u_Failed_to_encry._48_8_;
        *(undefined8 *)(puVar6 + 0x10) = uVar3;
        *(wchar_t *)(puVar6 + 0x12) = u_Failed_to_encry[0x20];
        EVar5 = SignatureError;
        *(undefined2 *)((longlong)puVar6 + 0x4a) = 0;
        pwVar9 = TVar8.Chars;
        TVar11.Chars = local_88.DataPtr;
      }
      else {
        if (FIoStatus::Ok.ErrorMessage.Chars != (wchar_t *)0x0) {
          LOCK();
          *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) =
               *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) + 1;
          UNLOCK();
        }
        bVar2 = true;
        bVar1 = false;
        pwVar9 = local_88.DataPtr;
        TVar11 = TVar8;
        EVar5 = FIoStatus::Ok.ErrorCode;
        uVar10 = FIoStatus::Ok.SystemErrorCode;
      }
      (__return_storage_ptr__->ErrorMessage).Chars = TVar8.Chars;
      if (TVar8.Chars != (wchar_t *)0x0) {
        LOCK();
        *(int *)(TVar8.Chars + -4) = *(int *)(TVar8.Chars + -4) + 1;
        UNLOCK();
      }
      __return_storage_ptr__->SystemErrorCode = uVar10;
      __return_storage_ptr__->ErrorCode = EVar5;
      if ((bVar1) && (pwVar9 != (wchar_t *)0x0)) {
        pwVar9 = pwVar9 + -4;
        LOCK();
        iVar4 = *(int *)pwVar9;
        *(int *)pwVar9 = *(int *)pwVar9 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          FMemory::Free(pwVar9);
        }
      }
      if ((bVar2) && (TVar11.Chars != (wchar_t *)0x0)) {
        pwVar9 = TVar11.Chars + -4;
        LOCK();
        iVar4 = *(int *)pwVar9;
        *(int *)pwVar9 = *(int *)pwVar9 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          FMemory::Free(pwVar9);
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// CurveFloatFindIntervalBounds @ 1417c1330

void __cdecl
CurveFloatFindIntervalBounds
          (FInterpCurvePoint<float> *param_1,FInterpCurvePoint<float> *param_2,float *param_3,
          float *param_4)

{
  uchar uVar1;
  bool bVar2;
  float fVar3;
  float local_res8 [2];
  float local_res10 [6];
  
  uVar1 = (param_1->InterpMode).Value;
  if ((uVar1 == '\x01') || ((byte)(uVar1 - 3) < 3)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FindBounds<float>(local_res8,local_res10,param_1->OutVal,param_1->LeaveTangent,param_1->InVal,
                    param_2->OutVal,param_2->ArriveTangent,param_2->InVal,bVar2);
  fVar3 = *param_3;
  if (local_res8[0] <= *param_3) {
    fVar3 = local_res8[0];
  }
  *param_3 = fVar3;
  fVar3 = *param_4;
  if (*param_4 <= local_res10[0]) {
    fVar3 = local_res10[0];
  }
  *param_4 = fVar3;
  return;
}

// CurveLinearColorFindIntervalBounds @ 1417c13c0

void __cdecl
CurveLinearColorFindIntervalBounds
          (FInterpCurvePoint<FLinearColor> *param_1,FInterpCurvePoint<FLinearColor> *param_2,
          FLinearColor *param_3,FLinearColor *param_4)

{
  uchar uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float local_res8 [2];
  float local_res10 [6];
  
  uVar1 = (param_1->InterpMode).Value;
  if ((uVar1 == '\x01') || ((byte)(uVar1 - 3) < 3)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FindBounds<float>(local_res8,local_res10,(param_1->OutVal).field0_0x0._s_0.R,
                    (param_1->LeaveTangent).field0_0x0._s_0.R,param_1->InVal,
                    (param_2->OutVal).field0_0x0._s_0.R,(param_2->ArriveTangent).field0_0x0._s_0.R,
                    param_2->InVal,bVar2);
  fVar3 = (param_3->field0_0x0)._s_0.R;
  if (local_res8[0] <= fVar3) {
    fVar3 = local_res8[0];
  }
  (param_3->field0_0x0)._s_0.R = fVar3;
  fVar3 = (param_4->field0_0x0)._s_0.R;
  if (fVar3 <= local_res10[0]) {
    fVar3 = local_res10[0];
  }
  (param_4->field0_0x0)._s_0.R = fVar3;
  FindBounds<float>(local_res8,local_res10,(param_1->OutVal).field0_0x0._s_0.G,
                    (param_1->LeaveTangent).field0_0x0._s_0.G,param_1->InVal,
                    (param_2->OutVal).field0_0x0._s_0.G,(param_2->ArriveTangent).field0_0x0._s_0.G,
                    param_2->InVal,bVar2);
  fVar3 = (param_3->field0_0x0)._s_0.G;
  if (local_res8[0] <= fVar3) {
    fVar3 = local_res8[0];
  }
  (param_3->field0_0x0)._s_0.G = fVar3;
  fVar3 = (param_4->field0_0x0)._s_0.G;
  fVar4 = local_res10[0];
  if (local_res10[0] <= fVar3) {
    fVar4 = fVar3;
  }
  (param_4->field0_0x0)._s_0.G = fVar4;
  FindBounds<float>(local_res8,local_res10,(param_1->OutVal).field0_0x0._s_0.B,
                    (param_1->LeaveTangent).field0_0x0._s_0.B,param_1->InVal,
                    (param_2->OutVal).field0_0x0._s_0.B,(param_2->ArriveTangent).field0_0x0._s_0.B,
                    param_2->InVal,bVar2);
  fVar3 = (param_3->field0_0x0)._s_0.B;
  if (local_res8[0] <= fVar3) {
    fVar3 = local_res8[0];
  }
  (param_3->field0_0x0)._s_0.B = fVar3;
  fVar3 = (param_4->field0_0x0)._s_0.B;
  if (fVar3 <= local_res10[0]) {
    fVar3 = local_res10[0];
  }
  (param_4->field0_0x0)._s_0.B = fVar3;
  FindBounds<float>(local_res8,local_res10,(param_1->OutVal).field0_0x0._s_0.A,
                    (param_1->LeaveTangent).field0_0x0._s_0.A,param_1->InVal,
                    (param_2->OutVal).field0_0x0._s_0.A,(param_2->ArriveTangent).field0_0x0._s_0.A,
                    param_2->InVal,bVar2);
  fVar3 = (param_3->field0_0x0)._s_0.A;
  if (local_res8[0] <= fVar3) {
    fVar3 = local_res8[0];
  }
  (param_3->field0_0x0)._s_0.A = fVar3;
  fVar3 = (param_4->field0_0x0)._s_0.A;
  if (local_res10[0] <= fVar3) {
    local_res10[0] = fVar3;
  }
  (param_4->field0_0x0)._s_0.A = local_res10[0];
  return;
}

// CurveTwoVectorsFindIntervalBounds @ 1417c15b0

void __cdecl
CurveTwoVectorsFindIntervalBounds
          (FInterpCurvePoint<FTwoVectors> *param_1,FInterpCurvePoint<FTwoVectors> *param_2,
          FTwoVectors *param_3,FTwoVectors *param_4)

{
  uchar uVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double local_res8;
  double local_res10;
  
  uVar1 = (param_1->InterpMode).Value;
  if ((uVar1 == '\x01') || ((byte)(uVar1 - 3) < 3)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FindBounds<double>(&local_res8,&local_res10,(param_1->OutVal).v1.field0_0x0._s_0.X,
                     (param_1->LeaveTangent).v1.field0_0x0._s_0.X,param_1->InVal,
                     (param_2->OutVal).v1.field0_0x0._s_0.X,
                     (param_2->ArriveTangent).v1.field0_0x0._s_0.X,param_2->InVal,bVar2);
  dVar3 = (param_3->v1).field0_0x0._s_0.X;
  if (local_res8 <= dVar3) {
    dVar3 = local_res8;
  }
  (param_3->v1).field0_0x0._s_0.X = dVar3;
  dVar3 = (param_4->v1).field0_0x0._s_0.X;
  if (dVar3 <= local_res10) {
    dVar3 = local_res10;
  }
  (param_4->v1).field0_0x0._s_0.X = dVar3;
  FindBounds<double>(&local_res8,&local_res10,(param_1->OutVal).v1.field0_0x0._s_0.Y,
                     (param_1->LeaveTangent).v1.field0_0x0._s_0.Y,param_1->InVal,
                     (param_2->OutVal).v1.field0_0x0._s_0.Y,
                     (param_2->ArriveTangent).v1.field0_0x0._s_0.Y,param_2->InVal,bVar2);
  dVar3 = (param_3->v1).field0_0x0._s_0.Y;
  if (local_res8 <= dVar3) {
    dVar3 = local_res8;
  }
  (param_3->v1).field0_0x0._s_0.Y = dVar3;
  dVar3 = (param_4->v1).field0_0x0._s_0.Y;
  dVar4 = local_res10;
  if (local_res10 <= dVar3) {
    dVar4 = dVar3;
  }
  (param_4->v1).field0_0x0._s_0.Y = dVar4;
  FindBounds<double>(&local_res8,&local_res10,(param_1->OutVal).v1.field0_0x0._s_0.Z,
                     (param_1->LeaveTangent).v1.field0_0x0._s_0.Z,param_1->InVal,
                     (param_2->OutVal).v1.field0_0x0._s_0.Z,
                     (param_2->ArriveTangent).v1.field0_0x0._s_0.Z,param_2->InVal,bVar2);
  dVar3 = (param_3->v1).field0_0x0._s_0.Z;
  if (local_res8 <= dVar3) {
    dVar3 = local_res8;
  }
  (param_3->v1).field0_0x0._s_0.Z = dVar3;
  dVar3 = (param_4->v1).field0_0x0._s_0.Z;
  if (dVar3 <= local_res10) {
    dVar3 = local_res10;
  }
  (param_4->v1).field0_0x0._s_0.Z = dVar3;
  FindBounds<double>(&local_res8,&local_res10,(param_1->OutVal).v2.field0_0x0._s_0.X,
                     (param_1->LeaveTangent).v2.field0_0x0._s_0.X,param_1->InVal,
                     (param_2->OutVal).v2.field0_0x0._s_0.X,
                     (param_2->ArriveTangent).v2.field0_0x0._s_0.X,param_2->InVal,bVar2);
  dVar3 = (param_3->v2).field0_0x0._s_0.X;
  if (local_res8 <= dVar3) {
    dVar3 = local_res8;
  }
  (param_3->v2).field0_0x0._s_0.X = dVar3;
  dVar3 = (param_4->v2).field0_0x0._s_0.X;
  dVar4 = local_res10;
  if (local_res10 <= dVar3) {
    dVar4 = dVar3;
  }
  (param_4->v2).field0_0x0._s_0.X = dVar4;
  FindBounds<double>(&local_res8,&local_res10,(param_1->OutVal).v2.field0_0x0._s_0.Y,
                     (param_1->LeaveTangent).v2.field0_0x0._s_0.Y,param_1->InVal,
                     (param_2->OutVal).v2.field0_0x0._s_0.Y,
                     (param_2->ArriveTangent).v2.field0_0x0._s_0.Y,param_2->InVal,bVar2);
  dVar3 = (param_3->v2).field0_0x0._s_0.Y;
  if (local_res8 <= dVar3) {
    dVar3 = local_res8;
  }
  (param_3->v2).field0_0x0._s_0.Y = dVar3;
  dVar3 = (param_4->v2).field0_0x0._s_0.Y;
  if (dVar3 <= local_res10) {
    dVar3 = local_res10;
  }
  (param_4->v2).field0_0x0._s_0.Y = dVar3;
  FindBounds<double>(&local_res8,&local_res10,(param_1->OutVal).v2.field0_0x0._s_0.Z,
                     (param_1->LeaveTangent).v2.field0_0x0._s_0.Z,param_1->InVal,
                     (param_2->OutVal).v2.field0_0x0._s_0.Z,
                     (param_2->ArriveTangent).v2.field0_0x0._s_0.Z,param_2->InVal,bVar2);
  dVar3 = (param_3->v2).field0_0x0._s_0.Z;
  if (local_res8 <= dVar3) {
    dVar3 = local_res8;
  }
  (param_3->v2).field0_0x0._s_0.Z = dVar3;
  dVar3 = (param_4->v2).field0_0x0._s_0.Z;
  if (local_res10 <= dVar3) {
    local_res10 = dVar3;
  }
  (param_4->v2).field0_0x0._s_0.Z = local_res10;
  return;
}

// CurveVector2DFindIntervalBounds @ 1417c1880

void __cdecl
CurveVector2DFindIntervalBounds
          (FInterpCurvePoint<UE::Math::TVector2<double>_> *param_1,
          FInterpCurvePoint<UE::Math::TVector2<double>_> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4)

{
  uchar uVar1;
  bool bVar2;
  double dVar3;
  double local_res8;
  double local_res10 [3];
  
  uVar1 = (param_1->InterpMode).Value;
  if ((uVar1 == '\x01') || ((byte)(uVar1 - 3) < 3)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FindBounds<double>(&local_res8,local_res10,(param_1->OutVal).field0_0x0._s_0.X,
                     (param_1->LeaveTangent).field0_0x0._s_0.X,param_1->InVal,
                     (param_2->OutVal).field0_0x0._s_0.X,(param_2->ArriveTangent).field0_0x0._s_0.X,
                     param_2->InVal,bVar2);
  dVar3 = (param_3->field0_0x0)._s_0.X;
  if (local_res8 <= dVar3) {
    dVar3 = local_res8;
  }
  (param_3->field0_0x0)._s_0.X = dVar3;
  dVar3 = (param_4->field0_0x0)._s_0.X;
  if (dVar3 <= local_res10[0]) {
    dVar3 = local_res10[0];
  }
  (param_4->field0_0x0)._s_0.X = dVar3;
  FindBounds<double>(&local_res8,local_res10,(param_1->OutVal).field0_0x0._s_0.Y,
                     (param_1->LeaveTangent).field0_0x0._s_0.Y,param_1->InVal,
                     (param_2->OutVal).field0_0x0._s_0.Y,(param_2->ArriveTangent).field0_0x0._s_0.Y,
                     param_2->InVal,bVar2);
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  if (local_res8 <= dVar3) {
    dVar3 = local_res8;
  }
  (param_3->field0_0x0)._s_0.Y = dVar3;
  dVar3 = (param_4->field0_0x0)._s_0.Y;
  if (local_res10[0] <= dVar3) {
    local_res10[0] = dVar3;
  }
  (param_4->field0_0x0)._s_0.Y = local_res10[0];
  return;
}

// CurveVectorFindIntervalBounds @ 1417c1990

void __cdecl
CurveVectorFindIntervalBounds
          (FInterpCurvePoint<UE::Math::TVector<double>_> *param_1,
          FInterpCurvePoint<UE::Math::TVector<double>_> *param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  uchar uVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double local_res8;
  double local_res10 [3];
  
  uVar1 = (param_1->InterpMode).Value;
  if ((uVar1 == '\x01') || ((byte)(uVar1 - 3) < 3)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FindBounds<double>(&local_res8,local_res10,(param_1->OutVal).field0_0x0._s_0.X,
                     (param_1->LeaveTangent).field0_0x0._s_0.X,param_1->InVal,
                     (param_2->OutVal).field0_0x0._s_0.X,(param_2->ArriveTangent).field0_0x0._s_0.X,
                     param_2->InVal,bVar2);
  dVar3 = (param_3->field0_0x0)._s_0.X;
  if (local_res8 <= dVar3) {
    dVar3 = local_res8;
  }
  (param_3->field0_0x0)._s_0.X = dVar3;
  dVar3 = (param_4->field0_0x0)._s_0.X;
  if (dVar3 <= local_res10[0]) {
    dVar3 = local_res10[0];
  }
  (param_4->field0_0x0)._s_0.X = dVar3;
  FindBounds<double>(&local_res8,local_res10,(param_1->OutVal).field0_0x0._s_0.Y,
                     (param_1->LeaveTangent).field0_0x0._s_0.Y,param_1->InVal,
                     (param_2->OutVal).field0_0x0._s_0.Y,(param_2->ArriveTangent).field0_0x0._s_0.Y,
                     param_2->InVal,bVar2);
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  if (local_res8 <= dVar3) {
    dVar3 = local_res8;
  }
  (param_3->field0_0x0)._s_0.Y = dVar3;
  dVar3 = (param_4->field0_0x0)._s_0.Y;
  dVar4 = local_res10[0];
  if (local_res10[0] <= dVar3) {
    dVar4 = dVar3;
  }
  (param_4->field0_0x0)._s_0.Y = dVar4;
  FindBounds<double>(&local_res8,local_res10,(param_1->OutVal).field0_0x0._s_0.Z,
                     (param_1->LeaveTangent).field0_0x0._s_0.Z,param_1->InVal,
                     (param_2->OutVal).field0_0x0._s_0.Z,(param_2->ArriveTangent).field0_0x0._s_0.Z,
                     param_2->InVal,bVar2);
  dVar3 = (param_3->field0_0x0)._s_0.Z;
  if (local_res8 <= dVar3) {
    dVar3 = local_res8;
  }
  (param_3->field0_0x0)._s_0.Z = dVar3;
  dVar3 = (param_4->field0_0x0)._s_0.Z;
  if (dVar3 <= local_res10[0]) {
    dVar3 = local_res10[0];
  }
  (param_4->field0_0x0)._s_0.Z = dVar3;
  return;
}

// DataSizeUnificationFactor @ 1417c1b10

double __cdecl UnitConversion::DataSizeUnificationFactor(EUnit param_1)

{
  if (param_1 == Bytes) {
    return __real_3eb0000000000000;
  }
  if (param_1 == Kilobytes) {
    return __real_3f50000000000000;
  }
  if (param_1 == Gigabytes) {
    return __real_4090000000000000;
  }
  if (param_1 != Terabytes) {
    return __real_3ff0000000000000;
  }
  return __real_4130000000000000;
}

// DensityUnificationFactor @ 1417c31c0

double __cdecl UnitConversion::DensityUnificationFactor(EUnit param_1)

{
  if (param_1 != GramsPerCubicCentimeter) {
    if (param_1 == GramsPerCubicMeter) {
      return __real_3eb0c6f7a0b5ed8d;
    }
    if (param_1 == KilogramsPerCubicCentimeter) {
      return __real_408f400000000000;
    }
    if (param_1 == KilogramsPerCubicMeter) {
      return __real_3f50624dd2f1a9fc;
    }
  }
  return __real_3ff0000000000000;
}

// DistanceUnificationFactor @ 1417c4b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl UnitConversion::DistanceUnificationFactor(EUnit param_1)

{
  double dVar1;
  
  dVar1 = __real_3ff0000000000000;
  switch(param_1) {
  case Micrometers:
    return __real_3eb0c6f7a0b5ed8d;
  case Millimeters:
    return __real_3f50624dd2f1a9fc;
  case Centimeters:
    return __real_3f847ae147ae147b;
  default:
    return __real_3ff0000000000000;
  case Kilometers:
    return __real_408f400000000000;
  case Miles:
    dVar1 = __real_409b800000000000;
  case Yards:
    dVar1 = dVar1 * __real_4008000000000000;
  case Feet:
    dVar1 = dVar1 * __real_4028000000000000;
  case Inches:
    return dVar1 * ___real_3f9a027525b7fc77;
  case Lightyears:
    return __real_4340ce267555b200;
  }
}

// Factorial @ 1417cc310

int __cdecl Factorial(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 1;
  }
  iVar1 = Factorial(param_1 + -1);
  return iVar1 * param_1;
}

// ForceUnificationFactor @ 1417cf110

double __cdecl UnitConversion::ForceUnificationFactor(EUnit param_1)

{
  if (param_1 == PoundsForce) {
    return __real_4011cafa9bbd0a62;
  }
  if (param_1 != KilogramsForce) {
    if (param_1 != KilogramCentimetersPerSecondSquared) {
      return __real_3ff0000000000000;
    }
    return __real_3f847ae147ae147b;
  }
  return __real_40239d013a92a305;
}

// ForwardReturnType @ 1417cf6f0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
Impl::ForwardReturnType
          (TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TValueOrError<FExpressionNode,FExpressionError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar4;
  
  bVar1 = (param_1->Variant).TypeIndex;
  (__return_storage_ptr__->Variant).TypeIndex = bVar1;
  if (2 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FrequencyUnificationFactor @ 1417cf980

double __cdecl UnitConversion::FrequencyUnificationFactor(EUnit param_1)

{
  if (param_1 == Hertz) {
    return __real_3f50624dd2f1a9fc;
  }
  if (param_1 == Megahertz) {
    return __real_408f400000000000;
  }
  if (param_1 == Gigahertz) {
    return __real_412e848000000000;
  }
  if (param_1 != RevolutionsPerMinute) {
    return __real_3ff0000000000000;
  }
  return __real_3ef179ec9cbd821e;
}

// GetEngineCrypto @ 1417d35d0

IEngineCrypto * __cdecl GetEngineCrypto(void)

{
  int iVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  IModularFeatures *pIVar6;
  longlong lVar7;
  IEngineCrypto *pIVar8;
  int *piVar9;
  uint uVar10;
  ulonglong local_38;
  ForAnyElementType local_30;
  undefined8 local_28;
  ulonglong uVar11;
  
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar9 < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    atexit(`GetEngineCrypto'::__l2::_dynamic_atexit_destructor_for__Features__);
    _Init_thread_footer(&_TSS0);
  }
  if (bFeaturesInitialized == false) {
    pIVar6 = IModularFeatures::Get();
    (**(code **)((longlong)*pIVar6 + 8))(pIVar6);
    if (bFeaturesInitialized == false) {
      pIVar6 = IModularFeatures::Get();
      if ((*piVar9 < `public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'::__l2
                     ::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'::__l2::
         _thread_safe_static_guard_0__ == -1)) {
        FName::FName(&`public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'::__l2
                      ::Name,L"EngineCryptoFeature");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FVar3 = `public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'::__l2::Name;
      local_30.Data = (FScriptContainerElement *)0x0;
      local_28._0_4_ = 0;
      local_28._4_4_ = 0;
      iVar5 = (**(code **)((longlong)*pIVar6 + 0x18))
                        (pIVar6,`public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'
                                ::__l2::Name);
      uVar11 = 0;
      if (0 < iVar5) {
        do {
          lVar7 = (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,FVar3,uVar11);
          local_38 = lVar7 - 8;
          if (lVar7 == 0) {
            local_38 = 0;
          }
          if (((local_30.Data <= (FScriptContainerElement *)&local_38) &&
              ((FScriptContainerElement *)&local_38 < local_30.Data + (longlong)local_28._4_4_ * 8))
             && (bVar4 = FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pIVar8 = (IEngineCrypto *)(*pcVar2)();
            return pIVar8;
          }
          if ((int)local_28 == local_28._4_4_) {
            local_28._0_4_ =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_30,(int *)((longlong)&local_28 + 4));
          }
          iVar1 = (int)local_28 + 1;
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          *(ulonglong *)(local_30.Data + (longlong)(int)local_28 * 8) = local_38;
          local_28._0_4_ = iVar1;
        } while ((int)uVar10 < iVar5);
      }
      if (Features.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(Features.AllocatorInstance.Data);
      }
      Features.AllocatorInstance.Data = local_30.Data;
      Features.ArrayNum = (int)local_28;
      Features.ArrayMax = local_28._4_4_;
      local_28 = 0;
      local_30.Data = (FScriptContainerElement *)0x0;
      bFeaturesInitialized = true;
    }
    pIVar6 = IModularFeatures::Get();
    (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
  }
  if (Features.ArrayNum < 1) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Features.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
                       ,0x2f,
                       L"RSA functionality was used but no modular feature was registered to provide it. Please make sure your project has the PlatformCrypto plugin enabled!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pIVar8 = (IEngineCrypto *)(*pcVar2)();
      return pIVar8;
    }
    if ((Features.ArrayNum < 1) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pIVar8 = (IEngineCrypto *)(*pcVar2)();
      return pIVar8;
    }
  }
  return *(IEngineCrypto **)Features.AllocatorInstance.Data;
}

// GetIoErrorText @ 1417d40d0

wchar_t * __cdecl GetIoErrorText(EIoErrorCode param_1)

{
  if (0x1b < (int)param_1) {
    return GetIoErrorText_ErrorCodeText[1];
  }
  return GetIoErrorText_ErrorCodeText[param_1];
}

// GetLocalizedNumberFormattingRules @ 1417d4160

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FDecimalNumberFormattingRules * __cdecl ExpressionParser::GetLocalizedNumberFormattingRules(void)

{
  FCulture *this;
  code *pcVar1;
  bool bVar2;
  FInternationalization *pFVar3;
  FDecimalNumberFormattingRules *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  bVar2 = false;
  local_res8 = 0;
  FConfigCacheIni::GetBool
            (GConfig,L"Internationalization",L"ShouldUseLocalizedNumericInput",(bool *)&local_res8,
             &GGameUserSettingsIni);
  if (local_res8._0_1_ == false) {
    pFVar4 = FastDecimalFormat::GetCultureAgnosticFormattingRules();
    pTVar5 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    pFVar3 = FInternationalization::Get();
    if ((pFVar3->CurrentLocale).Object == (FCulture *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FDecimalNumberFormattingRules *)(*pcVar1)();
        return pFVar4;
      }
    }
    this = (pFVar3->CurrentLocale).Object;
    pTVar5 = (pFVar3->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this == (FCulture *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FDecimalNumberFormattingRules *)(*pcVar1)();
        return pFVar4;
      }
    }
    pFVar4 = FCulture::GetDecimalNumberFormattingRules(this);
    bVar2 = true;
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return pFVar4;
}

// GetOverrideTLSID @ 1417d4f30

uint __cdecl GetOverrideTLSID(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      OverrrideTLSID = TlsAlloc();
      _Init_thread_footer(&_TSS0);
    }
  }
  return OverrrideTLSID;
}

// GetQuantizationBounds @ 1417d4fa0

TOptional<TArray<UnitConversion::FQuantizationInfo,TSizedDefaultAllocator<32>_>_const_*> * __cdecl
UnitConversion::GetQuantizationBounds
          (TOptional<TArray<UnitConversion::FQuantizationInfo,TSizedDefaultAllocator<32>_>_const_*>
           *__return_storage_ptr__,EUnit param_1)

{
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    `UnitConversion::GetQuantizationBounds'::__l2::FStaticBounds::FStaticBounds(&Bounds);
    atexit(`UnitConversion::GetQuantizationBounds'::__l2::_dynamic_atexit_destructor_for__Bounds__);
    _Init_thread_footer(&::_TSS0);
  }
  switch(param_1) {
  case Micrometers:
  case Millimeters:
  case Centimeters:
  case Meters:
  case Kilometers:
    __return_storage_ptr__->TypedValue = &Bounds.MetricDistance;
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  case Inches:
  case Feet:
  case Yards:
  case Miles:
    __return_storage_ptr__->bIsSet = true;
    __return_storage_ptr__->TypedValue =
         (TArray<UnitConversion::FQuantizationInfo,TSizedDefaultAllocator<32>_> *)0x154ebaa40;
    return __return_storage_ptr__;
  default:
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  case Micrograms:
  case Milligrams:
  case Grams:
  case Kilograms:
  case MetricTons:
    __return_storage_ptr__->bIsSet = true;
    __return_storage_ptr__->TypedValue =
         (TArray<UnitConversion::FQuantizationInfo,TSizedDefaultAllocator<32>_> *)0x154ebaa50;
    return __return_storage_ptr__;
  case Ounces:
  case Pounds:
  case Stones:
    __return_storage_ptr__->bIsSet = true;
    __return_storage_ptr__->TypedValue =
         (TArray<UnitConversion::FQuantizationInfo,TSizedDefaultAllocator<32>_> *)0x154ebaa60;
    return __return_storage_ptr__;
  case GramsPerCubicCentimeter:
  case GramsPerCubicMeter:
  case KilogramsPerCubicCentimeter:
  case KilogramsPerCubicMeter:
    __return_storage_ptr__->bIsSet = true;
    __return_storage_ptr__->TypedValue =
         (TArray<UnitConversion::FQuantizationInfo,TSizedDefaultAllocator<32>_> *)0x154ebaa70;
    return __return_storage_ptr__;
  case Hertz:
  case Kilohertz:
  case Megahertz:
  case Gigahertz:
  case RevolutionsPerMinute:
    __return_storage_ptr__->bIsSet = true;
    __return_storage_ptr__->TypedValue =
         (TArray<UnitConversion::FQuantizationInfo,TSizedDefaultAllocator<32>_> *)0x154ebaa80;
    return __return_storage_ptr__;
  case Bytes:
  case Kilobytes:
  case Megabytes:
  case Gigabytes:
  case Terabytes:
    __return_storage_ptr__->bIsSet = true;
    __return_storage_ptr__->TypedValue =
         (TArray<UnitConversion::FQuantizationInfo,TSizedDefaultAllocator<32>_> *)0x154ebaa90;
    return __return_storage_ptr__;
  case Microseconds:
  case Milliseconds:
  case Seconds:
  case Minutes:
  case Hours:
  case Days:
  case Months:
  case Years:
    __return_storage_ptr__->bIsSet = true;
    __return_storage_ptr__->TypedValue =
         (TArray<UnitConversion::FQuantizationInfo,TSizedDefaultAllocator<32>_> *)0x154ebaaa0;
    return __return_storage_ptr__;
  case Pascals:
  case KiloPascals:
  case MegaPascals:
  case GigaPascals:
    __return_storage_ptr__->bIsSet = true;
    __return_storage_ptr__->TypedValue =
         (TArray<UnitConversion::FQuantizationInfo,TSizedDefaultAllocator<32>_> *)0x154ebaab0;
    return __return_storage_ptr__;
  }
}

// GetTypeHash @ 1417d87b0

uint __cdecl GetTypeHash(FOperatorFunctionID *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = CityHash64((char *)&param_1->LeftOperandType,0x10);
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar3 = (int)uVar1;
  uVar6 = (int)uVar2 - iVar3 ^ (uint)(uVar1 >> 0xd) & 0x7ffff;
  uVar5 = (-0x61c88647 - uVar6) - iVar3 ^ uVar6 << 8;
  uVar4 = (iVar3 - uVar5) - uVar6 ^ uVar5 >> 0xd;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 >> 0xc;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 << 0x10;
  uVar4 = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 5;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 >> 3;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 << 10;
  uVar5 = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xf;
  uVar1 = CityHash64((char *)&param_1->RightOperandType,0x10);
  uVar4 = (int)uVar1 - uVar5 ^ uVar5 >> 0xd;
  uVar6 = (-0x61c88647 - uVar4) - uVar5 ^ uVar4 << 8;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xc;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 3;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 << 10;
  return (uVar5 - uVar6) - uVar4 ^ uVar6 >> 0xf;
}

// GrabChar @ 1417d93f0

FString * __cdecl GrabChar(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  int iVar5;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar2 = (param_1->Data).ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  if (iVar4 == 0) {
    FString::operator=(__return_storage_ptr__,L"");
    return __return_storage_ptr__;
  }
  do {
    iVar2 = (param_1->Data).ArrayNum;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    if (1 < iVar4) {
      iVar4 = 1;
    }
    iVar5 = 0;
    if (0 < iVar4) {
      iVar5 = iVar4;
    }
    if (iVar2 == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    FString::ConstructFromPtrSize(&local_28,pwVar3,iVar5);
    if (__return_storage_ptr__ != &local_28) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    FString::RightChop(param_1,&local_18,1);
    if (param_1 != &local_18) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (param_1->Data).ArrayNum = local_18.Data.ArrayNum;
      (param_1->Data).ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if ((__return_storage_ptr__->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,L" ");
  } while (iVar2 == 0);
  return __return_storage_ptr__;
}

// InitSHTables @ 1417dafc0

int __cdecl InitSHTables(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar6 = 0;
  lVar8 = 3;
  uVar9 = uVar6;
  uVar10 = uVar6;
  fVar14 = __real_3fb504f3;
  fVar15 = __real_3da2f983;
  do {
    iVar2 = (int)uVar6;
    uVar5 = (uint)uVar9;
    *(uint *)((longlong)BasisL + uVar10) = uVar5;
    *(int *)((longlong)BasisM + uVar10) = iVar2;
    iVar11 = -iVar2;
    if (-iVar2 < 0) {
      iVar11 = iVar2;
    }
    iVar7 = uVar5 - iVar11;
    if (iVar7 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = Factorial(iVar7 + -1);
      iVar1 = iVar1 * iVar7;
    }
    iVar11 = iVar11 + uVar5;
    if (iVar11 == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = Factorial(iVar11 + -1);
      iVar7 = iVar7 * iVar11;
    }
    fVar13 = SQRT((float)(int)(uVar5 * 2 + 1) * fVar15 * ((float)iVar1 / (float)iVar7));
    *(float *)((longlong)NormalizationConstants + uVar10) = fVar13;
    if (iVar2 != 0) {
      *(float *)((longlong)NormalizationConstants + uVar10) = fVar13 * fVar14;
    }
    uVar3 = iVar2 + 1;
    uVar4 = uVar3;
    if ((int)uVar5 < (int)uVar3) {
      uVar4 = ~uVar5;
    }
    *(uint *)((longlong)BasisM + uVar10 + 4) = uVar4;
    uVar12 = uVar5 + 1;
    if ((int)uVar3 <= (int)uVar5) {
      uVar12 = uVar5;
    }
    *(uint *)((longlong)BasisL + uVar10 + 4) = uVar12;
    uVar5 = -uVar4;
    if ((int)-uVar4 < 0) {
      uVar5 = uVar4;
    }
    iVar11 = uVar12 - uVar5;
    if (iVar11 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = Factorial(iVar11 + -1);
      iVar2 = iVar2 * iVar11;
    }
    iVar11 = uVar12 + uVar5;
    if (iVar11 == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = Factorial(iVar11 + -1);
      iVar7 = iVar7 * iVar11;
    }
    fVar13 = SQRT((float)(int)(uVar12 * 2 + 1) * fVar15 * ((float)iVar2 / (float)iVar7));
    *(float *)((longlong)NormalizationConstants + uVar10 + 4) = fVar13;
    if (uVar4 != 0) {
      *(float *)((longlong)NormalizationConstants + uVar10 + 4) = fVar13 * fVar14;
    }
    uVar4 = uVar4 + 1;
    uVar5 = uVar4;
    if ((int)uVar12 < (int)uVar4) {
      uVar5 = ~uVar12;
    }
    *(uint *)((longlong)BasisM + uVar10 + 8) = uVar5;
    uVar3 = uVar12 + 1;
    if ((int)uVar4 <= (int)uVar12) {
      uVar3 = uVar12;
    }
    *(uint *)((longlong)BasisL + uVar10 + 8) = uVar3;
    uVar4 = -uVar5;
    if ((int)-uVar5 < 0) {
      uVar4 = uVar5;
    }
    iVar11 = uVar3 - uVar4;
    if (iVar11 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = Factorial(iVar11 + -1);
      iVar2 = iVar2 * iVar11;
    }
    iVar11 = uVar3 + uVar4;
    if (iVar11 == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = Factorial(iVar11 + -1);
      iVar7 = iVar7 * iVar11;
    }
    fVar13 = SQRT((float)(int)(uVar3 * 2 + 1) * fVar15 * ((float)iVar2 / (float)iVar7));
    *(float *)((longlong)NormalizationConstants + uVar10 + 8) = fVar13;
    if (uVar5 != 0) {
      *(float *)((longlong)NormalizationConstants + uVar10 + 8) = fVar13 * fVar14;
    }
    uVar5 = uVar5 + 1;
    uVar4 = uVar5;
    if ((int)uVar3 < (int)uVar5) {
      uVar4 = ~uVar3;
    }
    uVar6 = (ulonglong)uVar4;
    uVar10 = uVar10 + 0xc;
    uVar4 = uVar3 + 1;
    if ((int)uVar5 <= (int)uVar3) {
      uVar4 = uVar3;
    }
    uVar9 = (ulonglong)uVar4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return 0;
}

// LegendrePolynomial @ 1417df5c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl LegendrePolynomial(int param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  switch(param_1) {
  case 0:
    return __real_3f800000;
  case 1:
    if (param_2 == 0) {
      return param_3;
    }
    if (param_2 == 1) {
      fVar2 = __real_3f800000 - param_3 * param_3;
      fVar1 = 0.0;
      if (__real_38d1b717 < (float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar1 = SQRT(fVar2);
      }
      return (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000);
    }
    break;
  case 2:
    if (param_2 == 0) {
      return param_3 * __real_3fc00000 * param_3 - __real_3f000000;
    }
    if (param_2 == 1) {
      fVar2 = __real_3f800000 - param_3 * param_3;
      fVar1 = 0.0;
      if (__real_38d1b717 < (float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar1 = SQRT(fVar2);
      }
      return param_3 * __real_c0400000 * fVar1;
    }
    if (param_2 == 2) {
      return __real_40400000 - param_3 * param_3 * __real_40400000;
    }
    break;
  case 3:
    if (param_2 == 0) {
      return param_3 * param_3 * param_3 * __real_40200000 - param_3 * __real_3fc00000;
    }
    if (param_2 == 1) {
      fVar2 = 0.0;
      fVar1 = __real_3f800000 - param_3 * param_3;
      if (__real_38d1b717 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar2 = SQRT(fVar1);
      }
      return (param_3 * ___real_c0f00000 * param_3 - __real_bfc00000) * fVar2;
    }
    if (param_2 == 2) {
      return param_3 * __real_41700000 - param_3 * param_3 * param_3 * __real_41700000;
    }
    if (param_2 == 3) {
      fVar1 = __real_3f800000 - param_3 * param_3;
      return SQRT(fVar1) * fVar1 * __real_c1700000;
    }
    break;
  case 4:
    if (param_2 == 0) {
      return param_3 * param_3 * param_3 * param_3 * ___real_408c0000 +
             (__real_3ec00000 - param_3 * ___real_40700000 * param_3);
    }
    if (param_2 == 1) {
      fVar2 = 0.0;
      fVar1 = __real_3f800000 - param_3 * param_3;
      if (__real_38d1b717 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar2 = SQRT(fVar1);
      }
      return param_3 * fVar2 * ___real_c18c0000 * param_3 * param_3 -
             param_3 * ___real_c0f00000 * fVar2;
    }
    if (param_2 == 2) {
      return param_3 * param_3 * param_3 * param_3 * ___real_c2520000 -
             (__real_40f00000 - param_3 * __real_42700000 * param_3);
    }
    if (param_2 == 3) {
      fVar1 = __real_3f800000 - param_3 * param_3;
      return SQRT(fVar1) * fVar1 * param_3 * ___real_c2d20000;
    }
    if (param_2 == 4) {
      fVar1 = param_3 * param_3 - __real_3f800000;
      return fVar1 * fVar1 * ___real_42d20000;
    }
    break;
  case 5:
    if (param_2 == 0) {
      return (param_3 * param_3 * param_3 * param_3 * __real_427c0000 +
             (__real_41700000 - param_3 * __real_428c0000 * param_3)) * param_3 * __real_3e000000;
    }
    if (param_2 == 1) {
      fVar2 = 0.0;
      fVar1 = __real_3f800000 - param_3 * param_3;
      if (__real_38d1b717 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar2 = SQRT(fVar1);
      }
      return ((__real_bff00000 - param_3 * ___real_c1d20000 * param_3) -
             param_3 * param_3 * param_3 * param_3 * ___real_421d8000) * fVar2;
    }
    if (param_2 == 2) {
      return param_3 * param_3 * param_3 * param_3 * ___real_c31d8000 * param_3 -
             (param_3 - param_3 * param_3 * param_3 * __real_40800000) * ___real_42520000;
    }
    if (param_2 == 3) {
      fVar1 = __real_3f800000 - param_3 * param_3;
      return SQRT(fVar1) * fVar1 * (param_3 * ___real_c3ec4000 * param_3 - ___real_c2520000);
    }
    if (param_2 == 4) {
      fVar1 = param_3 * param_3 - __real_3f800000;
      return fVar1 * fVar1 * param_3 * ___real_446c4000;
    }
    if (param_2 == 5) {
      fVar1 = __real_3f800000 - param_3 * param_3;
      return SQRT(fVar1) * fVar1 * fVar1 * ___real_c46c4000;
    }
  }
  return 0.0;
}

// LexToString @ 1417dfd20

FString * __cdecl LexToString(FString *__return_storage_ptr__,FIoHash *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  uint uVar7;
  undefined4 uStack_1c;
  TArrayView<unsigned_char_const_,int> local_18;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x29,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = 0x14;
  local_18.DataPtr = param_1->Hash;
  UE::String::BytesToHexLower
            (&local_18,(wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data);
  uVar7 = *piVar2 - 1;
  uVar5 = 0;
  if ((int)uVar7 < *piVar2) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  *(undefined2 *)
   ((__return_storage_ptr__->Data).AllocatorInstance.Data + (longlong)*piVar2 * 2 + -2) = 0;
  return __return_storage_ptr__;
}

// LexToString @ 1417dfe10

FString * __cdecl LexToString(FString *__return_storage_ptr__,FPackageId *param_1)

{
  FString::PrintfImpl(__return_storage_ptr__,L"%llX");
  return __return_storage_ptr__;
}

// MassUnificationFactor @ 1417e32c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl UnitConversion::MassUnificationFactor(EUnit param_1)

{
  double dVar1;
  
  dVar1 = __real_3ff0000000000000;
  switch(param_1) {
  case Micrograms:
    return __real_3eb0c6f7a0b5ed8d;
  case Milligrams:
    return __real_3f50624dd2f1a9fc;
  default:
    return __real_3ff0000000000000;
  case Kilograms:
    return __real_408f400000000000;
  case MetricTons:
    return __real_412e848000000000;
  case Stones:
    dVar1 = __real_402c000000000000;
  case Pounds:
    dVar1 = dVar1 * __real_4030000000000000;
  case Ounces:
    return dVar1 * ___real_403c5978d4fdf3b6;
  }
}

// MultiplierUnificationFactor @ 1417e5260

double __cdecl UnitConversion::MultiplierUnificationFactor(EUnit param_1)

{
  if (param_1 != Percentage) {
    return __real_3ff0000000000000;
  }
  return __real_3f847ae147ae147b;
}

// ParseLocalizedNumber @ 1417e8a80

TOptional<TStringToken<wchar_t>_> * __cdecl
ExpressionParser::ParseLocalizedNumber
          (TOptional<TStringToken<wchar_t>_> *__return_storage_ptr__,TTokenStream<wchar_t> *param_1,
          TStringToken<wchar_t> *param_2,double *param_3)

{
  FDecimalNumberFormattingRules *pFVar1;
  
  pFVar1 = GetLocalizedNumberFormattingRules();
  ParseNumberWithRules(__return_storage_ptr__,param_1,pFVar1,param_2,param_3);
  return __return_storage_ptr__;
}

// ParseLocalizedNumberWithAgnosticFallback @ 1417e8ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptional<TStringToken<wchar_t>_> * __cdecl
ExpressionParser::ParseLocalizedNumberWithAgnosticFallback
          (TOptional<TStringToken<wchar_t>_> *__return_storage_ptr__,TTokenStream<wchar_t> *param_1,
          TStringToken<wchar_t> *param_2,double *param_3)

{
  bool bVar1;
  wchar_t *pwVar2;
  int iVar3;
  FDecimalNumberFormattingRules *pFVar4;
  FDecimalNumberFormattingRules *pFVar5;
  FNumberParsingOptions *pFVar6;
  TOptional<TStringToken<wchar_t>_> *pTVar7;
  int local_res8 [2];
  int local_res10 [2];
  double local_68;
  FDecimalNumberFractionalLimits local_60;
  TOptional<TStringToken<wchar_t>_> local_50;
  
  pFVar4 = FastDecimalFormat::GetCultureAgnosticFormattingRules();
  pFVar5 = GetLocalizedNumberFormattingRules();
  local_res10[0] = 0;
  pFVar6 = FNumberParsingOptions::DefaultNoGrouping();
  local_68 = 0.0;
  local_60.NumericLimitLowest = (double)___xmm_7fefffffffffffffffefffffffffffff;
  local_60.NumericLimitMax = (double)_UNK_1506896f8;
  FastDecimalFormat::Internal::StringToFractional
            (param_1->ReadPos,(int)((longlong)param_1->End - (longlong)param_1->ReadPos >> 1),pFVar5
             ,pFVar6,&local_60,&local_68,local_res10);
  local_res8[0] = 0;
  pFVar6 = FNumberParsingOptions::DefaultNoGrouping();
  local_60.NumericLimitLowest = 0.0;
  local_50.TypedValue.TokenStart = ___xmm_7fefffffffffffffffefffffffffffff;
  local_50.TypedValue.TokenEnd = _UNK_1506896f8;
  FastDecimalFormat::Internal::StringToFractional
            (param_1->ReadPos,(int)((longlong)param_1->End - (longlong)param_1->ReadPos >> 1),pFVar4
             ,pFVar6,(FDecimalNumberFractionalLimits *)&local_50,&local_60.NumericLimitLowest,
             local_res8);
  if (local_res10[0] < local_res8[0]) {
    if (param_3 != (double *)0x0) {
      *param_3 = local_60.NumericLimitLowest;
    }
    if (0 < local_res8[0]) {
      pTVar7 = TTokenStream<wchar_t>::GenerateToken
                         (param_1,&local_50,local_res8[0],(TStringToken<wchar_t> *)0x0);
      goto LAB_1417e8c47;
    }
  }
  else {
    if (param_3 != (double *)0x0) {
      *param_3 = local_68;
    }
    if (0 < local_res10[0]) {
      pTVar7 = TTokenStream<wchar_t>::GenerateToken
                         (param_1,&local_50,local_res10[0],(TStringToken<wchar_t> *)0x0);
      goto LAB_1417e8c47;
    }
  }
  local_50.bIsSet = false;
  pTVar7 = &local_50;
LAB_1417e8c47:
  __return_storage_ptr__->bIsSet = false;
  bVar1 = pTVar7->bIsSet;
  __return_storage_ptr__->bIsSet = bVar1;
  if (bVar1 != false) {
    pwVar2 = (pTVar7->TypedValue).TokenEnd;
    (__return_storage_ptr__->TypedValue).TokenStart = (pTVar7->TypedValue).TokenStart;
    (__return_storage_ptr__->TypedValue).TokenEnd = pwVar2;
    iVar3 = (pTVar7->TypedValue).CharacterIndex;
    (__return_storage_ptr__->TypedValue).LineNumber = (pTVar7->TypedValue).LineNumber;
    (__return_storage_ptr__->TypedValue).CharacterIndex = iVar3;
  }
  return __return_storage_ptr__;
}

// ParseLogVerbosityFromString @ 1417e8c90

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl ParseLogVerbosityFromString(FString *param_1)

{
  int iVar1;
  Type TVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  pwVar4 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,L"NoLogging");
  if (iVar1 == 0) {
    return NoLogging;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,L"Fatal");
  if (iVar1 == 0) {
    return Fatal;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,L"Error");
  if (iVar1 == 0) {
    return Error;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,L"Warning");
  if (iVar1 == 0) {
    return Warning;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,L"Display");
  if (iVar1 == 0) {
    return Display;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,L"Log");
  if (iVar1 != 0) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,L"Verbose");
    if (iVar1 == 0) {
      return Verbose;
    }
    if ((param_1->Data).ArrayNum != 0) {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,L"VeryVerbose");
    TVar2 = Log;
    if (iVar1 == 0) {
      TVar2 = All;
    }
    return TVar2;
  }
  return Log;
}

// ParseNumber @ 1417e8e10

TOptional<TStringToken<wchar_t>_> * __cdecl
ExpressionParser::ParseNumber
          (TOptional<TStringToken<wchar_t>_> *__return_storage_ptr__,TTokenStream<wchar_t> *param_1,
          TStringToken<wchar_t> *param_2,double *param_3)

{
  FDecimalNumberFormattingRules *pFVar1;
  
  pFVar1 = FastDecimalFormat::GetCultureAgnosticFormattingRules();
  ParseNumberWithRules(__return_storage_ptr__,param_1,pFVar1,param_2,param_3);
  return __return_storage_ptr__;
}

// ParseNumberWithFallback @ 1417e8e70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptional<TStringToken<wchar_t>_> * __cdecl
ExpressionParser::ParseNumberWithFallback
          (TOptional<TStringToken<wchar_t>_> *__return_storage_ptr__,TTokenStream<wchar_t> *param_1,
          FDecimalNumberFormattingRules *param_2,FDecimalNumberFormattingRules *param_3,
          TStringToken<wchar_t> *param_4,double *param_5)

{
  bool bVar1;
  wchar_t *pwVar2;
  int iVar3;
  FNumberParsingOptions *pFVar4;
  TOptional<TStringToken<wchar_t>_> *pTVar5;
  int local_res10 [2];
  int local_58 [2];
  double local_50;
  FDecimalNumberFractionalLimits local_48;
  TOptional<TStringToken<wchar_t>_> local_38;
  
  local_58[0] = 0;
  pFVar4 = FNumberParsingOptions::DefaultNoGrouping();
  local_50 = 0.0;
  local_48.NumericLimitLowest = (double)___xmm_7fefffffffffffffffefffffffffffff;
  local_48.NumericLimitMax = (double)_UNK_1506896f8;
  FastDecimalFormat::Internal::StringToFractional
            (param_1->ReadPos,(int)((longlong)param_1->End - (longlong)param_1->ReadPos >> 1),
             param_2,pFVar4,&local_48,&local_50,local_58);
  local_res10[0] = 0;
  pFVar4 = FNumberParsingOptions::DefaultNoGrouping();
  local_48.NumericLimitLowest = 0.0;
  local_38.TypedValue.TokenStart = ___xmm_7fefffffffffffffffefffffffffffff;
  local_38.TypedValue.TokenEnd = _UNK_1506896f8;
  FastDecimalFormat::Internal::StringToFractional
            (param_1->ReadPos,(int)((longlong)param_1->End - (longlong)param_1->ReadPos >> 1),
             param_3,pFVar4,(FDecimalNumberFractionalLimits *)&local_38,&local_48.NumericLimitLowest
             ,local_res10);
  if (local_58[0] < local_res10[0]) {
    if (param_5 != (double *)0x0) {
      *param_5 = local_48.NumericLimitLowest;
    }
    if (0 < local_res10[0]) {
      pTVar5 = TTokenStream<wchar_t>::GenerateToken
                         (param_1,&local_38,local_res10[0],(TStringToken<wchar_t> *)0x0);
      goto LAB_1417e8fc4;
    }
  }
  else {
    if (param_5 != (double *)0x0) {
      *param_5 = local_50;
    }
    if (0 < local_58[0]) {
      pTVar5 = TTokenStream<wchar_t>::GenerateToken
                         (param_1,&local_38,local_58[0],(TStringToken<wchar_t> *)0x0);
      goto LAB_1417e8fc4;
    }
  }
  local_38.bIsSet = false;
  pTVar5 = &local_38;
LAB_1417e8fc4:
  __return_storage_ptr__->bIsSet = false;
  bVar1 = pTVar5->bIsSet;
  __return_storage_ptr__->bIsSet = bVar1;
  if (bVar1 != false) {
    pwVar2 = (pTVar5->TypedValue).TokenEnd;
    (__return_storage_ptr__->TypedValue).TokenStart = (pTVar5->TypedValue).TokenStart;
    (__return_storage_ptr__->TypedValue).TokenEnd = pwVar2;
    iVar3 = (pTVar5->TypedValue).CharacterIndex;
    (__return_storage_ptr__->TypedValue).LineNumber = (pTVar5->TypedValue).LineNumber;
    (__return_storage_ptr__->TypedValue).CharacterIndex = iVar3;
  }
  return __return_storage_ptr__;
}

// ParseNumberWithRules @ 1417e9010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptional<TStringToken<wchar_t>_> * __cdecl
ExpressionParser::ParseNumberWithRules
          (TOptional<TStringToken<wchar_t>_> *__return_storage_ptr__,TTokenStream<wchar_t> *param_1,
          FDecimalNumberFormattingRules *param_2,TStringToken<wchar_t> *param_3,double *param_4)

{
  bool bVar1;
  wchar_t *pwVar2;
  int iVar3;
  FNumberParsingOptions *pFVar4;
  TOptional<TStringToken<wchar_t>_> *pTVar5;
  int local_res8 [2];
  double local_res10;
  TOptional<TStringToken<wchar_t>_> local_28;
  
  local_res8[0] = 0;
  pFVar4 = FNumberParsingOptions::DefaultNoGrouping();
  local_res10 = 0.0;
  local_28.TypedValue.TokenStart = ___xmm_7fefffffffffffffffefffffffffffff;
  local_28.TypedValue.TokenEnd = _UNK_1506896f8;
  FastDecimalFormat::Internal::StringToFractional
            (param_1->ReadPos,(int)((longlong)param_1->End - (longlong)param_1->ReadPos >> 1),
             param_2,pFVar4,(FDecimalNumberFractionalLimits *)&local_28,&local_res10,local_res8);
  if (param_4 != (double *)0x0) {
    *param_4 = local_res10;
  }
  if (local_res8[0] < 1) {
    local_28.bIsSet = false;
    pTVar5 = &local_28;
  }
  else {
    pTVar5 = TTokenStream<wchar_t>::GenerateToken
                       (param_1,&local_28,local_res8[0],(TStringToken<wchar_t> *)0x0);
  }
  __return_storage_ptr__->bIsSet = false;
  bVar1 = pTVar5->bIsSet;
  __return_storage_ptr__->bIsSet = bVar1;
  if (bVar1 != false) {
    pwVar2 = (pTVar5->TypedValue).TokenEnd;
    (__return_storage_ptr__->TypedValue).TokenStart = (pTVar5->TypedValue).TokenStart;
    (__return_storage_ptr__->TypedValue).TokenEnd = pwVar2;
    iVar3 = (pTVar5->TypedValue).CharacterIndex;
    (__return_storage_ptr__->TypedValue).LineNumber = (pTVar5->TypedValue).LineNumber;
    (__return_storage_ptr__->TypedValue).CharacterIndex = iVar3;
  }
  return __return_storage_ptr__;
}

// PositionalImpulseUnificationFactor @ 1417eb220

double __cdecl UnitConversion::PositionalImpulseUnificationFactor(EUnit param_1)

{
  if (param_1 != KilogramCentimeters) {
    return __real_3ff0000000000000;
  }
  return __real_3f847ae147ae147b;
}

// SHGetLuminanceFactors @ 1417f81b0

FLinearColor * __cdecl SHGetLuminanceFactors(FLinearColor *__return_storage_ptr__)

{
  int iVar1;
  FColorSpace *this;
  IConsoleManager *pIVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pIVar2 = IConsoleManager::Get();
      CVar = (IConsoleVariable *)
             (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.LegacyLuminanceFactors",1);
      _Init_thread_footer(&_TSS0);
    }
  }
  if (CVar != (IConsoleVariable *)0x0) {
    iVar1 = (**(code **)(*(longlong *)CVar + 200))();
    if (iVar1 != 0) {
      (__return_storage_ptr__->field0_0x0)._s_0.R = 0.3;
      (__return_storage_ptr__->field0_0x0)._s_0.G = 0.59;
      (__return_storage_ptr__->field0_0x0)._s_0.B = 0.11;
      (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
      return __return_storage_ptr__;
    }
  }
  this = UE::Color::FColorSpace::GetWorking();
  UE::Color::FColorSpace::GetLuminanceFactors(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// SerializeForLog @ 1417f9ee0

void __cdecl SerializeForLog(FCbWriter *param_1,FIoStatus *param_2)

{
  int iVar1;
  EIoErrorCode EVar2;
  uint uVar3;
  FString *pFVar4;
  size_t sVar5;
  wchar_t *_Str;
  TStringView<char8_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  FCbWriter::BeginObject(param_1);
  local_38.Size = 5;
  local_28.DataPtr = L"IoStatus";
  local_28.Size = 8;
  local_38.DataPtr = "$type";
  FCbWriter::SetName(param_1,&local_38);
  FCbWriter::AddString(param_1,(TStringView<char8_t> *)&local_28);
  pFVar4 = FIoStatus::ToString(param_2,(FString *)&local_18);
  local_28.Size = 5;
  local_38.DataPtr = (uchar *)(pFVar4->Data).AllocatorInstance.Data;
  iVar1 = (pFVar4->Data).ArrayNum;
  local_38.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_38.Size = 0;
  }
  local_28.DataPtr = L"$text";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_28);
  local_28.DataPtr = (wchar_t *)local_38.DataPtr;
  local_28.Size = local_38.Size;
  local_28._12_4_ = local_38._12_4_;
  FCbWriter::AddString(param_1,&local_28);
  if (local_18.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  EVar2 = param_2->ErrorCode;
  local_28.DataPtr = L"ErrorCode";
  local_28.Size = 9;
  local_18.DataPtr = L"ErrorCode";
  local_18.Size = 9;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  FCbWriter::AddInteger(param_1,EVar2);
  uVar3 = param_2->SystemErrorCode;
  local_28.DataPtr = L"SystemErrorCode";
  local_28.Size = 0xf;
  local_18.DataPtr = L"SystemErrorCode";
  local_18.Size = 0xf;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  FCbWriter::AddInteger(param_1,uVar3);
  _Str = (param_2->ErrorMessage).Chars;
  if (_Str == (wchar_t *)0x0) {
    _Str = L"";
  }
  local_38.DataPtr = (uchar *)_Str;
  sVar5 = wcslen(_Str);
  local_38.Size = (int)sVar5;
  local_28.Size = 0xc;
  local_28.DataPtr = L"ErrorMessage";
  local_18.DataPtr = L"ErrorMessage";
  local_18.Size = 0xc;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  local_18.DataPtr = (wchar_t *)local_38.DataPtr;
  local_18.Size = local_38.Size;
  local_18._12_4_ = local_38._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  FCbWriter::EndObject(param_1);
  return;
}

// SerializeForLog @ 1417fa0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl SerializeForLog(FCbWriter *param_1,FPackageId *param_2)

{
  ulong64 uVar1;
  undefined1 auStack_488 [32];
  TStringView<char8_t> local_468;
  TStringView<char8_t> local_458;
  TStringBuilderBase<char8_t> local_448;
  uchar local_428 [1035];
  uchar local_1d [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_488;
  FCbWriter::BeginObject(param_1);
  local_458.Size = 5;
  local_468.DataPtr = "PackageId";
  local_468.Size = 9;
  local_458.DataPtr = "$type";
  FCbWriter::SetName(param_1,&local_458);
  FCbWriter::AddString(param_1,&local_468);
  local_448.Base = local_428;
  local_448.CurPos = local_428;
  local_448.bIsDynamic = false;
  local_448.bIsExternal = false;
  local_448.End = local_1d;
  TStringBuilderBase<char8_t>::AppendfImpl(&local_448,(uchar *)"0x%llX");
  local_468.Size = 5;
  local_458.Size = (int)local_448.CurPos - (int)local_448.Base;
  local_458.DataPtr = local_448.Base;
  local_468.DataPtr = "$text";
  FCbWriter::SetName(param_1,&local_468);
  local_468.DataPtr = local_458.DataPtr;
  local_468.Size = local_458.Size;
  local_468._12_4_ = local_458._12_4_;
  FCbWriter::AddString(param_1,&local_468);
  uVar1 = param_2->Id;
  local_468.Size = 2;
  local_468.DataPtr = "Id";
  FCbWriter::SetName(param_1,&local_468);
  FCbWriter::AddInteger(param_1,uVar1);
  FCbWriter::EndObject(param_1);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_448);
  return;
}

// Solve @ 1417ffcb0

void __thiscall
SegmentDistToSegment_Solver<float>::Solve
          (SegmentDistToSegment_Solver<float> *this,TVector<float> *param_1,TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TVector<float> *pTVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar8 = (this->S2).field0_0x0._s_0.X;
  fVar7 = (this->S2).field0_0x0._s_0.Y;
  fVar10 = (this->S3).field0_0x0._s_0.X;
  fVar11 = (this->S3).field0_0x0._s_0.Z;
  fVar5 = (this->S2).field0_0x0._s_0.Z;
  fVar6 = (this->S3).field0_0x0._s_0.Y;
  fVar1 = (this->S1).field0_0x0._s_0.Y;
  fVar2 = (this->S1).field0_0x0._s_0.Z;
  fVar3 = (this->S1).field0_0x0._s_0.X;
  fVar9 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
  fVar12 = fVar7 * fVar1 + fVar8 * fVar3 + fVar5 * fVar2;
  fVar13 = fVar6 * fVar1 + fVar10 * fVar3 + fVar11 * fVar2;
  fVar10 = fVar6 * fVar7 + fVar10 * fVar8 + fVar11 * fVar5;
  fVar11 = fVar7 * fVar7 + fVar8 * fVar8 + fVar5 * fVar5;
  fVar7 = fVar11 * fVar9 - fVar12 * fVar12;
  fVar8 = __real_3f800000;
  if ((this->bLinesAreNearlyParallel != false) || (fVar7 < __real_38d1b717)) {
LAB_1417ffe2f:
    fVar5 = 0.0;
    fVar6 = fVar10;
    fVar7 = fVar11;
  }
  else {
    fVar5 = fVar10 * fVar12 - fVar11 * fVar13;
    fVar8 = fVar7;
    if (fVar5 < 0.0) goto LAB_1417ffe2f;
    fVar6 = fVar10 * fVar9 - fVar13 * fVar12;
    if (fVar7 < fVar5) {
      fVar5 = fVar7;
      fVar6 = fVar10 + fVar12;
      fVar7 = fVar11;
    }
  }
  fVar11 = 0.0;
  fVar10 = fVar8;
  if (0.0 <= fVar6) {
    if (fVar6 <= fVar7) goto LAB_1417ffe77;
    fVar5 = fVar12 - fVar13;
    fVar6 = fVar7;
  }
  else {
    fVar5 = (float)((uint)fVar13 ^ __xmm_80000000800000008000000080000000);
    fVar6 = 0.0;
  }
  if (0.0 <= fVar5) {
    fVar10 = fVar9;
    if (fVar9 < fVar5) {
      fVar5 = fVar8;
      fVar10 = fVar8;
    }
  }
  else {
    fVar5 = 0.0;
  }
LAB_1417ffe77:
  if (__real_38d1b717 <= (float)((uint)fVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar5 = fVar5 / fVar10;
  }
  else {
    fVar5 = 0.0;
  }
  if (__real_38d1b717 <= (float)((uint)fVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar11 = fVar6 / fVar7;
  }
  pTVar4 = this->A1;
  fVar8 = (pTVar4->field0_0x0)._s_0.Y;
  fVar7 = (pTVar4->field0_0x0)._s_0.Z;
  (param_1->field0_0x0)._s_0.X = fVar3 * fVar5 + (pTVar4->field0_0x0)._s_0.X;
  (param_1->field0_0x0)._s_0.Y = fVar1 * fVar5 + fVar8;
  (param_1->field0_0x0)._s_0.Z = fVar2 * fVar5 + fVar7;
  pTVar4 = this->A2;
  fVar8 = (this->S2).field0_0x0._s_0.Y;
  fVar7 = (this->S2).field0_0x0._s_0.Z;
  fVar10 = (pTVar4->field0_0x0)._s_0.Y;
  fVar5 = (pTVar4->field0_0x0)._s_0.Z;
  (param_2->field0_0x0)._s_0.X = fVar11 * (this->S2).field0_0x0._s_0.X + (pTVar4->field0_0x0)._s_0.X
  ;
  (param_2->field0_0x0)._s_0.Y = fVar11 * fVar8 + fVar10;
  (param_2->field0_0x0)._s_0.Z = fVar11 * fVar7 + fVar5;
  return;
}

// Solve @ 1417fff60

void __thiscall
SegmentDistToSegment_Solver<double>::Solve
          (SegmentDistToSegment_Solver<double> *this,TVector<double> *param_1,
          TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TVector<double> *pTVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar13 = (this->S2).field0_0x0._s_0.X;
  dVar12 = (this->S2).field0_0x0._s_0.Y;
  dVar9 = (this->S3).field0_0x0._s_0.X;
  dVar11 = (this->S3).field0_0x0._s_0.Z;
  dVar8 = (this->S2).field0_0x0._s_0.Z;
  dVar10 = (this->S3).field0_0x0._s_0.Y;
  dVar1 = (this->S1).field0_0x0._s_0.Y;
  dVar2 = (this->S1).field0_0x0._s_0.Z;
  dVar3 = (this->S1).field0_0x0._s_0.X;
  dVar5 = dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2;
  dVar6 = dVar12 * dVar1 + dVar13 * dVar3 + dVar8 * dVar2;
  dVar7 = dVar10 * dVar1 + dVar9 * dVar3 + dVar11 * dVar2;
  dVar9 = dVar10 * dVar12 + dVar9 * dVar13 + dVar11 * dVar8;
  dVar13 = dVar12 * dVar12 + dVar13 * dVar13 + dVar8 * dVar8;
  dVar11 = dVar13 * dVar5 - dVar6 * dVar6;
  dVar12 = __real_3ff0000000000000;
  if ((this->bLinesAreNearlyParallel != false) || (dVar11 < __real_3f1a36e2e0000000)) {
LAB_1418000e2:
    dVar8 = 0.0;
    dVar10 = dVar9;
    dVar11 = dVar13;
  }
  else {
    dVar8 = dVar9 * dVar6 - dVar13 * dVar7;
    dVar12 = dVar11;
    if (dVar8 < 0.0) goto LAB_1418000e2;
    dVar10 = dVar9 * dVar5 - dVar7 * dVar6;
    if (dVar11 < dVar8) {
      dVar8 = dVar11;
      dVar10 = dVar9 + dVar6;
      dVar11 = dVar13;
    }
  }
  dVar9 = 0.0;
  dVar13 = dVar12;
  if (0.0 <= dVar10) {
    if (dVar10 <= dVar11) goto LAB_14180012e;
    dVar8 = dVar6 - dVar7;
    dVar10 = dVar11;
  }
  else {
    dVar8 = (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar7,0) ^ (uint)__xmm_80000000000000008000000000000000);
    dVar10 = 0.0;
  }
  if (0.0 <= dVar8) {
    dVar13 = dVar5;
    if (dVar5 < dVar8) {
      dVar8 = dVar12;
      dVar13 = dVar12;
    }
  }
  else {
    dVar8 = 0.0;
  }
LAB_14180012e:
  if (__real_3f1a36e2e0000000 <=
      (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar8 = dVar8 / dVar13;
  }
  else {
    dVar8 = 0.0;
  }
  if (__real_3f1a36e2e0000000 <=
      (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar9 = dVar10 / dVar11;
  }
  pTVar4 = this->A1;
  dVar13 = (pTVar4->field0_0x0)._s_0.Y;
  dVar12 = (pTVar4->field0_0x0)._s_0.Z;
  (param_1->field0_0x0)._s_0.X = dVar3 * dVar8 + (pTVar4->field0_0x0)._s_0.X;
  (param_1->field0_0x0)._s_0.Y = dVar1 * dVar8 + dVar13;
  (param_1->field0_0x0)._s_0.Z = dVar2 * dVar8 + dVar12;
  pTVar4 = this->A2;
  dVar13 = (this->S2).field0_0x0._s_0.Y;
  dVar12 = (this->S2).field0_0x0._s_0.Z;
  dVar11 = (pTVar4->field0_0x0)._s_0.Y;
  dVar8 = (pTVar4->field0_0x0)._s_0.Z;
  (param_2->field0_0x0)._s_0.X = dVar9 * (this->S2).field0_0x0._s_0.X + (pTVar4->field0_0x0)._s_0.X;
  (param_2->field0_0x0)._s_0.Y = dVar9 * dVar13 + dVar11;
  (param_2->field0_0x0)._s_0.Z = dVar9 * dVar12 + dVar8;
  return;
}

// SpeedUnificationFactor @ 141800220

double __cdecl UnitConversion::SpeedUnificationFactor(EUnit param_1)

{
  double dVar1;
  
  if (param_1 == CentimetersPerSecond) {
    return __real_3fa26e978d4fdf3b;
  }
  if (param_1 != MetersPerSecond) {
    if (param_1 != MilesPerHour) {
      return __real_3ff0000000000000;
    }
    dVar1 = DistanceUnificationFactor(Miles);
    return dVar1 * __real_3f50624dd2f1a9fc;
  }
  return __real_400ccccccccccccd;
}

// StatusOrCrash @ 1418010a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl StatusOrCrash(FIoStatus *param_1)

{
  FString local_18;
  
  FIoStatus::ToString(param_1,&local_18);
  UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogIoStatus);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// StressUnificationFactor @ 141801110

double __cdecl UnitConversion::StressUnificationFactor(EUnit param_1)

{
  if (param_1 != Pascals) {
    if (param_1 == KiloPascals) {
      return __real_408f400000000000;
    }
    if (param_1 == MegaPascals) {
      return __real_412e848000000000;
    }
    if (param_1 == GigaPascals) {
      return __real_41cdcd6500000000;
    }
  }
  return __real_3ff0000000000000;
}

// SubEval @ 141801160

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl SubEval(FString *param_1,float *param_2,int param_3)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  undefined **ppuVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar9;
  float fVar10;
  float fVar11;
  float local_res20 [2];
  FString local_108;
  float local_f8 [2];
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [4];
  FScriptContainerElement *pFVar8;
  
  pFVar8 = (FScriptContainerElement *)0x0;
  pFVar7 = (FScriptContainerElement *)0x0;
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  local_f8[0] = 0.0;
  local_res20[0] = 0.0;
  pFVar4 = GrabChar(&local_f0,param_1);
  if (&local_108 != pFVar4) {
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    local_108.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Data.ArrayNum = (pFVar4->Data).ArrayNum;
    local_108.Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_108.Data.ArrayNum != 0) {
    FVar5.Data = local_108.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"0");
  pFVar9 = pFVar7;
  if (iVar3 < 0) {
LAB_14180124f:
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar5.Data = local_108.Data.AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L".");
    fVar1 = __real_41200000;
    if (iVar3 != 0) {
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_108.Data.ArrayNum != 0) {
        FVar5.Data = local_108.Data.AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"(");
      if (iVar3 == 0) {
        bVar2 = SubEval(param_1,local_res20,0);
        if (bVar2) goto LAB_141801574;
      }
      else {
        FVar5.Data = (FScriptContainerElement *)L"";
        if (local_108.Data.ArrayNum != 0) {
          FVar5.Data = local_108.Data.AllocatorInstance.Data;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"-");
        if (iVar3 == 0) {
          bVar2 = SubEval(param_1,local_res20,1000);
          if (bVar2) {
            local_res20[0] = (float)((uint)local_res20[0] ^ __xmm_80000000800000008000000080000000);
            goto LAB_141801574;
          }
        }
        else {
          FVar5.Data = (FScriptContainerElement *)L"";
          if (local_108.Data.ArrayNum != 0) {
            FVar5.Data = local_108.Data.AllocatorInstance.Data;
          }
          iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"+");
          if (iVar3 == 0) {
            bVar2 = SubEval(param_1,local_res20,1000);
            if (bVar2) goto LAB_141801574;
          }
          else {
            FVar5.Data = (FScriptContainerElement *)L"";
            if (local_108.Data.ArrayNum != 0) {
              FVar5.Data = local_108.Data.AllocatorInstance.Data;
            }
            iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"@");
            if (iVar3 == 0) {
              bVar2 = SubEval(param_1,local_res20,1000);
              if (!bVar2) goto LAB_141801bea;
              if (0.0 <= local_res20[0]) {
                local_res20[0] = SQRT(local_res20[0]);
                goto LAB_141801574;
              }
              if ((byte)LogUnrealMath._0_1_ < 5) goto LAB_141801bea;
              ppuVar6 = (undefined **)&LOG_Static;
            }
            else {
              if ((byte)LogUnrealMath._0_1_ < 5) goto LAB_141801bea;
              ppuVar6 = (undefined **)&LOG_Static;
            }
LAB_141801bde:
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)ppuVar6,(FLogCategoryBase *)&LogUnrealMath);
            pFVar9 = pFVar7;
          }
        }
      }
      goto LAB_141801bea;
    }
  }
  else {
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar5.Data = local_108.Data.AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"9");
    fVar1 = __real_41200000;
    if (0 < iVar3) goto LAB_14180124f;
  }
  while( true ) {
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar5.Data = local_108.Data.AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"0");
    if (iVar3 < 0) break;
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar5.Data = local_108.Data.AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"9");
    if (0 < iVar3) break;
    fVar11 = local_res20[0] * fVar1;
    local_res20[0] = Val(&local_108);
    local_res20[0] = local_res20[0] + fVar11;
    pFVar4 = GrabChar(&local_f0,param_1);
    if (&local_108 != pFVar4) {
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      local_108.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.Data.ArrayNum = (pFVar4->Data).ArrayNum;
      local_108.Data.ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_108.Data.ArrayNum != 0) {
    FVar5.Data = local_108.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L".");
  fVar1 = __real_3dcccccd;
  fVar11 = __real_3dcccccd;
  if (iVar3 == 0) {
    while( true ) {
      pFVar4 = GrabChar(&local_f0,param_1);
      if (&local_108 != pFVar4) {
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        local_108.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
        (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.Data.ArrayNum = (pFVar4->Data).ArrayNum;
        local_108.Data.ArrayMax = (pFVar4->Data).ArrayMax;
        (pFVar4->Data).ArrayNum = 0;
        (pFVar4->Data).ArrayMax = 0;
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_108.Data.ArrayNum != 0) {
        FVar5.Data = local_108.Data.AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"0");
      if (iVar3 < 0) break;
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_108.Data.ArrayNum != 0) {
        FVar5.Data = local_108.Data.AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"9");
      if (0 < iVar3) break;
      fVar10 = Val(&local_108);
      local_res20[0] = local_res20[0] + fVar10 * fVar11;
      fVar11 = fVar11 * fVar1;
    }
  }
LAB_1418015d0:
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_108.Data.ArrayNum != 0) {
    FVar5.Data = local_108.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"");
  if (iVar3 != 0) {
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar5.Data = local_108.Data.AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L")");
    if (iVar3 == 0) {
      pFVar4 = FString::FString(&local_90,L")");
      FString::ConcatFF(&local_a0,pFVar4,param_1);
      if (param_1 != &local_a0) {
        pFVar7 = (param_1->Data).AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        (param_1->Data).AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
        (param_1->Data).ArrayNum = local_a0.Data.ArrayNum;
        (param_1->Data).ArrayMax = local_a0.Data.ArrayMax;
        local_a0.Data.ArrayNum = 0;
        local_a0.Data.ArrayMax = 0;
        local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      goto LAB_141801bc0;
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar5.Data = local_108.Data.AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"+");
    pFVar9 = pFVar8;
    if (iVar3 == 0) {
      if (1 < param_3) {
        *param_2 = local_res20[0];
        FString::ConcatFF(&local_e0,&local_108,param_1);
        FVar5.Data = local_e0.Data.AllocatorInstance.Data;
        if (param_1 != &local_e0) {
          pFVar7 = (param_1->Data).AllocatorInstance.Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          (param_1->Data).AllocatorInstance.Data = local_e0.Data.AllocatorInstance.Data;
          (param_1->Data).ArrayNum = local_e0.Data.ArrayNum;
          (param_1->Data).ArrayMax = local_e0.Data.ArrayMax;
          local_e0.Data.ArrayNum = 0;
          local_e0.Data.ArrayMax = 0;
          local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar5.Data = pFVar8;
        }
LAB_141801990:
        if (FVar5.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar5.Data);
        }
LAB_14180199d:
        pFVar9 = (FScriptContainerElement *)&DAT_00000001;
        goto LAB_141801bea;
      }
      bVar2 = SubEval(param_1,local_f8,2);
      if (!bVar2) goto LAB_141801bea;
      local_res20[0] = local_res20[0] + local_f8[0];
LAB_141801574:
      pFVar4 = GrabChar(&local_f0,param_1);
      FVar5.Data = local_f0.Data.AllocatorInstance.Data;
      if (&local_108 != pFVar4) {
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        local_108.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
        (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.Data.ArrayNum = (pFVar4->Data).ArrayNum;
        local_108.Data.ArrayMax = (pFVar4->Data).ArrayMax;
        (pFVar4->Data).ArrayNum = 0;
        (pFVar4->Data).ArrayMax = 0;
        FVar5.Data = local_f0.Data.AllocatorInstance.Data;
      }
    }
    else {
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_108.Data.ArrayNum != 0) {
        FVar5.Data = local_108.Data.AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"-");
      if (iVar3 == 0) {
        if (1 < param_3) {
          *param_2 = local_res20[0];
          FString::ConcatFF(&local_d0,&local_108,param_1);
          FVar5.Data = local_d0.Data.AllocatorInstance.Data;
          if (param_1 != &local_d0) {
            pFVar7 = (param_1->Data).AllocatorInstance.Data;
            if (pFVar7 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar7);
            }
            (param_1->Data).AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
            (param_1->Data).ArrayNum = local_d0.Data.ArrayNum;
            (param_1->Data).ArrayMax = local_d0.Data.ArrayMax;
            local_d0.Data.ArrayNum = 0;
            local_d0.Data.ArrayMax = 0;
            local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            FVar5.Data = pFVar8;
          }
          goto LAB_141801990;
        }
        bVar2 = SubEval(param_1,local_f8,2);
        if (!bVar2) goto LAB_141801bea;
        local_res20[0] = local_res20[0] - local_f8[0];
        pFVar4 = GrabChar(&local_80,param_1);
        FVar5.Data = local_80.Data.AllocatorInstance.Data;
        if (&local_108 != pFVar4) {
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          local_108.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
          (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_108.Data.ArrayNum = (pFVar4->Data).ArrayNum;
          local_108.Data.ArrayMax = (pFVar4->Data).ArrayMax;
          (pFVar4->Data).ArrayNum = 0;
          (pFVar4->Data).ArrayMax = 0;
          FVar5.Data = local_80.Data.AllocatorInstance.Data;
        }
      }
      else {
        FVar5.Data = (FScriptContainerElement *)L"";
        if (local_108.Data.ArrayNum != 0) {
          FVar5.Data = local_108.Data.AllocatorInstance.Data;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"/");
        if (iVar3 == 0) {
          if (2 < param_3) {
            *param_2 = local_res20[0];
            FString::ConcatFF(&local_c0,&local_108,param_1);
            FVar5.Data = local_c0.Data.AllocatorInstance.Data;
            if (param_1 != &local_c0) {
              pFVar8 = (param_1->Data).AllocatorInstance.Data;
              if (pFVar8 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar8);
              }
              (param_1->Data).AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
              (param_1->Data).ArrayNum = local_c0.Data.ArrayNum;
              (param_1->Data).ArrayMax = local_c0.Data.ArrayMax;
              local_c0.Data.ArrayNum = 0;
              local_c0.Data.ArrayMax = 0;
              local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              FVar5.Data = pFVar7;
            }
            goto LAB_141801990;
          }
          bVar2 = SubEval(param_1,local_f8,3);
          if (!bVar2) goto LAB_141801bea;
          if (local_f8[0] == 0.0) {
            pFVar9 = pFVar7;
            if (4 < (byte)LogUnrealMath._0_1_) {
              ppuVar6 = &PTR_u_Expression_Erro_150686140;
              goto LAB_141801bde;
            }
            goto LAB_141801bea;
          }
          local_res20[0] = local_res20[0] / local_f8[0];
          pFVar4 = GrabChar(&local_70,param_1);
          FVar5.Data = local_70.Data.AllocatorInstance.Data;
          if (&local_108 != pFVar4) {
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
            local_108.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
            (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_108.Data.ArrayNum = (pFVar4->Data).ArrayNum;
            local_108.Data.ArrayMax = (pFVar4->Data).ArrayMax;
            (pFVar4->Data).ArrayNum = 0;
            (pFVar4->Data).ArrayMax = 0;
            FVar5.Data = local_70.Data.AllocatorInstance.Data;
          }
        }
        else {
          FVar5.Data = (FScriptContainerElement *)L"";
          if (local_108.Data.ArrayNum != 0) {
            FVar5.Data = local_108.Data.AllocatorInstance.Data;
          }
          iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"%");
          if (iVar3 == 0) {
            if (2 < param_3) {
              *param_2 = local_res20[0];
              FString::ConcatFF(&local_f0,&local_108,param_1);
              FString::operator=(param_1,&local_f0);
              if (local_f0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
              goto LAB_14180199d;
              FMemory::Free(local_f0.Data.AllocatorInstance.Data);
              pFVar9 = (FScriptContainerElement *)&DAT_00000001;
              goto LAB_141801bea;
            }
            bVar2 = SubEval(param_1,local_f8,3);
            pFVar9 = pFVar7;
            if (!bVar2) goto LAB_141801bea;
            if (local_f8[0] == 0.0) {
              if (4 < (byte)LogUnrealMath._0_1_) {
                ppuVar6 = (undefined **)&LOG_Static;
                goto LAB_141801bde;
              }
              goto LAB_141801bea;
            }
            local_res20[0] = (float)((int)local_res20[0] % (int)local_f8[0]);
            pFVar4 = GrabChar(local_60,param_1);
            FVar5.Data = local_60[0].Data.AllocatorInstance.Data;
            if (&local_108 != pFVar4) {
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
              local_108.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
              (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_108.Data.ArrayNum = (pFVar4->Data).ArrayNum;
              local_108.Data.ArrayMax = (pFVar4->Data).ArrayMax;
              (pFVar4->Data).ArrayNum = 0;
              (pFVar4->Data).ArrayMax = 0;
              FVar5.Data = local_60[0].Data.AllocatorInstance.Data;
            }
          }
          else {
            FVar5.Data = (FScriptContainerElement *)L"";
            if (local_108.Data.ArrayNum != 0) {
              FVar5.Data = local_108.Data.AllocatorInstance.Data;
            }
            iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"*");
            if (iVar3 != 0) {
              pFVar9 = pFVar7;
              if (4 < (byte)LogUnrealMath._0_1_) {
                ppuVar6 = (undefined **)&LOG_Static;
                goto LAB_141801bde;
              }
              goto LAB_141801bea;
            }
            if (3 < param_3) {
              *param_2 = local_res20[0];
              FString::ConcatFF(&local_b0,&local_108,param_1);
              FVar5.Data = local_b0.Data.AllocatorInstance.Data;
              if (param_1 != &local_b0) {
                pFVar8 = (param_1->Data).AllocatorInstance.Data;
                if (pFVar8 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar8);
                }
                (param_1->Data).AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
                (param_1->Data).ArrayNum = local_b0.Data.ArrayNum;
                (param_1->Data).ArrayMax = local_b0.Data.ArrayMax;
                local_b0.Data.ArrayNum = 0;
                local_b0.Data.ArrayMax = 0;
                local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                FVar5.Data = pFVar7;
              }
              goto LAB_141801990;
            }
            bVar2 = SubEval(param_1,local_f8,4);
            pFVar9 = pFVar7;
            if (!bVar2) goto LAB_141801bea;
            local_res20[0] = local_res20[0] * local_f8[0];
            pFVar4 = GrabChar(&local_90,param_1);
            FVar5.Data = local_90.Data.AllocatorInstance.Data;
            if (&local_108 != pFVar4) {
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
              local_108.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
              (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_108.Data.ArrayNum = (pFVar4->Data).ArrayNum;
              local_108.Data.ArrayMax = (pFVar4->Data).ArrayMax;
              (pFVar4->Data).ArrayNum = 0;
              (pFVar4->Data).ArrayMax = 0;
              FVar5.Data = local_90.Data.AllocatorInstance.Data;
            }
          }
        }
      }
    }
    if (FVar5.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar5.Data);
    }
    goto LAB_1418015d0;
  }
LAB_141801bc0:
  *param_2 = local_res20[0];
  pFVar9 = (FScriptContainerElement *)&DAT_00000001;
LAB_141801bea:
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  return (bool)(char)pFVar9;
}

// TestExpression @ 141801d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl TestExpression(FAutomationTestBase *param_1,wchar_t *param_2,double param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString *pFVar5;
  ulonglong uVar6;
  undefined1 auStack_338 [32];
  double local_318;
  FString local_308;
  TValueOrError<double,FExpressionError> local_2f8;
  FBasicMathExpressionEvaluator local_2d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_338;
  FBasicMathExpressionEvaluator::FBasicMathExpressionEvaluator(&local_2d8);
  FBasicMathExpressionEvaluator::Evaluate(&local_2d8,&local_2f8,param_2,0.0);
  uVar6 = (ulonglong)local_2f8.Variant.TypeIndex;
  if (2 < uVar6) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<double,double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar6) == '\0') {
    pcVar1 = *(code **)(param_1->_padding_ + 0x28);
    if (local_2f8.Variant.TypeIndex != 1) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pFVar5 = FText::ToString((FText *)&local_2f8);
    (*pcVar1)(param_1,pFVar5,0);
    bVar2 = false;
  }
  else {
    if (local_2f8.Variant.TypeIndex != 0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if ((double)local_2f8.Variant._padding_ == param_3) {
      bVar2 = true;
    }
    else {
      pcVar1 = *(code **)(param_1->_padding_ + 0x28);
      if (local_2f8.Variant.TypeIndex != 0) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      local_318 = param_3;
      FString::PrintfImpl(&local_308,L"\'%s\' evaluation results: %.f != %.f");
      (*pcVar1)(param_1,&local_308,0);
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
      bVar2 = false;
    }
  }
  if (2 < local_2f8.Variant.TypeIndex) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_2f8.Variant.TypeIndex])(&local_2f8);
  TOperatorJumpTable<void,wchar_t>::~TOperatorJumpTable<void,wchar_t>(&local_2d8.JumpTable);
  FExpressionGrammar::~FExpressionGrammar(&local_2d8.Grammar);
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_2d8.TokenDefinitions.Definitions.AllocatorInstance.Data,
             local_2d8.TokenDefinitions.Definitions.ArrayNum);
  if ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
      local_2d8.TokenDefinitions.Definitions.AllocatorInstance.Data !=
      (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)0x0) {
    FMemory::Free(local_2d8.TokenDefinitions.Definitions.AllocatorInstance.Data);
  }
  return bVar2;
}

// TestInvalidExpression @ 141801fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl TestInvalidExpression(FAutomationTestBase *param_1,wchar_t *param_2)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  undefined1 auStack_2f8 [32];
  TValueOrError<double,FExpressionError> local_2d8;
  FBasicMathExpressionEvaluator local_2b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  FBasicMathExpressionEvaluator::FBasicMathExpressionEvaluator(&local_2b8);
  FBasicMathExpressionEvaluator::Evaluate(&local_2b8,&local_2d8,param_2,0.0);
  uVar5 = (ulonglong)local_2d8.Variant.TypeIndex;
  if (2 < uVar5) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  cVar1 = *(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<double,double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar5);
  if (2 < local_2d8.Variant.TypeIndex) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_2d8.Variant.TypeIndex])(&local_2d8);
  TOperatorJumpTable<void,wchar_t>::~TOperatorJumpTable<void,wchar_t>(&local_2b8.JumpTable);
  FExpressionGrammar::~FExpressionGrammar(&local_2b8.Grammar);
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_2b8.TokenDefinitions.Definitions.AllocatorInstance.Data,
             local_2b8.TokenDefinitions.Definitions.ArrayNum);
  if ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
      local_2b8.TokenDefinitions.Definitions.AllocatorInstance.Data !=
      (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)0x0) {
    FMemory::Free(local_2b8.TokenDefinitions.Definitions.AllocatorInstance.Data);
  }
  return cVar1 == '\0';
}

// TimeUnificationFactor @ 141802110

double __cdecl UnitConversion::TimeUnificationFactor(EUnit param_1)

{
  double dVar1;
  
  dVar1 = __real_3ff0000000000000;
  switch(param_1) {
  case Nanoseconds:
    dVar1 = __real_3f50624dd2f1a9fc;
  case Microseconds:
    dVar1 = dVar1 * __real_3f50624dd2f1a9fc;
  case Milliseconds:
    dVar1 = dVar1 * __real_3f50624dd2f1a9fc;
  case Seconds:
    dVar1 = dVar1 * __real_3f91111111111111;
  case Minutes:
    dVar1 = dVar1 * __real_3f91111111111111;
  default:
    return dVar1;
  case Months:
    return __real_4086d3df3b645a1d;
  case Years:
    dVar1 = __real_4076d3df3b645a1d;
  case Days:
    return dVar1 * __real_4038000000000000;
  }
}

// ToString @ 141807010

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __cdecl ToString(Type param_1)

{
  switch(param_1 & VerbosityMask) {
  case NoLogging:
    return L"NoLogging";
  case Fatal:
    return L"Fatal";
  case Error:
    return L"Error";
  case Warning:
    return L"Warning";
  case Display:
    return L"Display";
  case Log:
    return L"Log";
  case Verbose:
    return L"Verbose";
  case All:
    return L"VeryVerbose";
  default:
    return L"UnknownVerbosity";
  }
}

// TorqueUnificationFactor @ 141808460

double __cdecl UnitConversion::TorqueUnificationFactor(EUnit param_1)

{
  if (param_1 != KilogramCentimetersSquaredPerSecondSquared) {
    return __real_3ff0000000000000;
  }
  return __real_3f1a36e2eb1c432d;
}

// TryParseExpression @ 14180a1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FNumericUnit<double>,FText> * __cdecl
UnitConversion::TryParseExpression
          (TValueOrError<FNumericUnit<double>,FText> *__return_storage_ptr__,wchar_t *param_1,
          EUnit param_2,FNumericUnit<double> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TValueOrError<FNumericUnit<double>,FText> *pTVar3;
  ulonglong uVar4;
  undefined1 auStack_318 [32];
  undefined1 local_2f8 [8];
  TValueOrError<FNumericUnit<double>,FExpressionError> local_2f0;
  FUnitExpressionParser local_2d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_318;
  FUnitExpressionParser::FUnitExpressionParser(&local_2d8,param_2);
  FUnitExpressionParser::Evaluate(&local_2d8,&local_2f0,param_1,param_3);
  uVar4 = (ulonglong)local_2f0.Variant.TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TValueOrError<FNumericUnit<double>,FText> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<double,double,TValueOrError<double,FExpressionError>::FWrapErrorType,TValueOrError<double,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4 + 4) == '\0') {
    if (local_2f0.Variant.TypeIndex != 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<FNumericUnit<double>,FText> *)(*pcVar1)();
        return pTVar3;
      }
    }
    (__return_storage_ptr__->Variant)._padding_ = local_2f0.Variant._padding_;
    if ((longlong *)local_2f0.Variant._padding_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_2f0.Variant._padding_ + 8))
                (local_2f0.Variant._padding_,local_2f8);
    }
    *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ =
         (undefined4)local_2f0.Variant._padding_;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  }
  else {
    if (local_2f0.Variant.TypeIndex != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<FNumericUnit<double>,FText> *)(*pcVar1)();
        return pTVar3;
      }
    }
    if ((char)local_2f0.Variant._padding_ == 'L') {
      if (local_2f0.Variant.TypeIndex != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar3 = (TValueOrError<FNumericUnit<double>,FText> *)(*pcVar1)();
          return pTVar3;
        }
      }
      (__return_storage_ptr__->Variant)._padding_ = local_2f0.Variant._padding_;
      *(EUnit *)&(__return_storage_ptr__->Variant)._padding_ = param_2;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      if (2 < local_2f0.Variant.TypeIndex) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar3 = (TValueOrError<FNumericUnit<double>,FText> *)(*pcVar1)();
          return pTVar3;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FNumericUnit<double>,TValueOrError<FNumericUnit<double>,FExpressionError>::FWrapErrorType,TValueOrError<struct_FNumericUnit<double>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_2f0.Variant.TypeIndex])(&local_2f0);
      goto LAB_14180a3ec;
    }
    if (local_2f0.Variant.TypeIndex != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<FNumericUnit<double>,FText> *)(*pcVar1)();
        return pTVar3;
      }
    }
    (__return_storage_ptr__->Variant)._padding_ = local_2f0.Variant._padding_;
    *(char *)&(__return_storage_ptr__->Variant)._padding_ = (char)local_2f0.Variant._padding_;
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
  }
  if (2 < local_2f0.Variant.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TValueOrError<FNumericUnit<double>,FText> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FNumericUnit<double>,TValueOrError<FNumericUnit<double>,FExpressionError>::FWrapErrorType,TValueOrError<struct_FNumericUnit<double>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_2f0.Variant.TypeIndex])(&local_2f0);
LAB_14180a3ec:
  TOperatorJumpTable<void,wchar_t>::~TOperatorJumpTable<void,wchar_t>(&local_2d8.JumpTable);
  FExpressionGrammar::~FExpressionGrammar(&local_2d8.Grammar);
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_2d8.TokenDefinitions.Definitions.AllocatorInstance.Data,
             local_2d8.TokenDefinitions.Definitions.ArrayNum);
  if ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
      local_2d8.TokenDefinitions.Definitions.AllocatorInstance.Data !=
      (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)0x0) {
    FMemory::Free(local_2d8.TokenDefinitions.Definitions.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Val @ 14180c730

float __cdecl Val(FString *param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  ForAnyElementType FVar4;
  int iVar5;
  float fVar6;
  FString local_38 [3];
  
  fVar2 = __real_41200000;
  iVar5 = 0;
  fVar6 = 0.0;
  do {
    iVar1 = (param_1->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    if (iVar3 <= iVar5) {
      return fVar6;
    }
    FString::Mid(param_1,local_38,iVar5,1);
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_38[0].Data.ArrayNum != 0) {
      FVar4.Data = local_38[0].Data.AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar4.Data,L"0");
    if (iVar3 < 0) {
LAB_14180c7f6:
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_38[0].Data.ArrayNum != 0) {
        FVar4.Data = local_38[0].Data.AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar4.Data,L" ");
      if (iVar3 != 0) {
        if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
        }
        return fVar6;
      }
    }
    else {
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_38[0].Data.ArrayNum != 0) {
        FVar4.Data = local_38[0].Data.AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar4.Data,L"9");
      if (0 < iVar3) goto LAB_14180c7f6;
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_38[0].Data.ArrayNum != 0) {
        FVar4.Data = local_38[0].Data.AllocatorInstance.Data;
      }
      iVar3 = _wtoi((wchar_t *)FVar4.Data);
      fVar6 = fVar6 * fVar2 + (float)iVar3;
    }
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

// DefaultMessageTokenActivated'' @ 15033e2a0

void __cdecl `dynamic_atexit_destructor_for_'FActorToken::DefaultMessageTokenActivated__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FActorToken::DefaultMessageTokenActivated,(FWriteAccessScope *)&local_28);
  if ((FActorToken::DefaultMessageTokenActivated._16_4_ != 0) &&
     (FActorToken::DefaultMessageTokenActivated._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FActorToken::DefaultMessageTokenActivated._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FActorToken::DefaultMessageTokenActivated.field_0x8,0,0,0x10);
    FActorToken::DefaultMessageTokenActivated._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FActorToken::DefaultMessageTokenActivated._8_8_ != 0) {
    FMemory::Free((void *)FActorToken::DefaultMessageTokenActivated._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FActorToken::DefaultMessageTokenActivated);
  return;
}

// GetLog'' @ 15033e340

void __cdecl `dynamic_atexit_destructor_for_'FMessageLog::GetLog__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FMessageLog::GetLog,
             (FWriteAccessScope *)&local_28);
  if ((FMessageLog::GetLog._16_4_ != 0) && (FMessageLog::GetLog._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FMessageLog::GetLog._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FMessageLog::GetLog.field_0x8,0,0,0x10);
    FMessageLog::GetLog._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FMessageLog::GetLog._8_8_ != 0) {
    FMemory::Free((void *)FMessageLog::GetLog._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FMessageLog::GetLog);
  return;
}

// GotoAsset'' @ 15033e3e0

void __cdecl `dynamic_atexit_destructor_for_'FAssetNameToken::GotoAsset__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FAssetNameToken::GotoAsset,
             (FWriteAccessScope *)&local_28);
  if ((FAssetNameToken::GotoAsset._16_4_ != 0) && (FAssetNameToken::GotoAsset._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FAssetNameToken::GotoAsset._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FAssetNameToken::GotoAsset.field_0x8,0,0,0x10);
    FAssetNameToken::GotoAsset._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FAssetNameToken::GotoAsset._8_8_ != 0) {
    FMemory::Free((void *)FAssetNameToken::GotoAsset._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FAssetNameToken::GotoAsset);
  return;
}

// Invalid'' @ 15033e480

void __cdecl `dynamic_atexit_destructor_for_'FIoStatus::Invalid__(void)

{
  wchar_t *pwVar1;
  int iVar2;
  FLowLevelMemTracker *this;
  
  if (FIoStatus::Invalid.ErrorMessage.Chars != (wchar_t *)0x0) {
    pwVar1 = FIoStatus::Invalid.ErrorMessage.Chars + -4;
    LOCK();
    iVar2 = *(int *)pwVar1;
    *(int *)pwVar1 = *(int *)pwVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if (pwVar1 != (wchar_t *)0x0) {
        if (FLowLevelMemTracker::EnabledState != Disabled) {
          this = FLowLevelMemTracker::TrackerInstance;
          if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
            this = FLowLevelMemTracker::Construct();
          }
          FLowLevelMemTracker::OnLowLevelFree(this,Default,pwVar1,FMalloc,true);
        }
        if (UE::Private::GMalloc == (FMalloc *)0x0) {
          FMemory::GCreateMalloc();
        }
        else {
          DoGamethreadHook(2);
        }
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pwVar1);
      }
      return;
    }
  }
  return;
}

// MessageSelectionChanged'' @ 15033e4b0

void __cdecl `dynamic_atexit_destructor_for_'FMessageLog::MessageSelectionChanged__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FMessageLog::MessageSelectionChanged,(FWriteAccessScope *)&local_28);
  if ((FMessageLog::MessageSelectionChanged._16_4_ != 0) &&
     (FMessageLog::MessageSelectionChanged._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FMessageLog::MessageSelectionChanged._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FMessageLog::MessageSelectionChanged.field_0x8,0,0,0x10);
    FMessageLog::MessageSelectionChanged._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FMessageLog::MessageSelectionChanged._8_8_ != 0) {
    FMemory::Free((void *)FMessageLog::MessageSelectionChanged._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FMessageLog::MessageSelectionChanged);
  return;
}

// MultiSelectActorBegin'' @ 15033e550

void __cdecl `dynamic_atexit_destructor_for_'FMessageLog::MultiSelectActorBegin__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FMessageLog::MultiSelectActorBegin,(FWriteAccessScope *)&local_28);
  if ((FMessageLog::MultiSelectActorBegin._16_4_ != 0) &&
     (FMessageLog::MultiSelectActorBegin._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FMessageLog::MultiSelectActorBegin._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FMessageLog::MultiSelectActorBegin.field_0x8,0,0,0x10);
    FMessageLog::MultiSelectActorBegin._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FMessageLog::MultiSelectActorBegin._8_8_ != 0) {
    FMemory::Free((void *)FMessageLog::MultiSelectActorBegin._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FMessageLog::MultiSelectActorBegin);
  return;
}

// MultiSelectActorEnd'' @ 15033e5f0

void __cdecl `dynamic_atexit_destructor_for_'FMessageLog::MultiSelectActorEnd__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FMessageLog::MultiSelectActorEnd,(FWriteAccessScope *)&local_28);
  if ((FMessageLog::MultiSelectActorEnd._16_4_ != 0) &&
     (FMessageLog::MultiSelectActorEnd._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FMessageLog::MultiSelectActorEnd._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FMessageLog::MultiSelectActorEnd.field_0x8,0,0,0x10);
    FMessageLog::MultiSelectActorEnd._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FMessageLog::MultiSelectActorEnd._8_8_ != 0) {
    FMemory::Free((void *)FMessageLog::MultiSelectActorEnd._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FMessageLog::MultiSelectActorEnd);
  return;
}

// Ok'' @ 15033e690

void __cdecl `dynamic_atexit_destructor_for_'FIoStatus::Ok__(void)

{
  wchar_t *pwVar1;
  int iVar2;
  FLowLevelMemTracker *this;
  
  if (FIoStatus::Ok.ErrorMessage.Chars != (wchar_t *)0x0) {
    pwVar1 = FIoStatus::Ok.ErrorMessage.Chars + -4;
    LOCK();
    iVar2 = *(int *)pwVar1;
    *(int *)pwVar1 = *(int *)pwVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if (pwVar1 != (wchar_t *)0x0) {
        if (FLowLevelMemTracker::EnabledState != Disabled) {
          this = FLowLevelMemTracker::TrackerInstance;
          if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
            this = FLowLevelMemTracker::Construct();
          }
          FLowLevelMemTracker::OnLowLevelFree(this,Default,pwVar1,FMalloc,true);
        }
        if (UE::Private::GMalloc == (FMalloc *)0x0) {
          FMemory::GCreateMalloc();
        }
        else {
          DoGamethreadHook(2);
        }
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pwVar1);
      }
      return;
    }
  }
  return;
}

// Unknown'' @ 15033e6c0

void __cdecl `dynamic_atexit_destructor_for_'FIoStatus::Unknown__(void)

{
  wchar_t *pwVar1;
  int iVar2;
  FLowLevelMemTracker *this;
  
  if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
    pwVar1 = FIoStatus::Unknown.ErrorMessage.Chars + -4;
    LOCK();
    iVar2 = *(int *)pwVar1;
    *(int *)pwVar1 = *(int *)pwVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if (pwVar1 != (wchar_t *)0x0) {
        if (FLowLevelMemTracker::EnabledState != Disabled) {
          this = FLowLevelMemTracker::TrackerInstance;
          if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
            this = FLowLevelMemTracker::Construct();
          }
          FLowLevelMemTracker::OnLowLevelFree(this,Default,pwVar1,FMalloc,true);
        }
        if (UE::Private::GMalloc == (FMalloc *)0x0) {
          FMemory::GCreateMalloc();
        }
        else {
          DoGamethreadHook(2);
        }
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pwVar1);
      }
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'Allocator'' @ 15033e6f0

void __cdecl
`UE::Logging::Private::GetStaticLogTemplateAllocator'::__l2::
_dynamic_atexit_destructor_for__Allocator__(void)

{
  FBlock *pFVar1;
  FBlock *pFVar2;
  
  pFVar2 = Allocator.Tail;
  while (pFVar2 != (FBlock *)0x0) {
    pFVar1 = pFVar2->Previous;
    FMemory::Free(pFVar2);
    pFVar2 = pFVar1;
  }
  return;
}

// `dynamic_atexit_destructor_for_'BadIndex'' @ 15033e730

void __cdecl
`FColorList::GetColorNameByIndex'::__l2::_dynamic_atexit_destructor_for__BadIndex__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BadIndex.Data.AllocatorInstance.Data;
  if (BadIndex.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BadIndex.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Bounds'' @ 15033e750

void __cdecl
`UnitConversion::GetQuantizationBounds'::__l2::_dynamic_atexit_destructor_for__Bounds__(void)

{
  if (Bounds.Stress.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Bounds.Stress.AllocatorInstance.Data);
  }
  if (Bounds.Time.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Bounds.Time.AllocatorInstance.Data);
  }
  if (Bounds.DataSize.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Bounds.DataSize.AllocatorInstance.Data);
  }
  if (Bounds.Frequency.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Bounds.Frequency.AllocatorInstance.Data);
  }
  if (Bounds.MetricDensity.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Bounds.MetricDensity.AllocatorInstance.Data);
  }
  if (Bounds.ImperialMass.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Bounds.ImperialMass.AllocatorInstance.Data);
  }
  if (Bounds.MetricMass.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Bounds.MetricMass.AllocatorInstance.Data);
  }
  if (Bounds.ImperialDistance.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Bounds.ImperialDistance.AllocatorInstance.Data);
  }
  if (Bounds.MetricDistance.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Bounds.MetricDistance.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CS'' @ 15033e800

void __cdecl `GetLogTraceStaticBufferGuard'::__l2::_dynamic_atexit_destructor_for__CS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015033e807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&CS);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIoStoreAllowMemoryMappedUtoc'' @ 15033e820

void __cdecl _dynamic_atexit_destructor_for__CVarIoStoreAllowMemoryMappedUtoc__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIoStoreAllowMemoryMappedUtoc);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogInfoMessagesAtDisplayVerbosity'' @ 15033e840

void __cdecl
UE::MessageLog::Private::_dynamic_atexit_destructor_for__CVarLogInfoMessagesAtDisplayVerbosity__
          (void)

{
  CVarLogInfoMessagesAtDisplayVerbosity._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLogInfoMessagesAtDisplayVerbosity);
  return;
}

// `dynamic_atexit_destructor_for_'Cleanup'' @ 15033e860

void __cdecl
`TLinearAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>::AllocateBlock'::__l5::
_dynamic_atexit_destructor_for__Cleanup__(void)

{
  uint uVar1;
  ulong64 uVar2;
  uint *puVar3;
  void *pvVar4;
  FPageAllocator *this;
  ulong64 *puVar5;
  
  puVar5 = (ulong64 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xa58);
  uVar2 = *puVar5;
  if (uVar2 != 0) {
    *(ulong64 *)(uVar2 + 0x40) = uVar2 + 0x10000;
    puVar3 = (uint *)*puVar5;
    LOCK();
    uVar1 = *puVar3;
    *puVar3 = *puVar3 - ~puVar3[0x12];
    UNLOCK();
    if (uVar1 == ~puVar3[0x12]) {
      MemoryTrace_UnmarkAllocAsHeap(*puVar5,0,0);
      pvVar4 = (void *)*puVar5;
      this = FPageAllocator::Get();
      FPageAllocator::Free(this,pvVar4);
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'FBasicMathExpressionEvaluatorGroupedExpressionsTestAutomationTestInstance'' @ 15033e8e0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FBasicMathExpressionEvaluatorGroupedExpressionsTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FBasicMathExpressionEvaluatorGroupedExpressionsTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FBasicMathExpressionEvaluatorInvalidExpressionTestAutomationTestInstance'' @ 15033e900

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FBasicMathExpressionEvaluatorInvalidExpressionTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FBasicMathExpressionEvaluatorInvalidExpressionTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FBasicMathExpressionEvaluatorTestAutomationTestInstance'' @ 15033e920

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FBasicMathExpressionEvaluatorTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FBasicMathExpressionEvaluatorTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FBasicMathExpressionEvaluatorWhitespaceExpressionsTestAutomationTestInstance'' @ 15033e940

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FBasicMathExpressionEvaluatorWhitespaceExpressionsTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FBasicMathExpressionEvaluatorWhitespaceExpressionsTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'Features'' @ 15033e960

void __cdecl `GetEngineCrypto'::__l2::_dynamic_atexit_destructor_for__Features__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Features.AllocatorInstance.Data;
  if (Features.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Features.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'GColorList'' @ 15033e980

void __cdecl _dynamic_atexit_destructor_for__GColorList__(void)

{
  if (GColorList.ColorsLookup.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GColorList.ColorsLookup.AllocatorInstance.Data);
  }
  GColorList.ColorsMap._72_4_ = 0;
  if (GColorList.ColorsMap._64_8_ != 0) {
    FMemory::Free((void *)GColorList.ColorsMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FColor_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FColor_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FColor_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GColorList);
  return;
}

// `dynamic_atexit_destructor_for_'GIoDispatcher'' @ 15033e9d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__GIoDispatcher__(void)

{
  FIoDispatcherImpl *pFVar1;
  TUniquePtr<FIoDispatcher,TDefaultDelete<FIoDispatcher>_> TVar2;
  
  TVar2.Ptr = GIoDispatcher.Ptr;
  if (GIoDispatcher.Ptr != (FIoDispatcher *)0x0) {
    pFVar1 = (GIoDispatcher.Ptr)->Impl;
    if (pFVar1 != (FIoDispatcherImpl *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
    operator_delete(TVar2.Ptr,8);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GlobalVerbosity'' @ 15033ea20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `GetGlobalVerbosity'::__l2::_dynamic_atexit_destructor_for__GlobalVerbosity__(void)

{
  FLogSuppressionInterface *pFVar1;
  
  if (GlobalVerbosity.CompileTimeVerbosity != NoLogging) {
    pFVar1 = FLogSuppressionInterface::TryGet();
    if (pFVar1 != (FLogSuppressionInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015033ea4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pFVar1 + 8))
                (pFVar1,&GlobalVerbosity,*(code **)((longlong)*pFVar1 + 8));
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogColorList'' @ 15033ea60

void __cdecl _dynamic_atexit_destructor_for__LogColorList__(void)

{
  FLogSuppressionInterface *pFVar1;
  
  if (LogColorList._3_1_ != '\0') {
    pFVar1 = FLogSuppressionInterface::TryGet();
    if (pFVar1 != (FLogSuppressionInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015033ea8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pFVar1 + 8))(pFVar1,&LogColorList,*(code **)((longlong)*pFVar1 + 8));
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogFloatPacker'' @ 15033eaa0

void __cdecl _dynamic_atexit_destructor_for__LogFloatPacker__(void)

{
  FLogSuppressionInterface *pFVar1;
  
  if (LogFloatPacker._3_1_ != '\0') {
    pFVar1 = FLogSuppressionInterface::TryGet();
    if (pFVar1 != (FLogSuppressionInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015033eacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pFVar1 + 8))(pFVar1,&LogFloatPacker,*(code **)((longlong)*pFVar1 + 8))
      ;
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogGenericOctree'' @ 15033eae0

void __cdecl _dynamic_atexit_destructor_for__LogGenericOctree__(void)

{
  FLogSuppressionInterface *pFVar1;
  
  if (LogGenericOctree._3_1_ != '\0') {
    pFVar1 = FLogSuppressionInterface::TryGet();
    if (pFVar1 != (FLogSuppressionInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015033eb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pFVar1 + 8))
                (pFVar1,&LogGenericOctree,*(code **)((longlong)*pFVar1 + 8));
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogIoDispatcher'' @ 15033eb20

void __cdecl _dynamic_atexit_destructor_for__LogIoDispatcher__(void)

{
  FLogSuppressionInterface *pFVar1;
  
  if (LogIoDispatcher._3_1_ != '\0') {
    pFVar1 = FLogSuppressionInterface::TryGet();
    if (pFVar1 != (FLogSuppressionInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015033eb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pFVar1 + 8))
                (pFVar1,&LogIoDispatcher,*(code **)((longlong)*pFVar1 + 8));
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogIoStatus'' @ 15033eb60

void __cdecl _dynamic_atexit_destructor_for__LogIoStatus__(void)

{
  FLogSuppressionInterface *pFVar1;
  
  if (LogIoStatus._3_1_ != '\0') {
    pFVar1 = FLogSuppressionInterface::TryGet();
    if (pFVar1 != (FLogSuppressionInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015033eb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pFVar1 + 8))(pFVar1,&LogIoStatus,*(code **)((longlong)*pFVar1 + 8));
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogIoStore'' @ 15033eba0

void __cdecl _dynamic_atexit_destructor_for__LogIoStore__(void)

{
  FLogSuppressionInterface *pFVar1;
  
  if (LogIoStore._3_1_ != '\0') {
    pFVar1 = FLogSuppressionInterface::TryGet();
    if (pFVar1 != (FLogSuppressionInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015033ebcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pFVar1 + 8))(pFVar1,&LogIoStore,*(code **)((longlong)*pFVar1 + 8));
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogTransform'' @ 15033ebe0

void __cdecl _dynamic_atexit_destructor_for__LogTransform__(void)

{
  FLogSuppressionInterface *pFVar1;
  
  if (LogTransform._3_1_ != '\0') {
    pFVar1 = FLogSuppressionInterface::TryGet();
    if (pFVar1 != (FLogSuppressionInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015033ec0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pFVar1 + 8))(pFVar1,&LogTransform,*(code **)((longlong)*pFVar1 + 8));
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogUnrealMath'' @ 15033ec20

void __cdecl _dynamic_atexit_destructor_for__LogUnrealMath__(void)

{
  FLogSuppressionInterface *pFVar1;
  
  if (LogUnrealMath._3_1_ != '\0') {
    pFVar1 = FLogSuppressionInterface::TryGet();
    if (pFVar1 != (FLogSuppressionInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015033ec4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pFVar1 + 8))(pFVar1,&LogUnrealMath,*(code **)((longlong)*pFVar1 + 8));
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'OffString'' @ 15033ec60

void __cdecl
`FLogSuppressionImplementation::ProcessLogOnly'::__l2::_dynamic_atexit_destructor_for__OffString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
               ::__l2::OffString.Data.AllocatorInstance.Data;
  if (`private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
      ::__l2::OffString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
      ::__l2::OffString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OnString'' @ 15033ec80

void __cdecl
`FLogSuppressionImplementation::ProcessLogOnly'::__l2::_dynamic_atexit_destructor_for__OnString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
               ::__l2::OnString.Data.AllocatorInstance.Data;
  if (`private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
      ::__l2::OnString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
      ::__l2::OnString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OverrideStack'' @ 15033eca0

void __cdecl
`UE::MessageLog::Private::GetOverrideStack'::__l2::_dynamic_atexit_destructor_for__OverrideStack__
          (void)

{
  DestructItems<TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>_> *
             )OverrideStack.Pairs.AllocatorInstance.Data,OverrideStack.Pairs.ArrayNum);
  if (OverrideStack.Pairs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(OverrideStack.Pairs.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Settings'' @ 15033ece0

void __cdecl `FUnitConversion::Settings'::__l2::_dynamic_atexit_destructor_for__Settings__(void)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  TUniquePtr<FUnitSettings,TDefaultDelete<FUnitSettings>_> TVar3;
  FDisplaySettingChanged *this;
  longlong lVar4;
  
  TVar3.Ptr = Settings.Ptr;
  if (Settings.Ptr != (FUnitSettings *)0x0) {
    this = &(Settings.Ptr)->SettingChangedEvent;
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &((Settings.Ptr)->SettingChangedEvent).field_0x8,
               *(int *)&((Settings.Ptr)->SettingChangedEvent).field_0x10);
    pvVar1 = *(void **)&((TVar3.Ptr)->SettingChangedEvent).field_0x8;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this);
    lVar4 = 0x18;
    do {
      pFVar2 = ((TArray<EUnit,TSizedDefaultAllocator<32>_> *)(this + -1))[1].AllocatorInstance.Data;
      this = (FDisplaySettingChanged *)
             ((TArray<EUnit,TSizedDefaultAllocator<32>_> *)(this + -1) + 1);
      lVar4 = lVar4 + -1;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    } while (lVar4 != 0);
    ::operator_delete(TVar3.Ptr,0x1a8);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15033ed80

void __cdecl
`TLazySingleton<FLogSuppressionImplementation>::GetLazy'::__l2::
_dynamic_atexit_destructor_for__Singleton__(void)

{
  if (DAT_154ebb478 != 0) {
    (*(code *)**(undefined8 **)(DAT_154ebb478 + 8))(DAT_154ebb478 + 8,0);
    DAT_154ebb478 = 0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Table'' @ 15033edc0

void __cdecl
`UE::Logging::Private::GetLocalizedLogFormatTable'::__l2::_dynamic_atexit_destructor_for__Table__
          (void)

{
  TSparseArray<FTextFormat,FDefaultSparseArrayAllocator>::DestroyElements
            (&Table.Table,0,Table.Table._8_4_);
  Table.Table._8_4_ = 0;
  if (Table.Table._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&Table,0,(int *)&Table.Table.field_0xc);
  }
  Table.Table._48_4_ = 0xffffffff;
  Table.Table._52_4_ = 0;
  Table.Table._40_4_ = 0;
  if (0x80 < (uint)Table.Table._44_4_) {
    Table.Table._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&Table.Table.field_0x10,0);
  }
  if (Table.Table._32_8_ != 0) {
    FMemory::Free((void *)Table.Table._32_8_);
  }
  if (Table.Table._0_8_ != 0) {
    FMemory::Free((void *)Table.Table._0_8_);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Template'' @ 15033ee90

void __cdecl
`UE::Logging::Private::GetStaticBasicLogTemplate'::__l2::_dynamic_atexit_destructor_for__Template__
          (void)

{
  TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage> *pTVar1;
  
  pTVar1 = &Template;
  if (Template.Storage.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    pTVar1 = (TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage> *)
             Template.Storage.Data.AllocatorInstance.SecondaryData;
  }
  UE::Logging::Private::DestroyLogTemplate((FLogTemplate *)pTVar1);
  if (Template.Storage.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)Template.Storage.Data.AllocatorInstance.SecondaryData);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_FMsgLogf'' @ 15033eed0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_FMsgLogf__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_FMsgLogf.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_FMsgLogf.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_FMsgLogf.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_IoDispatcher'' @ 15033eef0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_IoDispatcher__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_IoDispatcher.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_IoDispatcher.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (_GCsvCategory_IoDispatcher.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterAvailableChunkDecoderWorkerCount'' @ 15033ef10

void __cdecl
UE::_dynamic_atexit_destructor_for____GTraceCounterAvailableChunkDecoderWorkerCount__(void)

{
  if ((__GTraceCounterAvailableChunkDecoderWorkerCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterAvailableChunkDecoderWorkerCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterChunkDecoderQueueCount'' @ 15033ef30

void __cdecl UE::_dynamic_atexit_destructor_for____GTraceCounterChunkDecoderQueueCount__(void)

{
  if ((__GTraceCounterChunkDecoderQueueCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterChunkDecoderQueueCount.CounterName);
    return;
  }
  return;
}

// operator() @ 15047c230

bool __thiscall `CheckMatrixPrecision'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1728409579961712619>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1728409579961712619>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

