// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamingFile
// Functions: 10

// `dynamic_initializer_for_'LogStreamingPlatformFile'' @ 141164ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStreamingPlatformFile__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogStreamingPlatformFile,L"LogStreamingPlatformFile",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogStreamingPlatformFile__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantStreamingFile'' @ 141164ee0

void __cdecl _dynamic_initializer_for__ModuleRegistrantStreamingFile__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "StreamingFile";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"StreamingFile",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FStreamingFileModule>::InitializeModule);
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 148be7d7c

/* [thunk]:public: virtual void * __ptr64 __cdecl FStreamingNetworkPlatformFile::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FStreamingNetworkPlatformFile::_vector_deleting_destructor__adjustor_8__
          (FStreamingNetworkPlatformFile *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FStreamingNetworkPlatformFile *)&this[-1].FilesToSyncAsync.ArrayNum,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 148beac60

void * __thiscall
FStreamingNetworkPlatformFile::_scalar_deleting_destructor_
          (FStreamingNetworkPlatformFile *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__IPlatformFile__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  DestructItems<FString,int>
            ((FString *)(this->FilesToSyncAsync).AllocatorInstance.Data,
             (this->FilesToSyncAsync).ArrayNum);
  pFVar1 = (this->FilesToSyncAsync).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNetworkPlatformFile::~FNetworkPlatformFile((FNetworkPlatformFile *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x208);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148beadc0

void * __thiscall
FStreamingFileModule::_scalar_deleting_destructor_(FStreamingFileModule *this,uint param_1)

{
  *this = (FStreamingFileModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148beae60

void * __thiscall
FStreamingNetworkFileArchive::_scalar_deleting_destructor_
          (FStreamingNetworkFileArchive *this,uint param_1)

{
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148beaeb0

void * __thiscall
FStreamingNetworkFileHandle::_scalar_deleting_destructor_
          (FStreamingNetworkFileHandle *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FStreamingNetworkFileHandle__6B_;
  FStreamingNetworkPlatformFile::SendCloseMessage(this->Network,this->HandleId);
  pFVar1 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IFileHandle__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20068);
  }
  return this;
}

// IMPLEMENT_MODULE_StreamingFile @ 148becfb0

void __cdecl IMPLEMENT_MODULE_StreamingFile(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'AutoDestroySingleton'' @ 15040ae30

void __cdecl
`FStreamingFileModule::GetPlatformFile'::__l2::
_dynamic_atexit_destructor_for__AutoDestroySingleton__(void)

{
  if (`public:_virtual_class_IPlatformFile*___ptr64___cdecl_FStreamingFileModule::GetPlatformFile(void)___ptr64'
      ::__l2::AutoDestroySingleton.Ptr != (IPlatformFile *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015040ae44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*`public:_virtual_class_IPlatformFile*___ptr64___cdecl_FStreamingFileModule::GetPlatformFile(void)___ptr64'
                 ::__l2::AutoDestroySingleton.Ptr)
              (`public:_virtual_class_IPlatformFile*___ptr64___cdecl_FStreamingFileModule::GetPlatformFile(void)___ptr64'
               ::__l2::AutoDestroySingleton.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogStreamingPlatformFile'' @ 15040ae50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStreamingPlatformFile__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStreamingPlatformFile);
  return;
}

