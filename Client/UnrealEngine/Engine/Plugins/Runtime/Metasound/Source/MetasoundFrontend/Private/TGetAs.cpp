// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 19

// Get @ 14adbb350

TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
* __cdecl Metasound::FAnyDataReference::
          TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
          ::Get(TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
                *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14adbb570

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
* __cdecl Metasound::FAnyDataReference::
          TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>_>
          ::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
                *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14adbb790

TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>_>
::Get(TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>
      *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *)
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *)
               (*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_VFAnalyzerAddress_Frontend_Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_VFAnalyzerAddress_Frontend_Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14af926d0

TDataWriteReference<Metasound::TVariable<int>_> * __cdecl
Metasound::FAnyDataReference::TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<int>_>_>::
Get(TDataWriteReference<Metasound::TVariable<int>_> *__return_storage_ptr__,
   EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<int>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<int>_>();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<int>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<int>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<int>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<int>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<int>_>::TypeName);
      atexit(`Metasound::GetMetasoundDataTypeString<Metasound::TVariable<int>_>'::__l2::
             _dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<int>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<int>_> *)(*pcVar3)();
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<int>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_U__TVariable_H_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_U__TVariable_H_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// Get @ 14af928f0

TDataWriteReference<Metasound::TVariable<float>_> * __cdecl
Metasound::FAnyDataReference::TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<float>_>_>
::Get(TDataWriteReference<Metasound::TVariable<float>_> *__return_storage_ptr__,
     EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<float>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<float>_>();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<float>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<float>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<float>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<float>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<float>_>::TypeName);
      atexit(`Metasound::GetMetasoundDataTypeString<Metasound::TVariable<float>_>'::__l2::
             _dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<float>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<float>_> *)(*pcVar3)();
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<float>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_U__TVariable_M_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_U__TVariable_M_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// Get @ 14af92b10

TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
::Get(TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>
      *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14af92d30

TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
::Get(TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>
      *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14af92f50

TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
* __cdecl Metasound::FAnyDataReference::
          TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>
          ::Get(TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
                *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14af93170

TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
* __cdecl Metasound::FAnyDataReference::
          TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
          ::Get(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14af93390

TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
::Get(TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
      *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14af935b0

TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_> *
__cdecl Metasound::FAnyDataReference::
        TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
        ::Get(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
              *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14af937d0

TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
::Get(TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
      *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14af939f0

TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>_>::Get
          (TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>
           *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FAudioBuffer>_>();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FAudioBuffer>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FAudioBuffer>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FAudioBuffer>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FAudioBuffer>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FAudioBuffer>_>::
                         TypeName);
      atexit(`Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FAudioBuffer>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FAudioBuffer>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *)(*pcVar3)();
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_U__TVariable_VFAudioBuffer_Metasound___Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_U__TVariable_VFAudioBuffer_Metasound___Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// Get @ 14af93c10

TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>_>::
Get(TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>
    *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>'::
             __l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *)
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *)
               (*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_VFMetasoundParameterStorageWrapper___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_VFMetasoundParameterStorageWrapper___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14af93e30

TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>_>::Get
          (TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>
           *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FSendAddress>_>();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FSendAddress>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FSendAddress>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FSendAddress>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FSendAddress>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FSendAddress>_>::
                         TypeName);
      atexit(`Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FSendAddress>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FSendAddress>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *)(*pcVar3)();
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_U__TVariable_VFSendAddress_Metasound___Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_U__TVariable_VFSendAddress_Metasound___Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// Get @ 14af94050

TDataWriteReference<Metasound::TVariable<FString>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<FString>_>_>::Get
          (TDataWriteReference<Metasound::TVariable<FString>_> *__return_storage_ptr__,
          EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<FString>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<FString>_>();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<FString>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<FString>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<FString>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<FString>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<FString>_>::TypeName);
      atexit(`Metasound::GetMetasoundDataTypeString<Metasound::TVariable<FString>_>'::__l2::
             _dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<FString>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<FString>_> *)(*pcVar3)();
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<FString>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_U__TVariable_VFString___Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_U__TVariable_VFString___Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// Get @ 14af94270

TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTime>_>_>::Get
          (TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *__return_storage_ptr__,
          EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FTime>_>();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FTime>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FTime>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FTime>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FTime>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FTime>_>::TypeName);
      atexit(`Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FTime>_>'::__l2
             ::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FTime>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *)(*pcVar3)();
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_U__TVariable_VFTime_Metasound___Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_U__TVariable_VFTime_Metasound___Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// Get @ 14af94490

TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_>_>::Get
          (TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *__return_storage_ptr__,
          EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FTrigger>_>();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FTrigger>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FTrigger>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FTrigger>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FTrigger>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FTrigger>_>::
                         TypeName);
      atexit(`Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FTrigger>_>'::
             __l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FTrigger>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *)(*pcVar3)();
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_U__TVariable_VFTrigger_Metasound___Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_U__TVariable_VFTrigger_Metasound___Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// Get @ 14af946b0

TDataWriteReference<Metasound::TVariable<bool>_> * __cdecl
Metasound::FAnyDataReference::TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<bool>_>_>::
Get(TDataWriteReference<Metasound::TVariable<bool>_> *__return_storage_ptr__,
   EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<bool>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<bool>_>();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<bool>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<bool>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<bool>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<bool>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<bool>_>::TypeName);
      atexit(`Metasound::GetMetasoundDataTypeString<Metasound::TVariable<bool>_>'::__l2::
             _dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<bool>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<bool>_> *)(*pcVar3)();
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<bool>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_U__TVariable__N_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_U__TVariable__N_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

