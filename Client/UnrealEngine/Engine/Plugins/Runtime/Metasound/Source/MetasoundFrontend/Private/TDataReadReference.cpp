// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 18

// Clone @ 14ad6d680

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataReadReference<FString>::Clone(TDataReadReference<FString> *this)

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
    *(undefined ***)IVar2 = &___7__TDataReadReference_VFString___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ad73b50

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataReadReference<Metasound::Frontend::FAnalyzerAddress>::Clone
          (TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *this)

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
         &___7__TDataReadReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ad75af0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataReadReference<int>::Clone(TDataReadReference<int> *this)

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
    *(undefined ***)IVar2 = &___7__TDataReadReference_H_Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ad76ef0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::
TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
Clone(TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
         ___7__TDataReadReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ad79c10

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::Clone
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
         ___7__TDataReadReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ad7dc30

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataReadReference<Metasound::FSendAddress>::Clone
          (TDataReadReference<Metasound::FSendAddress> *this)

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
    *(undefined ***)IVar2 = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ada7730

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataReadReference<float>::Clone(TDataReadReference<float> *this)

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
    *(undefined ***)IVar2 = &___7__TDataReadReference_M_Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ada77b0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataReadReference<Metasound::FTime>::Clone(TDataReadReference<Metasound::FTime> *this)

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
    *(undefined ***)IVar2 = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ada7830

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataReadReference<Metasound::FTrigger>::Clone
          (TDataReadReference<Metasound::FTrigger> *this)

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
    *(undefined ***)IVar2 = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14ae950a0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>::Clone
          (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

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
         &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aea7330

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>::Clone
          (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

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
         &___7__TDataReadReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aeaea10

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataReadReference<bool>::Clone(TDataReadReference<bool> *this)

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
    *(undefined ***)IVar2 = &___7__TDataReadReference__N_Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aeb5bc0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::Clone
          (TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this)

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
         ___7__TDataReadReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aec3750

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::Clone
          (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

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
         &___7__TDataReadReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aec7200

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>::Clone
          (TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

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
         ___7__TDataReadReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aecda20

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::Clone
          (TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

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
         ___7__TDataReadReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aedf270

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::
TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::Clone
          (TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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
         ___7__TDataReadReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14aee6120

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataReadReference<FMetasoundParameterStorageWrapper>::Clone
          (TDataReadReference<FMetasoundParameterStorageWrapper> *this)

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
         &___7__TDataReadReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

