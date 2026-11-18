// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 9

// CreateOperator @ 14b2c74d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::
TLiteralOperatorLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(TLiteralOperatorLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
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

// CreateOperator @ 14b2c9a60

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

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

// CreateOperator @ 14b2cb680

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

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

// CreateOperator @ 14b2cf1c0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::
TLiteralOperatorLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(TLiteralOperatorLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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

// CreateOperator @ 14b2e3230

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FWaveTableBankAsset>::CreateOperator
          (TLiteralOperatorLiteralFactory<Metasound::FWaveTableBankAsset> *this,
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

// CreateOperator @ 14b2e4e50

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<WaveTable::FWaveTable>::CreateOperator
          (TLiteralOperatorLiteralFactory<WaveTable::FWaveTable> *this,FBuildOperatorParams *param_1
          ,FBuildResults *param_2)

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

// CreateOperator @ 14b2e6130

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FWaveAsset>::CreateOperator
          (TLiteralOperatorLiteralFactory<Metasound::FWaveAsset> *this,FBuildOperatorParams *param_1
          ,FBuildResults *param_2)

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

// CreateOperator @ 14b2e88f0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FAudioBusAsset>::CreateOperator
          (TLiteralOperatorLiteralFactory<Metasound::FAudioBusAsset> *this,
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

// CreateOperator @ 14b2fdc60

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::
TLiteralOperatorLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::CreateOperator(TLiteralOperatorLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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

