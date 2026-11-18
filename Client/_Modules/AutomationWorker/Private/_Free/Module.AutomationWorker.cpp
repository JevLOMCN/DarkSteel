// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationWorker
// Functions: 46

// Analytics'' @ 141165280

void __cdecl `dynamic_initializer_for_'FAutomationAnalytics::Analytics__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FAutomationAnalytics::Analytics__);
  return;
}

// AutomationEventNames'' @ 1411652a0

void __cdecl `dynamic_initializer_for_'FAutomationAnalytics::AutomationEventNames__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FAutomationAnalytics::AutomationEventNames__);
  return;
}

// AutomationParamNames'' @ 1411652c0

void __cdecl `dynamic_initializer_for_'FAutomationAnalytics::AutomationParamNames__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FAutomationAnalytics::AutomationParamNames__);
  return;
}

// MachineSpec'' @ 1411652e0

void __cdecl `dynamic_initializer_for_'FAutomationAnalytics::MachineSpec__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FAutomationAnalytics::MachineSpec__);
  return;
}

// `dynamic_initializer_for_'LogAutomationAnalytics'' @ 141165300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAutomationAnalytics__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAutomationAnalytics,L"LogAutomationAnalytics",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAutomationAnalytics__);
  return;
}

// `dynamic_initializer_for_'LogAutomationWorker'' @ 141165340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAutomationWorker__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAutomationWorker,L"LogAutomationWorker",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAutomationWorker__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAutomationWorker'' @ 141165380

void __cdecl _dynamic_initializer_for__ModuleRegistrantAutomationWorker__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AutomationWorker";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AutomationWorker",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAutomationWorkerModule>::InitializeModule)
  ;
  return;
}

// `scalar_deleting_destructor' @ 148bfd4f0

void * __thiscall
IAutomationWorkerModule::_scalar_deleting_destructor_(IAutomationWorkerModule *this,uint param_1)

{
  *this = (IAutomationWorkerModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bfd700

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FAutomationWorkerModule::_scalar_deleting_destructor_(FAutomationWorkerModule *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->ActiveSection).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeviceTag).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StopTestEvent);
  pvVar2 = *(void **)&(this->StopTestEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->StopTestEvent);
  pFVar1 = (this->FullTestPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BeautifiedTestName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TestName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
  DestructItems<FAutomationTestInfo,int>
            ((FAutomationTestInfo *)(this->TestInfo).AllocatorInstance.Data,
             (this->TestInfo).ArrayNum);
  pFVar1 = (this->TestInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bfec70

void * __thiscall
IBaseDelegateInstance<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bfeca0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bfecd0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationWorkerModule,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAutomationWorkerModule,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bfed00

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationWorkerModule,void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAutomationWorkerModule,void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bfed30

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationWorkerModule,void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAutomationWorkerModule,void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bfed60

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationWorkerModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAutomationWorkerModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bfed90

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bfedc0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bfedf0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FAutomationWorkerFindWorkers,FAutomationWorkerModule>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FAutomationWorkerFindWorkers,FAutomationWorkerModule> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bfee30

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationWorkerModule>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationWorkerModule> *this
          ,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bfee70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FAutomationWorkerNextNetworkCommandReply,FAutomationWorkerModule>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FAutomationWorkerNextNetworkCommandReply,FAutomationWorkerModule>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bfeeb0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FAutomationWorkerPing,FAutomationWorkerModule>::_scalar_deleting_destructor_
          (TRawMessageHandler<FAutomationWorkerPing,FAutomationWorkerModule> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bfeef0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FAutomationWorkerRequestTests,FAutomationWorkerModule>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FAutomationWorkerRequestTests,FAutomationWorkerModule> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bfef30

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FAutomationWorkerRunTests,FAutomationWorkerModule>::_scalar_deleting_destructor_
          (TRawMessageHandler<FAutomationWorkerRunTests,FAutomationWorkerModule> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bfef70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FAutomationWorkerStartTestSession,FAutomationWorkerModule>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FAutomationWorkerStartTestSession,FAutomationWorkerModule> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bfefb0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FAutomationWorkerStopTestSession,FAutomationWorkerModule>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FAutomationWorkerStopTestSession,FAutomationWorkerModule> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bfeff0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FAutomationWorkerStopTests,FAutomationWorkerModule>::_scalar_deleting_destructor_
          (TRawMessageHandler<FAutomationWorkerStopTests,FAutomationWorkerModule> *this,uint param_1
          )

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bff030

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FAutomationWorkerTestDataResponse,FAutomationWorkerModule>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FAutomationWorkerTestDataResponse,FAutomationWorkerModule> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bff070

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerFindWorkers,FAutomationWorkerModule>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerFindWorkers,FAutomationWorkerModule>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerFindWorkers,FAutomationWorkerModule>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerFindWorkers,FAutomationWorkerModule>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bff0b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationWorkerModule>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationWorkerModule>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationWorkerModule>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationWorkerModule>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bff0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerNextNetworkCommandReply,FAutomationWorkerModule>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerNextNetworkCommandReply,FAutomationWorkerModule>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerNextNetworkCommandReply,FAutomationWorkerModule>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerNextNetworkCommandReply,FAutomationWorkerModule>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bff130

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerPing,FAutomationWorkerModule>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerPing,FAutomationWorkerModule>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerPing,FAutomationWorkerModule>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerPing,FAutomationWorkerModule>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bff170

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerRequestTests,FAutomationWorkerModule>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerRequestTests,FAutomationWorkerModule>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerRequestTests,FAutomationWorkerModule>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerRequestTests,FAutomationWorkerModule>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bff1b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerRunTests,FAutomationWorkerModule>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerRunTests,FAutomationWorkerModule>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerRunTests,FAutomationWorkerModule>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerRunTests,FAutomationWorkerModule>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bff1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerStartTestSession,FAutomationWorkerModule>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerStartTestSession,FAutomationWorkerModule>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerStartTestSession,FAutomationWorkerModule>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerStartTestSession,FAutomationWorkerModule>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bff230

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerStopTestSession,FAutomationWorkerModule>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerStopTestSession,FAutomationWorkerModule>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerStopTestSession,FAutomationWorkerModule>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerStopTestSession,FAutomationWorkerModule>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bff270

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerStopTests,FAutomationWorkerModule>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerStopTests,FAutomationWorkerModule>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerStopTests,FAutomationWorkerModule>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerStopTests,FAutomationWorkerModule>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bff2b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerTestDataResponse,FAutomationWorkerModule>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerTestDataResponse,FAutomationWorkerModule>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerTestDataResponse,FAutomationWorkerModule>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerTestDataResponse,FAutomationWorkerModule>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// GetRHIForAutomation @ 148c02af0

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __cdecl
GetRHIForAutomation(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                    *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  FName *pFVar7;
  int iVar8;
  bool bVar9;
  FName local_res8;
  FString local_58;
  undefined1 local_48 [16];
  FString local_38;
  initializer_list<FName> local_28;
  
  local_res8.ComparisonIndex.Value = 0;
  FApp::GetGraphicsRHI(&local_58);
  LexToString(&local_38,GMaxRHIFeatureLevel);
  if (1 < local_58.Data.ArrayNum) {
    for (FVar6.Data = local_58.Data.AllocatorInstance.Data;
        FVar6.Data != local_58.Data.AllocatorInstance.Data + (longlong)local_58.Data.ArrayNum * 2;
        FVar6.Data = FVar6.Data + 2) {
      if (*(short *)FVar6.Data == 0x28) {
        iVar3 = (int)((longlong)FVar6.Data - (longlong)local_58.Data.AllocatorInstance.Data >> 1);
        if (iVar3 != -1) {
          iVar8 = local_58.Data.ArrayNum + -1;
          if (local_58.Data.ArrayNum == 0) {
            iVar8 = 0;
          }
          if (iVar3 < iVar8) {
            iVar8 = iVar3;
          }
          iVar3 = 0;
          if (0 < iVar8) {
            iVar3 = iVar8;
          }
          FVar6.Data = (FScriptContainerElement *)L"";
          if (local_58.Data.ArrayNum != 0) {
            FVar6.Data = local_58.Data.AllocatorInstance.Data;
          }
          FString::ConstructFromPtrSize((FString *)local_48,(wchar_t *)FVar6.Data,iVar3);
          pFVar5 = FString::TrimEnd((FString *)local_48,(FString *)&local_28);
          if (&local_58 != pFVar5) {
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            local_58.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
            (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_58.Data.ArrayNum = (pFVar5->Data).ArrayNum;
            local_58.Data.ArrayMax = (pFVar5->Data).ArrayMax;
            (pFVar5->Data).ArrayNum = 0;
            (pFVar5->Data).ArrayMax = 0;
          }
          if (local_28._First != (FName *)0x0) {
            FMemory::Free(local_28._First);
          }
          goto LAB_148c02ca2;
        }
        break;
      }
    }
    goto LAB_148c02cb8;
  }
  pwVar4 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar4,L"nullrhi");
  if (bVar2) {
    FString::FString((FString *)local_48,L"Null");
    pFVar5 = (FString *)local_48;
    bVar2 = false;
    bVar1 = true;
LAB_148c02b93:
    bVar9 = bVar1;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = (pFVar5->Data).ArrayNum;
    local_58.Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
    if (bVar2) goto LAB_148c02bc0;
  }
  else {
    pFVar5 = FString::FString((FString *)&local_28,L"N/A");
    bVar2 = true;
    bVar9 = false;
    bVar1 = false;
    if (&local_58 != pFVar5) goto LAB_148c02b93;
LAB_148c02bc0:
    if (local_28._First != (FName *)0x0) {
      FMemory::Free(local_28._First);
    }
  }
  if (bVar9) {
LAB_148c02ca2:
    if ((FName)local_48._0_8_ != (FName)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
  }
LAB_148c02cb8:
  iVar3 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  pFVar7 = FName::FName(&local_res8,iVar3,(wchar_t *)local_58.Data.AllocatorInstance.Data,FNAME_Add)
  ;
  local_48._0_8_ = *pFVar7;
  iVar3 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  pFVar7 = FName::FName(&local_res8,iVar3,(wchar_t *)local_38.Data.AllocatorInstance.Data,FNAME_Add)
  ;
  local_48._8_8_ = *pFVar7;
  local_28._First = (FName *)local_48;
  local_28._Last = (FName *)&local_38;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>(__return_storage_ptr__,&local_28);
  if ((FName)local_38.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IMPLEMENT_MODULE_AutomationWorker @ 148c09b60

void __cdecl IMPLEMENT_MODULE_AutomationWorker(void)

{
  return;
}

// Analytics'' @ 15040b170

void __cdecl `dynamic_atexit_destructor_for_'FAutomationAnalytics::Analytics__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FAutomationAnalytics::Analytics.SharedReferenceCount.ReferenceController);
  return;
}

// AutomationEventNames'' @ 15040b190

void __cdecl `dynamic_atexit_destructor_for_'FAutomationAnalytics::AutomationEventNames__(void)

{
  DestructItems<FString,int>
            ((FString *)FAutomationAnalytics::AutomationEventNames.AllocatorInstance.Data,
             FAutomationAnalytics::AutomationEventNames.ArrayNum);
  if (FAutomationAnalytics::AutomationEventNames.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FAutomationAnalytics::AutomationEventNames.AllocatorInstance.Data);
    return;
  }
  return;
}

// AutomationParamNames'' @ 15040b1d0

void __cdecl `dynamic_atexit_destructor_for_'FAutomationAnalytics::AutomationParamNames__(void)

{
  DestructItems<FString,int>
            ((FString *)FAutomationAnalytics::AutomationParamNames.AllocatorInstance.Data,
             FAutomationAnalytics::AutomationParamNames.ArrayNum);
  if (FAutomationAnalytics::AutomationParamNames.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FAutomationAnalytics::AutomationParamNames.AllocatorInstance.Data);
    return;
  }
  return;
}

// MachineSpec'' @ 15040b210

void __cdecl `dynamic_atexit_destructor_for_'FAutomationAnalytics::MachineSpec__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FAutomationAnalytics::MachineSpec.Data.AllocatorInstance.Data;
  if (FAutomationAnalytics::MachineSpec.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FAutomationAnalytics::MachineSpec.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogAutomationAnalytics'' @ 15040b230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAutomationAnalytics__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAutomationAnalytics);
  return;
}

// `dynamic_atexit_destructor_for_'LogAutomationWorker'' @ 15040b250

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAutomationWorker__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAutomationWorker);
  return;
}

// `dynamic_atexit_destructor_for_'RHI'' @ 15040b270

void __cdecl
`FAutomationWorkerModule::IsTestExcluded'::__l2::_dynamic_atexit_destructor_for__RHI__(void)

{
  RHI.HashSize = 0;
  if (RHI.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)RHI.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&RHI.Elements);
  return;
}

