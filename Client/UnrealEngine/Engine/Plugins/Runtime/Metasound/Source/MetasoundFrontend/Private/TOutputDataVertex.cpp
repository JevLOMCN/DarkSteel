// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 38

// TOutputDataVertex<int><> @ 14ad800f0

TOutputDataVertex<int> * __thiscall
Metasound::TOutputDataVertex<int>::TOutputDataVertex<int><>
          (TOutputDataVertex<int> *this,FLazyName *param_1,FDataVertexMetadata *param_2)

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
  *(undefined ***)this = &___7__TOutputDataVertex_H_Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_><> @ 14ad80160

TOutputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::
TOutputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_><>
          (TOutputDataVertex<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_><> @ 14ad801d0

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>_> *
__thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_><>
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_><> @ 14ad80240

TOutputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_><>
          (TOutputDataVertex<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_> *this,
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_VFAnalyzerAddress_Frontend_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><> @ 14ad802b0

TOutputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::
TOutputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
TOutputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><>
          (TOutputDataVertex<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><> @ 14ad80320

TOutputDataVertex<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><>
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::Frontend::FAnalyzerAddress><> @ 14ad80390

TOutputDataVertex<Metasound::Frontend::FAnalyzerAddress> * __thiscall
Metasound::TOutputDataVertex<Metasound::Frontend::FAnalyzerAddress>::
TOutputDataVertex<Metasound::Frontend::FAnalyzerAddress><>
          (TOutputDataVertex<Metasound::Frontend::FAnalyzerAddress> *this,FLazyName *param_1,
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
  *(undefined ***)this =
       &___7__TOutputDataVertex_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<float><> @ 14aeebbf0

TOutputDataVertex<float> * __thiscall
Metasound::TOutputDataVertex<float>::TOutputDataVertex<float><>
          (TOutputDataVertex<float> *this,FLazyName *param_1,FDataVertexMetadata *param_2)

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
  *(undefined ***)this = &___7__TOutputDataVertex_M_Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<int>_><> @ 14aeebc60

TOutputDataVertex<Metasound::TVariable<int>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<int>_>::
TOutputDataVertex<Metasound::TVariable<int>_><>
          (TOutputDataVertex<Metasound::TVariable<int>_> *this,FLazyName *param_1,
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
  *(undefined ***)this = &___7__TOutputDataVertex_U__TVariable_H_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<float>_><> @ 14aeebcd0

TOutputDataVertex<Metasound::TVariable<float>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<float>_>::
TOutputDataVertex<Metasound::TVariable<float>_><>
          (TOutputDataVertex<Metasound::TVariable<float>_> *this,FLazyName *param_1,
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
  *(undefined ***)this = &___7__TOutputDataVertex_U__TVariable_M_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_><> @ 14aeebd40

TOutputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
TOutputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_><>
          (TOutputDataVertex<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_> *this,
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_><> @ 14aeebdb0

TOutputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
TOutputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_><>
          (TOutputDataVertex<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this,FLazyName *param_1,FDataVertexMetadata *param_2)

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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_><> @ 14aeebe20

TOutputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::
TOutputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_><>
          (TOutputDataVertex<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_><> @ 14aeebe90

TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::
TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_><>
          (TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_><> @ 14aeebf00

TOutputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
TOutputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_><>
          (TOutputDataVertex<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_><> @ 14aeebf70

TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_> *
__thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>::
TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_><>
          (TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_><> @ 14aeebfe0

TOutputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
TOutputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_><>
          (TOutputDataVertex<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_> *this
          ,FLazyName *param_1,FDataVertexMetadata *param_2)

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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_><> @ 14aeec050

TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_><>
          (TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBuffer>_> *this,
          FLazyName *param_1,FDataVertexMetadata *param_2)

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
  *(undefined ***)this =
       &___7__TOutputDataVertex_U__TVariable_VFAudioBuffer_Metasound___Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_><> @ 14aeec0c0

TOutputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>::
TOutputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_><>
          (TOutputDataVertex<Metasound::TVariable<FMetasoundParameterStorageWrapper>_> *this,
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_VFMetasoundParameterStorageWrapper___Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_><> @ 14aeec130

TOutputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_><>
          (TOutputDataVertex<Metasound::TVariable<Metasound::FSendAddress>_> *this,
          FLazyName *param_1,FDataVertexMetadata *param_2)

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
  *(undefined ***)this =
       &___7__TOutputDataVertex_U__TVariable_VFSendAddress_Metasound___Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<FString>_><> @ 14aeec1a0

TOutputDataVertex<Metasound::TVariable<FString>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<FString>_>::
TOutputDataVertex<Metasound::TVariable<FString>_><>
          (TOutputDataVertex<Metasound::TVariable<FString>_> *this,FLazyName *param_1,
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
  *(undefined ***)this = &___7__TOutputDataVertex_U__TVariable_VFString___Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::FTime>_><> @ 14aeec210

TOutputDataVertex<Metasound::TVariable<Metasound::FTime>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<Metasound::FTime>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::FTime>_><>
          (TOutputDataVertex<Metasound::TVariable<Metasound::FTime>_> *this,FLazyName *param_1,
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
  *(undefined ***)this =
       &___7__TOutputDataVertex_U__TVariable_VFTime_Metasound___Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::FTrigger>_><> @ 14aeec280

TOutputDataVertex<Metasound::TVariable<Metasound::FTrigger>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<Metasound::FTrigger>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::FTrigger>_><>
          (TOutputDataVertex<Metasound::TVariable<Metasound::FTrigger>_> *this,FLazyName *param_1,
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
  *(undefined ***)this =
       &___7__TOutputDataVertex_U__TVariable_VFTrigger_Metasound___Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<bool>_><> @ 14aeec2f0

TOutputDataVertex<Metasound::TVariable<bool>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<bool>_>::
TOutputDataVertex<Metasound::TVariable<bool>_><>
          (TOutputDataVertex<Metasound::TVariable<bool>_> *this,FLazyName *param_1,
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
  *(undefined ***)this = &___7__TOutputDataVertex_U__TVariable__N_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_><> @ 14aeec360

TOutputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TOutputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_>::
TOutputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_><>
          (TOutputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_> *this,FLazyName *param_1,
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
  *(undefined ***)this =
       &___7__TOutputDataVertex_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_><> @ 14aeec3d0

TOutputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TOutputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_>::
TOutputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_><>
          (TOutputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> *this,FLazyName *param_1,
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
  *(undefined ***)this =
       &___7__TOutputDataVertex_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><> @ 14aeec440

TOutputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::TOutputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
::TOutputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><>
          (TOutputDataVertex<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><> @ 14aeec4b0

TOutputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TOutputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
TOutputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><>
          (TOutputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_><> @ 14aeec520

TOutputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TOutputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TOutputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_><>
          (TOutputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,FLazyName *param_1,
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><> @ 14aeec590

TOutputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TOutputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
TOutputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><>
          (TOutputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_><> @ 14aeec600

TOutputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TOutputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_>::
TOutputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_><>
          (TOutputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,FLazyName *param_1,
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
  *(undefined ***)this =
       &___7__TOutputDataVertex_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::FAudioBuffer><> @ 14aeec670

TOutputDataVertex<Metasound::FAudioBuffer> * __thiscall
Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::TOutputDataVertex<Metasound::FAudioBuffer><>
          (TOutputDataVertex<Metasound::FAudioBuffer> *this,FLazyName *param_1,
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
  *(undefined ***)this = &___7__TOutputDataVertex_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<FMetasoundParameterStorageWrapper><> @ 14aeec6e0

TOutputDataVertex<FMetasoundParameterStorageWrapper> * __thiscall
Metasound::TOutputDataVertex<FMetasoundParameterStorageWrapper>::
TOutputDataVertex<FMetasoundParameterStorageWrapper><>
          (TOutputDataVertex<FMetasoundParameterStorageWrapper> *this,FLazyName *param_1,
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
  *(undefined ***)this =
       &___7__TOutputDataVertex_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::FSendAddress><> @ 14aeec750

TOutputDataVertex<Metasound::FSendAddress> * __thiscall
Metasound::TOutputDataVertex<Metasound::FSendAddress>::TOutputDataVertex<Metasound::FSendAddress><>
          (TOutputDataVertex<Metasound::FSendAddress> *this,FLazyName *param_1,
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
  *(undefined ***)this = &___7__TOutputDataVertex_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<FString><> @ 14aeec7c0

TOutputDataVertex<FString> * __thiscall
Metasound::TOutputDataVertex<FString>::TOutputDataVertex<FString><>
          (TOutputDataVertex<FString> *this,FLazyName *param_1,FDataVertexMetadata *param_2)

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
  *(undefined ***)this = &___7__TOutputDataVertex_VFString___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::FTime><> @ 14aeec830

TOutputDataVertex<Metasound::FTime> * __thiscall
Metasound::TOutputDataVertex<Metasound::FTime>::TOutputDataVertex<Metasound::FTime><>
          (TOutputDataVertex<Metasound::FTime> *this,FLazyName *param_1,FDataVertexMetadata *param_2
          )

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
  *(undefined ***)this = &___7__TOutputDataVertex_VFTime_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::FTrigger><> @ 14aeec8a0

TOutputDataVertex<Metasound::FTrigger> * __thiscall
Metasound::TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
          (TOutputDataVertex<Metasound::FTrigger> *this,FLazyName *param_1,
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
  *(undefined ***)this = &___7__TOutputDataVertex_VFTrigger_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<bool><> @ 14aeec910

TOutputDataVertex<bool> * __thiscall
Metasound::TOutputDataVertex<bool>::TOutputDataVertex<bool><>
          (TOutputDataVertex<bool> *this,FLazyName *param_1,FDataVertexMetadata *param_2)

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
  *(undefined ***)this = &___7__TOutputDataVertex__N_Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

