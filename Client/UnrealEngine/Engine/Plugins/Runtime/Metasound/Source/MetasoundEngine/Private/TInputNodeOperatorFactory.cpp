// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 18

// CreateOperator @ 14b2c53d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FWaveAsset,1>::
CreateOperator(TInputNodeOperatorFactory<Metasound::FWaveAsset,1> *this,
              FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<Metasound::FWaveAsset> *pTVar7;
  TInputValueOperator<Metasound::FWaveAsset> *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<Metasound::FWaveAsset> *)0x0;
    if (this_01 != (TInputValueOperator<Metasound::FWaveAsset> *)0x0) {
      pTVar7 = TInputValueOperator<Metasound::FWaveAsset>::
               TInputValueOperator<Metasound::FWaveAsset>(this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar7;
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
    FAnyDataReference::GetAs<Metasound::TDataValueReference<Metasound::FWaveAsset>_>
              (this_00,(TDataValueReference<Metasound::FWaveAsset> *)local_28);
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<Metasound::FWaveAsset> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<Metasound::FWaveAsset>::
               TInputValueOperator<Metasound::FWaveAsset>
                         (pTVar7,pFVar1,(TDataValueReference<Metasound::FWaveAsset> *)local_28);
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2c7020

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0>::
CreateOperator(TInputNodeOperatorFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0>
               *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      pTVar6 = (TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
               ::
               TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         (pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
                    ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                  *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                        *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                           *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2cb890

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1>::
CreateOperator(TInputNodeOperatorFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1>
               *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (this_01 !=
        (TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar7 = TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar7;
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
    GetAs<Metasound::TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                        *)local_28);
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *
                  )0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         (pTVar7,pFVar1,
                          (TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                           *)local_28);
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2cd890

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FAudioBusAsset,1>::
CreateOperator(TInputNodeOperatorFactory<Metasound::FAudioBusAsset,1> *this,
              FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<Metasound::FAudioBusAsset> *pTVar7;
  TInputValueOperator<Metasound::FAudioBusAsset> *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<Metasound::FAudioBusAsset> *)0x0;
    if (this_01 != (TInputValueOperator<Metasound::FAudioBusAsset> *)0x0) {
      pTVar7 = TInputValueOperator<Metasound::FAudioBusAsset>::
               TInputValueOperator<Metasound::FAudioBusAsset>(this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar7;
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
    FAnyDataReference::GetAs<Metasound::TDataValueReference<Metasound::FAudioBusAsset>_>
              (this_00,(TDataValueReference<Metasound::FAudioBusAsset> *)local_28);
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<Metasound::FAudioBusAsset> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<Metasound::FAudioBusAsset>::
               TInputValueOperator<Metasound::FAudioBusAsset>
                         (pTVar7,pFVar1,(TDataValueReference<Metasound::FAudioBusAsset> *)local_28);
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2d3e00

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0>::
CreateOperator(TInputNodeOperatorFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0>
               *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *
                  )0x0) {
      pTVar6 = (TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               0x0;
    }
    else {
      pTVar6 = TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         (pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
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
                    ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
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
    GetAs<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                        *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                           *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2d7ce0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,0>
::CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar6
  ;
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
      pTVar6 = (TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
               ::
               TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
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
                    ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                  *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                        *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                           *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2d82d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1>::
CreateOperator(TInputNodeOperatorFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1>
               *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
             0x0;
    if (this_01 !=
        (TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0)
    {
      pTVar7 = TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar7;
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
    GetAs<Metasound::TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                        *)local_28);
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         (pTVar7,pFVar1,
                          (TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                           *)local_28);
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2d9370

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,0>
::CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar6;
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
      pTVar6 = (TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
               ::
               TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
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
                    ___7__TDataReadReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                  *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                        *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                           *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2db830

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FWaveTableBankAsset,0>::
CreateOperator(TInputNodeOperatorFactory<Metasound::FWaveTableBankAsset,0> *this,
              FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<Metasound::FWaveTableBankAsset> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<Metasound::FWaveTableBankAsset> *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::FWaveTableBankAsset> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::FWaveTableBankAsset>::
               TInputValueOperator<Metasound::FWaveTableBankAsset>(pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::GetAs<Metasound::TDataWriteReference<Metasound::FWaveTableBankAsset>_>
              (this_00,(TDataWriteReference<Metasound::FWaveTableBankAsset> *)local_28);
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
      local_28[0] = &___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::FWaveTableBankAsset>
                (pFVar5,pFVar1,(TDataReadReference<Metasound::FWaveTableBankAsset> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>
              (this_00,(TDataReadReference<Metasound::FWaveTableBankAsset> *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::FWaveTableBankAsset>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::FWaveTableBankAsset> *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2dbe00

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<WaveTable::FWaveTable,0>::
CreateOperator(TInputNodeOperatorFactory<WaveTable::FWaveTable,0> *this,
              FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<WaveTable::FWaveTable> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<WaveTable::FWaveTable> *)0x0) {
      pTVar6 = (TInputValueOperator<WaveTable::FWaveTable> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<WaveTable::FWaveTable>::
               TInputValueOperator<WaveTable::FWaveTable>(pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::GetAs<Metasound::TDataWriteReference<WaveTable::FWaveTable>_>
              (this_00,(TDataWriteReference<WaveTable::FWaveTable> *)local_28);
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
      local_28[0] = &___7__TDataReadReference_UFWaveTable_WaveTable___Metasound__6B_;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<WaveTable::FWaveTable>
                (pFVar5,pFVar1,(TDataReadReference<WaveTable::FWaveTable> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::GetAs<Metasound::TDataReadReference<WaveTable::FWaveTable>_>
              (this_00,(TDataReadReference<WaveTable::FWaveTable> *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<WaveTable::FWaveTable>
                         (pFVar5,pFVar1,(TDataReadReference<WaveTable::FWaveTable> *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2dcaf0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FWaveAsset,0>::
CreateOperator(TInputNodeOperatorFactory<Metasound::FWaveAsset,0> *this,
              FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<Metasound::FWaveAsset> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<Metasound::FWaveAsset> *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::FWaveAsset> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::FWaveAsset>::
               TInputValueOperator<Metasound::FWaveAsset>(pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::GetAs<Metasound::TDataWriteReference<Metasound::FWaveAsset>_>
              (this_00,(TDataWriteReference<Metasound::FWaveAsset> *)local_28);
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
      local_28[0] = &___7__TDataReadReference_VFWaveAsset_Metasound___Metasound__6B_;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::FWaveAsset>
                (pFVar5,pFVar1,(TDataReadReference<Metasound::FWaveAsset> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FWaveAsset>_>
              (this_00,(TDataReadReference<Metasound::FWaveAsset> *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::FWaveAsset>
                         (pFVar5,pFVar1,(TDataReadReference<Metasound::FWaveAsset> *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2dcc50

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,1>
::CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar8
  ;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
              *)0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
               ::
               TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
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
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                        *)local_28);
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
               ::
               TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                           *)local_28);
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2dde90

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0>::
CreateOperator(TInputNodeOperatorFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0>
               *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      pTVar6 = (TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         (pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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
                    ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                  *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                        *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                           *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2de0d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FAudioBusAsset,0>::
CreateOperator(TInputNodeOperatorFactory<Metasound::FAudioBusAsset,0> *this,
              FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<Metasound::FAudioBusAsset> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<Metasound::FAudioBusAsset> *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::FAudioBusAsset> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::FAudioBusAsset>::
               TInputValueOperator<Metasound::FAudioBusAsset>(pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::GetAs<Metasound::TDataWriteReference<Metasound::FAudioBusAsset>_>
              (this_00,(TDataWriteReference<Metasound::FAudioBusAsset> *)local_28);
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
      local_28[0] = &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::FAudioBusAsset>
                (pFVar5,pFVar1,(TDataReadReference<Metasound::FAudioBusAsset> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>
              (this_00,(TDataReadReference<Metasound::FAudioBusAsset> *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::FAudioBusAsset>
                         (pFVar5,pFVar1,(TDataReadReference<Metasound::FAudioBusAsset> *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2e8450

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,1>
::CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar8;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
              *)0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
               ::
               TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
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
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                        *)local_28);
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
               ::
               TInputValueOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                           *)local_28);
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2f1b60

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FWaveTableBankAsset,1>::
CreateOperator(TInputNodeOperatorFactory<Metasound::FWaveTableBankAsset,1> *this,
              FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<Metasound::FWaveTableBankAsset> *pTVar7;
  TInputValueOperator<Metasound::FWaveTableBankAsset> *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<Metasound::FWaveTableBankAsset> *)0x0;
    if (this_01 != (TInputValueOperator<Metasound::FWaveTableBankAsset> *)0x0) {
      pTVar7 = TInputValueOperator<Metasound::FWaveTableBankAsset>::
               TInputValueOperator<Metasound::FWaveTableBankAsset>(this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar7;
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
    FAnyDataReference::GetAs<Metasound::TDataValueReference<Metasound::FWaveTableBankAsset>_>
              (this_00,(TDataValueReference<Metasound::FWaveTableBankAsset> *)local_28);
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<Metasound::FWaveTableBankAsset> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<Metasound::FWaveTableBankAsset>::
               TInputValueOperator<Metasound::FWaveTableBankAsset>
                         (pTVar7,pFVar1,
                          (TDataValueReference<Metasound::FWaveTableBankAsset> *)local_28);
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2fb820

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<WaveTable::FWaveTable,1>::
CreateOperator(TInputNodeOperatorFactory<WaveTable::FWaveTable,1> *this,
              FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<WaveTable::FWaveTable> *pTVar7;
  TInputValueOperator<WaveTable::FWaveTable> *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<WaveTable::FWaveTable> *)0x0;
    if (this_01 != (TInputValueOperator<WaveTable::FWaveTable> *)0x0) {
      pTVar7 = TInputValueOperator<WaveTable::FWaveTable>::
               TInputValueOperator<WaveTable::FWaveTable>(this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar7;
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
    FAnyDataReference::GetAs<Metasound::TDataValueReference<WaveTable::FWaveTable>_>
              (this_00,(TDataValueReference<WaveTable::FWaveTable> *)local_28);
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<WaveTable::FWaveTable> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<WaveTable::FWaveTable>::
               TInputValueOperator<WaveTable::FWaveTable>
                         (pTVar7,pFVar1,(TDataValueReference<WaveTable::FWaveTable> *)local_28);
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2ff5b0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1>::
CreateOperator(TInputNodeOperatorFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1>
               *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              *)0x0;
    if (this_01 !=
        (TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
        0x0) {
      pTVar7 = TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
               ::
               TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar7;
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
    GetAs<Metasound::TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                        *)local_28);
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
               ::
               TInputValueOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         (pTVar7,pFVar1,
                          (TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                           *)local_28);
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

