// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 54

// CreateOperator @ 14afc3ca0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::FFactory::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
             TVariableOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14afc92d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::FFactory::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
             TVariableOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14afccf60

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::FStereoAudioFormat>::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<Metasound::FStereoAudioFormat> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<Metasound::FStereoAudioFormat> *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FStereoAudioFormat>::
             TVariableOperator<Metasound::FStereoAudioFormat>(pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14afcec00

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::FMonoAudioFormat>::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  TVariableOperator<Metasound::FMonoAudioFormat> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TVariableOperator<Metasound::FMonoAudioFormat> *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FMonoAudioFormat>::
             TVariableOperator<Metasound::FMonoAudioFormat>(pTVar2,pFVar1,&this->Literal);
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// ~FFactory @ 14affc930

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::FFactory::
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

// ~FFactory @ 14affc990

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::FFactory::~FFactory
          (void *this)

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

// ~FFactory @ 14affc9f0

void __thiscall
Metasound::TVariableNode<Metasound::FMonoAudioFormat>::FFactory::~FFactory(FFactory *this)

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

// ~FFactory @ 14affca50

void __thiscall
Metasound::TVariableNode<Metasound::FStereoAudioFormat>::FFactory::~FFactory(FFactory *this)

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

// CreateOperator @ 14b03e840

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::FFactory::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
             TVariableOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// ~FFactory @ 14b054a00

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::FFactory::~FFactory
          (void *this)

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

// CreateOperator @ 14b07c940

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::FFactory::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
             TVariableOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b081fd0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::FFactory::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
             TVariableOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b08f470

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
FFactory::CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
             TVariableOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b095190

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::FFactory::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
             TVariableOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// ~FFactory @ 14b0b6250

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::FFactory::~FFactory
          (void *this)

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

// ~FFactory @ 14b0b62b0

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::FFactory::
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

// ~FFactory @ 14b0b6310

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::FFactory::~FFactory
          (void *this)

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

// ~FFactory @ 14b0b6370

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
FFactory::~FFactory(void *this)

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

// CreateOperator @ 14b0ec470

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::FFactory::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
             TVariableOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0f3db0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::FFactory::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
             TVariableOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0fb0b0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::FFactory::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
             TVariableOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0fd5f0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::FFactory::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
             TVariableOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b107400

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::FFactory::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
             TVariableOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b10cd10

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::FFactory::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
             TVariableOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b112140

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::FFactory::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
             TVariableOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// ~FFactory @ 14b145410

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::FFactory::
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

// ~FFactory @ 14b145470

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::FFactory::~FFactory
          (void *this)

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

// ~FFactory @ 14b1454d0

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::FFactory::
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

// ~FFactory @ 14b145530

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::FFactory::
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

// ~FFactory @ 14b145590

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::FFactory::
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

// ~FFactory @ 14b1455f0

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::FFactory::
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

// ~FFactory @ 14b145650

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::FFactory::~FFactory
          (void *this)

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

// operator() @ 14b14ce30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FSawOscilatorNode::FFactory::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  longlong *plVar1;
  int *piVar2;
  ITextData *pIVar3;
  code *pcVar4;
  TRefCountPtr<ITextData> TVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  FInputVertexInterface *this_00;
  FInputDataVertex *pFVar9;
  FNodeClassMetadata *pFVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 *puVar13;
  longlong lVar14;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  FName local_c0;
  FText local_b8;
  FText local_a8;
  FNodeClassName local_98;
  FText local_80;
  FText local_70;
  FText local_60;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_c0,L"Saw");
  Metasound::FNodeClassName::FNodeClassName
            (&local_98,&Metasound::StandardNodes::Namespace,&local_c0,
             &Metasound::StandardNodes::AudioVariant);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_98.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_98.Name;
  (__return_storage_ptr__->ClassName).Variant = local_98.Variant;
  pFVar8 = FText::FText(&local_b8);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar8);
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  pFVar8 = FText::FText(&local_a8);
  FText::operator=(&__return_storage_ptr__->Description,pFVar8);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,local_c8);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  uVar11 = (ulonglong)_tls_index;
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSawOscilatorNode::FFactory::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSawOscilatorNode::FFactory::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSawOscilatorNode::FFactory::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      Metasound::FOscilatorFactoryBase::GetCommmonVertexInterface
                (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSawOscilatorNode::FFactory::GetVertexInterface(void)'
                  ::__l2::Interface);
      this_00 = Metasound::FVertexInterface::GetInputInterface
                          (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSawOscilatorNode::FFactory::GetVertexInterface(void)'
                            ::__l2::Interface);
      pFVar9 = (FInputDataVertex *)
               Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
               ::TInputDataVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><>
                         (local_50,&Metasound::SawOscilatorVertexNames::SawTypeName,
                          &Metasound::FDataVertexMetadata::EmptyBasic);
      Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
                ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)this_00,pFVar9);
      if (0xc < local_20) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FNodeClassMetadata *)(*pcVar4)();
          return pFVar10;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_20])(local_30);
      atexit(FFactory::GetVertexInterface'::__l2::_dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSawOscilatorNode::FFactory::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSawOscilatorNode::FFactory::GetVertexInterface(void)'
              ::__l2::Interface);
  iVar7 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar2 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar2);
  }
  pFVar12 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar7 + 1;
  pFVar12 = pFVar12 + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar12 = 0;
  TVar5 = Metasound::NodeCategories::Generators.TextData;
  *(ITextData **)pFVar12 = Metasound::NodeCategories::Generators.TextData.Reference;
  if (TVar5.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,local_c4);
  }
  *(uint *)(pFVar12 + 8) = Metasound::NodeCategories::Generators.Flags;
  FText::FText(&local_80);
  FText::FText(&local_70);
  FText::FText(&local_60);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  lVar14 = 3;
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,&local_80,3,
             (__return_storage_ptr__->Keywords).ArrayMax);
  puVar13 = local_50;
  do {
    plVar1 = (longlong *)(puVar13 + -0x10);
    puVar13 = puVar13 + -0x10;
    lVar14 = lVar14 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
    }
  } while (lVar14 != 0);
  return __return_storage_ptr__;
}

// operator() @ 14b14d160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FSineOscilatorNode::FFactory::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  longlong *plVar1;
  int *piVar2;
  ITextData *pIVar3;
  code *pcVar4;
  TRefCountPtr<ITextData> TVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  FInputVertexInterface *this_00;
  FInputDataVertex *pFVar9;
  FNodeClassMetadata *pFVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 *puVar13;
  longlong lVar14;
  undefined1 auStack_e8 [32];
  int local_c8;
  undefined1 local_c4 [4];
  undefined1 local_c0 [4];
  FName local_bc;
  FText local_b0;
  FText local_a0;
  FNodeClassName local_90;
  FText local_78;
  FText local_68;
  FText local_58;
  undefined1 local_48 [32];
  undefined1 local_28 [16];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_e8;
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_bc,L"Sine");
  Metasound::FNodeClassName::FNodeClassName
            (&local_90,&Metasound::StandardNodes::Namespace,&local_bc,
             &Metasound::StandardNodes::AudioVariant);
  __return_storage_ptr__->MajorVersion = 1;
  (__return_storage_ptr__->ClassName).Namespace = local_90.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_90.Name;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_90.Variant;
  pFVar8 = FText::FText(&local_b0);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar8);
  if (local_b0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
  }
  pFVar8 = FText::FText(&local_a0);
  FText::operator=(&__return_storage_ptr__->Description,pFVar8);
  if (local_a0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,local_c4);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  lVar14 = 3;
  uVar11 = (ulonglong)_tls_index;
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSineOscilatorNode::FFactory::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSineOscilatorNode::FFactory::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSineOscilatorNode::FFactory::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      Metasound::FOscilatorFactoryBase::GetCommmonVertexInterface
                (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSineOscilatorNode::FFactory::GetVertexInterface(void)'
                  ::__l2::Interface);
      this_00 = Metasound::FVertexInterface::GetInputInterface
                          (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSineOscilatorNode::FFactory::GetVertexInterface(void)'
                            ::__l2::Interface);
      local_c8 = 3;
      pFVar9 = (FInputDataVertex *)
               Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
               ::TInputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><int>
                         (local_48,&Metasound::SineOscilatorVertexNames::SineTypeName,
                          &Metasound::FDataVertexMetadata::EmptyBasic,&local_c8);
      Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
                ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)this_00,pFVar9);
      if (0xc < local_18) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FNodeClassMetadata *)(*pcVar4)();
          return pFVar10;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_18])(local_28);
      atexit(FFactory::GetVertexInterface'::__l2::_dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSineOscilatorNode::FFactory::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSineOscilatorNode::FFactory::GetVertexInterface(void)'
              ::__l2::Interface);
  iVar7 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar2 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar2);
  }
  pFVar12 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar7 + 1;
  pFVar12 = pFVar12 + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar12 = 0;
  TVar5 = Metasound::NodeCategories::Generators.TextData;
  *(ITextData **)pFVar12 = Metasound::NodeCategories::Generators.TextData.Reference;
  if (TVar5.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,local_c0);
  }
  *(uint *)(pFVar12 + 8) = Metasound::NodeCategories::Generators.Flags;
  FText::FText(&local_78);
  FText::FText(&local_68);
  FText::FText(&local_58);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,&local_78,3,
             (__return_storage_ptr__->Keywords).ArrayMax);
  puVar13 = local_48;
  do {
    plVar1 = (longlong *)(puVar13 + -0x10);
    puVar13 = puVar13 + -0x10;
    lVar14 = lVar14 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
    }
  } while (lVar14 != 0);
  return __return_storage_ptr__;
}

// operator() @ 14b14d4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FSquareOscilatorNode::FFactory::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  longlong *plVar1;
  int *piVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TRefCountPtr<ITextData> TVar6;
  bool bVar7;
  int iVar8;
  FText *pFVar9;
  FInputVertexInterface *pFVar10;
  FInputDataVertex *pFVar11;
  FNodeClassMetadata *pFVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  longlong lVar15;
  undefined1 auStack_128 [32];
  float local_108;
  undefined1 local_104 [4];
  undefined1 local_100 [4];
  FName local_fc;
  FText local_f0;
  FText local_e0;
  FNodeClassName local_d0;
  FText local_b8;
  FText local_a8;
  FText local_98;
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  byte local_58;
  TInputDataVertex<float> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_fc,L"Square");
  Metasound::FNodeClassName::FNodeClassName
            (&local_d0,&Metasound::StandardNodes::Namespace,&local_fc,
             &Metasound::StandardNodes::AudioVariant);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_d0.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_d0.Name;
  (__return_storage_ptr__->ClassName).Variant = local_d0.Variant;
  pFVar9 = FText::FText(&local_f0);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar9);
  if (local_f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
  }
  pFVar9 = FText::FText(&local_e0);
  FText::operator=(&__return_storage_ptr__->Description,pFVar9);
  if (local_e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,local_104);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  uVar13 = (ulonglong)_tls_index;
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSquareOscilatorNode::FFactory::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSquareOscilatorNode::FFactory::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSquareOscilatorNode::FFactory::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      Metasound::FOscilatorFactoryBase::GetCommmonVertexInterface
                (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSquareOscilatorNode::FFactory::GetVertexInterface(void)'
                  ::__l2::Interface);
      pFVar10 = Metasound::FVertexInterface::GetInputInterface
                          (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSquareOscilatorNode::FFactory::GetVertexInterface(void)'
                            ::__l2::Interface);
      pFVar11 = (FInputDataVertex *)
                Metasound::
                TInputDataVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
                TInputDataVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><>
                          (local_88,&Metasound::SquareOscillatorVertexNames::SquareTypePinName,
                           &Metasound::FDataVertexMetadata::EmptyBasic);
      Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
                ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)pFVar10,pFVar11);
      if (0xc < local_58) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pFVar12 = (FNodeClassMetadata *)(*pcVar5)();
          return pFVar12;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_58])(local_68);
      pFVar10 = Metasound::FVertexInterface::GetInputInterface
                          (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSquareOscilatorNode::FFactory::GetVertexInterface(void)'
                            ::__l2::Interface);
      local_108 = 0.5;
      pFVar11 = (FInputDataVertex *)
                Metasound::TInputDataVertex<float>::TInputDataVertex<float><float>
                          (&local_50,
                           &Metasound::SquareOscillatorVertexNames::SquarePulseWidthPinName,
                           &Metasound::FDataVertexMetadata::EmptyBasic,&local_108);
      Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
                ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)pFVar10,pFVar11);
      if (0xc < (byte)local_50._48_1_) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pFVar12 = (FNodeClassMetadata *)(*pcVar5)();
          return pFVar12;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
      atexit(FFactory::GetVertexInterface'::__l2::_dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSquareOscilatorNode::FFactory::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSquareOscilatorNode::FFactory::GetVertexInterface(void)'
              ::__l2::Interface);
  iVar8 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar2 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar2);
  }
  pFVar4 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar8 + 1;
  lVar15 = (longlong)iVar8;
  *(undefined8 *)(pFVar4 + lVar15 * 0x10) = 0;
  TVar6 = Metasound::NodeCategories::Generators.TextData;
  *(ITextData **)(pFVar4 + lVar15 * 0x10) = Metasound::NodeCategories::Generators.TextData.Reference
  ;
  if (TVar6.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,local_100);
  }
  *(uint *)(pFVar4 + lVar15 * 0x10 + 8) = Metasound::NodeCategories::Generators.Flags;
  FText::FText(&local_b8);
  FText::FText(&local_a8);
  FText::FText(&local_98);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  lVar15 = 3;
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,&local_b8,3,
             (__return_storage_ptr__->Keywords).ArrayMax);
  puVar14 = local_88;
  do {
    plVar1 = (longlong *)(puVar14 + -0x10);
    puVar14 = puVar14 + -0x10;
    lVar15 = lVar15 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
    }
  } while (lVar15 != 0);
  return __return_storage_ptr__;
}

// operator() @ 14b14d840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FTriangleOscilatorNode::FFactory::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  longlong *plVar1;
  int *piVar2;
  ITextData *pIVar3;
  code *pcVar4;
  TRefCountPtr<ITextData> TVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  FInputVertexInterface *this_00;
  FInputDataVertex *pFVar9;
  FNodeClassMetadata *pFVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 *puVar13;
  longlong lVar14;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  FName local_c0;
  FText local_b8;
  FText local_a8;
  FNodeClassName local_98;
  FText local_80;
  FText local_70;
  FText local_60;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_c0,L"Triangle");
  Metasound::FNodeClassName::FNodeClassName
            (&local_98,&Metasound::StandardNodes::Namespace,&local_c0,
             &Metasound::StandardNodes::AudioVariant);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_98.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_98.Name;
  (__return_storage_ptr__->ClassName).Variant = local_98.Variant;
  pFVar8 = FText::FText(&local_b8);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar8);
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  pFVar8 = FText::FText(&local_a8);
  FText::operator=(&__return_storage_ptr__->Description,pFVar8);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,local_c8);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  uVar11 = (ulonglong)_tls_index;
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FTriangleOscilatorNode::FFactory::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FTriangleOscilatorNode::FFactory::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FTriangleOscilatorNode::FFactory::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      Metasound::FOscilatorFactoryBase::GetCommmonVertexInterface
                (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FTriangleOscilatorNode::FFactory::GetVertexInterface(void)'
                  ::__l2::Interface);
      this_00 = Metasound::FVertexInterface::GetInputInterface
                          (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FTriangleOscilatorNode::FFactory::GetVertexInterface(void)'
                            ::__l2::Interface);
      pFVar9 = (FInputDataVertex *)
               Metasound::
               TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
               TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><>
                         (local_50,&Metasound::TriangleOscilatorVertexNames::TriangeTypePinName,
                          &Metasound::FDataVertexMetadata::EmptyBasic);
      Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
                ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)this_00,pFVar9);
      if (0xc < local_20) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FNodeClassMetadata *)(*pcVar4)();
          return pFVar10;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_20])(local_30);
      atexit(FFactory::GetVertexInterface'::__l2::_dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FTriangleOscilatorNode::FFactory::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FTriangleOscilatorNode::FFactory::GetVertexInterface(void)'
              ::__l2::Interface);
  iVar7 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar2 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar2);
  }
  pFVar12 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar7 + 1;
  pFVar12 = pFVar12 + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar12 = 0;
  TVar5 = Metasound::NodeCategories::Generators.TextData;
  *(ITextData **)pFVar12 = Metasound::NodeCategories::Generators.TextData.Reference;
  if (TVar5.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,local_c4);
  }
  *(uint *)(pFVar12 + 8) = Metasound::NodeCategories::Generators.Flags;
  FText::FText(&local_80);
  FText::FText(&local_70);
  FText::FText(&local_60);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  lVar14 = 3;
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,&local_80,3,
             (__return_storage_ptr__->Keywords).ArrayMax);
  puVar13 = local_50;
  do {
    plVar1 = (longlong *)(puVar13 + -0x10);
    puVar13 = puVar13 + -0x10;
    lVar14 = lVar14 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
    }
  } while (lVar14 != 0);
  return __return_storage_ptr__;
}

// CreateOperator @ 14b1768a0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::FSawOscilatorNode::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  FInputBinding *pFVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  INode *pIVar6;
  undefined **ppuVar7;
  INode IVar8;
  FName local_res18;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  undefined1 local_128 [16];
  INode local_118;
  undefined1 local_108 [40];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [40];
  undefined1 local_38 [16];
  INode local_28;
  
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&SawOscilatorVertexNames::SawTypeName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
                     local_128,&local_res18,pFVar1);
  local_108._0_8_ = pFVar1;
  FLazyName::Resolve(&OscillatorCommonVertexNames::EnabledPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this_00,(TDataReadReference<bool> *)(local_108 + 8),&local_168,pFVar1);
  FLazyName::Resolve(&OscillatorCommonVertexNames::OscBaseFrequencyPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_e0,&local_160,pFVar1);
  FLazyName::Resolve(&OscillatorCommonVertexNames::PhaseOffsetPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_c0,&local_158,pFVar1);
  FLazyName::Resolve(&OscillatorCommonVertexNames::OscPhaseResetPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this_00,(TDataReadReference<Metasound::FTrigger> *)local_a0,&local_150,pFVar1);
  FLazyName::Resolve(&OscillatorCommonVertexNames::GlideFactorPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_80,&local_148,pFVar1);
  FLazyName::Resolve(&OscillatorCommonVertexNames::BiPolarPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this_00,(TDataReadReference<bool> *)local_60,&local_140,pFVar1);
  FLazyName::Resolve(&OscillatorCommonVertexNames::FrequencyModPinName);
  bVar3 = FInputVertexInterfaceData::IsVertexBound(this_00,&local_138);
  if (!bVar3) {
    if (*(int *)local_128._8_8_ == 0) {
      pIVar6 = ::operator_new(0x120);
      if (pIVar6 != (INode *)0x0) {
        TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
        ::
        TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
                  (pIVar6,(FOscillatorOperatorConstructParams *)local_108);
        ppuVar7 = &
                  ___7__TOscillatorOperator_U__TGenerateBlock_UFSawPolySmoothGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___3__Metasound__6B_
        ;
        goto LAB_14b176c06;
      }
    }
    else {
      pIVar6 = ::operator_new(0x120);
      if (pIVar6 != (INode *)0x0) {
        TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
        ::
        TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
                  (pIVar6,(FOscillatorOperatorConstructParams *)local_108);
        ppuVar7 = &
                  ___7__TOscillatorOperator_U__TGenerateBlock_UFSawGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___3__Metasound__6B_
        ;
LAB_14b176c06:
        *pIVar6 = (INode)ppuVar7;
        pIVar6[0x20] = (INode)&
                              ___7__TDataReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
        ;
        pIVar6[0x21] = (INode)local_128._8_8_;
        pIVar6[0x22] = local_118;
        if (local_118 != (INode)0x0) {
          *(int *)((longlong)local_118 + 8) = *(int *)((longlong)local_118 + 8) + 1;
        }
        pIVar6[0x20] = (INode)&
                              ___7__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
        ;
        IVar8 = local_118;
        goto LAB_14b176c3f;
      }
    }
    pIVar6 = (INode *)0x0;
    IVar8 = local_118;
LAB_14b176c3f:
    param_1->Node = pIVar6;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_60._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_80._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_a0._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_c0._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_e0._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_108._24_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)IVar8);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)param_1;
  }
  FLazyName::Resolve(&OscillatorCommonVertexNames::FrequencyModPinName);
  pFVar4 = FInputVertexInterfaceData::FindChecked(this_00,&local_130);
  if (((pFVar4->Data).bIsSet == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0x10e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar5.Ptr = (IOperator *)(*pcVar2)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
  }
  if (((pFVar4->Data).bIsSet == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar5.Ptr = (IOperator *)(*pcVar2)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
  }
  FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
            (&(pFVar4->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_38);
  if (*(int *)local_128._8_8_ == 0) {
    pIVar6 = ::operator_new(0x140);
    if (pIVar6 != (INode *)0x0) {
      TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
      ::
      TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
                (pIVar6,(FOscillatorOperatorConstructParams *)local_108);
      ppuVar7 = &
                ___7__TOscillatorOperatorFM_U__TGenerateBlockFM_UFSawPolySmoothGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___3__Metasound__6B_
      ;
      goto LAB_14b176af1;
    }
  }
  else {
    pIVar6 = ::operator_new(0x140);
    if (pIVar6 != (INode *)0x0) {
      TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
      ::
      TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
                (pIVar6,(FOscillatorOperatorConstructParams *)local_108);
      ppuVar7 = &
                ___7__TOscillatorOperatorFM_U__TGenerateBlockFM_UFSawGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___3__Metasound__6B_
      ;
LAB_14b176af1:
      *pIVar6 = (INode)ppuVar7;
      pIVar6[0x20] = (INode)&___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
      pIVar6[0x21] = (INode)local_38._8_8_;
      pIVar6[0x22] = local_28;
      if (local_28 != (INode)0x0) {
        *(int *)((longlong)local_28 + 8) = *(int *)((longlong)local_28 + 8) + 1;
      }
      pIVar6[0x20] = (INode)&___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
      pIVar6[0x24] = (INode)&
                            ___7__TDataReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
      ;
      pIVar6[0x25] = (INode)local_128._8_8_;
      pIVar6[0x26] = local_118;
      if (local_118 != (INode)0x0) {
        *(int *)((longlong)local_118 + 8) = *(int *)((longlong)local_118 + 8) + 1;
      }
      pIVar6[0x24] = (INode)&
                            ___7__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
      ;
      IVar8 = local_118;
      goto LAB_14b176b61;
    }
  }
  pIVar6 = (INode *)0x0;
  IVar8 = local_118;
LAB_14b176b61:
  param_1->Node = pIVar6;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_80._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_e0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_108._24_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)IVar8);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)param_1;
}

// CreateOperator @ 14b176cc0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::FSineOscilatorNode::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  int iVar1;
  FOperatorSettings *pFVar2;
  FInputVertexInterfaceData *this_00;
  code *pcVar3;
  bool bVar4;
  FInputBinding *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  INode *pIVar7;
  undefined **ppuVar8;
  INode IVar9;
  FName local_res18;
  undefined1 local_168 [16];
  INode local_158;
  undefined1 local_148 [40];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [40];
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  undefined1 local_38 [16];
  INode local_28;
  
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_148._0_8_ = pFVar2;
  FLazyName::Resolve(&OscillatorCommonVertexNames::EnabledPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this_00,(TDataReadReference<bool> *)(local_148 + 8),&local_res18,pFVar2);
  FLazyName::Resolve(&OscillatorCommonVertexNames::OscBaseFrequencyPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_120,&local_78,pFVar2);
  FLazyName::Resolve(&OscillatorCommonVertexNames::PhaseOffsetPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_100,&local_70,pFVar2);
  FLazyName::Resolve(&OscillatorCommonVertexNames::OscPhaseResetPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this_00,(TDataReadReference<Metasound::FTrigger> *)local_e0,&local_68,pFVar2);
  FLazyName::Resolve(&OscillatorCommonVertexNames::GlideFactorPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_c0,&local_60,pFVar2);
  FLazyName::Resolve(&OscillatorCommonVertexNames::BiPolarPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this_00,(TDataReadReference<bool> *)local_a0,&local_58,pFVar2);
  FLazyName::Resolve(&OscillatorCommonVertexNames::FrequencyModPinName);
  bVar4 = FInputVertexInterfaceData::IsVertexBound(this_00,&local_50);
  FLazyName::Resolve(&SineOscilatorVertexNames::SineTypeName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
                     local_168,&local_48,pFVar2);
  if (!bVar4) {
    iVar1 = *(int *)local_168._8_8_;
    if (iVar1 == 0) {
      pIVar7 = ::operator_new(0x150);
      if (pIVar7 != (INode *)0x0) {
        TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
        ::
        TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
                  (pIVar7,(FOscillatorOperatorConstructParams *)local_148);
        *pIVar7 = (INode)&
                         ___7__TOscillatorOperator_UF2DRotatorGenerateBlock_Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___3__Metasound__6B_
        ;
        pIVar7[0x25] = (INode)&
                              ___7__TDataReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
        ;
        pIVar7[0x26] = (INode)local_168._8_8_;
        pIVar7[0x27] = local_158;
        if (local_158 != (INode)0x0) {
          *(int *)((longlong)local_158 + 8) = *(int *)((longlong)local_158 + 8) + 1;
        }
        pIVar7[0x25] = (INode)&
                              ___7__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
        ;
        goto LAB_14b17710e;
      }
LAB_14b17710c:
      pIVar7 = (INode *)0x0;
    }
    else {
      if (iVar1 == 1) {
LAB_14b1770a9:
        pIVar7 = ::operator_new(0x120);
        if (pIVar7 == (INode *)0x0) goto LAB_14b17710c;
        TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
        ::
        TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
                  (pIVar7,(FOscillatorOperatorConstructParams *)local_148);
        ppuVar8 = &
                  ___7__TOscillatorOperator_U__TGenerateBlock_UFSinfGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___3__Metasound__6B_
        ;
      }
      else if (iVar1 == 2) {
        pIVar7 = ::operator_new(0x120);
        if (pIVar7 == (INode *)0x0) goto LAB_14b17710c;
        TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
        ::
        TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
                  (pIVar7,(FOscillatorOperatorConstructParams *)local_148);
        ppuVar8 = &
                  ___7__TOscillatorOperator_U__TGenerateBlock_UFBhaskaraGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___3__Metasound__6B_
        ;
      }
      else {
        if (iVar1 != 3) goto LAB_14b1770a9;
        pIVar7 = ::operator_new(0x120);
        if (pIVar7 == (INode *)0x0) goto LAB_14b17710c;
        TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
        ::
        TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
                  (pIVar7,(FOscillatorOperatorConstructParams *)local_148);
        ppuVar8 = &
                  ___7__TOscillatorOperator_U__TGenerateBlock_UFSineWaveTableGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___3__Metasound__6B_
        ;
      }
      *pIVar7 = (INode)ppuVar8;
      pIVar7[0x20] = (INode)&
                            ___7__TDataReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
      ;
      pIVar7[0x21] = (INode)local_168._8_8_;
      pIVar7[0x22] = local_158;
      if (local_158 != (INode)0x0) {
        *(int *)((longlong)local_158 + 8) = *(int *)((longlong)local_158 + 8) + 1;
      }
      pIVar7[0x20] = (INode)&
                            ___7__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
      ;
    }
LAB_14b17710e:
    param_1->Node = pIVar7;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_158);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_a0._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_c0._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_e0._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_100._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_120._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_148._24_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)param_1;
  }
  FLazyName::Resolve(&OscillatorCommonVertexNames::FrequencyModPinName);
  pFVar5 = FInputVertexInterfaceData::FindChecked(this_00,&local_40);
  if (((pFVar5->Data).bIsSet == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0x10e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar6.Ptr = (IOperator *)(*pcVar3)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
  }
  if (((pFVar5->Data).bIsSet == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar6.Ptr = (IOperator *)(*pcVar3)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
  }
  FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
            (&(pFVar5->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_38);
  iVar1 = *(int *)local_168._8_8_;
  if (iVar1 == 1) {
LAB_14b176f1c:
    pIVar7 = ::operator_new(0x140);
    if (pIVar7 == (INode *)0x0) {
LAB_14b176fbd:
      pIVar7 = (INode *)0x0;
      IVar9 = local_158;
      goto LAB_14b176fbf;
    }
    TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
    ::
    TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
              (pIVar7,(FOscillatorOperatorConstructParams *)local_148);
    ppuVar8 = &
              ___7__TOscillatorOperatorFM_U__TGenerateBlockFM_UFSinfGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___3__Metasound__6B_
    ;
  }
  else if (iVar1 == 2) {
    pIVar7 = ::operator_new(0x140);
    if (pIVar7 == (INode *)0x0) goto LAB_14b176fbd;
    TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
    ::
    TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
              (pIVar7,(FOscillatorOperatorConstructParams *)local_148);
    ppuVar8 = &
              ___7__TOscillatorOperatorFM_U__TGenerateBlockFM_UFBhaskaraGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___3__Metasound__6B_
    ;
  }
  else {
    if (iVar1 != 3) goto LAB_14b176f1c;
    pIVar7 = ::operator_new(0x140);
    if (pIVar7 == (INode *)0x0) goto LAB_14b176fbd;
    TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
    ::
    TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
              (pIVar7,(FOscillatorOperatorConstructParams *)local_148);
    ppuVar8 = &
              ___7__TOscillatorOperatorFM_U__TGenerateBlockFM_UFSineWaveTableGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___3__Metasound__6B_
    ;
  }
  *pIVar7 = (INode)ppuVar8;
  pIVar7[0x20] = (INode)&___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  pIVar7[0x21] = (INode)local_38._8_8_;
  pIVar7[0x22] = local_28;
  if (local_28 != (INode)0x0) {
    *(int *)((longlong)local_28 + 8) = *(int *)((longlong)local_28 + 8) + 1;
  }
  pIVar7[0x20] = (INode)&___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  pIVar7[0x24] = (INode)&
                        ___7__TDataReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  pIVar7[0x25] = (INode)local_168._8_8_;
  pIVar7[0x26] = local_158;
  if (local_158 != (INode)0x0) {
    *(int *)((longlong)local_158 + 8) = *(int *)((longlong)local_158 + 8) + 1;
  }
  pIVar7[0x24] = (INode)&
                        ___7__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  IVar9 = local_158;
LAB_14b176fbf:
  param_1->Node = pIVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)IVar9);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_e0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_100._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_120._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_148._24_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)param_1;
}

// CreateOperator @ 14b1771d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::FSquareOscilatorNode::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FInputVertexInterfaceData *this_00;
  code *pcVar2;
  bool bVar3;
  FInputBinding *pFVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
  *pFVar6;
  FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
  *this_01;
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
  *this_02;
  undefined **ppuVar7;
  TReferenceControllerBase<0> *pTVar8;
  FName local_res18;
  undefined1 local_198 [16];
  TReferenceControllerBase<0> *local_188;
  undefined1 local_178 [32];
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  FName local_120;
  FName local_118 [2];
  undefined1 local_108 [40];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [40];
  undefined1 local_38 [32];
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_108._0_8_ = pFVar1;
  FLazyName::Resolve(&OscillatorCommonVertexNames::EnabledPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this_00,(TDataReadReference<bool> *)(local_108 + 8),&local_res18,pFVar1);
  FLazyName::Resolve(&OscillatorCommonVertexNames::OscBaseFrequencyPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_e0,&local_158,pFVar1);
  FLazyName::Resolve(&OscillatorCommonVertexNames::PhaseOffsetPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_c0,&local_150,pFVar1);
  FLazyName::Resolve(&OscillatorCommonVertexNames::OscPhaseResetPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this_00,(TDataReadReference<Metasound::FTrigger> *)local_a0,&local_148,pFVar1);
  FLazyName::Resolve(&OscillatorCommonVertexNames::GlideFactorPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_80,&local_140,pFVar1);
  FLazyName::Resolve(&OscillatorCommonVertexNames::BiPolarPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this_00,(TDataReadReference<bool> *)local_60,&local_138,pFVar1);
  FLazyName::Resolve(&SquareOscillatorVertexNames::SquareTypePinName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
                     local_198,&local_130,pFVar1);
  FLazyName::Resolve(&OscillatorCommonVertexNames::FrequencyModPinName);
  bVar3 = FInputVertexInterfaceData::IsVertexBound(this_00,&local_128);
  FLazyName::Resolve(&SquareOscillatorVertexNames::SquarePulseWidthPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_178,&local_120,pFVar1);
  if (bVar3) {
    FLazyName::Resolve(&OscillatorCommonVertexNames::FrequencyModPinName);
    pFVar4 = FInputVertexInterfaceData::FindChecked(this_00,local_118);
    if (((pFVar4->Data).bIsSet == false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Data.IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                           ,0x10e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      TVar5.Ptr = (IOperator *)(*pcVar2)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
    }
    if (((pFVar4->Data).bIsSet == false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      TVar5.Ptr = (IOperator *)(*pcVar2)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
              (&(pFVar4->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_38);
    if (*(int *)local_198._8_8_ == 0) {
      this_01 = ::operator_new(0x160);
      if (this_01 !=
          (FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
           *)0x0) {
        pFVar6 = (FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
                  *)FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
                    ::
                    FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
                              (this_01,(FOscillatorOperatorConstructParams *)local_108,
                               (TDataReadReference<float> *)local_178,
                               (TDataReadReference<Metasound::FAudioBuffer> *)local_38,
                               (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>
                                *)local_198);
        goto LAB_14b177414;
      }
    }
    else {
      pFVar6 = ::operator_new(0x160);
      if (pFVar6 != (FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
                     *)0x0) {
        pFVar6 = FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
                 ::
                 FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
                           (pFVar6,(FOscillatorOperatorConstructParams *)local_108,
                            (TDataReadReference<float> *)local_178,
                            (TDataReadReference<Metasound::FAudioBuffer> *)local_38,
                            (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>
                             *)local_198);
        goto LAB_14b177414;
      }
    }
    pFVar6 = (FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
              *)0x0;
LAB_14b177414:
    param_1->Node = (INode *)pFVar6;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_178._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_188);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_60._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_80._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_a0._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_c0._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_e0._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_108._24_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  if (*(int *)local_198._8_8_ == 0) {
    this_02 = ::operator_new(0x140);
    if (this_02 !=
        (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
         *)0x0) {
      TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
      ::
      TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
                ((TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
                  *)this_02,(FOscillatorOperatorConstructParams *)local_108);
      ppuVar7 = &
                ___7__FSquareOperator_U__TGenerateBlock_UFSquarePolysmoothGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound___Metasound__6B_
      ;
      goto LAB_14b17751c;
    }
  }
  else {
    this_02 = ::operator_new(0x140);
    if (this_02 !=
        (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
         *)0x0) {
      TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
      ::
      TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
                (this_02,(FOscillatorOperatorConstructParams *)local_108);
      ppuVar7 = &
                ___7__FSquareOperator_U__TGenerateBlock_UFSquareGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound___Metasound__6B_
      ;
LAB_14b17751c:
      this_02->_padding_ = (longlong)ppuVar7;
      this_02[1]._padding_ = (longlong)&___7__TDataReference_M_Metasound__6B_;
      this_02[1].Generator.Phase = (float)local_178._8_4_;
      this_02[1].Generator.Osc = (FSquareGenerator)local_178[0xc];
      this_02[1].Generator.Wrap = (FWrapPhase)local_178[0xd];
      *(undefined2 *)&this_02[1].Generator.field_0x6 = local_178._14_2_;
      *(undefined8 *)&this_02[1].Generator.CurrentFreq = local_178._16_8_;
      if ((TReferenceControllerBase<0> *)local_178._16_8_ != (TReferenceControllerBase<0> *)0x0) {
        ((TReferenceControllerBase<0> *)local_178._16_8_)->SharedReferenceCount =
             ((TReferenceControllerBase<0> *)local_178._16_8_)->SharedReferenceCount + 1;
      }
      this_02[1]._padding_ = (longlong)&___7__TDataReadReference_M_Metasound__6B_;
      *(undefined ***)&this_02[1].Enabled =
           &
           ___7__TDataReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
      ;
      *(undefined8 *)&this_02[1].Enabled.field_0x8 = local_198._8_8_;
      *(TReferenceControllerBase<0> **)&this_02[1].Enabled.field_0x10 = local_188;
      if (local_188 != (TReferenceControllerBase<0> *)0x0) {
        local_188->SharedReferenceCount = local_188->SharedReferenceCount + 1;
      }
      *(undefined ***)&this_02[1].Enabled =
           &
           ___7__TDataReadReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
      ;
      pTVar8 = local_188;
      goto LAB_14b17758d;
    }
  }
  this_02 = (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
             *)0x0;
  pTVar8 = local_188;
LAB_14b17758d:
  param_1->Node = (INode *)this_02;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_178._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_80._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_e0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_108._24_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b177600

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::FTriangleOscilatorNode::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  FInputBinding *pFVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  INode *pIVar6;
  FName local_res18;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  undefined1 local_128 [16];
  INode local_118;
  undefined1 local_108 [40];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [40];
  undefined1 local_38 [16];
  INode local_28;
  
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriangleOscilatorVertexNames::TriangeTypePinName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
                     local_128,&local_res18,pFVar1);
  local_108._0_8_ = pFVar1;
  FLazyName::Resolve(&OscillatorCommonVertexNames::EnabledPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this_00,(TDataReadReference<bool> *)(local_108 + 8),&local_168,pFVar1);
  FLazyName::Resolve(&OscillatorCommonVertexNames::OscBaseFrequencyPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_e0,&local_160,pFVar1);
  FLazyName::Resolve(&OscillatorCommonVertexNames::PhaseOffsetPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_c0,&local_158,pFVar1);
  FLazyName::Resolve(&OscillatorCommonVertexNames::OscPhaseResetPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this_00,(TDataReadReference<Metasound::FTrigger> *)local_a0,&local_150,pFVar1);
  FLazyName::Resolve(&OscillatorCommonVertexNames::GlideFactorPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_80,&local_148,pFVar1);
  FLazyName::Resolve(&OscillatorCommonVertexNames::BiPolarPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this_00,(TDataReadReference<bool> *)local_60,&local_140,pFVar1);
  FLazyName::Resolve(&OscillatorCommonVertexNames::FrequencyModPinName);
  bVar3 = FInputVertexInterfaceData::IsVertexBound(this_00,&local_138);
  if (bVar3) {
    FLazyName::Resolve(&OscillatorCommonVertexNames::FrequencyModPinName);
    pFVar4 = FInputVertexInterfaceData::FindChecked(this_00,&local_130);
    if ((pFVar4->Data).bIsSet == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0x10e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
    if ((pFVar4->Data).bIsSet == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
              (&(pFVar4->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_38);
    pIVar6 = ::operator_new(0x140);
    if (pIVar6 == (INode *)0x0) {
      pIVar6 = (INode *)0x0;
    }
    else {
      TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
      ::
      TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
                (pIVar6,(FOscillatorOperatorConstructParams *)local_108);
      *pIVar6 = (INode)&
                       ___7__TOscillatorOperatorFM_U__TGenerateBlockFM_UFTriangleGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___3__Metasound__6B_
      ;
      pIVar6[0x20] = (INode)&___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
      pIVar6[0x21] = (INode)local_38._8_8_;
      pIVar6[0x22] = local_28;
      if (local_28 != (INode)0x0) {
        *(int *)((longlong)local_28 + 8) = *(int *)((longlong)local_28 + 8) + 1;
      }
      pIVar6[0x20] = (INode)&___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
      pIVar6[0x24] = (INode)&
                            ___7__TDataReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
      ;
      pIVar6[0x25] = (INode)local_128._8_8_;
      pIVar6[0x26] = local_118;
      if (local_118 != (INode)0x0) {
        *(int *)((longlong)local_118 + 8) = *(int *)((longlong)local_118 + 8) + 1;
      }
      pIVar6[0x24] = (INode)&
                            ___7__TDataReadReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
      ;
    }
    param_1->Node = pIVar6;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_60._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_80._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_a0._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_c0._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_e0._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_108._24_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_118);
  }
  else {
    pIVar6 = ::operator_new(0x120);
    if (pIVar6 == (INode *)0x0) {
      pIVar6 = (INode *)0x0;
    }
    else {
      TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
      ::
      TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
                (pIVar6,(FOscillatorOperatorConstructParams *)local_108);
      *pIVar6 = (INode)&
                       ___7__TOscillatorOperator_U__TGenerateBlock_UFTriangleGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___3__Metasound__6B_
      ;
      pIVar6[0x20] = (INode)&
                            ___7__TDataReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
      ;
      pIVar6[0x21] = (INode)local_128._8_8_;
      pIVar6[0x22] = local_118;
      if (local_118 != (INode)0x0) {
        *(int *)((longlong)local_118 + 8) = *(int *)((longlong)local_118 + 8) + 1;
      }
      pIVar6[0x20] = (INode)&
                            ___7__TDataReadReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
      ;
    }
    param_1->Node = pIVar6;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_60._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_80._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_a0._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_c0._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_e0._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_108._24_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_118);
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)param_1;
}

// GetNodeInfo @ 14b197990

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FSawOscilatorNode::FFactory::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSawOscilatorNode::FFactory::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSawOscilatorNode::FFactory::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSawOscilatorNode::FFactory::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FSawOscilatorNode::FFactory::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSawOscilatorNode::FFactory::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::FSawOscilatorNode::FFactory::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSawOscilatorNode::FFactory::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSawOscilatorNode::FFactory::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSawOscilatorNode::FFactory::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b197a20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FSineOscilatorNode::FFactory::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSineOscilatorNode::FFactory::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSineOscilatorNode::FFactory::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSineOscilatorNode::FFactory::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FSineOscilatorNode::FFactory::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSineOscilatorNode::FFactory::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::FSineOscilatorNode::FFactory::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSineOscilatorNode::FFactory::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSineOscilatorNode::FFactory::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSineOscilatorNode::FFactory::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b197ab0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FSquareOscilatorNode::FFactory::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSquareOscilatorNode::FFactory::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSquareOscilatorNode::FFactory::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSquareOscilatorNode::FFactory::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FSquareOscilatorNode::FFactory::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSquareOscilatorNode::FFactory::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::FSquareOscilatorNode::FFactory::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSquareOscilatorNode::FFactory::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSquareOscilatorNode::FFactory::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSquareOscilatorNode::FFactory::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b197b40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FTriangleOscilatorNode::FFactory::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FTriangleOscilatorNode::FFactory::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FTriangleOscilatorNode::FFactory::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FTriangleOscilatorNode::FFactory::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FTriangleOscilatorNode::FFactory::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FTriangleOscilatorNode::FFactory::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::FTriangleOscilatorNode::FFactory::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FTriangleOscilatorNode::FFactory::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FTriangleOscilatorNode::FFactory::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FTriangleOscilatorNode::FFactory::GetNodeInfo(void)'
          ::__l2::Info;
}

// CreateOperator @ 14b1b7440

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::FFactory::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
             TVariableOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1ba3c0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::FFactory::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
             TVariableOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// ~FFactory @ 14b1cfe10

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::FFactory::~FFactory
          (void *this)

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

// ~FFactory @ 14b1cfe70

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::FFactory::~FFactory
          (void *this)

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

// CreateOperator @ 14b1fb780

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::FFactory::CreateOperator
          (void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
             TVariableOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b204690

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::FFactory::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
             TVariableOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b20dc90

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::FFactory::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  TVariableOperator<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar2;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 != (void *)0x0) {
    pTVar2 = MetasoundVariableNodesPrivate::
             TVariableOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
             TVariableOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                       (this_00,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pTVar2;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// ~FFactory @ 14b2378d0

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::FFactory::
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

// ~FFactory @ 14b237930

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::FFactory::
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

// ~FFactory @ 14b237990

void __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::FFactory::~FFactory
          (void *this)

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

