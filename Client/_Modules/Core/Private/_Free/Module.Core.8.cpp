// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 186

// CompressionFormats'' @ 140f04fc0

void __cdecl `dynamic_initializer_for_'FCompression::CompressionFormats__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FCompression::CompressionFormats__);
  return;
}

// CompressionFormatsCriticalSection'' @ 140f04fe0

void __cdecl `dynamic_initializer_for_'FCompression::CompressionFormatsCriticalSection__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FCompression::CompressionFormatsCriticalSection,4000);
  atexit(`dynamic_atexit_destructor_for_'FCompression::CompressionFormatsCriticalSection__);
  return;
}

// GraphicsRHI'' @ 140f05010

void __cdecl `dynamic_initializer_for_'FApp::GraphicsRHI__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FApp::GraphicsRHI__);
  return;
}

// Null'' @ 140f05030

void __cdecl `dynamic_initializer_for_'FCompositeBuffer::Null__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FCompositeBuffer::Null__);
  return;
}

// RegisteredArgs'' @ 140f05050

void __cdecl `dynamic_initializer_for_'FCommandLine::RegisteredArgs__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FCommandLine::RegisteredArgs__);
  return;
}

// SessionId'' @ 140f05070

void __cdecl `dynamic_initializer_for_'FApp::SessionId__(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FCbObjectId::NewObjectId(&SessionObjectId);
      _Init_thread_footer(&::_TSS0);
    }
  }
  ToGuid(&FApp::SessionId,&SessionObjectId);
  return;
}

// SessionName'' @ 140f050f0

void __cdecl `dynamic_initializer_for_'FApp::SessionName__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FApp::SessionName__);
  return;
}

// SessionOwner'' @ 140f05110

void __cdecl `dynamic_initializer_for_'FApp::SessionOwner__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FApp::SessionOwner__);
  return;
}

// SessionUsers'' @ 140f05130

void __cdecl `dynamic_initializer_for_'FApp::SessionUsers__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FApp::SessionUsers__);
  return;
}

// SuppressedLogCategories'' @ 140f05150

void __cdecl `dynamic_initializer_for_'FAutomationTestBase::SuppressedLogCategories__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FAutomationTestBase::SuppressedLogCategories__);
  return;
}

// `dynamic_initializer_for_'AesRuntimeHWSupportDetection'' @ 140f05170

/* WARNING: Removing unreachable block (ram,0x000140f05199) */

void __cdecl _dynamic_initializer_for__AesRuntimeHWSupportDetection__(void)

{
  longlong lVar1;
  
  AesEncrypt = AesEncryptSW;
  AesDecrypt = AesDecryptSW;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) >> 0x19 & 1) != 0) {
    AesEncrypt = AesEncryptX86HW;
    AesDecrypt = AesDecryptX86HW;
  }
  return;
}

// `dynamic_initializer_for_'CVarAutomationCaptureLogEvents'' @ 140f051d0

void __cdecl AutomationTest::_dynamic_initializer_for__CVarAutomationCaptureLogEvents__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAutomationCaptureLogEvents,L"Automation.CaptureLogEvents",&bCaptureLogEvents,
             L"Consider warning/error log events during a test as impacting the test itself",0);
  atexit(_dynamic_atexit_destructor_for__CVarAutomationCaptureLogEvents__);
  return;
}

// `dynamic_initializer_for_'CVarAutomationEnableStereoTestVariants'' @ 140f05220

void __cdecl
AutomationTest::_dynamic_initializer_for__CVarAutomationEnableStereoTestVariants__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAutomationEnableStereoTestVariants,L"Automation.EnableStereoTestVariants",
             &bEnableStereoTestVariants,
             L"Whether to enable stereo test variants for screenshot functional tests",0);
  atexit(_dynamic_atexit_destructor_for__CVarAutomationEnableStereoTestVariants__);
  return;
}

// `dynamic_initializer_for_'CVarAutomationLightweightStereoTestVariants'' @ 140f05270

void __cdecl
AutomationTest::_dynamic_initializer_for__CVarAutomationLightweightStereoTestVariants__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAutomationLightweightStereoTestVariants,
             L"Automation.LightweightStereoTestVariants",&bLightweightStereoTestVariants,
             L"Whether to skip variants when the baseline test fails, and skip saving screenshots for successful variants"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAutomationLightweightStereoTestVariants__);
  return;
}

// `dynamic_initializer_for_'CVarAutomationLogBPTestMetadata'' @ 140f052c0

void __cdecl AutomationTest::_dynamic_initializer_for__CVarAutomationLogBPTestMetadata__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAutomationLogBPTestMetadata,L"Automation.LogBPTestMetadata",&bLogBPTestMetadata,
             L"Whether to output blueprint functional test metadata to the log when test is running"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAutomationLogBPTestMetadata__);
  return;
}

// `dynamic_initializer_for_'CVarAutomationLogTestStateTrace'' @ 140f05310

void __cdecl AutomationTest::_dynamic_initializer_for__CVarAutomationLogTestStateTrace__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAutomationLogTestStateTrace,L"Automation.LogTestStateTrace",&bLogTestStateTrace,
             L"Whether to enable or disable logging of test state trace",0);
  atexit(_dynamic_atexit_destructor_for__CVarAutomationLogTestStateTrace__);
  return;
}

// `dynamic_initializer_for_'CVarAutomationSkipStackWalk'' @ 140f05360

void __cdecl AutomationTest::_dynamic_initializer_for__CVarAutomationSkipStackWalk__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAutomationSkipStackWalk,L"Automation.SkipStackWalk",&bSkipStackWalk,
             L"Whether to skip any stack issues that the automation test framework triggers",0);
  atexit(_dynamic_atexit_destructor_for__CVarAutomationSkipStackWalk__);
  return;
}

// `dynamic_initializer_for_'CVarAutomationTestTagGlobalFilter'' @ 140f053b0

void __cdecl AutomationTest::_dynamic_initializer_for__CVarAutomationTestTagGlobalFilter__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAutomationTestTagGlobalFilter,L"Automation.TestTagGlobalFilter",
             &TestTagGlobalFilter,
             L"Only include tests marked with Tags matching this filter string, using the Advanced Search Syntax"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAutomationTestTagGlobalFilter__);
  return;
}

// `dynamic_initializer_for_'CVarEnsureAlwaysEnabled'' @ 140f05400

void __cdecl _dynamic_initializer_for__CVarEnsureAlwaysEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnsureAlwaysEnabled,L"core.EnsureAlwaysEnabled",&GEnsureAlwaysEnabled,
             L"Set to false to turn ensureAlways into regular ensure",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnsureAlwaysEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarEnsuresAreErrors'' @ 140f05450

void __cdecl _dynamic_initializer_for__CVarEnsuresAreErrors__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnsuresAreErrors,L"core.EnsuresAreErrors",&GEnsuresAreErrors,
             L"True means failed ensures are logged as errors. False means they are logged as warnings."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnsuresAreErrors__);
  return;
}

// `dynamic_initializer_for_'CVarResetEnsureState'' @ 140f054a0

void __cdecl _dynamic_initializer_for__CVarResetEnsureState__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVarResetEnsureState,L"core.ResetEnsureState",
             L"Reset all ensures so they will fire again",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarResetEnsureState__);
  return;
}

// `dynamic_initializer_for_'EnsureHandler'' @ 140f055d0

void __cdecl _dynamic_initializer_for__EnsureHandler__(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined8 *)(lVar1 + 0xa80) = 0;
  *(undefined8 *)(lVar1 + 0xaa8) = 0;
  __tlregdtor(_dynamic_atexit_destructor_for__EnsureHandler__);
  return;
}

// `dynamic_initializer_for_'GAnsiMalloc'' @ 140f05610

void __cdecl _dynamic_initializer_for__GAnsiMalloc__(void)

{
  FMallocAnsi::FMallocAnsi(&GAnsiMalloc);
  atexit(_dynamic_atexit_destructor_for__GAnsiMalloc__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_VirtualStackAllocator'' @ 140f05640

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_VirtualStackAllocator__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_VirtualStackAllocator,L"VirtualStackAllocator",(FName)0x0,(FName)0x0
             ,(FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LogApp'' @ 140f05690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogApp__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogApp,L"LogApp",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogApp__);
  return;
}

// `dynamic_initializer_for_'LogAutomationTest'' @ 140f056d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAutomationTest__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAutomationTest,L"LogAutomationTest",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogAutomationTest__);
  return;
}

// `dynamic_initializer_for_'LogAutomationTestFramework'' @ 140f05710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAutomationTestFramework__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAutomationTestFramework,L"LogAutomationTestFramework",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAutomationTestFramework__);
  return;
}

// `dynamic_initializer_for_'LogAutomationTestStateTrace'' @ 140f05750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAutomationTestStateTrace__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAutomationTestStateTrace,L"LogAutomationTestStateTrace",Log,All
            );
  atexit(_dynamic_atexit_destructor_for__LogAutomationTestStateTrace__);
  return;
}

// `dynamic_initializer_for_'LogCompression'' @ 140f05790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogCompression__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogCompression,L"LogCompression",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogCompression__);
  return;
}

// `dynamic_initializer_for_'LogLatentCommands'' @ 140f057d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLatentCommands__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogLatentCommands,L"LogLatentCommands",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLatentCommands__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UncompressorTime'' @ 140f05810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UncompressorTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UncompressorTime == (FThreadSafeStaticStat<FStat_STAT_UncompressorTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UncompressorTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UncompressorTime,*pFVar1,
               L"Uncompressor total time","STATGROUP_Compression","STATCAT_Advanced",L"Compression",
               true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'TestTagGlobalFilter'' @ 140f058a0

void __cdecl AutomationTest::_dynamic_initializer_for__TestTagGlobalFilter__(void)

{
  ::FString::FString(&TestTagGlobalFilter,"");
  atexit(_dynamic_atexit_destructor_for__TestTagGlobalFilter__);
  return;
}

// AesEncryptRuntimeDispatch @ 14180e4c0

/* WARNING: Removing unreachable block (ram,0x00014180e4fd) */

void __cdecl AesEncryptRuntimeDispatch(uchar *param_1,uchar *param_2,ulong64 param_3)

{
  longlong lVar1;
  bool bVar2;
  code *pcVar3;
  
  AesDecrypt = AesDecryptSW;
  pcVar3 = AesEncryptSW;
  AesEncrypt = AesEncryptSW;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) >> 0x19 & 1) != 0) {
    pcVar3 = AesEncryptX86HW;
    AesEncrypt = AesEncryptX86HW;
    AesDecrypt = AesDecryptX86HW;
  }
  if ((pcVar3 == AesEncryptRuntimeDispatch) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("AesEncrypt != &AesEncryptRuntimeDispatch",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AES.cpp"
                         ,0xbd,L""), bVar2)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014180e583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*AesEncrypt)(param_1,param_2,param_3);
  return;
}

// AesDecryptRuntimeDispatch @ 14180e590

/* WARNING: Removing unreachable block (ram,0x00014180e5cd) */

void __cdecl AesDecryptRuntimeDispatch(uchar *param_1,uchar *param_2,ulong64 param_3)

{
  longlong lVar1;
  bool bVar2;
  code *pcVar3;
  
  AesEncrypt = AesEncryptSW;
  pcVar3 = AesDecryptSW;
  AesDecrypt = AesDecryptSW;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) >> 0x19 & 1) != 0) {
    pcVar3 = AesDecryptX86HW;
    AesEncrypt = AesEncryptX86HW;
    AesDecrypt = AesDecryptX86HW;
  }
  if ((pcVar3 == AesDecryptRuntimeDispatch) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("AesDecrypt != &AesDecryptRuntimeDispatch",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AES.cpp"
                         ,0xc4,L""), bVar2)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014180e653. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*AesDecrypt)(param_1,param_2,param_3);
  return;
}

// `scalar_deleting_destructor' @ 14180e840

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>::
_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_3>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// AllOf<TArray<FSharedBuffer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,bool_(__cdecl_FSharedBuffer::*)(void)const_> @ 14180ed50

bool __cdecl
Algo::
AllOf<TArray<FSharedBuffer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,bool_(__cdecl_FSharedBuffer::*)(void)const_>
          (TArray<FSharedBuffer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_1,
          pmf_0a99cb9f param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSharedBuffer> FVar3;
  char cVar4;
  undefined1 local_res8 [8];
  
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  piVar1 = &param_1->ArrayNum;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
    param_1 = (TArray<FSharedBuffer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
              FVar3;
  }
  FVar3 = (ForElementType<FSharedBuffer>)((longlong)param_1 + (longlong)iVar2 * 8);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<FSharedBuffer_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((ForElementType<FSharedBuffer>)param_1 == FVar3) break;
    cVar4 = (*(code *)param_2)(param_1);
    if (cVar4 == '\0') {
      return false;
    }
    param_1 = (TArray<FSharedBuffer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
              ((longlong)param_1 + 8);
  }
  return true;
}

// BuildFromArgVImpl<char> @ 14180ee50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
BuildFromArgVImpl<char>
          (FString *__return_storage_ptr__,char *param_1,int param_2,char **param_3,char *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  char *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  FString *pFVar8;
  FString *pFVar9;
  FString *pFVar10;
  size_t sVar11;
  wchar_t *pwVar12;
  int iVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStackY_3c8 [32];
  FString local_398;
  int local_388;
  longlong local_380;
  FString local_378;
  FString local_368;
  int local_358;
  FString local_350;
  FString local_340;
  char **local_330;
  char *local_328;
  char *local_320;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FScriptContainerElement local_288 [256];
  ForAnyElementType local_188;
  FScriptContainerElement *local_180;
  int local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  lVar7 = (longlong)param_2;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_320 = param_4;
  local_380 = lVar7;
  local_358 = param_2;
  local_330 = param_3;
  local_328 = param_1;
  if (1 < lVar7) {
    lVar16 = 1;
    local_388 = 2;
    do {
      iVar13 = local_388;
      FString::FString(&local_398,local_330[lVar16]);
      iVar5 = FString::Find(&local_398,L" ",1,IgnoreCase,FromStart,-1);
      if ((iVar5 != -1) &&
         (iVar5 = FString::Find(&local_398,L"\"",1,IgnoreCase,FromStart,-1), iVar5 == -1)) {
        iVar5 = FString::Find(&local_398,L"=",1,IgnoreCase,FromStart,-1);
        if ((iVar5 < 1) ||
           (iVar6 = FString::Find(&local_398,L" ",1,IgnoreCase,FromStart,-1), iVar6 <= iVar5)) {
          pFVar8 = FString::FString(&local_298,"\"");
          pFVar9 = FString::FString(&local_2a8,"\"");
          FString::ConcatFF(&local_2e8,pFVar9,&local_398);
          FString::ConcatFF(&local_340,&local_2e8,pFVar8);
          if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_398.Data.AllocatorInstance.Data);
          }
          local_398.Data.AllocatorInstance.Data = local_340.Data.AllocatorInstance.Data;
          local_398.Data.ArrayNum = local_340.Data.ArrayNum;
          local_398.Data.ArrayMax = local_340.Data.ArrayMax;
          local_340.Data.ArrayNum = 0;
          local_340.Data.ArrayMax = 0;
          local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
          }
          if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
          }
          lVar7 = local_380;
          if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.Data.AllocatorInstance.Data);
            lVar7 = local_380;
          }
        }
        else {
          pFVar8 = FString::FString(&local_2b8,"\"");
          iVar5 = iVar5 + 1;
          pFVar9 = FString::RightChop(&local_398,&local_2c8,iVar5);
          pFVar10 = FString::FString(&local_2d8,"\"");
          iVar13 = local_398.Data.ArrayNum + -1;
          if (local_398.Data.ArrayNum == 0) {
            iVar13 = 0;
          }
          if (iVar5 < iVar13) {
            iVar13 = iVar5;
          }
          iVar5 = 0;
          if (0 < iVar13) {
            iVar5 = iVar13;
          }
          FVar14.Data = (FScriptContainerElement *)L"";
          if (local_398.Data.ArrayNum != 0) {
            FVar14.Data = local_398.Data.AllocatorInstance.Data;
          }
          FString::ConstructFromPtrSize(&local_2f8,(wchar_t *)FVar14.Data,iVar5);
          FString::ConcatFF(&local_308,&local_2f8,pFVar10);
          FString::ConcatFF(&local_318,&local_308,pFVar9);
          FString::ConcatFF(&local_350,&local_318,pFVar8);
          if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_398.Data.AllocatorInstance.Data);
          }
          local_398.Data.AllocatorInstance.Data = local_350.Data.AllocatorInstance.Data;
          local_398.Data.ArrayNum = local_350.Data.ArrayNum;
          local_398.Data.ArrayMax = local_350.Data.ArrayMax;
          local_350.Data.ArrayNum = 0;
          local_350.Data.ArrayMax = 0;
          local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_318.Data.AllocatorInstance.Data);
          }
          if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_308.Data.AllocatorInstance.Data);
          }
          if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
          }
          if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
          }
          if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
          }
          lVar7 = local_380;
          iVar13 = local_388;
          if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
            lVar7 = local_380;
            iVar13 = local_388;
          }
        }
      }
      iVar5 = local_398.Data.ArrayNum + -1;
      if (local_398.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_398.Data.AllocatorInstance.Data,iVar5);
      if (iVar13 < local_358) {
        FString::AppendChars(__return_storage_ptr__,L" ",1);
      }
      if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_398.Data.AllocatorInstance.Data);
      }
      local_388 = iVar13 + 1;
      lVar16 = lVar16 + 1;
    } while (lVar16 < lVar7);
  }
  pcVar3 = local_328;
  if (local_328 != (char *)0x0) {
    local_188.Data = (FScriptContainerElement *)0x0;
    sVar11 = strlen(local_328);
    local_178 = (int)sVar11;
    uVar15 = local_178 + 1;
    FVar14.Data = (FScriptContainerElement *)0x0;
    if (0x80 < uVar15) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_188,0,uVar15,2);
      FVar14.Data = local_188.Data;
    }
    local_180 = local_288;
    if (FVar14.Data != (FScriptContainerElement *)0x0) {
      local_180 = FVar14.Data;
    }
    pwVar12 = FGenericPlatformString::Convert<char,wchar_t>
                        ((wchar_t *)local_180,uVar15,pcVar3,uVar15);
    if ((pwVar12 == (wchar_t *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar2)();
      return pFVar8;
    }
    FString::PrintfImpl(&local_378,L"%s %s");
    if (__return_storage_ptr__ != &local_378) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_378.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_378.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_378.Data.ArrayMax;
      local_378.Data.ArrayNum = 0;
      local_378.Data.ArrayMax = 0;
      local_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
    if (local_188.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data);
    }
  }
  pcVar3 = local_320;
  if (local_320 != (char *)0x0) {
    local_68.Data = (FScriptContainerElement *)0x0;
    sVar11 = strlen(local_320);
    local_58 = (int)sVar11;
    uVar15 = local_58 + 1;
    FVar14.Data = (FScriptContainerElement *)0x0;
    if (0x80 < uVar15) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar15,2);
      FVar14.Data = local_68.Data;
    }
    local_60 = local_168;
    if (FVar14.Data != (FScriptContainerElement *)0x0) {
      local_60 = FVar14.Data;
    }
    pwVar12 = FGenericPlatformString::Convert<char,wchar_t>
                        ((wchar_t *)local_60,uVar15,pcVar3,uVar15);
    if ((pwVar12 == (wchar_t *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar2)();
      return pFVar8;
    }
    FString::PrintfImpl(&local_368,L"%s %s");
    if (__return_storage_ptr__ != &local_368) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_368.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_368.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_368.Data.ArrayMax;
      local_368.Data.ArrayNum = 0;
      local_368.Data.ArrayMax = 0;
      local_368.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
  }
  return __return_storage_ptr__;
}

// BuildFromArgVImpl<wchar_t> @ 14180f460

FString * __cdecl
BuildFromArgVImpl<wchar_t>
          (FString *__return_storage_ptr__,wchar_t *param_1,int param_2,wchar_t **param_3,
          wchar_t *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  FString *pFVar5;
  FString *pFVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  int local_res8;
  FString local_138;
  longlong local_128;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  lVar4 = (longlong)param_2;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_128 = lVar4;
  if (1 < lVar4) {
    local_res8 = 2;
    lVar9 = 1;
    do {
      FString::FString(&local_138,param_3[lVar9]);
      iVar2 = FString::Find(&local_138,L" ",1,IgnoreCase,FromStart,-1);
      if ((iVar2 != -1) &&
         (iVar2 = FString::Find(&local_138,L"\"",1,IgnoreCase,FromStart,-1), iVar2 == -1)) {
        iVar2 = FString::Find(&local_138,L"=",1,IgnoreCase,FromStart,-1);
        if ((iVar2 < 1) ||
           (iVar3 = FString::Find(&local_138,L" ",1,IgnoreCase,FromStart,-1), iVar3 <= iVar2)) {
          pFVar5 = FString::FString(local_60,"\"");
          pFVar6 = FString::FString(&local_70,"\"");
          FString::ConcatFF(&local_b0,pFVar6,&local_138);
          FString::ConcatFF(&local_f0,&local_b0,pFVar5);
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          local_138.Data.AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
          local_138.Data.ArrayNum = local_f0.Data.ArrayNum;
          local_138.Data.ArrayMax = local_f0.Data.ArrayMax;
          local_f0.Data.ArrayNum = 0;
          local_f0.Data.ArrayMax = 0;
          local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          lVar4 = local_128;
          if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
            lVar4 = local_128;
          }
        }
        else {
          pFVar5 = FString::FString(&local_80,"\"");
          iVar2 = iVar2 + 1;
          pFVar6 = FString::RightChop(&local_138,&local_90,iVar2);
          pFVar7 = FString::FString(&local_a0,"\"");
          iVar3 = local_138.Data.ArrayNum + -1;
          if (local_138.Data.ArrayNum == 0) {
            iVar3 = 0;
          }
          if (iVar2 < iVar3) {
            iVar3 = iVar2;
          }
          iVar2 = 0;
          if (0 < iVar3) {
            iVar2 = iVar3;
          }
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_138.Data.ArrayNum != 0) {
            FVar8.Data = local_138.Data.AllocatorInstance.Data;
          }
          FString::ConstructFromPtrSize(&local_c0,(wchar_t *)FVar8.Data,iVar2);
          FString::ConcatFF(&local_d0,&local_c0,pFVar7);
          FString::ConcatFF(&local_e0,&local_d0,pFVar6);
          FString::ConcatFF(&local_100,&local_e0,pFVar5);
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          local_138.Data.AllocatorInstance.Data = local_100.Data.AllocatorInstance.Data;
          local_138.Data.ArrayNum = local_100.Data.ArrayNum;
          local_138.Data.ArrayMax = local_100.Data.ArrayMax;
          local_100.Data.ArrayNum = 0;
          local_100.Data.ArrayMax = 0;
          local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          lVar4 = local_128;
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
            lVar4 = local_128;
          }
        }
      }
      iVar2 = local_138.Data.ArrayNum + -1;
      if (local_138.Data.ArrayNum == 0) {
        iVar2 = 0;
      }
      FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_138.Data.AllocatorInstance.Data,iVar2);
      if (local_res8 < param_2) {
        FString::AppendChars(__return_storage_ptr__,L" ",1);
      }
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      local_res8 = local_res8 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar4);
  }
  if (param_1 != (wchar_t *)0x0) {
    FString::PrintfImpl(&local_120,L"%s %s");
    if (__return_storage_ptr__ != &local_120) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_120.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_120.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_120.Data.ArrayMax;
      local_120.Data.ArrayNum = 0;
      local_120.Data.ArrayMax = 0;
      local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
  }
  if (param_4 != (wchar_t *)0x0) {
    FString::PrintfImpl(&local_110,L"%s %s");
    if (__return_storage_ptr__ != &local_110) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_110.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_110.Data.ArrayMax;
      local_110.Data.ArrayNum = 0;
      local_110.Data.ArrayMax = 0;
      local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// ConstructItems<FAutomationExecutionEntry,FAutomationExecutionEntry,int> @ 14180f910

void __cdecl
ConstructItems<FAutomationExecutionEntry,FAutomationExecutionEntry,int>
          (void *param_1,FAutomationExecutionEntry *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int *this;
  FString *pFVar3;
  
  if (param_3 != 0) {
    this = (int *)((longlong)param_1 + 0x18);
    pFVar3 = &(param_2->Event).Context;
    do {
      *(undefined1 *)(this + -6) =
           *(undefined1 *)((longlong)param_2 + (-0x18 - (longlong)param_1) + (longlong)this);
      FString::FString((FString *)(this + -4),pFVar3 + -1);
      FString::FString((FString *)this,pFVar3);
      uVar1 = *(undefined8 *)&((FGuid *)(pFVar3 + 1))->C;
      (((FString *)(this + 4))->Data).AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar3 + 1);
      *(undefined8 *)(this + 6) = uVar1;
      FString::FString((FString *)(this + 8),pFVar3 + 2);
      *(undefined4 *)&(((FString *)(this + 0xc))->Data).AllocatorInstance.Data =
           *(undefined4 *)(pFVar3 + 3);
      lVar2 = (longlong)(pFVar3 + 3);
      pFVar3 = (FString *)((longlong)(pFVar3 + 5) + 8);
      *(undefined8 *)(this + 0xe) = *(undefined8 *)(lVar2 + 8);
      this = this + 0x16;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAutomationTelemetryData,FAutomationTelemetryData,int> @ 14180f9b0

void __cdecl
ConstructItems<FAutomationTelemetryData,FAutomationTelemetryData,int>
          (void *param_1,FAutomationTelemetryData *param_2,int param_3)

{
  int *this;
  FString *pFVar1;
  
  if (param_3 != 0) {
    pFVar1 = &param_2->Context;
    this = (int *)((longlong)param_1 + 0x18);
    do {
      FString::FString((FString *)(this + -6),
                       (FString *)((longlong)param_2 + (-0x18 - (longlong)param_1) + (longlong)this)
                      );
      *(undefined8 *)(this + -2) = *(undefined8 *)((longlong)(pFVar1 + -1) + 8);
      FString::FString((FString *)this,pFVar1);
      pFVar1 = (FString *)((longlong)(pFVar1 + 2) + 8);
      this = this + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FCrashStackFrame,FCrashStackFrame,int> @ 14180fa30

void __cdecl
ConstructItems<FCrashStackFrame,FCrashStackFrame,int>
          (void *param_1,FCrashStackFrame *param_2,int param_3)

{
  ulong64 *puVar1;
  ulong64 *puVar2;
  
  if (param_3 != 0) {
    puVar1 = (ulong64 *)((longlong)param_1 + 0x18);
    puVar2 = &param_2->Offset;
    do {
      FString::FString((FString *)(puVar1 + -3),
                       (FString *)
                       ((longlong)param_2 + (-0x18 - (longlong)param_1) + (longlong)puVar1));
      puVar1[-1] = puVar2[-1];
      *puVar1 = *puVar2;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAutomationTestInfo,FAutomationTestInfo,int> @ 14180fab0

void __cdecl
ConstructItems<FAutomationTestInfo,FAutomationTestInfo,int>
          (void *param_1,FAutomationTestInfo *param_2,int param_3)

{
  uint *puVar1;
  int *this;
  FString *pFVar2;
  
  if (param_3 != 0) {
    pFVar2 = &param_2->TestName;
    this = (int *)((longlong)param_1 + 0x20);
    do {
      FString::FString((FString *)(this + -8),
                       (FString *)((longlong)param_2 + (-0x20 - (longlong)param_1) + (longlong)this)
                      );
      FString::FString((FString *)(this + -4),pFVar2 + -1);
      FString::FString((FString *)this,pFVar2);
      FString::FString((FString *)(this + 4),pFVar2 + 1);
      FString::FString((FString *)(this + 8),pFVar2 + 2);
      FString::FString((FString *)(this + 0xc),pFVar2 + 3);
      *(int *)&(((FString *)(this + 0x10))->Data).AllocatorInstance.Data = *(int *)(pFVar2 + 4);
      FString::FString((FString *)(this + 0x12),(FString *)((longlong)(pFVar2 + 4) + 8));
      FString::FString((FString *)(this + 0x16),(FString *)((longlong)(pFVar2 + 5) + 8));
      this[0x1a] = *(int *)((longlong)(pFVar2 + 6) + 8);
      this[0x1b] = *(int *)((longlong)(pFVar2 + 6) + 0xc);
      puVar1 = (uint *)(pFVar2 + 7);
      pFVar2 = (FString *)((longlong)(pFVar2 + 9) + 8);
      *(uint *)&(((FString *)(this + 0x1c))->Data).AllocatorInstance.Data = *puVar1;
      this = this + 0x26;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CopyIf<TSet<FAutomationExpectedMessage,DefaultKeyFuncs<FAutomationExpectedMessage,0>,FDefaultSetAllocator>,TArray<FAutomationExpectedMessage,TSizedDefaultAllocator<32>_>,`FAutomationTestBase::GetExpectedMessages'::__l2::<lambda_1>_> @ 14180fba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Algo::
CopyIf<TSet<FAutomationExpectedMessage,DefaultKeyFuncs<FAutomationExpectedMessage,0>,FDefaultSetAllocator>,TArray<FAutomationExpectedMessage,TSizedDefaultAllocator<32>_>,_FAutomationTestBase::GetExpectedMessages_::__l2::<lambda_1>_>
          (TSet<FAutomationExpectedMessage,DefaultKeyFuncs<FAutomationExpectedMessage,0>,FDefaultSetAllocator>
           *param_1,TArray<FAutomationExpectedMessage,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  FScriptContainerElement FStackX_19;
  undefined1 local_res20 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar8 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar13 = 0;
  uVar6 = 1;
  iVar15 = 0;
  iVar7 = 0;
  if (iVar8 != 0) {
    puVar16 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar10 = *puVar16;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar7 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14180fc4e;
      uVar10 = puVar16[lVar9 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar7 = (int)lVar9 + -1 + iVar15;
    if (iVar8 < iVar7) {
      iVar7 = iVar8;
    }
  }
LAB_14180fc4e:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  uVar17 = uVar10 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar6,iVar13);
  TStack_68.CurrentBitIndex = iVar7;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar10 >> 5;
  TStack_68._28_4_ = iVar7;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar8 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar6) {
    puVar14 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14180fd4f;
      uVar10 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14180fd4f:
  FStackX_19 = (FScriptContainerElement)param_3.Verbosity;
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<FAutomationExpectedMessage>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if ((TStack_68.CurrentBitIndex == uVar10) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar12 = (FScriptContainerElement *)
              (*(longlong *)&param_1->Elements + (longlong)TStack_68.CurrentBitIndex * 0x40);
    if (((-1 < *(int *)(pFVar12 + 0x2c)) || (param_3.IncludeSuppressed != false)) &&
       ((pFVar12[0x34] == (FScriptContainerElement)0x7 ||
        ((FStackX_19 == (FScriptContainerElement)0x7 || ((byte)pFVar12[0x34] <= (byte)FStackX_19))))
       )) {
      pFVar11 = (param_2->AllocatorInstance).Data;
      if ((pFVar11 <= pFVar12) &&
         ((pFVar12 < pFVar11 + (longlong)param_2->ArrayMax * 0x38 &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)))) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = param_2->ArrayNum;
      if (iVar8 == param_2->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar8 + 1;
      pFVar11 = (param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x38;
      ::FString::FString((FString *)pFVar11,(FString *)pFVar12);
      pFVar11[0x20].field_0x0 = 0;
      cVar3 = pFVar12[0x20].field_0x0;
      pFVar11[0x20].field_0x0 = cVar3;
      if (cVar3 != '\0') {
        *(undefined8 *)&pFVar11[0x10].field_0x0 = *(undefined8 *)&pFVar12[0x10].field_0x0;
        lVar9 = *(longlong *)(pFVar12 + 0x18);
        *(longlong *)(pFVar11 + 0x18) = lVar9;
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
          UNLOCK();
        }
      }
      *(undefined4 *)(pFVar11 + 0x28) = *(undefined4 *)(pFVar12 + 0x28);
      *(undefined4 *)(pFVar11 + 0x2c) = *(undefined4 *)(pFVar12 + 0x2c);
      *(undefined4 *)&pFVar11[0x30].field_0x0 = *(undefined4 *)&pFVar12[0x30].field_0x0;
      pFVar11[0x34] = pFVar12[0x34];
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// DestructItems<FAutomationExecutionEntry,int> @ 141810300

void __cdecl
DestructItems<FAutomationExecutionEntry,int>(FAutomationExecutionEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->Event).Context;
    do {
      if (*(void **)(pFVar2 + 2) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar2 + 2));
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 5) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAutomationExpectedMessage,int> @ 141810360

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<FAutomationExpectedMessage,int>(FAutomationExpectedMessage *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount;
    do {
      if (*(char *)(pFVar1 + 1) != '\0') {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pFVar1->ReferenceController);
      }
      if (pFVar1[-3].ReferenceController != (void *)0x0) {
        FMemory::Free(pFVar1[-3].ReferenceController);
      }
      pFVar1 = pFVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAutomationTelemetryData,int> @ 1418103b0

void __cdecl
DestructItems<FAutomationTelemetryData,int>(FAutomationTelemetryData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Context).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->DataPoint).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FBufferedLine,int> @ 141810400

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DestructItems<FBufferedLine,int>(FBufferedLine *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    operator_delete__((param_1->Data).Ptr);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FChange,TDefaultDelete<FChange>_>,int> @ 141810440

void __cdecl
DestructItems<TUniquePtr<FChange,TDefaultDelete<FChange>_>,int>
          (TUniquePtr<FChange,TDefaultDelete<FChange>_> *param_1,int param_2)

{
  FChange *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FChange *)0x0) {
      (**(code **)((longlong)*pFVar1 + 0x48))(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FAutomationTestInfo,int> @ 141810480

void __cdecl DestructItems<FAutomationTestInfo,int>(FAutomationTestInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->AssetPath;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pFVar2 + -2) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -2) + 8));
      }
      if (*(void **)((longlong)(pFVar2 + -3) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -3) + 8));
      }
      if (*(void **)((longlong)(pFVar2 + -4) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -4) + 8));
      }
      if (*(void **)((longlong)(pFVar2 + -5) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -5) + 8));
      }
      if (*(void **)((longlong)(pFVar2 + -6) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -6) + 8));
      }
      if (*(void **)((longlong)(pFVar2 + -7) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -7) + 8));
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 9) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// HeapSortInternal<void_*,int,FIdentityFunctor,TLess<void>_> @ 1418123e0

void __cdecl
AlgoImpl::HeapSortInternal<void_*,int,FIdentityFunctor,TLess<void>_>
          (void **param_1,int param_2,FIdentityFunctor param_3,TLess<void> param_4)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar6 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_1418124c0:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar8 = 0;
            pvVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = pvVar1;
            if (1 < iVar5) {
              do {
                iVar4 = iVar8 * 2;
                iVar6 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  if (param_1[(longlong)iVar4 + 2] < param_1[iVar6]) {
                    iVar6 = iVar4;
                  }
                  iVar6 = iVar6 + 1;
                }
                pvVar1 = param_1[iVar8];
                if (param_1[iVar6] <= pvVar1) break;
                param_1[iVar8] = param_1[iVar6];
                param_1[iVar6] = pvVar1;
                iVar8 = iVar6;
              } while (iVar6 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar6 + -2;
      iVar6 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar7 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2] < param_1[iVar7]) {
        iVar7 = iVar5;
      }
      iVar7 = iVar7 + 1;
    }
    pvVar1 = param_1[iVar4];
    if (param_1[iVar7] <= pvVar1) goto LAB_1418124c0;
    param_1[iVar4] = param_1[iVar7];
    iVar5 = iVar7 * 2 + 1;
    param_1[iVar7] = pvVar1;
    iVar4 = iVar7;
  } while( true );
}

// HeapSortInternal<FAutomationExpectedMessage,int,FIdentityFunctor,TDereferenceWrapper<FAutomationExpectedMessage,TLess<void>_>_> @ 141812570

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<FAutomationExpectedMessage,int,FIdentityFunctor,TDereferenceWrapper<FAutomationExpectedMessage,TLess<void>_>_>
          (FAutomationExpectedMessage *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAutomationExpectedMessage,TLess<void>_> param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FRegexPatternImplementation *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined7 uVar8;
  MatchType MVar9;
  Type TVar10;
  undefined3 uVar11;
  int iVar12;
  undefined7 uVar13;
  MatchType MVar14;
  int iVar15;
  int iVar16;
  Type TVar17;
  undefined3 uVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  wchar_t *pwVar24;
  wchar_t *pwVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  int iVar29;
  FAutomationExpectedMessage *pFVar30;
  FAutomationExpectedMessage *pFVar31;
  FAutomationExpectedMessage *pFVar32;
  
  if (param_2 < 0) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar20 = (param_2 + -2) / 2;
  iVar22 = iVar20 * 2 + 1;
  iVar27 = iVar22;
  iVar23 = iVar20;
  do {
    while (param_2 <= iVar22) {
LAB_141812705:
      if (iVar23 == 0) {
        iVar22 = param_2 + -1;
        lVar28 = (longlong)iVar22;
        if (0 < iVar22) {
          pFVar32 = param_1 + lVar28;
          do {
            iVar27 = (pFVar32->MessagePatternString).Data.ArrayNum;
            iVar20 = (pFVar32->MessagePatternString).Data.ArrayMax;
            iVar29 = 0;
            iVar12 = param_1->ActualNumberOfOccurrences;
            TVar17 = param_1->Verbosity;
            uVar18 = *(undefined3 *)&param_1->field_0x35;
            pFVar4 = (param_1->MessagePatternString).Data.AllocatorInstance.Data;
            iVar23 = (param_1->MessagePatternString).Data.ArrayNum;
            iVar26 = (param_1->MessagePatternString).Data.ArrayMax;
            pFVar5 = (param_1->MessagePatternRegex).TypedValue.Implementation.Object;
            pTVar6 = (param_1->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.
                     ReferenceController;
            bVar19 = (param_1->MessagePatternRegex).bIsSet;
            uVar13 = *(undefined7 *)&(param_1->MessagePatternRegex).field_0x11;
            MVar14 = param_1->CompareType;
            iVar21 = param_1->ExpectedNumberOfOccurrences;
            (param_1->MessagePatternString).Data.AllocatorInstance.Data =
                 (pFVar32->MessagePatternString).Data.AllocatorInstance.Data;
            (param_1->MessagePatternString).Data.ArrayNum = iVar27;
            (param_1->MessagePatternString).Data.ArrayMax = iVar20;
            pTVar7 = (pFVar32->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.
                     ReferenceController;
            (param_1->MessagePatternRegex).TypedValue.Implementation.Object =
                 (pFVar32->MessagePatternRegex).TypedValue.Implementation.Object;
            (param_1->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.
            ReferenceController = pTVar7;
            uVar8 = *(undefined7 *)&(pFVar32->MessagePatternRegex).field_0x11;
            MVar9 = pFVar32->CompareType;
            iVar27 = pFVar32->ExpectedNumberOfOccurrences;
            (param_1->MessagePatternRegex).bIsSet = (pFVar32->MessagePatternRegex).bIsSet;
            *(undefined7 *)&(param_1->MessagePatternRegex).field_0x11 = uVar8;
            param_1->CompareType = MVar9;
            param_1->ExpectedNumberOfOccurrences = iVar27;
            TVar10 = pFVar32->Verbosity;
            uVar11 = *(undefined3 *)&pFVar32->field_0x35;
            param_1->ActualNumberOfOccurrences = pFVar32->ActualNumberOfOccurrences;
            param_1->Verbosity = TVar10;
            *(undefined3 *)&param_1->field_0x35 = uVar11;
            (pFVar32->MessagePatternString).Data.AllocatorInstance.Data = pFVar4;
            (pFVar32->MessagePatternString).Data.ArrayNum = iVar23;
            (pFVar32->MessagePatternString).Data.ArrayMax = iVar26;
            (pFVar32->MessagePatternRegex).TypedValue.Implementation.Object = pFVar5;
            (pFVar32->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.
            ReferenceController = pTVar6;
            (pFVar32->MessagePatternRegex).bIsSet = bVar19;
            *(undefined7 *)&(pFVar32->MessagePatternRegex).field_0x11 = uVar13;
            pFVar32->CompareType = MVar14;
            pFVar32->ExpectedNumberOfOccurrences = iVar21;
            pFVar32->ActualNumberOfOccurrences = iVar12;
            pFVar32->Verbosity = TVar17;
            *(undefined3 *)&pFVar32->field_0x35 = uVar18;
            if (1 < iVar22) {
              do {
                iVar20 = iVar29 * 2;
                iVar27 = iVar20 + 1;
                if (iVar20 + 2 < iVar22) {
                  lVar1 = (longlong)iVar20 + 1;
                  lVar2 = (longlong)iVar20 + 2;
                  if (param_1[lVar1].MessagePatternString.Data.ArrayNum == 0) {
                    pwVar25 = L"";
                  }
                  else {
                    pwVar25 = (wchar_t *)
                              param_1[lVar1].MessagePatternString.Data.AllocatorInstance.Data;
                  }
                  if (param_1[lVar2].MessagePatternString.Data.ArrayNum == 0) {
                    pwVar24 = L"";
                  }
                  else {
                    pwVar24 = (wchar_t *)
                              param_1[lVar2].MessagePatternString.Data.AllocatorInstance.Data;
                  }
                  iVar23 = FGenericPlatformStricmp::Stricmp(pwVar24,pwVar25);
                  if (iVar23 < 0) {
                    iVar27 = iVar20;
                  }
                  iVar27 = iVar27 + 1;
                }
                pFVar30 = param_1 + iVar29;
                pFVar31 = param_1 + iVar27;
                if ((pFVar31->MessagePatternString).Data.ArrayNum == 0) {
                  pwVar25 = L"";
                }
                else {
                  pwVar25 = (wchar_t *)(pFVar31->MessagePatternString).Data.AllocatorInstance.Data;
                }
                if ((pFVar30->MessagePatternString).Data.ArrayNum == 0) {
                  pwVar24 = L"";
                }
                else {
                  pwVar24 = (wchar_t *)(pFVar30->MessagePatternString).Data.AllocatorInstance.Data;
                }
                iVar20 = FGenericPlatformStricmp::Stricmp(pwVar24,pwVar25);
                if (-1 < iVar20) break;
                iVar20 = (pFVar31->MessagePatternString).Data.ArrayNum;
                iVar23 = (pFVar31->MessagePatternString).Data.ArrayMax;
                pFVar4 = (pFVar30->MessagePatternString).Data.AllocatorInstance.Data;
                iVar26 = (pFVar30->MessagePatternString).Data.ArrayNum;
                iVar21 = (pFVar30->MessagePatternString).Data.ArrayMax;
                pFVar5 = (pFVar30->MessagePatternRegex).TypedValue.Implementation.Object;
                pTVar6 = (pFVar30->MessagePatternRegex).TypedValue.Implementation.
                         SharedReferenceCount.ReferenceController;
                bVar19 = (pFVar30->MessagePatternRegex).bIsSet;
                uVar13 = *(undefined7 *)&(pFVar30->MessagePatternRegex).field_0x11;
                MVar14 = pFVar30->CompareType;
                iVar12 = pFVar30->ExpectedNumberOfOccurrences;
                iVar29 = pFVar30->ActualNumberOfOccurrences;
                TVar17 = pFVar30->Verbosity;
                uVar18 = *(undefined3 *)&pFVar30->field_0x35;
                (pFVar30->MessagePatternString).Data.AllocatorInstance.Data =
                     (pFVar31->MessagePatternString).Data.AllocatorInstance.Data;
                (pFVar30->MessagePatternString).Data.ArrayNum = iVar20;
                (pFVar30->MessagePatternString).Data.ArrayMax = iVar23;
                pTVar7 = (pFVar31->MessagePatternRegex).TypedValue.Implementation.
                         SharedReferenceCount.ReferenceController;
                (pFVar30->MessagePatternRegex).TypedValue.Implementation.Object =
                     (pFVar31->MessagePatternRegex).TypedValue.Implementation.Object;
                (pFVar30->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.
                ReferenceController = pTVar7;
                uVar8 = *(undefined7 *)&(pFVar31->MessagePatternRegex).field_0x11;
                MVar9 = pFVar31->CompareType;
                iVar20 = pFVar31->ExpectedNumberOfOccurrences;
                (pFVar30->MessagePatternRegex).bIsSet = (pFVar31->MessagePatternRegex).bIsSet;
                *(undefined7 *)&(pFVar30->MessagePatternRegex).field_0x11 = uVar8;
                pFVar30->CompareType = MVar9;
                pFVar30->ExpectedNumberOfOccurrences = iVar20;
                TVar10 = pFVar31->Verbosity;
                uVar11 = *(undefined3 *)&pFVar31->field_0x35;
                pFVar30->ActualNumberOfOccurrences = pFVar31->ActualNumberOfOccurrences;
                pFVar30->Verbosity = TVar10;
                *(undefined3 *)&pFVar30->field_0x35 = uVar11;
                (pFVar31->MessagePatternString).Data.AllocatorInstance.Data = pFVar4;
                (pFVar31->MessagePatternString).Data.ArrayNum = iVar26;
                (pFVar31->MessagePatternString).Data.ArrayMax = iVar21;
                (pFVar31->MessagePatternRegex).TypedValue.Implementation.Object = pFVar5;
                (pFVar31->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.
                ReferenceController = pTVar6;
                (pFVar31->MessagePatternRegex).bIsSet = bVar19;
                *(undefined7 *)&(pFVar31->MessagePatternRegex).field_0x11 = uVar13;
                pFVar31->CompareType = MVar14;
                pFVar31->ExpectedNumberOfOccurrences = iVar12;
                pFVar31->ActualNumberOfOccurrences = iVar29;
                pFVar31->Verbosity = TVar17;
                *(undefined3 *)&pFVar31->field_0x35 = uVar18;
                iVar29 = iVar27;
              } while (iVar27 * 2 + 1 < iVar22);
            }
            iVar22 = iVar22 + -1;
            lVar28 = lVar28 + -1;
            pFVar32 = pFVar32 + -1;
          } while (0 < lVar28);
        }
        return;
      }
      iVar20 = iVar23 + -1;
      iVar22 = iVar27 + -2;
      iVar27 = iVar22;
      iVar23 = iVar20;
    }
    iVar22 = iVar20 * 2;
    iVar26 = iVar22 + 1;
    if (iVar22 + 2 < param_2) {
      lVar28 = (longlong)iVar22 + 1;
      lVar1 = (longlong)iVar22 + 2;
      if (param_1[lVar28].MessagePatternString.Data.ArrayNum == 0) {
        pwVar25 = L"";
      }
      else {
        pwVar25 = (wchar_t *)param_1[lVar28].MessagePatternString.Data.AllocatorInstance.Data;
      }
      if (param_1[lVar1].MessagePatternString.Data.ArrayNum == 0) {
        pwVar24 = L"";
      }
      else {
        pwVar24 = (wchar_t *)param_1[lVar1].MessagePatternString.Data.AllocatorInstance.Data;
      }
      iVar21 = FGenericPlatformStricmp::Stricmp(pwVar24,pwVar25);
      if (iVar21 < 0) {
        iVar26 = iVar22;
      }
      iVar26 = iVar26 + 1;
    }
    pFVar32 = param_1 + iVar20;
    pFVar30 = param_1 + iVar26;
    if ((pFVar30->MessagePatternString).Data.ArrayNum == 0) {
      pwVar25 = L"";
    }
    else {
      pwVar25 = (wchar_t *)(pFVar30->MessagePatternString).Data.AllocatorInstance.Data;
    }
    if ((pFVar32->MessagePatternString).Data.ArrayNum == 0) {
      pwVar24 = L"";
    }
    else {
      pwVar24 = (wchar_t *)(pFVar32->MessagePatternString).Data.AllocatorInstance.Data;
    }
    iVar22 = FGenericPlatformStricmp::Stricmp(pwVar24,pwVar25);
    if (-1 < iVar22) goto LAB_141812705;
    iVar20 = (pFVar30->MessagePatternString).Data.ArrayNum;
    iVar21 = (pFVar30->MessagePatternString).Data.ArrayMax;
    iVar22 = iVar26 * 2 + 1;
    iVar16 = pFVar32->ActualNumberOfOccurrences;
    TVar17 = pFVar32->Verbosity;
    uVar18 = *(undefined3 *)&pFVar32->field_0x35;
    pFVar4 = (pFVar32->MessagePatternString).Data.AllocatorInstance.Data;
    iVar12 = (pFVar32->MessagePatternString).Data.ArrayNum;
    iVar29 = (pFVar32->MessagePatternString).Data.ArrayMax;
    pFVar5 = (pFVar32->MessagePatternRegex).TypedValue.Implementation.Object;
    pTVar6 = (pFVar32->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.
             ReferenceController;
    bVar19 = (pFVar32->MessagePatternRegex).bIsSet;
    uVar13 = *(undefined7 *)&(pFVar32->MessagePatternRegex).field_0x11;
    MVar14 = pFVar32->CompareType;
    iVar15 = pFVar32->ExpectedNumberOfOccurrences;
    (pFVar32->MessagePatternString).Data.AllocatorInstance.Data =
         (pFVar30->MessagePatternString).Data.AllocatorInstance.Data;
    (pFVar32->MessagePatternString).Data.ArrayNum = iVar20;
    (pFVar32->MessagePatternString).Data.ArrayMax = iVar21;
    pTVar7 = (pFVar30->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.
             ReferenceController;
    (pFVar32->MessagePatternRegex).TypedValue.Implementation.Object =
         (pFVar30->MessagePatternRegex).TypedValue.Implementation.Object;
    (pFVar32->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.
    ReferenceController = pTVar7;
    uVar8 = *(undefined7 *)&(pFVar30->MessagePatternRegex).field_0x11;
    MVar9 = pFVar30->CompareType;
    iVar20 = pFVar30->ExpectedNumberOfOccurrences;
    (pFVar32->MessagePatternRegex).bIsSet = (pFVar30->MessagePatternRegex).bIsSet;
    *(undefined7 *)&(pFVar32->MessagePatternRegex).field_0x11 = uVar8;
    pFVar32->CompareType = MVar9;
    pFVar32->ExpectedNumberOfOccurrences = iVar20;
    TVar10 = pFVar30->Verbosity;
    uVar11 = *(undefined3 *)&pFVar30->field_0x35;
    pFVar32->ActualNumberOfOccurrences = pFVar30->ActualNumberOfOccurrences;
    pFVar32->Verbosity = TVar10;
    *(undefined3 *)&pFVar32->field_0x35 = uVar11;
    (pFVar30->MessagePatternString).Data.AllocatorInstance.Data = pFVar4;
    (pFVar30->MessagePatternString).Data.ArrayNum = iVar12;
    (pFVar30->MessagePatternString).Data.ArrayMax = iVar29;
    (pFVar30->MessagePatternRegex).TypedValue.Implementation.Object = pFVar5;
    (pFVar30->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.
    ReferenceController = pTVar6;
    (pFVar30->MessagePatternRegex).bIsSet = bVar19;
    *(undefined7 *)&(pFVar30->MessagePatternRegex).field_0x11 = uVar13;
    pFVar30->CompareType = MVar14;
    pFVar30->ExpectedNumberOfOccurrences = iVar15;
    pFVar30->ActualNumberOfOccurrences = iVar16;
    pFVar30->Verbosity = TVar17;
    *(undefined3 *)&pFVar30->field_0x35 = uVar18;
    iVar20 = iVar26;
  } while( true );
}

// HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,`FAutomationTestFramework::SaveTestTagMappings'::__l2::<lambda_1>_>_> @ 1418128c0

void __cdecl
AlgoImpl::
HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_FAutomationTestFramework::SaveTestTagMappings_::__l2::<lambda_1>_>_>
          (FString *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FString,_public:_void___cdecl_FAutomationTestFramework::SaveTestTagMappings(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_const_&)const_::_2_::<lambda_1>_>
          param_4)

{
  FString *pFVar1;
  FString *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  FString *pFVar15;
  int iVar16;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar13 = iVar6 * 2 + 1;
  do {
    iVar10 = 0;
    iVar9 = iVar6;
    iVar8 = iVar13;
    while (iVar8 < param_2) {
      iVar8 = iVar9 * 2;
      iVar16 = iVar8 + 1;
      if (iVar8 + 2 < param_2) {
        iVar12 = param_1[(longlong)iVar8 + 1].Data.ArrayNum;
        iVar7 = param_1[(longlong)iVar8 + 2].Data.ArrayNum;
        iVar11 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar11 = iVar10;
        }
        iVar7 = iVar12 + -1;
        if (iVar12 == 0) {
          iVar7 = iVar10;
        }
        if (iVar7 < iVar11) {
          iVar16 = iVar8;
        }
        iVar16 = iVar16 + 1;
      }
      iVar8 = param_1[iVar9].Data.ArrayNum;
      iVar12 = param_1[iVar16].Data.ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar10;
      }
      iVar8 = iVar12 + -1;
      if (iVar12 == 0) {
        iVar8 = iVar10;
      }
      if (iVar7 <= iVar8) break;
      pFVar15 = param_1 + iVar16;
      iVar8 = (pFVar15->Data).ArrayNum;
      iVar12 = (pFVar15->Data).ArrayMax;
      pFVar1 = param_1 + iVar9;
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      iVar7 = (pFVar1->Data).ArrayNum;
      iVar11 = (pFVar1->Data).ArrayMax;
      pFVar1 = param_1 + iVar9;
      (pFVar1->Data).AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
      (pFVar1->Data).ArrayNum = iVar8;
      (pFVar1->Data).ArrayMax = iVar12;
      pFVar15 = param_1 + iVar16;
      (pFVar15->Data).AllocatorInstance.Data = pFVar4;
      (pFVar15->Data).ArrayNum = iVar7;
      (pFVar15->Data).ArrayMax = iVar11;
      iVar9 = iVar16;
      iVar8 = iVar16 * 2 + 1;
    }
    if (iVar6 == 0) {
      iVar13 = param_2 + -1;
      lVar14 = (longlong)iVar13;
      if (0 < iVar13) {
        pFVar15 = param_1 + lVar14;
        do {
          iVar6 = (pFVar15->Data).ArrayNum;
          iVar9 = (pFVar15->Data).ArrayMax;
          pFVar4 = (param_1->Data).AllocatorInstance.Data;
          iVar8 = (param_1->Data).ArrayNum;
          iVar16 = (param_1->Data).ArrayMax;
          (param_1->Data).AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
          (param_1->Data).ArrayNum = iVar6;
          (param_1->Data).ArrayMax = iVar9;
          (pFVar15->Data).AllocatorInstance.Data = pFVar4;
          (pFVar15->Data).ArrayNum = iVar8;
          (pFVar15->Data).ArrayMax = iVar16;
          iVar6 = 0;
          if (1 < iVar13) {
            do {
              iVar8 = iVar6 * 2;
              iVar9 = iVar8 + 1;
              if (iVar8 + 2 < iVar13) {
                iVar16 = param_1[(longlong)iVar8 + 1].Data.ArrayNum;
                iVar12 = param_1[(longlong)iVar8 + 2].Data.ArrayNum;
                iVar7 = iVar12 + -1;
                if (iVar12 == 0) {
                  iVar7 = iVar10;
                }
                iVar12 = iVar16 + -1;
                if (iVar16 == 0) {
                  iVar12 = iVar10;
                }
                if (iVar12 < iVar7) {
                  iVar9 = iVar8;
                }
                iVar9 = iVar9 + 1;
              }
              iVar8 = param_1[iVar6].Data.ArrayNum;
              iVar16 = param_1[iVar9].Data.ArrayNum;
              iVar12 = iVar8 + -1;
              if (iVar8 == 0) {
                iVar12 = iVar10;
              }
              iVar8 = iVar16 + -1;
              if (iVar16 == 0) {
                iVar8 = iVar10;
              }
              if (iVar12 <= iVar8) break;
              pFVar1 = param_1 + iVar9;
              iVar8 = (pFVar1->Data).ArrayNum;
              iVar16 = (pFVar1->Data).ArrayMax;
              pFVar2 = param_1 + iVar6;
              pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
              iVar12 = (pFVar2->Data).ArrayNum;
              iVar7 = (pFVar2->Data).ArrayMax;
              pFVar2 = param_1 + iVar6;
              (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
              (pFVar2->Data).ArrayNum = iVar8;
              (pFVar2->Data).ArrayMax = iVar16;
              pFVar1 = param_1 + iVar9;
              (pFVar1->Data).AllocatorInstance.Data = pFVar4;
              (pFVar1->Data).ArrayNum = iVar12;
              (pFVar1->Data).ArrayMax = iVar7;
              iVar6 = iVar9;
            } while (iVar9 * 2 + 1 < iVar13);
          }
          iVar13 = iVar13 + -1;
          lVar14 = lVar14 + -1;
          pFVar15 = pFVar15 + -1;
        } while (0 < lVar14);
      }
      return;
    }
    iVar6 = iVar6 + -1;
    iVar13 = iVar13 + -2;
  } while( true );
}

// HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,`FAutomationTestFramework::SaveTestTagMappings'::__l2::<lambda_2>_>_> @ 141812b10

void __cdecl
AlgoImpl::
HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_FAutomationTestFramework::SaveTestTagMappings_::__l2::<lambda_2>_>_>
          (FString *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FString,_public:_void___cdecl_FAutomationTestFramework::SaveTestTagMappings(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_const_&)const_::_2_::<lambda_2>_>
          param_4)

{
  FString *pFVar1;
  FString *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  FString *pFVar15;
  int iVar16;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar13 = iVar6 * 2 + 1;
  do {
    iVar10 = 0;
    iVar9 = iVar6;
    iVar8 = iVar13;
    while (iVar8 < param_2) {
      iVar8 = iVar9 * 2;
      iVar16 = iVar8 + 1;
      if (iVar8 + 2 < param_2) {
        iVar12 = param_1[(longlong)iVar8 + 1].Data.ArrayNum;
        iVar7 = param_1[(longlong)iVar8 + 2].Data.ArrayNum;
        iVar11 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar11 = iVar10;
        }
        iVar7 = iVar12 + -1;
        if (iVar12 == 0) {
          iVar7 = iVar10;
        }
        if (iVar7 < iVar11) {
          iVar16 = iVar8;
        }
        iVar16 = iVar16 + 1;
      }
      iVar8 = param_1[iVar9].Data.ArrayNum;
      iVar12 = param_1[iVar16].Data.ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar10;
      }
      iVar8 = iVar12 + -1;
      if (iVar12 == 0) {
        iVar8 = iVar10;
      }
      if (iVar7 <= iVar8) break;
      pFVar15 = param_1 + iVar16;
      iVar8 = (pFVar15->Data).ArrayNum;
      iVar12 = (pFVar15->Data).ArrayMax;
      pFVar1 = param_1 + iVar9;
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      iVar7 = (pFVar1->Data).ArrayNum;
      iVar11 = (pFVar1->Data).ArrayMax;
      pFVar1 = param_1 + iVar9;
      (pFVar1->Data).AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
      (pFVar1->Data).ArrayNum = iVar8;
      (pFVar1->Data).ArrayMax = iVar12;
      pFVar15 = param_1 + iVar16;
      (pFVar15->Data).AllocatorInstance.Data = pFVar4;
      (pFVar15->Data).ArrayNum = iVar7;
      (pFVar15->Data).ArrayMax = iVar11;
      iVar9 = iVar16;
      iVar8 = iVar16 * 2 + 1;
    }
    if (iVar6 == 0) {
      iVar13 = param_2 + -1;
      lVar14 = (longlong)iVar13;
      if (0 < iVar13) {
        pFVar15 = param_1 + lVar14;
        do {
          iVar6 = (pFVar15->Data).ArrayNum;
          iVar9 = (pFVar15->Data).ArrayMax;
          pFVar4 = (param_1->Data).AllocatorInstance.Data;
          iVar8 = (param_1->Data).ArrayNum;
          iVar16 = (param_1->Data).ArrayMax;
          (param_1->Data).AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
          (param_1->Data).ArrayNum = iVar6;
          (param_1->Data).ArrayMax = iVar9;
          (pFVar15->Data).AllocatorInstance.Data = pFVar4;
          (pFVar15->Data).ArrayNum = iVar8;
          (pFVar15->Data).ArrayMax = iVar16;
          iVar6 = 0;
          if (1 < iVar13) {
            do {
              iVar8 = iVar6 * 2;
              iVar9 = iVar8 + 1;
              if (iVar8 + 2 < iVar13) {
                iVar16 = param_1[(longlong)iVar8 + 1].Data.ArrayNum;
                iVar12 = param_1[(longlong)iVar8 + 2].Data.ArrayNum;
                iVar7 = iVar12 + -1;
                if (iVar12 == 0) {
                  iVar7 = iVar10;
                }
                iVar12 = iVar16 + -1;
                if (iVar16 == 0) {
                  iVar12 = iVar10;
                }
                if (iVar12 < iVar7) {
                  iVar9 = iVar8;
                }
                iVar9 = iVar9 + 1;
              }
              iVar8 = param_1[iVar6].Data.ArrayNum;
              iVar16 = param_1[iVar9].Data.ArrayNum;
              iVar12 = iVar8 + -1;
              if (iVar8 == 0) {
                iVar12 = iVar10;
              }
              iVar8 = iVar16 + -1;
              if (iVar16 == 0) {
                iVar8 = iVar10;
              }
              if (iVar12 <= iVar8) break;
              pFVar1 = param_1 + iVar9;
              iVar8 = (pFVar1->Data).ArrayNum;
              iVar16 = (pFVar1->Data).ArrayMax;
              pFVar2 = param_1 + iVar6;
              pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
              iVar12 = (pFVar2->Data).ArrayNum;
              iVar7 = (pFVar2->Data).ArrayMax;
              pFVar2 = param_1 + iVar6;
              (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
              (pFVar2->Data).ArrayNum = iVar8;
              (pFVar2->Data).ArrayMax = iVar16;
              pFVar1 = param_1 + iVar9;
              (pFVar1->Data).AllocatorInstance.Data = pFVar4;
              (pFVar1->Data).ArrayNum = iVar12;
              (pFVar1->Data).ArrayMax = iVar7;
              iVar6 = iVar9;
            } while (iVar9 * 2 + 1 < iVar13);
          }
          iVar13 = iVar13 + -1;
          lVar14 = lVar14 + -1;
          pFVar15 = pFVar15 + -1;
        } while (0 < lVar14);
      }
      return;
    }
    iVar6 = iVar6 + -1;
    iVar13 = iVar13 + -2;
  } while( true );
}

// IntroSortInternal<void_*,int,FIdentityFunctor,TLess<void>_> @ 141812d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::IntroSortInternal<void_*,int,FIdentityFunctor,TLess<void>_>
          (void **param_1,int param_2,FIdentityFunctor param_3,TLess<void> param_4)

{
  void **ppvVar1;
  void *pvVar2;
  int iVar3;
  void **ppvVar4;
  void ***pppvVar5;
  void **ppvVar6;
  void **ppvVar7;
  void **ppvVar8;
  void **ppvVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  void **local_338;
  void **local_328;
  void **local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    pppvVar5 = &local_328;
    do {
      ppvVar8 = pppvVar5[1];
      ppvVar4 = *pppvVar5;
      ppvVar1 = pppvVar5[2];
      iVar3 = (int)((longlong)ppvVar8 - (longlong)ppvVar4 >> 3) + 1;
      local_338._0_4_ = (int)ppvVar1;
      ppvVar9 = ppvVar4;
      if ((int)local_338 != 0) {
LAB_141812e10:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppvVar6 = ppvVar8 + 1;
          pvVar2 = ppvVar9[iVar3 >> 1];
          ppvVar9[iVar3 >> 1] = *ppvVar9;
          *ppvVar9 = pvVar2;
          ppvVar4 = ppvVar9;
LAB_141812e40:
          ppvVar4 = ppvVar4 + 1;
          if (ppvVar4 <= ppvVar8) goto code_r0x000141812e49;
          goto LAB_141812e51;
        }
        for (; ppvVar4 = ppvVar9, ppvVar1 = ppvVar9, ppvVar9 < ppvVar8; ppvVar8 = ppvVar8 + -1) {
          while (ppvVar1 = ppvVar1 + 1, ppvVar1 <= ppvVar8) {
            if (*ppvVar4 < *ppvVar1) {
              ppvVar4 = ppvVar1;
            }
          }
          pvVar2 = *ppvVar4;
          *ppvVar4 = *ppvVar8;
          *ppvVar8 = pvVar2;
        }
        goto LAB_141812f0c;
      }
LAB_141812efa:
      local_338 = ppvVar1;
      HeapSortInternal<void_*,int,FIdentityFunctor,TLess<void>_>(ppvVar4,iVar3,param_3,param_4);
LAB_141812f0c:
      pppvVar5 = pppvVar5 + -3;
    } while (&local_328 <= pppvVar5);
  }
  return;
code_r0x000141812e49:
  if (*ppvVar4 <= *ppvVar9) goto LAB_141812e40;
LAB_141812e51:
  do {
    ppvVar7 = ppvVar6;
    ppvVar6 = ppvVar7 + -1;
    if (ppvVar6 <= ppvVar9) break;
  } while (*ppvVar9 <= *ppvVar6);
  if (ppvVar4 <= ppvVar6) {
    pvVar2 = *ppvVar4;
    *ppvVar4 = *ppvVar6;
    *ppvVar6 = pvVar2;
    goto LAB_141812e40;
  }
  pvVar2 = *ppvVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *ppvVar9 = *ppvVar6;
  *ppvVar6 = pvVar2;
  if ((longlong)((longlong)ppvVar6 + (-8 - (longlong)ppvVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppvVar8 - (longlong)ppvVar4 & 0xfffffffffffffff8U)) {
    if (ppvVar4 < ppvVar8) {
      *pppvVar5 = ppvVar4;
      pppvVar5[1] = ppvVar8;
      *(int *)(pppvVar5 + 2) = (int)local_338;
      pppvVar5 = pppvVar5 + 3;
    }
    if (ppvVar6 <= ppvVar9 + 1) goto LAB_141812f0c;
    ppvVar8 = ppvVar7 + -2;
    ppvVar4 = ppvVar9;
  }
  else {
    if (ppvVar9 + 1 < ppvVar6) {
      *pppvVar5 = ppvVar9;
      pppvVar5[1] = ppvVar7 + -2;
      *(int *)(pppvVar5 + 2) = (int)local_338;
      pppvVar5 = pppvVar5 + 3;
    }
    if (ppvVar8 <= ppvVar4) goto LAB_141812f0c;
  }
  iVar3 = (int)((longlong)ppvVar8 - (longlong)ppvVar4 >> 3) + 1;
  ppvVar9 = ppvVar4;
  if ((int)local_338 == 0) goto LAB_141812efa;
  goto LAB_141812e10;
}

// IntroSortInternal<FAutomationExpectedMessage,int,FIdentityFunctor,TDereferenceWrapper<FAutomationExpectedMessage,TLess<void>_>_> @ 141812fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<FAutomationExpectedMessage,int,FIdentityFunctor,TDereferenceWrapper<FAutomationExpectedMessage,TLess<void>_>_>
          (FAutomationExpectedMessage *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAutomationExpectedMessage,TLess<void>_> param_4)

{
  FScriptContainerElement *pFVar1;
  FRegexPatternImplementation *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  undefined7 uVar10;
  MatchType MVar11;
  Type TVar12;
  undefined3 uVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  undefined7 uVar17;
  MatchType MVar18;
  int iVar19;
  int iVar20;
  Type TVar21;
  undefined3 uVar22;
  wchar_t *pwVar23;
  int iVar24;
  wchar_t *pwVar25;
  FAutomationExpectedMessage *pFVar26;
  FAutomationExpectedMessage *pFVar27;
  FAutomationExpectedMessage *pFVar28;
  int iVar29;
  FAutomationExpectedMessage **ppFVar30;
  FAutomationExpectedMessage *pFVar31;
  FAutomationExpectedMessage *pFVar32;
  FAutomationExpectedMessage *pFVar33;
  float fVar34;
  undefined1 auStack_388 [48];
  FAutomationExpectedMessage *local_358;
  FAutomationExpectedMessage *local_348;
  FAutomationExpectedMessage *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar34 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar34;
    memset(local_330,0,0x2e8);
    ppFVar30 = &local_348;
    do {
      pFVar26 = ppFVar30[1];
      pFVar33 = *ppFVar30;
      local_358 = ppFVar30[2];
      iVar24 = (int)(((longlong)pFVar26 - (longlong)pFVar33) / 0x38) + 1;
      pFVar32 = pFVar33;
      iVar29 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_141813080:
        if (8 < iVar24) {
          iVar8 = (pFVar32->MessagePatternString).Data.ArrayNum;
          iVar9 = (pFVar32->MessagePatternString).Data.ArrayMax;
          pFVar27 = pFVar26 + 1;
          pFVar33 = pFVar32 + iVar24 / 2;
          pFVar1 = (pFVar33->MessagePatternString).Data.AllocatorInstance.Data;
          iVar14 = (pFVar33->MessagePatternString).Data.ArrayNum;
          iVar15 = (pFVar33->MessagePatternString).Data.ArrayMax;
          pFVar2 = (pFVar33->MessagePatternRegex).TypedValue.Implementation.Object;
          pTVar3 = (pFVar33->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.
                   ReferenceController;
          bVar16 = (pFVar33->MessagePatternRegex).bIsSet;
          uVar17 = *(undefined7 *)&(pFVar33->MessagePatternRegex).field_0x11;
          MVar18 = pFVar33->CompareType;
          iVar19 = pFVar33->ExpectedNumberOfOccurrences;
          iVar20 = pFVar33->ActualNumberOfOccurrences;
          TVar21 = pFVar33->Verbosity;
          uVar22 = *(undefined3 *)&pFVar33->field_0x35;
          (pFVar33->MessagePatternString).Data.AllocatorInstance.Data =
               (pFVar32->MessagePatternString).Data.AllocatorInstance.Data;
          (pFVar33->MessagePatternString).Data.ArrayNum = iVar8;
          (pFVar33->MessagePatternString).Data.ArrayMax = iVar9;
          pTVar4 = (pFVar32->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.
                   ReferenceController;
          (pFVar33->MessagePatternRegex).TypedValue.Implementation.Object =
               (pFVar32->MessagePatternRegex).TypedValue.Implementation.Object;
          (pFVar33->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.
          ReferenceController = pTVar4;
          uVar10 = *(undefined7 *)&(pFVar32->MessagePatternRegex).field_0x11;
          MVar11 = pFVar32->CompareType;
          iVar24 = pFVar32->ExpectedNumberOfOccurrences;
          (pFVar33->MessagePatternRegex).bIsSet = (pFVar32->MessagePatternRegex).bIsSet;
          *(undefined7 *)&(pFVar33->MessagePatternRegex).field_0x11 = uVar10;
          pFVar33->CompareType = MVar11;
          pFVar33->ExpectedNumberOfOccurrences = iVar24;
          TVar12 = pFVar32->Verbosity;
          uVar13 = *(undefined3 *)&pFVar32->field_0x35;
          pFVar33->ActualNumberOfOccurrences = pFVar32->ActualNumberOfOccurrences;
          pFVar33->Verbosity = TVar12;
          *(undefined3 *)&pFVar33->field_0x35 = uVar13;
          (pFVar32->MessagePatternString).Data.AllocatorInstance.Data = pFVar1;
          (pFVar32->MessagePatternString).Data.ArrayNum = iVar14;
          (pFVar32->MessagePatternString).Data.ArrayMax = iVar15;
          (pFVar32->MessagePatternRegex).TypedValue.Implementation.Object = pFVar2;
          (pFVar32->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.
          ReferenceController = pTVar3;
          (pFVar32->MessagePatternRegex).bIsSet = bVar16;
          *(undefined7 *)&(pFVar32->MessagePatternRegex).field_0x11 = uVar17;
          pFVar32->CompareType = MVar18;
          pFVar32->ExpectedNumberOfOccurrences = iVar19;
          pFVar32->ActualNumberOfOccurrences = iVar20;
          pFVar32->Verbosity = TVar21;
          *(undefined3 *)&pFVar32->field_0x35 = uVar22;
          pFVar33 = pFVar32;
LAB_1418130f0:
          pFVar31 = pFVar33;
          pFVar33 = pFVar31 + 1;
          if (pFVar33 <= pFVar26) goto code_r0x0001418130f9;
          goto LAB_141813130;
        }
        for (; pFVar27 = pFVar32, pFVar33 = pFVar32, pFVar32 < pFVar26; pFVar26 = pFVar26 + -1) {
          while (pFVar31 = pFVar27, pFVar33 = pFVar33 + 1, pFVar33 <= pFVar26) {
            if ((pFVar33->MessagePatternString).Data.ArrayNum == 0) {
              pwVar25 = L"";
            }
            else {
              pwVar25 = (wchar_t *)(pFVar33->MessagePatternString).Data.AllocatorInstance.Data;
            }
            if ((pFVar31->MessagePatternString).Data.ArrayNum == 0) {
              pwVar23 = L"";
            }
            else {
              pwVar23 = (wchar_t *)(pFVar31->MessagePatternString).Data.AllocatorInstance.Data;
            }
            iVar29 = FGenericPlatformStricmp::Stricmp(pwVar23,pwVar25);
            pFVar27 = pFVar33;
            if (-1 < iVar29) {
              pFVar27 = pFVar31;
            }
          }
          pFVar1 = (pFVar31->MessagePatternString).Data.AllocatorInstance.Data;
          iVar8 = (pFVar31->MessagePatternString).Data.ArrayNum;
          iVar9 = (pFVar31->MessagePatternString).Data.ArrayMax;
          iVar15 = pFVar31->ActualNumberOfOccurrences;
          TVar21 = pFVar31->Verbosity;
          uVar22 = *(undefined3 *)&pFVar31->field_0x35;
          pFVar2 = (pFVar31->MessagePatternRegex).TypedValue.Implementation.Object;
          pTVar3 = (pFVar31->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.
                   ReferenceController;
          iVar29 = (pFVar26->MessagePatternString).Data.ArrayNum;
          iVar24 = (pFVar26->MessagePatternString).Data.ArrayMax;
          bVar16 = (pFVar31->MessagePatternRegex).bIsSet;
          uVar17 = *(undefined7 *)&(pFVar31->MessagePatternRegex).field_0x11;
          MVar18 = pFVar31->CompareType;
          iVar14 = pFVar31->ExpectedNumberOfOccurrences;
          (pFVar31->MessagePatternString).Data.AllocatorInstance.Data =
               (pFVar26->MessagePatternString).Data.AllocatorInstance.Data;
          (pFVar31->MessagePatternString).Data.ArrayNum = iVar29;
          (pFVar31->MessagePatternString).Data.ArrayMax = iVar24;
          pTVar4 = (pFVar26->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.
                   ReferenceController;
          (pFVar31->MessagePatternRegex).TypedValue.Implementation.Object =
               (pFVar26->MessagePatternRegex).TypedValue.Implementation.Object;
          (pFVar31->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.
          ReferenceController = pTVar4;
          uVar10 = *(undefined7 *)&(pFVar26->MessagePatternRegex).field_0x11;
          MVar11 = pFVar26->CompareType;
          iVar29 = pFVar26->ExpectedNumberOfOccurrences;
          (pFVar31->MessagePatternRegex).bIsSet = (pFVar26->MessagePatternRegex).bIsSet;
          *(undefined7 *)&(pFVar31->MessagePatternRegex).field_0x11 = uVar10;
          pFVar31->CompareType = MVar11;
          pFVar31->ExpectedNumberOfOccurrences = iVar29;
          TVar12 = pFVar26->Verbosity;
          uVar13 = *(undefined3 *)&pFVar26->field_0x35;
          pFVar31->ActualNumberOfOccurrences = pFVar26->ActualNumberOfOccurrences;
          pFVar31->Verbosity = TVar12;
          *(undefined3 *)&pFVar31->field_0x35 = uVar13;
          (pFVar26->MessagePatternString).Data.AllocatorInstance.Data = pFVar1;
          (pFVar26->MessagePatternString).Data.ArrayNum = iVar8;
          (pFVar26->MessagePatternString).Data.ArrayMax = iVar9;
          (pFVar26->MessagePatternRegex).TypedValue.Implementation.Object = pFVar2;
          (pFVar26->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.
          ReferenceController = pTVar3;
          (pFVar26->MessagePatternRegex).bIsSet = bVar16;
          *(undefined7 *)&(pFVar26->MessagePatternRegex).field_0x11 = uVar17;
          pFVar26->CompareType = MVar18;
          pFVar26->ExpectedNumberOfOccurrences = iVar14;
          pFVar26->ActualNumberOfOccurrences = iVar15;
          pFVar26->Verbosity = TVar21;
          *(undefined3 *)&pFVar26->field_0x35 = uVar22;
        }
        goto LAB_1418132d5;
      }
LAB_1418132bc:
      HeapSortInternal<FAutomationExpectedMessage,int,FIdentityFunctor,TDereferenceWrapper<FAutomationExpectedMessage,TLess<void>_>_>
                (pFVar33,iVar24,param_3,param_4);
LAB_1418132d5:
      ppFVar30 = ppFVar30 + -3;
    } while (&local_348 <= ppFVar30);
  }
  return;
code_r0x0001418130f9:
  if (pFVar31[1].MessagePatternString.Data.ArrayNum == 0) {
    pwVar25 = L"";
  }
  else {
    pwVar25 = (wchar_t *)(pFVar33->MessagePatternString).Data.AllocatorInstance.Data;
  }
  if ((pFVar32->MessagePatternString).Data.ArrayNum == 0) {
    pwVar23 = L"";
  }
  else {
    pwVar23 = (wchar_t *)(pFVar32->MessagePatternString).Data.AllocatorInstance.Data;
  }
  iVar24 = FGenericPlatformStricmp::Stricmp(pwVar23,pwVar25);
  if (-1 < iVar24) goto LAB_1418130f0;
LAB_141813130:
  do {
    pFVar28 = pFVar27;
    pFVar27 = pFVar28 + -1;
    if (pFVar27 <= pFVar32) break;
    if ((pFVar32->MessagePatternString).Data.ArrayNum == 0) {
      pwVar25 = L"";
    }
    else {
      pwVar25 = (wchar_t *)(pFVar32->MessagePatternString).Data.AllocatorInstance.Data;
    }
    if (pFVar28[-1].MessagePatternString.Data.ArrayNum == 0) {
      pwVar23 = L"";
    }
    else {
      pwVar23 = (wchar_t *)(pFVar27->MessagePatternString).Data.AllocatorInstance.Data;
    }
    iVar24 = FGenericPlatformStricmp::Stricmp(pwVar23,pwVar25);
  } while (-1 < iVar24);
  pFVar1 = (pFVar27->MessagePatternString).Data.AllocatorInstance.Data;
  uVar5 = pFVar28[-1].MessagePatternString.Data.ArrayNum;
  uVar6 = pFVar28[-1].MessagePatternString.Data.ArrayMax;
  if (pFVar33 <= pFVar27) {
    pFVar7 = (pFVar33->MessagePatternString).Data.AllocatorInstance.Data;
    iVar8 = pFVar31[1].MessagePatternString.Data.ArrayNum;
    iVar9 = pFVar31[1].MessagePatternString.Data.ArrayMax;
    pFVar2 = pFVar31[1].MessagePatternRegex.TypedValue.Implementation.Object;
    pTVar3 = pFVar31[1].MessagePatternRegex.TypedValue.Implementation.SharedReferenceCount.
             ReferenceController;
    bVar16 = pFVar31[1].MessagePatternRegex.bIsSet;
    uVar17 = *(undefined7 *)&pFVar31[1].MessagePatternRegex.field_0x11;
    MVar18 = pFVar31[1].CompareType;
    iVar14 = pFVar31[1].ExpectedNumberOfOccurrences;
    iVar15 = pFVar31[1].ActualNumberOfOccurrences;
    TVar21 = pFVar31[1].Verbosity;
    uVar22 = *(undefined3 *)&pFVar31[1].field_0x35;
    (pFVar33->MessagePatternString).Data.AllocatorInstance.Data = pFVar1;
    pFVar31[1].MessagePatternString.Data.ArrayNum = uVar5;
    pFVar31[1].MessagePatternString.Data.ArrayMax = uVar6;
    pTVar4 = pFVar28[-1].MessagePatternRegex.TypedValue.Implementation.SharedReferenceCount.
             ReferenceController;
    pFVar31[1].MessagePatternRegex.TypedValue.Implementation.Object =
         pFVar28[-1].MessagePatternRegex.TypedValue.Implementation.Object;
    pFVar31[1].MessagePatternRegex.TypedValue.Implementation.SharedReferenceCount.
    ReferenceController = pTVar4;
    uVar10 = *(undefined7 *)&pFVar28[-1].MessagePatternRegex.field_0x11;
    MVar11 = pFVar28[-1].CompareType;
    iVar24 = pFVar28[-1].ExpectedNumberOfOccurrences;
    pFVar31[1].MessagePatternRegex.bIsSet = pFVar28[-1].MessagePatternRegex.bIsSet;
    *(undefined7 *)&pFVar31[1].MessagePatternRegex.field_0x11 = uVar10;
    pFVar31[1].CompareType = MVar11;
    pFVar31[1].ExpectedNumberOfOccurrences = iVar24;
    TVar12 = pFVar28[-1].Verbosity;
    uVar13 = *(undefined3 *)&pFVar28[-1].field_0x35;
    pFVar31[1].ActualNumberOfOccurrences = pFVar28[-1].ActualNumberOfOccurrences;
    pFVar31[1].Verbosity = TVar12;
    *(undefined3 *)&pFVar31[1].field_0x35 = uVar13;
    (pFVar27->MessagePatternString).Data.AllocatorInstance.Data = pFVar7;
    pFVar28[-1].MessagePatternString.Data.ArrayNum = iVar8;
    pFVar28[-1].MessagePatternString.Data.ArrayMax = iVar9;
    pFVar28[-1].MessagePatternRegex.TypedValue.Implementation.Object = pFVar2;
    pFVar28[-1].MessagePatternRegex.TypedValue.Implementation.SharedReferenceCount.
    ReferenceController = pTVar3;
    pFVar28[-1].MessagePatternRegex.bIsSet = bVar16;
    *(undefined7 *)&pFVar28[-1].MessagePatternRegex.field_0x11 = uVar17;
    pFVar28[-1].CompareType = MVar18;
    pFVar28[-1].ExpectedNumberOfOccurrences = iVar14;
    pFVar28[-1].ActualNumberOfOccurrences = iVar15;
    pFVar28[-1].Verbosity = TVar21;
    *(undefined3 *)&pFVar28[-1].field_0x35 = uVar22;
    goto LAB_1418130f0;
  }
  pFVar7 = (pFVar32->MessagePatternString).Data.AllocatorInstance.Data;
  iVar8 = (pFVar32->MessagePatternString).Data.ArrayNum;
  iVar9 = (pFVar32->MessagePatternString).Data.ArrayMax;
  pFVar2 = (pFVar32->MessagePatternRegex).TypedValue.Implementation.Object;
  pTVar3 = (pFVar32->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.
           ReferenceController;
  bVar16 = (pFVar32->MessagePatternRegex).bIsSet;
  uVar17 = *(undefined7 *)&(pFVar32->MessagePatternRegex).field_0x11;
  MVar18 = pFVar32->CompareType;
  iVar14 = pFVar32->ExpectedNumberOfOccurrences;
  iVar29 = iVar29 + -1;
  iVar15 = pFVar32->ActualNumberOfOccurrences;
  TVar21 = pFVar32->Verbosity;
  uVar22 = *(undefined3 *)&pFVar32->field_0x35;
  (pFVar32->MessagePatternString).Data.AllocatorInstance.Data = pFVar1;
  (pFVar32->MessagePatternString).Data.ArrayNum = uVar5;
  (pFVar32->MessagePatternString).Data.ArrayMax = uVar6;
  pTVar4 = pFVar28[-1].MessagePatternRegex.TypedValue.Implementation.SharedReferenceCount.
           ReferenceController;
  (pFVar32->MessagePatternRegex).TypedValue.Implementation.Object =
       pFVar28[-1].MessagePatternRegex.TypedValue.Implementation.Object;
  (pFVar32->MessagePatternRegex).TypedValue.Implementation.SharedReferenceCount.ReferenceController
       = pTVar4;
  uVar10 = *(undefined7 *)&pFVar28[-1].MessagePatternRegex.field_0x11;
  MVar11 = pFVar28[-1].CompareType;
  iVar24 = pFVar28[-1].ExpectedNumberOfOccurrences;
  (pFVar32->MessagePatternRegex).bIsSet = pFVar28[-1].MessagePatternRegex.bIsSet;
  *(undefined7 *)&(pFVar32->MessagePatternRegex).field_0x11 = uVar10;
  pFVar32->CompareType = MVar11;
  pFVar32->ExpectedNumberOfOccurrences = iVar24;
  TVar12 = pFVar28[-1].Verbosity;
  uVar13 = *(undefined3 *)&pFVar28[-1].field_0x35;
  pFVar32->ActualNumberOfOccurrences = pFVar28[-1].ActualNumberOfOccurrences;
  pFVar32->Verbosity = TVar12;
  *(undefined3 *)&pFVar32->field_0x35 = uVar13;
  (pFVar27->MessagePatternString).Data.AllocatorInstance.Data = pFVar7;
  pFVar28[-1].MessagePatternString.Data.ArrayNum = iVar8;
  pFVar28[-1].MessagePatternString.Data.ArrayMax = iVar9;
  pFVar28[-1].MessagePatternRegex.TypedValue.Implementation.Object = pFVar2;
  pFVar28[-1].MessagePatternRegex.TypedValue.Implementation.SharedReferenceCount.ReferenceController
       = pTVar3;
  pFVar28[-1].MessagePatternRegex.bIsSet = bVar16;
  *(undefined7 *)&pFVar28[-1].MessagePatternRegex.field_0x11 = uVar17;
  pFVar28[-1].CompareType = MVar18;
  pFVar28[-1].ExpectedNumberOfOccurrences = iVar14;
  pFVar28[-1].ActualNumberOfOccurrences = iVar15;
  pFVar28[-1].Verbosity = TVar21;
  *(undefined3 *)&pFVar28[-1].field_0x35 = uVar22;
  if (((longlong)pFVar27 + (-0x38 - (longlong)pFVar32)) / 0x38 <
      ((longlong)pFVar26 - (longlong)pFVar33) / 0x38) {
    if (pFVar33 < pFVar26) {
      *ppFVar30 = pFVar33;
      ppFVar30[1] = pFVar26;
      *(int *)(ppFVar30 + 2) = iVar29;
      ppFVar30 = ppFVar30 + 3;
    }
    if (pFVar27 <= pFVar32 + 1) goto LAB_1418132d5;
    pFVar26 = pFVar28 + -2;
    pFVar33 = pFVar32;
  }
  else {
    if (pFVar32 + 1 < pFVar27) {
      *ppFVar30 = pFVar32;
      ppFVar30[1] = pFVar28 + -2;
      *(int *)(ppFVar30 + 2) = iVar29;
      ppFVar30 = ppFVar30 + 3;
    }
    if (pFVar26 <= pFVar33) goto LAB_1418132d5;
  }
  iVar24 = (int)(((longlong)pFVar26 - (longlong)pFVar33) / 0x38) + 1;
  pFVar32 = pFVar33;
  if (iVar29 == 0) goto LAB_1418132bc;
  goto LAB_141813080;
}

// IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,`FAutomationTestFramework::SaveTestTagMappings'::__l2::<lambda_1>_>_> @ 141813400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_FAutomationTestFramework::SaveTestTagMappings_::__l2::<lambda_1>_>_>
          (FString *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FString,_public:_void___cdecl_FAutomationTestFramework::SaveTestTagMappings(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_const_&)const_::_2_::<lambda_1>_>
          param_4)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FString *pFVar11;
  FString *pFVar12;
  FString *pFVar13;
  FString *pFVar14;
  FString *pFVar15;
  FString *pFVar16;
  FString **ppFVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  FString *local_348;
  FString *local_338;
  FString *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar18;
    memset(local_320,0,0x2e8);
    ppFVar17 = &local_338;
    do {
      pFVar16 = ppFVar17[1];
      pFVar15 = *ppFVar17;
      pFVar1 = ppFVar17[2];
      iVar9 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 4) + 1;
      local_348._0_4_ = (int)pFVar1;
      pFVar14 = pFVar15;
      if ((int)local_348 != 0) {
LAB_1418134c0:
        if (8 < iVar9) {
          iVar10 = (pFVar14->Data).ArrayNum;
          iVar2 = (pFVar14->Data).ArrayMax;
          pFVar11 = pFVar16 + 1;
          pFVar15 = pFVar14 + iVar9 / 2;
          pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
          iVar7 = (pFVar15->Data).ArrayNum;
          iVar8 = (pFVar15->Data).ArrayMax;
          pFVar15 = pFVar14 + iVar9 / 2;
          (pFVar15->Data).AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
          (pFVar15->Data).ArrayNum = iVar10;
          (pFVar15->Data).ArrayMax = iVar2;
          (pFVar14->Data).AllocatorInstance.Data = pFVar3;
          (pFVar14->Data).ArrayNum = iVar7;
          (pFVar14->Data).ArrayMax = iVar8;
          pFVar15 = pFVar14;
LAB_1418134f0:
          pFVar13 = pFVar15;
          pFVar15 = pFVar13 + 1;
          if (pFVar15 <= pFVar16) goto code_r0x0001418134f9;
          goto LAB_141813517;
        }
        for (; pFVar1 = pFVar14, pFVar15 = pFVar14, pFVar14 < pFVar16; pFVar16 = pFVar16 + -1) {
          while (pFVar11 = pFVar1, pFVar1 = pFVar15 + 1, pFVar1 <= pFVar16) {
            iVar10 = pFVar15[1].Data.ArrayNum;
            iVar2 = (pFVar11->Data).ArrayNum;
            iVar9 = iVar10 + -1;
            if (iVar10 == 0) {
              iVar9 = 0;
            }
            iVar10 = iVar2 + -1;
            if (iVar2 == 0) {
              iVar10 = 0;
            }
            pFVar15 = pFVar1;
            if (iVar10 <= iVar9) {
              pFVar1 = pFVar11;
            }
          }
          pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
          iVar2 = (pFVar11->Data).ArrayNum;
          iVar7 = (pFVar11->Data).ArrayMax;
          iVar9 = (pFVar16->Data).ArrayNum;
          iVar10 = (pFVar16->Data).ArrayMax;
          (pFVar11->Data).AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
          (pFVar11->Data).ArrayNum = iVar9;
          (pFVar11->Data).ArrayMax = iVar10;
          (pFVar16->Data).AllocatorInstance.Data = pFVar3;
          (pFVar16->Data).ArrayNum = iVar2;
          (pFVar16->Data).ArrayMax = iVar7;
        }
        goto LAB_1418135ec;
      }
LAB_1418135db:
      local_348 = pFVar1;
      HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_FAutomationTestFramework::SaveTestTagMappings_::__l2::<lambda_1>_>_>
                (pFVar15,iVar9,param_3,param_4);
LAB_1418135ec:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_338 <= ppFVar17);
  }
  return;
code_r0x0001418134f9:
  iVar10 = pFVar13[1].Data.ArrayNum;
  iVar2 = (pFVar14->Data).ArrayNum;
  iVar9 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar9 = 0;
  }
  iVar10 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar10 = 0;
  }
  if (iVar10 <= iVar9) goto LAB_1418134f0;
LAB_141813517:
  do {
    pFVar12 = pFVar11;
    pFVar11 = pFVar12 + -1;
    if (pFVar11 <= pFVar14) break;
    iVar10 = pFVar12[-1].Data.ArrayNum;
    iVar2 = (pFVar14->Data).ArrayNum;
    iVar9 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar9 = 0;
    }
    iVar10 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar10 = 0;
    }
  } while (iVar9 <= iVar10);
  pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
  uVar4 = pFVar12[-1].Data.ArrayNum;
  uVar5 = pFVar12[-1].Data.ArrayMax;
  if (pFVar15 <= pFVar11) {
    pFVar6 = (pFVar15->Data).AllocatorInstance.Data;
    iVar9 = pFVar13[1].Data.ArrayNum;
    iVar10 = pFVar13[1].Data.ArrayMax;
    (pFVar15->Data).AllocatorInstance.Data = pFVar3;
    pFVar13[1].Data.ArrayNum = uVar4;
    pFVar13[1].Data.ArrayMax = uVar5;
    (pFVar11->Data).AllocatorInstance.Data = pFVar6;
    pFVar12[-1].Data.ArrayNum = iVar9;
    pFVar12[-1].Data.ArrayMax = iVar10;
    goto LAB_1418134f0;
  }
  pFVar6 = (pFVar14->Data).AllocatorInstance.Data;
  iVar9 = (pFVar14->Data).ArrayNum;
  iVar10 = (pFVar14->Data).ArrayMax;
  local_348._0_4_ = (int)local_348 + -1;
  (pFVar14->Data).AllocatorInstance.Data = pFVar3;
  (pFVar14->Data).ArrayNum = uVar4;
  (pFVar14->Data).ArrayMax = uVar5;
  (pFVar11->Data).AllocatorInstance.Data = pFVar6;
  pFVar12[-1].Data.ArrayNum = iVar9;
  pFVar12[-1].Data.ArrayMax = iVar10;
  if ((longlong)((longlong)pFVar11 + (-0x10 - (longlong)pFVar14) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar16 - (longlong)pFVar15 & 0xfffffffffffffff0U)) {
    if (pFVar15 < pFVar16) {
      *ppFVar17 = pFVar15;
      ppFVar17[1] = pFVar16;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar11 <= pFVar14 + 1) goto LAB_1418135ec;
    pFVar16 = pFVar12 + -2;
    pFVar15 = pFVar14;
  }
  else {
    if (pFVar14 + 1 < pFVar11) {
      *ppFVar17 = pFVar14;
      ppFVar17[1] = pFVar12 + -2;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar16 <= pFVar15) goto LAB_1418135ec;
  }
  iVar9 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 4) + 1;
  pFVar14 = pFVar15;
  if ((int)local_348 == 0) goto LAB_1418135db;
  goto LAB_1418134c0;
}

// IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,`FAutomationTestFramework::SaveTestTagMappings'::__l2::<lambda_2>_>_> @ 1418136b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_FAutomationTestFramework::SaveTestTagMappings_::__l2::<lambda_2>_>_>
          (FString *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FString,_public:_void___cdecl_FAutomationTestFramework::SaveTestTagMappings(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_const_&)const_::_2_::<lambda_2>_>
          param_4)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FString *pFVar11;
  FString *pFVar12;
  FString *pFVar13;
  FString *pFVar14;
  FString *pFVar15;
  FString *pFVar16;
  FString **ppFVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  FString *local_348;
  FString *local_338;
  FString *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar18;
    memset(local_320,0,0x2e8);
    ppFVar17 = &local_338;
    do {
      pFVar16 = ppFVar17[1];
      pFVar15 = *ppFVar17;
      pFVar1 = ppFVar17[2];
      iVar9 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 4) + 1;
      local_348._0_4_ = (int)pFVar1;
      pFVar14 = pFVar15;
      if ((int)local_348 != 0) {
LAB_141813770:
        if (8 < iVar9) {
          iVar10 = (pFVar14->Data).ArrayNum;
          iVar2 = (pFVar14->Data).ArrayMax;
          pFVar11 = pFVar16 + 1;
          pFVar15 = pFVar14 + iVar9 / 2;
          pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
          iVar7 = (pFVar15->Data).ArrayNum;
          iVar8 = (pFVar15->Data).ArrayMax;
          pFVar15 = pFVar14 + iVar9 / 2;
          (pFVar15->Data).AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
          (pFVar15->Data).ArrayNum = iVar10;
          (pFVar15->Data).ArrayMax = iVar2;
          (pFVar14->Data).AllocatorInstance.Data = pFVar3;
          (pFVar14->Data).ArrayNum = iVar7;
          (pFVar14->Data).ArrayMax = iVar8;
          pFVar15 = pFVar14;
LAB_1418137a0:
          pFVar13 = pFVar15;
          pFVar15 = pFVar13 + 1;
          if (pFVar15 <= pFVar16) goto code_r0x0001418137a9;
          goto LAB_1418137c7;
        }
        for (; pFVar1 = pFVar14, pFVar15 = pFVar14, pFVar14 < pFVar16; pFVar16 = pFVar16 + -1) {
          while (pFVar11 = pFVar1, pFVar1 = pFVar15 + 1, pFVar1 <= pFVar16) {
            iVar10 = pFVar15[1].Data.ArrayNum;
            iVar2 = (pFVar11->Data).ArrayNum;
            iVar9 = iVar10 + -1;
            if (iVar10 == 0) {
              iVar9 = 0;
            }
            iVar10 = iVar2 + -1;
            if (iVar2 == 0) {
              iVar10 = 0;
            }
            pFVar15 = pFVar1;
            if (iVar10 <= iVar9) {
              pFVar1 = pFVar11;
            }
          }
          pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
          iVar2 = (pFVar11->Data).ArrayNum;
          iVar7 = (pFVar11->Data).ArrayMax;
          iVar9 = (pFVar16->Data).ArrayNum;
          iVar10 = (pFVar16->Data).ArrayMax;
          (pFVar11->Data).AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
          (pFVar11->Data).ArrayNum = iVar9;
          (pFVar11->Data).ArrayMax = iVar10;
          (pFVar16->Data).AllocatorInstance.Data = pFVar3;
          (pFVar16->Data).ArrayNum = iVar2;
          (pFVar16->Data).ArrayMax = iVar7;
        }
        goto LAB_14181389c;
      }
LAB_14181388b:
      local_348 = pFVar1;
      HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_FAutomationTestFramework::SaveTestTagMappings_::__l2::<lambda_2>_>_>
                (pFVar15,iVar9,param_3,param_4);
LAB_14181389c:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_338 <= ppFVar17);
  }
  return;
code_r0x0001418137a9:
  iVar10 = pFVar13[1].Data.ArrayNum;
  iVar2 = (pFVar14->Data).ArrayNum;
  iVar9 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar9 = 0;
  }
  iVar10 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar10 = 0;
  }
  if (iVar10 <= iVar9) goto LAB_1418137a0;
LAB_1418137c7:
  do {
    pFVar12 = pFVar11;
    pFVar11 = pFVar12 + -1;
    if (pFVar11 <= pFVar14) break;
    iVar10 = pFVar12[-1].Data.ArrayNum;
    iVar2 = (pFVar14->Data).ArrayNum;
    iVar9 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar9 = 0;
    }
    iVar10 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar10 = 0;
    }
  } while (iVar9 <= iVar10);
  pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
  uVar4 = pFVar12[-1].Data.ArrayNum;
  uVar5 = pFVar12[-1].Data.ArrayMax;
  if (pFVar15 <= pFVar11) {
    pFVar6 = (pFVar15->Data).AllocatorInstance.Data;
    iVar9 = pFVar13[1].Data.ArrayNum;
    iVar10 = pFVar13[1].Data.ArrayMax;
    (pFVar15->Data).AllocatorInstance.Data = pFVar3;
    pFVar13[1].Data.ArrayNum = uVar4;
    pFVar13[1].Data.ArrayMax = uVar5;
    (pFVar11->Data).AllocatorInstance.Data = pFVar6;
    pFVar12[-1].Data.ArrayNum = iVar9;
    pFVar12[-1].Data.ArrayMax = iVar10;
    goto LAB_1418137a0;
  }
  pFVar6 = (pFVar14->Data).AllocatorInstance.Data;
  iVar9 = (pFVar14->Data).ArrayNum;
  iVar10 = (pFVar14->Data).ArrayMax;
  local_348._0_4_ = (int)local_348 + -1;
  (pFVar14->Data).AllocatorInstance.Data = pFVar3;
  (pFVar14->Data).ArrayNum = uVar4;
  (pFVar14->Data).ArrayMax = uVar5;
  (pFVar11->Data).AllocatorInstance.Data = pFVar6;
  pFVar12[-1].Data.ArrayNum = iVar9;
  pFVar12[-1].Data.ArrayMax = iVar10;
  if ((longlong)((longlong)pFVar11 + (-0x10 - (longlong)pFVar14) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar16 - (longlong)pFVar15 & 0xfffffffffffffff0U)) {
    if (pFVar15 < pFVar16) {
      *ppFVar17 = pFVar15;
      ppFVar17[1] = pFVar16;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar11 <= pFVar14 + 1) goto LAB_14181389c;
    pFVar16 = pFVar12 + -2;
    pFVar15 = pFVar14;
  }
  else {
    if (pFVar14 + 1 < pFVar11) {
      *ppFVar17 = pFVar14;
      ppFVar17[1] = pFVar12 + -2;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar16 <= pFVar15) goto LAB_14181389c;
  }
  iVar9 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 4) + 1;
  pFVar14 = pFVar15;
  if ((int)local_348 == 0) goto LAB_14181388b;
  goto LAB_141813770;
}

// JoinBy<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,`FAutomationTestFramework::RegisterAutomationTestTags'::__l13::<lambda_1>_> @ 141813960

FString * __cdecl
FString::
JoinBy<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,_FAutomationTestFramework::RegisterAutomationTestTags_::__l13::<lambda_1>_>
          (FString *__return_storage_ptr__,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,wchar_t *param_2,
          <lambda_1> param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar6;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  FString *pFVar9;
  size_t sVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_res10;
  wchar_t *local_res18;
  FString local_b0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  puVar1 = &(param_1->Elements).field_0x10;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar15 = *(int *)&(param_1->Elements).field_0x28;
  bVar5 = true;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = iStack_98;
  if (iVar15 != 0) {
    puVar17 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    local_80 = 0;
    iStack_98 = 0;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_141813a1d;
      uVar14 = puVar17[lVar11 + 1];
    }
    uStack_94 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iStack_84 = local_80 + -1 + (int)lVar11;
    if (iVar15 < iStack_84) {
      iStack_84 = iVar15;
    }
  }
LAB_141813a1d:
  uVar14 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_78 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  uStack_88 = 0xffffffff;
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_res10 = param_1;
  local_res18 = param_2;
  local_a0 = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = param_1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar15 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FString *)(*pcVar4)();
    return pFVar9;
  }
  pTVar6 = local_res10;
  uVar3 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar14 != uVar3) {
    puVar16 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141813b20;
      uVar14 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar3 < (int)uVar14) {
      uVar14 = uVar3;
    }
  }
LAB_141813b20:
  while( true ) {
    pTVar7 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar14) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar6))
    break;
    if (bVar5) {
      bVar5 = false;
    }
    else {
      sVar10 = wcslen(local_res18);
      AppendChars(__return_storage_ptr__,local_res18,(int)sVar10);
    }
    PrintfImpl(&local_b0,L"[%s]");
    iVar15 = local_b0.Data.ArrayNum + -1;
    if (local_b0.Data.ArrayNum == 0) {
      iVar15 = 0;
    }
    AppendChars(__return_storage_ptr__,(wchar_t *)local_b0.Data.AllocatorInstance.Data,iVar15);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return __return_storage_ptr__;
}

// MakeSharedBufferViewWithOuter<FSharedBuffer_const_&,0> @ 141813c10

FSharedBuffer __cdecl
MakeSharedBufferViewWithOuter<FSharedBuffer_const_&,0>
          (TMemoryView<void_const_> *param_1,FSharedBuffer *param_2)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  FBufferOwner *pFVar4;
  FBufferOwnerOuterView *pFVar5;
  FBufferOwnerOuterView *pFVar6;
  FSharedBuffer *in_R8;
  
  pFVar3 = (in_R8->Owner).Owner;
  if (pFVar3 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar3->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar3->_padding_ + 8))(pFVar3);
    }
    pFVar3 = (FBufferOwner *)pFVar3->Size;
    pFVar6 = (FBufferOwnerOuterView *)0x0;
    pFVar4 = (in_R8->Owner).Owner;
    pFVar5 = pFVar6;
    if (pFVar4 != (FBufferOwner *)0x0) {
      if (((ulonglong)pFVar4->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)(pFVar4->_padding_ + 8))(pFVar4);
      }
      pFVar5 = pFVar4->Data;
    }
    pFVar4 = param_2[1].Owner.Owner;
    if ((pFVar4 == pFVar3) &&
       ((pFVar4 == (FBufferOwner *)0x0 ||
        ((FBufferOwnerOuterView *)(param_2->Owner).Owner == pFVar5)))) {
      pFVar3 = (in_R8->Owner).Owner;
      if (pFVar3 != (FBufferOwner *)0x0) {
        LOCK();
        paVar1 = &pFVar3->ReferenceCountsAndFlags;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
        UNLOCK();
        if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
          LOCK();
          pFVar3->ReferenceCountsAndFlags =
               (atomic<unsigned___int64>)((longlong)pFVar3->ReferenceCountsAndFlags + 0x40000000);
          UNLOCK();
        }
      }
      param_1->Data = pFVar3;
    }
    else {
      pFVar5 = operator_new(0x28);
      if (pFVar5 != (FBufferOwnerOuterView *)0x0) {
        pFVar6 = UE::SharedBuffer::Private::FBufferOwnerOuterView::
                 FBufferOwnerOuterView<FSharedBuffer_const_&,0>
                           (pFVar5,(param_2->Owner).Owner,(ulong64)pFVar4,in_R8);
      }
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)param_1,
                 (FBufferOwner *)pFVar6);
    }
    return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
  }
  FSharedBuffer::MakeView(param_1);
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// MakeSharedBufferViewWithOuter<FSharedBuffer,0> @ 141813d30

FSharedBuffer __cdecl
MakeSharedBufferViewWithOuter<FSharedBuffer,0>
          (TMemoryView<void_const_> *param_1,FSharedBuffer *param_2)

{
  FBufferOwner *pFVar1;
  FBufferOwner *pFVar2;
  FBufferOwnerOuterView *pFVar3;
  FBufferOwnerOuterView *pFVar4;
  FSharedBuffer *in_R8;
  
  pFVar1 = (in_R8->Owner).Owner;
  if (pFVar1 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    pFVar1 = (FBufferOwner *)pFVar1->Size;
    pFVar4 = (FBufferOwnerOuterView *)0x0;
    pFVar2 = (in_R8->Owner).Owner;
    pFVar3 = pFVar4;
    if (pFVar2 != (FBufferOwner *)0x0) {
      if (((ulonglong)pFVar2->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)(pFVar2->_padding_ + 8))(pFVar2);
      }
      pFVar3 = pFVar2->Data;
    }
    pFVar2 = param_2[1].Owner.Owner;
    if ((pFVar2 == pFVar1) &&
       ((pFVar2 == (FBufferOwner *)0x0 ||
        ((FBufferOwnerOuterView *)(param_2->Owner).Owner == pFVar3)))) {
      pFVar1 = (in_R8->Owner).Owner;
      (in_R8->Owner).Owner = (FBufferOwner *)0x0;
      param_1->Data = pFVar1;
    }
    else {
      pFVar3 = operator_new(0x28);
      if (pFVar3 != (FBufferOwnerOuterView *)0x0) {
        pFVar4 = UE::SharedBuffer::Private::FBufferOwnerOuterView::
                 FBufferOwnerOuterView<FSharedBuffer,0>
                           (pFVar3,(param_2->Owner).Owner,(ulong64)pFVar2,in_R8);
      }
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)param_1,
                 (FBufferOwner *)pFVar4);
    }
    return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
  }
  FSharedBuffer::MakeView(param_1);
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// RemoveAll<`FAutomationTestExecutionInfo::RemoveAllEvents'::__l2::<lambda_1>_> @ 141814050

int __thiscall
TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_>::
RemoveAll<_FAutomationTestExecutionInfo::RemoveAllEvents_::__l2::<lambda_1>_>
          (TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  byte bVar12;
  int iVar13;
  int local_res18;
  
  iVar2 = this->ArrayNum;
  lVar6 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  pFVar3 = (this->AllocatorInstance).Data;
  iVar13 = 0;
  local_res18 = 0;
  cVar4 = (**(code **)param_1->FilterPredicate)
                    (*(undefined8 *)&param_1->FilterPredicate->field_0x8,pFVar3);
  if (cVar4 == '\0') {
    bVar12 = 1;
  }
  else {
    if (*pFVar3 == (FScriptContainerElement)0x1) {
      piVar1 = &param_1->__this->Warnings;
      *piVar1 = *piVar1 + -1;
    }
    else if (*pFVar3 == (FScriptContainerElement)0x2) {
      piVar1 = &param_1->__this->Errors;
      *piVar1 = *piVar1 + -1;
      bVar12 = 0;
      goto LAB_1418140df;
    }
    bVar12 = 0;
  }
LAB_1418140df:
  lVar7 = 0;
  iVar8 = 0;
  do {
    lVar7 = lVar7 + 1;
    iVar9 = iVar8 + 1;
    if (lVar7 < lVar6) {
      pFVar11 = pFVar3 + lVar7 * 0x58;
      do {
        cVar4 = (**(code **)param_1->FilterPredicate)
                          (*(undefined8 *)&param_1->FilterPredicate->field_0x8,
                           pFVar3 + (longlong)iVar9 * 0x58);
        if (cVar4 == '\0') {
          bVar5 = 1;
        }
        else {
          if (*pFVar11 == (FScriptContainerElement)0x1) {
            piVar1 = &param_1->__this->Warnings;
            *piVar1 = *piVar1 + -1;
          }
          else if (*pFVar11 == (FScriptContainerElement)0x2) {
            piVar1 = &param_1->__this->Errors;
            *piVar1 = *piVar1 + -1;
            bVar5 = 0;
            goto LAB_141814151;
          }
          bVar5 = 0;
        }
LAB_141814151:
        iVar13 = local_res18;
        if (bVar12 != bVar5) break;
        iVar9 = iVar9 + 1;
        lVar7 = lVar7 + 1;
        pFVar11 = pFVar11 + 0x58;
      } while (lVar7 < lVar6);
    }
    iVar10 = iVar9 - iVar8;
    if (bVar12 == 0) {
      DestructItems<FAutomationExecutionEntry,int>
                ((FAutomationExecutionEntry *)(pFVar3 + (longlong)iVar8 * 0x58),iVar10);
    }
    else {
      if (iVar13 != iVar8) {
        memmove(pFVar3 + (longlong)iVar13 * 0x58,pFVar3 + (longlong)iVar8 * 0x58,
                (longlong)iVar10 * 0x58);
      }
      iVar13 = iVar13 + iVar10;
      local_res18 = iVar13;
    }
    bVar12 = bVar12 ^ 1;
    iVar8 = iVar9;
    if (lVar6 <= lVar7) {
      this->ArrayNum = iVar13;
      return iVar2 - iVar13;
    }
  } while( true );
}

// StringCast<wchar_t,128,char> @ 1418143b0

TStringConversion<TStringConvert<char,wchar_t>,128> * __cdecl
StringCast<wchar_t,128,char>
          (TStringConversion<TStringConvert<char,wchar_t>,128> *__return_storage_ptr__,char *param_1
          )

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar5;
  int iVar6;
  
  __return_storage_ptr__->_padding_ = 0;
  if (param_1 == (char *)0x0) {
    __return_storage_ptr__->Ptr = (wchar_t *)0x0;
    __return_storage_ptr__->StringLength = 0;
  }
  else {
    sVar3 = strlen(param_1);
    __return_storage_ptr__->StringLength = (int)sVar3;
    iVar6 = (int)sVar3 + 1;
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
    ResizeAllocation((ForElementType<wchar_t> *)__return_storage_ptr__,0,iVar6,2);
    pTVar5 = __return_storage_ptr__;
    if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)__return_storage_ptr__->_padding_ !=
        (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
      pTVar5 = (TStringConversion<TStringConvert<char,wchar_t>,128> *)
               __return_storage_ptr__->_padding_;
    }
    __return_storage_ptr__->Ptr = (wchar_t *)pTVar5;
    pwVar4 = FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pTVar5,iVar6,param_1,iVar6);
    if (pwVar4 == (wchar_t *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TStringConversion<TStringConvert<char,wchar_t>,128> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// TransformAccumulate<unsigned___int64,TArray<FSharedBuffer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,unsigned___int64_(__cdecl_FSharedBuffer::*)(void)const_,TPlus<void>_> @ 141814480

ulong64 __cdecl
Algo::
TransformAccumulate<unsigned___int64,TArray<FSharedBuffer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,unsigned___int64_(__cdecl_FSharedBuffer::*)(void)const_,TPlus<void>_>
          (TArray<FSharedBuffer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_1,
          pmf_82fda36b param_2,ulong64 param_3,TPlus<void> param_4)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSharedBuffer> FVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  piVar1 = &param_1->ArrayNum;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
    param_1 = (TArray<FSharedBuffer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
              FVar3;
  }
  FVar3 = (ForElementType<FSharedBuffer>)((longlong)param_1 + (longlong)iVar2 * 8);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<FSharedBuffer_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((ForElementType<FSharedBuffer>)param_1 == FVar3) break;
    lVar4 = (*(code *)param_2)(param_1);
    param_3 = param_3 + lVar4;
    param_1 = (TArray<FSharedBuffer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
              ((longlong)param_1 + 8);
  }
  return param_3;
}

// UpperBoundInternal<void_*_const,int,void_*,FIdentityFunctor,TLess<void>_> @ 141814510

int __cdecl
AlgoImpl::UpperBoundInternal<void_*_const,int,void_*,FIdentityFunctor,TLess<void>_>
          (void **param_1,int param_2,void **param_3,FIdentityFunctor param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1] <= *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// WriteToString<128,TStringView<char8_t>_&> @ 141814550

TStringBuilderWithBuffer<wchar_t,128> * __cdecl
WriteToString<128,TStringView<char8_t>_&>
          (TStringBuilderWithBuffer<wchar_t,128> *__return_storage_ptr__,
          TStringView<char8_t> *param_1)

{
  uchar *puVar1;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  puVar1 = param_1->DataPtr;
  iVar4 = (int)*(undefined8 *)&param_1->Size;
  iVar2 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar1,iVar4);
  if ((ulonglong)__return_storage_ptr__->_padding_ <
      (ulonglong)(__return_storage_ptr__->_padding_ + (longlong)iVar2 * 2)) {
    TStringBuilderBase<wchar_t>::Extend
              ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,(longlong)iVar2);
  }
  if (iVar4 != 0) {
    pwVar3 = UE::Core::Private::Convert
                       ((wchar_t *)__return_storage_ptr__->_padding_,iVar2,puVar1,iVar4);
    __return_storage_ptr__->_padding_ = (longlong)pwVar3;
  }
  return __return_storage_ptr__;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FArenaAllocState_*>_> @ 1418145f0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FArenaAllocState_*>_>
          (_Atomic_padded<FArenaAllocState_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FArenaAllocState_*>_> @ 141814600

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FArenaAllocState_*>_>
          (_Atomic_padded<FArenaAllocState_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FAutomationTestBase_*>_> @ 141814610

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FAutomationTestBase_*>_>
          (_Atomic_padded<FAutomationTestBase_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FAutomationTestBase_*>_> @ 141814620

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FAutomationTestBase_*>_>
          (_Atomic_padded<FAutomationTestBase_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FFeedbackContext_*>_> @ 141814630

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FFeedbackContext_*>_>
          (_Atomic_padded<FFeedbackContext_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FFeedbackContext_*>_> @ 141814640

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FFeedbackContext_*>_>
          (_Atomic_padded<FFeedbackContext_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,FArenaAllocState_*> @ 141814650

long64 __cdecl std::_Atomic_reinterpret_as<__int64,FArenaAllocState_*>(FArenaAllocState **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,FAutomationTestBase_*> @ 141814660

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,FAutomationTestBase_*>(FAutomationTestBase **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,FFeedbackContext_*> @ 141814670

long64 __cdecl std::_Atomic_reinterpret_as<__int64,FFeedbackContext_*>(FFeedbackContext **param_1)

{
  return (long64)*param_1;
}

// `scalar_deleting_destructor' @ 141817640

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTextFilterExpressionEvaluator,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FTextFilterExpressionEvaluator,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x388);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141817680

void * __thiscall FAnsiArena::_scalar_deleting_destructor_(FAnsiArena *this,uint param_1)

{
  *(undefined ***)this = &___7FAnsiArena__6B_;
  FMemoryArena::~FMemoryArena((FMemoryArena *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418176d0

void * __thiscall
FAutomationTestBase::_scalar_deleting_destructor_(FAutomationTestBase *this,uint param_1)

{
  int iVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FAutomationTestFramework *pFVar9;
  void *pvVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  
  this->_padding_ = (longlong)&___7FAutomationTestBase__6B_;
  pFVar9 = FAutomationTestFramework::Get();
  iVar1 = (this->TestName).Data.ArrayNum;
  pwVar12 = L"";
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar11 = L"";
    iVar8 = 0;
  }
  else {
    pwVar11 = (wchar_t *)(this->TestName).Data.AllocatorInstance.Data;
  }
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar11);
  iVar8 = TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                      *)&pFVar9->AutomationTestClassNameToInstanceMap,uVar7,&this->TestName);
  if ((iVar8 != -1) &&
     (*(int *)&(pFVar9->AutomationTestClassNameToInstanceMap).field_0x8 !=
      *(int *)&(pFVar9->AutomationTestClassNameToInstanceMap).field_0x34)) {
    iVar1 = (this->TestName).Data.ArrayNum;
    iVar8 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar8 = 0;
    }
    else {
      pwVar12 = (wchar_t *)(this->TestName).Data.AllocatorInstance.Data;
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar12);
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                *)&pFVar9->AutomationTestClassNameToInstanceMap,uVar7,&this->TestName);
  }
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ActionCS);
  if (BVar5 == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pvVar10 = (void *)(*pcVar4)();
      return pvVar10;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ActionCS);
  }
  (this->ExpectedMessages).HashSize = 0;
  FVar2 = (this->ExpectedMessages).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FAutomationExpectedMessage>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FAutomationExpectedMessage>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ExpectedMessages).Elements);
  FAutomationTestExecutionInfo::~FAutomationTestExecutionInfo(&this->ExecutionInfo);
  pFVar3 = (this->TestParameterContext).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->TestName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141817850

void * __thiscall
FAutomationTestFramework::FAutomationTestMessageFilter::_scalar_deleting_destructor_
          (FAutomationTestMessageFilter *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAutomationTestMessageFilter_FAutomationTestFramework__6B_;
  LOCK();
  this->DestinationContext = (atomic<FFeedbackContext_*>)0x0;
  UNLOCK();
  LOCK();
  this->CurTest = (atomic<FAutomationTestBase_*>)0x0;
  UNLOCK();
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ActionCS);
  FFeedbackContext::~FFeedbackContext((FFeedbackContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418178c0

void * __thiscall
FAutomationTestFramework::FAutomationTestOutputDevice::_scalar_deleting_destructor_
          (FAutomationTestOutputDevice *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAutomationTestOutputDevice_FAutomationTestFramework__6B_;
  LOCK();
  this->CurTest = (atomic<FAutomationTestBase_*>)0x0;
  UNLOCK();
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141817910

void * __thiscall
FBasicStringFilterExpressionContext::_scalar_deleting_destructor_
          (FBasicStringFilterExpressionContext *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TestString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ITextFilterExpressionContext__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141817960

void * __thiscall FBufferOwner::_scalar_deleting_destructor_(FBufferOwner *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FBufferOwner__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418179a0

void * __thiscall
UE::SharedBuffer::Private::FBufferOwnerHeap::_scalar_deleting_destructor_
          (FBufferOwnerHeap *this,uint param_1)

{
  *(undefined ***)this = &___7FBufferOwner__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1418179e0

void * __thiscall
UE::SharedBuffer::Private::FBufferOwnerOuterView::_scalar_deleting_destructor_
          (FBufferOwnerOuterView *this,uint param_1)

{
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&(this->OuterBuffer).Owner);
  this->_padding_ = (longlong)&___7FBufferOwner__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141817a30

void * __thiscall
UE::SharedBuffer::Private::FBufferOwnerView::_scalar_deleting_destructor_
          (FBufferOwnerView *this,uint param_1)

{
  *(undefined ***)this = &___7FBufferOwner__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141817a70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FBufferedOutputDevice::_scalar_deleting_destructor_(FBufferedOutputDevice *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FBufferedOutputDevice__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SynchronizationObject);
  DestructItems<FBufferedLine,int>
            ((FBufferedLine *)(this->BufferedLines).AllocatorInstance.Data,
             (this->BufferedLines).ArrayNum);
  pFVar1 = (this->BufferedLines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141817ae0

void * __thiscall FChange::_scalar_deleting_destructor_(FChange *this,uint param_1)

{
  *this = (FChange)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141817b20

void * __thiscall FCompoundChange::_scalar_deleting_destructor_(FCompoundChange *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FChange,TDefaultDelete<FChange>_>,int>
            ((TUniquePtr<FChange,TDefaultDelete<FChange>_> *)
             (this->Input).Subchanges.AllocatorInstance.Data,(this->Input).Subchanges.ArrayNum);
  pFVar1 = (this->Input).Subchanges.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141817b80

void * __thiscall FMallocArena::_scalar_deleting_destructor_(FMallocArena *this,uint param_1)

{
  *(undefined ***)this = &___7FMallocArena__6B_;
  FMemoryArena::~FMemoryArena((FMemoryArena *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141817bd0

void * __thiscall FMemoryArena::_scalar_deleting_destructor_(FMemoryArena *this,uint param_1)

{
  ~FMemoryArena(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141817c10

void * __thiscall FSwapChange::_scalar_deleting_destructor_(FSwapChange *this,uint param_1)

{
  *this = (FSwapChange)&___7FChange__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141817c50

void * __thiscall
ITextFilterExpressionContext::_scalar_deleting_destructor_
          (ITextFilterExpressionContext *this,uint param_1)

{
  *this = (ITextFilterExpressionContext)&___7ITextFilterExpressionContext__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AesDecryptExpand @ 14181a070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl AesDecryptExpand(FAesExpandedKey *param_1,uchar *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 auStack_128 [32];
  FAesExpandedKey local_108;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  AesEncryptExpand(&local_108,param_2);
  param_1->Key[0] = local_108.Key[0x38];
  lVar9 = 0xd;
  param_1->Key[1] = local_108.Key[0x39];
  param_1->Key[2] = local_108.Key[0x3a];
  param_1->Key[3] = local_108.Key[0x3b];
  puVar5 = local_108.Key + 0x34;
  puVar6 = param_1->Key + 4;
  do {
    puVar8 = puVar6;
    puVar7 = puVar5;
    uVar3 = *puVar7;
    uVar4 = puVar7[1];
    bVar1 = AesSbox[uVar4 >> 0x18];
    *puVar8 = AesITbox[3][AesSbox[uVar3 >> 0x18]] ^ AesITbox[2][AesSbox[uVar3 >> 0x10 & 0xff]] ^
              AesITbox[1][AesSbox[uVar3 >> 8 & 0xff]] ^ AesITbox[0][AesSbox[uVar3 & 0xff]];
    uVar3 = puVar7[2];
    bVar2 = AesSbox[uVar3 >> 0x18];
    puVar8[1] = AesITbox[3][bVar1] ^ AesITbox[2][AesSbox[uVar4 >> 0x10 & 0xff]] ^
                AesITbox[1][AesSbox[uVar4 >> 8 & 0xff]] ^ AesITbox[0][AesSbox[uVar4 & 0xff]];
    uVar4 = puVar7[3];
    bVar1 = AesSbox[uVar4 >> 0x18];
    puVar8[2] = AesITbox[3][bVar2] ^ AesITbox[2][AesSbox[uVar3 >> 0x10 & 0xff]] ^
                AesITbox[1][AesSbox[uVar3 >> 8 & 0xff]] ^ AesITbox[0][AesSbox[uVar3 & 0xff]];
    puVar8[3] = AesITbox[3][bVar1] ^ AesITbox[2][AesSbox[uVar4 >> 0x10 & 0xff]] ^
                AesITbox[1][AesSbox[uVar4 >> 8 & 0xff]] ^ AesITbox[0][AesSbox[uVar4 & 0xff]];
    lVar9 = lVar9 + -1;
    puVar5 = puVar7 + -4;
    puVar6 = puVar8 + 4;
  } while (lVar9 != 0);
  puVar8[4] = puVar7[-4];
  puVar8[5] = puVar7[-3];
  puVar8[6] = puVar7[-2];
  puVar8[7] = puVar7[-1];
  return;
}

// AesDecryptSW @ 14181a2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl AesDecryptSW(uchar *param_1,uchar *param_2,ulong64 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  undefined1 auStack_148 [32];
  FAesExpandedKey local_128;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  AesDecryptExpand(&local_128,param_1);
  if (param_3 != 0) {
    lVar9 = (param_3 - 1 >> 4) + 1;
    do {
      uVar5 = local_128.Key[0] ^ *(uint *)param_2;
      lVar11 = 0xd;
      uVar2 = local_128.Key[2] ^ *(uint *)((longlong)param_2 + 8);
      uVar7 = local_128.Key[3] ^ *(uint *)((longlong)param_2 + 0xc);
      puVar10 = local_128.Key + 6;
      uVar6 = local_128.Key[1] ^ *(uint *)((longlong)param_2 + 4);
      do {
        uVar4 = uVar7 >> 0x10;
        uVar1 = uVar7 >> 0x18;
        uVar3 = uVar2 >> 0x10;
        uVar8 = uVar7 >> 8;
        uVar7 = AesITbox[1][uVar2 >> 8 & 0xff] ^ AesITbox[2][uVar6 >> 0x10 & 0xff] ^
                AesITbox[3][uVar5 >> 0x18] ^ AesITbox[0][uVar7 & 0xff] ^ puVar10[1];
        uVar4 = AesITbox[2][uVar4 & 0xff] ^ AesITbox[3][uVar2 >> 0x18] ^
                AesITbox[1][uVar5 >> 8 & 0xff] ^ AesITbox[0][uVar6 & 0xff] ^ puVar10[-1];
        uVar2 = AesITbox[3][uVar1] ^ AesITbox[1][uVar6 >> 8 & 0xff] ^
                AesITbox[2][uVar5 >> 0x10 & 0xff] ^ AesITbox[0][uVar2 & 0xff] ^ *puVar10;
        uVar5 = AesITbox[1][uVar8 & 0xff] ^ AesITbox[2][uVar3 & 0xff] ^ AesITbox[3][uVar6 >> 0x18] ^
                AesITbox[0][uVar5 & 0xff] ^ puVar10[-2];
        lVar11 = lVar11 + -1;
        puVar10 = puVar10 + 4;
        uVar6 = uVar4;
      } while (lVar11 != 0);
      *(uint *)param_2 =
           CONCAT31(CONCAT21(CONCAT11(AesISbox[uVar4 >> 0x18],AesISbox[uVar2 >> 0x10 & 0xff]),
                             AesISbox[uVar7 >> 8 & 0xff]),AesISbox[uVar5 & 0xff]) ^
           local_128.Key[0x38];
      *(uint *)((longlong)param_2 + 4) =
           CONCAT31(CONCAT21(CONCAT11(AesISbox[uVar2 >> 0x18],AesISbox[uVar7 >> 0x10 & 0xff]),
                             AesISbox[uVar5 >> 8 & 0xff]),AesISbox[uVar4 & 0xff]) ^
           local_128.Key[0x39];
      *(uint *)((longlong)param_2 + 8) =
           CONCAT31(CONCAT21(CONCAT11(AesISbox[uVar7 >> 0x18],AesISbox[uVar5 >> 0x10 & 0xff]),
                             AesISbox[uVar4 >> 8 & 0xff]),AesISbox[uVar2 & 0xff]) ^
           local_128.Key[0x3a];
      *(uint *)((longlong)param_2 + 0xc) =
           CONCAT31(CONCAT21(CONCAT11(AesISbox[uVar5 >> 0x18],AesISbox[uVar4 >> 0x10 & 0xff]),
                             AesISbox[uVar2 >> 8 & 0xff]),AesISbox[uVar7 & 0xff]) ^
           local_128.Key[0x3b];
      param_2 = (uchar *)((longlong)param_2 + 0x10);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}

// AesDecryptX86HW @ 14181a660

/* WARNING: Removing unreachable block (ram,0x00014181a951) */
/* WARNING: Removing unreachable block (ram,0x00014181a948) */
/* WARNING: Removing unreachable block (ram,0x00014181a940) */
/* WARNING: Removing unreachable block (ram,0x00014181a913) */
/* WARNING: Removing unreachable block (ram,0x00014181a90a) */
/* WARNING: Removing unreachable block (ram,0x00014181a902) */
/* WARNING: Removing unreachable block (ram,0x00014181a8da) */
/* WARNING: Removing unreachable block (ram,0x00014181a8d1) */
/* WARNING: Removing unreachable block (ram,0x00014181a8c9) */
/* WARNING: Removing unreachable block (ram,0x00014181a8a1) */
/* WARNING: Removing unreachable block (ram,0x00014181a898) */
/* WARNING: Removing unreachable block (ram,0x00014181a890) */
/* WARNING: Removing unreachable block (ram,0x00014181a862) */
/* WARNING: Removing unreachable block (ram,0x00014181a859) */
/* WARNING: Removing unreachable block (ram,0x00014181a848) */
/* WARNING: Removing unreachable block (ram,0x00014181a82e) */
/* WARNING: Removing unreachable block (ram,0x00014181a825) */
/* WARNING: Removing unreachable block (ram,0x00014181a814) */
/* WARNING: Removing unreachable block (ram,0x00014181a7fa) */
/* WARNING: Removing unreachable block (ram,0x00014181a7f1) */
/* WARNING: Removing unreachable block (ram,0x00014181a7e6) */
/* WARNING: Removing unreachable block (ram,0x00014181a7cf) */
/* WARNING: Removing unreachable block (ram,0x00014181a7bd) */
/* WARNING: Removing unreachable block (ram,0x00014181a7ac) */
/* WARNING: Removing unreachable block (ram,0x00014181a792) */
/* WARNING: Removing unreachable block (ram,0x00014181a789) */
/* WARNING: Removing unreachable block (ram,0x00014181a778) */
/* WARNING: Removing unreachable block (ram,0x00014181a75e) */
/* WARNING: Removing unreachable block (ram,0x00014181a755) */
/* WARNING: Removing unreachable block (ram,0x00014181a744) */
/* WARNING: Removing unreachable block (ram,0x00014181a72a) */
/* WARNING: Removing unreachable block (ram,0x00014181a721) */
/* WARNING: Removing unreachable block (ram,0x00014181a710) */
/* WARNING: Removing unreachable block (ram,0x00014181a6f9) */
/* WARNING: Removing unreachable block (ram,0x00014181a6ea) */
/* WARNING: Removing unreachable block (ram,0x00014181a6e1) */
/* WARNING: Removing unreachable block (ram,0x00014181a6ab) */
/* WARNING: Removing unreachable block (ram,0x00014181a69a) */
/* WARNING: Removing unreachable block (ram,0x00014181a689) */

void __cdecl AesDecryptX86HW(uchar *param_1,uchar *param_2,ulong64 param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar14;
  uint uVar15;
  undefined1 auVar13 [16];
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  auVar4 = *(undefined1 (*) [16])(param_1 + 0x10);
  auVar1 = *(undefined1 (*) [16])param_1;
  auVar18 = aesimc(auVar4);
  uVar12 = auVar1._0_4_;
  uVar14 = auVar1._4_4_;
  auVar3 = aeskeygenassist(auVar4,1);
  uVar16 = auVar3._12_4_;
  auVar20._0_4_ = uVar12 ^ uVar16;
  auVar20._4_4_ = uVar12 ^ uVar14 ^ uVar16;
  auVar20._8_4_ = uVar12 ^ uVar14 ^ auVar1._8_4_ ^ uVar16;
  auVar20._12_4_ = uVar14 ^ auVar1._8_4_ ^ auVar1._12_4_ ^ uVar12 ^ uVar16;
  uVar12 = auVar4._0_4_;
  uVar14 = auVar4._4_4_;
  auVar3 = aeskeygenassist(auVar20,0);
  uVar16 = auVar3._8_4_;
  auVar3._0_4_ = uVar12 ^ uVar16;
  auVar3._4_4_ = uVar12 ^ uVar14 ^ uVar16;
  auVar3._8_4_ = uVar12 ^ uVar14 ^ auVar4._8_4_ ^ uVar16;
  auVar3._12_4_ = uVar14 ^ auVar4._8_4_ ^ auVar4._12_4_ ^ uVar12 ^ uVar16;
  auVar19 = aesimc(auVar20);
  auVar4 = aeskeygenassist(auVar3,2);
  uVar16 = auVar4._12_4_;
  auVar22._0_4_ = auVar20._0_4_ ^ uVar16;
  auVar22._4_4_ = auVar20._4_4_ ^ auVar20._0_4_ ^ uVar16;
  auVar22._8_4_ = auVar20._0_4_ ^ auVar20._8_4_ ^ auVar20._4_4_ ^ uVar16;
  auVar22._12_4_ = auVar20._4_4_ ^ auVar20._12_4_ ^ auVar20._8_4_ ^ auVar20._0_4_ ^ uVar16;
  auVar20 = aesimc(auVar3);
  auVar4 = aeskeygenassist(auVar22,0);
  uVar16 = auVar4._8_4_;
  auVar24._0_4_ = auVar3._0_4_ ^ uVar16;
  auVar24._4_4_ = auVar3._4_4_ ^ auVar3._0_4_ ^ uVar16;
  auVar24._8_4_ = auVar3._0_4_ ^ auVar3._8_4_ ^ auVar3._4_4_ ^ uVar16;
  auVar24._12_4_ = auVar3._4_4_ ^ auVar3._12_4_ ^ auVar3._8_4_ ^ auVar3._0_4_ ^ uVar16;
  auVar21 = aesimc(auVar22);
  auVar4 = aeskeygenassist(auVar24,4);
  uVar16 = auVar4._12_4_;
  auVar5._0_4_ = auVar22._0_4_ ^ uVar16;
  auVar5._4_4_ = auVar22._4_4_ ^ auVar22._0_4_ ^ uVar16;
  auVar5._8_4_ = auVar22._0_4_ ^ auVar22._8_4_ ^ auVar22._4_4_ ^ uVar16;
  auVar5._12_4_ = auVar22._4_4_ ^ auVar22._12_4_ ^ auVar22._8_4_ ^ auVar22._0_4_ ^ uVar16;
  auVar22 = aesimc(auVar24);
  auVar23 = aesimc(auVar5);
  auVar4 = aeskeygenassist(auVar5,0);
  uVar16 = auVar4._8_4_;
  auVar25._0_4_ = auVar24._0_4_ ^ uVar16;
  auVar25._4_4_ = auVar24._4_4_ ^ auVar24._0_4_ ^ uVar16;
  auVar25._8_4_ = auVar24._0_4_ ^ auVar24._8_4_ ^ auVar24._4_4_ ^ uVar16;
  auVar25._12_4_ = auVar24._4_4_ ^ auVar24._12_4_ ^ auVar24._8_4_ ^ auVar24._0_4_ ^ uVar16;
  auVar4 = aeskeygenassist(auVar25,8);
  uVar16 = auVar4._12_4_;
  auVar26._0_4_ = auVar5._0_4_ ^ uVar16;
  auVar26._4_4_ = auVar5._4_4_ ^ auVar5._0_4_ ^ uVar16;
  auVar26._8_4_ = auVar5._0_4_ ^ auVar5._8_4_ ^ auVar5._4_4_ ^ uVar16;
  auVar26._12_4_ = auVar5._4_4_ ^ auVar5._12_4_ ^ auVar5._8_4_ ^ auVar5._0_4_ ^ uVar16;
  auVar24 = aesimc(auVar25);
  auVar4 = aeskeygenassist(auVar26,0);
  uVar16 = auVar4._8_4_;
  auVar6._0_4_ = auVar25._0_4_ ^ uVar16;
  auVar6._4_4_ = auVar25._4_4_ ^ auVar25._0_4_ ^ uVar16;
  auVar6._8_4_ = auVar25._0_4_ ^ auVar25._8_4_ ^ auVar25._4_4_ ^ uVar16;
  auVar6._12_4_ = auVar25._4_4_ ^ auVar25._12_4_ ^ auVar25._8_4_ ^ auVar25._0_4_ ^ uVar16;
  auVar25 = aesimc(auVar26);
  auVar4 = aeskeygenassist(auVar6,0x10);
  uVar16 = auVar4._12_4_;
  auVar13._0_4_ = auVar26._0_4_ ^ uVar16;
  auVar13._4_4_ = auVar26._4_4_ ^ auVar26._0_4_ ^ uVar16;
  auVar13._8_4_ = auVar26._0_4_ ^ auVar26._8_4_ ^ auVar26._4_4_ ^ uVar16;
  auVar13._12_4_ = auVar26._4_4_ ^ auVar26._12_4_ ^ auVar26._8_4_ ^ auVar26._0_4_ ^ uVar16;
  auVar26 = aesimc(auVar6);
  auVar4 = aesimc(auVar13);
  auVar3 = aeskeygenassist(auVar13,0);
  uVar16 = auVar3._8_4_;
  auVar17._0_4_ = auVar6._0_4_ ^ uVar16;
  auVar17._4_4_ = auVar6._4_4_ ^ auVar6._0_4_ ^ uVar16;
  auVar17._8_4_ = auVar6._0_4_ ^ auVar6._8_4_ ^ auVar6._4_4_ ^ uVar16;
  auVar17._12_4_ = auVar6._4_4_ ^ auVar6._12_4_ ^ auVar6._8_4_ ^ auVar6._0_4_ ^ uVar16;
  auVar3 = aesimc(auVar17);
  auVar5 = aeskeygenassist(auVar17,0x20);
  uVar16 = auVar5._12_4_;
  auVar11._0_4_ = auVar13._0_4_ ^ uVar16;
  auVar11._4_4_ = auVar13._4_4_ ^ auVar13._0_4_ ^ uVar16;
  auVar11._8_4_ = auVar13._0_4_ ^ auVar13._8_4_ ^ auVar13._4_4_ ^ uVar16;
  auVar11._12_4_ = auVar13._4_4_ ^ auVar13._12_4_ ^ auVar13._8_4_ ^ auVar13._0_4_ ^ uVar16;
  auVar5 = aesimc(auVar11);
  auVar6 = aeskeygenassist(auVar11,0);
  uVar16 = auVar6._8_4_;
  auVar7._0_4_ = auVar17._0_4_ ^ uVar16;
  auVar7._4_4_ = auVar17._4_4_ ^ auVar17._0_4_ ^ uVar16;
  auVar7._8_4_ = auVar17._0_4_ ^ auVar17._8_4_ ^ auVar17._4_4_ ^ uVar16;
  auVar7._12_4_ = auVar17._4_4_ ^ auVar17._12_4_ ^ auVar17._8_4_ ^ auVar17._0_4_ ^ uVar16;
  auVar6 = aesimc(auVar7);
  auVar7 = aeskeygenassist(auVar7,0x40);
  uVar16 = auVar7._12_4_;
  uVar12 = auVar11._0_4_ ^ uVar16;
  uVar14 = auVar11._4_4_ ^ auVar11._0_4_ ^ uVar16;
  uVar15 = auVar11._0_4_ ^ auVar11._8_4_ ^ auVar11._4_4_ ^ uVar16;
  uVar16 = auVar11._4_4_ ^ auVar11._12_4_ ^ auVar11._8_4_ ^ auVar11._0_4_ ^ uVar16;
  if (0x1f < param_3) {
    uVar2 = param_3 >> 5;
    param_3 = param_3 + uVar2 * -0x20;
    do {
      auVar8._0_4_ = *(uint *)*(undefined1 (*) [16])param_2 ^ uVar12;
      auVar8._4_4_ = *(uint *)(*(undefined1 (*) [16])param_2 + 4) ^ uVar14;
      auVar8._8_4_ = *(uint *)(*(undefined1 (*) [16])param_2 + 8) ^ uVar15;
      auVar8._12_4_ = *(uint *)(*(undefined1 (*) [16])param_2 + 0xc) ^ uVar16;
      auVar7 = aesdec(auVar8,auVar6);
      auVar7 = aesdec(auVar7,auVar5);
      auVar7 = aesdec(auVar7,auVar3);
      auVar7 = aesdec(auVar7,auVar4);
      auVar7 = aesdec(auVar7,auVar26);
      auVar7 = aesdec(auVar7,auVar25);
      auVar7 = aesdec(auVar7,auVar24);
      auVar7 = aesdec(auVar7,auVar23);
      auVar7 = aesdec(auVar7,auVar22);
      auVar7 = aesdec(auVar7,auVar21);
      auVar7 = aesdec(auVar7,auVar20);
      auVar7 = aesdec(auVar7,auVar19);
      auVar7 = aesdec(auVar7,auVar18);
      auVar7 = aesdeclast(auVar7,auVar1);
      *(undefined1 (*) [16])param_2 = auVar7;
      auVar10._0_4_ = uVar12 ^ *(uint *)*(undefined1 (*) [16])((longlong)param_2 + 0x10);
      auVar10._4_4_ = uVar14 ^ *(uint *)(*(undefined1 (*) [16])((longlong)param_2 + 0x10) + 4);
      auVar10._8_4_ = uVar15 ^ *(uint *)(*(undefined1 (*) [16])((longlong)param_2 + 0x10) + 8);
      auVar10._12_4_ = uVar16 ^ *(uint *)(*(undefined1 (*) [16])((longlong)param_2 + 0x10) + 0xc);
      auVar7 = aesdec(auVar10,auVar6);
      auVar7 = aesdec(auVar7,auVar5);
      auVar7 = aesdec(auVar7,auVar3);
      auVar7 = aesdec(auVar7,auVar4);
      auVar7 = aesdec(auVar7,auVar26);
      auVar7 = aesdec(auVar7,auVar25);
      auVar7 = aesdec(auVar7,auVar24);
      auVar7 = aesdec(auVar7,auVar23);
      auVar7 = aesdec(auVar7,auVar22);
      auVar7 = aesdec(auVar7,auVar21);
      auVar7 = aesdec(auVar7,auVar20);
      auVar7 = aesdec(auVar7,auVar19);
      auVar7 = aesdec(auVar7,auVar18);
      auVar7 = aesdeclast(auVar7,auVar1);
      *(undefined1 (*) [16])((longlong)param_2 + 0x10) = auVar7;
      param_2 = (uchar *)((longlong)param_2 + 0x20);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (param_3 != 0) {
    auVar9._0_4_ = *(uint *)*(undefined1 (*) [16])param_2 ^ uVar12;
    auVar9._4_4_ = *(uint *)(*(undefined1 (*) [16])param_2 + 4) ^ uVar14;
    auVar9._8_4_ = *(uint *)(*(undefined1 (*) [16])param_2 + 8) ^ uVar15;
    auVar9._12_4_ = *(uint *)(*(undefined1 (*) [16])param_2 + 0xc) ^ uVar16;
    auVar6 = aesdec(auVar9,auVar6);
    auVar5 = aesdec(auVar6,auVar5);
    auVar3 = aesdec(auVar5,auVar3);
    auVar4 = aesdec(auVar3,auVar4);
    auVar4 = aesdec(auVar4,auVar26);
    auVar4 = aesdec(auVar4,auVar25);
    auVar4 = aesdec(auVar4,auVar24);
    auVar4 = aesdec(auVar4,auVar23);
    auVar4 = aesdec(auVar4,auVar22);
    auVar4 = aesdec(auVar4,auVar21);
    auVar4 = aesdec(auVar4,auVar20);
    auVar4 = aesdec(auVar4,auVar19);
    auVar4 = aesdec(auVar4,auVar18);
    auVar4 = aesdeclast(auVar4,auVar1);
    *(undefined1 (*) [16])param_2 = auVar4;
  }
  return;
}

// AesEncryptExpand @ 14181ab00

void __cdecl AesEncryptExpand(FAesExpandedKey *param_1,uchar *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)param_2;
  param_1->Key[0] = uVar4;
  uVar3 = 0;
  param_1->Key[1] = *(uint *)(param_2 + 4);
  param_1->Key[2] = *(uint *)(param_2 + 8);
  param_1->Key[3] = *(uint *)(param_2 + 0xc);
  param_1->Key[4] = *(uint *)(param_2 + 0x10);
  param_1->Key[5] = *(uint *)(param_2 + 0x14);
  param_1->Key[6] = *(uint *)(param_2 + 0x18);
  param_1->Key[7] = *(uint *)(param_2 + 0x1c);
  do {
    uVar1 = *(uint *)((longlong)param_1 + 0x1c);
    uVar4 = uVar4 ^ CONCAT13(AesSbox[uVar1 & 0xff],
                             CONCAT21(CONCAT11(AesSbox[uVar1 >> 0x18],AesSbox[uVar1 >> 0x10 & 0xff])
                                      ,AesSbox[uVar1 >> 8 & 0xff])) ^ 1 << (uVar3 & 0x1f);
    *(uint *)((longlong)param_1 + 0x20) = uVar4;
    *(uint *)((longlong)param_1 + 0x24) = uVar4 ^ *(uint *)((longlong)param_1 + 4);
    uVar2 = uVar4 ^ *(uint *)((longlong)param_1 + 4) ^ *(uint *)((longlong)param_1 + 8);
    *(uint *)((longlong)param_1 + 0x28) = uVar2;
    uVar2 = uVar2 ^ *(uint *)((longlong)param_1 + 0xc);
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    if (uVar3 < 6) {
      uVar2 = CONCAT31(CONCAT21(CONCAT11(AesSbox[uVar2 >> 0x18],AesSbox[uVar2 >> 0x10 & 0xff]),
                                AesSbox[uVar2 >> 8 & 0xff]),AesSbox[uVar2 & 0xff]) ^
              *(uint *)((longlong)param_1 + 0x10);
      *(uint *)((longlong)param_1 + 0x30) = uVar2;
      uVar2 = uVar2 ^ *(uint *)((longlong)param_1 + 0x14);
      *(uint *)((longlong)param_1 + 0x34) = uVar2;
      uVar2 = uVar2 ^ *(uint *)((longlong)param_1 + 0x18);
      *(uint *)((longlong)param_1 + 0x38) = uVar2;
      *(uint *)((longlong)param_1 + 0x3c) = uVar2 ^ uVar1;
    }
    uVar3 = uVar3 + 1;
    param_1 = (FAesExpandedKey *)((longlong)param_1 + 0x20);
  } while ((int)uVar3 < 7);
  return;
}

// AesEncryptSW @ 14181ac50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl AesEncryptSW(uchar *param_1,uchar *param_2,ulong64 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  undefined1 auStack_148 [32];
  FAesExpandedKey local_128;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  AesEncryptExpand(&local_128,param_1);
  if (param_3 != 0) {
    lVar9 = (param_3 - 1 >> 4) + 1;
    do {
      uVar4 = local_128.Key[0] ^ *(uint *)param_2;
      lVar11 = 0xd;
      uVar1 = local_128.Key[1] ^ *(uint *)((longlong)param_2 + 4);
      uVar7 = local_128.Key[2] ^ *(uint *)((longlong)param_2 + 8);
      puVar10 = local_128.Key + 6;
      uVar5 = local_128.Key[3] ^ *(uint *)((longlong)param_2 + 0xc);
      do {
        uVar3 = uVar7 >> 8;
        uVar6 = uVar7 >> 0x18;
        uVar8 = uVar7 >> 0x10;
        uVar2 = uVar1 >> 8;
        uVar7 = AesTbox[1][uVar5 >> 8 & 0xff] ^ AesTbox[3][uVar1 >> 0x18] ^
                AesTbox[2][uVar4 >> 0x10 & 0xff] ^ AesTbox[0][uVar7 & 0xff] ^ *puVar10;
        uVar6 = AesTbox[3][uVar6] ^ AesTbox[2][uVar1 >> 0x10 & 0xff] ^ AesTbox[1][uVar4 >> 8 & 0xff]
                ^ AesTbox[0][uVar5 & 0xff] ^ puVar10[1];
        uVar1 = AesTbox[2][uVar5 >> 0x10 & 0xff] ^ AesTbox[1][uVar3 & 0xff] ^
                AesTbox[3][uVar4 >> 0x18] ^ AesTbox[0][uVar1 & 0xff] ^ puVar10[-1];
        uVar4 = AesTbox[3][uVar5 >> 0x18] ^ AesTbox[2][uVar8 & 0xff] ^ AesTbox[1][uVar2 & 0xff] ^
                AesTbox[0][uVar4 & 0xff] ^ puVar10[-2];
        lVar11 = lVar11 + -1;
        puVar10 = puVar10 + 4;
        uVar5 = uVar6;
      } while (lVar11 != 0);
      *(uint *)param_2 =
           CONCAT31(CONCAT21(CONCAT11(AesSbox[uVar6 >> 0x18],AesSbox[uVar7 >> 0x10 & 0xff]),
                             AesSbox[uVar1 >> 8 & 0xff]),AesSbox[uVar4 & 0xff]) ^
           local_128.Key[0x38];
      *(uint *)((longlong)param_2 + 4) =
           CONCAT31(CONCAT21(CONCAT11(AesSbox[uVar4 >> 0x18],AesSbox[uVar6 >> 0x10 & 0xff]),
                             AesSbox[uVar7 >> 8 & 0xff]),AesSbox[uVar1 & 0xff]) ^
           local_128.Key[0x39];
      *(uint *)((longlong)param_2 + 8) =
           CONCAT31(CONCAT21(CONCAT11(AesSbox[uVar1 >> 0x18],AesSbox[uVar4 >> 0x10 & 0xff]),
                             AesSbox[uVar6 >> 8 & 0xff]),AesSbox[uVar7 & 0xff]) ^
           local_128.Key[0x3a];
      *(uint *)((longlong)param_2 + 0xc) =
           CONCAT31(CONCAT21(CONCAT11(AesSbox[uVar7 >> 0x18],AesSbox[uVar1 >> 0x10 & 0xff]),
                             AesSbox[uVar4 >> 8 & 0xff]),AesSbox[uVar6 & 0xff]) ^
           local_128.Key[0x3b];
      param_2 = (uchar *)((longlong)param_2 + 0x10);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}

// AesEncryptX86HW @ 14181afe0

/* WARNING: Removing unreachable block (ram,0x00014181b2d1) */
/* WARNING: Removing unreachable block (ram,0x00014181b2c7) */
/* WARNING: Removing unreachable block (ram,0x00014181b2bf) */
/* WARNING: Removing unreachable block (ram,0x00014181b298) */
/* WARNING: Removing unreachable block (ram,0x00014181b28e) */
/* WARNING: Removing unreachable block (ram,0x00014181b286) */
/* WARNING: Removing unreachable block (ram,0x00014181b25f) */
/* WARNING: Removing unreachable block (ram,0x00014181b255) */
/* WARNING: Removing unreachable block (ram,0x00014181b24d) */
/* WARNING: Removing unreachable block (ram,0x00014181b226) */
/* WARNING: Removing unreachable block (ram,0x00014181b21c) */
/* WARNING: Removing unreachable block (ram,0x00014181b214) */
/* WARNING: Removing unreachable block (ram,0x00014181b1ed) */
/* WARNING: Removing unreachable block (ram,0x00014181b1e3) */
/* WARNING: Removing unreachable block (ram,0x00014181b1db) */
/* WARNING: Removing unreachable block (ram,0x00014181b1b4) */
/* WARNING: Removing unreachable block (ram,0x00014181b1aa) */
/* WARNING: Removing unreachable block (ram,0x00014181b1a2) */
/* WARNING: Removing unreachable block (ram,0x00014181b17b) */
/* WARNING: Removing unreachable block (ram,0x00014181b171) */
/* WARNING: Removing unreachable block (ram,0x00014181b169) */
/* WARNING: Removing unreachable block (ram,0x00014181b149) */
/* WARNING: Removing unreachable block (ram,0x00014181b13b) */
/* WARNING: Removing unreachable block (ram,0x00014181b133) */
/* WARNING: Removing unreachable block (ram,0x00014181b112) */
/* WARNING: Removing unreachable block (ram,0x00014181b109) */
/* WARNING: Removing unreachable block (ram,0x00014181b101) */
/* WARNING: Removing unreachable block (ram,0x00014181b0e0) */
/* WARNING: Removing unreachable block (ram,0x00014181b0d7) */
/* WARNING: Removing unreachable block (ram,0x00014181b0cf) */
/* WARNING: Removing unreachable block (ram,0x00014181b0ae) */
/* WARNING: Removing unreachable block (ram,0x00014181b0a5) */
/* WARNING: Removing unreachable block (ram,0x00014181b09d) */
/* WARNING: Removing unreachable block (ram,0x00014181b07c) */
/* WARNING: Removing unreachable block (ram,0x00014181b070) */
/* WARNING: Removing unreachable block (ram,0x00014181b067) */
/* WARNING: Removing unreachable block (ram,0x00014181b01f) */
/* WARNING: Removing unreachable block (ram,0x00014181b008) */
/* WARNING: Removing unreachable block (ram,0x00014181affb) */

void __cdecl AesEncryptX86HW(uchar *param_1,uchar *param_2,ulong64 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar6;
  uint uVar7;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar11;
  undefined1 auVar10 [16];
  uint uVar12;
  uint uVar14;
  uint uVar15;
  undefined1 auVar13 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  auVar3 = *(undefined1 (*) [16])param_1;
  auVar5 = *(undefined1 (*) [16])(param_1 + 0x10);
  uVar12 = auVar3._0_4_;
  uVar14 = auVar3._4_4_;
  uVar7 = auVar3._8_4_;
  uVar15 = auVar3._12_4_;
  auVar3 = aeskeygenassist(auVar5,1);
  uVar6 = auVar3._12_4_;
  auVar13._0_4_ = uVar12 ^ uVar6;
  auVar13._4_4_ = uVar12 ^ uVar14 ^ uVar6;
  auVar13._8_4_ = uVar12 ^ uVar14 ^ uVar7 ^ uVar6;
  auVar13._12_4_ = uVar14 ^ uVar7 ^ uVar15 ^ uVar12 ^ uVar6;
  uVar9 = auVar5._0_4_;
  uVar11 = auVar5._4_4_;
  auVar3 = aeskeygenassist(auVar13,0);
  uVar6 = auVar3._8_4_;
  auVar16._0_4_ = uVar9 ^ uVar6;
  auVar16._4_4_ = uVar9 ^ uVar11 ^ uVar6;
  auVar16._8_4_ = uVar9 ^ uVar11 ^ auVar5._8_4_ ^ uVar6;
  auVar16._12_4_ = uVar11 ^ auVar5._8_4_ ^ auVar5._12_4_ ^ uVar9 ^ uVar6;
  auVar3 = aeskeygenassist(auVar16,2);
  uVar6 = auVar3._12_4_;
  auVar17._0_4_ = auVar13._0_4_ ^ uVar6;
  auVar17._4_4_ = auVar13._4_4_ ^ auVar13._0_4_ ^ uVar6;
  auVar17._8_4_ = auVar13._0_4_ ^ auVar13._8_4_ ^ auVar13._4_4_ ^ uVar6;
  auVar17._12_4_ = auVar13._4_4_ ^ auVar13._12_4_ ^ auVar13._8_4_ ^ auVar13._0_4_ ^ uVar6;
  auVar3 = aeskeygenassist(auVar17,0);
  uVar6 = auVar3._8_4_;
  auVar18._0_4_ = auVar16._0_4_ ^ uVar6;
  auVar18._4_4_ = auVar16._4_4_ ^ auVar16._0_4_ ^ uVar6;
  auVar18._8_4_ = auVar16._0_4_ ^ auVar16._8_4_ ^ auVar16._4_4_ ^ uVar6;
  auVar18._12_4_ = auVar16._4_4_ ^ auVar16._12_4_ ^ auVar16._8_4_ ^ auVar16._0_4_ ^ uVar6;
  auVar3 = aeskeygenassist(auVar18,4);
  uVar6 = auVar3._12_4_;
  auVar19._0_4_ = auVar17._0_4_ ^ uVar6;
  auVar19._4_4_ = auVar17._4_4_ ^ auVar17._0_4_ ^ uVar6;
  auVar19._8_4_ = auVar17._0_4_ ^ auVar17._8_4_ ^ auVar17._4_4_ ^ uVar6;
  auVar19._12_4_ = auVar17._4_4_ ^ auVar17._12_4_ ^ auVar17._8_4_ ^ auVar17._0_4_ ^ uVar6;
  auVar3 = aeskeygenassist(auVar19,0);
  uVar6 = auVar3._8_4_;
  auVar20._0_4_ = auVar18._0_4_ ^ uVar6;
  auVar20._4_4_ = auVar18._4_4_ ^ auVar18._0_4_ ^ uVar6;
  auVar20._8_4_ = auVar18._0_4_ ^ auVar18._8_4_ ^ auVar18._4_4_ ^ uVar6;
  auVar20._12_4_ = auVar18._4_4_ ^ auVar18._12_4_ ^ auVar18._8_4_ ^ auVar18._0_4_ ^ uVar6;
  auVar3 = aeskeygenassist(auVar20,8);
  uVar6 = auVar3._12_4_;
  auVar21._0_4_ = auVar19._0_4_ ^ uVar6;
  auVar21._4_4_ = auVar19._4_4_ ^ auVar19._0_4_ ^ uVar6;
  auVar21._8_4_ = auVar19._0_4_ ^ auVar19._8_4_ ^ auVar19._4_4_ ^ uVar6;
  auVar21._12_4_ = auVar19._4_4_ ^ auVar19._12_4_ ^ auVar19._8_4_ ^ auVar19._0_4_ ^ uVar6;
  auVar3 = aeskeygenassist(auVar21,0);
  uVar6 = auVar3._8_4_;
  auVar22._0_4_ = auVar20._0_4_ ^ uVar6;
  auVar22._4_4_ = auVar20._4_4_ ^ auVar20._0_4_ ^ uVar6;
  auVar22._8_4_ = auVar20._0_4_ ^ auVar20._8_4_ ^ auVar20._4_4_ ^ uVar6;
  auVar22._12_4_ = auVar20._4_4_ ^ auVar20._12_4_ ^ auVar20._8_4_ ^ auVar20._0_4_ ^ uVar6;
  auVar3 = aeskeygenassist(auVar22,0x10);
  uVar6 = auVar3._12_4_;
  auVar23._0_4_ = auVar21._0_4_ ^ uVar6;
  auVar23._4_4_ = auVar21._4_4_ ^ auVar21._0_4_ ^ uVar6;
  auVar23._8_4_ = auVar21._0_4_ ^ auVar21._8_4_ ^ auVar21._4_4_ ^ uVar6;
  auVar23._12_4_ = auVar21._4_4_ ^ auVar21._12_4_ ^ auVar21._8_4_ ^ auVar21._0_4_ ^ uVar6;
  auVar3 = aeskeygenassist(auVar23,0);
  uVar6 = auVar3._8_4_;
  auVar24._0_4_ = auVar22._0_4_ ^ uVar6;
  auVar24._4_4_ = auVar22._4_4_ ^ auVar22._0_4_ ^ uVar6;
  auVar24._8_4_ = auVar22._0_4_ ^ auVar22._8_4_ ^ auVar22._4_4_ ^ uVar6;
  auVar24._12_4_ = auVar22._4_4_ ^ auVar22._12_4_ ^ auVar22._8_4_ ^ auVar22._0_4_ ^ uVar6;
  auVar3 = aeskeygenassist(auVar24,0x20);
  uVar6 = auVar3._12_4_;
  auVar25._0_4_ = auVar23._0_4_ ^ uVar6;
  auVar25._4_4_ = auVar23._4_4_ ^ auVar23._0_4_ ^ uVar6;
  auVar25._8_4_ = auVar23._0_4_ ^ auVar23._8_4_ ^ auVar23._4_4_ ^ uVar6;
  auVar25._12_4_ = auVar23._4_4_ ^ auVar23._12_4_ ^ auVar23._8_4_ ^ auVar23._0_4_ ^ uVar6;
  auVar3 = aeskeygenassist(auVar25,0);
  uVar6 = auVar3._8_4_;
  auVar26._0_4_ = auVar24._0_4_ ^ uVar6;
  auVar26._4_4_ = auVar24._4_4_ ^ auVar24._0_4_ ^ uVar6;
  auVar26._8_4_ = auVar24._0_4_ ^ auVar24._8_4_ ^ auVar24._4_4_ ^ uVar6;
  auVar26._12_4_ = auVar24._4_4_ ^ auVar24._12_4_ ^ auVar24._8_4_ ^ auVar24._0_4_ ^ uVar6;
  auVar3 = aeskeygenassist(auVar26,0x40);
  uVar6 = auVar3._12_4_;
  auVar3._0_4_ = auVar25._0_4_ ^ uVar6;
  auVar3._4_4_ = auVar25._4_4_ ^ auVar25._0_4_ ^ uVar6;
  auVar3._8_4_ = auVar25._0_4_ ^ auVar25._8_4_ ^ auVar25._4_4_ ^ uVar6;
  auVar3._12_4_ = auVar25._4_4_ ^ auVar25._12_4_ ^ auVar25._8_4_ ^ auVar25._0_4_ ^ uVar6;
  if (0x1f < param_3) {
    uVar2 = param_3 >> 5;
    param_3 = param_3 + uVar2 * -0x20;
    do {
      auVar8._0_4_ = uVar12 ^ *(uint *)*(undefined1 (*) [16])param_2;
      auVar8._4_4_ = uVar14 ^ *(uint *)(*(undefined1 (*) [16])param_2 + 4);
      auVar8._8_4_ = uVar7 ^ *(uint *)(*(undefined1 (*) [16])param_2 + 8);
      auVar8._12_4_ = uVar15 ^ *(uint *)(*(undefined1 (*) [16])param_2 + 0xc);
      uVar6 = *(uint *)*(undefined1 (*) [16])((longlong)param_2 + 0x10);
      uVar9 = *(uint *)(*(undefined1 (*) [16])((longlong)param_2 + 0x10) + 4);
      uVar11 = *(uint *)(*(undefined1 (*) [16])((longlong)param_2 + 0x10) + 8);
      uVar1 = *(uint *)(*(undefined1 (*) [16])((longlong)param_2 + 0x10) + 0xc);
      auVar8 = aesenc(auVar8,auVar5);
      auVar8 = aesenc(auVar8,auVar13);
      auVar8 = aesenc(auVar8,auVar16);
      auVar8 = aesenc(auVar8,auVar17);
      auVar8 = aesenc(auVar8,auVar18);
      auVar8 = aesenc(auVar8,auVar19);
      auVar8 = aesenc(auVar8,auVar20);
      auVar8 = aesenc(auVar8,auVar21);
      auVar8 = aesenc(auVar8,auVar22);
      auVar8 = aesenc(auVar8,auVar23);
      auVar8 = aesenc(auVar8,auVar24);
      auVar8 = aesenc(auVar8,auVar25);
      auVar8 = aesenc(auVar8,auVar26);
      auVar8 = aesenclast(auVar8,auVar3);
      *(undefined1 (*) [16])param_2 = auVar8;
      auVar10._0_4_ = uVar12 ^ uVar6;
      auVar10._4_4_ = uVar14 ^ uVar9;
      auVar10._8_4_ = uVar7 ^ uVar11;
      auVar10._12_4_ = uVar15 ^ uVar1;
      auVar8 = aesenc(auVar10,auVar5);
      auVar8 = aesenc(auVar8,auVar13);
      auVar8 = aesenc(auVar8,auVar16);
      auVar8 = aesenc(auVar8,auVar17);
      auVar8 = aesenc(auVar8,auVar18);
      auVar8 = aesenc(auVar8,auVar19);
      auVar8 = aesenc(auVar8,auVar20);
      auVar8 = aesenc(auVar8,auVar21);
      auVar8 = aesenc(auVar8,auVar22);
      auVar8 = aesenc(auVar8,auVar23);
      auVar8 = aesenc(auVar8,auVar24);
      auVar8 = aesenc(auVar8,auVar25);
      auVar8 = aesenc(auVar8,auVar26);
      auVar8 = aesenclast(auVar8,auVar3);
      *(undefined1 (*) [16])((longlong)param_2 + 0x10) = auVar8;
      param_2 = (uchar *)((longlong)param_2 + 0x20);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (param_3 != 0) {
    auVar4._0_4_ = *(uint *)*(undefined1 (*) [16])param_2 ^ uVar12;
    auVar4._4_4_ = *(uint *)(*(undefined1 (*) [16])param_2 + 4) ^ uVar14;
    auVar4._8_4_ = *(uint *)(*(undefined1 (*) [16])param_2 + 8) ^ uVar7;
    auVar4._12_4_ = *(uint *)(*(undefined1 (*) [16])param_2 + 0xc) ^ uVar15;
    auVar5 = aesenc(auVar4,auVar5);
    auVar5 = aesenc(auVar5,auVar13);
    auVar5 = aesenc(auVar5,auVar16);
    auVar5 = aesenc(auVar5,auVar17);
    auVar5 = aesenc(auVar5,auVar18);
    auVar5 = aesenc(auVar5,auVar19);
    auVar5 = aesenc(auVar5,auVar20);
    auVar5 = aesenc(auVar5,auVar21);
    auVar5 = aesenc(auVar5,auVar22);
    auVar5 = aesenc(auVar5,auVar23);
    auVar5 = aesenc(auVar5,auVar24);
    auVar5 = aesenc(auVar5,auVar25);
    auVar5 = aesenc(auVar5,auVar26);
    auVar3 = aesenclast(auVar5,auVar3);
    *(undefined1 (*) [16])param_2 = auVar3;
  }
  return;
}

// ArenaRealloc @ 14181c660

FArenaPointer __cdecl
ArenaRealloc(FMemoryArena *param_1,void *param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5)

{
  void *pvVar1;
  uint in_stack_00000030;
  undefined4 in_stack_00000034;
  
  if (param_2 == (void *)0x0) {
    pvVar1 = FMemory::Realloc((void *)param_3,param_5,in_stack_00000030);
    param_1->_padding_ = (longlong)pvVar1;
    return (FArenaPointer)param_1;
  }
  if (param_5 == 0) {
    if ((param_3 != 0) && ((*(byte *)((longlong)param_2 + 8) & 1) == 0)) {
      (**(code **)(*(longlong *)param_2 + 0x10))(param_2,param_3,0);
    }
    param_1->_padding_ = 0;
  }
  else {
    pvVar1 = (void *)(**(code **)(*(longlong *)param_2 + 8))
                               (param_2,param_5,CONCAT44(in_stack_00000034,in_stack_00000030));
    if (param_3 != 0) {
      if (param_4 < param_5) {
        param_5 = param_4;
      }
      memcpy(pvVar1,(void *)param_3,param_5);
      if ((*(byte *)((longlong)param_2 + 8) & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x10))(param_2,param_3,0);
      }
    }
    param_1->_padding_ = (ulonglong)*(ushort *)((longlong)param_2 + 10) << 0x30 | (ulonglong)pvVar1;
  }
  return (FArenaPointer)param_1;
}

// ArenaRealloc @ 14181c750

FArenaPointer __cdecl
ArenaRealloc(FArenaPointer param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4)

{
  FMemoryArena *pFVar1;
  void *_Dst;
  void *pvVar2;
  uint in_stack_00000028;
  undefined4 in_stack_0000002c;
  
  pvVar2 = (void *)(param_2 & 0xffffffffffff);
  pFVar1 = GKnownArenas[param_2 >> 0x30].Arena;
  if (pFVar1 == (FMemoryArena *)0x0) {
    pvVar2 = FMemory::Realloc(pvVar2,param_4,in_stack_00000028);
    *(void **)param_1.TaggedPointer = pvVar2;
  }
  else if (param_4 == 0) {
    if ((pvVar2 != (void *)0x0) && ((pFVar1->ArenaFlags & 1) == 0)) {
      (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,pvVar2,0);
    }
    *(undefined8 *)param_1.TaggedPointer = 0;
  }
  else {
    _Dst = (void *)(**(code **)(pFVar1->_padding_ + 8))
                             (pFVar1,param_4,CONCAT44(in_stack_0000002c,in_stack_00000028));
    if (pvVar2 != (void *)0x0) {
      if (param_3 < param_4) {
        param_4 = param_3;
      }
      memcpy(_Dst,pvVar2,param_4);
      if ((pFVar1->ArenaFlags & 1) == 0) {
        (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,pvVar2,0);
      }
    }
    *(ulonglong *)param_1.TaggedPointer = (ulonglong)pFVar1->ArenaId << 0x30 | (ulonglong)_Dst;
  }
  return (FArenaPointer)param_1.TaggedPointer;
}

// ArenaTracker @ 14181c850

FArenaAllocState * __cdecl ArenaTracker(void)

{
  FArenaOrFreeLink FVar1;
  FArenaOrFreeLink *pFVar2;
  int iVar3;
  
  if (GTracker != (TAtomic<FArenaAllocState_*>)0x0) {
    return (FArenaAllocState *)GTracker;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      iVar3 = 2;
      pFVar2 = Tracker.KnownArenas + 1;
      do {
        FVar1 = (FArenaOrFreeLink)(longlong)iVar3;
        iVar3 = iVar3 + 1;
        *pFVar2 = FVar1;
        pFVar2 = pFVar2 + 1;
      } while ((longlong)pFVar2 < 0x154b791f8);
      Tracker.KnownArenas[0xff].Arena = (FMemoryArena *)0x0;
      GKnownArenas = Tracker.KnownArenas;
      atexit(`ArenaTracker'::__l2::_dynamic_atexit_destructor_for__Tracker__);
      _Init_thread_footer(&_TSS0);
    }
  }
  LOCK();
  GTracker = (TAtomic<FArenaAllocState_*>)&Tracker;
  UNLOCK();
  return &Tracker;
}

// AssertFailedImplV @ 14181cbf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AssertFailedImplV(char *param_1,char *param_2,int param_3,void *param_4,wchar_t *param_5,
                 char *param_6)

{
  bool bVar1;
  ulong64 *puVar2;
  undefined1 auStack_2078 [32];
  undefined8 local_2058;
  char *local_2050;
  undefined1 local_2048 [8192];
  ulonglong local_48;
  undefined8 uStack_40;
  
  bVar1 = FCommandLine::bIsInitialized;
  uStack_40 = 0x14181cc0a;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2078;
  if (!FCommandLine::bIsInitialized) {
    FCommandLine::Set(L"");
  }
  bHasAsserted = true;
  if (GError != (FOutputDeviceError *)0x0) {
    puVar2 = __local_stdio_printf_options();
    local_2050 = param_6;
    local_2058 = 0;
    __stdio_common_vswprintf(*puVar2,local_2048,0x1000,param_5);
    GError->ProgramCounter = param_4;
    local_2050 = local_2048;
    local_2058 = CONCAT44(local_2058._4_4_,param_3);
    FOutputDevice::LogfImpl
              ((FOutputDevice *)GError,L"Assertion failed: %hs [File:%hs] [Line: %i] \n%s\n");
  }
  if (!bVar1) {
    FCommandLine::CmdLineVersion = FCommandLine::CmdLineVersion + 1;
    FCommandLine::CmdLine[0] = L'\0';
    FCommandLine::OriginalCmdLine[0] = L'\0';
    FCommandLine::LoggingCmdLine[0] = L'\0';
    FCommandLine::LoggingOriginalCmdLine[0] = L'\0';
    FCommandLine::bIsInitialized = false;
  }
  return;
}

// CreateFileLineDescription @ 14181fdc0

FString * __cdecl
AutomationTest::CreateFileLineDescription
          (FString *__return_storage_ptr__,FString *param_1,int param_2)

{
  int iVar1;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = (param_1->Data).ArrayNum;
  if ((1 < iVar1) && (0 < param_2)) {
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar1 + -1);
    ::FString::AppendChars(__return_storage_ptr__,L"(",1);
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_18,param_2);
    iVar1 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChars(__return_storage_ptr__,L")",1);
  }
  return __return_storage_ptr__;
}

// EAutomationTestFlags_GetTestFlagsMap @ 141821440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

TMap<FString,EAutomationTestFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,EAutomationTestFlags,0>_>
* __cdecl EAutomationTestFlags_GetTestFlagsMap(void)

{
  int *piVar1;
  undefined1 auStackY_3d8 [32];
  FLLMScope local_3a8;
  EAutomationTestFlags local_3a4 [19];
  FMemScope local_358 [2];
  initializer_list<TPairInitializer<FString_const_&,EAutomationTestFlags_const_&>_> local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  TPairInitializer<FString_const_&,EAutomationTestFlags_const_&> local_1a8;
  FString *local_198;
  EAutomationTestFlags *local_190;
  FString *local_188;
  EAutomationTestFlags *local_180;
  FString *local_178;
  EAutomationTestFlags *local_170;
  FString *local_168;
  EAutomationTestFlags *local_160;
  FString *local_158;
  EAutomationTestFlags *local_150;
  FString *local_148;
  EAutomationTestFlags *local_140;
  FString *local_138;
  EAutomationTestFlags *local_130;
  FString *local_128;
  EAutomationTestFlags *local_120;
  FString *local_118;
  EAutomationTestFlags *local_110;
  FString *local_108;
  EAutomationTestFlags *local_100;
  FString *local_f8;
  EAutomationTestFlags *local_f0;
  FString *local_e8;
  EAutomationTestFlags *local_e0;
  FString *local_d8;
  EAutomationTestFlags *local_d0;
  FString *local_c8;
  EAutomationTestFlags *local_c0;
  FString *local_b8;
  EAutomationTestFlags *local_b0;
  FString *local_a8;
  EAutomationTestFlags *local_a0;
  FString *local_98;
  EAutomationTestFlags *local_90;
  FString *local_88;
  EAutomationTestFlags *local_80;
  FString *local_78;
  EAutomationTestFlags *local_70;
  FString *local_68;
  EAutomationTestFlags *local_60;
  FString *local_58;
  EAutomationTestFlags *local_50;
  FString *local_48;
  EAutomationTestFlags *local_40;
  FString *local_38;
  EAutomationTestFlags *local_30;
  FString *local_28;
  EAutomationTestFlags *local_20;
  TPairInitializer<FString_const_&,EAutomationTestFlags_const_&> local_18;
  
  local_18.Key = (FString *)(__security_cookie.value ^ (ulonglong)auStackY_3d8);
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FName::FName(&LLMScope_Name181,L"AutomationTest/Framework");
      _Init_thread_footer(&_TSS0);
    }
  }
  FLLMScope::FLLMScope(&local_3a8,LLMScope_Name181,false,None,Default,true);
  FMemScope::FMemScope(local_358,&LLMScope_Name181,true);
  if (*piVar1 < _TSS1) {
    _Init_thread_header(&_TSS1);
    if (_TSS1 == -1) {
      FString::FString(&local_1b8,L"EditorContext");
      local_1a8.Key = &local_1b8;
      local_3a4[0] = EditorContext;
      local_1a8.Value = local_3a4;
      FString::FString(&local_1c8,L"ClientContext");
      local_198 = &local_1c8;
      local_3a4[1] = 2;
      local_190 = local_3a4 + 1;
      FString::FString(&local_1d8,L"ServerContext");
      local_188 = &local_1d8;
      local_3a4[2] = 4;
      local_180 = local_3a4 + 2;
      FString::FString(&local_1e8,L"CommandletContext");
      local_178 = &local_1e8;
      local_3a4[3] = 8;
      local_170 = local_3a4 + 3;
      FString::FString(&local_1f8,L"ProgramContext");
      local_168 = &local_1f8;
      local_3a4[4] = 0x10;
      local_160 = local_3a4 + 4;
      FString::FString(&local_208,L"SupportsAutoRTFM");
      local_158 = &local_208;
      local_3a4[5] = 0x20000;
      local_150 = local_3a4 + 5;
      FString::FString(&local_218,L"ApplicationContextMask");
      local_148 = &local_218;
      local_140 = &EAutomationTestFlags_ApplicationContextMask;
      FString::FString(&local_228,L"NonNullRHI");
      local_138 = &local_228;
      local_3a4[6] = 0x100;
      local_130 = local_3a4 + 6;
      FString::FString(&local_238,L"RequiresUser");
      local_128 = &local_238;
      local_3a4[7] = 0x200;
      local_120 = local_3a4 + 7;
      FString::FString(&local_248,L"FeatureMask");
      local_118 = &local_248;
      local_110 = &EAutomationTestFlags_FeatureMask;
      FString::FString(&local_258,L"Disabled");
      local_108 = &local_258;
      local_3a4[8] = 0x10000;
      local_100 = local_3a4 + 8;
      FString::FString(&local_268,L"CriticalPriority");
      local_f8 = &local_268;
      local_3a4[9] = 0x100000;
      local_f0 = local_3a4 + 9;
      FString::FString(&local_278,L"HighPriority");
      local_e8 = &local_278;
      local_3a4[10] = 0x200000;
      local_e0 = local_3a4 + 10;
      FString::FString(&local_288,L"HighPriorityAndAbove");
      local_d8 = &local_288;
      local_d0 = &EAutomationTestFlags_HighPriorityAndAbove;
      FString::FString(&local_298,L"MediumPriority");
      local_c8 = &local_298;
      local_3a4[0xb] = 0x400000;
      local_c0 = local_3a4 + 0xb;
      FString::FString(&local_2a8,L"MediumPriorityAndAbove");
      local_b8 = &local_2a8;
      local_b0 = &EAutomationTestFlags_MediumPriorityAndAbove;
      FString::FString(&local_2b8,L"LowPriority");
      local_a8 = &local_2b8;
      local_3a4[0xc] = 0x800000;
      local_a0 = local_3a4 + 0xc;
      FString::FString(&local_2c8,L"PriorityMask");
      local_98 = &local_2c8;
      local_90 = &EAutomationTestFlags_PriorityMask;
      FString::FString(&local_2d8,L"SmokeFilter");
      local_3a4[0xd] = 0x1000000;
      local_80 = local_3a4 + 0xd;
      local_88 = &local_2d8;
      FString::FString(&local_2e8,L"EngineFilter");
      local_78 = &local_2e8;
      local_3a4[0xe] = 0x2000000;
      local_70 = local_3a4 + 0xe;
      FString::FString(&local_2f8,L"ProductFilter");
      local_68 = &local_2f8;
      local_3a4[0xf] = 0x4000000;
      local_60 = local_3a4 + 0xf;
      FString::FString(&local_308,L"PerfFilter");
      local_58 = &local_308;
      local_3a4[0x10] = 0x8000000;
      local_50 = local_3a4 + 0x10;
      FString::FString(&local_318,L"StressFilter");
      local_48 = &local_318;
      local_3a4[0x11] = 0x10000000;
      local_40 = local_3a4 + 0x11;
      FString::FString(&local_328,L"NegativeFilter");
      local_38 = &local_328;
      local_3a4[0x12] = 0x20000000;
      local_30 = local_3a4 + 0x12;
      FString::FString(&local_338,L"FilterMask");
      local_28 = &local_338;
      local_20 = &EAutomationTestFlags_FilterMask;
      local_348._First = &local_1a8;
      local_348._Last = &local_18;
      TMap<FString,enum_EAutomationTestFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>_>
      ::
      TMap<FString,enum_EAutomationTestFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>_>
                (&FlagsMap,&local_348);
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
      if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data.AllocatorInstance.Data);
      }
      if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.Data.AllocatorInstance.Data);
      }
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
      if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
      }
      if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
      }
      if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
      }
      if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
      }
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
      if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
      }
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
      }
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
      if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data.AllocatorInstance.Data);
      }
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      atexit(`EAutomationTestFlags_GetTestFlagsMap'::__l2::
             _dynamic_atexit_destructor_for__FlagsMap__);
      _Init_thread_footer(&_TSS1);
    }
  }
  FMemScope::~FMemScope(local_358);
  FLLMScope::~FLLMScope(&local_3a8);
  return &FlagsMap;
}

// FindSlowestTest @ 1418237a0

wchar_t * __cdecl
FindSlowestTest(TMap<FString,FAutomationTestExecutionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExecutionInfo,0>_>
                *param_1,double *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  double dVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar16;
  uint uVar17;
  uint *puVar19;
  uint uVar20;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  wchar_t *pwVar15;
  wchar_t *pwVar18;
  
  if ((*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 < 1) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Executions.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AutomationTest.cpp"
                         ,0x1fe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pwVar10 = (wchar_t *)(*pcVar5)();
    return pwVar10;
  }
  pwVar10 = (wchar_t *)0x0;
  puVar1 = &param_1->field_0x10;
  *param_2 = 0.0;
  uVar14 = 0;
  uVar4 = *(uint *)&param_1->field_0x28;
  uVar7 = 1;
  uVar17 = 0;
  uVar8 = uVar14;
  if (uVar4 != 0) {
    puVar19 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar8 = *puVar19;
    pwVar15 = pwVar10;
    pwVar18 = pwVar10;
    uVar17 = 0;
    uVar14 = 0;
    while (uVar8 == 0) {
      iVar13 = (int)pwVar15;
      uVar17 = (int)pwVar18 + 0x20;
      pwVar18 = (wchar_t *)(ulonglong)uVar17;
      uVar14 = iVar13 + 1;
      pwVar15 = (wchar_t *)(ulonglong)uVar14;
      uVar8 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_14182387f;
      uVar8 = puVar19[(longlong)iVar13 + 1];
    }
    uVar7 = -uVar8 & uVar8;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    uVar8 = (uVar17 - 1) + local_res18;
    if ((int)uVar4 < (int)uVar8) {
      uVar8 = uVar4;
    }
  }
LAB_14182387f:
  uVar9 = *(uint *)&param_1->field_0x28;
  uVar20 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,uVar14);
  TStack_60.CurrentBitIndex = uVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar9 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = uVar17;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || ((int)uVar4 < (int)uVar9)) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pwVar10 = (wchar_t *)(*pcVar5)();
    return pwVar10;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar9 != uVar4) {
    puVar16 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar13;
      uVar20 = uVar20 + 0x20;
      iVar13 = iVar13 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_141823980;
      uVar17 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar9 = (int)lVar12 + -1 + uVar20;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_141823980:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExecutionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar12 = *(longlong *)param_1;
    lVar11 = (longlong)TStack_60.CurrentBitIndex * 0x80;
    dVar3 = *(double *)(lVar11 + 0x48 + lVar12);
    if (*param_2 <= dVar3) {
      *param_2 = dVar3;
      if (*(int *)(lVar11 + 8 + lVar12) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)(lVar11 + lVar12);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return pwVar10;
}

// GetAutomationLogLevel @ 141824840

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl
AutomationTest::GetAutomationLogLevel(Type param_1,FName param_2,FAutomationTestBase *param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  FString *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  bool bVar10;
  FName local_res10;
  FString *local_48;
  int local_40;
  FString local_38;
  
  bVar2 = false;
  bVar10 = false;
  local_res10 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&ActionCS,4000);
    atexit(`AutomationTest::GetAutomationLogLevel'::__l2::_dynamic_atexit_destructor_for__ActionCS__
          );
    _Init_thread_footer(&::_TSS0);
  }
  if (bCaptureLogEvents == false) {
    return NoLogging;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&ActionCS);
  if (param_3 != LastTest) {
    DestructItems<FString,int>
              ((FString *)FAutomationTestBase::SuppressedLogCategories.AllocatorInstance.Data,
               FAutomationTestBase::SuppressedLogCategories.ArrayNum);
    FAutomationTestBase::SuppressedLogCategories.ArrayNum = 0;
    if (FAutomationTestBase::SuppressedLogCategories.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&FAutomationTestBase::SuppressedLogCategories.AllocatorInstance,0,
                 &FAutomationTestBase::SuppressedLogCategories.ArrayMax);
    }
    FConfigCacheIni::GetBool
              (GConfig,L"/Script/AutomationController.AutomationControllerSettings",
               L"bSuppressLogErrors",&FAutomationTestBase::bSuppressLogErrors,&GEngineIni);
    FConfigCacheIni::GetBool
              (GConfig,L"/Script/AutomationController.AutomationControllerSettings",
               L"bSuppressLogWarnings",&FAutomationTestBase::bSuppressLogWarnings,&GEngineIni);
    FConfigCacheIni::GetBool
              (GConfig,L"/Script/AutomationController.AutomationControllerSettings",
               L"bElevateLogWarningsToErrors",&FAutomationTestBase::bElevateLogWarningsToErrors,
               &GEngineIni);
    FConfigCacheIni::GetArray
              (GConfig,L"/Script/AutomationController.AutomationControllerSettings",
               L"SuppressedLogCategories",&FAutomationTestBase::SuppressedLogCategories,&GEngineIni)
    ;
    LastTest = param_3;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&ActionCS);
  if (param_3 == (FAutomationTestBase *)0x0) {
    return param_1;
  }
  cVar4 = (**(code **)(param_3->_padding_ + 0x80))(param_3);
  if (cVar4 == '\0') {
    plVar6 = (longlong *)(**(code **)(param_3->_padding_ + 0xa8))(param_3,&local_48);
    pFVar7 = ::FName::ToString(&local_res10,&local_38);
    puVar9 = (undefined8 *)*plVar6;
    puVar8 = puVar9 + (longlong)(int)plVar6[1] * 2;
    for (; puVar9 != puVar8; puVar9 = puVar9 + 2) {
      iVar5 = *(int *)(puVar9 + 1);
      iVar1 = (pFVar7->Data).ArrayNum;
      if (iVar5 == iVar1) {
        if (1 < iVar5) {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)*puVar9,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
          bVar10 = iVar5 == 0;
          goto LAB_141824a44;
        }
LAB_141824a5e:
        bVar2 = true;
        bVar10 = true;
        goto LAB_141824a63;
      }
      bVar10 = iVar1 + iVar5 == 1;
LAB_141824a44:
      if (bVar10) goto LAB_141824a5e;
    }
    bVar3 = false;
    bVar2 = true;
    bVar10 = true;
  }
  else {
LAB_141824a63:
    bVar3 = true;
  }
  if ((bVar10) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (DestructItems<FString,int>(local_48,local_40), local_48 != (FString *)0x0)) {
    FMemory::Free(local_48);
  }
  if (bVar3) {
LAB_141824aa9:
    param_1 = NoLogging;
  }
  else {
    if (param_1 == Warning) {
      cVar4 = (**(code **)(param_3->_padding_ + 0x98))(param_3);
      if (cVar4 != '\0') goto LAB_141824aa9;
      cVar4 = (**(code **)(param_3->_padding_ + 0xa0))(param_3);
      if (cVar4 == '\0') {
        return Warning;
      }
      param_1 = Error;
    }
    else if (param_1 != Error) {
      return param_1;
    }
    cVar4 = (**(code **)(param_3->_padding_ + 0x90))(param_3);
    if (cVar4 != '\0') {
      param_1 = NoLogging;
    }
  }
  return param_1;
}

// GetAxisColor @ 141824b60

/* WARNING: Enum "Type": Some values do not have unique names */

FLinearColor * __cdecl
AxisDisplayInfo::GetAxisColor(FLinearColor *__return_storage_ptr__,Type param_1)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  Type local_res10 [2];
  Type *local_res18 [2];
  
  local_res10[0] = param_1;
  pIVar2 = IModularFeatures::Get();
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar3 + 0x9d4c) <
      `public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                      ::__l2::Name,L"AxisDisplayInfo");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                            ::__l2::Name);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    if (*(int *)(lVar3 + 0x9d4c) <
        `public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::__l2::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                        ::__l2::Name,L"AxisDisplayInfo");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))
                      (pIVar2,`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                              ::__l2::Name,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x28))(plVar4,__return_storage_ptr__,local_res10[0]);
    return __return_storage_ptr__;
  }
  if ((local_res10[0] == X) || (local_res10[0] == Forward)) {
    (__return_storage_ptr__->field0_0x0)._s_0.R = 0.594;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = 0x3ca161e5;
  }
  else if ((local_res10[0] == Y) || (local_res10[0] == Left)) {
    (__return_storage_ptr__->field0_0x0)._s_0.R = 0.1349;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = 0x3ecab368;
  }
  else {
    if ((local_res10[0] != Z) && (local_res10[0] != Up)) {
      local_res18[0] = local_res10;
      `AxisDisplayInfo::GetAxisColor'::__l2::<lambda_1>::operator()(local_res18);
      (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black;
      return __return_storage_ptr__;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.R = 0.0251;
    (__return_storage_ptr__->field0_0x0)._s_0.G = 0.207;
    (__return_storage_ptr__->field0_0x0)._s_0.B = 0.85;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  return __return_storage_ptr__;
}

// GetAxisDisplayCoordinateSystem @ 141824d30

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl AxisDisplayInfo::GetAxisDisplayCoordinateSystem(void)

{
  int iVar1;
  Type TVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  
  pIVar3 = IModularFeatures::Get();
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar6 < `public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::
                __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                      ::__l2::Name,L"AxisDisplayInfo");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar3 + 0x18))
                    (pIVar3,`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                            ::__l2::Name);
  if (0 < iVar1) {
    pIVar3 = IModularFeatures::Get();
    if (*piVar6 < `public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                        ::__l2::Name,L"AxisDisplayInfo");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))
                      (pIVar3,`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                              ::__l2::Name,0);
    plVar5 = (longlong *)(lVar4 + -8);
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x000141824dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TVar2 = (**(code **)(*plVar5 + 8))();
    return TVar2;
  }
  return XYZ;
}

// GetAxisDisplayName @ 141824e50

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __cdecl AxisDisplayInfo::GetAxisDisplayName(FText *__return_storage_ptr__,Type param_1)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  Type local_res10 [2];
  Type *local_res18;
  
  local_res10[0] = param_1;
  pIVar2 = IModularFeatures::Get();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::
                __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                      ::__l2::Name,L"AxisDisplayInfo");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                            ::__l2::Name);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    if (*piVar5 < `public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                        ::__l2::Name,L"AxisDisplayInfo");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))
                      (pIVar2,`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                              ::__l2::Name,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,__return_storage_ptr__,local_res10[0]);
    return __return_storage_ptr__;
  }
  if ((local_res10[0] == X) || (local_res10[0] == Forward)) {
    pwVar7 = L"X";
    pwVar6 = L"XDisplayName";
  }
  else if ((local_res10[0] == Y) || (local_res10[0] == Left)) {
    pwVar7 = L"Y";
    pwVar6 = L"YDisplayName";
  }
  else if ((local_res10[0] == Z) || (local_res10[0] == Up)) {
    pwVar7 = L"Z";
    pwVar6 = L"ZDisplayName";
  }
  else {
    local_res18 = local_res10;
    `AxisDisplayInfo::GetAxisDisplayName'::__l2::<lambda_1>::operator()(&local_res18);
    pwVar7 = L"Unsupported";
    pwVar6 = L"UnsupportedDisplayName";
  }
  FText::AsLocalizable_Advanced_LocText(__return_storage_ptr__,L"AxisDisplayInfo",pwVar6,pwVar7);
  return __return_storage_ptr__;
}

// GetAxisDisplayNameShort @ 141825020

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __cdecl AxisDisplayInfo::GetAxisDisplayNameShort(FText *__return_storage_ptr__,Type param_1)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  Type local_res10 [2];
  Type *local_res18;
  
  local_res10[0] = param_1;
  pIVar2 = IModularFeatures::Get();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::
                __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                      ::__l2::Name,L"AxisDisplayInfo");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                            ::__l2::Name);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    if (*piVar5 < `public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                        ::__l2::Name,L"AxisDisplayInfo");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))
                      (pIVar2,`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                              ::__l2::Name,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x20))(plVar4,__return_storage_ptr__,local_res10[0]);
    return __return_storage_ptr__;
  }
  if (local_res10[0] == X) {
    pwVar7 = L"X";
    pwVar6 = L"XDisplayNameShort";
  }
  else if (local_res10[0] == Y) {
    pwVar7 = L"Y";
    pwVar6 = L"YDisplayNameShort";
  }
  else if (local_res10[0] == Z) {
    pwVar7 = L"Z";
    pwVar6 = L"ZDisplayNameShort";
  }
  else if (local_res10[0] == Forward) {
    pwVar7 = L"Forward";
    pwVar6 = L"ForwardDisplayNameShort";
  }
  else if (local_res10[0] == Left) {
    pwVar7 = L"Left";
    pwVar6 = L"LeftDisplayNameShort";
  }
  else if (local_res10[0] == Up) {
    pwVar7 = L"Up";
    pwVar6 = L"UpDisplayNameShort";
  }
  else {
    local_res18 = local_res10;
    `AxisDisplayInfo::GetAxisDisplayNameShort'::__l2::<lambda_1>::operator()(&local_res18);
    pwVar7 = L"?";
    pwVar6 = L"UnsupportedGetAxisDisplayNameShort";
  }
  FText::AsLocalizable_Advanced_LocText(__return_storage_ptr__,L"AxisDisplayInfo",pwVar6,pwVar7);
  return __return_storage_ptr__;
}

// GetAxisToolTip @ 141825220

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __cdecl AxisDisplayInfo::GetAxisToolTip(FText *__return_storage_ptr__,Type param_1)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  
  pIVar2 = IModularFeatures::Get();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::
                __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                      ::__l2::Name,L"AxisDisplayInfo");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                            ::__l2::Name);
  if (iVar1 < 1) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"AxisDisplayInfo",L"UnsupportedDisplayName",L"Unsupported");
  }
  else {
    pIVar2 = IModularFeatures::Get();
    if (*piVar5 < `public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                        ::__l2::Name,L"AxisDisplayInfo");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))
                      (pIVar2,`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                              ::__l2::Name,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// GetEnsureHandler @ 141825d50

TFunction<bool___cdecl(FEnsureHandlerArgs_const_&)> * __cdecl
GetEnsureHandler(TFunction<bool___cdecl(FEnsureHandlerArgs_const_&)> *__return_storage_ptr__)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xa80);
  *(longlong *)__return_storage_ptr__ = lVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 0xa90);
    if (*(undefined8 **)(lVar1 + 0xaa8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(lVar1 + 0xaa8);
    }
    (**(code **)*puVar3)();
  }
  return __return_storage_ptr__;
}

// GetPersistentLinearAllocator @ 141826800

/* WARNING: Enum "Type": Some values do not have unique names */

FLinearAllocator * __cdecl GetPersistentLinearAllocator(void)

{
  ulong64 uVar1;
  ulong64 uVar2;
  FPlatformVirtualMemoryBlock *pFVar3;
  FPlatformVirtualMemoryBlock local_18;
  
  if ((_TSS0 <= *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c
                        )) || (_Init_thread_header(&_TSS0), _TSS0 != -1)) {
    return (FLinearAllocator *)&GPersistentLinearAllocator;
  }
  uVar1 = BuildSettings::GetPersistentAllocatorReserveSize();
  uVar1 = uVar1 + 0x10000;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GPersistentLinearAllocator,4000);
  GPersistentLinearAllocator._48_8_ = GPersistentLinearAllocator._48_8_ & 0xffffffff00000000;
  GPersistentLinearAllocator._40_8_ = 0;
  GPersistentLinearAllocator._64_8_ = 0;
  GPersistentLinearAllocator._72_8_ = 0;
  GPersistentLinearAllocator._56_8_ = uVar1;
  if (uVar1 == 0) {
    if (2 < (byte)LogMemory._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
  }
  else {
    uVar2 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment();
    pFVar3 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::AllocateVirtual
                       (&local_18,uVar1,uVar2);
    GPersistentLinearAllocator._40_8_ = *(undefined8 *)pFVar3;
    GPersistentLinearAllocator._48_8_ = *(undefined8 *)&pFVar3->field_0x8;
    if (GPersistentLinearAllocator._40_8_ != 0) goto LAB_14182690f;
    if (2 < (byte)LogMemory._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
  }
  GPersistentLinearAllocator._56_8_ = 0;
LAB_14182690f:
  GPersistentLinearAllocatorExtends.Address = GPersistentLinearAllocator._40_8_;
  GPersistentLinearAllocatorExtends.Size = GPersistentLinearAllocator._56_8_;
  atexit(`GetPersistentLinearAllocator'::__l2::
         _dynamic_atexit_destructor_for__GPersistentLinearAllocator__);
  _Init_thread_footer(&_TSS0);
  return (FLinearAllocator *)&GPersistentLinearAllocator;
}

// GetRotationAxisNameShort @ 141826ef0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __cdecl
AxisDisplayInfo::GetRotationAxisNameShort(FText *__return_storage_ptr__,Type param_1)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  Type local_res10 [2];
  Type *local_res18;
  
  local_res10[0] = param_1;
  pIVar2 = IModularFeatures::Get();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::
                __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                      ::__l2::Name,L"AxisDisplayInfo");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                            ::__l2::Name);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    if (*piVar5 < `public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                        ::__l2::Name,L"AxisDisplayInfo");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))
                      (pIVar2,`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                              ::__l2::Name,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x40))(plVar4,__return_storage_ptr__,local_res10[0]);
    return __return_storage_ptr__;
  }
  if (local_res10[0] == X) {
    pwVar7 = L"Roll";
    pwVar6 = L"Roll_ToolTipTextFormat";
  }
  else if (local_res10[0] == Y) {
    pwVar7 = L"Pitch";
    pwVar6 = L"Pitch_ToolTipTextFormat";
  }
  else if (local_res10[0] == Z) {
    pwVar7 = L"Yaw";
    pwVar6 = L"Yaw_ToolTipTextFormat";
  }
  else if (local_res10[0] == Forward) {
    pwVar7 = L"Forward";
    pwVar6 = L"Forward_ToolTipTextFormat";
  }
  else if (local_res10[0] == Left) {
    pwVar7 = L"Left";
    pwVar6 = L"Left_ToolTipTextFormat";
  }
  else if (local_res10[0] == Up) {
    pwVar7 = L"Up";
    pwVar6 = L"Up_ToolTipTextFormat";
  }
  else {
    local_res18 = local_res10;
    `AxisDisplayInfo::GetRotationAxisNameShort'::__l2::<lambda_1>::operator()(&local_res18);
    pwVar7 = L"?";
    pwVar6 = L"UnsupportedRotationAxisNameShort";
  }
  FText::AsLocalizable_Advanced_LocText(__return_storage_ptr__,L"AxisDisplayInfo",pwVar6,pwVar7);
  return __return_storage_ptr__;
}

// GetRotationAxisToolTip @ 1418270f0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __cdecl AxisDisplayInfo::GetRotationAxisToolTip(FText *__return_storage_ptr__,Type param_1)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  
  pIVar2 = IModularFeatures::Get();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::
                __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                      ::__l2::Name,L"AxisDisplayInfo");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                            ::__l2::Name);
  if (iVar1 < 1) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"AxisDisplayInfo",L"UnsupportedRotationAxisToolTip",L"?");
  }
  else {
    pIVar2 = IModularFeatures::Get();
    if (*piVar5 < `public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                        ::__l2::Name,L"AxisDisplayInfo");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))
                      (pIVar2,`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                              ::__l2::Name,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x30))(plVar4,__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// GetTransformAxisSwizzle @ 141827da0

TIntVector4<int> * __cdecl
AxisDisplayInfo::GetTransformAxisSwizzle(TIntVector4<int> *__return_storage_ptr__)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  
  pIVar2 = IModularFeatures::Get();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::
                __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                      ::__l2::Name,L"AxisDisplayInfo");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    if (*piVar5 < `public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                        ::__l2::Name,L"AxisDisplayInfo");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))
                      (pIVar2,`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                              ::__l2::Name,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x48))(plVar4,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 2;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 3;
  return __return_storage_ptr__;
}

// SetEnsureHandler @ 1418327a0

TFunction<bool___cdecl(FEnsureHandlerArgs_const_&)> * __cdecl
SetEnsureHandler(TFunction<bool___cdecl(FEnsureHandlerArgs_const_&)> *__return_storage_ptr__,
                TFunction<bool___cdecl(FEnsureHandlerArgs_const_&)> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xa80);
  *(longlong *)__return_storage_ptr__ = lVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  if (lVar2 != 0) {
    puVar17 = (undefined8 *)(lVar1 + 0xa90);
    if (*(undefined8 **)(lVar1 + 0xaa8) != (undefined8 *)0x0) {
      puVar17 = *(undefined8 **)(lVar1 + 0xaa8);
    }
    (**(code **)*puVar17)();
  }
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar14 = *(undefined8 *)&param_1->field_0x8;
  uVar3 = *(undefined4 *)(lVar1 + 0xa80);
  uVar4 = *(undefined4 *)(lVar1 + 0xa84);
  uVar5 = *(undefined4 *)(lVar1 + 0xa88);
  uVar6 = *(undefined4 *)(lVar1 + 0xa8c);
  uVar7 = *(undefined4 *)(lVar1 + 0xa90);
  uVar8 = *(undefined4 *)(lVar1 + 0xa94);
  uVar9 = *(undefined4 *)(lVar1 + 0xa98);
  uVar10 = *(undefined4 *)(lVar1 + 0xa9c);
  uVar15 = *(undefined8 *)(lVar1 + 0xaa0);
  uVar16 = *(undefined8 *)(lVar1 + 0xaa8);
  *(undefined8 *)(lVar1 + 0xa80) = *(undefined8 *)param_1;
  *(undefined8 *)(lVar1 + 0xa88) = uVar14;
  uVar11 = *(undefined4 *)&param_1->field_0x14;
  uVar12 = *(undefined4 *)&param_1->field_0x18;
  uVar13 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)(lVar1 + 0xa90) = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)(lVar1 + 0xa94) = uVar11;
  *(undefined4 *)(lVar1 + 0xa98) = uVar12;
  *(undefined4 *)(lVar1 + 0xa9c) = uVar13;
  uVar11 = *(undefined4 *)&param_1->field_0x24;
  uVar12 = *(undefined4 *)&param_1->field_0x28;
  uVar13 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)(lVar1 + 0xaa0) = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)(lVar1 + 0xaa4) = uVar11;
  *(undefined4 *)(lVar1 + 0xaa8) = uVar12;
  *(undefined4 *)(lVar1 + 0xaac) = uVar13;
  *(undefined4 *)param_1 = uVar3;
  *(undefined4 *)&param_1->field_0x4 = uVar4;
  *(undefined4 *)&param_1->field_0x8 = uVar5;
  *(undefined4 *)&param_1->field_0xc = uVar6;
  *(undefined4 *)&param_1->field_0x10 = uVar7;
  *(undefined4 *)&param_1->field_0x14 = uVar8;
  *(undefined4 *)&param_1->field_0x18 = uVar9;
  *(undefined4 *)&param_1->field_0x1c = uVar10;
  *(undefined8 *)&param_1->field_0x20 = uVar15;
  *(undefined8 *)&param_1->field_0x28 = uVar16;
  if (*(longlong *)param_1 != 0) {
    plVar18 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar18 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  return __return_storage_ptr__;
}

// StaticFailDebug @ 1418336b0

void __cdecl
StaticFailDebug(wchar_t *param_1,char *param_2,int param_3,void *param_4,wchar_t *param_5)

{
  StaticFailDebugV(param_1,"",param_2,param_3,false,param_4,param_5,(wchar_t *)0x0,(char *)0x0);
  return;
}

// StaticFailDebugV @ 141833700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
StaticFailDebugV(wchar_t *param_1,char *param_2,char *param_3,int param_4,bool param_5,void *param_6
                ,wchar_t *param_7,wchar_t *param_8,char *param_9)

{
  ulonglong uVar1;
  atomic<unsigned___int64> aVar2;
  ulonglong uVar3;
  FWordMutex FVar4;
  FErrorHistWriter FVar5;
  int iVar6;
  int iVar7;
  FErrorHistWriter FVar8;
  size_t sVar9;
  ulong64 *puVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_10a8 [32];
  undefined8 local_1088;
  char *local_1080;
  FErrorHistWriter local_1078;
  int local_1074;
  char *local_1070;
  void *local_1068;
  char local_1058;
  undefined1 local_1057 [4095];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x141833717;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_10a8;
  local_1068 = param_6;
  local_1070 = param_9;
  local_1074 = param_4;
  if (GPrintScriptCallStackFn != (_func___cdecl_void *)0x0) {
    (*GPrintScriptCallStackFn)();
  }
  local_1058 = '\0';
  memset(local_1057,0,0xfff);
  local_1078.Index = 0;
  LOCK();
  bVar13 = FailDebugMutex.State == (atomic<unsigned___int64>)0x0;
  if (bVar13) {
    FailDebugMutex.State = (atomic<unsigned___int64>)0x1;
  }
  UNLOCK();
  if (!bVar13) {
    UE::FWordMutex::LockSlow(&FailDebugMutex);
  }
  sVar9 = wcslen(param_1);
  iVar6 = (int)sVar9 + 1;
  iVar12 = 0;
  iVar7 = 0x4000;
  if (iVar6 < 0x4000) {
    iVar7 = iVar6;
  }
  if (1 < iVar7) {
    wcsncpy(GErrorHist,param_1,(longlong)iVar7 - 1);
    *(undefined2 *)(&DAT_154efc0fe + (longlong)iVar7 * 2) = 0;
    iVar12 = iVar7 + -1;
    local_1078.Index = iVar12;
  }
  sVar9 = strlen(param_2);
  iVar7 = (int)sVar9;
  if ((iVar7 != 0) && (iVar12 + iVar7 < 0x4000)) {
    FGenericPlatformString::Convert<char,wchar_t>(GErrorHist + iVar12,iVar7,param_2,iVar7);
    local_1078.Index = iVar12 + iVar7;
  }
  FErrorHistWriter::Appendf(&local_1078,L" [File:%hs] [Line: %i] \n");
  FVar5.Index = local_1078.Index;
  if (param_7 != (wchar_t *)0x0) {
    lVar11 = (longlong)local_1078.Index;
    iVar12 = 0x4000 - local_1078.Index;
    sVar9 = wcslen(param_7);
    iVar7 = (int)sVar9 + 1;
    if (iVar7 < iVar12) {
      iVar12 = iVar7;
    }
    if (1 < iVar12) {
      wcsncpy(GErrorHist + lVar11,param_7,(longlong)iVar12 - 1);
      *(undefined2 *)(&DAT_154efc0fe + (longlong)iVar12 * 2 + lVar11 * 2) = 0;
      local_1078.Index = FVar5.Index + -1 + iVar12;
    }
    FErrorHistWriter::TerminateWith(&local_1078,L"\n");
  }
  FVar5.Index = local_1078.Index;
  if (param_8 != (wchar_t *)0x0) {
    lVar11 = (longlong)local_1078.Index;
    iVar12 = 0x4000 - local_1078.Index;
    puVar10 = __local_stdio_printf_options();
    local_1080 = local_1070;
    local_1088 = 0;
    iVar12 = __stdio_common_vswprintf(*puVar10,GErrorHist + lVar11,(longlong)iVar12,param_8);
    if (iVar12 < 0) {
      iVar12 = -1;
    }
    FVar8.Index = 0x3fff;
    if (FVar5.Index < 0x3fff) {
      FVar8.Index = FVar5.Index;
    }
    local_1078.Index = iVar12 + FVar5.Index;
    if (iVar12 + FVar5.Index < FVar8.Index) {
      local_1078.Index = FVar8.Index;
    }
    FErrorHistWriter::TerminateWith(&local_1078,L"\n");
  }
  FGenericPlatformMisc::LowLevelOutputDebugString(GErrorHist);
  if (local_1058 != '\0') {
    sVar9 = strlen(&local_1058);
    iVar12 = (int)sVar9;
    if (iVar12 != 0) {
      iVar7 = iVar12 + local_1078.Index;
      if (iVar7 < 0x4000) {
        FGenericPlatformString::Convert<char,wchar_t>
                  (GErrorHist + local_1078.Index,iVar12,&local_1058,iVar12);
        local_1078.Index = iVar7;
      }
    }
    FErrorHistWriter::TerminateWith(&local_1078,L"\n");
  }
  FErrorHistWriter::TerminateWith(&local_1078,L"\r\n\r\n");
  if (GError != (FOutputDeviceError *)0x0) {
    GError->ProgramCounter = local_1068;
  }
  FErrorHistWriter::TerminateWith(&local_1078,L"");
  FVar4 = FailDebugMutex;
  LOCK();
  aVar2 = FailDebugMutex.State + -1;
  UNLOCK();
  uVar3 = (ulonglong)FailDebugMutex.State & 2;
  uVar1 = (ulonglong)FailDebugMutex.State & 0xfffffffffffffffc;
  FailDebugMutex.State = aVar2;
  if ((uVar1 != 0) && (uVar3 == 0)) {
    UE::FWordMutex::UnlockSlow(&FailDebugMutex,(ulong64)FVar4.State);
  }
  return;
}

// StaticFailDebugV @ 141833a10

void __cdecl
StaticFailDebugV(wchar_t *param_1,char *param_2,int param_3,void *param_4,wchar_t *param_5,
                char *param_6)

{
  StaticFailDebugV(param_1,"",param_2,param_3,false,param_4,(wchar_t *)0x0,param_5,param_6);
  return;
}

// SumDurations @ 141833bc0

double __cdecl
SumDurations(TMap<FString,FAutomationTestExecutionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExecutionInfo,0>_>
             *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  double dVar3;
  int iVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar13 = 0;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_141833c6d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar9 = local_res10 + -1 + iVar15;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_141833c6d:
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar13);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    dVar6 = (double)(*pcVar5)();
    return dVar6;
  }
  uVar8 = *(uint *)&param_1->field_0x28;
  dVar6 = 0.0;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      dVar6 = 0.0;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_141833d70;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    dVar6 = 0.0;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_141833d70:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExecutionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    dVar3 = *(double *)((longlong)TStack_60.CurrentBitIndex * 0x80 + 0x48 + *(longlong *)param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    dVar6 = dVar6 + dVar3;
  }
  return dVar6;
}

// UseForwardRightUpDisplayNames @ 14183a660

bool __cdecl AxisDisplayInfo::UseForwardRightUpDisplayNames(void)

{
  undefined1 uVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  
  pIVar3 = IModularFeatures::Get();
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar6 < `public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::
                __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                      ::__l2::Name,L"AxisDisplayInfo");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))
                    (pIVar3,`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                            ::__l2::Name);
  if (0 < iVar2) {
    pIVar3 = IModularFeatures::Get();
    if (*piVar6 < `public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                        ::__l2::Name,L"AxisDisplayInfo");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))
                      (pIVar3,`public:_static_class_FName___cdecl_IAxisDisplayInfo::GetModularFeatureName(void)'
                              ::__l2::Name,0);
    plVar5 = (longlong *)(lVar4 + -8);
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00014183a6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar5 + 0x50))();
    return (bool)uVar1;
  }
  return false;
}

// VectorMatrixMultiply @ 14183a780

void __cdecl
VectorMatrixMultiply(TMatrix<float> *param_1,TMatrix<float> *param_2,TMatrix<float> *param_3)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar1 = param_2->M[0][0];
  fVar2 = param_2->M[0][1];
  fVar3 = param_2->M[0][2];
  fVar4 = param_2->M[0][3];
  fVar5 = param_2->M[1][0];
  fVar6 = param_2->M[1][1];
  fVar7 = param_2->M[1][2];
  fVar8 = param_2->M[1][3];
  fVar9 = param_2->M[2][0];
  fVar10 = param_2->M[2][1];
  fVar11 = param_2->M[2][2];
  fVar12 = param_2->M[2][3];
  fVar13 = param_3->M[1][0];
  fVar14 = param_3->M[1][1];
  fVar15 = param_3->M[1][2];
  fVar16 = param_3->M[1][3];
  fVar17 = param_3->M[0][0];
  fVar18 = param_3->M[0][1];
  fVar19 = param_3->M[0][2];
  fVar20 = param_3->M[0][3];
  fVar21 = param_3->M[2][0];
  fVar22 = param_3->M[2][1];
  fVar23 = param_3->M[2][2];
  fVar24 = param_3->M[2][3];
  fVar25 = param_3->M[3][0];
  fVar26 = param_3->M[3][1];
  fVar27 = param_3->M[3][2];
  fVar28 = param_3->M[3][3];
  fVar29 = param_2->M[3][0];
  fVar30 = param_2->M[3][1];
  fVar31 = param_2->M[3][2];
  fVar32 = param_2->M[3][3];
  param_1->M[0][0] = fVar2 * fVar13 + fVar1 * fVar17 + fVar3 * fVar21 + fVar4 * fVar25;
  param_1->M[0][1] = fVar2 * fVar14 + fVar1 * fVar18 + fVar3 * fVar22 + fVar4 * fVar26;
  param_1->M[0][2] = fVar2 * fVar15 + fVar1 * fVar19 + fVar3 * fVar23 + fVar4 * fVar27;
  param_1->M[0][3] = fVar2 * fVar16 + fVar1 * fVar20 + fVar3 * fVar24 + fVar4 * fVar28;
  param_1->M[1][0] = fVar6 * fVar13 + fVar5 * fVar17 + fVar7 * fVar21 + fVar8 * fVar25;
  param_1->M[1][1] = fVar6 * fVar14 + fVar5 * fVar18 + fVar7 * fVar22 + fVar8 * fVar26;
  param_1->M[1][2] = fVar6 * fVar15 + fVar5 * fVar19 + fVar7 * fVar23 + fVar8 * fVar27;
  param_1->M[1][3] = fVar6 * fVar16 + fVar5 * fVar20 + fVar7 * fVar24 + fVar8 * fVar28;
  param_1->M[2][0] = fVar10 * fVar13 + fVar9 * fVar17 + fVar11 * fVar21 + fVar12 * fVar25;
  param_1->M[2][1] = fVar10 * fVar14 + fVar9 * fVar18 + fVar11 * fVar22 + fVar12 * fVar26;
  param_1->M[2][2] = fVar10 * fVar15 + fVar9 * fVar19 + fVar11 * fVar23 + fVar12 * fVar27;
  param_1->M[2][3] = fVar10 * fVar16 + fVar9 * fVar20 + fVar11 * fVar24 + fVar12 * fVar28;
  param_1->M[3][0] = fVar30 * fVar13 + fVar29 * fVar17 + fVar31 * fVar21 + fVar32 * fVar25;
  param_1->M[3][1] = fVar30 * fVar14 + fVar29 * fVar18 + fVar31 * fVar22 + fVar32 * fVar26;
  param_1->M[3][2] = fVar30 * fVar15 + fVar29 * fVar19 + fVar31 * fVar23 + fVar32 * fVar27;
  param_1->M[3][3] = fVar30 * fVar16 + fVar29 * fVar20 + fVar31 * fVar24 + fVar32 * fVar28;
  return;
}

// VectorMatrixMultiply @ 14183a8c0

void __cdecl
VectorMatrixMultiply(TMatrix<double> *param_1,TMatrix<double> *param_2,TMatrix<double> *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dStack_e0;
  double dStack_d0;
  double dStack_c0;
  double dStack_b0;
  
  dVar33 = param_3->M[0][0];
  dVar34 = param_3->M[0][1];
  auVar1 = *(undefined1 (*) [16])(param_2->M[3] + 2);
  dVar19 = param_2->M[0][0];
  dVar20 = param_2->M[0][1];
  dVar21 = param_3->M[1][0];
  dVar22 = param_3->M[1][1];
  dVar35 = param_3->M[0][2];
  dVar36 = param_3->M[0][3];
  dVar37 = param_3->M[1][2];
  dVar38 = param_3->M[1][3];
  dVar23 = param_2->M[0][2];
  dVar24 = param_2->M[0][3];
  dVar39 = param_3->M[2][0];
  dVar40 = param_3->M[2][1];
  dVar25 = param_2->M[1][0];
  dVar26 = param_2->M[1][1];
  dVar27 = param_2->M[1][2];
  dVar28 = param_2->M[1][3];
  dVar29 = param_2->M[2][0];
  dVar30 = param_2->M[2][1];
  dVar31 = param_2->M[2][2];
  dVar32 = param_2->M[2][3];
  dVar41 = param_3->M[2][2];
  dVar42 = param_3->M[2][3];
  dVar43 = param_3->M[3][0];
  dVar44 = param_3->M[3][1];
  dVar45 = param_3->M[3][2];
  dVar46 = param_3->M[3][3];
  auVar2 = *(undefined1 (*) [16])param_2->M[3];
  dVar7 = auVar2._0_8_;
  dVar6 = auVar2._8_8_;
  auVar4._8_4_ = auVar2._8_4_;
  auVar4._0_8_ = dVar6;
  auVar4._12_4_ = auVar2._12_4_;
  dVar3 = auVar1._0_8_;
  auVar5._8_4_ = auVar1._0_4_;
  auVar5._0_8_ = dVar3;
  auVar5._12_4_ = auVar1._4_4_;
  dVar11 = auVar1._8_8_;
  auVar8._8_4_ = auVar2._0_4_;
  auVar8._0_8_ = dVar7;
  auVar8._12_4_ = auVar2._4_4_;
  auVar2._8_4_ = auVar1._8_4_;
  auVar2._0_8_ = dVar11;
  auVar2._12_4_ = auVar1._12_4_;
  dVar16 = dVar22 * dVar20 + dVar34 * dVar19 + dVar40 * dVar23 + dVar44 * dVar24;
  dVar12 = dVar38 * dVar20 + dVar36 * dVar19 + dVar42 * dVar23 + dVar46 * dVar24;
  auVar13._8_4_ = SUB84(dVar16,0);
  auVar13._0_8_ = dVar21 * dVar20 + dVar33 * dVar19 + dVar39 * dVar23 + dVar43 * dVar24;
  auVar13._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  *(undefined1 (*) [16])param_1->M[0] = auVar13;
  auVar1._8_4_ = SUB84(dVar12,0);
  auVar1._0_8_ = dVar37 * dVar20 + dVar35 * dVar19 + dVar41 * dVar23 + dVar45 * dVar24;
  auVar1._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])(param_1->M[0] + 2) = auVar1;
  dVar12 = dVar22 * dVar26 + dVar34 * dVar25 + dVar40 * dVar27 + dVar44 * dVar28;
  auVar9._8_4_ = SUB84(dVar12,0);
  auVar9._0_8_ = dVar21 * dVar26 + dVar33 * dVar25 + dVar39 * dVar27 + dVar43 * dVar28;
  auVar9._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])param_1->M[1] = auVar9;
  dStack_e0 = auVar4._8_8_;
  dStack_c0 = auVar5._8_8_;
  dVar12 = dVar38 * dVar26 + dVar36 * dVar25 + dVar42 * dVar27 + dVar46 * dVar28;
  auVar14._8_4_ = SUB84(dVar12,0);
  auVar14._0_8_ = dVar37 * dVar26 + dVar35 * dVar25 + dVar41 * dVar27 + dVar45 * dVar28;
  auVar14._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])(param_1->M[1] + 2) = auVar14;
  dStack_d0 = auVar8._8_8_;
  dStack_b0 = auVar2._8_8_;
  dVar12 = dVar22 * dVar30 + dVar34 * dVar29 + dVar40 * dVar31 + dVar44 * dVar32;
  auVar10._8_4_ = SUB84(dVar12,0);
  auVar10._0_8_ = dVar21 * dVar30 + dVar33 * dVar29 + dVar39 * dVar31 + dVar43 * dVar32;
  auVar10._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])param_1->M[2] = auVar10;
  dVar16 = dVar22 * dStack_e0 + dVar34 * dStack_d0 + dVar40 * dStack_c0 + dVar44 * dStack_b0;
  dVar12 = dVar38 * dVar30 + dVar36 * dVar29 + dVar42 * dVar31 + dVar46 * dVar32;
  dVar19 = dVar38 * dStack_e0 + dVar36 * dStack_d0 + dVar42 * dStack_c0 + dVar46 * dStack_b0;
  auVar15._8_4_ = SUB84(dVar12,0);
  auVar15._0_8_ = dVar37 * dVar30 + dVar35 * dVar29 + dVar41 * dVar31 + dVar45 * dVar32;
  auVar15._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])(param_1->M[2] + 2) = auVar15;
  auVar17._8_4_ = SUB84(dVar16,0);
  auVar17._0_8_ = dVar21 * dVar6 + dVar33 * dVar7 + dVar39 * dVar3 + dVar43 * dVar11;
  auVar17._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  *(undefined1 (*) [16])param_1->M[3] = auVar17;
  auVar18._8_4_ = SUB84(dVar19,0);
  auVar18._0_8_ = dVar37 * dVar6 + dVar35 * dVar7 + dVar41 * dVar3 + dVar45 * dVar11;
  auVar18._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  *(undefined1 (*) [16])(param_1->M[3] + 2) = auVar18;
  return;
}

// appCompressMemoryBoundGZIP @ 14183b050

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl appCompressMemoryBoundGZIP(int param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_int___cdecl_appCompressMemoryBoundGZIP(int)_::_2_::FStat_STAT_appCompressMemoryBoundGZIP>
  FVar7;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  bool bVar12;
  LARGE_INTEGER local_res10;
  FName local_res18;
  wchar_t *in_stack_ffffffffffffff20;
  FStatMessage local_98;
  undefined1 local_88 [48];
  code *local_58;
  code *local_50;
  undefined8 local_48;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId222,"appCompressMemoryBoundGZIP",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
               ,0xde);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId222);
  }
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_appCompressMemoryBoundGZIP ==
        (FThreadSafeStaticStat<_int___cdecl_appCompressMemoryBoundGZIP(int)_::_2_::FStat_STAT_appCompressMemoryBoundGZIP>
         )0x0) {
      pFVar6 = FName::FName((FName *)&local_res10.s,"STAT_appCompressMemoryBoundGZIP");
      in_stack_ffffffffffffff20 = L"Compression";
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_appCompressMemoryBoundGZIP,*pFVar6,
                 L"Compress Memory Bound GZIP","STATGROUP_Compression","STATCAT_Advanced",
                 L"Compression",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar7 = StatPtr_STAT_appCompressMemoryBoundGZIP;
  if (StatPtr_STAT_appCompressMemoryBoundGZIP ==
      (FThreadSafeStaticStat<_int___cdecl_appCompressMemoryBoundGZIP(int)_::_2_::FStat_STAT_appCompressMemoryBoundGZIP>
       )0x0) {
    pFVar6 = FName::FName(&local_res18,"STAT_appCompressMemoryBoundGZIP");
    in_stack_ffffffffffffff20 = L"Compression";
    FVar7 = (FThreadSafeStaticStat<_int___cdecl_appCompressMemoryBoundGZIP(int)_::_2_::FStat_STAT_appCompressMemoryBoundGZIP>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_appCompressMemoryBoundGZIP,
                         *pFVar6,L"Compress Memory Bound GZIP","STATGROUP_Compression",
                         "STATCAT_Advanced",L"Compression",true,true,ST_int64,true,false,MCR_Invalid
                        );
  }
  FVar10 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar9.Value;
        local_res10.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
                   ,0xdf);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar9.Value;
      local_res10.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_14183b224;
    }
  }
  bVar3 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14183b224:
  local_58 = zalloc;
  local_48 = 0;
  local_50 = zfree;
  deflateInit2_(local_88,0xffffffff,8,0x1f,9,
                (ulonglong)in_stack_ffffffffffffff20 & 0xffffffff00000000,"1.3",0x58);
  iVar5 = deflateBound(local_88,param_1);
  deflateEnd(local_88);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_98.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_98.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res10);
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_98.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_98.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_98.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_98.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_98);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return iVar5 + 0xc;
}

// appCompressMemoryGZIP @ 14183b450

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
appCompressMemoryGZIP(void *param_1,long64 *param_2,void *param_3,long64 param_4,int param_5)

{
  int *piVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_bool___cdecl_appCompressMemoryGZIP(void_*,__int64_&,void_const_*,__int64,int)_::_2_::FStat_STAT_appCompressMemoryGZIP>
  FVar8;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar9;
  FNameEntryId FVar10;
  FNameEntryId FVar11;
  FName FVar12;
  bool bVar13;
  bool bVar14;
  LARGE_INTEGER local_res20;
  wchar_t *in_stack_ffffffffffffff10;
  FStatMessage local_a8;
  void *local_98;
  undefined4 local_90;
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId159,"appCompressMemoryGZIP",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
               ,0x9f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId159);
  }
  FVar10.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_appCompressMemoryGZIP ==
        (FThreadSafeStaticStat<_bool___cdecl_appCompressMemoryGZIP(void_*,__int64_&,void_const_*,__int64,int)_::_2_::FStat_STAT_appCompressMemoryGZIP>
         )0x0) {
      pFVar7 = FName::FName((FName *)&local_res20.s,"STAT_appCompressMemoryGZIP");
      in_stack_ffffffffffffff10 = L"Compression";
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_appCompressMemoryGZIP,*pFVar7,
                 L"Compress Memory GZIP","STATGROUP_Compression","STATCAT_Advanced",L"Compression",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar8 = StatPtr_STAT_appCompressMemoryGZIP;
  if (StatPtr_STAT_appCompressMemoryGZIP ==
      (FThreadSafeStaticStat<_bool___cdecl_appCompressMemoryGZIP(void_*,__int64_&,void_const_*,__int64,int)_::_2_::FStat_STAT_appCompressMemoryGZIP>
       )0x0) {
    pFVar7 = FName::FName((FName *)&local_a8,"STAT_appCompressMemoryGZIP");
    in_stack_ffffffffffffff10 = L"Compression";
    FVar8 = (FThreadSafeStaticStat<_bool___cdecl_appCompressMemoryGZIP(void_*,__int64_&,void_const_*,__int64,int)_::_2_::FStat_STAT_appCompressMemoryGZIP>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_appCompressMemoryGZIP,*pFVar7,
                         L"Compress Memory GZIP","STATGROUP_Compression","STATCAT_Advanced",
                         L"Compression",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar9 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar9 == 0)) {
LAB_14183b609:
    bVar4 = false;
    FVar12.ComparisonIndex.Value = 0;
    FVar12.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.s.LowPart = FVar11.Value;
        local_res20.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
                   ,0xa0);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14183b609;
    local_res20.s.LowPart = FVar11.Value;
    local_res20.s.HighPart = uVar9;
    FThreadStats::AddMessage(FVar12,CycleScopeStart);
    bVar4 = true;
    FVar10.Value = FVar11.Value;
  }
  local_68 = zalloc;
  local_58 = 0;
  local_60 = zfree;
  if ((((param_4 == (param_4 & 0xffffffffU)) && (-1 < param_4)) &&
      (uVar2 = *param_2, uVar2 == (uVar2 & 0xffffffff))) && (-1 < (longlong)uVar2)) {
    local_90 = (undefined4)param_4;
    local_98 = param_3;
    iVar6 = deflateInit2_(&local_98,param_5,8,0x1f,9,
                          (ulonglong)in_stack_ffffffffffffff10 & 0xffffffff00000000,"1.3",0x58);
    if (iVar6 == 0) {
      local_80 = (undefined4)*param_2;
      local_88 = param_1;
      do {
        iVar6 = deflate(&local_98,4);
      } while (iVar6 == 0);
      bVar14 = iVar6 == 1;
      *param_2 = (ulonglong)local_7c;
      iVar6 = deflateEnd(&local_98);
      if ((iVar6 != 0) && (2 < (byte)LogCompression._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_shut__1506920a8,
                   (FLogCategoryBase *)&LogCompression);
      }
      goto LAB_14183b74d;
    }
    if (1 < (byte)LogCompression._0_1_) {
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogCompression);
    }
  }
  else if (1 < (byte)LogCompression._0_1_) {
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogCompression);
  }
  bVar14 = false;
LAB_14183b74d:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar12 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_a8.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_a8.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res20);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_a8);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar14;
}

// appCompressMemoryZLIB @ 14183b8e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
appCompressMemoryZLIB
          (void *param_1,long64 *param_2,void *param_3,long64 param_4,int param_5,int param_6)

{
  int *piVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_bool___cdecl_appCompressMemoryZLIB(void_*,__int64_&,void_const_*,__int64,int,int)_::_2_::FStat_STAT_appCompressMemoryZLIB>
  FVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar13;
  FStaticBasicLogRecord *pFVar14;
  FNameEntryId FVar15;
  FName FVar16;
  bool bVar17;
  bool bVar18;
  undefined1 local_d8 [8];
  LARGE_INTEGER local_d0;
  FColor_u_0 local_c8 [2];
  FName local_c0;
  FName local_b8;
  FStatMessage local_a8;
  void *local_98;
  undefined4 local_90;
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  FName local_38;
  FName local_30;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId91,"appCompressMemoryZLIB",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
               ,0x5b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId91);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_appCompressMemoryZLIB ==
        (FThreadSafeStaticStat<_bool___cdecl_appCompressMemoryZLIB(void_*,__int64_&,void_const_*,__int64,int,int)_::_2_::FStat_STAT_appCompressMemoryZLIB>
         )0x0) {
      pFVar11 = FName::FName(&local_38,"STAT_appCompressMemoryZLIB");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_appCompressMemoryZLIB,*pFVar11,
                 L"Compress Memory ZLIB","STATGROUP_Compression","STATCAT_Advanced",L"Compression",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar12 = StatPtr_STAT_appCompressMemoryZLIB;
  if (StatPtr_STAT_appCompressMemoryZLIB ==
      (FThreadSafeStaticStat<_bool___cdecl_appCompressMemoryZLIB(void_*,__int64_&,void_const_*,__int64,int,int)_::_2_::FStat_STAT_appCompressMemoryZLIB>
       )0x0) {
    pFVar11 = FName::FName(&local_30,"STAT_appCompressMemoryZLIB");
    FVar12 = (FThreadSafeStaticStat<_bool___cdecl_appCompressMemoryZLIB(void_*,__int64_&,void_const_*,__int64,int,int)_::_2_::FStat_STAT_appCompressMemoryZLIB>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_appCompressMemoryZLIB,*pFVar11,
                          L"Compress Memory ZLIB","STATGROUP_Compression","STATCAT_Advanced",
                          L"Compression",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  bVar4 = false;
  bVar6 = false;
  FVar16 = *(FName *)FVar12;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar13 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar13 == 0)) {
LAB_14183baa6:
    bVar5 = false;
    FVar16 = local_b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c0.ComparisonIndex.Value = FVar15.Value;
        local_c0.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
                   ,0x5c);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14183baa6;
    local_d0.s.LowPart = FVar15.Value;
    local_d0.s.HighPart = uVar13;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar5 = true;
  }
  iVar10 = param_6;
  if (param_6 < -1) {
    param_6 = param_6 & 0xffffff00;
    `appCompressMemoryZLIB'::__l2::<lambda_1>::operator()(&param_6);
  }
  else if (9 < param_6) {
    local_d8[0] = 0;
    `appCompressMemoryZLIB'::__l2::<lambda_2>::operator()(local_d8);
  }
  iVar9 = 9;
  if (iVar10 < 9) {
    iVar9 = iVar10;
  }
  iVar10 = -1;
  if (-1 < iVar9) {
    iVar10 = iVar9;
  }
  if ((param_5 == 0) || (param_5 == 0xf)) {
    uVar2 = *param_2;
    if ((uVar2 == (uVar2 & 0xffffffff)) &&
       (((-1 < (longlong)uVar2 && (param_4 == (param_4 & 0xffffffffU))) && (-1 < param_4)))) {
      param_5 = (int)uVar2;
      iVar10 = compress2(param_1,&param_5,param_3,param_4 & 0xffffffffU,iVar10);
      bVar18 = iVar10 == 0;
      *param_2 = (ulonglong)(uint)param_5;
      goto LAB_14183bcea;
    }
    if (1 < (byte)LogCompression._0_1_) {
      pFVar14 = &LOG_Static;
      goto LAB_14183bcdb;
    }
  }
  else {
    uVar2 = *param_2;
    if (((uVar2 == (uVar2 & 0xffffffff)) && (-1 < (longlong)uVar2)) &&
       ((param_4 == (param_4 & 0xffffffffU) && (-1 < param_4)))) {
      bVar18 = false;
      local_68 = zalloc;
      local_80 = (undefined4)uVar2;
      local_60 = zfree;
      local_58 = 0;
      local_98 = param_3;
      local_90 = (int)param_4;
      local_88 = param_1;
      iVar10 = deflateInit2_(&local_98);
      if (iVar10 == 0) {
        iVar10 = deflate(&local_98);
        if (iVar10 == 1) {
          *param_2 = (ulonglong)local_7c;
          iVar10 = deflateEnd(&local_98);
          if (iVar10 == 0) {
            bVar18 = true;
          }
          else {
            bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_7798646688016498546>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
                               ,0x8e,"0 == deflateEnd(&stream)");
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
          }
        }
        else {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7798646688016498549>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
                             ,0x8b,"1 == deflate(&stream, 4)");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          deflateEnd(&local_98);
        }
      }
      else {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7798646688016498551>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
                           ,0x89,
                           "0 == deflateInit2_((&stream),(CompLevel),(8),(BitWindow),(9), (0), \"1.3\", (int)sizeof(z_stream))"
                          );
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
      }
      goto LAB_14183bcea;
    }
    if (1 < (byte)LogCompression._0_1_) {
      pFVar14 = &LOG_Static;
LAB_14183bcdb:
      UE::Logging::Private::BasicLog<2>(pFVar14,(FLogCategoryBase *)&LogCompression);
    }
  }
  bVar18 = false;
LAB_14183bcea:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_a8.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_a8.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_d0);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_d0.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_d0.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_d0.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_d0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_a8);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar18;
}

// appUncompressMemoryGZIP @ 14183be80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl appUncompressMemoryGZIP(void *param_1,long64 param_2,void *param_3,long64 param_4)

{
  int *piVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_bool___cdecl_appUncompressMemoryGZIP(void_*,__int64,void_const_*,__int64)_::_2_::FStat_STAT_appUncompressMemoryGZIP>
  FVar9;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar10;
  FNameEntryId FVar11;
  ulonglong uVar12;
  bool bVar13;
  bool bVar14;
  LARGE_INTEGER local_res10;
  void *local_res18;
  FName local_b8;
  FStatMessage local_a8;
  void *local_98;
  undefined4 local_90;
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  
  bVar13 = -1 < CpuChannel->Enabled;
  local_res18 = param_3;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId257,"appUncompressMemoryGZIP",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
               ,0x101);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId257);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_appUncompressMemoryGZIP ==
        (FThreadSafeStaticStat<_bool___cdecl_appUncompressMemoryGZIP(void_*,__int64,void_const_*,__int64)_::_2_::FStat_STAT_appUncompressMemoryGZIP>
         )0x0) {
      pFVar8 = FName::FName((FName *)&local_res10.s,"STAT_appUncompressMemoryGZIP");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_appUncompressMemoryGZIP,*pFVar8,
                 L"Uncompress Memory GZIP","STATGROUP_Compression","STATCAT_Advanced",L"Compression"
                 ,true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar9 = StatPtr_STAT_appUncompressMemoryGZIP;
  if (StatPtr_STAT_appUncompressMemoryGZIP ==
      (FThreadSafeStaticStat<_bool___cdecl_appUncompressMemoryGZIP(void_*,__int64,void_const_*,__int64)_::_2_::FStat_STAT_appUncompressMemoryGZIP>
       )0x0) {
    pFVar8 = FName::FName((FName *)&local_a8,"STAT_appUncompressMemoryGZIP");
    FVar9 = (FThreadSafeStaticStat<_bool___cdecl_appUncompressMemoryGZIP(void_*,__int64,void_const_*,__int64)_::_2_::FStat_STAT_appUncompressMemoryGZIP>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_appUncompressMemoryGZIP,*pFVar8,
                         L"Uncompress Memory GZIP","STATGROUP_Compression","STATCAT_Advanced",
                         L"Compression",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  FVar11 = FVar2.ComparisonIndex.Value;
  uVar10 = FVar2.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
LAB_14183c035:
    bVar4 = false;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar11.Value;
        local_res10.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
                   ,0x102);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14183c035;
    local_res10.s.LowPart = FVar11.Value;
    local_res10.s.HighPart = uVar10;
    FThreadStats::AddMessage(FVar2,CycleScopeStart);
    bVar4 = true;
    local_b8 = FVar2;
  }
  uVar12 = param_2 & 0xffffffff;
  if ((((param_2 == uVar12) && (-1 < param_2)) && (param_4 == (param_4 & 0xffffffffU))) &&
     (-1 < param_4)) {
    local_90 = (undefined4)param_4;
    local_68 = zalloc;
    local_58 = 0;
    local_60 = zfree;
    local_98 = local_res18;
    local_80 = (undefined4)param_2;
    local_88 = param_1;
    iVar6 = inflateInit2_(&local_98,0x1f,"1.3",0x58);
    if (iVar6 == 0) {
      iVar6 = inflate(&local_98,4);
      if (iVar6 == 1) {
        uVar12 = (ulonglong)local_7c;
        iVar7 = inflateEnd(&local_98);
LAB_14183c0f4:
        iVar6 = iVar7;
      }
      else {
        iVar7 = inflateEnd(&local_98);
        if (-1 < iVar6) goto LAB_14183c0f4;
      }
      if (2 < (byte)LogCompression._0_1_) {
        if (iVar6 == -4) {
          UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogCompression);
        }
        if (2 < (byte)LogCompression._0_1_) {
          if (iVar6 == -5) {
            UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogCompression);
          }
          if ((2 < (byte)LogCompression._0_1_) && (iVar6 == -3)) {
            UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogCompression);
          }
        }
      }
      bVar14 = iVar6 == 0;
      if (param_2 == uVar12) goto LAB_14183c1c0;
      if (2 < (byte)LogCompression._0_1_) {
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogCompression);
      }
    }
  }
  else if (1 < (byte)LogCompression._0_1_) {
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogCompression);
  }
  bVar14 = false;
LAB_14183c1c0:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (local_b8 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_a8.NameAndInfo.Index.Value = local_b8.ComparisonIndex.Value;
      local_a8.NameAndInfo.Number = local_b8.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res10);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_a8);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar14;
}

// appUncompressMemoryStreamZLIB @ 14183c350

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
appUncompressMemoryStreamZLIB
          (void *param_1,long64 param_2,IMemoryReadStream *param_3,long64 param_4,long64 param_5,
          int param_6)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  LARGE_INTEGER LVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_bool___cdecl_appUncompressMemoryStreamZLIB(void_*,__int64,IMemoryReadStream_*,__int64,__int64,int)_::_2_::FStat_STAT_appUncompressMemoryZLIB>
  FVar12;
  undefined8 uVar13;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName FVar14;
  ulonglong uVar15;
  bool bVar16;
  FColor_u_0 local_res18 [2];
  LARGE_INTEGER local_res20;
  ulonglong local_d8;
  FStatMessage local_d0;
  FName local_c0;
  FName local_b8;
  undefined8 local_a8;
  int local_a0;
  void *local_98;
  undefined4 local_90;
  code *local_78;
  code *local_70;
  undefined8 local_68;
  FName local_48;
  FName local_40;
  
  bVar16 = -1 < CpuChannel->Enabled;
  local_res20 = (LARGE_INTEGER)param_4;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId390,"appUncompressMemoryStreamZLIB",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
               ,0x186);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId390);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_appUncompressMemoryZLIB ==
        (FThreadSafeStaticStat<_bool___cdecl_appUncompressMemoryStreamZLIB(void_*,__int64,IMemoryReadStream_*,__int64,__int64,int)_::_2_::FStat_STAT_appUncompressMemoryZLIB>
         )0x0) {
      pFVar11 = FName::FName(&local_48,"STAT_appUncompressMemoryZLIB");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_appUncompressMemoryZLIB,*pFVar11,
                 L"Uncompress Memory ZLIB","STATGROUP_Compression","STATCAT_Advanced",L"Compression"
                 ,true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar12 = StatPtr_STAT_appUncompressMemoryZLIB;
  if (StatPtr_STAT_appUncompressMemoryZLIB ==
      (FThreadSafeStaticStat<_bool___cdecl_appUncompressMemoryStreamZLIB(void_*,__int64,IMemoryReadStream_*,__int64,__int64,int)_::_2_::FStat_STAT_appUncompressMemoryZLIB>
       )0x0) {
    pFVar11 = FName::FName(&local_40,"STAT_appUncompressMemoryZLIB");
    FVar12 = (FThreadSafeStaticStat<_bool___cdecl_appUncompressMemoryStreamZLIB(void_*,__int64,IMemoryReadStream_*,__int64,__int64,int)_::_2_::FStat_STAT_appUncompressMemoryZLIB>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_appUncompressMemoryZLIB,
                          *pFVar11,L"Uncompress Memory ZLIB","STATGROUP_Compression",
                          "STATCAT_Advanced",L"Compression",true,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  bVar3 = false;
  bVar5 = false;
  FVar14 = *(FName *)FVar12;
  if ((FVar14.ComparisonIndex.Value.Value == 0) && (FVar14.Number == 0)) {
LAB_14183c50d:
    bVar4 = false;
    FVar14 = local_b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c0.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_c0.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
                   ,0x187);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14183c50d;
    local_d0.StatData.Pad = (uchar  [8])FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar4 = true;
  }
  local_d8 = 0;
  uVar13 = (**(code **)param_3->_padding_)(param_3,&local_d8,param_4,param_5);
  uVar15 = local_d8;
  if ((((local_d8 == (local_d8 & 0xffffffff)) && (-1 < (longlong)local_d8)) &&
      (param_2 == (param_2 & 0xffffffffU))) && (-1 < param_2)) {
    local_78 = zalloc;
    local_90 = (undefined4)param_2;
    local_70 = zfree;
    local_68 = 0;
    iVar9 = 0xf;
    if (param_6 != 0) {
      iVar9 = param_6;
    }
    local_a8 = uVar13;
    local_a0 = (int)local_d8;
    local_98 = param_1;
    iVar9 = inflateInit2_(&local_a8,iVar9,"1.3",0x58);
    LVar6 = local_res20;
    if (iVar9 == 0) {
      do {
        uVar13 = local_a8;
        iVar9 = local_a0;
        if (local_a0 == 0) {
          uVar13 = (**(code **)param_3->_padding_)
                             (param_3,&local_d8,uVar15 + LVar6.QuadPart,param_5 - uVar15);
          uVar15 = uVar15 + local_d8;
          if ((param_5 < (longlong)uVar15) &&
             (bVar7 = FDebug::CheckVerifyFailedImpl2
                                ("ChunkOffset <= CompressedSize",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
                                 ,0x1ad,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          if ((local_d8 != (local_d8 & 0xffffffff)) ||
             (iVar9 = (int)local_d8, (longlong)local_d8 < 0)) {
            if (1 < (byte)LogCompression._0_1_) {
              UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogCompression);
            }
            goto LAB_14183c722;
          }
        }
        local_a0 = iVar9;
        local_a8 = uVar13;
        iVar9 = inflate(&local_a8,2);
      } while (iVar9 == 0);
      iVar10 = inflateEnd(&local_a8);
      if (-1 < iVar9) {
        iVar9 = iVar10;
      }
      if (2 < (byte)LogCompression._0_1_) {
        if (iVar9 == -4) {
          UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogCompression);
        }
        if (2 < (byte)LogCompression._0_1_) {
          if (iVar9 == -5) {
            UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogCompression);
          }
          if ((2 < (byte)LogCompression._0_1_) && (iVar9 == -3)) {
            UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogCompression);
          }
        }
      }
      bVar7 = iVar9 == 0;
      goto LAB_14183c725;
    }
  }
  else if (1 < (byte)LogCompression._0_1_) {
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogCompression);
  }
LAB_14183c722:
  bVar7 = false;
LAB_14183c725:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_d0.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_d0.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_d0.StatData.Pad = (uchar  [8])(local_res20.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this,&local_d0);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar7;
}

// appUncompressMemoryZLIB @ 14183c8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
appUncompressMemoryZLIB(void *param_1,long64 param_2,void *param_3,long64 param_4,int param_5)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_bool___cdecl_appUncompressMemoryZLIB(void_*,__int64,void_const_*,__int64,int)_::_2_::FStat_STAT_appUncompressMemoryZLIB>
  FVar8;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  ulonglong uVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStackY_278 [32];
  FName local_218;
  LARGE_INTEGER local_210;
  FName local_208;
  FStatMessage local_1f8;
  void *local_1e8;
  void *local_1d8;
  undefined4 local_1d0;
  LARGE_INTEGER local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  char *local_1b8;
  code *local_1a8;
  code *local_1a0;
  undefined8 local_198;
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_278;
  bVar13 = -1 < CpuChannel->Enabled;
  local_210 = (LARGE_INTEGER)param_1;
  local_1e8 = param_3;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId326,"appUncompressMemoryZLIB",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
               ,0x146);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId326);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_appUncompressMemoryZLIB ==
        (FThreadSafeStaticStat<_bool___cdecl_appUncompressMemoryZLIB(void_*,__int64,void_const_*,__int64,int)_::_2_::FStat_STAT_appUncompressMemoryZLIB>
         )0x0) {
      pFVar7 = FName::FName(&local_218,"STAT_appUncompressMemoryZLIB");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_appUncompressMemoryZLIB,*pFVar7,
                 L"Uncompress Memory ZLIB","STATGROUP_Compression","STATCAT_Advanced",L"Compression"
                 ,true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar8 = StatPtr_STAT_appUncompressMemoryZLIB;
  if (StatPtr_STAT_appUncompressMemoryZLIB ==
      (FThreadSafeStaticStat<_bool___cdecl_appUncompressMemoryZLIB(void_*,__int64,void_const_*,__int64,int)_::_2_::FStat_STAT_appUncompressMemoryZLIB>
       )0x0) {
    pFVar7 = FName::FName((FName *)&local_1f8,"STAT_appUncompressMemoryZLIB");
    FVar8 = (FThreadSafeStaticStat<_bool___cdecl_appUncompressMemoryZLIB(void_*,__int64,void_const_*,__int64,int)_::_2_::FStat_STAT_appUncompressMemoryZLIB>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_appUncompressMemoryZLIB,*pFVar7,
                         L"Uncompress Memory ZLIB","STATGROUP_Compression","STATCAT_Advanced",
                         L"Compression",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar2 = false;
  bVar4 = false;
  local_208.ComparisonIndex.Value = 0;
  local_208.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
LAB_14183ca7c:
    bVar3 = false;
    FVar11 = local_208;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_218.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_218,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_218.ComparisonIndex.Value = FVar10.Value;
        local_218.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_218,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Compression.cpp"
                   ,0x147);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14183ca7c;
    local_218.ComparisonIndex.Value = FVar10.Value;
    local_218.Number = uVar9;
    local_208 = FVar11;
    FThreadStats::AddMessage(FVar11,CycleScopeStart);
    bVar3 = true;
  }
  uVar12 = param_2 & 0xffffffff;
  if ((((param_2 == uVar12) && (-1 < param_2)) && (param_4 == (param_4 & 0xffffffffU))) &&
     (-1 < param_4)) {
    local_1d0 = (undefined4)param_4;
    local_1a8 = zalloc;
    local_198 = 0;
    local_1a0 = zfree;
    local_1d8 = local_1e8;
    local_1c8 = local_210;
    local_1c0 = (undefined4)param_2;
    iVar5 = 0xf;
    if (param_5 != 0) {
      iVar5 = param_5;
    }
    iVar5 = inflateInit2_(&local_1d8,iVar5,"1.3",0x58);
    if (iVar5 == 0) {
      iVar5 = inflate(&local_1d8,4);
      if (iVar5 == 1) {
        uVar12 = (ulonglong)local_1bc;
        iVar6 = inflateEnd(&local_1d8);
LAB_14183cb48:
        iVar5 = iVar6;
      }
      else {
        iVar6 = inflateEnd(&local_1d8);
        if (-1 < iVar5) goto LAB_14183cb48;
      }
      if (2 < (byte)LogCompression._0_1_) {
        if (iVar5 == -4) {
          TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                    (&local_178,local_1b8);
          UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogCompression);
          if ((void *)local_178._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_178._padding_);
          }
        }
        if (2 < (byte)LogCompression._0_1_) {
          if (iVar5 == -5) {
            TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                      (&local_178,local_1b8);
            UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogCompression);
            if ((void *)local_178._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_178._padding_);
            }
          }
          if ((2 < (byte)LogCompression._0_1_) && (iVar5 == -3)) {
            TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                      (&local_178,local_1b8);
            UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogCompression);
            if ((void *)local_178._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_178._padding_);
            }
          }
        }
      }
      bVar14 = iVar5 == 0;
      if (param_2 == uVar12) goto LAB_14183cc7f;
      if (2 < (byte)LogCompression._0_1_) {
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogCompression);
      }
    }
  }
  else if (1 < (byte)LogCompression._0_1_) {
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogCompression);
  }
  bVar14 = false;
LAB_14183cc7f:
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar11 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_1f8.NameAndInfo.Index.Value = local_208.ComparisonIndex.Value;
      local_1f8.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_210);
      local_1f8.StatData.Pad = (uchar  [8])(local_210.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this,&local_1f8);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar14;
}

// atan2_ps @ 14183ce20

__m128 * __cdecl atan2_ps(__m128 *__return_storage_ptr__,__m128 *param_1,__m128 *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar7 = divps((undefined1  [16])*__return_storage_ptr__,(undefined1  [16])*param_1);
  fVar2 = (float)(auVar7._0_4_ & _ps_inv_sign_mask[0]);
  fVar3 = (float)(auVar7._4_4_ & _ps_inv_sign_mask[1]);
  fVar4 = (float)(auVar7._8_4_ & _ps_inv_sign_mask[2]);
  fVar5 = (float)(auVar7._12_4_ & _ps_inv_sign_mask[3]);
  auVar6._0_4_ = fVar2 - _ps_1[0];
  auVar6._4_4_ = fVar3 - _ps_1[1];
  auVar6._8_4_ = fVar4 - _ps_1[2];
  auVar6._12_4_ = fVar5 - _ps_1[3];
  auVar1._0_4_ = fVar2 + _ps_1[0];
  auVar1._4_4_ = fVar3 + _ps_1[1];
  auVar1._8_4_ = fVar4 + _ps_1[2];
  auVar1._12_4_ = fVar5 + _ps_1[3];
  auVar7._4_4_ = fVar3;
  auVar7._0_4_ = fVar2;
  auVar7._8_4_ = fVar4;
  auVar7._12_4_ = fVar5;
  divps((undefined1  [16])_ps_1,auVar7);
  divps(auVar6,auVar1);
  return (__m128 *)&stack0x00000000;
}

// atan_ps @ 14183d1e0

__m128 * __cdecl atan_ps(__m128 *__return_storage_ptr__,__m128 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  __m128 *in_RAX;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar3 = (float)(__return_storage_ptr__->m128_u32[0] & _ps_inv_sign_mask[0]);
  fVar4 = (float)(__return_storage_ptr__->m128_u32[1] & _ps_inv_sign_mask[1]);
  fVar5 = (float)(__return_storage_ptr__->m128_u32[2] & _ps_inv_sign_mask[2]);
  fVar6 = (float)(__return_storage_ptr__->m128_u32[3] & _ps_inv_sign_mask[3]);
  auVar7._0_4_ = fVar3 - _ps_1[0];
  auVar7._4_4_ = fVar4 - _ps_1[1];
  auVar7._8_4_ = fVar5 - _ps_1[2];
  auVar7._12_4_ = fVar6 - _ps_1[3];
  auVar2._4_4_ = fVar4;
  auVar2._0_4_ = fVar3;
  auVar2._8_4_ = fVar5;
  auVar2._12_4_ = fVar6;
  divps((undefined1  [16])_ps_1,auVar2);
  auVar1._4_4_ = fVar4 + _ps_1[1];
  auVar1._0_4_ = fVar3 + _ps_1[0];
  auVar1._8_4_ = fVar5 + _ps_1[2];
  auVar1._12_4_ = fVar6 + _ps_1[3];
  divps(auVar7,auVar1);
  return in_RAX;
}

// cos_ps @ 14183d3c0

__m128 * __cdecl cos_ps(__m128 *__return_storage_ptr__,__m128 *param_1)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// cot_ps @ 14183d5a0

__m128 * __cdecl cot_ps(__m128 *__return_storage_ptr__,__m128 *param_1)

{
  undefined1 auVar1 [16];
  __m128 *in_RAX;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar2 = (float)((int)((float)(__return_storage_ptr__->m128_u32[0] & _ps_inv_sign_mask[0]) *
                       _ps_cephes_FOPI[0]) + _pi32_1[0] & _pi32_inv1[0]);
  fVar3 = (float)((int)((float)(__return_storage_ptr__->m128_u32[1] & _ps_inv_sign_mask[1]) *
                       _ps_cephes_FOPI[1]) + _pi32_1[1] & _pi32_inv1[1]);
  fVar4 = (float)((int)((float)(__return_storage_ptr__->m128_u32[2] & _ps_inv_sign_mask[2]) *
                       _ps_cephes_FOPI[2]) + _pi32_1[2] & _pi32_inv1[2]);
  fVar5 = (float)((int)((float)(__return_storage_ptr__->m128_u32[3] & _ps_inv_sign_mask[3]) *
                       _ps_cephes_FOPI[3]) + _pi32_1[3] & _pi32_inv1[3]);
  fVar6 = fVar2 * _ps_minus_cephes_DP1[0] +
          (float)(__return_storage_ptr__->m128_u32[0] & _ps_inv_sign_mask[0]) +
          fVar2 * _ps_minus_cephes_DP2[0] + fVar2 * _ps_minus_cephes_DP3[0];
  fVar7 = fVar3 * _ps_minus_cephes_DP1[1] +
          (float)(__return_storage_ptr__->m128_u32[1] & _ps_inv_sign_mask[1]) +
          fVar3 * _ps_minus_cephes_DP2[1] + fVar3 * _ps_minus_cephes_DP3[1];
  fVar8 = fVar4 * _ps_minus_cephes_DP1[2] +
          (float)(__return_storage_ptr__->m128_u32[2] & _ps_inv_sign_mask[2]) +
          fVar4 * _ps_minus_cephes_DP2[2] + fVar4 * _ps_minus_cephes_DP3[2];
  fVar9 = fVar5 * _ps_minus_cephes_DP1[3] +
          (float)(__return_storage_ptr__->m128_u32[3] & _ps_inv_sign_mask[3]) +
          fVar5 * _ps_minus_cephes_DP2[3] + fVar5 * _ps_minus_cephes_DP3[3];
  fVar2 = fVar6 * fVar6;
  fVar3 = fVar7 * fVar7;
  fVar4 = fVar8 * fVar8;
  fVar5 = fVar9 * fVar9;
  auVar1._4_4_ = (((((fVar3 * _ps_tancof_p0[1] + _ps_tancof_p1[1]) * fVar3 + _ps_tancof_p2[1]) *
                    fVar3 + _ps_tancof_p3[1]) * fVar3 + _ps_tancof_p4[1]) * fVar3 + _ps_tancof_p5[1]
                 ) * fVar3 * fVar7 + fVar7;
  auVar1._0_4_ = (((((fVar2 * _ps_tancof_p0[0] + _ps_tancof_p1[0]) * fVar2 + _ps_tancof_p2[0]) *
                    fVar2 + _ps_tancof_p3[0]) * fVar2 + _ps_tancof_p4[0]) * fVar2 + _ps_tancof_p5[0]
                 ) * fVar2 * fVar6 + fVar6;
  auVar1._8_4_ = (((((fVar4 * _ps_tancof_p0[2] + _ps_tancof_p1[2]) * fVar4 + _ps_tancof_p2[2]) *
                    fVar4 + _ps_tancof_p3[2]) * fVar4 + _ps_tancof_p4[2]) * fVar4 + _ps_tancof_p5[2]
                 ) * fVar4 * fVar8 + fVar8;
  auVar1._12_4_ =
       (((((fVar5 * _ps_tancof_p0[3] + _ps_tancof_p1[3]) * fVar5 + _ps_tancof_p2[3]) * fVar5 +
         _ps_tancof_p3[3]) * fVar5 + _ps_tancof_p4[3]) * fVar5 + _ps_tancof_p5[3]) * fVar5 * fVar9 +
       fVar9;
  divps((undefined1  [16])_ps_1,auVar1);
  return in_RAX;
}

// exp_ps @ 14183d780

__m128 * __cdecl exp_ps(__m128 *__return_storage_ptr__,__m128 *param_1)

{
  __m128 *in_RAX;
  undefined1 auVar1 [16];
  
  auVar1 = minps((undefined1  [16])*__return_storage_ptr__,(undefined1  [16])_ps_exp_hi);
  maxps(auVar1,(undefined1  [16])_ps_exp_lo);
  return in_RAX;
}

// log_ps @ 14183d900

__m128 * __cdecl log_ps(__m128 *__return_storage_ptr__,__m128 *param_1)

{
  __m128 *in_RAX;
  
  maxps((undefined1  [16])*__return_storage_ptr__,(undefined1  [16])_ps_min_norm_pos);
  return in_RAX;
}

// sin_ps @ 14183db00

__m128 * __cdecl sin_ps(__m128 *__return_storage_ptr__,__m128 *param_1)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// sincos_ps @ 14183dd20

void __cdecl sincos_ps(__m128 *param_1,__m128 *param_2,__m128 *param_3)

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
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  
  uVar29 = param_1->m128_u32[1] & _ps_sign_mask[1];
  uVar30 = param_1->m128_u32[2] & _ps_sign_mask[2];
  uVar31 = param_1->m128_u32[3] & _ps_sign_mask[3];
  fVar5 = (float)(param_1->m128_u32[0] & _ps_inv_sign_mask[0]);
  fVar6 = (float)(param_1->m128_u32[1] & _ps_inv_sign_mask[1]);
  fVar7 = (float)(param_1->m128_u32[2] & _ps_inv_sign_mask[2]);
  fVar8 = (float)(param_1->m128_u32[3] & _ps_inv_sign_mask[3]);
  uVar22 = (int)(fVar5 * _ps_cephes_FOPI[0]) + _pi32_1[0] & _pi32_inv1[0];
  uVar23 = (int)(fVar6 * _ps_cephes_FOPI[1]) + _pi32_1[1] & _pi32_inv1[1];
  uVar25 = (int)(fVar7 * _ps_cephes_FOPI[2]) + _pi32_1[2] & _pi32_inv1[2];
  uVar27 = (int)(fVar8 * _ps_cephes_FOPI[3]) + _pi32_1[3] & _pi32_inv1[3];
  fVar1 = (float)(int)uVar22;
  fVar2 = (float)(int)uVar23;
  fVar3 = (float)(int)uVar25;
  fVar4 = (float)(int)uVar27;
  uVar14 = -(uint)((uVar22 & _pi32_2[0]) == 0);
  uVar16 = -(uint)((uVar23 & _pi32_2[1]) == 0);
  uVar18 = -(uint)((uVar25 & _pi32_2[2]) == 0);
  uVar20 = -(uint)((uVar27 & _pi32_2[3]) == 0);
  uVar24 = uVar23 & _pi32_4[1];
  uVar26 = uVar25 & _pi32_4[2];
  uVar28 = uVar27 & _pi32_4[3];
  uVar13 = ~(uVar22 - _pi32_2[0]) & _pi32_4[0];
  uVar23 = ~(uVar23 - _pi32_2[1]) & _pi32_4[1];
  uVar25 = ~(uVar25 - _pi32_2[2]) & _pi32_4[2];
  uVar27 = ~(uVar27 - _pi32_2[3]) & _pi32_4[3];
  fVar9 = fVar1 * _ps_minus_cephes_DP1[0] + fVar5 + fVar1 * _ps_minus_cephes_DP2[0] +
          fVar1 * _ps_minus_cephes_DP3[0];
  fVar10 = fVar2 * _ps_minus_cephes_DP1[1] + fVar6 + fVar2 * _ps_minus_cephes_DP2[1] +
           fVar2 * _ps_minus_cephes_DP3[1];
  fVar11 = fVar3 * _ps_minus_cephes_DP1[2] + fVar7 + fVar3 * _ps_minus_cephes_DP2[2] +
           fVar3 * _ps_minus_cephes_DP3[2];
  fVar12 = fVar4 * _ps_minus_cephes_DP1[3] + fVar8 + fVar4 * _ps_minus_cephes_DP2[3] +
           fVar4 * _ps_minus_cephes_DP3[3];
  fVar1 = fVar9 * fVar9;
  fVar3 = fVar10 * fVar10;
  fVar5 = fVar11 * fVar11;
  fVar7 = fVar12 * fVar12;
  fVar9 = ((fVar1 * _ps_sincof_p0[0] + _ps_sincof_p1[0]) * fVar1 + _ps_sincof_p2[0]) * fVar1 * fVar9
          + fVar9;
  fVar10 = ((fVar3 * _ps_sincof_p0[1] + _ps_sincof_p1[1]) * fVar3 + _ps_sincof_p2[1]) * fVar3 *
           fVar10 + fVar10;
  fVar11 = ((fVar5 * _ps_sincof_p0[2] + _ps_sincof_p1[2]) * fVar5 + _ps_sincof_p2[2]) * fVar5 *
           fVar11 + fVar11;
  fVar12 = ((fVar7 * _ps_sincof_p0[3] + _ps_sincof_p1[3]) * fVar7 + _ps_sincof_p2[3]) * fVar7 *
           fVar12 + fVar12;
  fVar2 = (float)((uint)fVar9 & uVar14);
  fVar4 = (float)((uint)fVar10 & uVar16);
  fVar6 = (float)((uint)fVar11 & uVar18);
  fVar8 = (float)((uint)fVar12 & uVar20);
  fVar1 = (((fVar1 * _ps_coscof_p0[0] + _ps_coscof_p1[0]) * fVar1 + _ps_coscof_p2[0]) * fVar1 *
           fVar1 - fVar1 * _ps_0p5[0]) + _ps_1[0];
  fVar3 = (((fVar3 * _ps_coscof_p0[1] + _ps_coscof_p1[1]) * fVar3 + _ps_coscof_p2[1]) * fVar3 *
           fVar3 - fVar3 * _ps_0p5[1]) + _ps_1[1];
  fVar5 = (((fVar5 * _ps_coscof_p0[2] + _ps_coscof_p1[2]) * fVar5 + _ps_coscof_p2[2]) * fVar5 *
           fVar5 - fVar5 * _ps_0p5[2]) + _ps_1[2];
  fVar7 = (((fVar7 * _ps_coscof_p0[3] + _ps_coscof_p1[3]) * fVar7 + _ps_coscof_p2[3]) * fVar7 *
           fVar7 - fVar7 * _ps_0p5[3]) + _ps_1[3];
  fVar15 = (float)(~uVar14 & (uint)fVar1);
  fVar17 = (float)(~uVar16 & (uint)fVar3);
  fVar19 = (float)(~uVar18 & (uint)fVar5);
  fVar21 = (float)(~uVar20 & (uint)fVar7);
  param_2->m128_u32[0] =
       (uVar22 & _pi32_4[0]) << 0x1d ^ param_1->m128_u32[0] & _ps_sign_mask[0] ^
       (uint)(fVar15 + fVar2);
  param_2->m128_u32[1] = uVar24 << 0x1d ^ uVar29 ^ (uint)(fVar17 + fVar4);
  param_2->m128_u32[2] = uVar26 << 0x1d ^ uVar30 ^ (uint)(fVar19 + fVar6);
  param_2->m128_u32[3] = uVar28 << 0x1d ^ uVar31 ^ (uint)(fVar21 + fVar8);
  param_3->m128_u32[0] = (uint)((fVar9 - fVar2) + (fVar1 - fVar15)) ^ uVar13 << 0x1d;
  param_3->m128_u32[1] = (uint)((fVar10 - fVar4) + (fVar3 - fVar17)) ^ uVar23 << 0x1d;
  param_3->m128_u32[2] = (uint)((fVar11 - fVar6) + (fVar5 - fVar19)) ^ uVar25 << 0x1d;
  param_3->m128_u32[3] = (uint)((fVar12 - fVar8) + (fVar7 - fVar21)) ^ uVar27 << 0x1d;
  return;
}

// tan_ps @ 14183dfe0

__m128 * __cdecl tan_ps(__m128 *__return_storage_ptr__,__m128 *param_1)

{
  undefined1 auVar1 [16];
  __m128 *in_RAX;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar2 = (float)((int)((float)(__return_storage_ptr__->m128_u32[0] & _ps_inv_sign_mask[0]) *
                       _ps_cephes_FOPI[0]) + _pi32_1[0] & _pi32_inv1[0]);
  fVar3 = (float)((int)((float)(__return_storage_ptr__->m128_u32[1] & _ps_inv_sign_mask[1]) *
                       _ps_cephes_FOPI[1]) + _pi32_1[1] & _pi32_inv1[1]);
  fVar4 = (float)((int)((float)(__return_storage_ptr__->m128_u32[2] & _ps_inv_sign_mask[2]) *
                       _ps_cephes_FOPI[2]) + _pi32_1[2] & _pi32_inv1[2]);
  fVar5 = (float)((int)((float)(__return_storage_ptr__->m128_u32[3] & _ps_inv_sign_mask[3]) *
                       _ps_cephes_FOPI[3]) + _pi32_1[3] & _pi32_inv1[3]);
  fVar6 = fVar2 * _ps_minus_cephes_DP1[0] +
          (float)(__return_storage_ptr__->m128_u32[0] & _ps_inv_sign_mask[0]) +
          fVar2 * _ps_minus_cephes_DP2[0] + fVar2 * _ps_minus_cephes_DP3[0];
  fVar7 = fVar3 * _ps_minus_cephes_DP1[1] +
          (float)(__return_storage_ptr__->m128_u32[1] & _ps_inv_sign_mask[1]) +
          fVar3 * _ps_minus_cephes_DP2[1] + fVar3 * _ps_minus_cephes_DP3[1];
  fVar8 = fVar4 * _ps_minus_cephes_DP1[2] +
          (float)(__return_storage_ptr__->m128_u32[2] & _ps_inv_sign_mask[2]) +
          fVar4 * _ps_minus_cephes_DP2[2] + fVar4 * _ps_minus_cephes_DP3[2];
  fVar9 = fVar5 * _ps_minus_cephes_DP1[3] +
          (float)(__return_storage_ptr__->m128_u32[3] & _ps_inv_sign_mask[3]) +
          fVar5 * _ps_minus_cephes_DP2[3] + fVar5 * _ps_minus_cephes_DP3[3];
  fVar2 = fVar6 * fVar6;
  fVar3 = fVar7 * fVar7;
  fVar4 = fVar8 * fVar8;
  fVar5 = fVar9 * fVar9;
  auVar1._4_4_ = (((((fVar3 * _ps_tancof_p0[1] + _ps_tancof_p1[1]) * fVar3 + _ps_tancof_p2[1]) *
                    fVar3 + _ps_tancof_p3[1]) * fVar3 + _ps_tancof_p4[1]) * fVar3 + _ps_tancof_p5[1]
                 ) * fVar3 * fVar7 + fVar7;
  auVar1._0_4_ = (((((fVar2 * _ps_tancof_p0[0] + _ps_tancof_p1[0]) * fVar2 + _ps_tancof_p2[0]) *
                    fVar2 + _ps_tancof_p3[0]) * fVar2 + _ps_tancof_p4[0]) * fVar2 + _ps_tancof_p5[0]
                 ) * fVar2 * fVar6 + fVar6;
  auVar1._8_4_ = (((((fVar4 * _ps_tancof_p0[2] + _ps_tancof_p1[2]) * fVar4 + _ps_tancof_p2[2]) *
                    fVar4 + _ps_tancof_p3[2]) * fVar4 + _ps_tancof_p4[2]) * fVar4 + _ps_tancof_p5[2]
                 ) * fVar4 * fVar8 + fVar8;
  auVar1._12_4_ =
       (((((fVar5 * _ps_tancof_p0[3] + _ps_tancof_p1[3]) * fVar5 + _ps_tancof_p2[3]) * fVar5 +
         _ps_tancof_p3[3]) * fVar5 + _ps_tancof_p4[3]) * fVar5 + _ps_tancof_p5[3]) * fVar5 * fVar9 +
       fVar9;
  divps((undefined1  [16])_ps_1,auVar1);
  return in_RAX;
}

// zalloc @ 14183e1c0

void * __cdecl zalloc(void *param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  
  pvVar1 = FMemory::Malloc((ulonglong)(param_2 * param_3),0);
  return pvVar1;
}

// zfree @ 14183e1e0

void __cdecl zfree(void *param_1,void *param_2)

{
  FMemory::Free(param_2);
  return;
}

// PrintScriptCallstack @ 14183e1f0

void __cdecl PrintScriptCallstack(void)

{
  if (GPrintScriptCallStackFn != (_func___cdecl_void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014183e1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*GPrintScriptCallStackFn)();
    return;
  }
  return;
}

// CompressionFormats'' @ 15033ef50

void __cdecl `dynamic_atexit_destructor_for_'FCompression::CompressionFormats__(void)

{
  FCompression::CompressionFormats._72_4_ = 0;
  if (FCompression::CompressionFormats._64_8_ != 0) {
    FMemory::Free((void *)FCompression::CompressionFormats._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,ICompressionFormat_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,ICompressionFormat_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,ICompressionFormat_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FCompression::CompressionFormats);
  return;
}

// CompressionFormatsCriticalSection'' @ 15033ef90

void __cdecl `dynamic_atexit_destructor_for_'FCompression::CompressionFormatsCriticalSection__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015033ef97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FCompression::CompressionFormatsCriticalSection);
  return;
}

// GraphicsRHI'' @ 15033efb0

void __cdecl `dynamic_atexit_destructor_for_'FApp::GraphicsRHI__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FApp::GraphicsRHI.Data.AllocatorInstance.Data;
  if (FApp::GraphicsRHI.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FApp::GraphicsRHI.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// Null'' @ 15033efd0

void __cdecl `dynamic_atexit_destructor_for_'FCompositeBuffer::Null__(void)

{
  FCompositeBuffer *pFVar1;
  
  pFVar1 = &FCompositeBuffer::Null;
  if (FCompositeBuffer::Null.Segments.AllocatorInstance.SecondaryData !=
      (ForElementType<FSharedBuffer>)0x0) {
    pFVar1 = (FCompositeBuffer *)FCompositeBuffer::Null.Segments.AllocatorInstance.SecondaryData;
  }
  DestructItems<FSharedBuffer,int>((FSharedBuffer *)pFVar1,FCompositeBuffer::Null.Segments.ArrayNum)
  ;
  if (FCompositeBuffer::Null.Segments.AllocatorInstance.SecondaryData !=
      (ForElementType<FSharedBuffer>)0x0) {
    FMemory::Free((void *)FCompositeBuffer::Null.Segments.AllocatorInstance.SecondaryData);
    return;
  }
  return;
}

// RegisteredArgs'' @ 15033f020

void __cdecl `dynamic_atexit_destructor_for_'FCommandLine::RegisteredArgs__(void)

{
  FCommandLine::RegisteredArgs._72_4_ = 0;
  if (FCommandLine::RegisteredArgs._64_8_ != 0) {
    FMemory::Free((void *)FCommandLine::RegisteredArgs._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FCommandLine::FRegisteredArgData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FCommandLine::FRegisteredArgData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FCommandLine::FRegisteredArgData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FCommandLine::RegisteredArgs);
  return;
}

// SessionName'' @ 15033f060

void __cdecl `dynamic_atexit_destructor_for_'FApp::SessionName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FApp::SessionName.Data.AllocatorInstance.Data;
  if (FApp::SessionName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FApp::SessionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// SessionOwner'' @ 15033f080

void __cdecl `dynamic_atexit_destructor_for_'FApp::SessionOwner__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FApp::SessionOwner.Data.AllocatorInstance.Data;
  if (FApp::SessionOwner.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FApp::SessionOwner.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// SessionUsers'' @ 15033f0a0

void __cdecl `dynamic_atexit_destructor_for_'FApp::SessionUsers__(void)

{
  DestructItems<FString,int>
            ((FString *)FApp::SessionUsers.AllocatorInstance.Data,FApp::SessionUsers.ArrayNum);
  if (FApp::SessionUsers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FApp::SessionUsers.AllocatorInstance.Data);
    return;
  }
  return;
}

// SuppressedLogCategories'' @ 15033f0e0

void __cdecl `dynamic_atexit_destructor_for_'FAutomationTestBase::SuppressedLogCategories__(void)

{
  DestructItems<FString,int>
            ((FString *)FAutomationTestBase::SuppressedLogCategories.AllocatorInstance.Data,
             FAutomationTestBase::SuppressedLogCategories.ArrayNum);
  if (FAutomationTestBase::SuppressedLogCategories.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FAutomationTestBase::SuppressedLogCategories.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ActionCS'' @ 15033f120

void __cdecl
`AutomationTest::GetAutomationLogLevel'::__l2::_dynamic_atexit_destructor_for__ActionCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015033f127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&ActionCS);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAutomationCaptureLogEvents'' @ 15033f140

void __cdecl AutomationTest::_dynamic_atexit_destructor_for__CVarAutomationCaptureLogEvents__(void)

{
  CVarAutomationCaptureLogEvents._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAutomationCaptureLogEvents);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAutomationEnableStereoTestVariants'' @ 15033f160

void __cdecl
AutomationTest::_dynamic_atexit_destructor_for__CVarAutomationEnableStereoTestVariants__(void)

{
  CVarAutomationEnableStereoTestVariants._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAutomationEnableStereoTestVariants);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAutomationLightweightStereoTestVariants'' @ 15033f180

void __cdecl
AutomationTest::_dynamic_atexit_destructor_for__CVarAutomationLightweightStereoTestVariants__(void)

{
  CVarAutomationLightweightStereoTestVariants._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAutomationLightweightStereoTestVariants);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAutomationLogBPTestMetadata'' @ 15033f1a0

void __cdecl AutomationTest::_dynamic_atexit_destructor_for__CVarAutomationLogBPTestMetadata__(void)

{
  CVarAutomationLogBPTestMetadata._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAutomationLogBPTestMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAutomationLogTestStateTrace'' @ 15033f1c0

void __cdecl AutomationTest::_dynamic_atexit_destructor_for__CVarAutomationLogTestStateTrace__(void)

{
  CVarAutomationLogTestStateTrace._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAutomationLogTestStateTrace);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAutomationSkipStackWalk'' @ 15033f1e0

void __cdecl AutomationTest::_dynamic_atexit_destructor_for__CVarAutomationSkipStackWalk__(void)

{
  CVarAutomationSkipStackWalk._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAutomationSkipStackWalk);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAutomationTestTagGlobalFilter'' @ 15033f200

void __cdecl
AutomationTest::_dynamic_atexit_destructor_for__CVarAutomationTestTagGlobalFilter__(void)

{
  CVarAutomationTestTagGlobalFilter._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAutomationTestTagGlobalFilter);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnsureAlwaysEnabled'' @ 15033f220

void __cdecl _dynamic_atexit_destructor_for__CVarEnsureAlwaysEnabled__(void)

{
  CVarEnsureAlwaysEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnsureAlwaysEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnsuresAreErrors'' @ 15033f240

void __cdecl _dynamic_atexit_destructor_for__CVarEnsuresAreErrors__(void)

{
  CVarEnsuresAreErrors._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnsuresAreErrors);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResetEnsureState'' @ 15033f260

void __cdecl _dynamic_atexit_destructor_for__CVarResetEnsureState__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResetEnsureState);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyContext'' @ 15033f280

void __cdecl
`FAutomationTestExecutionInfo::GetContext'::__l2::_dynamic_atexit_destructor_for__EmptyContext__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_class_FString_const&___ptr64___cdecl_FAutomationTestExecutionInfo::GetContext(void)const___ptr64'
               ::__l2::EmptyContext.Data.AllocatorInstance.Data;
  if (`public:_class_FString_const&___ptr64___cdecl_FAutomationTestExecutionInfo::GetContext(void)const___ptr64'
      ::__l2::EmptyContext.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_class_FString_const&___ptr64___cdecl_FAutomationTestExecutionInfo::GetContext(void)const___ptr64'
      ::__l2::EmptyContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EnsureHandler'' @ 15033f2a0

void __cdecl _dynamic_atexit_destructor_for__EnsureHandler__(void)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(longlong *)(lVar1 + 0xa80) != 0) {
    plVar2 = (longlong *)(lVar1 + 0xa90);
    if (*(longlong **)(lVar1 + 0xaa8) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0xaa8);
    }
                    /* WARNING: Could not recover jumptable at 0x00015033f2d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'FlagsMap'' @ 15033f2e0

void __cdecl
`EAutomationTestFlags_GetTestFlagsMap'::__l2::_dynamic_atexit_destructor_for__FlagsMap__(void)

{
  FlagsMap._72_4_ = 0;
  if (FlagsMap._64_8_ != 0) {
    FMemory::Free((void *)FlagsMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,enum_EAutomationTestFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,enum_EAutomationTestFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FlagsMap);
  return;
}

// `dynamic_atexit_destructor_for_'Framework'' @ 15033f320

void __cdecl
`FAutomationTestFramework::Get'::__l2::_dynamic_atexit_destructor_for__Framework__(void)

{
  FAutomationTestFramework::~FAutomationTestFramework(&Framework);
  return;
}

// `dynamic_atexit_destructor_for_'GAnsiMalloc'' @ 15033f340

void __cdecl _dynamic_atexit_destructor_for__GAnsiMalloc__(void)

{
  FExec::~FExec((FExec *)&GAnsiMalloc);
  return;
}

// `dynamic_atexit_destructor_for_'GPersistentLinearAllocator'' @ 15033f360

void __cdecl
`GetPersistentLinearAllocator'::__l2::_dynamic_atexit_destructor_for__GPersistentLinearAllocator__
          (void)

{
  FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::FreeVirtual
            ((FPlatformVirtualMemoryBlock *)&GPersistentLinearAllocator.field_0x28);
                    /* WARNING: Could not recover jumptable at 0x00015033f37b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GPersistentLinearAllocator);
  return;
}

// `dynamic_atexit_destructor_for_'LogApp'' @ 15033f390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogApp__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogApp);
  return;
}

// `dynamic_atexit_destructor_for_'LogAutomationTest'' @ 15033f3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAutomationTest__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAutomationTest);
  return;
}

// `dynamic_atexit_destructor_for_'LogAutomationTestFramework'' @ 15033f3d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAutomationTestFramework__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAutomationTestFramework);
  return;
}

// `dynamic_atexit_destructor_for_'LogAutomationTestStateTrace'' @ 15033f3f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAutomationTestStateTrace__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAutomationTestStateTrace);
  return;
}

// `dynamic_atexit_destructor_for_'LogCompression'' @ 15033f410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogCompression__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogCompression);
  return;
}

// `dynamic_atexit_destructor_for_'LogLatentCommands'' @ 15033f430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLatentCommands__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLatentCommands);
  return;
}

// `dynamic_atexit_destructor_for_'SubprocessCommandLines'' @ 15033f450

void __cdecl
`FCommandLine::GetSubprocessCommandLine_Internal'::__l2::
_dynamic_atexit_destructor_for__SubprocessCommandLines__(void)

{
  DestructItems<FString,int>((FString *)SubprocessCommandLines._0_8_,SubprocessCommandLines._8_4_);
  if (SubprocessCommandLines._0_8_ != 0) {
    FMemory::Free((void *)SubprocessCommandLines._0_8_);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'TestLevelFolders'' @ 15033f490

void __cdecl
`FAutomationTestFramework::ShouldTestContent'::__l2::
_dynamic_atexit_destructor_for__TestLevelFolders__(void)

{
  DestructItems<FString,int>
            ((FString *)TestLevelFolders.AllocatorInstance.Data,TestLevelFolders.ArrayNum);
  if (TestLevelFolders.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TestLevelFolders.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'TestTagGlobalFilter'' @ 15033f4d0

void __cdecl AutomationTest::_dynamic_atexit_destructor_for__TestTagGlobalFilter__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TestTagGlobalFilter.Data.AllocatorInstance.Data;
  if (TestTagGlobalFilter.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TestTagGlobalFilter.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Tracker'' @ 15033f4f0

void __cdecl `ArenaTracker'::__l2::_dynamic_atexit_destructor_for__Tracker__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&Tracker.Lock);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00015033f510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&Tracker.Lock);
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'URL'' @ 15033f550

void __cdecl `FApp::GetExecutingJobURL'::__l2::_dynamic_atexit_destructor_for__URL__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = URL.Data.AllocatorInstance.Data;
  if (URL.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (URL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// operator() @ 15047d3d0

bool __thiscall `AxisDisplayInfo::GetAxisColor'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2474385166655553419>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2474385166655553419>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15047d420

bool __thiscall `AxisDisplayInfo::GetAxisDisplayName'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2474385166655553493>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2474385166655553493>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15047d470

bool __thiscall `AxisDisplayInfo::GetAxisDisplayNameShort'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2474385166655553455>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2474385166655553455>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15047d4c0

bool __thiscall
`AxisDisplayInfo::GetRotationAxisNameShort'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2474385166655553370>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2474385166655553370>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15047d510

bool __thiscall `appCompressMemoryZLIB'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7798646688016498594>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7798646688016498594>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15047d550

bool __thiscall `appCompressMemoryZLIB'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7798646688016498593>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7798646688016498593>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// CheckVerifyImpl @ 15047d5d0

bool __cdecl
CheckVerifyImpl(char *param_1,int param_2,void *param_3,char *param_4,wchar_t *param_5,char *param_6
               )

{
  bool bVar1;
  
  FDebug::OptionallyLogFormattedEnsureMessageReturningFalseImpl
            (true,param_4,param_1,param_2,param_3,param_5,param_6);
  bVar1 = FWindowsPlatformMisc::IsDebuggerPresent();
  if (!bVar1) {
    FWindowsPlatformMisc::PromptForRemoteDebugging(true);
    return false;
  }
  return GIgnoreDebugger == false;
}

// EnsureFailedV @ 15047d660

bool __cdecl
EnsureFailedV(atomic<unsigned_char> *param_1,FStaticEnsureRecord *param_2,void *param_3,
             char *param_4)

{
  atomic<unsigned_char> aVar1;
  bool bVar2;
  
  LOCK();
  aVar1 = *param_1;
  *param_1 = (atomic<unsigned_char>)GEnsureResetState;
  UNLOCK();
  if ((aVar1 == (atomic<unsigned_char>)GEnsureResetState) &&
     ((param_2->bAlways == false || (GEnsureAlwaysEnabled == false)))) {
    return false;
  }
  bVar2 = CheckVerifyImpl(param_2->File,param_2->Line,param_3,param_2->Expression,param_2->Format,
                          param_4);
  return bVar2;
}

