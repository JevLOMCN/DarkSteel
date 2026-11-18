// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 44

// Clone @ 14ad71f90

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::
TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::Clone(TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
        *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_U__TVariable_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataWriteReference_U__TVariable_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ad726a0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::
TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::Clone(void *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_U__TVariable_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)((longlong)this + 8);
    lVar1 = *(longlong *)((longlong)this + 0x10);
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ad753f0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<int>::Clone(TDataWriteReference<int> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 = &___7__TDataReference_H_Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 = &___7__TDataWriteReference_H_Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ad75530

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::Frontend::FAnalyzerAddress>::Clone
          (TDataWriteReference<Metasound::Frontend::FAnalyzerAddress> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &___7__TDataReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &___7__TDataWriteReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ad75d70

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>::Clone
          (TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_U__TVariable_VFAnalyzerAddress_Frontend_Metasound___Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataWriteReference_U__TVariable_VFAnalyzerAddress_Frontend_Metasound___Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ad78be0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::
TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
Clone(TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
      *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataWriteReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ad7ab90

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::Clone
          (void *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)((longlong)this + 8);
    lVar1 = *(longlong *)((longlong)this + 0x10);
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataWriteReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// CreateNew<> @ 14ad83090

TDataWriteReference<float> * __cdecl
Metasound::TDataWriteReference<float>::CreateNew<>
          (TDataWriteReference<float> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataWriteReference<float> *pTVar4;
  
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_M_Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
    *(undefined8 *)((longlong)puVar3 + 0xc) = 1;
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar3 + 2;
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataWriteReference<float> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataWriteReference_M_Metasound__6B_;
  return __return_storage_ptr__;
}

// Clone @ 14ada78b0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<float>::Clone(TDataWriteReference<float> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 = &___7__TDataWriteReference_M_Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ada7930

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::FTime>::Clone(TDataWriteReference<Metasound::FTime> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 = &___7__TDataWriteReference_VFTime_Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ae90fc0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_>::Clone
          (TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &___7__TDataWriteReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ae912a0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::FSendAddress>::Clone
          (TDataWriteReference<Metasound::FSendAddress> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 = &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 = &___7__TDataWriteReference_VFSendAddress_Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ae91c20

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::
TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>::
Clone(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
      *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_U__TVariable_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataWriteReference_U__TVariable_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ae95be0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<FMetasoundParameterStorageWrapper>::Clone
          (TDataWriteReference<FMetasoundParameterStorageWrapper> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &___7__TDataReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &___7__TDataWriteReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ae97c60

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>::Clone
          (TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &___7__TDataReference_U__TVariable_VFAudioBuffer_Metasound___Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataWriteReference_U__TVariable_VFAudioBuffer_Metasound___Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ae99140

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
Clone(TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_U__TVariable_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataWriteReference_U__TVariable_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aea5200

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::TVariable<int>_>::Clone
          (TDataWriteReference<Metasound::TVariable<int>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 = &___7__TDataReference_U__TVariable_H_Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 = &___7__TDataWriteReference_U__TVariable_H_Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aea5280

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
Clone(TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_U__TVariable_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataWriteReference_U__TVariable_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aea5c90

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<bool>::Clone(TDataWriteReference<bool> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 = &___7__TDataReference__N_Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 = &___7__TDataWriteReference__N_Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aea6910

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_>::Clone
          (TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &___7__TDataReference_U__TVariable_VFTrigger_Metasound___Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &___7__TDataWriteReference_U__TVariable_VFTrigger_Metasound___Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aead560

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>::Clone
          (TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &___7__TDataReference_U__TVariable_VFSendAddress_Metasound___Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataWriteReference_U__TVariable_VFSendAddress_Metasound___Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aeaf710

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::FTrigger>::Clone
          (TDataWriteReference<Metasound::FTrigger> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aeb06b0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_>::Clone
          (TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &___7__TDataReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &___7__TDataWriteReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aeb3100

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::
TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::Clone(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
        *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_U__TVariable_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataWriteReference_U__TVariable_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aebbea0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::Clone(TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
        *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_U__TVariable_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataWriteReference_U__TVariable_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aebda70

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::Clone
          (TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataWriteReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aebfad0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::TVariable<bool>_>::Clone
          (TDataWriteReference<Metasound::TVariable<bool>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 = &___7__TDataReference_U__TVariable__N_Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 = &___7__TDataWriteReference_U__TVariable__N_Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aec2760

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTime>_>::Clone
          (TDataWriteReference<Metasound::TVariable<Metasound::FTime>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &___7__TDataReference_U__TVariable_VFTime_Metasound___Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &___7__TDataWriteReference_U__TVariable_VFTime_Metasound___Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aec4f80

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::TVariable<FString>_>::Clone
          (TDataWriteReference<Metasound::TVariable<FString>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 = &___7__TDataReference_U__TVariable_VFString___Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &___7__TDataWriteReference_U__TVariable_VFString___Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aecd6e0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::Clone
          (TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &___7__TDataReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &___7__TDataWriteReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aecdaa0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
Clone(TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_U__TVariable_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataWriteReference_U__TVariable_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aece0a0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<FString>::Clone(TDataWriteReference<FString> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 = &___7__TDataReference_VFString___Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 = &___7__TDataWriteReference_VFString___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aecf250

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_>::Clone
          (TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataWriteReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aed04a0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>::Clone
          (TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_U__TVariable_VFMetasoundParameterStorageWrapper___Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataWriteReference_U__TVariable_VFMetasoundParameterStorageWrapper___Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aed5d40

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::Clone
          (TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataWriteReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aedae70

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::
TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::Clone(TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
        *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_U__TVariable_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataWriteReference_U__TVariable_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aee4b80

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::TVariable<float>_>::Clone
          (TDataWriteReference<Metasound::TVariable<float>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 = &___7__TDataReference_U__TVariable_M_Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 = &___7__TDataWriteReference_U__TVariable_M_Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aee5070

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::
TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::Clone
          (TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataWriteReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// CreateNew<TArray<int,TSizedDefaultAllocator<32>_>_const_&> @ 14aef8560

TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_>::
CreateNew<TArray<int,TSizedDefaultAllocator<32>_>_const_&>
          (TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar5;
  
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  puVar4 = ::operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    *puVar4 = &
              ___7__TIntrusiveReferenceController_V__TArray_HV__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    puVar4[2] = 0;
    iVar1 = param_1->ArrayNum;
    _Src = (param_1->AllocatorInstance).Data;
    *(int *)(puVar4 + 3) = iVar1;
    if (iVar1 == 0) {
      *(int *)((longlong)puVar4 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,0,(ForAnyElementType *)(puVar4 + 2),iVar1,
                 (int *)((longlong)puVar4 + 0x1c));
      memcpy(((ForAnyElementType *)(puVar4 + 2))->Data,_Src,(longlong)iVar1 << 2);
    }
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar4 + 2;
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar4;
    if (puVar4 + 2 == (undefined8 *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateNew<TArray<float,TSizedDefaultAllocator<32>_>_const_&> @ 14aef8680

TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_>::
CreateNew<TArray<float,TSizedDefaultAllocator<32>_>_const_&>
          (TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar5;
  
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  puVar4 = ::operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    *puVar4 = &
              ___7__TIntrusiveReferenceController_V__TArray_MV__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    puVar4[2] = 0;
    iVar1 = param_1->ArrayNum;
    _Src = (param_1->AllocatorInstance).Data;
    *(int *)(puVar4 + 3) = iVar1;
    if (iVar1 == 0) {
      *(int *)((longlong)puVar4 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,0,(ForAnyElementType *)(puVar4 + 2),iVar1,
                 (int *)((longlong)puVar4 + 0x1c));
      memcpy(((ForAnyElementType *)(puVar4 + 2))->Data,_Src,(longlong)iVar1 << 2);
    }
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar4 + 2;
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar4;
    if (puVar4 + 2 == (undefined8 *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateNew<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_const_&> @ 14aef87a0

TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
CreateNew<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_const_&>
          (TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,
          TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FSendAddress *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar6;
  
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  puVar5 = ::operator_new(0x20);
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar5 + 1) = 1;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    *puVar5 = &
              ___7__TIntrusiveReferenceController_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    puVar5[2] = 0;
    iVar1 = param_1->ArrayNum;
    pFVar2 = (FSendAddress *)(param_1->AllocatorInstance).Data;
    *(int *)(puVar5 + 3) = iVar1;
    if (iVar1 == 0) {
      *(int *)((longlong)puVar5 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar1,0,(ForAnyElementType *)(puVar5 + 2),iVar1,
                 (int *)((longlong)puVar5 + 0x1c));
      ConstructItems<Metasound::FSendAddress,Metasound::FSendAddress,int>
                (((ForAnyElementType *)(puVar5 + 2))->Data,pFVar2,iVar1);
    }
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar5 + 2;
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar5;
    if (puVar5 + 2 == (undefined8 *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateNew<TArray<FString,TSizedDefaultAllocator<32>_>_const_&> @ 14aef88c0

TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_>::
CreateNew<TArray<FString,TSizedDefaultAllocator<32>_>_const_&>
          (TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar6;
  
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_;
  puVar5 = ::operator_new(0x20);
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar5 + 1) = 1;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    *puVar5 = &
              ___7__TIntrusiveReferenceController_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    puVar5[2] = 0;
    iVar1 = param_1->ArrayNum;
    pFVar2 = (param_1->AllocatorInstance).Data;
    *(int *)(puVar5 + 3) = iVar1;
    if (iVar1 == 0) {
      *(int *)((longlong)puVar5 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,0,(ForAnyElementType *)(puVar5 + 2),iVar1,
                 (int *)((longlong)puVar5 + 0x1c));
      ConstructItems<FString,FString,int>
                (((ForAnyElementType *)(puVar5 + 2))->Data,(FString *)pFVar2,iVar1);
    }
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar5 + 2;
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar5;
    if (puVar5 + 2 == (undefined8 *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateNew<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_const_&> @ 14aef89e0

TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
CreateNew<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_const_&>
          (TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar6;
  
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  puVar5 = ::operator_new(0x20);
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar5 + 1) = 1;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    *puVar5 = &
              ___7__TIntrusiveReferenceController_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    puVar5[2] = 0;
    iVar1 = param_1->ArrayNum;
    pFVar2 = (param_1->AllocatorInstance).Data;
    *(int *)(puVar5 + 3) = iVar1;
    if (iVar1 == 0) {
      *(int *)((longlong)puVar5 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,0,(ForAnyElementType *)(puVar5 + 2),iVar1,
                 (int *)((longlong)puVar5 + 0x1c));
      ConstructItems<Metasound::FTime,Metasound::FTime,int>
                (((ForAnyElementType *)(puVar5 + 2))->Data,(FTime *)pFVar2,iVar1);
    }
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar5 + 2;
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar5;
    if (puVar5 + 2 == (undefined8 *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar3)();
        return pTVar6;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateNew<TArray<bool,TSizedDefaultAllocator<32>_>_const_&> @ 14aef8b00

TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
CreateNew<TArray<bool,TSizedDefaultAllocator<32>_>_const_&>
          (TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar5;
  
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  puVar4 = ::operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    *puVar4 = &
              ___7__TIntrusiveReferenceController_V__TArray__NV__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    puVar4[2] = 0;
    iVar1 = param_1->ArrayNum;
    _Src = (param_1->AllocatorInstance).Data;
    *(int *)(puVar4 + 3) = iVar1;
    if (iVar1 == 0) {
      *(int *)((longlong)puVar4 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar1,0,(ForAnyElementType *)(puVar4 + 2),iVar1,
                 (int *)((longlong)puVar4 + 0x1c));
      memcpy(((ForAnyElementType *)(puVar4 + 2))->Data,_Src,(longlong)iVar1);
    }
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar4 + 2;
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar4;
    if (puVar4 + 2 == (undefined8 *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return __return_storage_ptr__;
}

