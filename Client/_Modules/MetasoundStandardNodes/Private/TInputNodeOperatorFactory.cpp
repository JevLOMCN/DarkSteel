// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 38

// CreateOperator @ 14afc6f70

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,1>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  TInputValueOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar8;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                         (pvVar7,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
  }
  else {
    if ((this_00->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x39e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                        *)local_28);
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                           *)local_28);
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14afcf090

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,0>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    if (this_01 == (void *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)
                       local_28);
    pFVar5 = ::operator_new(0x28);
    pTVar4 = local_18;
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_28[0] = &
                    ___7__TDataReadReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)
                       local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)
                          local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14afd1750

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,0>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    if (this_01 == (void *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                        *)local_28);
    pFVar5 = ::operator_new(0x28);
    pTVar4 = local_18;
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_28[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
                 local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                        *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                           *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14afdd380

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,1>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  TInputValueOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar8;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
                         (pvVar7,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
  }
  else {
    if ((this_00->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x39e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)
                       local_28);
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)
                          local_28);
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b03cdd0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  TInputValueOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar8;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
                         (pvVar7,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
  }
  else {
    if ((this_00->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x39e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)
                       local_28);
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)
                          local_28);
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b03f0c0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,0>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    if (this_01 == (void *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)
                       local_28);
    pFVar5 = ::operator_new(0x28);
    pTVar4 = local_18;
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_28[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)
                       local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)
                          local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b07f1b0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,1>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  TInputValueOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar8;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
                         (pvVar7,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
  }
  else {
    if ((this_00->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x39e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)
                       local_28);
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)
                          local_28);
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0830c0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,0>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    if (this_01 == (void *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
               ::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
                        *)local_28);
    pFVar5 = ::operator_new(0x28);
    pTVar4 = local_18;
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_28[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *
                 )local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
                        *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
                           *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b083630

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EKneeMode,0>,0>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    if (this_01 == (void *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)local_28);
    pFVar5 = ::operator_new(0x28);
    pTVar4 = local_18;
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_28[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)local_28)
      ;
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b085150

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,0>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    if (this_01 == (void *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)local_28
              );
    pFVar5 = ::operator_new(0x28);
    pTVar4 = local_18;
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_28[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)local_28)
    ;
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)
                          local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b085f70

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,0>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    if (this_01 == (void *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)
                       local_28);
    pFVar5 = ::operator_new(0x28);
    pTVar4 = local_18;
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_28[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)
                       local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)
                          local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b08cda0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,1>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  TInputValueOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar8;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
             0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
               ::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                         (pvVar7,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
  }
  else {
    if ((this_00->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x39e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
                        *)local_28);
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
               ::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
                           *)local_28);
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b091a90

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EKneeMode,0>,1>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  TInputValueOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar8;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> *)0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
                         (pvVar7,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
  }
  else {
    if ((this_00->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x39e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)local_28);
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)local_28
                         );
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0979d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,1>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  TInputValueOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar8;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
                         (pvVar7,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
  }
  else {
    if ((this_00->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x39e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)local_28
              );
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)
                          local_28);
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0e91b0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,1>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  TInputValueOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar8;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
                         (pvVar7,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
  }
  else {
    if ((this_00->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x39e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
                       local_28);
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>
                           *)local_28);
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0f0120

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ENoiseType,0>,1>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  TInputValueOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar8;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> *)0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
                         (pvVar7,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
  }
  else {
    if ((this_00->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x39e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)local_28);
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)
                          local_28);
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0f88f0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,1>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  TInputValueOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar8;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
                         (pvVar7,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
  }
  else {
    if ((this_00->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x39e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)
                       local_28);
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)
                          local_28);
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0faac0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,1>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  TInputValueOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar8;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
                         (pvVar7,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
  }
  else {
    if ((this_00->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x39e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)
                       local_28);
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)
                          local_28);
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0fc060

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,0>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    if (this_01 == (void *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)
                       local_28);
    pFVar5 = ::operator_new(0x28);
    pTVar4 = local_18;
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_28[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)
                       local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)
                          local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0fd040

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,0>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    if (this_01 == (void *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
                        *)local_28);
    pFVar5 = ::operator_new(0x28);
    pTVar4 = local_18;
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_28[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
                 local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
                        *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
                           *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0ff9e0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,0>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    if (this_01 == (void *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *
                       )local_28);
    pFVar5 = ::operator_new(0x28);
    pTVar4 = local_18;
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_28[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
                 local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
                       local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>
                           *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b101eb0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,1>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  TInputValueOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar8;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                         (pvVar7,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
  }
  else {
    if ((this_00->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x39e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
                        *)local_28);
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
                           *)local_28);
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b102af0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,0>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    if (this_01 == (void *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
                       local_28);
    pFVar5 = ::operator_new(0x28);
    pTVar4 = local_18;
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_28[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)local_28)
      ;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
                       local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
                          local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b106730

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,0>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    if (this_01 == (void *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
                       local_28);
    pFVar5 = ::operator_new(0x28);
    pTVar4 = local_18;
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_28[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)local_28
                );
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
                       local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *
                          )local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b108cb0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ENoiseType,0>,0>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    if (this_01 == (void *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)local_28);
    pFVar5 = ::operator_new(0x28);
    pTVar4 = local_18;
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_28[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)local_28
                         );
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b10a620

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,1>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  TInputValueOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar8;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                         (pvVar7,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
  }
  else {
    if ((this_00->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x39e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *
                       )local_28);
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>
                           *)local_28);
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b10f1d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,0>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    if (this_01 == (void *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)
                       local_28);
    pFVar5 = ::operator_new(0x28);
    pTVar4 = local_18;
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_28[0] = &
                    ___7__TDataReadReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)
                       local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)
                          local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b10f330

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,1>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  TInputValueOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar8;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
                         (pvVar7,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
  }
  else {
    if ((this_00->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x39e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
                       local_28);
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *
                          )local_28);
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1abbf0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    if (this_01 == (void *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)local_28)
    ;
    pFVar5 = ::operator_new(0x28);
    pTVar4 = local_18;
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_28[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)
                          local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1ac300

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,0>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    if (this_01 == (void *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)
                       local_28);
    pFVar5 = ::operator_new(0x28);
    pTVar4 = local_18;
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_28[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)
                       local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)
                          local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1b5b60

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  TInputValueOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar8;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
                         (pvVar7,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
  }
  else {
    if ((this_00->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x39e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)local_28)
    ;
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)
                          local_28);
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1b96a0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  TInputValueOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar8;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
                         (pvVar7,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
  }
  else {
    if ((this_00->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x39e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)
                       local_28);
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)
                          local_28);
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1efc70

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,0>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    if (this_01 == (void *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
                       local_28);
    pFVar5 = ::operator_new(0x28);
    pTVar4 = local_18;
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_28[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)local_28)
      ;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
                       local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
                          local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1f1010

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,0>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    if (this_01 == (void *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>
                        *)local_28);
    pFVar5 = ::operator_new(0x28);
    pTVar4 = local_18;
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_28[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
                 local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *
                       )local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>
                           *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1f8770

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,1>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  TInputValueOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar8;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
               TInputValueOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
                         (pvVar7,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
  }
  else {
    if ((this_00->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x39e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)local_28)
    ;
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
               TInputValueOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)
                          local_28);
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b202150

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,1>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  TInputValueOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar8;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
                         (pvVar7,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
  }
  else {
    if ((this_00->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x39e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
                       local_28);
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *
                          )local_28);
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b209740

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,1>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  TInputValueOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar8;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                         (pvVar7,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
  }
  else {
    if ((this_00->DataRefPtr).Ptr == (IDataReference *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataRefPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                         ,0x39e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>
                        *)local_28);
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>
                           *)local_28);
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b20e9b0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,0>::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    if (this_01 == (void *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
               TInputValueOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)local_28)
    ;
    pFVar5 = ::operator_new(0x28);
    pTVar4 = local_18;
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      if (local_18 != (TReferenceControllerBase<0> *)0x0) {
        local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
      }
      local_28[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)
                          local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

