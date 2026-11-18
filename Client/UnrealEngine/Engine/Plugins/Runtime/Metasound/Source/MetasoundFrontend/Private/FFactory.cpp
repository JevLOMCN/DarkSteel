// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 39

// CreateOperator @ 14ad6f320

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::FFactory::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
             TVariableOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14ad71d30

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::Frontend::FAnalyzerAddress>::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<Metasound::Frontend::FAnalyzerAddress> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<Metasound::Frontend::FAnalyzerAddress> *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::TVariableOperator<Metasound::Frontend::FAnalyzerAddress>
             ::TVariableOperator<Metasound::Frontend::FAnalyzerAddress>
                       (pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14ad7c040

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::FFactory::CreateOperator(FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
             ::
             TVariableOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                       (pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// ~FFactory @ 14ad9e070

void __thiscall
Metasound::TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
::FFactory::~FFactory(FFactory *this)

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

// ~FFactory @ 14ad9e0d0

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::FFactory::
~FFactory(void *this)

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

// ~FFactory @ 14ad9e130

void __thiscall
Metasound::TVariableNode<Metasound::Frontend::FAnalyzerAddress>::FFactory::~FFactory(FFactory *this)

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

// GetAnalyzerOutputs @ 14adbc410

TArray<Metasound::Frontend::FAnalyzerOutput,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FVertexAnalyzerTriggerToTime::FFactory::GetAnalyzerOutputs(FFactory *this)

{
  FName FVar1;
  FName FVar2;
  ForAnyElementType FVar3;
  FAnalyzerOutput *pFVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = FOutputs::GetValue();
      FVar1 = pFVar4->Name;
      FVar2 = pFVar4->DataType;
      ::Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ::Outputs.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,1,0,&::Outputs.AllocatorInstance,1,&::Outputs.ArrayMax);
      FVar3 = ::Outputs.AllocatorInstance;
      *(FName *)::Outputs.AllocatorInstance.Data = FVar1;
      *(FName *)(FVar3.Data + 8) = FVar2;
      atexit(`Metasound::Frontend::FVertexAnalyzerTriggerToTime::FFactory::GetAnalyzerOutputs'::__l2
             ::_dynamic_atexit_destructor_for__Outputs__);
      _Init_thread_footer(&::_TSS0);
      return &::Outputs;
    }
  }
  return &::Outputs;
}

// CreateOperator @ 14ae9c720

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_>::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
             TVariableOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
                       (pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14ae9de60

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<int>::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<int> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<int> *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::TVariableOperator<int>::TVariableOperator<int>
                       (pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aea4e00

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::FAudioBuffer>::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<Metasound::FAudioBuffer> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<Metasound::FAudioBuffer> *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FAudioBuffer>::
             TVariableOperator<Metasound::FAudioBuffer>(pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aea9ce0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<bool>::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<bool> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<bool> *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::TVariableOperator<bool>::TVariableOperator<bool>
                       (pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aeab370

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_>::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
             TVariableOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
                       (pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aeb2dd0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::FSendAddress>::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<Metasound::FSendAddress> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<Metasound::FSendAddress> *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FSendAddress>::
             TVariableOperator<Metasound::FSendAddress>(pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aeb7400

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<FMetasoundParameterStorageWrapper>::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<FMetasoundParameterStorageWrapper> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<FMetasoundParameterStorageWrapper> *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::TVariableOperator<FMetasoundParameterStorageWrapper>::
             TVariableOperator<FMetasoundParameterStorageWrapper>(pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aebb290

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_>::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
             TVariableOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
                       (pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aec0c10

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::FTime>::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<Metasound::FTime> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<Metasound::FTime> *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FTime>::
             TVariableOperator<Metasound::FTime>(pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aeccb80

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_>::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
             TVariableOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
                       (pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aece3b0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::FTrigger>::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<Metasound::FTrigger> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<Metasound::FTrigger> *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FTrigger>::
             TVariableOperator<Metasound::FTrigger>(pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aed8000

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::FFactory::
CreateOperator(FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
                0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
             TVariableOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                       (pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aedd700

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
FFactory::CreateOperator(FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
             ::
             TVariableOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                       (pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aedd830

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<FString>::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<FString> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<FString> *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::TVariableOperator<FString>::TVariableOperator<FString>
                       (pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aee5a30

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::FFactory::
CreateOperator(FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
             TVariableOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
                       (pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14aee8800

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<float>::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<float> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<float> *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::TVariableOperator<float>::TVariableOperator<float>
                       (pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// ~FFactory @ 14af42700

void __thiscall Metasound::TVariableNode<int>::FFactory::~FFactory(FFactory *this)

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

// ~FFactory @ 14af42760

void __thiscall Metasound::TVariableNode<float>::FFactory::~FFactory(FFactory *this)

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

// ~FFactory @ 14af427c0

void __thiscall
Metasound::TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_>::FFactory::~FFactory
          (FFactory *this)

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

// ~FFactory @ 14af42820

void __thiscall
Metasound::TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_>::FFactory::~FFactory
          (FFactory *this)

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

// ~FFactory @ 14af42880

void __thiscall
Metasound::TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
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

// ~FFactory @ 14af428e0

void __thiscall
Metasound::TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::FFactory::
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

// ~FFactory @ 14af42940

void __thiscall
Metasound::TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_>::FFactory::~FFactory
          (FFactory *this)

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

// ~FFactory @ 14af429a0

void __thiscall
Metasound::TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::FFactory::~FFactory
          (FFactory *this)

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

// ~FFactory @ 14af42a00

void __thiscall
Metasound::TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_>::FFactory::~FFactory
          (FFactory *this)

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

// ~FFactory @ 14af42a60

void __thiscall
Metasound::TVariableNode<Metasound::FAudioBuffer>::FFactory::~FFactory(FFactory *this)

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

// ~FFactory @ 14af42ac0

void __thiscall
Metasound::TVariableNode<FMetasoundParameterStorageWrapper>::FFactory::~FFactory(FFactory *this)

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

// ~FFactory @ 14af42b20

void __thiscall
Metasound::TVariableNode<Metasound::FSendAddress>::FFactory::~FFactory(FFactory *this)

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

// ~FFactory @ 14af42b80

void __thiscall Metasound::TVariableNode<FString>::FFactory::~FFactory(FFactory *this)

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

// ~FFactory @ 14af42be0

void __thiscall Metasound::TVariableNode<Metasound::FTime>::FFactory::~FFactory(FFactory *this)

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

// ~FFactory @ 14af42c40

void __thiscall Metasound::TVariableNode<Metasound::FTrigger>::FFactory::~FFactory(FFactory *this)

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

// ~FFactory @ 14af42ca0

void __thiscall Metasound::TVariableNode<bool>::FFactory::~FFactory(FFactory *this)

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

