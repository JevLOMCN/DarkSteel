// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 27

// CreateOperator @ 14b2c65e0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
FFactory::CreateOperator(FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
             ::
             TVariableOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                       (pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2c8e40

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::FWaveAsset>::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<Metasound::FWaveAsset> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<Metasound::FWaveAsset> *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FWaveAsset>::
             TVariableOperator<Metasound::FWaveAsset>(pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2d0e80

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::FFactory::
CreateOperator(FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0
     ) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
             TVariableOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                       (pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2d4360

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::FAudioBusAsset>::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<Metasound::FAudioBusAsset> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<Metasound::FAudioBusAsset> *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FAudioBusAsset>::
             TVariableOperator<Metasound::FAudioBusAsset>(pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2dc710

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::FFactory::
CreateOperator(FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *
                )0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
             TVariableOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                       (pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2e2f50

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::FFactory::CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
             ::
             TVariableOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2ed960

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::FFactory::CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
             ::
             TVariableOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2f6a10

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::FWaveTableBankAsset>::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<Metasound::FWaveTableBankAsset> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<Metasound::FWaveTableBankAsset> *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FWaveTableBankAsset>::
             TVariableOperator<Metasound::FWaveTableBankAsset>(pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b2febb0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<WaveTable::FWaveTable>::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<WaveTable::FWaveTable> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<WaveTable::FWaveTable> *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::TVariableOperator<WaveTable::FWaveTable>::
             TVariableOperator<WaveTable::FWaveTable>(pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// ~FFactory @ 14b351090

void __thiscall Metasound::TVariableNode<WaveTable::FWaveTable>::FFactory::~FFactory(FFactory *this)

{
  FLiteral *pFVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->Literal).Value.TypeIndex;
  pFVar1 = &this->Literal;
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(pFVar1->Value)._padding_,(int)(this->Literal).Value._padding_);
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(pFVar1->Value)._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// ~FFactory @ 14b3510f0

void __thiscall
Metasound::TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::FFactory::
~FFactory(FFactory *this)

{
  FLiteral *pFVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->Literal).Value.TypeIndex;
  pFVar1 = &this->Literal;
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(pFVar1->Value)._padding_,(int)(this->Literal).Value._padding_);
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(pFVar1->Value)._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// ~FFactory @ 14b351150

void __thiscall
Metasound::TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::FFactory::
~FFactory(FFactory *this)

{
  FLiteral *pFVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->Literal).Value.TypeIndex;
  pFVar1 = &this->Literal;
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(pFVar1->Value)._padding_,(int)(this->Literal).Value._padding_);
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(pFVar1->Value)._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// ~FFactory @ 14b3511b0

void __thiscall
Metasound::TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
FFactory::~FFactory(FFactory *this)

{
  FLiteral *pFVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->Literal).Value.TypeIndex;
  pFVar1 = &this->Literal;
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(pFVar1->Value)._padding_,(int)(this->Literal).Value._padding_);
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(pFVar1->Value)._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// ~FFactory @ 14b351210

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
::FFactory::~FFactory(void *this)

{
  longlong *plVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = *(byte *)((longlong)this + 0x18);
  plVar1 = (longlong *)((longlong)this + 8);
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
    return;
  case 6:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>((FString *)*plVar1,*(int *)((longlong)this + 0x10));
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)*plVar1,*(int *)((longlong)this + 0x10));
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// ~FFactory @ 14b351270

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
::FFactory::~FFactory(void *this)

{
  longlong *plVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = *(byte *)((longlong)this + 0x18);
  plVar1 = (longlong *)((longlong)this + 8);
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
    return;
  case 6:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>((FString *)*plVar1,*(int *)((longlong)this + 0x10));
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)*plVar1,*(int *)((longlong)this + 0x10));
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// ~FFactory @ 14b3512d0

void __thiscall
Metasound::TVariableNode<Metasound::FAudioBusAsset>::FFactory::~FFactory(FFactory *this)

{
  FLiteral *pFVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->Literal).Value.TypeIndex;
  pFVar1 = &this->Literal;
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(pFVar1->Value)._padding_,(int)(this->Literal).Value._padding_);
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(pFVar1->Value)._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// ~FFactory @ 14b351330

void __thiscall Metasound::TVariableNode<Metasound::FWaveAsset>::FFactory::~FFactory(FFactory *this)

{
  FLiteral *pFVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->Literal).Value.TypeIndex;
  pFVar1 = &this->Literal;
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(pFVar1->Value)._padding_,(int)(this->Literal).Value._padding_);
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(pFVar1->Value)._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// ~FFactory @ 14b351390

void __thiscall
Metasound::TVariableNode<Metasound::FWaveTableBankAsset>::FFactory::~FFactory(FFactory *this)

{
  FLiteral *pFVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->Literal).Value.TypeIndex;
  pFVar1 = &this->Literal;
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(pFVar1->Value)._padding_,(int)(this->Literal).Value._padding_);
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(pFVar1->Value)._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar5 = (void *)(pFVar1->Value)._padding_;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// GetAnalyzerOutputs @ 14b3ac980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::
TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardBool,bool>::FFactory::
GetAnalyzerOutputs(FFactory *this)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FAnalyzerOutput *pFVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardBool,bool>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardBool,bool>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardBool,bool>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FOutputs::GetValue();
      FVar1 = pFVar4->Name;
      FVar2 = pFVar4->DataType;
      _Outputs = (FName *)0x0;
      _DAT_15530c950 = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,1,0,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardBool,bool>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                  ::__l2::Outputs,1,(int *)&DAT_15530c954);
      pFVar3 = _Outputs;
      *_Outputs = FVar1;
      pFVar3[1] = FVar2;
      atexit(`Metasound::Frontend::
             TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardBool,bool>::
             FFactory::GetAnalyzerOutputs'::__l2::_dynamic_atexit_destructor_for__Outputs__);
      _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardBool,bool>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> *)
             &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardBool,bool>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
              ::__l2::Outputs;
    }
  }
  return (TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardBool,bool>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
          ::__l2::Outputs;
}

// GetAnalyzerOutputs @ 14b3aca60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::
TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardFloat,float>::FFactory::
GetAnalyzerOutputs(FFactory *this)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FAnalyzerOutput *pFVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardFloat,float>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardFloat,float>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardFloat,float>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FOutputs::GetValue();
      FVar1 = pFVar4->Name;
      FVar2 = pFVar4->DataType;
      _Outputs = (FName *)0x0;
      _DAT_15530c920 = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,1,0,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardFloat,float>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                  ::__l2::Outputs,1,(int *)&DAT_15530c924);
      pFVar3 = _Outputs;
      *_Outputs = FVar1;
      pFVar3[1] = FVar2;
      atexit(`Metasound::Frontend::
             TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardFloat,float>::
             FFactory::GetAnalyzerOutputs'::__l2::_dynamic_atexit_destructor_for__Outputs__);
      _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardFloat,float>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> *)
             &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardFloat,float>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
              ::__l2::Outputs;
    }
  }
  return (TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardFloat,float>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
          ::__l2::Outputs;
}

// GetAnalyzerOutputs @ 14b3acb40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardInt,int>
::FFactory::GetAnalyzerOutputs(FFactory *this)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FAnalyzerOutput *pFVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardInt,int>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardInt,int>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardInt,int>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FOutputs::GetValue();
      FVar1 = pFVar4->Name;
      FVar2 = pFVar4->DataType;
      _Outputs = (FName *)0x0;
      _DAT_15530c8f0 = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,1,0,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardInt,int>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                  ::__l2::Outputs,1,(int *)&DAT_15530c8f4);
      pFVar3 = _Outputs;
      *_Outputs = FVar1;
      pFVar3[1] = FVar2;
      atexit(`Metasound::Frontend::
             TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardInt,int>::
             FFactory::GetAnalyzerOutputs'::__l2::_dynamic_atexit_destructor_for__Outputs__);
      _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardInt,int>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> *)
             &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardInt,int>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
              ::__l2::Outputs;
    }
  }
  return (TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardInt,int>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
          ::__l2::Outputs;
}

// GetAnalyzerOutputs @ 14b3acc20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::
TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardString,FString>::FFactory::
GetAnalyzerOutputs(FFactory *this)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FAnalyzerOutput *pFVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardString,FString>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardString,FString>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardString,FString>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FOutputs::GetValue();
      FVar1 = pFVar4->Name;
      FVar2 = pFVar4->DataType;
      _Outputs = (FName *)0x0;
      _DAT_15530c8c0 = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,1,0,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardString,FString>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                  ::__l2::Outputs,1,(int *)&DAT_15530c8c4);
      pFVar3 = _Outputs;
      *_Outputs = FVar1;
      pFVar3[1] = FVar2;
      atexit(`Metasound::Frontend::
             TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardString,FString>
             ::FFactory::GetAnalyzerOutputs'::__l2::_dynamic_atexit_destructor_for__Outputs__);
      _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardString,FString>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> *)
             &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardString,FString>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
              ::__l2::Outputs;
    }
  }
  return (TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardString,FString>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
          ::__l2::Outputs;
}

// GetAnalyzerOutputs @ 14b3acd00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::
TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardTime,Metasound::FTime>::
FFactory::GetAnalyzerOutputs(FFactory *this)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FAnalyzerOutput *pFVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardTime,Metasound::FTime>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardTime,Metasound::FTime>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardTime,Metasound::FTime>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FOutputs::GetValue();
      FVar1 = pFVar4->Name;
      FVar2 = pFVar4->DataType;
      _Outputs = (FName *)0x0;
      _DAT_15530c890 = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,1,0,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardTime,Metasound::FTime>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                  ::__l2::Outputs,1,(int *)&DAT_15530c894);
      pFVar3 = _Outputs;
      *_Outputs = FVar1;
      pFVar3[1] = FVar2;
      atexit(`Metasound::Frontend::
             TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardTime,Metasound::FTime>
             ::FFactory::GetAnalyzerOutputs'::__l2::_dynamic_atexit_destructor_for__Outputs__);
      _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardTime,Metasound::FTime>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> *)
             &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardTime,Metasound::FTime>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
              ::__l2::Outputs;
    }
  }
  return (TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardTime,Metasound::FTime>::FFactory::GetAnalyzerOutputs(void)const___ptr64'
          ::__l2::Outputs;
}

// GetAnalyzerOutputs @ 14b3acde0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FVertexAnalyzerAudioBuffer::FFactory::GetAnalyzerOutputs(FFactory *this)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FAnalyzerOutput *pFVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerAudioBuffer::FFactory::GetAnalyzerOutputs(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerAudioBuffer::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerAudioBuffer::FFactory::GetAnalyzerOutputs(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FOutputs::GetValue();
      FVar1 = pFVar4->Name;
      FVar2 = pFVar4->DataType;
      _Outputs = (FName *)0x0;
      _DAT_15530bf70 = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,1,0,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerAudioBuffer::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                  ::__l2::Outputs,1,(int *)&DAT_15530bf74);
      pFVar3 = _Outputs;
      *_Outputs = FVar1;
      pFVar3[1] = FVar2;
      atexit(`Metasound::Frontend::FVertexAnalyzerAudioBuffer::FFactory::GetAnalyzerOutputs'::__l2::
             _dynamic_atexit_destructor_for__Outputs__);
      _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerAudioBuffer::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> *)
             &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerAudioBuffer::FFactory::GetAnalyzerOutputs(void)const___ptr64'
              ::__l2::Outputs;
    }
  }
  return (TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerAudioBuffer::FFactory::GetAnalyzerOutputs(void)const___ptr64'
          ::__l2::Outputs;
}

// GetAnalyzerOutputs @ 14b3acec0

TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Engine::FVertexAnalyzerAudioBusWriter::FFactory::GetAnalyzerOutputs(FFactory *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Engine::FVertexAnalyzerAudioBusWriter::FFactory::GetAnalyzerOutputs(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Engine::FVertexAnalyzerAudioBusWriter::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Engine::FVertexAnalyzerAudioBusWriter::FFactory::GetAnalyzerOutputs(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`Metasound::Engine::FVertexAnalyzerAudioBusWriter::FFactory::GetAnalyzerOutputs'::__l2
             ::_dynamic_atexit_destructor_for__Outputs__);
      _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Engine::FVertexAnalyzerAudioBusWriter::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Engine::FVertexAnalyzerAudioBusWriter::FFactory::GetAnalyzerOutputs(void)const___ptr64'
          ::__l2::Outputs;
}

// GetAnalyzerOutputs @ 14b3acf30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FVertexAnalyzerEnvelopeFollower::FFactory::GetAnalyzerOutputs(FFactory *this)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FAnalyzerOutput *pFVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerEnvelopeFollower::FFactory::GetAnalyzerOutputs(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerEnvelopeFollower::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerEnvelopeFollower::FFactory::GetAnalyzerOutputs(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FOutputs::GetValue();
      FVar1 = pFVar4->Name;
      FVar2 = pFVar4->DataType;
      _Outputs = (FName *)0x0;
      _DAT_15530bf88 = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,1,0,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerEnvelopeFollower::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                  ::__l2::Outputs,1,(int *)&DAT_15530bf8c);
      pFVar3 = _Outputs;
      *_Outputs = FVar1;
      pFVar3[1] = FVar2;
      atexit(`Metasound::Frontend::FVertexAnalyzerEnvelopeFollower::FFactory::GetAnalyzerOutputs'::
             __l2::_dynamic_atexit_destructor_for__Outputs__);
      _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerEnvelopeFollower::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> *)
             &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerEnvelopeFollower::FFactory::GetAnalyzerOutputs(void)const___ptr64'
              ::__l2::Outputs;
    }
  }
  return (TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerEnvelopeFollower::FFactory::GetAnalyzerOutputs(void)const___ptr64'
          ::__l2::Outputs;
}

// GetAnalyzerOutputs @ 14b3ad010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FVertexAnalyzerTriggerDensity::FFactory::GetAnalyzerOutputs(FFactory *this)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FAnalyzerOutput *pFVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerTriggerDensity::FFactory::GetAnalyzerOutputs(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerTriggerDensity::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerTriggerDensity::FFactory::GetAnalyzerOutputs(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FOutputs::GetValue();
      FVar1 = pFVar4->Name;
      FVar2 = pFVar4->DataType;
      _Outputs = (FName *)0x0;
      _DAT_15530bff0 = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,1,0,
                 (ForAnyElementType *)
                 &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerTriggerDensity::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                  ::__l2::Outputs,1,(int *)&DAT_15530bff4);
      pFVar3 = _Outputs;
      *_Outputs = FVar1;
      pFVar3[1] = FVar2;
      atexit(`Metasound::Frontend::FVertexAnalyzerTriggerDensity::FFactory::GetAnalyzerOutputs'::
             __l2::_dynamic_atexit_destructor_for__Outputs__);
      _Init_thread_footer(&`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerTriggerDensity::FFactory::GetAnalyzerOutputs(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> *)
             &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerTriggerDensity::FFactory::GetAnalyzerOutputs(void)const___ptr64'
              ::__l2::Outputs;
    }
  }
  return (TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerTriggerDensity::FFactory::GetAnalyzerOutputs(void)const___ptr64'
          ::__l2::Outputs;
}

