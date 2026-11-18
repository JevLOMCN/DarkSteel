// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 59

// TInputDataVertex<int><> @ 14ad7fb50

TInputDataVertex<int> * __thiscall
Metasound::TInputDataVertex<int>::TInputDataVertex<int><>
          (TInputDataVertex<int> *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<int>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_H_Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_><> @ 14ad7fbd0

TInputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::
TInputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_><>
          (TInputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
           *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_><> @ 14ad7fc50

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_> *
__thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_><> @ 14ad7fcd0

TInputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>::
TInputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_><>
          (TInputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *this,
          FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_VFAnalyzerAddress_Frontend_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><> @ 14ad7fd50

TInputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::
TInputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
TInputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><> @ 14ad7fdd0

TInputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::
TInputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
TInputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,FName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                     ();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><> @ 14ad7fe30

TInputDataVertex<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>()
  ;
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><> @ 14ad7feb0

TInputDataVertex<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>()
  ;
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::Frontend::FAnalyzerAddress><> @ 14ad7ff10

TInputDataVertex<Metasound::Frontend::FAnalyzerAddress> * __thiscall
Metasound::TInputDataVertex<Metasound::Frontend::FAnalyzerAddress>::
TInputDataVertex<Metasound::Frontend::FAnalyzerAddress><>
          (TInputDataVertex<Metasound::Frontend::FAnalyzerAddress> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::Frontend::FAnalyzerAddress><> @ 14ad7ff90

TInputDataVertex<Metasound::Frontend::FAnalyzerAddress> * __thiscall
Metasound::TInputDataVertex<Metasound::Frontend::FAnalyzerAddress>::
TInputDataVertex<Metasound::Frontend::FAnalyzerAddress><>
          (TInputDataVertex<Metasound::Frontend::FAnalyzerAddress> *this,FName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::FSendAddress><> @ 14ad7fff0

TInputDataVertex<Metasound::FSendAddress> * __thiscall
Metasound::TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
          (TInputDataVertex<Metasound::FSendAddress> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::FTrigger><> @ 14ad80070

TInputDataVertex<Metasound::FTrigger> * __thiscall
Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
          (TInputDataVertex<Metasound::FTrigger> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FTrigger>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFTrigger_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<int><> @ 14aeea770

TInputDataVertex<int> * __thiscall
Metasound::TInputDataVertex<int>::TInputDataVertex<int><>
          (TInputDataVertex<int> *this,FName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<int>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_H_Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<float><> @ 14aeea7d0

TInputDataVertex<float> * __thiscall
Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
          (TInputDataVertex<float> *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<float>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_M_Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<float><> @ 14aeea850

TInputDataVertex<float> * __thiscall
Metasound::TInputDataVertex<float>::TInputDataVertex<float><>
          (TInputDataVertex<float> *this,FName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<float>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_M_Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<int>_><> @ 14aeea8b0

TInputDataVertex<Metasound::TVariable<int>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<int>_>::
TInputDataVertex<Metasound::TVariable<int>_><>
          (TInputDataVertex<Metasound::TVariable<int>_> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<int>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_U__TVariable_H_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<float>_><> @ 14aeea930

TInputDataVertex<Metasound::TVariable<float>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<float>_>::
TInputDataVertex<Metasound::TVariable<float>_><>
          (TInputDataVertex<Metasound::TVariable<float>_> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<float>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_U__TVariable_M_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_><> @ 14aeea9b0

TInputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
TInputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_><>
          (TInputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *this,
          FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_><> @ 14aeeaa30

TInputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
TInputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_><>
          (TInputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> *this
          ,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_><> @ 14aeeaab0

TInputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::
TInputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_><>
          (TInputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
           *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_><> @ 14aeeab30

TInputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::
TInputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_><>
          (TInputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
           *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_><> @ 14aeeabb0

TInputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
TInputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_><>
          (TInputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_><> @ 14aeeac30

TInputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_> *
__thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>::
TInputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_><>
          (TInputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
           *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_><> @ 14aeeacb0

TInputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
TInputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_><>
          (TInputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *this,
          FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_><> @ 14aeead30

TInputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_>::
TInputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_><>
          (TInputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_> *this,FLazyName *param_1
          ,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FAudioBuffer>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_U__TVariable_VFAudioBuffer_Metasound___Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_><> @ 14aeeadb0

TInputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>::
TInputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_><>
          (TInputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *this,
          FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_VFMetasoundParameterStorageWrapper___Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_><> @ 14aeeae30

TInputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_>::
TInputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_><>
          (TInputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_> *this,FLazyName *param_1
          ,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FSendAddress>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_U__TVariable_VFSendAddress_Metasound___Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<FString>_><> @ 14aeeaeb0

TInputDataVertex<Metasound::TVariable<FString>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<FString>_>::
TInputDataVertex<Metasound::TVariable<FString>_><>
          (TInputDataVertex<Metasound::TVariable<FString>_> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<FString>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_U__TVariable_VFString___Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::FTime>_><> @ 14aeeaf30

TInputDataVertex<Metasound::TVariable<Metasound::FTime>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<Metasound::FTime>_>::
TInputDataVertex<Metasound::TVariable<Metasound::FTime>_><>
          (TInputDataVertex<Metasound::TVariable<Metasound::FTime>_> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FTime>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_U__TVariable_VFTime_Metasound___Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::FTrigger>_><> @ 14aeeafb0

TInputDataVertex<Metasound::TVariable<Metasound::FTrigger>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<Metasound::FTrigger>_>::
TInputDataVertex<Metasound::TVariable<Metasound::FTrigger>_><>
          (TInputDataVertex<Metasound::TVariable<Metasound::FTrigger>_> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FTrigger>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_U__TVariable_VFTrigger_Metasound___Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<bool>_><> @ 14aeeb030

TInputDataVertex<Metasound::TVariable<bool>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<bool>_>::
TInputDataVertex<Metasound::TVariable<bool>_><>
          (TInputDataVertex<Metasound::TVariable<bool>_> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<bool>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_U__TVariable__N_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_><> @ 14aeeb0b0

TInputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TInputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_>::
TInputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_><> @ 14aeeb130

TInputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TInputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_>::
TInputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_> *this,FName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_><> @ 14aeeb190

TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_>::
TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_><> @ 14aeeb210

TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_>::
TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> *this,FName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><> @ 14aeeb270

TInputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::TInputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
::TInputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><> @ 14aeeb2f0

TInputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::TInputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
::TInputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *this,FName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                     ();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><> @ 14aeeb350

TInputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TInputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
TInputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><> @ 14aeeb3d0

TInputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TInputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
TInputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_><> @ 14aeeb430

TInputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TInputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TInputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_><> @ 14aeeb4b0

TInputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TInputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TInputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,FName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><> @ 14aeeb510

TInputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TInputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
TInputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><> @ 14aeeb590

TInputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TInputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
TInputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_><> @ 14aeeb5f0

TInputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TInputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_>::
TInputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_><> @ 14aeeb670

TInputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TInputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_>::
TInputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,FName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::FAudioBuffer><> @ 14aeeb6d0

TInputDataVertex<Metasound::FAudioBuffer> * __thiscall
Metasound::TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
          (TInputDataVertex<Metasound::FAudioBuffer> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::FAudioBuffer><> @ 14aeeb750

TInputDataVertex<Metasound::FAudioBuffer> * __thiscall
Metasound::TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
          (TInputDataVertex<Metasound::FAudioBuffer> *this,FName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<FMetasoundParameterStorageWrapper><> @ 14aeeb7b0

TInputDataVertex<FMetasoundParameterStorageWrapper> * __thiscall
Metasound::TInputDataVertex<FMetasoundParameterStorageWrapper>::
TInputDataVertex<FMetasoundParameterStorageWrapper><>
          (TInputDataVertex<FMetasoundParameterStorageWrapper> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFMetasoundParameterStorageWrapper___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<FMetasoundParameterStorageWrapper><> @ 14aeeb830

TInputDataVertex<FMetasoundParameterStorageWrapper> * __thiscall
Metasound::TInputDataVertex<FMetasoundParameterStorageWrapper>::
TInputDataVertex<FMetasoundParameterStorageWrapper><>
          (TInputDataVertex<FMetasoundParameterStorageWrapper> *this,FName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFMetasoundParameterStorageWrapper___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::FSendAddress><> @ 14aeeb890

TInputDataVertex<Metasound::FSendAddress> * __thiscall
Metasound::TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
          (TInputDataVertex<Metasound::FSendAddress> *this,FName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<FString><> @ 14aeeb8f0

TInputDataVertex<FString> * __thiscall
Metasound::TInputDataVertex<FString>::TInputDataVertex<FString><>
          (TInputDataVertex<FString> *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<FString>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFString___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<FString><> @ 14aeeb970

TInputDataVertex<FString> * __thiscall
Metasound::TInputDataVertex<FString>::TInputDataVertex<FString><>
          (TInputDataVertex<FString> *this,FName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<FString>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFString___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::FTime><> @ 14aeeb9d0

TInputDataVertex<Metasound::FTime> * __thiscall
Metasound::TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><>
          (TInputDataVertex<Metasound::FTime> *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FTime>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFTime_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::FTime><> @ 14aeeba50

TInputDataVertex<Metasound::FTime> * __thiscall
Metasound::TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><>
          (TInputDataVertex<Metasound::FTime> *this,FName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FTime>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFTime_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::FTrigger><> @ 14aeebab0

TInputDataVertex<Metasound::FTrigger> * __thiscall
Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
          (TInputDataVertex<Metasound::FTrigger> *this,FName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FTrigger>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFTrigger_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<bool><> @ 14aeebb10

TInputDataVertex<bool> * __thiscall
Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><>
          (TInputDataVertex<bool> *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<bool>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex__N_Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<bool><> @ 14aeebb90

TInputDataVertex<bool> * __thiscall
Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><>
          (TInputDataVertex<bool> *this,FName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<bool>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex__N_Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<int><int> @ 14aeed970

TInputDataVertex<int> * __thiscall
Metasound::TInputDataVertex<int>::TInputDataVertex<int><int>
          (TInputDataVertex<int> *this,FLazyName *param_1,FDataVertexMetadata *param_2,int *param_3)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<int>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::Set<int>((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              *)&this->field_0x20,param_3);
  *(undefined ***)this = &___7__TInputDataVertex_H_Metasound__6B_;
  return this;
}

// TInputDataVertex<bool><bool> @ 14aef0980

TInputDataVertex<bool> * __thiscall
Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
          (TInputDataVertex<bool> *this,FLazyName *param_1,FDataVertexMetadata *param_2,
          bool *param_3)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<bool>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::Set<bool>((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
               *)&this->field_0x20,param_3);
  *(undefined ***)this = &___7__TInputDataVertex__N_Metasound__6B_;
  return this;
}

