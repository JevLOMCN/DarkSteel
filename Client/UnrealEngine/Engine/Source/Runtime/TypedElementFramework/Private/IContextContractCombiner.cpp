// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 2

// SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_> @ 142cded20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArrayView<FName_const_,int> * __cdecl
UE::Editor::DataStorage::Queries::Private::
IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>
::
SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>
          (TArrayView<FName_const_,int> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Capabilities =
           (FName *)ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name;
      _Result = &`public:___cdecl_`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                 ::__l2::Capabilities;
      _DAT_1550611a0 = 1;
      _Init_thread_footer(&`public:_static_class_TArrayView<FName_const_,int>___cdecl_UE::Editor::DataStorage::Queries::Private::IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>::SupportedCapabilitiesList<UE::Editor::DataStorage::Queries::TCapabilityStore<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  uVar1 = CONCAT44(uRam00000001550611a4,_DAT_1550611a0);
  __return_storage_ptr__->DataPtr = (FName *)_Result;
  *(undefined8 *)&__return_storage_ptr__->ArrayNum = uVar1;
  return __return_storage_ptr__;
}

// ~IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo> @ 142ce4c00

void __thiscall
UE::Editor::DataStorage::Queries::Private::
IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>
::
~IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>
          (IContextContractCombiner<UE::Editor::DataStorage::Queries::ISingleRowInfo,UE::Editor::DataStorage::Queries::IRowBatchInfo>
           *this)

{
  return;
}

