// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FAutomationTestTags @ 148805630

/* WARNING: Enum "Type": Some values do not have unique names */

FAutomationTestTags * __thiscall
FAutomationTestTags::FAutomationTestTags
          (FAutomationTestTags *this,FString *param_1,FString *param_2)

{
  bool bVar1;
  FAutomationTestFramework *this_00;
  ulonglong uVar2;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  
  uVar2 = (ulonglong)_tls_index;
  (this->TestFullName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestFullName).Data.ArrayNum = 0;
  (this->TestFullName).Data.ArrayMax = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar2 * 8) + 0x9d4c) <
       `public:___cdecl_FAutomationTestTags::FAutomationTestTags(FString_const&___ptr64,FString_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_FAutomationTestTags::FAutomationTestTags(FString_const&___ptr64,FString_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_FAutomationTestTags::FAutomationTestTags(FString_const&___ptr64,FString_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:___cdecl_FAutomationTestTags::FAutomationTestTags(FString_const&___ptr64,FString_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name1566,L"AutomationTest/Framework");
    _Init_thread_footer(&`public:___cdecl_FAutomationTestTags::FAutomationTestTags(FString_const&___ptr64,FString_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:___cdecl_FAutomationTestTags::FAutomationTestTags(FString_const&___ptr64,FString_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1566,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res20,
             &`public:___cdecl_FAutomationTestTags::FAutomationTestTags(FString_const&___ptr64,FString_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1566,true);
  ::FString::operator=(&this->TestFullName,param_1);
  this_00 = FAutomationTestFramework::Get();
  bVar1 = FAutomationTestFramework::RegisterAutomationTestTags(this_00,param_1,param_2,true);
  if ((!bVar1) && (2 < (byte)LogAutomationTestFramework._0_1_)) {
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_FAutomationTestTags::FAutomationTestTags(FString_const&___ptr64,FString_const&___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogAutomationTestFramework);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

