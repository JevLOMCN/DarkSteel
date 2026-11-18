// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 124

// operator-> @ 147342d70

IParameterTransmitter * __thiscall
TSharedPtr<Audio::IParameterTransmitter,1>::operator->
          (TSharedPtr<Audio::IParameterTransmitter,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IParameterTransmitter *pIVar3;
  
  if (this->Object != (IParameterTransmitter *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IParameterTransmitter *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// TSharedPtr<FNavigationQueryFilter,1><FNavigationQueryFilter> @ 147366b30

TSharedPtr<FNavigationQueryFilter,1> * __thiscall
TSharedPtr<FNavigationQueryFilter,1>::TSharedPtr<FNavigationQueryFilter,1><FNavigationQueryFilter>
          (TSharedPtr<FNavigationQueryFilter,1> *this,TRawPtrProxy<FNavigationQueryFilter> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FNavigationQueryFilter *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFNavigationQueryFilter__U__DefaultDeleter_UFNavigationQueryFilter___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FNavigationQueryFilter *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar6 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// operator=<INavigationQueryFilterInterface> @ 147366c10

TSharedPtr<INavigationQueryFilterInterface,1> * __thiscall
TSharedPtr<INavigationQueryFilterInterface,1>::operator=<INavigationQueryFilterInterface>
          (TSharedPtr<INavigationQueryFilterInterface,1> *this,
          TRawPtrProxy<INavigationQueryFilterInterface> *param_1)

{
  INavigationQueryFilterInterface *pIVar1;
  TSharedPtr<INavigationQueryFilterInterface,1> local_18;
  
  pIVar1 = param_1->Object;
  local_18.Object = pIVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VINavigationQueryFilterInterface__U__DefaultDeleter_VINavigationQueryFilterInterface___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pIVar1;
  }
  if (this != &local_18) {
    this->Object = pIVar1;
    local_18.Object = (INavigationQueryFilterInterface *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator= @ 147437620

TSharedPtr<FBoneContainer,1> * __thiscall
TSharedPtr<FBoneContainer,1>::operator=
          (TSharedPtr<FBoneContainer,1> *this,TSharedPtr<FBoneContainer,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  if (this == param_1) {
    return this;
  }
  this->Object = param_1->Object;
  param_1->Object = (FBoneContainer *)0x0;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar4 = (this->SharedReferenceCount).ReferenceController;
  if (pTVar3 != pTVar4) {
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (this->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->SharedReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)pTVar4->_padding_)(pTVar4);
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      return this;
    }
  }
  return this;
}

// operator-> @ 14743a760

FBoneContainer * __thiscall
TSharedPtr<FBoneContainer,1>::operator->(TSharedPtr<FBoneContainer,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FBoneContainer *pFVar3;
  
  if (this->Object != (FBoneContainer *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FBoneContainer *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator*<UE::Anim::IGraphMessage> @ 1474a28c0

IGraphMessage * __thiscall
TSharedPtr<UE::Anim::IGraphMessage,1>::operator*<UE::Anim::IGraphMessage>
          (TSharedPtr<UE::Anim::IGraphMessage,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IGraphMessage *pIVar3;
  
  if (this->Object != (IGraphMessage *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IGraphMessage *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// TSharedPtr<FPrimaryAssetTypeData,1><FPrimaryAssetTypeData> @ 14758dc50

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

TSharedPtr<FPrimaryAssetTypeData,1> * __thiscall
TSharedPtr<FPrimaryAssetTypeData,1>::TSharedPtr<FPrimaryAssetTypeData,1><FPrimaryAssetTypeData>
          (TSharedPtr<FPrimaryAssetTypeData,1> *this,TRawPtrProxy<FPrimaryAssetTypeData> *param_1)

{
  FPrimaryAssetTypeData *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFPrimaryAssetTypeData__U__DefaultDeleter_UFPrimaryAssetTypeData___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator-> @ 1475abfe0

FDebugInfo * __thiscall
TSharedPtr<FSoundSource::FDebugInfo,1>::operator->(TSharedPtr<FSoundSource::FDebugInfo,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FDebugInfo *pFVar3;
  
  if (this->Object != (FDebugInfo *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDebugInfo *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1475ac030

FStreamableHandle * __thiscall
TSharedPtr<FStreamableHandle,1>::operator->(TSharedPtr<FStreamableHandle,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FStreamableHandle *pFVar3;
  
  if (this->Object != (FStreamableHandle *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FStreamableHandle *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 147622050

FSoundWaveData * __thiscall
TSharedPtr<FSoundWaveData,1>::operator->(TSharedPtr<FSoundWaveData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FSoundWaveData *pFVar3;
  
  if (this->Object != (FSoundWaveData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSoundWaveData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator= @ 14768ac10

TSharedPtr<FSkelMeshRefPoseOverride,1> * __thiscall
TSharedPtr<FSkelMeshRefPoseOverride,1>::operator=
          (TSharedPtr<FSkelMeshRefPoseOverride,1> *this,
          TSharedPtr<FSkelMeshRefPoseOverride,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  if (this == param_1) {
    return this;
  }
  this->Object = param_1->Object;
  param_1->Object = (FSkelMeshRefPoseOverride *)0x0;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar4 = (this->SharedReferenceCount).ReferenceController;
  if (pTVar3 != pTVar4) {
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (this->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->SharedReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)pTVar4->_padding_)(pTVar4);
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      return this;
    }
  }
  return this;
}

// TSharedPtr<FName,1><FName> @ 1476db7f0

TSharedPtr<FName,1> * __thiscall
TSharedPtr<FName,1>::TSharedPtr<FName,1><FName>
          (TSharedPtr<FName,1> *this,TRawPtrProxy<FName> *param_1)

{
  FName *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFName__U__DefaultDeleter_VFName___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator=<FFineGrainedPerformanceTracker> @ 1476db8f0

TSharedPtr<FFineGrainedPerformanceTracker,1> * __thiscall
TSharedPtr<FFineGrainedPerformanceTracker,1>::operator=<FFineGrainedPerformanceTracker>
          (TSharedPtr<FFineGrainedPerformanceTracker,1> *this,
          TRawPtrProxy<FFineGrainedPerformanceTracker> *param_1)

{
  FFineGrainedPerformanceTracker *pFVar1;
  TSharedPtr<FFineGrainedPerformanceTracker,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFFineGrainedPerformanceTracker__U__DefaultDeleter_VFFineGrainedPerformanceTracker___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FFineGrainedPerformanceTracker *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FPerformanceTrackingChart> @ 1476db980

TSharedPtr<FPerformanceTrackingChart,1> * __thiscall
TSharedPtr<FPerformanceTrackingChart,1>::operator=<FPerformanceTrackingChart>
          (TSharedPtr<FPerformanceTrackingChart,1> *this,
          TRawPtrProxy<FPerformanceTrackingChart> *param_1)

{
  FPerformanceTrackingChart *pFVar1;
  TSharedPtr<FPerformanceTrackingChart,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFPerformanceTrackingChart__U__DefaultDeleter_VFPerformanceTrackingChart___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FPerformanceTrackingChart *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator= @ 1477f51a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FSavedMove_Character,1> * __thiscall
TSharedPtr<FSavedMove_Character,1>::operator=
          (TSharedPtr<FSavedMove_Character,1> *this,FNullTag *param_1)

{
  TSharedPtr<FSavedMove_Character,1> local_18;
  
  local_18.Object = (FSavedMove_Character *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != &local_18) {
    this->Object = (FSavedMove_Character *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator-> @ 1477f5ab0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FCharacterMovementComponentAsyncOutput * __thiscall
TSharedPtr<FCharacterMovementComponentAsyncOutput,1>::operator->
          (TSharedPtr<FCharacterMovementComponentAsyncOutput,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FCharacterMovementComponentAsyncOutput *pFVar3;
  
  if (this->Object != (FCharacterMovementComponentAsyncOutput *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FCharacterMovementComponentAsyncOutput *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1477f5b00

FRootMotionSource * __thiscall
TSharedPtr<FRootMotionSource,1>::operator->(TSharedPtr<FRootMotionSource,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FRootMotionSource *pFVar3;
  
  if (this->Object != (FRootMotionSource *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRootMotionSource *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1477f5b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSavedMove_Character * __thiscall
TSharedPtr<FSavedMove_Character,1>::operator->(TSharedPtr<FSavedMove_Character,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FSavedMove_Character *pFVar3;
  
  if (this->Object != (FSavedMove_Character *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSavedMove_Character *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// TSharedPtr<FTextRenderComponentCultureChangedFixUp::FImpl,1><FTextRenderComponentCultureChangedFixUp::FImpl> @ 147996910

TSharedPtr<FTextRenderComponentCultureChangedFixUp::FImpl,1> * __thiscall
TSharedPtr<FTextRenderComponentCultureChangedFixUp::FImpl,1>::
TSharedPtr<FTextRenderComponentCultureChangedFixUp::FImpl,1><FTextRenderComponentCultureChangedFixUp::FImpl>
          (TSharedPtr<FTextRenderComponentCultureChangedFixUp::FImpl,1> *this,
          TRawPtrProxy<FTextRenderComponentCultureChangedFixUp::FImpl> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FImpl *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFImpl_FTextRenderComponentCultureChangedFixUp__U__DefaultDeleter_UFImpl_FTextRenderComponentCultureChangedFixUp___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FImpl *)0x0) &&
     (((puVar1 = &pFVar4->field_0x8, *(longlong *)pFVar4 == 0 || (*(longlong *)puVar1 == 0)) ||
      (*(int *)(*(longlong *)puVar1 + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FImpl **)pFVar4 = pFVar4;
    if (pTVar6 != *(TReferenceControllerBase<1> **)puVar1) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)puVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)puVar1 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1><FTextRenderComponentMIDCache::FMIDData> @ 1479969f0

TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1> * __thiscall
TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>::
TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1><FTextRenderComponentMIDCache::FMIDData>
          (TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1> *this,
          TRawPtrProxy<FTextRenderComponentMIDCache::FMIDData> *param_1)

{
  FMIDData *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFMIDData_FTextRenderComponentMIDCache__U__DefaultDeleter_UFMIDData_FTextRenderComponentMIDCache___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator-> @ 1479ab060

FMIDData * __thiscall
TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>::operator->
          (TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMIDData *pFVar3;
  
  if (this->Object != (FMIDData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMIDData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// ToSharedRef @ 1479eecd0

TSharedRef<FTextRenderComponentMIDCache::FMIDData_const_,1> * __thiscall
TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>::ToSharedRef
          (TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1> *this,
          TSharedRef<FTextRenderComponentMIDCache::FMIDData_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FTextRenderComponentMIDCache::FMIDData_const_,1> *pTVar4;
  
  if (this->Object == (FMIDData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FTextRenderComponentMIDCache::FMIDData_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FMIDData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FTextRenderComponentMIDCache::FMIDData_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// operator*<FLegacySpline> @ 147a11a70

FLegacySpline * __thiscall
TSharedPtr<FLegacySpline,1>::operator*<FLegacySpline>(TSharedPtr<FLegacySpline,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FLegacySpline *pFVar3;
  
  if (this->Object != (FLegacySpline *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FLegacySpline *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator*<FNewSpline> @ 147a11ac0

FNewSpline * __thiscall
TSharedPtr<FNewSpline,1>::operator*<FNewSpline>(TSharedPtr<FNewSpline,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNewSpline *pFVar3;
  
  if (this->Object != (FNewSpline *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNewSpline *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator*<FRepLayout> @ 147a11b10

FRepLayout * __thiscall
TSharedPtr<FRepLayout,1>::operator*<FRepLayout>(TSharedPtr<FRepLayout,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FRepLayout *pFVar3;
  
  if (this->Object != (FRepLayout *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRepLayout *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator= @ 147a2adb0

TSharedPtr<FReplicationChangelistMgr,1> * __thiscall
TSharedPtr<FReplicationChangelistMgr,1>::operator=
          (TSharedPtr<FReplicationChangelistMgr,1> *this,
          TSharedPtr<FReplicationChangelistMgr,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FReplicationChangelistMgr *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 147a2cc50

FClassNetCacheMgr * __thiscall
TSharedPtr<FClassNetCacheMgr,1>::operator->(TSharedPtr<FClassNetCacheMgr,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FClassNetCacheMgr *pFVar3;
  
  if (this->Object != (FClassNetCacheMgr *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FClassNetCacheMgr *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 147a2cca0

FLegacySpline * __thiscall
TSharedPtr<FLegacySpline,1>::operator->(TSharedPtr<FLegacySpline,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FLegacySpline *pFVar3;
  
  if (this->Object != (FLegacySpline *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FLegacySpline *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 147a2ccf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetGUIDCache * __thiscall
TSharedPtr<FNetGUIDCache,1>::operator->(TSharedPtr<FNetGUIDCache,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNetGUIDCache *pFVar3;
  
  if (this->Object != (FNetGUIDCache *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNetGUIDCache *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 147a2cd40

FNewSpline * __thiscall TSharedPtr<FNewSpline,1>::operator->(TSharedPtr<FNewSpline,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNewSpline *pFVar3;
  
  if (this->Object != (FNewSpline *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNewSpline *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 147a2cd90

FRepLayout * __thiscall TSharedPtr<FRepLayout,1>::operator->(TSharedPtr<FRepLayout,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FRepLayout *pFVar3;
  
  if (this->Object != (FRepLayout *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRepLayout *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 147a2cde0

FReplicationChangelistMgr * __thiscall
TSharedPtr<FReplicationChangelistMgr,1>::operator->(TSharedPtr<FReplicationChangelistMgr,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FReplicationChangelistMgr *pFVar3;
  
  if (this->Object != (FReplicationChangelistMgr *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FReplicationChangelistMgr *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// TSharedPtr<FInternetAddr,1><FInternetAddrDemo> @ 147aaa0a0

TSharedPtr<FInternetAddr,1> * __thiscall
TSharedPtr<FInternetAddr,1>::TSharedPtr<FInternetAddr,1><FInternetAddrDemo>
          (TSharedPtr<FInternetAddr,1> *this,TRawPtrProxy<FInternetAddrDemo> *param_1)

{
  FInternetAddrDemo *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (FInternetAddr *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFInternetAddrDemo__U__DefaultDeleter_VFInternetAddrDemo___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FObjectReplicator,1><FObjectReplicator> @ 147aaa110

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<FObjectReplicator,1> * __thiscall
TSharedPtr<FObjectReplicator,1>::TSharedPtr<FObjectReplicator,1><FObjectReplicator>
          (TSharedPtr<FObjectReplicator,1> *this,TRawPtrProxy<FObjectReplicator> *param_1)

{
  FObjectReplicator *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFObjectReplicator__U__DefaultDeleter_VFObjectReplicator___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator-> @ 147ac0d00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FObjectReplicator * __thiscall
TSharedPtr<FObjectReplicator,1>::operator->(TSharedPtr<FObjectReplicator,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FObjectReplicator *pFVar3;
  
  if (this->Object != (FObjectReplicator *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FObjectReplicator *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 147ac0d50

INetworkReplayStreamer * __thiscall
TSharedPtr<INetworkReplayStreamer,1>::operator->(TSharedPtr<INetworkReplayStreamer,1> *this)

{
  code *pcVar1;
  bool bVar2;
  INetworkReplayStreamer *pIVar3;
  
  if (this->Object != (INetworkReplayStreamer *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (INetworkReplayStreamer *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// ToSharedRef @ 147b1ce50

TSharedRef<FJsonValue,1> * __thiscall
TSharedPtr<FJsonValue,1>::ToSharedRef
          (TSharedPtr<FJsonValue,1> *this,TSharedRef<FJsonValue,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FJsonValue,1> *pTVar4;
  
  if (this->Object == (FJsonValue *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FJsonValue,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FJsonValue *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FJsonValue,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FEngineServiceAuthDeny,FEngineService>_> @ 147b2ca60

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FEngineServiceAuthDeny,FEngineService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FEngineServiceAuthDeny,FEngineService>_> *param_1)

{
  TRawMessageHandler<FEngineServiceAuthDeny,FEngineService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFEngineServiceAuthDeny__VFEngineService____U__DefaultDeleter_V__TRawMessageHandler_UFEngineServiceAuthDeny__VFEngineService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FEngineServiceAuthGrant,FEngineService>_> @ 147b2cad0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FEngineServiceAuthGrant,FEngineService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FEngineServiceAuthGrant,FEngineService>_> *param_1)

{
  TRawMessageHandler<FEngineServiceAuthGrant,FEngineService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFEngineServiceAuthGrant__VFEngineService____U__DefaultDeleter_V__TRawMessageHandler_UFEngineServiceAuthGrant__VFEngineService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService>_> @ 147b2cb40

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService>_> *param_1)

{
  TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFEngineServiceExecuteCommand__VFEngineService____U__DefaultDeleter_V__TRawMessageHandler_UFEngineServiceExecuteCommand__VFEngineService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FEngineServicePing,FEngineService>_> @ 147b2cbb0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FEngineServicePing,FEngineService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FEngineServicePing,FEngineService>_> *param_1)

{
  TRawMessageHandler<FEngineServicePing,FEngineService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFEngineServicePing__VFEngineService____U__DefaultDeleter_V__TRawMessageHandler_UFEngineServicePing__VFEngineService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FEngineServiceTerminate,FEngineService>_> @ 147b2cc20

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FEngineServiceTerminate,FEngineService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FEngineServiceTerminate,FEngineService>_> *param_1)

{
  TRawMessageHandler<FEngineServiceTerminate,FEngineService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFEngineServiceTerminate__VFEngineService____U__DefaultDeleter_V__TRawMessageHandler_UFEngineServiceTerminate__VFEngineService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IDynamicResolutionState,1><FDefaultDynamicResolutionState> @ 147b2cc90

TSharedPtr<IDynamicResolutionState,1> * __thiscall
TSharedPtr<IDynamicResolutionState,1>::
TSharedPtr<IDynamicResolutionState,1><FDefaultDynamicResolutionState>
          (TSharedPtr<IDynamicResolutionState,1> *this,
          TRawPtrProxy<FDefaultDynamicResolutionState> *param_1)

{
  FDefaultDynamicResolutionState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IDynamicResolutionState *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFDefaultDynamicResolutionState__U__DefaultDeleter_VFDefaultDynamicResolutionState___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator-> @ 147b3e6c0

TTypedElementList<FTypedElementHandle> * __thiscall
TSharedPtr<TTypedElementList<FTypedElementHandle>_const_,1>::operator->
          (TSharedPtr<TTypedElementList<FTypedElementHandle>_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TTypedElementList<FTypedElementHandle> *pTVar3;
  
  if (this->Object != (TTypedElementList<FTypedElementHandle> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TTypedElementList<FTypedElementHandle> *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

// ToSharedRef @ 147b8f420

TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> * __thiscall
TSharedPtr<TTypedElementList<FTypedElementHandle>_const_,1>::ToSharedRef
          (TSharedPtr<TTypedElementList<FTypedElementHandle>_const_,1> *this,
          TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *pTVar4;
  
  if (this->Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// TSharedPtr<IAutomationLatentCommand,1><FPlayAmplitudeFrequencyHapticLatentCommand> @ 147baae00

TSharedPtr<IAutomationLatentCommand,1> * __thiscall
TSharedPtr<IAutomationLatentCommand,1>::
TSharedPtr<IAutomationLatentCommand,1><FPlayAmplitudeFrequencyHapticLatentCommand>
          (TSharedPtr<IAutomationLatentCommand,1> *this,
          TRawPtrProxy<FPlayAmplitudeFrequencyHapticLatentCommand> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FPlayAmplitudeFrequencyHapticLatentCommand *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->Object = (IAutomationLatentCommand *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFPlayAmplitudeFrequencyHapticLatentCommand__U__DefaultDeleter_VFPlayAmplitudeFrequencyHapticLatentCommand___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FPlayAmplitudeFrequencyHapticLatentCommand *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar6 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedPtr<FSceneViewExtensions,1><FSceneViewExtensions> @ 147baaee0

TSharedPtr<FSceneViewExtensions,1> * __thiscall
TSharedPtr<FSceneViewExtensions,1>::TSharedPtr<FSceneViewExtensions,1><FSceneViewExtensions>
          (TSharedPtr<FSceneViewExtensions,1> *this,FSceneViewExtensions *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1;
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSceneViewExtensions__U__DefaultDeleter_VFSceneViewExtensions___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1[1]._padding_ = (longlong)param_1;
    (this->SharedReferenceCount).ReferenceController = pTVar1;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IAutomationLatentCommand,1><FWaitLatentCommand> @ 147baaf50

TSharedPtr<IAutomationLatentCommand,1> * __thiscall
TSharedPtr<IAutomationLatentCommand,1>::TSharedPtr<IAutomationLatentCommand,1><FWaitLatentCommand>
          (TSharedPtr<IAutomationLatentCommand,1> *this,TRawPtrProxy<FWaitLatentCommand> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FWaitLatentCommand *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->Object = (IAutomationLatentCommand *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFWaitLatentCommand__U__DefaultDeleter_VFWaitLatentCommand___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FWaitLatentCommand *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar6 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// operator*<FUniqueNetId_const_> @ 147bab730

FUniqueNetId * __thiscall
TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>
          (TSharedPtr<FUniqueNetId_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FUniqueNetId *pFVar3;
  
  if (this->Object != (FUniqueNetId *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FUniqueNetId *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator*<FRootMotionSource> @ 147bab780

FRootMotionSource * __thiscall
TSharedPtr<FRootMotionSource,1>::operator*<FRootMotionSource>(TSharedPtr<FRootMotionSource,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FRootMotionSource *pFVar3;
  
  if (this->Object != (FRootMotionSource *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRootMotionSource *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// ToSharedRef @ 147c07da0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SViewport,1> * __thiscall
TSharedPtr<SViewport,1>::ToSharedRef
          (TSharedPtr<SViewport,1> *this,TSharedRef<SViewport,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SViewport,1> *pTVar4;
  
  if (this->Object == (SViewport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SViewport,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (SViewport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SViewport,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// operator-> @ 147c32ac0

IStereoRendering * __thiscall
TSharedPtr<IStereoRendering,1>::operator->(TSharedPtr<IStereoRendering,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IStereoRendering *pIVar3;
  
  if (this->Object != (IStereoRendering *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IStereoRendering *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 147c32b10

IXRTrackingSystem * __thiscall
TSharedPtr<IXRTrackingSystem,1>::operator->(TSharedPtr<IXRTrackingSystem,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IXRTrackingSystem *pIVar3;
  
  if (this->Object != (IXRTrackingSystem *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IXRTrackingSystem *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// TSharedPtr<TArray<FClusterNode,TSizedDefaultAllocator<32>_>,1><TArray<FClusterNode,TSizedDefaultAllocator<32>_>_> @ 147cae9a0

TSharedPtr<TArray<FClusterNode,TSizedDefaultAllocator<32>_>,1> * __thiscall
TSharedPtr<TArray<FClusterNode,TSizedDefaultAllocator<32>_>,1>::
TSharedPtr<TArray<FClusterNode,TSizedDefaultAllocator<32>_>,1><TArray<FClusterNode,TSizedDefaultAllocator<32>_>_>
          (TSharedPtr<TArray<FClusterNode,TSizedDefaultAllocator<32>_>,1> *this,
          TRawPtrProxy<TArray<FClusterNode,TSizedDefaultAllocator<32>_>_> *param_1)

{
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TArray_UFClusterNode__V__TSizedDefaultAllocator__0CA_____U__DefaultDeleter_V__TArray_UFClusterNode__V__TSizedDefaultAllocator__0CA______SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator-> @ 147d7ddc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FISMCInstanceDataSceneProxy * __thiscall
TSharedPtr<FISMCInstanceDataSceneProxy,1>::operator->
          (TSharedPtr<FISMCInstanceDataSceneProxy,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FISMCInstanceDataSceneProxy *pFVar3;
  
  if (this->Object != (FISMCInstanceDataSceneProxy *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FISMCInstanceDataSceneProxy *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// ToSharedRef @ 147dc5250

TSharedRef<FStringTable,1> * __thiscall
TSharedPtr<FStringTable,1>::ToSharedRef
          (TSharedPtr<FStringTable,1> *this,TSharedRef<FStringTable,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FStringTable,1> *pTVar4;
  
  if (this->Object == (FStringTable *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FStringTable,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FStringTable *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FStringTable,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// operator=<FLatentActionManager::FObjectActions> @ 147e45070

TSharedPtr<FLatentActionManager::FObjectActions,1> * __thiscall
TSharedPtr<FLatentActionManager::FObjectActions,1>::operator=<FLatentActionManager::FObjectActions>
          (TSharedPtr<FLatentActionManager::FObjectActions,1> *this,
          TRawPtrProxy<FLatentActionManager::FObjectActions> *param_1)

{
  FObjectActions *pFVar1;
  TSharedPtr<FLatentActionManager::FObjectActions,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFObjectActions_FLatentActionManager__U__DefaultDeleter_UFObjectActions_FLatentActionManager___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FObjectActions *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>_> @ 147e45100

TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1> * __thiscall
TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1>::
operator=<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>_>
          (TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1>
           *this,TRawPtrProxy<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_> *pTVar1;
  TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1> local_18;
  
  pTVar1 = param_1->Object;
  local_18.Object = pTVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TArray_U__TTuple_HPEAVFPendingLatentAction____V__TSizedDefaultAllocator__0CA_____U__DefaultDeleter_V__TArray_U__TTuple_HPEAVFPendingLatentAction____V__TSizedDefaultAllocator__0CA______SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pTVar1;
  }
  if (this != &local_18) {
    this->Object = pTVar1;
    local_18.Object = (TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator-> @ 147eaa590

FSceneViewExtensions * __thiscall
TSharedPtr<FSceneViewExtensions,1>::operator->(TSharedPtr<FSceneViewExtensions,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FSceneViewExtensions *pFVar3;
  
  if (this->Object != (FSceneViewExtensions *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSceneViewExtensions *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 147f6aaf0

FMaterialLayerStackFunctionsCache * __thiscall
TSharedPtr<FMaterialLayerStackFunctionsCache,1>::operator->
          (TSharedPtr<FMaterialLayerStackFunctionsCache,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMaterialLayerStackFunctionsCache *pFVar3;
  
  if (this->Object != (FMaterialLayerStackFunctionsCache *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMaterialLayerStackFunctionsCache *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// TSharedPtr<FNetworkObjectList,1><FNetworkObjectList> @ 148008e70

TSharedPtr<FNetworkObjectList,1> * __thiscall
TSharedPtr<FNetworkObjectList,1>::TSharedPtr<FNetworkObjectList,1><FNetworkObjectList>
          (TSharedPtr<FNetworkObjectList,1> *this,FNetworkObjectList *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1;
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFNetworkObjectList__U__DefaultDeleter_VFNetworkObjectList___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1[1]._padding_ = (longlong)param_1;
    (this->SharedReferenceCount).ReferenceController = pTVar1;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator=<FNetAnalyticsAggregator> @ 148008fb0

TSharedPtr<FNetAnalyticsAggregator,1> * __thiscall
TSharedPtr<FNetAnalyticsAggregator,1>::operator=<FNetAnalyticsAggregator>
          (TSharedPtr<FNetAnalyticsAggregator,1> *this,
          TRawPtrProxy<FNetAnalyticsAggregator> *param_1)

{
  FNetAnalyticsAggregator *pFVar1;
  TSharedPtr<FNetAnalyticsAggregator,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFNetAnalyticsAggregator__U__DefaultDeleter_VFNetAnalyticsAggregator___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FNetAnalyticsAggregator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// TSharedPtr<HandlerComponent,1><StatelessConnectHandlerComponent> @ 148077790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

TSharedPtr<HandlerComponent,1> * __thiscall
TSharedPtr<HandlerComponent,1>::TSharedPtr<HandlerComponent,1><StatelessConnectHandlerComponent>
          (TSharedPtr<HandlerComponent,1> *this,
          TRawPtrProxy<StatelessConnectHandlerComponent> *param_1)

{
  StatelessConnectHandlerComponent *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (HandlerComponent *)param_1->Object;
  pSVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VStatelessConnectHandlerComponent__U__DefaultDeleter_VStatelessConnectHandlerComponent___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pSVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator-> @ 1480908f0

FInternetAddr * __thiscall
TSharedPtr<FInternetAddr_const_,1>::operator->(TSharedPtr<FInternetAddr_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FInternetAddr *pFVar3;
  
  if (this->Object != (FInternetAddr *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInternetAddr *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 148090940

FUniqueNetId * __thiscall
TSharedPtr<FUniqueNetId_const_,1>::operator->(TSharedPtr<FUniqueNetId_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FUniqueNetId *pFVar3;
  
  if (this->Object != (FUniqueNetId *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FUniqueNetId *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 148090990

FRPCAnalytics * __thiscall
TSharedPtr<FRPCAnalytics,1>::operator->(TSharedPtr<FRPCAnalytics,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FRPCAnalytics *pFVar3;
  
  if (this->Object != (FRPCAnalytics *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRPCAnalytics *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1480909e0

FRPCDoSAnalyticsData * __thiscall
TSharedPtr<FRPCDoSAnalyticsData,1>::operator->(TSharedPtr<FRPCDoSAnalyticsData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FRPCDoSAnalyticsData *pFVar3;
  
  if (this->Object != (FRPCDoSAnalyticsData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRPCDoSAnalyticsData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 148090a30

FNetPingICMP * __thiscall
TSharedPtr<UE::Net::Private::FNetPingICMP,1>::operator->
          (TSharedPtr<UE::Net::Private::FNetPingICMP,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNetPingICMP *pFVar3;
  
  if (this->Object != (FNetPingICMP *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNetPingICMP *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 148090a80

FNetPingUDPQoS * __thiscall
TSharedPtr<UE::Net::Private::FNetPingUDPQoS,1>::operator->
          (TSharedPtr<UE::Net::Private::FNetPingUDPQoS,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNetPingUDPQoS *pFVar3;
  
  if (this->Object != (FNetPingUDPQoS *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNetPingUDPQoS *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1481612d0

FParticlePerfStatsListener * __thiscall
TSharedPtr<FParticlePerfStatsListener,1>::operator->(TSharedPtr<FParticlePerfStatsListener,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FParticlePerfStatsListener *pFVar3;
  
  if (this->Object != (FParticlePerfStatsListener *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FParticlePerfStatsListener *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator=<Chaos::FBaseRewindHistory> @ 1482cf900

TSharedPtr<Chaos::FBaseRewindHistory,1> * __thiscall
TSharedPtr<Chaos::FBaseRewindHistory,1>::operator=<Chaos::FBaseRewindHistory>
          (TSharedPtr<Chaos::FBaseRewindHistory,1> *this,
          TRawPtrProxy<Chaos::FBaseRewindHistory> *param_1)

{
  FBaseRewindHistory *pFVar1;
  TSharedPtr<Chaos::FBaseRewindHistory,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFBaseRewindHistory_Chaos__U__DefaultDeleter_UFBaseRewindHistory_Chaos___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FBaseRewindHistory *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator-> @ 1482de8a0

FBaseRewindHistory * __thiscall
TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(TSharedPtr<Chaos::FBaseRewindHistory,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FBaseRewindHistory *pFVar3;
  
  if (this->Object != (FBaseRewindHistory *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FBaseRewindHistory *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator=<FActiveHapticFeedbackEffect> @ 148338f30

TSharedPtr<FActiveHapticFeedbackEffect,1> * __thiscall
TSharedPtr<FActiveHapticFeedbackEffect,1>::operator=<FActiveHapticFeedbackEffect>
          (TSharedPtr<FActiveHapticFeedbackEffect,1> *this,
          TRawPtrProxy<FActiveHapticFeedbackEffect> *param_1)

{
  FActiveHapticFeedbackEffect *pFVar1;
  TSharedPtr<FActiveHapticFeedbackEffect,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFActiveHapticFeedbackEffect__U__DefaultDeleter_UFActiveHapticFeedbackEffect___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FActiveHapticFeedbackEffect *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator= @ 14834e240

TSharedPtr<SVirtualJoystick,1> * __thiscall
TSharedPtr<SVirtualJoystick,1>::operator=
          (TSharedPtr<SVirtualJoystick,1> *this,TSharedPtr<SVirtualJoystick,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (SVirtualJoystick *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// ToSharedRef @ 1483b1b30

TSharedRef<FUniqueNetId_const_,1> * __thiscall
TSharedPtr<FUniqueNetId_const_,1>::ToSharedRef
          (TSharedPtr<FUniqueNetId_const_,1> *this,
          TSharedRef<FUniqueNetId_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FUniqueNetId_const_,1> *pTVar4;
  
  if (this->Object == (FUniqueNetId *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FUniqueNetId_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FUniqueNetId *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FUniqueNetId_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 1483b1bd0

TSharedRef<SVirtualJoystick,1> * __thiscall
TSharedPtr<SVirtualJoystick,1>::ToSharedRef
          (TSharedPtr<SVirtualJoystick,1> *this,
          TSharedRef<SVirtualJoystick,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SVirtualJoystick,1> *pTVar4;
  
  if (this->Object == (SVirtualJoystick *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SVirtualJoystick,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (SVirtualJoystick *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SVirtualJoystick,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// operator-> @ 148449be0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetworkObjectInfo * __thiscall
TSharedPtr<FNetworkObjectInfo,1>::operator->(TSharedPtr<FNetworkObjectInfo,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNetworkObjectInfo *pFVar3;
  
  if (this->Object != (FNetworkObjectInfo *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNetworkObjectInfo *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// TSharedPtr<FRepLayout,1><FRepLayout> @ 1484a6060

TSharedPtr<FRepLayout,1> * __thiscall
TSharedPtr<FRepLayout,1>::TSharedPtr<FRepLayout,1><FRepLayout>
          (TSharedPtr<FRepLayout,1> *this,TRawPtrProxy<FRepLayout> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FRepLayout *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFRepLayout__U__DefaultDeleter_VFRepLayout___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FRepLayout *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar6 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedPtr<FReplicationChangelistMgr,1><FReplicationChangelistMgr> @ 1484a6140

TSharedPtr<FReplicationChangelistMgr,1> * __thiscall
TSharedPtr<FReplicationChangelistMgr,1>::
TSharedPtr<FReplicationChangelistMgr,1><FReplicationChangelistMgr>
          (TSharedPtr<FReplicationChangelistMgr,1> *this,
          TRawPtrProxy<FReplicationChangelistMgr> *param_1)

{
  FReplicationChangelistMgr *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFReplicationChangelistMgr__U__DefaultDeleter_VFReplicationChangelistMgr___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator-> @ 148513d00

FShaderCompileJobStatus * __thiscall
TSharedPtr<FShaderCompileJobStatus,1>::operator->(TSharedPtr<FShaderCompileJobStatus,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FShaderCompileJobStatus *pFVar3;
  
  if (this->Object != (FShaderCompileJobStatus *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FShaderCompileJobStatus *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// TSharedPtr<SGameLayerManager::FPlayerLayer,1><SGameLayerManager::FPlayerLayer> @ 14867d260

TSharedPtr<SGameLayerManager::FPlayerLayer,1> * __thiscall
TSharedPtr<SGameLayerManager::FPlayerLayer,1>::
TSharedPtr<SGameLayerManager::FPlayerLayer,1><SGameLayerManager::FPlayerLayer>
          (TSharedPtr<SGameLayerManager::FPlayerLayer,1> *this,
          TRawPtrProxy<SGameLayerManager::FPlayerLayer> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FPlayerLayer *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFPlayerLayer_SGameLayerManager__U__DefaultDeleter_UFPlayerLayer_SGameLayerManager___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FPlayerLayer *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar6 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedPtr<SWindow,1><SWindow> @ 14867d790

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWindow,1> * __thiscall
TSharedPtr<SWindow,1>::TSharedPtr<SWindow,1><SWindow>
          (TSharedPtr<SWindow,1> *this,TWeakPtr<SWindow,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  this->Object = (SWindow *)0x0;
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((this->SharedReferenceCount).ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    this->Object = param_1->Object;
  }
  return this;
}

// TSharedPtr<SWindow,1> @ 148690c20

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWindow,1> * __thiscall
TSharedPtr<SWindow,1>::TSharedPtr<SWindow,1>
          (TSharedPtr<SWindow,1> *this,TSharedPtr<SWindow,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// operator= @ 14869c940

TSharedPtr<FSoundWaveProxy,1> * __thiscall
TSharedPtr<FSoundWaveProxy,1>::operator=
          (TSharedPtr<FSoundWaveProxy,1> *this,TSharedPtr<FSoundWaveProxy,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FSoundWaveProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 14869d8a0

FSlateTextureData * __thiscall
TSharedPtr<FSlateTextureData,1>::operator->(TSharedPtr<FSlateTextureData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FSlateTextureData *pFVar3;
  
  if (this->Object != (FSlateTextureData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSlateTextureData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14869d8f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

SDebugCanvas * __thiscall TSharedPtr<SDebugCanvas,1>::operator->(TSharedPtr<SDebugCanvas,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SDebugCanvas *pSVar3;
  
  if (this->Object != (SDebugCanvas *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SDebugCanvas *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 14869d940

SPopup * __thiscall TSharedPtr<SPopup,1>::operator->(TSharedPtr<SPopup,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SPopup *pSVar3;
  
  if (this->Object != (SPopup *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SPopup *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 14869d990

STooltipPresenter * __thiscall
TSharedPtr<STooltipPresenter,1>::operator->(TSharedPtr<STooltipPresenter,1> *this)

{
  code *pcVar1;
  bool bVar2;
  STooltipPresenter *pSVar3;
  
  if (this->Object != (STooltipPresenter *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (STooltipPresenter *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 14869d9e0

/* WARNING: Enum "Type": Some values do not have unique names */

SWindowTitleBarArea * __thiscall
TSharedPtr<SWindowTitleBarArea,1>::operator->(TSharedPtr<SWindowTitleBarArea,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SWindowTitleBarArea *pSVar3;
  
  if (this->Object != (SWindowTitleBarArea *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SWindowTitleBarArea *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// ToSharedRef @ 1486f2700

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SViewport,1> * __thiscall
TSharedPtr<SViewport,1>::ToSharedRef
          (TSharedPtr<SViewport,1> *this,TSharedRef<SViewport,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<SViewport,1> *pTVar3;
  
  if (this->Object == (SViewport *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<SViewport,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->Object = (SViewport *)0x0;
  if (__return_storage_ptr__->Object == (SViewport *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<SViewport,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// TSharedPtr<IAutomationLatentCommand,1><AutomationCommon::FAutomationImageComparisonRequest> @ 1487f1940

TSharedPtr<IAutomationLatentCommand,1> * __thiscall
TSharedPtr<IAutomationLatentCommand,1>::
TSharedPtr<IAutomationLatentCommand,1><AutomationCommon::FAutomationImageComparisonRequest>
          (TSharedPtr<IAutomationLatentCommand,1> *this,
          TRawPtrProxy<AutomationCommon::FAutomationImageComparisonRequest> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FAutomationImageComparisonRequest *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->Object = (IAutomationLatentCommand *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFAutomationImageComparisonRequest_AutomationCommon__U__DefaultDeleter_VFAutomationImageComparisonRequest_AutomationCommon___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FAutomationImageComparisonRequest *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar6 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedPtr<IAutomationLatentCommand,1><FEngineWaitLatentCommand> @ 1487f1a20

TSharedPtr<IAutomationLatentCommand,1> * __thiscall
TSharedPtr<IAutomationLatentCommand,1>::
TSharedPtr<IAutomationLatentCommand,1><FEngineWaitLatentCommand>
          (TSharedPtr<IAutomationLatentCommand,1> *this,
          TRawPtrProxy<FEngineWaitLatentCommand> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FEngineWaitLatentCommand *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->Object = (IAutomationLatentCommand *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFEngineWaitLatentCommand__U__DefaultDeleter_VFEngineWaitLatentCommand___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FEngineWaitLatentCommand *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar6 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedPtr<IAutomationLatentCommand,1><FExecStringLatentCommand> @ 1487f1b00

TSharedPtr<IAutomationLatentCommand,1> * __thiscall
TSharedPtr<IAutomationLatentCommand,1>::
TSharedPtr<IAutomationLatentCommand,1><FExecStringLatentCommand>
          (TSharedPtr<IAutomationLatentCommand,1> *this,
          TRawPtrProxy<FExecStringLatentCommand> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FExecStringLatentCommand *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->Object = (IAutomationLatentCommand *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFExecStringLatentCommand__U__DefaultDeleter_VFExecStringLatentCommand___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FExecStringLatentCommand *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar6 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedPtr<IAutomationLatentCommand,1><FWaitForMapToLoadCommand> @ 1487f1be0

TSharedPtr<IAutomationLatentCommand,1> * __thiscall
TSharedPtr<IAutomationLatentCommand,1>::
TSharedPtr<IAutomationLatentCommand,1><FWaitForMapToLoadCommand>
          (TSharedPtr<IAutomationLatentCommand,1> *this,
          TRawPtrProxy<FWaitForMapToLoadCommand> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FWaitForMapToLoadCommand *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->Object = (IAutomationLatentCommand *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFWaitForMapToLoadCommand__U__DefaultDeleter_VFWaitForMapToLoadCommand___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FWaitForMapToLoadCommand *)0x0) &&
     (((puVar1 = &pFVar4->field_0x10, *(longlong *)&pFVar4->field_0x8 == 0 ||
       (*(longlong *)puVar1 == 0)) || (*(int *)(*(longlong *)puVar1 + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FWaitForMapToLoadCommand **)&pFVar4->field_0x8 = pFVar4;
    if (pTVar6 != *(TReferenceControllerBase<1> **)puVar1) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)puVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)puVar1 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// operator=<FScopedTestEnvironment> @ 1487f1da0

TSharedPtr<FScopedTestEnvironment,1> * __thiscall
TSharedPtr<FScopedTestEnvironment,1>::operator=<FScopedTestEnvironment>
          (TSharedPtr<FScopedTestEnvironment,1> *this,TRawPtrProxy<FScopedTestEnvironment> *param_1)

{
  FScopedTestEnvironment *pFVar1;
  TSharedPtr<FScopedTestEnvironment,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFScopedTestEnvironment__U__DefaultDeleter_UFScopedTestEnvironment___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FScopedTestEnvironment *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// TSharedPtr<IAutomationLatentCommand,1><FWaitForProcessToCompleteLatentCommand> @ 148877b00

TSharedPtr<IAutomationLatentCommand,1> * __thiscall
TSharedPtr<IAutomationLatentCommand,1>::
TSharedPtr<IAutomationLatentCommand,1><FWaitForProcessToCompleteLatentCommand>
          (TSharedPtr<IAutomationLatentCommand,1> *this,
          TRawPtrProxy<FWaitForProcessToCompleteLatentCommand> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FWaitForProcessToCompleteLatentCommand *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->Object = (IAutomationLatentCommand *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFWaitForProcessToCompleteLatentCommand__U__DefaultDeleter_VFWaitForProcessToCompleteLatentCommand___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FWaitForProcessToCompleteLatentCommand *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar6 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlBookmark,FTraceService>_> @ 1488a4170

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlBookmark,FTraceService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FTraceControlBookmark,FTraceService>_> *param_1)

{
  TRawMessageHandler<FTraceControlBookmark,FTraceService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFTraceControlBookmark__VFTraceService____U__DefaultDeleter_V__TRawMessageHandler_UFTraceControlBookmark__VFTraceService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlChannelsPing,FTraceService>_> @ 1488a41e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlChannelsPing,FTraceService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FTraceControlChannelsPing,FTraceService>_> *param_1)

{
  TRawMessageHandler<FTraceControlChannelsPing,FTraceService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFTraceControlChannelsPing__VFTraceService____U__DefaultDeleter_V__TRawMessageHandler_UFTraceControlChannelsPing__VFTraceService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlChannelsSet,FTraceService>_> @ 1488a4250

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlChannelsSet,FTraceService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FTraceControlChannelsSet,FTraceService>_> *param_1)

{
  TRawMessageHandler<FTraceControlChannelsSet,FTraceService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFTraceControlChannelsSet__VFTraceService____U__DefaultDeleter_V__TRawMessageHandler_UFTraceControlChannelsSet__VFTraceService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService>_> @ 1488a42c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService>_> *param_1)

{
  TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFTraceControlDiscoveryPing__VFTraceService____U__DefaultDeleter_V__TRawMessageHandler_UFTraceControlDiscoveryPing__VFTraceService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlFile,FTraceService>_> @ 1488a4330

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlFile,FTraceService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FTraceControlFile,FTraceService>_> *param_1)

{
  TRawMessageHandler<FTraceControlFile,FTraceService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFTraceControlFile__VFTraceService____U__DefaultDeleter_V__TRawMessageHandler_UFTraceControlFile__VFTraceService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlPause,FTraceService>_> @ 1488a43a0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlPause,FTraceService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FTraceControlPause,FTraceService>_> *param_1)

{
  TRawMessageHandler<FTraceControlPause,FTraceService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFTraceControlPause__VFTraceService____U__DefaultDeleter_V__TRawMessageHandler_UFTraceControlPause__VFTraceService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlResume,FTraceService>_> @ 1488a4410

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlResume,FTraceService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FTraceControlResume,FTraceService>_> *param_1)

{
  TRawMessageHandler<FTraceControlResume,FTraceService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFTraceControlResume__VFTraceService____U__DefaultDeleter_V__TRawMessageHandler_UFTraceControlResume__VFTraceService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlScreenshot,FTraceService>_> @ 1488a4480

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlScreenshot,FTraceService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FTraceControlScreenshot,FTraceService>_> *param_1)

{
  TRawMessageHandler<FTraceControlScreenshot,FTraceService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFTraceControlScreenshot__VFTraceService____U__DefaultDeleter_V__TRawMessageHandler_UFTraceControlScreenshot__VFTraceService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlSend,FTraceService>_> @ 1488a44f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlSend,FTraceService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FTraceControlSend,FTraceService>_> *param_1)

{
  TRawMessageHandler<FTraceControlSend,FTraceService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFTraceControlSend__VFTraceService____U__DefaultDeleter_V__TRawMessageHandler_UFTraceControlSend__VFTraceService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService>_> @ 1488a4560

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService>_> *param_1)

{
  TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFTraceControlSetStatNamedEvents__VFTraceService____U__DefaultDeleter_V__TRawMessageHandler_UFTraceControlSetStatNamedEvents__VFTraceService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlSettingsPing,FTraceService>_> @ 1488a45d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlSettingsPing,FTraceService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FTraceControlSettingsPing,FTraceService>_> *param_1)

{
  TRawMessageHandler<FTraceControlSettingsPing,FTraceService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFTraceControlSettingsPing__VFTraceService____U__DefaultDeleter_V__TRawMessageHandler_UFTraceControlSettingsPing__VFTraceService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlSnapshotFile,FTraceService>_> @ 1488a4640

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlSnapshotFile,FTraceService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FTraceControlSnapshotFile,FTraceService>_> *param_1)

{
  TRawMessageHandler<FTraceControlSnapshotFile,FTraceService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFTraceControlSnapshotFile__VFTraceService____U__DefaultDeleter_V__TRawMessageHandler_UFTraceControlSnapshotFile__VFTraceService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlSnapshotSend,FTraceService>_> @ 1488a46b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlSnapshotSend,FTraceService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FTraceControlSnapshotSend,FTraceService>_> *param_1)

{
  TRawMessageHandler<FTraceControlSnapshotSend,FTraceService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFTraceControlSnapshotSend__VFTraceService____U__DefaultDeleter_V__TRawMessageHandler_UFTraceControlSnapshotSend__VFTraceService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlStatusPing,FTraceService>_> @ 1488a4720

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlStatusPing,FTraceService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FTraceControlStatusPing,FTraceService>_> *param_1)

{
  TRawMessageHandler<FTraceControlStatusPing,FTraceService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFTraceControlStatusPing__VFTraceService____U__DefaultDeleter_V__TRawMessageHandler_UFTraceControlStatusPing__VFTraceService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlStop,FTraceService>_> @ 1488a4790

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FTraceControlStop,FTraceService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FTraceControlStop,FTraceService>_> *param_1)

{
  TRawMessageHandler<FTraceControlStop,FTraceService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFTraceControlStop__VFTraceService____U__DefaultDeleter_V__TRawMessageHandler_UFTraceControlStop__VFTraceService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FRTInfo,1><FRTInfo> @ 1488f1170

TSharedPtr<FRTInfo,1> * __thiscall
TSharedPtr<FRTInfo,1>::TSharedPtr<FRTInfo,1><FRTInfo>
          (TSharedPtr<FRTInfo,1> *this,TRawPtrProxy<FRTInfo> *param_1)

{
  FRTInfo *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFRTInfo__U__DefaultDeleter_UFRTInfo___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator=<FCanvasWordWrapper> @ 1488f1490

TSharedPtr<FCanvasWordWrapper,1> * __thiscall
TSharedPtr<FCanvasWordWrapper,1>::operator=<FCanvasWordWrapper>
          (TSharedPtr<FCanvasWordWrapper,1> *this,TRawPtrProxy<FCanvasWordWrapper> *param_1)

{
  FCanvasWordWrapper *pFVar1;
  TSharedPtr<FCanvasWordWrapper,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFCanvasWordWrapper__U__DefaultDeleter_VFCanvasWordWrapper___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FCanvasWordWrapper *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FOutputDeviceFile> @ 1488f1520

TSharedPtr<FOutputDevice,1> * __thiscall
TSharedPtr<FOutputDevice,1>::operator=<FOutputDeviceFile>
          (TSharedPtr<FOutputDevice,1> *this,TRawPtrProxy<FOutputDeviceFile> *param_1)

{
  FOutputDeviceFile *pFVar1;
  TSharedPtr<FOutputDevice,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = (FOutputDevice *)pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFOutputDeviceFile__U__DefaultDeleter_VFOutputDeviceFile___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = (FOutputDevice *)pFVar1;
    local_18.Object = (FOutputDevice *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FStringOutputDevice> @ 1488f15b0

TSharedPtr<FOutputDevice,1> * __thiscall
TSharedPtr<FOutputDevice,1>::operator=<FStringOutputDevice>
          (TSharedPtr<FOutputDevice,1> *this,TRawPtrProxy<FStringOutputDevice> *param_1)

{
  FStringOutputDevice *pFVar1;
  TSharedPtr<FOutputDevice,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = (FOutputDevice *)pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFStringOutputDevice__U__DefaultDeleter_VFStringOutputDevice___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = (FOutputDevice *)pFVar1;
    local_18.Object = (FOutputDevice *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator= @ 14890f3d0

TSharedPtr<FRTInfo,1> * __thiscall
TSharedPtr<FRTInfo,1>::operator=(TSharedPtr<FRTInfo,1> *this,TSharedPtr<FRTInfo,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FRTInfo *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator-> @ 14890f9a0

FRTInfo * __thiscall TSharedPtr<FRTInfo,1>::operator->(TSharedPtr<FRTInfo,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FRTInfo *pFVar3;
  
  if (this->Object != (FRTInfo *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRTInfo *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14890f9f0

TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> * __thiscall
TSharedPtr<TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy>,1>::operator->
          (TSharedPtr<TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *pTVar3;
  
  if (this->Object != (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

// operator-> @ 14890fa40

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
TSharedPtr<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,1>::operator->
          (TSharedPtr<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar3;
  
  if (this->Object != (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

// operator-> @ 14890fa90

FInputActionHandlerDynamicSignature * __thiscall
TSharedPtr<FInputActionHandlerDynamicSignature,1>::operator->
          (TSharedPtr<FInputActionHandlerDynamicSignature,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FInputActionHandlerDynamicSignature *pFVar3;
  
  if (this->Object != (FInputActionHandlerDynamicSignature *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInputActionHandlerDynamicSignature *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator=<FNetFastTArrayBaseState> @ 148a2c040

TSharedPtr<INetDeltaBaseState,1> * __thiscall
TSharedPtr<INetDeltaBaseState,1>::operator=<FNetFastTArrayBaseState>
          (TSharedPtr<INetDeltaBaseState,1> *this,TRawPtrProxy<FNetFastTArrayBaseState> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FNetFastTArrayBaseState *pFVar4;
  FNetFastTArrayBaseState *pFVar5;
  longlong *plVar6;
  FSharedReferencer<1> FVar7;
  TSharedPtr<INetDeltaBaseState,1> local_18;
  
  pFVar4 = param_1->Object;
  local_18.Object = (INetDeltaBaseState *)pFVar4;
  FVar7.ReferenceController = ::operator_new(0x18);
  if (FVar7.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (FVar7.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFNetFastTArrayBaseState__U__DefaultDeleter_VFNetFastTArrayBaseState___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    FVar7.ReferenceController[1]._padding_ = (longlong)pFVar4;
  }
  pFVar5 = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
  if ((pFVar5 != (FNetFastTArrayBaseState *)0x0) &&
     (((plVar1 = &pFVar5->_padding_, pFVar5->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar5->_padding_ = (longlong)pFVar5;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)*plVar1) {
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar7.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar7.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar6 = (longlong *)*plVar1;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *plVar1 = (longlong)FVar7.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
  }
  if (this != &local_18) {
    this->Object = (INetDeltaBaseState *)pFVar4;
    local_18.Object = (INetDeltaBaseState *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
    FVar7.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return this;
}

// operator-> @ 148a44fe0

FContentBundleClient * __thiscall
TSharedPtr<FContentBundleClient,1>::operator->(TSharedPtr<FContentBundleClient,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FContentBundleClient *pFVar3;
  
  if (this->Object != (FContentBundleClient *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FContentBundleClient *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator= @ 148b1eeb0

TSharedPtr<IDynamicResolutionState,1> * __thiscall
TSharedPtr<IDynamicResolutionState,1>::operator=
          (TSharedPtr<IDynamicResolutionState,1> *this,
          TSharedPtr<IDynamicResolutionState,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IDynamicResolutionState *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pIVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator-> @ 148b1f890

IDynamicResolutionState * __thiscall
TSharedPtr<IDynamicResolutionState,1>::operator->(TSharedPtr<IDynamicResolutionState,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IDynamicResolutionState *pIVar3;
  
  if (this->Object != (IDynamicResolutionState *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IDynamicResolutionState *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

