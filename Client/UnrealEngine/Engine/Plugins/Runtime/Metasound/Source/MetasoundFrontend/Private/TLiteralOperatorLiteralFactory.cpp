// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 19

// CreateOperator @ 14ad78dd0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::
TLiteralOperatorLiteralFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::CreateOperator(TLiteralOperatorLiteralFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                 *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 == (FLiteralOperator *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator(pFVar2,&local_res10,pFVar1,&this->InitParam);
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14ad79180

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 == (void *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator
                       (this_00,&local_res10,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14ad79eb0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::Frontend::FAnalyzerAddress>::CreateOperator
          (TLiteralOperatorLiteralFactory<Metasound::Frontend::FAnalyzerAddress> *this,
          FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 == (FLiteralOperator *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator(pFVar2,&local_res10,pFVar1,&this->InitParam);
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14ae996e0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::
TLiteralOperatorLiteralFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
::CreateOperator(TLiteralOperatorLiteralFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                 *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 == (FLiteralOperator *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator(pFVar2,&local_res10,pFVar1,&this->InitParam);
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aeb3300

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::
TLiteralOperatorLiteralFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
CreateOperator(TLiteralOperatorLiteralFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
               *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 == (FLiteralOperator *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator(pFVar2,&local_res10,pFVar1,&this->InitParam);
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aebe750

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
CreateOperator(TLiteralOperatorLiteralFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
               *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 == (FLiteralOperator *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator(pFVar2,&local_res10,pFVar1,&this->InitParam);
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aec1d40

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FAudioBuffer>::CreateOperator
          (TLiteralOperatorLiteralFactory<Metasound::FAudioBuffer> *this,
          FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 == (FLiteralOperator *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator(pFVar2,&local_res10,pFVar1,&this->InitParam);
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aec3f30

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FSendAddress>::CreateOperator
          (TLiteralOperatorLiteralFactory<Metasound::FSendAddress> *this,
          FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 == (FLiteralOperator *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator(pFVar2,&local_res10,pFVar1,&this->InitParam);
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aecab90

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FTime>::CreateOperator
          (TLiteralOperatorLiteralFactory<Metasound::FTime> *this,FBuildOperatorParams *param_1,
          FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 == (FLiteralOperator *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator(pFVar2,&local_res10,pFVar1,&this->InitParam);
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aecd000

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FTrigger>::CreateOperator
          (TLiteralOperatorLiteralFactory<Metasound::FTrigger> *this,FBuildOperatorParams *param_1,
          FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  INode *pIVar2;
  TDataWriteReference<Metasound::FTrigger> *pTVar3;
  INode local_res8;
  TDataWriteReference<Metasound::FTrigger> local_28;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pIVar2 = ::operator_new(0x40);
  if (pIVar2 == (INode *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pTVar3 = TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataWriteReference<Metasound::FTrigger>_>
             ::CreateExplicitArgs(&local_28,pFVar1,&this->InitParam);
    *pIVar2 = (INode)&
                     ___7__TPostExecutableInputOperator_VFTrigger_Metasound___MetasoundInputNodePrivate_Metasound__6B_
    ;
    pIVar2[1] = local_res8;
    FAnyDataReference::FAnyDataReference<Metasound::FTrigger>
              ((FAnyDataReference *)(pIVar2 + 2),pTVar3);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&pTVar3->field_0x10);
    *pIVar2 = (INode)&
                     ___7__TResetablePostExecutableInputOperator_VFTrigger_Metasound___MetasoundInputNodePrivate_Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(pIVar2 + 5),&(this->InitParam).Value);
    param_1->Node = pIVar2;
    *pIVar2 = (INode)&
                     ___7FLiteralOperator___TLiteralOperatorLiteralFactory_VFTrigger_Metasound___Metasound__6B_
    ;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aecd830

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<TArray<FString,TSizedDefaultAllocator<32>_>_>::
CreateOperator(TLiteralOperatorLiteralFactory<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
              FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 == (FLiteralOperator *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator(pFVar2,&local_res10,pFVar1,&this->InitParam);
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aed1790

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<FString>::CreateOperator
          (TLiteralOperatorLiteralFactory<FString> *this,FBuildOperatorParams *param_1,
          FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 == (FLiteralOperator *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator(pFVar2,&local_res10,pFVar1,&this->InitParam);
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aed2d30

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<TArray<float,TSizedDefaultAllocator<32>_>_>::
CreateOperator(TLiteralOperatorLiteralFactory<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
              FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 == (FLiteralOperator *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator(pFVar2,&local_res10,pFVar1,&this->InitParam);
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aed6be0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<float>::CreateOperator
          (TLiteralOperatorLiteralFactory<float> *this,FBuildOperatorParams *param_1,
          FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 == (FLiteralOperator *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator(pFVar2,&local_res10,pFVar1,&this->InitParam);
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aed97d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<int>::CreateOperator
          (TLiteralOperatorLiteralFactory<int> *this,FBuildOperatorParams *param_1,
          FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 == (FLiteralOperator *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator(pFVar2,&local_res10,pFVar1,&this->InitParam);
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aedba20

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<bool>::CreateOperator
          (TLiteralOperatorLiteralFactory<bool> *this,FBuildOperatorParams *param_1,
          FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 == (FLiteralOperator *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator(pFVar2,&local_res10,pFVar1,&this->InitParam);
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aede860

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (TLiteralOperatorLiteralFactory<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 == (FLiteralOperator *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator(pFVar2,&local_res10,pFVar1,&this->InitParam);
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aedf990

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<FMetasoundParameterStorageWrapper>::CreateOperator
          (TLiteralOperatorLiteralFactory<FMetasoundParameterStorageWrapper> *this,
          FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 == (FLiteralOperator *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator(pFVar2,&local_res10,pFVar1,&this->InitParam);
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aee64d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (TLiteralOperatorLiteralFactory<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 == (FLiteralOperator *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator(pFVar2,&local_res10,pFVar1,&this->InitParam);
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

