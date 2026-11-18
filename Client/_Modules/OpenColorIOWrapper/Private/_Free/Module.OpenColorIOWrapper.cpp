// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIOWrapper
// Functions: 27

// `dynamic_initializer_for_'FOpenColorIOTransferFunctionsTestAutomationTestInstance'' @ 1413dc500

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FOpenColorIOTransferFunctionsTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FOpenColorIOTransferFunctionsTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FOpenColorIOTransferFunctionsTestAutomationTestInstance,
             &local_18,false);
  FOpenColorIOTransferFunctionsTestAutomationTestInstance._0_8_ =
       &___7FOpenColorIOTransferFunctionsTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FOpenColorIOTransferFunctionsTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'LogOpenColorIOWrapper'' @ 1413dc560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogOpenColorIOWrapper__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogOpenColorIOWrapper,L"LogOpenColorIOWrapper",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogOpenColorIOWrapper__);
  return;
}

// `dynamic_initializer_for_'LogUnrealOpenColorIOTest'' @ 1413dc5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogUnrealOpenColorIOTest__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogUnrealOpenColorIOTest,L"LogUnrealOpenColorIOTest",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogUnrealOpenColorIOTest__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantOpenColorIOWrapper'' @ 1413dc5e0

void __cdecl _dynamic_initializer_for__ModuleRegistrantOpenColorIOWrapper__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "OpenColorIOWrapper";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"OpenColorIOWrapper",0x12);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FOpenColorIOWrapperModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14d75cd40

void * __thiscall
FOpenColorIOWrapperModule::_scalar_deleting_destructor_
          (FOpenColorIOWrapperModule *this,uint param_1)

{
  FOpenColorIOWrapperEngineConfig *pFVar1;
  
  pFVar1 = (this->EngineBuiltInConfig).Ptr;
  if (pFVar1 != (FOpenColorIOWrapperEngineConfig *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ConfigCriticalSection);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d75cda0

void * __thiscall
IOpenColorIOWrapperModule::_scalar_deleting_destructor_
          (IOpenColorIOWrapperModule *this,uint param_1)

{
  *this = (IOpenColorIOWrapperModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d75d9d0

void * __thiscall
FOpenColorIOTransferFunctionsTest::_scalar_deleting_destructor_
          (FOpenColorIOTransferFunctionsTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// operator==<OpenColorIO_v2_4::ColorSpace_const_> @ 14d75da10

bool __cdecl
std::operator==<OpenColorIO_v2_4::ColorSpace_const_>
          (shared_ptr<OpenColorIO_v2_4::ColorSpace_const_> *param_1,void *param_2)

{
  return *(longlong *)param_1 == 0;
}

// operator==<OpenColorIO_v2_4::Config_const_> @ 14d75da20

bool __cdecl
std::operator==<OpenColorIO_v2_4::Config_const_>
          (shared_ptr<OpenColorIO_v2_4::Config_const_> *param_1,void *param_2)

{
  return *(longlong *)param_1 == 0;
}

// operator==<OpenColorIO_v2_4::GPUProcessor_const_> @ 14d75da30

bool __cdecl
std::operator==<OpenColorIO_v2_4::GPUProcessor_const_>
          (shared_ptr<OpenColorIO_v2_4::GPUProcessor_const_> *param_1,void *param_2)

{
  return *(longlong *)param_1 == 0;
}

// operator==<OpenColorIO_v2_4::NamedTransform_const_> @ 14d75da40

bool __cdecl
std::operator==<OpenColorIO_v2_4::NamedTransform_const_>
          (shared_ptr<OpenColorIO_v2_4::NamedTransform_const_> *param_1,void *param_2)

{
  return *(longlong *)param_1 == 0;
}

// operator==<OpenColorIO_v2_4::Processor_const_> @ 14d75da50

bool __cdecl
std::operator==<OpenColorIO_v2_4::Processor_const_>
          (shared_ptr<OpenColorIO_v2_4::Processor_const_> *param_1,void *param_2)

{
  return *(longlong *)param_1 == 0;
}

// operator==<OpenColorIO_v2_4::ViewTransform_const_> @ 14d75da60

bool __cdecl
std::operator==<OpenColorIO_v2_4::ViewTransform_const_>
          (shared_ptr<OpenColorIO_v2_4::ViewTransform_const_> *param_1,void *param_2)

{
  return *(longlong *)param_1 == 0;
}

// operator==<OpenColorIO_v2_4::GpuShaderDesc> @ 14d75da70

bool __cdecl
std::operator==<OpenColorIO_v2_4::GpuShaderDesc>
          (shared_ptr<OpenColorIO_v2_4::GpuShaderDesc> *param_1,void *param_2)

{
  return *(longlong *)param_1 == 0;
}

// operator= @ 14d7605e0

shared_ptr<OpenColorIO_v2_4::Processor_const_> * __thiscall
std::shared_ptr<OpenColorIO_v2_4::Processor_const_>::operator=
          (shared_ptr<OpenColorIO_v2_4::Processor_const_> *this,
          shared_ptr<OpenColorIO_v2_4::Processor_const_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)&param_1->field_0x8 = 0;
  plVar6 = *(longlong **)&this->field_0x8;
  *(undefined8 *)this = uVar4;
  *(undefined8 *)&this->field_0x8 = uVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
    return this;
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d760780

void * __thiscall
FOpenColorIOWrapperConfig::_scalar_deleting_destructor_
          (FOpenColorIOWrapperConfig *this,uint param_1)

{
  TPimplPtr<FOpenColorIOConfigPimpl,1> TVar1;
  
  TVar1 = this->Pimpl;
  if (TVar1 != (TPimplPtr<FOpenColorIOConfigPimpl,1>)0x0) {
    (**(code **)((longlong)TVar1 + -0x10))((longlong)TVar1 + -0x10);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7607d0

void * __thiscall
FOpenColorIOWrapperEngineConfig::_scalar_deleting_destructor_
          (FOpenColorIOWrapperEngineConfig *this,uint param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this->field_0x8;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// ClearAllCaches @ 14d760830

void __cdecl OpenColorIOWrapper::ClearAllCaches(void)

{
  OpenColorIO_v2_4::ClearPathCaches();
  OpenColorIO_v2_4::ClearFileTransformCaches();
  return;
}

// GetImageDesc @ 14d7634b0

PackedImageDesc * __cdecl
`anonymous_namespace'::GetImageDesc(PackedImageDesc *__return_storage_ptr__,FImageView *param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  PackedImageDesc *pPVar4;
  ChannelOrdering CVar5;
  ChannelOrdering CVar6;
  
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 4);
  CVar5 = CHANNEL_ORDERING_RGBA;
  if (cVar1 == '\x01') {
    CVar5 = CHANNEL_ORDERING_BGRA;
    CVar6 = CVar5;
  }
  else if (cVar1 == '\x03') {
    CVar6 = CHANNEL_ORDERING_BGR|CHANNEL_ORDERING_BGRA;
  }
  else if (cVar1 == '\x04') {
    CVar6 = CHANNEL_ORDERING_BGR|CHANNEL_ORDERING_RGB;
  }
  else if (cVar1 == '\x05') {
    CVar6 = 8;
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenColorIOWrapper\\Private\\OpenColorIOWrapper.cpp"
                       ,0x85,L"");
    CVar5 = CHANNEL_ORDERING_RGBA;
    CVar6 = CHANNEL_ORDERING_RGBA;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pPVar4 = (PackedImageDesc *)(*pcVar2)();
      return pPVar4;
    }
  }
  OpenColorIO_v2_4::PackedImageDesc::PackedImageDesc
            (__return_storage_ptr__,param_1->RawData,(long)param_1->_padding_,
             *(long *)((longlong)&param_1->_padding_ + 4),CVar5,CVar6,-0x8000000000000000,
             -0x8000000000000000,-0x8000000000000000);
  return __return_storage_ptr__;
}

// GetVersion @ 14d763b60

wchar_t * __cdecl OpenColorIOWrapper::GetVersion(void)

{
  return L"2.4.1";
}

// GetVersionHex @ 14d763b70

uint __cdecl OpenColorIOWrapper::GetVersionHex(void)

{
  return 0x2040100;
}

// MakeAnsiString @ 14d763d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> __cdecl
OpenColorIOWrapper::MakeAnsiString(wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  void *_Dst;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar3;
  int iVar4;
  wchar_t *in_RDX;
  ulong64 _Size;
  undefined1 auStack_e8 [32];
  TStringConversion<TStringConvert<wchar_t,char>,128> local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  iVar4 = 0;
  wVar1 = *in_RDX;
  pwVar2 = in_RDX;
  while (wVar1 != L'\0') {
    pwVar2 = pwVar2 + 1;
    iVar4 = iVar4 + 1;
    wVar1 = *pwVar2;
  }
  _Size = (ulong64)(iVar4 + 1);
  _Dst = operator_new__(_Size);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    memset(_Dst,0,_Size);
  }
  *(void **)param_1 = _Dst;
  pTVar3 = StringCast<char,128,wchar_t>(&local_c8,in_RDX);
  memcpy(*(void **)param_1,pTVar3->Ptr,_Size);
  if ((void *)local_c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._padding_);
  }
  return (TUniquePtr<char_[0],TDefaultDelete<char_[0]>_>)(char *)param_1;
}

// IMPLEMENT_MODULE_OpenColorIOWrapper @ 14d7642b0

void __cdecl IMPLEMENT_MODULE_OpenColorIOWrapper(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'BuiltInConfigCriticalSection'' @ 1504592a0

void __cdecl
`FOpenColorIOWrapperProcessor::CreateTransformToWorkingColorSpace'::__l2::
_dynamic_atexit_destructor_for__BuiltInConfigCriticalSection__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504592a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&BuiltInConfigCriticalSection);
  return;
}

// `dynamic_atexit_destructor_for_'FOpenColorIOTransferFunctionsTestAutomationTestInstance'' @ 1504592c0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FOpenColorIOTransferFunctionsTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FOpenColorIOTransferFunctionsTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'LogOpenColorIOWrapper'' @ 1504592e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogOpenColorIOWrapper__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogOpenColorIOWrapper);
  return;
}

// `dynamic_atexit_destructor_for_'LogUnrealOpenColorIOTest'' @ 150459300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogUnrealOpenColorIOTest__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogUnrealOpenColorIOTest);
  return;
}

