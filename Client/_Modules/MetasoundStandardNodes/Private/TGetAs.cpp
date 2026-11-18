// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 21

// Get @ 14b021060

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
* __cdecl Metasound::FAnyDataReference::
          TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>_>
          ::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
                *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b021280

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_> *
__cdecl Metasound::FAnyDataReference::
        TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>_>
        ::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>
              *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b0214a0

TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_>_>::Get
          (TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_>
           *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FMonoAudioFormat>_>();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FMonoAudioFormat>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FMonoAudioFormat>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FMonoAudioFormat>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FMonoAudioFormat>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FMonoAudioFormat>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FMonoAudioFormat>_>'::__l2::
             _dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FMonoAudioFormat>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *)
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *)
               (*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_U__TVariable_VFMonoAudioFormat_Metasound___Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_VFMonoAudioFormat_Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b0216c0

TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_>_>::Get
          (TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_>
           *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FStereoAudioFormat>_>();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FStereoAudioFormat>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FStereoAudioFormat>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FStereoAudioFormat>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FStereoAudioFormat>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FStereoAudioFormat>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FStereoAudioFormat>_>'::__l2
             ::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::FStereoAudioFormat>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *)
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *)
               (*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_U__TVariable_VFStereoAudioFormat_Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_VFStereoAudioFormat_Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b06cd80

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>_>
::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>
      *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_> *pTVar6
  ;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b0d5290

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>_>
::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>
      *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b0d54b0

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_> *
__cdecl Metasound::FAnyDataReference::
        TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>_>
        ::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
              *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b0d56d0

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>_>
::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>
      *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b0d58f0

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
* __cdecl Metasound::FAnyDataReference::
          TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>_>
          ::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
                *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b18dd70

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_> *
__cdecl Metasound::FAnyDataReference::
        TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>_>
        ::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
              *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b18df90

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>_>
::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>
      *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b18e1b0

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_> *
__cdecl Metasound::FAnyDataReference::
        TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
        ::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
              *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b18e3d0

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_> *
__cdecl Metasound::FAnyDataReference::
        TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
        ::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
              *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b18e5f0

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_> *
__cdecl Metasound::FAnyDataReference::
        TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>_>
        ::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
              *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b18e810

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
* __cdecl Metasound::FAnyDataReference::
          TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
          ::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
                *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b18ea30

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_> *
__cdecl Metasound::FAnyDataReference::
        TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>_>
        ::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>
              *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b1e0c90

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>_>
::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>
      *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b1e0eb0

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_> *
__cdecl Metasound::FAnyDataReference::
        TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>_>
        ::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>
              *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b276dd0

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_> *
__cdecl Metasound::FAnyDataReference::
        TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>_>
        ::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
              *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b276ff0

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_> *
__cdecl Metasound::FAnyDataReference::
        TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>_>
        ::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
              *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
  *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// Get @ 14b277210

TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_> * __cdecl
Metasound::FAnyDataReference::
TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>_>
::Get(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>
      *__return_storage_ptr__,EDataReferenceAccessType param_1,IDataReference *param_2)

{
  FName FVar1;
  IDataReference IVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_> *pTVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
                     ();
  FVar1 = *pFVar5;
  pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
  bVar4 = IsCastable(*pFVar5,FVar1);
  if (!bVar4) {
    pFVar5 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    ::FName::ToString(pFVar5,&local_38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>(void)'
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>
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
      pTVar6 = (TDataWriteReference<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound___Metasound__6B_
  ;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = param_2[1];
  IVar2 = param_2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar2;
  if (IVar2 != (IDataReference)0x0) {
    *(int *)((longlong)IVar2 + 8) = *(int *)((longlong)IVar2 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

