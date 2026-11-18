// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 10

// StartupModule @ 145f66950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FLandscapeModule::StartupModule(FLandscapeModule *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  FPhysicalMaterialManager *this_00;
  undefined8 *puVar6;
  ulong64 uVar7;
  ulong64 *puVar8;
  ulong64 uVar9;
  ForElementType<TAlignedBytes<16,16>_> *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  FDelegateAllocation local_e0;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  undefined1 local_68 [40];
  FReadAccessScope local_40;
  
  TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *)
             &FWorldDelegates::OnPostWorldCreation,(_func___cdecl_void_UWorld_ptr *)local_res8);
  TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *)
             &FWorldDelegates::OnPreWorldFinishDestroy,(_func___cdecl_void_UWorld_ptr *)local_res10)
  ;
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                 *)&FWorldDelegates::OnPostDuplicate,
                (_func___cdecl_void_UWorld_ptr_bool_TMap<UObject_ptr,UObject_ptr,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_ptr,UObject_ptr,0>_>_ptr_TArray<UObject_ptr,TSizedDefaultAllocator<32>_>_ptr
                 *)local_res18);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FLandscapeModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,(FLandscapeModule *)(local_res18 + 8),
             (pmf_03ef96c1)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FLandscapeModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnEnginePreExit,(FLandscapeModule *)local_68,(pmf_03ef96c1)this);
  this_00 = Chaos::FPhysicalMaterialManager::Get();
  uVar9 = 0;
  local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_e8,(FWriteAccessScope *)&local_88);
  local_70 = &local_e0;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_e0);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXUFMaterialHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLandscapeModule____A6AXUFMaterialHandle_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[4] = OnUpdatePhysicalMaterial;
    puVar6[3] = this;
    if (this == (FLandscapeModule *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_e8,(FReadAccessScope *)(local_68 + 0x10));
  if ((local_e0.DelegateSize != 0) &&
     (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    cVar4 = (**(code **)(*(longlong *)local_e0.DelegateAllocator + 0x38))();
    if (cVar4 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_68 + 0x10));
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_e8,&local_40);
      if ((local_e0.DelegateSize != 0) &&
         (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar8 = (ulong64 *)
                 (**(code **)(*(longlong *)local_e0.DelegateAllocator + 0x40))
                           (local_e0.DelegateAllocator,local_68 + 8);
        uVar9 = *puVar8;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_40);
      iVar5 = *(int *)&(this_00->OnMaterialUpdated).field_0x10;
      puVar1 = &(this_00->OnMaterialUpdated).field_0x14;
      if (iVar5 == *(int *)puVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&(this_00->OnMaterialUpdated).field_0x8,
                           (int *)puVar1);
      }
      *(int *)&(this_00->OnMaterialUpdated).field_0x10 = iVar5 + 1;
      pFVar10 = (ForElementType<TAlignedBytes<16,16>_> *)
                (*(longlong *)&(this_00->OnMaterialUpdated).field_0x8 + (longlong)iVar5 * 0x10);
      *pFVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(undefined4 *)(pFVar10 + 1) = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_e8,(FWriteAccessScope *)&local_d0);
      if (*pFVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)*pFVar10);
      }
      *pFVar10 = local_e0.DelegateAllocator;
      local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(int *)(pFVar10 + 1) = local_e0.DelegateSize;
      local_e0.DelegateSize = 0;
      if (local_d0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
      }
      goto LAB_145f66b9d;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_68 + 0x10));
LAB_145f66b9d:
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  (this->OnUpdatePhysicalMaterialHandle).ID = uVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_e8,(FWriteAccessScope *)&local_a0);
  if ((local_e0.DelegateSize != 0) &&
     (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_e0,0,0,0x10);
    local_e0.DelegateSize = 0;
  }
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_e0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
  return;
}

// ShutdownModule @ 145f66c40

void __thiscall FLandscapeModule::ShutdownModule(FLandscapeModule *this)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPhysicalMaterialManager *this_00;
  ulong64 *puVar5;
  uint uVar6;
  ForAnyElementType *this_01;
  longlong lVar7;
  FDestructionSentinel local_38;
  
  this_00 = Chaos::FPhysicalMaterialManager::Get();
  uVar1 = (this->OnUpdatePhysicalMaterialHandle).ID;
  if (uVar1 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_38);
    uVar6 = 0;
    if (0 < *(int *)&(this_00->OnMaterialUpdated).field_0x10) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < *(int *)&(this_00->OnMaterialUpdated).field_0x10) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_01 = (ForAnyElementType *)
                  (*(longlong *)&(this_00->OnMaterialUpdated).field_0x8 + lVar7);
        if (((*(int *)&this_01[1].Data != 0) && (this_01->Data != (FScriptContainerElement *)0x0))
           && (puVar5 = (ulong64 *)(**(code **)(*(longlong *)this_01->Data + 0x40))(),
              *puVar5 == uVar1)) {
          if ((*(int *)&this_01[1].Data != 0) && (this_01->Data != (FScriptContainerElement *)0x0))
          {
            (*(code *)**(undefined8 **)this_01->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_01,0,0,0x10);
            *(undefined4 *)&this_01[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
          break;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((int)uVar6 < *(int *)&(this_00->OnMaterialUpdated).field_0x10);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEnginePreExit,
             this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnPostEngineInit
             ,this);
  return;
}

// GetLandscapeSceneViewExtension @ 145f66da0

TSharedPtr<FLandscapeSceneViewExtension,1> * __thiscall
FLandscapeModule::GetLandscapeSceneViewExtension
          (FLandscapeModule *this,TSharedPtr<FLandscapeSceneViewExtension,1> *__return_storage_ptr__
          )

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->SceneViewExtension).Object;
  pTVar1 = (this->SceneViewExtension).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// SetLandscapeEditorServices @ 145f66dd0

void __thiscall
FLandscapeModule::SetLandscapeEditorServices
          (FLandscapeModule *this,ILandscapeEditorServices *param_1)

{
  this->LandscapeEditorServices = param_1;
  return;
}

// GetLandscapeEditorServices @ 145f66de0

ILandscapeEditorServices * __thiscall
FLandscapeModule::GetLandscapeEditorServices(FLandscapeModule *this)

{
  return this->LandscapeEditorServices;
}

// SetCreateLandscapeComponentSceneProxyDelegate @ 145f66df0

void __thiscall
FLandscapeModule::SetCreateLandscapeComponentSceneProxyDelegate
          (FLandscapeModule *this,
          TDelegate<FPrimitiveSceneProxy_*___cdecl(ULandscapeComponent_*),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegate<FPrimitiveSceneProxy_*___cdecl(ULandscapeComponent_*),FDefaultDelegateUserPolicy>
  *this_00;
  undefined1 *this_01;
  longlong *plVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  ForAnyElementType local_c0;
  int local_b8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  FReadAccessScope local_38;
  
  this_00 = &this->CreateLandscapeComponentSceneProxyDelegate;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_68);
  if ((*(int *)&(this->CreateLandscapeComponentSceneProxyDelegate).field_0x10 == 0) ||
     (plVar1 = *(longlong **)&(this->CreateLandscapeComponentSceneProxyDelegate).field_0x8,
     plVar1 == (longlong *)0x0)) {
LAB_145f66e3b:
    cVar5 = '\0';
  }
  else {
    cVar5 = (**(code **)(*plVar1 + 0x38))();
    if (cVar5 == '\0') goto LAB_145f66e3b;
    cVar5 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_50);
  if ((*(int *)&param_1->field_0x10 != 0) && (*(longlong **)&param_1->field_0x8 != (longlong *)0x0))
  {
    cVar6 = (**(code **)(**(longlong **)&param_1->field_0x8 + 0x38))();
    if (cVar6 != '\0') {
      cVar6 = '\x01';
      goto LAB_145f66e74;
    }
  }
  cVar6 = '\0';
LAB_145f66e74:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  if (cVar5 == cVar6) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CreateLandscapeComponentSceneProxyDelegate.IsBound() != InDelegate.IsBound()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeModule.cpp"
                       ,0x32,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1 != this_00) {
    local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_b8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_38);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_c8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_c8,(FWriteAccessScope *)&local_b0);
    iVar4 = local_b8;
    FVar3.Data = local_c0.Data;
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_b8 = 0;
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_98);
    this_01 = &(this->CreateLandscapeComponentSceneProxyDelegate).field_0x8;
    if ((*(int *)&(this->CreateLandscapeComponentSceneProxyDelegate).field_0x10 != 0) &&
       (*(undefined8 **)this_01 != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)this_01)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this_01,0,0,0x10);
      *(undefined4 *)&(this->CreateLandscapeComponentSceneProxyDelegate).field_0x10 = 0;
    }
    if (*(void **)this_01 != (void *)0x0) {
      FMemory::Free(*(void **)this_01);
    }
    *(FScriptContainerElement **)this_01 = FVar3.Data;
    *(int *)&(this->CreateLandscapeComponentSceneProxyDelegate).field_0x10 = iVar4;
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_c8,(FWriteAccessScope *)&local_80);
    if ((local_b8 != 0) && (local_c0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_c0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c0,0,0,0x10);
      local_b8 = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
  }
  return;
}

// GetCreateLandscapeComponentSceneProxyDelegate @ 145f67020

TDelegate<FPrimitiveSceneProxy_*___cdecl(ULandscapeComponent_*),FDefaultDelegateUserPolicy> *
__thiscall FLandscapeModule::GetCreateLandscapeComponentSceneProxyDelegate(FLandscapeModule *this)

{
  return &this->CreateLandscapeComponentSceneProxyDelegate;
}

// OnEnginePreExit @ 145f99f60

void __thiscall FLandscapeModule::OnEnginePreExit(FLandscapeModule *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if ((this->SceneViewExtension).Object == (FLandscapeSceneViewExtension *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneViewExtension.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeModule.cpp"
                       ,0x117,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->SceneViewExtension != (TSharedPtr<FLandscapeSceneViewExtension,1> *)&local_18) {
    (this->SceneViewExtension).Object = (FLandscapeSceneViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SceneViewExtension).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// OnPostEngineInit @ 145f9a030

void __thiscall FLandscapeModule::OnPostEngineInit(FLandscapeModule *this)

{
  code *pcVar1;
  bool bVar2;
  FLandscapeSceneViewExtension *this_00;
  FAutoRegister local_res8 [8];
  TRawPtrProxy<FLandscapeSceneViewExtension> local_res10 [3];
  FLandscapeSceneViewExtension *local_78;
  FSharedReferencer<1> local_70;
  TSharedRef<FLandscapeSceneViewExtension,1> local_68;
  code *local_58;
  ulonglong uStack_50;
  TSharedRef<ISceneViewExtension,1> local_48;
  code *local_38;
  ulonglong uStack_30;
  
  if ((this->SceneViewExtension).Object != (FLandscapeSceneViewExtension *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!SceneViewExtension.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeModule.cpp"
                       ,0x111,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = ::operator_new(0x48);
  if (this_00 == (FLandscapeSceneViewExtension *)0x0) {
    this_00 = (FLandscapeSceneViewExtension *)0x0;
  }
  else {
    FSceneViewExtensionBase::FSceneViewExtensionBase((FSceneViewExtensionBase *)this_00,local_res8);
    this_00->_padding_ = (longlong)&___7FLandscapeSceneViewExtension__6B_;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    local_58 = FLandscapeSceneViewExtension::EndFrame_GameThread;
    local_38 = FLandscapeSceneViewExtension::EndFrame_GameThread;
    uStack_30 = uStack_50;
    (this_00->LandscapeViews).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->LandscapeViews).ArrayNum = 0;
    (this_00->LandscapeViews).ArrayMax = 0;
    (this_00->LandscapeSetupTask).Pimpl.Reference = (FTaskBase *)0x0;
    this_00->NumViewsWithShowCollision = 0;
    this_00->NumViewsWithShowCollisionAcc = 0;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddRaw<FLandscapeSceneViewExtension>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnEndFrame,(FLandscapeSceneViewExtension *)(local_res10 + 1),
               (pmf_fa70d939 *)this_00);
    uStack_50 = uStack_50 & 0xffffffff00000000;
    local_58 = FLandscapeSceneViewExtension::EndFrame_RenderThread;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddRaw<FLandscapeSceneViewExtension>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnEndFrameRT,(FLandscapeSceneViewExtension *)(local_res10 + 2),
               (pmf_fa70d939 *)this_00);
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_res10[0].Object = this_00;
  TSharedRef<FLandscapeSceneViewExtension,1>::
  TSharedRef<FLandscapeSceneViewExtension,1><FLandscapeSceneViewExtension>(&local_68,local_res10);
  local_48.Object = (ISceneViewExtension *)local_68.Object;
  local_48.SharedReferenceCount.ReferenceController =
       local_68.SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSceneViewExtensions::RegisterExtension(&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  local_78 = local_68.Object;
  local_70.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->SceneViewExtension != (TSharedPtr<FLandscapeSceneViewExtension,1> *)&local_78) {
    (this->SceneViewExtension).Object = local_68.Object;
    local_78 = (FLandscapeSceneViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SceneViewExtension).SharedReferenceCount,&local_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// OnUpdatePhysicalMaterial @ 145f9ab30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLandscapeModule::OnUpdatePhysicalMaterial(FLandscapeModule *this,FMaterialHandle param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FTSTicker *this_00;
  undefined ***pppuVar3;
  undefined1 auStackY_98 [32];
  TWeakPtr<FTSTicker::FElement,1> local_60;
  code *local_48 [2];
  undefined **local_38 [3];
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  this_00 = FTSTicker::GetCoreTicker();
  local_20 = (undefined ***)0x0;
  local_38[0] = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`ExecuteOnGameThread<`FLandscapeModule::OnUpdatePhysicalMaterial'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
                 ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`ExecuteOnGameThread<`FLandscapeModule::OnUpdatePhysicalMaterial'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                ::Call;
  FTSTicker::AddTicker
            (this_00,&local_60,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeModule.cpp(300)"
             ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_48);
  if (local_60.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_60.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_60.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_60.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_48[0] != (code *)0x0) {
    pppuVar3 = local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar3 = local_20;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  return;
}

