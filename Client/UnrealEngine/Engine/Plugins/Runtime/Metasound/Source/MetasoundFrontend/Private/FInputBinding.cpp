// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// GetDataReferenceAs<Metasound::TDataValueReference<Metasound::Frontend::FAnalyzerAddress>_> @ 14ad87780

TDataValueReference<Metasound::Frontend::FAnalyzerAddress> * __thiscall
Metasound::VertexDataPrivate::FInputBinding::
GetDataReferenceAs<Metasound::TDataValueReference<Metasound::Frontend::FAnalyzerAddress>_>
          (FInputBinding *this,
          TDataValueReference<Metasound::Frontend::FAnalyzerAddress> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::Frontend::FAnalyzerAddress> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->Data).bIsSet == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0x10e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar4)();
    return pTVar6;
  }
  if (((this->Data).bIsSet == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar4)();
    return pTVar6;
  }
  if (((this->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr;
  EVar1 = (this->Data).TypedValue.AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::Frontend::FAnalyzerAddress>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar4)();
    return pTVar6;
  }
  if (EVar1 != Value) {
    ::LexToString(&local_18,Value);
    ::LexToString(&local_28,EVar1);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Value== InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2f5,
                       L"Invalid attempt to convert a data ref with \"%s\" access to \"%s\" access")
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TDataValueReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDataReferenceAs<Metasound::TDataValueReference<Metasound::FAudioBuffer>_> @ 14af023f0

TDataValueReference<Metasound::FAudioBuffer> * __thiscall
Metasound::VertexDataPrivate::FInputBinding::
GetDataReferenceAs<Metasound::TDataValueReference<Metasound::FAudioBuffer>_>
          (FInputBinding *this,TDataValueReference<Metasound::FAudioBuffer> *__return_storage_ptr__)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  IDataReference IVar3;
  code *pcVar4;
  bool bVar5;
  TDataValueReference<Metasound::FAudioBuffer> *pTVar6;
  FString local_28;
  FString local_18;
  
  if (((this->Data).bIsSet == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0x10e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::FAudioBuffer> *)(*pcVar4)();
    return pTVar6;
  }
  if (((this->Data).bIsSet == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::FAudioBuffer> *)(*pcVar4)();
    return pTVar6;
  }
  if (((this->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x369,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::FAudioBuffer> *)(*pcVar4)();
    return pTVar6;
  }
  pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr;
  EVar1 = (this->Data).TypedValue.AccessType;
  bVar5 = IsDataReferenceOfType<Metasound::FAudioBuffer>(pIVar2);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDataReferenceOfType<DataType>(InRef)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x2f4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDataValueReference<Metasound::FAudioBuffer> *)(*pcVar4)();
    return pTVar6;
  }
  if (EVar1 != Value) {
    ::LexToString(&local_18,Value);
    ::LexToString(&local_28,EVar1);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::Value== InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x2f5,
                       L"Invalid attempt to convert a data ref with \"%s\" access to \"%s\" access")
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TDataValueReference<Metasound::FAudioBuffer> *)(*pcVar4)();
      return pTVar6;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(IDataReference *)&__return_storage_ptr__->field_0x8 = pIVar2[1];
  IVar3 = pIVar2[2];
  *(IDataReference *)&__return_storage_ptr__->field_0x10 = IVar3;
  if (IVar3 != (IDataReference)0x0) {
    *(int *)((longlong)IVar3 + 8) = *(int *)((longlong)IVar3 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_VFAudioBuffer_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// SetValue<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14af22540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::VertexDataPrivate::FInputBinding::
SetValue<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
          (FInputBinding *this,TEnum<Metasound::ESharedStateBehaviorType,1> *param_1)

{
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  undefined **local_28;
  TReferenceControllerBase<0> *local_20;
  TReferenceControllerBase<0> *pTStack_18;
  
  pFVar4 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>()
  ;
  if ((FName)(this->Vertex)._padding_ != *pFVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Vertex.DataTypeName == GetMetasoundDataTypeName<DataType>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x137,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTStack_18 = ::operator_new(0x18);
  if (pTStack_18 == (TReferenceControllerBase<0> *)0x0) {
    local_20 = ___xmm_00000000000000000000000000000010;
    pTStack_18 = _UNK_150651568;
  }
  else {
    pTStack_18->SharedReferenceCount = 1;
    pTStack_18->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    pTStack_18->WeakReferenceCount = 1;
    *(ESharedStateBehaviorType *)&pTStack_18[1]._padding_ = param_1->EnumValue;
    local_20 = pTStack_18 + 1;
    if (local_20 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  local_28 = &
             ___7__TDataValueReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  if (((this->Data).bIsSet != false) &&
     (pIVar1 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pcVar2 = (code *)local_28[3];
  (this->Data).TypedValue._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (this->Data).TypedValue.AccessType = Value;
  if (pcVar2 == TDataValueReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
                Clone) {
    TDataValueReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::Clone
              (&local_28);
  }
  else {
    (*pcVar2)(&local_28,&(this->Data).TypedValue.DataRefPtr);
  }
  if ((this->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->Data).TypedValue._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (this->Data).bIsSet = true;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_18);
  if ((this->Data).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

