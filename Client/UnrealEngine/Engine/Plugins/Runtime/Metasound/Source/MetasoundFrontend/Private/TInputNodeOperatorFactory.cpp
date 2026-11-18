// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 35

// CreateOperator @ 14ad6d1a0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,1>::
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
  TInputValueOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar8;
  undefined1 local_28 [32];
  
  pFVar1 = (FName *)((longlong)this + 8);
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pvVar7 = ::operator_new(0x28);
    pTVar8 = (TInputValueOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)0x0;
    if (pvVar7 != (void *)0x0) {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
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
    GetAs<Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
              (this_00,(TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
                        *)local_28);
    pvVar7 = ::operator_new(0x28);
    if (pvVar7 == (void *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar8 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                         (pvVar7,pFVar1,
                          (TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
                           *)local_28);
      param_1->Node = (INode *)pTVar8;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14ad78660

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,0>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  void *this_01;
  TInputValueOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar6;
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
      pTVar6 = (TInputValueOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
               TInputValueOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                         (this_01,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
              (this_00,(TDataWriteReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
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
                    ___7__TDataReadReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
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
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
              (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
                        *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
                           *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14ad797b0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::Frontend::FAnalyzerAddress,0>::CreateOperator
          (TInputNodeOperatorFactory<Metasound::Frontend::FAnalyzerAddress,0> *this,
          FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<Metasound::Frontend::FAnalyzerAddress> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<Metasound::Frontend::FAnalyzerAddress> *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::Frontend::FAnalyzerAddress> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::Frontend::FAnalyzerAddress>::
               TInputValueOperator<Metasound::Frontend::FAnalyzerAddress>
                         (pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::GetAs<Metasound::TDataWriteReference<Metasound::Frontend::FAnalyzerAddress>_>
              (this_00,(TDataWriteReference<Metasound::Frontend::FAnalyzerAddress> *)local_28);
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
      local_28[0] = &___7__TDataReadReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::Frontend::FAnalyzerAddress>
                (pFVar5,pFVar1,(TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)local_28
                );
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::Frontend::FAnalyzerAddress>_>
              (this_00,(TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::Frontend::FAnalyzerAddress>
                         (pFVar5,pFVar1,
                          (TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14ad7a750

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,1>
::CreateOperator(TInputNodeOperatorFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,1>
                 *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
  TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
              *)0x0;
    if (this_01 !=
        (TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
         *)0x0) {
      pTVar7 = TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
               ::
               TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
    GetAs<Metasound::TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                        *)local_28);
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
               ::
               TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                         (pTVar7,pFVar1,
                          (TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                           *)local_28);
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14ad7d3f0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,0>
::CreateOperator(TInputNodeOperatorFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,0>
                 *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      pTVar6 = (TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
               ::
               TInputValueOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                         (pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
                    ___7__TDataReadReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
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
    GetAs<Metasound::TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                        *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                           *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14ae96630

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<FString,TSizedDefaultAllocator<32>_>,1>::CreateOperator
          (TInputNodeOperatorFactory<TArray<FString,TSizedDefaultAllocator<32>_>,1> *this,
          FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (this_01 != (TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar7 = TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
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
    GetAs<Metasound::TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)local_28
              );
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
                         (pTVar7,pFVar1,
                          (TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)
                          local_28);
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14ae97550

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<int,1>::CreateOperator
          (TInputNodeOperatorFactory<int,1> *this,FBuildOperatorParams *param_1,
          FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<int> *pTVar7;
  TInputValueOperator<int> *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<int> *)0x0;
    if (this_01 != (TInputValueOperator<int> *)0x0) {
      pTVar7 = TInputValueOperator<int>::TInputValueOperator<int>(this_01,pFVar1,pFVar3,pFVar2);
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
    FAnyDataReference::GetAs<Metasound::TDataValueReference<int>_>
              (this_00,(TDataValueReference<int> *)local_28);
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<int> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<int>::TInputValueOperator<int>
                         (pTVar7,pFVar1,(TDataValueReference<int> *)local_28);
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14ae9e520

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<FString,TSizedDefaultAllocator<32>_>,0>::CreateOperator
          (TInputNodeOperatorFactory<TArray<FString,TSizedDefaultAllocator<32>_>,0> *this,
          FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar6 = (TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
                         (pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)local_28
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
                    ___7__TDataReadReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)local_28)
    ;
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)
                          local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aea33e0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<bool,1>::CreateOperator
          (TInputNodeOperatorFactory<bool,1> *this,FBuildOperatorParams *param_1,
          FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<bool> *pTVar7;
  TInputValueOperator<bool> *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<bool> *)0x0;
    if (this_01 != (TInputValueOperator<bool> *)0x0) {
      pTVar7 = TInputValueOperator<bool>::TInputValueOperator<bool>(this_01,pFVar1,pFVar3,pFVar2);
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
    FAnyDataReference::GetAs<Metasound::TDataValueReference<bool>_>
              (this_00,(TDataValueReference<bool> *)local_28);
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<bool> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<bool>::TInputValueOperator<bool>
                         (pTVar7,pFVar1,(TDataValueReference<bool> *)local_28);
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aea4270

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<float,TSizedDefaultAllocator<32>_>,1>::CreateOperator
          (TInputNodeOperatorFactory<TArray<float,TSizedDefaultAllocator<32>_>,1> *this,
          FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (this_01 != (TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar7 = TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
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
    GetAs<Metasound::TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_28);
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
                         (pTVar7,pFVar1,
                          (TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)
                          local_28);
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aeacb80

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FSendAddress,1>::
CreateOperator(TInputNodeOperatorFactory<Metasound::FSendAddress,1> *this,
              FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<Metasound::FSendAddress> *pTVar7;
  TInputValueOperator<Metasound::FSendAddress> *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<Metasound::FSendAddress> *)0x0;
    if (this_01 != (TInputValueOperator<Metasound::FSendAddress> *)0x0) {
      pTVar7 = TInputValueOperator<Metasound::FSendAddress>::
               TInputValueOperator<Metasound::FSendAddress>(this_01,pFVar1,pFVar3,pFVar2);
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
    FAnyDataReference::GetAs<Metasound::TDataValueReference<Metasound::FSendAddress>_>
              (this_00,(TDataValueReference<Metasound::FSendAddress> *)local_28);
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<Metasound::FSendAddress> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<Metasound::FSendAddress>::
               TInputValueOperator<Metasound::FSendAddress>
                         (pTVar7,pFVar1,(TDataValueReference<Metasound::FSendAddress> *)local_28);
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aead8a0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<float,TSizedDefaultAllocator<32>_>,0>::CreateOperator
          (TInputNodeOperatorFactory<TArray<float,TSizedDefaultAllocator<32>_>,0> *this,
          FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar6 = (TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
                         (pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_28);
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
                    ___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_28
                         );
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aeb0d10

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<FMetasoundParameterStorageWrapper,1>
::CreateOperator(TInputNodeOperatorFactory<FMetasoundParameterStorageWrapper,1> *this,
                FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<FMetasoundParameterStorageWrapper> *pTVar7;
  TInputValueOperator<FMetasoundParameterStorageWrapper> *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<FMetasoundParameterStorageWrapper> *)0x0;
    if (this_01 != (TInputValueOperator<FMetasoundParameterStorageWrapper> *)0x0) {
      pTVar7 = TInputValueOperator<FMetasoundParameterStorageWrapper>::
               TInputValueOperator<FMetasoundParameterStorageWrapper>(this_01,pFVar1,pFVar3,pFVar2);
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
    FAnyDataReference::GetAs<Metasound::TDataValueReference<FMetasoundParameterStorageWrapper>_>
              (this_00,(TDataValueReference<FMetasoundParameterStorageWrapper> *)local_28);
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<FMetasoundParameterStorageWrapper> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<FMetasoundParameterStorageWrapper>::
               TInputValueOperator<FMetasoundParameterStorageWrapper>
                         (pTVar7,pFVar1,
                          (TDataValueReference<FMetasoundParameterStorageWrapper> *)local_28);
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aeb35d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<int,TSizedDefaultAllocator<32>_>,1>::CreateOperator
          (TInputNodeOperatorFactory<TArray<int,TSizedDefaultAllocator<32>_>,1> *this,
          FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (this_01 != (TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar7 = TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
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
    GetAs<Metasound::TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_28);
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
                         (pTVar7,pFVar1,
                          (TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_28)
      ;
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aeba040

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FTime,1>::CreateOperator
          (TInputNodeOperatorFactory<Metasound::FTime,1> *this,FBuildOperatorParams *param_1,
          FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<Metasound::FTime> *pTVar7;
  TInputValueOperator<Metasound::FTime> *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<Metasound::FTime> *)0x0;
    if (this_01 != (TInputValueOperator<Metasound::FTime> *)0x0) {
      pTVar7 = TInputValueOperator<Metasound::FTime>::TInputValueOperator<Metasound::FTime>
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
    FAnyDataReference::GetAs<Metasound::TDataValueReference<Metasound::FTime>_>
              (this_00,(TDataValueReference<Metasound::FTime> *)local_28);
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<Metasound::FTime> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<Metasound::FTime>::TInputValueOperator<Metasound::FTime>
                         (pTVar7,pFVar1,(TDataValueReference<Metasound::FTime> *)local_28);
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aebaee0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FAudioBuffer,0>::
CreateOperator(TInputNodeOperatorFactory<Metasound::FAudioBuffer,0> *this,
              FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<Metasound::FAudioBuffer> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<Metasound::FAudioBuffer> *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::FAudioBuffer> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::FAudioBuffer>::
               TInputValueOperator<Metasound::FAudioBuffer>(pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::GetAs<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>
              (this_00,(TDataWriteReference<Metasound::FAudioBuffer> *)local_28);
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
      local_28[0] = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::FAudioBuffer>
                (pFVar5,pFVar1,(TDataReadReference<Metasound::FAudioBuffer> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
              (this_00,(TDataReadReference<Metasound::FAudioBuffer> *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::FAudioBuffer>
                         (pFVar5,pFVar1,(TDataReadReference<Metasound::FAudioBuffer> *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aebc930

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FSendAddress,0>::
CreateOperator(TInputNodeOperatorFactory<Metasound::FSendAddress,0> *this,
              FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<Metasound::FSendAddress> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<Metasound::FSendAddress> *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::FSendAddress> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::FSendAddress>::
               TInputValueOperator<Metasound::FSendAddress>(pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::GetAs<Metasound::TDataWriteReference<Metasound::FSendAddress>_>
              (this_00,(TDataWriteReference<Metasound::FSendAddress> *)local_28);
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
      local_28[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::FSendAddress>
                (pFVar5,pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FSendAddress>_>
              (this_00,(TDataReadReference<Metasound::FSendAddress> *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::FSendAddress>
                         (pFVar5,pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aebd800

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<int,TSizedDefaultAllocator<32>_>,0>::CreateOperator
          (TInputNodeOperatorFactory<TArray<int,TSizedDefaultAllocator<32>_>,0> *this,
          FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar6 = (TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
                         (pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_28);
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
                    ___7__TDataReadReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aebe320

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FTime,0>::CreateOperator
          (TInputNodeOperatorFactory<Metasound::FTime,0> *this,FBuildOperatorParams *param_1,
          FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<Metasound::FTime> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<Metasound::FTime> *)0x0) {
      pTVar6 = (TInputValueOperator<Metasound::FTime> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<Metasound::FTime>::TInputValueOperator<Metasound::FTime>
                         (pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::GetAs<Metasound::TDataWriteReference<Metasound::FTime>_>
              (this_00,(TDataWriteReference<Metasound::FTime> *)local_28);
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
      local_28[0] = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<Metasound::FTime>
                (pFVar5,pFVar1,(TDataReadReference<Metasound::FTime> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTime>_>
              (this_00,(TDataReadReference<Metasound::FTime> *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::FTime>
                         (pFVar5,pFVar1,(TDataReadReference<Metasound::FTime> *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aebf7c0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FTrigger,0>::
CreateOperator(TInputNodeOperatorFactory<Metasound::FTrigger,0> *this,FBuildOperatorParams *param_1,
              FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  FAnyDataReference *this_00;
  INode *pIVar4;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TResetablePostExecutableInputOperator<Metasound::FTrigger> *pTVar6;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x40);
    if (pTVar6 == (TResetablePostExecutableInputOperator<Metasound::FTrigger> *)0x0) {
      pTVar6 = (TResetablePostExecutableInputOperator<Metasound::FTrigger> *)0x0;
    }
    else {
      pTVar6 = TResetablePostExecutableInputOperator<Metasound::FTrigger>::
               TResetablePostExecutableInputOperator<Metasound::FTrigger>
                         (pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::GetAs<Metasound::TDataWriteReference<Metasound::FTrigger>_>
              (this_00,(TDataWriteReference<Metasound::FTrigger> *)local_28);
    pIVar4 = ::operator_new(0x28);
    if (pIVar4 == (INode *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      local_48[1] = (undefined **)local_28._8_8_;
      local_38 = (TReferenceControllerBase<0> *)local_28._16_8_;
      if ((TReferenceControllerBase<0> *)local_28._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        *(int *)(local_28._16_8_ + 8) = *(int *)(local_28._16_8_ + 8) + 1;
      }
      local_48[0] = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
      *pIVar4 = (INode)&
                       ___7__TPostExecutableInputOperator_VFTrigger_Metasound___MetasoundInputNodePrivate_Metasound__6B_
      ;
      *(FName *)(pIVar4 + 1) = *pFVar1;
      FAnyDataReference::FAnyDataReference<Metasound::FTrigger>
                ((FAnyDataReference *)(pIVar4 + 2),
                 (TDataWriteReference<Metasound::FTrigger> *)local_48);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
      param_1->Node = pIVar4;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  else {
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_>
              (this_00,(TDataReadReference<Metasound::FTrigger> *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<Metasound::FTrigger>
                         (pFVar5,pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aec16f0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<FString,0>::CreateOperator
          (TInputNodeOperatorFactory<FString,0> *this,FBuildOperatorParams *param_1,
          FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<FString> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<FString> *)0x0) {
      pTVar6 = (TInputValueOperator<FString> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<FString>::TInputValueOperator<FString>
                         (pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::GetAs<Metasound::TDataWriteReference<FString>_>
              (this_00,(TDataWriteReference<FString> *)local_28);
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
      local_28[0] = &___7__TDataReadReference_VFString___Metasound__6B_;
      FNonExecutableInputPassThroughOperator::FNonExecutableInputPassThroughOperator<FString>
                (pFVar5,pFVar1,(TDataReadReference<FString> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::GetAs<Metasound::TDataReadReference<FString>_>
              (this_00,(TDataReadReference<FString> *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<FString>
                         (pFVar5,pFVar1,(TDataReadReference<FString> *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aec2ff0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<bool,TSizedDefaultAllocator<32>_>,1>::CreateOperator
          (TInputNodeOperatorFactory<TArray<bool,TSizedDefaultAllocator<32>_>,1> *this,
          FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (this_01 != (TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar7 = TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
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
    GetAs<Metasound::TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_28);
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
                         (pTVar7,pFVar1,
                          (TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_28
                         );
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aec3180

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<float,0>::CreateOperator
          (TInputNodeOperatorFactory<float,0> *this,FBuildOperatorParams *param_1,
          FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<float> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<float> *)0x0) {
      pTVar6 = (TInputValueOperator<float> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<float>::TInputValueOperator<float>(pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::GetAs<Metasound::TDataWriteReference<float>_>
              (this_00,(TDataWriteReference<float> *)local_28);
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
      local_28[0] = &___7__TDataReadReference_M_Metasound__6B_;
      FNonExecutableInputPassThroughOperator::FNonExecutableInputPassThroughOperator<float>
                (pFVar5,pFVar1,(TDataReadReference<float> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
              (this_00,(TDataReadReference<float> *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::FNonExecutableInputPassThroughOperator<float>
                         (pFVar5,pFVar1,(TDataReadReference<float> *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aec5e90

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<int,0>::CreateOperator
          (TInputNodeOperatorFactory<int,0> *this,FBuildOperatorParams *param_1,
          FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<int> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<int> *)0x0) {
      pTVar6 = (TInputValueOperator<int> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<int>::TInputValueOperator<int>(pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::GetAs<Metasound::TDataWriteReference<int>_>
              (this_00,(TDataWriteReference<int> *)local_28);
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
      local_28[0] = &___7__TDataReadReference_H_Metasound__6B_;
      FNonExecutableInputPassThroughOperator::FNonExecutableInputPassThroughOperator<int>
                (pFVar5,pFVar1,(TDataReadReference<int> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::GetAs<Metasound::TDataReadReference<int>_>
              (this_00,(TDataReadReference<int> *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::FNonExecutableInputPassThroughOperator<int>
                         (pFVar5,pFVar1,(TDataReadReference<int> *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aec8860

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<bool,0>::CreateOperator
          (TInputNodeOperatorFactory<bool,0> *this,FBuildOperatorParams *param_1,
          FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<bool> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<bool> *)0x0) {
      pTVar6 = (TInputValueOperator<bool> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<bool>::TInputValueOperator<bool>(pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::GetAs<Metasound::TDataWriteReference<bool>_>
              (this_00,(TDataWriteReference<bool> *)local_28);
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
      local_28[0] = &___7__TDataReadReference__N_Metasound__6B_;
      FNonExecutableInputPassThroughOperator::FNonExecutableInputPassThroughOperator<bool>
                (pFVar5,pFVar1,(TDataReadReference<bool> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::GetAs<Metasound::TDataReadReference<bool>_>
              (this_00,(TDataReadReference<bool> *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::FNonExecutableInputPassThroughOperator<bool>
                         (pFVar5,pFVar1,(TDataReadReference<bool> *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aecaec0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<FMetasoundParameterStorageWrapper,0>
::CreateOperator(TInputNodeOperatorFactory<FMetasoundParameterStorageWrapper,0> *this,
                FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<FMetasoundParameterStorageWrapper> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<FMetasoundParameterStorageWrapper> *)0x0) {
      pTVar6 = (TInputValueOperator<FMetasoundParameterStorageWrapper> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<FMetasoundParameterStorageWrapper>::
               TInputValueOperator<FMetasoundParameterStorageWrapper>(pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::GetAs<Metasound::TDataWriteReference<FMetasoundParameterStorageWrapper>_>
              (this_00,(TDataWriteReference<FMetasoundParameterStorageWrapper> *)local_28);
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
      local_28[0] = &___7__TDataReadReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<FMetasoundParameterStorageWrapper>
                (pFVar5,pFVar1,(TDataReadReference<FMetasoundParameterStorageWrapper> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::GetAs<Metasound::TDataReadReference<FMetasoundParameterStorageWrapper>_>
              (this_00,(TDataReadReference<FMetasoundParameterStorageWrapper> *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<FMetasoundParameterStorageWrapper>
                         (pFVar5,pFVar1,
                          (TDataReadReference<FMetasoundParameterStorageWrapper> *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aece730

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<bool,TSizedDefaultAllocator<32>_>,0>::CreateOperator
          (TInputNodeOperatorFactory<TArray<bool,TSizedDefaultAllocator<32>_>,0> *this,
          FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar6 = (TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
                         (pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_28);
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
                    ___7__TDataReadReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_28);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
      param_1->Node = (INode *)pFVar5;
      *(undefined ***)pFVar5 =
           &___7FNonExecutableInputPassThroughOperator_MetasoundInputNodePrivate_Metasound__6B_;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_28)
      ;
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aecf2d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,1>::
CreateOperator(TInputNodeOperatorFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,1>
               *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
             0x0;
    if (this_01 !=
        (TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar7 = TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
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
    GetAs<Metasound::TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                        *)local_28);
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                         (pTVar7,pFVar1,
                          (TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                           *)local_28);
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aed6070

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,1>::
CreateOperator(TInputNodeOperatorFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,1>
               *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
  TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
  *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              *)0x0;
    if (this_01 !=
        (TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
         *)0x0) {
      pTVar7 = TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
               ::
               TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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
    GetAs<Metasound::TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                        *)local_28);
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
               ::
               TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                         (pTVar7,pFVar1,
                          (TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                           *)local_28);
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aed63f0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<FString,1>::CreateOperator
          (TInputNodeOperatorFactory<FString,1> *this,FBuildOperatorParams *param_1,
          FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<FString> *pTVar7;
  TInputValueOperator<FString> *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<FString> *)0x0;
    if (this_01 != (TInputValueOperator<FString> *)0x0) {
      pTVar7 = TInputValueOperator<FString>::TInputValueOperator<FString>
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
    FAnyDataReference::GetAs<Metasound::TDataValueReference<FString>_>
              (this_00,(TDataValueReference<FString> *)local_28);
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<FString> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<FString>::TInputValueOperator<FString>
                         (pTVar7,pFVar1,(TDataValueReference<FString> *)local_28);
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aeda5a0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,0>::
CreateOperator(TInputNodeOperatorFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,0>
               *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      pTVar6 = (TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               0x0;
    }
    else {
      pTVar6 = TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                         (pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
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
                    ___7__TDataReadReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *
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
    GetAs<Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                        *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                           *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aedf7a0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,0>::
CreateOperator(TInputNodeOperatorFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,0>
               *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      pTVar6 = (TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
               ::
               TInputValueOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                         (pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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
                    ___7__TDataReadReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
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
    GetAs<Metasound::TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                        *)local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                           *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aedfd70

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,1>::CreateOperator
          (TInputNodeOperatorFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,1> *this,
          FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (this_01 != (TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0
       ) {
      pTVar7 = TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
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
    GetAs<Metasound::TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *
                       )local_28);
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0)
    {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
                         (pTVar7,pFVar1,
                          (TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
                           *)local_28);
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aee1bb0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<float,1>::CreateOperator
          (TInputNodeOperatorFactory<float,1> *this,FBuildOperatorParams *param_1,
          FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference *this_00;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TInputValueOperator<float> *pTVar7;
  TInputValueOperator<float> *this_01;
  undefined1 local_28 [32];
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    this_01 = ::operator_new(0x28);
    pTVar7 = (TInputValueOperator<float> *)0x0;
    if (this_01 != (TInputValueOperator<float> *)0x0) {
      pTVar7 = TInputValueOperator<float>::TInputValueOperator<float>(this_01,pFVar1,pFVar3,pFVar2);
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
    FAnyDataReference::GetAs<Metasound::TDataValueReference<float>_>
              (this_00,(TDataValueReference<float> *)local_28);
    pTVar7 = ::operator_new(0x28);
    if (pTVar7 == (TInputValueOperator<float> *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
    else {
      pTVar7 = TInputValueOperator<float>::TInputValueOperator<float>
                         (pTVar7,pFVar1,(TDataValueReference<float> *)local_28);
      param_1->Node = (INode *)pTVar7;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_28._16_8_);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aee7050

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,0>::CreateOperator
          (TInputNodeOperatorFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,0> *this,
          FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *pFVar1;
  FInputVertexInterfaceData *pFVar2;
  FOperatorSettings *pFVar3;
  TReferenceControllerBase<0> *pTVar4;
  FAnyDataReference *this_00;
  FNonExecutableInputPassThroughOperator *pFVar5;
  TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar6;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  pFVar1 = &this->VertexName;
  this_00 = FInputVertexInterfaceData::FindDataReference
                      (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,pFVar1);
  if (this_00 == (FAnyDataReference *)0x0) {
    pFVar2 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0)
    {
      pTVar6 = (TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0;
    }
    else {
      pTVar6 = TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
               TInputValueOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
                         (pTVar6,pFVar1,pFVar3,pFVar2);
    }
    param_1->Node = (INode *)pTVar6;
  }
  else if (this_00->AccessType == Write) {
    FAnyDataReference::
    GetAs<Metasound::TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *
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
                    ___7__TDataReadReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      FNonExecutableInputPassThroughOperator::
      FNonExecutableInputPassThroughOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
                (pFVar5,pFVar1,
                 (TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
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
    GetAs<Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
              (this_00,(TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
                       local_28);
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 == (FNonExecutableInputPassThroughOperator *)0x0) {
      param_1->Node = (INode *)0x0;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
    else {
      pFVar5 = FNonExecutableInputPassThroughOperator::
               FNonExecutableInputPassThroughOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
                         (pFVar5,pFVar1,
                          (TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
                           *)local_28);
      param_1->Node = (INode *)pFVar5;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

