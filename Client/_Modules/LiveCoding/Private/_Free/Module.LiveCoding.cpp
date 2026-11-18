// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveCoding
// Functions: 687

// `dynamic_initializer_for_'GLiveCodingConsoleArguments'' @ 1410ae510

void __cdecl _dynamic_initializer_for__GLiveCodingConsoleArguments__(void)

{
  atexit(_dynamic_atexit_destructor_for__GLiveCodingConsoleArguments__);
  return;
}

// `dynamic_initializer_for_'GLiveCodingConsolePath'' @ 1410ae530

void __cdecl _dynamic_initializer_for__GLiveCodingConsolePath__(void)

{
  atexit(_dynamic_atexit_destructor_for__GLiveCodingConsolePath__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_LiveCoding'' @ 1410ae550

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_LiveCoding__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_LiveCoding,L"LiveCoding",(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0
             ,None);
  return;
}

// `dynamic_initializer_for_'LogLiveCoding'' @ 1410ae5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLiveCoding__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogLiveCoding,L"LogLiveCoding",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogLiveCoding__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantLiveCoding'' @ 1410ae5e0

void __cdecl _dynamic_initializer_for__ModuleRegistrantLiveCoding__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "LiveCoding";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"LiveCoding",10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FLiveCodingModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NtContinue'' @ 1410ae630

void __cdecl WindowsInternals::_dynamic_initializer_for__NtContinue__(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("ntdll.dll");
  if (hModule == (HMODULE)0x0) {
    Logging::Log(USER,LOG_ERROR,"%sCannot get handle for module %s\n");
    return;
  }
  NtContinue.m_function =
       (_func___cdecl_long__CONTEXT_ptr_uchar *)GetProcAddress(hModule,"NtContinue");
  if (NtContinue.m_function == (_func___cdecl_long__CONTEXT_ptr_uchar *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%sCannot get address of function %s in module %s\n");
  }
  return;
}

// `dynamic_initializer_for_'NtQueryInformationProcess'' @ 1410ae710

void __cdecl WindowsInternals::_dynamic_initializer_for__NtQueryInformationProcess__(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("ntdll.dll");
  if (hModule == (HMODULE)0x0) {
    Logging::Log(USER,LOG_ERROR,"%sCannot get handle for module %s\n");
    return;
  }
  NtQueryInformationProcess.m_function =
       (_func___cdecl_long_void_ptr_NT_PROCESS_INFORMATION_CLASS_void_ptr_ulong_ulong_ptr *)
       GetProcAddress(hModule,"NtQueryInformationProcess");
  if (NtQueryInformationProcess.m_function ==
      (_func___cdecl_long_void_ptr_NT_PROCESS_INFORMATION_CLASS_void_ptr_ulong_ulong_ptr *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%sCannot get address of function %s in module %s\n");
  }
  return;
}

// `dynamic_initializer_for_'NtQuerySystemInformation'' @ 1410ae7f0

void __cdecl WindowsInternals::_dynamic_initializer_for__NtQuerySystemInformation__(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("ntdll.dll");
  if (hModule == (HMODULE)0x0) {
    Logging::Log(USER,LOG_ERROR,"%sCannot get handle for module %s\n");
    return;
  }
  NtQuerySystemInformation.m_function =
       (_func___cdecl_long_NT_SYSTEM_INFORMATION_CLASS_void_ptr_ulong_ulong_ptr *)
       GetProcAddress(hModule,"NtQuerySystemInformation");
  if (NtQuerySystemInformation.m_function ==
      (_func___cdecl_long_NT_SYSTEM_INFORMATION_CLASS_void_ptr_ulong_ulong_ptr *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%sCannot get address of function %s in module %s\n");
  }
  return;
}

// `dynamic_initializer_for_'NtReadVirtualMemory'' @ 1410ae8d0

void __cdecl WindowsInternals::_dynamic_initializer_for__NtReadVirtualMemory__(void)

{
  Function<long___cdecl(void_*,void_*,void_*,unsigned_long,unsigned_long_*)>::
  Function<long___cdecl(void_*,void_*,void_*,unsigned_long,unsigned_long_*)>
            (&NtReadVirtualMemory,"ntdll.dll","NtReadVirtualMemory");
  return;
}

// `dynamic_initializer_for_'NtResumeProcess'' @ 1410ae8f0

void __cdecl WindowsInternals::_dynamic_initializer_for__NtResumeProcess__(void)

{
  Function<long___cdecl(void_*)>::Function<long___cdecl(void_*)>
            (&NtResumeProcess,"ntdll.dll","NtResumeProcess");
  return;
}

// `dynamic_initializer_for_'NtSuspendProcess'' @ 1410ae910

void __cdecl WindowsInternals::_dynamic_initializer_for__NtSuspendProcess__(void)

{
  Function<long___cdecl(void_*)>::Function<long___cdecl(void_*)>
            (&NtSuspendProcess,"ntdll.dll","NtSuspendProcess");
  return;
}

// `dynamic_initializer_for_'NtWriteVirtualMemory'' @ 1410ae930

void __cdecl WindowsInternals::_dynamic_initializer_for__NtWriteVirtualMemory__(void)

{
  Function<long___cdecl(void_*,void_*,void_*,unsigned_long,unsigned_long_*)>::
  Function<long___cdecl(void_*,void_*,void_*,unsigned_long,unsigned_long_*)>
            (&NtWriteVirtualMemory,"ntdll.dll","NtWriteVirtualMemory");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h__Script_LiveCoding_2494559727'' @ 1410ae950

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h__Script_LiveCoding_2494559727__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveCoding",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h__Script_LiveCoding_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h__Script_LiveCoding_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_LiveCoding'' @ 1410ae9a0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_LiveCoding__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xc969b9c6;
  local_res8[0].DeclarationsHash = 0x7c956e3b;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_LiveCoding,L"/Script/LiveCoding",
             &Z_Registration_Info_UPackage__Script_LiveCoding,local_res8);
  return;
}

// `dynamic_initializer_for_'g_dllSyncPoint'' @ 1410ae9e0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__g_dllSyncPoint__(void)

{
  g_dllSyncPoint.m_sema = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCWSTR)0x0);
  atexit(_dynamic_atexit_destructor_for__g_dllSyncPoint__);
  return;
}

// `dynamic_initializer_for_'g_ensureOneTimeStartup'' @ 1410aea20

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__g_ensureOneTimeStartup__(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&g_ensureOneTimeStartup);
  atexit(_dynamic_atexit_destructor_for__g_ensureOneTimeStartup__);
  return;
}

// `dynamic_initializer_for_'g_enterUserSyncPoint'' @ 1410aea50

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__g_enterUserSyncPoint__(void)

{
  g_enterUserSyncPoint.m_sema = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCWSTR)0x0);
  atexit(_dynamic_atexit_destructor_for__g_enterUserSyncPoint__);
  return;
}

// `dynamic_initializer_for_'g_leaveUserSyncPoint'' @ 1410aea90

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__g_leaveUserSyncPoint__(void)

{
  g_leaveUserSyncPoint.m_sema = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCWSTR)0x0);
  atexit(_dynamic_atexit_destructor_for__g_leaveUserSyncPoint__);
  return;
}

// `dynamic_initializer_for_'g_syncPointCS'' @ 1410aead0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__g_syncPointCS__(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&g_syncPointCS);
  atexit(_dynamic_atexit_destructor_for__g_syncPointCS__);
  return;
}

// `dynamic_initializer_for_'g_vfsEntries'' @ 1410aeb00

void __cdecl Filesystem::_dynamic_initializer_for__g_vfsEntries__(void)

{
  atexit(_dynamic_atexit_destructor_for__g_vfsEntries__);
  return;
}

// Z_Construct_UPackage__Script_LiveCoding @ 146cc9780

UPackage * __cdecl Z_Construct_UPackage__Script_LiveCoding(void)

{
  if (Z_Registration_Info_UPackage__Script_LiveCoding.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_LiveCoding.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_LiveCoding.OuterSingleton;
}

// Z_Construct_UClass_ULiveCodingSettings @ 146cc97c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveCodingSettings(void)

{
  if (Z_Registration_Info_UClass_ULiveCodingSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveCodingSettings.OuterSingleton,
               &Z_Construct_UClass_ULiveCodingSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveCodingSettings.OuterSingleton;
}

// Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode @ 146cc9800

UEnum * __cdecl Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode(void)

{
  if (Z_Registration_Info_UEnum_ELiveCodingStartupMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELiveCodingStartupMode.InnerSingleton,
               &Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELiveCodingStartupMode.InnerSingleton;
}

// ELiveCodingStartupMode_StaticEnum @ 146cc9840

UEnum * __cdecl ELiveCodingStartupMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveCodingStartupMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveCoding();
    Z_Registration_Info_UEnum_ELiveCodingStartupMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode,(UObject *)pUVar1,
                       L"ELiveCodingStartupMode");
  }
  return Z_Registration_Info_UEnum_ELiveCodingStartupMode.OuterSingleton;
}

// NewProp_bEnabled_SetBit @ 146cc9880

void __cdecl Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bEnableReinstancing_SetBit @ 146cc9890

void __cdecl
Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnableReinstancing_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  return;
}

// NewProp_bAutomaticallyCompileNewClasses_SetBit @ 146cc98a0

void __cdecl
Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bAutomaticallyCompileNewClasses_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2b) = 1;
  return;
}

// NewProp_bPreloadEngineModules_SetBit @ 146cc98b0

void __cdecl
Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEngineModules_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// NewProp_bPreloadEnginePluginModules_SetBit @ 146cc98c0

void __cdecl
Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEnginePluginModules_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2d) = 1;
  return;
}

// NewProp_bPreloadProjectModules_SetBit @ 146cc98d0

void __cdecl
Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectModules_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2e) = 1;
  return;
}

// NewProp_bPreloadProjectPluginModules_SetBit @ 146cc98e0

void __cdecl
Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectPluginModules_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2f) = 1;
  return;
}

// <lambda_invoker_cdecl> @ 146cc99a0

uint __cdecl
`Thread::
CreateFromFunction<StrongTypedef<unsigned_int,0>_(__cdecl*)(Process::Context_*),Process::Context_*_&>'
::__l2::<lambda_2>::<lambda_invoker_cdecl>(void *param_1)

{
  uint local_res8 [8];
  
  Thread::Current::SetName(*(char **)param_1);
  (**(code **)((longlong)param_1 + 8))(local_res8,*(undefined8 *)((longlong)param_1 + 0x10));
  ::operator_delete(param_1,0x18);
  return local_res8[0];
}

// <lambda_invoker_cdecl> @ 146cc99e0

uint __cdecl
`Thread::
CreateFromMemberFunction<ClientCommandThread,StrongTypedef<unsigned_int,0>_(__cdecl_ClientCommandThread::*)(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_const_&,Event_*,Event_*,CriticalSection_*),std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_const_&,Event_*_&,Event_*_&,CriticalSection_*_&>'
::__l2::<lambda_2>::<lambda_invoker_cdecl>(void *param_1)

{
  uint local_res8 [2];
  
  Thread::Current::SetName(*(char **)param_1);
  (**(code **)((longlong)param_1 + 8))
            (*(undefined8 *)((longlong)param_1 + 0x10),local_res8,(longlong)param_1 + 0x18,
             *(undefined8 *)((longlong)param_1 + 0x38),*(undefined8 *)((longlong)param_1 + 0x40),
             *(undefined8 *)((longlong)param_1 + 0x48));
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
            ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             ((longlong)param_1 + 0x18));
  ::operator_delete(param_1,0x50);
  return local_res8[0];
}

// <lambda_invoker_cdecl> @ 146cc9a50

uint __cdecl
`Thread::
CreateFromMemberFunction<ClientStartupThread,StrongTypedef<unsigned_int,0>_(__cdecl_ClientStartupThread::*)(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_const_&,enum_RunMode::Enum),std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_&,enum_RunMode::Enum_&>'
::__l2::<lambda_2>::<lambda_invoker_cdecl>(void *param_1)

{
  uint local_res8 [2];
  
  Thread::Current::SetName(*(char **)param_1);
  (**(code **)((longlong)param_1 + 8))
            (*(undefined8 *)((longlong)param_1 + 0x10),local_res8,(longlong)param_1 + 0x18,
             *(undefined4 *)((longlong)param_1 + 0x38));
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
            ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             ((longlong)param_1 + 0x18));
  ::operator_delete(param_1,0x40);
  return local_res8[0];
}

// <lambda_invoker_cdecl> @ 146cc9ab0

uint __cdecl
`Thread::
CreateFromMemberFunction<ClientUserCommandThread,StrongTypedef<unsigned_int,0>_(__cdecl_ClientUserCommandThread::*)(Event_*,CriticalSection_*),Event_*_&,CriticalSection_*_&>'
::__l2::<lambda_2>::<lambda_invoker_cdecl>(void *param_1)

{
  uint local_res8 [8];
  
  Thread::Current::SetName(*(char **)param_1);
  (**(code **)((longlong)param_1 + 8))
            (*(undefined8 *)((longlong)param_1 + 0x10),local_res8,
             *(undefined8 *)((longlong)param_1 + 0x18),*(undefined8 *)((longlong)param_1 + 0x20));
  ::operator_delete(param_1,0x28);
  return local_res8[0];
}

// basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_><wchar_t_*,0> @ 146cc9b00

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_><wchar_t_*,0>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          wchar_t *param_1,wchar_t *param_2,allocator<wchar_t> *param_3)

{
  ulonglong uVar1;
  wchar_t *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  
  (this->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = 0;
  (this->_Mypair)._Myval2._Mysize = 0;
  (this->_Mypair)._Myval2._Myres = 0;
  if (param_1 == param_2) {
    (this->_Mypair)._Myval2._Myres = 7;
    (this->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  }
  else {
    uVar3 = (longlong)param_2 - (longlong)param_1 >> 1;
    if (0x7ffffffffffffffe < uVar3) {
                    /* WARNING: Subroutine does not return */
      _Xlen_string();
    }
    if (uVar3 < 8) {
      (this->_Mypair)._Myval2._Mysize = uVar3;
      (this->_Mypair)._Myval2._Myres = 7;
      memcpy(this,param_1,uVar3 * 2);
      (this->_Mypair)._Myval2._Bx._Buf[uVar3] = L'\0';
    }
    else {
      uVar1 = uVar3 | 7;
      if (uVar1 < 0x7fffffffffffffff) {
        if (uVar1 < 10) {
          uVar1 = 10;
        }
        uVar2 = uVar1 + 1;
        if (0x7fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
          _Throw_bad_array_new_length();
        }
      }
      else {
        uVar2 = 0x7fffffffffffffff;
        uVar1 = 0x7ffffffffffffffe;
      }
      _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar2 * 2);
      (this->_Mypair)._Myval2._Mysize = uVar3;
      (this->_Mypair)._Myval2._Bx._Ptr = _Dst;
      (this->_Mypair)._Myval2._Myres = uVar1;
      memcpy(_Dst,param_1,uVar3 * 2);
      _Dst[uVar3] = L'\0';
    }
  }
  return this;
}

// AddLambda<`FLiveCodingModule::StartLiveCoding'::__l5::<lambda_1>_> @ 146cc9c20

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_FLiveCodingModule::StartLiveCoding_::__l5::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FLiveCodingModule *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FLiveCodingModule *)0x0;
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLiveCodingModule::StartLiveCoding'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (FLiveCodingModule *)0x0;
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
      pFVar5 = (FLiveCodingModule *)*puVar3;
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

// AlignTop<void_const_*> @ 146cca380

void * __cdecl pointer::AlignTop<void_const_*>(void *param_1,ulong64 param_2)

{
  return (void *)((param_2 - 1) + (longlong)param_1 & ~(param_2 - 1));
}

// As<int_(__cdecl*)(HINSTANCE___*_const,unsigned_long,void_*_const)> @ 146cca3a0

_func___cdecl_int_HINSTANCE___ptr_ulong_void_ptr * __cdecl
pointer::As<int_(__cdecl*)(HINSTANCE___*_const,unsigned_long,void_*_const)>(void *param_1)

{
  return param_1;
}

// As<char_*> @ 146cca3b0

char * __cdecl pointer::As<char_*>(void *param_1)

{
  return param_1;
}

// As<unsigned_int_*> @ 146cca3c0

uint * __cdecl pointer::As<unsigned_int_*>(void *param_1)

{
  return param_1;
}

// As<WindowsInternals::NT_SYSTEM_PROCESS_INFORMATION_*> @ 146cca3d0

NT_SYSTEM_PROCESS_INFORMATION * __cdecl
pointer::As<WindowsInternals::NT_SYSTEM_PROCESS_INFORMATION_*>(void *param_1)

{
  return param_1;
}

// As<void_*> @ 146cca3e0

void * __cdecl pointer::As<void_*>(void *param_1)

{
  return param_1;
}

// As<unsigned___int64_*> @ 146cca3f0

ulong64 * __cdecl pointer::As<unsigned___int64_*>(void *param_1)

{
  return param_1;
}

// As<char_const_*> @ 146cca400

char * __cdecl pointer::As<char_const_*>(void *param_1)

{
  return param_1;
}

// As<unsigned_short_const_*> @ 146cca410

ushort * __cdecl pointer::As<unsigned_short_const_*>(void *param_1)

{
  return param_1;
}

// As<_IMAGE_BASE_RELOCATION_const_*> @ 146cca420

_IMAGE_BASE_RELOCATION * __cdecl pointer::As<_IMAGE_BASE_RELOCATION_const_*>(void *param_1)

{
  return param_1;
}

// As<_IMAGE_BASE_RELOCATION_const_*> @ 146cca430

_IMAGE_BASE_RELOCATION * __cdecl pointer::As<_IMAGE_BASE_RELOCATION_const_*>(void *param_1)

{
  return param_1;
}

// As<_IMAGE_DEBUG_DIRECTORY_const_*> @ 146cca440

_IMAGE_DEBUG_DIRECTORY * __cdecl pointer::As<_IMAGE_DEBUG_DIRECTORY_const_*>(void *param_1)

{
  return param_1;
}

// As<_IMAGE_IMPORT_DESCRIPTOR_const_*> @ 146cca450

_IMAGE_IMPORT_DESCRIPTOR * __cdecl pointer::As<_IMAGE_IMPORT_DESCRIPTOR_const_*>(void *param_1)

{
  return param_1;
}

// As<_IMAGE_NT_HEADERS64_const_*> @ 146cca460

_IMAGE_NT_HEADERS64 * __cdecl pointer::As<_IMAGE_NT_HEADERS64_const_*>(void *param_1)

{
  return param_1;
}

// As<void_const_*> @ 146cca470

void * __cdecl pointer::As<void_const_*>(void *param_1)

{
  return param_1;
}

// As<void_const_*> @ 146cca480

void * __cdecl pointer::As<void_const_*>(void *param_1)

{
  return param_1;
}

// CallHooksInRange<void_(__cdecl*)(wchar_t_const_*),wchar_t_const_*> @ 146cca490

void __cdecl
hook::CallHooksInRange<void_(__cdecl*)(wchar_t_const_*),wchar_t_const_*>
          (void *param_1,void *param_2,wchar_t **param_3)

{
  for (; param_1 < param_2; param_1 = (void *)((longlong)param_1 + 8)) {
    if (*(code **)param_1 != (code *)0x0) {
      (**(code **)param_1)(*param_3);
    }
  }
  return;
}

// CallHooksInRange<void_(__cdecl*)(void)> @ 146cca4e0

void __cdecl hook::CallHooksInRange<void_(__cdecl*)(void)>(void *param_1,void *param_2)

{
  for (; param_1 < param_2; param_1 = (void *)((longlong)param_1 + 8)) {
    if (*(code **)param_1 != (code *)0x0) {
      (**(code **)param_1)();
    }
  }
  return;
}

// DefaultAction<commands::Acknowledge> @ 146cca520

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::Acknowledge>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_1,local_18,1);
  return bVar1 != false;
}

// DefaultAction<commands::ApplySettingBool> @ 146cca5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::ApplySettingBool>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  undefined1 local_138 [272];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  memset(local_138,0,0x104);
  bVar1 = DuplexPipe::Read(param_1,local_138,0x104);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_148[0] = 0;
  DuplexPipe::Send(param_1,local_148,1);
  return bVar1 != false;
}

// DefaultAction<commands::ApplySettingInt> @ 146cca660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::ApplySettingInt>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  undefined1 local_138 [272];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  memset(local_138,0,0x104);
  bVar1 = DuplexPipe::Read(param_1,local_138,0x104);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_148[0] = 0;
  DuplexPipe::Send(param_1,local_148,1);
  return bVar1 != false;
}

// DefaultAction<commands::ApplySettingString> @ 146cca710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::ApplySettingString>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 auStack_358 [32];
  undefined1 local_338 [16];
  undefined1 local_328 [768];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_358;
  memset(local_328,0,0x300);
  bVar1 = DuplexPipe::Read(param_1,local_328,0x300);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_338[0] = 0;
  DuplexPipe::Send(param_1,local_338,1);
  return bVar1 != false;
}

// DefaultAction<commands::BuildPatch> @ 146cca7c0

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::BuildPatch>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_18,4);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_res20[0] = 0;
  DuplexPipe::Send(param_1,local_res20,1);
  return bVar1 != false;
}

// DefaultAction<commands::CallEntryPoint> @ 146cca850

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::CallEntryPoint>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  bVar1 = DuplexPipe::Read(param_1,&local_18,0x10);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_res20[0] = 0;
  DuplexPipe::Send(param_1,local_res20,1);
  return bVar1 != false;
}

// DefaultAction<commands::CallHooks> @ 146cca8e0

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::CallHooks>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  bVar1 = DuplexPipe::Read(param_1,&local_28,0x18);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_res20[0] = 0;
  DuplexPipe::Send(param_1,local_res20,1);
  return bVar1 != false;
}

// DefaultAction<commands::CompilationFinished> @ 146cca970

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::CompilationFinished>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_1,local_18,1);
  return bVar1 != false;
}

// DefaultAction<commands::DisableCompileFinishNotification> @ 146ccaa00

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::DisableCompileFinishNotification>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_18,4);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_res20[0] = 0;
  DuplexPipe::Send(param_1,local_res20,1);
  return bVar1 != false;
}

// DefaultAction<commands::DisableModules> @ 146ccaa90

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::DisableModules>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined4 local_18;
  undefined8 local_14;
  undefined4 local_c;
  
  local_18 = 0;
  local_14 = 0;
  local_c = 0;
  bVar1 = DuplexPipe::Read(param_1,&local_18,0x10);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_res20[0] = 0;
  DuplexPipe::Send(param_1,local_res20,1);
  return bVar1 != false;
}

// DefaultAction<commands::DisableModulesFinished> @ 146ccab20

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::DisableModulesFinished>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_18,8);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_res20[0] = 0;
  DuplexPipe::Send(param_1,local_res20,1);
  return bVar1 != false;
}

// DefaultAction<commands::DisconnectClient> @ 146ccabb0

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::DisconnectClient>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_1,local_18,1);
  return bVar1 != false;
}

// DefaultAction<commands::EnableModules> @ 146ccac40

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::EnableModules>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined4 local_18;
  undefined8 local_14;
  undefined4 local_c;
  
  local_18 = 0;
  local_14 = 0;
  local_c = 0;
  bVar1 = DuplexPipe::Read(param_1,&local_18,0x10);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_res20[0] = 0;
  DuplexPipe::Send(param_1,local_res20,1);
  return bVar1 != false;
}

// DefaultAction<commands::EnableModulesFinished> @ 146ccacd0

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::EnableModulesFinished>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_18,8);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_res20[0] = 0;
  DuplexPipe::Send(param_1,local_res20,1);
  return bVar1 != false;
}

// DefaultAction<commands::EnterSyncPoint> @ 146ccad60

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::EnterSyncPoint>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_1,local_18,1);
  return bVar1 != false;
}

// DefaultAction<commands::HandleException> @ 146ccadf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::HandleException>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 auStack_5d8 [32];
  undefined1 local_5b8 [16];
  undefined8 local_5a8;
  undefined1 local_5a0 [1400];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_5d8;
  local_5a8 = 0;
  memset(local_5a0,0,0x578);
  bVar1 = DuplexPipe::Read(param_1,&local_5a8,0x580);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_5b8[0] = 0;
  DuplexPipe::Send(param_1,local_5b8,1);
  return bVar1 != false;
}

// DefaultAction<commands::HandleExceptionFinished> @ 146ccaeb0

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::HandleExceptionFinished>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  bVar1 = DuplexPipe::Read(param_1,&local_28,0x20);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_res20[0] = 0;
  DuplexPipe::Send(param_1,local_res20,1);
  return bVar1 != false;
}

// DefaultAction<commands::LeaveSyncPoint> @ 146ccaf40

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::LeaveSyncPoint>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_1,local_18,1);
  return bVar1 != false;
}

// DefaultAction<commands::LoadPatch> @ 146ccafd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::LoadPatch>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 auStack_268 [32];
  undefined1 local_248 [16];
  undefined1 local_238 [528];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_268;
  memset(local_238,0,0x208);
  bVar1 = DuplexPipe::Read(param_1,local_238,0x208);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_248[0] = 0;
  DuplexPipe::Send(param_1,local_248,1);
  return bVar1 != false;
}

// DefaultAction<commands::LoadPatchInfo> @ 146ccb080

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::LoadPatchInfo>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_18,8);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_res20[0] = 0;
  DuplexPipe::Send(param_1,local_res20,1);
  return bVar1 != false;
}

// DefaultAction<commands::LogMessage> @ 146ccb110

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::LogMessage>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_1,local_18,1);
  return bVar1 != false;
}

// DefaultAction<commands::LogOutput> @ 146ccb1a0

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::LogOutput>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_1,local_18,1);
  return bVar1 != false;
}

// DefaultAction<commands::PostCompile> @ 146ccb230

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::PostCompile>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_1,local_18,1);
  return bVar1 != false;
}

// DefaultAction<commands::PreCompile> @ 146ccb2c0

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::PreCompile>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_1,local_18,1);
  return bVar1 != false;
}

// DefaultAction<commands::ReadyForCompilation> @ 146ccb350

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::ReadyForCompilation>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_1,local_18,1);
  return bVar1 != false;
}

// DefaultAction<commands::RegisterProcess> @ 146ccb3e0

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::RegisterProcess>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0;
  bVar1 = DuplexPipe::Read(param_1,&local_48,0x40);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_res20[0] = 0;
  DuplexPipe::Send(param_1,local_res20,1);
  return bVar1 != false;
}

// DefaultAction<commands::RegisterProcessFinished> @ 146ccb490

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::RegisterProcessFinished>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_1,local_18,1);
  return bVar1 != false;
}

// DefaultAction<commands::SetActive> @ 146ccb520

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::SetActive>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_1,local_18,1);
  return bVar1 != false;
}

// DefaultAction<commands::SetBuildArguments> @ 146ccb5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::SetBuildArguments>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 auStack_868 [32];
  undefined1 local_848 [16];
  undefined4 local_838;
  undefined1 local_834 [2060];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_868;
  local_838 = 0;
  memset(local_834,0,0x800);
  bVar1 = DuplexPipe::Read(param_1,&local_838,0x804);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_848[0] = 0;
  DuplexPipe::Send(param_1,local_848,1);
  return bVar1 != false;
}

// DefaultAction<commands::SetReinstancingFlow> @ 146ccb670

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::SetReinstancingFlow>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_18,8);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_res20[0] = 0;
  DuplexPipe::Send(param_1,local_res20,1);
  return bVar1 != false;
}

// DefaultAction<commands::SetVisible> @ 146ccb700

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::SetVisible>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_1,local_18,1);
  return bVar1 != false;
}

// DefaultAction<commands::ShowConsole> @ 146ccb790

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::ShowConsole>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_1,local_18,1);
  return bVar1 != false;
}

// DefaultAction<commands::TriggerRecompile> @ 146ccb820

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::TriggerRecompile>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_1,local_18,1);
  return bVar1 != false;
}

// DefaultAction<commands::TriggerReload> @ 146ccb8b0

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::TriggerReload>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_1,local_18,1);
  return bVar1 != false;
}

// DefaultAction<commands::TriggerRestart> @ 146ccb940

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::TriggerRestart>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_1,local_18,1);
  return bVar1 != false;
}

// DefaultAction<commands::UnloadPatch> @ 146ccb9d0

bool __cdecl
`anonymous_namespace'::DefaultAction<commands::UnloadPatch>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_18,8);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_res20[0] = 0;
  DuplexPipe::Send(param_1,local_res20,1);
  return bVar1 != false;
}

// DeleteAndNull<ClientCommandThread> @ 146ccba60

void __cdecl
`anonymous_namespace'::DeleteAndNull<ClientCommandThread>(ClientCommandThread **param_1)

{
  if (*param_1 != (ClientCommandThread *)0x0) {
    ::operator_delete(*param_1,0x10);
  }
  *param_1 = (ClientCommandThread *)0x0;
  return;
}

// DeleteAndNull<ClientUserCommandThread> @ 146ccba90

void __cdecl
`anonymous_namespace'::DeleteAndNull<ClientUserCommandThread>(ClientUserCommandThread **param_1)

{
  ClientUserCommandThread *pCVar1;
  
  pCVar1 = *param_1;
  if (pCVar1 != (ClientUserCommandThread *)0x0) {
    CloseHandle((pCVar1->m_userCommandQueueSema).m_sema);
    DeleteCriticalSection((LPCRITICAL_SECTION)&pCVar1->m_userCommandQueueCS);
    std::
    deque<ClientUserCommandThread::BaseCommand_*,std::allocator<ClientUserCommandThread::BaseCommand_*>_>
    ::
    ~deque<ClientUserCommandThread::BaseCommand_*,std::allocator<ClientUserCommandThread::BaseCommand_*>_>
              (&pCVar1->m_userCommandQueue);
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
              (&pCVar1->m_processGroupName);
    ::operator_delete(pCVar1,0x90);
    *param_1 = (ClientUserCommandThread *)0x0;
    return;
  }
  *param_1 = (ClientUserCommandThread *)0x0;
  return;
}

// DeleteAndNull<CriticalSection> @ 146ccbb10

void __cdecl `anonymous_namespace'::DeleteAndNull<CriticalSection>(CriticalSection **param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    ::operator_delete(lpCriticalSection,0x28);
    *param_1 = (CriticalSection *)0x0;
    return;
  }
  *param_1 = (CriticalSection *)0x0;
  return;
}

// DeleteAndNull<DuplexPipeClient> @ 146ccbb70

void __cdecl `anonymous_namespace'::DeleteAndNull<DuplexPipeClient>(DuplexPipeClient **param_1)

{
  DuplexPipeClient *pDVar1;
  
  pDVar1 = *param_1;
  if (pDVar1 != (DuplexPipeClient *)0x0) {
    CloseHandle((HANDLE)*pDVar1);
    *pDVar1 = (DuplexPipeClient)0xffffffffffffffff;
    ::operator_delete(pDVar1,8);
    *param_1 = (DuplexPipeClient *)0x0;
    return;
  }
  *param_1 = (DuplexPipeClient *)0x0;
  return;
}

// DeleteAndNull<Event> @ 146ccbbd0

void __cdecl `anonymous_namespace'::DeleteAndNull<Event>(Event **param_1)

{
  Event *pEVar1;
  
  pEVar1 = *param_1;
  if (pEVar1 != (Event *)0x0) {
    CloseHandle(pEVar1->m_event);
    ::operator_delete(pEVar1,8);
    *param_1 = (Event *)0x0;
    return;
  }
  *param_1 = (Event *)0x0;
  return;
}

// DestructItems<TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int> @ 146ccbc50

void __cdecl
DestructItems<TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
          (TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(param_1->Object);
      param_1->Object = (UObject *)0x0;
    }
    param_1 = param_1 + 1;
  }
  return;
}

// FromInteger<void_const_*,unsigned_long> @ 146ccbca0

void * __cdecl pointer::FromInteger<void_const_*,unsigned_long>(ulong param_1)

{
  return (void *)(ulonglong)param_1;
}

// FromInteger<void_const_*,unsigned___int64> @ 146ccbcb0

void * __cdecl pointer::FromInteger<void_const_*,unsigned___int64>(ulong64 param_1)

{
  return (void *)param_1;
}

// InternalConstructor<ULiveCodingSettings> @ 146ccbcc0

void __cdecl InternalConstructor<ULiveCodingSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FName *pFVar4;
  FProperty *pFVar5;
  FProperty *pFVar6;
  FName local_res8;
  FName local_res10;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveCodingSettings__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    pUVar3 = ULiveCodingSettings::GetPrivateStaticClass();
    pFVar4 = FName::FName(&local_res8,"bPreloadEngineModules");
    pFVar5 = UStruct::FindPropertyByName((UStruct *)pUVar3,*pFVar4);
    if (pFVar5 == (FProperty *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("EngineModulesProperty != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Windows\\LiveCoding\\Private\\LiveCodingSettings.cpp"
                         ,0xb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pUVar3 = ULiveCodingSettings::GetPrivateStaticClass();
    pFVar4 = FName::FName(&local_res10,"bPreloadEnginePluginModules");
    pFVar6 = UStruct::FindPropertyByName((UStruct *)pUVar3,*pFVar4);
    if (pFVar6 == (FProperty *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("EnginePluginModulesProperty != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Windows\\LiveCoding\\Private\\LiveCodingSettings.cpp"
                         ,0xe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar2 = FApp::IsEngineInstalled();
    if (bVar2) {
      pFVar5->PropertyFlags = pFVar5->PropertyFlags & ~CPF_Edit;
      pFVar6->PropertyFlags = pFVar6->PropertyFlags & ~CPF_Edit;
    }
    *(undefined2 *)&this[1].field_0x6 = 0x101;
  }
  return;
}

// InternalVTableHelperCtorCaller<ULiveCodingSettings> @ 146ccbdd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveCodingSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveCodingSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveCodingSettings__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// LogNoFormat<1,char> @ 146ccbe90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl Logging::LogNoFormat<1,char>(char *param_1)

{
  _func___cdecl_void_Enum_Enum_wchar_t_ptr *p_Var1;
  size_t sVar2;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  p_Var1 = OutputHandler;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138._padding_ = 0;
  if (param_1 == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(param_1);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,param_1,(int)sVar2,Yes);
  }
  (*p_Var1)(DEV,LOG_INFO,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// LogNoFormat<0,wchar_t> @ 146ccbf40

void __cdecl Logging::LogNoFormat<0,wchar_t>(wchar_t *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146ccbf47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*OutputHandler)(USER,LOG_INFO,param_1);
  return;
}

// MatchesWildcardRecursive<char> @ 146ccbf60

bool __cdecl detail::MatchesWildcardRecursive<char>(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  
  cVar2 = *param_2;
  while( true ) {
    if (cVar2 == '\0') {
      return *param_1 == '\0';
    }
    param_2 = param_2 + 1;
    if (cVar2 == '*') break;
    cVar3 = *param_1;
    param_1 = param_1 + 1;
    if (cVar2 != cVar3) {
      return false;
    }
    cVar2 = *param_2;
  }
  cVar2 = *param_2;
  while (cVar2 == '*') {
    pcVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    cVar2 = *pcVar1;
  }
  if (cVar2 != '\0') {
    cVar3 = *param_1;
    while( true ) {
      if (cVar3 == '\0') {
        return false;
      }
      param_1 = param_1 + 1;
      if ((cVar3 == cVar2) && (bVar4 = MatchesWildcardRecursive<char>(param_1,param_2 + 1), bVar4))
      break;
      cVar3 = *param_1;
    }
  }
  return true;
}

// MatchesWildcardRecursive<wchar_t> @ 146ccc030

bool __cdecl detail::MatchesWildcardRecursive<wchar_t>(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  bool bVar4;
  
  wVar2 = *param_2;
  while( true ) {
    if (wVar2 == L'\0') {
      return *param_1 == L'\0';
    }
    param_2 = param_2 + 1;
    if (wVar2 == L'*') break;
    wVar3 = *param_1;
    param_1 = param_1 + 1;
    if (wVar2 != wVar3) {
      return false;
    }
    wVar2 = *param_2;
  }
  wVar2 = *param_2;
  while (wVar2 == L'*') {
    pwVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    wVar2 = *pwVar1;
  }
  if (wVar2 != L'\0') {
    wVar3 = *param_1;
    while( true ) {
      if (wVar3 == L'\0') {
        return false;
      }
      param_1 = param_1 + 1;
      if ((wVar3 == wVar2) &&
         (bVar4 = MatchesWildcardRecursive<wchar_t>(param_1,param_2 + 1), bVar4)) break;
      wVar3 = *param_1;
    }
  }
  return true;
}

// Offset<int_(__cdecl*)(HINSTANCE___*_const,unsigned_long,void_*_const),unsigned_int> @ 146ccc110

_func___cdecl_int_HINSTANCE___ptr_ulong_void_ptr * __cdecl
pointer::Offset<int_(__cdecl*)(HINSTANCE___*_const,unsigned_long,void_*_const),unsigned_int>
          (void *param_1,uint param_2)

{
  return (_func___cdecl_int_HINSTANCE___ptr_ulong_void_ptr *)
         ((ulonglong)param_2 + (longlong)param_1);
}

// Offset<unsigned_int_*,unsigned_long> @ 146ccc120

uint * __cdecl pointer::Offset<unsigned_int_*,unsigned_long>(void *param_1,ulong param_2)

{
  return (uint *)((ulonglong)param_2 + (longlong)param_1);
}

// Offset<WindowsInternals::NT_SYSTEM_PROCESS_INFORMATION_*,unsigned_long> @ 146ccc130

NT_SYSTEM_PROCESS_INFORMATION * __cdecl
pointer::Offset<WindowsInternals::NT_SYSTEM_PROCESS_INFORMATION_*,unsigned_long>
          (void *param_1,ulong param_2)

{
  return (NT_SYSTEM_PROCESS_INFORMATION *)((ulonglong)param_2 + (longlong)param_1);
}

// Offset<void_*,unsigned_int> @ 146ccc140

void * __cdecl pointer::Offset<void_*,unsigned_int>(void *param_1,uint param_2)

{
  return (void *)((ulonglong)param_2 + (longlong)param_1);
}

// Offset<unsigned___int64_*,unsigned_long> @ 146ccc150

ulong64 * __cdecl pointer::Offset<unsigned___int64_*,unsigned_long>(void *param_1,ulong param_2)

{
  return (ulong64 *)((ulonglong)param_2 + (longlong)param_1);
}

// Offset<char_const_*,unsigned_long> @ 146ccc160

char * __cdecl pointer::Offset<char_const_*,unsigned_long>(void *param_1,ulong param_2)

{
  return (char *)((ulonglong)param_2 + (longlong)param_1);
}

// Offset<char_const_*,unsigned___int64> @ 146ccc170

char * __cdecl pointer::Offset<char_const_*,unsigned___int64>(void *param_1,ulong64 param_2)

{
  return (char *)((longlong)param_1 + param_2);
}

// Offset<unsigned_short_const_*,unsigned___int64> @ 146ccc180

ushort * __cdecl
pointer::Offset<unsigned_short_const_*,unsigned___int64>(void *param_1,ulong64 param_2)

{
  return (ushort *)((longlong)param_1 + param_2);
}

// Offset<_IMAGE_BASE_RELOCATION_const_*,unsigned_long> @ 146ccc190

_IMAGE_BASE_RELOCATION * __cdecl
pointer::Offset<_IMAGE_BASE_RELOCATION_const_*,unsigned_long>(void *param_1,ulong param_2)

{
  return (_IMAGE_BASE_RELOCATION *)((ulonglong)param_2 + (longlong)param_1);
}

// Offset<_IMAGE_BASE_RELOCATION_const_*,unsigned_long> @ 146ccc1a0

_IMAGE_BASE_RELOCATION * __cdecl
pointer::Offset<_IMAGE_BASE_RELOCATION_const_*,unsigned_long>(void *param_1,ulong param_2)

{
  return (_IMAGE_BASE_RELOCATION *)((ulonglong)param_2 + (longlong)param_1);
}

// Offset<_IMAGE_DEBUG_DIRECTORY_const_*,unsigned_long> @ 146ccc1b0

_IMAGE_DEBUG_DIRECTORY * __cdecl
pointer::Offset<_IMAGE_DEBUG_DIRECTORY_const_*,unsigned_long>(void *param_1,ulong param_2)

{
  return (_IMAGE_DEBUG_DIRECTORY *)((ulonglong)param_2 + (longlong)param_1);
}

// Offset<_IMAGE_IMPORT_DESCRIPTOR_const_*,unsigned_long> @ 146ccc1c0

_IMAGE_IMPORT_DESCRIPTOR * __cdecl
pointer::Offset<_IMAGE_IMPORT_DESCRIPTOR_const_*,unsigned_long>(void *param_1,ulong param_2)

{
  return (_IMAGE_IMPORT_DESCRIPTOR *)((ulonglong)param_2 + (longlong)param_1);
}

// Offset<_IMAGE_NT_HEADERS64_const_*,long> @ 146ccc1d0

_IMAGE_NT_HEADERS64 * __cdecl
pointer::Offset<_IMAGE_NT_HEADERS64_const_*,long>(void *param_1,long param_2)

{
  return (_IMAGE_NT_HEADERS64 *)((longlong)param_2 + (longlong)param_1);
}

// Offset<void_const_*,unsigned_int> @ 146ccc1e0

void * __cdecl pointer::Offset<void_const_*,unsigned_int>(void *param_1,uint param_2)

{
  return (void *)((ulonglong)param_2 + (longlong)param_1);
}

// Offset<void_const_*,unsigned_int> @ 146ccc1f0

void * __cdecl pointer::Offset<void_const_*,unsigned_int>(void *param_1,uint param_2)

{
  return (void *)((ulonglong)param_2 + (longlong)param_1);
}

// Offset<void_const_*,unsigned___int64> @ 146ccc200

void * __cdecl pointer::Offset<void_const_*,unsigned___int64>(void *param_1,ulong64 param_2)

{
  return (void *)((longlong)param_1 + param_2);
}

// Offset<void_const_*,unsigned___int64> @ 146ccc210

void * __cdecl pointer::Offset<void_const_*,unsigned___int64>(void *param_1,ulong64 param_2)

{
  return (void *)((longlong)param_1 + param_2);
}

// ReadNamedSharedMemory<unsigned_long> @ 146ccc220

ulong __cdecl Process::ReadNamedSharedMemory<unsigned_long>(NamedSharedMemory *param_1)

{
  return *(ulong *)param_1->memoryView;
}

// ReadNamedSharedMemory<unsigned___int64> @ 146ccc230

ulong64 __cdecl Process::ReadNamedSharedMemory<unsigned___int64>(NamedSharedMemory *param_1)

{
  return *(ulong64 *)param_1->memoryView;
}

// ReadProcessMemory<WindowsInternals::NT_LDR_DATA_TABLE_ENTRY> @ 146ccc240

NT_LDR_DATA_TABLE_ENTRY * __cdecl
Process::ReadProcessMemory<WindowsInternals::NT_LDR_DATA_TABLE_ENTRY>
          (NT_LDR_DATA_TABLE_ENTRY *__return_storage_ptr__,StrongTypedef<void_*,0> param_1,
          void *param_2)

{
  (__return_storage_ptr__->InLoadOrderLinks).Flink = (_LIST_ENTRY *)0x0;
  (__return_storage_ptr__->InLoadOrderLinks).Blink = (_LIST_ENTRY *)0x0;
  (__return_storage_ptr__->InMemoryOrderLinks).Flink = (_LIST_ENTRY *)0x0;
  (__return_storage_ptr__->InMemoryOrderLinks).Blink = (_LIST_ENTRY *)0x0;
  (__return_storage_ptr__->InInitializationOrderLinks).Flink = (_LIST_ENTRY *)0x0;
  (__return_storage_ptr__->InInitializationOrderLinks).Blink = (_LIST_ENTRY *)0x0;
  __return_storage_ptr__->DllBase = (void *)0x0;
  __return_storage_ptr__->EntryPoint = (void *)0x0;
  *(undefined8 *)&__return_storage_ptr__->SizeOfImage = 0;
  (__return_storage_ptr__->FullDllName).Length = 0;
  (__return_storage_ptr__->FullDllName).MaximumLength = 0;
  *(undefined4 *)&(__return_storage_ptr__->FullDllName).field_0x4 = 0;
  (__return_storage_ptr__->FullDllName).Buffer = (wchar_t *)0x0;
  (__return_storage_ptr__->BaseDllName).Length = 0;
  (__return_storage_ptr__->BaseDllName).MaximumLength = 0;
  *(undefined4 *)&(__return_storage_ptr__->BaseDllName).field_0x4 = 0;
  (__return_storage_ptr__->BaseDllName).Buffer = (wchar_t *)0x0;
  __return_storage_ptr__->Flags = 0;
  __return_storage_ptr__->LoadCount = 0;
  __return_storage_ptr__->ObsoleteLoadCount = 0;
  *(undefined8 *)&__return_storage_ptr__->TlsIndex = 0;
  (__return_storage_ptr__->HashLinks).Flink = (_LIST_ENTRY *)0x0;
  (__return_storage_ptr__->HashLinks).Blink = (_LIST_ENTRY *)0x0;
  ReadProcessMemory(param_1,param_2,__return_storage_ptr__,0x88);
  return __return_storage_ptr__;
}

// ReadProcessMemory<WindowsInternals::NT_PEB32> @ 146ccc2a0

NT_PEB32 * __cdecl
Process::ReadProcessMemory<WindowsInternals::NT_PEB32>
          (NT_PEB32 *__return_storage_ptr__,StrongTypedef<void_*,0> param_1,void *param_2)

{
  __return_storage_ptr__->Reserved[0] = '\0';
  __return_storage_ptr__->Reserved[1] = '\0';
  __return_storage_ptr__->Reserved[2] = '\0';
  __return_storage_ptr__->Reserved[3] = '\0';
  __return_storage_ptr__->Reserved[4] = '\0';
  __return_storage_ptr__->Reserved[5] = '\0';
  __return_storage_ptr__->Reserved[6] = '\0';
  __return_storage_ptr__->Reserved[7] = '\0';
  __return_storage_ptr__->Reserved[8] = '\0';
  __return_storage_ptr__->Reserved[9] = '\0';
  __return_storage_ptr__->Reserved[10] = '\0';
  __return_storage_ptr__->Reserved[0xb] = '\0';
  __return_storage_ptr__->Reserved[0xc] = '\0';
  __return_storage_ptr__->Reserved[0xd] = '\0';
  __return_storage_ptr__->Reserved[0xe] = '\0';
  __return_storage_ptr__->Reserved[0xf] = '\0';
  __return_storage_ptr__->ProcessParameters32 = 0;
  ReadProcessMemory(param_1,param_2,__return_storage_ptr__,0x14);
  return __return_storage_ptr__;
}

// ReadProcessMemory<WindowsInternals::NT_PEB> @ 146ccc2e0

NT_PEB * __cdecl
Process::ReadProcessMemory<WindowsInternals::NT_PEB>
          (NT_PEB *__return_storage_ptr__,StrongTypedef<void_*,0> param_1,void *param_2)

{
  memset(__return_storage_ptr__,0,0x2c8);
  ReadProcessMemory(param_1,param_2,__return_storage_ptr__,0x2c8);
  return __return_storage_ptr__;
}

// ReadProcessMemory<WindowsInternals::NT_PEB_LDR_DATA> @ 146ccc340

NT_PEB_LDR_DATA * __cdecl
Process::ReadProcessMemory<WindowsInternals::NT_PEB_LDR_DATA>
          (NT_PEB_LDR_DATA *__return_storage_ptr__,StrongTypedef<void_*,0> param_1,void *param_2)

{
  __return_storage_ptr__->Length = 0;
  __return_storage_ptr__->Initialized = '\0';
  *(undefined3 *)&__return_storage_ptr__->field_0x5 = 0;
  __return_storage_ptr__->SsHandle = (void *)0x0;
  (__return_storage_ptr__->InLoadOrderModuleList).Flink = (_LIST_ENTRY *)0x0;
  (__return_storage_ptr__->InLoadOrderModuleList).Blink = (_LIST_ENTRY *)0x0;
  (__return_storage_ptr__->InMemoryOrderModuleList).Flink = (_LIST_ENTRY *)0x0;
  (__return_storage_ptr__->InMemoryOrderModuleList).Blink = (_LIST_ENTRY *)0x0;
  (__return_storage_ptr__->InInitializationOrderModuleList).Flink = (_LIST_ENTRY *)0x0;
  (__return_storage_ptr__->InInitializationOrderModuleList).Blink = (_LIST_ENTRY *)0x0;
  __return_storage_ptr__->EntryInProgress = (void *)0x0;
  *(undefined8 *)&__return_storage_ptr__->ShutdownInProgress = 0;
  __return_storage_ptr__->ShutdownThreadId = (void *)0x0;
  ReadProcessMemory(param_1,param_2,__return_storage_ptr__,0x58);
  return __return_storage_ptr__;
}

// ReadProcessMemory<WindowsInternals::RTL_USER_PROCESS_PARAMETERS32> @ 146ccc390

RTL_USER_PROCESS_PARAMETERS32 * __cdecl
Process::ReadProcessMemory<WindowsInternals::RTL_USER_PROCESS_PARAMETERS32>
          (RTL_USER_PROCESS_PARAMETERS32 *__return_storage_ptr__,StrongTypedef<void_*,0> param_1,
          void *param_2)

{
  memset(__return_storage_ptr__,0,0x294);
  ReadProcessMemory(param_1,param_2,__return_storage_ptr__,0x294);
  return __return_storage_ptr__;
}

// ReadProcessMemory<WindowsInternals::RTL_USER_PROCESS_PARAMETERS> @ 146ccc3f0

RTL_USER_PROCESS_PARAMETERS * __cdecl
Process::ReadProcessMemory<WindowsInternals::RTL_USER_PROCESS_PARAMETERS>
          (RTL_USER_PROCESS_PARAMETERS *__return_storage_ptr__,StrongTypedef<void_*,0> param_1,
          void *param_2)

{
  memset(__return_storage_ptr__,0,0x3f8);
  ReadProcessMemory(param_1,param_2,__return_storage_ptr__,0x3f8);
  return __return_storage_ptr__;
}

// ReceiveAndCallAction<actions::CallEntryPoint> @ 146ccc450

bool __cdecl
CommandMap::ReceiveAndCallAction<actions::CallEntryPoint>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  undefined1 local_res20 [8];
  longlong local_18;
  ulonglong uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  local_res20[0] = DuplexPipe::Read(param_1,&local_18,0x10);
  if (param_4 != 0) {
    bVar1 = DuplexPipe::Read(param_1,param_3,param_4);
    local_res20[0] = (bool)local_res20[0] && bVar1;
  }
  bVar1 = (bool)local_res20[0] != false;
  if (bVar1) {
    (*(code *)((uStack_10 & 0xffffffff) + local_18))(local_18,1,0);
    local_res20[0] = 0;
    DuplexPipe::Send(param_1,local_res20,1);
  }
  else {
    DuplexPipe::Send(param_1,local_res20,1);
  }
  return bVar1;
}

// ReceiveAndCallAction<actions::CallHooks> @ 146ccc510

bool __cdecl
CommandMap::ReceiveAndCallAction<actions::CallHooks>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 local_res20 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_res20[0] = DuplexPipe::Read(param_1,&local_28,0x18);
  if (param_4 != 0) {
    bVar1 = DuplexPipe::Read(param_1,param_3,param_4);
    local_res20[0] = (bool)local_res20[0] && bVar1;
  }
  if ((bool)local_res20[0] == false) {
    DuplexPipe::Send(param_1,local_res20,1);
    bVar1 = false;
  }
  else {
    if ((uint)local_28 < 6) {
                    /* WARNING: Could not recover jumptable at 0x000146ccc59e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(switchD_1501dbc7b::caseD_1.e_magic +
                        *(uint *)(&DAT_146ccc608 + (longlong)(int)(uint)local_28 * 4)))
                        (switchD_1501dbc7b::caseD_1.e_magic +
                         *(uint *)(&DAT_146ccc608 + (longlong)(int)(uint)local_28 * 4));
      return (bool)uVar2;
    }
    local_res20[0] = 0;
    DuplexPipe::Send(param_1,local_res20,1);
    bVar1 = true;
  }
  return bVar1;
}

// ReceiveAndCallAction<actions::CompilationFinished> @ 146ccc630

bool __cdecl
CommandMap::ReceiveAndCallAction<actions::CompilationFinished>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_1,local_18,1);
  if (bVar1 != false) {
    GIsCompileActive = false;
  }
  return false;
}

// ReceiveAndCallAction<actions::DisableModulesFinished> @ 146ccc6c0

bool __cdecl
CommandMap::ReceiveAndCallAction<actions::DisableModulesFinished>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined8 *local_18 [2];
  
  local_18[0] = (undefined8 *)0x0;
  bVar1 = DuplexPipe::Read(param_1,local_18,8);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  if (bVar1 != false) {
    SetEvent((HANDLE)*local_18[0]);
  }
  local_res20[0] = 0;
  DuplexPipe::Send(param_1,local_res20,1);
  return false;
}

// ReceiveAndCallAction<actions::EnableModulesFinished> @ 146ccc760

bool __cdecl
CommandMap::ReceiveAndCallAction<actions::EnableModulesFinished>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined8 *local_18 [2];
  
  local_18[0] = (undefined8 *)0x0;
  bVar1 = DuplexPipe::Read(param_1,local_18,8);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  if (bVar1 != false) {
    SetEvent((HANDLE)*local_18[0]);
  }
  local_res20[0] = 0;
  DuplexPipe::Send(param_1,local_res20,1);
  return false;
}

// ReceiveAndCallAction<actions::EnterSyncPoint> @ 146ccc800

bool __cdecl
CommandMap::ReceiveAndCallAction<actions::EnterSyncPoint>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  local_18[0] = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar1 = DuplexPipe::Read(param_1,param_3,param_4);
    local_18[0] = (bool)local_18[0] && bVar1;
  }
  if ((bool)local_18[0] == false) {
    DuplexPipe::Send(param_1,local_18,1);
    bVar1 = false;
  }
  else {
    if (g_isSyncPointUsed != false) {
      ReleaseSemaphore(g_dllSyncPoint.m_sema,1,(LPLONG)0x0);
      Semaphore::WaitTimeout((Semaphore *)&g_enterUserSyncPoint,0xffffffff);
    }
    local_18[0] = 0;
    DuplexPipe::Send(param_1,local_18,1);
    bVar1 = true;
  }
  return bVar1;
}

// ReceiveAndCallAction<actions::HandleExceptionFinished> @ 146ccc8e0

bool __cdecl
CommandMap::ReceiveAndCallAction<actions::HandleExceptionFinished>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  bVar1 = DuplexPipe::Read(param_1,&local_38,0x20);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_res20[0] = 0;
  if (bVar1 != false) {
    *(undefined8 *)param_2 = local_38;
    *(undefined8 *)((longlong)param_2 + 8) = uStack_30;
    *(undefined8 *)((longlong)param_2 + 0x10) = local_28;
    *(undefined1 *)((longlong)param_2 + 0x18) = (undefined1)uStack_20;
  }
  DuplexPipe::Send(param_1,local_res20,1);
  return false;
}

// ReceiveAndCallAction<actions::LeaveSyncPoint> @ 146ccc990

bool __cdecl
CommandMap::ReceiveAndCallAction<actions::LeaveSyncPoint>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  local_18[0] = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar1 = DuplexPipe::Read(param_1,param_3,param_4);
    local_18[0] = (bool)local_18[0] && bVar1;
  }
  if ((bool)local_18[0] == false) {
    DuplexPipe::Send(param_1,local_18,1);
    bVar1 = false;
  }
  else {
    if (g_isSyncPointUsed != false) {
      ReleaseSemaphore(g_leaveUserSyncPoint.m_sema,1,(LPLONG)0x0);
    }
    local_18[0] = 0;
    DuplexPipe::Send(param_1,local_18,1);
    bVar1 = true;
  }
  return bVar1;
}

// ReceiveAndCallAction<actions::LoadPatch> @ 146ccca60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
CommandMap::ReceiveAndCallAction<actions::LoadPatch>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  undefined1 auStack_278 [32];
  undefined1 local_258 [8];
  undefined8 local_250;
  HMODULE local_248 [2];
  WCHAR local_238 [264];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_278;
  memset(local_238,0,0x208);
  local_258[0] = DuplexPipe::Read(param_1,local_238,0x208);
  if (param_4 != 0) {
    bVar1 = DuplexPipe::Read(param_1,param_3,param_4);
    local_258[0] = (bool)local_258[0] && bVar1;
  }
  if ((bool)local_258[0] == false) {
    DuplexPipe::Send(param_1,local_258,1);
    bVar1 = false;
  }
  else {
    hModule = LoadLibraryW(local_238);
    if (hModule != (HMODULE)0x0) {
      pFVar2 = GetProcAddress(hModule,"InitNatvisHelpers");
      if (pFVar2 != (FARPROC)0x0) {
        (*pFVar2)(GNameBlocksDebug,*GObjectArrayForDebugVisualizers,*GDebuggingState);
      }
    }
    GHasLoadedPatch = true;
    FLiveCodingModule::BeginReload();
    local_258[0] = 0;
    DuplexPipe::Send(param_1,local_258,1);
    local_250 = 0x6f;
    local_248[0] = hModule;
    DuplexPipe::Send(param_1,&local_250,8);
    DuplexPipe::Send(param_1,local_248,8);
    local_258[0] = 0;
    DuplexPipe::Read(param_1,local_258,1);
    bVar1 = true;
  }
  return bVar1;
}

// ReceiveAndCallAction<actions::LogOutput> @ 146cccbd0

bool __cdecl
CommandMap::ReceiveAndCallAction<actions::LogOutput>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  local_18[0] = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar1 = DuplexPipe::Read(param_1,param_3,param_4);
    local_18[0] = (bool)local_18[0] && bVar1;
  }
  bVar1 = (bool)local_18[0] != false;
  if (bVar1) {
    (*OutputHandler)(USER,LOG_INFO,param_3);
    local_18[0] = 0;
    DuplexPipe::Send(param_1,local_18,1);
  }
  else {
    DuplexPipe::Send(param_1,local_18,1);
  }
  return bVar1;
}

// ReceiveAndCallAction<actions::PostCompile> @ 146cccc80

bool __cdecl
CommandMap::ReceiveAndCallAction<actions::PostCompile>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  PostCompileResult local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = Success;
  bVar1 = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_18[0] = 0;
  if (bVar1 != false) {
    GPostCompileResult = local_res20[0];
    GIsCompileActive = false;
    DuplexPipe::Send(param_1,local_18,1);
  }
  else {
    DuplexPipe::Send(param_1,local_18,1);
  }
  return bVar1 != false;
}

// ReceiveAndCallAction<actions::PreCompile> @ 146cccd20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
CommandMap::ReceiveAndCallAction<actions::PreCompile>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  local_18[0] = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar1 = DuplexPipe::Read(param_1,param_3,param_4);
    local_18[0] = (bool)local_18[0] && bVar1;
  }
  if ((bool)local_18[0] == false) {
    DuplexPipe::Send(param_1,local_18,1);
    bVar1 = false;
  }
  else {
    if (3 < (byte)LogLiveCoding._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLiveCoding);
    }
    GIsCompileActive = true;
    if (GLiveCodingModule != (FLiveCodingModule *)0x0) {
      FLiveCodingModule::BeginReload();
    }
    local_18[0] = 0;
    DuplexPipe::Send(param_1,local_18,1);
    bVar1 = true;
  }
  return bVar1;
}

// ReceiveAndCallAction<actions::RegisterProcessFinished> @ 146ccce00

bool __cdecl
CommandMap::ReceiveAndCallAction<actions::RegisterProcessFinished>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  undefined1 local_28 [16];
  
  local_res20[0] = 0;
  bVar1 = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar2 = DuplexPipe::Read(param_1,param_3,param_4);
    bVar1 = bVar1 && bVar2;
  }
  local_28[0] = 0;
  if (bVar1 != false) {
    *(undefined1 *)param_2 = local_res20[0];
  }
  DuplexPipe::Send(param_1,local_28,1);
  return false;
}

// ReceiveAndCallAction<actions::TriggerReload> @ 146ccce90

bool __cdecl
CommandMap::ReceiveAndCallAction<actions::TriggerReload>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  local_18[0] = DuplexPipe::Read(param_1,local_res20,1);
  if (param_4 != 0) {
    bVar1 = DuplexPipe::Read(param_1,param_3,param_4);
    local_18[0] = (bool)local_18[0] && bVar1;
  }
  if ((bool)local_18[0] == false) {
    DuplexPipe::Send(param_1,local_18,1);
    bVar1 = false;
  }
  else {
    GTriggerReload = true;
    if (g_isSyncPointUsed != false) {
      ReleaseSemaphore(g_leaveUserSyncPoint.m_sema,1,(LPLONG)0x0);
    }
    if (g_isSyncPointUsed != false) {
      ReleaseSemaphore(g_dllSyncPoint.m_sema,1,(LPLONG)0x0);
      Semaphore::WaitTimeout((Semaphore *)&g_enterUserSyncPoint,0xffffffff);
    }
    local_18[0] = 0;
    DuplexPipe::Send(param_1,local_18,1);
    bVar1 = true;
  }
  return bVar1;
}

// ReceiveAndCallAction<actions::UnloadPatch> @ 146cccf90

bool __cdecl
CommandMap::ReceiveAndCallAction<actions::UnloadPatch>
          (DuplexPipe *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  bool bVar1;
  undefined1 local_res20 [8];
  HMODULE local_18 [2];
  
  local_18[0] = (HMODULE)0x0;
  local_res20[0] = DuplexPipe::Read(param_1,local_18,8);
  if (param_4 != 0) {
    bVar1 = DuplexPipe::Read(param_1,param_3,param_4);
    local_res20[0] = (bool)local_res20[0] && bVar1;
  }
  bVar1 = (bool)local_res20[0] != false;
  if (bVar1) {
    FreeLibrary(local_18[0]);
    local_res20[0] = 0;
    DuplexPipe::Send(param_1,local_res20,1);
  }
  else {
    DuplexPipe::Send(param_1,local_res20,1);
  }
  return bVar1;
}

// StaticEnum<enum_ELiveCodingStartupMode> @ 146ccd040

UEnum * __cdecl StaticEnum<enum_ELiveCodingStartupMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveCodingStartupMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveCoding();
    Z_Registration_Info_UEnum_ELiveCodingStartupMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode,(UObject *)pUVar1,
                       L"ELiveCodingStartupMode");
  }
  return Z_Registration_Info_UEnum_ELiveCodingStartupMode.OuterSingleton;
}

// WriteNamedSharedMemory<unsigned_long> @ 146ccd080

void __cdecl
Process::WriteNamedSharedMemory<unsigned_long>(NamedSharedMemory *param_1,ulong *param_2)

{
  *(ulong *)param_1->memoryView = *param_2;
  return;
}

// WriteNamedSharedMemory<unsigned___int64> @ 146ccd090

void __cdecl
Process::WriteNamedSharedMemory<unsigned___int64>(NamedSharedMemory *param_1,ulong64 *param_2)

{
  *(ulong64 *)param_1->memoryView = *param_2;
  return;
}

// _Atomic_address_as<int,std::_Atomic_padded<enum_FLiveCodingModule::EState>_> @ 146ccd0b0

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<enum_FLiveCodingModule::EState>_>
          (_Atomic_padded<FLiveCodingModule::EState> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<enum_FLiveCodingModule::EState>_> @ 146ccd0c0

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<enum_FLiveCodingModule::EState>_>
          (_Atomic_padded<FLiveCodingModule::EState> *param_1)

{
  return (int *)param_1;
}

// _Atomic_reinterpret_as<int,enum_FLiveCodingModule::EState> @ 146ccd0d0

int __cdecl std::_Atomic_reinterpret_as<int,enum_FLiveCodingModule::EState>(EState *param_1)

{
  return *param_1;
}

// _Construct_in_place_by_deref<ClientUserCommandThread::BaseCommand_*_*,ClientUserCommandThread::BaseCommand_*_*_*> @ 146ccd0e0

void __cdecl
std::
_Construct_in_place_by_deref<ClientUserCommandThread::BaseCommand_*_*,ClientUserCommandThread::BaseCommand_*_*_*>
          (BaseCommand ***param_1,BaseCommand ****param_2)

{
  *param_1 = **param_2;
  return;
}

// _Copy_backward_memmove<char_*,char_*> @ 146ccd0f0

char * __cdecl std::_Copy_backward_memmove<char_*,char_*>(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = memmove(param_3 + -((longlong)param_2 - (longlong)param_1),param_1,
                   (longlong)param_2 - (longlong)param_1);
  return pcVar1;
}

// _Copy_backward_memmove<executable::ImageSection_*,executable::ImageSection_*> @ 146ccd110

ImageSection * __cdecl
std::_Copy_backward_memmove<executable::ImageSection_*,executable::ImageSection_*>
          (ImageSection *param_1,ImageSection *param_2,ImageSection *param_3)

{
  ImageSection *pIVar1;
  
  pIVar1 = memmove((void *)((longlong)param_3 - ((longlong)param_2 - (longlong)param_1)),param_1,
                   (longlong)param_2 - (longlong)param_1);
  return pIVar1;
}

// _Copy_backward_memmove<wchar_t_*,wchar_t_*> @ 146ccd130

wchar_t * __cdecl
std::_Copy_backward_memmove<wchar_t_*,wchar_t_*>(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = memmove((void *)((longlong)param_3 - ((longlong)param_2 - (longlong)param_1)),param_1,
                   (longlong)param_2 - (longlong)param_1);
  return pwVar1;
}

// _Copy_memmove<char_*,char_*> @ 146ccd150

char * __cdecl std::_Copy_memmove<char_*,char_*>(char *param_1,char *param_2,char *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return param_3 + ((longlong)param_2 - (longlong)param_1);
}

// _Copy_memmove<ClientUserCommandThread::BaseCommand_*_*_*,ClientUserCommandThread::BaseCommand_*_*_*> @ 146ccd190

BaseCommand *** __cdecl
std::
_Copy_memmove<ClientUserCommandThread::BaseCommand_*_*_*,ClientUserCommandThread::BaseCommand_*_*_*>
          (BaseCommand ***param_1,BaseCommand ***param_2,BaseCommand ***param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (BaseCommand ***)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove<HINSTANCE___*_*,HINSTANCE___*_*> @ 146ccd1d0

HINSTANCE__ ** __cdecl
std::_Copy_memmove<HINSTANCE___*_*,HINSTANCE___*_*>
          (HINSTANCE__ **param_1,HINSTANCE__ **param_2,HINSTANCE__ **param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (HINSTANCE__ **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove<executable::ImageSection_*,executable::ImageSection_*> @ 146ccd210

ImageSection * __cdecl
std::_Copy_memmove<executable::ImageSection_*,executable::ImageSection_*>
          (ImageSection *param_1,ImageSection *param_2,ImageSection *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (ImageSection *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove<executable::ImportModule_*,executable::ImportModule_*> @ 146ccd250

ImportModule * __cdecl
std::_Copy_memmove<executable::ImportModule_*,executable::ImportModule_*>
          (ImportModule *param_1,ImportModule *param_2,ImportModule *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (ImportModule *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove<commands::ModuleData_*,commands::ModuleData_*> @ 146ccd290

ModuleData * __cdecl
std::_Copy_memmove<commands::ModuleData_*,commands::ModuleData_*>
          (ModuleData *param_1,ModuleData *param_2,ModuleData *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (ModuleData *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove<StrongTypedef<unsigned_long,0>_*,StrongTypedef<unsigned_long,0>_*> @ 146ccd2d0

StrongTypedef<unsigned_long,0> * __cdecl
std::_Copy_memmove<StrongTypedef<unsigned_long,0>_*,StrongTypedef<unsigned_long,0>_*>
          (StrongTypedef<unsigned_long,0> *param_1,StrongTypedef<unsigned_long,0> *param_2,
          StrongTypedef<unsigned_long,0> *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (StrongTypedef<unsigned_long,0> *)
         (((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove<wchar_t_*,wchar_t_*> @ 146ccd310

wchar_t * __cdecl
std::_Copy_memmove<wchar_t_*,wchar_t_*>(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (wchar_t *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove_n<char_*,char_*> @ 146ccd350

char * __cdecl std::_Copy_memmove_n<char_*,char_*>(char *param_1,ulong64 param_2,char *param_3)

{
  memmove(param_3,param_1,param_2);
  return param_3 + param_2;
}

// _Copy_memmove_n<wchar_t_const_*,wchar_t_*> @ 146ccd390

wchar_t * __cdecl
std::_Copy_memmove_n<wchar_t_const_*,wchar_t_*>(wchar_t *param_1,ulong64 param_2,wchar_t *param_3)

{
  memmove(param_3,param_1,param_2 * 2);
  return param_3 + param_2;
}

// _Copy_memmove_tail<char_*> @ 146ccd3d0

char * __cdecl
std::_Copy_memmove_tail<char_*>(char *param_1,char *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return param_2 + param_3;
}

// _Copy_memmove_tail<ClientUserCommandThread::BaseCommand_*_*_*> @ 146ccd400

BaseCommand *** __cdecl
std::_Copy_memmove_tail<ClientUserCommandThread::BaseCommand_*_*_*>
          (char *param_1,BaseCommand ***param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (BaseCommand ***)((longlong)param_2 + param_3);
}

// _Copy_memmove_tail<HINSTANCE___*_*> @ 146ccd430

HINSTANCE__ ** __cdecl
std::_Copy_memmove_tail<HINSTANCE___*_*>
          (char *param_1,HINSTANCE__ **param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (HINSTANCE__ **)((longlong)param_2 + param_3);
}

// _Copy_memmove_tail<executable::ImageSection_*> @ 146ccd460

ImageSection * __cdecl
std::_Copy_memmove_tail<executable::ImageSection_*>
          (char *param_1,ImageSection *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (ImageSection *)((longlong)&param_2->rva + param_3);
}

// _Copy_memmove_tail<executable::ImportModule_*> @ 146ccd490

ImportModule * __cdecl
std::_Copy_memmove_tail<executable::ImportModule_*>
          (char *param_1,ImportModule *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (ImportModule *)(param_2->path + param_3);
}

// _Copy_memmove_tail<commands::ModuleData_*> @ 146ccd4c0

ModuleData * __cdecl
std::_Copy_memmove_tail<commands::ModuleData_*>
          (char *param_1,ModuleData *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (ModuleData *)((longlong)param_2->path + (param_3 - 8));
}

// _Copy_memmove_tail<StrongTypedef<unsigned_long,0>_*> @ 146ccd4f0

StrongTypedef<unsigned_long,0> * __cdecl
std::_Copy_memmove_tail<StrongTypedef<unsigned_long,0>_*>
          (char *param_1,StrongTypedef<unsigned_long,0> *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (StrongTypedef<unsigned_long,0> *)((longlong)&param_2->m_value + param_3);
}

// _Copy_memmove_tail<wchar_t_*> @ 146ccd520

wchar_t * __cdecl
std::_Copy_memmove_tail<wchar_t_*>(char *param_1,wchar_t *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (wchar_t *)((longlong)param_2 + param_3);
}

// _Emplace_one_at_back<executable::ImportModule_&> @ 146ccd550

ImportModule * __thiscall
std::vector<executable::ImportModule,std::allocator<executable::ImportModule>_>::
_Emplace_one_at_back<executable::ImportModule_&>
          (vector<executable::ImportModule,std::allocator<executable::ImportModule>_> *this,
          ImportModule *param_1)

{
  ulonglong uVar1;
  char *pcVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ImportModule *pIVar7;
  char *pcVar8;
  ImportModule *pIVar9;
  char *_Src;
  ulonglong uVar10;
  size_t _Size;
  char *pcVar11;
  
  pIVar7 = (this->_Mypair)._Myval2._Myend;
  _Src = ((this->_Mypair)._Myval2._Mylast)->path;
  if ((ImportModule *)_Src != pIVar7) {
    lVar6 = 2;
    do {
      pcVar8 = _Src + 0x80;
      uVar5 = *(undefined8 *)((longlong)param_1 + 8);
      pcVar11 = (char *)((longlong)param_1 + 0x80);
      *(undefined8 *)_Src = *(undefined8 *)param_1;
      *(undefined8 *)(_Src + 8) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_1 + 0x18);
      *(undefined8 *)(_Src + 0x10) = *(undefined8 *)((longlong)param_1 + 0x10);
      *(undefined8 *)(_Src + 0x18) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_1 + 0x28);
      *(undefined8 *)(_Src + 0x20) = *(undefined8 *)((longlong)param_1 + 0x20);
      *(undefined8 *)(_Src + 0x28) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_1 + 0x38);
      *(undefined8 *)(_Src + 0x30) = *(undefined8 *)((longlong)param_1 + 0x30);
      *(undefined8 *)(_Src + 0x38) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_1 + 0x48);
      *(undefined8 *)(_Src + 0x40) = *(undefined8 *)((longlong)param_1 + 0x40);
      *(undefined8 *)(_Src + 0x48) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_1 + 0x58);
      *(undefined8 *)(_Src + 0x50) = *(undefined8 *)((longlong)param_1 + 0x50);
      *(undefined8 *)(_Src + 0x58) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_1 + 0x68);
      *(undefined8 *)(_Src + 0x60) = *(undefined8 *)((longlong)param_1 + 0x60);
      *(undefined8 *)(_Src + 0x68) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_1 + 0x78);
      *(undefined8 *)(_Src + 0x70) = *(undefined8 *)((longlong)param_1 + 0x70);
      *(undefined8 *)(_Src + 0x78) = uVar5;
      lVar6 = lVar6 + -1;
      param_1 = (ImportModule *)pcVar11;
      _Src = pcVar8;
    } while (lVar6 != 0);
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar11;
    pIVar7 = (this->_Mypair)._Myval2._Mylast;
    (this->_Mypair)._Myval2._Mylast = pIVar7 + 1;
    return pIVar7;
  }
  pIVar9 = (this->_Mypair)._Myval2._Myfirst;
  lVar6 = ((longlong)_Src - (longlong)pIVar9) / 0x104;
  if (lVar6 == 0xfc0fc0fc0fc0fc) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar1 = lVar6 + 1;
  uVar4 = ((longlong)pIVar7 - (longlong)pIVar9) / 0x104;
  if (0xfc0fc0fc0fc0fc - (uVar4 >> 1) < uVar4) {
    uVar10 = 0xfc0fc0fc0fc0fc;
  }
  else {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar10 = uVar1;
    if (uVar1 <= uVar4) {
      uVar10 = uVar4;
    }
    if (0xfc0fc0fc0fc0fc < uVar10) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  pIVar7 = _Allocate<16,std::_Default_allocate_traits>(uVar10 * 0x104);
  pcVar11 = pIVar7[lVar6].path;
  lVar6 = 2;
  pcVar8 = pcVar11;
  do {
    pcVar2 = pcVar8 + 0x80;
    uVar5 = *(undefined8 *)((longlong)param_1 + 8);
    pcVar3 = (char *)((longlong)param_1 + 0x80);
    *(undefined8 *)pcVar8 = *(undefined8 *)param_1;
    *(undefined8 *)(pcVar8 + 8) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_1 + 0x18);
    *(undefined8 *)(pcVar8 + 0x10) = *(undefined8 *)((longlong)param_1 + 0x10);
    *(undefined8 *)(pcVar8 + 0x18) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_1 + 0x28);
    *(undefined8 *)(pcVar8 + 0x20) = *(undefined8 *)((longlong)param_1 + 0x20);
    *(undefined8 *)(pcVar8 + 0x28) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_1 + 0x38);
    *(undefined8 *)(pcVar8 + 0x30) = *(undefined8 *)((longlong)param_1 + 0x30);
    *(undefined8 *)(pcVar8 + 0x38) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_1 + 0x48);
    *(undefined8 *)(pcVar8 + 0x40) = *(undefined8 *)((longlong)param_1 + 0x40);
    *(undefined8 *)(pcVar8 + 0x48) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_1 + 0x58);
    *(undefined8 *)(pcVar8 + 0x50) = *(undefined8 *)((longlong)param_1 + 0x50);
    *(undefined8 *)(pcVar8 + 0x58) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_1 + 0x68);
    *(undefined8 *)(pcVar8 + 0x60) = *(undefined8 *)((longlong)param_1 + 0x60);
    *(undefined8 *)(pcVar8 + 0x68) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_1 + 0x78);
    *(undefined8 *)(pcVar8 + 0x70) = *(undefined8 *)((longlong)param_1 + 0x70);
    *(undefined8 *)(pcVar8 + 0x78) = uVar5;
    lVar6 = lVar6 + -1;
    pcVar8 = pcVar2;
    param_1 = (ImportModule *)pcVar3;
  } while (lVar6 != 0);
  *(undefined4 *)pcVar2 = *(undefined4 *)pcVar3;
  pIVar9 = (this->_Mypair)._Myval2._Mylast;
  pcVar8 = ((this->_Mypair)._Myval2._Myfirst)->path;
  if ((ImportModule *)_Src == pIVar9) {
    _Size = (longlong)pIVar9 - (longlong)pcVar8;
    pIVar9 = pIVar7;
    _Src = pcVar8;
  }
  else {
    memmove(pIVar7,pcVar8,(longlong)_Src - (longlong)pcVar8);
    pIVar9 = (ImportModule *)(pcVar11 + 0x104);
    _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)_Src;
  }
  memmove(pIVar9,_Src,_Size);
  _Change_array(this,pIVar7,uVar1,uVar10);
  return (ImportModule *)pcVar11;
}

// _Emplace_one_at_back<commands::ModuleData_&> @ 146ccd770

ModuleData * __thiscall
std::vector<commands::ModuleData,std::allocator<commands::ModuleData>_>::
_Emplace_one_at_back<commands::ModuleData_&>
          (vector<commands::ModuleData,std::allocator<commands::ModuleData>_> *this,
          ModuleData *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ModuleData *pMVar5;
  ModuleData *pMVar6;
  ModuleData *pMVar7;
  ModuleData *_Src;
  ModuleData *pMVar8;
  ulonglong uVar9;
  size_t _Size;
  ModuleData *pMVar10;
  
  pMVar7 = (this->_Mypair)._Myval2._Myend;
  _Src = (this->_Mypair)._Myval2._Mylast;
  if (_Src != pMVar7) {
    lVar4 = 4;
    do {
      pMVar5 = _Src;
      pMVar7 = param_1;
      uVar3 = *(undefined8 *)pMVar7->path;
      pMVar5->base = pMVar7->base;
      *(undefined8 *)pMVar5->path = uVar3;
      uVar3 = *(undefined8 *)(pMVar7->path + 8);
      *(undefined8 *)(pMVar5->path + 4) = *(undefined8 *)(pMVar7->path + 4);
      *(undefined8 *)(pMVar5->path + 8) = uVar3;
      uVar3 = *(undefined8 *)(pMVar7->path + 0x10);
      *(undefined8 *)(pMVar5->path + 0xc) = *(undefined8 *)(pMVar7->path + 0xc);
      *(undefined8 *)(pMVar5->path + 0x10) = uVar3;
      uVar3 = *(undefined8 *)(pMVar7->path + 0x18);
      *(undefined8 *)(pMVar5->path + 0x14) = *(undefined8 *)(pMVar7->path + 0x14);
      *(undefined8 *)(pMVar5->path + 0x18) = uVar3;
      uVar3 = *(undefined8 *)(pMVar7->path + 0x20);
      *(undefined8 *)(pMVar5->path + 0x1c) = *(undefined8 *)(pMVar7->path + 0x1c);
      *(undefined8 *)(pMVar5->path + 0x20) = uVar3;
      uVar3 = *(undefined8 *)(pMVar7->path + 0x28);
      *(undefined8 *)(pMVar5->path + 0x24) = *(undefined8 *)(pMVar7->path + 0x24);
      *(undefined8 *)(pMVar5->path + 0x28) = uVar3;
      uVar3 = *(undefined8 *)(pMVar7->path + 0x30);
      *(undefined8 *)(pMVar5->path + 0x2c) = *(undefined8 *)(pMVar7->path + 0x2c);
      *(undefined8 *)(pMVar5->path + 0x30) = uVar3;
      uVar3 = *(undefined8 *)(pMVar7->path + 0x38);
      *(undefined8 *)(pMVar5->path + 0x34) = *(undefined8 *)(pMVar7->path + 0x34);
      *(undefined8 *)(pMVar5->path + 0x38) = uVar3;
      lVar4 = lVar4 + -1;
      param_1 = (ModuleData *)(pMVar7->path + 0x3c);
      _Src = (ModuleData *)(pMVar5->path + 0x3c);
    } while (lVar4 != 0);
    uVar3 = *(undefined8 *)(pMVar7->path + 0x40);
    ((ModuleData *)(pMVar5->path + 0x3c))->base = ((ModuleData *)(pMVar7->path + 0x3c))->base;
    *(undefined8 *)(pMVar5->path + 0x40) = uVar3;
    pMVar7 = (this->_Mypair)._Myval2._Mylast;
    (this->_Mypair)._Myval2._Mylast = pMVar7 + 1;
    return pMVar7;
  }
  pMVar5 = (this->_Mypair)._Myval2._Myfirst;
  lVar4 = ((longlong)_Src - (longlong)pMVar5) / 0x210;
  if (lVar4 == 0x7c1f07c1f07c1f) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar1 = lVar4 + 1;
  uVar2 = ((longlong)pMVar7 - (longlong)pMVar5) / 0x210;
  if (0x7c1f07c1f07c1f - (uVar2 >> 1) < uVar2) {
    uVar9 = 0x7c1f07c1f07c1f;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar9 = uVar1;
    if (uVar1 <= uVar2) {
      uVar9 = uVar2;
    }
    if (0x7c1f07c1f07c1f < uVar9) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  pMVar5 = _Allocate<16,std::_Default_allocate_traits>(uVar9 * 0x210);
  pMVar10 = pMVar5 + lVar4;
  lVar4 = 4;
  pMVar7 = pMVar10;
  do {
    pMVar8 = param_1;
    pMVar6 = pMVar7;
    uVar3 = *(undefined8 *)pMVar8->path;
    pMVar6->base = pMVar8->base;
    *(undefined8 *)pMVar6->path = uVar3;
    uVar3 = *(undefined8 *)(pMVar8->path + 8);
    *(undefined8 *)(pMVar6->path + 4) = *(undefined8 *)(pMVar8->path + 4);
    *(undefined8 *)(pMVar6->path + 8) = uVar3;
    uVar3 = *(undefined8 *)(pMVar8->path + 0x10);
    *(undefined8 *)(pMVar6->path + 0xc) = *(undefined8 *)(pMVar8->path + 0xc);
    *(undefined8 *)(pMVar6->path + 0x10) = uVar3;
    uVar3 = *(undefined8 *)(pMVar8->path + 0x18);
    *(undefined8 *)(pMVar6->path + 0x14) = *(undefined8 *)(pMVar8->path + 0x14);
    *(undefined8 *)(pMVar6->path + 0x18) = uVar3;
    uVar3 = *(undefined8 *)(pMVar8->path + 0x20);
    *(undefined8 *)(pMVar6->path + 0x1c) = *(undefined8 *)(pMVar8->path + 0x1c);
    *(undefined8 *)(pMVar6->path + 0x20) = uVar3;
    uVar3 = *(undefined8 *)(pMVar8->path + 0x28);
    *(undefined8 *)(pMVar6->path + 0x24) = *(undefined8 *)(pMVar8->path + 0x24);
    *(undefined8 *)(pMVar6->path + 0x28) = uVar3;
    uVar3 = *(undefined8 *)(pMVar8->path + 0x30);
    *(undefined8 *)(pMVar6->path + 0x2c) = *(undefined8 *)(pMVar8->path + 0x2c);
    *(undefined8 *)(pMVar6->path + 0x30) = uVar3;
    uVar3 = *(undefined8 *)(pMVar8->path + 0x38);
    *(undefined8 *)(pMVar6->path + 0x34) = *(undefined8 *)(pMVar8->path + 0x34);
    *(undefined8 *)(pMVar6->path + 0x38) = uVar3;
    lVar4 = lVar4 + -1;
    pMVar7 = (ModuleData *)(pMVar6->path + 0x3c);
    param_1 = (ModuleData *)(pMVar8->path + 0x3c);
  } while (lVar4 != 0);
  uVar3 = *(undefined8 *)(pMVar8->path + 0x40);
  ((ModuleData *)(pMVar6->path + 0x3c))->base = ((ModuleData *)(pMVar8->path + 0x3c))->base;
  *(undefined8 *)(pMVar6->path + 0x40) = uVar3;
  pMVar7 = (this->_Mypair)._Myval2._Mylast;
  pMVar6 = (this->_Mypair)._Myval2._Myfirst;
  if (_Src == pMVar7) {
    _Size = (longlong)pMVar7 - (longlong)pMVar6;
    pMVar7 = pMVar5;
    _Src = pMVar6;
  }
  else {
    memmove(pMVar5,pMVar6,(longlong)_Src - (longlong)pMVar6);
    pMVar7 = pMVar10 + 1;
    _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)_Src;
  }
  memmove(pMVar7,_Src,_Size);
  _Change_array(this,pMVar5,uVar1,uVar9);
  return pMVar10;
}

// _Emplace_reallocate<wchar_t_const_*_&,wchar_t_const_*_&> @ 146ccd990

VfsEntry * __thiscall
std::vector<Filesystem::VfsEntry,std::allocator<Filesystem::VfsEntry>_>::
_Emplace_reallocate<wchar_t_const_*_&,wchar_t_const_*_&>
          (vector<Filesystem::VfsEntry,std::allocator<Filesystem::VfsEntry>_> *this,
          VfsEntry *param_1,wchar_t **param_2,wchar_t **param_3)

{
  VfsEntry *pVVar1;
  VfsEntry *pVVar2;
  ulonglong uVar3;
  VfsEntry *pVVar4;
  VfsEntry *pVVar5;
  ulong64 uVar6;
  VfsEntry *pVVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  pVVar1 = (this->_Mypair)._Myval2._Myfirst;
  lVar8 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pVVar1 >> 6;
  if (lVar8 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar9 = lVar8 + 1;
  uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pVVar1 >> 6;
  if (0x3ffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar10 = 0x3ffffffffffffff;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar10 = uVar9;
    if (uVar9 <= uVar3) {
      uVar10 = uVar3;
    }
    if (0x3ffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  pVVar2 = _Allocate<16,std::_Default_allocate_traits>(uVar10 * 0x40);
  pVVar1 = (VfsEntry *)
           ((longlong)&(pVVar2->virtualPath)._Mypair._Myval2._Bx +
           ((longlong)param_1 - (longlong)pVVar1 & 0xffffffffffffffc0U));
  _Default_allocator_traits<std::allocator<Filesystem::VfsEntry>_>::
  construct<Filesystem::VfsEntry,wchar_t_const_*_&,wchar_t_const_*_&>
            ((allocator<Filesystem::VfsEntry> *)this,pVVar1,param_2,param_3);
  pVVar5 = (this->_Mypair)._Myval2._Mylast;
  pVVar4 = (this->_Mypair)._Myval2._Myfirst;
  pVVar7 = pVVar2;
  if (param_1 != pVVar5) {
    _Uninitialized_move<Filesystem::VfsEntry_*,std::allocator<Filesystem::VfsEntry>_>
              (pVVar4,param_1,pVVar2,(allocator<Filesystem::VfsEntry> *)this);
    pVVar5 = (this->_Mypair)._Myval2._Mylast;
    pVVar4 = param_1;
    pVVar7 = pVVar1 + 1;
  }
  _Uninitialized_move<Filesystem::VfsEntry_*,std::allocator<Filesystem::VfsEntry>_>
            (pVVar4,pVVar5,pVVar7,(allocator<Filesystem::VfsEntry> *)this);
  pVVar4 = (this->_Mypair)._Myval2._Myfirst;
  if (pVVar4 != (VfsEntry *)0x0) {
    pVVar5 = (this->_Mypair)._Myval2._Mylast;
    for (; pVVar4 != pVVar5; pVVar4 = pVVar4 + 1) {
      basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
      ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>(&pVVar4->localPath);
      basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
      ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                (&pVVar4->virtualPath);
    }
    pVVar4 = (this->_Mypair)._Myval2._Myfirst;
    uVar6 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pVVar4 & 0xffffffffffffffc0;
    pVVar5 = pVVar4;
    if (0xfff < uVar6) {
      pVVar5 = (VfsEntry *)pVVar4[-1].localPath._Mypair._Myval2._Myres;
      uVar6 = uVar6 + 0x27;
      if (0x1f < (ulonglong)((longlong)pVVar4 + (-8 - (longlong)pVVar5))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pVVar5,uVar6);
  }
  (this->_Mypair)._Myval2._Myfirst = pVVar2;
  (this->_Mypair)._Myval2._Mylast = pVVar2 + uVar9;
  (this->_Mypair)._Myval2._Myend = pVVar2 + uVar10;
  return pVVar1;
}

// _Emplace_reallocate<Process::Module> @ 146ccdb40

Module * __thiscall
std::vector<Process::Module,std::allocator<Process::Module>_>::_Emplace_reallocate<Process::Module>
          (vector<Process::Module,std::allocator<Process::Module>_> *this,Module *param_1,
          Module *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  Module *pMVar3;
  Module *pMVar4;
  longlong lVar5;
  Module *pMVar6;
  Module *pMVar7;
  ulonglong uVar8;
  
  pMVar3 = (this->_Mypair)._Myval2._Myfirst;
  lVar5 = ((longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pMVar3) / 0x220;
  if (lVar5 == 0x78787878787878) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar1 = lVar5 + 1;
  uVar2 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pMVar3) / 0x220;
  if (0x78787878787878 - (uVar2 >> 1) < uVar2) {
    uVar8 = 0x78787878787878;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar8 = uVar1;
    if (uVar1 <= uVar2) {
      uVar8 = uVar2;
    }
    if (0x78787878787878 < uVar8) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  pMVar6 = _Allocate<16,std::_Default_allocate_traits>(uVar8 * 0x220);
  pMVar7 = pMVar6 + ((longlong)param_1 - (longlong)pMVar3) / 0x220;
  (pMVar7->fullPath).m_length = (param_2->fullPath).m_length;
  memcpy((pMVar7->fullPath).m_data,(param_2->fullPath).m_data,
         (ulonglong)((param_2->fullPath).m_length + 1) * 2);
  pMVar7->baseAddress = param_2->baseAddress;
  pMVar7->sizeOfImage = param_2->sizeOfImage;
  pMVar3 = (this->_Mypair)._Myval2._Mylast;
  pMVar4 = (this->_Mypair)._Myval2._Myfirst;
  if (param_1 == pMVar3) {
    _Uninitialized_copy<Process::Module_*,Process::Module_*,std::allocator<Process::Module>_>
              (pMVar4,pMVar3,pMVar6,(allocator<Process::Module> *)this);
  }
  else {
    _Uninitialized_move<Process::Module_*,std::allocator<Process::Module>_>
              (pMVar4,param_1,pMVar6,(allocator<Process::Module> *)this);
    _Uninitialized_move<Process::Module_*,std::allocator<Process::Module>_>
              (param_1,(this->_Mypair)._Myval2._Mylast,pMVar7 + 1,(allocator<Process::Module> *)this
              );
  }
  _Change_array(this,pMVar6,uVar1,uVar8);
  return pMVar7;
}

// _Find_last<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> @ 146ccdce0

_Hash_find_last_result<std::_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>_*>
* __thiscall
std::
_Hash<std::_Uset_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::_Uhash_compare<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::hash<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,std::equal_to<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,0>_>
::_Find_last<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
          (_Hash<std::_Uset_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::_Uhash_compare<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::hash<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,std::equal_to<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,0>_>
           *this,_Hash_find_last_result<std::_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>_*>
                 *__return_storage_ptr__,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1,
          ulong64 param_2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var3;
  ulong64 uVar4;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar5;
  int iVar6;
  ulong64 uVar7;
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
  *p_Var8;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar9;
  longlong lVar10;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var11;
  bool bVar12;
  
  p_Var3 = (this->_List)._Mypair._Myval2._Myhead;
  p_Var8 = (this->_Vec)._Mypair._Myval2._Myfirst + (param_2 & this->_Mask) * 2;
  p_Var11 = p_Var8[1]._Ptr;
  if (p_Var11 == p_Var3) {
    __return_storage_ptr__->_Insert_before = p_Var3;
    __return_storage_ptr__->_Duplicate =
         (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
          *)0x0;
    return __return_storage_ptr__;
  }
  uVar4 = (param_1->_Mypair)._Myval2._Mysize;
  do {
    pbVar5 = &p_Var11->_Myval;
    if (7 < (p_Var11->_Myval)._Mypair._Myval2._Myres) {
      pbVar5 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (pbVar5->_Mypair)._Myval2._Bx._Ptr;
    }
    pbVar9 = param_1;
    if (7 < (param_1->_Mypair)._Myval2._Myres) {
      pbVar9 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    if (uVar4 == (p_Var11->_Myval)._Mypair._Myval2._Mysize) {
      if (uVar4 == 0) {
        bVar12 = false;
      }
      else {
        if (uVar4 != 0) {
          lVar10 = (longlong)pbVar9 - (longlong)pbVar5;
          uVar7 = uVar4;
          do {
            wVar1 = *(wchar_t *)(lVar10 + (longlong)pbVar5);
            wVar2 = (pbVar5->_Mypair)._Myval2._Bx._Buf[0];
            if (wVar1 != wVar2) {
              iVar6 = 1;
              if ((ushort)wVar1 < (ushort)wVar2) {
                iVar6 = -1;
              }
              goto LAB_146ccdd86;
            }
            pbVar5 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                     ((longlong)&(pbVar5->_Mypair)._Myval2._Bx + 2);
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        iVar6 = 0;
LAB_146ccdd86:
        bVar12 = iVar6 != 0;
      }
    }
    else {
      bVar12 = true;
    }
    if (!bVar12) {
      __return_storage_ptr__->_Insert_before = p_Var11->_Next;
      __return_storage_ptr__->_Duplicate = p_Var11;
      return __return_storage_ptr__;
    }
    if (p_Var11 == p_Var8->_Ptr) {
      __return_storage_ptr__->_Insert_before = p_Var11;
      __return_storage_ptr__->_Duplicate =
           (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
            *)0x0;
      return __return_storage_ptr__;
    }
    p_Var11 = p_Var11->_Prev;
  } while( true );
}

// _Hash_array_representation<wchar_t> @ 146ccdde0

ulong64 __cdecl std::_Hash_array_representation<wchar_t>(wchar_t *param_1,ulong64 param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar2 = 0xcbf29ce484222325;
  if (param_2 * 2 != 0) {
    do {
      pbVar1 = (byte *)((longlong)param_1 + uVar3);
      uVar3 = uVar3 + 1;
      uVar2 = (uVar2 ^ *pbVar1) * 0x100000001b3;
    } while (uVar3 < param_2 * 2);
  }
  return uVar2;
}

// _Insert_counted_range<char_*> @ 146ccde20

void __thiscall
std::vector<char,std::allocator<char>_>::_Insert_counted_range<char_*>
          (vector<char,std::allocator<char>_> *this,
          _Vector_const_iterator<std::_Vector_val<std::_Simple_types<char>_>_> param_1,char *param_2
          ,ulong64 param_3)

{
  char *_Dst;
  char *pcVar1;
  ulonglong uVar2;
  char *_Dst_00;
  _Vector_const_iterator<std::_Vector_val<std::_Simple_types<char>_>_> _Src;
  ulonglong uVar3;
  ulonglong uVar4;
  size_t sVar5;
  
  if (param_3 != 0) {
    _Dst = (this->_Mypair)._Myval2._Mylast;
    _Src._Ptr = (this->_Mypair)._Myval2._Myfirst;
    pcVar1 = (this->_Mypair)._Myval2._Myend;
    if ((ulonglong)((longlong)pcVar1 - (longlong)_Dst) < param_3) {
      sVar5 = (longlong)_Dst - (longlong)_Src._Ptr;
      if (0x7fffffffffffffff - sVar5 < param_3) {
                    /* WARNING: Subroutine does not return */
        _Xlength();
      }
      uVar2 = (longlong)pcVar1 - (longlong)_Src._Ptr;
      uVar3 = sVar5 + param_3;
      uVar4 = 0x7fffffffffffffff;
      if ((uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1)) &&
         (uVar4 = (uVar2 >> 1) + uVar2, uVar4 < uVar3)) {
        uVar4 = uVar3;
      }
      pcVar1 = _Allocate<16,std::_Default_allocate_traits>(uVar4);
      memmove(pcVar1 + ((longlong)param_1._Ptr - (longlong)_Src._Ptr),param_2,param_3);
      if ((param_3 != 1) || (_Dst_00 = pcVar1, param_1._Ptr != _Dst)) {
        memmove(pcVar1,_Src._Ptr,(longlong)param_1._Ptr - (longlong)_Src._Ptr);
        sVar5 = (longlong)_Dst - (longlong)param_1._Ptr;
        _Dst_00 = pcVar1 + ((longlong)param_1._Ptr - (longlong)_Src._Ptr) + param_3;
        _Src._Ptr = param_1._Ptr;
      }
      memmove(_Dst_00,_Src._Ptr,sVar5);
      _Change_array(this,pcVar1,uVar3,uVar4);
    }
    else {
      uVar3 = (longlong)_Dst - (longlong)param_1._Ptr;
      if (param_3 < uVar3) {
        memmove(_Dst,_Dst + -param_3,param_3);
        sVar5 = (longlong)(_Dst + -param_3) - (longlong)param_1._Ptr;
        (this->_Mypair)._Myval2._Mylast = _Dst + param_3;
        memmove(_Dst + -sVar5,param_1._Ptr,sVar5);
      }
      else {
        memmove(param_1._Ptr + param_3,param_1._Ptr,uVar3);
        (this->_Mypair)._Myval2._Mylast = param_1._Ptr + param_3 + uVar3;
      }
      memmove(param_1._Ptr,param_2,param_3);
    }
  }
  return;
}

// _Insert_counted_range<wchar_t_const_*> @ 146ccdfc0

void __thiscall
std::vector<wchar_t,std::allocator<wchar_t>_>::_Insert_counted_range<wchar_t_const_*>
          (vector<wchar_t,std::allocator<wchar_t>_> *this,
          _Vector_const_iterator<std::_Vector_val<std::_Simple_types<wchar_t>_>_> param_1,
          wchar_t *param_2,ulong64 param_3)

{
  wchar_t *_Dst;
  wchar_t *pwVar1;
  longlong lVar2;
  ulonglong uVar3;
  wchar_t *_Dst_00;
  ulonglong uVar4;
  _Vector_const_iterator<std::_Vector_val<std::_Simple_types<wchar_t>_>_> _Src;
  size_t _Size;
  ulonglong uVar5;
  size_t sVar6;
  
  if (param_3 != 0) {
    _Dst = (this->_Mypair)._Myval2._Mylast;
    _Src._Ptr = (this->_Mypair)._Myval2._Myfirst;
    pwVar1 = (this->_Mypair)._Myval2._Myend;
    if ((ulonglong)((longlong)pwVar1 - (longlong)_Dst >> 1) < param_3) {
      sVar6 = (longlong)_Dst - (longlong)_Src._Ptr;
      if (0x7fffffffffffffffU - ((longlong)sVar6 >> 1) < param_3) {
                    /* WARNING: Subroutine does not return */
        _Xlength();
      }
      uVar4 = ((longlong)sVar6 >> 1) + param_3;
      uVar3 = (longlong)pwVar1 - (longlong)_Src._Ptr >> 1;
      if (0x7fffffffffffffff - (uVar3 >> 1) < uVar3) {
        uVar5 = 0x7fffffffffffffff;
      }
      else {
        uVar3 = (uVar3 >> 1) + uVar3;
        uVar5 = uVar4;
        if (uVar4 <= uVar3) {
          uVar5 = uVar3;
        }
        if (0x7fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
          _Throw_bad_array_new_length();
        }
      }
      pwVar1 = _Allocate<16,std::_Default_allocate_traits>(uVar5 * 2);
      lVar2 = (longlong)param_1._Ptr - (longlong)_Src._Ptr >> 1;
      memmove(pwVar1 + lVar2,param_2,param_3 * 2);
      if ((param_3 != 1) || (_Dst_00 = pwVar1, param_1._Ptr != _Dst)) {
        memmove(pwVar1,_Src._Ptr,(longlong)param_1._Ptr - (longlong)_Src._Ptr);
        sVar6 = (longlong)_Dst - (longlong)param_1._Ptr;
        _Dst_00 = pwVar1 + lVar2 + param_3;
        _Src._Ptr = param_1._Ptr;
      }
      memmove(_Dst_00,_Src._Ptr,sVar6);
      _Change_array(this,pwVar1,uVar4,uVar5);
    }
    else {
      sVar6 = param_3 * 2;
      uVar3 = (longlong)_Dst - (longlong)param_1._Ptr >> 1;
      if (param_3 < uVar3) {
        memmove(_Dst,_Dst + -param_3,sVar6);
        _Size = (longlong)(_Dst + -param_3) - (longlong)param_1._Ptr;
        (this->_Mypair)._Myval2._Mylast = _Dst + ((longlong)sVar6 >> 1);
        memmove((void *)((longlong)_Dst - _Size),param_1._Ptr,_Size);
        memmove(param_1._Ptr,param_2,sVar6);
      }
      else {
        memmove(param_1._Ptr + param_3,param_1._Ptr,(longlong)_Dst - (longlong)param_1._Ptr);
        (this->_Mypair)._Myval2._Mylast = param_1._Ptr + param_3 + uVar3;
        memmove(param_1._Ptr,param_2,sVar6);
      }
    }
  }
  return;
}

// _Integral_to_string<wchar_t,unsigned_long> @ 146cce1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
std::_Integral_to_string<wchar_t,unsigned_long>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,ulong param_1)

{
  wchar_t *pwVar1;
  undefined1 auStack_68 [32];
  allocator<wchar_t> local_48 [48];
  wchar_t local_18 [4];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  pwVar1 = local_18 + 1;
  do {
    pwVar1 = pwVar1 + -1;
    *pwVar1 = (short)param_1 + (short)((ulonglong)param_1 / 10) * -10 + L'0';
    param_1 = (ulong)((ulonglong)param_1 / 10);
  } while (param_1 != 0);
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_><wchar_t_*,0>
            (__return_storage_ptr__,pwVar1,local_18 + 1,local_48);
  return __return_storage_ptr__;
}

// _Med3_unchecked<executable::ImageSection_*,bool_(__cdecl*)(executable::ImageSection_const_&,executable::ImageSection_const_&)> @ 146cce240

void __cdecl
std::
_Med3_unchecked<executable::ImageSection_*,bool_(__cdecl*)(executable::ImageSection_const_&,executable::ImageSection_const_&)>
          (ImageSection *param_1,ImageSection *param_2,ImageSection *param_3,
          _func___cdecl_bool_ImageSection_ptr_ImageSection_ptr *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  bVar8 = (*param_4)(param_2,param_1);
  if (bVar8) {
    uVar1 = param_1->size;
    uVar2 = param_1->rawDataRva;
    uVar3 = param_1->rawDataSize;
    uVar4 = param_2->rva;
    uVar5 = param_2->size;
    uVar6 = param_2->rawDataRva;
    uVar7 = param_2->rawDataSize;
    param_2->rva = param_1->rva;
    param_2->size = uVar1;
    param_2->rawDataRva = uVar2;
    param_2->rawDataSize = uVar3;
    param_1->rva = uVar4;
    param_1->size = uVar5;
    param_1->rawDataRva = uVar6;
    param_1->rawDataSize = uVar7;
  }
  bVar8 = (*param_4)(param_3,param_2);
  if (bVar8) {
    uVar1 = param_2->size;
    uVar2 = param_2->rawDataRva;
    uVar3 = param_2->rawDataSize;
    uVar4 = param_3->rva;
    uVar5 = param_3->size;
    uVar6 = param_3->rawDataRva;
    uVar7 = param_3->rawDataSize;
    param_3->rva = param_2->rva;
    param_3->size = uVar1;
    param_3->rawDataRva = uVar2;
    param_3->rawDataSize = uVar3;
    param_2->rva = uVar4;
    param_2->size = uVar5;
    param_2->rawDataRva = uVar6;
    param_2->rawDataSize = uVar7;
    bVar8 = (*param_4)(param_2,param_1);
    if (bVar8) {
      uVar1 = param_1->size;
      uVar2 = param_1->rawDataRva;
      uVar3 = param_1->rawDataSize;
      uVar4 = param_2->rva;
      uVar5 = param_2->size;
      uVar6 = param_2->rawDataRva;
      uVar7 = param_2->rawDataSize;
      param_2->rva = param_1->rva;
      param_2->size = uVar1;
      param_2->rawDataRva = uVar2;
      param_2->rawDataSize = uVar3;
      param_1->rva = uVar4;
      param_1->size = uVar5;
      param_1->rawDataRva = uVar6;
      param_1->rawDataSize = uVar7;
    }
  }
  return;
}

// _Partition_by_median_guess_unchecked<executable::ImageSection_*,bool_(__cdecl*)(executable::ImageSection_const_&,executable::ImageSection_const_&)> @ 146cce2d0

pair<executable::ImageSection_*,executable::ImageSection_*> * __cdecl
std::
_Partition_by_median_guess_unchecked<executable::ImageSection_*,bool_(__cdecl*)(executable::ImageSection_const_&,executable::ImageSection_const_&)>
          (pair<executable::ImageSection_*,executable::ImageSection_*> *__return_storage_ptr__,
          ImageSection *param_1,ImageSection *param_2,
          _func___cdecl_bool_ImageSection_ptr_ImageSection_ptr *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  ImageSection *pIVar9;
  ImageSection *pIVar10;
  ImageSection *pIVar11;
  ImageSection *pIVar12;
  longlong lVar13;
  ImageSection *pIVar14;
  ImageSection *pIVar15;
  ImageSection *pIVar16;
  
  pIVar14 = param_1 + ((longlong)param_2 - (longlong)param_1 >> 5);
  lVar13 = (longlong)param_2 + (-0x10 - (longlong)param_1) >> 4;
  if (lVar13 < 0x29) {
    pIVar16 = param_2 + -1;
    pIVar9 = param_1;
  }
  else {
    lVar13 = lVar13 + 1 >> 3;
    _Med3_unchecked<executable::ImageSection_*,bool_(__cdecl*)(executable::ImageSection_const_&,executable::ImageSection_const_&)>
              (param_1,param_1 + lVar13,param_1 + lVar13 * 2,param_3);
    _Med3_unchecked<executable::ImageSection_*,bool_(__cdecl*)(executable::ImageSection_const_&,executable::ImageSection_const_&)>
              (pIVar14 + -lVar13,pIVar14,pIVar14 + lVar13,param_3);
    pIVar16 = param_2 + (-1 - lVar13);
    _Med3_unchecked<executable::ImageSection_*,bool_(__cdecl*)(executable::ImageSection_const_&,executable::ImageSection_const_&)>
              (param_2 + lVar13 * -2 + -1,pIVar16,param_2 + -1,param_3);
    pIVar9 = param_1 + lVar13;
  }
  _Med3_unchecked<executable::ImageSection_*,bool_(__cdecl*)(executable::ImageSection_const_&,executable::ImageSection_const_&)>
            (pIVar9,pIVar14,pIVar16,param_3);
  pIVar9 = pIVar14;
  for (pIVar16 = pIVar14; param_1 < pIVar16; pIVar16 = pIVar16 + -1) {
    pIVar9 = pIVar9 + -1;
    bVar8 = (*param_3)(pIVar9,pIVar16);
    if ((bVar8) || (bVar8 = (*param_3)(pIVar16,pIVar9), bVar8)) break;
  }
  do {
    pIVar14 = pIVar14 + 1;
    pIVar9 = pIVar14;
    pIVar10 = pIVar16;
    if ((param_2 <= pIVar14) || (bVar8 = (*param_3)(pIVar14,pIVar16), bVar8)) break;
    bVar8 = (*param_3)(pIVar16,pIVar14);
  } while (!bVar8);
joined_r0x000146cce3f3:
  do {
    pIVar15 = pIVar16;
    if (param_2 <= pIVar9) {
joined_r0x000146cce430:
      for (; param_1 < pIVar15; pIVar15 = pIVar15 + -1) {
        pIVar12 = pIVar16 + -1;
        bVar8 = (*param_3)(pIVar12,pIVar10);
        pIVar11 = pIVar10;
        if (!bVar8) {
          bVar8 = (*param_3)(pIVar10,pIVar12);
          if (bVar8) break;
          pIVar11 = pIVar10 + -1;
          if (pIVar11 != pIVar12) {
            uVar1 = pIVar12->size;
            uVar2 = pIVar16[-1].rawDataRva;
            uVar3 = pIVar16[-1].rawDataSize;
            uVar4 = pIVar11->rva;
            uVar5 = pIVar11->size;
            uVar6 = pIVar10[-1].rawDataRva;
            uVar7 = pIVar10[-1].rawDataSize;
            pIVar11->rva = pIVar12->rva;
            pIVar11->size = uVar1;
            pIVar10[-1].rawDataRva = uVar2;
            pIVar10[-1].rawDataSize = uVar3;
            pIVar12->rva = uVar4;
            pIVar12->size = uVar5;
            pIVar16[-1].rawDataRva = uVar6;
            pIVar16[-1].rawDataSize = uVar7;
          }
        }
        pIVar16 = pIVar12;
        pIVar10 = pIVar11;
      }
      if (pIVar15 == param_1) {
        if (pIVar9 == param_2) {
          __return_storage_ptr__->first = pIVar10;
          __return_storage_ptr__->second = pIVar14;
          return __return_storage_ptr__;
        }
        if (pIVar14 != pIVar9) {
          uVar1 = pIVar14->size;
          uVar2 = pIVar14->rawDataRva;
          uVar3 = pIVar14->rawDataSize;
          uVar4 = pIVar10->rva;
          uVar5 = pIVar10->size;
          uVar6 = pIVar10->rawDataRva;
          uVar7 = pIVar10->rawDataSize;
          pIVar10->rva = pIVar14->rva;
          pIVar10->size = uVar1;
          pIVar10->rawDataRva = uVar2;
          pIVar10->rawDataSize = uVar3;
          pIVar14->rva = uVar4;
          pIVar14->size = uVar5;
          pIVar14->rawDataRva = uVar6;
          pIVar14->rawDataSize = uVar7;
        }
        uVar1 = pIVar9->size;
        uVar2 = pIVar9->rawDataRva;
        uVar3 = pIVar9->rawDataSize;
        uVar4 = pIVar10->rva;
        uVar5 = pIVar10->size;
        uVar6 = pIVar10->rawDataRva;
        uVar7 = pIVar10->rawDataSize;
        pIVar10->rva = pIVar9->rva;
        pIVar10->size = uVar1;
        pIVar10->rawDataRva = uVar2;
        pIVar10->rawDataSize = uVar3;
        pIVar9->rva = uVar4;
        pIVar9->size = uVar5;
        pIVar9->rawDataRva = uVar6;
        pIVar9->rawDataSize = uVar7;
        pIVar14 = pIVar14 + 1;
        pIVar9 = pIVar9 + 1;
        pIVar16 = pIVar15;
        pIVar10 = pIVar10 + 1;
      }
      else {
        pIVar16 = pIVar15 + -1;
        if (pIVar9 == param_2) {
          pIVar11 = pIVar10 + -1;
          if (pIVar16 != pIVar11) {
            uVar1 = pIVar11->size;
            uVar2 = pIVar10[-1].rawDataRva;
            uVar3 = pIVar10[-1].rawDataSize;
            uVar4 = pIVar16->rva;
            uVar5 = pIVar16->size;
            uVar6 = pIVar15[-1].rawDataRva;
            uVar7 = pIVar15[-1].rawDataSize;
            pIVar16->rva = pIVar11->rva;
            pIVar16->size = uVar1;
            pIVar15[-1].rawDataRva = uVar2;
            pIVar15[-1].rawDataSize = uVar3;
            pIVar11->rva = uVar4;
            pIVar11->size = uVar5;
            pIVar10[-1].rawDataRva = uVar6;
            pIVar10[-1].rawDataSize = uVar7;
          }
          uVar1 = pIVar14[-1].size;
          uVar2 = pIVar14[-1].rawDataRva;
          uVar3 = pIVar14[-1].rawDataSize;
          pIVar15 = pIVar14 + -1;
          uVar4 = pIVar11->rva;
          uVar5 = pIVar11->size;
          uVar6 = pIVar10[-1].rawDataRva;
          uVar7 = pIVar10[-1].rawDataSize;
          pIVar11->rva = pIVar14[-1].rva;
          pIVar11->size = uVar1;
          pIVar10[-1].rawDataRva = uVar2;
          pIVar10[-1].rawDataSize = uVar3;
          pIVar15->rva = uVar4;
          pIVar15->size = uVar5;
          pIVar14[-1].rawDataRva = uVar6;
          pIVar14[-1].rawDataSize = uVar7;
          pIVar14 = pIVar15;
          pIVar10 = pIVar11;
        }
        else {
          uVar4 = pIVar9->rva;
          uVar5 = pIVar9->size;
          uVar6 = pIVar9->rawDataRva;
          uVar7 = pIVar9->rawDataSize;
          uVar1 = pIVar16->size;
          uVar2 = pIVar15[-1].rawDataRva;
          uVar3 = pIVar15[-1].rawDataSize;
          pIVar9->rva = pIVar16->rva;
          pIVar9->size = uVar1;
          pIVar9->rawDataRva = uVar2;
          pIVar9->rawDataSize = uVar3;
          pIVar16->rva = uVar4;
          pIVar16->size = uVar5;
          pIVar15[-1].rawDataRva = uVar6;
          pIVar15[-1].rawDataSize = uVar7;
          pIVar9 = pIVar9 + 1;
        }
      }
      goto joined_r0x000146cce3f3;
    }
    bVar8 = (*param_3)(pIVar10,pIVar9);
    if (!bVar8) {
      bVar8 = (*param_3)(pIVar9,pIVar10);
      if (bVar8) goto joined_r0x000146cce430;
      if (pIVar14 != pIVar9) {
        uVar1 = pIVar9->size;
        uVar2 = pIVar9->rawDataRva;
        uVar3 = pIVar9->rawDataSize;
        uVar4 = pIVar14->rva;
        uVar5 = pIVar14->size;
        uVar6 = pIVar14->rawDataRva;
        uVar7 = pIVar14->rawDataSize;
        pIVar14->rva = pIVar9->rva;
        pIVar14->size = uVar1;
        pIVar14->rawDataRva = uVar2;
        pIVar14->rawDataSize = uVar3;
        pIVar9->rva = uVar4;
        pIVar9->size = uVar5;
        pIVar9->rawDataRva = uVar6;
        pIVar9->rawDataSize = uVar7;
      }
      pIVar14 = pIVar14 + 1;
    }
    pIVar9 = pIVar9 + 1;
  } while( true );
}

// _Pop_heap_hole_by_index<executable::ImageSection_*,executable::ImageSection,bool_(__cdecl*)(executable::ImageSection_const_&,executable::ImageSection_const_&)> @ 146cce520

void __cdecl
std::
_Pop_heap_hole_by_index<executable::ImageSection_*,executable::ImageSection,bool_(__cdecl*)(executable::ImageSection_const_&,executable::ImageSection_const_&)>
          (ImageSection *param_1,long64 param_2,long64 param_3,ImageSection *param_4,
          _func___cdecl_bool_ImageSection_ptr_ImageSection_ptr *param_5)

{
  ImageSection *pIVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  ImageSection *pIVar9;
  
  lVar8 = param_3 + -1 >> 1;
  lVar2 = param_2;
  while (lVar2 < lVar8) {
    bVar6 = (*param_5)(param_1 + lVar2 * 2 + 2,param_1 + lVar2 * 2 + 2 + -1);
    lVar7 = (2 - (ulonglong)bVar6) + lVar2 * 2;
    pIVar9 = param_1 + lVar7;
    uVar3 = pIVar9->size;
    uVar4 = pIVar9->rawDataRva;
    uVar5 = pIVar9->rawDataSize;
    pIVar1 = param_1 + lVar2;
    pIVar1->rva = pIVar9->rva;
    pIVar1->size = uVar3;
    pIVar1->rawDataRva = uVar4;
    pIVar1->rawDataSize = uVar5;
    lVar2 = lVar7;
  }
  if ((lVar2 == lVar8) && ((param_3 & 1U) == 0)) {
    pIVar1 = param_1 + param_3 + -1;
    uVar3 = pIVar1->size;
    uVar4 = pIVar1->rawDataRva;
    uVar5 = pIVar1->rawDataSize;
    pIVar9 = param_1 + lVar2;
    pIVar9->rva = pIVar1->rva;
    pIVar9->size = uVar3;
    pIVar9->rawDataRva = uVar4;
    pIVar9->rawDataSize = uVar5;
    lVar2 = param_3 + -1;
  }
  while (param_2 < lVar2) {
    lVar8 = lVar2 + -1 >> 1;
    pIVar9 = param_1 + lVar8;
    bVar6 = (*param_5)(pIVar9,param_4);
    if (!bVar6) break;
    uVar3 = pIVar9->size;
    uVar4 = pIVar9->rawDataRva;
    uVar5 = pIVar9->rawDataSize;
    pIVar1 = param_1 + lVar2;
    pIVar1->rva = pIVar9->rva;
    pIVar1->size = uVar3;
    pIVar1->rawDataRva = uVar4;
    pIVar1->rawDataSize = uVar5;
    lVar2 = lVar8;
  }
  uVar3 = param_4->size;
  uVar4 = param_4->rawDataRva;
  uVar5 = param_4->rawDataSize;
  pIVar9 = param_1 + lVar2;
  pIVar9->rva = param_4->rva;
  pIVar9->size = uVar3;
  pIVar9->rawDataRva = uVar4;
  pIVar9->rawDataSize = uVar5;
  return;
}

// _Reallocate_grow_by<`std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append'::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64> @ 146cce640

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
_Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          ulong64 param_1,<lambda_1> param_2,wchar_t *param_3,ulong64 param_4)

{
  ulonglong uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  wchar_t *_Src;
  wchar_t *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar2 = (this->_Mypair)._Myval2._Mysize;
  uVar5 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe - uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    _Xlen_string();
  }
  uVar3 = (this->_Mypair)._Myval2._Myres;
  uVar4 = uVar2 + param_1 | 7;
  if ((uVar4 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    uVar1 = uVar3 + (uVar3 >> 1);
    uVar5 = uVar4;
    if (uVar4 < uVar1) {
      uVar5 = uVar1;
    }
    uVar4 = uVar5 + 1;
    if (0x7fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  else {
    uVar4 = 0x7fffffffffffffff;
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar4 * 2);
  (this->_Mypair)._Myval2._Mysize = uVar2 + param_1;
  (this->_Mypair)._Myval2._Myres = uVar5;
  if (uVar3 < 8) {
    memcpy(_Dst,this,uVar2 * 2);
    memcpy(_Dst + uVar2,param_3,param_4 * 2);
    _Dst[param_4 + uVar2] = L'\0';
  }
  else {
    _Src = (this->_Mypair)._Myval2._Bx._Ptr;
    memcpy(_Dst,_Src,uVar2 * 2);
    memcpy(_Dst + uVar2,param_3,param_4 * 2);
    _Dst[param_4 + uVar2] = L'\0';
    _Deallocate_for_capacity((allocator<wchar_t> *)this,_Src,uVar3);
  }
  (this->_Mypair)._Myval2._Bx._Ptr = _Dst;
  return this;
}

// _Reallocate_grow_by<`std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append'::__l2::<lambda_1>,unsigned___int64,wchar_t> @ 146cce790

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
_Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,unsigned___int64,wchar_t>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          ulong64 param_1,<lambda_1> param_2,ulong64 param_3,wchar_t param_4)

{
  ulonglong uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  wchar_t *_Src;
  wchar_t *_Dst;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  
  uVar2 = (this->_Mypair)._Myval2._Mysize;
  uVar6 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe - uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    _Xlen_string();
  }
  uVar3 = (this->_Mypair)._Myval2._Myres;
  uVar5 = uVar2 + param_1 | 7;
  if ((uVar5 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    uVar1 = uVar3 + (uVar3 >> 1);
    uVar6 = uVar5;
    if (uVar5 < uVar1) {
      uVar6 = uVar1;
    }
    uVar5 = uVar6 + 1;
    if (0x7fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  else {
    uVar5 = 0x7fffffffffffffff;
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar5 * 2);
  (this->_Mypair)._Myval2._Myres = uVar6;
  (this->_Mypair)._Myval2._Mysize = uVar2 + param_1;
  pwVar7 = _Dst + uVar2;
  if (uVar3 < 8) {
    memcpy(_Dst,this,uVar2 * 2);
    uVar4 = param_3;
    if (param_3 != 0) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pwVar7 = param_4;
        pwVar7 = pwVar7 + 1;
      }
    }
    _Dst[uVar2 + param_3] = L'\0';
  }
  else {
    _Src = (this->_Mypair)._Myval2._Bx._Ptr;
    memcpy(_Dst,_Src,uVar2 * 2);
    uVar4 = param_3;
    if (param_3 != 0) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pwVar7 = param_4;
        pwVar7 = pwVar7 + 1;
      }
    }
    _Dst[uVar2 + param_3] = L'\0';
    _Deallocate_for_capacity((allocator<wchar_t> *)this,_Src,uVar3);
  }
  (this->_Mypair)._Myval2._Bx._Ptr = _Dst;
  return this;
}

// _Reallocate_grow_by<`std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::replace'::__l2::<lambda_1>,unsigned___int64,unsigned___int64,char_const_*,unsigned___int64> @ 146cce8e0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
_Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::replace_::__l2::<lambda_1>,unsigned___int64,unsigned___int64,char_const_*,unsigned___int64>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,ulong64 param_1,
          <lambda_1> param_2,ulong64 param_3,ulong64 param_4,char *param_5,ulong64 param_6)

{
  ulonglong uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  char *_Src;
  char *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  char *pcVar6;
  longlong lVar7;
  
  uVar2 = (this->_Mypair)._Myval2._Mysize;
  if (0x7fffffffffffffff - uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    _Xlen_string();
  }
  uVar4 = uVar2 + param_1 | 0xf;
  uVar3 = (this->_Mypair)._Myval2._Myres;
  uVar5 = 0x7fffffffffffffff;
  if (((uVar4 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) &&
     (uVar1 = uVar3 + (uVar3 >> 1), uVar5 = uVar4, uVar4 < uVar1)) {
    uVar5 = uVar1;
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar5 + 1);
  (this->_Mypair)._Myval2._Myres = uVar5;
  lVar7 = (uVar2 - param_3) - param_4;
  (this->_Mypair)._Myval2._Mysize = uVar2 + param_1;
  pcVar6 = _Dst + param_3;
  if (uVar3 < 0x10) {
    memcpy(_Dst,this,param_3);
    memcpy(pcVar6,param_5,param_6);
    memcpy(pcVar6 + param_6,(void *)((longlong)&(this->_Mypair)._Myval2._Bx + param_4 + param_3),
           lVar7 + 1);
  }
  else {
    _Src = (this->_Mypair)._Myval2._Bx._Ptr;
    memcpy(_Dst,_Src,param_3);
    memcpy(pcVar6,param_5,param_6);
    memcpy(pcVar6 + param_6,_Src + param_4 + param_3,lVar7 + 1);
    uVar5 = uVar3 + 1;
    pcVar6 = _Src;
    if (0xfff < uVar5) {
      pcVar6 = *(char **)(_Src + -8);
      uVar5 = uVar3 + 0x28;
      if ((char *)0x1f < _Src + (-8 - (longlong)pcVar6)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pcVar6,uVar5);
  }
  (this->_Mypair)._Myval2._Bx._Ptr = _Dst;
  return this;
}

// _Reallocate_grow_by<`std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::replace'::__l2::<lambda_1>,unsigned___int64,unsigned___int64,wchar_t_const_*,unsigned___int64> @ 146ccea80

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
_Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::replace_::__l2::<lambda_1>,unsigned___int64,unsigned___int64,wchar_t_const_*,unsigned___int64>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          ulong64 param_1,<lambda_1> param_2,ulong64 param_3,ulong64 param_4,wchar_t *param_5,
          ulong64 param_6)

{
  ulonglong uVar1;
  size_t _Size;
  ulong64 uVar2;
  ulonglong uVar3;
  wchar_t *_Src;
  wchar_t *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar2 = (this->_Mypair)._Myval2._Mysize;
  uVar5 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe - uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    _Xlen_string();
  }
  uVar3 = (this->_Mypair)._Myval2._Myres;
  uVar4 = uVar2 + param_1 | 7;
  if ((uVar4 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    uVar1 = uVar3 + (uVar3 >> 1);
    uVar5 = uVar4;
    if (uVar4 < uVar1) {
      uVar5 = uVar1;
    }
    uVar4 = uVar5 + 1;
    if (0x7fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  else {
    uVar4 = 0x7fffffffffffffff;
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar4 * 2);
  (this->_Mypair)._Myval2._Myres = uVar5;
  (this->_Mypair)._Myval2._Mysize = uVar2 + param_1;
  _Size = ((uVar2 - param_3) - param_4) * 2 + 2;
  if (uVar3 < 8) {
    memcpy(_Dst,this,param_3 * 2);
    memcpy(_Dst + param_3,param_5,param_6 * 2);
    memcpy(_Dst + param_6 + param_3,
           (void *)((longlong)&(this->_Mypair)._Myval2._Bx + (param_4 + param_3) * 2),_Size);
  }
  else {
    _Src = (this->_Mypair)._Myval2._Bx._Ptr;
    memcpy(_Dst,_Src,param_3 * 2);
    memcpy(_Dst + param_3,param_5,param_6 * 2);
    memcpy(_Dst + param_6 + param_3,_Src + param_4 + param_3,_Size);
    _Deallocate_for_capacity((allocator<wchar_t> *)this,_Src,uVar3);
  }
  (this->_Mypair)._Myval2._Bx._Ptr = _Dst;
  return this;
}

// _Search_vectorized<char_const_,char_const_> @ 146ccec20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * __cdecl
std::_Search_vectorized<char_const_,char_const_>
          (char *param_1,char *param_2,char *param_3,ulong64 param_4)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  char *pcVar6;
  size_t _Size;
  undefined1 (*pauVar7) [16];
  uint uVar8;
  longlong lVar9;
  undefined1 uVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [16];
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStack_78;
  pcVar2 = param_1;
  if (param_4 != 0) {
    if (param_4 == 1) {
      pcVar2 = ::`anonymous_namespace'::
               __std_find_trivial_impl<_anonymous_namespace_::_Find_traits_1,unsigned_char>
                         (param_1,param_2,*param_3);
    }
    else {
      uVar4 = (longlong)param_2 - (longlong)param_1;
      pcVar2 = param_2;
      if (param_4 <= uVar4) {
        if ((((byte)__isa_enabled & 4) == 0) || (uVar4 < 0x10)) {
          pcVar6 = param_1 + uVar4 + (1 - param_4);
          if (param_1 != pcVar6) {
            lVar9 = (longlong)param_3 - (longlong)param_1;
            do {
              if (*param_1 == *param_3) {
                pcVar5 = param_1 + 1;
                while (*pcVar5 == pcVar5[lVar9]) {
                  pcVar5 = pcVar5 + 1;
                  if ((longlong)pcVar5 - (longlong)param_1 == param_4) {
                    return param_1;
                  }
                }
              }
              param_1 = param_1 + 1;
              lVar9 = lVar9 + -1;
            } while (param_1 != pcVar6);
          }
        }
        else if (param_4 < 0x11) {
          uVar8 = (uint)param_4;
          uVar10 = 0x10 < uVar8;
          memcpy(auStack_58,param_3,param_4);
          auVar1 = auStack_58;
          do {
            iVar3 = pcmpestri(auStack_58,*(undefined1 (*) [16])param_1,0xc,uVar8,0x10);
            if ((bool)uVar10) {
              param_1 = *(undefined1 (*) [16])param_1 + iVar3;
              if (iVar3 <= (int)(0x10 - uVar8)) {
                return (char *)(undefined1 (*) [16])param_1;
              }
            }
            else {
              param_1 = (char *)((longlong)param_1 + 0x10);
            }
            uVar10 = param_1 < (undefined1 (*) [16])(param_2 + -0x10);
          } while (param_1 <= (undefined1 (*) [16])(param_2 + -0x10));
          bVar11 = param_2 < param_1;
          _Size = (longlong)param_2 - (longlong)param_1;
          if (_Size != 0) {
            memcpy(auStack_58,param_1,_Size);
            iVar3 = pcmpestri(auVar1,auStack_58,0xc,uVar8,(int)_Size);
            if (bVar11) {
              pcVar2 = *(undefined1 (*) [16])param_1 + iVar3;
            }
          }
        }
        else {
          auVar1 = *(undefined1 (*) [16])param_3;
          bVar11 = CARRY8((longlong)param_1 - param_4,uVar4);
          pauVar7 = (undefined1 (*) [16])(((longlong)param_1 - param_4) + uVar4);
          do {
            iVar3 = pcmpestri(auVar1,*(undefined1 (*) [16])param_1,0xc,0x10,0x10);
            if (bVar11) {
              if (iVar3 == 0) {
LAB_150186525:
                iVar3 = memcmp((undefined1 (*) [16])((longlong)param_1 + 0x10),param_3 + 0x10,
                               param_4 - 0x10);
                if (iVar3 == 0) {
                  return (char *)(undefined1 (*) [16])param_1;
                }
              }
              else {
                param_1 = *(undefined1 (*) [16])param_1 + iVar3;
                if (pauVar7 < param_1) {
                  return param_2;
                }
                auVar12._0_4_ = *(uint *)*(undefined1 (*) [16])param_1 ^ auVar1._0_4_;
                auVar12._4_4_ = *(uint *)(*(undefined1 (*) [16])param_1 + 4) ^ auVar1._4_4_;
                auVar12._8_4_ = *(uint *)(*(undefined1 (*) [16])param_1 + 8) ^ auVar1._8_4_;
                auVar12._12_4_ = *(uint *)(*(undefined1 (*) [16])param_1 + 0xc) ^ auVar1._12_4_;
                if (auVar12 == (undefined1  [16])0x0) goto LAB_150186525;
              }
              param_1 = *(undefined1 (*) [16])param_1 + 1;
            }
            else {
              param_1 = (char *)((longlong)param_1 + 0x10);
            }
            bVar11 = param_1 < pauVar7;
          } while (param_1 <= pauVar7);
        }
      }
    }
  }
  return pcVar2;
}

// _Search_vectorized<wchar_t_const_,wchar_t_const_> @ 146ccec30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __cdecl
std::_Search_vectorized<wchar_t_const_,wchar_t_const_>
          (wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,ulong64 param_4)

{
  undefined1 auVar1 [16];
  ulonglong _Size;
  wchar_t *pwVar2;
  uint uVar3;
  wchar_t *pwVar4;
  int iVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  undefined1 (*pauVar8) [16];
  size_t _Size_00;
  wchar_t *pwVar9;
  longlong lVar10;
  undefined1 uVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [16];
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStack_78;
  pwVar4 = param_1;
  if (param_4 != 0) {
    if (param_4 == 1) {
      pwVar4 = ::`anonymous_namespace'::
               __std_find_trivial_impl<_anonymous_namespace_::_Find_traits_2,unsigned_short>
                         (param_1,param_2,*param_3);
    }
    else {
      uVar6 = (longlong)param_2 - (longlong)param_1;
      _Size = param_4 * 2;
      pwVar4 = param_2;
      if (_Size <= uVar6) {
        if ((((byte)__isa_enabled & 4) == 0) || (uVar6 < 0x10)) {
          pwVar9 = (wchar_t *)((longlong)param_1 + uVar6 + param_4 * -2 + 2);
          if (param_1 != pwVar9) {
            lVar10 = (longlong)param_3 - (longlong)param_1;
            do {
              if (*param_1 == *param_3) {
                uVar7 = 1;
                pwVar2 = param_1;
                while (pwVar2 = pwVar2 + 1, *pwVar2 == *(wchar_t *)((longlong)pwVar2 + lVar10)) {
                  uVar7 = uVar7 + 1;
                  if (uVar7 == param_4) {
                    return param_1;
                  }
                }
              }
              param_1 = param_1 + 1;
              lVar10 = lVar10 + -2;
            } while (param_1 != pwVar9);
          }
        }
        else if (_Size < 0x11) {
          uVar3 = (uint)param_4;
          uVar11 = 8 < uVar3;
          memcpy(auStack_58,param_3,_Size);
          auVar1 = auStack_58;
          do {
            iVar5 = pcmpestri(auStack_58,*(undefined1 (*) [16])param_1,0xd,uVar3,8);
            if ((bool)uVar11) {
              param_1 = (wchar_t *)(*(undefined1 (*) [16])param_1 + (longlong)iVar5 * 2);
              if (iVar5 <= (int)(8 - uVar3)) {
                return (wchar_t *)(undefined1 (*) [16])param_1;
              }
            }
            else {
              param_1 = (wchar_t *)((longlong)param_1 + 0x10);
            }
            uVar11 = param_1 < (undefined1 (*) [16])(param_2 + -8);
          } while (param_1 <= (undefined1 (*) [16])(param_2 + -8));
          _Size_00 = (longlong)param_2 - (longlong)param_1;
          if (_Size_00 != 0) {
            bVar12 = (_Size_00 & 1) != 0;
            memcpy(auStack_58,param_1,_Size_00);
            iVar5 = pcmpestri(auVar1,auStack_58,0xd,uVar3,(int)(_Size_00 >> 1));
            if (bVar12) {
              pwVar4 = (wchar_t *)(*(undefined1 (*) [16])param_1 + (longlong)iVar5 * 2);
            }
          }
        }
        else {
          auVar1 = *(undefined1 (*) [16])param_3;
          bVar12 = CARRY8((ulonglong)(param_1 + -param_4),uVar6);
          pauVar8 = (undefined1 (*) [16])((longlong)(param_1 + -param_4) + uVar6);
          do {
            iVar5 = pcmpestri(auVar1,*(undefined1 (*) [16])param_1,0xd,8,8);
            if (bVar12) {
              if (iVar5 == 0) {
LAB_15018672b:
                iVar5 = memcmp((undefined1 (*) [16])((longlong)param_1 + 0x10),param_3 + 8,
                               _Size - 0x10);
                if (iVar5 == 0) {
                  return (wchar_t *)(undefined1 (*) [16])param_1;
                }
              }
              else {
                param_1 = (wchar_t *)(*(undefined1 (*) [16])param_1 + (longlong)iVar5 * 2);
                if (pauVar8 < param_1) {
                  return param_2;
                }
                auVar13._0_4_ = auVar1._0_4_ ^ *(uint *)*(undefined1 (*) [16])param_1;
                auVar13._4_4_ = auVar1._4_4_ ^ *(uint *)(*(undefined1 (*) [16])param_1 + 4);
                auVar13._8_4_ = auVar1._8_4_ ^ *(uint *)(*(undefined1 (*) [16])param_1 + 8);
                auVar13._12_4_ = auVar1._12_4_ ^ *(uint *)(*(undefined1 (*) [16])param_1 + 0xc);
                if (auVar13 == (undefined1  [16])0x0) goto LAB_15018672b;
              }
              param_1 = (wchar_t *)(*(undefined1 (*) [16])param_1 + 2);
            }
            else {
              param_1 = (wchar_t *)((longlong)param_1 + 0x10);
            }
            bVar12 = param_1 < pauVar8;
          } while (param_1 <= pauVar8);
        }
      }
    }
  }
  return pwVar4;
}

// _Sort_unchecked<executable::ImageSection_*,bool_(__cdecl*)(executable::ImageSection_const_&,executable::ImageSection_const_&)> @ 146ccec40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
std::
_Sort_unchecked<executable::ImageSection_*,bool_(__cdecl*)(executable::ImageSection_const_&,executable::ImageSection_const_&)>
          (ImageSection *param_1,ImageSection *param_2,long64 param_3,
          _func___cdecl_bool_ImageSection_ptr_ImageSection_ptr *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ImageSection *pIVar9;
  ImageSection *pIVar10;
  undefined1 *puVar11;
  ImageSection *pIVar12;
  undefined1 *puVar13;
  ImageSection *pIVar14;
  ImageSection *pIVar15;
  undefined1 auStackY_a8 [32];
  ImageSection *local_78;
  ImageSection *local_70;
  uint uStack_68;
  uint uStack_64;
  ImageSection local_60;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  uVar5 = (longlong)param_2 - (longlong)param_1;
  local_78 = param_2;
  while( true ) {
    if ((longlong)(uVar5 & 0xfffffffffffffff0) < 0x201) {
      pIVar12 = param_1;
      pIVar14 = param_1;
      if (param_1 != param_2) {
        while (pIVar14 = pIVar14 + 1, pIVar14 != param_2) {
          local_70 = *(ImageSection **)pIVar14;
          uStack_68 = pIVar14->rawDataRva;
          uStack_64 = pIVar14->rawDataSize;
          bVar4 = (*param_4)((ImageSection *)&local_70,param_1);
          if (bVar4) {
            memmove((void *)((longlong)pIVar12 + (0x20 - ((longlong)pIVar14 - (longlong)param_1))),
                    param_1,(longlong)pIVar14 - (longlong)param_1);
            *(ImageSection **)param_1 = local_70;
            param_1->rawDataRva = uStack_68;
            param_1->rawDataSize = uStack_64;
          }
          else {
            bVar4 = (*param_4)((ImageSection *)&local_70,pIVar12);
            pIVar15 = pIVar12;
            pIVar10 = pIVar14;
            pIVar9 = pIVar14;
            if (bVar4) {
              do {
                pIVar10 = pIVar15;
                uVar1 = pIVar10->size;
                uVar2 = pIVar10->rawDataRva;
                uVar3 = pIVar10->rawDataSize;
                pIVar9->rva = pIVar10->rva;
                pIVar9->size = uVar1;
                pIVar9->rawDataRva = uVar2;
                pIVar9->rawDataSize = uVar3;
                bVar4 = (*param_4)((ImageSection *)&local_70,pIVar10 + -1);
                pIVar15 = pIVar10 + -1;
                pIVar9 = pIVar10;
              } while (bVar4);
            }
            *(ImageSection **)pIVar10 = local_70;
            pIVar10->rawDataRva = uStack_68;
            pIVar10->rawDataSize = uStack_64;
          }
          pIVar12 = pIVar12 + 1;
        }
      }
      return;
    }
    if (param_3 < 1) break;
    _Partition_by_median_guess_unchecked<executable::ImageSection_*,bool_(__cdecl*)(executable::ImageSection_const_&,executable::ImageSection_const_&)>
              ((pair<executable::ImageSection_*,executable::ImageSection_*> *)&local_70,param_1,
               param_2,param_4);
    pIVar12 = local_70;
    pIVar14 = (ImageSection *)CONCAT44(uStack_64,uStack_68);
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_70 - (longlong)param_1 & 0xfffffffffffffff0U) <
        (longlong)((longlong)param_2 - (longlong)pIVar14 & 0xfffffffffffffff0U)) {
      _Sort_unchecked<executable::ImageSection_*,bool_(__cdecl*)(executable::ImageSection_const_&,executable::ImageSection_const_&)>
                (param_1,local_70,param_3,param_4);
      param_1 = pIVar14;
      pIVar12 = param_2;
    }
    else {
      _Sort_unchecked<executable::ImageSection_*,bool_(__cdecl*)(executable::ImageSection_const_&,executable::ImageSection_const_&)>
                (pIVar14,param_2,param_3,param_4);
      local_78 = pIVar12;
    }
    uVar5 = (longlong)pIVar12 - (longlong)param_1;
    param_2 = pIVar12;
  }
  pIVar14 = (ImageSection *)((longlong)param_2 - (longlong)param_1 >> 4);
  puVar13 = (undefined1 *)((longlong)param_2 - (longlong)param_1 >> 5);
  local_70 = pIVar14;
  if (0 < (longlong)puVar13) {
    puVar8 = (undefined1 *)((longlong)&pIVar14[-1].rawDataSize + 3);
    puVar11 = (undefined1 *)((longlong)puVar8 >> 1);
    pIVar12 = param_1 + (longlong)puVar13;
    do {
      local_60.rva = pIVar12[-1].rva;
      local_60.size = pIVar12[-1].size;
      local_60.rawDataRva = pIVar12[-1].rawDataRva;
      local_60.rawDataSize = pIVar12[-1].rawDataSize;
      puVar13 = puVar13 + -1;
      pIVar12 = pIVar12 + -1;
      puVar6 = puVar13;
      puVar7 = puVar13;
      if ((longlong)puVar13 < (longlong)puVar11) {
        do {
          bVar4 = (*param_4)(param_1 + (longlong)puVar6 * 2 + 2,
                             param_1 + (longlong)puVar6 * 2 + 2 + -1);
          puVar7 = (undefined1 *)((2 - (ulonglong)bVar4) + (longlong)puVar6 * 2);
          pIVar15 = param_1 + (longlong)puVar7;
          uVar1 = pIVar15->size;
          uVar2 = pIVar15->rawDataRva;
          uVar3 = pIVar15->rawDataSize;
          pIVar10 = param_1 + (longlong)puVar6;
          pIVar10->rva = pIVar15->rva;
          pIVar10->size = uVar1;
          pIVar10->rawDataRva = uVar2;
          pIVar10->rawDataSize = uVar3;
          puVar6 = puVar7;
        } while ((longlong)puVar7 < (longlong)puVar11);
        puVar8 = (undefined1 *)((longlong)&pIVar14[-1].rawDataSize + 3);
      }
      if ((puVar7 == puVar11) && (((ulonglong)pIVar14 & 1) == 0)) {
        pIVar10 = param_1 + (longlong)((longlong)&pIVar14[-1].rawDataSize + 3);
        uVar1 = pIVar10->size;
        uVar2 = pIVar10->rawDataRva;
        uVar3 = pIVar10->rawDataSize;
        pIVar15 = param_1 + (longlong)puVar7;
        pIVar15->rva = pIVar10->rva;
        pIVar15->size = uVar1;
        pIVar15->rawDataRva = uVar2;
        pIVar15->rawDataSize = uVar3;
        puVar7 = puVar8;
      }
      while ((longlong)puVar13 < (longlong)puVar7) {
        pIVar15 = param_1 + ((longlong)(puVar7 + -1) >> 1);
        bVar4 = (*param_4)(pIVar15,&local_60);
        pIVar14 = local_70;
        if (!bVar4) break;
        uVar1 = pIVar15->size;
        uVar2 = pIVar15->rawDataRva;
        uVar3 = pIVar15->rawDataSize;
        pIVar10 = param_1 + (longlong)puVar7;
        pIVar10->rva = pIVar15->rva;
        pIVar10->size = uVar1;
        pIVar10->rawDataRva = uVar2;
        pIVar10->rawDataSize = uVar3;
        puVar7 = (undefined1 *)((longlong)(puVar7 + -1) >> 1);
      }
      puVar8 = (undefined1 *)((longlong)&pIVar14[-1].rawDataSize + 3);
      pIVar15 = param_1 + (longlong)puVar7;
      pIVar15->rva = local_60.rva;
      pIVar15->size = local_60.size;
      pIVar15->rawDataRva = local_60.rawDataRva;
      pIVar15->rawDataSize = local_60.rawDataSize;
      param_2 = local_78;
    } while (0 < (longlong)puVar13);
  }
  if ((longlong)pIVar14 < 2) {
    return;
  }
  do {
    pIVar14 = param_2 + -1;
    local_60.rva = pIVar14->rva;
    local_60.size = pIVar14->size;
    local_60.rawDataRva = param_2[-1].rawDataRva;
    local_60.rawDataSize = param_2[-1].rawDataSize;
    uVar1 = param_1->size;
    uVar2 = param_1->rawDataRva;
    uVar3 = param_1->rawDataSize;
    pIVar14->rva = param_1->rva;
    pIVar14->size = uVar1;
    param_2[-1].rawDataRva = uVar2;
    param_2[-1].rawDataSize = uVar3;
    _Pop_heap_hole_by_index<executable::ImageSection_*,executable::ImageSection,bool_(__cdecl*)(executable::ImageSection_const_&,executable::ImageSection_const_&)>
              (param_1,0,(longlong)pIVar14 - (longlong)param_1 >> 4,&local_60,param_4);
    param_2 = pIVar14;
  } while (0x1f < (longlong)((longlong)pIVar14 - (longlong)param_1 & 0xfffffffffffffff0U));
  return;
}

// _UIntegral_to_buff<wchar_t,unsigned_long> @ 146ccef70

wchar_t * __cdecl std::_UIntegral_to_buff<wchar_t,unsigned_long>(wchar_t *param_1,ulong param_2)

{
  do {
    param_1 = param_1 + -1;
    *param_1 = (short)param_2 + (short)((ulonglong)param_2 / 10) * -10 + L'0';
    param_2 = (ulong)((ulonglong)param_2 / 10);
  } while (param_2 != 0);
  return param_1;
}

// _Uninitialized_copy<Process::Module_*,Process::Module_*,std::allocator<Process::Module>_> @ 146ccefc0

Module * __cdecl
std::_Uninitialized_copy<Process::Module_*,Process::Module_*,std::allocator<Process::Module>_>
          (Module *param_1,Module *param_2,Module *param_3,allocator<Process::Module> *param_4)

{
  Module *pMVar1;
  void **ppvVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    lVar3 = (longlong)param_3 - (longlong)param_1;
    ppvVar2 = &param_1->baseAddress;
    do {
      (param_3->fullPath).m_length = (((Module *)(ppvVar2 + -0x42))->fullPath).m_length;
      memcpy((void *)(lVar3 + -0x20c + (longlong)ppvVar2),(wchar_t *)((longlong)ppvVar2 + -0x20c),
             (ulonglong)((((Module *)(ppvVar2 + -0x42))->fullPath).m_length + 1) * 2);
      param_3 = param_3 + 1;
      *(void **)(lVar3 + (longlong)ppvVar2) = *ppvVar2;
      *(uint *)(lVar3 + 8 + (longlong)ppvVar2) = *(uint *)(ppvVar2 + 1);
      pMVar1 = (Module *)(ppvVar2 + 2);
      ppvVar2 = ppvVar2 + 0x44;
    } while (pMVar1 != param_2);
  }
  return param_3;
}

// _Uninitialized_copy_unchecked<ClientUserCommandThread::BaseCommand_*_*_*,ClientUserCommandThread::BaseCommand_*_*_*> @ 146ccf070

BaseCommand *** __cdecl
std::
_Uninitialized_copy_unchecked<ClientUserCommandThread::BaseCommand_*_*_*,ClientUserCommandThread::BaseCommand_*_*_*>
          (BaseCommand ***param_1,BaseCommand ***param_2,BaseCommand ***param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (BaseCommand ***)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Uninitialized_move<Process::Module_*,std::allocator<Process::Module>_> @ 146ccf0b0

Module * __cdecl
std::_Uninitialized_move<Process::Module_*,std::allocator<Process::Module>_>
          (Module *param_1,Module *param_2,Module *param_3,allocator<Process::Module> *param_4)

{
  Module *pMVar1;
  void **ppvVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    lVar3 = (longlong)param_3 - (longlong)param_1;
    ppvVar2 = &param_1->baseAddress;
    do {
      (param_3->fullPath).m_length = (((Module *)(ppvVar2 + -0x42))->fullPath).m_length;
      memcpy((void *)(lVar3 + -0x20c + (longlong)ppvVar2),(wchar_t *)((longlong)ppvVar2 + -0x20c),
             (ulonglong)((((Module *)(ppvVar2 + -0x42))->fullPath).m_length + 1) * 2);
      param_3 = param_3 + 1;
      *(void **)(lVar3 + (longlong)ppvVar2) = *ppvVar2;
      *(uint *)(lVar3 + 8 + (longlong)ppvVar2) = *(uint *)(ppvVar2 + 1);
      pMVar1 = (Module *)(ppvVar2 + 2);
      ppvVar2 = ppvVar2 + 0x44;
    } while (pMVar1 != param_2);
  }
  return param_3;
}

// _Uninitialized_move<Filesystem::VfsEntry_*,std::allocator<Filesystem::VfsEntry>_> @ 146ccf160

VfsEntry * __cdecl
std::_Uninitialized_move<Filesystem::VfsEntry_*,std::allocator<Filesystem::VfsEntry>_>
          (VfsEntry *param_1,VfsEntry *param_2,VfsEntry *param_3,
          allocator<Filesystem::VfsEntry> *param_4)

{
  ulong64 *puVar1;
  VfsEntry *pVVar2;
  undefined8 *puVar3;
  ulong64 *puVar4;
  ulong64 uVar5;
  ulong64 *puVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    lVar7 = (longlong)param_3 - (longlong)param_1;
    puVar6 = &(param_1->virtualPath)._Mypair._Myval2._Myres;
    do {
      puVar1 = puVar6 + 8;
      (param_3->virtualPath)._Mypair._Myval2._Bx._Ptr = (wchar_t *)0x0;
      *(undefined8 *)((longlong)&(param_3->virtualPath)._Mypair._Myval2._Bx + 8) = 0;
      *(undefined8 *)((longlong)puVar6 + lVar7 + -8) = 0;
      pVVar2 = (VfsEntry *)(puVar6 + 5);
      *(undefined8 *)((longlong)puVar6 + lVar7) = 0;
      uVar5 = puVar6[-2];
      (param_3->virtualPath)._Mypair._Myval2._Bx._Ptr =
           (((_String_val<std::_Simple_types<wchar_t>_> *)(puVar6 + -3))->_Bx)._Ptr;
      *(ulong64 *)((longlong)&(param_3->virtualPath)._Mypair._Myval2._Bx + 8) = uVar5;
      uVar5 = *puVar6;
      (param_3->virtualPath)._Mypair._Myval2._Mysize = puVar6[-1];
      (param_3->virtualPath)._Mypair._Myval2._Myres = uVar5;
      *puVar6 = 7;
      param_3 = param_3 + 1;
      (((_String_val<std::_Simple_types<wchar_t>_> *)(puVar6 + -3))->_Bx)._Buf[0] = L'\0';
      puVar6[-1] = 0;
      puVar3 = (undefined8 *)(lVar7 + -0x38 + (longlong)puVar1);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined8 *)((longlong)puVar6 + lVar7 + 0x18) = 0;
      *(undefined8 *)((longlong)puVar6 + lVar7 + 0x20) = 0;
      uVar5 = puVar6[2];
      puVar4 = (ulong64 *)(lVar7 + -0x38 + (longlong)puVar1);
      *puVar4 = puVar6[1];
      puVar4[1] = uVar5;
      uVar5 = puVar6[4];
      puVar4 = (ulong64 *)(lVar7 + -0x28 + (longlong)puVar1);
      *puVar4 = puVar6[3];
      puVar4[1] = uVar5;
      *(undefined2 *)(puVar6 + 1) = 0;
      puVar6[3] = 0;
      puVar6[4] = 7;
      puVar6 = puVar1;
    } while (pVVar2 != param_2);
  }
  return param_3;
}

// _Uninitialized_value_construct_n_unchecked1<ClientUserCommandThread::BaseCommand_*_*_*,unsigned___int64> @ 146ccf210

BaseCommand *** __cdecl
std::
_Uninitialized_value_construct_n_unchecked1<ClientUserCommandThread::BaseCommand_*_*_*,unsigned___int64>
          (BaseCommand ***param_1,ulong64 param_2)

{
  memset(param_1,0,param_2 * 8);
  return param_1 + param_2;
}

// _Zero_range<ClientUserCommandThread::BaseCommand_*_*_*> @ 146ccf250

BaseCommand *** __cdecl
std::_Zero_range<ClientUserCommandThread::BaseCommand_*_*_*>
          (BaseCommand ***param_1,BaseCommand ***param_2)

{
  memset(param_1,0,(longlong)param_2 - (longlong)param_1);
  return param_2;
}

// construct<Filesystem::VfsEntry,wchar_t_const_*_&,wchar_t_const_*_&> @ 146ccf280

void __cdecl
std::_Default_allocator_traits<std::allocator<Filesystem::VfsEntry>_>::
construct<Filesystem::VfsEntry,wchar_t_const_*_&,wchar_t_const_*_&>
          (allocator<Filesystem::VfsEntry> *param_1,VfsEntry *param_2,wchar_t **param_3,
          wchar_t **param_4)

{
  wchar_t *pwVar1;
  size_t sVar2;
  
  pwVar1 = *param_3;
  (param_2->virtualPath)._Mypair._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(param_2->virtualPath)._Mypair._Myval2._Bx + 8) = 0;
  (param_2->virtualPath)._Mypair._Myval2._Mysize = 0;
  (param_2->virtualPath)._Mypair._Myval2._Myres = 0;
  sVar2 = wcslen(pwVar1);
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  _Construct<1,wchar_t_const_*>(&param_2->virtualPath,pwVar1,sVar2);
  pwVar1 = *param_4;
  (param_2->localPath)._Mypair._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(param_2->localPath)._Mypair._Myval2._Bx + 8) = 0;
  (param_2->localPath)._Mypair._Myval2._Mysize = 0;
  (param_2->localPath)._Mypair._Myval2._Myres = 0;
  sVar2 = wcslen(pwVar1);
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  _Construct<1,wchar_t_const_*>(&param_2->localPath,pwVar1,sVar2);
  return;
}

// emplace<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> @ 146ccf310

/* WARNING: Type propagation algorithm not settling */

pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>_>,bool>
* __thiscall
std::
_Hash<std::_Uset_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::_Uhash_compare<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::hash<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,std::equal_to<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,0>_>
::emplace<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
          (_Hash<std::_Uset_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::_Uhash_compare<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::hash<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,std::equal_to<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,0>_>
           *this,pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>_>,bool>
                 *__return_storage_ptr__,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1)

{
  ulong64 *puVar1;
  byte *pbVar2;
  ulonglong uVar3;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var4;
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
  *p_Var5;
  undefined8 uVar6;
  ulong64 uVar7;
  uint uVar8;
  _List_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>_>
  _Var9;
  _List_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>_>
  _Var10;
  _Hash_find_last_result<std::_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>_*>
  *p_Var11;
  pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>_>,bool>
  *extraout_RAX;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  _Hash_find_last_result<std::_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>_*>
  local_28;
  
  pbVar15 = param_1;
  if (7 < (param_1->_Mypair)._Myval2._Myres) {
    pbVar15 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  uVar13 = 0;
  uVar17 = 0xcbf29ce484222325;
  uVar3 = (param_1->_Mypair)._Myval2._Mysize * 2;
  if (uVar3 != 0) {
    do {
      pbVar2 = (byte *)((pbVar15->_Mypair)._Myval2._Bx._Alias + uVar13);
      uVar13 = uVar13 + 1;
      uVar17 = (uVar17 ^ *pbVar2) * 0x100000001b3;
    } while (uVar13 < uVar3);
  }
  _Find_last<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
            (this,&local_28,param_1,uVar17);
  if ((_List_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>_>
       )local_28._Duplicate !=
      (_List_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>_>
       )0x0) {
    __return_storage_ptr__->first =
         (_List_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>_>
          )local_28._Duplicate;
    __return_storage_ptr__->second = false;
    return __return_storage_ptr__;
  }
  if ((this->_List)._Mypair._Myval2._Mysize == 0x555555555555555) {
    _Xlength_error("unordered_map/set too long");
    return extraout_RAX;
  }
  _Var9 = (_List_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>_>
           )::operator_new(0x30);
  (((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
   ((longlong)_Var9 + 0x10))->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)_Var9 + 0x18) = 0;
  *(ulong64 *)((longlong)_Var9 + 0x20) = 0;
  *(ulong64 *)((longlong)_Var9 + 0x28) = 0;
  uVar6 = *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8);
  (((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
   ((longlong)_Var9 + 0x10))->_Mypair)._Myval2._Bx._Ptr = (param_1->_Mypair)._Myval2._Bx._Ptr;
  *(undefined8 *)((longlong)_Var9 + 0x18) = uVar6;
  uVar7 = (param_1->_Mypair)._Myval2._Myres;
  *(ulong64 *)((longlong)_Var9 + 0x20) = (param_1->_Mypair)._Myval2._Mysize;
  *(ulong64 *)((longlong)_Var9 + 0x28) = uVar7;
  (param_1->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  (param_1->_Mypair)._Myval2._Mysize = 0;
  (param_1->_Mypair)._Myval2._Myres = 7;
  uVar13 = (this->_List)._Mypair._Myval2._Mysize + 1;
  uVar3 = this->_Maxidx;
  _Var10 = _Var9;
  if ((longlong)uVar13 < 0) {
    _Var10 = (_List_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>_>
              )(uVar13 >> 1 | (ulonglong)((uint)uVar13 & 1));
  }
  uVar8 = _Var10._0_4_;
  if ((longlong)uVar3 < 0) {
    uVar8 = (uint)uVar3 & 1;
  }
  if ((float)this->_Traitsobj < (float)uVar13 / (float)uVar3) {
    auVar18._0_4_ = (float)uVar13 / (float)this->_Traitsobj;
    iVar12 = (int)auVar18._0_4_;
    if ((iVar12 != -0x80000000) && ((float)iVar12 != auVar18._0_4_)) {
      auVar18._4_4_ = auVar18._0_4_;
      auVar18._8_8_ = 0;
      uVar8 = movmskps(uVar8,auVar18);
      auVar18._0_4_ = (float)(int)(iVar12 + (uVar8 & 1 ^ 1));
    }
    lVar14 = 0;
    if ((__real_5f000000 <= auVar18._0_4_) &&
       (auVar18._0_4_ = auVar18._0_4_ - __real_5f000000, auVar18._0_4_ < __real_5f000000)) {
      lVar14 = -0x8000000000000000;
    }
    uVar13 = 8;
    if (8 < (ulonglong)((longlong)auVar18._0_4_ + lVar14)) {
      uVar13 = (longlong)auVar18._0_4_ + lVar14;
    }
    uVar16 = uVar3;
    if ((uVar3 < uVar13) && ((0x1ff < uVar3 || (uVar16 = uVar3 * 8, uVar3 * 8 < uVar13)))) {
      uVar16 = uVar13;
    }
    _Forced_rehash(this,uVar16);
    p_Var11 = _Find_last<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
                        (this,&local_28,
                         (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *
                         )((longlong)_Var9 + 0x10),uVar17);
    local_28._Insert_before = p_Var11->_Insert_before;
  }
  p_Var4 = (local_28._Insert_before)->_Prev;
  puVar1 = &(this->_List)._Mypair._Myval2._Mysize;
  *puVar1 = *puVar1 + 1;
  *(_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
    **)_Var9 = local_28._Insert_before;
  *(_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
    **)((longlong)_Var9 + 8) = p_Var4;
  p_Var4->_Next =
       (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
        *)_Var9;
  (local_28._Insert_before)->_Prev =
       (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
        *)_Var9;
  p_Var5 = (this->_Vec)._Mypair._Myval2._Myfirst;
  uVar17 = this->_Mask & uVar17;
  if (p_Var5[uVar17 * 2]._Ptr == (this->_List)._Mypair._Myval2._Myhead) {
    p_Var5[uVar17 * 2]._Ptr =
         (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
          *)_Var9;
  }
  else {
    if (p_Var5[uVar17 * 2]._Ptr == local_28._Insert_before) {
      p_Var5[uVar17 * 2]._Ptr =
           (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
            *)_Var9;
      goto LAB_146ccf564;
    }
    if (p_Var5[uVar17 * 2 + 1]._Ptr != p_Var4) goto LAB_146ccf564;
  }
  p_Var5[uVar17 * 2 + 1]._Ptr =
       (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
        *)_Var9;
LAB_146ccf564:
  __return_storage_ptr__->first = _Var9;
  __return_storage_ptr__->second = true;
  return __return_storage_ptr__;
}

// fill<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_*,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_> @ 146ccf5a0

void __cdecl
std::
fill<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_*,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_>
          (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
           *param_1,
          _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
          *param_2,_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
                   *param_3)

{
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var1;
  ulonglong uVar2;
  ulonglong uVar3;
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
  *p_Var4;
  
  uVar3 = (ulonglong)((longlong)param_2 + (7 - (longlong)param_1)) >> 3;
  if (param_2 < param_1) {
    uVar3 = 0;
  }
  if ((uVar3 != 0) && (1 < uVar3)) {
    p_Var1 = param_3->_Ptr;
    if ((param_3 < param_1) || (param_1 + (uVar3 - 1) < param_3)) {
      p_Var4 = param_1;
      for (uVar2 = uVar3 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
        p_Var4->_Ptr = p_Var1;
        p_Var4 = p_Var4 + 1;
      }
      param_1 = param_1 + (uVar3 & 0xfffffffffffffffe);
    }
  }
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    param_1->_Ptr = param_3->_Ptr;
  }
  return;
}

// uninitialized_copy<ClientUserCommandThread::BaseCommand_*_*_*,ClientUserCommandThread::BaseCommand_*_*_*> @ 146ccf630

BaseCommand *** __cdecl
std::
uninitialized_copy<ClientUserCommandThread::BaseCommand_*_*_*,ClientUserCommandThread::BaseCommand_*_*_*>
          (BaseCommand ***param_1,BaseCommand ***param_2,BaseCommand ***param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (BaseCommand ***)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// uninitialized_fill<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_*,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_> @ 146ccf670

void __cdecl
std::
uninitialized_fill<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_*,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_>
          (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
           *param_1,
          _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
          *param_2,_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
                   *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    param_1->_Ptr = param_3->_Ptr;
  }
  return;
}

// FixedSizeString<char,22> @ 146ccf6a0

FixedSizeString<char,22> * __thiscall
FixedSizeString<char,22>::FixedSizeString<char,22>
          (FixedSizeString<char,22> *this,FixedSizeString<char,22> *param_1)

{
  this->m_length = param_1->m_length;
  memcpy(this->m_data,param_1->m_data,(ulonglong)(param_1->m_length + 1));
  return this;
}

// FixedSizeString<char,22> @ 146ccf6d0

FixedSizeString<char,22> * __thiscall
FixedSizeString<char,22>::FixedSizeString<char,22>(FixedSizeString<char,22> *this,char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  this->m_length = (uint)sVar1;
  memcpy(this->m_data,param_1,(ulonglong)((uint)sVar1 + 1));
  return this;
}

// FixedSizeString<char,22> @ 146ccf710

FixedSizeString<char,22> * __thiscall
FixedSizeString<char,22>::FixedSizeString<char,22>
          (FixedSizeString<char,22> *this,char *param_1,uint param_2)

{
  this->m_length = param_2;
  memcpy(this->m_data,param_1,(ulonglong)param_2);
  this->m_data[param_2] = '\0';
  return this;
}

// FixedSizeString<char,22> @ 146ccf750

FixedSizeString<char,22> * __thiscall
FixedSizeString<char,22>::FixedSizeString<char,22>(FixedSizeString<char,22> *this)

{
  this->m_length = 0;
  this->m_data[0] = '\0';
  return this;
}

// FixedSizeString<wchar_t,260> @ 146ccf770

FixedSizeString<wchar_t,260> * __thiscall
FixedSizeString<wchar_t,260>::FixedSizeString<wchar_t,260>
          (FixedSizeString<wchar_t,260> *this,FixedSizeString<wchar_t,260> *param_1)

{
  this->m_length = param_1->m_length;
  memcpy(this->m_data,param_1->m_data,(ulonglong)(param_1->m_length + 1) * 2);
  return this;
}

// FixedSizeString<wchar_t,260> @ 146ccf7b0

FixedSizeString<wchar_t,260> * __thiscall
FixedSizeString<wchar_t,260>::FixedSizeString<wchar_t,260>
          (FixedSizeString<wchar_t,260> *this,wchar_t *param_1)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_1);
  this->m_length = (uint)sVar1;
  memcpy(this->m_data,param_1,(ulonglong)((uint)sVar1 + 1) * 2);
  return this;
}

// FixedSizeString<wchar_t,260> @ 146ccf800

FixedSizeString<wchar_t,260> * __thiscall
FixedSizeString<wchar_t,260>::FixedSizeString<wchar_t,260>
          (FixedSizeString<wchar_t,260> *this,wchar_t *param_1,uint param_2)

{
  this->m_length = param_2;
  memcpy(this->m_data,param_1,(ulonglong)param_2 * 2);
  this->m_data[param_2] = L'\0';
  return this;
}

// FixedSizeString<wchar_t,260> @ 146ccf840

FixedSizeString<wchar_t,260> * __thiscall
FixedSizeString<wchar_t,260>::FixedSizeString<wchar_t,260>(FixedSizeString<wchar_t,260> *this)

{
  this->m_length = 0;
  this->m_data[0] = L'\0';
  return this;
}

// Function<long___cdecl(void_*,void_*,void_*,unsigned_long,unsigned_long_*)> @ 146ccf860

Function<long___cdecl(void_*,void_*,void_*,unsigned_long,unsigned_long_*)> * __thiscall
WindowsInternals::Function<long___cdecl(void_*,void_*,void_*,unsigned_long,unsigned_long_*)>::
Function<long___cdecl(void_*,void_*,void_*,unsigned_long,unsigned_long_*)>
          (Function<long___cdecl(void_*,void_*,void_*,unsigned_long,unsigned_long_*)> *this,
          char *param_1,char *param_2)

{
  HMODULE hModule;
  _func___cdecl_long_void_ptr_void_ptr_void_ptr_ulong_ulong_ptr *p_Var1;
  
  this->m_moduleName = param_1;
  this->m_functionName = param_2;
  this->m_function = (_func___cdecl_long_void_ptr_void_ptr_void_ptr_ulong_ulong_ptr *)0x0;
  hModule = GetModuleHandleA(param_1);
  if (hModule == (HMODULE)0x0) {
    Logging::Log(USER,LOG_ERROR,"%sCannot get handle for module %s\n");
    return this;
  }
  p_Var1 = (_func___cdecl_long_void_ptr_void_ptr_void_ptr_ulong_ulong_ptr *)
           GetProcAddress(hModule,param_2);
  this->m_function = p_Var1;
  if (p_Var1 == (_func___cdecl_long_void_ptr_void_ptr_void_ptr_ulong_ulong_ptr *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%sCannot get address of function %s in module %s\n");
  }
  return this;
}

// Function<long___cdecl(void_*)> @ 146ccf960

Function<long___cdecl(void_*)> * __thiscall
WindowsInternals::Function<long___cdecl(void_*)>::Function<long___cdecl(void_*)>
          (Function<long___cdecl(void_*)> *this,char *param_1,char *param_2)

{
  HMODULE hModule;
  _func___cdecl_long_void_ptr *p_Var1;
  
  this->m_moduleName = param_1;
  this->m_functionName = param_2;
  this->m_function = (_func___cdecl_long_void_ptr *)0x0;
  hModule = GetModuleHandleA(param_1);
  if (hModule == (HMODULE)0x0) {
    Logging::Log(USER,LOG_ERROR,"%sCannot get handle for module %s\n");
    return this;
  }
  p_Var1 = (_func___cdecl_long_void_ptr *)GetProcAddress(hModule,param_2);
  this->m_function = p_Var1;
  if (p_Var1 == (_func___cdecl_long_void_ptr *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%sCannot get address of function %s in module %s\n");
  }
  return this;
}

// basic_string<char,std::char_traits<char>,std::allocator<char>_> @ 146ccfa60

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
basic_string<char,std::char_traits<char>,std::allocator<char>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char *_Dst;
  ulonglong uVar4;
  
  (this->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = 0;
  (this->_Mypair)._Myval2._Mysize = 0;
  (this->_Mypair)._Myval2._Myres = 0;
  uVar1 = (param_1->_Mypair)._Myval2._Mysize;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  if (uVar1 < 0x8000000000000000) {
    if (uVar1 < 0x10) {
      (this->_Mypair)._Myval2._Mysize = uVar1;
      (this->_Mypair)._Myval2._Myres = 0xf;
      uVar2 = *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8);
      (this->_Mypair)._Myval2._Bx._Ptr = (param_1->_Mypair)._Myval2._Bx._Ptr;
      *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = uVar2;
    }
    else {
      uVar3 = uVar1 | 0xf;
      uVar4 = 0x7fffffffffffffff;
      if ((uVar3 < 0x8000000000000000) && (uVar4 = uVar3, uVar3 < 0x16)) {
        uVar4 = 0x16;
      }
      _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar4 + 1);
      (this->_Mypair)._Myval2._Bx._Ptr = _Dst;
      (this->_Mypair)._Myval2._Mysize = uVar1;
      (this->_Mypair)._Myval2._Myres = uVar4;
      memcpy(_Dst,param_1,uVar1 + 1);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  _Xlen_string();
}

// basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 146ccfb30

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  wchar_t *_Dst;
  ulonglong uVar4;
  
  (this->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = 0;
  (this->_Mypair)._Myval2._Mysize = 0;
  (this->_Mypair)._Myval2._Myres = 0;
  uVar1 = (param_1->_Mypair)._Myval2._Mysize;
  if (7 < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  if (0x7ffffffffffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
    _Xlen_string();
  }
  if (uVar1 < 8) {
    (this->_Mypair)._Myval2._Mysize = uVar1;
    (this->_Mypair)._Myval2._Myres = 7;
    uVar2 = *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8);
    (this->_Mypair)._Myval2._Bx._Ptr = (param_1->_Mypair)._Myval2._Bx._Ptr;
    *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = uVar2;
  }
  else {
    uVar3 = uVar1 | 7;
    if (uVar3 < 0x7fffffffffffffff) {
      if (uVar3 < 10) {
        uVar3 = 10;
      }
      uVar4 = uVar3 + 1;
      if (0x7fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
        _Throw_bad_array_new_length();
      }
    }
    else {
      uVar4 = 0x7fffffffffffffff;
      uVar3 = 0x7ffffffffffffffe;
    }
    _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar4 * 2);
    (this->_Mypair)._Myval2._Bx._Ptr = _Dst;
    (this->_Mypair)._Myval2._Mysize = uVar1;
    (this->_Mypair)._Myval2._Myres = uVar3;
    memcpy(_Dst,param_1,uVar1 * 2 + 2);
  }
  return this;
}

// BaseCommand @ 146ccfc30

BaseCommand * __thiscall
ClientUserCommandThread::BaseCommand::BaseCommand(BaseCommand *this,bool param_1)

{
  this->m_expectResponse = param_1;
  this->_padding_ = (longlong)&___7BaseCommand_ClientUserCommandThread__6B_;
  return this;
}

// ClientCommandThread @ 146ccfc50

ClientCommandThread * __thiscall
ClientCommandThread::ClientCommandThread(ClientCommandThread *this,DuplexPipeClient *param_1)

{
  (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  this->m_pipe = param_1;
  return this;
}

// ClientStartupThread @ 146ccfc70

ClientStartupThread * __thiscall ClientStartupThread::ClientStartupThread(ClientStartupThread *this)

{
  deque<ClientUserCommandThread::BaseCommand_*,std::allocator<ClientUserCommandThread::BaseCommand_*>_>
  *pdVar1;
  DuplexPipeClient *pDVar2;
  DuplexPipeClient *pDVar3;
  ClientCommandThread *pCVar4;
  ClientCommandThread *pCVar5;
  ClientCommandThread *pCVar6;
  ClientUserCommandThread *pCVar7;
  longlong *plVar8;
  HANDLE pvVar9;
  
  pCVar6 = (ClientCommandThread *)0x0;
  (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  (this->m_processHandle).m_value = (void *)0x0;
  this->m_pipeClient = (DuplexPipeClient *)0x0;
  this->m_exceptionPipeClient = (DuplexPipeClient *)0x0;
  this->m_commandThread = (ClientCommandThread *)0x0;
  this->m_userCommandThread = (ClientUserCommandThread *)0x0;
  this->m_job = (void *)0x0;
  this->m_sharedMemory = (NamedSharedMemory *)0x0;
  this->m_mainProcessContext = (Context *)0x0;
  this->m_successfulInit = false;
  this->m_pipeClientCS = (CriticalSection *)0x0;
  this->m_startEvent = (Event *)0x0;
  this->m_compilationEvent = (Event *)0x0;
  pCVar4 = ::operator_new(8);
  pCVar5 = pCVar6;
  if (pCVar4 != (ClientCommandThread *)0x0) {
    (pCVar4->m_thread).m_value = (void *)0xffffffffffffffff;
    pCVar5 = pCVar4;
  }
  this->m_pipeClient = (DuplexPipeClient *)pCVar5;
  pCVar4 = ::operator_new(8);
  pCVar5 = pCVar6;
  if (pCVar4 != (ClientCommandThread *)0x0) {
    (pCVar4->m_thread).m_value = (void *)0xffffffffffffffff;
    pCVar5 = pCVar4;
  }
  this->m_exceptionPipeClient = (DuplexPipeClient *)pCVar5;
  pCVar5 = ::operator_new(0x10);
  if (pCVar5 != (ClientCommandThread *)0x0) {
    pDVar2 = this->m_pipeClient;
    (pCVar5->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
    pCVar5->m_pipe = pDVar2;
    pCVar6 = pCVar5;
  }
  this->m_commandThread = pCVar6;
  pCVar7 = ::operator_new(0x90);
  if (pCVar7 == (ClientUserCommandThread *)0x0) {
    this->m_userCommandThread = (ClientUserCommandThread *)0x0;
    return this;
  }
  pDVar2 = this->m_exceptionPipeClient;
  pDVar3 = this->m_pipeClient;
  (pCVar7->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  (pCVar7->m_processGroupName)._Mypair._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(pCVar7->m_processGroupName)._Mypair._Myval2._Bx + 8) = 0;
  (pCVar7->m_processGroupName)._Mypair._Myval2._Mysize = 0;
  (pCVar7->m_processGroupName)._Mypair._Myval2._Myres = 7;
  (pCVar7->m_processGroupName)._Mypair._Myval2._Bx._Buf[0] = L'\0';
  pdVar1 = &pCVar7->m_userCommandQueue;
  pCVar7->m_pipe = pDVar3;
  pCVar7->m_exceptionPipe = pDVar2;
  (pdVar1->_Mypair)._Myval2._padding_ = 0;
  (pCVar7->m_userCommandQueue)._Mypair._Myval2._Map = (BaseCommand ***)0x0;
  (pCVar7->m_userCommandQueue)._Mypair._Myval2._Mapsize = 0;
  (pCVar7->m_userCommandQueue)._Mypair._Myval2._Myoff = 0;
  (pCVar7->m_userCommandQueue)._Mypair._Myval2._Mysize = 0;
  plVar8 = ::operator_new(0x10);
  plVar8[1] = 0;
  (pdVar1->_Mypair)._Myval2._padding_ = (longlong)plVar8;
  *plVar8 = (longlong)pdVar1;
  InitializeCriticalSection((LPCRITICAL_SECTION)&pCVar7->m_userCommandQueueCS);
  pvVar9 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,0,0xffff,(LPCWSTR)0x0);
  (pCVar7->m_userCommandQueueSema).m_sema = pvVar9;
  this->m_userCommandThread = pCVar7;
  return this;
}

// ClientUserCommandThread @ 146ccfe00

ClientUserCommandThread * __thiscall
ClientUserCommandThread::ClientUserCommandThread
          (ClientUserCommandThread *this,DuplexPipeClient *param_1,DuplexPipeClient *param_2)

{
  deque<ClientUserCommandThread::BaseCommand_*,std::allocator<ClientUserCommandThread::BaseCommand_*>_>
  *pdVar1;
  longlong *plVar2;
  HANDLE pvVar3;
  
  pdVar1 = &this->m_userCommandQueue;
  (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  (this->m_processGroupName)._Mypair._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(this->m_processGroupName)._Mypair._Myval2._Bx + 8) = 0;
  (this->m_processGroupName)._Mypair._Myval2._Mysize = 0;
  (this->m_processGroupName)._Mypair._Myval2._Myres = 7;
  (this->m_processGroupName)._Mypair._Myval2._Bx._Buf[0] = L'\0';
  this->m_pipe = param_1;
  this->m_exceptionPipe = param_2;
  (pdVar1->_Mypair)._Myval2._padding_ = 0;
  (this->m_userCommandQueue)._Mypair._Myval2._Map = (BaseCommand ***)0x0;
  (this->m_userCommandQueue)._Mypair._Myval2._Mapsize = 0;
  (this->m_userCommandQueue)._Mypair._Myval2._Myoff = 0;
  (this->m_userCommandQueue)._Mypair._Myval2._Mysize = 0;
  plVar2 = ::operator_new(0x10);
  plVar2[1] = 0;
  (pdVar1->_Mypair)._Myval2._padding_ = (longlong)plVar2;
  *plVar2 = (longlong)pdVar1;
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->m_userCommandQueueCS);
  pvVar3 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,0,0xffff,(LPCWSTR)0x0);
  (this->m_userCommandQueueSema).m_sema = pvVar3;
  return this;
}

// CommandMap @ 146ccfeb0

CommandMap * __thiscall CommandMap::CommandMap(CommandMap *this)

{
  memset(this,0,800);
  this->m_actions[0x83] = (_func___cdecl_bool_DuplexPipe_ptr_void_ptr_void_ptr_ulong64 *)0x0;
  this->m_actions[0x84] = (_func___cdecl_bool_DuplexPipe_ptr_void_ptr_void_ptr_ulong64 *)0x0;
  this->m_actions[0x8a] = (_func___cdecl_bool_DuplexPipe_ptr_void_ptr_void_ptr_ulong64 *)0x0;
  this->m_actions[100] = ::`anonymous_namespace'::DefaultAction<commands::Acknowledge>;
  this->m_actions[0x65] = ::`anonymous_namespace'::DefaultAction<commands::RegisterProcess>;
  this->m_actions[0x66] = ::`anonymous_namespace'::DefaultAction<commands::RegisterProcessFinished>;
  this->m_actions[0x67] = ::`anonymous_namespace'::DefaultAction<commands::EnableModules>;
  this->m_actions[0x68] = ::`anonymous_namespace'::DefaultAction<commands::EnableModulesFinished>;
  this->m_actions[0x69] = ::`anonymous_namespace'::DefaultAction<commands::DisableModules>;
  this->m_actions[0x6a] = ::`anonymous_namespace'::DefaultAction<commands::DisableModulesFinished>;
  this->m_actions[0x6b] = ::`anonymous_namespace'::DefaultAction<commands::EnterSyncPoint>;
  this->m_actions[0x6c] = ::`anonymous_namespace'::DefaultAction<commands::LeaveSyncPoint>;
  this->m_actions[0x6d] = ::`anonymous_namespace'::DefaultAction<commands::CallHooks>;
  this->m_actions[0x6e] = ::`anonymous_namespace'::DefaultAction<commands::LoadPatch>;
  this->m_actions[0x6f] = ::`anonymous_namespace'::DefaultAction<commands::LoadPatchInfo>;
  this->m_actions[0x70] = ::`anonymous_namespace'::DefaultAction<commands::UnloadPatch>;
  this->m_actions[0x71] = ::`anonymous_namespace'::DefaultAction<commands::CallEntryPoint>;
  this->m_actions[0x72] = ::`anonymous_namespace'::DefaultAction<commands::LogOutput>;
  this->m_actions[0x73] = ::`anonymous_namespace'::DefaultAction<commands::ReadyForCompilation>;
  this->m_actions[0x74] = ::`anonymous_namespace'::DefaultAction<commands::CompilationFinished>;
  this->m_actions[0x75] = ::`anonymous_namespace'::DefaultAction<commands::DisconnectClient>;
  this->m_actions[0x76] = ::`anonymous_namespace'::DefaultAction<commands::TriggerRecompile>;
  this->m_actions[0x77] = ::`anonymous_namespace'::DefaultAction<commands::TriggerRestart>;
  this->m_actions[0x78] = ::`anonymous_namespace'::DefaultAction<commands::LogMessage>;
  this->m_actions[0x79] = ::`anonymous_namespace'::DefaultAction<commands::BuildPatch>;
  this->m_actions[0x7a] = ::`anonymous_namespace'::DefaultAction<commands::HandleException>;
  this->m_actions[0x7b] = ::`anonymous_namespace'::DefaultAction<commands::HandleExceptionFinished>;
  this->m_actions[0x7c] = ::`anonymous_namespace'::DefaultAction<commands::ApplySettingBool>;
  this->m_actions[0x7d] = ::`anonymous_namespace'::DefaultAction<commands::ApplySettingInt>;
  this->m_actions[0x7e] = ::`anonymous_namespace'::DefaultAction<commands::ApplySettingString>;
  this->m_actions[0x7f] = ::`anonymous_namespace'::DefaultAction<commands::ShowConsole>;
  this->m_actions[0x80] = ::`anonymous_namespace'::DefaultAction<commands::SetVisible>;
  this->m_actions[0x81] = ::`anonymous_namespace'::DefaultAction<commands::SetActive>;
  this->m_actions[0x82] = ::`anonymous_namespace'::DefaultAction<commands::SetBuildArguments>;
  this->m_actions[0x85] = ::`anonymous_namespace'::DefaultAction<commands::PreCompile>;
  this->m_actions[0x86] = ::`anonymous_namespace'::DefaultAction<commands::PostCompile>;
  this->m_actions[0x87] = ::`anonymous_namespace'::DefaultAction<commands::TriggerReload>;
  this->m_actions[0x88] = ::`anonymous_namespace'::DefaultAction<commands::SetReinstancingFlow>;
  this->m_actions[0x89] =
       ::`anonymous_namespace'::DefaultAction<commands::DisableCompileFinishNotification>;
  return this;
}

// CriticalSection @ 146cd00e0

CriticalSection * __thiscall CriticalSection::CriticalSection(CriticalSection *this)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)this);
  return this;
}

// DuplexPipe @ 146cd0100

DuplexPipe * __thiscall DuplexPipe::DuplexPipe(DuplexPipe *this)

{
  this->m_pipe = (void *)0xffffffffffffffff;
  return this;
}

// Event @ 146cd0120

Event * __thiscall Event::Event(Event *this,wchar_t *param_1,Enum param_2)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,(uint)(param_2 == MANUAL_RESET),0,param_1);
  this->m_event = pvVar1;
  GetLastError();
  if (this->m_event == (void *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%sCannot create event %S. Error: 0x%X\n");
  }
  return this;
}

// HeartBeat @ 146cd0850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HeartBeat * __thiscall
HeartBeat::HeartBeat(HeartBeat *this,wchar_t *param_1,StrongTypedef<unsigned_long,0> param_2)

{
  void *pvVar1;
  InterprocessMutex *pIVar2;
  size_t sVar3;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar4;
  HANDLE pvVar5;
  NamedSharedMemory *pNVar6;
  void *pvVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  InterprocessMutex *pIVar10;
  InterprocessMutex *pIVar11;
  undefined1 auStackY_a8 [32];
  _Bxty local_70;
  undefined8 local_60;
  ulonglong uStack_58;
  _Bxty local_50;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pIVar10 = (InterprocessMutex *)0x0;
  this->m_mutex = (InterprocessMutex *)0x0;
  this->m_memory = (NamedSharedMemory *)0x0;
  pIVar2 = ::operator_new(8);
  pIVar11 = pIVar10;
  if (pIVar2 != (InterprocessMutex *)0x0) {
    local_70._Ptr = (wchar_t *)0x0;
    local_70._8_8_ = 0;
    local_60 = 0;
    uStack_58 = 0;
    sVar3 = wcslen(param_1);
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Construct<1,wchar_t_const_*>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)&local_70
               ,param_1,sVar3);
    pbVar4 = primitiveNames::HeartBeatMutex
                       ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                        &local_50,
                        (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                        &local_70,param_2);
    if (7 < (pbVar4->_Mypair)._Myval2._Myres) {
      pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (pbVar4->_Mypair)._Myval2._Bx._Ptr;
    }
    pvVar5 = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,0,(LPCWSTR)pbVar4);
    pIVar2->m_mutex = pvVar5;
    pIVar10 = (InterprocessMutex *)&DAT_00000003;
    pIVar11 = pIVar2;
  }
  this->m_mutex = pIVar11;
  if (((ulonglong)pIVar10 & 2) != 0) {
    pIVar10 = (InterprocessMutex *)(ulonglong)((uint)pIVar10 & 0xfffffffd);
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)&local_50
              );
  }
  if ((((ulonglong)pIVar10 & 1) != 0) && (7 < uStack_58)) {
    uVar9 = uStack_58 * 2 + 2;
    uVar8 = local_70._Ptr;
    if (0xfff < uVar9) {
      uVar8 = *(undefined8 *)(local_70._Ptr + -4);
      uVar9 = uStack_58 * 2 + 0x29;
      if (0x1f < (ulonglong)((longlong)local_70._Ptr + (-8 - uVar8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar8,uVar9);
  }
  local_70._Ptr = (wchar_t *)0x0;
  local_70._8_8_ = 0;
  local_60 = 0;
  uStack_58 = 0;
  sVar3 = wcslen(param_1);
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  _Construct<1,wchar_t_const_*>
            ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)&local_70,
             param_1,sVar3);
  pbVar4 = primitiveNames::HeartBeatNamedSharedMemory
                     ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                      &local_50,
                      (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                      &local_70,param_2);
  if (7 < (pbVar4->_Mypair)._Myval2._Myres) {
    pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (pbVar4->_Mypair)._Myval2._Bx._Ptr;
  }
  pNVar6 = ::Process::CreateNamedSharedMemory((wchar_t *)pbVar4,0x1000);
  this->m_memory = pNVar6;
  if (7 < uStack_38) {
    pvVar1 = (void *)CONCAT62(local_50._2_6_,local_50._Buf[0]);
    uVar9 = uStack_38 * 2 + 2;
    pvVar7 = pvVar1;
    if (0xfff < uVar9) {
      pvVar7 = *(void **)((longlong)pvVar1 + -8);
      uVar9 = uStack_38 * 2 + 0x29;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar7))) goto LAB_146cd0a4f;
    }
    ::operator_delete(pvVar7,uVar9);
  }
  local_50._Buf[0] = L'\0';
  local_40 = ___xmm_00000000000000070000000000000000;
  uStack_38 = _UNK_15145b248;
  if (7 < uStack_58) {
    uVar9 = uStack_58 * 2 + 2;
    uVar8 = local_70._Ptr;
    if (0xfff < uVar9) {
      uVar8 = *(undefined8 *)(local_70._Ptr + -4);
      uVar9 = uStack_58 * 2 + 0x29;
      if (0x1f < (ulonglong)((longlong)local_70._Ptr + (-8 - uVar8))) {
LAB_146cd0a4f:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar8,uVar9);
  }
  return this;
}

// Indent @ 146cd0aa0

Indent * __thiscall Logging::Indent::Indent(Indent *this,Enum param_1)

{
  this->m_channel = param_1;
  LOCK();
  g_indentationLevel[(int)param_1] = g_indentationLevel[(int)param_1] + 1;
  UNLOCK();
  return this;
}

// InterprocessMutex @ 146cd0ac0

InterprocessMutex * __thiscall
InterprocessMutex::InterprocessMutex(InterprocessMutex *this,wchar_t *param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,0,param_1);
  this->m_mutex = pvVar1;
  return this;
}

// Reader @ 146cd0af0

Reader * __thiscall memoryStream::Reader::Reader(Reader *this,void *param_1,ulong64 param_2)

{
  this->m_data = param_1;
  this->m_capacity = param_2;
  this->m_offset = 0;
  return this;
}

// ScopedLock @ 146cd0b10

ScopedLock * __thiscall
InterprocessMutex::ScopedLock::ScopedLock(ScopedLock *this,InterprocessMutex *param_1)

{
  DWORD DVar1;
  
  this->m_mutex = param_1;
  DVar1 = WaitForSingleObject(param_1->m_mutex,0xffffffff);
  if (((DVar1 == 0x80) || (DVar1 == 0x102)) || (DVar1 == 0xffffffff)) {
    Logging::Log(DEV,LOG_ERROR,"ERROR: %s%s\n");
  }
  return this;
}

// Semaphore @ 146cd0c00

Semaphore * __thiscall Semaphore::Semaphore(Semaphore *this,uint param_1,uint param_2)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,(LPCWSTR)0x0);
  *(HANDLE *)this = pvVar1;
  return (Semaphore *)this;
}

// Writer @ 146cd0d80

Writer * __thiscall memoryStream::Writer::Writer(Writer *this,ulong64 param_1)

{
  char *pcVar1;
  
  pcVar1 = operator_new__(param_1);
  this->m_data = pcVar1;
  this->m_capacity = param_1;
  this->m_offset = 0;
  return this;
}

// ~TFunction_OwnedObject<`FLiveCodingModule::OnDllLoaded'::__l8::<lambda_1>,1,0> @ 146cd0dc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveCodingModule::OnDllLoaded'::__l8::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FLiveCodingModule::OnDllLoaded_::__l8::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLiveCodingModule::OnDllLoaded'::`8'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLiveCodingModule::StartLiveCodingAsync'::__l10::<lambda_1>,1,0> @ 146cd0de0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveCodingModule::StartLiveCodingAsync'::__l10::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FLiveCodingModule::StartLiveCodingAsync_::__l10::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLiveCodingModule::StartLiveCodingAsync'::`10'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_>_> @ 146cd0e00

/* WARNING: Type propagation algorithm not settling */

void __thiscall
std::
_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_>_>
::
~_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_>_>
          (_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_>_>
           *this)

{
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
  *p_Var1;
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
  *p_Var2;
  ulong64 uVar3;
  
  p_Var1 = (this->_Mypair)._Myval2._Myfirst;
  if (p_Var1 != (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
                 *)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)p_Var1 & 0xfffffffffffffff8;
    p_Var2 = p_Var1;
    if (0xfff < uVar3) {
      p_Var2 = *(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
                 **)(p_Var1 + 0xffffffffffffffff);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)p_Var1 + (-8 - (longlong)p_Var2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(p_Var2,uVar3);
    (this->_Mypair)._Myval2._Myfirst =
         (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
          *)0x0;
    (this->_Mypair)._Myval2._Mylast =
         (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
          *)0x0;
    (this->_Mypair)._Myval2._Myend =
         (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
          *)0x0;
  }
  return;
}

// ~deque<ClientUserCommandThread::BaseCommand_*,std::allocator<ClientUserCommandThread::BaseCommand_*>_> @ 146cd0e80

void __thiscall
std::
deque<ClientUserCommandThread::BaseCommand_*,std::allocator<ClientUserCommandThread::BaseCommand_*>_>
::
~deque<ClientUserCommandThread::BaseCommand_*,std::allocator<ClientUserCommandThread::BaseCommand_*>_>
          (deque<ClientUserCommandThread::BaseCommand_*,std::allocator<ClientUserCommandThread::BaseCommand_*>_>
           *this)

{
  BaseCommand **ppBVar1;
  void *pvVar2;
  BaseCommand **ppBVar3;
  ulong64 uVar4;
  
  uVar4 = (this->_Mypair)._Myval2._Mysize;
  if (uVar4 != 0) {
    do {
      uVar4 = uVar4 - 1;
      (this->_Mypair)._Myval2._Mysize = uVar4;
    } while (uVar4 != 0);
    (this->_Mypair)._Myval2._Myoff = 0;
  }
  if ((this->_Mypair)._Myval2._Map != (BaseCommand ***)0x0) {
    uVar4 = (this->_Mypair)._Myval2._Mapsize;
    while (0 < (longlong)uVar4) {
      uVar4 = uVar4 - 1;
      ppBVar1 = (this->_Mypair)._Myval2._Map[uVar4];
      if (ppBVar1 != (BaseCommand **)0x0) {
        ::operator_delete(ppBVar1,0x10);
      }
    }
    ppBVar1 = (BaseCommand **)(this->_Mypair)._Myval2._Map;
    uVar4 = (this->_Mypair)._Myval2._Mapsize * 8;
    ppBVar3 = ppBVar1;
    if (0xfff < uVar4) {
      ppBVar3 = (BaseCommand **)ppBVar1[-1];
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)ppBVar1 + (-8 - (longlong)ppBVar3))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(ppBVar3,uVar4);
    (this->_Mypair)._Myval2._Map = (BaseCommand ***)0x0;
    (this->_Mypair)._Myval2._Mapsize = 0;
  }
  pvVar2 = (void *)(this->_Mypair)._Myval2._padding_;
  (this->_Mypair)._Myval2._padding_ = 0;
  ::operator_delete(pvVar2,0x10);
  return;
}

// ~vector<executable::ImageSection,std::allocator<executable::ImageSection>_> @ 146cd0f70

void __thiscall
std::vector<executable::ImageSection,std::allocator<executable::ImageSection>_>::
~vector<executable::ImageSection,std::allocator<executable::ImageSection>_>
          (vector<executable::ImageSection,std::allocator<executable::ImageSection>_> *this)

{
  ImageSection *pIVar1;
  ImageSection *pIVar2;
  ulong64 uVar3;
  
  pIVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pIVar1 != (ImageSection *)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pIVar1 & 0xfffffffffffffff0;
    pIVar2 = pIVar1;
    if (0xfff < uVar3) {
      pIVar2 = *(ImageSection **)&pIVar1[-1].rawDataRva;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pIVar1 + (-8 - (longlong)pIVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pIVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (ImageSection *)0x0;
    (this->_Mypair)._Myval2._Mylast = (ImageSection *)0x0;
    (this->_Mypair)._Myval2._Myend = (ImageSection *)0x0;
  }
  return;
}

// ~vector<executable::ImportModule,std::allocator<executable::ImportModule>_> @ 146cd0ff0

void __thiscall
std::vector<executable::ImportModule,std::allocator<executable::ImportModule>_>::
~vector<executable::ImportModule,std::allocator<executable::ImportModule>_>
          (vector<executable::ImportModule,std::allocator<executable::ImportModule>_> *this)

{
  ImportModule *pIVar1;
  ImportModule *pIVar2;
  ulong64 uVar3;
  
  pIVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pIVar1 != (ImportModule *)0x0) {
    uVar3 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pIVar1) / 0x104) * 0x104;
    pIVar2 = pIVar1;
    if (0xfff < uVar3) {
      pIVar2 = *(ImportModule **)(pIVar1[-1].path + 0xfc);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pIVar1 + (-8 - (longlong)pIVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pIVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (ImportModule *)0x0;
    (this->_Mypair)._Myval2._Mylast = (ImportModule *)0x0;
    (this->_Mypair)._Myval2._Myend = (ImportModule *)0x0;
  }
  return;
}

// ~BaseCommand @ 146cd1090

void __thiscall ClientUserCommandThread::BaseCommand::~BaseCommand(BaseCommand *this)

{
  this->_padding_ = (longlong)&___7BaseCommand_ClientUserCommandThread__6B_;
  return;
}

// ~ClientCommandThread @ 146cd10b0

void __thiscall ClientCommandThread::~ClientCommandThread(ClientCommandThread *this)

{
  return;
}

// ~ClientStartupThread @ 146cd10c0

void __thiscall ClientStartupThread::~ClientStartupThread(ClientStartupThread *this)

{
  DuplexPipeClient *pDVar1;
  ClientCommandThread *pCVar2;
  HANDLE pvVar3;
  ClientUserCommandThread *pCVar4;
  Event *pEVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  Context *pCVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  
  if (this->m_pipeClient != (DuplexPipeClient *)0x0) {
    if (*this->m_pipeClient != (DuplexPipeClient)0xffffffffffffffff) {
      pDVar1 = this->m_pipeClient;
      local_res8[0] = 0;
      local_res18 = 0x75;
      DuplexPipe::Send((DuplexPipe *)pDVar1,&local_res18,8);
      DuplexPipe::Send((DuplexPipe *)pDVar1,local_res8,1);
      local_res10[0] = 0;
      DuplexPipe::Read((DuplexPipe *)pDVar1,local_res10,1);
    }
    pDVar1 = this->m_pipeClient;
    CloseHandle((HANDLE)*pDVar1);
    *pDVar1 = (DuplexPipeClient)0xffffffffffffffff;
  }
  pDVar1 = this->m_exceptionPipeClient;
  if (pDVar1 != (DuplexPipeClient *)0x0) {
    CloseHandle((HANDLE)*pDVar1);
    *pDVar1 = (DuplexPipeClient)0xffffffffffffffff;
  }
  pCVar2 = this->m_commandThread;
  if ((pCVar2 != (ClientCommandThread *)0x0) &&
     (pvVar3 = (pCVar2->m_thread).m_value, pvVar3 != Thread::INVALID_HANDLE.m_value)) {
    WaitForSingleObject(pvVar3,0xffffffff);
    CloseHandle((pCVar2->m_thread).m_value);
    (pCVar2->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  if (this->m_userCommandThread != (ClientUserCommandThread *)0x0) {
    ClientUserCommandThread::PushUserCommand(this->m_userCommandThread,(BaseCommand *)0x0);
    pCVar4 = this->m_userCommandThread;
    pvVar3 = (pCVar4->m_thread).m_value;
    if (pvVar3 != Thread::INVALID_HANDLE.m_value) {
      WaitForSingleObject(pvVar3,0xffffffff);
      CloseHandle((pCVar4->m_thread).m_value);
      (pCVar4->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
    }
  }
  pDVar1 = this->m_pipeClient;
  if (pDVar1 != (DuplexPipeClient *)0x0) {
    CloseHandle((HANDLE)*pDVar1);
    *pDVar1 = (DuplexPipeClient)0xffffffffffffffff;
    ::operator_delete(pDVar1,8);
  }
  this->m_pipeClient = (DuplexPipeClient *)0x0;
  pDVar1 = this->m_exceptionPipeClient;
  if (pDVar1 != (DuplexPipeClient *)0x0) {
    CloseHandle((HANDLE)*pDVar1);
    *pDVar1 = (DuplexPipeClient)0xffffffffffffffff;
    ::operator_delete(pDVar1,8);
  }
  this->m_exceptionPipeClient = (DuplexPipeClient *)0x0;
  if (this->m_commandThread != (ClientCommandThread *)0x0) {
    ::operator_delete(this->m_commandThread,0x10);
  }
  this->m_commandThread = (ClientCommandThread *)0x0;
  ::`anonymous_namespace'::DeleteAndNull<ClientUserCommandThread>(&this->m_userCommandThread);
  pEVar5 = this->m_startEvent;
  if (pEVar5 != (Event *)0x0) {
    CloseHandle(pEVar5->m_event);
    ::operator_delete(pEVar5,8);
  }
  this->m_startEvent = (Event *)0x0;
  pEVar5 = this->m_compilationEvent;
  if (pEVar5 != (Event *)0x0) {
    CloseHandle(pEVar5->m_event);
    ::operator_delete(pEVar5,8);
  }
  this->m_compilationEvent = (Event *)0x0;
  lpCriticalSection = (LPCRITICAL_SECTION)this->m_pipeClientCS;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    ::operator_delete(lpCriticalSection,0x28);
  }
  this->m_pipeClientCS = (CriticalSection *)0x0;
  if (this->m_mainProcessContext != (Context *)0x0) {
    CloseHandle((this->m_mainProcessContext->processInformation).hProcess);
    CloseHandle((this->m_mainProcessContext->processInformation).hThread);
    pCVar6 = this->m_mainProcessContext;
    if (pCVar6 != (Context *)0x0) {
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
      ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>(&pCVar6->stdoutData)
      ;
      ::operator_delete(pCVar6,0x50);
    }
    this->m_mainProcessContext = (Context *)0x0;
  }
  CloseHandle(this->m_job);
  if (this->m_sharedMemory != (NamedSharedMemory *)0x0) {
    UnmapViewOfFile(this->m_sharedMemory->memoryView);
    CloseHandle(this->m_sharedMemory->memoryMapping);
    ::operator_delete(this->m_sharedMemory,0x18);
    this->m_sharedMemory = (NamedSharedMemory *)0x0;
  }
  return;
}

// ~ClientUserCommandThread @ 146cd1350

void __thiscall ClientUserCommandThread::~ClientUserCommandThread(ClientUserCommandThread *this)

{
  CloseHandle((this->m_userCommandQueueSema).m_sema);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_userCommandQueueCS);
  std::
  deque<ClientUserCommandThread::BaseCommand_*,std::allocator<ClientUserCommandThread::BaseCommand_*>_>
  ::
  ~deque<ClientUserCommandThread::BaseCommand_*,std::allocator<ClientUserCommandThread::BaseCommand_*>_>
            (&this->m_userCommandQueue);
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
            (&this->m_processGroupName);
  return;
}

// ~CommandMap @ 146cd1390

void __thiscall CommandMap::~CommandMap(CommandMap *this)

{
  return;
}

// ~CriticalSection @ 146cd13a0

void __stdcall CriticalSection::~CriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x000146cd13a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}

// ~DuplexPipe @ 146cd13b0

void __thiscall DuplexPipe::~DuplexPipe(DuplexPipe *this)

{
  CloseHandle(this->m_pipe);
  this->m_pipe = (void *)0xffffffffffffffff;
  return;
}

// ~Event @ 146cd13e0

void __thiscall Event::~Event(Event *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146cd13e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseHandle(this->m_event);
  return;
}

// ~HeartBeat @ 146cd1570

void __thiscall HeartBeat::~HeartBeat(HeartBeat *this)

{
  InterprocessMutex *pIVar1;
  
  if (this->m_memory != (NamedSharedMemory *)0x0) {
    UnmapViewOfFile(this->m_memory->memoryView);
    CloseHandle(this->m_memory->memoryMapping);
    ::operator_delete(this->m_memory,0x18);
    this->m_memory = (NamedSharedMemory *)0x0;
  }
  pIVar1 = this->m_mutex;
  if (pIVar1 != (InterprocessMutex *)0x0) {
    CloseHandle(pIVar1->m_mutex);
    ::operator_delete(pIVar1,8);
    return;
  }
  return;
}

// ~Indent @ 146cd15f0

void __thiscall Logging::Indent::~Indent(Indent *this)

{
  LOCK();
  g_indentationLevel[(int)this->m_channel] = g_indentationLevel[(int)this->m_channel] + -1;
  UNLOCK();
  return;
}

// ~InterprocessMutex @ 146cd1610

void __thiscall InterprocessMutex::~InterprocessMutex(InterprocessMutex *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146cd1613. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseHandle(this->m_mutex);
  return;
}

// ~Semaphore @ 146cd1620

void __thiscall Semaphore::~Semaphore(Semaphore *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146cd1623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseHandle(*(HANDLE *)this);
  return;
}

// ~Writer @ 146cd1670

void __thiscall memoryStream::Writer::~Writer(Writer *this)

{
  operator_delete__(this->m_data);
  return;
}

// operator= @ 146cd1680

FixedSizeString<char,22> * __thiscall
FixedSizeString<char,22>::operator=
          (FixedSizeString<char,22> *this,FixedSizeString<char,22> *param_1)

{
  if (this != param_1) {
    memcpy(this->m_data,param_1->m_data,(ulonglong)(param_1->m_length + 1));
    this->m_length = param_1->m_length;
  }
  return this;
}

// operator= @ 146cd16c0

FixedSizeString<char,22> * __thiscall
FixedSizeString<char,22>::operator=(FixedSizeString<char,22> *this,char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  memcpy(this->m_data,param_1,sVar1 + 1);
  this->m_length = (uint)sVar1;
  return this;
}

// operator= @ 146cd1710

FixedSizeString<wchar_t,260> * __thiscall
FixedSizeString<wchar_t,260>::operator=
          (FixedSizeString<wchar_t,260> *this,FixedSizeString<wchar_t,260> *param_1)

{
  if (this != param_1) {
    memcpy(this->m_data,param_1->m_data,(ulonglong)(param_1->m_length + 1) * 2);
    this->m_length = param_1->m_length;
  }
  return this;
}

// operator= @ 146cd1760

FixedSizeString<wchar_t,260> * __thiscall
FixedSizeString<wchar_t,260>::operator=(FixedSizeString<wchar_t,260> *this,wchar_t *param_1)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_1);
  memcpy(this->m_data,param_1,sVar1 * 2 + 2);
  this->m_length = (uint)sVar1;
  return this;
}

// operator+= @ 146cd17b0

FixedSizeString<char,22> * __thiscall
FixedSizeString<char,22>::operator+=
          (FixedSizeString<char,22> *this,FixedSizeString<char,22> *param_1)

{
  memcpy(this->m_data + this->m_length,param_1->m_data,(ulonglong)(param_1->m_length + 1));
  this->m_length = this->m_length + param_1->m_length;
  return this;
}

// operator+= @ 146cd17f0

FixedSizeString<char,22> * __thiscall
FixedSizeString<char,22>::operator+=(FixedSizeString<char,22> *this,char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  memcpy(this->m_data + this->m_length,param_1,sVar1 + 1);
  this->m_length = this->m_length + (int)sVar1;
  return this;
}

// operator+= @ 146cd1850

FixedSizeString<wchar_t,260> * __thiscall
FixedSizeString<wchar_t,260>::operator+=
          (FixedSizeString<wchar_t,260> *this,FixedSizeString<wchar_t,260> *param_1)

{
  memcpy(this->m_data + this->m_length,param_1->m_data,(ulonglong)(param_1->m_length + 1) * 2);
  this->m_length = this->m_length + param_1->m_length;
  return this;
}

// operator+= @ 146cd18a0

FixedSizeString<wchar_t,260> * __thiscall
FixedSizeString<wchar_t,260>::operator+=(FixedSizeString<wchar_t,260> *this,wchar_t *param_1)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_1);
  memcpy(this->m_data + this->m_length,param_1,sVar1 * 2 + 2);
  this->m_length = this->m_length + (int)sVar1;
  return this;
}

// `vcall'{160,{flat}}'_}' @ 146cd18f8

/* [thunk]: __cdecl FLiveCodingModule::`vcall'{160,{flat}}' }' */

void __thiscall FLiveCodingModule::_vcall__160__flat______(FLiveCodingModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146cd18fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xa0))();
  return;
}

// `scalar_deleting_destructor' @ 146cd1910

void * __thiscall
_anon_92CB2683::ProxyCommand<commands::ApplySettingBool>::_scalar_deleting_destructor_
          (ProxyCommand<commands::ApplySettingBool> *this,uint param_1)

{
  operator_delete__((this->m_payload).m_data);
  this->_padding_ = (longlong)&___7BaseCommand_ClientUserCommandThread__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1960

void * __thiscall
_anon_92CB2683::ProxyCommand<commands::ApplySettingInt>::_scalar_deleting_destructor_
          (ProxyCommand<commands::ApplySettingInt> *this,uint param_1)

{
  operator_delete__((this->m_payload).m_data);
  this->_padding_ = (longlong)&___7BaseCommand_ClientUserCommandThread__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd19b0

void * __thiscall
_anon_92CB2683::ProxyCommand<commands::ApplySettingString>::_scalar_deleting_destructor_
          (ProxyCommand<commands::ApplySettingString> *this,uint param_1)

{
  operator_delete__((this->m_payload).m_data);
  this->_padding_ = (longlong)&___7BaseCommand_ClientUserCommandThread__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x328);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1a00

void * __thiscall
_anon_92CB2683::ProxyCommand<commands::BuildPatch>::_scalar_deleting_destructor_
          (ProxyCommand<commands::BuildPatch> *this,uint param_1)

{
  operator_delete__((this->m_payload).m_data);
  this->_padding_ = (longlong)&___7BaseCommand_ClientUserCommandThread__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1a50

void * __thiscall
_anon_92CB2683::ProxyCommand<commands::DisableCompileFinishNotification>::
_scalar_deleting_destructor_
          (ProxyCommand<commands::DisableCompileFinishNotification> *this,uint param_1)

{
  operator_delete__((this->m_payload).m_data);
  this->_padding_ = (longlong)&___7BaseCommand_ClientUserCommandThread__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1aa0

void * __thiscall
_anon_92CB2683::ProxyCommand<commands::DisableModules>::_scalar_deleting_destructor_
          (ProxyCommand<commands::DisableModules> *this,uint param_1)

{
  operator_delete__((this->m_payload).m_data);
  this->_padding_ = (longlong)&___7BaseCommand_ClientUserCommandThread__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1af0

void * __thiscall
_anon_92CB2683::ProxyCommand<commands::EnableLazyLoadedModule>::_scalar_deleting_destructor_
          (ProxyCommand<commands::EnableLazyLoadedModule> *this,uint param_1)

{
  operator_delete__((this->m_payload).m_data);
  this->_padding_ = (longlong)&___7BaseCommand_ClientUserCommandThread__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x248);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1b40

void * __thiscall
_anon_92CB2683::ProxyCommand<commands::EnableModules>::_scalar_deleting_destructor_
          (ProxyCommand<commands::EnableModules> *this,uint param_1)

{
  operator_delete__((this->m_payload).m_data);
  this->_padding_ = (longlong)&___7BaseCommand_ClientUserCommandThread__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1b90

void * __thiscall
_anon_92CB2683::ProxyCommand<commands::EnableModulesEx>::_scalar_deleting_destructor_
          (ProxyCommand<commands::EnableModulesEx> *this,uint param_1)

{
  operator_delete__((this->m_payload).m_data);
  this->_padding_ = (longlong)&___7BaseCommand_ClientUserCommandThread__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1be0

void * __thiscall
_anon_92CB2683::ProxyCommand<commands::LogMessage>::_scalar_deleting_destructor_
          (ProxyCommand<commands::LogMessage> *this,uint param_1)

{
  operator_delete__((this->m_payload).m_data);
  this->_padding_ = (longlong)&___7BaseCommand_ClientUserCommandThread__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1c30

void * __thiscall
_anon_92CB2683::ProxyCommand<commands::SetActive>::_scalar_deleting_destructor_
          (ProxyCommand<commands::SetActive> *this,uint param_1)

{
  operator_delete__((this->m_payload).m_data);
  this->_padding_ = (longlong)&___7BaseCommand_ClientUserCommandThread__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1c80

void * __thiscall
_anon_92CB2683::ProxyCommand<commands::SetBuildArguments>::_scalar_deleting_destructor_
          (ProxyCommand<commands::SetBuildArguments> *this,uint param_1)

{
  operator_delete__((this->m_payload).m_data);
  this->_padding_ = (longlong)&___7BaseCommand_ClientUserCommandThread__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x830);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1cd0

void * __thiscall
_anon_92CB2683::ProxyCommand<commands::SetReinstancingFlow>::_scalar_deleting_destructor_
          (ProxyCommand<commands::SetReinstancingFlow> *this,uint param_1)

{
  operator_delete__((this->m_payload).m_data);
  this->_padding_ = (longlong)&___7BaseCommand_ClientUserCommandThread__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1d20

void * __thiscall
_anon_92CB2683::ProxyCommand<commands::SetVisible>::_scalar_deleting_destructor_
          (ProxyCommand<commands::SetVisible> *this,uint param_1)

{
  operator_delete__((this->m_payload).m_data);
  this->_padding_ = (longlong)&___7BaseCommand_ClientUserCommandThread__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1d70

void * __thiscall
_anon_92CB2683::ProxyCommand<commands::ShowConsole>::_scalar_deleting_destructor_
          (ProxyCommand<commands::ShowConsole> *this,uint param_1)

{
  operator_delete__((this->m_payload).m_data);
  this->_padding_ = (longlong)&___7BaseCommand_ClientUserCommandThread__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1dc0

void * __thiscall
_anon_92CB2683::ProxyCommand<commands::TriggerRecompile>::_scalar_deleting_destructor_
          (ProxyCommand<commands::TriggerRecompile> *this,uint param_1)

{
  operator_delete__((this->m_payload).m_data);
  this->_padding_ = (longlong)&___7BaseCommand_ClientUserCommandThread__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1e10

void * __thiscall
_anon_92CB2683::ProxyCommand<commands::TriggerRestart>::_scalar_deleting_destructor_
          (ProxyCommand<commands::TriggerRestart> *this,uint param_1)

{
  operator_delete__((this->m_payload).m_data);
  this->_padding_ = (longlong)&___7BaseCommand_ClientUserCommandThread__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1e60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLiveCodingModule::StartupModule'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1e90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLiveCodingModule::StartLiveCoding'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1ec0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLiveCodingModule::StartupModule'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1ef0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveCodingModule,void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FLiveCodingModule,void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1f20

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveCodingModule,void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1f50

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveCodingModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FLiveCodingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1f80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveCodingModule::OnDllLoaded'::__l8::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLiveCodingModule::OnDllLoaded'::`8'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd1fc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveCodingModule::StartLiveCodingAsync'::__l10::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLiveCodingModule::StartLiveCodingAsync'::`10'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd2000

void * __thiscall
ClientUserCommandThread::BaseCommand::_scalar_deleting_destructor_(BaseCommand *this,uint param_1)

{
  this->_padding_ = (longlong)&___7BaseCommand_ClientUserCommandThread__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd2040

void * __thiscall
FLiveCodingModule::_scalar_deleting_destructor_(FLiveCodingModule *this,uint param_1)

{
  ~FLiveCodingModule(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd2080

void * __thiscall FNullReload::_scalar_deleting_destructor_(FNullReload *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FNullReload__6B_;
  EndReload();
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd20d0

void * __thiscall
ILiveCodingModule::_scalar_deleting_destructor_(ILiveCodingModule *this,uint param_1)

{
  *this = (ILiveCodingModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd2110

void * __thiscall IReload::_scalar_deleting_destructor_(IReload *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cd2140

void * __thiscall
ULiveCodingSettings::_scalar_deleting_destructor_(ULiveCodingSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULiveCodingSettings__6B_;
  pFVar1 = (this->PreloadNamedModules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// AddVfsEntry @ 146cd21b0

void __cdecl Filesystem::AddVfsEntry(wchar_t *param_1,wchar_t *param_2)

{
  VfsEntry *this;
  size_t sVar1;
  wchar_t *local_res8;
  wchar_t *local_res10;
  
  this = g_vfsEntries._Mypair._Myval2._Mylast;
  local_res8 = param_1;
  local_res10 = param_2;
  if (g_vfsEntries._Mypair._Myval2._Mylast != g_vfsEntries._Mypair._Myval2._Myend) {
    ((g_vfsEntries._Mypair._Myval2._Mylast)->virtualPath)._Mypair._Myval2._Bx._Ptr = (wchar_t *)0x0;
    *(undefined8 *)((longlong)&(this->virtualPath)._Mypair._Myval2._Bx + 8) = 0;
    (this->virtualPath)._Mypair._Myval2._Mysize = 0;
    (this->virtualPath)._Mypair._Myval2._Myres = 0;
    sVar1 = wcslen(param_1);
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Construct<1,wchar_t_const_*>(&this->virtualPath,param_1,sVar1);
    (this->localPath)._Mypair._Myval2._Bx._Ptr = (wchar_t *)0x0;
    *(undefined8 *)((longlong)&(this->localPath)._Mypair._Myval2._Bx + 8) = 0;
    (this->localPath)._Mypair._Myval2._Mysize = 0;
    (this->localPath)._Mypair._Myval2._Myres = 0;
    sVar1 = wcslen(param_2);
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Construct<1,wchar_t_const_*>(&this->localPath,param_2,sVar1);
    g_vfsEntries._Mypair._Myval2._Mylast = g_vfsEntries._Mypair._Myval2._Mylast + 1;
    return;
  }
  std::vector<Filesystem::VfsEntry,std::allocator<Filesystem::VfsEntry>_>::
  _Emplace_reallocate<wchar_t_const_*_&,wchar_t_const_*_&>
            (&g_vfsEntries,g_vfsEntries._Mypair._Myval2._Mylast,&local_res8,&local_res10);
  return;
}

// Allocate @ 146cd2270

void * __cdecl VirtualMemory::Allocate(StrongTypedef<void_*,0> param_1,ulong64 param_2,Enum param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = VirtualAllocEx(param_1.m_value,(LPVOID)0x0,param_2,0x3000,param_3);
  return pvVar1;
}

// Allocate @ 146cd22a0

void * __cdecl VirtualMemory::Allocate(ulong64 param_1)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146cd22b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = VirtualAlloc((LPVOID)0x0,param_1,0x3000,4);
  return pvVar1;
}

// ApplySettingBool @ 146cd22c0

void __thiscall
ClientStartupThread::ApplySettingBool(ClientStartupThread *this,char *param_1,int param_2)

{
  HANDLE hHandle;
  ClientUserCommandThread *this_00;
  BaseCommand *pBVar1;
  void *pvVar2;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this_00 = this->m_userCommandThread;
  if (this_00 != (ClientUserCommandThread *)0x0) {
    pBVar1 = ::operator_new(0x130);
    if (pBVar1 == (BaseCommand *)0x0) {
      pBVar1 = (BaseCommand *)0x0;
    }
    else {
      pBVar1->m_expectResponse = false;
      pBVar1->_padding_ = (longlong)&ProxyCommand<commands::ApplySettingBool>::_vftable_;
      memset(pBVar1 + 1,0,0x104);
      pvVar2 = operator_new__(0);
      *(void **)&pBVar1[0x11].m_expectResponse = pvVar2;
      pBVar1[0x12]._padding_ = 0;
      *(undefined8 *)&pBVar1[0x12].m_expectResponse = 0;
    }
    strcpy_s((char *)(pBVar1 + 1),0x100,param_1);
    *(int *)&pBVar1[0x11]._padding_ = param_2;
    ClientUserCommandThread::PushUserCommand(this_00,pBVar1);
  }
  return;
}

// ApplySettingBool @ 146cd23b0

void __thiscall
ClientUserCommandThread::ApplySettingBool(ClientUserCommandThread *this,char *param_1,int param_2)

{
  BaseCommand *pBVar1;
  void *pvVar2;
  
  pBVar1 = ::operator_new(0x130);
  if (pBVar1 == (BaseCommand *)0x0) {
    pBVar1 = (BaseCommand *)0x0;
  }
  else {
    pBVar1->m_expectResponse = false;
    pBVar1->_padding_ = (longlong)&ProxyCommand<commands::ApplySettingBool>::_vftable_;
    memset(pBVar1 + 1,0,0x104);
    pvVar2 = operator_new__(0);
    *(void **)&pBVar1[0x11].m_expectResponse = pvVar2;
    pBVar1[0x12]._padding_ = 0;
    *(undefined8 *)&pBVar1[0x12].m_expectResponse = 0;
  }
  strcpy_s((char *)(pBVar1 + 1),0x100,param_1);
  *(int *)&pBVar1[0x11]._padding_ = param_2;
  PushUserCommand(this,pBVar1);
  return;
}

// ApplySettingInt @ 146cd2470

void __thiscall
ClientStartupThread::ApplySettingInt(ClientStartupThread *this,char *param_1,int param_2)

{
  HANDLE hHandle;
  ClientUserCommandThread *this_00;
  BaseCommand *pBVar1;
  void *pvVar2;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this_00 = this->m_userCommandThread;
  if (this_00 != (ClientUserCommandThread *)0x0) {
    pBVar1 = ::operator_new(0x130);
    if (pBVar1 == (BaseCommand *)0x0) {
      pBVar1 = (BaseCommand *)0x0;
    }
    else {
      pBVar1->m_expectResponse = false;
      pBVar1->_padding_ = (longlong)&ProxyCommand<commands::ApplySettingInt>::_vftable_;
      memset(pBVar1 + 1,0,0x104);
      pvVar2 = operator_new__(0);
      *(void **)&pBVar1[0x11].m_expectResponse = pvVar2;
      pBVar1[0x12]._padding_ = 0;
      *(undefined8 *)&pBVar1[0x12].m_expectResponse = 0;
    }
    strcpy_s((char *)(pBVar1 + 1),0x100,param_1);
    *(int *)&pBVar1[0x11]._padding_ = param_2;
    ClientUserCommandThread::PushUserCommand(this_00,pBVar1);
  }
  return;
}

// ApplySettingInt @ 146cd2560

void __thiscall
ClientUserCommandThread::ApplySettingInt(ClientUserCommandThread *this,char *param_1,int param_2)

{
  BaseCommand *pBVar1;
  void *pvVar2;
  
  pBVar1 = ::operator_new(0x130);
  if (pBVar1 == (BaseCommand *)0x0) {
    pBVar1 = (BaseCommand *)0x0;
  }
  else {
    pBVar1->m_expectResponse = false;
    pBVar1->_padding_ = (longlong)&ProxyCommand<commands::ApplySettingInt>::_vftable_;
    memset(pBVar1 + 1,0,0x104);
    pvVar2 = operator_new__(0);
    *(void **)&pBVar1[0x11].m_expectResponse = pvVar2;
    pBVar1[0x12]._padding_ = 0;
    *(undefined8 *)&pBVar1[0x12].m_expectResponse = 0;
  }
  strcpy_s((char *)(pBVar1 + 1),0x100,param_1);
  *(int *)&pBVar1[0x11]._padding_ = param_2;
  PushUserCommand(this,pBVar1);
  return;
}

// ApplySettingString @ 146cd2620

void __thiscall
ClientStartupThread::ApplySettingString(ClientStartupThread *this,char *param_1,wchar_t *param_2)

{
  HANDLE hHandle;
  ClientUserCommandThread *this_00;
  BaseCommand *pBVar1;
  void *pvVar2;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this_00 = this->m_userCommandThread;
  if (this_00 != (ClientUserCommandThread *)0x0) {
    pBVar1 = ::operator_new(0x328);
    if (pBVar1 == (BaseCommand *)0x0) {
      pBVar1 = (BaseCommand *)0x0;
    }
    else {
      pBVar1->m_expectResponse = false;
      pBVar1->_padding_ = (longlong)&ProxyCommand<commands::ApplySettingString>::_vftable_;
      memset(pBVar1 + 1,0,0x300);
      pvVar2 = operator_new__(0);
      pBVar1[0x31]._padding_ = (longlong)pvVar2;
      *(undefined8 *)&pBVar1[0x31].m_expectResponse = 0;
      pBVar1[0x32]._padding_ = 0;
    }
    strcpy_s((char *)(pBVar1 + 1),0x100,param_1);
    wcscpy_s((wchar_t *)(pBVar1 + 0x11),0x100,param_2);
    ClientUserCommandThread::PushUserCommand(this_00,pBVar1);
  }
  return;
}

// ApplySettingString @ 146cd2720

void __thiscall
ClientUserCommandThread::ApplySettingString
          (ClientUserCommandThread *this,char *param_1,wchar_t *param_2)

{
  BaseCommand *pBVar1;
  void *pvVar2;
  
  pBVar1 = ::operator_new(0x328);
  if (pBVar1 == (BaseCommand *)0x0) {
    pBVar1 = (BaseCommand *)0x0;
  }
  else {
    pBVar1->m_expectResponse = false;
    pBVar1->_padding_ = (longlong)&ProxyCommand<commands::ApplySettingString>::_vftable_;
    memset(pBVar1 + 1,0,0x300);
    pvVar2 = operator_new__(0);
    pBVar1[0x31]._padding_ = (longlong)pvVar2;
    *(undefined8 *)&pBVar1[0x31].m_expectResponse = 0;
    pBVar1[0x32]._padding_ = 0;
  }
  strcpy_s((char *)(pBVar1 + 1),0x100,param_1);
  wcscpy_s((wchar_t *)(pBVar1 + 0x11),0x100,param_2);
  PushUserCommand(this,pBVar1);
  return;
}

// BuildPatch @ 146cd3590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ClientStartupThread::BuildPatch
          (ClientStartupThread *this,wchar_t **param_1,wchar_t **param_2,wchar_t **param_3,
          uint param_4)

{
  HANDLE hHandle;
  ClientUserCommandThread *this_00;
  wchar_t *_Src;
  BaseCommand *pBVar1;
  void *pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_698 [32];
  wchar_t local_678 [260];
  wchar_t local_470 [260];
  wchar_t local_268 [264];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_698;
  uVar4 = (ulonglong)param_4;
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this_00 = this->m_userCommandThread;
  if (this_00 != (ClientUserCommandThread *)0x0) {
    pBVar1 = ::operator_new(0x30);
    if (pBVar1 == (BaseCommand *)0x0) {
      pBVar1 = (BaseCommand *)0x0;
    }
    else {
      pBVar1->m_expectResponse = false;
      pBVar1->_padding_ = (longlong)&ProxyCommand<commands::BuildPatch>::_vftable_;
      *(undefined4 *)&pBVar1[1]._padding_ = 0;
      pvVar2 = operator_new__(uVar4 * 0x618);
      *(void **)&pBVar1[1].m_expectResponse = pvVar2;
      pBVar1[2]._padding_ = uVar4 * 0x618;
      *(undefined8 *)&pBVar1[2].m_expectResponse = 0;
    }
    *(uint *)&pBVar1[1]._padding_ = param_4;
    if (param_4 != 0) {
      lVar5 = (longlong)param_1 - (longlong)param_2;
      lVar3 = (longlong)param_3 - (longlong)param_2;
      do {
        memset(local_678,0,0x618);
        wcscpy_s(local_678,0x104,*(wchar_t **)((longlong)param_2 + lVar5));
        wcscpy_s(local_470,0x104,*param_2);
        if ((param_3 != (wchar_t **)0x0) &&
           (_Src = *(wchar_t **)(lVar3 + (longlong)param_2), _Src != (wchar_t *)0x0)) {
          wcscpy_s(local_268,0x104,_Src);
        }
        memcpy((void *)(*(longlong *)&pBVar1[1].m_expectResponse +
                       *(longlong *)&pBVar1[2].m_expectResponse),local_678,0x618);
        *(longlong *)&pBVar1[2].m_expectResponse = *(longlong *)&pBVar1[2].m_expectResponse + 0x618;
        param_2 = param_2 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    ClientUserCommandThread::PushUserCommand(this_00,pBVar1);
  }
  return;
}

// BuildPatch @ 146cd3740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ClientUserCommandThread::BuildPatch
          (ClientUserCommandThread *this,wchar_t **param_1,wchar_t **param_2,wchar_t **param_3,
          uint param_4)

{
  wchar_t *_Src;
  BaseCommand *pBVar1;
  void *pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_698 [32];
  wchar_t local_678 [260];
  wchar_t local_470 [260];
  wchar_t local_268 [264];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_698;
  uVar4 = (ulonglong)param_4;
  pBVar1 = ::operator_new(0x30);
  if (pBVar1 == (BaseCommand *)0x0) {
    pBVar1 = (BaseCommand *)0x0;
  }
  else {
    pBVar1->m_expectResponse = false;
    pBVar1->_padding_ = (longlong)&ProxyCommand<commands::BuildPatch>::_vftable_;
    *(undefined4 *)&pBVar1[1]._padding_ = 0;
    pvVar2 = operator_new__(uVar4 * 0x618);
    *(void **)&pBVar1[1].m_expectResponse = pvVar2;
    pBVar1[2]._padding_ = uVar4 * 0x618;
    *(undefined8 *)&pBVar1[2].m_expectResponse = 0;
  }
  *(uint *)&pBVar1[1]._padding_ = param_4;
  if (param_4 != 0) {
    lVar5 = (longlong)param_1 - (longlong)param_2;
    lVar3 = (longlong)param_3 - (longlong)param_2;
    do {
      memset(local_678,0,0x618);
      wcscpy_s(local_678,0x104,*(wchar_t **)(lVar5 + (longlong)param_2));
      wcscpy_s(local_470,0x104,*param_2);
      if ((param_3 != (wchar_t **)0x0) &&
         (_Src = *(wchar_t **)(lVar3 + (longlong)param_2), _Src != (wchar_t *)0x0)) {
        wcscpy_s(local_268,0x104,_Src);
      }
      memcpy((void *)(*(longlong *)&pBVar1[1].m_expectResponse +
                     *(longlong *)&pBVar1[2].m_expectResponse),local_678,0x618);
      *(longlong *)&pBVar1[2].m_expectResponse = *(longlong *)&pBVar1[2].m_expectResponse + 0x618;
      param_2 = param_2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  PushUserCommand(this,pBVar1);
  return;
}

// CallDllEntryPoint @ 146cd3900

void __cdecl executable::CallDllEntryPoint(void *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146cd390d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulonglong)param_2 + (longlong)param_1))(param_1,1,0);
  return;
}

// Close @ 146cd39b0

void __thiscall DuplexPipe::Close(DuplexPipe *this)

{
  CloseHandle(this->m_pipe);
  this->m_pipe = (void *)0xffffffffffffffff;
  return;
}

// Close @ 146cd39e0

void __cdecl Process::Close(StrongTypedef<void_*,0> *param_1)

{
  CloseHandle(param_1->m_value);
  param_1->m_value = (void *)INVALID_HANDLE;
  return;
}

// Close @ 146cd3a10

void __cdecl Thread::Close(StrongTypedef<void_*,0> *param_1)

{
  CloseHandle(param_1->m_value);
  param_1->m_value = (void *)INVALID_HANDLE;
  return;
}

// CloseImage @ 146cd3a40

void __cdecl executable::CloseImage(MemoryMappedFile **param_1)

{
  UnmapViewOfFile((*param_1)->baseAddress);
  CloseHandle((*param_1)->fileMapping);
  CloseHandle((*param_1)->file);
  ::operator_delete(*param_1,0x20);
  *param_1 = (MemoryMappedFile *)0x0;
  return;
}

// CloseMemoryMappedFile @ 146cd3a90

void __cdecl Filesystem::CloseMemoryMappedFile(MemoryMappedFile **param_1)

{
  UnmapViewOfFile((*param_1)->baseAddress);
  CloseHandle((*param_1)->fileMapping);
  CloseHandle((*param_1)->file);
  ::operator_delete(*param_1,0x20);
  *param_1 = (MemoryMappedFile *)0x0;
  return;
}

// CompilationEvent @ 146cd3ae0

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
primitiveNames::CompilationEvent
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1)

{
  ulonglong uVar1;
  ulong64 uVar2;
  _Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1> *p_Var3
  ;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar4;
  <lambda_1> local_res8;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 7;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::reserve
            (__return_storage_ptr__,0x80);
  p_Var3 = &param_1->_Mypair;
  if (7 < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
            (__return_storage_ptr__,(wchar_t *)param_1,(p_Var3->_Myval2)._Mysize);
  uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
  uVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
  if (9 < uVar1 - uVar2) {
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar2 + 10;
    pbVar4 = __return_storage_ptr__;
    if (7 < uVar1) {
      pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    memmove((void *)((longlong)&(pbVar4->_Mypair)._Myval2._Bx + uVar2 * 2),L"_UE_LC_CMP",0x14);
    *(undefined2 *)((longlong)&(pbVar4->_Mypair)._Myval2._Mysize + uVar2 * 2 + 4) = 0;
    return __return_storage_ptr__;
  }
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
            (__return_storage_ptr__,10,local_res8,L"_UE_LC_CMP",10);
  return __return_storage_ptr__;
}

// Connect @ 146cd3ea0

bool __thiscall DuplexPipeClient::Connect(DuplexPipeClient *this,wchar_t *param_1)

{
  BOOL BVar1;
  DuplexPipeClient hNamedPipe;
  DWORD local_res8 [8];
  
  hNamedPipe = (DuplexPipeClient)
               CreateFileW(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  *this = hNamedPipe;
  if (hNamedPipe == (DuplexPipeClient)0xffffffffffffffff) {
    GetLastError();
    Logging::Log(USER,LOG_ERROR,"%sError 0x%X while trying to connect to named pipe\n");
    return false;
  }
  local_res8[0] = 2;
  BVar1 = SetNamedPipeHandleState((HANDLE)hNamedPipe,local_res8,(LPDWORD)0x0,(LPDWORD)0x0);
  if (BVar1 == 0) {
    GetLastError();
    Logging::Log(USER,LOG_ERROR,"%sError 0x%X while trying to set named pipe state\n");
    return false;
  }
  return true;
}

// Contains @ 146cd3fb0

bool __cdecl string::Contains(char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = strstr(param_1,param_2);
  return pcVar1 != (char *)0x0;
}

// Contains @ 146cd3fd0

bool __cdecl string::Contains(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  
  pwVar1 = wcsstr(param_1,param_2);
  return pwVar1 != (wchar_t *)0x0;
}

// ContainsAlt @ 146cd3ff0

bool __cdecl shortcut::ContainsAlt(int param_1)

{
  return (bool)((byte)((uint)param_1 >> 9) & 1);
}

// ContainsControl @ 146cd4000

bool __cdecl shortcut::ContainsControl(int param_1)

{
  return (bool)((byte)((uint)param_1 >> 8) & 1);
}

// ContainsShift @ 146cd4010

bool __cdecl shortcut::ContainsShift(int param_1)

{
  return (bool)((byte)((uint)param_1 >> 10) & 1);
}

// ConvertKeysToShortcut @ 146cd4020

int __cdecl shortcut::ConvertKeysToShortcut(bool param_1,bool param_2,bool param_3,uint param_4)

{
  return (uint)param_3 << 10 | (uint)param_2 << 9 | (uint)param_1 << 8 | param_4 & 0xff;
}

// ConvertPageProtectionToExecutableProtection @ 146cd4050

uint __cdecl Process::ConvertPageProtectionToExecutableProtection(uint param_1)

{
  switch(param_1 & 0xff) {
  case 1:
  case 2:
  case 4:
  case 8:
    return (param_1 & 0xff) << 4 | param_1 & 0xffffff00;
  default:
    return param_1;
  }
}

// ConvertShortcutToText @ 146cd4130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
shortcut::ConvertShortcutToText
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  UINT UVar4;
  size_t sVar5;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar6;
  UINT *pUVar7;
  longlong lVar8;
  byte *pbVar9;
  undefined1 auStackY_898 [32];
  <lambda_1> local_868;
  byte local_864 [4];
  uint local_860;
  UINT local_858 [4];
  WCHAR local_848 [1024];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_898;
  pbVar9 = local_864;
  pUVar7 = local_858;
  local_860 = param_1 & 0xff;
  local_858[0] = 0x11;
  local_858[1] = 0x12;
  local_864[0] = (byte)((uint)param_1 >> 8) & 1;
  lVar8 = 3;
  local_858[2] = 0x10;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 7;
  local_864[1] = (byte)((uint)param_1 >> 9) & 1;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  local_864[2] = (byte)((uint)param_1 >> 10) & 1;
  do {
    if (*pbVar9 != 0) {
      UVar4 = MapVirtualKeyW(*pUVar7,0);
      memset(local_848,0,0x800);
      GetKeyNameTextW(UVar4 << 0x10,local_848,0x400);
      uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
      if (uVar1 != 0) {
        uVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
        if (uVar2 == uVar1) {
          std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
                    (__return_storage_ptr__,1,local_868,L"+",1);
        }
        else {
          (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar1 + 1;
          pbVar6 = __return_storage_ptr__;
          if (7 < uVar2) {
            pbVar6 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                     (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
          }
          (pbVar6->_Mypair)._Myval2._Bx._Buf[uVar1] = L'+';
          *(undefined2 *)((longlong)&(pbVar6->_Mypair)._Myval2._Bx + uVar1 * 2 + 2) = 0;
        }
      }
      sVar5 = wcslen(local_848);
      uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
      uVar3 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
      if (uVar1 - uVar3 < sVar5) {
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
        _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
                  (__return_storage_ptr__,sVar5,local_868,local_848,sVar5);
      }
      else {
        (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar3 + sVar5;
        pbVar6 = __return_storage_ptr__;
        if (7 < uVar1) {
          pbVar6 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
        }
        memmove((void *)((longlong)&(pbVar6->_Mypair)._Myval2._Bx + uVar3 * 2),local_848,sVar5 * 2);
        (pbVar6->_Mypair)._Myval2._Bx._Buf[uVar3 + sVar5] = L'\0';
      }
    }
    pbVar9 = pbVar9 + 1;
    pUVar7 = pUVar7 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  UVar4 = MapVirtualKeyW(local_860,0);
  memset(local_848,0,0x800);
  GetKeyNameTextW(UVar4 << 0x10,local_848,0x400);
  uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
  uVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
  if (uVar1 == uVar2) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
              (__return_storage_ptr__,1,local_868,L"+",1);
  }
  else {
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar2 + 1;
    pbVar6 = __return_storage_ptr__;
    if (7 < uVar1) {
      pbVar6 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    (pbVar6->_Mypair)._Myval2._Bx._Buf[uVar2] = L'+';
    *(undefined2 *)((longlong)&(pbVar6->_Mypair)._Myval2._Bx + uVar2 * 2 + 2) = 0;
  }
  sVar5 = wcslen(local_848);
  uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
  uVar3 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
  if (uVar1 - uVar3 < sVar5) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
              (__return_storage_ptr__,sVar5,local_868,local_848,sVar5);
  }
  else {
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar3 + sVar5;
    pbVar6 = __return_storage_ptr__;
    if (7 < uVar1) {
      pbVar6 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    memmove((void *)((longlong)&(pbVar6->_Mypair)._Myval2._Bx + uVar3 * 2),local_848,sVar5 * 2);
    (pbVar6->_Mypair)._Myval2._Bx._Buf[uVar3 + sVar5] = L'\0';
  }
  return __return_storage_ptr__;
}

// Create @ 146cd4420

StrongTypedef<void_*,0> __cdecl
Thread::Create(uint param_1,_func___cdecl_uint_void_ptr *param_2,void *param_3)

{
  uintptr_t uVar1;
  undefined4 in_register_0000000c;
  void *in_R9;
  
  uVar1 = _beginthreadex((void *)0x0,(uint)param_2,param_3,in_R9,0,(uint *)0x0);
  if (uVar1 == 0) {
    GetLastError();
    Logging::Log(USER,LOG_ERROR,"%sError 0x%X while trying to create thread\n");
  }
  *(uintptr_t *)CONCAT44(in_register_0000000c,param_1) = uVar1;
  return (StrongTypedef<void_*,0>)(uintptr_t *)CONCAT44(in_register_0000000c,param_1);
}

// CreateEnvironment @ 146cd4db0

Environment * __cdecl
Process::CreateEnvironment(Environment *__return_storage_ptr__,Context *param_1)

{
  CreateEnvironment(__return_storage_ptr__,
                    (StrongTypedef<void_*,0>)(param_1->processInformation).hProcess);
  return __return_storage_ptr__;
}

// CreateEnvironment @ 146cd4de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Environment * __cdecl
Process::CreateEnvironment(Environment *__return_storage_ptr__,StrongTypedef<void_*,0> param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  longlong lVar12;
  void *pvVar13;
  undefined1 auStackY_a48 [32];
  void *local_a08;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  uint local_9f0;
  undefined8 local_9e8;
  void *pvStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8 [9];
  uint uStack_970;
  uint local_728;
  undefined1 local_6f0 [128];
  void *local_670;
  uint local_300;
  undefined8 local_2f8 [4];
  void *local_2d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a48;
  local_a08 = (void *)0x0;
  lVar8 = (*WindowsInternals::NtQueryInformationProcess.m_function)
                    (param_1.m_value,ProcessWow64Information,&local_a08,8,(ulong *)0x0);
  if (lVar8 < 0) {
    Logging::Log(USER,LOG_ERROR,"%sCall to function %s in module %s failed. Error: 0x%X\n");
  }
  if (local_a08 == (void *)0x0) {
    local_9e8 = 0;
    pvStack_9e0 = (void *)0x0;
    local_9d8 = 0;
    uStack_9d0 = 0;
    local_9c8 = 0;
    uStack_9c0 = 0;
    lVar8 = (*WindowsInternals::NtQueryInformationProcess.m_function)
                      (param_1.m_value,ProcessBasicInformation,&local_9e8,0x30,(ulong *)0x0);
    if (lVar8 < 0) {
      Logging::Log(USER,LOG_ERROR,"%sCall to function %s in module %s failed. Error: 0x%X\n");
    }
    memset(local_9b8,0,0x2c8);
    lVar8 = (*WindowsInternals::NtReadVirtualMemory.m_function)
                      (param_1.m_value,pvStack_9e0,local_9b8,0x2c8,(ulong *)0x0);
    if (lVar8 < 0) {
      Logging::Log(USER,LOG_ERROR,"%sCall to function %s in module %s failed. Error: 0x%X\n");
    }
    lVar12 = 5;
    puVar6 = local_9b8;
    puVar7 = local_2f8;
    do {
      puVar11 = puVar7;
      puVar9 = puVar6;
      uVar1 = puVar9[1];
      uVar2 = puVar9[2];
      uVar3 = puVar9[3];
      *puVar11 = *puVar9;
      puVar11[1] = uVar1;
      uVar1 = puVar9[4];
      uVar4 = puVar9[5];
      puVar11[2] = uVar2;
      puVar11[3] = uVar3;
      uVar2 = puVar9[6];
      uVar3 = puVar9[7];
      puVar11[4] = uVar1;
      puVar11[5] = uVar4;
      uVar1 = puVar9[8];
      uVar4 = puVar9[9];
      puVar11[6] = uVar2;
      puVar11[7] = uVar3;
      uVar2 = puVar9[10];
      uVar3 = puVar9[0xb];
      puVar11[8] = uVar1;
      puVar11[9] = uVar4;
      uVar1 = puVar9[0xc];
      uVar4 = puVar9[0xd];
      puVar11[10] = uVar2;
      puVar11[0xb] = uVar3;
      uVar2 = puVar9[0xe];
      uVar3 = puVar9[0xf];
      puVar11[0xc] = uVar1;
      puVar11[0xd] = uVar4;
      puVar11[0xe] = uVar2;
      puVar11[0xf] = uVar3;
      lVar12 = lVar12 + -1;
      puVar6 = puVar9 + 0x10;
      puVar7 = puVar11 + 0x10;
    } while (lVar12 != 0);
    uVar1 = puVar9[0x11];
    uVar2 = puVar9[0x12];
    uVar3 = puVar9[0x13];
    puVar11[0x10] = puVar9[0x10];
    puVar11[0x11] = uVar1;
    uVar4 = puVar9[0x14];
    uVar5 = puVar9[0x15];
    puVar11[0x12] = uVar2;
    puVar11[0x13] = uVar3;
    uVar2 = puVar9[0x16];
    uVar3 = puVar9[0x17];
    uVar1 = puVar9[0x18];
    puVar11[0x14] = uVar4;
    puVar11[0x15] = uVar5;
    puVar11[0x16] = uVar2;
    puVar11[0x17] = uVar3;
    puVar11[0x18] = uVar1;
    memset(local_6f0,0,0x3f8);
    lVar8 = (*WindowsInternals::NtReadVirtualMemory.m_function)
                      (param_1.m_value,local_2d8,local_6f0,0x3f8,(ulong *)0x0);
    pvVar13 = local_670;
    local_728 = local_300;
    if (lVar8 < 0) {
      Logging::Log(USER,LOG_ERROR,"%sCall to function %s in module %s failed. Error: 0x%X\n");
      pvVar13 = local_670;
      local_728 = local_300;
    }
  }
  else {
    local_a08 = (void *)0x0;
    lVar8 = (*WindowsInternals::NtQueryInformationProcess.m_function)
                      (param_1.m_value,ProcessWow64Information,&local_a08,8,(ulong *)0x0);
    if (lVar8 < 0) {
      Logging::Log(USER,LOG_ERROR,"%sCall to function %s in module %s failed. Error: 0x%X\n");
    }
    local_9f0 = 0;
    local_a00 = 0;
    uStack_9f8 = 0;
    lVar8 = (*WindowsInternals::NtReadVirtualMemory.m_function)
                      (param_1.m_value,local_a08,&local_a00,0x14,(ulong *)0x0);
    if (lVar8 < 0) {
      Logging::Log(USER,LOG_ERROR,"%sCall to function %s in module %s failed. Error: 0x%X\n");
    }
    memset(local_9b8,0,0x294);
    lVar8 = (*WindowsInternals::NtReadVirtualMemory.m_function)
                      (param_1.m_value,(void *)(ulonglong)local_9f0,local_9b8,0x294,(ulong *)0x0);
    if (lVar8 < 0) {
      Logging::Log(USER,LOG_ERROR,"%sCall to function %s in module %s failed. Error: 0x%X\n");
    }
    pvVar13 = (void *)(ulonglong)uStack_970;
  }
  if (pvVar13 == (void *)0x0) {
    __return_storage_ptr__->size = 0;
    __return_storage_ptr__->data = (void *)0x0;
  }
  else {
    __return_storage_ptr__->size = (ulonglong)local_728;
    pvVar10 = malloc((ulonglong)local_728);
    __return_storage_ptr__->data = pvVar10;
    ReadProcessMemory(param_1,pvVar13,pvVar10,__return_storage_ptr__->size);
  }
  return __return_storage_ptr__;
}

// CreateEnvironmentFromMap @ 146cd5270

Environment * __cdecl
Process::CreateEnvironmentFromMap
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar4
  ;
  bool bVar5;
  Environment *pEVar6;
  wchar_t *_Dst;
  void *_Dst_00;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  wchar_t *_Dst_01;
  wchar_t *pwVar11;
  ulong64 uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  ForAnyElementType FVar18;
  size_t _Size;
  uint *puVar19;
  undefined1 local_res8 [8];
  int local_res10;
  vector<wchar_t,std::allocator<wchar_t>_> local_c8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  FString local_80;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iStack_a8 = 0;
  puVar1 = &param_1->field_0x10;
  local_c8._Mypair._Myval2._Myend = (wchar_t *)0x0;
  local_c8._Mypair._Myval2._Myfirst = (wchar_t *)0x0;
  local_c8._Mypair._Myval2._Mylast = (wchar_t *)0x0;
  iVar7 = *(int *)&param_1->field_0x28;
  local_90 = 0;
  uStack_a4 = 1;
  iStack_94 = local_90;
  if (iVar7 != 0) {
    puVar19 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar16 = *puVar19;
    local_90 = 0;
    while (uVar16 == 0) {
      lVar8 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_146cd531d;
      uVar16 = puVar19[lVar8 + 1];
    }
    uStack_a4 = -uVar16 & uVar16;
    uVar13 = (ulonglong)uStack_a4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_94 = local_90 + -1 + local_res10;
    if (iVar7 < iStack_94) {
      iStack_94 = iVar7;
    }
  }
LAB_146cd531d:
  uVar16 = *(uint *)&param_1->field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  iStack_88 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_98 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_68.CurrentBitIndex = iStack_94;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_68._28_4_ = iStack_94;
  TStack_68.BaseBitIndex = local_90;
  uStack_48 = CONCAT44(uStack_84,iStack_88);
  local_b0 = param_1;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_70 = param_1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar7 < (int)uVar16)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pEVar6 = (Environment *)(*pcVar3)();
    return pEVar6;
  }
  uVar2 = *(uint *)&param_1->field_0x28;
  if (uVar16 != uVar2) {
    puVar17 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar8 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_146cd5420;
      uVar16 = *(uint *)(puVar17 + lVar8 * 4 + 4);
    }
    uVar13 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar16 = (int)lVar8 + -1 + uVar15;
    if ((int)uVar2 < (int)uVar16) {
      uVar16 = uVar2;
    }
  }
LAB_146cd5420:
  while( true ) {
    pTVar4 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    pwVar11 = local_c8._Mypair._Myval2._Mylast;
    if (((TStack_68.CurrentBitIndex == uVar16) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar4 == param_1))
    break;
    ::FString::PrintfImpl(&local_80,L"%s=%s");
    iVar7 = local_80.Data.ArrayNum;
    FVar18.Data = local_80.Data.AllocatorInstance.Data;
    if (iVar7 == 0) {
      iVar7 = 1;
      FVar18.Data = (FScriptContainerElement *)L"";
    }
    std::vector<wchar_t,std::allocator<wchar_t>_>::_Insert_counted_range<wchar_t_const_*>
              (&local_c8,
               (_Vector_const_iterator<std::_Vector_val<std::_Simple_types<wchar_t>_>_>)
               local_c8._Mypair._Myval2._Mylast,(wchar_t *)FVar18.Data,(longlong)iVar7 * 2 >> 1);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  if (local_c8._Mypair._Myval2._Mylast == local_c8._Mypair._Myval2._Myend) {
    lVar8 = (longlong)local_c8._Mypair._Myval2._Mylast - (longlong)local_c8._Mypair._Myval2._Myfirst
            >> 1;
    if (lVar8 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::vector<wchar_t,std::allocator<wchar_t>_>::_Xlength();
    }
    uVar13 = lVar8 + 1;
    uVar9 = (longlong)local_c8._Mypair._Myval2._Myend - (longlong)local_c8._Mypair._Myval2._Myfirst
            >> 1;
    if (0x7fffffffffffffff - (uVar9 >> 1) < uVar9) {
      uVar10 = 0x7fffffffffffffff;
    }
    else {
      uVar9 = (uVar9 >> 1) + uVar9;
      uVar10 = uVar13;
      if (uVar13 <= uVar9) {
        uVar10 = uVar9;
      }
      if (0x7fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_bad_array_new_length();
      }
    }
    _Dst = std::_Allocate<16,std::_Default_allocate_traits>(uVar10 * 2);
    _Dst[lVar8] = L'\0';
    if (pwVar11 == local_c8._Mypair._Myval2._Mylast) {
      _Size = (longlong)local_c8._Mypair._Myval2._Mylast -
              (longlong)local_c8._Mypair._Myval2._Myfirst;
      _Dst_01 = _Dst;
      pwVar11 = local_c8._Mypair._Myval2._Myfirst;
    }
    else {
      memmove(_Dst,local_c8._Mypair._Myval2._Myfirst,
              (longlong)pwVar11 - (longlong)local_c8._Mypair._Myval2._Myfirst);
      _Size = (longlong)local_c8._Mypair._Myval2._Mylast - (longlong)pwVar11;
      _Dst_01 = _Dst + lVar8 + 1;
    }
    memmove(_Dst_01,pwVar11,_Size);
    if (local_c8._Mypair._Myval2._Myfirst != (wchar_t *)0x0) {
      uVar9 = ((longlong)local_c8._Mypair._Myval2._Myend -
               (longlong)local_c8._Mypair._Myval2._Myfirst >> 1) * 2;
      pwVar11 = local_c8._Mypair._Myval2._Myfirst;
      if (0xfff < uVar9) {
        pwVar11 = *(wchar_t **)(local_c8._Mypair._Myval2._Myfirst + -4);
        uVar9 = uVar9 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_c8._Mypair._Myval2._Myfirst + (-8 - (longlong)pwVar11)))
        goto LAB_146cd567f;
      }
      ::operator_delete(pwVar11,uVar9);
    }
    local_c8._Mypair._Myval2._Mylast = _Dst + uVar13;
    local_c8._Mypair._Myval2._Myend = _Dst + uVar10;
    local_c8._Mypair._Myval2._Myfirst = _Dst;
  }
  else {
    *local_c8._Mypair._Myval2._Mylast = L'\0';
    local_c8._Mypair._Myval2._Mylast = local_c8._Mypair._Myval2._Mylast + 1;
  }
  pEVar6 = ::operator_new(0x10);
  uVar12 = (longlong)local_c8._Mypair._Myval2._Mylast - (longlong)local_c8._Mypair._Myval2._Myfirst
           >> 1;
  pEVar6->size = uVar12;
  _Dst_00 = malloc(uVar12 * 2);
  pEVar6->data = _Dst_00;
  if (_Dst_00 != (void *)0x0) {
    memcpy(_Dst_00,local_c8._Mypair._Myval2._Myfirst,
           ((longlong)local_c8._Mypair._Myval2._Mylast - (longlong)local_c8._Mypair._Myval2._Myfirst
           >> 1) * 2);
  }
  if (local_c8._Mypair._Myval2._Myfirst != (wchar_t *)0x0) {
    uVar13 = ((longlong)local_c8._Mypair._Myval2._Myend -
              (longlong)local_c8._Mypair._Myval2._Myfirst >> 1) * 2;
    pwVar11 = local_c8._Mypair._Myval2._Myfirst;
    if (0xfff < uVar13) {
      pwVar11 = *(wchar_t **)(local_c8._Mypair._Myval2._Myfirst + -4);
      uVar13 = uVar13 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_c8._Mypair._Myval2._Myfirst + (-8 - (longlong)pwVar11))
         ) {
LAB_146cd567f:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pwVar11,uVar13);
  }
  return pEVar6;
}

// CreateNamedSharedMemory @ 146cd56d0

NamedSharedMemory * __cdecl Process::CreateNamedSharedMemory(wchar_t *param_1,ulong64 param_2)

{
  DWORD DVar1;
  HANDLE hFileMappingObject;
  LPVOID pvVar2;
  NamedSharedMemory *pNVar3;
  
  hFileMappingObject =
       CreateFileMappingW((HANDLE)0xffffffffffffffff,(LPSECURITY_ATTRIBUTES)0x0,4,
                          (DWORD)(param_2 >> 0x20),(DWORD)param_2,param_1);
  DVar1 = GetLastError();
  if (hFileMappingObject == (HANDLE)0x0) {
    Logging::Log(USER,LOG_ERROR,"%sCannot create named shared memory. Error: 0x%X\n");
    return (NamedSharedMemory *)0x0;
  }
  pvVar2 = MapViewOfFile(hFileMappingObject,0xf001f,0,0,param_2);
  if (pvVar2 == (LPVOID)0x0) {
    GetLastError();
    Logging::Log(USER,LOG_ERROR,"%sCannot map view for named shared memory. Error: 0x%X\n");
    CloseHandle(hFileMappingObject);
  }
  else {
    pNVar3 = ::operator_new(0x18);
    if (pNVar3 != (NamedSharedMemory *)0x0) {
      pNVar3->memoryMapping = hFileMappingObject;
      pNVar3->isOwned = DVar1 != 0xb7;
      pNVar3->memoryView = pvVar2;
      return pNVar3;
    }
  }
  return (NamedSharedMemory *)0x0;
}

// DecrementConsistent @ 146cd5820

void __cdecl Atomic::DecrementConsistent(int *param_1)

{
  LOCK();
  *param_1 = *param_1 + -1;
  UNLOCK();
  return;
}

// DecrementIndentation @ 146cd5840

void __cdecl Logging::DecrementIndentation(Enum param_1)

{
  LOCK();
  g_indentationLevel[(int)param_1] = g_indentationLevel[(int)param_1] + -1;
  UNLOCK();
  return;
}

// DefaultOutputHandler @ 146cd5860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `anonymous_namespace'::DefaultOutputHandler(Enum param_1,Enum param_2,wchar_t *param_3)

{
  FString *this;
  FString local_28;
  FString local_18;
  
  this = ::FString::FString(&local_18,param_3);
  ::FString::TrimEnd(this,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (param_2 == LOG_WARNING) {
    if (2 < (byte)LogLiveCoding._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`DefaultOutputHandler'::`5'::LOG_Static,(FLogCategoryBase *)&LogLiveCoding);
    }
  }
  else if (param_2 == LOG_ERROR) {
    if (1 < (byte)LogLiveCoding._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`DefaultOutputHandler'::`23'::LOG_Static,(FLogCategoryBase *)&LogLiveCoding);
    }
  }
  else if (3 < (byte)LogLiveCoding._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`DefaultOutputHandler'::`41'::LOG_Static,(FLogCategoryBase *)&LogLiveCoding);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// Destroy @ 146cd5970

void __cdecl Process::Destroy(Context **param_1)

{
  Context *pCVar1;
  
  CloseHandle(((*param_1)->processInformation).hProcess);
  CloseHandle(((*param_1)->processInformation).hThread);
  pCVar1 = *param_1;
  if (pCVar1 != (Context *)0x0) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>(&pCVar1->stdoutData);
    ::operator_delete(pCVar1,0x50);
  }
  *param_1 = (Context *)0x0;
  return;
}

// DestroyEnvironment @ 146cd59d0

void __cdecl Process::DestroyEnvironment(Environment *param_1)

{
  free(param_1->data);
  param_1->data = (void *)0x0;
  param_1->size = 0;
  return;
}

// DestroyImageSectionDB @ 146cd5a00

void __cdecl executable::DestroyImageSectionDB(ImageSectionDB *param_1)

{
  if (param_1 != (ImageSectionDB *)0x0) {
    std::vector<executable::ImageSection,std::allocator<executable::ImageSection>_>::
    ~vector<executable::ImageSection,std::allocator<executable::ImageSection>_>(&param_1->sections);
    ::operator_delete(param_1,0x18);
  }
  return;
}

// DestroyImportModuleDB @ 146cd5a30

void __cdecl executable::DestroyImportModuleDB(ImportModuleDB *param_1)

{
  if (param_1 != (ImportModuleDB *)0x0) {
    std::vector<executable::ImportModule,std::allocator<executable::ImportModule>_>::
    ~vector<executable::ImportModule,std::allocator<executable::ImportModule>_>(&param_1->modules);
    ::operator_delete(param_1,0x18);
  }
  return;
}

// DestroyNamedSharedMemory @ 146cd5a60

void __cdecl Process::DestroyNamedSharedMemory(NamedSharedMemory **param_1)

{
  if (*param_1 != (NamedSharedMemory *)0x0) {
    UnmapViewOfFile((*param_1)->memoryView);
    CloseHandle((*param_1)->memoryMapping);
    ::operator_delete(*param_1,0x18);
    *param_1 = (NamedSharedMemory *)0x0;
  }
  return;
}

// DestroyPdbInfo @ 146cd5ab0

void __cdecl executable::DestroyPdbInfo(PdbInfo *param_1)

{
  ::operator_delete(param_1,0x118);
  return;
}

// Devirtualize @ 146cd5ac0

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
Filesystem::Devirtualize
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1)

{
  wchar_t *_Str;
  ulonglong uVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar4;
  size_t sVar5;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *_Dst;
  ulonglong uVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  VfsEntry *pVVar9;
  VfsEntry *pVVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  if (g_vfsEntries._Mypair._Myval2._Myfirst != g_vfsEntries._Mypair._Myval2._Mylast) {
    uVar1 = (param_1->_Mypair)._Myval2._Mysize;
    uVar6 = (param_1->_Mypair)._Myval2._Myres;
    pVVar9 = g_vfsEntries._Mypair._Myval2._Myfirst;
    do {
      uVar2 = (pVVar9->virtualPath)._Mypair._Myval2._Mysize;
      uVar12 = uVar2;
      if (uVar1 < uVar2) {
        uVar12 = uVar1;
      }
      pbVar4 = param_1;
      if (7 < uVar6) {
        pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 (param_1->_Mypair)._Myval2._Bx._Ptr;
      }
      pVVar10 = pVVar9;
      if (7 < (pVVar9->virtualPath)._Mypair._Myval2._Myres) {
        pVVar10 = (VfsEntry *)(pVVar9->virtualPath)._Mypair._Myval2._Bx._Ptr;
      }
      uVar7 = uVar2;
      if (uVar12 < uVar2) {
        uVar7 = uVar12;
      }
      if (uVar7 != 0) {
        lVar11 = (longlong)pVVar10 - (longlong)pbVar4;
        do {
          if (*(wchar_t *)(lVar11 + (longlong)pbVar4) != (pbVar4->_Mypair)._Myval2._Bx._Buf[0])
          goto LAB_146cd5b4b;
          pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   ((longlong)&(pbVar4->_Mypair)._Myval2._Bx + 2);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if ((uVar12 <= uVar2) && (uVar2 <= uVar12)) {
        if (7 < uVar6) {
          param_1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                    (param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        uVar3 = (pVVar9->localPath)._Mypair._Myval2._Mysize;
        _Str = (param_1->_Mypair)._Myval2._Bx._Buf + uVar2;
        pbVar4 = &pVVar9->localPath;
        sVar5 = wcslen(_Str);
        if (0x7ffffffffffffffe - uVar3 < sVar5) {
                    /* WARNING: Subroutine does not return */
          std::_Xlen_string();
        }
        if (7 < (pVVar9->localPath)._Mypair._Myval2._Myres) {
          pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   (pbVar4->_Mypair)._Myval2._Bx._Ptr;
        }
        uVar1 = sVar5 + uVar3;
        uVar8 = 7;
        (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
        *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
        (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
        (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
        _Dst = __return_storage_ptr__;
        if (7 < uVar1) {
          uVar8 = uVar1 | 7;
          if (uVar8 < 0x7fffffffffffffff) {
            if (uVar8 < 10) {
              uVar8 = 10;
            }
            uVar6 = uVar8 + 1;
            if (0x7fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
              std::_Throw_bad_array_new_length();
            }
          }
          else {
            uVar8 = 0x7ffffffffffffffe;
            uVar6 = 0x7fffffffffffffff;
          }
          _Dst = std::_Allocate<16,std::_Default_allocate_traits>(uVar6 * 2);
          (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)_Dst;
        }
        (__return_storage_ptr__->_Mypair)._Myval2._Myres = uVar8;
        (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar1;
        memcpy(_Dst,pbVar4,uVar3 * 2);
        memcpy((void *)((longlong)&(_Dst->_Mypair)._Myval2._Bx + uVar3 * 2),_Str,sVar5 * 2);
        (_Dst->_Mypair)._Myval2._Bx._Buf[uVar1] = L'\0';
        return __return_storage_ptr__;
      }
LAB_146cd5b4b:
      pVVar9 = pVVar9 + 1;
    } while (pVVar9 != g_vfsEntries._Mypair._Myval2._Mylast);
  }
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Devirtualize @ 146cd5c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __cdecl Filesystem::Devirtualize(wchar_t *param_1,FixedSizeString<wchar_t,260> *param_2)

{
  wchar_t wVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  VfsEntry *pVVar4;
  size_t sVar5;
  undefined8 uVar6;
  size_t sVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *_Str;
  VfsEntry *pVVar11;
  VfsEntry *pVVar12;
  longlong lVar13;
  undefined1 auStackY_98 [32];
  _Bxty local_68;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  pVVar4 = g_vfsEntries._Mypair._Myval2._Mylast;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pVVar11 = g_vfsEntries._Mypair._Myval2._Myfirst;
  do {
    if (pVVar11 == pVVar4) {
      return param_1;
    }
    uVar9 = (pVVar11->virtualPath)._Mypair._Myval2._Mysize;
    local_68._Ptr = (wchar_t *)0x0;
    local_68._8_8_ = 0;
    local_58 = 0;
    uStack_50 = 0;
    sVar5 = wcslen(param_1);
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Construct<1,wchar_t_const_*>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)&local_68
               ,param_1,sVar5);
    if (local_58 < uVar9) {
      uVar9 = local_58;
    }
    uVar2 = (pVVar11->virtualPath)._Mypair._Myval2._Mysize;
    uVar6 = &local_68;
    if (7 < uStack_50) {
      uVar6 = local_68._Ptr;
    }
    pVVar12 = pVVar11;
    if (7 < (pVVar11->virtualPath)._Mypair._Myval2._Myres) {
      pVVar12 = (VfsEntry *)(pVVar11->virtualPath)._Mypair._Myval2._Bx._Ptr;
    }
    uVar8 = uVar2;
    if (uVar9 < uVar2) {
      uVar8 = uVar9;
    }
    if (uVar8 != 0) {
      lVar13 = (longlong)pVVar12 - uVar6;
      do {
        wVar1 = *(wchar_t *)(lVar13 + uVar6);
        if (wVar1 != *(wchar_t *)uVar6) {
          uVar10 = 1;
          if ((ushort)wVar1 < (ushort)*(wchar_t *)uVar6) {
            uVar10 = 0xffffffff;
          }
          goto LAB_146cd5d83;
        }
        uVar6 = uVar6 + 2;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (uVar2 < uVar9) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (uint)(uVar9 < uVar2);
    }
LAB_146cd5d83:
    if (7 < uStack_50) {
      uVar9 = uStack_50 * 2 + 2;
      uVar6 = local_68._Ptr;
      if (0xfff < uVar9) {
        uVar6 = *(undefined8 *)(local_68._Ptr + -4);
        uVar9 = uStack_50 * 2 + 0x29;
        if ((char *)0x1f < (char *)((longlong)local_68._Ptr + (-8 - uVar6))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar6,uVar9);
    }
    if (uVar10 == 0) {
      _Str = &pVVar11->localPath;
      if (7 < (pVVar11->localPath)._Mypair._Myval2._Myres) {
        _Str = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (_Str->_Mypair)._Myval2._Bx._Ptr;
      }
      sVar5 = wcslen((wchar_t *)_Str);
      memcpy(param_2->m_data,_Str,sVar5 * 2 + 2);
      param_2->m_length = (uint)sVar5;
      uVar3 = (pVVar11->virtualPath)._Mypair._Myval2._Mysize;
      sVar7 = wcslen(param_1 + uVar3);
      memcpy(param_2->m_data + (sVar5 & 0xffffffff),param_1 + uVar3,sVar7 * 2 + 2);
      param_2->m_length = param_2->m_length + (int)sVar7;
      return param_2->m_data;
    }
    pVVar11 = pVVar11 + 1;
  } while( true );
}

// DisableAllModules @ 146cd5e90

void * __thiscall ClientStartupThread::DisableAllModules(ClientStartupThread *this,wchar_t *param_1)

{
  HANDLE hHandle;
  void *pvVar1;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  if (this->m_userCommandThread != (ClientUserCommandThread *)0x0) {
    pvVar1 = ClientUserCommandThread::DisableAllModules(this->m_userCommandThread,param_1);
    return pvVar1;
  }
  return (void *)0x0;
}

// DisableAllModules @ 146cd5f00

void * __thiscall
ClientUserCommandThread::DisableAllModules(ClientUserCommandThread *this,wchar_t *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  DWORD DVar4;
  HMODULE pHVar5;
  BaseCommand *pBVar6;
  void *pvVar7;
  longlong *plVar8;
  HANDLE pvVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  longlong lVar14;
  longlong lVar15;
  ModuleData *pMVar16;
  vector<commands::ModuleData,std::allocator<commands::ModuleData>_> local_28;
  
  pHVar5 = GetModuleHandleW(param_1);
  if (pHVar5 == (HMODULE)0x0) {
    Logging::Log(USER,LOG_ERROR,
                 "%sCannot disable module %S because it is not loaded by this process.\n");
    return (void *)0x0;
  }
  ::`anonymous_namespace'::GatherImportModuleData(&local_28,(HINSTANCE__ *)pHVar5);
  lVar14 = ((longlong)local_28._Mypair._Myval2._Mylast - (longlong)local_28._Mypair._Myval2._Myfirst
           ) / 0x210;
  pBVar6 = ::operator_new(0x38);
  if (pBVar6 == (BaseCommand *)0x0) {
    pBVar6 = (BaseCommand *)0x0;
  }
  else {
    pBVar6->m_expectResponse = true;
    pBVar6->_padding_ = (longlong)&ProxyCommand<commands::DisableModules>::_vftable_;
    pBVar6[1]._padding_ = 0;
    *(undefined8 *)&pBVar6[1].m_expectResponse = 0;
    pvVar7 = operator_new__(lVar14 * 0x210);
    pBVar6[2]._padding_ = (longlong)pvVar7;
    *(longlong *)&pBVar6[2].m_expectResponse = lVar14 * 0x210;
    pBVar6[3]._padding_ = 0;
  }
  DVar4 = GetCurrentProcessId();
  *(int *)((longlong)&pBVar6[1]._padding_ + 4) = (int)lVar14;
  *(DWORD *)&pBVar6[1]._padding_ = DVar4;
  plVar8 = ::operator_new(8);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    pvVar9 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    *plVar8 = (longlong)pvVar9;
    GetLastError();
    if (*plVar8 == 0) {
      Logging::Log(USER,LOG_ERROR,"%sCannot create event %S. Error: 0x%X\n");
    }
  }
  *(longlong **)&pBVar6[1].m_expectResponse = plVar8;
  if (lVar14 != 0) {
    lVar15 = 0;
    do {
      lVar11 = 4;
      puVar2 = (undefined8 *)((longlong)(local_28._Mypair._Myval2._Myfirst)->path + lVar15 + -8);
      puVar3 = (undefined8 *)(pBVar6[3]._padding_ + pBVar6[2]._padding_);
      do {
        puVar12 = puVar3;
        puVar10 = puVar2;
        uVar1 = puVar10[1];
        *puVar12 = *puVar10;
        puVar12[1] = uVar1;
        uVar1 = puVar10[3];
        puVar12[2] = puVar10[2];
        puVar12[3] = uVar1;
        uVar1 = puVar10[5];
        puVar12[4] = puVar10[4];
        puVar12[5] = uVar1;
        uVar1 = puVar10[7];
        puVar12[6] = puVar10[6];
        puVar12[7] = uVar1;
        uVar1 = puVar10[9];
        puVar12[8] = puVar10[8];
        puVar12[9] = uVar1;
        uVar1 = puVar10[0xb];
        puVar12[10] = puVar10[10];
        puVar12[0xb] = uVar1;
        uVar1 = puVar10[0xd];
        puVar12[0xc] = puVar10[0xc];
        puVar12[0xd] = uVar1;
        uVar1 = puVar10[0xf];
        puVar12[0xe] = puVar10[0xe];
        puVar12[0xf] = uVar1;
        lVar11 = lVar11 + -1;
        puVar2 = puVar10 + 0x10;
        puVar3 = puVar12 + 0x10;
      } while (lVar11 != 0);
      uVar1 = puVar10[0x11];
      lVar15 = lVar15 + 0x210;
      puVar12[0x10] = puVar10[0x10];
      puVar12[0x11] = uVar1;
      pBVar6[3]._padding_ = pBVar6[3]._padding_ + 0x210;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  PushUserCommand(this,pBVar6);
  pvVar7 = *(void **)&pBVar6[1].m_expectResponse;
  if (local_28._Mypair._Myval2._Myfirst != (ModuleData *)0x0) {
    uVar13 = (((longlong)local_28._Mypair._Myval2._Myend -
              (longlong)local_28._Mypair._Myval2._Myfirst) / 0x210) * 0x210;
    pMVar16 = local_28._Mypair._Myval2._Myfirst;
    if (0xfff < uVar13) {
      pMVar16 = *(ModuleData **)(local_28._Mypair._Myval2._Myfirst[-1].path + 0x100);
      uVar13 = uVar13 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_28._Mypair._Myval2._Myfirst + (-8 - (longlong)pMVar16))
         ) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pMVar16,uVar13);
  }
  return pvVar7;
}

// DisableCompileFinishNotification @ 146cd61d0

void __thiscall ClientStartupThread::DisableCompileFinishNotification(ClientStartupThread *this)

{
  HANDLE hHandle;
  ClientUserCommandThread *this_00;
  DWORD DVar1;
  BaseCommand *pBVar2;
  void *pvVar3;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this_00 = this->m_userCommandThread;
  if (this_00 != (ClientUserCommandThread *)0x0) {
    pBVar2 = ::operator_new(0x30);
    if (pBVar2 == (BaseCommand *)0x0) {
      pBVar2 = (BaseCommand *)0x0;
    }
    else {
      pBVar2->m_expectResponse = false;
      pBVar2->_padding_ =
           (longlong)&ProxyCommand<commands::DisableCompileFinishNotification>::_vftable_;
      *(undefined4 *)&pBVar2[1]._padding_ = 0;
      pvVar3 = operator_new__(0);
      *(void **)&pBVar2[1].m_expectResponse = pvVar3;
      pBVar2[2]._padding_ = 0;
      *(undefined8 *)&pBVar2[2].m_expectResponse = 0;
    }
    DVar1 = GetCurrentProcessId();
    *(DWORD *)&pBVar2[1]._padding_ = DVar1;
    ClientUserCommandThread::PushUserCommand(this_00,pBVar2);
  }
  return;
}

// DisableCompileFinishNotification @ 146cd6280

void __thiscall
ClientUserCommandThread::DisableCompileFinishNotification(ClientUserCommandThread *this)

{
  DWORD DVar1;
  BaseCommand *pBVar2;
  void *pvVar3;
  
  pBVar2 = ::operator_new(0x30);
  if (pBVar2 == (BaseCommand *)0x0) {
    pBVar2 = (BaseCommand *)0x0;
  }
  else {
    pBVar2->m_expectResponse = false;
    pBVar2->_padding_ =
         (longlong)&ProxyCommand<commands::DisableCompileFinishNotification>::_vftable_;
    *(undefined4 *)&pBVar2[1]._padding_ = 0;
    pvVar3 = operator_new__(0);
    *(void **)&pBVar2[1].m_expectResponse = pvVar3;
    pBVar2[2]._padding_ = 0;
    *(undefined8 *)&pBVar2[2].m_expectResponse = 0;
  }
  DVar1 = GetCurrentProcessId();
  *(DWORD *)&pBVar2[1]._padding_ = DVar1;
  PushUserCommand(this,pBVar2);
  return;
}

// DisableModule @ 146cd6300

void * __thiscall ClientStartupThread::DisableModule(ClientStartupThread *this,wchar_t *param_1)

{
  HANDLE hHandle;
  void *pvVar1;
  wchar_t *local_res8;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  if (this->m_userCommandThread != (ClientUserCommandThread *)0x0) {
    local_res8 = param_1;
    pvVar1 = ClientUserCommandThread::DisableModules(this->m_userCommandThread,&local_res8,1);
    return pvVar1;
  }
  return (void *)0x0;
}

// DisableModule @ 146cd6380

void * __thiscall
ClientUserCommandThread::DisableModule(ClientUserCommandThread *this,wchar_t *param_1)

{
  void *pvVar1;
  wchar_t *local_res10 [3];
  
  local_res10[0] = param_1;
  pvVar1 = DisableModules(this,local_res10,1);
  return pvVar1;
}

// DisableModules @ 146cd63b0

void * __thiscall
ClientStartupThread::DisableModules(ClientStartupThread *this,wchar_t **param_1,uint param_2)

{
  HANDLE hHandle;
  void *pvVar1;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  if (this->m_userCommandThread != (ClientUserCommandThread *)0x0) {
    pvVar1 = ClientUserCommandThread::DisableModules(this->m_userCommandThread,param_1,param_2);
    return pvVar1;
  }
  return (void *)0x0;
}

// DisableModules @ 146cd6430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __thiscall
ClientUserCommandThread::DisableModules
          (ClientUserCommandThread *this,wchar_t **param_1,uint param_2)

{
  ulonglong uVar1;
  HMODULE *ppHVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  HMODULE pHVar5;
  undefined8 *puVar6;
  BaseCommand *pBVar7;
  void *pvVar8;
  longlong *plVar9;
  HANDLE pvVar10;
  HMODULE *ppHVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  ulonglong uVar15;
  undefined8 *_Src;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStackY_2a8 [32];
  HMODULE local_258;
  WCHAR aWStack_250 [260];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  if (param_2 == 0) {
    _Src = (undefined8 *)0x0;
    puVar13 = (undefined8 *)0x0;
  }
  else {
    puVar4 = std::_Allocate<16,std::_Default_allocate_traits>((ulonglong)param_2 * 8);
    uVar15 = 0;
    puVar13 = puVar4 + param_2;
    _Src = puVar4;
    do {
      pHVar5 = GetModuleHandleW(param_1[uVar15]);
      if (pHVar5 == (HMODULE)0x0) {
        Logging::Log(USER,LOG_ERROR,
                     "%sCannot disable module %S because it is not loaded by this process.\n");
      }
      else if (puVar4 == puVar13) {
        lVar16 = (longlong)puVar4 - (longlong)_Src >> 3;
        if (lVar16 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::vector<HINSTANCE___*,std::allocator<HINSTANCE___*>_>::_Xlength();
        }
        uVar18 = (longlong)puVar13 - (longlong)_Src >> 3;
        if (0x1fffffffffffffff - (uVar18 >> 1) < uVar18) {
          uVar12 = 0x1fffffffffffffff;
        }
        else {
          uVar1 = (uVar18 >> 1) + uVar18;
          uVar12 = lVar16 + 1U;
          if (lVar16 + 1U <= uVar1) {
            uVar12 = uVar1;
          }
          if (0x1fffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
            std::_Throw_bad_array_new_length();
          }
        }
        puVar6 = std::_Allocate<16,std::_Default_allocate_traits>(uVar12 * 8);
        puVar6[lVar16] = pHVar5;
        memmove(puVar6,_Src,(longlong)puVar4 - (longlong)_Src);
        if (_Src != (undefined8 *)0x0) {
          uVar18 = uVar18 * 8;
          puVar13 = _Src;
          if (0xfff < uVar18) {
            puVar13 = (undefined8 *)_Src[-1];
            uVar18 = uVar18 + 0x27;
            if (0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)puVar13))) goto LAB_146cd680c;
          }
          ::operator_delete(puVar13,uVar18);
        }
        puVar13 = puVar6 + uVar12;
        puVar4 = puVar6 + lVar16 + 1;
        _Src = puVar6;
      }
      else {
        *puVar4 = pHVar5;
        puVar4 = puVar4 + 1;
      }
      uVar17 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar17;
    } while (uVar17 < param_2);
    uVar15 = (longlong)puVar4 - (longlong)_Src >> 3;
    if (uVar15 != 0) {
      pBVar7 = ::operator_new(0x38);
      if (pBVar7 == (BaseCommand *)0x0) {
        pBVar7 = (BaseCommand *)0x0;
      }
      else {
        pBVar7->m_expectResponse = true;
        pBVar7->_padding_ = (longlong)&ProxyCommand<commands::DisableModules>::_vftable_;
        pBVar7[1]._padding_ = 0;
        *(undefined8 *)&pBVar7[1].m_expectResponse = 0;
        pvVar8 = operator_new__(uVar15 * 0x210);
        pBVar7[2]._padding_ = (longlong)pvVar8;
        *(ulonglong *)&pBVar7[2].m_expectResponse = uVar15 * 0x210;
        pBVar7[3]._padding_ = 0;
      }
      DVar3 = GetCurrentProcessId();
      *(int *)((longlong)&pBVar7[1]._padding_ + 4) = (int)uVar15;
      *(DWORD *)&pBVar7[1]._padding_ = DVar3;
      plVar9 = ::operator_new(8);
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        pvVar10 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
        *plVar9 = (longlong)pvVar10;
        GetLastError();
        if (*plVar9 == 0) {
          Logging::Log(USER,LOG_ERROR,"%sCannot create event %S. Error: 0x%X\n");
        }
      }
      uVar18 = 0;
      *(longlong **)&pBVar7[1].m_expectResponse = plVar9;
      if (uVar15 != 0) {
        do {
          pHVar5 = (HMODULE)_Src[uVar18];
          memset(aWStack_250,0,0x208);
          local_258 = pHVar5;
          GetModuleFileNameW(pHVar5,aWStack_250,0x104);
          lVar16 = 4;
          ppHVar2 = &local_258;
          puVar4 = (undefined8 *)(pBVar7[2]._padding_ + pBVar7[3]._padding_);
          do {
            puVar6 = puVar4;
            ppHVar11 = ppHVar2;
            pHVar5 = ppHVar11[1];
            *puVar6 = *ppHVar11;
            puVar6[1] = pHVar5;
            pHVar5 = ppHVar11[3];
            puVar6[2] = ppHVar11[2];
            puVar6[3] = pHVar5;
            pHVar5 = ppHVar11[5];
            puVar6[4] = ppHVar11[4];
            puVar6[5] = pHVar5;
            pHVar5 = ppHVar11[7];
            puVar6[6] = ppHVar11[6];
            puVar6[7] = pHVar5;
            pHVar5 = ppHVar11[9];
            puVar6[8] = ppHVar11[8];
            puVar6[9] = pHVar5;
            pHVar5 = ppHVar11[0xb];
            puVar6[10] = ppHVar11[10];
            puVar6[0xb] = pHVar5;
            pHVar5 = ppHVar11[0xd];
            puVar6[0xc] = ppHVar11[0xc];
            puVar6[0xd] = pHVar5;
            pHVar5 = ppHVar11[0xf];
            puVar6[0xe] = ppHVar11[0xe];
            puVar6[0xf] = pHVar5;
            lVar16 = lVar16 + -1;
            ppHVar2 = ppHVar11 + 0x10;
            puVar4 = puVar6 + 0x10;
          } while (lVar16 != 0);
          pHVar5 = ppHVar11[0x11];
          uVar18 = uVar18 + 1;
          puVar6[0x10] = ppHVar11[0x10];
          puVar6[0x11] = pHVar5;
          pBVar7[3]._padding_ = pBVar7[3]._padding_ + 0x210;
        } while (uVar18 < uVar15);
      }
      PushUserCommand(this,pBVar7);
      pvVar8 = *(void **)&pBVar7[1].m_expectResponse;
      goto LAB_146cd67a6;
    }
  }
  pvVar8 = (void *)0x0;
LAB_146cd67a6:
  if (_Src != (undefined8 *)0x0) {
    uVar14 = (longlong)puVar13 - (longlong)_Src & 0xfffffffffffffff8;
    puVar13 = _Src;
    if (0xfff < uVar14) {
      puVar13 = (undefined8 *)_Src[-1];
      uVar14 = uVar14 + 0x27;
      if (0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)puVar13))) {
LAB_146cd680c:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(puVar13,uVar14);
  }
  return pvVar8;
}

// DoesOwnNamedSharedMemory @ 146cd6840

bool __cdecl Process::Current::DoesOwnNamedSharedMemory(NamedSharedMemory *param_1)

{
  return param_1->isOwned;
}

// DrainPipe @ 146cd6850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

StrongTypedef<unsigned_int,0> __cdecl `anonymous_namespace'::DrainPipe(Context *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  DWORD DVar3;
  char *_Dst;
  wchar_t *lpWideCharStr;
  LPCSTR pCVar4;
  longlong in_RDX;
  ulong64 uVar5;
  undefined1 auStackY_488 [32];
  DWORD local_458 [2];
  vector<char,std::allocator<char>_> local_450;
  char local_438 [1024];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_488;
  local_450._Mypair._Myval2._Myfirst = (LPCSTR)0x0;
  local_450._Mypair._Myval2._Mylast = (char *)0x0;
  local_450._Mypair._Myval2._Myend = (char *)0x0;
  _Dst = ::operator_new(0x400);
  memmove(_Dst,local_450._Mypair._Myval2._Myfirst,
          (longlong)local_450._Mypair._Myval2._Mylast - (longlong)local_450._Mypair._Myval2._Myfirst
         );
  if (local_450._Mypair._Myval2._Myfirst != (LPCSTR)0x0) {
    uVar5 = (longlong)local_450._Mypair._Myval2._Myend -
            (longlong)local_450._Mypair._Myval2._Myfirst;
    pCVar4 = local_450._Mypair._Myval2._Myfirst;
    if (0xfff < uVar5) {
      pCVar4 = *(LPCSTR *)(local_450._Mypair._Myval2._Myfirst + -8);
      uVar5 = uVar5 + 0x27;
      if ((LPCSTR)0x1f < local_450._Mypair._Myval2._Myfirst + (-8 - (longlong)pCVar4))
      goto LAB_146cd6a99;
    }
    ::operator_delete(pCVar4,uVar5);
  }
  local_450._Mypair._Myval2._Myend = _Dst + 0x400;
  local_458[0] = 0;
  local_450._Mypair._Myval2._Myfirst = _Dst;
  local_450._Mypair._Myval2._Mylast = _Dst;
  iVar2 = ReadFile(*(HANDLE *)(in_RDX + 8),local_438,0x3ff,local_458,(LPOVERLAPPED)0x0);
  while (iVar2 != 0) {
    std::vector<char,std::allocator<char>_>::_Insert_counted_range<char_*>
              (&local_450,
               (_Vector_const_iterator<std::_Vector_val<std::_Simple_types<char>_>_>)
               local_450._Mypair._Myval2._Mylast,local_438,(ulonglong)local_458[0]);
    local_458[0] = 0;
    iVar2 = ReadFile(*(HANDLE *)(in_RDX + 8),local_438,0x3ff,local_458,(LPOVERLAPPED)0x0);
  }
  DVar3 = GetLastError();
  if (DVar3 != 0x6d) {
    Logging::Log(USER,LOG_ERROR,"%sError 0x%X while reading from pipe\n");
  }
  if ((longlong)local_450._Mypair._Myval2._Mylast - (longlong)local_450._Mypair._Myval2._Myfirst !=
      0) {
    iVar2 = MultiByteToWideChar(1,0,local_450._Mypair._Myval2._Myfirst,
                                (int)((longlong)local_450._Mypair._Myval2._Mylast -
                                     (longlong)local_450._Mypair._Myval2._Myfirst),(LPWSTR)0x0,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (longlong)iVar2;
    uVar5 = SUB168(ZEXT816(2) * auVar1,0);
    if (SUB168(ZEXT816(2) * auVar1,8) != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    lpWideCharStr = operator_new__(uVar5);
    MultiByteToWideChar(1,0,local_450._Mypair._Myval2._Myfirst,
                        (int)local_450._Mypair._Myval2._Mylast -
                        (int)local_450._Mypair._Myval2._Myfirst,lpWideCharStr,iVar2);
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (in_RDX + 0x30),lpWideCharStr,(longlong)iVar2);
    operator_delete__(lpWideCharStr);
  }
  param_1->flags = 0;
  if (local_450._Mypair._Myval2._Myfirst != (LPCSTR)0x0) {
    uVar5 = (longlong)local_450._Mypair._Myval2._Myend -
            (longlong)local_450._Mypair._Myval2._Myfirst;
    pCVar4 = local_450._Mypair._Myval2._Myfirst;
    if (0xfff < uVar5) {
      pCVar4 = *(LPCSTR *)(local_450._Mypair._Myval2._Myfirst + -8);
      uVar5 = uVar5 + 0x27;
      if ((LPCSTR)0x1f < local_450._Mypair._Myval2._Myfirst + (-8 - (longlong)pCVar4)) {
LAB_146cd6a99:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pCVar4,uVar5);
  }
  return (StrongTypedef<unsigned_int,0>)(uint)param_1;
}

// DumpMemory @ 146cd6ae0

void __cdecl Process::DumpMemory(StrongTypedef<void_*,0> param_1,void *param_2,ulong64 param_3)

{
  void *pvVar1;
  ulonglong uVar2;
  
  pvVar1 = operator_new__(param_3);
  ReadProcessMemory(param_1,param_2,pvVar1,param_3);
  Logging::Log(DEV,LOG_INFO,"%s%s\n");
  LOCK();
  g_indentationLevel[1] = g_indentationLevel[1] + 1;
  UNLOCK();
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      Logging::Log(DEV,LOG_INFO,"%s0x%02X\n");
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  operator_delete__(pvVar1);
  LOCK();
  g_indentationLevel[1] = g_indentationLevel[1] + -1;
  UNLOCK();
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveCodingSettings @ 146cd6bf0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveCodingSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveCoding_init @ 146cd6c00

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveCoding_init(void)

{
  return;
}

// EnableAllModules @ 146cd6c10

void * __thiscall ClientStartupThread::EnableAllModules(ClientStartupThread *this,wchar_t *param_1)

{
  HANDLE hHandle;
  void *pvVar1;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  if (this->m_userCommandThread != (ClientUserCommandThread *)0x0) {
    pvVar1 = ClientUserCommandThread::EnableAllModules(this->m_userCommandThread,param_1);
    return pvVar1;
  }
  return (void *)0x0;
}

// EnableAllModules @ 146cd6c80

void * __thiscall
ClientUserCommandThread::EnableAllModules(ClientUserCommandThread *this,wchar_t *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  DWORD DVar4;
  HMODULE pHVar5;
  BaseCommand *pBVar6;
  void *pvVar7;
  longlong *plVar8;
  HANDLE pvVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  longlong lVar14;
  longlong lVar15;
  ModuleData *pMVar16;
  vector<commands::ModuleData,std::allocator<commands::ModuleData>_> local_28;
  
  pHVar5 = GetModuleHandleW(param_1);
  if (pHVar5 == (HMODULE)0x0) {
    Logging::Log(USER,LOG_ERROR,
                 "%sCannot enable module %S because it is not loaded by this process.\n");
    return (void *)0x0;
  }
  ::`anonymous_namespace'::GatherImportModuleData(&local_28,(HINSTANCE__ *)pHVar5);
  lVar14 = ((longlong)local_28._Mypair._Myval2._Mylast - (longlong)local_28._Mypair._Myval2._Myfirst
           ) / 0x210;
  pBVar6 = ::operator_new(0x38);
  if (pBVar6 == (BaseCommand *)0x0) {
    pBVar6 = (BaseCommand *)0x0;
  }
  else {
    pBVar6->m_expectResponse = true;
    pBVar6->_padding_ = (longlong)&ProxyCommand<commands::EnableModules>::_vftable_;
    pBVar6[1]._padding_ = 0;
    *(undefined8 *)&pBVar6[1].m_expectResponse = 0;
    pvVar7 = operator_new__(lVar14 * 0x210);
    pBVar6[2]._padding_ = (longlong)pvVar7;
    *(longlong *)&pBVar6[2].m_expectResponse = lVar14 * 0x210;
    pBVar6[3]._padding_ = 0;
  }
  DVar4 = GetCurrentProcessId();
  *(int *)((longlong)&pBVar6[1]._padding_ + 4) = (int)lVar14;
  *(DWORD *)&pBVar6[1]._padding_ = DVar4;
  plVar8 = ::operator_new(8);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    pvVar9 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    *plVar8 = (longlong)pvVar9;
    GetLastError();
    if (*plVar8 == 0) {
      Logging::Log(USER,LOG_ERROR,"%sCannot create event %S. Error: 0x%X\n");
    }
  }
  *(longlong **)&pBVar6[1].m_expectResponse = plVar8;
  if (lVar14 != 0) {
    lVar15 = 0;
    do {
      lVar11 = 4;
      puVar2 = (undefined8 *)((longlong)(local_28._Mypair._Myval2._Myfirst)->path + lVar15 + -8);
      puVar3 = (undefined8 *)(pBVar6[3]._padding_ + pBVar6[2]._padding_);
      do {
        puVar12 = puVar3;
        puVar10 = puVar2;
        uVar1 = puVar10[1];
        *puVar12 = *puVar10;
        puVar12[1] = uVar1;
        uVar1 = puVar10[3];
        puVar12[2] = puVar10[2];
        puVar12[3] = uVar1;
        uVar1 = puVar10[5];
        puVar12[4] = puVar10[4];
        puVar12[5] = uVar1;
        uVar1 = puVar10[7];
        puVar12[6] = puVar10[6];
        puVar12[7] = uVar1;
        uVar1 = puVar10[9];
        puVar12[8] = puVar10[8];
        puVar12[9] = uVar1;
        uVar1 = puVar10[0xb];
        puVar12[10] = puVar10[10];
        puVar12[0xb] = uVar1;
        uVar1 = puVar10[0xd];
        puVar12[0xc] = puVar10[0xc];
        puVar12[0xd] = uVar1;
        uVar1 = puVar10[0xf];
        puVar12[0xe] = puVar10[0xe];
        puVar12[0xf] = uVar1;
        lVar11 = lVar11 + -1;
        puVar2 = puVar10 + 0x10;
        puVar3 = puVar12 + 0x10;
      } while (lVar11 != 0);
      uVar1 = puVar10[0x11];
      lVar15 = lVar15 + 0x210;
      puVar12[0x10] = puVar10[0x10];
      puVar12[0x11] = uVar1;
      pBVar6[3]._padding_ = pBVar6[3]._padding_ + 0x210;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  PushUserCommand(this,pBVar6);
  pvVar7 = *(void **)&pBVar6[1].m_expectResponse;
  if (local_28._Mypair._Myval2._Myfirst != (ModuleData *)0x0) {
    uVar13 = (((longlong)local_28._Mypair._Myval2._Myend -
              (longlong)local_28._Mypair._Myval2._Myfirst) / 0x210) * 0x210;
    pMVar16 = local_28._Mypair._Myval2._Myfirst;
    if (0xfff < uVar13) {
      pMVar16 = *(ModuleData **)(local_28._Mypair._Myval2._Myfirst[-1].path + 0x100);
      uVar13 = uVar13 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_28._Mypair._Myval2._Myfirst + (-8 - (longlong)pMVar16))
         ) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pMVar16,uVar13);
  }
  return pvVar7;
}

// EnableChannel @ 146cd6fa0

void __cdecl Logging::EnableChannel(Enum param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 == USER) && (!param_2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("channel != Logging::Channel::USER || enabled",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Windows\\LiveCoding\\Private\\External\\LC_Logging.cpp"
                       ,0xa7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ChannelEnabled[(int)param_1] = param_2;
  return;
}

// EnableLazyLoadedModule @ 146cd71e0

void * __thiscall
ClientStartupThread::EnableLazyLoadedModule
          (ClientStartupThread *this,wchar_t *param_1,HINSTANCE__ *param_2)

{
  ClientUserCommandThread *this_00;
  DWORD DVar1;
  BaseCommand *pBVar2;
  void *pvVar3;
  longlong *plVar4;
  HANDLE pvVar5;
  
  pvVar5 = (this->m_thread).m_value;
  if (pvVar5 != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(pvVar5,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this_00 = this->m_userCommandThread;
  if (this_00 == (ClientUserCommandThread *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pBVar2 = ::operator_new(0x248);
    if (pBVar2 == (BaseCommand *)0x0) {
      pBVar2 = (BaseCommand *)0x0;
    }
    else {
      pBVar2->m_expectResponse = true;
      pBVar2->_padding_ = (longlong)&ProxyCommand<commands::EnableLazyLoadedModule>::_vftable_;
      memset((void *)((longlong)&pBVar2[1]._padding_ + 4),0,0x21c);
      *(undefined4 *)&pBVar2[1]._padding_ = 0;
      pvVar3 = operator_new__(0);
      pBVar2[0x23]._padding_ = (longlong)pvVar3;
      *(undefined8 *)&pBVar2[0x23].m_expectResponse = 0;
      pBVar2[0x24]._padding_ = 0;
    }
    DVar1 = GetCurrentProcessId();
    *(DWORD *)&pBVar2[1]._padding_ = DVar1;
    wcscpy_s((wchar_t *)((longlong)&pBVar2[1]._padding_ + 4),0x104,param_1);
    pBVar2[0x22]._padding_ = (longlong)param_2;
    plVar4 = ::operator_new(8);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      pvVar5 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      *plVar4 = (longlong)pvVar5;
      GetLastError();
      if (*plVar4 == 0) {
        Logging::Log(USER,LOG_ERROR,"%sCannot create event %S. Error: 0x%X\n");
      }
    }
    *(longlong **)&pBVar2[0x22].m_expectResponse = plVar4;
    ClientUserCommandThread::PushUserCommand(this_00,pBVar2);
    pvVar3 = *(void **)&pBVar2[0x22].m_expectResponse;
  }
  return pvVar3;
}

// EnableLazyLoadedModule @ 146cd7370

void * __thiscall
ClientUserCommandThread::EnableLazyLoadedModule
          (ClientUserCommandThread *this,wchar_t *param_1,HINSTANCE__ *param_2)

{
  DWORD DVar1;
  BaseCommand *pBVar2;
  void *pvVar3;
  longlong *plVar4;
  HANDLE pvVar5;
  
  pBVar2 = ::operator_new(0x248);
  if (pBVar2 == (BaseCommand *)0x0) {
    pBVar2 = (BaseCommand *)0x0;
  }
  else {
    pBVar2->m_expectResponse = true;
    pBVar2->_padding_ = (longlong)&ProxyCommand<commands::EnableLazyLoadedModule>::_vftable_;
    memset((void *)((longlong)&pBVar2[1]._padding_ + 4),0,0x21c);
    *(undefined4 *)&pBVar2[1]._padding_ = 0;
    pvVar3 = operator_new__(0);
    pBVar2[0x23]._padding_ = (longlong)pvVar3;
    *(undefined8 *)&pBVar2[0x23].m_expectResponse = 0;
    pBVar2[0x24]._padding_ = 0;
  }
  DVar1 = GetCurrentProcessId();
  *(DWORD *)&pBVar2[1]._padding_ = DVar1;
  wcscpy_s((wchar_t *)((longlong)&pBVar2[1]._padding_ + 4),0x104,param_1);
  pBVar2[0x22]._padding_ = (longlong)param_2;
  plVar4 = ::operator_new(8);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    pvVar5 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    *plVar4 = (longlong)pvVar5;
    GetLastError();
    if (*plVar4 == 0) {
      Logging::Log(USER,LOG_ERROR,"%sCannot create event %S. Error: 0x%X\n");
    }
  }
  *(longlong **)&pBVar2[0x22].m_expectResponse = plVar4;
  PushUserCommand(this,pBVar2);
  return *(void **)&pBVar2[0x22].m_expectResponse;
}

// EnableModule @ 146cd74d0

void * __thiscall ClientStartupThread::EnableModule(ClientStartupThread *this,wchar_t *param_1)

{
  HANDLE hHandle;
  void *pvVar1;
  wchar_t *local_res8;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  if (this->m_userCommandThread != (ClientUserCommandThread *)0x0) {
    local_res8 = param_1;
    pvVar1 = ClientUserCommandThread::EnableModules(this->m_userCommandThread,&local_res8,1);
    return pvVar1;
  }
  return (void *)0x0;
}

// EnableModule @ 146cd7550

void * __thiscall
ClientUserCommandThread::EnableModule(ClientUserCommandThread *this,wchar_t *param_1)

{
  void *pvVar1;
  wchar_t *local_res10 [3];
  
  local_res10[0] = param_1;
  pvVar1 = EnableModules(this,local_res10,1);
  return pvVar1;
}

// EnableModules @ 146cd7580

void * __thiscall
ClientStartupThread::EnableModules(ClientStartupThread *this,wchar_t **param_1,uint param_2)

{
  HANDLE hHandle;
  void *pvVar1;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  if (this->m_userCommandThread != (ClientUserCommandThread *)0x0) {
    pvVar1 = ClientUserCommandThread::EnableModules(this->m_userCommandThread,param_1,param_2);
    return pvVar1;
  }
  return (void *)0x0;
}

// EnableModules @ 146cd7600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __thiscall
ClientUserCommandThread::EnableModules(ClientUserCommandThread *this,wchar_t **param_1,uint param_2)

{
  ulonglong uVar1;
  HMODULE *ppHVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  HMODULE pHVar5;
  undefined8 *puVar6;
  BaseCommand *pBVar7;
  void *pvVar8;
  longlong *plVar9;
  HANDLE pvVar10;
  HMODULE *ppHVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  ulonglong uVar15;
  undefined8 *_Src;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStackY_2a8 [32];
  HMODULE local_258;
  WCHAR aWStack_250 [260];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  if (param_2 == 0) {
    _Src = (undefined8 *)0x0;
    puVar13 = (undefined8 *)0x0;
  }
  else {
    puVar4 = std::_Allocate<16,std::_Default_allocate_traits>((ulonglong)param_2 * 8);
    uVar15 = 0;
    puVar13 = puVar4 + param_2;
    _Src = puVar4;
    do {
      pHVar5 = GetModuleHandleW(param_1[uVar15]);
      if (pHVar5 == (HMODULE)0x0) {
        Logging::Log(USER,LOG_ERROR,
                     "%sCannot enable module %S because it is not loaded by this process.\n");
      }
      else if (puVar4 == puVar13) {
        lVar16 = (longlong)puVar4 - (longlong)_Src >> 3;
        if (lVar16 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::vector<HINSTANCE___*,std::allocator<HINSTANCE___*>_>::_Xlength();
        }
        uVar18 = (longlong)puVar13 - (longlong)_Src >> 3;
        if (0x1fffffffffffffff - (uVar18 >> 1) < uVar18) {
          uVar12 = 0x1fffffffffffffff;
        }
        else {
          uVar1 = (uVar18 >> 1) + uVar18;
          uVar12 = lVar16 + 1U;
          if (lVar16 + 1U <= uVar1) {
            uVar12 = uVar1;
          }
          if (0x1fffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
            std::_Throw_bad_array_new_length();
          }
        }
        puVar6 = std::_Allocate<16,std::_Default_allocate_traits>(uVar12 * 8);
        puVar6[lVar16] = pHVar5;
        memmove(puVar6,_Src,(longlong)puVar4 - (longlong)_Src);
        if (_Src != (undefined8 *)0x0) {
          uVar18 = uVar18 * 8;
          puVar13 = _Src;
          if (0xfff < uVar18) {
            puVar13 = (undefined8 *)_Src[-1];
            uVar18 = uVar18 + 0x27;
            if (0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)puVar13))) goto LAB_146cd79dc;
          }
          ::operator_delete(puVar13,uVar18);
        }
        puVar13 = puVar6 + uVar12;
        puVar4 = puVar6 + lVar16 + 1;
        _Src = puVar6;
      }
      else {
        *puVar4 = pHVar5;
        puVar4 = puVar4 + 1;
      }
      uVar17 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar17;
    } while (uVar17 < param_2);
    uVar15 = (longlong)puVar4 - (longlong)_Src >> 3;
    if (uVar15 != 0) {
      pBVar7 = ::operator_new(0x38);
      if (pBVar7 == (BaseCommand *)0x0) {
        pBVar7 = (BaseCommand *)0x0;
      }
      else {
        pBVar7->m_expectResponse = true;
        pBVar7->_padding_ = (longlong)&ProxyCommand<commands::EnableModules>::_vftable_;
        pBVar7[1]._padding_ = 0;
        *(undefined8 *)&pBVar7[1].m_expectResponse = 0;
        pvVar8 = operator_new__(uVar15 * 0x210);
        pBVar7[2]._padding_ = (longlong)pvVar8;
        *(ulonglong *)&pBVar7[2].m_expectResponse = uVar15 * 0x210;
        pBVar7[3]._padding_ = 0;
      }
      DVar3 = GetCurrentProcessId();
      *(int *)((longlong)&pBVar7[1]._padding_ + 4) = (int)uVar15;
      *(DWORD *)&pBVar7[1]._padding_ = DVar3;
      plVar9 = ::operator_new(8);
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        pvVar10 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
        *plVar9 = (longlong)pvVar10;
        GetLastError();
        if (*plVar9 == 0) {
          Logging::Log(USER,LOG_ERROR,"%sCannot create event %S. Error: 0x%X\n");
        }
      }
      uVar18 = 0;
      *(longlong **)&pBVar7[1].m_expectResponse = plVar9;
      if (uVar15 != 0) {
        do {
          pHVar5 = (HMODULE)_Src[uVar18];
          memset(aWStack_250,0,0x208);
          local_258 = pHVar5;
          GetModuleFileNameW(pHVar5,aWStack_250,0x104);
          lVar16 = 4;
          ppHVar2 = &local_258;
          puVar4 = (undefined8 *)(pBVar7[2]._padding_ + pBVar7[3]._padding_);
          do {
            puVar6 = puVar4;
            ppHVar11 = ppHVar2;
            pHVar5 = ppHVar11[1];
            *puVar6 = *ppHVar11;
            puVar6[1] = pHVar5;
            pHVar5 = ppHVar11[3];
            puVar6[2] = ppHVar11[2];
            puVar6[3] = pHVar5;
            pHVar5 = ppHVar11[5];
            puVar6[4] = ppHVar11[4];
            puVar6[5] = pHVar5;
            pHVar5 = ppHVar11[7];
            puVar6[6] = ppHVar11[6];
            puVar6[7] = pHVar5;
            pHVar5 = ppHVar11[9];
            puVar6[8] = ppHVar11[8];
            puVar6[9] = pHVar5;
            pHVar5 = ppHVar11[0xb];
            puVar6[10] = ppHVar11[10];
            puVar6[0xb] = pHVar5;
            pHVar5 = ppHVar11[0xd];
            puVar6[0xc] = ppHVar11[0xc];
            puVar6[0xd] = pHVar5;
            pHVar5 = ppHVar11[0xf];
            puVar6[0xe] = ppHVar11[0xe];
            puVar6[0xf] = pHVar5;
            lVar16 = lVar16 + -1;
            ppHVar2 = ppHVar11 + 0x10;
            puVar4 = puVar6 + 0x10;
          } while (lVar16 != 0);
          pHVar5 = ppHVar11[0x11];
          uVar18 = uVar18 + 1;
          puVar6[0x10] = ppHVar11[0x10];
          puVar6[0x11] = pHVar5;
          pBVar7[3]._padding_ = pBVar7[3]._padding_ + 0x210;
        } while (uVar18 < uVar15);
      }
      PushUserCommand(this,pBVar7);
      pvVar8 = *(void **)&pBVar7[1].m_expectResponse;
      goto LAB_146cd7976;
    }
  }
  pvVar8 = (void *)0x0;
LAB_146cd7976:
  if (_Src != (undefined8 *)0x0) {
    uVar14 = (longlong)puVar13 - (longlong)_Src & 0xfffffffffffffff8;
    puVar13 = _Src;
    if (0xfff < uVar14) {
      puVar13 = (undefined8 *)_Src[-1];
      uVar14 = uVar14 + 0x27;
      if (0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)puVar13))) {
LAB_146cd79dc:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(puVar13,uVar14);
  }
  return pvVar8;
}

// EnableModulesEx @ 146cd7a10

void * __thiscall
ClientStartupThread::EnableModulesEx
          (ClientStartupThread *this,wchar_t **param_1,uint param_2,wchar_t **param_3,uint param_4,
          ulong64 *param_5,uint param_6)

{
  HANDLE hHandle;
  void *pvVar1;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  if (this->m_userCommandThread == (ClientUserCommandThread *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ClientUserCommandThread::EnableModulesEx
                       (this->m_userCommandThread,param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return pvVar1;
}

// EnableModulesEx @ 146cd7ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __thiscall
ClientUserCommandThread::EnableModulesEx
          (ClientUserCommandThread *this,wchar_t **param_1,uint param_2,wchar_t **param_3,
          uint param_4,ulong64 *param_5,uint param_6)

{
  HMODULE pHVar1;
  HINSTANCE__ *pHVar2;
  HMODULE *ppHVar3;
  undefined8 *puVar4;
  DWORD DVar5;
  BaseCommand *pBVar6;
  void *pvVar7;
  longlong *plVar8;
  HANDLE pvVar9;
  HMODULE *ppHVar10;
  longlong lVar11;
  HINSTANCE__ *pHVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  HINSTANCE__ *pHVar15;
  ulonglong uVar16;
  undefined1 auStackY_2c8 [32];
  vector<HINSTANCE___*,std::allocator<HINSTANCE___*>_> local_298;
  vector<HINSTANCE___*,std::allocator<HINSTANCE___*>_> local_280;
  HMODULE local_268;
  WCHAR aWStack_260 [260];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  ::`anonymous_namespace'::GatherModuleHandles(&local_280,param_1,param_2);
  ::`anonymous_namespace'::GatherModuleHandles(&local_298,param_3,param_4);
  if (((ulonglong)
       ((longlong)local_280._Mypair._Myval2._Mylast - (longlong)local_280._Mypair._Myval2._Myfirst)
       < 8) && ((ulonglong)
                ((longlong)local_298._Mypair._Myval2._Mylast -
                (longlong)local_298._Mypair._Myval2._Myfirst) < 8)) {
    pvVar7 = (void *)0x0;
  }
  else {
    pBVar6 = ::operator_new(0x40);
    uVar16 = (ulonglong)param_6;
    if (pBVar6 == (BaseCommand *)0x0) {
      pBVar6 = (BaseCommand *)0x0;
    }
    else {
      pBVar6->m_expectResponse = true;
      pBVar6->_padding_ = (longlong)&ProxyCommand<commands::EnableModulesEx>::_vftable_;
      pBVar6[1]._padding_ = 0;
      *(undefined8 *)&pBVar6[1].m_expectResponse = 0;
      pBVar6[2]._padding_ = 0;
      uVar14 = ((((longlong)local_298._Mypair._Myval2._Mylast -
                  (longlong)local_298._Mypair._Myval2._Myfirst >> 3) +
                ((longlong)local_280._Mypair._Myval2._Mylast -
                 (longlong)local_280._Mypair._Myval2._Myfirst >> 3)) * 0x42 + uVar16) * 8;
      pvVar7 = operator_new__(uVar14);
      *(void **)&pBVar6[2].m_expectResponse = pvVar7;
      pBVar6[3]._padding_ = uVar14;
      *(undefined8 *)&pBVar6[3].m_expectResponse = 0;
    }
    DVar5 = GetCurrentProcessId();
    *(DWORD *)&pBVar6[1]._padding_ = DVar5;
    *(int *)((longlong)&pBVar6[1]._padding_ + 4) =
         (int)((longlong)local_280._Mypair._Myval2._Mylast -
               (longlong)local_280._Mypair._Myval2._Myfirst >> 3);
    *(int *)&pBVar6[1].m_expectResponse =
         (int)((longlong)local_298._Mypair._Myval2._Mylast -
               (longlong)local_298._Mypair._Myval2._Myfirst >> 3);
    *(uint *)&pBVar6[1].field_0xc = param_6;
    plVar8 = ::operator_new(8);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      pvVar9 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      *plVar8 = (longlong)pvVar9;
      GetLastError();
      if (*plVar8 == 0) {
        Logging::Log(USER,LOG_ERROR,"%sCannot create event %S. Error: 0x%X\n");
      }
    }
    pBVar6[2]._padding_ = (longlong)plVar8;
    pHVar12 = (HINSTANCE__ *)local_298._Mypair._Myval2._Mylast;
    for (pHVar15 = (HINSTANCE__ *)local_280._Mypair._Myval2._Myfirst;
        local_298._Mypair._Myval2._Mylast = (HINSTANCE__ **)pHVar12,
        pHVar2 = (HINSTANCE__ *)local_298._Mypair._Myval2._Myfirst,
        pHVar15 != (HINSTANCE__ *)local_280._Mypair._Myval2._Mylast; pHVar15 = pHVar15 + 2) {
      pHVar1 = *(HMODULE *)pHVar15;
      memset(aWStack_260,0,0x208);
      local_268 = pHVar1;
      GetModuleFileNameW(pHVar1,aWStack_260,0x104);
      lVar11 = 4;
      ppHVar3 = &local_268;
      puVar4 = (undefined8 *)
               (*(longlong *)&pBVar6[3].m_expectResponse + *(longlong *)&pBVar6[2].m_expectResponse)
      ;
      do {
        puVar13 = puVar4;
        ppHVar10 = ppHVar3;
        pHVar1 = ppHVar10[1];
        *puVar13 = *ppHVar10;
        puVar13[1] = pHVar1;
        pHVar1 = ppHVar10[3];
        puVar13[2] = ppHVar10[2];
        puVar13[3] = pHVar1;
        pHVar1 = ppHVar10[5];
        puVar13[4] = ppHVar10[4];
        puVar13[5] = pHVar1;
        pHVar1 = ppHVar10[7];
        puVar13[6] = ppHVar10[6];
        puVar13[7] = pHVar1;
        pHVar1 = ppHVar10[9];
        puVar13[8] = ppHVar10[8];
        puVar13[9] = pHVar1;
        pHVar1 = ppHVar10[0xb];
        puVar13[10] = ppHVar10[10];
        puVar13[0xb] = pHVar1;
        pHVar1 = ppHVar10[0xd];
        puVar13[0xc] = ppHVar10[0xc];
        puVar13[0xd] = pHVar1;
        pHVar1 = ppHVar10[0xf];
        puVar13[0xe] = ppHVar10[0xe];
        puVar13[0xf] = pHVar1;
        lVar11 = lVar11 + -1;
        ppHVar3 = ppHVar10 + 0x10;
        puVar4 = puVar13 + 0x10;
      } while (lVar11 != 0);
      pHVar1 = ppHVar10[0x11];
      puVar13[0x10] = ppHVar10[0x10];
      puVar13[0x11] = pHVar1;
      *(longlong *)&pBVar6[3].m_expectResponse = *(longlong *)&pBVar6[3].m_expectResponse + 0x210;
      pHVar12 = (HINSTANCE__ *)local_298._Mypair._Myval2._Mylast;
    }
    for (; pHVar2 != pHVar12; pHVar2 = pHVar2 + 2) {
      pHVar1 = *(HMODULE *)pHVar2;
      memset(aWStack_260,0,0x208);
      local_268 = pHVar1;
      GetModuleFileNameW(pHVar1,aWStack_260,0x104);
      lVar11 = 4;
      ppHVar3 = &local_268;
      puVar4 = (undefined8 *)
               (*(longlong *)&pBVar6[3].m_expectResponse + *(longlong *)&pBVar6[2].m_expectResponse)
      ;
      do {
        puVar13 = puVar4;
        ppHVar10 = ppHVar3;
        pHVar1 = ppHVar10[1];
        *puVar13 = *ppHVar10;
        puVar13[1] = pHVar1;
        pHVar1 = ppHVar10[3];
        puVar13[2] = ppHVar10[2];
        puVar13[3] = pHVar1;
        pHVar1 = ppHVar10[5];
        puVar13[4] = ppHVar10[4];
        puVar13[5] = pHVar1;
        pHVar1 = ppHVar10[7];
        puVar13[6] = ppHVar10[6];
        puVar13[7] = pHVar1;
        pHVar1 = ppHVar10[9];
        puVar13[8] = ppHVar10[8];
        puVar13[9] = pHVar1;
        pHVar1 = ppHVar10[0xb];
        puVar13[10] = ppHVar10[10];
        puVar13[0xb] = pHVar1;
        pHVar1 = ppHVar10[0xd];
        puVar13[0xc] = ppHVar10[0xc];
        puVar13[0xd] = pHVar1;
        pHVar1 = ppHVar10[0xf];
        puVar13[0xe] = ppHVar10[0xe];
        puVar13[0xf] = pHVar1;
        lVar11 = lVar11 + -1;
        ppHVar3 = ppHVar10 + 0x10;
        puVar4 = puVar13 + 0x10;
      } while (lVar11 != 0);
      pHVar1 = ppHVar10[0x11];
      puVar13[0x10] = ppHVar10[0x10];
      puVar13[0x11] = pHVar1;
      *(longlong *)&pBVar6[3].m_expectResponse = *(longlong *)&pBVar6[3].m_expectResponse + 0x210;
    }
    if (param_6 != 0) {
      do {
        uVar14 = *param_5;
        param_5 = param_5 + 1;
        *(ulong64 *)
         (*(longlong *)&pBVar6[3].m_expectResponse + *(longlong *)&pBVar6[2].m_expectResponse) =
             uVar14;
        *(longlong *)&pBVar6[3].m_expectResponse = *(longlong *)&pBVar6[3].m_expectResponse + 8;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    PushUserCommand(this,pBVar6);
    pvVar7 = (void *)pBVar6[2]._padding_;
  }
  if (local_298._Mypair._Myval2._Myfirst != (HINSTANCE__ **)0x0) {
    uVar14 = (longlong)local_298._Mypair._Myval2._Myend -
             (longlong)local_298._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
    pHVar12 = (HINSTANCE__ *)local_298._Mypair._Myval2._Myfirst;
    if (0xfff < uVar14) {
      pHVar12 = *(HINSTANCE__ **)((longlong)local_298._Mypair._Myval2._Myfirst + -8);
      uVar14 = uVar14 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_298._Mypair._Myval2._Myfirst + (-8 - (longlong)pHVar12)))
      goto LAB_146cd7f17;
    }
    ::operator_delete(pHVar12,uVar14);
    local_298._Mypair._Myval2._Myfirst = (HINSTANCE__ **)0x0;
    local_298._Mypair._Myval2._Mylast = (HINSTANCE__ **)0x0;
    local_298._Mypair._Myval2._Myend = (HINSTANCE__ **)0x0;
  }
  if (local_280._Mypair._Myval2._Myfirst != (HINSTANCE__ **)0x0) {
    uVar14 = (longlong)local_280._Mypair._Myval2._Myend -
             (longlong)local_280._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
    pHVar12 = (HINSTANCE__ *)local_280._Mypair._Myval2._Myfirst;
    if (0xfff < uVar14) {
      pHVar12 = *(HINSTANCE__ **)((longlong)local_280._Mypair._Myval2._Myfirst + -8);
      uVar14 = uVar14 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_280._Mypair._Myval2._Myfirst + (-8 - (longlong)pHVar12))) {
LAB_146cd7f17:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pHVar12,uVar14);
  }
  return pvVar7;
}

// End @ 146cd7f60

void __thiscall ClientUserCommandThread::End(ClientUserCommandThread *this)

{
  PushUserCommand(this,(BaseCommand *)0x0);
  return;
}

// Enter @ 146cd7f70

void __stdcall CriticalSection::Enter(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x000146cd7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}

// Enter @ 146cd7f80

void __cdecl syncPoint::Enter(void)

{
  if (g_isSyncPointUsed) {
    ReleaseSemaphore(g_dllSyncPoint.m_sema,1,(LPLONG)0x0);
    Semaphore::WaitTimeout((Semaphore *)&g_enterUserSyncPoint,0xffffffff);
    return;
  }
  return;
}

// EnterTarget @ 146cd7fd0

void __cdecl syncPoint::EnterTarget(void)

{
  bool bVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&g_syncPointCS);
  g_isSyncPointUsed = true;
  LeaveCriticalSection((LPCRITICAL_SECTION)&g_syncPointCS);
  bVar1 = Semaphore::WaitTimeout((Semaphore *)&g_dllSyncPoint,0);
  if (bVar1) {
    ReleaseSemaphore(g_enterUserSyncPoint.m_sema,1,(LPLONG)0x0);
    Semaphore::WaitTimeout((Semaphore *)&g_leaveUserSyncPoint,0xffffffff);
    return;
  }
  return;
}

// EnumerateModules @ 146cd8040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

vector<Process::Module,std::allocator<Process::Module>_> * __cdecl
Process::EnumerateModules
          (vector<Process::Module,std::allocator<Process::Module>_> *__return_storage_ptr__,
          StrongTypedef<void_*,0> param_1)

{
  Module **ppMVar1;
  uint *puVar2;
  Module *pMVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  undefined8 *puVar10;
  long lVar11;
  void *pvVar12;
  wchar_t *pwVar13;
  size_t sVar14;
  undefined8 *puVar15;
  void *pvVar16;
  ulong64 uVar17;
  longlong lVar18;
  void **ppvVar19;
  Module *pMVar20;
  Module *pMVar21;
  undefined1 auStackY_758 [32];
  uint local_708;
  ushort uStack_700;
  void *local_6f8;
  undefined8 uStack_6f0;
  wchar_t local_6e8 [4];
  void *pvStack_6e0;
  wchar_t local_6d8 [8];
  void *local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  void *local_6a8;
  undefined8 uStack_6a0;
  wchar_t local_698 [20];
  void *local_670;
  undefined8 uStack_668;
  undefined8 local_660;
  void *pvStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  void *local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined1 local_5d8 [32];
  wchar_t local_5b8 [4];
  wchar_t awStack_5b0 [28];
  wchar_t local_578 [4];
  wchar_t awStack_570 [4];
  wchar_t local_568 [4];
  wchar_t awStack_560 [4];
  wchar_t local_558 [200];
  void *local_3c8;
  uint local_3c0;
  wchar_t local_308 [360];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_758;
  (__return_storage_ptr__->_Mypair)._Myval2._Myfirst = (Module *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mylast = (Module *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myend = (Module *)0x0;
  pvVar12 = ::operator_new(0x88027);
  if (pvVar12 != (void *)0x0) {
    pMVar21 = (Module *)((longlong)pvVar12 + 0x27U & 0xffffffffffffffe0);
    *(void **)&pMVar21[-1].sizeOfImage = pvVar12;
    pMVar3 = (__return_storage_ptr__->_Mypair)._Myval2._Mylast;
    pMVar20 = (__return_storage_ptr__->_Mypair)._Myval2._Myfirst;
    if (pMVar20 != pMVar3) {
      ppvVar19 = &pMVar21->baseAddress;
      do {
        (((Module *)(ppvVar19 + -0x42))->fullPath).m_length = (pMVar20->fullPath).m_length;
        memcpy((wchar_t *)((longlong)ppvVar19 + -0x20c),(pMVar20->fullPath).m_data,
               (ulonglong)((pMVar20->fullPath).m_length + 1) * 2);
        *ppvVar19 = pMVar20->baseAddress;
        puVar2 = &pMVar20->sizeOfImage;
        pMVar20 = pMVar20 + 1;
        *(uint *)(ppvVar19 + 1) = *puVar2;
        ppvVar19 = ppvVar19 + 0x44;
      } while (pMVar20 != pMVar3);
    }
    pMVar3 = (__return_storage_ptr__->_Mypair)._Myval2._Myfirst;
    if (pMVar3 != (Module *)0x0) {
      uVar17 = (((longlong)(__return_storage_ptr__->_Mypair)._Myval2._Myend - (longlong)pMVar3) /
               0x220) * 0x220;
      pMVar20 = pMVar3;
      if (0xfff < uVar17) {
        pMVar20 = *(Module **)&pMVar3[-1].sizeOfImage;
        uVar17 = uVar17 + 0x27;
        if (0x1f < (ulonglong)((longlong)pMVar3 + (-8 - (longlong)pMVar20))) goto LAB_146cd8624;
      }
      ::operator_delete(pMVar20,uVar17);
    }
    (__return_storage_ptr__->_Mypair)._Myval2._Myfirst = pMVar21;
    (__return_storage_ptr__->_Mypair)._Myval2._Mylast = pMVar21;
    (__return_storage_ptr__->_Mypair)._Myval2._Myend = pMVar21 + 0x400;
    local_660 = 0;
    pvStack_658 = (void *)0x0;
    local_650 = 0;
    uStack_648 = 0;
    local_640 = 0;
    uStack_638 = 0;
    lVar11 = (*WindowsInternals::NtQueryInformationProcess.m_function)
                       (param_1.m_value,ProcessBasicInformation,&local_660,0x30,(ulong *)0x0);
    if (lVar11 < 0) {
      Logging::Log(USER,LOG_ERROR,"%sCall to function %s in module %s failed. Error: 0x%X\n");
    }
    memset(local_308,0,0x2c8);
    lVar11 = (*WindowsInternals::NtReadVirtualMemory.m_function)
                       (param_1.m_value,pvStack_658,local_308,0x2c8,(ulong *)0x0);
    if (lVar11 < 0) {
      Logging::Log(USER,LOG_ERROR,"%sCall to function %s in module %s failed. Error: 0x%X\n");
    }
    lVar18 = 5;
    pwVar9 = local_308;
    puVar10 = (undefined8 *)local_5d8;
    do {
      puVar15 = puVar10;
      pwVar13 = pwVar9;
      uVar4 = *(undefined8 *)(pwVar13 + 4);
      uVar5 = *(undefined8 *)(pwVar13 + 8);
      uVar6 = *(undefined8 *)(pwVar13 + 0xc);
      *puVar15 = *(undefined8 *)pwVar13;
      puVar15[1] = uVar4;
      uVar4 = *(undefined8 *)(pwVar13 + 0x10);
      uVar7 = *(undefined8 *)(pwVar13 + 0x14);
      puVar15[2] = uVar5;
      puVar15[3] = uVar6;
      uVar5 = *(undefined8 *)(pwVar13 + 0x18);
      uVar6 = *(undefined8 *)(pwVar13 + 0x1c);
      puVar15[4] = uVar4;
      puVar15[5] = uVar7;
      uVar4 = *(undefined8 *)(pwVar13 + 0x20);
      uVar7 = *(undefined8 *)(pwVar13 + 0x24);
      puVar15[6] = uVar5;
      puVar15[7] = uVar6;
      uVar5 = *(undefined8 *)(pwVar13 + 0x28);
      uVar6 = *(undefined8 *)(pwVar13 + 0x2c);
      puVar15[8] = uVar4;
      puVar15[9] = uVar7;
      uVar4 = *(undefined8 *)(pwVar13 + 0x30);
      uVar7 = *(undefined8 *)(pwVar13 + 0x34);
      puVar15[10] = uVar5;
      puVar15[0xb] = uVar6;
      uVar5 = *(undefined8 *)(pwVar13 + 0x38);
      uVar6 = *(undefined8 *)(pwVar13 + 0x3c);
      puVar15[0xc] = uVar4;
      puVar15[0xd] = uVar7;
      puVar15[0xe] = uVar5;
      puVar15[0xf] = uVar6;
      lVar18 = lVar18 + -1;
      pwVar9 = pwVar13 + 0x40;
      puVar10 = puVar15 + 0x10;
    } while (lVar18 != 0);
    uVar4 = *(undefined8 *)(pwVar13 + 0x44);
    uVar5 = *(undefined8 *)(pwVar13 + 0x48);
    uVar6 = *(undefined8 *)(pwVar13 + 0x4c);
    puVar15[0x10] = *(undefined8 *)(pwVar13 + 0x40);
    puVar15[0x11] = uVar4;
    uVar7 = *(undefined8 *)(pwVar13 + 0x50);
    uVar8 = *(undefined8 *)(pwVar13 + 0x54);
    puVar15[0x12] = uVar5;
    puVar15[0x13] = uVar6;
    uVar5 = *(undefined8 *)(pwVar13 + 0x58);
    uVar6 = *(undefined8 *)(pwVar13 + 0x5c);
    uVar4 = *(undefined8 *)(pwVar13 + 0x60);
    puVar15[0x14] = uVar7;
    puVar15[0x15] = uVar8;
    puVar15[0x16] = uVar5;
    puVar15[0x17] = uVar6;
    puVar15[0x18] = uVar4;
    local_5e0 = 0;
    local_630 = 0;
    uStack_628 = 0;
    local_620 = (void *)0x0;
    uStack_618 = 0;
    local_610 = 0;
    uStack_608 = 0;
    local_600 = 0;
    uStack_5f8 = 0;
    local_5f0 = 0;
    uStack_5e8 = 0;
    lVar11 = (*WindowsInternals::NtReadVirtualMemory.m_function)
                       (param_1.m_value,(void *)local_5d8._24_8_,&local_630,0x58,(ulong *)0x0);
    pvVar16 = local_620;
    pvVar12 = local_620;
    if (lVar11 < 0) {
      Logging::Log(USER,LOG_ERROR,"%sCall to function %s in module %s failed. Error: 0x%X\n");
      pvVar16 = local_620;
      pvVar12 = local_620;
    }
    do {
      local_698[0x10] = L'\0';
      local_698[0x11] = L'\0';
      local_698[0x12] = L'\0';
      local_698[0x13] = L'\0';
      local_6f8 = (void *)0x0;
      uStack_6f0 = 0;
      local_6e8[0] = L'\0';
      local_6e8[1] = L'\0';
      local_6e8[2] = L'\0';
      local_6e8[3] = L'\0';
      pvStack_6e0 = (void *)0x0;
      local_6d8[0] = L'\0';
      local_6d8[1] = L'\0';
      local_6d8[2] = L'\0';
      local_6d8[3] = L'\0';
      local_6d8[4] = L'\0';
      local_6d8[5] = L'\0';
      local_6d8[6] = L'\0';
      local_6d8[7] = L'\0';
      local_6c8 = (void *)0x0;
      uStack_6c0 = 0;
      local_6b8 = 0;
      uStack_6b0 = 0;
      local_6a8 = (void *)0x0;
      uStack_6a0 = 0;
      local_698[0] = L'\0';
      local_698[1] = L'\0';
      local_698[2] = L'\0';
      local_698[3] = L'\0';
      local_698[4] = L'\0';
      local_698[5] = L'\0';
      local_698[6] = L'\0';
      local_698[7] = L'\0';
      local_698[8] = L'\0';
      local_698[9] = L'\0';
      local_698[10] = L'\0';
      local_698[0xb] = L'\0';
      local_698[0xc] = L'\0';
      local_698[0xd] = L'\0';
      local_698[0xe] = L'\0';
      local_698[0xf] = L'\0';
      lVar11 = (*WindowsInternals::NtReadVirtualMemory.m_function)
                         (param_1.m_value,pvVar16,&local_6f8,0x88,(ulong *)0x0);
      if (lVar11 < 0) {
        Logging::Log(USER,LOG_ERROR,"%sCall to function %s in module %s failed. Error: 0x%X\n");
      }
      uVar5 = uStack_6b0;
      uVar4 = local_6b8;
      pvVar16 = local_6c8;
      local_670 = local_6f8;
      uStack_668 = uStack_6f0;
      local_5b8[0] = local_6d8[0];
      local_5b8[1] = local_6d8[1];
      local_5b8[2] = local_6d8[2];
      local_5b8[3] = local_6d8[3];
      awStack_5b0[0] = local_6d8[4];
      awStack_5b0[1] = local_6d8[5];
      awStack_5b0[2] = local_6d8[6];
      awStack_5b0[3] = local_6d8[7];
      local_5d8._16_2_ = local_6e8[0];
      local_5d8._18_2_ = local_6e8[1];
      local_5d8._20_2_ = local_6e8[2];
      local_5d8._22_2_ = local_6e8[3];
      local_5d8._24_8_ = pvStack_6e0;
      local_568[0] = local_698[8];
      local_568[1] = local_698[9];
      local_568[2] = local_698[10];
      local_568[3] = local_698[0xb];
      awStack_560[0] = local_698[0xc];
      awStack_560[1] = local_698[0xd];
      awStack_560[2] = local_698[0xe];
      awStack_560[3] = local_698[0xf];
      local_578[0] = local_698[0];
      local_578[1] = local_698[1];
      local_578[2] = local_698[2];
      local_578[3] = local_698[3];
      awStack_570[0] = local_698[4];
      awStack_570[1] = local_698[5];
      awStack_570[2] = local_698[6];
      awStack_570[3] = local_698[7];
      local_558[0] = local_698[0x10];
      local_558[1] = local_698[0x11];
      local_558[2] = local_698[0x12];
      local_558[3] = local_698[0x13];
      memset(local_308,0,0x208);
      if (((pvVar16 != (void *)0x0) && (uStack_700 = (ushort)uVar5, uStack_700 != 0)) &&
         (local_6a8 != (void *)0x0)) {
        lVar11 = (*WindowsInternals::NtReadVirtualMemory.m_function)
                           (param_1.m_value,local_6a8,local_308,(uint)uStack_700,(ulong *)0x0);
        if (lVar11 < 0) {
          Logging::Log(USER,LOG_ERROR,"%sCall to function %s in module %s failed. Error: 0x%X\n");
        }
        sVar14 = wcslen(local_308);
        local_5d8._0_4_ = (undefined4)sVar14;
        memcpy(local_5d8 + 4,local_308,(ulonglong)(local_5d8._0_4_ + 1) * 2);
        pMVar3 = (__return_storage_ptr__->_Mypair)._Myval2._Mylast;
        local_708 = (uint)uVar4;
        local_3c8 = pvVar16;
        local_3c0 = local_708;
        if (pMVar3 == (__return_storage_ptr__->_Mypair)._Myval2._Myend) {
          std::vector<Process::Module,std::allocator<Process::Module>_>::
          _Emplace_reallocate<Process::Module>(__return_storage_ptr__,pMVar3,(Module *)local_5d8);
        }
        else {
          (pMVar3->fullPath).m_length = local_5d8._0_4_;
          memcpy((pMVar3->fullPath).m_data,local_5d8 + 4,(ulonglong)(local_5d8._0_4_ + 1) * 2);
          pMVar3->baseAddress = pvVar16;
          pMVar3->sizeOfImage = local_708;
          ppMVar1 = &(__return_storage_ptr__->_Mypair)._Myval2._Mylast;
          *ppMVar1 = *ppMVar1 + 1;
        }
      }
    } while ((local_670 != (void *)0x0) && (pvVar16 = local_670, pvVar12 != local_670));
    return __return_storage_ptr__;
  }
LAB_146cd8624:
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// EnumerateThreads @ 146cd8640

vector<StrongTypedef<unsigned_long,0>,std::allocator<StrongTypedef<unsigned_long,0>_>_> * __cdecl
Process::EnumerateThreads
          (vector<StrongTypedef<unsigned_long,0>,std::allocator<StrongTypedef<unsigned_long,0>_>_>
           *__return_storage_ptr__,StrongTypedef<unsigned_long,0> param_1)

{
  StrongTypedef<unsigned_long,0> **ppSVar1;
  uint *puVar2;
  long lVar3;
  StrongTypedef<unsigned_long,0> *pSVar4;
  uint *_Memory;
  StrongTypedef<unsigned_long,0> *_Dst;
  StrongTypedef<unsigned_long,0> *pSVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  StrongTypedef<unsigned_long,0> *pSVar8;
  ulong64 uVar9;
  longlong lVar10;
  size_t sVar11;
  char *pcVar12;
  uint uVar13;
  ulonglong uVar14;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Myfirst = (StrongTypedef<unsigned_long,0> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mylast = (StrongTypedef<unsigned_long,0> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myend = (StrongTypedef<unsigned_long,0> *)0x0;
  pSVar4 = ::operator_new(0x400);
  pSVar8 = (__return_storage_ptr__->_Mypair)._Myval2._Myfirst;
  memmove(pSVar4,pSVar8,
          (longlong)(__return_storage_ptr__->_Mypair)._Myval2._Mylast - (longlong)pSVar8);
  pSVar8 = (__return_storage_ptr__->_Mypair)._Myval2._Myfirst;
  if (pSVar8 != (StrongTypedef<unsigned_long,0> *)0x0) {
    uVar9 = (longlong)(__return_storage_ptr__->_Mypair)._Myval2._Myend - (longlong)pSVar8 &
            0xfffffffffffffffc;
    pSVar5 = pSVar8;
    if (0xfff < uVar9) {
      pSVar5 = *(StrongTypedef<unsigned_long,0> **)(pSVar8 + -2);
      uVar9 = uVar9 + 0x27;
      if (0x1f < (ulonglong)((longlong)pSVar8 + (-8 - (longlong)pSVar5))) {
LAB_146cd88e7:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pSVar5,uVar9);
  }
  (__return_storage_ptr__->_Mypair)._Myval2._Myfirst = pSVar4;
  (__return_storage_ptr__->_Mypair)._Myval2._Mylast = pSVar4;
  sVar11 = 0x200000;
  (__return_storage_ptr__->_Mypair)._Myval2._Myend = pSVar4 + 0x100;
  while( true ) {
    _Memory = malloc(sVar11);
    lVar3 = (*WindowsInternals::NtQuerySystemInformation.m_function)
                      (SystemProcessInformation,_Memory,(ulong)sVar11,(ulong *)0x0);
    if (lVar3 != -0x3ffffffc) break;
    free(_Memory);
    sVar11 = (size_t)((ulong)sVar11 * 2);
  }
  puVar2 = _Memory;
  if (lVar3 < 0) {
    Logging::Log(USER,LOG_ERROR,"%sCall to function %s in module %s failed. Error: 0x%X\n");
    pcVar12 = "%sCannot enumerate threads in process (PID: %d)\n";
LAB_146cd896b:
    Logging::Log(USER,LOG_ERROR,pcVar12);
  }
  else {
    for (; puVar2 != (uint *)0x0; puVar2 = (uint *)((longlong)puVar2 + (ulonglong)*puVar2)) {
      if (*(ulonglong *)(puVar2 + 0x14) == (ulonglong)param_1.m_value) {
        uVar14 = 0;
        if (puVar2[1] != 0) goto LAB_146cd87b0;
        break;
      }
      if (*puVar2 == 0) {
        if (g_indentationLevel[0] < 7) {
          pcVar12 = "%sCannot enumerate threads, process not found (PID: %d)\n";
        }
        else {
          pcVar12 = "%sCannot enumerate threads, process not found (PID: %d)\n";
        }
        goto LAB_146cd896b;
      }
    }
  }
LAB_146cd897e:
  free(_Memory);
  return __return_storage_ptr__;
  while (uVar13 = (int)uVar14 + 1, uVar14 = (ulonglong)uVar13, uVar13 < puVar2[1]) {
LAB_146cd87b0:
    pSVar8 = (__return_storage_ptr__->_Mypair)._Myval2._Myend;
    pSVar4 = (__return_storage_ptr__->_Mypair)._Myval2._Mylast;
    uVar13 = puVar2[uVar14 * 0x14 + 0x4c];
    if (pSVar4 == pSVar8) {
      pSVar5 = (__return_storage_ptr__->_Mypair)._Myval2._Myfirst;
      lVar10 = (longlong)pSVar4 - (longlong)pSVar5 >> 2;
      if (lVar10 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        std::vector<StrongTypedef<unsigned_long,0>,std::allocator<StrongTypedef<unsigned_long,0>_>_>
        ::_Xlength();
      }
      uVar6 = (longlong)pSVar8 - (longlong)pSVar5 >> 2;
      if (0x3fffffffffffffff - (uVar6 >> 1) < uVar6) {
        uVar7 = 0x3fffffffffffffff;
      }
      else {
        uVar6 = (uVar6 >> 1) + uVar6;
        uVar7 = lVar10 + 1U;
        if (lVar10 + 1U <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x3fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
          std::_Throw_bad_array_new_length();
        }
      }
      _Dst = std::_Allocate<16,std::_Default_allocate_traits>(uVar7 * 4);
      _Dst[lVar10].m_value = uVar13;
      pSVar8 = (__return_storage_ptr__->_Mypair)._Myval2._Mylast;
      pSVar5 = (__return_storage_ptr__->_Mypair)._Myval2._Myfirst;
      if (pSVar4 == pSVar8) {
        sVar11 = (longlong)pSVar8 - (longlong)pSVar5;
        pSVar8 = _Dst;
        pSVar4 = pSVar5;
      }
      else {
        memmove(_Dst,pSVar5,(longlong)pSVar4 - (longlong)pSVar5);
        sVar11 = (longlong)(__return_storage_ptr__->_Mypair)._Myval2._Mylast - (longlong)pSVar4;
        pSVar8 = _Dst + lVar10 + 1;
      }
      memmove(pSVar8,pSVar4,sVar11);
      pSVar8 = (__return_storage_ptr__->_Mypair)._Myval2._Myfirst;
      if (pSVar8 != (StrongTypedef<unsigned_long,0> *)0x0) {
        uVar9 = (longlong)(__return_storage_ptr__->_Mypair)._Myval2._Myend - (longlong)pSVar8 &
                0xfffffffffffffffc;
        pSVar4 = pSVar8;
        if (0xfff < uVar9) {
          pSVar4 = *(StrongTypedef<unsigned_long,0> **)(pSVar8 + -2);
          uVar9 = uVar9 + 0x27;
          if (0x1f < (ulonglong)((longlong)pSVar8 + (-8 - (longlong)pSVar4))) goto LAB_146cd88e7;
        }
        ::operator_delete(pSVar4,uVar9);
      }
      (__return_storage_ptr__->_Mypair)._Myval2._Myfirst = _Dst;
      (__return_storage_ptr__->_Mypair)._Myval2._Mylast = _Dst + lVar10 + 1;
      (__return_storage_ptr__->_Mypair)._Myval2._Myend = _Dst + uVar7;
    }
    else {
      pSVar4->m_value = uVar13;
      ppSVar1 = &(__return_storage_ptr__->_Mypair)._Myval2._Mylast;
      *ppSVar1 = *ppSVar1 + 1;
    }
  }
  goto LAB_146cd897e;
}

// EraseAll @ 146cd89c0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
string::EraseAll(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                 *__return_storage_ptr__,
                basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
                basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  ulonglong uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  void *pvVar4;
  ulonglong uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  char *_Dst;
  ulonglong uVar7;
  void *pvVar8;
  ulong64 uVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  
  uVar1 = (param_2->_Mypair)._Myval2._Mysize;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(__return_storage_ptr__,param_1);
  uVar9 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
  do {
    uVar2 = (param_2->_Mypair)._Myval2._Mysize;
    pbVar6 = param_2;
    if (0xf < (param_2->_Mypair)._Myval2._Myres) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2->_Mypair)._Myval2._Bx._Ptr;
    }
    pbVar10 = __return_storage_ptr__;
    if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
      pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    if (uVar9 < uVar2) {
      return __return_storage_ptr__;
    }
    if (uVar2 == 0) {
      uVar5 = 0;
    }
    else {
      pvVar8 = (void *)((longlong)&(pbVar10->_Mypair)._Myval2._Bx + uVar9);
      pvVar4 = __std_search_1(pbVar10,pvVar8,pbVar6,uVar2);
      if (pvVar4 == pvVar8) {
        return __return_storage_ptr__;
      }
      uVar5 = (longlong)pvVar4 - (longlong)pbVar10;
      if (uVar5 == 0xffffffffffffffff) {
        return __return_storage_ptr__;
      }
    }
    uVar3 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
    if (uVar3 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::_String_val<std::_Simple_types<char>_>::_Xran();
    }
    uVar7 = uVar1;
    if (uVar3 - uVar5 < uVar1) {
      uVar7 = uVar3 - uVar5;
    }
    pbVar6 = __return_storage_ptr__;
    if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    uVar9 = uVar3 - uVar7;
    _Dst = (pbVar6->_Mypair)._Myval2._Bx._Buf + uVar5;
    memmove(_Dst,_Dst + uVar7,(uVar9 - uVar5) + 1);
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar9;
  } while( true );
}

// EraseAll @ 146cd8aa0

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
string::EraseAll(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                 *__return_storage_ptr__,
                basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1,
                basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_2)

{
  void *pvVar1;
  wchar_t *_Dst;
  ulonglong uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  void *pvVar5;
  ulonglong uVar6;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar10;
  
  uVar2 = (param_2->_Mypair)._Myval2._Mysize;
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
            (__return_storage_ptr__,param_1);
  uVar9 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
  do {
    uVar3 = (param_2->_Mypair)._Myval2._Mysize;
    pbVar7 = param_2;
    if (7 < (param_2->_Mypair)._Myval2._Myres) {
      pbVar7 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (param_2->_Mypair)._Myval2._Bx._Ptr;
    }
    pbVar10 = __return_storage_ptr__;
    if (7 < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
      pbVar10 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    if (uVar9 < uVar3) {
      return __return_storage_ptr__;
    }
    if (uVar3 == 0) {
      uVar6 = 0;
    }
    else {
      pvVar1 = (void *)((longlong)&(pbVar10->_Mypair)._Myval2._Bx + uVar9 * 2);
      pvVar5 = __std_search_2(pbVar10,pvVar1,pbVar7,uVar3);
      if (pvVar5 == pvVar1) {
        return __return_storage_ptr__;
      }
      uVar6 = (longlong)pvVar5 - (longlong)pbVar10 >> 1;
      if (uVar6 == 0xffffffffffffffff) {
        return __return_storage_ptr__;
      }
    }
    uVar4 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
    if (uVar4 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::_String_val<std::_Simple_types<wchar_t>_>::_Xran();
    }
    uVar8 = uVar2;
    if (uVar4 - uVar6 < uVar2) {
      uVar8 = uVar4 - uVar6;
    }
    pbVar7 = __return_storage_ptr__;
    if (7 < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
      pbVar7 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    uVar9 = uVar4 - uVar8;
    _Dst = (pbVar7->_Mypair)._Myval2._Bx._Buf + uVar6;
    memmove(_Dst,_Dst + uVar8,(uVar9 - uVar6) * 2 + 2);
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar9;
  } while( true );
}

// ExceptionPipe @ 146cd8b90

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
primitiveNames::ExceptionPipe
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1)

{
  ulonglong uVar1;
  ulong64 uVar2;
  _Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1> *p_Var3
  ;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar4;
  <lambda_1> local_res8;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 7;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::reserve
            (__return_storage_ptr__,0x80);
  uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
  uVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
  if (uVar1 - uVar2 < 0x12) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
              (__return_storage_ptr__,0x12,local_res8,L"\\\\.\\pipe\\UE_LC_EXC",0x12);
  }
  else {
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar2 + 0x12;
    pbVar4 = __return_storage_ptr__;
    if (7 < uVar1) {
      pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    memmove((void *)((longlong)&(pbVar4->_Mypair)._Myval2._Bx + uVar2 * 2),L"\\\\.\\pipe\\UE_LC_EXC"
            ,0x24);
    *(undefined2 *)((longlong)&pbVar4[1]._Mypair._Myval2._Bx + uVar2 * 2 + 4) = 0;
  }
  p_Var3 = &param_1->_Mypair;
  if (7 < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
            (__return_storage_ptr__,(wchar_t *)param_1,(p_Var3->_Myval2)._Mysize);
  return __return_storage_ptr__;
}

// Execute @ 146cd8c70

void __thiscall
_anon_92CB2683::ProxyCommand<commands::ApplySettingBool>::Execute
          (ProxyCommand<commands::ApplySettingBool> *this,DuplexPipe *param_1)

{
  ulong64 uVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  uVar1 = (this->m_payload).m_offset;
  pcVar2 = (this->m_payload).m_data;
  local_res18 = 0x7c;
  local_res1c = (undefined4)uVar1;
  DuplexPipe::Send(param_1,&local_res18,8);
  DuplexPipe::Send(param_1,&this->m_command,0x104);
  if (uVar1 != 0) {
    DuplexPipe::Send(param_1,pcVar2,uVar1);
  }
  local_res8[0] = 0;
  DuplexPipe::Read(param_1,local_res8,1);
  return;
}

// Execute @ 146cd8d00

void __thiscall
_anon_92CB2683::ProxyCommand<commands::ApplySettingInt>::Execute
          (ProxyCommand<commands::ApplySettingInt> *this,DuplexPipe *param_1)

{
  ulong64 uVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  uVar1 = (this->m_payload).m_offset;
  pcVar2 = (this->m_payload).m_data;
  local_res18 = 0x7d;
  local_res1c = (undefined4)uVar1;
  DuplexPipe::Send(param_1,&local_res18,8);
  DuplexPipe::Send(param_1,&this->m_command,0x104);
  if (uVar1 != 0) {
    DuplexPipe::Send(param_1,pcVar2,uVar1);
  }
  local_res8[0] = 0;
  DuplexPipe::Read(param_1,local_res8,1);
  return;
}

// Execute @ 146cd8d90

void __thiscall
_anon_92CB2683::ProxyCommand<commands::ApplySettingString>::Execute
          (ProxyCommand<commands::ApplySettingString> *this,DuplexPipe *param_1)

{
  ulong64 uVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  uVar1 = (this->m_payload).m_offset;
  pcVar2 = (this->m_payload).m_data;
  local_res18 = 0x7e;
  local_res1c = (undefined4)uVar1;
  DuplexPipe::Send(param_1,&local_res18,8);
  DuplexPipe::Send(param_1,&this->m_command,0x300);
  if (uVar1 != 0) {
    DuplexPipe::Send(param_1,pcVar2,uVar1);
  }
  local_res8[0] = 0;
  DuplexPipe::Read(param_1,local_res8,1);
  return;
}

// Execute @ 146cd8e20

void __thiscall
_anon_92CB2683::ProxyCommand<commands::BuildPatch>::Execute
          (ProxyCommand<commands::BuildPatch> *this,DuplexPipe *param_1)

{
  ulong64 uVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  uVar1 = (this->m_payload).m_offset;
  pcVar2 = (this->m_payload).m_data;
  local_res18 = 0x79;
  local_res1c = (undefined4)uVar1;
  DuplexPipe::Send(param_1,&local_res18,8);
  DuplexPipe::Send(param_1,&this->m_command,4);
  if (uVar1 != 0) {
    DuplexPipe::Send(param_1,pcVar2,uVar1);
  }
  local_res8[0] = 0;
  DuplexPipe::Read(param_1,local_res8,1);
  return;
}

// Execute @ 146cd8eb0

void __thiscall
_anon_92CB2683::ProxyCommand<commands::DisableCompileFinishNotification>::Execute
          (ProxyCommand<commands::DisableCompileFinishNotification> *this,DuplexPipe *param_1)

{
  ulong64 uVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  uVar1 = (this->m_payload).m_offset;
  pcVar2 = (this->m_payload).m_data;
  local_res18 = 0x89;
  local_res1c = (undefined4)uVar1;
  DuplexPipe::Send(param_1,&local_res18,8);
  DuplexPipe::Send(param_1,&this->m_command,4);
  if (uVar1 != 0) {
    DuplexPipe::Send(param_1,pcVar2,uVar1);
  }
  local_res8[0] = 0;
  DuplexPipe::Read(param_1,local_res8,1);
  return;
}

// Execute @ 146cd8f40

void __thiscall
_anon_92CB2683::ProxyCommand<commands::DisableModules>::Execute
          (ProxyCommand<commands::DisableModules> *this,DuplexPipe *param_1)

{
  ulong64 uVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  uVar1 = (this->m_payload).m_offset;
  pcVar2 = (this->m_payload).m_data;
  local_res18 = 0x69;
  local_res1c = (undefined4)uVar1;
  DuplexPipe::Send(param_1,&local_res18,8);
  DuplexPipe::Send(param_1,&this->m_command,0x10);
  if (uVar1 != 0) {
    DuplexPipe::Send(param_1,pcVar2,uVar1);
  }
  local_res8[0] = 0;
  DuplexPipe::Read(param_1,local_res8,1);
  return;
}

// Execute @ 146cd8fd0

void __thiscall
_anon_92CB2683::ProxyCommand<commands::EnableLazyLoadedModule>::Execute
          (ProxyCommand<commands::EnableLazyLoadedModule> *this,DuplexPipe *param_1)

{
  ulong64 uVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  uVar1 = (this->m_payload).m_offset;
  pcVar2 = (this->m_payload).m_data;
  local_res18 = 0x83;
  local_res1c = (undefined4)uVar1;
  DuplexPipe::Send(param_1,&local_res18,8);
  DuplexPipe::Send(param_1,&this->m_command,0x220);
  if (uVar1 != 0) {
    DuplexPipe::Send(param_1,pcVar2,uVar1);
  }
  local_res8[0] = 0;
  DuplexPipe::Read(param_1,local_res8,1);
  return;
}

// Execute @ 146cd9060

void __thiscall
_anon_92CB2683::ProxyCommand<commands::EnableModules>::Execute
          (ProxyCommand<commands::EnableModules> *this,DuplexPipe *param_1)

{
  ulong64 uVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  uVar1 = (this->m_payload).m_offset;
  pcVar2 = (this->m_payload).m_data;
  local_res18 = 0x67;
  local_res1c = (undefined4)uVar1;
  DuplexPipe::Send(param_1,&local_res18,8);
  DuplexPipe::Send(param_1,&this->m_command,0x10);
  if (uVar1 != 0) {
    DuplexPipe::Send(param_1,pcVar2,uVar1);
  }
  local_res8[0] = 0;
  DuplexPipe::Read(param_1,local_res8,1);
  return;
}

// Execute @ 146cd90f0

void __thiscall
_anon_92CB2683::ProxyCommand<commands::EnableModulesEx>::Execute
          (ProxyCommand<commands::EnableModulesEx> *this,DuplexPipe *param_1)

{
  ulong64 uVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  uVar1 = (this->m_payload).m_offset;
  pcVar2 = (this->m_payload).m_data;
  local_res18 = 0x8a;
  local_res1c = (undefined4)uVar1;
  DuplexPipe::Send(param_1,&local_res18,8);
  DuplexPipe::Send(param_1,&this->m_command,0x18);
  if (uVar1 != 0) {
    DuplexPipe::Send(param_1,pcVar2,uVar1);
  }
  local_res8[0] = 0;
  DuplexPipe::Read(param_1,local_res8,1);
  return;
}

// Execute @ 146cd9180

void __thiscall
_anon_92CB2683::ProxyCommand<commands::LogMessage>::Execute
          (ProxyCommand<commands::LogMessage> *this,DuplexPipe *param_1)

{
  ulong64 uVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  uVar1 = (this->m_payload).m_offset;
  pcVar2 = (this->m_payload).m_data;
  local_res18 = 0x78;
  local_res1c = (undefined4)uVar1;
  DuplexPipe::Send(param_1,&local_res18,8);
  DuplexPipe::Send(param_1,&this->m_command,1);
  if (uVar1 != 0) {
    DuplexPipe::Send(param_1,pcVar2,uVar1);
  }
  local_res8[0] = 0;
  DuplexPipe::Read(param_1,local_res8,1);
  return;
}

// Execute @ 146cd9210

void __thiscall
_anon_92CB2683::ProxyCommand<commands::SetActive>::Execute
          (ProxyCommand<commands::SetActive> *this,DuplexPipe *param_1)

{
  ulong64 uVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  uVar1 = (this->m_payload).m_offset;
  pcVar2 = (this->m_payload).m_data;
  local_res18 = 0x81;
  local_res1c = (undefined4)uVar1;
  DuplexPipe::Send(param_1,&local_res18,8);
  DuplexPipe::Send(param_1,&this->m_command,1);
  if (uVar1 != 0) {
    DuplexPipe::Send(param_1,pcVar2,uVar1);
  }
  local_res8[0] = 0;
  DuplexPipe::Read(param_1,local_res8,1);
  return;
}

// Execute @ 146cd92a0

void __thiscall
_anon_92CB2683::ProxyCommand<commands::SetBuildArguments>::Execute
          (ProxyCommand<commands::SetBuildArguments> *this,DuplexPipe *param_1)

{
  ulong64 uVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  uVar1 = (this->m_payload).m_offset;
  pcVar2 = (this->m_payload).m_data;
  local_res18 = 0x82;
  local_res1c = (undefined4)uVar1;
  DuplexPipe::Send(param_1,&local_res18,8);
  DuplexPipe::Send(param_1,&this->m_command,0x804);
  if (uVar1 != 0) {
    DuplexPipe::Send(param_1,pcVar2,uVar1);
  }
  local_res8[0] = 0;
  DuplexPipe::Read(param_1,local_res8,1);
  return;
}

// Execute @ 146cd9330

void __thiscall
_anon_92CB2683::ProxyCommand<commands::SetReinstancingFlow>::Execute
          (ProxyCommand<commands::SetReinstancingFlow> *this,DuplexPipe *param_1)

{
  ulong64 uVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  uVar1 = (this->m_payload).m_offset;
  pcVar2 = (this->m_payload).m_data;
  local_res18 = 0x88;
  local_res1c = (undefined4)uVar1;
  DuplexPipe::Send(param_1,&local_res18,8);
  DuplexPipe::Send(param_1,&this->m_command,8);
  if (uVar1 != 0) {
    DuplexPipe::Send(param_1,pcVar2,uVar1);
  }
  local_res8[0] = 0;
  DuplexPipe::Read(param_1,local_res8,1);
  return;
}

// Execute @ 146cd93c0

void __thiscall
_anon_92CB2683::ProxyCommand<commands::SetVisible>::Execute
          (ProxyCommand<commands::SetVisible> *this,DuplexPipe *param_1)

{
  ulong64 uVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  uVar1 = (this->m_payload).m_offset;
  pcVar2 = (this->m_payload).m_data;
  local_res18 = 0x80;
  local_res1c = (undefined4)uVar1;
  DuplexPipe::Send(param_1,&local_res18,8);
  DuplexPipe::Send(param_1,&this->m_command,1);
  if (uVar1 != 0) {
    DuplexPipe::Send(param_1,pcVar2,uVar1);
  }
  local_res8[0] = 0;
  DuplexPipe::Read(param_1,local_res8,1);
  return;
}

// Execute @ 146cd9450

void __thiscall
_anon_92CB2683::ProxyCommand<commands::ShowConsole>::Execute
          (ProxyCommand<commands::ShowConsole> *this,DuplexPipe *param_1)

{
  ulong64 uVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  uVar1 = (this->m_payload).m_offset;
  pcVar2 = (this->m_payload).m_data;
  local_res18 = 0x7f;
  local_res1c = (undefined4)uVar1;
  DuplexPipe::Send(param_1,&local_res18,8);
  DuplexPipe::Send(param_1,&this->m_command,1);
  if (uVar1 != 0) {
    DuplexPipe::Send(param_1,pcVar2,uVar1);
  }
  local_res8[0] = 0;
  DuplexPipe::Read(param_1,local_res8,1);
  return;
}

// Execute @ 146cd94e0

void __thiscall
_anon_92CB2683::ProxyCommand<commands::TriggerRecompile>::Execute
          (ProxyCommand<commands::TriggerRecompile> *this,DuplexPipe *param_1)

{
  ulong64 uVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  uVar1 = (this->m_payload).m_offset;
  pcVar2 = (this->m_payload).m_data;
  local_res18 = 0x76;
  local_res1c = (undefined4)uVar1;
  DuplexPipe::Send(param_1,&local_res18,8);
  DuplexPipe::Send(param_1,&this->m_command,1);
  if (uVar1 != 0) {
    DuplexPipe::Send(param_1,pcVar2,uVar1);
  }
  local_res8[0] = 0;
  DuplexPipe::Read(param_1,local_res8,1);
  return;
}

// Execute @ 146cd9570

void __thiscall
_anon_92CB2683::ProxyCommand<commands::TriggerRestart>::Execute
          (ProxyCommand<commands::TriggerRestart> *this,DuplexPipe *param_1)

{
  ulong64 uVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  uVar1 = (this->m_payload).m_offset;
  pcVar2 = (this->m_payload).m_data;
  local_res18 = 0x77;
  local_res1c = (undefined4)uVar1;
  DuplexPipe::Send(param_1,&local_res18,8);
  DuplexPipe::Send(param_1,&this->m_command,1);
  if (uVar1 != 0) {
    DuplexPipe::Send(param_1,pcVar2,uVar1);
  }
  local_res8[0] = 0;
  DuplexPipe::Read(param_1,local_res8,1);
  return;
}

// Execute @ 146cd9740

bool __cdecl
actions::CallEntryPoint::Execute
          (CallEntryPoint *param_1,DuplexPipe *param_2,void *param_3,void *param_4,ulong64 param_5)

{
  undefined1 local_res8 [32];
  
  (*(code *)((ulonglong)param_1->entryPointRva + (longlong)param_1->moduleBase))
            (param_1->moduleBase,1,0);
  local_res8[0] = 0;
  DuplexPipe::Send(param_2,local_res8,1);
  return true;
}

// Execute @ 146cd9790

bool __cdecl
actions::CallHooks::Execute
          (CallHooks *param_1,DuplexPipe *param_2,void *param_3,void *param_4,ulong64 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  switch(param_1->type) {
  case PREPATCH:
  case POSTPATCH:
  case COMPILE_START:
  case COMPILE_SUCCESS:
  case COMPILE_ERROR:
    hook::CallHooksInRange<void_(__cdecl*)(void)>(param_1->rangeBegin,param_1->rangeEnd);
    break;
  case COMPILE_ERROR_MESSAGE:
    puVar1 = param_1->rangeEnd;
    for (puVar2 = param_1->rangeBegin; puVar2 < puVar1; puVar2 = puVar2 + 1) {
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(param_4);
      }
    }
  }
  local_res8[0] = 0;
  DuplexPipe::Send(param_2,local_res8,1);
  return true;
}

// Execute @ 146cd9850

bool __cdecl
actions::CompilationFinished::Execute
          (CompilationFinished *param_1,DuplexPipe *param_2,void *param_3,void *param_4,
          ulong64 param_5)

{
  undefined1 local_18 [24];
  
  local_18[0] = 0;
  DuplexPipe::Send(param_2,local_18,1);
  GIsCompileActive = false;
  return false;
}

// Execute @ 146cd9880

bool __cdecl
actions::DisableModulesFinished::Execute
          (DisableModulesFinished *param_1,DuplexPipe *param_2,void *param_3,void *param_4,
          ulong64 param_5)

{
  undefined1 local_res8 [32];
  
  SetEvent(*(HANDLE *)param_1->token);
  local_res8[0] = 0;
  DuplexPipe::Send(param_2,local_res8,1);
  return false;
}

// Execute @ 146cd98c0

bool __cdecl
actions::EnableModulesFinished::Execute
          (EnableModulesFinished *param_1,DuplexPipe *param_2,void *param_3,void *param_4,
          ulong64 param_5)

{
  undefined1 local_res8 [32];
  
  SetEvent(*(HANDLE *)param_1->token);
  local_res8[0] = 0;
  DuplexPipe::Send(param_2,local_res8,1);
  return false;
}

// Execute @ 146cd9900

bool __cdecl
actions::EnterSyncPoint::Execute
          (EnterSyncPoint *param_1,DuplexPipe *param_2,void *param_3,void *param_4,ulong64 param_5)

{
  undefined1 local_18 [16];
  
  if (g_isSyncPointUsed) {
    ReleaseSemaphore(g_dllSyncPoint.m_sema,1,(LPLONG)0x0);
    Semaphore::WaitTimeout((Semaphore *)&g_enterUserSyncPoint,0xffffffff);
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_2,local_18,1);
  return true;
}

// Execute @ 146cd9960

bool __cdecl
actions::HandleExceptionFinished::Execute
          (HandleExceptionFinished *param_1,DuplexPipe *param_2,void *param_3,void *param_4,
          ulong64 param_5)

{
  undefined1 local_res8 [32];
  
  *(void **)param_3 = param_1->returnAddress;
  *(void **)((longlong)param_3 + 8) = param_1->framePointer;
  *(void **)((longlong)param_3 + 0x10) = param_1->stackPointer;
  *(bool *)((longlong)param_3 + 0x18) = param_1->continueExecution;
  local_res8[0] = 0;
  DuplexPipe::Send(param_2,local_res8,1);
  return false;
}

// Execute @ 146cd99b0

bool __cdecl
actions::LeaveSyncPoint::Execute
          (LeaveSyncPoint *param_1,DuplexPipe *param_2,void *param_3,void *param_4,ulong64 param_5)

{
  undefined1 local_18 [16];
  
  if (g_isSyncPointUsed) {
    ReleaseSemaphore(g_leaveUserSyncPoint.m_sema,1,(LPLONG)0x0);
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_2,local_18,1);
  return true;
}

// Execute @ 146cd9a00

bool __cdecl
actions::LoadPatch::Execute
          (LoadPatch *param_1,DuplexPipe *param_2,void *param_3,void *param_4,ulong64 param_5)

{
  HMODULE hModule;
  FARPROC pFVar1;
  undefined1 local_res8 [8];
  undefined8 local_18;
  HMODULE local_10;
  
  hModule = LoadLibraryW(param_1->path);
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"InitNatvisHelpers");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(GNameBlocksDebug,*GObjectArrayForDebugVisualizers,*GDebuggingState);
    }
  }
  GHasLoadedPatch = true;
  FLiveCodingModule::BeginReload();
  local_res8[0] = 0;
  DuplexPipe::Send(param_2,local_res8,1);
  local_18 = 0x6f;
  local_10 = hModule;
  DuplexPipe::Send(param_2,&local_18,8);
  DuplexPipe::Send(param_2,&local_10,8);
  local_res8[0] = 0;
  DuplexPipe::Read(param_2,local_res8,1);
  return true;
}

// Execute @ 146cd9ad0

bool __cdecl
actions::LogOutput::Execute
          (LogOutput *param_1,DuplexPipe *param_2,void *param_3,void *param_4,ulong64 param_5)

{
  undefined1 local_18 [16];
  
  (*OutputHandler)(USER,LOG_INFO,param_4);
  local_18[0] = 0;
  DuplexPipe::Send(param_2,local_18,1);
  return true;
}

// Execute @ 146cd9b10

bool __cdecl
actions::PostCompile::Execute
          (PostCompile *param_1,DuplexPipe *param_2,void *param_3,void *param_4,ulong64 param_5)

{
  undefined1 local_res8 [32];
  
  GPostCompileResult = param_1->postCompileResult;
  GIsCompileActive = false;
  local_res8[0] = 0;
  DuplexPipe::Send(param_2,local_res8,1);
  return true;
}

// Execute @ 146cd9b50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
actions::PreCompile::Execute
          (PreCompile *param_1,DuplexPipe *param_2,void *param_3,void *param_4,ulong64 param_5)

{
  undefined1 local_18 [16];
  
  if (3 < (byte)LogLiveCoding._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLiveCoding);
  }
  GIsCompileActive = true;
  if (GLiveCodingModule != (FLiveCodingModule *)0x0) {
    FLiveCodingModule::BeginReload();
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_2,local_18,1);
  return true;
}

// Execute @ 146cd9bc0

bool __cdecl
actions::RegisterProcessFinished::Execute
          (RegisterProcessFinished *param_1,DuplexPipe *param_2,void *param_3,void *param_4,
          ulong64 param_5)

{
  undefined1 local_res8 [32];
  
  *(bool *)param_3 = param_1->success;
  local_res8[0] = 0;
  DuplexPipe::Send(param_2,local_res8,1);
  return false;
}

// Execute @ 146cd9c00

bool __cdecl
actions::TriggerReload::Execute
          (TriggerReload *param_1,DuplexPipe *param_2,void *param_3,void *param_4,ulong64 param_5)

{
  undefined1 local_18 [16];
  
  GTriggerReload = true;
  if (g_isSyncPointUsed) {
    ReleaseSemaphore(g_leaveUserSyncPoint.m_sema,1,(LPLONG)0x0);
  }
  if (g_isSyncPointUsed != false) {
    ReleaseSemaphore(g_dllSyncPoint.m_sema,1,(LPLONG)0x0);
    Semaphore::WaitTimeout((Semaphore *)&g_enterUserSyncPoint,0xffffffff);
  }
  local_18[0] = 0;
  DuplexPipe::Send(param_2,local_18,1);
  return true;
}

// Execute @ 146cd9c90

bool __cdecl
actions::UnloadPatch::Execute
          (UnloadPatch *param_1,DuplexPipe *param_2,void *param_3,void *param_4,ulong64 param_5)

{
  undefined1 local_res8 [32];
  
  FreeLibrary((HMODULE)param_1->module);
  local_res8[0] = 0;
  DuplexPipe::Send(param_2,local_res8,1);
  return true;
}

// Execute @ 146cd9cd0

void __cdecl restart::Execute(RestartBehaviour param_1,uint param_2)

{
  code *pcVar1;
  HANDLE hProcess;
  
  SetEvent(g_restartPrepared->m_event);
  Event::WaitTimeout(g_executeRestart,0xffffffff);
  if (param_1 == LPP_RESTART_BEHAVIOR_REQUEST_EXIT) {
    FWindowsPlatformMisc::RequestExit(true,(wchar_t *)0x0);
  }
  else {
    if (param_1 == LPP_RESTART_BEHAVIOUR_DEFAULT_EXIT) {
                    /* WARNING: Subroutine does not return */
      ExitProcess(param_2);
    }
    if (param_1 == LPP_RESTART_BEHAVIOUR_EXIT_WITH_FLUSH) {
                    /* WARNING: Subroutine does not return */
      exit(param_2);
    }
    if (param_1 == LPP_RESTART_BEHAVIOUR_EXIT) {
      _Exit(param_2);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_1 == LPP_RESTART_BEHAVIOUR_INSTANT_TERMINATION) {
      hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000146cd9d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      TerminateProcess(hProcess,param_2);
      return;
    }
  }
  return;
}

// ExpectsResponse @ 146cd9ec0

bool __thiscall ClientUserCommandThread::BaseCommand::ExpectsResponse(BaseCommand *this)

{
  return this->m_expectResponse;
}

// Find @ 146cd9ed0

char * __cdecl string::Find(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fa4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strstr(param_1,param_2);
  return pcVar1;
}

// Find @ 146cd9ee0

wchar_t * __cdecl string::Find(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fa59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = wcsstr(param_1,param_2);
  return pwVar1;
}

// Find @ 146cd9ef0

char * __cdecl string::Find(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fa4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strstr(param_1,param_2);
  return pcVar1;
}

// Find @ 146cd9f00

wchar_t * __cdecl string::Find(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fa59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = wcsstr(param_1,param_2);
  return pwVar1;
}

// Find @ 146cd9f10

wchar_t * __cdecl string::Find(wchar_t *param_1,ulong64 param_2,wchar_t *param_3,ulong64 param_4)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  
  pwVar1 = param_1 + (param_2 - param_4);
  do {
    if (pwVar1 <= param_1) {
      return (wchar_t *)0x0;
    }
    uVar3 = 0;
    if (param_4 != 0) {
      pwVar2 = param_3;
      do {
        if (*(wchar_t *)((longlong)pwVar2 + ((longlong)param_1 - (longlong)param_3)) != *pwVar2)
        goto LAB_146cd9f5b;
        uVar3 = uVar3 + 1;
        pwVar2 = pwVar2 + 1;
      } while (uVar3 < param_4);
    }
    if (uVar3 == param_4) {
      return param_1;
    }
LAB_146cd9f5b:
    param_1 = param_1 + 1;
  } while( true );
}

// FlushInstructionCache @ 146cd9f80

BOOL __stdcall Process::FlushInstructionCache(HANDLE hProcess,LPCVOID lpBaseAddress,SIZE_T dwSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146cd9f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ::FlushInstructionCache(hProcess,lpBaseAddress,dwSize);
  return BVar1;
}

// Free @ 146cd9f90

void __cdecl VirtualMemory::Free(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146cd9f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VirtualFree(param_1,0,0x8000);
  return;
}

// Free @ 146cd9fb0

void __cdecl VirtualMemory::Free(StrongTypedef<void_*,0> param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146cd9fb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VirtualFreeEx(param_1.m_value,param_2,0,0x8000);
  return;
}

// GatherImageSectionDB @ 146cd9fd0

ImageSectionDB * __cdecl executable::GatherImageSectionDB(MemoryMappedFile *param_1)

{
  ImageSection **ppIVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ImageSection *pIVar7;
  _IMAGE_NT_HEADERS64 *p_Var8;
  vector<executable::ImageSection,std::allocator<executable::ImageSection>_> *pvVar9;
  ImageSection *_Dst;
  ulonglong uVar10;
  ImageSection *pIVar11;
  ImageSection *pIVar12;
  ulong64 uVar13;
  vector<executable::ImageSection,std::allocator<executable::ImageSection>_> *this;
  ulonglong uVar14;
  size_t _Size;
  uint *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong local_50;
  
  p_Var8 = detail::GetNtHeader(param_1);
  if ((p_Var8 == (_IMAGE_NT_HEADERS64 *)0x0) ||
     (lVar17 = (longlong)
               &((_IMAGE_OPTIONAL_HEADER64 *)((p_Var8->OptionalHeader).DataDirectory + -0xe))->Magic
               + (ulonglong)(p_Var8->FileHeader).SizeOfOptionalHeader, lVar17 == 0)) {
    return (ImageSectionDB *)0x0;
  }
  pvVar9 = ::operator_new(0x18);
  this = (vector<executable::ImageSection,std::allocator<executable::ImageSection>_> *)0x0;
  if (pvVar9 != (vector<executable::ImageSection,std::allocator<executable::ImageSection>_> *)0x0) {
    (pvVar9->_Mypair)._Myval2._Myfirst = (ImageSection *)0x0;
    (pvVar9->_Mypair)._Myval2._Mylast = (ImageSection *)0x0;
    (pvVar9->_Mypair)._Myval2._Myend = (ImageSection *)0x0;
    this = pvVar9;
  }
  uVar14 = (ulonglong)(p_Var8->FileHeader).NumberOfSections;
  std::vector<executable::ImageSection,std::allocator<executable::ImageSection>_>::reserve
            (this,uVar14);
  local_50 = 0;
  if (uVar14 != 0) {
    puVar15 = (uint *)(lVar17 + 8);
    do {
      pIVar11 = (this->_Mypair)._Myval2._Myend;
      pIVar12 = (this->_Mypair)._Myval2._Mylast;
      uVar3 = puVar15[1];
      uVar4 = *puVar15;
      uVar5 = puVar15[3];
      uVar6 = puVar15[2];
      if (pIVar12 == pIVar11) {
        pIVar7 = (this->_Mypair)._Myval2._Myfirst;
        lVar17 = (longlong)pIVar12 - (longlong)pIVar7 >> 4;
        if (lVar17 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::vector<executable::ImageSection,std::allocator<executable::ImageSection>_>::_Xlength
                    ();
        }
        uVar2 = lVar17 + 1;
        uVar10 = (longlong)pIVar11 - (longlong)pIVar7 >> 4;
        if (0xfffffffffffffff - (uVar10 >> 1) < uVar10) {
          uVar16 = 0xfffffffffffffff;
        }
        else {
          uVar10 = (uVar10 >> 1) + uVar10;
          uVar16 = uVar2;
          if (uVar2 <= uVar10) {
            uVar16 = uVar10;
          }
          if (0xfffffffffffffff < uVar16) {
                    /* WARNING: Subroutine does not return */
            std::_Throw_bad_array_new_length();
          }
        }
        _Dst = std::_Allocate<16,std::_Default_allocate_traits>(uVar16 * 0x10);
        _Dst[lVar17].rva = uVar3;
        _Dst[lVar17].size = uVar4;
        _Dst[lVar17].rawDataRva = uVar5;
        _Dst[lVar17].rawDataSize = uVar6;
        pIVar11 = (this->_Mypair)._Myval2._Mylast;
        pIVar7 = (this->_Mypair)._Myval2._Myfirst;
        if (pIVar12 == pIVar11) {
          _Size = (longlong)pIVar11 - (longlong)pIVar7;
          pIVar11 = _Dst;
          pIVar12 = pIVar7;
        }
        else {
          memmove(_Dst,pIVar7,(longlong)pIVar12 - (longlong)pIVar7);
          _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pIVar12;
          pIVar11 = _Dst + lVar17 + 1;
        }
        memmove(pIVar11,pIVar12,_Size);
        pIVar11 = (this->_Mypair)._Myval2._Myfirst;
        if (pIVar11 != (ImageSection *)0x0) {
          uVar13 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pIVar11 & 0xfffffffffffffff0
          ;
          pIVar12 = pIVar11;
          if (0xfff < uVar13) {
            pIVar12 = *(ImageSection **)&pIVar11[-1].rawDataRva;
            uVar13 = uVar13 + 0x27;
            if (0x1f < (ulonglong)((longlong)pIVar11 + (-8 - (longlong)pIVar12))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete(pIVar12,uVar13);
        }
        (this->_Mypair)._Myval2._Myfirst = _Dst;
        (this->_Mypair)._Myval2._Mylast = _Dst + uVar2;
        (this->_Mypair)._Myval2._Myend = _Dst + uVar16;
      }
      else {
        pIVar12->rva = uVar3;
        pIVar12->size = uVar4;
        pIVar12->rawDataRva = uVar5;
        pIVar12->rawDataSize = uVar6;
        ppIVar1 = &(this->_Mypair)._Myval2._Mylast;
        *ppIVar1 = *ppIVar1 + 1;
      }
      local_50 = local_50 + 1;
      puVar15 = puVar15 + 10;
    } while (local_50 < uVar14);
  }
  pIVar11 = (this->_Mypair)._Myval2._Mylast;
  pIVar12 = (this->_Mypair)._Myval2._Myfirst;
  std::
  _Sort_unchecked<executable::ImageSection_*,bool_(__cdecl*)(executable::ImageSection_const_&,executable::ImageSection_const_&)>
            (pIVar12,pIVar11,(longlong)pIVar11 - (longlong)pIVar12 >> 4,
             detail::SortSectionByAscendingRVA);
  return (ImageSectionDB *)this;
}

// GatherImportModuleDB @ 146cda290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ImportModuleDB * __cdecl
executable::GatherImportModuleDB(MemoryMappedFile *param_1,ImageSectionDB *param_2)

{
  uint *puVar1;
  ImportModule *pIVar2;
  ImportModule *pIVar3;
  ImportModule *pIVar4;
  uint uVar5;
  _IMAGE_NT_HEADERS64 *p_Var6;
  vector<executable::ImportModule,std::allocator<executable::ImportModule>_> *pvVar7;
  ImportModule *_Dst;
  vector<executable::ImportModule,std::allocator<executable::ImportModule>_> *this;
  ulong64 uVar8;
  ulonglong uVar9;
  uint *puVar10;
  ImportModule *pIVar11;
  undefined1 auStackY_188 [32];
  ImportModule local_158;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  p_Var6 = detail::GetNtHeader(param_1);
  if ((p_Var6 == (_IMAGE_NT_HEADERS64 *)0x0) ||
     ((longlong)
      &((_IMAGE_OPTIONAL_HEADER64 *)((p_Var6->OptionalHeader).DataDirectory + -0xe))->Magic +
      (ulonglong)(p_Var6->FileHeader).SizeOfOptionalHeader == 0)) {
    this = (vector<executable::ImportModule,std::allocator<executable::ImportModule>_> *)0x0;
  }
  else {
    pvVar7 = ::operator_new(0x18);
    this = (vector<executable::ImportModule,std::allocator<executable::ImportModule>_> *)0x0;
    if (pvVar7 != (vector<executable::ImportModule,std::allocator<executable::ImportModule>_> *)0x0)
    {
      (pvVar7->_Mypair)._Myval2._Myfirst = (ImportModule *)0x0;
      (pvVar7->_Mypair)._Myval2._Mylast = (ImportModule *)0x0;
      (pvVar7->_Mypair)._Myval2._Myend = (ImportModule *)0x0;
      this = pvVar7;
    }
    uVar9 = (ulonglong)(p_Var6->OptionalHeader).DataDirectory[1].Size / 0x14;
    if (uVar9 != 0) {
      uVar5 = RvaToFileOffset(param_2,(p_Var6->OptionalHeader).DataDirectory[1].VirtualAddress);
      if (uVar5 != 0) {
        pIVar2 = (this->_Mypair)._Myval2._Myfirst;
        if ((ulonglong)(((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pIVar2) / 0x104) <
            uVar9) {
          if (0xfc0fc0fc0fc0fc < uVar9) {
                    /* WARNING: Subroutine does not return */
            std::vector<executable::ImportModule,std::allocator<executable::ImportModule>_>::
            _Xlength();
          }
          pIVar3 = (this->_Mypair)._Myval2._Mylast;
          _Dst = std::_Allocate<16,std::_Default_allocate_traits>(uVar9 * 0x104);
          pIVar4 = (this->_Mypair)._Myval2._Myfirst;
          memmove(_Dst,pIVar4,(longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pIVar4);
          pIVar4 = (this->_Mypair)._Myval2._Myfirst;
          if (pIVar4 != (ImportModule *)0x0) {
            uVar8 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pIVar4) / 0x104) * 0x104;
            pIVar11 = pIVar4;
            if (0xfff < uVar8) {
              pIVar11 = *(ImportModule **)(pIVar4[-1].path + 0xfc);
              uVar8 = uVar8 + 0x27;
              if (0x1f < (ulonglong)((longlong)pIVar4 + (-8 - (longlong)pIVar11))) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete(pIVar11,uVar8);
          }
          (this->_Mypair)._Myval2._Myfirst = _Dst;
          (this->_Mypair)._Myval2._Mylast = _Dst + ((longlong)pIVar3 - (longlong)pIVar2) / 0x104;
          (this->_Mypair)._Myval2._Myend = _Dst + uVar9;
        }
        puVar10 = (uint *)((longlong)param_1->baseAddress + (ulonglong)uVar5 + 0xc);
        uVar5 = *puVar10;
        while (uVar5 != 0) {
          uVar5 = RvaToFileOffset(param_2,uVar5);
          strcpy_s(local_158.path,0x104,(char *)((ulonglong)uVar5 + (longlong)param_1->baseAddress))
          ;
          std::vector<executable::ImportModule,std::allocator<executable::ImportModule>_>::
          _Emplace_one_at_back<executable::ImportModule_&>(this,&local_158);
          puVar1 = puVar10 + 5;
          puVar10 = puVar10 + 5;
          uVar5 = *puVar1;
        }
      }
    }
  }
  return (ImportModuleDB *)this;
}

// GatherImportModuleData @ 146cda520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

vector<commands::ModuleData,std::allocator<commands::ModuleData>_> * __cdecl
`anonymous_namespace'::GatherImportModuleData
          (vector<commands::ModuleData,std::allocator<commands::ModuleData>_>
           *__return_storage_ptr__,HINSTANCE__ *param_1)

{
  byte *pbVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  ModuleData *_Src;
  uint uVar4;
  void *pvVar5;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var6;
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
  *p_Var7;
  ulonglong uVar8;
  longlong lVar9;
  size_t sVar10;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar11;
  MemoryMappedFile *pMVar12;
  vector<executable::ImageSection,std::allocator<executable::ImageSection>_> *this;
  vector<executable::ImportModule,std::allocator<executable::ImportModule>_> *this_00;
  HMODULE pHVar13;
  HINSTANCE__ *pHVar14;
  int iVar15;
  undefined8 uVar16;
  longlong lVar17;
  ulonglong uVar18;
  HINSTANCE__ *_Dst;
  ModuleData *_Dst_00;
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
  *p_Var19;
  HINSTANCE__ *pHVar20;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var21;
  ulong64 uVar22;
  ulonglong uVar23;
  ImportModule *pIVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  HINSTANCE__ *local_res10;
  undefined1 auStackY_588 [32];
  vector<HINSTANCE___*,std::allocator<HINSTANCE___*>_> local_558;
  ulonglong local_540;
  longlong local_538;
  undefined1 local_528 [24];
  _Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_>_>
  local_510;
  ulonglong local_4f8;
  ulonglong local_4f0;
  MemoryMappedFile *local_4e8;
  vector<executable::ImageSection,std::allocator<executable::ImageSection>_> *local_4e0;
  vector<commands::ModuleData,std::allocator<commands::ModuleData>_> *local_4d8;
  pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>_>,bool>
  local_4d0;
  ModuleData local_4b8;
  _Bxty local_2a8;
  ulong64 local_298;
  ulonglong local_290;
  _Bxty local_288;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  WCHAR local_268 [264];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_588;
  (__return_storage_ptr__->_Mypair)._Myval2._Myfirst = (ModuleData *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mylast = (ModuleData *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myend = (ModuleData *)0x0;
  local_res10 = param_1;
  local_4d8 = __return_storage_ptr__;
  pvVar5 = ::operator_new(0x84027);
  if (pvVar5 != (void *)0x0) {
    _Dst_00 = (ModuleData *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
    *(void **)(_Dst_00[-1].path + 0x100) = pvVar5;
    _Src = (__return_storage_ptr__->_Mypair)._Myval2._Myfirst;
    memmove(_Dst_00,_Src,
            (longlong)(__return_storage_ptr__->_Mypair)._Myval2._Mylast - (longlong)_Src);
    std::vector<commands::ModuleData,std::allocator<commands::ModuleData>_>::_Change_array
              (__return_storage_ptr__,_Dst_00,0,0x400);
    local_528._16_8_ = 0;
    p_Var6 = ::operator_new(0x30);
    auVar27._0_4_ = __real_3f800000;
    p_Var6->_Next = p_Var6;
    p_Var6->_Prev = p_Var6;
    local_510._Mypair._Myval2._Myfirst =
         (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
          *)0x0;
    local_510._Mypair._Myval2._Mylast =
         (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
          *)0x0;
    local_510._Mypair._Myval2._Myend =
         (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
          *)0x0;
    local_4f8 = 7;
    local_4f0 = 8;
    local_528._0_4_ =
         (_Uset_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::_Uhash_compare<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::hash<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,std::equal_to<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,0>
          )0x3f800000;
    local_528._8_8_ = p_Var6;
    p_Var7 = ::operator_new(0x80);
    uVar22 = (longlong)local_510._Mypair._Myval2._Myend -
             (longlong)local_510._Mypair._Myval2._Myfirst >> 3;
    if (uVar22 != 0) {
      std::
      allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_>
      ::deallocate((allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_>
                    *)&local_510,local_510._Mypair._Myval2._Myfirst,uVar22);
    }
    local_510._Mypair._Myval2._Mylast = p_Var7 + 0x10;
    for (p_Var19 = p_Var7; p_Var19 != local_510._Mypair._Myval2._Mylast; p_Var19 = p_Var19 + 1) {
      p_Var19->_Ptr = p_Var6;
    }
    auVar26._0_4_ = (auVar27._0_4_ / (float)local_528._0_4_) * __real_44800000;
    iVar15 = (int)auVar26._0_4_;
    if ((iVar15 != -0x80000000) && ((float)iVar15 != auVar26._0_4_)) {
      auVar26._4_4_ = auVar26._0_4_;
      auVar26._8_8_ = 0;
      uVar4 = movmskps((int)local_510._Mypair._Myval2._Mylast,auVar26);
      auVar26._0_4_ = (float)(int)(iVar15 + (uVar4 & 1 ^ 1));
    }
    uVar8 = 0;
    if ((__real_5f000000 <= auVar26._0_4_) &&
       (auVar26._0_4_ = auVar26._0_4_ - __real_5f000000, auVar26._0_4_ < __real_5f000000)) {
      uVar8 = 0x8000000000000000;
    }
    uVar23 = (longlong)auVar26._0_4_ + uVar8;
    if ((longlong)local_528._16_8_ < 0) {
      uVar8 = (ulonglong)local_528._16_8_ >> 1 | (ulonglong)((uint)local_528._16_8_ & 1);
    }
    auVar27._0_4_ = (float)(ulonglong)local_528._16_8_ * (auVar27._0_4_ / (float)local_528._0_4_);
    iVar15 = (int)auVar27._0_4_;
    if ((iVar15 != -0x80000000) && ((float)iVar15 != auVar27._0_4_)) {
      auVar27._4_4_ = auVar27._0_4_;
      auVar27._8_8_ = 0;
      uVar4 = movmskps((int)uVar8,auVar27);
      auVar27._0_4_ = (float)(int)(iVar15 + (uVar4 & 1 ^ 1));
    }
    lVar9 = 0;
    if ((__real_5f000000 <= auVar27._0_4_) &&
       (auVar27._0_4_ = auVar27._0_4_ - __real_5f000000, auVar27._0_4_ < __real_5f000000)) {
      lVar9 = -0x8000000000000000;
    }
    uVar8 = (longlong)auVar27._0_4_ + lVar9;
    if ((ulonglong)((longlong)auVar27._0_4_ + lVar9) < uVar23) {
      uVar8 = uVar23;
    }
    local_510._Mypair._Myval2._Myfirst = p_Var7;
    local_510._Mypair._Myval2._Myend = local_510._Mypair._Myval2._Mylast;
    if (local_4f0 < uVar8) {
      std::
      _Hash<std::_Uset_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::_Uhash_compare<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::hash<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,std::equal_to<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,0>_>
      ::_Forced_rehash((_Hash<std::_Uset_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::_Uhash_compare<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::hash<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,std::equal_to<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,0>_>
                        *)local_528,uVar8);
    }
    local_558._Mypair._Myval2._Myend = (HINSTANCE__ **)0x0;
    local_558._Mypair._Myval2._Myfirst = (HINSTANCE__ **)0x0;
    local_558._Mypair._Myval2._Mylast = (HINSTANCE__ **)0x0;
    pvVar5 = ::operator_new(0x2027);
    if (pvVar5 != (void *)0x0) {
      pHVar20 = (HINSTANCE__ *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
      *(void **)(pHVar20 + -2) = pvVar5;
      memmove(pHVar20,local_558._Mypair._Myval2._Myfirst,
              (longlong)local_558._Mypair._Myval2._Mylast -
              (longlong)local_558._Mypair._Myval2._Myfirst);
      if (local_558._Mypair._Myval2._Myfirst != (HINSTANCE__ **)0x0) {
        uVar22 = (longlong)local_558._Mypair._Myval2._Myend -
                 (longlong)local_558._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
        pHVar14 = (HINSTANCE__ *)local_558._Mypair._Myval2._Myfirst;
        if (0xfff < uVar22) {
          pHVar14 = *(HINSTANCE__ **)((longlong)local_558._Mypair._Myval2._Myfirst + -8);
          uVar22 = uVar22 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_558._Mypair._Myval2._Myfirst + (-8 - (longlong)pHVar14)))
          goto LAB_146cdae0f;
        }
        ::operator_delete(pHVar14,uVar22);
      }
      local_558._Mypair._Myval2._Myend = (HINSTANCE__ **)(pHVar20 + 0x800);
      local_558._Mypair._Myval2._Myfirst = (HINSTANCE__ **)pHVar20;
      local_558._Mypair._Myval2._Mylast = (HINSTANCE__ **)pHVar20;
      std::vector<HINSTANCE___*,std::allocator<HINSTANCE___*>_>::push_back(&local_558,&local_res10);
      if (local_558._Mypair._Myval2._Myfirst != local_558._Mypair._Myval2._Mylast) {
        do {
          pHVar13 = *(HMODULE *)((longlong)local_558._Mypair._Myval2._Mylast + -8);
          local_558._Mypair._Myval2._Mylast =
               (HINSTANCE__ **)((longlong)local_558._Mypair._Myval2._Mylast + -8);
          GetModuleFileNameW(pHVar13,local_268,0x104);
          local_298 = 0;
          local_290 = 0;
          local_2a8._Ptr = (wchar_t *)0x0;
          local_2a8._8_8_ = 0;
          sVar10 = wcslen(local_268);
          std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          _Construct<1,wchar_t_const_*>
                    ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                     &local_2a8,local_268,sVar10);
          uVar8 = 0xcbf29ce484222325;
          uVar16 = &local_2a8;
          if (7 < local_290) {
            uVar16 = local_2a8._Ptr;
          }
          uVar23 = 0;
          if (local_298 * 2 != 0) {
            do {
              pbVar1 = (byte *)(uVar16 + uVar23);
              uVar23 = uVar23 + 1;
              uVar8 = (uVar8 ^ *pbVar1) * 0x100000001b3;
            } while (uVar23 < local_298 * 2);
          }
          p_Var6 = local_510._Mypair._Myval2._Myfirst[(uVar8 & local_4f8) * 2 + 1]._Ptr;
          if (p_Var6 != (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
                         *)local_528._8_8_) {
            do {
              pbVar11 = &p_Var6->_Myval;
              if (7 < (p_Var6->_Myval)._Mypair._Myval2._Myres) {
                pbVar11 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                           *)(pbVar11->_Mypair)._Myval2._Bx._Ptr;
              }
              uVar16 = &local_2a8;
              if (7 < local_290) {
                uVar16 = local_2a8._Ptr;
              }
              if (local_298 == (p_Var6->_Myval)._Mypair._Myval2._Mysize) {
                if (local_298 == 0) {
                  bVar25 = false;
                }
                else {
                  if (local_298 != 0) {
                    lVar9 = uVar16 - (longlong)pbVar11;
                    uVar22 = local_298;
                    do {
                      wVar2 = *(wchar_t *)(lVar9 + (longlong)pbVar11);
                      wVar3 = (pbVar11->_Mypair)._Myval2._Bx._Buf[0];
                      if (wVar2 != wVar3) {
                        iVar15 = 1;
                        if ((ushort)wVar2 < (ushort)wVar3) {
                          iVar15 = -1;
                        }
                        goto LAB_146cda967;
                      }
                      pbVar11 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                                 *)((longlong)&(pbVar11->_Mypair)._Myval2._Bx + 2);
                      uVar22 = uVar22 - 1;
                    } while (uVar22 != 0);
                  }
                  iVar15 = 0;
LAB_146cda967:
                  bVar25 = iVar15 != 0;
                }
              }
              else {
                bVar25 = true;
              }
              if (!bVar25) goto LAB_146cda989;
              if (p_Var6 == local_510._Mypair._Myval2._Myfirst[(uVar8 & local_4f8) * 2]._Ptr) break;
              p_Var6 = p_Var6->_Prev;
            } while( true );
          }
          p_Var6 = (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
                    *)0x0;
LAB_146cda989:
          p_Var21 = (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
                     *)local_528._8_8_;
          if (p_Var6 != (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
                         *)0x0) {
            p_Var21 = p_Var6;
          }
          if (7 < local_290) {
            uVar8 = local_290 * 2 + 2;
            uVar16 = local_2a8._Ptr;
            if (0xfff < uVar8) {
              uVar16 = *(undefined8 *)(local_2a8._Ptr + -4);
              uVar8 = local_290 * 2 + 0x29;
              if ((char *)0x1f < (char *)((longlong)local_2a8._Ptr + (-8 - uVar16)))
              goto LAB_146cdadf5;
            }
            ::operator_delete((void *)uVar16,uVar8);
          }
          if (p_Var21 ==
              (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
               *)local_528._8_8_) {
            local_288._Ptr = (wchar_t *)0x0;
            local_288._8_8_ = 0;
            local_278 = 0;
            uStack_274 = 0;
            uStack_270 = 0;
            uStack_26c = 0;
            sVar10 = wcslen(local_268);
            std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            _Construct<1,wchar_t_const_*>
                      ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                       &local_288,local_268,sVar10);
            std::
            _Hash<std::_Uset_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::_Uhash_compare<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::hash<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,std::equal_to<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,0>_>
            ::
            emplace<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
                      ((_Hash<std::_Uset_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::_Uhash_compare<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::hash<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,std::equal_to<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,0>_>
                        *)local_528,&local_4d0,
                       (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                       &local_288);
            if (7 < CONCAT44(uStack_26c,uStack_270)) {
              lVar9 = CONCAT44(uStack_26c,uStack_270) * 2;
              uVar8 = lVar9 + 2;
              uVar16 = local_288._Ptr;
              if (0xfff < uVar8) {
                uVar16 = *(undefined8 *)(local_288._Ptr + -4);
                uVar8 = lVar9 + 0x29;
                if (0x1f < (ulonglong)((longlong)local_288._Ptr + (-8 - uVar16))) {
LAB_146cdadf5:
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
              ::operator_delete((void *)uVar16,uVar8);
            }
            memset(local_4b8.path,0,0x208);
            local_4b8.base = pHVar13;
            wcscpy_s(local_4b8.path,0x104,local_268);
            std::vector<commands::ModuleData,std::allocator<commands::ModuleData>_>::
            _Emplace_one_at_back<commands::ModuleData_&>(__return_storage_ptr__,&local_4b8);
            pMVar12 = Filesystem::OpenMemoryMappedFile(local_268,READ,false);
            local_4e8 = pMVar12;
            if (pMVar12 != (MemoryMappedFile *)0x0) {
              this = &executable::GatherImageSectionDB(pMVar12)->sections;
              local_4e0 = this;
              if (this != (vector<executable::ImageSection,std::allocator<executable::ImageSection>_>
                           *)0x0) {
                this_00 = &executable::GatherImportModuleDB(pMVar12,(ImageSectionDB *)this)->modules
                ;
                if (this_00 !=
                    (vector<executable::ImportModule,std::allocator<executable::ImportModule>_> *)
                    0x0) {
                  pIVar24 = (this_00->_Mypair)._Myval2._Myfirst;
                  lVar17 = (longlong)(this_00->_Mypair)._Myval2._Mylast - (longlong)pIVar24;
                  local_540 = 0;
                  lVar9 = lVar17 >> 0x3f;
                  if (lVar17 / 0x104 + lVar9 != lVar9) {
                    local_538 = 0;
                    do {
                      uVar8 = local_540;
                      pHVar13 = GetModuleHandleA(pIVar24->path + local_538);
                      pHVar20 = (HINSTANCE__ *)local_558._Mypair._Myval2._Mylast;
                      if (pHVar13 == (HMODULE)0x0) {
                        Logging::Log(USER,LOG_ERROR,
                                     "%sCannot enable module %s because it is not loaded by this process.\n"
                                    );
                      }
                      else if (local_558._Mypair._Myval2._Mylast == local_558._Mypair._Myval2._Myend
                              ) {
                        lVar9 = (longlong)local_558._Mypair._Myval2._Mylast -
                                (longlong)local_558._Mypair._Myval2._Myfirst >> 3;
                        if (lVar9 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::vector<HINSTANCE___*,std::allocator<HINSTANCE___*>_>::_Xlength();
                        }
                        uVar8 = lVar9 + 1;
                        uVar23 = (longlong)local_558._Mypair._Myval2._Myend -
                                 (longlong)local_558._Mypair._Myval2._Myfirst >> 3;
                        if (0x1fffffffffffffff - (uVar23 >> 1) < uVar23) {
                          uVar18 = 0x1fffffffffffffff;
                        }
                        else {
                          uVar23 = uVar23 + (uVar23 >> 1);
                          uVar18 = uVar8;
                          if (uVar8 <= uVar23) {
                            uVar18 = uVar23;
                          }
                          if (0x1fffffffffffffff < uVar18) {
                    /* WARNING: Subroutine does not return */
                            std::_Throw_bad_array_new_length();
                          }
                        }
                        pHVar14 = std::_Allocate<16,std::_Default_allocate_traits>(uVar18 * 8);
                        *(HMODULE *)(pHVar14 + lVar9 * 2) = pHVar13;
                        if (pHVar20 == (HINSTANCE__ *)local_558._Mypair._Myval2._Mylast) {
                          sVar10 = (longlong)local_558._Mypair._Myval2._Mylast -
                                   (longlong)local_558._Mypair._Myval2._Myfirst;
                          _Dst = pHVar14;
                          pHVar20 = (HINSTANCE__ *)local_558._Mypair._Myval2._Myfirst;
                        }
                        else {
                          memmove(pHVar14,local_558._Mypair._Myval2._Myfirst,
                                  (longlong)pHVar20 - (longlong)local_558._Mypair._Myval2._Myfirst);
                          sVar10 = (longlong)local_558._Mypair._Myval2._Mylast - (longlong)pHVar20;
                          _Dst = pHVar14 + (lVar9 + 1) * 2;
                        }
                        memmove(_Dst,pHVar20,sVar10);
                        if ((HINSTANCE__ *)local_558._Mypair._Myval2._Myfirst != (HINSTANCE__ *)0x0)
                        {
                          uVar22 = (longlong)local_558._Mypair._Myval2._Myend -
                                   (longlong)local_558._Mypair._Myval2._Myfirst & 0xfffffffffffffff8
                          ;
                          pHVar20 = (HINSTANCE__ *)local_558._Mypair._Myval2._Myfirst;
                          if (0xfff < uVar22) {
                            pHVar20 = *(HINSTANCE__ **)
                                       ((longlong)local_558._Mypair._Myval2._Myfirst + -8);
                            uVar22 = uVar22 + 0x27;
                            if (0x1f < (ulonglong)
                                       ((longlong)local_558._Mypair._Myval2._Myfirst +
                                       (-8 - (longlong)pHVar20))) goto LAB_146cdadf5;
                          }
                          ::operator_delete(pHVar20,uVar22);
                        }
                        local_558._Mypair._Myval2._Mylast = (HINSTANCE__ **)(pHVar14 + uVar8 * 2);
                        local_558._Mypair._Myval2._Myend = (HINSTANCE__ **)(pHVar14 + uVar18 * 2);
                        uVar8 = local_540;
                        local_558._Mypair._Myval2._Myfirst = (HINSTANCE__ **)pHVar14;
                      }
                      else {
                        *local_558._Mypair._Myval2._Mylast = (HINSTANCE__ *)pHVar13;
                        local_558._Mypair._Myval2._Mylast =
                             (HINSTANCE__ **)((longlong)local_558._Mypair._Myval2._Mylast + 8);
                      }
                      local_540 = uVar8 + 1;
                      pIVar24 = (this_00->_Mypair)._Myval2._Myfirst;
                      local_538 = local_538 + 0x104;
                      pMVar12 = local_4e8;
                      this = local_4e0;
                      __return_storage_ptr__ = local_4d8;
                    } while (local_540 <
                             (ulonglong)
                             (((longlong)(this_00->_Mypair)._Myval2._Mylast - (longlong)pIVar24) /
                             0x104));
                  }
                  std::vector<executable::ImportModule,std::allocator<executable::ImportModule>_>::
                  ~vector<executable::ImportModule,std::allocator<executable::ImportModule>_>
                            (this_00);
                  ::operator_delete(this_00,0x18);
                }
                std::vector<executable::ImageSection,std::allocator<executable::ImageSection>_>::
                ~vector<executable::ImageSection,std::allocator<executable::ImageSection>_>(this);
                ::operator_delete(this,0x18);
              }
              UnmapViewOfFile(pMVar12->baseAddress);
              CloseHandle(pMVar12->fileMapping);
              CloseHandle(pMVar12->file);
              ::operator_delete(pMVar12,0x20);
            }
          }
        } while (local_558._Mypair._Myval2._Myfirst != local_558._Mypair._Myval2._Mylast);
      }
      if (local_558._Mypair._Myval2._Myfirst != (HINSTANCE__ **)0x0) {
        uVar22 = (longlong)local_558._Mypair._Myval2._Myend -
                 (longlong)local_558._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
        pHVar20 = (HINSTANCE__ *)local_558._Mypair._Myval2._Myfirst;
        if (0xfff < uVar22) {
          pHVar20 = *(HINSTANCE__ **)((longlong)local_558._Mypair._Myval2._Myfirst + -8);
          uVar22 = uVar22 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_558._Mypair._Myval2._Myfirst + (-8 - (longlong)pHVar20)))
          goto LAB_146cdae0f;
        }
        ::operator_delete(pHVar20,uVar22);
        local_558._Mypair._Myval2._Myend = (HINSTANCE__ **)0x0;
        local_558._Mypair._Myval2._Myfirst = (HINSTANCE__ **)0x0;
        local_558._Mypair._Myval2._Mylast = (HINSTANCE__ **)0x0;
      }
      std::
      _Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_>_>
      ::
      ~_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_>_>
                (&local_510);
      std::
      list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
      ::
      ~list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
                ((list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
                  *)(local_528 + 8));
      return __return_storage_ptr__;
    }
  }
LAB_146cdae0f:
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// GatherModuleHandles @ 146cdae40

vector<HINSTANCE___*,std::allocator<HINSTANCE___*>_> * __cdecl
`anonymous_namespace'::GatherModuleHandles
          (vector<HINSTANCE___*,std::allocator<HINSTANCE___*>_> *__return_storage_ptr__,
          wchar_t **param_1,uint param_2)

{
  HINSTANCE__ ***pppHVar1;
  ulonglong uVar2;
  HINSTANCE__ **ppHVar3;
  HINSTANCE__ *pHVar4;
  HMODULE pHVar5;
  HINSTANCE__ **_Dst;
  ulonglong uVar6;
  ulonglong uVar7;
  HINSTANCE__ **ppHVar8;
  HINSTANCE__ *pHVar9;
  HINSTANCE__ **_Src;
  ulong64 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  size_t _Size;
  uint uVar13;
  
  uVar11 = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myfirst = (HINSTANCE__ **)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mylast = (HINSTANCE__ **)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myend = (HINSTANCE__ **)0x0;
  std::vector<HINSTANCE___*,std::allocator<HINSTANCE___*>_>::reserve
            (__return_storage_ptr__,(ulonglong)param_2);
  if (param_2 != 0) {
    do {
      pHVar5 = GetModuleHandleW(param_1[uVar11]);
      if (pHVar5 == (HMODULE)0x0) {
        Logging::Log(USER,LOG_ERROR,
                     "%sCannot enable module %S because it is not loaded by this process.\n");
      }
      else {
        ppHVar8 = (__return_storage_ptr__->_Mypair)._Myval2._Myend;
        _Src = (__return_storage_ptr__->_Mypair)._Myval2._Mylast;
        if (_Src == ppHVar8) {
          ppHVar3 = (__return_storage_ptr__->_Mypair)._Myval2._Myfirst;
          lVar12 = (longlong)_Src - (longlong)ppHVar3 >> 3;
          if (lVar12 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::vector<HINSTANCE___*,std::allocator<HINSTANCE___*>_>::_Xlength();
          }
          uVar2 = lVar12 + 1;
          uVar6 = (longlong)ppHVar8 - (longlong)ppHVar3 >> 3;
          if (0x1fffffffffffffff - (uVar6 >> 1) < uVar6) {
            uVar7 = 0x1fffffffffffffff;
          }
          else {
            uVar6 = (uVar6 >> 1) + uVar6;
            uVar7 = uVar2;
            if (uVar2 <= uVar6) {
              uVar7 = uVar6;
            }
            if (0x1fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
              std::_Throw_bad_array_new_length();
            }
          }
          _Dst = std::_Allocate<16,std::_Default_allocate_traits>(uVar7 * 8);
          _Dst[lVar12] = (HINSTANCE__ *)pHVar5;
          ppHVar8 = (__return_storage_ptr__->_Mypair)._Myval2._Mylast;
          ppHVar3 = (__return_storage_ptr__->_Mypair)._Myval2._Myfirst;
          if (_Src == ppHVar8) {
            _Size = (longlong)ppHVar8 - (longlong)ppHVar3;
            ppHVar8 = _Dst;
            _Src = ppHVar3;
          }
          else {
            memmove(_Dst,ppHVar3,(longlong)_Src - (longlong)ppHVar3);
            _Size = (longlong)(__return_storage_ptr__->_Mypair)._Myval2._Mylast - (longlong)_Src;
            ppHVar8 = _Dst + lVar12 + 1;
          }
          memmove(ppHVar8,_Src,_Size);
          pHVar4 = (HINSTANCE__ *)(__return_storage_ptr__->_Mypair)._Myval2._Myfirst;
          if (pHVar4 != (HINSTANCE__ *)0x0) {
            uVar10 = (longlong)(__return_storage_ptr__->_Mypair)._Myval2._Myend - (longlong)pHVar4 &
                     0xfffffffffffffff8;
            pHVar9 = pHVar4;
            if (0xfff < uVar10) {
              pHVar9 = *(HINSTANCE__ **)(pHVar4 + -2);
              uVar10 = uVar10 + 0x27;
              if (0x1f < (ulonglong)((longlong)pHVar4 + (-8 - (longlong)pHVar9))) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete(pHVar9,uVar10);
          }
          (__return_storage_ptr__->_Mypair)._Myval2._Myfirst = _Dst;
          (__return_storage_ptr__->_Mypair)._Myval2._Mylast = _Dst + uVar2;
          (__return_storage_ptr__->_Mypair)._Myval2._Myend = _Dst + uVar7;
        }
        else {
          *_Src = (HINSTANCE__ *)pHVar5;
          pppHVar1 = &(__return_storage_ptr__->_Mypair)._Myval2._Mylast;
          *pppHVar1 = *pppHVar1 + 1;
        }
      }
      uVar13 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar13;
    } while (uVar13 < param_2);
  }
  return __return_storage_ptr__;
}

// GatherPdbInfo @ 146cdb070

PdbInfo * __cdecl executable::GatherPdbInfo(MemoryMappedFile *param_1,ImageSectionDB *param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  _IMAGE_NT_HEADERS64 *p_Var6;
  PdbInfo *_Dst;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  
  p_Var6 = detail::GetNtHeader(param_1);
  if (((p_Var6 != (_IMAGE_NT_HEADERS64 *)0x0) &&
      ((longlong)
       &((_IMAGE_OPTIONAL_HEADER64 *)((p_Var6->OptionalHeader).DataDirectory + -0xe))->Magic +
       (ulonglong)(p_Var6->FileHeader).SizeOfOptionalHeader != 0)) &&
     (uVar7 = (ulonglong)(p_Var6->OptionalHeader).DataDirectory[6].Size, uVar8 = uVar7 / 7,
     uVar8 = (uVar7 - uVar8 >> 1) + uVar8 >> 4, uVar8 != 0)) {
    uVar5 = RvaToFileOffset(param_2,(p_Var6->OptionalHeader).DataDirectory[6].VirtualAddress);
    if (uVar5 != 0) {
      pvVar1 = param_1->baseAddress;
      uVar7 = 0;
      if (uVar8 != 0) {
        do {
          if ((*(int *)((ulonglong)uVar5 + 0xc + (longlong)pvVar1) == 2) &&
             (piVar9 = (int *)((ulonglong)*(uint *)((ulonglong)uVar5 + 0x18 + (longlong)pvVar1) +
                              (longlong)pvVar1), *piVar9 == 0x53445352)) {
            _Dst = ::operator_new(0x118);
            iVar2 = piVar9[2];
            iVar3 = piVar9[3];
            iVar4 = piVar9[4];
            (_Dst->guid).Data1 = piVar9[1];
            (_Dst->guid).Data2 = (short)iVar2;
            (_Dst->guid).Data3 = (short)((uint)iVar2 >> 0x10);
            *(int *)(_Dst->guid).Data4 = iVar3;
            *(int *)((_Dst->guid).Data4 + 4) = iVar4;
            _Dst->age = piVar9[5];
            strcpy_s(_Dst->path,0x104,(char *)(piVar9 + 6));
            return _Dst;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
    }
  }
  return (PdbInfo *)0x0;
}

// GetAllocationGranularity @ 146cdb190

uint __cdecl VirtualMemory::GetAllocationGranularity(void)

{
  _SYSTEM_INFO local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_38.u = (_union_552)0x0;
      local_38.dwPageSize = 0;
      local_38.lpMinimumApplicationAddress = (LPVOID)0x0;
      local_38.lpMaximumApplicationAddress = (LPVOID)0x0;
      local_38.dwActiveProcessorMask = 0;
      local_38.dwNumberOfProcessors = 0;
      local_38.dwProcessorType = 0;
      local_38.dwAllocationGranularity = 0;
      local_38.wProcessorLevel = 0;
      local_38.wProcessorRevision = 0;
      GetSystemInfo(&local_38);
      allocationGranularity = local_38.dwAllocationGranularity;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return allocationGranularity;
}

// GetBase @ 146cdb220

void * __cdecl Process::Current::GetBase(void)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146cdb222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  return pHVar1;
}

// GetCommandLine @ 146cdb290

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
Process::Current::GetCommandLine
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__)

{
  LPWSTR _Str;
  size_t sVar1;
  
  _Str = GetCommandLineW();
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
  sVar1 = wcslen(_Str);
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  _Construct<1,wchar_t_const_*>(__return_storage_ptr__,_Str,sVar1);
  return __return_storage_ptr__;
}

// GetContext @ 146cdb2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

StrongTypedef<_CONTEXT,0> * __cdecl
Thread::GetContext(StrongTypedef<_CONTEXT,0> *__return_storage_ptr__,StrongTypedef<void_*,0> param_1
                  )

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  DWORD64 DVar5;
  DWORD64 DVar6;
  DWORD64 DVar7;
  DWORD64 DVar8;
  _CONTEXT *p_Var9;
  _CONTEXT_u_256 *p_Var10;
  _CONTEXT *p_Var11;
  _CONTEXT_u_256 *p_Var12;
  longlong lVar13;
  undefined1 auStack_508 [32];
  _CONTEXT local_4e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_508;
  memset(&local_4e8,0,0x4d0);
  local_4e8.ContextFlags = 0x10001f;
  GetThreadContext(param_1.m_value,&local_4e8);
  lVar13 = 9;
  p_Var9 = &local_4e8;
  p_Var10 = (_CONTEXT_u_256 *)__return_storage_ptr__;
  do {
    p_Var12 = p_Var10;
    p_Var11 = p_Var9;
    uVar1 = p_Var11->P2Home;
    uVar2 = p_Var11->P3Home;
    uVar3 = p_Var11->P4Home;
    (p_Var12->_s_1).Header[0].Low = p_Var11->P1Home;
    *(ulong64 *)((longlong)p_Var12 + 8) = uVar1;
    uVar1 = p_Var11->P5Home;
    uVar4 = p_Var11->P6Home;
    *(ulong64 *)((longlong)p_Var12 + 0x10) = uVar2;
    *(ulong64 *)((longlong)p_Var12 + 0x18) = uVar3;
    uVar2 = *(ulong64 *)&p_Var11->ContextFlags;
    uVar3 = *(ulong64 *)&p_Var11->SegCs;
    *(ulong64 *)((longlong)p_Var12 + 0x20) = uVar1;
    *(ulong64 *)((longlong)p_Var12 + 0x28) = uVar4;
    uVar1 = *(ulong64 *)&p_Var11->SegGs;
    uVar4 = p_Var11->Dr0;
    *(ulong64 *)((longlong)p_Var12 + 0x30) = uVar2;
    *(ulong64 *)((longlong)p_Var12 + 0x38) = uVar3;
    uVar2 = p_Var11->Dr1;
    uVar3 = p_Var11->Dr2;
    *(ulong64 *)((longlong)p_Var12 + 0x40) = uVar1;
    *(ulong64 *)((longlong)p_Var12 + 0x48) = uVar4;
    uVar1 = p_Var11->Dr3;
    uVar4 = p_Var11->Dr6;
    *(ulong64 *)((longlong)p_Var12 + 0x50) = uVar2;
    *(ulong64 *)((longlong)p_Var12 + 0x58) = uVar3;
    uVar2 = p_Var11->Dr7;
    uVar3 = p_Var11->Rax;
    *(ulong64 *)((longlong)p_Var12 + 0x60) = uVar1;
    *(ulong64 *)((longlong)p_Var12 + 0x68) = uVar4;
    *(ulong64 *)((longlong)p_Var12 + 0x70) = uVar2;
    *(ulong64 *)((longlong)p_Var12 + 0x78) = uVar3;
    lVar13 = lVar13 + -1;
    p_Var9 = (_CONTEXT *)&p_Var11->Rcx;
    p_Var10 = (_CONTEXT_u_256 *)((longlong)p_Var12 + 0x80);
  } while (lVar13 != 0);
  DVar5 = p_Var11->Rdx;
  DVar6 = p_Var11->Rbx;
  DVar7 = p_Var11->Rsp;
  (((_CONTEXT_u_256 *)((longlong)p_Var12 + 0x80))->_s_1).Header[0].Low = p_Var11->Rcx;
  *(DWORD64 *)((longlong)p_Var12 + 0x88) = DVar5;
  DVar5 = p_Var11->Rbp;
  DVar8 = p_Var11->Rsi;
  *(DWORD64 *)((longlong)p_Var12 + 0x90) = DVar6;
  *(DWORD64 *)((longlong)p_Var12 + 0x98) = DVar7;
  DVar6 = p_Var11->Rdi;
  DVar7 = p_Var11->R8;
  *(DWORD64 *)((longlong)p_Var12 + 0xa0) = DVar5;
  *(DWORD64 *)((longlong)p_Var12 + 0xa8) = DVar8;
  DVar5 = p_Var11->R9;
  DVar8 = p_Var11->R10;
  *(DWORD64 *)((longlong)p_Var12 + 0xb0) = DVar6;
  *(DWORD64 *)((longlong)p_Var12 + 0xb8) = DVar7;
  *(DWORD64 *)((longlong)p_Var12 + 0xc0) = DVar5;
  *(DWORD64 *)((longlong)p_Var12 + 200) = DVar8;
  return __return_storage_ptr__;
}

// GetCurrent @ 146cdb3f0

ulong64 __cdecl utcTime::GetCurrent(void)

{
  _FILETIME local_res8 [4];
  
  local_res8[0].dwLowDateTime = 0;
  local_res8[0].dwHighDateTime = 0;
  GetSystemTimeAsFileTime(local_res8);
  return (ulong64)local_res8[0];
}

// GetEntryPointRva @ 146cdb500

uint __cdecl executable::GetEntryPointRva(MemoryMappedFile *param_1)

{
  _IMAGE_NT_HEADERS64 *p_Var1;
  
  p_Var1 = detail::GetNtHeader(param_1);
  if (p_Var1 == (_IMAGE_NT_HEADERS64 *)0x0) {
    return 0;
  }
  return (p_Var1->OptionalHeader).AddressOfEntryPoint;
}

// GetHandle @ 146cdb530

StrongTypedef<void_*,0> __cdecl Process::Current::GetHandle(void)

{
  HANDLE pvVar1;
  undefined8 *in_RCX;
  
  pvVar1 = GetCurrentProcess();
  *in_RCX = pvVar1;
  return (StrongTypedef<void_*,0>)in_RCX;
}

// GetHandle @ 146cdb560

StrongTypedef<void_*,0> __cdecl Process::GetHandle(Context *param_1)

{
  longlong in_RDX;
  
  *(undefined8 *)param_1 = *(undefined8 *)(in_RDX + 0x10);
  return (StrongTypedef<void_*,0>)param_1;
}

// GetHeader @ 146cdb580

Header * __cdecl executable::GetHeader(Header *__return_storage_ptr__,MemoryMappedFile *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  _IMAGE_DATA_DIRECTORY _Var3;
  _IMAGE_DATA_DIRECTORY _Var4;
  _IMAGE_DATA_DIRECTORY _Var5;
  _IMAGE_DATA_DIRECTORY _Var6;
  ushort uVar7;
  ushort uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ushort uVar12;
  ushort uVar13;
  uchar uVar14;
  uchar uVar15;
  ulong uVar16;
  ulong uVar17;
  ushort uVar18;
  ushort uVar19;
  _IMAGE_NT_HEADERS64 *p_Var20;
  ulong64 uVar21;
  
  p_Var20 = detail::GetNtHeader(param_1);
  if (p_Var20 == (_IMAGE_NT_HEADERS64 *)0x0) {
    memset(__return_storage_ptr__,0,0x110);
    return __return_storage_ptr__;
  }
  uVar21 = Filesystem::GetMemoryMappedFileSizeOnDisk(param_1);
  uVar7 = (p_Var20->FileHeader).Machine;
  uVar8 = (p_Var20->FileHeader).NumberOfSections;
  uVar9 = (p_Var20->FileHeader).TimeDateStamp;
  uVar10 = (p_Var20->FileHeader).PointerToSymbolTable;
  uVar11 = (p_Var20->FileHeader).NumberOfSymbols;
  uVar16 = (p_Var20->OptionalHeader).AddressOfEntryPoint;
  uVar17 = (p_Var20->OptionalHeader).BaseOfCode;
  uVar1 = (p_Var20->OptionalHeader).ImageBase;
  __return_storage_ptr__->sizeOnDisk = uVar21;
  uVar12 = (p_Var20->FileHeader).SizeOfOptionalHeader;
  uVar13 = (p_Var20->FileHeader).Characteristics;
  (__return_storage_ptr__->imageHeader).Machine = uVar7;
  (__return_storage_ptr__->imageHeader).NumberOfSections = uVar8;
  (__return_storage_ptr__->imageHeader).TimeDateStamp = uVar9;
  (__return_storage_ptr__->imageHeader).PointerToSymbolTable = uVar10;
  (__return_storage_ptr__->imageHeader).NumberOfSymbols = uVar11;
  (__return_storage_ptr__->imageHeader).SizeOfOptionalHeader = uVar12;
  (__return_storage_ptr__->imageHeader).Characteristics = uVar13;
  uVar14 = (p_Var20->OptionalHeader).MajorLinkerVersion;
  uVar15 = (p_Var20->OptionalHeader).MinorLinkerVersion;
  uVar9 = (p_Var20->OptionalHeader).SizeOfCode;
  uVar10 = (p_Var20->OptionalHeader).SizeOfInitializedData;
  uVar11 = (p_Var20->OptionalHeader).SizeOfUninitializedData;
  (__return_storage_ptr__->optionalHeader).Magic = (p_Var20->OptionalHeader).Magic;
  (__return_storage_ptr__->optionalHeader).MajorLinkerVersion = uVar14;
  (__return_storage_ptr__->optionalHeader).MinorLinkerVersion = uVar15;
  (__return_storage_ptr__->optionalHeader).SizeOfCode = uVar9;
  (__return_storage_ptr__->optionalHeader).SizeOfInitializedData = uVar10;
  (__return_storage_ptr__->optionalHeader).SizeOfUninitializedData = uVar11;
  uVar9 = (p_Var20->OptionalHeader).SectionAlignment;
  uVar10 = (p_Var20->OptionalHeader).FileAlignment;
  uVar7 = (p_Var20->OptionalHeader).MajorOperatingSystemVersion;
  uVar8 = (p_Var20->OptionalHeader).MinorOperatingSystemVersion;
  uVar12 = (p_Var20->OptionalHeader).MajorImageVersion;
  uVar13 = (p_Var20->OptionalHeader).MinorImageVersion;
  (__return_storage_ptr__->optionalHeader).AddressOfEntryPoint = uVar16;
  (__return_storage_ptr__->optionalHeader).BaseOfCode = uVar17;
  (__return_storage_ptr__->optionalHeader).ImageBase = uVar1;
  uVar18 = (p_Var20->OptionalHeader).MajorSubsystemVersion;
  uVar19 = (p_Var20->OptionalHeader).MinorSubsystemVersion;
  uVar11 = (p_Var20->OptionalHeader).Win32VersionValue;
  uVar16 = (p_Var20->OptionalHeader).SizeOfImage;
  uVar17 = (p_Var20->OptionalHeader).SizeOfHeaders;
  (__return_storage_ptr__->optionalHeader).SectionAlignment = uVar9;
  (__return_storage_ptr__->optionalHeader).FileAlignment = uVar10;
  (__return_storage_ptr__->optionalHeader).MajorOperatingSystemVersion = uVar7;
  (__return_storage_ptr__->optionalHeader).MinorOperatingSystemVersion = uVar8;
  (__return_storage_ptr__->optionalHeader).MajorImageVersion = uVar12;
  (__return_storage_ptr__->optionalHeader).MinorImageVersion = uVar13;
  uVar9 = (p_Var20->OptionalHeader).CheckSum;
  uVar7 = (p_Var20->OptionalHeader).Subsystem;
  uVar8 = (p_Var20->OptionalHeader).DllCharacteristics;
  uVar1 = (p_Var20->OptionalHeader).SizeOfStackReserve;
  (__return_storage_ptr__->optionalHeader).MajorSubsystemVersion = uVar18;
  (__return_storage_ptr__->optionalHeader).MinorSubsystemVersion = uVar19;
  (__return_storage_ptr__->optionalHeader).Win32VersionValue = uVar11;
  (__return_storage_ptr__->optionalHeader).SizeOfImage = uVar16;
  (__return_storage_ptr__->optionalHeader).SizeOfHeaders = uVar17;
  uVar21 = (p_Var20->OptionalHeader).SizeOfStackCommit;
  uVar2 = (p_Var20->OptionalHeader).SizeOfHeapReserve;
  (__return_storage_ptr__->optionalHeader).CheckSum = uVar9;
  (__return_storage_ptr__->optionalHeader).Subsystem = uVar7;
  (__return_storage_ptr__->optionalHeader).DllCharacteristics = uVar8;
  (__return_storage_ptr__->optionalHeader).SizeOfStackReserve = uVar1;
  uVar1 = (p_Var20->OptionalHeader).SizeOfHeapCommit;
  uVar9 = (p_Var20->OptionalHeader).LoaderFlags;
  uVar10 = (p_Var20->OptionalHeader).NumberOfRvaAndSizes;
  (__return_storage_ptr__->optionalHeader).SizeOfStackCommit = uVar21;
  (__return_storage_ptr__->optionalHeader).SizeOfHeapReserve = uVar2;
  _Var3 = (p_Var20->OptionalHeader).DataDirectory[2];
  _Var4 = (p_Var20->OptionalHeader).DataDirectory[3];
  (__return_storage_ptr__->optionalHeader).SizeOfHeapCommit = uVar1;
  (__return_storage_ptr__->optionalHeader).LoaderFlags = uVar9;
  (__return_storage_ptr__->optionalHeader).NumberOfRvaAndSizes = uVar10;
  _Var5 = (p_Var20->OptionalHeader).DataDirectory[1];
  (__return_storage_ptr__->optionalHeader).DataDirectory[0] =
       (p_Var20->OptionalHeader).DataDirectory[0];
  (__return_storage_ptr__->optionalHeader).DataDirectory[1] = _Var5;
  _Var5 = (p_Var20->OptionalHeader).DataDirectory[4];
  _Var6 = (p_Var20->OptionalHeader).DataDirectory[5];
  (__return_storage_ptr__->optionalHeader).DataDirectory[2] = _Var3;
  (__return_storage_ptr__->optionalHeader).DataDirectory[3] = _Var4;
  _Var3 = (p_Var20->OptionalHeader).DataDirectory[6];
  _Var4 = (p_Var20->OptionalHeader).DataDirectory[7];
  (__return_storage_ptr__->optionalHeader).DataDirectory[4] = _Var5;
  (__return_storage_ptr__->optionalHeader).DataDirectory[5] = _Var6;
  _Var5 = (p_Var20->OptionalHeader).DataDirectory[8];
  _Var6 = (p_Var20->OptionalHeader).DataDirectory[9];
  (__return_storage_ptr__->optionalHeader).DataDirectory[6] = _Var3;
  (__return_storage_ptr__->optionalHeader).DataDirectory[7] = _Var4;
  _Var3 = (p_Var20->OptionalHeader).DataDirectory[10];
  _Var4 = (p_Var20->OptionalHeader).DataDirectory[0xb];
  (__return_storage_ptr__->optionalHeader).DataDirectory[8] = _Var5;
  (__return_storage_ptr__->optionalHeader).DataDirectory[9] = _Var6;
  _Var5 = (p_Var20->OptionalHeader).DataDirectory[0xc];
  _Var6 = (p_Var20->OptionalHeader).DataDirectory[0xd];
  (__return_storage_ptr__->optionalHeader).DataDirectory[10] = _Var3;
  (__return_storage_ptr__->optionalHeader).DataDirectory[0xb] = _Var4;
  _Var3 = (p_Var20->OptionalHeader).DataDirectory[0xe];
  _Var4 = (p_Var20->OptionalHeader).DataDirectory[0xf];
  (__return_storage_ptr__->optionalHeader).DataDirectory[0xc] = _Var5;
  (__return_storage_ptr__->optionalHeader).DataDirectory[0xd] = _Var6;
  (__return_storage_ptr__->optionalHeader).DataDirectory[0xe] = _Var3;
  (__return_storage_ptr__->optionalHeader).DataDirectory[0xf] = _Var4;
  return __return_storage_ptr__;
}

// GetId @ 146cdb690

StrongTypedef<unsigned_long,0> __cdecl Process::Current::GetId(void)

{
  DWORD DVar1;
  DWORD *in_RCX;
  
  DVar1 = GetCurrentProcessId();
  *in_RCX = DVar1;
  return (StrongTypedef<unsigned_long,0>)(ulong)in_RCX;
}

// GetId @ 146cdb6b0

StrongTypedef<unsigned_long,0> __cdecl Thread::Current::GetId(void)

{
  DWORD DVar1;
  DWORD *in_RCX;
  
  DVar1 = GetCurrentThreadId();
  *in_RCX = DVar1;
  return (StrongTypedef<unsigned_long,0>)(ulong)in_RCX;
}

// GetId @ 146cdb6d0

StrongTypedef<unsigned_long,0> __cdecl Process::GetId(Context *param_1)

{
  longlong in_RDX;
  
  param_1->flags = *(uint *)(in_RDX + 0x20);
  return (StrongTypedef<unsigned_long,0>)(ulong)param_1;
}

// GetId @ 146cdb6e0

StrongTypedef<unsigned_long,0> __cdecl Thread::GetId(StrongTypedef<void_*,0> param_1)

{
  DWORD DVar1;
  HANDLE in_RDX;
  
  DVar1 = GetThreadId(in_RDX);
  *(DWORD *)param_1.m_value = DVar1;
  return (StrongTypedef<unsigned_long,0>)(ulong)param_1.m_value;
}

// GetImagePath @ 146cdb710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FixedSizeString<wchar_t,260> * __cdecl
Process::Current::GetImagePath(FixedSizeString<wchar_t,260> *__return_storage_ptr__)

{
  size_t sVar1;
  undefined1 auStack_248 [32];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_248;
  memset(local_228,0,0x208);
  GetModuleFileNameW((HMODULE)0x0,local_228,0x104);
  sVar1 = wcslen(local_228);
  __return_storage_ptr__->m_length = (uint)sVar1;
  memcpy(__return_storage_ptr__->m_data,local_228,(ulonglong)((uint)sVar1 + 1) * 2);
  return __return_storage_ptr__;
}

// GetImagePath @ 146cdb7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FixedSizeString<wchar_t,260> * __cdecl
Process::GetImagePath
          (FixedSizeString<wchar_t,260> *__return_storage_ptr__,StrongTypedef<void_*,0> param_1)

{
  size_t sVar1;
  undefined1 auStack_258 [32];
  DWORD local_238 [4];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_258;
  local_238[0] = 0x104;
  memset(local_228,0,0x208);
  QueryFullProcessImageNameW(param_1.m_value,0,local_228,local_238);
  sVar1 = wcslen(local_228);
  __return_storage_ptr__->m_length = (uint)sVar1;
  memcpy(__return_storage_ptr__->m_data,local_228,(ulonglong)((uint)sVar1 + 1) * 2);
  return __return_storage_ptr__;
}

// GetIndentation @ 146cdb840

char * __cdecl Logging::GetIndentation(Enum param_1)

{
  char *pcVar1;
  
  pcVar1 = INDENTATION_STRINGS[6];
  if (g_indentationLevel[(int)param_1] < 7) {
    pcVar1 = INDENTATION_STRINGS[g_indentationLevel[(int)param_1]];
  }
  return pcVar1;
}

// GetLength @ 146cdb870

uint __thiscall FixedSizeString<char,22>::GetLength(FixedSizeString<char,22> *this)

{
  return this->m_length;
}

// GetLength @ 146cdb880

uint __thiscall FixedSizeString<wchar_t,260>::GetLength(FixedSizeString<wchar_t,260> *this)

{
  return this->m_length;
}

// GetLowerBound @ 146cdb890

ulong64 __cdecl LivePP::GetLowerBound(ulong64 param_1,ulong64 param_2)

{
  ulong64 uVar1;
  
  uVar1 = 0x10000;
  if (param_2 + 0x10000 <= param_1) {
    uVar1 = param_1 - param_2;
  }
  return uVar1;
}

// GetMemoryMappedFileData @ 146cdb8b0

void * __cdecl Filesystem::GetMemoryMappedFileData(MemoryMappedFile *param_1)

{
  return param_1->baseAddress;
}

// GetMemoryMappedFileData @ 146cdb8c0

void * __cdecl Filesystem::GetMemoryMappedFileData(MemoryMappedFile *param_1)

{
  return param_1->baseAddress;
}

// GetMemoryMappedFileSizeOnDisk @ 146cdb8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl Filesystem::GetMemoryMappedFileSizeOnDisk(MemoryMappedFile *param_1)

{
  undefined1 auStack_68 [32];
  _BY_HANDLE_FILE_INFORMATION local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48.dwFileAttributes = 0;
  local_48.ftCreationTime.dwLowDateTime = 0;
  local_48.ftCreationTime.dwHighDateTime = 0;
  local_48.ftLastAccessTime.dwLowDateTime = 0;
  local_48.nFileIndexLow = 0;
  local_48.ftLastAccessTime.dwHighDateTime = 0;
  local_48.ftLastWriteTime.dwLowDateTime = 0;
  local_48.ftLastWriteTime.dwHighDateTime = 0;
  local_48.dwVolumeSerialNumber = 0;
  local_48.nFileSizeHigh = 0;
  local_48.nFileSizeLow = 0;
  local_48.nNumberOfLinks = 0;
  local_48.nFileIndexHigh = 0;
  GetFileInformationByHandle(param_1->file,&local_48);
  return CONCAT44(local_48.nFileSizeHigh,local_48.nFileSizeLow);
}

// GetMemoryMappedSize @ 146cdb930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl Filesystem::GetMemoryMappedSize(MemoryMappedFile *param_1)

{
  undefined1 auStack_68 [32];
  _BY_HANDLE_FILE_INFORMATION _Stack_48;
  ulonglong uStack_10;
  
  if (param_1->size != 0) {
    return param_1->size;
  }
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  _Stack_48.dwFileAttributes = 0;
  _Stack_48.ftCreationTime.dwLowDateTime = 0;
  _Stack_48.ftCreationTime.dwHighDateTime = 0;
  _Stack_48.ftLastAccessTime.dwLowDateTime = 0;
  _Stack_48.nFileIndexLow = 0;
  _Stack_48.ftLastAccessTime.dwHighDateTime = 0;
  _Stack_48.ftLastWriteTime.dwLowDateTime = 0;
  _Stack_48.ftLastWriteTime.dwHighDateTime = 0;
  _Stack_48.dwVolumeSerialNumber = 0;
  _Stack_48.nFileSizeHigh = 0;
  _Stack_48.nFileSizeLow = 0;
  _Stack_48.nNumberOfLinks = 0;
  _Stack_48.nFileIndexHigh = 0;
  GetFileInformationByHandle(param_1->file,&_Stack_48);
  return CONCAT44(_Stack_48.nFileSizeHigh,_Stack_48.nFileSizeLow);
}

// GetModuleSize @ 146cdb950

uint __cdecl Process::GetModuleSize(StrongTypedef<void_*,0> param_1,void *param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  K32GetModuleInformation(0,param_2,&local_28,0x18);
  return (uint)uStack_20;
}

// GetNtHeader @ 146cdba00

_IMAGE_NT_HEADERS64 * __cdecl detail::GetNtHeader(MemoryMappedFile *param_1)

{
  short *psVar1;
  _IMAGE_NT_HEADERS64 *p_Var2;
  
  psVar1 = param_1->baseAddress;
  if ((*psVar1 != 0x5a4d) ||
     (p_Var2 = (_IMAGE_NT_HEADERS64 *)((longlong)*(int *)(psVar1 + 0x1e) + (longlong)psVar1),
     p_Var2->Signature != 0x4550)) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
    p_Var2 = (_IMAGE_NT_HEADERS64 *)0x0;
  }
  return p_Var2;
}

// GetPageSize @ 146cdbb10

uint __cdecl VirtualMemory::GetPageSize(void)

{
  _SYSTEM_INFO local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_38.u = (_union_552)0x0;
      local_38.dwPageSize = 0;
      local_38.lpMinimumApplicationAddress = (LPVOID)0x0;
      local_38.lpMaximumApplicationAddress = (LPVOID)0x0;
      local_38.dwActiveProcessorMask = 0;
      local_38.dwNumberOfProcessors = 0;
      local_38.dwProcessorType = 0;
      local_38.dwAllocationGranularity = 0;
      local_38.wProcessorLevel = 0;
      local_38.wProcessorRevision = 0;
      GetSystemInfo(&local_38);
      pageSize = local_38.dwPageSize;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return pageSize;
}

// GetPreferredBase @ 146cdbba0

ulong64 __cdecl executable::GetPreferredBase(MemoryMappedFile *param_1)

{
  _IMAGE_NT_HEADERS64 *p_Var1;
  
  p_Var1 = detail::GetNtHeader(param_1);
  if (p_Var1 == (_IMAGE_NT_HEADERS64 *)0x0) {
    return 0;
  }
  return (p_Var1->OptionalHeader).ImageBase;
}

// GetPriority @ 146cdbbe0

int __stdcall Thread::GetPriority(HANDLE hThread)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146cdbbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetThreadPriority(hThread);
  return iVar1;
}

// GetSize @ 146cdbdf0

uint __cdecl executable::GetSize(MemoryMappedFile *param_1)

{
  _IMAGE_NT_HEADERS64 *p_Var1;
  
  p_Var1 = detail::GetNtHeader(param_1);
  if (p_Var1 == (_IMAGE_NT_HEADERS64 *)0x0) {
    return 0;
  }
  return (p_Var1->OptionalHeader).SizeOfImage;
}

// GetStdOutData @ 146cdbe20

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
Process::GetStdOutData
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,Context *param_1)

{
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
            (__return_storage_ptr__,&param_1->stdoutData);
  return __return_storage_ptr__;
}

// GetString @ 146cdbe50

char * __thiscall FixedSizeString<char,22>::GetString(FixedSizeString<char,22> *this)

{
  return this->m_data;
}

// GetString @ 146cdbe60

wchar_t * __thiscall FixedSizeString<wchar_t,260>::GetString(FixedSizeString<wchar_t,260> *this)

{
  return this->m_data;
}

// GetUpperBound @ 146cdbee0

ulong64 __cdecl LivePP::GetUpperBound(ulong64 param_1,ulong64 param_2)

{
  ulong64 uVar1;
  
  uVar1 = param_1 + param_2;
  if (0x7fffffff0000 - param_2 < param_1) {
    uVar1 = 0x7fffffff0000;
  }
  return uVar1;
}

// GetVariable @ 146cdbf10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
environment::GetVariable
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,wchar_t *param_1,wchar_t *param_2)

{
  longlong lVar1;
  DWORD DVar2;
  size_t sVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auStackY_78 [32];
  <lambda_1> local_48;
  _Bxty local_40;
  ulong64 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  uStack_28 = 7;
  local_30 = 0;
  local_40._8_8_ = 0;
  local_40._Ptr = (wchar_t *)0x0;
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,unsigned___int64,wchar_t>
            ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)&local_40,
             0x400,local_48,0x400,L'\0');
  uVar5 = &local_40;
  if (7 < uStack_28) {
    uVar5 = local_40._Ptr;
  }
  DVar2 = GetEnvironmentVariableW(param_1,(LPWSTR)uVar5,0x400);
  if (DVar2 != 0) {
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = local_40._Ptr;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = local_40._8_8_;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = local_30;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = uStack_28;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  if (param_2 == (wchar_t *)0x0) {
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 7;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
    if (uStack_28 < 8) {
      return __return_storage_ptr__;
    }
    lVar1 = uStack_28 * 2;
    uVar6 = lVar1 + 2;
    uVar5 = local_40._Ptr;
    if (uVar6 < 0x1000) goto LAB_146cdbffd;
    uVar5 = *(undefined8 *)(local_40._Ptr + -4);
    lVar4 = (longlong)local_40._Ptr - uVar5;
  }
  else {
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
    sVar3 = wcslen(param_2);
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Construct<1,wchar_t_const_*>(__return_storage_ptr__,param_2,sVar3);
    if (uStack_28 < 8) {
      return __return_storage_ptr__;
    }
    lVar1 = uStack_28 * 2;
    uVar6 = lVar1 + 2;
    uVar5 = local_40._Ptr;
    if (uVar6 < 0x1000) goto LAB_146cdbffd;
    uVar5 = *(undefined8 *)(local_40._Ptr + -4);
    lVar4 = (longlong)local_40._Ptr - uVar5;
  }
  uVar6 = lVar1 + 0x29;
  if (0x1f < lVar4 - 8U) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
LAB_146cdbffd:
  ::operator_delete((void *)uVar5,uVar6);
  return __return_storage_ptr__;
}

// GetVfsEntries @ 146cdc0a0

vector<Filesystem::VfsEntry,std::allocator<Filesystem::VfsEntry>_> * __cdecl
Filesystem::GetVfsEntries(void)

{
  return &g_vfsEntries;
}

// GetVirtualKeyCode @ 146cdc0b0

int __cdecl shortcut::GetVirtualKeyCode(int param_1)

{
  return param_1 & 0xff;
}

// GetWorkingDirectory @ 146cdc0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FixedSizeString<wchar_t,260> * __cdecl
Process::Current::GetWorkingDirectory(FixedSizeString<wchar_t,260> *__return_storage_ptr__)

{
  size_t sVar1;
  undefined1 auStack_248 [32];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_248;
  memset(local_228,0,0x208);
  GetCurrentDirectoryW(0x104,local_228);
  sVar1 = wcslen(local_228);
  __return_storage_ptr__->m_length = (uint)sVar1;
  memcpy(__return_storage_ptr__->m_data,local_228,(ulonglong)((uint)sVar1 + 1) * 2);
  return __return_storage_ptr__;
}

// HandleCommands @ 146cdc150

bool __thiscall CommandMap::HandleCommands(CommandMap *this,DuplexPipe *param_1,void *param_2)

{
  _func___cdecl_bool_DuplexPipe_ptr_void_ptr_void_ptr_ulong64 *p_Var1;
  bool bVar2;
  undefined4 uVar3;
  void *_Memory;
  undefined8 local_res20;
  
  local_res20 = 0;
  bVar2 = DuplexPipe::Read(param_1,&local_res20,8);
  if (bVar2) {
    do {
      p_Var1 = this->m_actions[local_res20 & 0xffffffff];
      _Memory = (void *)0x0;
      uVar3 = 0;
      if (local_res20._4_4_ != 0) {
        _Memory = malloc((ulonglong)local_res20._4_4_);
        uVar3 = local_res20._4_4_;
      }
      bVar2 = (*p_Var1)(param_1,param_2,_Memory,(ulong64)uVar3);
      free(_Memory);
      if (!bVar2) {
        return true;
      }
      local_res20 = 0;
      bVar2 = DuplexPipe::Read(param_1,&local_res20,8);
    } while (bVar2);
  }
  return false;
}

// HandleException @ 146cdc220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ExceptionResult * __thiscall
ClientUserCommandThread::HandleException
          (ClientUserCommandThread *this,ExceptionResult *__return_storage_ptr__,
          _EXCEPTION_RECORD *param_1,_CONTEXT *param_2,StrongTypedef<unsigned_long,0> param_3)

{
  DuplexPipeClient *this_00;
  ulong64 uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulong64 *puVar5;
  _CONTEXT *p_Var6;
  ulong64 *puVar7;
  _CONTEXT *p_Var8;
  longlong lVar9;
  undefined1 auStack_a48 [32];
  undefined1 local_a28 [8];
  undefined8 local_a20;
  CommandMap local_a18;
  DWORD local_5b8;
  ulong local_5b4;
  undefined8 local_5b0;
  _EXCEPTION_RECORD *p_Stack_5a8;
  void *local_5a0;
  undefined8 uStack_598;
  ulong64 local_590;
  ulong64 uStack_588;
  ulong64 local_580;
  ulong64 uStack_578;
  ulong64 local_570;
  ulong64 uStack_568;
  ulong64 local_560;
  ulong64 uStack_558;
  ulong64 local_550;
  ulong64 uStack_548;
  ulong64 local_540;
  ulong64 uStack_538;
  ulong64 local_530;
  ulong64 uStack_528;
  ulong64 local_520;
  ulong64 local_518 [154];
  _CONTEXT *local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a48;
  local_5b8 = GetCurrentProcessId();
  local_5b0._0_4_ = param_1->ExceptionCode;
  local_5b0._4_4_ = param_1->ExceptionFlags;
  p_Stack_5a8 = param_1->ExceptionRecord;
  local_5a0 = param_1->ExceptionAddress;
  uStack_598 = *(undefined8 *)&param_1->NumberParameters;
  lVar9 = 9;
  local_5b4 = param_3.m_value;
  local_590 = param_1->ExceptionInformation[0];
  uStack_588 = param_1->ExceptionInformation[1];
  local_580 = param_1->ExceptionInformation[2];
  uStack_578 = param_1->ExceptionInformation[3];
  local_570 = param_1->ExceptionInformation[4];
  uStack_568 = param_1->ExceptionInformation[5];
  local_560 = param_1->ExceptionInformation[6];
  uStack_558 = param_1->ExceptionInformation[7];
  local_550 = param_1->ExceptionInformation[8];
  uStack_548 = param_1->ExceptionInformation[9];
  local_540 = param_1->ExceptionInformation[10];
  uStack_538 = param_1->ExceptionInformation[0xb];
  local_530 = param_1->ExceptionInformation[0xc];
  uStack_528 = param_1->ExceptionInformation[0xd];
  local_520 = param_1->ExceptionInformation[0xe];
  puVar5 = local_518;
  p_Var6 = param_2;
  do {
    p_Var8 = p_Var6;
    puVar7 = puVar5;
    uVar1 = p_Var8->P2Home;
    uVar2 = p_Var8->P3Home;
    uVar3 = p_Var8->P4Home;
    *puVar7 = p_Var8->P1Home;
    puVar7[1] = uVar1;
    uVar1 = p_Var8->P5Home;
    uVar4 = p_Var8->P6Home;
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    uVar2 = *(ulong64 *)&p_Var8->ContextFlags;
    uVar3 = *(ulong64 *)&p_Var8->SegCs;
    puVar7[4] = uVar1;
    puVar7[5] = uVar4;
    uVar1 = *(ulong64 *)&p_Var8->SegGs;
    uVar4 = p_Var8->Dr0;
    puVar7[6] = uVar2;
    puVar7[7] = uVar3;
    uVar2 = p_Var8->Dr1;
    uVar3 = p_Var8->Dr2;
    puVar7[8] = uVar1;
    puVar7[9] = uVar4;
    uVar1 = p_Var8->Dr3;
    uVar4 = p_Var8->Dr6;
    puVar7[10] = uVar2;
    puVar7[0xb] = uVar3;
    uVar2 = p_Var8->Dr7;
    uVar3 = p_Var8->Rax;
    puVar7[0xc] = uVar1;
    puVar7[0xd] = uVar4;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = uVar3;
    lVar9 = lVar9 + -1;
    puVar5 = puVar7 + 0x10;
    p_Var6 = (_CONTEXT *)&p_Var8->Rcx;
  } while (lVar9 != 0);
  uVar1 = p_Var8->Rdx;
  this_00 = this->m_exceptionPipe;
  uVar2 = p_Var8->Rbx;
  uVar3 = p_Var8->Rsp;
  local_a20 = 0x7a;
  puVar7[0x10] = p_Var8->Rcx;
  puVar7[0x11] = uVar1;
  uVar1 = p_Var8->Rbp;
  uVar4 = p_Var8->Rsi;
  puVar7[0x12] = uVar2;
  puVar7[0x13] = uVar3;
  uVar2 = p_Var8->Rdi;
  uVar3 = p_Var8->R8;
  puVar7[0x14] = uVar1;
  puVar7[0x15] = uVar4;
  uVar1 = p_Var8->R9;
  uVar4 = p_Var8->R10;
  puVar7[0x16] = uVar2;
  puVar7[0x17] = uVar3;
  puVar7[0x18] = uVar1;
  puVar7[0x19] = uVar4;
  local_48 = param_2;
  DuplexPipe::Send((DuplexPipe *)this_00,&local_a20,8);
  DuplexPipe::Send((DuplexPipe *)this_00,&local_5b8,0x580);
  local_a28[0] = 0;
  DuplexPipe::Read((DuplexPipe *)this_00,local_a28,1);
  __return_storage_ptr__->returnAddress = (void *)0x0;
  __return_storage_ptr__->framePointer = (void *)0x0;
  __return_storage_ptr__->stackPointer = (void *)0x0;
  *(undefined8 *)&__return_storage_ptr__->continueExecution = 0;
  CommandMap::CommandMap(&local_a18);
  local_a18.m_actions[0x7b] = CommandMap::ReceiveAndCallAction<actions::HandleExceptionFinished>;
  CommandMap::HandleCommands(&local_a18,(DuplexPipe *)this->m_exceptionPipe,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeartBeatMutex @ 146cdc4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
primitiveNames::HeartBeatMutex
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1,
          StrongTypedef<unsigned_long,0> param_2)

{
  ulong64 uVar1;
  ulonglong uVar2;
  _Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1> *p_Var3
  ;
  undefined8 uVar4;
  ulonglong uVar5;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar6;
  wchar_t *pwVar7;
  undefined1 auStackY_a8 [32];
  <lambda_1> local_78 [8];
  _Bxty local_70;
  ulong64 local_60;
  ulonglong local_58;
  wchar_t local_28 [4];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 7;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::reserve
            (__return_storage_ptr__,0x80);
  p_Var3 = &param_1->_Mypair;
  if (7 < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
            (__return_storage_ptr__,(wchar_t *)param_1,(p_Var3->_Myval2)._Mysize);
  uVar5 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
  uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
  if (uVar5 - uVar1 < 0xd) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
              (__return_storage_ptr__,0xd,local_78[0],L"_UE_LC_IPM_HB",0xd);
  }
  else {
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar1 + 0xd;
    pbVar6 = __return_storage_ptr__;
    if (7 < uVar5) {
      pbVar6 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    memmove((void *)((longlong)&(pbVar6->_Mypair)._Myval2._Bx + uVar1 * 2),L"_UE_LC_IPM_HB",0x1a);
    *(undefined2 *)((longlong)&(pbVar6->_Mypair)._Myval2._Myres + uVar1 * 2 + 2) = 0;
  }
  pwVar7 = local_28 + 1;
  uVar5 = (ulonglong)param_2.m_value;
  do {
    pwVar7 = pwVar7 + -1;
    uVar2 = uVar5 / 10;
    *pwVar7 = (short)uVar5 + (short)uVar2 * -10 + L'0';
    uVar5 = uVar2;
  } while ((int)uVar2 != 0);
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_><wchar_t_*,0>
            ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)&local_70,
             pwVar7,local_28 + 1,(allocator<wchar_t> *)local_78);
  uVar4 = &local_70;
  if (7 < local_58) {
    uVar4 = local_70._Ptr;
  }
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
            (__return_storage_ptr__,(wchar_t *)uVar4,local_60);
  if (7 < local_58) {
    uVar5 = local_58 * 2 + 2;
    uVar4 = local_70._Ptr;
    if (0xfff < uVar5) {
      uVar4 = *(undefined8 *)(local_70._Ptr + -4);
      uVar5 = local_58 * 2 + 0x29;
      if ((char *)0x1f < (char *)((longlong)local_70._Ptr + (-8 - uVar4))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar4,uVar5);
  }
  return __return_storage_ptr__;
}

// HeartBeatNamedSharedMemory @ 146cdc6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
primitiveNames::HeartBeatNamedSharedMemory
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1,
          StrongTypedef<unsigned_long,0> param_2)

{
  ulong64 uVar1;
  ulonglong uVar2;
  _Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1> *p_Var3
  ;
  undefined8 uVar4;
  ulonglong uVar5;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar6;
  wchar_t *pwVar7;
  undefined1 auStackY_a8 [32];
  <lambda_1> local_78 [8];
  _Bxty local_70;
  ulong64 local_60;
  ulonglong local_58;
  wchar_t local_28 [4];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 7;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::reserve
            (__return_storage_ptr__,0x80);
  p_Var3 = &param_1->_Mypair;
  if (7 < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
            (__return_storage_ptr__,(wchar_t *)param_1,(p_Var3->_Myval2)._Mysize);
  uVar5 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
  uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
  if (uVar5 - uVar1 < 0xd) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
              (__return_storage_ptr__,0xd,local_78[0],L"_UE_LC_NSM_HB",0xd);
  }
  else {
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar1 + 0xd;
    pbVar6 = __return_storage_ptr__;
    if (7 < uVar5) {
      pbVar6 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    memmove((void *)((longlong)&(pbVar6->_Mypair)._Myval2._Bx + uVar1 * 2),L"_UE_LC_NSM_HB",0x1a);
    *(undefined2 *)((longlong)&(pbVar6->_Mypair)._Myval2._Myres + uVar1 * 2 + 2) = 0;
  }
  pwVar7 = local_28 + 1;
  uVar5 = (ulonglong)param_2.m_value;
  do {
    pwVar7 = pwVar7 + -1;
    uVar2 = uVar5 / 10;
    *pwVar7 = (short)uVar5 + (short)uVar2 * -10 + L'0';
    uVar5 = uVar2;
  } while ((int)uVar2 != 0);
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_><wchar_t_*,0>
            ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)&local_70,
             pwVar7,local_28 + 1,(allocator<wchar_t> *)local_78);
  uVar4 = &local_70;
  if (7 < local_58) {
    uVar4 = local_70._Ptr;
  }
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
            (__return_storage_ptr__,(wchar_t *)uVar4,local_60);
  if (7 < local_58) {
    uVar5 = local_58 * 2 + 2;
    uVar4 = local_70._Ptr;
    if (0xfff < uVar5) {
      uVar4 = *(undefined8 *)(local_70._Ptr + -4);
      uVar5 = local_58 * 2 + 0x29;
      if ((char *)0x1f < (char *)((longlong)local_70._Ptr + (-8 - uVar4))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar4,uVar5);
  }
  return __return_storage_ptr__;
}

// IncrementConsistent @ 146cdc930

void __cdecl Atomic::IncrementConsistent(int *param_1)

{
  LOCK();
  *param_1 = *param_1 + 1;
  UNLOCK();
  return;
}

// IncrementIndentation @ 146cdc950

void __cdecl Logging::IncrementIndentation(Enum param_1)

{
  LOCK();
  g_indentationLevel[(int)param_1] = g_indentationLevel[(int)param_1] + 1;
  UNLOCK();
  return;
}

// InstallExceptionHandler @ 146cdc9a0

void __thiscall ClientStartupThread::InstallExceptionHandler(ClientStartupThread *this)

{
  HANDLE hHandle;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  return;
}

// InstallExceptionHandler @ 146cdc9e0

void __thiscall ClientUserCommandThread::InstallExceptionHandler(ClientUserCommandThread *this)

{
  return;
}

// IsActive @ 146cdc9f0

bool __cdecl Process::IsActive(StrongTypedef<void_*,0> param_1)

{
  BOOL BVar1;
  DWORD local_res10 [6];
  
  local_res10[0] = 0;
  BVar1 = GetExitCodeProcess(param_1.m_value,local_res10);
  if (BVar1 != 0) {
    return local_res10[0] == 0x103;
  }
  return false;
}

// IsConnected @ 146cdca40

bool __cdecl Debugger::IsConnected(void)

{
  BOOL BVar1;
  
  BVar1 = IsDebuggerPresent();
  return BVar1 != 0;
}

// IsValid @ 146cdcfa0

bool __thiscall DuplexPipe::IsValid(DuplexPipe *this)

{
  return this->m_pipe != (void *)0xffffffffffffffff;
}

// IsValidHeader @ 146cdcfc0

bool __cdecl executable::IsValidHeader(Header *param_1)

{
  return (param_1->imageHeader).NumberOfSections != 0;
}

// IsWoW64 @ 146cdcfd0

bool __cdecl Process::IsWoW64(StrongTypedef<void_*,0> param_1)

{
  long lVar1;
  longlong local_res8 [4];
  
  local_res8[0] = 0;
  lVar1 = (*WindowsInternals::NtQueryInformationProcess.m_function)
                    (param_1.m_value,ProcessWow64Information,local_res8,8,(ulong *)0x0);
  if (lVar1 < 0) {
    Logging::Log(USER,LOG_ERROR,"%sCall to function %s in module %s failed. Error: 0x%X\n");
  }
  return local_res8[0] != 0;
}

// JobGroup @ 146cdd070

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
primitiveNames::JobGroup
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1)

{
  ulonglong uVar1;
  ulong64 uVar2;
  _Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1> *p_Var3
  ;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar4;
  <lambda_1> local_res8;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 7;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::reserve
            (__return_storage_ptr__,0x80);
  p_Var3 = &param_1->_Mypair;
  if (7 < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
            (__return_storage_ptr__,(wchar_t *)param_1,(p_Var3->_Myval2)._Mysize);
  uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
  uVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
  if (9 < uVar1 - uVar2) {
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar2 + 10;
    pbVar4 = __return_storage_ptr__;
    if (7 < uVar1) {
      pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    memmove((void *)((longlong)&(pbVar4->_Mypair)._Myval2._Bx + uVar2 * 2),L"_UE_LC_JOB",0x14);
    *(undefined2 *)((longlong)&(pbVar4->_Mypair)._Myval2._Mysize + uVar2 * 2 + 4) = 0;
    return __return_storage_ptr__;
  }
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
            (__return_storage_ptr__,10,local_res8,L"_UE_LC_JOB",10);
  return __return_storage_ptr__;
}

// Join @ 146cdd160

void __thiscall ClientCommandThread::Join(ClientCommandThread *this)

{
  HANDLE hHandle;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  return;
}

// Join @ 146cdd1a0

void __thiscall ClientStartupThread::Join(ClientStartupThread *this)

{
  HANDLE hHandle;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  return;
}

// Join @ 146cdd1e0

void __thiscall ClientUserCommandThread::Join(ClientUserCommandThread *this)

{
  HANDLE hHandle;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  return;
}

// Join @ 146cdd220

void __cdecl Thread::Join(StrongTypedef<void_*,0> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146cdd225. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WaitForSingleObject(param_1.m_value,0xffffffff);
  return;
}

// Leave @ 146cdd240

void __stdcall CriticalSection::Leave(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x000146cdd240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// Leave @ 146cdd250

void __cdecl syncPoint::Leave(void)

{
  if (g_isSyncPointUsed) {
                    /* WARNING: Could not recover jumptable at 0x000146cdd26a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSemaphore(g_leaveUserSyncPoint.m_sema,1,(LPLONG)0x0);
    return;
  }
  return;
}

// LiveCodingBeginPatch @ 146cdd280

void __cdecl LiveCodingBeginPatch(void)

{
  GHasLoadedPatch = true;
  FLiveCodingModule::BeginReload();
  return;
}

// LiveCodingEndCompile @ 146cdd2a0

void __cdecl LiveCodingEndCompile(void)

{
  GIsCompileActive = false;
  return;
}

// LiveCodingPostCompile @ 146cdd2b0

void __cdecl LiveCodingPostCompile(PostCompileResult param_1)

{
  GPostCompileResult = param_1;
  GIsCompileActive = false;
  return;
}

// LiveCodingPreCompile @ 146cdd2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LiveCodingPreCompile(void)

{
  if (3 < (byte)LogLiveCoding._0_1_) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogLiveCoding);
  }
  GIsCompileActive = true;
  if (GLiveCodingModule != (FLiveCodingModule *)0x0) {
    FLiveCodingModule::BeginReload();
    return;
  }
  return;
}

// LiveCodingTriggerReload @ 146cdd320

void __cdecl LiveCodingTriggerReload(void)

{
  GTriggerReload = true;
  return;
}

// Lock @ 146cdd330

void __thiscall InterprocessMutex::Lock(InterprocessMutex *this)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject(this->m_mutex,0xffffffff);
  if (((DVar1 == 0x80) || (DVar1 == 0x102)) || (DVar1 == 0xffffffff)) {
    Logging::Log(DEV,LOG_ERROR,"ERROR: %s%s\n");
  }
  return;
}

// Log @ 146cdd410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl Logging::Log(Enum param_1,Enum param_2,char *param_3)

{
  _func___cdecl_void_Enum_Enum_wchar_t_ptr *p_Var1;
  ulong64 *puVar2;
  size_t sVar3;
  char *_Str;
  undefined1 local_res20 [8];
  undefined1 auStack_198 [32];
  char *local_178;
  undefined8 local_170;
  undefined1 *local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  if (((param_2 != LOG_INFO) || (param_1 == USER)) || (ChannelEnabled[(int)param_1] != false)) {
    _Str = (char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xf00);
    puVar2 = __local_stdio_printf_options();
    local_170 = 0;
    local_178 = param_3;
    local_168 = local_res20;
    __stdio_common_vsnprintf_s(*puVar2,_Str,0x8000,0xffffffffffffffff);
    p_Var1 = OutputHandler;
    local_158._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_158.Ptr = (wchar_t *)0x0;
      local_158.StringLength = 0;
    }
    else {
      sVar3 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,_Str,(int)sVar3,Yes);
    }
    (*p_Var1)(param_1,param_2,local_158.Ptr);
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  return;
}

// LogMessage @ 146cdd560

void __thiscall ClientStartupThread::LogMessage(ClientStartupThread *this,wchar_t *param_1)

{
  ulong64 _Size;
  HANDLE hHandle;
  ClientUserCommandThread *this_00;
  size_t sVar1;
  BaseCommand *pBVar2;
  void *pvVar3;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this_00 = this->m_userCommandThread;
  if (this_00 != (ClientUserCommandThread *)0x0) {
    sVar1 = wcslen(param_1);
    _Size = sVar1 * 2 + 2;
    pBVar2 = ::operator_new(0x30);
    if (pBVar2 == (BaseCommand *)0x0) {
      pBVar2 = (BaseCommand *)0x0;
    }
    else {
      pBVar2->m_expectResponse = false;
      pBVar2->_padding_ = (longlong)&ProxyCommand<commands::LogMessage>::_vftable_;
      pvVar3 = operator_new__(_Size);
      *(void **)&pBVar2[1].m_expectResponse = pvVar3;
      pBVar2[2]._padding_ = _Size;
      *(undefined8 *)&pBVar2[2].m_expectResponse = 0;
    }
    memcpy((void *)(*(longlong *)&pBVar2[2].m_expectResponse +
                   *(longlong *)&pBVar2[1].m_expectResponse),param_1,_Size);
    *(ulong64 *)&pBVar2[2].m_expectResponse = *(longlong *)&pBVar2[2].m_expectResponse + _Size;
    ClientUserCommandThread::PushUserCommand(this_00,pBVar2);
  }
  return;
}

// LogMessage @ 146cdd640

void __thiscall ClientUserCommandThread::LogMessage(ClientUserCommandThread *this,wchar_t *param_1)

{
  ulong64 _Size;
  size_t sVar1;
  BaseCommand *pBVar2;
  void *pvVar3;
  
  sVar1 = wcslen(param_1);
  _Size = sVar1 * 2 + 2;
  pBVar2 = ::operator_new(0x30);
  if (pBVar2 == (BaseCommand *)0x0) {
    pBVar2 = (BaseCommand *)0x0;
  }
  else {
    pBVar2->m_expectResponse = false;
    pBVar2->_padding_ = (longlong)&ProxyCommand<commands::LogMessage>::_vftable_;
    pvVar3 = operator_new__(_Size);
    *(void **)&pBVar2[1].m_expectResponse = pvVar3;
    pBVar2[2]._padding_ = _Size;
    *(undefined8 *)&pBVar2[2].m_expectResponse = 0;
  }
  memcpy((void *)(*(longlong *)&pBVar2[2].m_expectResponse +
                 *(longlong *)&pBVar2[1].m_expectResponse),param_1,_Size);
  *(ulong64 *)&pBVar2[2].m_expectResponse = *(longlong *)&pBVar2[2].m_expectResponse + _Size;
  PushUserCommand(this,pBVar2);
  return;
}

// LppApplySettingBool @ 146cdd6f0

void __cdecl LppApplySettingBool(char *param_1,int param_2)

{
  HANDLE hHandle;
  ClientUserCommandThread *this;
  ClientStartupThread *pCVar1;
  BaseCommand *pBVar2;
  void *pvVar3;
  
  pCVar1 = g_startupThread;
  if (g_startupThread == (ClientStartupThread *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
    return;
  }
  hHandle = (g_startupThread->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((pCVar1->m_thread).m_value);
    (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this = pCVar1->m_userCommandThread;
  if (this != (ClientUserCommandThread *)0x0) {
    pBVar2 = operator_new(0x130);
    if (pBVar2 == (BaseCommand *)0x0) {
      pBVar2 = (BaseCommand *)0x0;
    }
    else {
      pBVar2->m_expectResponse = false;
      pBVar2->_padding_ = (longlong)&ProxyCommand<commands::ApplySettingBool>::_vftable_;
      memset(pBVar2 + 1,0,0x104);
      pvVar3 = operator_new__(0);
      *(void **)&pBVar2[0x11].m_expectResponse = pvVar3;
      pBVar2[0x12]._padding_ = 0;
      *(undefined8 *)&pBVar2[0x12].m_expectResponse = 0;
    }
    strcpy_s((char *)(pBVar2 + 1),0x100,param_1);
    *(int *)&pBVar2[0x11]._padding_ = param_2;
    ClientUserCommandThread::PushUserCommand(this,pBVar2);
  }
  return;
}

// LppApplySettingInt @ 146cdd840

void __cdecl LppApplySettingInt(char *param_1,int param_2)

{
  HANDLE hHandle;
  ClientUserCommandThread *this;
  ClientStartupThread *pCVar1;
  BaseCommand *pBVar2;
  void *pvVar3;
  
  pCVar1 = g_startupThread;
  if (g_startupThread == (ClientStartupThread *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
    return;
  }
  hHandle = (g_startupThread->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((pCVar1->m_thread).m_value);
    (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this = pCVar1->m_userCommandThread;
  if (this != (ClientUserCommandThread *)0x0) {
    pBVar2 = operator_new(0x130);
    if (pBVar2 == (BaseCommand *)0x0) {
      pBVar2 = (BaseCommand *)0x0;
    }
    else {
      pBVar2->m_expectResponse = false;
      pBVar2->_padding_ = (longlong)&ProxyCommand<commands::ApplySettingInt>::_vftable_;
      memset(pBVar2 + 1,0,0x104);
      pvVar3 = operator_new__(0);
      *(void **)&pBVar2[0x11].m_expectResponse = pvVar3;
      pBVar2[0x12]._padding_ = 0;
      *(undefined8 *)&pBVar2[0x12].m_expectResponse = 0;
    }
    strcpy_s((char *)(pBVar2 + 1),0x100,param_1);
    *(int *)&pBVar2[0x11]._padding_ = param_2;
    ClientUserCommandThread::PushUserCommand(this,pBVar2);
  }
  return;
}

// LppApplySettingString @ 146cdd990

void __cdecl LppApplySettingString(char *param_1,wchar_t *param_2)

{
  HANDLE hHandle;
  ClientUserCommandThread *this;
  ClientStartupThread *pCVar1;
  BaseCommand *pBVar2;
  void *pvVar3;
  
  pCVar1 = g_startupThread;
  if (g_startupThread == (ClientStartupThread *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
    return;
  }
  hHandle = (g_startupThread->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((pCVar1->m_thread).m_value);
    (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this = pCVar1->m_userCommandThread;
  if (this != (ClientUserCommandThread *)0x0) {
    pBVar2 = operator_new(0x328);
    if (pBVar2 == (BaseCommand *)0x0) {
      pBVar2 = (BaseCommand *)0x0;
    }
    else {
      pBVar2->m_expectResponse = false;
      pBVar2->_padding_ = (longlong)&ProxyCommand<commands::ApplySettingString>::_vftable_;
      memset(pBVar2 + 1,0,0x300);
      pvVar3 = operator_new__(0);
      pBVar2[0x31]._padding_ = (longlong)pvVar3;
      *(undefined8 *)&pBVar2[0x31].m_expectResponse = 0;
      pBVar2[0x32]._padding_ = 0;
    }
    strcpy_s((char *)(pBVar2 + 1),0x100,param_1);
    wcscpy_s((wchar_t *)(pBVar2 + 0x11),0x100,param_2);
    ClientUserCommandThread::PushUserCommand(this,pBVar2);
  }
  return;
}

// LppBuildPatch @ 146cddaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LppBuildPatch(wchar_t **param_1,wchar_t **param_2,wchar_t **param_3,uint param_4)

{
  HANDLE hHandle;
  ClientUserCommandThread *this;
  wchar_t *_Src;
  ClientStartupThread *pCVar1;
  BaseCommand *pBVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_6a8 [32];
  char *local_688;
  wchar_t local_678 [260];
  wchar_t local_470 [260];
  wchar_t local_268 [264];
  ulonglong local_58;
  
  pCVar1 = g_startupThread;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_6a8;
  uVar5 = (ulonglong)param_4;
  if (g_startupThread == (ClientStartupThread *)0x0) {
    local_688 = "Live++ was not started properly. Call lppStartup() first.";
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
  }
  else {
    hHandle = (g_startupThread->m_thread).m_value;
    if (hHandle != Thread::INVALID_HANDLE.m_value) {
      WaitForSingleObject(hHandle,0xffffffff);
      CloseHandle((pCVar1->m_thread).m_value);
      (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
    }
    this = pCVar1->m_userCommandThread;
    if (this != (ClientUserCommandThread *)0x0) {
      pBVar2 = operator_new(0x30);
      if (pBVar2 == (BaseCommand *)0x0) {
        pBVar2 = (BaseCommand *)0x0;
      }
      else {
        pBVar2->m_expectResponse = false;
        pBVar2->_padding_ = (longlong)&ProxyCommand<commands::BuildPatch>::_vftable_;
        *(undefined4 *)&pBVar2[1]._padding_ = 0;
        pvVar3 = operator_new__(uVar5 * 0x618);
        *(void **)&pBVar2[1].m_expectResponse = pvVar3;
        pBVar2[2]._padding_ = uVar5 * 0x618;
        *(undefined8 *)&pBVar2[2].m_expectResponse = 0;
      }
      *(uint *)&pBVar2[1]._padding_ = param_4;
      if (param_4 != 0) {
        lVar6 = (longlong)param_1 - (longlong)param_2;
        lVar4 = (longlong)param_3 - (longlong)param_2;
        do {
          memset(local_678,0,0x618);
          wcscpy_s(local_678,0x104,*(wchar_t **)((longlong)param_2 + lVar6));
          wcscpy_s(local_470,0x104,*param_2);
          if ((param_3 != (wchar_t **)0x0) &&
             (_Src = *(wchar_t **)((longlong)param_2 + lVar4), _Src != (wchar_t *)0x0)) {
            wcscpy_s(local_268,0x104,_Src);
          }
          memcpy((void *)(*(longlong *)&pBVar2[2].m_expectResponse +
                         *(longlong *)&pBVar2[1].m_expectResponse),local_678,0x618);
          *(longlong *)&pBVar2[2].m_expectResponse =
               *(longlong *)&pBVar2[2].m_expectResponse + 0x618;
          param_2 = param_2 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      ClientUserCommandThread::PushUserCommand(this,pBVar2);
    }
  }
  return;
}

// LppCheckVersion @ 146cddd00

int __cdecl LppCheckVersion(char *param_1)

{
  int iVar1;
  
  iVar1 = strcmp(param_1,"1.6.10");
  if (iVar1 == 0) {
    return 1;
  }
  Logging::Log(USER,LOG_ERROR,"%sVersion mismatch detected. API version: %s, DLL version: %s\n");
  return 0;
}

// LppDisableAllModules @ 146cddd90

void * __cdecl LppDisableAllModules(wchar_t *param_1)

{
  HANDLE hHandle;
  ClientStartupThread *pCVar1;
  void *pvVar2;
  
  pCVar1 = g_startupThread;
  if (g_startupThread == (ClientStartupThread *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
  }
  else {
    hHandle = (g_startupThread->m_thread).m_value;
    if (hHandle != Thread::INVALID_HANDLE.m_value) {
      WaitForSingleObject(hHandle,0xffffffff);
      CloseHandle((pCVar1->m_thread).m_value);
      (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
    }
    if (pCVar1->m_userCommandThread != (ClientUserCommandThread *)0x0) {
      pvVar2 = ClientUserCommandThread::DisableAllModules(pCVar1->m_userCommandThread,param_1);
      return pvVar2;
    }
  }
  return (void *)0x0;
}

// LppDisableCompileFinishNotification @ 146cdde50

void __cdecl LppDisableCompileFinishNotification(void)

{
  HANDLE hHandle;
  ClientUserCommandThread *this;
  ClientStartupThread *pCVar1;
  DWORD DVar2;
  BaseCommand *pBVar3;
  void *pvVar4;
  
  pCVar1 = g_startupThread;
  hHandle = (g_startupThread->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((pCVar1->m_thread).m_value);
    (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this = pCVar1->m_userCommandThread;
  if (this != (ClientUserCommandThread *)0x0) {
    pBVar3 = operator_new(0x30);
    if (pBVar3 == (BaseCommand *)0x0) {
      pBVar3 = (BaseCommand *)0x0;
    }
    else {
      pBVar3->m_expectResponse = false;
      pBVar3->_padding_ =
           (longlong)&ProxyCommand<commands::DisableCompileFinishNotification>::_vftable_;
      *(undefined4 *)&pBVar3[1]._padding_ = 0;
      pvVar4 = operator_new__(0);
      *(void **)&pBVar3[1].m_expectResponse = pvVar4;
      pBVar3[2]._padding_ = 0;
      *(undefined8 *)&pBVar3[2].m_expectResponse = 0;
    }
    DVar2 = GetCurrentProcessId();
    *(DWORD *)&pBVar3[1]._padding_ = DVar2;
    ClientUserCommandThread::PushUserCommand(this,pBVar3);
  }
  return;
}

// LppDisableModule @ 146cddf00

void * __cdecl LppDisableModule(wchar_t *param_1)

{
  HANDLE hHandle;
  ClientStartupThread *pCVar1;
  void *pvVar2;
  wchar_t *local_res10 [3];
  
  pCVar1 = g_startupThread;
  if (g_startupThread == (ClientStartupThread *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
  }
  else {
    hHandle = (g_startupThread->m_thread).m_value;
    if (hHandle != Thread::INVALID_HANDLE.m_value) {
      WaitForSingleObject(hHandle,0xffffffff);
      CloseHandle((pCVar1->m_thread).m_value);
      (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
    }
    if (pCVar1->m_userCommandThread != (ClientUserCommandThread *)0x0) {
      local_res10[0] = param_1;
      pvVar2 = ClientUserCommandThread::DisableModules(pCVar1->m_userCommandThread,local_res10,1);
      return pvVar2;
    }
  }
  return (void *)0x0;
}

// LppDisableModules @ 146cddfd0

void * __cdecl LppDisableModules(wchar_t **param_1,uint param_2)

{
  HANDLE hHandle;
  ClientStartupThread *pCVar1;
  void *pvVar2;
  
  pCVar1 = g_startupThread;
  if (g_startupThread == (ClientStartupThread *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
  }
  else {
    hHandle = (g_startupThread->m_thread).m_value;
    if (hHandle != Thread::INVALID_HANDLE.m_value) {
      WaitForSingleObject(hHandle,0xffffffff);
      CloseHandle((pCVar1->m_thread).m_value);
      (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
    }
    if (pCVar1->m_userCommandThread != (ClientUserCommandThread *)0x0) {
      pvVar2 = ClientUserCommandThread::DisableModules(pCVar1->m_userCommandThread,param_1,param_2);
      return pvVar2;
    }
  }
  return (void *)0x0;
}

// LppEnableAllModules @ 146cde0a0

void * __cdecl LppEnableAllModules(wchar_t *param_1)

{
  HANDLE hHandle;
  ClientStartupThread *pCVar1;
  void *pvVar2;
  
  pCVar1 = g_startupThread;
  if (g_startupThread == (ClientStartupThread *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
  }
  else {
    hHandle = (g_startupThread->m_thread).m_value;
    if (hHandle != Thread::INVALID_HANDLE.m_value) {
      WaitForSingleObject(hHandle,0xffffffff);
      CloseHandle((pCVar1->m_thread).m_value);
      (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
    }
    if (pCVar1->m_userCommandThread != (ClientUserCommandThread *)0x0) {
      pvVar2 = ClientUserCommandThread::EnableAllModules(pCVar1->m_userCommandThread,param_1);
      return pvVar2;
    }
  }
  return (void *)0x0;
}

// LppEnableLazyLoadedModule @ 146cde160

void * __cdecl LppEnableLazyLoadedModule(wchar_t *param_1)

{
  ClientUserCommandThread *this;
  ClientStartupThread *pCVar1;
  DWORD DVar2;
  HMODULE pHVar3;
  BaseCommand *pBVar4;
  void *pvVar5;
  longlong *plVar6;
  HANDLE pvVar7;
  
  pHVar3 = GetModuleHandleW(param_1);
  pCVar1 = g_startupThread;
  pvVar7 = (g_startupThread->m_thread).m_value;
  if (pvVar7 != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(pvVar7,0xffffffff);
    CloseHandle((pCVar1->m_thread).m_value);
    (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this = pCVar1->m_userCommandThread;
  if (this == (ClientUserCommandThread *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    pBVar4 = operator_new(0x248);
    if (pBVar4 == (BaseCommand *)0x0) {
      pBVar4 = (BaseCommand *)0x0;
    }
    else {
      pBVar4->m_expectResponse = true;
      pBVar4->_padding_ = (longlong)&ProxyCommand<commands::EnableLazyLoadedModule>::_vftable_;
      memset((void *)((longlong)&pBVar4[1]._padding_ + 4),0,0x21c);
      *(undefined4 *)&pBVar4[1]._padding_ = 0;
      pvVar5 = operator_new__(0);
      pBVar4[0x23]._padding_ = (longlong)pvVar5;
      *(undefined8 *)&pBVar4[0x23].m_expectResponse = 0;
      pBVar4[0x24]._padding_ = 0;
    }
    DVar2 = GetCurrentProcessId();
    *(DWORD *)&pBVar4[1]._padding_ = DVar2;
    wcscpy_s((wchar_t *)((longlong)&pBVar4[1]._padding_ + 4),0x104,param_1);
    pBVar4[0x22]._padding_ = (longlong)pHVar3;
    plVar6 = operator_new(8);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      pvVar7 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      *plVar6 = (longlong)pvVar7;
      GetLastError();
      if (*plVar6 == 0) {
        Logging::Log(USER,LOG_ERROR,"%sCannot create event %S. Error: 0x%X\n");
      }
    }
    *(longlong **)&pBVar4[0x22].m_expectResponse = plVar6;
    ClientUserCommandThread::PushUserCommand(this,pBVar4);
    pvVar5 = *(void **)&pBVar4[0x22].m_expectResponse;
  }
  return pvVar5;
}

// LppEnableModule @ 146cde300

void * __cdecl LppEnableModule(wchar_t *param_1)

{
  HANDLE hHandle;
  ClientStartupThread *pCVar1;
  void *pvVar2;
  wchar_t *local_res10 [3];
  
  pCVar1 = g_startupThread;
  if (g_startupThread == (ClientStartupThread *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
  }
  else {
    hHandle = (g_startupThread->m_thread).m_value;
    if (hHandle != Thread::INVALID_HANDLE.m_value) {
      WaitForSingleObject(hHandle,0xffffffff);
      CloseHandle((pCVar1->m_thread).m_value);
      (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
    }
    if (pCVar1->m_userCommandThread != (ClientUserCommandThread *)0x0) {
      local_res10[0] = param_1;
      pvVar2 = ClientUserCommandThread::EnableModules(pCVar1->m_userCommandThread,local_res10,1);
      return pvVar2;
    }
  }
  return (void *)0x0;
}

// LppEnableModules @ 146cde3d0

void * __cdecl LppEnableModules(wchar_t **param_1,uint param_2)

{
  HANDLE hHandle;
  ClientStartupThread *pCVar1;
  void *pvVar2;
  
  pCVar1 = g_startupThread;
  if (g_startupThread == (ClientStartupThread *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
  }
  else {
    hHandle = (g_startupThread->m_thread).m_value;
    if (hHandle != Thread::INVALID_HANDLE.m_value) {
      WaitForSingleObject(hHandle,0xffffffff);
      CloseHandle((pCVar1->m_thread).m_value);
      (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
    }
    if (pCVar1->m_userCommandThread != (ClientUserCommandThread *)0x0) {
      pvVar2 = ClientUserCommandThread::EnableModules(pCVar1->m_userCommandThread,param_1,param_2);
      return pvVar2;
    }
  }
  return (void *)0x0;
}

// LppEnableModulesEx @ 146cde4a0

void * __cdecl
LppEnableModulesEx(wchar_t **param_1,uint param_2,wchar_t **param_3,uint param_4,ulong64 *param_5,
                  uint param_6)

{
  HANDLE hHandle;
  ClientStartupThread *pCVar1;
  void *pvVar2;
  
  pCVar1 = g_startupThread;
  if (g_startupThread == (ClientStartupThread *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
  }
  else {
    hHandle = (g_startupThread->m_thread).m_value;
    if (hHandle != Thread::INVALID_HANDLE.m_value) {
      WaitForSingleObject(hHandle,0xffffffff);
      CloseHandle((pCVar1->m_thread).m_value);
      (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
    }
    if (pCVar1->m_userCommandThread != (ClientUserCommandThread *)0x0) {
      pvVar2 = ClientUserCommandThread::EnableModulesEx
                         (pCVar1->m_userCommandThread,param_1,param_2,param_3,param_4,param_5,
                          param_6);
      return pvVar2;
    }
  }
  return (void *)0x0;
}

// LppGetVersion @ 146cde590

char * __cdecl LppGetVersion(void)

{
  return "1.6.10";
}

// LppInstallExceptionHandler @ 146cde5a0

void __cdecl LppInstallExceptionHandler(void)

{
  HANDLE hHandle;
  ClientStartupThread *pCVar1;
  
  pCVar1 = g_startupThread;
  if (g_startupThread == (ClientStartupThread *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
    return;
  }
  hHandle = (g_startupThread->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((pCVar1->m_thread).m_value);
    (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  return;
}

// LppLogMessage @ 146cde630

void __cdecl LppLogMessage(wchar_t *param_1)

{
  ulong64 _Size;
  HANDLE hHandle;
  ClientUserCommandThread *this;
  ClientStartupThread *pCVar1;
  size_t sVar2;
  BaseCommand *pBVar3;
  void *pvVar4;
  
  pCVar1 = g_startupThread;
  if (g_startupThread == (ClientStartupThread *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
    return;
  }
  hHandle = (g_startupThread->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((pCVar1->m_thread).m_value);
    (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this = pCVar1->m_userCommandThread;
  if (this != (ClientUserCommandThread *)0x0) {
    sVar2 = wcslen(param_1);
    _Size = sVar2 * 2 + 2;
    pBVar3 = operator_new(0x30);
    if (pBVar3 == (BaseCommand *)0x0) {
      pBVar3 = (BaseCommand *)0x0;
    }
    else {
      pBVar3->m_expectResponse = false;
      pBVar3->_padding_ = (longlong)&ProxyCommand<commands::LogMessage>::_vftable_;
      pvVar4 = operator_new__(_Size);
      *(void **)&pBVar3[1].m_expectResponse = pvVar4;
      pBVar3[2]._padding_ = _Size;
      *(undefined8 *)&pBVar3[2].m_expectResponse = 0;
    }
    memcpy((void *)(*(longlong *)&pBVar3[1].m_expectResponse +
                   *(longlong *)&pBVar3[2].m_expectResponse),param_1,_Size);
    *(ulong64 *)&pBVar3[2].m_expectResponse = *(longlong *)&pBVar3[2].m_expectResponse + _Size;
    ClientUserCommandThread::PushUserCommand(this,pBVar3);
  }
  return;
}

// LppRegisterProcessGroup @ 146cde760

void __cdecl LppRegisterProcessGroup(char *param_1)

{
  if (g_startupThread == (ClientStartupThread *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&g_ensureOneTimeStartup);
  if (firstTime == false) {
                    /* WARNING: Could not recover jumptable at 0x000146cde7dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&g_ensureOneTimeStartup);
    return;
  }
  firstTime = false;
  LeaveCriticalSection((LPCRITICAL_SECTION)&g_ensureOneTimeStartup);
  ClientStartupThread::Start(g_startupThread,param_1,g_runMode);
  return;
}

// LppRestart @ 146cde820

void __cdecl LppRestart(RestartBehaviour param_1,uint param_2)

{
  code *pcVar1;
  HANDLE hProcess;
  
  if (g_startupThread == (ClientStartupThread *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
    return;
  }
  SetEvent(g_restartPrepared->m_event);
  Event::WaitTimeout(g_executeRestart,0xffffffff);
  if (param_1 == LPP_RESTART_BEHAVIOR_REQUEST_EXIT) {
    FWindowsPlatformMisc::RequestExit(true,(wchar_t *)0x0);
  }
  else {
    if (param_1 == LPP_RESTART_BEHAVIOUR_DEFAULT_EXIT) {
                    /* WARNING: Subroutine does not return */
      ExitProcess(param_2);
    }
    if (param_1 == LPP_RESTART_BEHAVIOUR_EXIT_WITH_FLUSH) {
                    /* WARNING: Subroutine does not return */
      exit(param_2);
    }
    if (param_1 == LPP_RESTART_BEHAVIOUR_EXIT) {
      _Exit(param_2);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_1 == LPP_RESTART_BEHAVIOUR_INSTANT_TERMINATION) {
      hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000146cde8d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      TerminateProcess(hProcess,param_2);
      return;
    }
  }
  return;
}

// LppSetActive @ 146cde910

void __cdecl LppSetActive(bool param_1)

{
  HANDLE hHandle;
  ClientUserCommandThread *this;
  ClientStartupThread *pCVar1;
  BaseCommand *pBVar2;
  void *pvVar3;
  
  pCVar1 = g_startupThread;
  hHandle = (g_startupThread->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((pCVar1->m_thread).m_value);
    (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this = pCVar1->m_userCommandThread;
  if (this != (ClientUserCommandThread *)0x0) {
    pBVar2 = operator_new(0x30);
    if (pBVar2 == (BaseCommand *)0x0) {
      pBVar2 = (BaseCommand *)0x0;
    }
    else {
      pBVar2->m_expectResponse = false;
      pBVar2->_padding_ = (longlong)&ProxyCommand<commands::SetActive>::_vftable_;
      *(undefined1 *)&pBVar2[1]._padding_ = 0;
      pvVar3 = operator_new__(0);
      *(void **)&pBVar2[1].m_expectResponse = pvVar3;
      pBVar2[2]._padding_ = 0;
      *(undefined8 *)&pBVar2[2].m_expectResponse = 0;
    }
    *(bool *)&pBVar2[1]._padding_ = param_1;
    ClientUserCommandThread::PushUserCommand(this,pBVar2);
  }
  return;
}

// LppSetBuildArguments @ 146cde9d0

void __cdecl LppSetBuildArguments(wchar_t *param_1)

{
  HANDLE hHandle;
  ClientUserCommandThread *this;
  ClientStartupThread *pCVar1;
  DWORD DVar2;
  BaseCommand *pBVar3;
  void *pvVar4;
  
  pCVar1 = g_startupThread;
  hHandle = (g_startupThread->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((pCVar1->m_thread).m_value);
    (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this = pCVar1->m_userCommandThread;
  if (this != (ClientUserCommandThread *)0x0) {
    pBVar3 = operator_new(0x830);
    if (pBVar3 == (BaseCommand *)0x0) {
      pBVar3 = (BaseCommand *)0x0;
    }
    else {
      pBVar3->m_expectResponse = false;
      pBVar3->_padding_ = (longlong)&ProxyCommand<commands::SetBuildArguments>::_vftable_;
      memset((void *)((longlong)&pBVar3[1]._padding_ + 4),0,0x800);
      *(undefined4 *)&pBVar3[1]._padding_ = 0;
      pvVar4 = operator_new__(0);
      *(void **)&pBVar3[0x81].m_expectResponse = pvVar4;
      pBVar3[0x82]._padding_ = 0;
      *(undefined8 *)&pBVar3[0x82].m_expectResponse = 0;
    }
    DVar2 = GetCurrentProcessId();
    *(DWORD *)&pBVar3[1]._padding_ = DVar2;
    wcscpy_s((wchar_t *)((longlong)&pBVar3[1]._padding_ + 4),0x400,param_1);
    ClientUserCommandThread::PushUserCommand(this,pBVar3);
  }
  return;
}

// LppSetReinstancingFlow @ 146cdeac0

void __cdecl LppSetReinstancingFlow(bool param_1)

{
  HANDLE hHandle;
  ClientUserCommandThread *this;
  ClientStartupThread *pCVar1;
  DWORD DVar2;
  BaseCommand *pBVar3;
  void *pvVar4;
  
  pCVar1 = g_startupThread;
  hHandle = (g_startupThread->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((pCVar1->m_thread).m_value);
    (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this = pCVar1->m_userCommandThread;
  if (this != (ClientUserCommandThread *)0x0) {
    pBVar3 = operator_new(0x30);
    if (pBVar3 == (BaseCommand *)0x0) {
      pBVar3 = (BaseCommand *)0x0;
    }
    else {
      pBVar3->m_expectResponse = false;
      pBVar3->_padding_ = (longlong)&ProxyCommand<commands::SetReinstancingFlow>::_vftable_;
      pBVar3[1]._padding_ = 0;
      pvVar4 = operator_new__(0);
      *(void **)&pBVar3[1].m_expectResponse = pvVar4;
      pBVar3[2]._padding_ = 0;
      *(undefined8 *)&pBVar3[2].m_expectResponse = 0;
    }
    DVar2 = GetCurrentProcessId();
    *(bool *)((longlong)&pBVar3[1]._padding_ + 4) = param_1;
    *(DWORD *)&pBVar3[1]._padding_ = DVar2;
    ClientUserCommandThread::PushUserCommand(this,pBVar3);
  }
  return;
}

// LppSetVisible @ 146cdeb80

void __cdecl LppSetVisible(bool param_1)

{
  HANDLE hHandle;
  ClientUserCommandThread *this;
  ClientStartupThread *pCVar1;
  BaseCommand *pBVar2;
  void *pvVar3;
  
  pCVar1 = g_startupThread;
  hHandle = (g_startupThread->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((pCVar1->m_thread).m_value);
    (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this = pCVar1->m_userCommandThread;
  if (this != (ClientUserCommandThread *)0x0) {
    pBVar2 = operator_new(0x30);
    if (pBVar2 == (BaseCommand *)0x0) {
      pBVar2 = (BaseCommand *)0x0;
    }
    else {
      pBVar2->m_expectResponse = false;
      pBVar2->_padding_ = (longlong)&ProxyCommand<commands::SetVisible>::_vftable_;
      *(undefined1 *)&pBVar2[1]._padding_ = 0;
      pvVar3 = operator_new__(0);
      *(void **)&pBVar2[1].m_expectResponse = pvVar3;
      pBVar2[2]._padding_ = 0;
      *(undefined8 *)&pBVar2[2].m_expectResponse = 0;
    }
    *(bool *)&pBVar2[1]._padding_ = param_1;
    ClientUserCommandThread::PushUserCommand(this,pBVar2);
  }
  return;
}

// LppShowConsole @ 146cdec40

void __cdecl LppShowConsole(void)

{
  HANDLE hHandle;
  ClientUserCommandThread *this;
  ClientStartupThread *pCVar1;
  BaseCommand *pBVar2;
  void *pvVar3;
  
  pCVar1 = g_startupThread;
  hHandle = (g_startupThread->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((pCVar1->m_thread).m_value);
    (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this = pCVar1->m_userCommandThread;
  if (this != (ClientUserCommandThread *)0x0) {
    pBVar2 = operator_new(0x30);
    if (pBVar2 == (BaseCommand *)0x0) {
      pBVar2 = (BaseCommand *)0x0;
    }
    else {
      pBVar2->m_expectResponse = false;
      pBVar2->_padding_ = (longlong)&ProxyCommand<commands::ShowConsole>::_vftable_;
      pvVar3 = operator_new__(0);
      *(void **)&pBVar2[1].m_expectResponse = pvVar3;
      pBVar2[2]._padding_ = 0;
      *(undefined8 *)&pBVar2[2].m_expectResponse = 0;
    }
    ClientUserCommandThread::PushUserCommand(this,pBVar2);
  }
  return;
}

// LppShutdown @ 146cdece0

void __cdecl LppShutdown(void)

{
  HANDLE hHandle;
  ClientStartupThread *pCVar1;
  Event *pEVar2;
  
  pEVar2 = g_requestRestart;
  if (g_requestRestart != (Event *)0x0) {
    CloseHandle(g_requestRestart->m_event);
    operator_delete(pEVar2,8);
  }
  pEVar2 = g_restartPrepared;
  g_requestRestart = (Event *)0x0;
  if (g_restartPrepared != (Event *)0x0) {
    CloseHandle(g_restartPrepared->m_event);
    operator_delete(pEVar2,8);
  }
  pEVar2 = g_executeRestart;
  g_restartPrepared = (Event *)0x0;
  if (g_executeRestart != (Event *)0x0) {
    CloseHandle(g_executeRestart->m_event);
    operator_delete(pEVar2,8);
  }
  pCVar1 = g_startupThread;
  g_executeRestart = (Event *)0x0;
  hHandle = (g_startupThread->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((pCVar1->m_thread).m_value);
    (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  pCVar1 = g_startupThread;
  if (g_startupThread != (ClientStartupThread *)0x0) {
    ClientStartupThread::~ClientStartupThread(g_startupThread);
    operator_delete(pCVar1,0x68);
  }
  g_startupThread = (ClientStartupThread *)0x0;
  return;
}

// LppStartup @ 146cdede0

void __cdecl LppStartup(void)

{
  deque<ClientUserCommandThread::BaseCommand_*,std::allocator<ClientUserCommandThread::BaseCommand_*>_>
  *pdVar1;
  DuplexPipeClient *pDVar2;
  DuplexPipeClient *pDVar3;
  ClientStartupThread *pCVar4;
  ClientCommandThread *pCVar5;
  ClientCommandThread *pCVar6;
  ClientCommandThread *pCVar7;
  ClientUserCommandThread *pCVar8;
  longlong *plVar9;
  HANDLE pvVar10;
  
  pCVar4 = operator_new(0x68);
  pCVar7 = (ClientCommandThread *)0x0;
  if (pCVar4 == (ClientStartupThread *)0x0) {
    pCVar4 = (ClientStartupThread *)0x0;
  }
  else {
    (pCVar4->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
    (pCVar4->m_processHandle).m_value = (void *)0x0;
    pCVar4->m_pipeClient = (DuplexPipeClient *)0x0;
    pCVar4->m_exceptionPipeClient = (DuplexPipeClient *)0x0;
    pCVar4->m_commandThread = (ClientCommandThread *)0x0;
    pCVar4->m_userCommandThread = (ClientUserCommandThread *)0x0;
    pCVar4->m_job = (void *)0x0;
    pCVar4->m_sharedMemory = (NamedSharedMemory *)0x0;
    pCVar4->m_mainProcessContext = (Context *)0x0;
    pCVar4->m_successfulInit = false;
    pCVar4->m_pipeClientCS = (CriticalSection *)0x0;
    pCVar4->m_startEvent = (Event *)0x0;
    pCVar4->m_compilationEvent = (Event *)0x0;
    pCVar5 = operator_new(8);
    pCVar6 = pCVar7;
    if (pCVar5 != (ClientCommandThread *)0x0) {
      (pCVar5->m_thread).m_value = (void *)0xffffffffffffffff;
      pCVar6 = pCVar5;
    }
    pCVar4->m_pipeClient = (DuplexPipeClient *)pCVar6;
    pCVar5 = operator_new(8);
    pCVar6 = pCVar7;
    if (pCVar5 != (ClientCommandThread *)0x0) {
      (pCVar5->m_thread).m_value = (void *)0xffffffffffffffff;
      pCVar6 = pCVar5;
    }
    pCVar4->m_exceptionPipeClient = (DuplexPipeClient *)pCVar6;
    pCVar6 = operator_new(0x10);
    if (pCVar6 != (ClientCommandThread *)0x0) {
      pDVar2 = pCVar4->m_pipeClient;
      (pCVar6->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
      pCVar6->m_pipe = pDVar2;
      pCVar7 = pCVar6;
    }
    pCVar4->m_commandThread = pCVar7;
    pCVar8 = operator_new(0x90);
    if (pCVar8 == (ClientUserCommandThread *)0x0) {
      pCVar4->m_userCommandThread = (ClientUserCommandThread *)0x0;
    }
    else {
      pDVar2 = pCVar4->m_exceptionPipeClient;
      pDVar3 = pCVar4->m_pipeClient;
      (pCVar8->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
      (pCVar8->m_processGroupName)._Mypair._Myval2._Bx._Ptr = (wchar_t *)0x0;
      *(undefined8 *)((longlong)&(pCVar8->m_processGroupName)._Mypair._Myval2._Bx + 8) = 0;
      (pCVar8->m_processGroupName)._Mypair._Myval2._Mysize = 0;
      (pCVar8->m_processGroupName)._Mypair._Myval2._Myres = 7;
      (pCVar8->m_processGroupName)._Mypair._Myval2._Bx._Buf[0] = L'\0';
      pdVar1 = &pCVar8->m_userCommandQueue;
      pCVar8->m_pipe = pDVar3;
      pCVar8->m_exceptionPipe = pDVar2;
      (pdVar1->_Mypair)._Myval2._padding_ = 0;
      (pCVar8->m_userCommandQueue)._Mypair._Myval2._Map = (BaseCommand ***)0x0;
      (pCVar8->m_userCommandQueue)._Mypair._Myval2._Mapsize = 0;
      (pCVar8->m_userCommandQueue)._Mypair._Myval2._Myoff = 0;
      (pCVar8->m_userCommandQueue)._Mypair._Myval2._Mysize = 0;
      plVar9 = operator_new(0x10);
      plVar9[1] = 0;
      (pdVar1->_Mypair)._Myval2._padding_ = (longlong)plVar9;
      *plVar9 = (longlong)pdVar1;
      InitializeCriticalSection((LPCRITICAL_SECTION)&pCVar8->m_userCommandQueueCS);
      pvVar10 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,0,0xffff,(LPCWSTR)0x0);
      (pCVar8->m_userCommandQueueSema).m_sema = pvVar10;
      pCVar4->m_userCommandThread = pCVar8;
    }
  }
  g_startupThread = pCVar4;
  restart::Startup();
  return;
}

// LppSyncPoint @ 146cdef90

void __cdecl LppSyncPoint(void)

{
  bool bVar1;
  
  if (g_startupThread == (ClientStartupThread *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&g_syncPointCS);
  g_isSyncPointUsed = true;
  LeaveCriticalSection((LPCRITICAL_SECTION)&g_syncPointCS);
  bVar1 = Semaphore::WaitTimeout((Semaphore *)&g_dllSyncPoint,0);
  if (bVar1) {
    ReleaseSemaphore(g_enterUserSyncPoint.m_sema,1,(LPLONG)0x0);
    Semaphore::WaitTimeout((Semaphore *)&g_leaveUserSyncPoint,0xffffffff);
    return;
  }
  return;
}

// LppTriggerRecompile @ 146cdf050

void __cdecl LppTriggerRecompile(void)

{
  HANDLE hHandle;
  ClientUserCommandThread *this;
  ClientStartupThread *pCVar1;
  BaseCommand *pBVar2;
  void *pvVar3;
  
  pCVar1 = g_startupThread;
  if (g_startupThread == (ClientStartupThread *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
    return;
  }
  hHandle = (g_startupThread->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((pCVar1->m_thread).m_value);
    (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this = pCVar1->m_userCommandThread;
  if (this != (ClientUserCommandThread *)0x0) {
    pBVar2 = operator_new(0x30);
    if (pBVar2 == (BaseCommand *)0x0) {
      pBVar2 = (BaseCommand *)0x0;
    }
    else {
      pBVar2->m_expectResponse = false;
      pBVar2->_padding_ = (longlong)&ProxyCommand<commands::TriggerRecompile>::_vftable_;
      pvVar3 = operator_new__(0);
      *(void **)&pBVar2[1].m_expectResponse = pvVar3;
      pBVar2[2]._padding_ = 0;
      *(undefined8 *)&pBVar2[2].m_expectResponse = 0;
    }
    ClientUserCommandThread::PushUserCommand(this,pBVar2);
  }
  return;
}

// LppTriggerRestart @ 146cdf140

void __cdecl LppTriggerRestart(void)

{
  HANDLE hHandle;
  ClientUserCommandThread *this;
  ClientStartupThread *pCVar1;
  BaseCommand *pBVar2;
  void *pvVar3;
  
  pCVar1 = g_startupThread;
  if (g_startupThread == (ClientStartupThread *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
    return;
  }
  hHandle = (g_startupThread->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((pCVar1->m_thread).m_value);
    (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this = pCVar1->m_userCommandThread;
  if (this != (ClientUserCommandThread *)0x0) {
    pBVar2 = operator_new(0x30);
    if (pBVar2 == (BaseCommand *)0x0) {
      pBVar2 = (BaseCommand *)0x0;
    }
    else {
      pBVar2->m_expectResponse = false;
      pBVar2->_padding_ = (longlong)&ProxyCommand<commands::TriggerRestart>::_vftable_;
      pvVar3 = operator_new__(0);
      *(void **)&pBVar2[1].m_expectResponse = pvVar3;
      pBVar2[2]._padding_ = 0;
      *(undefined8 *)&pBVar2[2].m_expectResponse = 0;
    }
    ClientUserCommandThread::PushUserCommand(this,pBVar2);
  }
  return;
}

// LppTryWaitForToken @ 146cdf230

bool __cdecl LppTryWaitForToken(void *param_1)

{
  HANDLE hHandle;
  ClientStartupThread *pCVar1;
  bool bVar2;
  
  pCVar1 = g_startupThread;
  if (g_startupThread == (ClientStartupThread *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
    return false;
  }
  if (param_1 != (void *)0x0) {
    hHandle = (g_startupThread->m_thread).m_value;
    if (hHandle != Thread::INVALID_HANDLE.m_value) {
      WaitForSingleObject(hHandle,0xffffffff);
      CloseHandle((pCVar1->m_thread).m_value);
      (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
    }
    if (pCVar1->m_userCommandThread == (ClientUserCommandThread *)0x0) {
      return false;
    }
    if ((pCVar1->m_userCommandThread->m_thread).m_value == Thread::INVALID_HANDLE.m_value) {
      return false;
    }
    bVar2 = Event::WaitTimeout(param_1,0);
    if (!bVar2) {
      return false;
    }
    CloseHandle(*(HANDLE *)param_1);
    operator_delete(param_1,8);
  }
  return true;
}

// LppUseExternalBuildSystem @ 146cdf320

void __cdecl LppUseExternalBuildSystem(void)

{
  if (g_startupThread == (ClientStartupThread *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
    return;
  }
  g_runMode = EXTERNAL_BUILD_SYSTEM;
  return;
}

// LppWaitForToken @ 146cdf390

void __cdecl LppWaitForToken(void *param_1)

{
  HANDLE hHandle;
  ClientStartupThread *pCVar1;
  
  pCVar1 = g_startupThread;
  if (g_startupThread == (ClientStartupThread *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
    return;
  }
  if (param_1 != (void *)0x0) {
    hHandle = (g_startupThread->m_thread).m_value;
    if (hHandle != Thread::INVALID_HANDLE.m_value) {
      WaitForSingleObject(hHandle,0xffffffff);
      CloseHandle((pCVar1->m_thread).m_value);
      (pCVar1->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
    }
    if (pCVar1->m_userCommandThread != (ClientUserCommandThread *)0x0) {
      if ((pCVar1->m_userCommandThread->m_thread).m_value != Thread::INVALID_HANDLE.m_value) {
        Event::WaitTimeout(param_1,0xffffffff);
      }
      CloseHandle(*(HANDLE *)param_1);
      operator_delete(param_1,8);
    }
  }
  return;
}

// LppWantsRestart @ 146cdf480

int __cdecl LppWantsRestart(void)

{
  bool bVar1;
  
  if (g_startupThread == (ClientStartupThread *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
    return 0;
  }
  bVar1 = Event::WaitTimeout(g_requestRestart,0);
  return (int)bVar1;
}

// MakePagesExecutable @ 146cdf500

void __cdecl
Process::MakePagesExecutable(StrongTypedef<void_*,0> param_1,void *param_2,ulong64 param_3)

{
  uint uVar1;
  SIZE_T SVar2;
  LPCVOID lpAddress;
  DWORD flNewProtect;
  DWORD local_res10 [2];
  undefined8 local_48;
  PVOID pvStack_40;
  LPVOID local_38;
  SIZE_T SStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_48 = (PVOID)0x0;
    pvStack_40 = (PVOID)0x0;
    local_38 = (LPVOID)0x0;
    SStack_30 = 0;
    local_28._0_4_ = 0;
    local_28._4_4_ = 0;
    uStack_20._0_4_ = 0;
    uStack_20._4_2_ = 0;
    uStack_20._6_2_ = 0;
    GetSystemInfo((LPSYSTEM_INFO)&local_48);
    pageSize = local_48._4_4_;
    _Init_thread_footer(&::_TSS0);
  }
  uVar1 = pageSize;
  local_48 = (LPVOID)0x0;
  pvStack_40 = (PVOID)0x0;
  local_38 = (LPVOID)0x0;
  SStack_30 = 0;
  local_28._0_4_ = 0;
  local_28._4_4_ = 0;
  uStack_20._0_4_ = 0;
  uStack_20._4_2_ = 0;
  uStack_20._6_2_ = 0;
  SVar2 = VirtualQueryEx(param_1.m_value,param_2,(PMEMORY_BASIC_INFORMATION)&local_48,0x30);
  if (SVar2 != 0) {
    do {
      switch(local_28._4_4_ & 0xff) {
      case 1:
      case 2:
      case 4:
      case 8:
        flNewProtect = (local_28._4_4_ & 0xff) << 4 | local_28._4_4_ & 0xffffff00;
        break;
      default:
        flNewProtect = local_28._4_4_;
      }
      if (flNewProtect != local_28._4_4_) {
        local_res10[0] = 0;
        VirtualProtectEx(param_1.m_value,local_48,(ulonglong)uVar1,flNewProtect,local_res10);
      }
      lpAddress = (LPCVOID)((longlong)local_48 + (ulonglong)uVar1);
      if ((LPCVOID)(param_3 + (longlong)param_2) <= lpAddress) {
        return;
      }
      local_48 = (LPVOID)0x0;
      pvStack_40 = (PVOID)0x0;
      local_38 = (LPVOID)0x0;
      SStack_30 = 0;
      local_28._0_4_ = 0;
      local_28._4_4_ = 0;
      uStack_20._0_4_ = 0;
      uStack_20._4_2_ = 0;
      uStack_20._6_2_ = 0;
      SVar2 = VirtualQueryEx(param_1.m_value,lpAddress,(PMEMORY_BASIC_INFORMATION)&local_48,0x30);
    } while (SVar2 != 0);
  }
  return;
}

// MakeSafeName @ 146cdf730

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
string::MakeSafeName
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar4;
  
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
            (__return_storage_ptr__,param_1);
  uVar1 = (param_1->_Mypair)._Myval2._Mysize;
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = (param_1->_Mypair)._Myval2._Myres;
      pbVar4 = param_1;
      if (7 < uVar2) {
        pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 (param_1->_Mypair)._Myval2._Bx._Ptr;
      }
      if ((pbVar4->_Mypair)._Myval2._Bx._Buf[uVar3] == L'\\') {
LAB_146cdf862:
        pbVar4 = __return_storage_ptr__;
        if (7 < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
          pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
        }
        (pbVar4->_Mypair)._Myval2._Bx._Buf[uVar3] = L'_';
      }
      else {
        pbVar4 = param_1;
        if (7 < uVar2) {
          pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   (param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        if ((pbVar4->_Mypair)._Myval2._Bx._Buf[uVar3] == L'/') goto LAB_146cdf862;
        pbVar4 = param_1;
        if (7 < uVar2) {
          pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   (param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        if ((pbVar4->_Mypair)._Myval2._Bx._Buf[uVar3] == L'*') goto LAB_146cdf862;
        pbVar4 = param_1;
        if (7 < uVar2) {
          pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   (param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        if ((pbVar4->_Mypair)._Myval2._Bx._Buf[uVar3] == L'?') goto LAB_146cdf862;
        pbVar4 = param_1;
        if (7 < uVar2) {
          pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   (param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        if ((pbVar4->_Mypair)._Myval2._Bx._Buf[uVar3] == L'\"') goto LAB_146cdf862;
        pbVar4 = param_1;
        if (7 < uVar2) {
          pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   (param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        if ((pbVar4->_Mypair)._Myval2._Bx._Buf[uVar3] == L'<') goto LAB_146cdf862;
        pbVar4 = param_1;
        if (7 < uVar2) {
          pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   (param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        if ((pbVar4->_Mypair)._Myval2._Bx._Buf[uVar3] == L'>') goto LAB_146cdf862;
        pbVar4 = param_1;
        if (7 < uVar2) {
          pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   (param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        if ((pbVar4->_Mypair)._Myval2._Bx._Buf[uVar3] == L'|') goto LAB_146cdf862;
        pbVar4 = param_1;
        if (7 < uVar2) {
          pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   (param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        if ((pbVar4->_Mypair)._Myval2._Bx._Buf[uVar3] == L':') goto LAB_146cdf862;
        pbVar4 = param_1;
        if (7 < uVar2) {
          pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   (param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        if ((pbVar4->_Mypair)._Myval2._Bx._Buf[uVar3] == L';') goto LAB_146cdf862;
        pbVar4 = param_1;
        if (7 < uVar2) {
          pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   (param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        if ((pbVar4->_Mypair)._Myval2._Bx._Buf[uVar3] == L',') goto LAB_146cdf862;
        pbVar4 = param_1;
        if (7 < uVar2) {
          pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   (param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        if ((pbVar4->_Mypair)._Myval2._Bx._Buf[uVar3] == L'.') goto LAB_146cdf862;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return __return_storage_ptr__;
}

// MatchWildcard @ 146cdf8a0

bool __cdecl string::MatchWildcard(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  
  cVar2 = *param_2;
  while( true ) {
    if (cVar2 == '\0') {
      return *param_1 == '\0';
    }
    param_2 = param_2 + 1;
    if (cVar2 == '*') break;
    cVar3 = *param_1;
    param_1 = param_1 + 1;
    if (cVar2 != cVar3) {
      return false;
    }
    cVar2 = *param_2;
  }
  cVar2 = *param_2;
  while (cVar2 == '*') {
    pcVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    cVar2 = *pcVar1;
  }
  if (cVar2 != '\0') {
    cVar3 = *param_1;
    while( true ) {
      if (cVar3 == '\0') {
        return false;
      }
      param_1 = param_1 + 1;
      if ((cVar3 == cVar2) &&
         (bVar4 = detail::MatchesWildcardRecursive<char>(param_1,param_2 + 1), bVar4)) break;
      cVar3 = *param_1;
    }
  }
  return true;
}

// MatchWildcard @ 146cdf8b0

bool __cdecl string::MatchWildcard(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  bool bVar4;
  
  wVar2 = *param_2;
  while( true ) {
    if (wVar2 == L'\0') {
      return *param_1 == L'\0';
    }
    param_2 = param_2 + 1;
    if (wVar2 == L'*') break;
    wVar3 = *param_1;
    param_1 = param_1 + 1;
    if (wVar2 != wVar3) {
      return false;
    }
    wVar2 = *param_2;
  }
  wVar2 = *param_2;
  while (wVar2 == L'*') {
    pwVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    wVar2 = *pwVar1;
  }
  if (wVar2 != L'\0') {
    wVar3 = *param_1;
    while( true ) {
      if (wVar3 == L'\0') {
        return false;
      }
      param_1 = param_1 + 1;
      if ((wVar3 == wVar2) &&
         (bVar4 = detail::MatchesWildcardRecursive<wchar_t>(param_1,param_2 + 1), bVar4)) break;
      wVar3 = *param_1;
    }
  }
  return true;
}

// Matches @ 146cdf8c0

bool __cdecl string::Matches(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  ulonglong uVar4;
  
  cVar1 = *param_1;
  uVar4 = 0;
  cVar2 = *param_2;
  while ((cVar3 = cVar2, cVar1 != '\0' && (cVar3 = '\0', cVar2 != '\0'))) {
    if (cVar1 != cVar2) {
      return false;
    }
    uVar4 = (ulonglong)((int)uVar4 + 1);
    cVar1 = param_1[uVar4];
    cVar2 = param_2[uVar4];
  }
  return cVar1 == cVar3;
}

// Matches @ 146cdf900

bool __cdecl string::Matches(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  ulonglong uVar4;
  
  wVar1 = *param_1;
  uVar4 = 0;
  wVar2 = *param_2;
  while ((wVar3 = wVar2, wVar1 != L'\0' && (wVar3 = L'\0', wVar2 != L'\0'))) {
    if (wVar1 != wVar2) {
      return false;
    }
    uVar4 = (ulonglong)((int)uVar4 + 1);
    wVar1 = param_1[uVar4];
    wVar2 = param_2[uVar4];
  }
  return wVar1 == wVar3;
}

// Open @ 146cdfd80

StrongTypedef<void_*,0> __cdecl Process::Open(StrongTypedef<unsigned_long,0> param_1)

{
  HANDLE pvVar1;
  undefined4 in_register_0000000c;
  DWORD in_EDX;
  
  pvVar1 = OpenProcess(0x1fffff,0,in_EDX);
  *(undefined8 *)CONCAT44(in_register_0000000c,param_1.m_value) = pvVar1;
  return (StrongTypedef<void_*,0>)(undefined8 *)CONCAT44(in_register_0000000c,param_1.m_value);
}

// Open @ 146cdfdb0

StrongTypedef<void_*,0> __cdecl Thread::Open(StrongTypedef<unsigned_long,0> param_1)

{
  HANDLE pvVar1;
  undefined4 in_register_0000000c;
  DWORD in_EDX;
  
  pvVar1 = OpenThread(0x1fffff,0,in_EDX);
  *(undefined8 *)CONCAT44(in_register_0000000c,param_1.m_value) = pvVar1;
  return (StrongTypedef<void_*,0>)(undefined8 *)CONCAT44(in_register_0000000c,param_1.m_value);
}

// OpenImage @ 146cdfde0

MemoryMappedFile * __cdecl executable::OpenImage(wchar_t *param_1,Enum param_2)

{
  MemoryMappedFile *pMVar1;
  
  pMVar1 = Filesystem::OpenMemoryMappedFile(param_1,param_2,false);
  return pMVar1;
}

// OpenMemoryMappedFile @ 146cdfdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "OodleLZ_Decode_ThreadPhase": Some values do not have unique names */

MemoryMappedFile * __cdecl
Filesystem::OpenMemoryMappedFile(wchar_t *param_1,Enum param_2,bool param_3)

{
  char acVar1 [4];
  char acVar2 [4];
  wchar_t *lpFileName;
  HANDLE hFile;
  HANDLE hFileMappingObject;
  char (*lpBaseAddress) [4];
  HANDLE hFileMappingObject_00;
  char (*pacVar3) [4];
  MemoryMappedFile *pMVar4;
  MemoryMappedFile *pMVar5;
  SIZE_T SVar6;
  SIZE_T dwNumberOfBytesToMap;
  char *pcVar7;
  char (*pacVar8) [4];
  SIZE_T SVar9;
  undefined1 auStackY_2d8 [32];
  FixedSizeString<wchar_t,260> local_248;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  dwNumberOfBytesToMap = 0;
  local_248.m_length = 0;
  local_248.m_data[0] = L'\0';
  lpFileName = Devirtualize(param_1,&local_248);
  if (param_2 == READ) {
    SVar9 = 1;
LAB_146cdfe68:
    SVar6 = 0x80000000;
  }
  else {
    if (param_2 == READ_WRITE) {
      SVar9 = 3;
    }
    else {
      SVar9 = dwNumberOfBytesToMap;
      if (param_2 == READ) goto LAB_146cdfe68;
      SVar6 = dwNumberOfBytesToMap;
      if (param_2 != READ_WRITE) goto LAB_146cdfe6d;
    }
    SVar6 = 0xc0000000;
  }
LAB_146cdfe6d:
  hFile = CreateFileW(lpFileName,(DWORD)SVar6,(DWORD)SVar9,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                      (HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    GetLastError();
    Logging::Log(USER,LOG_ERROR,"%sCannot open file %S. Error: 0x%X\n");
    pMVar5 = (MemoryMappedFile *)0x0;
  }
  else {
    if (param_2 == READ) {
      SVar9 = 2;
    }
    else {
      SVar9 = dwNumberOfBytesToMap;
      if (param_2 == READ_WRITE) {
        SVar9 = 4;
      }
    }
    hFileMappingObject =
         CreateFileMappingW(hFile,(LPSECURITY_ATTRIBUTES)0x0,(DWORD)SVar9,0,0,(LPCWSTR)0x0);
    if (hFileMappingObject == (HANDLE)0x0) {
      GetLastError();
      Logging::Log(USER,LOG_ERROR,"%sCannot create mapped file %S. Error: 0x%X\n");
      CloseHandle(hFile);
      pMVar5 = (MemoryMappedFile *)0x0;
    }
    else {
      if (param_2 == READ) {
        SVar9 = 4;
      }
      else {
        SVar9 = dwNumberOfBytesToMap;
        if (param_2 == READ_WRITE) {
          SVar9 = 6;
        }
      }
      lpBaseAddress = MapViewOfFile(hFileMappingObject,(DWORD)SVar9,0,0,0);
      if (lpBaseAddress == (char (*) [4])0x0) {
        GetLastError();
        Logging::Log(USER,LOG_ERROR,"%sCannot map file %S. Error: 0x%X\n");
        CloseHandle(hFileMappingObject);
        CloseHandle(hFile);
        pMVar5 = (MemoryMappedFile *)0x0;
      }
      else {
        pacVar3 = lpBaseAddress;
        hFileMappingObject_00 = hFileMappingObject;
        if ((param_3) && (*lpBaseAddress == UbaMagic)) {
          dwNumberOfBytesToMap = *(SIZE_T *)(lpBaseAddress + 6);
          pcVar7 = lpBaseAddress[8];
          hFileMappingObject_00 =
               CreateFileMappingW((HANDLE)0xffffffffffffffff,(LPSECURITY_ATTRIBUTES)0x0,4,
                                  (DWORD)(dwNumberOfBytesToMap >> 0x20),(DWORD)dwNumberOfBytesToMap,
                                  (LPCWSTR)0x0);
          if (hFileMappingObject_00 == (HANDLE)0x0) {
            GetLastError();
            Logging::Log(USER,LOG_ERROR,"%sCannot create named shared memory. Error: 0x%X\n");
            return (MemoryMappedFile *)0x0;
          }
          pacVar3 = MapViewOfFile(hFileMappingObject_00,0xf001f,0,0,dwNumberOfBytesToMap);
          pacVar8 = pacVar3;
          for (SVar9 = dwNumberOfBytesToMap; SVar9 != 0; SVar9 = SVar9 - (uint)acVar2) {
            acVar1 = *(char (*) [4])pcVar7;
            acVar2 = *(char (*) [4])(pcVar7 + 4);
            OodleLZ_Decompress((char (*) [4])(pcVar7 + 8),(ulonglong)(uint)acVar1,pacVar8,
                               (ulonglong)(uint)acVar2,OodleLZ_FuzzSafe_Yes,OodleLZ_CheckCRC_No,
                               OodleLZ_Verbosity_None,(void *)0x0,0,
                               (_func___cdecl_OodleDecompressCallbackRet_void_ptr_uchar_ptr_long64_uchar_ptr_long64_long64_long64
                                *)0x0,(void *)0x0,(void *)0x0,0,OodleLZ_Decode_ThreadPhaseAll);
            pcVar7 = *(char (*) [4])(pcVar7 + 8) + (uint)acVar1;
            pacVar8 = (char (*) [4])((longlong)*pacVar8 + (ulonglong)(uint)acVar2);
          }
          UnmapViewOfFile(lpBaseAddress);
          CloseHandle(hFileMappingObject);
        }
        pMVar5 = (MemoryMappedFile *)0x0;
        pMVar4 = ::operator_new(0x20);
        if (pMVar4 != (MemoryMappedFile *)0x0) {
          pMVar4->file = hFile;
          pMVar4->fileMapping = hFileMappingObject_00;
          pMVar4->baseAddress = pacVar3;
          pMVar4->size = dwNumberOfBytesToMap;
          pMVar5 = pMVar4;
        }
      }
    }
  }
  return pMVar5;
}

// Pipe @ 146ce0200

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
primitiveNames::Pipe
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1)

{
  ulonglong uVar1;
  ulong64 uVar2;
  _Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1> *p_Var3
  ;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar4;
  <lambda_1> local_res8;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 7;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::reserve
            (__return_storage_ptr__,0x80);
  uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
  uVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
  if (uVar1 - uVar2 < 0xe) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
              (__return_storage_ptr__,0xe,local_res8,L"\\\\.\\pipe\\UE_LC",0xe);
  }
  else {
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar2 + 0xe;
    pbVar4 = __return_storage_ptr__;
    if (7 < uVar1) {
      pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    memmove((void *)((longlong)&(pbVar4->_Mypair)._Myval2._Bx + uVar2 * 2),L"\\\\.\\pipe\\UE_LC",
            0x1c);
    *(undefined2 *)((longlong)&(pbVar4->_Mypair)._Myval2._Myres + uVar2 * 2 + 4) = 0;
  }
  p_Var3 = &param_1->_Mypair;
  if (7 < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
            (__return_storage_ptr__,(wchar_t *)param_1,(p_Var3->_Myval2)._Mysize);
  return __return_storage_ptr__;
}

// PopUserCommand @ 146ce02e0

BaseCommand * __thiscall ClientUserCommandThread::PopUserCommand(ClientUserCommandThread *this)

{
  ulong64 uVar1;
  BaseCommand *pBVar2;
  ulonglong uVar3;
  
  Semaphore::WaitTimeout((Semaphore *)&this->m_userCommandQueueSema,0xffffffff);
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_userCommandQueueCS);
  uVar1 = (this->m_userCommandQueue)._Mypair._Myval2._Mysize;
  uVar3 = ((this->m_userCommandQueue)._Mypair._Myval2._Myoff - 1) + uVar1;
  uVar1 = uVar1 - 1;
  pBVar2 = (this->m_userCommandQueue)._Mypair._Myval2._Map
           [uVar3 >> 1 & (this->m_userCommandQueue)._Mypair._Myval2._Mapsize - 1][(uint)uVar3 & 1];
  (this->m_userCommandQueue)._Mypair._Myval2._Mysize = uVar1;
  if (uVar1 == 0) {
    (this->m_userCommandQueue)._Mypair._Myval2._Myoff = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_userCommandQueueCS);
  return pBVar2;
}

// PreparedRestart @ 146ce0370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
primitiveNames::PreparedRestart
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,StrongTypedef<unsigned_long,0> param_1)

{
  ulong64 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar4;
  wchar_t *pwVar5;
  undefined1 auStackY_a8 [32];
  <lambda_1> local_78 [8];
  _Bxty local_70;
  ulong64 local_60;
  ulonglong local_58;
  wchar_t local_28 [4];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 7;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::reserve
            (__return_storage_ptr__,0x80);
  uVar3 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
  uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
  if (uVar3 - uVar1 < 0x13) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
              (__return_storage_ptr__,0x13,local_78[0],L"_UE_LC_EVT_RST_PREP",0x13);
  }
  else {
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar1 + 0x13;
    pbVar4 = __return_storage_ptr__;
    if (7 < uVar3) {
      pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    memmove((void *)((longlong)&(pbVar4->_Mypair)._Myval2._Bx + uVar1 * 2),L"_UE_LC_EVT_RST_PREP",
            0x26);
    *(undefined2 *)((longlong)&pbVar4[1]._Mypair._Myval2._Bx + uVar1 * 2 + 6) = 0;
  }
  pwVar5 = local_28 + 1;
  do {
    pwVar5 = pwVar5 + -1;
    *pwVar5 = (short)param_1.m_value + (short)((ulonglong)param_1.m_value / 10) * -10 + L'0';
    param_1.m_value = (ulong)((ulonglong)param_1.m_value / 10);
  } while (param_1.m_value != 0);
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_><wchar_t_*,0>
            ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)&local_70,
             pwVar5,local_28 + 1,(allocator<wchar_t> *)local_78);
  uVar2 = &local_70;
  if (7 < local_58) {
    uVar2 = local_70._Ptr;
  }
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
            (__return_storage_ptr__,(wchar_t *)uVar2,local_60);
  if (7 < local_58) {
    uVar3 = local_58 * 2 + 2;
    uVar2 = local_70._Ptr;
    if (0xfff < uVar3) {
      uVar2 = *(undefined8 *)(local_70._Ptr + -4);
      uVar3 = local_58 * 2 + 0x29;
      if ((char *)0x1f < (char *)((longlong)local_70._Ptr + (-8 - uVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar2,uVar3);
  }
  return __return_storage_ptr__;
}

// PushUserCommand @ 146ce0540

void __thiscall
ClientUserCommandThread::PushUserCommand(ClientUserCommandThread *this,BaseCommand *param_1)

{
  ulong64 *puVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  BaseCommand **ppBVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_userCommandQueueCS);
  if ((((this->m_userCommandQueue)._Mypair._Myval2._Myoff & 1) == 0) &&
     ((this->m_userCommandQueue)._Mypair._Myval2._Mapsize <=
      (this->m_userCommandQueue)._Mypair._Myval2._Mysize + 2 >> 1)) {
    std::
    deque<ClientUserCommandThread::BaseCommand_*,std::allocator<ClientUserCommandThread::BaseCommand_*>_>
    ::_Growmap(&this->m_userCommandQueue,1);
  }
  uVar2 = (this->m_userCommandQueue)._Mypair._Myval2._Mapsize;
  uVar3 = uVar2 * 2;
  puVar1 = &(this->m_userCommandQueue)._Mypair._Myval2._Myoff;
  *puVar1 = *puVar1 & uVar3 - 1;
  uVar7 = (this->m_userCommandQueue)._Mypair._Myval2._Myoff;
  if (*puVar1 == 0) {
    uVar7 = uVar3;
  }
  uVar6 = uVar7 - 1;
  uVar4 = uVar2 - 1 & uVar6 >> 1;
  if ((this->m_userCommandQueue)._Mypair._Myval2._Map[uVar4] == (BaseCommand **)0x0) {
    ppBVar5 = ::operator_new(0x10);
    (this->m_userCommandQueue)._Mypair._Myval2._Map[uVar4] = ppBVar5;
  }
  (this->m_userCommandQueue)._Mypair._Myval2._Map
  [(this->m_userCommandQueue)._Mypair._Myval2._Mapsize - 1 & uVar6 >> 1][(uint)uVar6 & 1] = param_1;
  puVar1 = &(this->m_userCommandQueue)._Mypair._Myval2._Mysize;
  *puVar1 = *puVar1 + 1;
  (this->m_userCommandQueue)._Mypair._Myval2._Myoff = uVar6;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_userCommandQueueCS);
                    /* WARNING: Could not recover jumptable at 0x000146ce063c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSemaphore((this->m_userCommandQueueSema).m_sema,1,(LPLONG)0x0);
  return;
}

// Read @ 146ce0650

bool __thiscall DuplexPipe::Read(DuplexPipe *this,void *param_1,ulong64 param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  ulong64 uVar3;
  DWORD local_res8 [2];
  
  uVar3 = 0;
  do {
    local_res8[0] = 0;
    BVar1 = ReadFile(this->m_pipe,(LPVOID)(uVar3 + (longlong)param_1),(int)param_2 - (int)uVar3,
                     local_res8,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (((DVar2 != 0x6d) && (DVar2 != 0xe9)) && (DVar2 != 0x3e3)) {
        Logging::Log(USER,LOG_ERROR,"%sError 0x%X while reading from pipe. Size: %zu, read: %d\n");
      }
      return false;
    }
    uVar3 = uVar3 + local_res8[0];
  } while (uVar3 != param_2);
  return true;
}

// Read @ 146ce0730

void __thiscall memoryStream::Reader::Read(Reader *this,void *param_1,ulong64 param_2)

{
  memcpy(param_1,(void *)((longlong)this->m_data + this->m_offset),param_2);
  this->m_offset = this->m_offset + param_2;
  return;
}

// ReadBeat @ 146ce0770

ulong64 __thiscall HeartBeat::ReadBeat(HeartBeat *this)

{
  ulong64 uVar1;
  ScopedLock local_res8 [4];
  
  InterprocessMutex::ScopedLock::ScopedLock(local_res8,this->m_mutex);
  uVar1 = *(ulong64 *)this->m_memory->memoryView;
  ReleaseMutex((local_res8[0].m_mutex)->m_mutex);
  return uVar1;
}

// ReadBeatDelta @ 146ce07b0

ulong64 __thiscall HeartBeat::ReadBeatDelta(HeartBeat *this)

{
  _FILETIME _Var1;
  _FILETIME _Var2;
  ulong64 uVar3;
  _FILETIME local_res8;
  
  local_res8.dwLowDateTime = 0;
  local_res8.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_res8);
  _Var2 = local_res8;
  InterprocessMutex::ScopedLock::ScopedLock((ScopedLock *)&local_res8,this->m_mutex);
  _Var1 = *this->m_memory->memoryView;
  ReleaseMutex(*(HANDLE *)local_res8);
  uVar3 = (longlong)_Var1 - (longlong)_Var2;
  if ((ulonglong)_Var1 <= (ulonglong)_Var2) {
    uVar3 = (longlong)_Var2 - (longlong)_Var1;
  }
  return uVar3;
}

// ReadFromFileOffset @ 146ce0830

void __cdecl
executable::ReadFromFileOffset(MemoryMappedFile *param_1,uint param_2,void *param_3,ulong64 param_4)

{
  memcpy(param_3,(void *)((ulonglong)param_2 + (longlong)param_1->baseAddress),param_4);
  return;
}

// ReadInstructionPointer @ 146ce0850

void * __cdecl Thread::ReadInstructionPointer(StrongTypedef<_CONTEXT,0> *param_1)

{
  return (void *)(param_1->m_value).Rip;
}

// ReadNamedSharedMemory @ 146ce0860

void __cdecl
Process::ReadNamedSharedMemory(NamedSharedMemory *param_1,void *param_2,ulong64 param_3)

{
  memcpy(param_2,param_1->memoryView,param_3);
  return;
}

// ReadProcessMemory @ 146ce0880

void __cdecl
Process::ReadProcessMemory
          (StrongTypedef<void_*,0> param_1,void *param_2,void *param_3,ulong64 param_4)

{
  long lVar1;
  
  lVar1 = (*WindowsInternals::NtReadVirtualMemory.m_function)
                    (param_1.m_value,param_2,param_3,(ulong)param_4,(ulong *)0x0);
  if (lVar1 < 0) {
    Logging::Log(USER,LOG_ERROR,"%sCall to function %s in module %s failed. Error: 0x%X\n");
  }
  return;
}

// RebaseImage @ 146ce0900

void __cdecl executable::RebaseImage(MemoryMappedFile *param_1,ulong64 param_2)

{
  int *piVar1;
  longlong *plVar2;
  ushort uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  _IMAGE_NT_HEADERS64 *p_Var7;
  vector<executable::ImageSection,std::allocator<executable::ImageSection>_> *this;
  ulonglong uVar8;
  uint *puVar9;
  longlong lVar10;
  ulong uVar11;
  uint *puVar12;
  
  pvVar4 = param_1->baseAddress;
  p_Var7 = detail::GetNtHeader(param_1);
  if ((p_Var7 != (_IMAGE_NT_HEADERS64 *)0x0) &&
     ((longlong)
      &((_IMAGE_OPTIONAL_HEADER64 *)((p_Var7->OptionalHeader).DataDirectory + -0xe))->Magic +
      (ulonglong)(p_Var7->FileHeader).SizeOfOptionalHeader != 0)) {
    this = &GatherImageSectionDB(param_1)->sections;
    lVar10 = param_2 - (p_Var7->OptionalHeader).ImageBase;
    (p_Var7->OptionalHeader).ImageBase = param_2;
    uVar11 = (p_Var7->OptionalHeader).DataDirectory[5].Size;
    if (uVar11 != 0) {
      uVar5 = RvaToFileOffset((ImageSectionDB *)this,
                              (p_Var7->OptionalHeader).DataDirectory[5].VirtualAddress);
      puVar12 = (uint *)((ulonglong)uVar5 + (longlong)pvVar4);
      do {
        uVar5 = puVar12[1];
        uVar6 = RvaToFileOffset((ImageSectionDB *)this,*puVar12);
        puVar9 = puVar12 + 2;
        uVar8 = (ulonglong)uVar5 - 8 >> 1;
        if ((int)uVar8 != 0) {
          uVar8 = uVar8 & 0xffffffff;
          do {
            uVar3 = (ushort)*puVar9;
            if (uVar3 >> 0xc != 0) {
              if (uVar3 >> 0xc == 3) {
                piVar1 = (int *)((ulonglong)((uVar3 & 0xfff) + uVar6) + (longlong)pvVar4);
                *piVar1 = *piVar1 + (int)lVar10;
              }
              else if (uVar3 >> 0xc == 10) {
                plVar2 = (longlong *)((ulonglong)((uVar3 & 0xfff) + uVar6) + (longlong)pvVar4);
                *plVar2 = *plVar2 + lVar10;
              }
            }
            puVar9 = (uint *)((longlong)puVar9 + 2);
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar12 = (uint *)((longlong)puVar12 + (ulonglong)puVar12[1]);
        uVar11 = uVar11 - uVar5;
      } while (uVar11 != 0);
    }
    if (this != (vector<executable::ImageSection,std::allocator<executable::ImageSection>_> *)0x0) {
      std::vector<executable::ImageSection,std::allocator<executable::ImageSection>_>::
      ~vector<executable::ImageSection,std::allocator<executable::ImageSection>_>(this);
      ::operator_delete(this,0x18);
    }
  }
  return;
}

// ReceiveHeader @ 146ce0a50

bool __thiscall DuplexPipe::ReceiveHeader(DuplexPipe *this,Header *param_1)

{
  bool bVar1;
  
  bVar1 = Read(this,param_1,8);
  return bVar1;
}

// RemoveVariable @ 146ce0a80

void __cdecl environment::RemoveVariable(wchar_t *param_1)

{
  BOOL BVar1;
  
  BVar1 = SetEnvironmentVariableW(param_1,(LPCWSTR)0x0);
  if (BVar1 == 0) {
    GetLastError();
    Logging::Log(DEV,LOG_INFO,"%sCould not remove environment variable %S (Error: %d)\n");
  }
  return;
}

// Replace @ 146ce0af0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
string::Replace(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                *__return_storage_ptr__,
               basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
               basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
               basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var1;
  ulong64 uVar2;
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(__return_storage_ptr__,param_1);
  uVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::find
                    (param_1,param_2,0);
  if (uVar2 != 0xffffffffffffffff) {
    p_Var1 = &param_3->_Mypair;
    if (0xf < (param_3->_Mypair)._Myval2._Myres) {
      param_3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_3->_Mypair)._Myval2._Bx._Ptr;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::replace
              (__return_storage_ptr__,uVar2,(param_2->_Mypair)._Myval2._Mysize,(char *)param_3,
               (p_Var1->_Myval2)._Mysize);
  }
  return __return_storage_ptr__;
}

// Replace @ 146ce0b70

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
string::Replace(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                *__return_storage_ptr__,
               basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1,
               basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_2,
               basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_3)

{
  _Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1> *p_Var1
  ;
  ulong64 uVar2;
  
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
            (__return_storage_ptr__,param_1);
  uVar2 = detail::WideFindOffset(param_1,param_2);
  if (uVar2 != 0xffffffffffffffff) {
    p_Var1 = &param_3->_Mypair;
    if (7 < (param_3->_Mypair)._Myval2._Myres) {
      param_3 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                (param_3->_Mypair)._Myval2._Bx._Ptr;
    }
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::replace
              (__return_storage_ptr__,uVar2,(param_2->_Mypair)._Myval2._Mysize,(wchar_t *)param_3,
               (p_Var1->_Myval2)._Mysize);
  }
  return __return_storage_ptr__;
}

// ReplaceAll @ 146ce0bf0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
string::ReplaceAll(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                   *__return_storage_ptr__,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  void *pvVar1;
  ulonglong uVar2;
  void *pvVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(__return_storage_ptr__,param_1);
  do {
    uVar4 = (param_2->_Mypair)._Myval2._Mysize;
    pbVar6 = param_2;
    if (0xf < (param_2->_Mypair)._Myval2._Myres) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2->_Mypair)._Myval2._Bx._Ptr;
    }
    uVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
    pbVar5 = __return_storage_ptr__;
    if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    if (uVar2 < uVar4) {
      return __return_storage_ptr__;
    }
    if (uVar4 == 0) {
      uVar4 = 0;
    }
    else {
      pvVar1 = (void *)((longlong)&(pbVar5->_Mypair)._Myval2._Bx + uVar2);
      pvVar3 = __std_search_1(pbVar5,pvVar1,pbVar6,uVar4);
      if (pvVar3 == pvVar1) {
        return __return_storage_ptr__;
      }
      uVar4 = (longlong)pvVar3 - (longlong)pbVar5;
      if (uVar4 == 0xffffffffffffffff) {
        return __return_storage_ptr__;
      }
    }
    pbVar6 = param_3;
    if (0xf < (param_3->_Mypair)._Myval2._Myres) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_3->_Mypair)._Myval2._Bx._Ptr;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::replace
              (__return_storage_ptr__,uVar4,(param_2->_Mypair)._Myval2._Mysize,(char *)pbVar6,
               (param_3->_Mypair)._Myval2._Mysize);
  } while( true );
}

// ReplaceAll @ 146ce0ca0

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
string::ReplaceAll(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                   *__return_storage_ptr__,
                  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1,
                  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_2,
                  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_3)

{
  void *pvVar1;
  ulonglong uVar2;
  void *pvVar3;
  ulong64 uVar4;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar5;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar6;
  
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
            (__return_storage_ptr__,param_1);
  do {
    uVar4 = (param_2->_Mypair)._Myval2._Mysize;
    pbVar5 = param_2;
    if (7 < (param_2->_Mypair)._Myval2._Myres) {
      pbVar5 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (param_2->_Mypair)._Myval2._Bx._Ptr;
    }
    uVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
    pbVar6 = __return_storage_ptr__;
    if (7 < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
      pbVar6 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    if (uVar2 < uVar4) {
      return __return_storage_ptr__;
    }
    if (uVar4 == 0) {
      uVar4 = 0;
    }
    else {
      pvVar1 = (void *)((longlong)&(pbVar6->_Mypair)._Myval2._Bx + uVar2 * 2);
      pvVar3 = __std_search_2(pbVar6,pvVar1,pbVar5,uVar4);
      if (pvVar3 == pvVar1) {
        return __return_storage_ptr__;
      }
      uVar4 = (longlong)pvVar3 - (longlong)pbVar6 >> 1;
      if (uVar4 == 0xffffffffffffffff) {
        return __return_storage_ptr__;
      }
    }
    pbVar5 = param_3;
    if (7 < (param_3->_Mypair)._Myval2._Myres) {
      pbVar5 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (param_3->_Mypair)._Myval2._Bx._Ptr;
    }
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::replace
              (__return_storage_ptr__,uVar4,(param_2->_Mypair)._Myval2._Mysize,(wchar_t *)pbVar5,
               (param_3->_Mypair)._Myval2._Mysize);
  } while( true );
}

// RequestRestart @ 146ce0d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
primitiveNames::RequestRestart
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,StrongTypedef<unsigned_long,0> param_1)

{
  ulong64 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar4;
  wchar_t *pwVar5;
  undefined1 auStackY_a8 [32];
  <lambda_1> local_78 [8];
  _Bxty local_70;
  ulong64 local_60;
  ulonglong local_58;
  wchar_t local_28 [4];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 7;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::reserve
            (__return_storage_ptr__,0x80);
  uVar3 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
  uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
  if (uVar3 - uVar1 < 0x12) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
              (__return_storage_ptr__,0x12,local_78[0],L"_UE_LC_EVT_RST_REQ",0x12);
  }
  else {
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar1 + 0x12;
    pbVar4 = __return_storage_ptr__;
    if (7 < uVar3) {
      pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    memmove((void *)((longlong)&(pbVar4->_Mypair)._Myval2._Bx + uVar1 * 2),L"_UE_LC_EVT_RST_REQ",
            0x24);
    *(undefined2 *)((longlong)&pbVar4[1]._Mypair._Myval2._Bx + uVar1 * 2 + 4) = 0;
  }
  pwVar5 = local_28 + 1;
  do {
    pwVar5 = pwVar5 + -1;
    *pwVar5 = (short)param_1.m_value + (short)((ulonglong)param_1.m_value / 10) * -10 + L'0';
    param_1.m_value = (ulong)((ulonglong)param_1.m_value / 10);
  } while (param_1.m_value != 0);
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_><wchar_t_*,0>
            ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)&local_70,
             pwVar5,local_28 + 1,(allocator<wchar_t> *)local_78);
  uVar2 = &local_70;
  if (7 < local_58) {
    uVar2 = local_70._Ptr;
  }
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
            (__return_storage_ptr__,(wchar_t *)uVar2,local_60);
  if (7 < local_58) {
    uVar3 = local_58 * 2 + 2;
    uVar2 = local_70._Ptr;
    if (0xfff < uVar3) {
      uVar2 = *(undefined8 *)(local_70._Ptr + -4);
      uVar3 = local_58 * 2 + 0x29;
      if ((char *)0x1f < (char *)((longlong)local_70._Ptr + (-8 - uVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar2,uVar3);
  }
  return __return_storage_ptr__;
}

// ReservePages @ 146ce0f30

void __cdecl
`anonymous_namespace'::ReservePages
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2,ulong64 param_3,
          ulong64 param_4)

{
  FScriptContainerElement *_Src;
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  FIdentityFunctor local_res10 [8];
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  local_48 = param_2->ArrayNum;
  lVar10 = (longlong)local_48;
  if (local_48 != 0) {
    _Src = (param_2->AllocatorInstance).Data;
    uVar9 = 0;
    local_50.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_48,0,&local_50,local_48,local_44);
    memcpy(local_50.Data,_Src,lVar10 << 3);
    AlgoImpl::
    IntroSortInternal<unsigned___int64,int,FIdentityFunctor,TDereferenceWrapper<unsigned___int64,TLess<void>_>_>
              ((ulong64 *)local_50.Data,local_48,local_res10[0],(TLess<void> *)local_res10);
    if ((local_48 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar7 = param_4 & 0xffffffff;
    uVar12 = *(ulonglong *)local_50.Data;
    uVar13 = 0x10000;
    if (param_3 + 0x10000 <= uVar12) {
      uVar13 = uVar12 - param_3;
    }
    LivePP::ReservePages(param_1,uVar13,uVar12,param_4 & 0xffffffff);
    uVar13 = 0x7fffffff0000;
    if (0 < local_48 + -1) {
      uVar12 = uVar9;
      do {
        uVar11 = (uint)uVar9;
        uVar4 = 0;
        if ((int)uVar11 < local_48) {
          uVar4 = ~uVar11 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar11 = uVar11 + 1;
        uVar9 = (ulonglong)uVar11;
        uVar1 = *(ulonglong *)(local_50.Data + uVar12);
        uVar4 = 0;
        if ((int)uVar11 < local_48) {
          uVar4 = ~uVar11 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar12 = uVar12 + 8;
        uVar8 = *(ulonglong *)(local_50.Data + uVar12);
        if (uVar8 - uVar1 < param_3 * 2) {
          if (0x7fffffff0000 - param_3 < uVar8) {
            uVar8 = 0x7fffffff0000;
          }
          else {
            uVar8 = uVar8 + param_3;
          }
          uVar5 = uVar1 - param_3;
          bVar3 = uVar1 < param_3 + 0x10000;
        }
        else {
          uVar5 = uVar1 + param_3;
          if (0x7fffffff0000 - param_3 < uVar1) {
            uVar5 = 0x7fffffff0000;
          }
          LivePP::ReservePages(param_1,uVar1,uVar5,uVar7);
          uVar5 = uVar8 - param_3;
          bVar3 = uVar8 < param_3 + 0x10000;
        }
        uVar6 = 0x10000;
        if (!bVar3) {
          uVar6 = uVar5;
        }
        LivePP::ReservePages(param_1,uVar6,uVar8,uVar7);
      } while ((int)uVar11 < local_48 + -1);
    }
    uVar4 = 0;
    if ((int)(local_48 - 1U) < local_48) {
      uVar4 = ~(local_48 - 1U) >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = *(ulong64 *)(local_50.Data + (longlong)(local_48 + -1) * 8);
    if (uVar5 <= 0x7fffffff0000 - param_3) {
      uVar13 = uVar5 + param_3;
    }
    LivePP::ReservePages(param_1,uVar5,uVar13,uVar7);
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
  }
  return;
}

// ReservePages @ 146ce1270

void __cdecl
LivePP::ReservePages
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1,ulong64 param_2,
          ulong64 param_3,ulong64 param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  HANDLE hProcess;
  SIZE_T SVar5;
  LPVOID pvVar6;
  ulong64 uVar7;
  LPCVOID lpAddress;
  LPVOID local_58;
  _MEMORY_BASIC_INFORMATION local_50;
  
  hProcess = GetCurrentProcess();
  if (param_2 < param_3) {
    uVar7 = param_2;
    do {
      lpAddress = (LPCVOID)((param_4 - 1) + uVar7 & ~(param_4 - 1));
      if (lpAddress < param_2) {
        return;
      }
      local_50.BaseAddress = (LPVOID)0x0;
      local_50.AllocationBase = (PVOID)0x0;
      local_50.AllocationProtect = 0;
      local_50._20_4_ = 0;
      local_50.RegionSize = 0;
      local_50.State = 0;
      local_50.Protect = 0;
      local_50.Type = 0;
      local_50._44_4_ = 0;
      SVar5 = VirtualQueryEx(hProcess,lpAddress,&local_50,0x30);
      if (SVar5 == 0) {
        return;
      }
      if (local_50.State == 0x10000) {
        SVar5 = local_50.RegionSize;
        if (param_3 - (longlong)local_50.BaseAddress < local_50.RegionSize) {
          SVar5 = param_3 - (longlong)local_50.BaseAddress;
        }
        pvVar6 = VirtualAllocEx(hProcess,local_50.BaseAddress,SVar5,0x2000,1);
        if (pvVar6 != (LPVOID)0x0) {
          pFVar1 = (param_1->AllocatorInstance).Data;
          local_58 = pvVar6;
          if (((pFVar1 <= (FScriptContainerElement *)&local_58) &&
              ((FScriptContainerElement *)&local_58 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar4 = param_1->ArrayNum;
          if (iVar4 == param_1->ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar4 + 1;
          *(LPVOID *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_58;
        }
      }
      uVar7 = (longlong)local_50.BaseAddress + local_50.RegionSize;
    } while (uVar7 < param_3);
  }
  return;
}

// Reset @ 146ce1860

void __thiscall Event::Reset(Event *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146ce1863. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ResetEvent(this->m_event);
  return;
}

// Restart @ 146ce1870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
primitiveNames::Restart
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,StrongTypedef<unsigned_long,0> param_1)

{
  ulong64 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar4;
  wchar_t *pwVar5;
  undefined1 auStackY_a8 [32];
  <lambda_1> local_78 [8];
  _Bxty local_70;
  ulong64 local_60;
  ulonglong local_58;
  wchar_t local_28 [4];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 7;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::reserve
            (__return_storage_ptr__,0x80);
  uVar3 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
  uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
  if (uVar3 - uVar1 < 0xe) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
              (__return_storage_ptr__,0xe,local_78[0],L"_UE_LC_EVT_RST",0xe);
  }
  else {
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar1 + 0xe;
    pbVar4 = __return_storage_ptr__;
    if (7 < uVar3) {
      pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    memmove((void *)((longlong)&(pbVar4->_Mypair)._Myval2._Bx + uVar1 * 2),L"_UE_LC_EVT_RST",0x1c);
    *(undefined2 *)((longlong)&(pbVar4->_Mypair)._Myval2._Myres + uVar1 * 2 + 4) = 0;
  }
  pwVar5 = local_28 + 1;
  do {
    pwVar5 = pwVar5 + -1;
    *pwVar5 = (short)param_1.m_value + (short)((ulonglong)param_1.m_value / 10) * -10 + L'0';
    param_1.m_value = (ulong)((ulonglong)param_1.m_value / 10);
  } while (param_1.m_value != 0);
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_><wchar_t_*,0>
            ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)&local_70,
             pwVar5,local_28 + 1,(allocator<wchar_t> *)local_78);
  uVar2 = &local_70;
  if (7 < local_58) {
    uVar2 = local_70._Ptr;
  }
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
            (__return_storage_ptr__,(wchar_t *)uVar2,local_60);
  if (7 < local_58) {
    uVar3 = local_58 * 2 + 2;
    uVar2 = local_70._Ptr;
    if (0xfff < uVar3) {
      uVar2 = *(undefined8 *)(local_70._Ptr + -4);
      uVar3 = local_58 * 2 + 0x29;
      if ((char *)0x1f < (char *)((longlong)local_70._Ptr + (-8 - uVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar2,uVar3);
  }
  return __return_storage_ptr__;
}

// Resume @ 146ce1a40

void __cdecl Process::Resume(Context *param_1)

{
  long lVar1;
  
  lVar1 = (*WindowsInternals::NtResumeProcess.m_function)((param_1->processInformation).hProcess);
  if (lVar1 < 0) {
    Logging::Log(USER,LOG_ERROR,"%sCall to function %s in module %s failed. Error: 0x%X\n");
  }
  return;
}

// Resume @ 146ce1ac0

void __cdecl Process::Resume(StrongTypedef<void_*,0> param_1)

{
  long lVar1;
  
  lVar1 = (*WindowsInternals::NtResumeProcess.m_function)(param_1.m_value);
  if (lVar1 < 0) {
    Logging::Log(USER,LOG_ERROR,"%sCall to function %s in module %s failed. Error: 0x%X\n");
  }
  return;
}

// Resume @ 146ce1b40

DWORD __stdcall Thread::Resume(HANDLE hThread)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146ce1b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = ResumeThread(hThread);
  return DVar1;
}

// ResumeMainThread @ 146ce1b50

void __cdecl Process::ResumeMainThread(Context *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146ce1b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ResumeThread((param_1->processInformation).hThread);
  return;
}

// RvaToFileOffset @ 146ce1b70

/* WARNING: Type propagation algorithm not settling */

uint __cdecl executable::RvaToFileOffset(ImageSectionDB *param_1,uint param_2)

{
  uint uVar1;
  ImageSection *pIVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  pIVar2 = (param_1->sections)._Mypair._Myval2._Myfirst;
  uVar3 = 0;
  uVar4 = (longlong)(param_1->sections)._Mypair._Myval2._Mylast - (longlong)pIVar2 >> 4;
  if (uVar4 != 0) {
    do {
      uVar1 = pIVar2->rva;
      if ((uVar1 <= param_2) && (param_2 < pIVar2->size + uVar1)) {
        if (pIVar2->rawDataSize <= param_2 - uVar1) {
          return 0;
        }
        return pIVar2->rawDataRva + (param_2 - uVar1);
      }
      uVar3 = uVar3 + 1;
      pIVar2 = pIVar2 + 1;
    } while (uVar3 < uVar4);
  }
  Logging::Log(DEV,LOG_ERROR,"ERROR: %sCannot map RVA 0x%X to executable image file offset\n");
  return 0;
}

// ScanMemoryRange @ 146ce1c10

void * __cdecl
Process::ScanMemoryRange
          (StrongTypedef<void_*,0> param_1,void *param_2,void *param_3,ulong64 param_4,
          ulong64 param_5)

{
  LPCVOID lpAddress;
  void *pvVar1;
  _MEMORY_BASIC_INFORMATION local_48;
  
  pvVar1 = param_2;
  while( true ) {
    lpAddress = (LPCVOID)((param_5 - 1) + (longlong)pvVar1 & ~(param_5 - 1));
    if ((param_3 <= (void *)((longlong)lpAddress + param_4)) || (lpAddress < param_2)) {
      Logging::Log(DEV,LOG_ERROR,
                   "ERROR: %sCould not find memory range that fits 0x%X bytes with alignment 0x%X in range from 0x%p to 0x%p (scan: 0x%p)\n"
                  );
      return (void *)0x0;
    }
    local_48.BaseAddress = (void *)0x0;
    local_48.AllocationBase = (PVOID)0x0;
    local_48.AllocationProtect = 0;
    local_48._20_4_ = 0;
    local_48.RegionSize = 0;
    local_48.State = 0;
    local_48.Protect = 0;
    local_48.Type = 0;
    local_48._44_4_ = 0;
    VirtualQueryEx(param_1.m_value,lpAddress,&local_48,0x30);
    if ((param_4 <= local_48.RegionSize) && (local_48.State == 0x10000)) break;
    pvVar1 = (void *)(local_48.RegionSize + (longlong)local_48.BaseAddress);
  }
  return local_48.BaseAddress;
}

// Seek @ 146ce1d40

void __thiscall memoryStream::Reader::Seek(Reader *this,ulong64 param_1)

{
  this->m_offset = param_1;
  return;
}

// Send @ 146ce1d50

void __thiscall DuplexPipe::Send(DuplexPipe *this,void *param_1,ulong64 param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  ulong64 uVar3;
  DWORD local_res8 [2];
  
  uVar3 = 0;
  do {
    local_res8[0] = 0;
    BVar1 = WriteFile(this->m_pipe,(LPCVOID)(uVar3 + (longlong)param_1),(int)param_2 - (int)uVar3,
                      local_res8,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0xe8) {
        return;
      }
      Logging::Log(USER,LOG_ERROR,"%sError 0x%X while writing to pipe: Size: %zu, written: %d\n");
      return;
    }
    uVar3 = uVar3 + local_res8[0];
  } while (uVar3 != param_2);
  return;
}

// ServerReadyEvent @ 146ce1e20

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
primitiveNames::ServerReadyEvent
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1)

{
  ulonglong uVar1;
  ulong64 uVar2;
  _Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1> *p_Var3
  ;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar4;
  <lambda_1> local_res8;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 7;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::reserve
            (__return_storage_ptr__,0x80);
  p_Var3 = &param_1->_Mypair;
  if (7 < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
            (__return_storage_ptr__,(wchar_t *)param_1,(p_Var3->_Myval2)._Mysize);
  uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
  uVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
  if (8 < uVar1 - uVar2) {
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar2 + 9;
    pbVar4 = __return_storage_ptr__;
    if (7 < uVar1) {
      pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    memmove((void *)((longlong)&(pbVar4->_Mypair)._Myval2._Bx + uVar2 * 2),L"_UE_LC_SR",0x12);
    *(undefined2 *)((longlong)&(pbVar4->_Mypair)._Myval2._Mysize + uVar2 * 2 + 2) = 0;
    return __return_storage_ptr__;
  }
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
            (__return_storage_ptr__,9,local_res8,L"_UE_LC_SR",9);
  return __return_storage_ptr__;
}

// SetActive @ 146ce1f10

void __thiscall ClientStartupThread::SetActive(ClientStartupThread *this,bool param_1)

{
  HANDLE hHandle;
  ClientUserCommandThread *this_00;
  BaseCommand *pBVar1;
  void *pvVar2;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this_00 = this->m_userCommandThread;
  if (this_00 != (ClientUserCommandThread *)0x0) {
    pBVar1 = ::operator_new(0x30);
    if (pBVar1 == (BaseCommand *)0x0) {
      pBVar1 = (BaseCommand *)0x0;
    }
    else {
      pBVar1->m_expectResponse = false;
      pBVar1->_padding_ = (longlong)&ProxyCommand<commands::SetActive>::_vftable_;
      *(undefined1 *)&pBVar1[1]._padding_ = 0;
      pvVar2 = operator_new__(0);
      *(void **)&pBVar1[1].m_expectResponse = pvVar2;
      pBVar1[2]._padding_ = 0;
      *(undefined8 *)&pBVar1[2].m_expectResponse = 0;
    }
    *(bool *)&pBVar1[1]._padding_ = param_1;
    ClientUserCommandThread::PushUserCommand(this_00,pBVar1);
  }
  return;
}

// SetActive @ 146ce1fd0

void __thiscall ClientUserCommandThread::SetActive(ClientUserCommandThread *this,bool param_1)

{
  BaseCommand *pBVar1;
  void *pvVar2;
  
  pBVar1 = ::operator_new(0x30);
  if (pBVar1 == (BaseCommand *)0x0) {
    pBVar1 = (BaseCommand *)0x0;
  }
  else {
    pBVar1->m_expectResponse = false;
    pBVar1->_padding_ = (longlong)&ProxyCommand<commands::SetActive>::_vftable_;
    *(undefined1 *)&pBVar1[1]._padding_ = 0;
    pvVar2 = operator_new__(0);
    *(void **)&pBVar1[1].m_expectResponse = pvVar2;
    pBVar1[2]._padding_ = 0;
    *(undefined8 *)&pBVar1[2].m_expectResponse = 0;
  }
  *(bool *)&pBVar1[1]._padding_ = param_1;
  PushUserCommand(this,pBVar1);
  return;
}

// SetBuildArguments @ 146ce2050

void __thiscall ClientStartupThread::SetBuildArguments(ClientStartupThread *this,wchar_t *param_1)

{
  HANDLE hHandle;
  ClientUserCommandThread *this_00;
  DWORD DVar1;
  BaseCommand *pBVar2;
  void *pvVar3;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this_00 = this->m_userCommandThread;
  if (this_00 != (ClientUserCommandThread *)0x0) {
    pBVar2 = ::operator_new(0x830);
    if (pBVar2 == (BaseCommand *)0x0) {
      pBVar2 = (BaseCommand *)0x0;
    }
    else {
      pBVar2->m_expectResponse = false;
      pBVar2->_padding_ = (longlong)&ProxyCommand<commands::SetBuildArguments>::_vftable_;
      memset((void *)((longlong)&pBVar2[1]._padding_ + 4),0,0x800);
      *(undefined4 *)&pBVar2[1]._padding_ = 0;
      pvVar3 = operator_new__(0);
      *(void **)&pBVar2[0x81].m_expectResponse = pvVar3;
      pBVar2[0x82]._padding_ = 0;
      *(undefined8 *)&pBVar2[0x82].m_expectResponse = 0;
    }
    DVar1 = GetCurrentProcessId();
    *(DWORD *)&pBVar2[1]._padding_ = DVar1;
    wcscpy_s((wchar_t *)((longlong)&pBVar2[1]._padding_ + 4),0x400,param_1);
    ClientUserCommandThread::PushUserCommand(this_00,pBVar2);
  }
  return;
}

// SetBuildArguments @ 146ce2140

void __thiscall
ClientUserCommandThread::SetBuildArguments(ClientUserCommandThread *this,wchar_t *param_1)

{
  DWORD DVar1;
  BaseCommand *pBVar2;
  void *pvVar3;
  
  pBVar2 = ::operator_new(0x830);
  if (pBVar2 == (BaseCommand *)0x0) {
    pBVar2 = (BaseCommand *)0x0;
  }
  else {
    pBVar2->m_expectResponse = false;
    pBVar2->_padding_ = (longlong)&ProxyCommand<commands::SetBuildArguments>::_vftable_;
    memset((void *)((longlong)&pBVar2[1]._padding_ + 4),0,0x800);
    *(undefined4 *)&pBVar2[1]._padding_ = 0;
    pvVar3 = operator_new__(0);
    *(void **)&pBVar2[0x81].m_expectResponse = pvVar3;
    pBVar2[0x82]._padding_ = 0;
    *(undefined8 *)&pBVar2[0x82].m_expectResponse = 0;
  }
  DVar1 = GetCurrentProcessId();
  *(DWORD *)&pBVar2[1]._padding_ = DVar1;
  wcscpy_s((wchar_t *)((longlong)&pBVar2[1]._padding_ + 4),0x400,param_1);
  PushUserCommand(this,pBVar2);
  return;
}

// SetContext @ 146ce24c0

BOOL __stdcall Thread::SetContext(HANDLE hThread,CONTEXT *lpContext)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146ce24c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetThreadContext(hThread,lpContext);
  return BVar1;
}

// SetName @ 146ce24d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl Thread::Current::SetName(char *param_1)

{
  undefined1 auStack_58 [32];
  ULONG_PTR local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38 = 0x1000;
  local_28 = 0xffffffffffffffff;
  local_20 = 0;
  local_30 = param_1;
  RaiseException(0x406d1388,0,4,&local_38);
  return;
}

// SetOutputHandler @ 146ce2540

void __cdecl Logging::SetOutputHandler(_func___cdecl_void_Enum_Enum_wchar_t_ptr *param_1)

{
  code *pcVar1;
  
  pcVar1 = ::`anonymous_namespace'::DefaultOutputHandler;
  if (param_1 != (_func___cdecl_void_Enum_Enum_wchar_t_ptr *)0x0) {
    pcVar1 = param_1;
  }
  OutputHandler = pcVar1;
  return;
}

// SetPriority @ 146ce2560

BOOL __stdcall Thread::SetPriority(HANDLE hThread,int nPriority)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146ce2560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetThreadPriority(hThread,nPriority);
  return BVar1;
}

// SetReinstancingFlow @ 146ce2570

void __thiscall ClientStartupThread::SetReinstancingFlow(ClientStartupThread *this,bool param_1)

{
  HANDLE hHandle;
  ClientUserCommandThread *this_00;
  DWORD DVar1;
  BaseCommand *pBVar2;
  void *pvVar3;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this_00 = this->m_userCommandThread;
  if (this_00 != (ClientUserCommandThread *)0x0) {
    pBVar2 = ::operator_new(0x30);
    if (pBVar2 == (BaseCommand *)0x0) {
      pBVar2 = (BaseCommand *)0x0;
    }
    else {
      pBVar2->m_expectResponse = false;
      pBVar2->_padding_ = (longlong)&ProxyCommand<commands::SetReinstancingFlow>::_vftable_;
      pBVar2[1]._padding_ = 0;
      pvVar3 = operator_new__(0);
      *(void **)&pBVar2[1].m_expectResponse = pvVar3;
      pBVar2[2]._padding_ = 0;
      *(undefined8 *)&pBVar2[2].m_expectResponse = 0;
    }
    DVar1 = GetCurrentProcessId();
    *(bool *)((longlong)&pBVar2[1]._padding_ + 4) = param_1;
    *(DWORD *)&pBVar2[1]._padding_ = DVar1;
    ClientUserCommandThread::PushUserCommand(this_00,pBVar2);
  }
  return;
}

// SetReinstancingFlow @ 146ce2630

void __thiscall
ClientUserCommandThread::SetReinstancingFlow(ClientUserCommandThread *this,bool param_1)

{
  DWORD DVar1;
  BaseCommand *pBVar2;
  void *pvVar3;
  
  pBVar2 = ::operator_new(0x30);
  if (pBVar2 == (BaseCommand *)0x0) {
    pBVar2 = (BaseCommand *)0x0;
  }
  else {
    pBVar2->m_expectResponse = false;
    pBVar2->_padding_ = (longlong)&ProxyCommand<commands::SetReinstancingFlow>::_vftable_;
    pBVar2[1]._padding_ = 0;
    pvVar3 = operator_new__(0);
    *(void **)&pBVar2[1].m_expectResponse = pvVar3;
    pBVar2[2]._padding_ = 0;
    *(undefined8 *)&pBVar2[2].m_expectResponse = 0;
  }
  DVar1 = GetCurrentProcessId();
  *(bool *)((longlong)&pBVar2[1]._padding_ + 4) = param_1;
  *(DWORD *)&pBVar2[1]._padding_ = DVar1;
  PushUserCommand(this,pBVar2);
  return;
}

// SetVariable @ 146ce26c0

void __cdecl environment::SetVariable(wchar_t *param_1,wchar_t *param_2)

{
  BOOL BVar1;
  
  BVar1 = SetEnvironmentVariableW(param_1,param_2);
  if (BVar1 == 0) {
    GetLastError();
    Logging::Log(DEV,LOG_INFO,"%sCould not set environment variable %S to value %S (Error: %d)\n");
  }
  return;
}

// SetVisible @ 146ce2740

void __thiscall ClientStartupThread::SetVisible(ClientStartupThread *this,bool param_1)

{
  HANDLE hHandle;
  ClientUserCommandThread *this_00;
  BaseCommand *pBVar1;
  void *pvVar2;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this_00 = this->m_userCommandThread;
  if (this_00 != (ClientUserCommandThread *)0x0) {
    pBVar1 = ::operator_new(0x30);
    if (pBVar1 == (BaseCommand *)0x0) {
      pBVar1 = (BaseCommand *)0x0;
    }
    else {
      pBVar1->m_expectResponse = false;
      pBVar1->_padding_ = (longlong)&ProxyCommand<commands::SetVisible>::_vftable_;
      *(undefined1 *)&pBVar1[1]._padding_ = 0;
      pvVar2 = operator_new__(0);
      *(void **)&pBVar1[1].m_expectResponse = pvVar2;
      pBVar1[2]._padding_ = 0;
      *(undefined8 *)&pBVar1[2].m_expectResponse = 0;
    }
    *(bool *)&pBVar1[1]._padding_ = param_1;
    ClientUserCommandThread::PushUserCommand(this_00,pBVar1);
  }
  return;
}

// SetVisible @ 146ce2800

void __thiscall ClientUserCommandThread::SetVisible(ClientUserCommandThread *this,bool param_1)

{
  BaseCommand *pBVar1;
  void *pvVar2;
  
  pBVar1 = ::operator_new(0x30);
  if (pBVar1 == (BaseCommand *)0x0) {
    pBVar1 = (BaseCommand *)0x0;
  }
  else {
    pBVar1->m_expectResponse = false;
    pBVar1->_padding_ = (longlong)&ProxyCommand<commands::SetVisible>::_vftable_;
    *(undefined1 *)&pBVar1[1]._padding_ = 0;
    pvVar2 = operator_new__(0);
    *(void **)&pBVar1[1].m_expectResponse = pvVar2;
    pBVar1[2]._padding_ = 0;
    *(undefined8 *)&pBVar1[2].m_expectResponse = 0;
  }
  *(bool *)&pBVar1[1]._padding_ = param_1;
  PushUserCommand(this,pBVar1);
  return;
}

// ShowConsole @ 146ce2e50

void __thiscall ClientStartupThread::ShowConsole(ClientStartupThread *this)

{
  HANDLE hHandle;
  ClientUserCommandThread *this_00;
  BaseCommand *pBVar1;
  void *pvVar2;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this_00 = this->m_userCommandThread;
  if (this_00 != (ClientUserCommandThread *)0x0) {
    pBVar1 = ::operator_new(0x30);
    if (pBVar1 == (BaseCommand *)0x0) {
      pBVar1 = (BaseCommand *)0x0;
    }
    else {
      pBVar1->m_expectResponse = false;
      pBVar1->_padding_ = (longlong)&ProxyCommand<commands::ShowConsole>::_vftable_;
      pvVar2 = operator_new__(0);
      *(void **)&pBVar1[1].m_expectResponse = pvVar2;
      pBVar1[2]._padding_ = 0;
      *(undefined8 *)&pBVar1[2].m_expectResponse = 0;
    }
    ClientUserCommandThread::PushUserCommand(this_00,pBVar1);
  }
  return;
}

// ShowConsole @ 146ce2ef0

void __thiscall ClientUserCommandThread::ShowConsole(ClientUserCommandThread *this)

{
  BaseCommand *pBVar1;
  void *pvVar2;
  
  pBVar1 = ::operator_new(0x30);
  if (pBVar1 == (BaseCommand *)0x0) {
    pBVar1 = (BaseCommand *)0x0;
  }
  else {
    pBVar1->m_expectResponse = false;
    pBVar1->_padding_ = (longlong)&ProxyCommand<commands::ShowConsole>::_vftable_;
    pvVar2 = operator_new__(0);
    *(void **)&pBVar1[1].m_expectResponse = pvVar2;
    pBVar1[2]._padding_ = 0;
    *(undefined8 *)&pBVar1[2].m_expectResponse = 0;
  }
  PushUserCommand(this,pBVar1);
  return;
}

// Shutdown @ 146ce3060

void __cdecl restart::Shutdown(void)

{
  Event *pEVar1;
  
  pEVar1 = g_requestRestart;
  if (g_requestRestart != (Event *)0x0) {
    CloseHandle(g_requestRestart->m_event);
    ::operator_delete(pEVar1,8);
  }
  pEVar1 = g_restartPrepared;
  g_requestRestart = (Event *)0x0;
  if (g_restartPrepared != (Event *)0x0) {
    CloseHandle(g_restartPrepared->m_event);
    ::operator_delete(pEVar1,8);
  }
  pEVar1 = g_executeRestart;
  g_restartPrepared = (Event *)0x0;
  if (g_executeRestart != (Event *)0x0) {
    CloseHandle(g_executeRestart->m_event);
    ::operator_delete(pEVar1,8);
  }
  g_executeRestart = (Event *)0x0;
  return;
}

// Signal @ 146ce3110

void __thiscall Event::Signal(Event *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146ce3113. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetEvent(this->m_event);
  return;
}

// Signal @ 146ce3120

void __thiscall Semaphore::Signal(Semaphore *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146ce312b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSemaphore(*(HANDLE *)this,1,(LPLONG)0x0);
  return;
}

// SleepMilliSeconds @ 146ce3140

void __stdcall Thread::Current::SleepMilliSeconds(DWORD dwMilliseconds)

{
                    /* WARNING: Could not recover jumptable at 0x000146ce3140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(dwMilliseconds);
  return;
}

// SleepSeconds @ 146ce3150

void __cdecl Thread::Current::SleepSeconds(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146ce3156. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(param_1 * 1000);
  return;
}

// SortSectionByAscendingRVA @ 146ce3170

bool __cdecl detail::SortSectionByAscendingRVA(ImageSection *param_1,ImageSection *param_2)

{
  return param_1->rva < param_2->rva;
}

// Spawn @ 146ce3180

Context * __cdecl
Process::Spawn(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,void *param_4,uint param_5)

{
  longlong lVar1;
  wchar_t *pwVar2;
  DWORD dwCreationFlags;
  HANDLE hSourceHandle;
  BOOL BVar3;
  Context *pCVar4;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceProcessHandle;
  Context *pCVar5;
  undefined8 *puVar6;
  Context *_Dst;
  wchar_t *pwVar7;
  uint uVar8;
  ulonglong uVar9;
  HANDLE local_e8;
  HANDLE local_e0;
  HANDLE local_d8;
  StrongTypedef<void_*,0> local_d0;
  _SECURITY_ATTRIBUTES local_c8;
  _STARTUPINFOW local_a8;
  
  _Dst = (Context *)0x0;
  pCVar4 = ::operator_new(0x50);
  pCVar5 = _Dst;
  if (pCVar4 != (Context *)0x0) {
    pCVar4->flags = param_5;
    pCVar4->pipeReadEnd = (void *)0x0;
    (pCVar4->processInformation).hProcess = (void *)0x0;
    (pCVar4->processInformation).hThread = (void *)0x0;
    (pCVar4->processInformation).dwProcessId = 0;
    (pCVar4->processInformation).dwThreadId = 0;
    (pCVar4->drainStdoutThread).m_value = (void *)0x0;
    (pCVar4->stdoutData)._Mypair._Myval2._Bx._Ptr = (wchar_t *)0x0;
    *(undefined8 *)((longlong)&(pCVar4->stdoutData)._Mypair._Myval2._Bx + 8) = 0;
    (pCVar4->stdoutData)._Mypair._Myval2._Mysize = 0;
    (pCVar4->stdoutData)._Mypair._Myval2._Myres = 7;
    (pCVar4->stdoutData)._Mypair._Myval2._Bx._Buf[0] = L'\0';
    pCVar5 = pCVar4;
  }
  local_c8.nLength = 0x18;
  local_c8.bInheritHandle = 1;
  local_c8.lpSecurityDescriptor = (LPVOID)0x0;
  local_a8.hStdError._4_4_ = 0;
  local_a8.cb = 0x68;
  local_e0 = (void *)0x0;
  local_e8 = (HANDLE)0x0;
  local_d8 = (HANDLE)0x0;
  local_a8._4_8_ = 0;
  local_a8._12_8_ = 0;
  local_a8._20_8_ = 0;
  local_a8._28_8_ = 0;
  local_a8.dwY = 0;
  local_a8.dwXSize = 0;
  local_a8.dwYSize = 0;
  local_a8.dwXCountChars = 0;
  local_a8.dwYCountChars = 0;
  local_a8.dwFillAttribute = 0;
  local_a8.dwFlags = 0;
  local_a8.wShowWindow = 0;
  local_a8.cbReserved2 = 0;
  local_a8._68_8_ = 0;
  local_a8._76_8_ = 0;
  local_a8.hStdInput._4_4_ = 0;
  local_a8.hStdOutput._0_4_ = 0;
  local_a8.hStdOutput._4_4_ = 0;
  local_a8.hStdError._0_4_ = 0;
  if ((param_5 & 1) == 0) {
LAB_146ce3443:
    if (param_3 != (wchar_t *)0x0) {
      _Dst = operator_new__(0x10000);
      wcscpy_s((wchar_t *)_Dst,0x8000,param_3);
    }
    Logging::Log(DEV,LOG_INFO,"%s%s\n");
    LOCK();
    g_indentationLevel[1] = g_indentationLevel[1] + 1;
    UNLOCK();
    Logging::Log(DEV,LOG_INFO,"%sExecutable: %S\n");
    Logging::Log(DEV,LOG_INFO,"%sCommand line: %S\n");
    Logging::Log(DEV,LOG_INFO,"%sWorking directory: %S\n");
    Logging::Log(DEV,LOG_INFO,"%sCustom environment block: %S\n");
    Logging::Log(DEV,LOG_INFO,"%sFlags: %u\n");
    LOCK();
    g_indentationLevel[1] = g_indentationLevel[1] + -1;
    UNLOCK();
    uVar8 = (param_5 & 2) << 0x1a;
    dwCreationFlags = uVar8 | 0x404;
    if ((param_5 & 4) == 0) {
      dwCreationFlags = uVar8 | 0x400;
    }
    BVar3 = CreateProcessW(param_1,(LPWSTR)_Dst,(LPSECURITY_ATTRIBUTES)0x0,
                           (LPSECURITY_ATTRIBUTES)0x0,1,dwCreationFlags,param_4,param_2,&local_a8,
                           (LPPROCESS_INFORMATION)&pCVar5->processInformation);
    if (BVar3 == 0) {
      GetLastError();
      Logging::Log(USER,LOG_ERROR,"%sCould not spawn process %S. Error: %d\n");
    }
    operator_delete__(_Dst);
    if ((param_5 & 1) != 0) {
      CloseHandle(local_e8);
      CloseHandle(local_d8);
    }
  }
  else {
    BVar3 = CreatePipe(&local_e0,&local_e8,&local_c8,0);
    if (BVar3 == 0) {
      GetLastError();
      Logging::Log(USER,LOG_ERROR,"%sCannot create stdout pipe. Error: 0x%X\n");
    }
    else {
      hTargetProcessHandle = GetCurrentProcess();
      hSourceHandle = local_e8;
      hSourceProcessHandle = GetCurrentProcess();
      BVar3 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,&local_d8,0,1,
                              2);
      if (BVar3 != 0) {
        pCVar5->pipeReadEnd = local_e0;
        puVar6 = ::operator_new(0x18);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = "DrainStdoutPipe";
          puVar6[1] = ::`anonymous_namespace'::DrainPipe;
          puVar6[2] = pCVar5;
        }
        Thread::Create((uint)&local_d0,(_func___cdecl_uint_void_ptr *)0x4000,
                       `Thread::
                       CreateFromFunction<StrongTypedef<unsigned_int,0>_(__cdecl*)(Process::Context_*),Process::Context_*_&>'
                       ::__l2::<lambda_2>::<lambda_invoker_cdecl>);
        (pCVar5->drainStdoutThread).m_value = local_d0.m_value;
        local_a8.hStdOutput._0_4_ = SUB84(local_e8,0);
        local_a8.hStdOutput._4_4_ = (undefined4)((ulonglong)local_e8 >> 0x20);
        local_a8.hStdError._0_4_ = SUB84(local_d8,0);
        local_a8.hStdError._4_4_ = (undefined4)((ulonglong)local_d8 >> 0x20);
        local_a8.dwFlags = 0x100;
        goto LAB_146ce3443;
      }
      GetLastError();
      Logging::Log(USER,LOG_ERROR,"%sCannot duplicate stdout pipe. Error: 0x%X\n");
      CloseHandle(local_e0);
      CloseHandle(local_e8);
    }
    if (pCVar5 != (Context *)0x0) {
      uVar9 = (pCVar5->stdoutData)._Mypair._Myval2._Myres;
      if (7 < uVar9) {
        pwVar2 = (pCVar5->stdoutData)._Mypair._Myval2._Bx._Ptr;
        lVar1 = uVar9 * 2;
        uVar9 = lVar1 + 2;
        pwVar7 = pwVar2;
        if (0xfff < uVar9) {
          pwVar7 = *(wchar_t **)(pwVar2 + -4);
          uVar9 = lVar1 + 0x29;
          if (0x1f < (ulonglong)((longlong)pwVar2 + (-8 - (longlong)pwVar7))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pwVar7,uVar9);
      }
      (pCVar5->stdoutData)._Mypair._Myval2._Mysize = 0;
      (pCVar5->stdoutData)._Mypair._Myval2._Myres = 7;
      (pCVar5->stdoutData)._Mypair._Myval2._Bx._Buf[0] = L'\0';
      ::operator_delete(pCVar5,0x50);
    }
    pCVar5 = (Context *)0x0;
  }
  return pCVar5;
}

// Start @ 146ce36d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

StrongTypedef<unsigned_long,0> __thiscall
ClientCommandThread::Start
          (ClientCommandThread *this,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1,
          Event *param_2,Event *param_3,CriticalSection *param_4)

{
  DWORD DVar1;
  undefined8 *puVar2;
  undefined8 in_stack_00000030;
  undefined1 auStack_a8 [32];
  StrongTypedef<void_*,0> local_88 [2];
  char *local_78;
  code *local_70;
  ClientCommandThread *local_68;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> local_60;
  Event *local_40;
  CriticalSection *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78 = "Live coding commands";
  local_70 = ThreadFunction;
  local_68 = this;
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
            (&local_60,
             (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)param_2);
  local_38 = param_4;
  local_30 = in_stack_00000030;
  local_40 = param_3;
  puVar2 = ::operator_new(0x50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = local_78;
    puVar2[1] = local_70;
    puVar2[2] = local_68;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (puVar2 + 3),&local_60);
    puVar2[7] = local_40;
    puVar2[8] = local_38;
    puVar2[9] = local_30;
  }
  Thread::Create((uint)local_88,(_func___cdecl_uint_void_ptr *)&DAT_00020000,
                 `Thread::
                 CreateFromMemberFunction<ClientCommandThread,StrongTypedef<unsigned_int,0>_(__cdecl_ClientCommandThread::*)(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_const_&,Event_*,Event_*,CriticalSection_*),std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_const_&,Event_*_&,Event_*_&,CriticalSection_*_&>'
                 ::__l2::<lambda_2>::<lambda_invoker_cdecl>);
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>(&local_60);
  (this->m_thread).m_value = local_88[0].m_value;
  DVar1 = GetThreadId(local_88[0].m_value);
  *(DWORD *)&(param_1->_Mypair)._Myval2._Bx = DVar1;
  return (StrongTypedef<unsigned_long,0>)(ulong)param_1;
}

// Start @ 146ce37f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall ClientStartupThread::Start(ClientStartupThread *this,char *param_1,Enum param_2)

{
  size_t sVar1;
  undefined8 _Dst;
  undefined8 uVar2;
  _Bxty *p_Var3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStackY_108 [32];
  Enum local_d8;
  undefined4 uStack_d4;
  _Bxty local_d0;
  ulonglong local_c0;
  ulonglong local_b8;
  _Bxty local_b0;
  ulonglong local_a0;
  ulonglong local_98;
  char *local_88;
  code *local_80;
  ClientStartupThread *local_78;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> local_70;
  Enum local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_d8 = param_2;
  sVar1 = strlen(param_1);
  detail::ToWideString
            ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)&local_d0,
             param_1,sVar1);
  uVar2 = &local_d0;
  if (7 < local_b8) {
    uVar2 = local_d0._Ptr;
  }
  local_b0._Ptr = (wchar_t *)0x0;
  local_b0._8_8_ = 0;
  if (0x7ffffffffffffffe < local_c0) {
                    /* WARNING: Subroutine does not return */
    std::_Xlen_string();
  }
  if (local_c0 < 8) {
    _Dst = *(undefined8 *)uVar2;
    uVar6 = 7;
    local_a0 = local_c0;
    local_98 = 7;
    local_b0._Ptr = (wchar_t *)_Dst;
    local_b0._8_8_ = *(undefined8 *)(uVar2 + 8);
  }
  else {
    uVar6 = local_c0 | 7;
    if (uVar6 < 0x7fffffffffffffff) {
      if (uVar6 < 10) {
        uVar6 = 10;
      }
      uVar5 = uVar6 + 1;
      if (0x7fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_bad_array_new_length();
      }
    }
    else {
      uVar5 = 0x7fffffffffffffff;
      uVar6 = 0x7ffffffffffffffe;
    }
    _Dst = std::_Allocate<16,std::_Default_allocate_traits>(uVar5 * 2);
    local_a0 = local_c0;
    local_b0._Ptr = (wchar_t *)_Dst;
    local_98 = uVar6;
    memcpy((void *)_Dst,(void *)uVar2,local_c0 * 2 + 2);
  }
  uVar5 = 0;
  if (local_c0 != 0) {
    do {
      uVar2 = &local_d0;
      if (7 < local_b8) {
        uVar2 = local_d0._Ptr;
      }
      if (*(wchar_t *)(uVar2 + uVar5 * 2) == L'\\') {
LAB_146ce39d9:
        p_Var3 = &local_b0;
        if (7 < uVar6) {
          p_Var3 = (_Bxty *)_Dst;
        }
        p_Var3->_Buf[uVar5] = L'_';
        uVar6 = local_98;
        _Dst = local_b0._Ptr;
      }
      else {
        uVar2 = &local_d0;
        if (7 < local_b8) {
          uVar2 = local_d0._Ptr;
        }
        if (*(wchar_t *)(uVar2 + uVar5 * 2) == L'/') goto LAB_146ce39d9;
        uVar2 = &local_d0;
        if (7 < local_b8) {
          uVar2 = local_d0._Ptr;
        }
        if (*(wchar_t *)(uVar2 + uVar5 * 2) == L'*') goto LAB_146ce39d9;
        uVar2 = &local_d0;
        if (7 < local_b8) {
          uVar2 = local_d0._Ptr;
        }
        if (*(wchar_t *)(uVar2 + uVar5 * 2) == L'?') goto LAB_146ce39d9;
        uVar2 = &local_d0;
        if (7 < local_b8) {
          uVar2 = local_d0._Ptr;
        }
        if (*(wchar_t *)(uVar2 + uVar5 * 2) == L'\"') goto LAB_146ce39d9;
        uVar2 = &local_d0;
        if (7 < local_b8) {
          uVar2 = local_d0._Ptr;
        }
        if (*(wchar_t *)(uVar2 + uVar5 * 2) == L'<') goto LAB_146ce39d9;
        uVar2 = &local_d0;
        if (7 < local_b8) {
          uVar2 = local_d0._Ptr;
        }
        if (*(wchar_t *)(uVar2 + uVar5 * 2) == L'>') goto LAB_146ce39d9;
        uVar2 = &local_d0;
        if (7 < local_b8) {
          uVar2 = local_d0._Ptr;
        }
        if (*(wchar_t *)(uVar2 + uVar5 * 2) == L'|') goto LAB_146ce39d9;
        uVar2 = &local_d0;
        if (7 < local_b8) {
          uVar2 = local_d0._Ptr;
        }
        if (*(wchar_t *)(uVar2 + uVar5 * 2) == L':') goto LAB_146ce39d9;
        uVar2 = &local_d0;
        if (7 < local_b8) {
          uVar2 = local_d0._Ptr;
        }
        if (*(wchar_t *)(uVar2 + uVar5 * 2) == L';') goto LAB_146ce39d9;
        uVar2 = &local_d0;
        if (7 < local_b8) {
          uVar2 = local_d0._Ptr;
        }
        if (*(wchar_t *)(uVar2 + uVar5 * 2) == L',') goto LAB_146ce39d9;
        uVar2 = &local_d0;
        if (7 < local_b8) {
          uVar2 = local_d0._Ptr;
        }
        if (*(wchar_t *)(uVar2 + uVar5 * 2) == L'.') goto LAB_146ce39d9;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_c0);
  }
  if (7 < local_b8) {
    uVar6 = local_b8 * 2 + 2;
    uVar2 = local_d0._Ptr;
    if (0xfff < uVar6) {
      uVar2 = *(undefined8 *)(local_d0._Ptr + -4);
      uVar6 = local_b8 * 2 + 0x29;
      if ((char *)0x1f < (char *)((longlong)local_d0._Ptr + (-8 - uVar2))) goto LAB_146ce3b32;
    }
    ::operator_delete((void *)uVar2,uVar6);
  }
  local_88 = "Live coding startup";
  local_80 = ThreadFunction;
  local_78 = this;
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
            (&local_70,
             (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)&local_b0);
  local_50 = local_d8;
  puVar4 = ::operator_new(0x40);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = local_88;
    puVar4[1] = local_80;
    puVar4[2] = local_78;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (puVar4 + 3),&local_70);
    *(Enum *)(puVar4 + 7) = local_50;
  }
  Thread::Create((uint)&local_d8,(_func___cdecl_uint_void_ptr *)&DAT_00020000,
                 `Thread::
                 CreateFromMemberFunction<ClientStartupThread,StrongTypedef<unsigned_int,0>_(__cdecl_ClientStartupThread::*)(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_const_&,enum_RunMode::Enum),std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_&,enum_RunMode::Enum_&>'
                 ::__l2::<lambda_2>::<lambda_invoker_cdecl>);
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>(&local_70);
  (this->m_thread).m_value = (void *)CONCAT44(uStack_d4,local_d8);
  if (7 < local_98) {
    uVar6 = local_98 * 2 + 2;
    uVar2 = local_b0._Ptr;
    if (0xfff < uVar6) {
      uVar2 = *(undefined8 *)(local_b0._Ptr + -4);
      uVar6 = local_98 * 2 + 0x29;
      if ((char *)0x1f < (char *)((longlong)local_b0._Ptr + (-8 - uVar2))) {
LAB_146ce3b32:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar2,uVar6);
  }
  return;
}

// Start @ 146ce3b90

StrongTypedef<unsigned_long,0> __thiscall
ClientUserCommandThread::Start
          (ClientUserCommandThread *this,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1,
          Event *param_2,CriticalSection *param_3)

{
  Event *pEVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  HANDLE in_stack_00000028;
  
  if (&this->m_processGroupName !=
      (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)param_2) {
    pEVar1 = param_2 + 2;
    if (&DAT_00000007 < param_2[3].m_event) {
      param_2 = param_2->m_event;
    }
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign
              (&this->m_processGroupName,(wchar_t *)param_2,(ulong64)pEVar1->m_event);
  }
  puVar3 = ::operator_new(0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = "Live coding user commands";
    puVar3[1] = ThreadFunction;
    puVar3[2] = this;
    puVar3[3] = param_3;
    puVar3[4] = in_stack_00000028;
  }
  Thread::Create((uint)&stack0x00000028,(_func___cdecl_uint_void_ptr *)&DAT_00020000,
                 `Thread::
                 CreateFromMemberFunction<ClientUserCommandThread,StrongTypedef<unsigned_int,0>_(__cdecl_ClientUserCommandThread::*)(Event_*,CriticalSection_*),Event_*_&,CriticalSection_*_&>'
                 ::__l2::<lambda_2>::<lambda_invoker_cdecl>);
  (this->m_thread).m_value = in_stack_00000028;
  DVar2 = GetThreadId(in_stack_00000028);
  *(DWORD *)&(param_1->_Mypair)._Myval2._Bx = DVar2;
  return (StrongTypedef<unsigned_long,0>)(ulong)param_1;
}

// StartsWith @ 146ce48e0

bool __cdecl string::StartsWith(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  
  cVar1 = *param_1;
  uVar3 = 0;
  cVar2 = *param_2;
  while( true ) {
    if (cVar1 == '\0') {
      if (cVar2 == '\0') {
        return true;
      }
      return false;
    }
    if (cVar2 == '\0') {
      return true;
    }
    if (cVar1 != cVar2) break;
    uVar3 = (ulonglong)((int)uVar3 + 1);
    cVar1 = param_1[uVar3];
    cVar2 = param_2[uVar3];
  }
  return false;
}

// StartsWith @ 146ce4920

bool __cdecl string::StartsWith(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  ulonglong uVar3;
  
  wVar1 = *param_1;
  uVar3 = 0;
  wVar2 = *param_2;
  while( true ) {
    if (wVar1 == L'\0') {
      if (wVar2 == L'\0') {
        return true;
      }
      return false;
    }
    if (wVar2 == L'\0') {
      return true;
    }
    if (wVar1 != wVar2) break;
    uVar3 = (ulonglong)((int)uVar3 + 1);
    wVar1 = param_1[uVar3];
    wVar2 = param_2[uVar3];
  }
  return false;
}

// StartsWithEx @ 146ce4960

char * __cdecl string::StartsWithEx(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *param_2;
  while( true ) {
    if (cVar1 == '\0') {
      return param_1;
    }
    param_2 = param_2 + 1;
    cVar2 = *param_1;
    param_1 = param_1 + 1;
    if (cVar2 != cVar1) break;
    cVar1 = *param_2;
  }
  return (char *)0x0;
}

// StartsWithEx @ 146ce49a0

wchar_t * __cdecl string::StartsWithEx(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  
  wVar1 = *param_2;
  while( true ) {
    if (wVar1 == L'\0') {
      return param_1;
    }
    param_2 = param_2 + 1;
    wVar2 = *param_1;
    param_1 = param_1 + 1;
    if (wVar2 != wVar1) break;
    wVar1 = *param_2;
  }
  return (wchar_t *)0x0;
}

// Startup @ 146ce49e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl restart::Startup(void)

{
  bool bVar1;
  StrongTypedef<unsigned_long,0> SVar2;
  DWORD DVar3;
  Event *pEVar4;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar5;
  HANDLE pvVar6;
  undefined1 auStack_78 [32];
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_58;
  DWORD local_50;
  undefined4 local_48;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  bVar1 = false;
  local_48 = 0;
  SVar2.m_value = GetCurrentProcessId();
  pEVar4 = ::operator_new(8);
  if (pEVar4 == (Event *)0x0) {
    pEVar4 = (Event *)0x0;
  }
  else {
    pbVar5 = primitiveNames::RequestRestart(&local_40,SVar2);
    if (7 < (pbVar5->_Mypair)._Myval2._Myres) {
      pbVar5 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (pbVar5->_Mypair)._Myval2._Bx._Ptr;
    }
    pvVar6 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)pbVar5);
    pEVar4->m_event = pvVar6;
    DVar3 = GetLastError();
    if (pEVar4->m_event == (void *)0x0) {
      local_58 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 L"(unnamed)";
      if (pbVar5 != (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0)
      {
        local_58 = pbVar5;
      }
      local_50 = DVar3;
      Logging::Log(USER,LOG_ERROR,"%sCannot create event %S. Error: 0x%X\n");
    }
    bVar1 = true;
  }
  g_requestRestart = pEVar4;
  if (bVar1) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>(&local_40);
  }
  bVar1 = false;
  pEVar4 = ::operator_new(8);
  if (pEVar4 == (Event *)0x0) {
    pEVar4 = (Event *)0x0;
  }
  else {
    bVar1 = true;
    pbVar5 = primitiveNames::PreparedRestart(&local_40,SVar2);
    if (7 < (pbVar5->_Mypair)._Myval2._Myres) {
      pbVar5 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (pbVar5->_Mypair)._Myval2._Bx._Ptr;
    }
    pvVar6 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)pbVar5);
    pEVar4->m_event = pvVar6;
    DVar3 = GetLastError();
    if (pEVar4->m_event == (void *)0x0) {
      local_58 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 L"(unnamed)";
      if (pbVar5 != (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0)
      {
        local_58 = pbVar5;
      }
      local_50 = DVar3;
      Logging::Log(USER,LOG_ERROR,"%sCannot create event %S. Error: 0x%X\n");
    }
  }
  g_restartPrepared = pEVar4;
  if (bVar1) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>(&local_40);
  }
  bVar1 = false;
  pEVar4 = ::operator_new(8);
  if (pEVar4 == (Event *)0x0) {
    pEVar4 = (Event *)0x0;
  }
  else {
    bVar1 = true;
    pbVar5 = primitiveNames::Restart(&local_40,SVar2);
    if (7 < (pbVar5->_Mypair)._Myval2._Myres) {
      pbVar5 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (pbVar5->_Mypair)._Myval2._Bx._Ptr;
    }
    pvVar6 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)pbVar5);
    pEVar4->m_event = pvVar6;
    DVar3 = GetLastError();
    if (pEVar4->m_event == (void *)0x0) {
      local_58 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 L"(unnamed)";
      if (pbVar5 != (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0)
      {
        local_58 = pbVar5;
      }
      local_50 = DVar3;
      Logging::Log(USER,LOG_ERROR,"%sCannot create event %S. Error: 0x%X\n");
    }
  }
  g_executeRestart = pEVar4;
  if (bVar1) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>(&local_40);
  }
  return;
}

// StartupMutex @ 146ce56c0

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
primitiveNames::StartupMutex
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1)

{
  ulonglong uVar1;
  ulong64 uVar2;
  _Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1> *p_Var3
  ;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar4;
  <lambda_1> local_res8;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 7;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::reserve
            (__return_storage_ptr__,0x80);
  p_Var3 = &param_1->_Mypair;
  if (7 < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
            (__return_storage_ptr__,(wchar_t *)param_1,(p_Var3->_Myval2)._Mysize);
  uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
  uVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
  if (9 < uVar1 - uVar2) {
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar2 + 10;
    pbVar4 = __return_storage_ptr__;
    if (7 < uVar1) {
      pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    memmove((void *)((longlong)&(pbVar4->_Mypair)._Myval2._Bx + uVar2 * 2),L"_UE_LC_IPM",0x14);
    *(undefined2 *)((longlong)&(pbVar4->_Mypair)._Myval2._Mysize + uVar2 * 2 + 4) = 0;
    return __return_storage_ptr__;
  }
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
            (__return_storage_ptr__,10,local_res8,L"_UE_LC_IPM",10);
  return __return_storage_ptr__;
}

// StartupNamedSharedMemory @ 146ce57b0

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
primitiveNames::StartupNamedSharedMemory
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1)

{
  ulonglong uVar1;
  ulong64 uVar2;
  _Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1> *p_Var3
  ;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar4;
  <lambda_1> local_res8;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 7;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::reserve
            (__return_storage_ptr__,0x80);
  p_Var3 = &param_1->_Mypair;
  if (7 < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
            (__return_storage_ptr__,(wchar_t *)param_1,(p_Var3->_Myval2)._Mysize);
  uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
  uVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
  if (9 < uVar1 - uVar2) {
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar2 + 10;
    pbVar4 = __return_storage_ptr__;
    if (7 < uVar1) {
      pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    memmove((void *)((longlong)&(pbVar4->_Mypair)._Myval2._Bx + uVar2 * 2),L"_UE_LC_NSM",0x14);
    *(undefined2 *)((longlong)&(pbVar4->_Mypair)._Myval2._Mysize + uVar2 * 2 + 4) = 0;
    return __return_storage_ptr__;
  }
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
            (__return_storage_ptr__,10,local_res8,L"_UE_LC_NSM",10);
  return __return_storage_ptr__;
}

// Store @ 146ce5c20

void __thiscall HeartBeat::Store(HeartBeat *this)

{
  _FILETIME local_res8;
  ScopedLock local_res10 [3];
  
  local_res8.dwLowDateTime = 0;
  local_res8.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_res8);
  InterprocessMutex::ScopedLock::ScopedLock(local_res10,this->m_mutex);
  *this->m_memory->memoryView = local_res8;
                    /* WARNING: Could not recover jumptable at 0x000146ce5c71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseMutex((local_res10[0].m_mutex)->m_mutex);
  return;
}

// Suspend @ 146ce5c80

void __cdecl Process::Suspend(Context *param_1)

{
  long lVar1;
  
  lVar1 = (*WindowsInternals::NtSuspendProcess.m_function)((param_1->processInformation).hProcess);
  if (lVar1 < 0) {
    Logging::Log(USER,LOG_ERROR,"%sCall to function %s in module %s failed. Error: 0x%X\n");
  }
  return;
}

// Suspend @ 146ce5d00

void __cdecl Process::Suspend(StrongTypedef<void_*,0> param_1)

{
  long lVar1;
  
  lVar1 = (*WindowsInternals::NtSuspendProcess.m_function)(param_1.m_value);
  if (lVar1 < 0) {
    Logging::Log(USER,LOG_ERROR,"%sCall to function %s in module %s failed. Error: 0x%X\n");
  }
  return;
}

// Suspend @ 146ce5d80

DWORD __stdcall Thread::Suspend(HANDLE hThread)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146ce5d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SuspendThread(hThread);
  return DVar1;
}

// Terminate @ 146ce5d90

void __cdecl Process::Terminate(Context *param_1)

{
  HANDLE hProcess;
  
  hProcess = (param_1->processInformation).hProcess;
  TerminateProcess(hProcess,0);
                    /* WARNING: Could not recover jumptable at 0x000146ce5db2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WaitForSingleObject(hProcess,0xffffffff);
  return;
}

// Terminate @ 146ce5dc0

void __cdecl Process::Terminate(StrongTypedef<void_*,0> param_1)

{
  TerminateProcess(param_1.m_value,0);
                    /* WARNING: Could not recover jumptable at 0x000146ce5dde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WaitForSingleObject(param_1.m_value,0xffffffff);
  return;
}

// Terminate @ 146ce5df0

void __cdecl Thread::Terminate(StrongTypedef<void_*,0> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146ce5df2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateThread(param_1.m_value,0);
  return;
}

// ThreadFunction @ 146ce5e00

StrongTypedef<unsigned_int,0> __thiscall
ClientCommandThread::ThreadFunction
          (ClientCommandThread *this,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1,
          Event *param_2,Event *param_3,CriticalSection *param_4)

{
  DuplexPipeClient *pDVar1;
  _func___cdecl_bool_DuplexPipe_ptr_void_ptr_void_ptr_ulong64 *p_Var2;
  InterprocessMutex *pIVar3;
  bool bVar4;
  StrongTypedef<unsigned_long,0> SVar5;
  DWORD DVar6;
  void *_Memory;
  _FILETIME local_res18 [2];
  LPCRITICAL_SECTION in_stack_00000030;
  undefined1 local_4b8 [8];
  undefined8 local_4b0;
  HeartBeat local_4a8;
  CommandMap local_498;
  
  Event::WaitTimeout((Event *)param_4,0xffffffff);
  CommandMap::CommandMap(&local_498);
  local_498.m_actions[0x6e] = CommandMap::ReceiveAndCallAction<actions::LoadPatch>;
  local_498.m_actions[0x70] = CommandMap::ReceiveAndCallAction<actions::UnloadPatch>;
  local_498.m_actions[0x6b] = CommandMap::ReceiveAndCallAction<actions::EnterSyncPoint>;
  local_498.m_actions[0x6c] = CommandMap::ReceiveAndCallAction<actions::LeaveSyncPoint>;
  local_498.m_actions[0x71] = CommandMap::ReceiveAndCallAction<actions::CallEntryPoint>;
  local_498.m_actions[0x6d] = CommandMap::ReceiveAndCallAction<actions::CallHooks>;
  local_498.m_actions[0x72] = CommandMap::ReceiveAndCallAction<actions::LogOutput>;
  local_498.m_actions[0x74] = CommandMap::ReceiveAndCallAction<actions::CompilationFinished>;
  local_498.m_actions[0x85] = CommandMap::ReceiveAndCallAction<actions::PreCompile>;
  local_498.m_actions[0x86] = CommandMap::ReceiveAndCallAction<actions::PostCompile>;
  local_498.m_actions[0x87] = CommandMap::ReceiveAndCallAction<actions::TriggerReload>;
  SVar5.m_value = GetCurrentProcessId();
  if (&DAT_00000007 < param_2[3].m_event) {
    param_2 = param_2->m_event;
  }
  HeartBeat::HeartBeat(&local_4a8,(wchar_t *)param_2,SVar5);
  pIVar3 = local_4a8.m_mutex;
LAB_146ce5f20:
  do {
    bVar4 = Event::WaitTimeout(param_3,10);
    while (!bVar4) {
      if (*this->m_pipe == (DuplexPipeClient)0xffffffffffffffff) goto LAB_146ce60c6;
      local_res18[0].dwLowDateTime = 0;
      local_res18[0].dwHighDateTime = 0;
      GetSystemTimeAsFileTime(local_res18);
      InterprocessMutex::ScopedLock::ScopedLock((ScopedLock *)&local_4a8,pIVar3);
      *(local_4a8.m_memory)->memoryView = local_res18[0];
      ReleaseMutex((local_4a8.m_mutex)->m_mutex);
      bVar4 = Event::WaitTimeout(param_3,10);
    }
    if (*this->m_pipe == (DuplexPipeClient)0xffffffffffffffff) {
LAB_146ce60c6:
      *(undefined4 *)&(param_1->_Mypair)._Myval2._Bx = 1;
      if (local_4a8.m_memory != (NamedSharedMemory *)0x0) {
        UnmapViewOfFile((local_4a8.m_memory)->memoryView);
        CloseHandle((local_4a8.m_memory)->memoryMapping);
        ::operator_delete(local_4a8.m_memory,0x18);
      }
      if (pIVar3 != (InterprocessMutex *)0x0) {
        CloseHandle(pIVar3->m_mutex);
        ::operator_delete(pIVar3,8);
      }
      return (StrongTypedef<unsigned_int,0>)(uint)param_1;
    }
    EnterCriticalSection(in_stack_00000030);
    pDVar1 = this->m_pipe;
    local_res18[0] = (_FILETIME)((ulonglong)local_res18[0] & 0xffffffffffffff00);
    local_4b0 = 0x73;
    DuplexPipe::Send((DuplexPipe *)pDVar1,&local_4b0,8);
    DuplexPipe::Send((DuplexPipe *)pDVar1,local_res18,1);
    local_4b8[0] = 0;
    DuplexPipe::Read((DuplexPipe *)pDVar1,local_4b8,1);
    pDVar1 = this->m_pipe;
    local_res18[0].dwLowDateTime = 0;
    local_res18[0].dwHighDateTime = 0;
    bVar4 = DuplexPipe::Read((DuplexPipe *)pDVar1,local_res18,8);
    if (bVar4) {
      do {
        _Memory = (void *)0x0;
        p_Var2 = local_498.m_actions[(ulonglong)local_res18[0] & 0xffffffff];
        DVar6 = 0;
        if (local_res18[0].dwHighDateTime != 0) {
          _Memory = malloc((ulonglong)local_res18[0].dwHighDateTime);
          DVar6 = local_res18[0].dwHighDateTime;
        }
        bVar4 = (*p_Var2)((DuplexPipe *)pDVar1,(void *)0x0,_Memory,(ulong64)DVar6);
        free(_Memory);
        if (!bVar4) goto LAB_146ce60b1;
        local_res18[0].dwLowDateTime = 0;
        local_res18[0].dwHighDateTime = 0;
        bVar4 = DuplexPipe::Read((DuplexPipe *)pDVar1,local_res18,8);
      } while (bVar4);
      LeaveCriticalSection(in_stack_00000030);
      goto LAB_146ce5f20;
    }
LAB_146ce60b1:
    LeaveCriticalSection(in_stack_00000030);
  } while( true );
}

// ThreadFunction @ 146ce6140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

StrongTypedef<unsigned_int,0> __thiscall
ClientStartupThread::ThreadFunction
          (ClientStartupThread *this,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1,
          Enum param_2)

{
  LPCWSTR _Dst;
  ulong64 uVar1;
  void *pvVar2;
  HANDLE pvVar3;
  DuplexPipeClient *pDVar4;
  ClientUserCommandThread *pCVar5;
  CriticalSection *pCVar6;
  size_t sVar7;
  size_t sVar8;
  size_t sVar9;
  bool bVar10;
  DWORD DVar11;
  long lVar12;
  BOOL BVar13;
  uint extraout_EAX;
  uint extraout_EAX_00;
  _Bxty *p_Var14;
  HANDLE pvVar15;
  NamedSharedMemory *pNVar16;
  size_t sVar17;
  Context *pCVar18;
  HANDLE pvVar19;
  LPCRITICAL_SECTION p_Var20;
  Event *pEVar21;
  LPCRITICAL_SECTION p_Var22;
  LPCRITICAL_SECTION p_Var23;
  undefined8 *puVar24;
  int *piVar25;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *lpValue;
  LPWSTR _Str;
  StrongTypedef<void_*,0> SVar26;
  Environment *pEVar27;
  void *_Dst_00;
  int iVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  ulonglong uVar31;
  Event *pEVar32;
  allocator<wchar_t> *_Src;
  wchar_t *pwVar33;
  longlong lVar34;
  undefined4 in_register_00000084;
  Event *pEVar35;
  undefined1 auStackY_898 [32];
  <lambda_1> local_858 [8];
  Event local_850;
  _Bxty local_848;
  HMODULE local_838;
  DWORD local_830;
  long local_82c;
  undefined4 local_828;
  code *local_820;
  size_t local_818;
  size_t local_810;
  size_t local_808;
  size_t local_800;
  _Bxty local_7f8;
  void *local_7e8;
  ulonglong uStack_7e0;
  _Bxty local_7d8;
  longlong local_7c8;
  ulonglong uStack_7c0;
  _Bxty local_7b8;
  longlong local_7a8;
  ulonglong uStack_7a0;
  allocator<wchar_t> *local_798;
  undefined8 uStack_790;
  longlong local_788;
  ulonglong uStack_780;
  _Bxty local_778;
  longlong local_768;
  ulonglong local_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  CommandMap local_6c8;
  WCHAR local_268 [264];
  ulonglong local_58;
  
  pEVar35 = (Event *)CONCAT44(in_register_00000084,param_2);
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_898;
  local_848._0_4_ = 0;
  local_7f8._Ptr = (wchar_t *)0x0;
  local_7f8._8_8_ = 0;
  p_Var14 = std::_Allocate<16,std::_Default_allocate_traits>(0x110);
  uStack_7e0 = 0x87;
  p_Var14->_Buf[0] = local_7f8._Buf[0];
  pvVar2 = pEVar35[2].m_event;
  local_7e8 = (void *)0x0;
  pEVar21 = pEVar35;
  if ((void *)0x7 < pEVar35[3].m_event) {
    pEVar21 = pEVar35->m_event;
  }
  local_7f8._Ptr = (wchar_t *)p_Var14;
  if (pvVar2 < (void *)0x88) {
    local_7e8 = pvVar2;
    memmove(p_Var14,pEVar21,(longlong)pvVar2 * 2);
    p_Var14->_Buf[(longlong)pvVar2] = L'\0';
  }
  else {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               &local_7f8,(ulong64)pvVar2,local_858[0],(wchar_t *)pEVar21,(ulong64)pvVar2);
  }
  pvVar2 = local_7e8;
  if (uStack_7e0 - (longlong)local_7e8 < 10) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               &local_7f8,10,local_858[0],L"_UE_LC_JOB",10);
  }
  else {
    uVar29 = &local_7f8;
    if (7 < uStack_7e0) {
      uVar29 = local_7f8._Ptr;
    }
    _Dst = (LPCWSTR)(uVar29 + local_7e8 * 2);
    local_7e8 = (void *)((longlong)local_7e8 + 10);
    memmove(_Dst,L"_UE_LC_JOB",0x14);
    *(WCHAR *)(uVar29 + ((longlong)pvVar2 + 10) * 2) = L'\0';
  }
  uVar29 = &local_7f8;
  if (7 < uStack_7e0) {
    uVar29 = local_7f8._Ptr;
  }
  pvVar15 = CreateJobObjectW((LPSECURITY_ATTRIBUTES)0x0,(LPCWSTR)uVar29);
  this->m_job = pvVar15;
  if (7 < uStack_7e0) {
    uVar31 = uStack_7e0 * 2 + 2;
    uVar29 = local_7f8._Ptr;
    if (0xfff < uVar31) {
      uVar29 = *(undefined8 *)(local_7f8._Ptr + -4);
      uVar31 = uStack_7e0 * 2 + 0x29;
      if ((char *)0x1f < (char *)((longlong)local_7f8._Ptr + (-8 - uVar29))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar29,uVar31);
  }
  uStack_740 = 0;
  local_748 = 0x3000;
  local_758 = 0;
  uStack_750 = 0;
  local_738 = 0;
  uStack_730 = 0;
  local_728 = 0;
  uStack_720 = 0;
  local_718 = 0;
  uStack_710 = 0;
  local_708 = 0;
  uStack_700 = 0;
  local_6f8 = 0;
  uStack_6f0 = 0;
  local_6e8 = 0;
  uStack_6e0 = 0;
  local_6d8 = 0;
  uStack_6d0 = 0;
  SetInformationJobObject(this->m_job,JobObjectExtendedLimitInformation,&local_758,0x90);
  local_7f8._Ptr = (wchar_t *)0x0;
  local_7f8._8_8_ = 0;
  p_Var14 = std::_Allocate<16,std::_Default_allocate_traits>(0x110);
  uStack_7e0 = 0x87;
  p_Var14->_Buf[0] = local_7f8._Buf[0];
  pvVar2 = pEVar35[2].m_event;
  local_7e8 = (void *)0x0;
  pEVar21 = pEVar35;
  if ((void *)0x7 < pEVar35[3].m_event) {
    pEVar21 = pEVar35->m_event;
  }
  local_7f8._Ptr = (wchar_t *)p_Var14;
  if (pvVar2 < (void *)0x88) {
    local_7e8 = pvVar2;
    memmove(p_Var14,pEVar21,(longlong)pvVar2 * 2);
    p_Var14->_Buf[(longlong)pvVar2] = L'\0';
  }
  else {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               &local_7f8,(ulong64)pvVar2,local_858[0],(wchar_t *)pEVar21,(ulong64)pvVar2);
  }
  pvVar2 = local_7e8;
  if (uStack_7e0 - (longlong)local_7e8 < 10) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               &local_7f8,10,local_858[0],L"_UE_LC_IPM",10);
  }
  else {
    uVar29 = &local_7f8;
    if (7 < uStack_7e0) {
      uVar29 = local_7f8._Ptr;
    }
    pwVar33 = (wchar_t *)(uVar29 + local_7e8 * 2);
    local_7e8 = (void *)((longlong)local_7e8 + 10);
    memmove(pwVar33,L"_UE_LC_IPM",0x14);
    *(wchar_t *)(uVar29 + ((longlong)pvVar2 + 10) * 2) = L'\0';
  }
  uVar29 = &local_7f8;
  if (7 < uStack_7e0) {
    uVar29 = local_7f8._Ptr;
  }
  pvVar15 = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,0,(LPCWSTR)uVar29);
  if (7 < uStack_7e0) {
    uVar31 = uStack_7e0 * 2 + 2;
    uVar29 = local_7f8._Ptr;
    if (0xfff < uVar31) {
      uVar29 = *(undefined8 *)(local_7f8._Ptr + -4);
      uVar31 = uStack_7e0 * 2 + 0x29;
      if ((char *)0x1f < (char *)((longlong)local_7f8._Ptr + (-8 - uVar29))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar29,uVar31);
  }
  DVar11 = WaitForSingleObject(pvVar15,0xffffffff);
  if (((DVar11 == 0x80) || (DVar11 == 0x102)) || (DVar11 == 0xffffffff)) {
    Logging::Log(DEV,LOG_ERROR,"ERROR: %s%s\n");
  }
  local_7f8._Ptr = (wchar_t *)0x0;
  local_7f8._8_8_ = 0;
  p_Var14 = std::_Allocate<16,std::_Default_allocate_traits>(0x110);
  uStack_7e0 = 0x87;
  p_Var14->_Buf[0] = local_7f8._Buf[0];
  pvVar2 = pEVar35[2].m_event;
  local_7e8 = (void *)0x0;
  pEVar21 = pEVar35;
  if ((void *)0x7 < pEVar35[3].m_event) {
    pEVar21 = pEVar35->m_event;
  }
  local_7f8._Ptr = (wchar_t *)p_Var14;
  if (pvVar2 < (void *)0x88) {
    local_7e8 = pvVar2;
    memmove(p_Var14,pEVar21,(longlong)pvVar2 * 2);
    p_Var14->_Buf[(longlong)pvVar2] = L'\0';
  }
  else {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               &local_7f8,(ulong64)pvVar2,local_858[0],(wchar_t *)pEVar21,(ulong64)pvVar2);
  }
  pvVar2 = local_7e8;
  if (uStack_7e0 - (longlong)local_7e8 < 10) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               &local_7f8,10,local_858[0],L"_UE_LC_NSM",10);
  }
  else {
    uVar29 = &local_7f8;
    if (7 < uStack_7e0) {
      uVar29 = local_7f8._Ptr;
    }
    pwVar33 = (wchar_t *)(uVar29 + local_7e8 * 2);
    local_7e8 = (void *)((longlong)local_7e8 + 10);
    memmove(pwVar33,L"_UE_LC_NSM",0x14);
    *(wchar_t *)(uVar29 + ((longlong)pvVar2 + 10) * 2) = L'\0';
  }
  uVar29 = &local_7f8;
  if (7 < uStack_7e0) {
    uVar29 = local_7f8._Ptr;
  }
  pNVar16 = ::Process::CreateNamedSharedMemory((wchar_t *)uVar29,0x1000);
  this->m_sharedMemory = pNVar16;
  if (7 < uStack_7e0) {
    uVar31 = uStack_7e0 * 2 + 2;
    uVar29 = local_7f8._Ptr;
    if (0xfff < uVar31) {
      uVar29 = *(undefined8 *)(local_7f8._Ptr + -4);
      uVar31 = uStack_7e0 * 2 + 0x29;
      if ((char *)0x1f < (char *)((longlong)local_7f8._Ptr + (-8 - uVar29))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar29,uVar31);
  }
  pNVar16 = this->m_sharedMemory;
  if (pNVar16->isOwned == false) {
    DVar11 = *(DWORD *)pNVar16->memoryView;
    Logging::Log(USER,LOG_INFO,
                 "%sDetected running instance in process group \"%S\", connecting to console process (PID: %d)\n"
                );
    if (DVar11 != 0) {
      pvVar19 = OpenProcess(0x1fffff,0,DVar11);
      pvVar3 = this->m_job;
      (this->m_processHandle).m_value = pvVar19;
      AssignProcessToJobObject(pvVar3,pvVar19);
    }
  }
  else {
    Logging::Log(USER,LOG_INFO,"%sFirst instance in process group \"%S\", spawning console\n");
    pwVar33 = L"";
    if (GLiveCodingConsolePath.Data.ArrayNum != 0) {
      pwVar33 = (wchar_t *)GLiveCodingConsolePath.Data.AllocatorInstance;
    }
    local_7d8._Ptr = (wchar_t *)0x0;
    local_7d8._8_8_ = 0;
    local_7c8 = 0;
    uStack_7c0 = 0;
    sVar17 = wcslen(pwVar33);
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Construct<1,wchar_t_const_*>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               &local_7d8,pwVar33,sVar17);
    pvVar2 = pEVar35[2].m_event;
    local_7f8._Buf[6] = DAT_151458a64;
    local_7f8._8_4_ = DAT_151458a60;
    uStack_7e0 = 7;
    local_7e8 = (void *)0x7;
    local_7f8._Ptr = (wchar_t *)_u__Group_;
    local_7f8._Buf[7] = 0;
    pEVar21 = pEVar35;
    if ((void *)0x7 < pEVar35[3].m_event) {
      pEVar21 = pEVar35->m_event;
    }
    if (pvVar2 == (void *)0x0) {
      local_7e8 = (void *)0x7;
      memmove(local_7f8._Buf + 7,pEVar21,0);
                    /* WARNING: Ignoring partial resolution of indirect */
      local_7f8._Buf[7] = L'\0';
    }
    else {
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
      _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
                ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 &local_7f8,(ulong64)pvVar2,local_858[0],(wchar_t *)pEVar21,(ulong64)pvVar2);
    }
    iVar28 = GLiveCodingConsoleArguments.Data.ArrayNum + -1;
    if (GLiveCodingConsoleArguments.Data.ArrayNum == 0) {
      iVar28 = 0;
    }
    if (0 < iVar28) {
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
                ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 &local_7f8,L" ",1);
      pwVar33 = L"";
      if (GLiveCodingConsoleArguments.Data.ArrayNum != 0) {
        pwVar33 = (wchar_t *)GLiveCodingConsoleArguments.Data.AllocatorInstance;
      }
      sVar17 = wcslen(pwVar33);
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
                ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 &local_7f8,pwVar33,sVar17);
    }
    if (GInternalProjectName[0] != L'\0') {
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
                ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 &local_7f8,L" -ProjectName=\"",0xf);
      sVar17 = wcslen(GInternalProjectName);
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
                ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 &local_7f8,GInternalProjectName,sVar17);
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
                ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 &local_7f8,L"\"",1);
    }
    uVar29 = &local_7f8;
    if (7 < uStack_7e0) {
      uVar29 = local_7f8._Ptr;
    }
    uVar30 = &local_7d8;
    if (7 < uStack_7c0) {
      uVar30 = local_7d8._Ptr;
    }
    pCVar18 = ::Process::Spawn((wchar_t *)uVar30,(wchar_t *)0x0,(wchar_t *)uVar29,(void *)0x0,0);
    this->m_mainProcessContext = pCVar18;
    if ((pCVar18->processInformation).dwProcessId != 0) {
      pvVar3 = (pCVar18->processInformation).hProcess;
      pvVar19 = this->m_job;
      (this->m_processHandle).m_value = pvVar3;
      AssignProcessToJobObject(pvVar19,pvVar3);
      *(ulong *)this->m_sharedMemory->memoryView =
           (this->m_mainProcessContext->processInformation).dwProcessId;
    }
    if (7 < uStack_7e0) {
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
      _Deallocate_for_capacity((allocator<wchar_t> *)local_7f8._Alias,local_7f8._Ptr,uStack_7e0);
    }
    local_7e8 = (void *)0x0;
    uStack_7e0 = 7;
    local_7f8._Ptr = local_7f8._Ptr & 0xffffffffffff0000;
    if (7 < uStack_7c0) {
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
      _Deallocate_for_capacity((allocator<wchar_t> *)local_7d8._Alias,local_7d8._Ptr,uStack_7c0);
    }
  }
  ReleaseMutex(pvVar15);
  CloseHandle(pvVar15);
  if ((this->m_processHandle).m_value == (void *)0x0) {
    Logging::Log(USER,LOG_ERROR,"%s%s\n");
    ::Process::DestroyNamedSharedMemory(&this->m_sharedMemory);
    *(undefined4 *)&(param_1->_Mypair)._Myval2._Bx = 1;
  }
  else {
    Logging::Log(USER,LOG_INFO,"%s%s\n");
    local_7f8._8_8_ = 0;
    local_7f8._Ptr = (wchar_t *)0x0;
    local_7e8 = (void *)___xmm_00000000000000070000000000000000;
    uStack_7e0 = _UNK_15145b248;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::reserve
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               &local_7f8,0x80);
    pEVar21 = pEVar35;
    if ((void *)0x7 < pEVar35[3].m_event) {
      pEVar21 = pEVar35->m_event;
    }
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               &local_7f8,(wchar_t *)pEVar21,(ulong64)pEVar35[2].m_event);
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               &local_7f8,L"_UE_LC_SR",9);
    uVar29 = &local_7f8;
    if (7 < uStack_7e0) {
      uVar29 = local_7f8._Ptr;
    }
    p_Var14 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)uVar29);
    local_850.m_event = p_Var14;
    GetLastError();
    if (p_Var14 == (_Bxty *)0x0) {
      Logging::Log(USER,LOG_ERROR,"%sCannot create event %S. Error: 0x%X\n");
    }
    if (7 < uStack_7e0) {
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
      _Deallocate_for_capacity((allocator<wchar_t> *)local_7f8._Alias,local_7f8._Ptr,uStack_7e0);
    }
    Event::WaitTimeout(&local_850,0xffffffff);
    CloseHandle(p_Var14);
    pDVar4 = this->m_pipeClient;
    local_7e8 = (void *)0x0;
    uStack_7e0 = 7;
    local_7f8._8_8_ = 0;
    local_7f8._Ptr = (wchar_t *)0x0;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::reserve
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               &local_7f8,0x80);
    pvVar2 = local_7e8;
    if (uStack_7e0 - (longlong)local_7e8 < 0xe) {
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
      _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
                ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 &local_7f8,0xe,local_858[0],L"\\\\.\\pipe\\UE_LC",0xe);
    }
    else {
      uVar29 = &local_7f8;
      if (7 < uStack_7e0) {
        uVar29 = local_7f8._Ptr;
      }
      pwVar33 = (wchar_t *)(uVar29 + local_7e8 * 2);
      local_7e8 = (void *)((longlong)local_7e8 + 0xe);
      memmove(pwVar33,L"\\\\.\\pipe\\UE_LC",0x1c);
      *(wchar_t *)(uVar29 + ((longlong)pvVar2 + 0xe) * 2) = L'\0';
    }
    pEVar21 = pEVar35;
    if ((void *)0x7 < pEVar35[3].m_event) {
      pEVar21 = pEVar35->m_event;
    }
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               &local_7f8,(wchar_t *)pEVar21,(ulong64)pEVar35[2].m_event);
    uVar29 = &local_7f8;
    if (7 < uStack_7e0) {
      uVar29 = local_7f8._Ptr;
    }
    bVar10 = DuplexPipeClient::Connect(pDVar4,(wchar_t *)uVar29);
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               &local_7f8);
    if (bVar10) {
      pDVar4 = this->m_exceptionPipeClient;
      local_7f8._8_8_ = 0;
      p_Var23 = (LPCRITICAL_SECTION)0x0;
      local_7f8._Ptr = (wchar_t *)0x0;
      local_7e8 = (void *)___xmm_00000000000000070000000000000000;
      uStack_7e0 = _UNK_15145b248;
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::reserve
                ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 &local_7f8,0x80);
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
                ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 &local_7f8,L"\\\\.\\pipe\\UE_LC_EXC",0x12);
      pEVar21 = pEVar35;
      if ((void *)0x7 < pEVar35[3].m_event) {
        pEVar21 = pEVar35->m_event;
      }
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
                ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 &local_7f8,(wchar_t *)pEVar21,(ulong64)pEVar35[2].m_event);
      uVar29 = &local_7f8;
      if (7 < uStack_7e0) {
        uVar29 = local_7f8._Ptr;
      }
      bVar10 = DuplexPipeClient::Connect(pDVar4,(wchar_t *)uVar29);
      if (7 < uStack_7e0) {
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
        _Deallocate_for_capacity((allocator<wchar_t> *)local_7f8._Alias,local_7f8._Ptr,uStack_7e0);
      }
      if (bVar10) {
        p_Var20 = ::operator_new(0x28);
        p_Var22 = p_Var23;
        if (p_Var20 != (LPCRITICAL_SECTION)0x0) {
          InitializeCriticalSection(p_Var20);
          p_Var22 = p_Var20;
        }
        this->m_pipeClientCS = (CriticalSection *)p_Var22;
        pEVar21 = ::operator_new(8);
        p_Var22 = p_Var23;
        p_Var20 = p_Var23;
        if (pEVar21 != (Event *)0x0) {
          local_7f8._8_8_ = 0;
          local_7f8._Ptr = (wchar_t *)0x0;
          local_7e8 = (void *)___xmm_00000000000000070000000000000000;
          uStack_7e0 = _UNK_15145b248;
          std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::reserve
                    ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                     &local_7f8,0x80);
          pEVar32 = pEVar35;
          if ((void *)0x7 < pEVar35[3].m_event) {
            pEVar32 = pEVar35->m_event;
          }
          std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
                    ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                     &local_7f8,(wchar_t *)pEVar32,(ulong64)pEVar35[2].m_event);
          std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
                    ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                     &local_7f8,L"_UE_LC_CMP",10);
          uVar29 = &local_7f8;
          if (7 < uStack_7e0) {
            uVar29 = local_7f8._Ptr;
          }
          p_Var22 = (LPCRITICAL_SECTION)Event::Event(pEVar21,(wchar_t *)uVar29,MANUAL_RESET);
          p_Var20 = (LPCRITICAL_SECTION)&DAT_00000001;
        }
        this->m_compilationEvent = (Event *)p_Var22;
        if (p_Var20 != (LPCRITICAL_SECTION)0x0) {
          std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                    ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                     &local_7f8);
        }
        pEVar21 = ::operator_new(8);
        if (pEVar21 != (Event *)0x0) {
          p_Var23 = (LPCRITICAL_SECTION)Event::Event(pEVar21,(wchar_t *)0x0,MANUAL_RESET);
        }
        this->m_startEvent = (Event *)p_Var23;
        ClientCommandThread::Start
                  (this->m_commandThread,
                   (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   &local_848,pEVar35,this->m_compilationEvent,(CriticalSection *)p_Var23);
        pCVar5 = this->m_userCommandThread;
        pCVar6 = this->m_pipeClientCS;
        pEVar21 = this->m_startEvent;
        if (&pCVar5->m_processGroupName !=
            (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)pEVar35) {
          pEVar32 = pEVar35 + 2;
          if ((void *)0x7 < pEVar35[3].m_event) {
            pEVar35 = pEVar35->m_event;
          }
          std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign
                    (&pCVar5->m_processGroupName,(wchar_t *)pEVar35,(ulong64)pEVar32->m_event);
        }
        puVar24 = ::operator_new(0x28);
        if (puVar24 != (undefined8 *)0x0) {
          *puVar24 = "Live coding user commands";
          puVar24[1] = ClientUserCommandThread::ThreadFunction;
          puVar24[2] = pCVar5;
          puVar24[3] = pEVar21;
          puVar24[4] = pCVar6;
        }
        Thread::Create((uint)&local_850,(_func___cdecl_uint_void_ptr *)&DAT_00020000,
                       `Thread::
                       CreateFromMemberFunction<ClientUserCommandThread,StrongTypedef<unsigned_int,0>_(__cdecl_ClientUserCommandThread::*)(Event_*,CriticalSection_*),Event_*_&,CriticalSection_*_&>'
                       ::__l2::<lambda_2>::<lambda_invoker_cdecl>);
        (pCVar5->m_thread).m_value = local_850.m_event;
        GetThreadId(local_850.m_event);
        lVar12 = 0;
        environment::GetVariable
                  ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   &local_778,L"LPP_PROCESS_RESTART_ID",(wchar_t *)0x0);
        if (local_768 != 0) {
          piVar25 = _errno();
          uVar29 = &local_778;
          if (7 < local_760) {
            uVar29 = local_778._Ptr;
          }
          *piVar25 = 0;
          lVar12 = wcstol((wchar_t *)uVar29,&local_850.m_event,10);
          if ((void *)uVar29 == local_850.m_event) {
            std::_Xinvalid_argument("invalid stoi argument");
            return (StrongTypedef<unsigned_int,0>)extraout_EAX_00;
          }
          if (*piVar25 == 0x22) {
            std::_Xout_of_range("stoi argument out of range");
            return (StrongTypedef<unsigned_int,0>)extraout_EAX;
          }
          BVar13 = SetEnvironmentVariableW(L"LPP_PROCESS_RESTART_ID",(LPCWSTR)0x0);
          if (BVar13 == 0) {
            GetLastError();
            Logging::Log(DEV,LOG_INFO,"%sCould not remove environment variable %S (Error: %d)\n");
          }
        }
        DVar11 = GetCurrentProcessId();
        lpValue = std::to_wstring((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                                   *)&local_7b8,DVar11);
        if (7 < (lpValue->_Mypair)._Myval2._Myres) {
          lpValue = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                    (lpValue->_Mypair)._Myval2._Bx._Ptr;
        }
        BVar13 = SetEnvironmentVariableW(L"LPP_PROCESS_RESTART_ID",(LPCWSTR)lpValue);
        if (BVar13 == 0) {
          GetLastError();
          Logging::Log(DEV,LOG_INFO,
                       "%sCould not set environment variable %S to value %S (Error: %d)\n");
        }
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
        ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                  ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   &local_7b8);
        memset(local_268,0,0x208);
        GetModuleFileNameW((HMODULE)0x0,local_268,0x104);
        sVar17 = wcslen(local_268);
        local_6c8.m_actions[0]._0_4_ = (int)sVar17;
        memcpy((void *)((longlong)local_6c8.m_actions + 4),local_268,
               (ulonglong)((int)local_6c8.m_actions[0] + 1) * 2);
        local_7b8._Ptr = (wchar_t *)0x0;
        local_7b8._8_8_ = 0;
        local_7a8 = 0;
        uStack_7a0 = 0;
        sVar17 = wcslen((wchar_t *)((longlong)local_6c8.m_actions + 4));
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
        _Construct<1,wchar_t_const_*>
                  ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   &local_7b8,(wchar_t *)((longlong)local_6c8.m_actions + 4),sVar17);
        _Str = GetCommandLineW();
        local_7d8._Ptr = (wchar_t *)0x0;
        local_7d8._8_8_ = 0;
        local_7c8 = 0;
        uStack_7c0 = 0;
        sVar17 = wcslen(_Str);
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
        _Construct<1,wchar_t_const_*>
                  ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   &local_7d8,_Str,sVar17);
        memset(local_268,0,0x208);
        GetCurrentDirectoryW(0x104,local_268);
        sVar17 = wcslen(local_268);
        local_6c8.m_actions[0]._0_4_ = (int)sVar17;
        memcpy((void *)((longlong)local_6c8.m_actions + 4),local_268,
               (ulonglong)((int)local_6c8.m_actions[0] + 1) * 2);
        local_798 = (allocator<wchar_t> *)0x0;
        uStack_790 = 0;
        local_788 = 0;
        uStack_780 = 0;
        sVar17 = wcslen((wchar_t *)((longlong)local_6c8.m_actions + 4));
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
        _Construct<1,wchar_t_const_*>
                  ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   &local_798,(wchar_t *)((longlong)local_6c8.m_actions + 4),sVar17);
        SVar26.m_value = GetCurrentProcess();
        pEVar27 = ::Process::CreateEnvironment((Environment *)&local_7f8,SVar26);
        sVar17 = pEVar27->size;
        pvVar2 = pEVar27->data;
        local_838 = GetModuleHandleW((LPCWSTR)0x0);
        local_830 = GetCurrentProcessId();
        local_828 = local_848._0_4_;
        local_820 = _JumpToSelf__YAXXZ;
        local_818 = local_7a8 * 2 + 2;
        local_810 = local_7c8 * 2 + 2;
        local_808 = local_788 * 2 + 2;
        local_82c = lVar12;
        local_800 = sVar17;
        _Dst_00 = operator_new__(local_810 + local_808 + local_818 + sVar17);
        uVar31 = uStack_7a0;
        sVar7 = local_818;
        uVar29 = &local_7b8;
        if (7 < uStack_7a0) {
          uVar29 = local_7b8._Ptr;
        }
        memcpy(_Dst_00,(void *)uVar29,local_818);
        sVar8 = local_810;
        uVar29 = &local_7d8;
        if (7 < uStack_7c0) {
          uVar29 = local_7d8._Ptr;
        }
        memcpy((void *)((longlong)_Dst_00 + sVar7),(void *)uVar29,local_810);
        sVar9 = local_808;
        lVar34 = sVar7 + sVar8;
        _Src = (allocator<wchar_t> *)&local_798;
        if (7 < uStack_780) {
          _Src = local_798;
        }
        memcpy((void *)((longlong)_Dst_00 + lVar34),_Src,local_808);
        lVar34 = sVar9 + lVar34;
        local_850.m_event = pvVar2;
        memcpy((void *)(lVar34 + (longlong)_Dst_00),pvVar2,sVar17);
        uVar1 = lVar34 + sVar17;
        local_848._0_4_ = 0x65;
        pDVar4 = this->m_pipeClient;
        local_848._4_4_ = (undefined4)uVar1;
        DuplexPipe::Send((DuplexPipe *)pDVar4,&local_848,8);
        DuplexPipe::Send((DuplexPipe *)pDVar4,&local_838,0x40);
        if (uVar1 != 0) {
          DuplexPipe::Send((DuplexPipe *)pDVar4,_Dst_00,uVar1);
        }
        local_858[0] = (<lambda_1>)0x0;
        DuplexPipe::Read((DuplexPipe *)pDVar4,local_858,1);
        free(local_850.m_event);
        operator_delete__(_Dst_00);
        if (7 < uStack_780) {
          std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          _Deallocate_for_capacity((allocator<wchar_t> *)&local_798,(wchar_t *)local_798,uStack_780)
          ;
        }
        if (7 < uStack_7c0) {
          std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          _Deallocate_for_capacity((allocator<wchar_t> *)local_7d8._Alias,local_7d8._Ptr,uStack_7c0)
          ;
        }
        if (7 < uVar31) {
          std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          _Deallocate_for_capacity((allocator<wchar_t> *)local_7b8._Alias,local_7b8._Ptr,uVar31);
        }
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
        ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                  ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   &local_778);
        CommandMap::CommandMap(&local_6c8);
        local_6c8.m_actions[0x66] =
             CommandMap::ReceiveAndCallAction<actions::RegisterProcessFinished>;
        CommandMap::HandleCommands
                  (&local_6c8,(DuplexPipe *)this->m_pipeClient,&this->m_successfulInit);
        if (this->m_successfulInit == false) {
          Logging::GetIndentation(USER);
          Logging::Log(USER,LOG_ERROR,"%s%s\n");
          pDVar4 = this->m_pipeClient;
          CloseHandle((HANDLE)*pDVar4);
          *pDVar4 = (DuplexPipeClient)0xffffffffffffffff;
          pDVar4 = this->m_exceptionPipeClient;
          CloseHandle((HANDLE)*pDVar4);
          *pDVar4 = (DuplexPipeClient)0xffffffffffffffff;
          SetEvent(this->m_startEvent->m_event);
          SetEvent(this->m_compilationEvent->m_event);
          ClientCommandThread::Join(this->m_commandThread);
          ClientUserCommandThread::PushUserCommand(this->m_userCommandThread,(BaseCommand *)0x0);
          ClientUserCommandThread::Join(this->m_userCommandThread);
          ::`anonymous_namespace'::DeleteAndNull<DuplexPipeClient>(&this->m_pipeClient);
          ::`anonymous_namespace'::DeleteAndNull<DuplexPipeClient>(&this->m_exceptionPipeClient);
          ::`anonymous_namespace'::DeleteAndNull<ClientCommandThread>(&this->m_commandThread);
          ::`anonymous_namespace'::DeleteAndNull<ClientUserCommandThread>
                    (&this->m_userCommandThread);
          ::`anonymous_namespace'::DeleteAndNull<Event>(&this->m_startEvent);
          ::`anonymous_namespace'::DeleteAndNull<Event>(&this->m_compilationEvent);
          ::`anonymous_namespace'::DeleteAndNull<CriticalSection>(&this->m_pipeClientCS);
          *(undefined4 *)&(param_1->_Mypair)._Myval2._Bx = 3;
        }
        else {
          Logging::GetIndentation(USER);
          Logging::Log(USER,LOG_INFO,"%s%s\n");
          SetEvent(this->m_startEvent->m_event);
          *(undefined4 *)&(param_1->_Mypair)._Myval2._Bx = 0;
        }
      }
      else {
        Logging::Log(USER,LOG_ERROR,"%s%s\n");
        *(undefined4 *)&(param_1->_Mypair)._Myval2._Bx = 3;
      }
    }
    else {
      Logging::Log(USER,LOG_ERROR,"%s%s\n");
      *(undefined4 *)&(param_1->_Mypair)._Myval2._Bx = 2;
    }
  }
  return (StrongTypedef<unsigned_int,0>)(uint)param_1;
}

// ThreadFunction @ 146ce7470

StrongTypedef<unsigned_int,0> __thiscall
ClientUserCommandThread::ThreadFunction
          (ClientUserCommandThread *this,Event *param_1,CriticalSection *param_2)

{
  ulong64 uVar1;
  BaseCommand *pBVar2;
  ulonglong uVar3;
  LPCRITICAL_SECTION in_R9;
  CommandMap local_478;
  
  Event::WaitTimeout((Event *)param_2,0xffffffff);
  CommandMap::CommandMap(&local_478);
  local_478.m_actions[0x68] = CommandMap::ReceiveAndCallAction<actions::EnableModulesFinished>;
  local_478.m_actions[0x6a] = CommandMap::ReceiveAndCallAction<actions::DisableModulesFinished>;
  local_478.m_actions[0x6e] = CommandMap::ReceiveAndCallAction<actions::LoadPatch>;
  local_478.m_actions[0x70] = CommandMap::ReceiveAndCallAction<actions::UnloadPatch>;
  local_478.m_actions[0x6b] = CommandMap::ReceiveAndCallAction<actions::EnterSyncPoint>;
  local_478.m_actions[0x6c] = CommandMap::ReceiveAndCallAction<actions::LeaveSyncPoint>;
  local_478.m_actions[0x71] = CommandMap::ReceiveAndCallAction<actions::CallEntryPoint>;
  local_478.m_actions[0x6d] = CommandMap::ReceiveAndCallAction<actions::CallHooks>;
  local_478.m_actions[0x85] = CommandMap::ReceiveAndCallAction<actions::PreCompile>;
  local_478.m_actions[0x86] = CommandMap::ReceiveAndCallAction<actions::PostCompile>;
  local_478.m_actions[0x87] = CommandMap::ReceiveAndCallAction<actions::TriggerReload>;
  while( true ) {
    Semaphore::WaitTimeout((Semaphore *)&this->m_userCommandQueueSema,0xffffffff);
    EnterCriticalSection((LPCRITICAL_SECTION)&this->m_userCommandQueueCS);
    uVar1 = (this->m_userCommandQueue)._Mypair._Myval2._Mysize;
    uVar3 = ((this->m_userCommandQueue)._Mypair._Myval2._Myoff - 1) + uVar1;
    pBVar2 = (this->m_userCommandQueue)._Mypair._Myval2._Map
             [uVar3 >> 1 & (this->m_userCommandQueue)._Mypair._Myval2._Mapsize - 1][(uint)uVar3 & 1]
    ;
    uVar1 = uVar1 - 1;
    (this->m_userCommandQueue)._Mypair._Myval2._Mysize = uVar1;
    if (uVar1 == 0) {
      (this->m_userCommandQueue)._Mypair._Myval2._Myoff = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_userCommandQueueCS);
    if (pBVar2 == (BaseCommand *)0x0) break;
    if (*this->m_pipe == (DuplexPipeClient)0xffffffffffffffff) {
      *(undefined4 *)&param_1->m_event = 1;
LAB_146ce762d:
      return (StrongTypedef<unsigned_int,0>)(uint)param_1;
    }
    EnterCriticalSection(in_R9);
    (**(code **)(pBVar2->_padding_ + 8))(pBVar2,this->m_pipe);
    if (pBVar2->m_expectResponse != false) {
      CommandMap::HandleCommands(&local_478,(DuplexPipe *)this->m_pipe,(void *)0x0);
    }
    LeaveCriticalSection(in_R9);
    (**(code **)pBVar2->_padding_)(pBVar2,1);
  }
  *(undefined4 *)&param_1->m_event = 2;
  goto LAB_146ce762d;
}

// ToLower @ 146ce7910

FixedSizeString<char,22> * __thiscall
FixedSizeString<char,22>::ToLower
          (FixedSizeString<char,22> *this,FixedSizeString<char,22> *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = this->m_length;
  uVar4 = 0;
  __return_storage_ptr__->m_data[0] = '\0';
  __return_storage_ptr__->m_length = uVar3;
  uVar1 = 0;
  if (uVar3 != 0) {
    do {
      iVar2 = tolower((int)this->m_data[uVar4]);
      __return_storage_ptr__->m_data[uVar4] = (char)iVar2;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar1 = this->m_length;
    } while (uVar3 < uVar1);
  }
  __return_storage_ptr__->m_data[uVar1] = '\0';
  return __return_storage_ptr__;
}

// ToLower @ 146ce7980

FixedSizeString<wchar_t,260> * __thiscall
FixedSizeString<wchar_t,260>::ToLower
          (FixedSizeString<wchar_t,260> *this,FixedSizeString<wchar_t,260> *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  wchar_t wVar3;
  uint uVar4;
  
  uVar1 = this->m_length;
  __return_storage_ptr__->m_data[0] = L'\0';
  __return_storage_ptr__->m_length = uVar1;
  uVar4 = 0;
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      wVar3 = towlower(this->m_data[uVar4]);
      __return_storage_ptr__->m_data[uVar4] = wVar3;
      uVar4 = uVar4 + 1;
      uVar2 = this->m_length;
    } while (uVar4 < uVar2);
  }
  __return_storage_ptr__->m_data[uVar2] = L'\0';
  return __return_storage_ptr__;
}

// ToLower @ 146ce7a00

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
string::ToLower(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                *__return_storage_ptr__,
               basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1)

{
  wchar_t wVar1;
  size_t sVar2;
  ulonglong uVar3;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar4;
  
  if (7 < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  uVar3 = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
  sVar2 = wcslen((wchar_t *)param_1);
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  _Construct<1,wchar_t_const_*>(__return_storage_ptr__,(wchar_t *)param_1,sVar2);
  pbVar4 = __return_storage_ptr__;
  if (7 < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
    pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
  }
  if ((__return_storage_ptr__->_Mypair)._Myval2._Mysize != 0) {
    do {
      wVar1 = towlower((pbVar4->_Mypair)._Myval2._Bx._Buf[uVar3]);
      (pbVar4->_Mypair)._Myval2._Bx._Buf[uVar3] = wVar1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (__return_storage_ptr__->_Mypair)._Myval2._Mysize);
  }
  return __return_storage_ptr__;
}

// ToLower @ 146ce7a90

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
string::ToLower(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                *__return_storage_ptr__,wchar_t *param_1)

{
  wchar_t wVar1;
  size_t sVar2;
  ulonglong uVar3;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar4;
  
  uVar3 = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
  sVar2 = wcslen(param_1);
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  _Construct<1,wchar_t_const_*>(__return_storage_ptr__,param_1,sVar2);
  pbVar4 = __return_storage_ptr__;
  if (7 < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
    pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
  }
  if ((__return_storage_ptr__->_Mypair)._Myval2._Mysize != 0) {
    do {
      wVar1 = towlower((pbVar4->_Mypair)._Myval2._Bx._Buf[uVar3]);
      (pbVar4->_Mypair)._Myval2._Bx._Buf[uVar3] = wVar1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (__return_storage_ptr__->_Mypair)._Myval2._Mysize);
  }
  return __return_storage_ptr__;
}

// ToUpper @ 146ce7b10

FixedSizeString<char,22> * __thiscall
FixedSizeString<char,22>::ToUpper
          (FixedSizeString<char,22> *this,FixedSizeString<char,22> *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = this->m_length;
  uVar4 = 0;
  __return_storage_ptr__->m_data[0] = '\0';
  __return_storage_ptr__->m_length = uVar3;
  uVar1 = 0;
  if (uVar3 != 0) {
    do {
      iVar2 = toupper((int)this->m_data[uVar4]);
      __return_storage_ptr__->m_data[uVar4] = (char)iVar2;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar1 = this->m_length;
    } while (uVar3 < uVar1);
  }
  __return_storage_ptr__->m_data[uVar1] = '\0';
  return __return_storage_ptr__;
}

// ToUpper @ 146ce7b80

FixedSizeString<wchar_t,260> * __thiscall
FixedSizeString<wchar_t,260>::ToUpper
          (FixedSizeString<wchar_t,260> *this,FixedSizeString<wchar_t,260> *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  wchar_t wVar3;
  uint uVar4;
  
  uVar1 = this->m_length;
  __return_storage_ptr__->m_data[0] = L'\0';
  __return_storage_ptr__->m_length = uVar1;
  uVar4 = 0;
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      wVar3 = towupper(this->m_data[uVar4]);
      __return_storage_ptr__->m_data[uVar4] = wVar3;
      uVar4 = uVar4 + 1;
      uVar2 = this->m_length;
    } while (uVar4 < uVar2);
  }
  __return_storage_ptr__->m_data[uVar2] = L'\0';
  return __return_storage_ptr__;
}

// ToUpper @ 146ce7c00

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
string::ToUpper(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                *__return_storage_ptr__,
               basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  int iVar1;
  size_t sVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
  sVar2 = strlen((char *)param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            (__return_storage_ptr__,(char *)param_1,sVar2);
  pbVar4 = __return_storage_ptr__;
  if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
    pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar3 = pbVar4;
  if ((__return_storage_ptr__->_Mypair)._Myval2._Mysize != 0) {
    do {
      iVar1 = toupper((int)(pbVar3->_Mypair)._Myval2._Bx._Buf[0]);
      (pbVar3->_Mypair)._Myval2._Bx._Buf[0] = (char)iVar1;
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               ((longlong)&(pbVar3->_Mypair)._Myval2._Bx + 1);
    } while ((ulonglong)((longlong)pbVar3 - (longlong)pbVar4) <
             (__return_storage_ptr__->_Mypair)._Myval2._Mysize);
  }
  return __return_storage_ptr__;
}

// ToUpper @ 146ce7ca0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
string::ToUpper(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                *__return_storage_ptr__,char *param_1)

{
  int iVar1;
  size_t sVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
  sVar2 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            (__return_storage_ptr__,param_1,sVar2);
  pbVar4 = __return_storage_ptr__;
  if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
    pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar3 = pbVar4;
  if ((__return_storage_ptr__->_Mypair)._Myval2._Mysize != 0) {
    do {
      iVar1 = toupper((int)(pbVar3->_Mypair)._Myval2._Bx._Buf[0]);
      (pbVar3->_Mypair)._Myval2._Bx._Buf[0] = (char)iVar1;
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               ((longlong)&(pbVar3->_Mypair)._Myval2._Bx + 1);
    } while ((ulonglong)((longlong)pbVar3 - (longlong)pbVar4) <
             (__return_storage_ptr__->_Mypair)._Myval2._Mysize);
  }
  return __return_storage_ptr__;
}

// ToUpper @ 146ce7d30

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
string::ToUpper(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                *__return_storage_ptr__,
               basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1)

{
  wchar_t wVar1;
  size_t sVar2;
  ulonglong uVar3;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar4;
  
  if (7 < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  uVar3 = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
  sVar2 = wcslen((wchar_t *)param_1);
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  _Construct<1,wchar_t_const_*>(__return_storage_ptr__,(wchar_t *)param_1,sVar2);
  pbVar4 = __return_storage_ptr__;
  if (7 < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
    pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
  }
  if ((__return_storage_ptr__->_Mypair)._Myval2._Mysize != 0) {
    do {
      wVar1 = towupper((pbVar4->_Mypair)._Myval2._Bx._Buf[uVar3]);
      (pbVar4->_Mypair)._Myval2._Bx._Buf[uVar3] = wVar1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (__return_storage_ptr__->_Mypair)._Myval2._Mysize);
  }
  return __return_storage_ptr__;
}

// ToUpper @ 146ce7dc0

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
string::ToUpper(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                *__return_storage_ptr__,wchar_t *param_1)

{
  wchar_t wVar1;
  size_t sVar2;
  ulonglong uVar3;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar4;
  
  uVar3 = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
  sVar2 = wcslen(param_1);
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  _Construct<1,wchar_t_const_*>(__return_storage_ptr__,param_1,sVar2);
  pbVar4 = __return_storage_ptr__;
  if (7 < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
    pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
  }
  if ((__return_storage_ptr__->_Mypair)._Myval2._Mysize != 0) {
    do {
      wVar1 = towupper((pbVar4->_Mypair)._Myval2._Bx._Buf[uVar3]);
      (pbVar4->_Mypair)._Myval2._Bx._Buf[uVar3] = wVar1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (__return_storage_ptr__->_Mypair)._Myval2._Mysize);
  }
  return __return_storage_ptr__;
}

// ToWideString @ 146ce7e40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
detail::ToWideString
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,char *param_1,ulong64 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 auStackY_60 [5];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)local_28;
  auStackY_60[0] = 0x146ce7e96;
  iVar3 = MultiByteToWideChar(0xfde9,0,param_1,(int)param_2,(LPWSTR)0x0,0);
  uVar2 = (longlong)iVar3 * 2;
  uVar4 = uVar2 + 0xf;
  if (uVar4 <= uVar2) {
    uVar4 = 0xffffffffffffff0;
  }
  auStackY_60[0] = 0x146ce7ebc;
  lVar1 = -(uVar4 & 0xfffffffffffffff0);
  *(int *)(&stack0xffffffffffffffd0 + lVar1) = iVar3;
  *(wchar_t **)(&stack0xffffffffffffffc8 + lVar1) = (wchar_t *)((longlong)local_28 + lVar1);
  *(undefined8 *)((longlong)auStackY_60 + lVar1) = 0x146ce7ee1;
  MultiByteToWideChar(0xfde9,0,param_1,(int)param_2,*(LPWSTR *)(&stack0xffffffffffffffc8 + lVar1),
                      *(int *)(&stack0xffffffffffffffd0 + lVar1));
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
  *(undefined8 *)((longlong)auStackY_60 + lVar1) = 0x146ce7efd;
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  _Construct<1,wchar_t_const_*>
            (__return_storage_ptr__,(wchar_t *)((longlong)local_28 + lVar1),(longlong)iVar3);
  *(undefined8 *)((longlong)auStackY_60 + lVar1) = 0x146ce7f0c;
  return __return_storage_ptr__;
}

// ToWideString @ 146ce7f30

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
string::ToWideString
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var1;
  
  p_Var1 = &param_1->_Mypair;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  detail::ToWideString(__return_storage_ptr__,(char *)param_1,(p_Var1->_Myval2)._Mysize);
  return __return_storage_ptr__;
}

// ToWideString @ 146ce7f60

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
string::ToWideString
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  detail::ToWideString(__return_storage_ptr__,param_1,sVar1);
  return __return_storage_ptr__;
}

// ToWideString @ 146ce7fa0

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
string::ToWideString
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,char *param_1,ulong64 param_2)

{
  ulong64 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      if (param_1[uVar1] == '\0') break;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  detail::ToWideString(__return_storage_ptr__,param_1,uVar1);
  return __return_storage_ptr__;
}

// TriggerRecompile @ 146ce7fe0

void __thiscall ClientStartupThread::TriggerRecompile(ClientStartupThread *this)

{
  HANDLE hHandle;
  ClientUserCommandThread *this_00;
  BaseCommand *pBVar1;
  void *pvVar2;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this_00 = this->m_userCommandThread;
  if (this_00 != (ClientUserCommandThread *)0x0) {
    pBVar1 = ::operator_new(0x30);
    if (pBVar1 == (BaseCommand *)0x0) {
      pBVar1 = (BaseCommand *)0x0;
    }
    else {
      pBVar1->m_expectResponse = false;
      pBVar1->_padding_ = (longlong)&ProxyCommand<commands::TriggerRecompile>::_vftable_;
      pvVar2 = operator_new__(0);
      *(void **)&pBVar1[1].m_expectResponse = pvVar2;
      pBVar1[2]._padding_ = 0;
      *(undefined8 *)&pBVar1[2].m_expectResponse = 0;
    }
    ClientUserCommandThread::PushUserCommand(this_00,pBVar1);
  }
  return;
}

// TriggerRecompile @ 146ce8080

void __thiscall ClientUserCommandThread::TriggerRecompile(ClientUserCommandThread *this)

{
  BaseCommand *pBVar1;
  void *pvVar2;
  
  pBVar1 = ::operator_new(0x30);
  if (pBVar1 == (BaseCommand *)0x0) {
    pBVar1 = (BaseCommand *)0x0;
  }
  else {
    pBVar1->m_expectResponse = false;
    pBVar1->_padding_ = (longlong)&ProxyCommand<commands::TriggerRecompile>::_vftable_;
    pvVar2 = operator_new__(0);
    *(void **)&pBVar1[1].m_expectResponse = pvVar2;
    pBVar1[2]._padding_ = 0;
    *(undefined8 *)&pBVar1[2].m_expectResponse = 0;
  }
  PushUserCommand(this,pBVar1);
  return;
}

// TriggerRestart @ 146ce80f0

void __thiscall ClientStartupThread::TriggerRestart(ClientStartupThread *this)

{
  HANDLE hHandle;
  ClientUserCommandThread *this_00;
  BaseCommand *pBVar1;
  void *pvVar2;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  this_00 = this->m_userCommandThread;
  if (this_00 != (ClientUserCommandThread *)0x0) {
    pBVar1 = ::operator_new(0x30);
    if (pBVar1 == (BaseCommand *)0x0) {
      pBVar1 = (BaseCommand *)0x0;
    }
    else {
      pBVar1->m_expectResponse = false;
      pBVar1->_padding_ = (longlong)&ProxyCommand<commands::TriggerRestart>::_vftable_;
      pvVar2 = operator_new__(0);
      *(void **)&pBVar1[1].m_expectResponse = pvVar2;
      pBVar1[2]._padding_ = 0;
      *(undefined8 *)&pBVar1[2].m_expectResponse = 0;
    }
    ClientUserCommandThread::PushUserCommand(this_00,pBVar1);
  }
  return;
}

// TriggerRestart @ 146ce8190

void __thiscall ClientUserCommandThread::TriggerRestart(ClientUserCommandThread *this)

{
  BaseCommand *pBVar1;
  void *pvVar2;
  
  pBVar1 = ::operator_new(0x30);
  if (pBVar1 == (BaseCommand *)0x0) {
    pBVar1 = (BaseCommand *)0x0;
  }
  else {
    pBVar1->m_expectResponse = false;
    pBVar1->_padding_ = (longlong)&ProxyCommand<commands::TriggerRestart>::_vftable_;
    pvVar2 = operator_new__(0);
    *(void **)&pBVar1[1].m_expectResponse = pvVar2;
    pBVar1[2]._padding_ = 0;
    *(undefined8 *)&pBVar1[2].m_expectResponse = 0;
  }
  PushUserCommand(this,pBVar1);
  return;
}

// TryWait @ 146ce8260

bool __thiscall Event::TryWait(Event *this)

{
  bool bVar1;
  
  bVar1 = WaitTimeout(this,0);
  return bVar1;
}

// TryWait @ 146ce8270

bool __thiscall Semaphore::TryWait(Semaphore *this)

{
  bool bVar1;
  
  bVar1 = WaitTimeout(this,0);
  return bVar1;
}

// TryWaitForToken @ 146ce8280

bool __thiscall ClientStartupThread::TryWaitForToken(ClientStartupThread *this,void *param_1)

{
  HANDLE hHandle;
  bool bVar1;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  if ((this->m_userCommandThread != (ClientUserCommandThread *)0x0) &&
     ((this->m_userCommandThread->m_thread).m_value != Thread::INVALID_HANDLE.m_value)) {
    bVar1 = Event::WaitTimeout(param_1,0);
    if (bVar1) {
      if (param_1 != (void *)0x0) {
        CloseHandle(*(HANDLE *)param_1);
        ::operator_delete(param_1,8);
      }
      return true;
    }
  }
  return false;
}

// TryWaitForToken @ 146ce8320

bool __thiscall
ClientUserCommandThread::TryWaitForToken(ClientUserCommandThread *this,void *param_1)

{
  bool bVar1;
  
  if ((this->m_thread).m_value != Thread::INVALID_HANDLE.m_value) {
    bVar1 = Event::WaitTimeout(param_1,0);
    if (bVar1) {
      if (param_1 != (void *)0x0) {
        CloseHandle(*(HANDLE *)param_1);
        ::operator_delete(param_1,8);
      }
      return true;
    }
  }
  return false;
}

// Unlock @ 146ce8380

void __thiscall InterprocessMutex::Unlock(InterprocessMutex *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146ce8383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseMutex(this->m_mutex);
  return;
}

// Wait @ 146ce86f0

bool __thiscall Event::Wait(Event *this)

{
  bool bVar1;
  
  bVar1 = WaitTimeout(this,0xffffffff);
  return bVar1;
}

// Wait @ 146ce8700

uint __cdecl Process::Wait(Context *param_1)

{
  DWORD local_res8 [8];
  
  WaitForSingleObject((param_1->processInformation).hProcess,0xffffffff);
  if ((param_1->flags & 1) != 0) {
    WaitForSingleObject((param_1->drainStdoutThread).m_value,0xffffffff);
    CloseHandle((param_1->drainStdoutThread).m_value);
    (param_1->drainStdoutThread).m_value = Thread::INVALID_HANDLE.m_value;
    CloseHandle(param_1->pipeReadEnd);
  }
  local_res8[0] = 0xffffffff;
  GetExitCodeProcess((param_1->processInformation).hProcess,local_res8);
  return local_res8[0];
}

// Wait @ 146ce8780

uint __cdecl Process::Wait(StrongTypedef<void_*,0> param_1)

{
  DWORD local_res10 [6];
  
  WaitForSingleObject(param_1.m_value,0xffffffff);
  local_res10[0] = 0xffffffff;
  GetExitCodeProcess(param_1.m_value,local_res10);
  return local_res10[0];
}

// Wait @ 146ce87c0

bool __thiscall Semaphore::Wait(Semaphore *this)

{
  bool bVar1;
  
  bVar1 = WaitTimeout(this,0xffffffff);
  return bVar1;
}

// WaitForToken @ 146ce8840

void __thiscall ClientStartupThread::WaitForToken(ClientStartupThread *this,void *param_1)

{
  HANDLE hHandle;
  
  hHandle = (this->m_thread).m_value;
  if (hHandle != Thread::INVALID_HANDLE.m_value) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle((this->m_thread).m_value);
    (this->m_thread).m_value = Thread::INVALID_HANDLE.m_value;
  }
  if (this->m_userCommandThread != (ClientUserCommandThread *)0x0) {
    if ((this->m_userCommandThread->m_thread).m_value != Thread::INVALID_HANDLE.m_value) {
      Event::WaitTimeout(param_1,0xffffffff);
    }
    if (param_1 != (void *)0x0) {
      CloseHandle(*(HANDLE *)param_1);
      ::operator_delete(param_1,8);
    }
  }
  return;
}

// WaitForToken @ 146ce88d0

void __thiscall ClientUserCommandThread::WaitForToken(ClientUserCommandThread *this,void *param_1)

{
  if ((this->m_thread).m_value != Thread::INVALID_HANDLE.m_value) {
    Event::WaitTimeout(param_1,0xffffffff);
  }
  if (param_1 != (void *)0x0) {
    CloseHandle(*(HANDLE *)param_1);
    ::operator_delete(param_1,8);
    return;
  }
  return;
}

// WaitTimeout @ 146ce8920

bool __thiscall Event::WaitTimeout(Event *this,uint param_1)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject(this->m_event,param_1);
  if (DVar1 == 0) {
    return true;
  }
  if (DVar1 != 0x80) {
    if (DVar1 == 0x102) {
      if (param_1 == 0xffffffff) {
        Logging::Log(DEV,LOG_ERROR,"ERROR: %s%s\n");
      }
    }
    else if (DVar1 == 0xffffffff) {
      Logging::Log(DEV,LOG_ERROR,"ERROR: %s%s\n");
      return false;
    }
    return false;
  }
  Logging::Log(DEV,LOG_ERROR,"ERROR: %s%s\n");
  return false;
}

// WaitTimeout @ 146ce8a50

bool __thiscall Semaphore::WaitTimeout(Semaphore *this,uint param_1)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject(*(HANDLE *)this,param_1);
  if (DVar1 == 0) {
    return true;
  }
  if (DVar1 != 0x80) {
    if (DVar1 == 0x102) {
      if (param_1 == 0xffffffff) {
        Logging::Log(DEV,LOG_ERROR,"ERROR: %s%s\n");
      }
    }
    else if (DVar1 == 0xffffffff) {
      Logging::Log(DEV,LOG_ERROR,"ERROR: %s%s\n");
      return false;
    }
    return false;
  }
  Logging::Log(DEV,LOG_ERROR,"ERROR: %s%s\n");
  return false;
}

// WasRequested @ 146ce8b80

int __cdecl restart::WasRequested(void)

{
  bool bVar1;
  
  bVar1 = Event::WaitTimeout(g_requestRestart,0);
  return (int)bVar1;
}

// WideFindOffset @ 146ce8bb0

ulong64 __cdecl
detail::WideFindOffset
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_2)

{
  void *pvVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  
  uVar2 = (param_2->_Mypair)._Myval2._Mysize;
  if (7 < (param_2->_Mypair)._Myval2._Myres) {
    param_2 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              (param_2->_Mypair)._Myval2._Bx._Ptr;
  }
  uVar3 = (param_1->_Mypair)._Myval2._Mysize;
  if (7 < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  if (uVar2 <= uVar3) {
    if (uVar2 == 0) {
      return 0;
    }
    pvVar1 = (void *)((longlong)&(param_1->_Mypair)._Myval2._Bx + uVar3 * 2);
    pvVar4 = __std_search_2(param_1,pvVar1,param_2,uVar2);
    if (pvVar4 != pvVar1) {
      return (longlong)pvVar4 - (longlong)param_1 >> 1;
    }
  }
  return 0xffffffffffffffff;
}

// Write @ 146ce8c30

void __thiscall memoryStream::Writer::Write(Writer *this,void *param_1,ulong64 param_2)

{
  memcpy(this->m_data + this->m_offset,param_1,param_2);
  this->m_offset = this->m_offset + param_2;
  return;
}

// WriteInstructionPointer @ 146ce8c70

void __cdecl Thread::WriteInstructionPointer(StrongTypedef<_CONTEXT,0> *param_1,void *param_2)

{
  (param_1->m_value).Rip = (ulong64)param_2;
  return;
}

// WriteNamedSharedMemory @ 146ce8c80

void __cdecl
Process::WriteNamedSharedMemory(NamedSharedMemory *param_1,void *param_2,ulong64 param_3)

{
  memcpy(param_1->memoryView,param_2,param_3);
  return;
}

// WriteProcessMemory @ 146ce8c90

void __cdecl
Process::WriteProcessMemory
          (StrongTypedef<void_*,0> param_1,void *param_2,void *param_3,ulong64 param_4)

{
  long lVar1;
  DWORD local_res8 [2];
  
  local_res8[0] = 0;
  VirtualProtectEx(param_1.m_value,param_2,param_4,4,local_res8);
  lVar1 = (*WindowsInternals::NtWriteVirtualMemory.m_function)
                    (param_1.m_value,param_2,param_3,(ulong)param_4,(ulong *)0x0);
  if (lVar1 < 0) {
    Logging::Log(USER,LOG_ERROR,"%sCall to function %s in module %s failed. Error: 0x%X\n");
  }
  VirtualProtectEx(param_1.m_value,param_2,param_4,local_res8[0],local_res8);
  return;
}

// WriteToFileOffset @ 146ce8d90

void __cdecl
executable::WriteToFileOffset(MemoryMappedFile *param_1,uint param_2,void *param_3,ulong64 param_4)

{
  memcpy((void *)((ulonglong)param_2 + (longlong)param_1->baseAddress),param_3,param_4);
  return;
}

// Yield @ 146ce8db0

void __cdecl Thread::Current::Yield(void)

{
  return;
}

// Z_Construct_UClass_ULiveCodingSettings_NoRegister @ 146ce8dc0

UClass * __cdecl Z_Construct_UClass_ULiveCodingSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveCodingSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveCoding",L"LiveCodingSettings",
               &Z_Registration_Info_UClass_ULiveCodingSettings.InnerSingleton,
               ULiveCodingSettings::StaticRegisterNativesULiveCodingSettings,0x40,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<ULiveCodingSettings>,
               InternalVTableHelperCtorCaller<ULiveCodingSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveCodingSettings.InnerSingleton;
}

// _Assign_grow @ 146ce8e70

void __thiscall
std::
_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_>_>
::_Assign_grow(_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_>_>
               *this,ulong64 param_1,
              _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
              param_2)

{
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
  *p_Var1;
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
  *p_Var2;
  ulong64 uVar3;
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
  local_res18;
  
  p_Var1 = (this->_Mypair)._Myval2._Myfirst;
  p_Var2 = (this->_Mypair)._Myval2._Mylast;
  local_res18._Ptr = param_2._Ptr;
  if (param_1 <= (ulonglong)((longlong)p_Var2 - (longlong)p_Var1 >> 3)) {
    fill<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_*,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_>
              (p_Var1,p_Var2,&local_res18);
    return;
  }
  if (0x1fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    _Throw_bad_array_new_length();
  }
  p_Var2 = _Allocate<16,std::_Default_allocate_traits>(param_1 * 8);
  p_Var1 = (this->_Mypair)._Myval2._Myfirst;
  uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)p_Var1 >> 3;
  if (uVar3 != 0) {
    allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_>
    ::deallocate((allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_>
                  *)this,p_Var1,uVar3);
  }
  p_Var1 = p_Var2 + param_1;
  (this->_Mypair)._Myval2._Myfirst = p_Var2;
  (this->_Mypair)._Myval2._Mylast = p_Var1;
  (this->_Mypair)._Myval2._Myend = p_Var1;
  for (; p_Var2 != p_Var1; p_Var2 = p_Var2 + 1) {
    p_Var2->_Ptr = param_2._Ptr;
  }
  return;
}

// _Change_array @ 146ce8f50

void __thiscall
std::vector<char,std::allocator<char>_>::_Change_array
          (vector<char,std::allocator<char>_> *this,char *param_1,ulong64 param_2,ulong64 param_3)

{
  char *pcVar1;
  char *pcVar2;
  ulong64 uVar3;
  
  pcVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pcVar1 != (char *)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pcVar1;
    pcVar2 = pcVar1;
    if (0xfff < uVar3) {
      pcVar2 = *(char **)(pcVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if ((char *)0x1f < pcVar1 + (-8 - (longlong)pcVar2)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pcVar2,uVar3);
  }
  (this->_Mypair)._Myval2._Myfirst = param_1;
  (this->_Mypair)._Myval2._Mylast = param_1 + param_2;
  (this->_Mypair)._Myval2._Myend = param_1 + param_3;
  return;
}

// _Change_array @ 146ce8ff0

void __thiscall
std::vector<HINSTANCE___*,std::allocator<HINSTANCE___*>_>::_Change_array
          (vector<HINSTANCE___*,std::allocator<HINSTANCE___*>_> *this,HINSTANCE__ **param_1,
          ulong64 param_2,ulong64 param_3)

{
  HINSTANCE__ *pHVar1;
  HINSTANCE__ *pHVar2;
  ulong64 uVar3;
  
  pHVar1 = (HINSTANCE__ *)(this->_Mypair)._Myval2._Myfirst;
  if (pHVar1 != (HINSTANCE__ *)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pHVar1 & 0xfffffffffffffff8;
    pHVar2 = pHVar1;
    if (0xfff < uVar3) {
      pHVar2 = *(HINSTANCE__ **)(pHVar1 + -2);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pHVar1 + (-8 - (longlong)pHVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pHVar2,uVar3);
  }
  (this->_Mypair)._Myval2._Myfirst = param_1;
  (this->_Mypair)._Myval2._Mylast = param_1 + param_2;
  (this->_Mypair)._Myval2._Myend = param_1 + param_3;
  return;
}

// _Change_array @ 146ce90a0

void __thiscall
std::vector<executable::ImageSection,std::allocator<executable::ImageSection>_>::_Change_array
          (vector<executable::ImageSection,std::allocator<executable::ImageSection>_> *this,
          ImageSection *param_1,ulong64 param_2,ulong64 param_3)

{
  ImageSection *pIVar1;
  ImageSection *pIVar2;
  ulong64 uVar3;
  
  pIVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pIVar1 != (ImageSection *)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pIVar1 & 0xfffffffffffffff0;
    pIVar2 = pIVar1;
    if (0xfff < uVar3) {
      pIVar2 = *(ImageSection **)&pIVar1[-1].rawDataRva;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pIVar1 + (-8 - (longlong)pIVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pIVar2,uVar3);
  }
  (this->_Mypair)._Myval2._Myfirst = param_1;
  (this->_Mypair)._Myval2._Mylast = param_1 + param_2;
  (this->_Mypair)._Myval2._Myend = param_1 + param_3;
  return;
}

// _Change_array @ 146ce9150

void __thiscall
std::vector<executable::ImportModule,std::allocator<executable::ImportModule>_>::_Change_array
          (vector<executable::ImportModule,std::allocator<executable::ImportModule>_> *this,
          ImportModule *param_1,ulong64 param_2,ulong64 param_3)

{
  ImportModule *pIVar1;
  ImportModule *pIVar2;
  ulong64 uVar3;
  
  pIVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pIVar1 != (ImportModule *)0x0) {
    uVar3 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pIVar1) / 0x104) * 0x104;
    pIVar2 = pIVar1;
    if (0xfff < uVar3) {
      pIVar2 = *(ImportModule **)(pIVar1[-1].path + 0xfc);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pIVar1 + (-8 - (longlong)pIVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pIVar2,uVar3);
  }
  (this->_Mypair)._Myval2._Myfirst = param_1;
  (this->_Mypair)._Myval2._Mylast = param_1 + param_2;
  (this->_Mypair)._Myval2._Myend = param_1 + param_3;
  return;
}

// _Change_array @ 146ce9220

void __thiscall
std::vector<Process::Module,std::allocator<Process::Module>_>::_Change_array
          (vector<Process::Module,std::allocator<Process::Module>_> *this,Module *param_1,
          ulong64 param_2,ulong64 param_3)

{
  Module *pMVar1;
  Module *pMVar2;
  ulong64 uVar3;
  
  pMVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pMVar1 != (Module *)0x0) {
    uVar3 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pMVar1) / 0x220) * 0x220;
    pMVar2 = pMVar1;
    if (0xfff < uVar3) {
      pMVar2 = *(Module **)&pMVar1[-1].sizeOfImage;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pMVar1 + (-8 - (longlong)pMVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pMVar2,uVar3);
  }
  (this->_Mypair)._Myval2._Myfirst = param_1;
  (this->_Mypair)._Myval2._Mylast = param_1 + param_2;
  (this->_Mypair)._Myval2._Myend = param_1 + param_3;
  return;
}

// _Change_array @ 146ce92f0

void __thiscall
std::vector<commands::ModuleData,std::allocator<commands::ModuleData>_>::_Change_array
          (vector<commands::ModuleData,std::allocator<commands::ModuleData>_> *this,
          ModuleData *param_1,ulong64 param_2,ulong64 param_3)

{
  ModuleData *pMVar1;
  ModuleData *pMVar2;
  ulong64 uVar3;
  
  pMVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pMVar1 != (ModuleData *)0x0) {
    uVar3 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pMVar1) / 0x210) * 0x210;
    pMVar2 = pMVar1;
    if (0xfff < uVar3) {
      pMVar2 = *(ModuleData **)(pMVar1[-1].path + 0x100);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pMVar1 + (-8 - (longlong)pMVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pMVar2,uVar3);
  }
  (this->_Mypair)._Myval2._Myfirst = param_1;
  (this->_Mypair)._Myval2._Mylast = param_1 + param_2;
  (this->_Mypair)._Myval2._Myend = param_1 + param_3;
  return;
}

// _Change_array @ 146ce93c0

void __thiscall
std::vector<wchar_t,std::allocator<wchar_t>_>::_Change_array
          (vector<wchar_t,std::allocator<wchar_t>_> *this,wchar_t *param_1,ulong64 param_2,
          ulong64 param_3)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  
  pwVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pwVar1 != (wchar_t *)0x0) {
    uVar3 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pwVar1 >> 1) * 2;
    pwVar2 = pwVar1;
    if (0xfff < uVar3) {
      pwVar2 = *(wchar_t **)(pwVar1 + -4);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pwVar1 + (-8 - (longlong)pwVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pwVar2,uVar3);
  }
  (this->_Mypair)._Myval2._Myfirst = param_1;
  (this->_Mypair)._Myval2._Mylast = param_1 + param_2;
  (this->_Mypair)._Myval2._Myend = param_1 + param_3;
  return;
}

// _Deallocate_for_capacity @ 146ce9470

void __cdecl
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
_Deallocate_for_capacity(allocator<wchar_t> *param_1,wchar_t *param_2,ulong64 param_3)

{
  wchar_t *pwVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 2 + 2;
  pwVar1 = param_2;
  if (0xfff < uVar2) {
    pwVar1 = *(wchar_t **)(param_2 + -4);
    uVar2 = param_3 * 2 + 0x29;
    if (0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)pwVar1))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  ::operator_delete(pwVar1,uVar2);
  return;
}

// _Forced_rehash @ 146ce94d0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
std::
_Hash<std::_Uset_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::_Uhash_compare<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::hash<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,std::equal_to<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,0>_>
::_Forced_rehash(_Hash<std::_Uset_traits<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::_Uhash_compare<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::hash<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,std::equal_to<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,0>_>
                 *this,ulong64 param_1)

{
  byte *pbVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
  _Var4;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var5;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var6;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var7;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var8;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var9;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var10;
  ulonglong uVar11;
  ulong64 uVar12;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar13;
  longlong lVar14;
  ulonglong uVar15;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar16;
  ulonglong uVar17;
  int iVar18;
  ulong64 uVar19;
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
  *p_Var20;
  bool bVar21;
  
  for (lVar14 = 0x3f; 0xfffffffffffffffU >> lVar14 == 0; lVar14 = lVar14 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar14 & 0x3f)) < param_1) {
    _Xlength_error("invalid hash bucket count");
    return;
  }
  _Var4._Ptr = (this->_List)._Mypair._Myval2._Myhead;
  uVar11 = param_1 - 1 | 1;
  lVar14 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
  }
  uVar12 = 1L << ((char)lVar14 + 1U & 0x3f);
  _Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_>_>
  ::_Assign_grow(&this->_Vec,uVar12 * 2,_Var4);
  this->_Maxidx = uVar12;
  this->_Mask = uVar12 - 1;
  p_Var10 = ((this->_List)._Mypair._Myval2._Myhead)->_Next;
joined_r0x000146ce954d:
  do {
    while( true ) {
      if (p_Var10 == _Var4._Ptr) {
        return;
      }
      uVar15 = 0xcbf29ce484222325;
      uVar11 = (p_Var10->_Myval)._Mypair._Myval2._Myres;
      pbVar16 = &p_Var10->_Myval;
      p_Var5 = p_Var10->_Next;
      uVar12 = (p_Var10->_Myval)._Mypair._Myval2._Mysize;
      if (7 < uVar11) {
        pbVar16 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                  (p_Var10->_Myval)._Mypair._Myval2._Bx._Ptr;
      }
      uVar17 = 0;
      if (uVar12 * 2 != 0) {
        do {
          pbVar1 = (byte *)((pbVar16->_Mypair)._Myval2._Bx._Alias + uVar17);
          uVar17 = uVar17 + 1;
          uVar15 = (uVar15 ^ *pbVar1) * 0x100000001b3;
        } while (uVar17 < uVar12 * 2);
      }
      p_Var20 = (this->_Vec)._Mypair._Myval2._Myfirst + (uVar15 & this->_Mask) * 2;
      if (p_Var20->_Ptr != _Var4._Ptr) break;
      p_Var20->_Ptr = p_Var10;
      p_Var20[1]._Ptr = p_Var10;
      p_Var10 = p_Var5;
    }
    p_Var6 = p_Var20[1]._Ptr;
    pbVar16 = &p_Var6->_Myval;
    if (7 < (p_Var6->_Myval)._Mypair._Myval2._Myres) {
      pbVar16 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                (pbVar16->_Mypair)._Myval2._Bx._Ptr;
    }
    pbVar13 = &p_Var10->_Myval;
    if (7 < uVar11) {
      pbVar13 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                (p_Var10->_Myval)._Mypair._Myval2._Bx._Ptr;
    }
    if (uVar12 == (p_Var6->_Myval)._Mypair._Myval2._Mysize) {
      if (uVar12 == 0) {
        bVar21 = false;
      }
      else {
        lVar14 = (longlong)pbVar13 - (longlong)pbVar16;
        do {
          wVar2 = *(wchar_t *)(lVar14 + (longlong)pbVar16);
          wVar3 = (pbVar16->_Mypair)._Myval2._Bx._Buf[0];
          if (wVar2 != wVar3) {
            uVar12 = (p_Var10->_Myval)._Mypair._Myval2._Mysize;
            uVar11 = (p_Var10->_Myval)._Mypair._Myval2._Myres;
            iVar18 = 1;
            if ((ushort)wVar2 < (ushort)wVar3) {
              iVar18 = -1;
            }
            goto LAB_146ce964d;
          }
          pbVar16 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                    ((longlong)&(pbVar16->_Mypair)._Myval2._Bx + 2);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        uVar12 = (p_Var10->_Myval)._Mypair._Myval2._Mysize;
        uVar11 = (p_Var10->_Myval)._Mypair._Myval2._Myres;
        iVar18 = 0;
LAB_146ce964d:
        bVar21 = iVar18 != 0;
      }
    }
    else {
      bVar21 = true;
    }
    if (!bVar21) {
      p_Var6 = p_Var6->_Next;
      if (p_Var6 != p_Var10) {
        p_Var7 = p_Var10->_Prev;
        p_Var7->_Next = p_Var5;
        p_Var8 = p_Var5->_Prev;
        p_Var8->_Next = p_Var6;
        p_Var9 = p_Var6->_Prev;
        p_Var9->_Next = p_Var10;
        p_Var6->_Prev = p_Var8;
        p_Var5->_Prev = p_Var7;
        p_Var10->_Prev = p_Var9;
      }
      p_Var20[1]._Ptr = p_Var10;
      p_Var10 = p_Var5;
      goto joined_r0x000146ce954d;
    }
    do {
      if (p_Var20->_Ptr == p_Var6) {
        p_Var7 = p_Var10->_Prev;
        p_Var7->_Next = p_Var5;
        p_Var8 = p_Var5->_Prev;
        p_Var8->_Next = p_Var6;
        p_Var9 = p_Var6->_Prev;
        p_Var9->_Next = p_Var10;
        p_Var6->_Prev = p_Var8;
        p_Var5->_Prev = p_Var7;
        p_Var10->_Prev = p_Var9;
        p_Var20->_Ptr = p_Var10;
        p_Var10 = p_Var5;
        goto joined_r0x000146ce954d;
      }
      p_Var6 = p_Var6->_Prev;
      pbVar16 = &p_Var6->_Myval;
      if (7 < (p_Var6->_Myval)._Mypair._Myval2._Myres) {
        pbVar16 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                  (pbVar16->_Mypair)._Myval2._Bx._Ptr;
      }
      pbVar13 = &p_Var10->_Myval;
      if (7 < uVar11) {
        pbVar13 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                  (p_Var10->_Myval)._Mypair._Myval2._Bx._Ptr;
      }
      if (uVar12 == (p_Var6->_Myval)._Mypair._Myval2._Mysize) {
        if (uVar12 == 0) {
          bVar21 = false;
        }
        else {
          if (uVar12 != 0) {
            lVar14 = (longlong)pbVar13 - (longlong)pbVar16;
            uVar19 = uVar12;
            do {
              wVar2 = *(wchar_t *)(lVar14 + (longlong)pbVar16);
              wVar3 = (pbVar16->_Mypair)._Myval2._Bx._Buf[0];
              if (wVar2 != wVar3) {
                iVar18 = 1;
                if ((ushort)wVar2 < (ushort)wVar3) {
                  iVar18 = -1;
                }
                goto LAB_146ce972c;
              }
              pbVar16 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                        ((longlong)&(pbVar16->_Mypair)._Myval2._Bx + 2);
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          iVar18 = 0;
LAB_146ce972c:
          bVar21 = iVar18 != 0;
        }
      }
      else {
        bVar21 = true;
      }
    } while (bVar21);
    p_Var6 = p_Var6->_Next;
    p_Var7 = p_Var10->_Prev;
    p_Var7->_Next = p_Var5;
    p_Var8 = p_Var5->_Prev;
    p_Var8->_Next = p_Var6;
    p_Var9 = p_Var6->_Prev;
    p_Var9->_Next = p_Var10;
    p_Var6->_Prev = p_Var8;
    p_Var5->_Prev = p_Var7;
    p_Var10->_Prev = p_Var9;
    p_Var10 = p_Var5;
  } while( true );
}

// _Growmap @ 146ce9800

void __thiscall
std::
deque<ClientUserCommandThread::BaseCommand_*,std::allocator<ClientUserCommandThread::BaseCommand_*>_>
::_Growmap(deque<ClientUserCommandThread::BaseCommand_*,std::allocator<ClientUserCommandThread::BaseCommand_*>_>
           *this,ulong64 param_1)

{
  ulong64 *puVar1;
  size_t sVar2;
  BaseCommand ***pppBVar3;
  BaseCommand **ppBVar4;
  BaseCommand ***_Dst;
  ulonglong uVar5;
  BaseCommand ***pppBVar6;
  BaseCommand **ppBVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  size_t sVar11;
  void *_Dst_00;
  
  uVar8 = (this->_Mypair)._Myval2._Mapsize;
  uVar9 = 1;
  if (uVar8 != 0) {
    uVar9 = uVar8;
  }
  for (; (uVar9 - uVar8 < param_1 || (uVar9 < 8)); uVar9 = uVar9 * 2) {
    if (0xfffffffffffffff - uVar9 < uVar9) {
                    /* WARNING: Subroutine does not return */
      _Xlen();
    }
  }
  uVar10 = (this->_Mypair)._Myval2._Myoff >> 1;
  if (0x1fffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
    _Throw_bad_array_new_length();
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar9 * 8);
  sVar2 = uVar10 * 8;
  uVar5 = uVar9 >> 1;
  for (; uVar9 <= uVar5; uVar9 = uVar9 * 2) {
  }
  pppBVar3 = (this->_Mypair)._Myval2._Map;
  uVar8 = (this->_Mypair)._Myval2._Mapsize;
  uVar9 = uVar9 - uVar8;
  pppBVar6 = pppBVar3 + uVar10;
  sVar11 = (uVar8 * 8 - (longlong)pppBVar6) + (longlong)pppBVar3;
  memmove(_Dst + uVar10,pppBVar6,sVar11);
  pppBVar6 = (this->_Mypair)._Myval2._Map;
  _Dst_00 = (void *)((longlong)(_Dst + uVar10) + sVar11);
  if (uVar9 < uVar10) {
    sVar11 = uVar9 * 8;
    memmove(_Dst_00,pppBVar6,sVar11);
    pppBVar3 = (this->_Mypair)._Myval2._Map;
    pppBVar6 = pppBVar3 + uVar9;
    sVar2 = (longlong)pppBVar3 + (sVar2 - (longlong)pppBVar6);
    memmove(_Dst,pppBVar6,sVar2);
    pppBVar6 = (BaseCommand ***)(sVar2 + (longlong)_Dst);
  }
  else {
    memmove(_Dst_00,pppBVar6,sVar2);
    memset((void *)(sVar2 + (longlong)_Dst_00),0,(uVar9 - uVar10) * 8);
    pppBVar6 = _Dst;
    sVar11 = sVar2;
  }
  memset(pppBVar6,0,sVar11);
  ppBVar4 = (BaseCommand **)(this->_Mypair)._Myval2._Map;
  if (ppBVar4 != (BaseCommand **)0x0) {
    uVar8 = (this->_Mypair)._Myval2._Mapsize * 8;
    ppBVar7 = ppBVar4;
    if (0xfff < uVar8) {
      ppBVar7 = (BaseCommand **)ppBVar4[-1];
      uVar8 = uVar8 + 0x27;
      if (0x1f < (ulonglong)((longlong)ppBVar4 + (-8 - (longlong)ppBVar7))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(ppBVar7,uVar8);
  }
  puVar1 = &(this->_Mypair)._Myval2._Mapsize;
  *puVar1 = *puVar1 + uVar9;
  (this->_Mypair)._Myval2._Map = _Dst;
  return;
}

// _Xlen @ 146ce99d0

void __cdecl
std::
deque<ClientUserCommandThread::BaseCommand_*,std::allocator<ClientUserCommandThread::BaseCommand_*>_>
::_Xlen(void)

{
  _Xlength_error("deque<T> too long");
  return;
}

// _Xlength @ 146ce99f0

void __cdecl std::vector<char,std::allocator<char>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 146ce9a10

void __cdecl std::vector<HINSTANCE___*,std::allocator<HINSTANCE___*>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 146ce9a30

void __cdecl
std::vector<executable::ImageSection,std::allocator<executable::ImageSection>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 146ce9a50

void __cdecl
std::vector<executable::ImportModule,std::allocator<executable::ImportModule>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 146ce9a70

void __cdecl std::vector<Process::Module,std::allocator<Process::Module>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 146ce9a90

void __cdecl std::vector<commands::ModuleData,std::allocator<commands::ModuleData>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 146ce9ab0

void __cdecl std::vector<Filesystem::VfsEntry,std::allocator<Filesystem::VfsEntry>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 146ce9ad0

void __cdecl
std::vector<StrongTypedef<unsigned_long,0>,std::allocator<StrongTypedef<unsigned_long,0>_>_>::
_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 146ce9af0

void __cdecl std::vector<wchar_t,std::allocator<wchar_t>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xran @ 146ce9b10

void __cdecl std::_String_val<std::_Simple_types<char>_>::_Xran(void)

{
  _Xout_of_range("invalid string position");
  return;
}

// _Xran @ 146ce9b30

void __cdecl std::_String_val<std::_Simple_types<wchar_t>_>::_Xran(void)

{
  _Xout_of_range("invalid string position");
  return;
}

// append @ 146ce9b50

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          wchar_t *param_1,ulong64 param_2)

{
  ulong64 uVar1;
  ulonglong uVar2;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar3;
  <lambda_1> local_res8;
  
  uVar1 = (this->_Mypair)._Myval2._Mysize;
  uVar2 = (this->_Mypair)._Myval2._Myres;
  if (param_2 <= uVar2 - uVar1) {
    (this->_Mypair)._Myval2._Mysize = uVar1 + param_2;
    pbVar3 = this;
    if (7 < uVar2) {
      pbVar3 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (this->_Mypair)._Myval2._Bx._Ptr;
    }
    memmove((void *)((longlong)&(pbVar3->_Mypair)._Myval2._Bx + uVar1 * 2),param_1,param_2 * 2);
    (pbVar3->_Mypair)._Myval2._Bx._Buf[uVar1 + param_2] = L'\0';
    return this;
  }
  pbVar3 = _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
                     (this,param_2,local_res8,param_1,param_2);
  return pbVar3;
}

// assign @ 146ce9be0

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          wchar_t *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  wchar_t *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *_Dst_00;
  
  uVar2 = (this->_Mypair)._Myval2._Myres;
  if (uVar2 < param_2) {
    uVar4 = 0x7ffffffffffffffe;
    if (0x7ffffffffffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      _Xlen_string();
    }
    uVar3 = param_2 | 7;
    if ((uVar3 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) {
      uVar1 = uVar2 + (uVar2 >> 1);
      uVar4 = uVar3;
      if (uVar3 < uVar1) {
        uVar4 = uVar1;
      }
      uVar3 = uVar4 + 1;
      if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
        _Throw_bad_array_new_length();
      }
    }
    else {
      uVar3 = 0x7fffffffffffffff;
    }
    _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar3 * 2);
    (this->_Mypair)._Myval2._Myres = uVar4;
    (this->_Mypair)._Myval2._Mysize = param_2;
    memcpy(_Dst,param_1,param_2 * 2);
    _Dst[param_2] = L'\0';
    if (7 < uVar2) {
      _Deallocate_for_capacity((allocator<wchar_t> *)this,(this->_Mypair)._Myval2._Bx._Ptr,uVar2);
    }
    (this->_Mypair)._Myval2._Bx._Ptr = _Dst;
  }
  else {
    _Dst_00 = this;
    if (7 < uVar2) {
      _Dst_00 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                (this->_Mypair)._Myval2._Bx._Ptr;
    }
    (this->_Mypair)._Myval2._Mysize = param_2;
    memmove(_Dst_00,param_1,param_2 * 2);
    (_Dst_00->_Mypair)._Myval2._Bx._Buf[param_2] = L'\0';
  }
  return this;
}

// deallocate @ 146ce9d10

void __thiscall
std::
allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_>
::deallocate(allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>_>
             *this,_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,std::_Iterator_base0>
                   *param_1,ulong64 param_2)

{
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var1;
  ulonglong uVar2;
  
  uVar2 = param_2 * 8;
  p_Var1 = (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
            *)param_1;
  if (0xfff < uVar2) {
    p_Var1 = param_1[-1]._Ptr;
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)p_Var1))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  ::operator_delete(p_Var1,uVar2);
  return;
}

// find @ 146ce9d70

ulong64 __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::find
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,ulong64 param_2)

{
  void *pvVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  
  uVar2 = (param_1->_Mypair)._Myval2._Mysize;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  uVar3 = (this->_Mypair)._Myval2._Mysize;
  if (0xf < (this->_Mypair)._Myval2._Myres) {
    this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           (this->_Mypair)._Myval2._Bx._Ptr;
  }
  if ((uVar2 <= uVar3) && (param_2 <= uVar3 - uVar2)) {
    if (uVar2 == 0) {
      return param_2;
    }
    pvVar1 = (void *)((longlong)&(this->_Mypair)._Myval2._Bx + uVar3);
    pvVar4 = __std_search_1((void *)((longlong)&(this->_Mypair)._Myval2._Bx + param_2),pvVar1,
                            param_1,uVar2);
    if (pvVar4 != pvVar1) {
      return (longlong)pvVar4 - (longlong)this;
    }
  }
  return 0xffffffffffffffff;
}

// push_back @ 146ce9df0

void __thiscall
std::vector<HINSTANCE___*,std::allocator<HINSTANCE___*>_>::push_back
          (vector<HINSTANCE___*,std::allocator<HINSTANCE___*>_> *this,HINSTANCE__ **param_1)

{
  HINSTANCE__ ***pppHVar1;
  ulonglong uVar2;
  HINSTANCE__ **ppHVar3;
  HINSTANCE__ **_Dst;
  ulonglong uVar4;
  HINSTANCE__ **ppHVar5;
  HINSTANCE__ **_Src;
  ulonglong uVar6;
  longlong lVar7;
  size_t _Size;
  
  ppHVar5 = (this->_Mypair)._Myval2._Myend;
  _Src = (this->_Mypair)._Myval2._Mylast;
  if (_Src != ppHVar5) {
    *_Src = *param_1;
    pppHVar1 = &(this->_Mypair)._Myval2._Mylast;
    *pppHVar1 = *pppHVar1 + 1;
    return;
  }
  ppHVar3 = (this->_Mypair)._Myval2._Myfirst;
  lVar7 = (longlong)_Src - (longlong)ppHVar3 >> 3;
  if (lVar7 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar4 = (longlong)ppHVar5 - (longlong)ppHVar3 >> 3;
  uVar2 = lVar7 + 1;
  if (0x1fffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar6 = 0x1fffffffffffffff;
  }
  else {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar6 = uVar2;
    if (uVar2 <= uVar4) {
      uVar6 = uVar4;
    }
    if (0x1fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar6 * 8);
  _Dst[lVar7] = *param_1;
  ppHVar5 = (this->_Mypair)._Myval2._Mylast;
  ppHVar3 = (this->_Mypair)._Myval2._Myfirst;
  if (_Src == ppHVar5) {
    _Size = (longlong)ppHVar5 - (longlong)ppHVar3;
    ppHVar5 = _Dst;
    _Src = ppHVar3;
  }
  else {
    memmove(_Dst,ppHVar3,(longlong)_Src - (longlong)ppHVar3);
    _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)_Src;
    ppHVar5 = _Dst + lVar7 + 1;
  }
  memmove(ppHVar5,_Src,_Size);
  _Change_array(this,_Dst,uVar2,uVar6);
  return;
}

// replace @ 146ce9f20

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::replace
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,ulong64 param_1,
          ulong64 param_2,char *param_3,ulong64 param_4)

{
  char *pcVar1;
  char *_Src;
  ulonglong uVar2;
  ulonglong uVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  size_t _Size;
  ulonglong uVar5;
  ulonglong uVar6;
  <lambda_1> local_res8;
  
  uVar2 = (this->_Mypair)._Myval2._Mysize;
  if (uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    _String_val<std::_Simple_types<char>_>::_Xran();
  }
  uVar5 = uVar2 - param_1;
  if (uVar5 < param_2) {
    param_2 = uVar5;
  }
  if (param_2 == param_4) {
    pbVar4 = this;
    if (0xf < (this->_Mypair)._Myval2._Myres) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (this->_Mypair)._Myval2._Bx._Ptr;
    }
    memmove((void *)((longlong)&(pbVar4->_Mypair)._Myval2._Bx + param_1),param_3,param_4);
  }
  else if (param_4 < param_2) {
    pbVar4 = this;
    if (0xf < (this->_Mypair)._Myval2._Myres) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (this->_Mypair)._Myval2._Bx._Ptr;
    }
    pcVar1 = (pbVar4->_Mypair)._Myval2._Bx._Buf + param_1;
    memmove(pcVar1,param_3,param_4);
    memmove(pcVar1 + param_4,pcVar1 + param_2,(uVar5 - param_2) + 1);
    (this->_Mypair)._Myval2._Mysize = (uVar2 - param_2) + param_4;
  }
  else {
    uVar3 = (this->_Mypair)._Myval2._Myres;
    uVar6 = param_4 - param_2;
    if (uVar3 - uVar2 < uVar6) {
      this = _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::replace_::__l2::<lambda_1>,unsigned___int64,unsigned___int64,char_const_*,unsigned___int64>
                       (this,uVar6,local_res8,param_1,param_2,param_3,param_4);
    }
    else {
      (this->_Mypair)._Myval2._Mysize = uVar2 + uVar6;
      pbVar4 = this;
      if (0xf < uVar3) {
        pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (this->_Mypair)._Myval2._Bx._Ptr;
      }
      pcVar1 = (pbVar4->_Mypair)._Myval2._Bx._Buf + param_1;
      _Src = pcVar1 + param_2;
      _Size = param_4;
      if ((pcVar1 < param_3 + param_4) && (param_3 <= (pbVar4->_Mypair)._Myval2._Bx._Buf + uVar2)) {
        if (param_3 < _Src) {
          _Size = (longlong)_Src - (longlong)param_3;
        }
        else {
          _Size = 0;
        }
      }
      memmove(_Src + uVar6,_Src,(uVar5 - param_2) + 1);
      memmove(pcVar1,param_3,_Size);
      memcpy(pcVar1 + _Size,param_3 + _Size + uVar6,param_4 - _Size);
    }
  }
  return this;
}

// replace @ 146cea0d0

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::replace
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          ulong64 param_1,ulong64 param_2,wchar_t *param_3,ulong64 param_4)

{
  wchar_t *pwVar1;
  wchar_t *_Src;
  ulonglong uVar2;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  <lambda_1> local_res8;
  
  uVar2 = (this->_Mypair)._Myval2._Mysize;
  if (uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    _String_val<std::_Simple_types<wchar_t>_>::_Xran();
  }
  uVar4 = uVar2 - param_1;
  if (uVar4 < param_2) {
    param_2 = uVar4;
  }
  if (param_2 != param_4) {
    lVar5 = uVar4 - param_2;
    if (param_4 < param_2) {
      pbVar3 = this;
      if (7 < (this->_Mypair)._Myval2._Myres) {
        pbVar3 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 (this->_Mypair)._Myval2._Bx._Ptr;
      }
      pwVar1 = (pbVar3->_Mypair)._Myval2._Bx._Buf + param_1;
      memmove(pwVar1,param_3,param_4 * 2);
      memmove(pwVar1 + param_4,pwVar1 + param_2,lVar5 * 2 + 2);
      (this->_Mypair)._Myval2._Mysize = (uVar2 - param_2) + param_4;
    }
    else {
      uVar4 = (this->_Mypair)._Myval2._Myres;
      uVar7 = param_4 - param_2;
      if (uVar4 - uVar2 < uVar7) {
        local_res8 = SUB81(lVar5,0);
        this = _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::replace_::__l2::<lambda_1>,unsigned___int64,unsigned___int64,wchar_t_const_*,unsigned___int64>
                         (this,uVar7,local_res8,param_1,param_2,param_3,param_4);
      }
      else {
        (this->_Mypair)._Myval2._Mysize = uVar2 + uVar7;
        pbVar3 = this;
        if (7 < uVar4) {
          pbVar3 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   (this->_Mypair)._Myval2._Bx._Ptr;
        }
        pwVar1 = (pbVar3->_Mypair)._Myval2._Bx._Buf + param_1;
        _Src = pwVar1 + param_2;
        uVar6 = param_4;
        if ((pwVar1 < param_3 + param_4) && (param_3 <= (pbVar3->_Mypair)._Myval2._Bx._Buf + uVar2))
        {
          if (param_3 < _Src) {
            uVar6 = (longlong)_Src - (longlong)param_3 >> 1;
          }
          else {
            uVar6 = 0;
          }
        }
        memmove(_Src + uVar7,_Src,lVar5 * 2 + 2);
        memmove(pwVar1,param_3,uVar6 * 2);
        memcpy(pwVar1 + uVar6,param_3 + uVar6 + uVar7,(param_4 - uVar6) * 2);
      }
    }
    return this;
  }
  pbVar3 = this;
  if (7 < (this->_Mypair)._Myval2._Myres) {
    pbVar3 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (this->_Mypair)._Myval2._Bx._Ptr;
  }
  memmove((void *)((longlong)&(pbVar3->_Mypair)._Myval2._Bx + param_1 * 2),param_3,param_4 * 2);
  return this;
}

// reserve @ 146cea2b0

void __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::reserve
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          ulong64 param_1)

{
  ulonglong uVar1;
  size_t _Size;
  ulonglong uVar2;
  ulong64 uVar3;
  wchar_t *_Src;
  wchar_t *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar2 = (this->_Mypair)._Myval2._Myres;
  if (uVar2 < param_1) {
    uVar5 = 0x7ffffffffffffffe;
    uVar3 = (this->_Mypair)._Myval2._Mysize;
    if (0x7ffffffffffffffe - uVar3 < param_1 - uVar3) {
                    /* WARNING: Subroutine does not return */
      _Xlen_string();
    }
    uVar4 = param_1 | 7;
    if ((uVar4 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) {
      uVar1 = uVar2 + (uVar2 >> 1);
      uVar5 = uVar4;
      if (uVar4 < uVar1) {
        uVar5 = uVar1;
      }
      uVar4 = uVar5 + 1;
      if (0x7fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
        _Throw_bad_array_new_length();
      }
    }
    else {
      uVar4 = 0x7fffffffffffffff;
    }
    _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar4 * 2);
    (this->_Mypair)._Myval2._Mysize = param_1;
    (this->_Mypair)._Myval2._Myres = uVar5;
    _Size = uVar3 * 2 + 2;
    if (uVar2 < 8) {
      memcpy(_Dst,this,_Size);
    }
    else {
      _Src = (this->_Mypair)._Myval2._Bx._Ptr;
      memcpy(_Dst,_Src,_Size);
      _Deallocate_for_capacity((allocator<wchar_t> *)this,_Src,uVar2);
    }
    (this->_Mypair)._Myval2._Bx._Ptr = _Dst;
    (this->_Mypair)._Myval2._Mysize = uVar3;
  }
  return;
}

// reserve @ 146cea3c0

void __thiscall
std::vector<HINSTANCE___*,std::allocator<HINSTANCE___*>_>::reserve
          (vector<HINSTANCE___*,std::allocator<HINSTANCE___*>_> *this,ulong64 param_1)

{
  HINSTANCE__ **ppHVar1;
  HINSTANCE__ **ppHVar2;
  HINSTANCE__ **_Src;
  HINSTANCE__ **_Dst;
  
  ppHVar1 = (this->_Mypair)._Myval2._Myfirst;
  if ((ulonglong)((longlong)(this->_Mypair)._Myval2._Myend - (longlong)ppHVar1 >> 3) < param_1) {
    if (0x1fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    ppHVar2 = (this->_Mypair)._Myval2._Mylast;
    _Dst = _Allocate<16,std::_Default_allocate_traits>(param_1 * 8);
    _Src = (this->_Mypair)._Myval2._Myfirst;
    memmove(_Dst,_Src,(longlong)(this->_Mypair)._Myval2._Mylast - (longlong)_Src);
    _Change_array(this,_Dst,(longlong)ppHVar2 - (longlong)ppHVar1 >> 3,param_1);
  }
  return;
}

// reserve @ 146cea460

void __thiscall
std::vector<executable::ImageSection,std::allocator<executable::ImageSection>_>::reserve
          (vector<executable::ImageSection,std::allocator<executable::ImageSection>_> *this,
          ulong64 param_1)

{
  ImageSection *pIVar1;
  ImageSection *pIVar2;
  ImageSection *_Src;
  ImageSection *_Dst;
  
  pIVar1 = (this->_Mypair)._Myval2._Myfirst;
  if ((ulonglong)((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pIVar1 >> 4) < param_1) {
    if (0xfffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    pIVar2 = (this->_Mypair)._Myval2._Mylast;
    _Dst = _Allocate<16,std::_Default_allocate_traits>(param_1 << 4);
    _Src = (this->_Mypair)._Myval2._Myfirst;
    memmove(_Dst,_Src,(longlong)(this->_Mypair)._Myval2._Mylast - (longlong)_Src);
    _Change_array(this,_Dst,(longlong)pIVar2 - (longlong)pIVar1 >> 4,param_1);
  }
  return;
}

// to_wstring @ 146cea500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
std::to_wstring(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                *__return_storage_ptr__,ulong param_1)

{
  wchar_t *pwVar1;
  undefined1 auStack_68 [32];
  allocator<wchar_t> local_48 [48];
  wchar_t local_18 [4];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  pwVar1 = local_18 + 1;
  do {
    pwVar1 = pwVar1 + -1;
    *pwVar1 = (short)param_1 + (short)((ulonglong)param_1 / 10) * -10 + L'0';
    param_1 = (ulong)((ulonglong)param_1 / 10);
  } while (param_1 != 0);
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_><wchar_t_*,0>
            (__return_storage_ptr__,pwVar1,local_18 + 1,local_48);
  return __return_storage_ptr__;
}

// IMPLEMENT_MODULE_LiveCoding @ 146cea590

void __cdecl IMPLEMENT_MODULE_LiveCoding(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 1503e00e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `FNullReload::GetNewClasses'::__l2::_dynamic_atexit_destructor_for__Empty__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _Empty;
  if (_Empty == (void *)0x0) {
    return;
  }
  if (_Empty != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 1503e0100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`FNullReload::GetReinstancedClasses'::__l2::_dynamic_atexit_destructor_for__Empty__(void)

{
  _DAT_154c0f738 = 0;
  if (DAT_154c0f730 != (void *)0x0) {
    FMemory::Free(DAT_154c0f730);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,UClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_*,UClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_*,UClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_virtual_class_TMap<UClass*___ptr64,UClass*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*___ptr64,UClass*___ptr64,0>_>_const&___ptr64___cdecl_FNullReload::GetReinstancedClasses(void)___ptr64'
                 ::__l2::Empty);
  return;
}

// `dynamic_atexit_destructor_for_'FormatString'' @ 1503e0140

void __cdecl
`FLiveCodingModule::SetupConsolePath'::__l8::_dynamic_atexit_destructor_for__FormatString__(void)

{
  if (FormatString.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503e014f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*FormatString.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'FormatString'' @ 1503e0160

void __cdecl
`FLiveCodingModule::StartLiveCoding'::__l34::_dynamic_atexit_destructor_for__FormatString__(void)

{
  if (FormatString.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503e016f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*FormatString.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GLiveCodingConsoleArguments'' @ 1503e0180

void __cdecl _dynamic_atexit_destructor_for__GLiveCodingConsoleArguments__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GLiveCodingConsoleArguments.Data.AllocatorInstance.Data;
  if (GLiveCodingConsoleArguments.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GLiveCodingConsoleArguments.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GLiveCodingConsolePath'' @ 1503e01a0

void __cdecl _dynamic_atexit_destructor_for__GLiveCodingConsolePath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GLiveCodingConsolePath.Data.AllocatorInstance.Data;
  if (GLiveCodingConsolePath.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GLiveCodingConsolePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogLiveCoding'' @ 1503e01c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLiveCoding__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLiveCoding);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 1503e01e0

void __cdecl
`FLiveCodingModule::GetReservePagesGlobalData'::__l2::_dynamic_atexit_destructor_for__Singleton__
          (void)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<FBaseGraphTask> TVar3;
  
  TVar3.Reference = ::Singleton.ReservePagesTaskRef.Reference;
  if (::Singleton.ReservePagesTaskRef.Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &(::Singleton.ReservePagesTaskRef.Reference)->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)TVar3.Reference)(TVar3.Reference,1);
    }
  }
  if (::Singleton.ReservedPages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Singleton.ReservedPages.AllocatorInstance.Data);
  }
  if (::Singleton.ModuleChanges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Singleton.ModuleChanges.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x0001503e0236. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'Success'' @ 1503e0250

void __cdecl
`FLiveCodingModule::AttemptSyncLivePatching'::__l44::_dynamic_atexit_destructor_for__Success__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Success.Data.AllocatorInstance.Data;
  if (Success.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Success.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'g_dllSyncPoint'' @ 1503e0270

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__g_dllSyncPoint__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503e0277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseHandle(g_dllSyncPoint.m_sema);
  return;
}

// `dynamic_atexit_destructor_for_'g_ensureOneTimeStartup'' @ 1503e0290

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__g_ensureOneTimeStartup__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503e0297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&g_ensureOneTimeStartup);
  return;
}

// `dynamic_atexit_destructor_for_'g_enterUserSyncPoint'' @ 1503e02b0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__g_enterUserSyncPoint__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503e02b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseHandle(g_enterUserSyncPoint.m_sema);
  return;
}

// `dynamic_atexit_destructor_for_'g_leaveUserSyncPoint'' @ 1503e02d0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__g_leaveUserSyncPoint__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503e02d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseHandle(g_leaveUserSyncPoint.m_sema);
  return;
}

// `dynamic_atexit_destructor_for_'g_syncPointCS'' @ 1503e02f0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__g_syncPointCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503e02f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&g_syncPointCS);
  return;
}

// `dynamic_atexit_destructor_for_'g_vfsEntries'' @ 1503e0310

void __cdecl Filesystem::_dynamic_atexit_destructor_for__g_vfsEntries__(void)

{
  VfsEntry *pVVar1;
  ulong64 uVar2;
  VfsEntry *pVVar3;
  
  pVVar1 = g_vfsEntries._Mypair._Myval2._Mylast;
  pVVar3 = g_vfsEntries._Mypair._Myval2._Myfirst;
  if (g_vfsEntries._Mypair._Myval2._Myfirst != (VfsEntry *)0x0) {
    for (; pVVar3 != pVVar1; pVVar3 = pVVar3 + 1) {
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
      ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>(&pVVar3->localPath);
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
      ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                (&pVVar3->virtualPath);
    }
    uVar2 = (longlong)g_vfsEntries._Mypair._Myval2._Myend -
            (longlong)g_vfsEntries._Mypair._Myval2._Myfirst & 0xffffffffffffffc0;
    pVVar3 = g_vfsEntries._Mypair._Myval2._Myfirst;
    if (0xfff < uVar2) {
      pVVar3 = (VfsEntry *)
               g_vfsEntries._Mypair._Myval2._Myfirst[-1].localPath._Mypair._Myval2._Myres;
      uVar2 = uVar2 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)g_vfsEntries._Mypair._Myval2._Myfirst + (-8 - (longlong)pVVar3))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pVVar3,uVar2);
    g_vfsEntries._Mypair._Myval2._Myfirst = (VfsEntry *)0x0;
    g_vfsEntries._Mypair._Myval2._Mylast = (VfsEntry *)0x0;
    g_vfsEntries._Mypair._Myval2._Myend = (VfsEntry *)0x0;
  }
  return;
}

