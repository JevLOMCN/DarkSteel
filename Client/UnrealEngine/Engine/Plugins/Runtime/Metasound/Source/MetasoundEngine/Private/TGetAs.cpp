// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 9

// Get @ 14b3aaa80

TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_>::Get
          (TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *__return_storage_ptr__
          ,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<WaveTable::FWaveTable>_>();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<WaveTable::FWaveTable>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<WaveTable::FWaveTable>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<WaveTable::FWaveTable>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<WaveTable::FWaveTable>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<WaveTable::FWaveTable>_>::
                         TypeName);
      atexit(`Metasound::GetMetasoundDataTypeString<Metasound::TVariable<WaveTable::FWaveTable>_>'::
             __l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<WaveTable::FWaveTable>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *)(*pcVar3)();
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_U__TVariable_UFWaveTable_WaveTable___Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_U__TVariable_UFWaveTable_WaveTable___Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// Get @ 14b3aaca0

TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
* __cdecl Metasound::FAnyDataReference::
          TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
          ::Get(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                *)(*pcVar3)();
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b3aaec0

TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
* __cdecl Metasound::FAnyDataReference::
          TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
          ::Get(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                *)(*pcVar3)();
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b3ab0e0

TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
* __cdecl Metasound::FAnyDataReference::
          TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
          ::Get(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                *)(*pcVar3)();
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b3ab300

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
* __cdecl Metasound::FAnyDataReference::
          TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
          ::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
                *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
                *)(*pcVar3)();
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b3ab520

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
* __cdecl Metasound::FAnyDataReference::
          TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
          ::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
                *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
                *)(*pcVar3)();
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b3ab740

TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_>::Get
          (TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>
           *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FAudioBusAsset>_>();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FAudioBusAsset>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FAudioBusAsset>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FAudioBusAsset>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FAudioBusAsset>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FAudioBusAsset>_>::
                         TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FAudioBusAsset>_>'::__l2::
             _dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FAudioBusAsset>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *)(*pcVar3)();
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_U__TVariable_VFAudioBusAsset_Metasound___Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_VFAudioBusAsset_Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b3ab960

TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_>::Get
          (TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *__return_storage_ptr__
          ,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FWaveAsset>_>();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FWaveAsset>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FWaveAsset>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FWaveAsset>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FWaveAsset>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FWaveAsset>_>::
                         TypeName);
      atexit(`Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FWaveAsset>_>'::
             __l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FWaveAsset>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *)(*pcVar3)();
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_U__TVariable_VFWaveAsset_Metasound___Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_U__TVariable_VFWaveAsset_Metasound___Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// Get @ 14b3abb80

TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_>::Get
          (TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>
           *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>'::
             __l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *)
               (*pcVar3)();
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *)
               (*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_VFWaveTableBankAsset_Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_VFWaveTableBankAsset_Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

