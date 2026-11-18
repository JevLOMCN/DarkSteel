// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 1

// Get @ 14b2b0cc0

TDataWriteReference<Metasound::FTrigger> * __cdecl
Metasound::FAnyDataReference::TGetAs<Metasound::TDataWriteReference<Metasound::FTrigger>_>::Get
          (TDataWriteReference<Metasound::FTrigger> *__return_storage_ptr__,
          EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::FTrigger> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::FTrigger>();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::FTrigger>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::FTrigger>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::FTrigger>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::FTrigger>(void)'
                          ::__l2::TypeString,TDataReferenceTypeInfo<Metasound::FTrigger>::TypeName);
      atexit(`Metasound::GetMetasoundDataTypeString<Metasound::FTrigger>'::__l2::
             _dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::FTrigger>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(InRef.GetDataTypeName(), GetMetasoundDataTypeName<DataType>())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x301,
                       L"Attempt to get data reference with underlying type \"%s\" when actual underlying type is \"%s\"."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<Metasound::FTrigger> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if (param_1 != Write) {
    ::LexToString(&local_18,Write);
    ::LexToString(&local_28,param_1);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Write == InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x303,
                       L"Invalid attempt to convert a data ref with \"%s\" access to \"%s\" access")
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<Metasound::FTrigger> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

