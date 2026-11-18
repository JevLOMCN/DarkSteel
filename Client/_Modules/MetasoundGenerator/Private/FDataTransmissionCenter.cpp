// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 1

// RegisterNewReceiver<FMetasoundParameterStorageWrapper> @ 14b2a5080

TUniquePtr<Metasound::TReceiver<FMetasoundParameterStorageWrapper>,TDefaultDelete<Metasound::TReceiver<FMetasoundParameterStorageWrapper>_>_>
 __thiscall
Metasound::FDataTransmissionCenter::RegisterNewReceiver<FMetasoundParameterStorageWrapper>
          (FDataTransmissionCenter *this,FTransmissionAddress *param_1,FReceiverInitParams *param_2)

{
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::TReceiver<FMetasoundParameterStorageWrapper>,TDefaultDelete<Metasound::TReceiver<FMetasoundParameterStorageWrapper>_>_>
  TVar4;
  undefined8 *puVar5;
  FTransmissionAddress FVar6;
  int *piVar7;
  FTransmissionAddress local_res10;
  FName local_58;
  FName local_50;
  FName local_48;
  FTransmissionAddress local_40;
  FTransmissionAddress local_38;
  FName *local_30;
  FString local_28;
  FString local_18;
  
  *param_1 = (FTransmissionAddress)0x0;
  RegisterNewReceiver(this,&local_res10,param_2);
  FVar6 = local_res10;
  if (local_res10 != (FTransmissionAddress)0x0) {
    piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if ((*piVar7 < `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>(void)'
                   ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<FMetasoundParameterStorageWrapper>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    local_58 = `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>(void)'
               ::__l2::TypeName;
    if (*(FName *)((longlong)FVar6 + 8) !=
        `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>(void)'
        ::__l2::TypeName) {
      local_30 = &local_58;
      local_38 = FVar6;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TReceiver<FMetasoundParameterStorageWrapper>_>'::__l2::<lambda_1>
              ::operator()(&local_38);
      if (!bVar3) {
        if ((*piVar7 < `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>(void)'
                       ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>(void)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>(void)'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>(void)'
                          ::__l2::TypeName,
                         TDataReferenceTypeInfo<FMetasoundParameterStorageWrapper>::TypeName);
          _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        local_50 = `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>(void)'
                   ::__l2::TypeName;
        ::FName::ToString(&local_50,&local_18);
        local_48 = *(FName *)((longlong)local_res10 + 8);
        ::FName::ToString(&local_48,&local_28);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TReceiver<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3e3,
                           L"Tried to downcast an IReceiver of type %s to a TSender of type %s!");
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar4.Ptr = (TReceiver<FMetasoundParameterStorageWrapper> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TReceiver<FMetasoundParameterStorageWrapper>,TDefaultDelete<Metasound::TReceiver<FMetasoundParameterStorageWrapper>_>_>
                  )TVar4.Ptr;
        }
      }
    }
    FVar6 = local_res10;
    local_res10 = (FTransmissionAddress)0x0;
    if (param_1 == &local_40) {
      if (FVar6 == (FTransmissionAddress)0x0) goto LAB_14b2a521d;
      puVar5 = *(undefined8 **)FVar6;
    }
    else {
      FVar1 = *param_1;
      *param_1 = FVar6;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b2a521d;
      puVar5 = *(undefined8 **)FVar1;
      FVar6 = FVar1;
    }
    (*(code *)*puVar5)(FVar6,1);
  }
LAB_14b2a521d:
  if (local_res10 != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res10)(local_res10,1);
  }
  return (TUniquePtr<Metasound::TReceiver<FMetasoundParameterStorageWrapper>,TDefaultDelete<Metasound::TReceiver<FMetasoundParameterStorageWrapper>_>_>
          )(TReceiver<FMetasoundParameterStorageWrapper> *)param_1;
}

