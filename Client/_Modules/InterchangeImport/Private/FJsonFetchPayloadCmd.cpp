// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 2

// GetAction @ 14e69b5e0

FString * __thiscall
UE::Interchange::FJsonFetchPayloadCmd::GetAction
          (FJsonFetchPayloadCmd *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetAction(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetAction(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetAction(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_virtual_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetAction(void)const___ptr64'
                          ::__l2::LoadString,L"Payload");
      atexit(`UE::Interchange::FJsonFetchPayloadCmd::GetAction'::__l2::
             _dynamic_atexit_destructor_for__LoadString__);
      _Init_thread_footer(&`public:_virtual_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetAction(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = `public:_virtual_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetAction(void)const___ptr64'
          ::__l2::LoadString.Data.ArrayNum;
  _Src = `public:_virtual_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetAction(void)const___ptr64'
         ::__l2::LoadString.Data.AllocatorInstance;
  lVar3 = (longlong)
          `public:_virtual_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetAction(void)const___ptr64'
          ::__l2::LoadString.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum =
       `public:_virtual_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetAction(void)const___ptr64'
       ::__l2::LoadString.Data.ArrayNum;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar3 * 2);
  return __return_storage_ptr__;
}

// GetTranslatorID @ 14e6a2760

FString * __thiscall
UE::Interchange::FJsonFetchPayloadCmd::GetTranslatorID
          (FJsonFetchPayloadCmd *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((char)this->_padding_ == '\0') {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3563086482006605625>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Dispatcher\\Public\\InterchangeDispatcherTask.h"
                       ,199,"bIsDataInitialize");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::FString(__return_storage_ptr__,&this->TranslatorID);
  return __return_storage_ptr__;
}

