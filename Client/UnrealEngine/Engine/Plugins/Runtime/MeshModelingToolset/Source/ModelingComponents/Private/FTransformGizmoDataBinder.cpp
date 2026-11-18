// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 26

// ~FTransformGizmoDataBinder @ 14cbc1a50

void __thiscall
FTransformGizmoDataBinder::~FTransformGizmoDataBinder(FTransformGizmoDataBinder *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  ForElementType<FSetElementId> FVar5;
  void *pvVar6;
  longlong *plVar7;
  
  *(undefined ***)this = &___7FTransformGizmoDataBinder__6B_;
  Reset(this);
  pFVar3 = (this->ContextObjectsToUnregisterWith).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if (*(longlong *)&this->BoundToActualConversion != 0) {
    plVar4 = *(longlong **)&(this->BoundToActualConversion).field_0x28;
    plVar7 = (longlong *)&(this->BoundToActualConversion).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (*(longlong *)&this->ActualToBoundConversion != 0) {
    plVar4 = *(longlong **)&(this->ActualToBoundConversion).field_0x28;
    plVar7 = (longlong *)&(this->ActualToBoundConversion).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  (this->BoundGizmos).HashSize = 0;
  FVar5 = (this->BoundGizmos).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->BoundGizmos).Elements);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTrackedGizmoChanged).field_0x8,
             *(int *)&(this->OnTrackedGizmoChanged).field_0x10);
  pvVar6 = *(void **)&(this->OnTrackedGizmoChanged).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTrackedGizmoChanged);
  plVar4 = *(longlong **)&this->field_0x18;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// BeginDataEditSequence @ 14cbc29f0

void __thiscall FTransformGizmoDataBinder::BeginDataEditSequence(FTransformGizmoDataBinder *this)

{
  TVector<double> *pTVar1;
  double dVar2;
  bool bVar3;
  UObject *pUVar4;
  
  pTVar1 = this->BoundScale;
  this->bInDataEditSequence = true;
  dVar2 = (pTVar1->field0_0x0)._s_0.Y;
  (this->ProportionalDragInitialVector).field0_0x0._s_0.X = (pTVar1->field0_0x0)._s_0.X;
  (this->ProportionalDragInitialVector).field0_0x0._s_0.Y = dVar2;
  (this->ProportionalDragInitialVector).field0_0x0._s_0.Z = (pTVar1->field0_0x0)._s_0.Z;
  bVar3 = FWeakObjectPtr::IsValid(&(this->CurrentlyTrackedGizmo).WeakPtr);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
    if (*(longlong *)&pUVar4[1].field_0x10 != 0) {
      bVar3 = this->bIgnoreCallbackForDebouncing;
      this->bIgnoreCallbackForDebouncing = true;
      pUVar4 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
      (**(code **)(*(longlong *)pUVar4 + 0x348))(pUVar4);
      this->bIgnoreCallbackForDebouncing = bVar3;
    }
  }
  return;
}

// BindToGizmoContextObject @ 14cbc2a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTransformGizmoDataBinder::BindToGizmoContextObject
          (FTransformGizmoDataBinder *this,UCombinedTransformGizmoContextObject *param_1)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TWeakObjectPtr<UCombinedTransformGizmoContextObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *pTVar6;
  UCombinedTransformGizmoContextObject *local_res10 [3];
  FWeakObjectPtr local_28 [2];
  code *local_18;
  ulonglong uStack_10;
  
  if ((param_1 != (UCombinedTransformGizmoContextObject *)0x0) &&
     (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    uStack_10 = uStack_10 & 0xffffffff00000000;
    local_18 = BindToUninitializedGizmo;
    TMulticastDelegateRegistration<void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
    ::AddSP<FTransformGizmoDataBinder>
              ((TMulticastDelegateRegistration<void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
                *)&param_1->OnGizmoCreated,(FTransformGizmoDataBinder *)(local_res10 + 1),
               (pmf_495a4718 *)this);
    pTVar6 = &this->ContextObjectsToUnregisterWith;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_28[0].ObjectIndex = 0;
    local_28[0].ObjectSerialNumber = 0;
    local_res10[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(local_28,(FObjectPtr)local_res10);
    pFVar2 = (FWeakObjectPtr *)(pTVar6->AllocatorInstance).Data;
    if ((pFVar2 <= local_28) &&
       (local_28 < pFVar2 + (this->ContextObjectsToUnregisterWith).ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->ContextObjectsToUnregisterWith).ArrayNum;
    piVar1 = &(this->ContextObjectsToUnregisterWith).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar6->AllocatorInstance,piVar1);
    }
    (this->ContextObjectsToUnregisterWith).ArrayNum = iVar5 + 1;
    *(FWeakObjectPtr *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_28[0];
    return;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8832836549029658120>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Transforms\\TransformGizmoDataBinder.cpp"
                     ,0x1f8,"IsValid(ContextObject)");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// BindToInitializedGizmo @ 14cbc2c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTransformGizmoDataBinder::BindToInitializedGizmo
          (FTransformGizmoDataBinder *this,UCombinedTransformGizmo *param_1,UTransformProxy *param_2
          )

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr> local_res20;
  code *local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  FWeakObjectPtr local_118;
  FWeakObjectPtr local_110;
  UCombinedTransformGizmo *local_108;
  FWeakObjectPtr local_100;
  UCombinedTransformGizmo *local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [8];
  UCombinedTransformGizmo *local_b8;
  FWeakObjectPtr FStack_b0;
  UCombinedTransformGizmo *local_a8;
  FWeakObjectPtr FStack_a0;
  UCombinedTransformGizmo *local_98;
  undefined1 auStack_90 [8];
  UCombinedTransformGizmo *local_88 [2];
  UCombinedTransformGizmo *local_78 [2];
  UCombinedTransformGizmo *local_68;
  undefined1 auStack_60 [24];
  code *local_48;
  undefined8 uStack_40;
  
  if ((param_1 != (UCombinedTransformGizmo *)0x0) &&
     ((param_1->ActiveTarget).field0_0x0.DebugPtr != (UTransformProxy *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_118.ObjectIndex = 0;
    local_118.ObjectSerialNumber = 0;
    local_108 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_118,(FObjectPtr)&local_108);
    local_100 = local_118;
    iVar4 = TSet<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TWeakObjectPtr<UCombinedTransformGizmo_const_,FWeakObjectPtr>_>
                      (&this->BoundGizmos,local_118.ObjectSerialNumber ^ local_118.ObjectIndex,
                       (TWeakObjectPtr<UCombinedTransformGizmo_const_,FWeakObjectPtr> *)&local_100);
    if (iVar4 == -1) {
      uStack_120 = 0;
      local_128 = OnProxyBeginTransformEdit;
      FStack_b0 = (FWeakObjectPtr)((ulonglong)uStack_11c << 0x20);
      local_b8 = (UCombinedTransformGizmo *)OnProxyBeginTransformEdit;
      TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
      AddSP<FTransformGizmoDataBinder,UCombinedTransformGizmo_*_&>
                ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
                  *)&((param_1->ActiveTarget).field0_0x0.DebugPtr)->OnBeginTransformEdit,
                 (FTransformGizmoDataBinder *)local_f0,(pmf_2f4af281 *)this,&local_b8);
      uStack_120 = 0;
      local_128 = OnProxyTransformChanged;
      FStack_a0 = (FWeakObjectPtr)((ulonglong)uStack_11c << 0x20);
      local_a8 = (UCombinedTransformGizmo *)OnProxyTransformChanged;
      TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
      ::AddSP<FTransformGizmoDataBinder,UCombinedTransformGizmo_*_&>
                ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
                  *)&((param_1->ActiveTarget).field0_0x0.DebugPtr)->OnTransformChanged,
                 (FTransformGizmoDataBinder *)(local_f0 + 8),(pmf_920c2658 *)this,&local_a8);
      uStack_120 = 0;
      local_128 = OnProxyEndTransformEdit;
      auStack_90 = (undefined1  [8])((ulonglong)uStack_11c << 0x20);
      local_98 = (UCombinedTransformGizmo *)OnProxyEndTransformEdit;
      TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
      AddSP<FTransformGizmoDataBinder,UCombinedTransformGizmo_*_&>
                ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
                  *)&((param_1->ActiveTarget).field0_0x0.DebugPtr)->OnEndTransformEdit,
                 (FTransformGizmoDataBinder *)local_e0,(pmf_2f4af281 *)this,&local_98);
      local_128 = OnProxyBeginTransformEdit;
      uStack_120 = 0;
      local_88[1] = (UCombinedTransformGizmo *)((ulonglong)uStack_11c << 0x20);
      local_88[0] = (UCombinedTransformGizmo *)OnProxyBeginTransformEdit;
      TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
      AddSP<FTransformGizmoDataBinder,UCombinedTransformGizmo_*_&>
                ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
                  *)&((param_1->ActiveTarget).field0_0x0.DebugPtr)->OnBeginPivotEdit,
                 (FTransformGizmoDataBinder *)(local_e0 + 8),(pmf_2f4af281 *)this,local_88);
      local_128 = OnProxyTransformChanged;
      uStack_120 = 0;
      local_78[1] = (UCombinedTransformGizmo *)((ulonglong)uStack_11c << 0x20);
      local_78[0] = (UCombinedTransformGizmo *)OnProxyTransformChanged;
      TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
      ::AddSP<FTransformGizmoDataBinder,UCombinedTransformGizmo_*_&>
                ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
                  *)&((param_1->ActiveTarget).field0_0x0.DebugPtr)->OnPivotChanged,
                 (FTransformGizmoDataBinder *)local_d0,(pmf_920c2658 *)this,local_78);
      local_128 = OnProxyEndTransformEdit;
      uStack_120 = 0;
      auStack_60._0_8_ = (ulonglong)uStack_11c << 0x20;
      local_68 = (UCombinedTransformGizmo *)OnProxyEndTransformEdit;
      TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
      AddSP<FTransformGizmoDataBinder,UCombinedTransformGizmo_*_&>
                ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
                  *)&((param_1->ActiveTarget).field0_0x0.DebugPtr)->OnEndPivotEdit,
                 (FTransformGizmoDataBinder *)(local_d0 + 8),(pmf_2f4af281 *)this,&local_68);
      uStack_120 = 0;
      local_128 = OnDisplaySpaceTransformChanged;
      auStack_60._16_8_ = (ulonglong)uStack_11c << 0x20;
      auStack_60._8_8_ = OnDisplaySpaceTransformChanged;
      TMulticastDelegateRegistration<void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
      ::AddSP<FTransformGizmoDataBinder>
                ((TMulticastDelegateRegistration<void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
                  *)&param_1->OnDisplaySpaceTransformChanged,(FTransformGizmoDataBinder *)local_c0,
                 (pmf_58158169 *)this);
      uStack_120 = 0;
      local_128 = OnGizmoVisibilityChanged;
      uStack_40 = (ulonglong)uStack_11c << 0x20;
      local_48 = OnGizmoVisibilityChanged;
      TMulticastDelegateRegistration<void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
      ::AddSP<FTransformGizmoDataBinder>
                ((TMulticastDelegateRegistration<void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
                  *)&param_1->OnVisibilityChanged,(FTransformGizmoDataBinder *)&local_128,
                 (pmf_6ce48d0a *)this);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_110.ObjectIndex = 0;
      local_110.ObjectSerialNumber = 0;
      local_f8 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_110,(FObjectPtr)&local_f8);
      TSet<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::Emplace<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>_>
                (&this->BoundGizmos,&local_res20,(bool *)&local_110);
      cVar2 = (**(code **)(*(longlong *)this + 0x30))(this);
      if (cVar2 != '\0') {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014cbc2f3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this + 0x60))(this,param_1);
      return;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8832836549029658184>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Transforms\\TransformGizmoDataBinder.cpp"
                     ,0x1b8,"Gizmo && Gizmo->ActiveTarget && !BoundGizmos.Contains(Gizmo)");
  if (!bVar3) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// BindToUninitializedGizmo @ 14cbc2f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTransformGizmoDataBinder::BindToUninitializedGizmo
          (FTransformGizmoDataBinder *this,UCombinedTransformGizmo *param_1)

{
  TMulticastDelegateRegistration<void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
  ::AddSP<FTransformGizmoDataBinder>
            ((TMulticastDelegateRegistration<void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
              *)&param_1->OnSetActiveTarget,(FTransformGizmoDataBinder *)&stack0x00000010,
             (pmf_09d751c1 *)this);
  TMulticastDelegateRegistration<void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
  ::AddSP<FTransformGizmoDataBinder>
            ((TMulticastDelegateRegistration<void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
              *)&param_1->OnAboutToClearActiveTarget,(FTransformGizmoDataBinder *)&stack0x00000010,
             (pmf_09d751c1 *)this);
  return;
}

// EndDataEditSequence @ 14cbc4330

void __thiscall FTransformGizmoDataBinder::EndDataEditSequence(FTransformGizmoDataBinder *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  this->bInDataEditSequence = false;
  bVar1 = FWeakObjectPtr::IsValid(&(this->CurrentlyTrackedGizmo).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
    if (*(longlong *)&pUVar2[1].field_0x10 != 0) {
      bVar1 = this->bIgnoreCallbackForDebouncing;
      this->bIgnoreCallbackForDebouncing = true;
      pUVar2 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
      (**(code **)(*(longlong *)pUVar2 + 0x350))(pUVar2);
      UpdateDataValuesFromGizmo(this);
      this->bIgnoreCallbackForDebouncing = bVar1;
    }
  }
  return;
}

// GetGizmoTransformFromDataValues @ 14cbc6510

/* WARNING: Type propagation algorithm not settling */

TTransform<double> * __thiscall
FTransformGizmoDataBinder::GetGizmoTransformFromDataValues
          (FTransformGizmoDataBinder *this,TTransform<double> *__return_storage_ptr__,bool param_1)

{
  double dVar1;
  code *pcVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  __m128d _Var35;
  __m128d _Var36;
  double dVar37;
  undefined8 uVar38;
  TQuat<double> *pTVar39;
  TVector<double> *pTVar40;
  longlong *plVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  double local_398;
  TRotator<double> local_390;
  TVector<double>_u_0 local_378;
  TVector<double>_u_0 local_358;
  TQuat<double> local_338;
  TQuat<double> local_318;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_278;
  double dStack_270;
  TVector<double> local_238 [7];
  TVector<double> local_190 [3];
  TQuat<double> local_148;
  TQuat<double> local_128;
  TQuat<double> local_108;
  TQuat<double> local_e8 [6];
  
  pTVar40 = this->BoundTranslation;
  if (*(void **)&this->BoundToActualConversion == (void *)0x0) {
    uVar44 = *(undefined4 *)&pTVar40->field0_0x0;
    uVar45 = *(undefined4 *)((longlong)&pTVar40->field0_0x0 + 4);
    uVar46 = *(undefined4 *)((longlong)&pTVar40->field0_0x0 + 8);
    uVar47 = *(undefined4 *)((longlong)&pTVar40->field0_0x0 + 0xc);
    uVar38 = *(undefined8 *)((longlong)&pTVar40->field0_0x0 + 0x10);
    uVar42 = (undefined4)uVar38;
    uVar43 = (undefined4)((ulonglong)uVar38 >> 0x20);
  }
  else {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->BoundToActualConversion);
    pcVar2 = *(code **)&this->BoundToActualConversion;
    plVar3 = *(longlong **)&(this->BoundToActualConversion).field_0x28;
    plVar41 = (longlong *)&(this->BoundToActualConversion).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar41 = plVar3;
    }
    uVar38 = (**(code **)(*plVar41 + 8))();
    (*pcVar2)(&local_3a8,uVar38,pTVar40);
    uVar42 = SUB84(local_398,0);
    uVar43 = (undefined4)((ulonglong)local_398 >> 0x20);
    uVar44 = local_3a8;
    uVar45 = uStack_3a4;
    uVar46 = uStack_3a0;
    uVar47 = uStack_39c;
  }
  local_398 = (double)CONCAT44(uVar43,uVar42);
  UE::Math::TRotator<double>::MakeFromEuler(&local_390,this->BoundEulerAngles);
  pTVar40 = this->BoundScale;
  pTVar39 = UE::Math::TRotator<double>::Quaternion(&local_390,&local_148);
  dVar27 = local_398;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  dVar16 = (pTVar40->field0_0x0)._s_0.X;
  dVar6 = (pTVar40->field0_0x0)._s_0.Y;
  dVar1 = (pTVar40->field0_0x0)._s_0.Z;
  local_278 = pTVar39->Z;
  dStack_270 = pTVar39->W;
  dVar22 = pTVar39->X;
  dVar24 = pTVar39->Y;
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar5,0);
  auVar8._0_8_ = (double)fVar4;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar8;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar5,0);
  auVar10._0_8_ = (double)fVar4;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar10;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar5,0);
  auVar12._0_8_ = (double)fVar4;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar12;
  if (this->bUsingDeltaMode == false) {
    if (((param_1) && ((this->CurrentCustomLocalReferenceTransform).bIsSet != false)) &&
       (&this->CurrentCustomLocalReferenceTransform !=
        (TOptional<UE::Math::TTransform<double>_> *)&local_2f8)) {
      local_2c8 = (this->CurrentCustomLocalReferenceTransform).TypedValue.Translation.ZW.m128d_f64
                  [0];
      dStack_2c0 = (this->CurrentCustomLocalReferenceTransform).TypedValue.Translation.ZW.m128d_f64
                   [1];
      local_2d8 = (this->CurrentCustomLocalReferenceTransform).TypedValue.Translation.XY.m128d_f64
                  [0];
      dStack_2d0 = (this->CurrentCustomLocalReferenceTransform).TypedValue.Translation.XY.m128d_f64
                   [1];
      dVar24 = (this->CurrentCustomLocalReferenceTransform).TypedValue.Rotation.XY.m128d_f64[0];
      dVar27 = (this->CurrentCustomLocalReferenceTransform).TypedValue.Rotation.XY.m128d_f64[1];
      dVar28 = (this->CurrentCustomLocalReferenceTransform).TypedValue.Rotation.ZW.m128d_f64[0];
      dVar29 = (this->CurrentCustomLocalReferenceTransform).TypedValue.Rotation.ZW.m128d_f64[1];
      dVar6 = (this->CurrentCustomLocalReferenceTransform).TypedValue.Scale3D.ZW.m128d_f64[0];
      pTVar40 = this->BoundScale;
      dVar16 = (this->CurrentCustomLocalReferenceTransform).TypedValue.Scale3D.XY.m128d_f64[1] *
               (pTVar40->field0_0x0)._s_0.Y;
      dVar1 = (pTVar40->field0_0x0)._s_0.Z;
      auVar14._8_4_ = SUB84(dVar16,0);
      auVar14._0_8_ =
           (this->CurrentCustomLocalReferenceTransform).TypedValue.Scale3D.XY.m128d_f64[0] *
           (pTVar40->field0_0x0)._s_0.X;
      auVar14._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar14;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar6 * dVar1;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
      local_2f8 = dVar24;
      dStack_2f0 = dVar27;
      local_2e8 = dVar28;
      dStack_2e0 = dVar29;
      pTVar39 = UE::Math::TRotator<double>::Quaternion(&local_390,local_e8);
      dVar37 = local_2c8;
      dVar22 = dStack_2d0;
      dVar34 = local_2d8;
      _Var36 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW;
      _Var35 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW;
      dVar30 = pTVar39->Z;
      dVar31 = pTVar39->W;
      dVar32 = pTVar39->X;
      dVar33 = pTVar39->Y;
      dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
      dVar1 = dVar24 * dVar30 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              dVar29 * dVar33 +
              dVar27 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              dVar28 * dVar32 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      auVar20._8_4_ = SUB84(dVar1,0);
      auVar20._0_8_ =
           dVar24 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar29 * dVar32 +
           dVar27 * dVar30 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar28 * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      auVar20._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar20;
      dVar1 = dVar24 * dVar32 * dVar6 + dVar29 * dVar31 + dVar27 * dVar33 * _Var35.m128d_f64[1] +
              dVar28 * dVar30 * _Var36.m128d_f64[1];
      auVar26._8_4_ = SUB84(dVar1,0);
      auVar26._0_8_ =
           dVar24 * dVar33 * dVar16 + dVar29 * dVar30 + dVar27 * dVar32 * _Var35.m128d_f64[0] +
           dVar28 * dVar31 * _Var36.m128d_f64[0];
      auVar26._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar26;
      local_318.X = local_2f8;
      local_318.Y = dStack_2f0;
      local_318.Z = local_2e8;
      local_318.W = dStack_2e0;
      local_358._0_4_ = uVar44;
      local_358._4_4_ = uVar45;
      local_358._8_4_ = uVar46;
      local_358._12_4_ = uVar47;
      local_358._s_0.Z = (double)CONCAT44(uVar43,uVar42);
      pTVar40 = UE::Math::TQuat<double>::RotateVector
                          (&local_318,local_190,(TVector<double> *)&local_358._s_0);
      dVar22 = dVar22 + (pTVar40->field0_0x0)._s_0.Y;
      dVar1 = (pTVar40->field0_0x0)._s_0.Z;
      auVar15._8_4_ = SUB84(dVar22,0);
      auVar15._0_8_ = dVar34 + (pTVar40->field0_0x0)._s_0.X;
      auVar15._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar15;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar37 + dVar1;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    }
    else {
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = dVar22;
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar24;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_278;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dStack_270;
      *(undefined4 *)(__return_storage_ptr__->Translation).XY.m128d_f64 = uVar44;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 4) = uVar45;
      *(undefined4 *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) = uVar46;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 0xc) = uVar47;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_398;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar16;
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar6;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar1;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
    }
  }
  else {
    pTVar40 = this->BoundScale;
    dVar6 = (this->DeltaStartTransform).Scale3D.ZW.m128d_f64[0];
    dVar16 = (this->DeltaStartTransform).Scale3D.XY.m128d_f64[1] * (pTVar40->field0_0x0)._s_0.Y;
    dVar1 = (pTVar40->field0_0x0)._s_0.Z;
    auVar13._8_4_ = SUB84(dVar16,0);
    auVar13._0_8_ =
         (this->DeltaStartTransform).Scale3D.XY.m128d_f64[0] * (pTVar40->field0_0x0)._s_0.X;
    auVar13._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar13;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar6 * dVar1;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
    if (param_1) {
      dVar27 = (this->DeltaStartTransform).Rotation.XY.m128d_f64[0];
      dVar28 = (this->DeltaStartTransform).Rotation.XY.m128d_f64[1];
      dVar29 = (this->DeltaStartTransform).Rotation.ZW.m128d_f64[0];
      dVar30 = (this->DeltaStartTransform).Rotation.ZW.m128d_f64[1];
      pTVar39 = UE::Math::TRotator<double>::Quaternion(&local_390,&local_128);
      dVar31 = pTVar39->Z;
      dVar32 = pTVar39->W;
      dVar33 = pTVar39->X;
      dVar34 = pTVar39->Y;
      dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar22 = dVar27 * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               dVar30 * dVar32 +
               dVar28 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar29 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      dVar24 = dVar27 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               dVar30 * dVar34 +
               dVar28 * dVar32 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               dVar29 * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      auVar23._8_4_ = SUB84(dVar24,0);
      auVar23._0_8_ =
           dVar27 * dVar32 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar30 * dVar33 +
           dVar28 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar29 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      auVar23._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar23;
      auVar21._8_4_ = SUB84(dVar22,0);
      auVar21._0_8_ =
           dVar27 * dVar34 * dVar16 + dVar30 * dVar31 + dVar28 * dVar33 * dVar1 +
           dVar29 * dVar32 * dVar6;
      auVar21._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar21;
      local_338.X = (this->DeltaStartTransform).Rotation.XY.m128d_f64[0];
      local_338.Y = (this->DeltaStartTransform).Rotation.XY.m128d_f64[1];
      local_338.Z = (this->DeltaStartTransform).Rotation.ZW.m128d_f64[0];
      local_338.W = (this->DeltaStartTransform).Rotation.ZW.m128d_f64[1];
      dVar6 = (this->DeltaStartTransform).Translation.XY.m128d_f64[0];
      dVar16 = (this->DeltaStartTransform).Translation.XY.m128d_f64[1];
      dVar22 = (this->DeltaStartTransform).Translation.ZW.m128d_f64[0];
      local_378._s_0.Z = (double)CONCAT44(uVar43,uVar42);
      local_378._0_4_ = uVar44;
      local_378._4_4_ = uVar45;
      local_378._8_4_ = uVar46;
      local_378._12_4_ = uVar47;
      pTVar40 = UE::Math::TQuat<double>::RotateVector
                          (&local_338,local_238,(TVector<double> *)&local_378._s_0);
      dVar16 = dVar16 + (pTVar40->field0_0x0)._s_0.Y;
      dVar1 = (pTVar40->field0_0x0)._s_0.Z;
      auVar17._8_4_ = SUB84(dVar16,0);
      auVar17._0_8_ = dVar6 + (pTVar40->field0_0x0)._s_0.X;
      auVar17._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar17;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar22 + dVar1;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    }
    else {
      pTVar39 = UE::Math::TRotator<double>::Quaternion(&local_390,&local_108);
      _Var36 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW;
      _Var35 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW;
      dVar22 = (this->DeltaStartTransform).Rotation.ZW.m128d_f64[0];
      dVar24 = (this->DeltaStartTransform).Rotation.ZW.m128d_f64[1];
      dVar28 = (this->DeltaStartTransform).Rotation.XY.m128d_f64[0];
      dVar29 = (this->DeltaStartTransform).Rotation.XY.m128d_f64[1];
      dVar30 = pTVar39->X;
      dVar31 = pTVar39->Y;
      dVar32 = pTVar39->Z;
      dVar33 = pTVar39->W;
      dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
      dVar1 = dVar30 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              dVar33 * dVar29 +
              dVar31 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              dVar32 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      auVar18._8_4_ = SUB84(dVar1,0);
      auVar18._0_8_ =
           dVar30 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar33 * dVar28 +
           dVar31 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar32 * dVar29 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      auVar18._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar18;
      dVar1 = dVar30 * dVar28 * dVar6 + dVar33 * dVar24 + dVar31 * dVar29 * _Var35.m128d_f64[1] +
              dVar32 * dVar22 * _Var36.m128d_f64[1];
      auVar25._8_4_ = SUB84(dVar1,0);
      auVar25._0_8_ =
           dVar30 * dVar29 * dVar16 + dVar33 * dVar22 + dVar31 * dVar28 * _Var35.m128d_f64[0] +
           dVar32 * dVar24 * _Var36.m128d_f64[0];
      auVar25._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar25;
      dVar16 = (this->DeltaStartTransform).Translation.ZW.m128d_f64[0];
      dVar1 = (double)CONCAT44(uVar47,uVar46) +
              (this->DeltaStartTransform).Translation.XY.m128d_f64[1];
      auVar19._8_4_ = SUB84(dVar1,0);
      auVar19._0_8_ =
           (double)CONCAT44(uVar45,uVar44) + (this->DeltaStartTransform).Translation.XY.m128d_f64[0]
      ;
      auVar19._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar19;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar27 + dVar16;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    }
  }
  return __return_storage_ptr__;
}

// HasVisibleGizmo @ 14cbc8060

bool __thiscall FTransformGizmoDataBinder::HasVisibleGizmo(FTransformGizmoDataBinder *this)

{
  TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr> *this_00;
  bool bVar1;
  char cVar2;
  UObject *pUVar3;
  
  this_00 = &this->CurrentlyTrackedGizmo;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    if (*(longlong *)&pUVar3[1].field_0x10 != 0) {
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      cVar2 = (**(code **)(*(longlong *)pUVar3 + 0x368))(pUVar3);
      if (cVar2 != '\0') {
        return true;
      }
    }
  }
  return false;
}

// InitializeBoundVectors @ 14cbc8680

void __thiscall
FTransformGizmoDataBinder::InitializeBoundVectors
          (FTransformGizmoDataBinder *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  if (param_1 != (TVector<double> *)0x0) {
    this->BoundTranslation = param_1;
  }
  if (param_2 != (TVector<double> *)0x0) {
    this->BoundEulerAngles = param_2;
  }
  if (param_3 != (TVector<double> *)0x0) {
    this->BoundScale = param_3;
  }
  return;
}

// IsInDeltaMode @ 14cbc8840

bool __thiscall FTransformGizmoDataBinder::IsInDeltaMode(FTransformGizmoDataBinder *this)

{
  return this->bUsingDeltaMode;
}

// OnDisplaySpaceTransformChanged @ 14cbc89f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTransformGizmoDataBinder::OnDisplaySpaceTransformChanged
          (FTransformGizmoDataBinder *this,UCombinedTransformGizmo *param_1,
          TOptional<UE::Math::TTransform<double>_> *param_2)

{
  TOptional<UE::Math::TTransform<double>_> *pTVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  
  if (param_1 == (UCombinedTransformGizmo *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8832836549029658333>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Transforms\\TransformGizmoDataBinder.cpp"
                       ,0x123,"Gizmo");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    bVar4 = TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>::
            UEOpEquals<UCombinedTransformGizmo,bool>(&this->CurrentlyTrackedGizmo,param_1);
    if (bVar4) {
      pTVar1 = &this->CurrentCustomLocalReferenceTransform;
      if (param_2 != pTVar1) {
        if (param_2->bIsSet == false) {
          if ((this->CurrentCustomLocalReferenceTransform).bIsSet != false) {
            (this->CurrentCustomLocalReferenceTransform).bIsSet = false;
          }
        }
        else {
          dVar3 = (param_2->TypedValue).Rotation.XY.m128d_f64[1];
          (pTVar1->TypedValue).Rotation.XY.m128d_f64[0] =
               (param_2->TypedValue).Rotation.XY.m128d_f64[0];
          (this->CurrentCustomLocalReferenceTransform).TypedValue.Rotation.XY.m128d_f64[1] = dVar3;
          dVar3 = (param_2->TypedValue).Rotation.ZW.m128d_f64[1];
          (this->CurrentCustomLocalReferenceTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
               (param_2->TypedValue).Rotation.ZW.m128d_f64[0];
          (this->CurrentCustomLocalReferenceTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar3;
          dVar3 = (param_2->TypedValue).Translation.XY.m128d_f64[1];
          (this->CurrentCustomLocalReferenceTransform).TypedValue.Translation.XY.m128d_f64[0] =
               (param_2->TypedValue).Translation.XY.m128d_f64[0];
          (this->CurrentCustomLocalReferenceTransform).TypedValue.Translation.XY.m128d_f64[1] =
               dVar3;
          dVar3 = (param_2->TypedValue).Translation.ZW.m128d_f64[1];
          (this->CurrentCustomLocalReferenceTransform).TypedValue.Translation.ZW.m128d_f64[0] =
               (param_2->TypedValue).Translation.ZW.m128d_f64[0];
          (this->CurrentCustomLocalReferenceTransform).TypedValue.Translation.ZW.m128d_f64[1] =
               dVar3;
          dVar3 = (param_2->TypedValue).Scale3D.XY.m128d_f64[1];
          (this->CurrentCustomLocalReferenceTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
               (param_2->TypedValue).Scale3D.XY.m128d_f64[0];
          (this->CurrentCustomLocalReferenceTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar3;
          dVar3 = (param_2->TypedValue).Scale3D.ZW.m128d_f64[1];
          (this->CurrentCustomLocalReferenceTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
               (param_2->TypedValue).Scale3D.ZW.m128d_f64[0];
          (this->CurrentCustomLocalReferenceTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar3;
          (this->CurrentCustomLocalReferenceTransform).bIsSet = true;
        }
      }
      if ((((this->CurrentCustomLocalReferenceTransform).bIsSet == false) &&
          (&this->DefaultCustomLocalReferenceTransform != pTVar1)) &&
         ((this->DefaultCustomLocalReferenceTransform).bIsSet != false)) {
        dVar3 = (this->DefaultCustomLocalReferenceTransform).TypedValue.Rotation.XY.m128d_f64[1];
        (pTVar1->TypedValue).Rotation.XY.m128d_f64[0] =
             (this->DefaultCustomLocalReferenceTransform).TypedValue.Rotation.XY.m128d_f64[0];
        (this->CurrentCustomLocalReferenceTransform).TypedValue.Rotation.XY.m128d_f64[1] = dVar3;
        dVar3 = (this->DefaultCustomLocalReferenceTransform).TypedValue.Rotation.ZW.m128d_f64[1];
        (this->CurrentCustomLocalReferenceTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
             (this->DefaultCustomLocalReferenceTransform).TypedValue.Rotation.ZW.m128d_f64[0];
        (this->CurrentCustomLocalReferenceTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar3;
        dVar3 = (this->DefaultCustomLocalReferenceTransform).TypedValue.Translation.XY.m128d_f64[1];
        (this->CurrentCustomLocalReferenceTransform).TypedValue.Translation.XY.m128d_f64[0] =
             (this->DefaultCustomLocalReferenceTransform).TypedValue.Translation.XY.m128d_f64[0];
        (this->CurrentCustomLocalReferenceTransform).TypedValue.Translation.XY.m128d_f64[1] = dVar3;
        dVar3 = (this->DefaultCustomLocalReferenceTransform).TypedValue.Translation.ZW.m128d_f64[1];
        (this->CurrentCustomLocalReferenceTransform).TypedValue.Translation.ZW.m128d_f64[0] =
             (this->DefaultCustomLocalReferenceTransform).TypedValue.Translation.ZW.m128d_f64[0];
        (this->CurrentCustomLocalReferenceTransform).TypedValue.Translation.ZW.m128d_f64[1] = dVar3;
        dVar3 = (this->DefaultCustomLocalReferenceTransform).TypedValue.Scale3D.XY.m128d_f64[1];
        (this->CurrentCustomLocalReferenceTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
             (this->DefaultCustomLocalReferenceTransform).TypedValue.Scale3D.XY.m128d_f64[0];
        (this->CurrentCustomLocalReferenceTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar3;
        dVar3 = (this->DefaultCustomLocalReferenceTransform).TypedValue.Scale3D.ZW.m128d_f64[1];
        (this->CurrentCustomLocalReferenceTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
             (this->DefaultCustomLocalReferenceTransform).TypedValue.Scale3D.ZW.m128d_f64[0];
        (this->CurrentCustomLocalReferenceTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar3;
        (this->CurrentCustomLocalReferenceTransform).bIsSet = true;
      }
      UpdateDataValuesFromGizmo(this);
    }
  }
  return;
}

// OnGizmoVisibilityChanged @ 14cbc8b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTransformGizmoDataBinder::OnGizmoVisibilityChanged
          (FTransformGizmoDataBinder *this,UCombinedTransformGizmo *param_1,bool param_2)

{
  TSet<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TSet<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  char cVar9;
  UObject *pUVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res10 [16];
  int local_res20;
  FWeakObjectPtr local_a8;
  TSet<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TSet<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  if (param_1 == (UCombinedTransformGizmo *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8832836549029658320>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Transforms\\TransformGizmoDataBinder.cpp"
                       ,0x130,"GizmoIn");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    cVar9 = (**(code **)(*(longlong *)this + 0x30))();
    if ((cVar9 == '\0') && (param_2)) {
                    /* WARNING: Could not recover jumptable at 0x00014cbc8bb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this + 0x60))(this,param_1);
      return;
    }
    bVar8 = TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>::
            UEOpEquals<UCombinedTransformGizmo,bool>(&this->CurrentlyTrackedGizmo,param_1);
    if ((bVar8) && (!param_2)) {
      iVar4 = *(int *)&(this->BoundGizmos).Elements.field_0x28;
      iStack_98 = 0;
      uStack_94 = 1;
      pTVar1 = &this->BoundGizmos;
      puVar2 = &(this->BoundGizmos).Elements.field_0x10;
      local_80 = 0;
      iStack_84 = 0;
      if (iVar4 != 0) {
        puVar16 = *(uint **)&(this->BoundGizmos).Elements.field_0x20;
        if (puVar16 == (uint *)0x0) {
          puVar16 = (uint *)puVar2;
        }
        uVar14 = *puVar16;
        while (uVar14 == 0) {
          lVar11 = (longlong)iStack_98;
          local_80 = local_80 + 0x20;
          iStack_98 = iStack_98 + 1;
          iStack_84 = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14cbc8c7d;
          uVar14 = puVar16[lVar11 + 1];
        }
        uStack_94 = -uVar14 & uVar14;
        uVar3 = (ulonglong)uStack_94 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_res20 = (int)lVar11;
        iStack_84 = local_80 + -1 + local_res20;
        if (iVar4 < iStack_84) {
          iStack_84 = iVar4;
        }
      }
LAB_14cbc8c7d:
      uVar14 = *(uint *)&(this->BoundGizmos).Elements.field_0x28;
      uVar13 = uVar14 & 0xffffffe0;
      iStack_78 = *(int *)&(this->BoundGizmos).Elements.field_0x8 -
                  *(int *)&(this->BoundGizmos).Elements.field_0x34;
      uStack_88 = 0xffffffff;
      TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
      TStack_68.CurrentBitIndex = iStack_84;
      TStack_68.UnvisitedBitMask = 0xffffffff;
      iVar12 = (int)uVar14 >> 5;
      TStack_68._28_4_ = iStack_84;
      TStack_68.BaseBitIndex = local_80;
      uStack_48 = CONCAT44(uStack_74,iStack_78);
      local_a0 = pTVar1;
      local_90 = puVar2;
      iStack_7c = iStack_84;
      local_70 = pTVar1;
      TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar5 = *(uint *)&(this->BoundGizmos).Elements.field_0x28;
      if (uVar14 != uVar5) {
        puVar15 = *(undefined1 **)&(this->BoundGizmos).Elements.field_0x20;
        if (puVar15 == (undefined1 *)0x0) {
          puVar15 = puVar2;
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
        while (uVar14 == 0) {
          lVar11 = (longlong)iVar12;
          uVar13 = uVar13 + 0x20;
          iVar12 = iVar12 + 1;
          uVar14 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_14cbc8d81;
          uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar14 = (int)lVar11 + -1 + uVar13;
        if ((int)uVar5 < (int)uVar14) {
          uVar14 = uVar5;
        }
      }
LAB_14cbc8d81:
      while( true ) {
        pTVar7 = local_70;
        if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
            (int)uStack_48) {
          `TSparseArray<TSparseSetElement<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_68.CurrentBitIndex == uVar14) &&
            (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (pTVar7 == pTVar1)) break;
        local_a8 = *(FWeakObjectPtr *)
                    (*(longlong *)&pTVar7->Elements + (longlong)TStack_68.CurrentBitIndex * 0x10);
        bVar8 = FWeakObjectPtr::IsValid(&local_a8);
        if ((bVar8) &&
           (pUVar10 = FWeakObjectPtr::Get(&local_a8), *(longlong *)&pUVar10[1].field_0x10 != 0)) {
          pUVar10 = FWeakObjectPtr::Get(&local_a8);
          cVar9 = (**(code **)(*(longlong *)pUVar10 + 0x368))(pUVar10);
          if (cVar9 != '\0') {
            pcVar6 = *(code **)(*(longlong *)this + 0x60);
            pUVar10 = FWeakObjectPtr::Get(&local_a8);
            (*pcVar6)(this,pUVar10);
            return;
          }
        }
        TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
      }
      return;
    }
  }
  return;
}

// OnProxyBeginTransformEdit @ 14cbc8e50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTransformGizmoDataBinder::OnProxyBeginTransformEdit
          (FTransformGizmoDataBinder *this,UTransformProxy *param_1,UCombinedTransformGizmo *param_2
          )

{
  bool bVar1;
  
  if ((param_1 != (UTransformProxy *)0x0) && (this->bIgnoreCallbackForDebouncing == false)) {
    this->bGizmoIsBeingDragged = true;
    if ((this->bChangeDisplayedGizmoOnDrag != false) &&
       (bVar1 = TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>::
                UEOpEquals<UCombinedTransformGizmo,bool>(&this->CurrentlyTrackedGizmo,param_2),
       !bVar1)) {
      (**(code **)(*(longlong *)this + 0x60))(this,param_2);
    }
    bVar1 = TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>::
            UEOpEquals<UCombinedTransformGizmo,bool>(&this->CurrentlyTrackedGizmo,param_2);
    if ((bVar1) && (this->bUsingDeltaMode != false)) {
      (**(code **)(*(longlong *)this + 0x48))(this);
    }
  }
  return;
}

// OnProxyEndTransformEdit @ 14cbc8ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTransformGizmoDataBinder::OnProxyEndTransformEdit
          (FTransformGizmoDataBinder *this,UTransformProxy *param_1,UCombinedTransformGizmo *param_2
          )

{
  this->bGizmoIsBeingDragged = false;
  return;
}

// OnProxyTransformChanged @ 14cbc8ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTransformGizmoDataBinder::OnProxyTransformChanged
          (FTransformGizmoDataBinder *this,UTransformProxy *param_1,TTransform<double> *param_2,
          UCombinedTransformGizmo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  bool bVar6;
  uint uVar7;
  UObject *pUVar8;
  double *pdVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_168 [48];
  double local_138;
  double local_120;
  TTransform<double> local_108;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  if (param_1 == (UTransformProxy *)0x0) {
    return;
  }
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  if (this->bIgnoreCallbackForDebouncing != false) {
    return;
  }
  bVar6 = TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>::
          UEOpEquals<UCombinedTransformGizmo,bool>(&this->CurrentlyTrackedGizmo,param_3);
  if (!bVar6) {
    return;
  }
  if ((this->bGizmoIsBeingDragged != false) || (this->bUsingDeltaMode == false)) {
    UpdateDataValuesFromGizmo(this);
    return;
  }
  pUVar8 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
  GetGizmoTransformFromDataValues(this,&local_108,pUVar8[3].field_0xb == '\x01');
  pUVar8 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
  plVar12 = *(longlong **)&pUVar8[1].field_0x10;
  pdVar9 = (double *)(**(code **)(*plVar12 + 0x2c0))(plVar12,local_a8);
  dVar5 = __real_3f1a36e2e0000000;
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  lVar13 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)(local_108.Rotation.ZW.m128d_f64[1] - pdVar9[3]) >>
                                   0x20) & _UNK_15061cc8c,
                             SUB84(local_108.Rotation.ZW.m128d_f64[1] - pdVar9[3],0) &
                             _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar13;
  auVar1._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)
                                          (local_108.Rotation.ZW.m128d_f64[0] - pdVar9[2]) >> 0x20)
                                   & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(local_108.Rotation.ZW.m128d_f64[0] - pdVar9[2],0) &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  iVar10 = movmskpd((int)plVar12,auVar1);
  lVar13 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)(local_108.Rotation.XY.m128d_f64[1] - pdVar9[1]) >>
                                   0x20) & _UNK_15061cc8c,
                             SUB84(local_108.Rotation.XY.m128d_f64[1] - pdVar9[1],0) &
                             _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar13;
  auVar2._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)(local_108.Rotation.XY.m128d_f64[0] - *pdVar9)
                                         >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(local_108.Rotation.XY.m128d_f64[0] - *pdVar9,0) &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  uVar7 = movmskpd((int)pdVar9,auVar2);
  uVar11 = iVar10 << 2 | uVar7;
  if (uVar11 != 0) {
    lVar13 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)(local_108.Rotation.ZW.m128d_f64[1] + pdVar9[3]) >>
                                     0x20) & _UNK_15061cc8c,
                               SUB84(local_108.Rotation.ZW.m128d_f64[1] + pdVar9[3],0) &
                               _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar13;
    auVar3._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)
                                            (local_108.Rotation.ZW.m128d_f64[0] + pdVar9[2]) >> 0x20
                                           ) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(local_108.Rotation.ZW.m128d_f64[0] + pdVar9[2],0) &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar3._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar11 = movmskpd(uVar11,auVar3);
    lVar13 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)(local_108.Rotation.XY.m128d_f64[1] + pdVar9[1]) >>
                                     0x20) & _UNK_15061cc8c,
                               SUB84(local_108.Rotation.XY.m128d_f64[1] + pdVar9[1],0) &
                               _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar13;
    auVar4._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)
                                            (local_108.Rotation.XY.m128d_f64[0] + *pdVar9) >> 0x20)
                                     & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(local_108.Rotation.XY.m128d_f64[0] + *pdVar9,0) &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar4._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar10 = movmskpd(uVar7,auVar4);
    if ((uVar11 & 0x3fffffff) != 0 || iVar10 != 0) goto LAB_14cbc912e;
  }
  local_138 = local_108.Translation.ZW.m128d_f64[0];
  pUVar8 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
  lVar13 = (**(code **)(**(longlong **)&pUVar8[1].field_0x10 + 0x2c0))
                     (*(longlong **)&pUVar8[1].field_0x10,local_a8);
  local_120 = *(double *)(lVar13 + 0x30);
  local_108.Translation.XY.m128d_f64[0] =
       local_108.Translation.XY.m128d_f64[0] - *(double *)(lVar13 + 0x20);
  uVar7 = SUB84(local_108.Translation.XY.m128d_f64[0],0) & uVar14;
  uVar11 = (uint)((ulonglong)local_108.Translation.XY.m128d_f64[0] >> 0x20) & uVar15;
  if ((((double)CONCAT44(uVar11,uVar7) < dVar5 || (double)CONCAT44(uVar11,uVar7) == dVar5) &&
      (local_108.Translation.XY.m128d_f64[1] =
            local_108.Translation.XY.m128d_f64[1] - *(double *)(lVar13 + 0x28),
      uVar7 = SUB84(local_108.Translation.XY.m128d_f64[1],0) & uVar14,
      uVar11 = (uint)((ulonglong)local_108.Translation.XY.m128d_f64[1] >> 0x20) & uVar15,
      (double)CONCAT44(uVar11,uVar7) < dVar5 || (double)CONCAT44(uVar11,uVar7) == dVar5)) &&
     (uVar7 = SUB84(local_138 - local_120,0) & uVar14,
     uVar11 = (uint)((ulonglong)(local_138 - local_120) >> 0x20) & uVar15,
     (double)CONCAT44(uVar11,uVar7) < dVar5 || (double)CONCAT44(uVar11,uVar7) == dVar5)) {
    local_120 = local_108.Scale3D.ZW.m128d_f64[0];
    pUVar8 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
    lVar13 = (**(code **)(**(longlong **)&pUVar8[1].field_0x10 + 0x2c0))
                       (*(longlong **)&pUVar8[1].field_0x10,local_a8);
    local_138 = *(double *)(lVar13 + 0x50);
    local_108.Scale3D.XY.m128d_f64[0] =
         local_108.Scale3D.XY.m128d_f64[0] - *(double *)(lVar13 + 0x40);
    uVar7 = SUB84(local_108.Scale3D.XY.m128d_f64[0],0) & uVar14;
    uVar11 = (uint)((ulonglong)local_108.Scale3D.XY.m128d_f64[0] >> 0x20) & uVar15;
    if ((((double)CONCAT44(uVar11,uVar7) < dVar5 || (double)CONCAT44(uVar11,uVar7) == dVar5) &&
        (local_108.Scale3D.XY.m128d_f64[1] =
              local_108.Scale3D.XY.m128d_f64[1] - *(double *)(lVar13 + 0x48),
        uVar7 = SUB84(local_108.Scale3D.XY.m128d_f64[1],0) & uVar14,
        uVar11 = (uint)((ulonglong)local_108.Scale3D.XY.m128d_f64[1] >> 0x20) & uVar15,
        (double)CONCAT44(uVar11,uVar7) < dVar5 || (double)CONCAT44(uVar11,uVar7) == dVar5)) &&
       (uVar14 = SUB84(local_120 - local_138,0) & uVar14,
       uVar15 = (uint)((ulonglong)(local_120 - local_138) >> 0x20) & uVar15,
       (double)CONCAT44(uVar15,uVar14) < dVar5 || (double)CONCAT44(uVar15,uVar14) == dVar5)) {
      return;
    }
  }
LAB_14cbc912e:
  (**(code **)(*(longlong *)this + 0x48))(this);
  return;
}

// Reset @ 14cbc9b30

void __thiscall FTransformGizmoDataBinder::Reset(FTransformGizmoDataBinder *this)

{
  undefined1 *puVar1;
  int *piVar2;
  FWeakObjectPtr *pFVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  int iVar7;
  FWeakObjectPtr *this_00;
  ForAnyElementType *this_01;
  ForAnyElementType FVar8;
  ForAnyElementType *pFVar9;
  FWeakObjectPtr local_res8;
  TArray<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  local_58;
  FDestructionSentinel local_48;
  
  TSet<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Array(&this->BoundGizmos,&local_58);
  iVar7 = local_58.ArrayNum;
  pFVar3 = (FWeakObjectPtr *)(local_58.AllocatorInstance.Data + (longlong)iVar7 * 8);
  FVar8.Data = local_58.AllocatorInstance.Data;
  while( true ) {
    if (local_58.ArrayNum != iVar7) {
      `TCheckedPointerIterator<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if ((FWeakObjectPtr *)FVar8.Data == pFVar3) break;
    local_res8 = *(FWeakObjectPtr *)FVar8.Data;
    bVar5 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar5) {
      pcVar4 = *(code **)(*(longlong *)this + 0x20);
      FWeakObjectPtr::Get(&local_res8);
      FWeakObjectPtr::Get(&local_res8);
      (*pcVar4)(this);
    }
    FVar8.Data = FVar8.Data + 8;
  }
  bVar5 = 1 < (this->BoundGizmos).HashSize;
  if (!bVar5) {
    TSet<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::UnhashElements(&this->BoundGizmos);
  }
  puVar1 = &(this->BoundGizmos).Elements.field_0xc;
  *(undefined4 *)&(this->BoundGizmos).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&this->BoundGizmos,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->BoundGizmos).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BoundGizmos).Elements.field_0x34 = 0;
  iVar7 = *(int *)&(this->BoundGizmos).Elements.field_0x2c;
  *(undefined4 *)&(this->BoundGizmos).Elements.field_0x28 = 0;
  if ((iVar7 < 0) || (0x80 < iVar7)) {
    *(undefined4 *)&(this->BoundGizmos).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->BoundGizmos).Elements.field_0x10,0);
  }
  if (bVar5) {
    (this->BoundGizmos).HashSize = 1;
    TSet<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Rehash(&this->BoundGizmos);
  }
  (this->CurrentlyTrackedGizmo).WeakPtr = (FWeakObjectPtr)0x0;
  if ((this->CurrentCustomLocalReferenceTransform).bIsSet != false) {
    (this->CurrentCustomLocalReferenceTransform).bIsSet = false;
  }
  if ((this->DefaultCustomLocalReferenceTransform).bIsSet != false) {
    (this->DefaultCustomLocalReferenceTransform).bIsSet = false;
  }
  this->BoundTranslation = this->VectorsToUseIfUnbound;
  this->BoundEulerAngles = this->VectorsToUseIfUnbound + 1;
  this->BoundScale = this->VectorsToUseIfUnbound + 2;
  this_00 = (FWeakObjectPtr *)(this->ContextObjectsToUnregisterWith).AllocatorInstance.Data;
  iVar7 = (this->ContextObjectsToUnregisterWith).ArrayNum;
  pFVar3 = this_00 + iVar7;
  while( true ) {
    if ((this->ContextObjectsToUnregisterWith).ArrayNum != iVar7) {
      `TCheckedPointerIterator<TWeakObjectPtr<UCombinedTransformGizmoContextObject,FWeakObjectPtr>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (this_00 == pFVar3) break;
    bVar5 = FWeakObjectPtr::IsValid(this_00);
    if (bVar5) {
      pUVar6 = FWeakObjectPtr::Get(this_00);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar6 + 1),this);
    }
    this_00 = this_00 + 1;
  }
  piVar2 = &(this->ContextObjectsToUnregisterWith).ArrayMax;
  (this->ContextObjectsToUnregisterWith).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->ContextObjectsToUnregisterWith).AllocatorInstance,0,piVar2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTrackedGizmoChanged,
             (FWriteAccessScope *)&local_48);
  iVar7 = *(int *)&(this->OnTrackedGizmoChanged).field_0x10;
  this_01 = *(ForAnyElementType **)&(this->OnTrackedGizmoChanged).field_0x8;
  pFVar9 = this_01 + (longlong)iVar7 * 2;
  while( true ) {
    if (*(int *)&(this->OnTrackedGizmoChanged).field_0x10 != iVar7) {
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (this_01 == pFVar9) break;
    if ((*(int *)&this_01[1].Data != 0) && (this_01->Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)this_01->Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_01,0,0,0x10);
      *(undefined4 *)&this_01[1].Data = 0;
    }
    this_01 = this_01 + 2;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnTrackedGizmoChanged,
             false);
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// ResetToDeltaMode @ 14cbc9e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FTransformGizmoDataBinder::ResetToDeltaMode(FTransformGizmoDataBinder *this)

{
  void *pvVar1;
  longlong *plVar2;
  TVector<double> *pTVar3;
  TVector<double> *pTVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  bool bVar24;
  UObject *pUVar25;
  double *pdVar26;
  undefined8 uVar27;
  longlong *plVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStackY_198 [32];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  double local_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [96];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this->bUsingDeltaMode = true;
  dVar7 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dVar8 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  dVar10 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dVar11 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  dVar13 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dVar14 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_138._8_4_ = SUB84(dVar8,0);
  local_138._0_8_ = dVar7;
  local_138._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  local_128._8_4_ = SUB84(dVar11,0);
  local_128._0_8_ = dVar10;
  local_128._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  dVar16 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dVar17 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  dVar19 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  dVar20 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  dVar22 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dVar23 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_118._8_4_ = SUB84(dVar14,0);
  local_118._0_8_ = dVar13;
  local_118._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  local_e8._8_4_ = SUB84(dVar23,0);
  local_e8._0_8_ = dVar22;
  local_e8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  local_108._8_4_ = SUB84(dVar17,0);
  local_108._0_8_ = dVar16;
  local_108._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  local_f8._8_4_ = SUB84(dVar20,0);
  local_f8._0_8_ = dVar19;
  local_f8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  bVar24 = FWeakObjectPtr::IsValid(&(this->CurrentlyTrackedGizmo).WeakPtr);
  if (bVar24) {
    pUVar25 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
    if (*(longlong *)&pUVar25[1].field_0x10 == 0) {
      bVar24 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_8832836549029658441>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Transforms\\TransformGizmoDataBinder.cpp"
                          ,0xb7,"CurrentlyTrackedGizmo->ActiveTarget");
      if (bVar24) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      pUVar25 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
      pdVar26 = (double *)
                (**(code **)(**(longlong **)&pUVar25[1].field_0x10 + 0x2c0))
                          (*(longlong **)&pUVar25[1].field_0x10,local_d8);
      dVar7 = *pdVar26;
      dVar8 = pdVar26[1];
      dVar10 = pdVar26[2];
      dVar11 = pdVar26[3];
      dVar13 = pdVar26[4];
      dVar14 = pdVar26[5];
      dVar16 = pdVar26[6];
      dVar17 = pdVar26[7];
      dVar19 = pdVar26[8];
      dVar20 = pdVar26[9];
      dVar22 = pdVar26[10];
      dVar23 = pdVar26[0xb];
    }
  }
  pvVar1 = *(void **)&this->ActualToBoundConversion;
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = dVar7;
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(this->DeltaStartTransform).Rotation.XY.m128d_f64 = auVar6;
  auVar9._8_4_ = SUB84(dVar11,0);
  auVar9._0_8_ = dVar10;
  auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(this->DeltaStartTransform).Rotation.ZW.m128d_f64 = auVar9;
  auVar12._8_4_ = SUB84(dVar14,0);
  auVar12._0_8_ = dVar13;
  auVar12._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])(this->DeltaStartTransform).Translation.XY.m128d_f64 = auVar12;
  auVar15._8_4_ = SUB84(dVar17,0);
  auVar15._0_8_ = dVar16;
  auVar15._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined1 (*) [16])(this->DeltaStartTransform).Translation.ZW.m128d_f64 = auVar15;
  auVar18._8_4_ = SUB84(dVar20,0);
  auVar18._0_8_ = dVar19;
  auVar18._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  *(undefined1 (*) [16])(this->DeltaStartTransform).Scale3D.XY.m128d_f64 = auVar18;
  auVar21._8_4_ = SUB84(dVar23,0);
  auVar21._0_8_ = dVar22;
  auVar21._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  *(undefined1 (*) [16])(this->DeltaStartTransform).Scale3D.ZW.m128d_f64 = auVar21;
  uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (pvVar1 != (void *)0x0) {
    local_168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uStack_164 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uStack_160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uStack_15c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_158 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    UE::Core::Private::Function::CheckCallable(pvVar1);
    pcVar5 = *(code **)&this->ActualToBoundConversion;
    plVar2 = *(longlong **)&(this->ActualToBoundConversion).field_0x28;
    plVar28 = (longlong *)&(this->ActualToBoundConversion).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar28 = plVar2;
    }
    uVar27 = (**(code **)(*plVar28 + 8))();
    (*pcVar5)(&local_150,uVar27,&local_168);
    uVar29 = local_150;
    uVar30 = uStack_14c;
    uVar31 = uStack_148;
    uVar32 = uStack_144;
    uVar27 = local_140;
  }
  pTVar3 = this->BoundTranslation;
  *(undefined4 *)&pTVar3->field0_0x0 = uVar29;
  *(undefined4 *)((longlong)&pTVar3->field0_0x0 + 4) = uVar30;
  *(undefined4 *)((longlong)&pTVar3->field0_0x0 + 8) = uVar31;
  *(undefined4 *)((longlong)&pTVar3->field0_0x0 + 0xc) = uVar32;
  (pTVar3->field0_0x0)._s_0.Z = (double)uVar27;
  dVar7 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  pTVar3 = this->BoundEulerAngles;
  (pTVar3->field0_0x0)._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  (pTVar3->field0_0x0)._s_0.Y = dVar7;
  (pTVar3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar27 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  pTVar3 = this->BoundScale;
  (pTVar3->field0_0x0)._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (pTVar3->field0_0x0)._s_0.Y = (double)uVar27;
  (pTVar3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  pTVar3 = this->BoundTranslation;
  dVar7 = (pTVar3->field0_0x0)._s_0.Y;
  (this->LastTranslation).field0_0x0._s_0.X = (pTVar3->field0_0x0)._s_0.X;
  (this->LastTranslation).field0_0x0._s_0.Y = dVar7;
  pTVar4 = this->BoundEulerAngles;
  (this->LastTranslation).field0_0x0._s_0.Z = (pTVar3->field0_0x0)._s_0.Z;
  dVar7 = (pTVar4->field0_0x0)._s_0.Y;
  (this->LastEulerAngles).field0_0x0._s_0.X = (pTVar4->field0_0x0)._s_0.X;
  (this->LastEulerAngles).field0_0x0._s_0.Y = dVar7;
  pTVar3 = this->BoundScale;
  (this->LastEulerAngles).field0_0x0._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
  dVar7 = (pTVar3->field0_0x0)._s_0.Y;
  (this->LastScale).field0_0x0._s_0.X = (pTVar3->field0_0x0)._s_0.X;
  (this->LastScale).field0_0x0._s_0.Y = dVar7;
  (this->LastScale).field0_0x0._s_0.Z = (pTVar3->field0_0x0)._s_0.Z;
  return;
}

// SetToDeltaMode @ 14cbcae70

void __thiscall
FTransformGizmoDataBinder::SetToDeltaMode
          (FTransformGizmoDataBinder *this,TTransform<double> *param_1)

{
  double dVar1;
  
  this->bUsingDeltaMode = true;
  dVar1 = (param_1->Rotation).XY.m128d_f64[1];
  (this->DeltaStartTransform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->DeltaStartTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->DeltaStartTransform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (this->DeltaStartTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Translation).XY.m128d_f64[1];
  (this->DeltaStartTransform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (this->DeltaStartTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Translation).ZW.m128d_f64[1];
  (this->DeltaStartTransform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (this->DeltaStartTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->DeltaStartTransform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (this->DeltaStartTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->DeltaStartTransform).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (this->DeltaStartTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  UpdateDataValuesFromGizmo(this);
  return;
}

// SetToDestinationMode @ 14cbcaed0

void __thiscall FTransformGizmoDataBinder::SetToDestinationMode(FTransformGizmoDataBinder *this)

{
  this->bUsingDeltaMode = false;
  UpdateDataValuesFromGizmo(this);
  return;
}

// SetTrackedGizmo @ 14cbcaef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTransformGizmoDataBinder::SetTrackedGizmo
          (FTransformGizmoDataBinder *this,UCombinedTransformGizmo *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ETransformGizmoSubElements EVar9;
  uint uVar10;
  UCombinedTransformGizmo *this_00;
  UObject *pUVar11;
  uint uVar12;
  longlong lVar13;
  FWeakObjectPtr local_res8;
  UCombinedTransformGizmo *local_res18;
  FWeakObjectPtr local_res20;
  UCombinedTransformGizmo *local_48;
  FDestructionSentinel local_40;
  
  bVar5 = TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>::
          UEOpEquals<UCombinedTransformGizmo,bool>(&this->CurrentlyTrackedGizmo,param_1);
  if (bVar5) {
    return;
  }
  if ((param_1 == (UCombinedTransformGizmo *)0x0) ||
     ((param_1->ActiveTarget).field0_0x0.DebugPtr == (UTransformProxy *)0x0)) {
LAB_14cbcb18a:
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8832836549029658493>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Transforms\\TransformGizmoDataBinder.cpp"
                       ,0x83,"Gizmo && Gizmo->ActiveTarget && BoundGizmos.Contains(Gizmo)");
    if (!bVar5) {
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  local_res20 = local_res8;
  iVar8 = TSet<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UCombinedTransformGizmo_const_,FWeakObjectPtr>_>
                    (&this->BoundGizmos,local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                     (TWeakObjectPtr<UCombinedTransformGizmo_const_,FWeakObjectPtr> *)&local_res20);
  if (iVar8 == -1) goto LAB_14cbcb18a;
  local_48 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->CurrentlyTrackedGizmo).WeakPtr,(FObjectPtr)&local_48);
  this_00 = (UCombinedTransformGizmo *)FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
  EVar9 = UCombinedTransformGizmo::GetGizmoElements(this_00);
  TOptional<UE::Math::TTransform<double>_>::operator=
            (&this->CurrentCustomLocalReferenceTransform,&param_1->DisplaySpaceTransform);
  if ((this->CurrentCustomLocalReferenceTransform).bIsSet == false) {
    TOptional<UE::Math::TTransform<double>_>::operator=
              (&this->CurrentCustomLocalReferenceTransform,
               &this->DefaultCustomLocalReferenceTransform);
  }
  pUVar11 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
  this->LastCoordinateSystem = pUVar11[3].field_0xb;
  this->bCurrentGizmoLacksDegreeOfFreedom =
       (EVar9 & (RotateAllAxes|TranslateAllAxes)) != (RotateAllAxes|TranslateAllAxes);
  this->bCurrentGizmoOnlyHasUniformScale =
       (EVar9 & (ScaleUniform|ScaleAllPlanes|ScaleAllAxes)) == ScaleUniform;
  if ((this->bAvoidDestinationModeWhenUnsafe == false) ||
     (cVar6 = (**(code **)(*(longlong *)this + 0x58))(this), cVar6 != '\0')) {
    if (this->bUsingDeltaMode == false) {
      UpdateDataValuesFromGizmo(this);
      goto LAB_14cbcb0a4;
    }
  }
  else if (this->bUsingDeltaMode == false) {
    (**(code **)(*(longlong *)this + 0x48))(this);
    goto LAB_14cbcb0a4;
  }
  (**(code **)(*(longlong *)this + 0x48))(this);
LAB_14cbcb0a4:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTrackedGizmoChanged,
             (FWriteAccessScope *)&local_40);
  puVar1 = &(this->OnTrackedGizmoChanged).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar12 = *(int *)&(this->OnTrackedGizmoChanged).field_0x10 - 1;
  if (-1 < (int)uVar12) {
    lVar13 = (longlong)(int)uVar12 << 4;
    bVar5 = false;
    do {
      uVar10 = 0;
      if ((int)uVar12 < *(int *)&(this->OnTrackedGizmoChanged).field_0x10) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnTrackedGizmoChanged).field_0x8;
      if (((*(int *)(lVar13 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar13 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar3 + 0x68))(), cVar6 == '\0')) {
        bVar5 = true;
      }
      lVar13 = lVar13 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  puVar1 = &(this->OnTrackedGizmoChanged).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnTrackedGizmoChanged,
               false);
  }
  if (local_40.bDestroyed != false) {
    return;
  }
  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  return;
}

// SetTranslationConversionFunctions @ 14cbcb1d0

void __thiscall
FTransformGizmoDataBinder::SetTranslationConversionFunctions
          (FTransformGizmoDataBinder *this,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_2)

{
  longlong *plVar1;
  
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>::operator=
            (&this->ActualToBoundConversion,param_1);
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>::operator=
            (&this->BoundToActualConversion,param_2);
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar1 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_2->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x00014cbcb236. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ShouldDestinationModeBeAllowed @ 14cbcb4d0

bool __thiscall
FTransformGizmoDataBinder::ShouldDestinationModeBeAllowed(FTransformGizmoDataBinder *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  if ((this->bCurrentGizmoLacksDegreeOfFreedom != false) &&
     ((this->CurrentCustomLocalReferenceTransform).bIsSet == false)) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->CurrentlyTrackedGizmo).WeakPtr);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
      if (pUVar2[3].field_0xb == '\x01') {
        return false;
      }
    }
  }
  return true;
}

// UnbindFromGizmo @ 14cbcb890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTransformGizmoDataBinder::UnbindFromGizmo
          (FTransformGizmoDataBinder *this,UCombinedTransformGizmo *param_1,UTransformProxy *param_2
          )

{
  UTransformProxy *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FWeakObjectPtr local_res10 [2];
  FWeakObjectPtr local_res20;
  UCombinedTransformGizmo *local_38;
  FWeakObjectPtr local_30;
  UCombinedTransformGizmo *local_28;
  FWeakObjectPtr local_20;
  
  if (param_1 != (UCombinedTransformGizmo *)0x0) {
    if ((param_1->ActiveTarget).field0_0x0.DebugPtr == (UTransformProxy *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res10[0].ObjectIndex = 0;
      local_res10[0].ObjectSerialNumber = 0;
      local_38 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_38);
      local_30 = local_res10[0];
      iVar4 = TSet<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TWeakObjectPtr<UCombinedTransformGizmo_const_,FWeakObjectPtr>_>
                        (&this->BoundGizmos,
                         local_res10[0].ObjectSerialNumber ^ local_res10[0].ObjectIndex,
                         (TWeakObjectPtr<UCombinedTransformGizmo_const_,FWeakObjectPtr> *)&local_30)
      ;
      if ((iVar4 != -1) &&
         (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8832836549029658147>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Transforms\\TransformGizmoDataBinder.cpp"
                             ,0x1dd,"Gizmo->ActiveTarget || !BoundGizmos.Contains(Gizmo)"), bVar3))
      {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pUVar1 = (param_1->ActiveTarget).field0_0x0.DebugPtr;
    if (pUVar1 != (UTransformProxy *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnBeginTransformEdit
                 ,this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &((param_1->ActiveTarget).field0_0x0.DebugPtr)->OnTransformChanged,this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &((param_1->ActiveTarget).field0_0x0.DebugPtr)->OnEndTransformEdit,this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &((param_1->ActiveTarget).field0_0x0.DebugPtr)->OnBeginPivotEdit,this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &((param_1->ActiveTarget).field0_0x0.DebugPtr)->OnPivotChanged,this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &((param_1->ActiveTarget).field0_0x0.DebugPtr)->OnEndPivotEdit,this);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &param_1->OnDisplaySpaceTransformChanged,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->OnVisibilityChanged,
               this);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_28 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_28);
    local_20 = local_res20;
    if (*(int *)&(this->BoundGizmos).Elements.field_0x8 !=
        *(int *)&(this->BoundGizmos).Elements.field_0x34) {
      TSet<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TWeakObjectPtr<UCombinedTransformGizmo_const_,FWeakObjectPtr>_>
                (&this->BoundGizmos,local_res20.ObjectSerialNumber ^ local_res20.ObjectIndex,
                 (TWeakObjectPtr<UCombinedTransformGizmo_const_,FWeakObjectPtr> *)&local_20);
    }
    bVar3 = TWeakObjectPtr<UCombinedTransformGizmo,FWeakObjectPtr>::
            UEOpEquals<UCombinedTransformGizmo,bool>(&this->CurrentlyTrackedGizmo,param_1);
    if ((bVar3) &&
       ((this->CurrentlyTrackedGizmo).WeakPtr = (FWeakObjectPtr)0x0,
       (this->CurrentCustomLocalReferenceTransform).bIsSet != false)) {
      (this->CurrentCustomLocalReferenceTransform).bIsSet = false;
    }
  }
  return;
}

// UpdateAfterDataEdit @ 14cbcbd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTransformGizmoDataBinder::UpdateAfterDataEdit(FTransformGizmoDataBinder *this)

{
  TVector<double> *pTVar1;
  undefined1 auVar2 [16];
  char cVar3;
  bool bVar4;
  ulonglong uVar5;
  UObject *pUVar6;
  UCombinedTransformGizmo *pUVar7;
  TTransform<double> *pTVar8;
  TVector<double> *pTVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_128 [32];
  double local_108 [4];
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  if (this->bGizmoIsBeingDragged != false) {
    return;
  }
  pTVar1 = this->BoundScale;
  pTVar9 = &this->LastScale;
  dVar16 = (pTVar1->field0_0x0)._s_0.X - (pTVar9->field0_0x0)._s_0.X;
  uVar10 = SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = (uint)((ulonglong)dVar16 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((double)CONCAT44(uVar12,uVar10) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar12,uVar10) == __real_3f1a36e2e0000000) &&
      (dVar16 = (pTVar1->field0_0x0)._s_0.Y - (this->LastScale).field0_0x0._s_0.Y,
      uVar10 = SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar12 = (uint)((ulonglong)dVar16 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar12,uVar10) < __real_3f1a36e2e0000000 ||
      (double)CONCAT44(uVar12,uVar10) == __real_3f1a36e2e0000000)) &&
     (dVar16 = (pTVar1->field0_0x0)._s_0.Z - (this->LastScale).field0_0x0._s_0.Z,
     uVar10 = SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar12 = (uint)((ulonglong)dVar16 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar12,uVar10) < __real_3f1a36e2e0000000 ||
     (double)CONCAT44(uVar12,uVar10) == __real_3f1a36e2e0000000)) {
    pTVar9 = this->BoundTranslation;
    dVar16 = (pTVar9->field0_0x0)._s_0.X - (this->LastTranslation).field0_0x0._s_0.X;
    uVar11 = SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar13 = (uint)((ulonglong)dVar16 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((((double)CONCAT44(uVar13,uVar11) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar13,uVar11) == __real_3f1a36e2e0000000) &&
        (dVar16 = (pTVar9->field0_0x0)._s_0.Y - (this->LastTranslation).field0_0x0._s_0.Y,
        uVar11 = SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar13 = (uint)((ulonglong)dVar16 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar13,uVar11) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar13,uVar11) == __real_3f1a36e2e0000000)) &&
       ((dVar16 = (pTVar9->field0_0x0)._s_0.Z - (this->LastTranslation).field0_0x0._s_0.Z,
        uVar11 = SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar13 = (uint)((ulonglong)dVar16 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar13,uVar11) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar13,uVar11) == __real_3f1a36e2e0000000 &&
        (((pTVar9 = this->BoundEulerAngles,
          dVar16 = (pTVar9->field0_0x0)._s_0.X - (this->LastEulerAngles).field0_0x0._s_0.X,
          uVar11 = SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar13 = (uint)((ulonglong)dVar16 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          (double)CONCAT44(uVar13,uVar11) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar13,uVar11) == __real_3f1a36e2e0000000 &&
          (dVar16 = (pTVar9->field0_0x0)._s_0.Y - (this->LastEulerAngles).field0_0x0._s_0.Y,
          uVar11 = SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar13 = (uint)((ulonglong)dVar16 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          (double)CONCAT44(uVar13,uVar11) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar13,uVar11) == __real_3f1a36e2e0000000)) &&
         (dVar16 = (pTVar9->field0_0x0)._s_0.Z - (this->LastEulerAngles).field0_0x0._s_0.Z,
         uVar11 = SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar13 = (uint)((ulonglong)dVar16 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         (double)CONCAT44(uVar13,uVar11) < __real_3f1a36e2e0000000 ||
         (double)CONCAT44(uVar13,uVar11) == __real_3f1a36e2e0000000)))))) {
      return;
    }
    goto LAB_14cbcbfcf;
  }
  if (this->bCurrentGizmoOnlyHasUniformScale == false) {
    if ((this->bEnforceUniformScaleConstraintsIfPresent == false) ||
       (bVar4 = FWeakObjectPtr::IsValid(&(this->CurrentlyTrackedGizmo).WeakPtr), !bVar4))
    goto LAB_14cbcbfcf;
    pUVar6 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
    cVar3 = (**(code **)(*(longlong *)pUVar6 + 800))(pUVar6);
    if (cVar3 != '\0') goto LAB_14cbcbfcf;
  }
  pTVar1 = this->BoundScale;
  dVar14 = (pTVar1->field0_0x0)._s_0.Y - (this->LastScale).field0_0x0._s_0.Y;
  dVar15 = (pTVar1->field0_0x0)._s_0.X - (this->LastScale).field0_0x0._s_0.X;
  dVar16 = *(double *)((longlong)&pTVar1->field0_0x0 + 0x10) - (this->LastScale).field0_0x0._s_0.Z;
  dVar14 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar13,SUB84(dVar14,0) & uVar11);
  dVar15 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar13,SUB84(dVar15,0) & uVar11);
  uVar11 = SUB84(dVar16,0) & uVar11;
  uVar13 = (uint)((ulonglong)dVar16 >> 0x20) & uVar13;
  if (dVar15 < dVar14) {
    uVar5 = (ulonglong)((dVar14 < (double)CONCAT44(uVar13,uVar11)) + 1);
  }
  else {
    uVar5 = 2;
    if ((double)CONCAT44(uVar13,uVar11) <= dVar15) {
      uVar5 = 0;
    }
  }
  if (this->bInDataEditSequence != false) {
    pTVar9 = &this->ProportionalDragInitialVector;
  }
  local_108[0] = (pTVar9->field0_0x0)._s_0.X;
  local_108[1] = (pTVar9->field0_0x0)._s_0.Y;
  local_108[2] = (pTVar9->field0_0x0)._s_0.Z;
  dVar16 = local_108[uVar5];
  if (local_108[uVar5] == 0.0) {
    local_108[uVar5] = 1.0;
    dVar16 = __real_3ff0000000000000;
  }
  dVar16 = (pTVar1->field0_0x0).XYZ[uVar5] / dVar16;
  auVar2._8_4_ = SUB84(local_108[1] * dVar16,0);
  auVar2._0_8_ = local_108[0] * dVar16;
  auVar2._12_4_ = (int)((ulonglong)(local_108[1] * dVar16) >> 0x20);
  *(undefined1 (*) [16])&pTVar1->field0_0x0 = auVar2;
  *(double *)((longlong)&pTVar1->field0_0x0 + 0x10) = local_108[2] * dVar16;
LAB_14cbcbfcf:
  bVar4 = FWeakObjectPtr::IsValid(&(this->CurrentlyTrackedGizmo).WeakPtr);
  if ((bVar4) &&
     (pUVar6 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr),
     *(longlong *)&pUVar6[1].field_0x10 != 0)) {
    bVar4 = this->bIgnoreCallbackForDebouncing;
    this->bIgnoreCallbackForDebouncing = true;
    if ((this->bInDataEditSequence == false) &&
       (this->bTriggerSequenceBookendsForNonSequenceUpdates != false)) {
      pUVar6 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
      (**(code **)(*(longlong *)pUVar6 + 0x348))(pUVar6);
      pUVar7 = (UCombinedTransformGizmo *)
               FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
      pUVar6 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
      pTVar8 = GetGizmoTransformFromDataValues(this,&local_e8,pUVar6[3].field_0xb == '\x01');
      UCombinedTransformGizmo::UpdateTransformDuringEditSequence(pUVar7,pTVar8,true);
      pUVar6 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
      (**(code **)(*(longlong *)pUVar6 + 0x350))(pUVar6);
      UpdateDataValuesFromGizmo(this);
    }
    else {
      pUVar7 = (UCombinedTransformGizmo *)
               FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
      pUVar6 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
      pTVar8 = GetGizmoTransformFromDataValues(this,&local_88,pUVar6[3].field_0xb == '\x01');
      UCombinedTransformGizmo::UpdateTransformDuringEditSequence(pUVar7,pTVar8,true);
    }
    this->bIgnoreCallbackForDebouncing = bVar4;
  }
  pTVar9 = this->BoundTranslation;
  dVar16 = (pTVar9->field0_0x0)._s_0.Y;
  (this->LastTranslation).field0_0x0._s_0.X = (pTVar9->field0_0x0)._s_0.X;
  (this->LastTranslation).field0_0x0._s_0.Y = dVar16;
  pTVar1 = this->BoundEulerAngles;
  (this->LastTranslation).field0_0x0._s_0.Z = (pTVar9->field0_0x0)._s_0.Z;
  dVar16 = (pTVar1->field0_0x0)._s_0.Y;
  (this->LastEulerAngles).field0_0x0._s_0.X = (pTVar1->field0_0x0)._s_0.X;
  (this->LastEulerAngles).field0_0x0._s_0.Y = dVar16;
  pTVar9 = this->BoundScale;
  (this->LastEulerAngles).field0_0x0._s_0.Z = (pTVar1->field0_0x0)._s_0.Z;
  dVar16 = (pTVar9->field0_0x0)._s_0.Y;
  (this->LastScale).field0_0x0._s_0.X = (pTVar9->field0_0x0)._s_0.X;
  (this->LastScale).field0_0x0._s_0.Y = dVar16;
  (this->LastScale).field0_0x0._s_0.Z = (pTVar9->field0_0x0)._s_0.Z;
  return;
}

// UpdateCoordinateSystem @ 14cbcc1f0

void __thiscall FTransformGizmoDataBinder::UpdateCoordinateSystem(FTransformGizmoDataBinder *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->CurrentlyTrackedGizmo).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
    if (pUVar2[3].field_0xb != this->LastCoordinateSystem) {
      if (this->bUsingDeltaMode != false) {
        (**(code **)(*(longlong *)this + 0x48))(this);
      }
      pUVar2 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
      this->LastCoordinateSystem = pUVar2[3].field_0xb;
      UpdateDataValuesFromGizmo(this);
    }
  }
  return;
}

// UpdateDataValuesFromGizmo @ 14cbcc270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FTransformGizmoDataBinder::UpdateDataValuesFromGizmo(FTransformGizmoDataBinder *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  UObject *pUVar19;
  TRotator<double> *pTVar20;
  TVector<double> *pTVar21;
  undefined8 uVar22;
  TQuat<double> *pTVar23;
  TVector<double> *pTVar24;
  int iVar25;
  uint uVar26;
  longlong *plVar27;
  longlong lVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStackY_4b8 [32];
  undefined1 local_488 [16];
  double local_478;
  TRotator<double> local_470;
  TVector<double>_u_0 local_458;
  TVector<double>_u_0 local_438;
  double local_410;
  double dStack_408;
  undefined8 local_400;
  undefined1 local_3f8 [32];
  TQuat<double> local_3d8;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  TQuat<double> local_398;
  TQuat<double> local_378;
  TQuat<double> local_358;
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  TRotator<double> local_278;
  TRotator<double> local_260 [3];
  TVector<double> local_218;
  TRotator<double> local_200;
  TVector<double> local_1e8 [4];
  TRotator<double> local_188;
  TVector<double> local_170 [4];
  TQuat<double> local_108;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  bVar17 = FWeakObjectPtr::IsValid(&(this->CurrentlyTrackedGizmo).WeakPtr);
  if (bVar17) {
    pUVar19 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
    if (*(longlong *)&pUVar19[1].field_0x10 == 0) {
      bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_8832836549029658610>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Transforms\\TransformGizmoDataBinder.cpp"
                          ,0xe,"CurrentlyTrackedGizmo->ActiveTarget");
      if (bVar17) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      pUVar19 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
      (**(code **)(**(longlong **)&pUVar19[1].field_0x10 + 0x2c0))
                (*(longlong **)&pUVar19[1].field_0x10,&local_e8);
      if (this->bUsingDeltaMode == false) {
        pUVar19 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
        if (((pUVar19[3].field_0xb == '\x01') &&
            ((this->CurrentCustomLocalReferenceTransform).bIsSet != false)) &&
           (&this->CurrentCustomLocalReferenceTransform !=
            (TOptional<UE::Math::TTransform<double>_> *)&local_318)) {
          dVar9 = (this->CurrentCustomLocalReferenceTransform).TypedValue.Scale3D.XY.m128d_f64[1];
          dVar13 = (this->CurrentCustomLocalReferenceTransform).TypedValue.Rotation.XY.m128d_f64[0];
          dVar14 = (this->CurrentCustomLocalReferenceTransform).TypedValue.Rotation.XY.m128d_f64[1];
          dVar15 = (this->CurrentCustomLocalReferenceTransform).TypedValue.Rotation.ZW.m128d_f64[0];
          dVar16 = (this->CurrentCustomLocalReferenceTransform).TypedValue.Rotation.ZW.m128d_f64[1];
          local_2f8 = (this->CurrentCustomLocalReferenceTransform).TypedValue.Translation.XY.
                      m128d_f64[0];
          dStack_2f0 = (this->CurrentCustomLocalReferenceTransform).TypedValue.Translation.XY.
                       m128d_f64[1];
          local_2e8 = (this->CurrentCustomLocalReferenceTransform).TypedValue.Translation.ZW.
                      m128d_f64[0];
          dStack_2e0 = (this->CurrentCustomLocalReferenceTransform).TypedValue.Translation.ZW.
                       m128d_f64[1];
          dVar10 = (this->CurrentCustomLocalReferenceTransform).TypedValue.Scale3D.ZW.m128d_f64[0];
          pTVar21 = this->BoundScale;
          (pTVar21->field0_0x0)._s_0.X =
               local_a8 /
               (this->CurrentCustomLocalReferenceTransform).TypedValue.Scale3D.XY.m128d_f64[0];
          (pTVar21->field0_0x0)._s_0.Y = dStack_a0 / dVar9;
          (pTVar21->field0_0x0)._s_0.Z = local_98 / dVar10;
          dVar7 = dVar13 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar12 = dVar14 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar11 = dVar15 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar10 = dVar16 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          auVar33._8_4_ = SUB84(dVar10,0);
          auVar33._0_8_ = dVar11;
          auVar33._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          dVar9 = dVar7 * local_d8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                  + dStack_e0 * dVar10 +
                  dStack_d0 * dVar12 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                  dVar11 * local_e8 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar10 = dVar7 * local_e8 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                   dStack_d0 * dVar10 +
                   dStack_e0 * dVar12 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                   dVar11 * local_d8 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          local_338._8_4_ = SUB84(dVar9,0);
          local_338._0_8_ =
               dVar7 * dStack_d0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               local_e8 * auVar33._8_8_ +
               local_d8 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar11 * dStack_e0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_338._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_328._8_4_ = SUB84(dVar10,0);
          local_328._0_8_ =
               dVar7 * dStack_e0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               local_d8 * auVar33._8_8_ +
               local_e8 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar11 * dStack_d0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          local_328._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_318 = dVar13;
          dStack_310 = dVar14;
          local_308 = dVar15;
          dStack_300 = dVar16;
          pTVar20 = UE::Math::TRotator<double>::TRotator<double>
                              (local_260,(TQuat<double> *)local_338);
          local_470.Pitch = pTVar20->Pitch;
          local_470.Yaw = pTVar20->Yaw;
          local_470.Roll = pTVar20->Roll;
          local_438._s_0.Z = local_b8 - local_2e8;
          local_438._s_0.X = local_c8 - local_2f8;
          local_438._s_0.Y = dStack_c0 - dStack_2f0;
          local_358.X = dVar13;
          local_358.Y = dVar14;
          local_358.Z = dVar15;
          local_358.W = dVar16;
          pTVar21 = UE::Math::TQuat<double>::UnrotateVector
                              (&local_358,&local_218,(TVector<double> *)&local_438._s_0);
          local_488 = *(undefined1 (*) [16])&pTVar21->field0_0x0;
          local_478 = *(double *)((longlong)&pTVar21->field0_0x0 + 0x10);
          local_c8 = (pTVar21->field0_0x0)._s_0.X;
          dStack_c0 = *(double *)((longlong)&pTVar21->field0_0x0 + 8);
        }
        else {
          local_488._8_8_ = dStack_c0;
          local_488._0_8_ = local_c8;
          local_478 = local_b8;
          local_378.X = local_e8;
          local_378.Y = dStack_e0;
          local_378.Z = local_d8;
          local_378.W = dStack_d0;
          pTVar20 = UE::Math::TRotator<double>::TRotator<double>(&local_200,&local_378);
          local_470.Pitch = pTVar20->Pitch;
          local_470.Yaw = pTVar20->Yaw;
          local_470.Roll = pTVar20->Roll;
          pTVar21 = this->BoundScale;
          (pTVar21->field0_0x0)._s_0.X = local_a8;
          (pTVar21->field0_0x0)._s_0.Y = dStack_a0;
          (pTVar21->field0_0x0)._s_0.Z = local_98;
          local_c8 = (double)local_488._0_8_;
          dStack_c0 = (double)local_488._8_8_;
        }
      }
      else {
        dVar9 = (this->DeltaStartTransform).Scale3D.XY.m128d_f64[1];
        dVar10 = (this->DeltaStartTransform).Scale3D.ZW.m128d_f64[0];
        pTVar21 = this->BoundScale;
        (pTVar21->field0_0x0)._s_0.X =
             local_a8 / (this->DeltaStartTransform).Scale3D.XY.m128d_f64[0];
        (pTVar21->field0_0x0)._s_0.Y = dStack_a0 / dVar9;
        (pTVar21->field0_0x0)._s_0.Z = local_98 / dVar10;
        pUVar19 = FWeakObjectPtr::Get(&(this->CurrentlyTrackedGizmo).WeakPtr);
        dVar9 = (this->DeltaStartTransform).Rotation.XY.m128d_f64[0] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar10 = (this->DeltaStartTransform).Rotation.XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        if (pUVar19[3].field_0xb == '\x01') {
          dVar11 = (this->DeltaStartTransform).Rotation.ZW.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar12 = (this->DeltaStartTransform).Rotation.ZW.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          auVar31._8_4_ = SUB84(dVar12,0);
          auVar31._0_8_ = dVar11;
          auVar31._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          dVar7 = dVar9 * local_d8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                  + dStack_e0 * dVar12 +
                  dStack_d0 * dVar10 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                  dVar11 * local_e8 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar12 = dVar9 * local_e8 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                   dStack_d0 * dVar12 +
                   dStack_e0 * dVar10 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                   dVar11 * local_d8 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          local_3b8._8_4_ = SUB84(dVar7,0);
          local_3b8._0_8_ =
               dVar9 * dStack_d0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               local_e8 * auVar31._8_8_ +
               local_d8 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar11 * dStack_e0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_3b8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
          local_3a8._8_4_ = SUB84(dVar12,0);
          local_3a8._0_8_ =
               dVar9 * dStack_e0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               local_d8 * auVar31._8_8_ +
               local_e8 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar11 * dStack_d0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          local_3a8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          pTVar20 = UE::Math::TRotator<double>::TRotator<double>
                              (&local_278,(TQuat<double> *)local_3b8);
          local_470.Pitch = pTVar20->Pitch;
          local_470.Yaw = pTVar20->Yaw;
          local_458._s_0.Z = local_b8 - (this->DeltaStartTransform).Translation.ZW.m128d_f64[0];
          local_470.Roll = pTVar20->Roll;
          local_3d8.Z = (this->DeltaStartTransform).Rotation.ZW.m128d_f64[0];
          local_3d8.W = (this->DeltaStartTransform).Rotation.ZW.m128d_f64[1];
          local_3d8.X = (this->DeltaStartTransform).Rotation.XY.m128d_f64[0];
          local_3d8.Y = (this->DeltaStartTransform).Rotation.XY.m128d_f64[1];
          local_458._s_0.X = local_c8 - (this->DeltaStartTransform).Translation.XY.m128d_f64[0];
          local_458._s_0.Y = dStack_c0 - (this->DeltaStartTransform).Translation.XY.m128d_f64[1];
          pTVar21 = UE::Math::TQuat<double>::UnrotateVector
                              (&local_3d8,local_170,(TVector<double> *)&local_458._s_0);
          local_488 = *(undefined1 (*) [16])&pTVar21->field0_0x0;
          local_478 = *(double *)((longlong)&pTVar21->field0_0x0 + 0x10);
          local_c8 = (pTVar21->field0_0x0)._s_0.X;
          dStack_c0 = *(double *)((longlong)&pTVar21->field0_0x0 + 8);
        }
        else {
          dVar7 = (this->DeltaStartTransform).Rotation.ZW.m128d_f64[0] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar12 = (this->DeltaStartTransform).Rotation.ZW.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          auVar32._8_4_ = SUB84(local_e8,0);
          auVar32._0_8_ = local_e8;
          auVar32._12_4_ = (int)((ulonglong)local_e8 >> 0x20);
          local_3f8._0_8_ =
               local_e8 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dStack_d0 * dVar9 +
               dStack_e0 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               local_d8 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_3f8._8_8_ =
               auVar32._8_8_ * dVar7 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dStack_d0 * dVar10
               + dStack_e0 * dVar12 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               local_d8 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar11 = local_e8 * dVar9 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                   dStack_d0 * dVar12 +
                   dStack_e0 * dVar10 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                   local_d8 * dVar7 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          local_3f8._24_4_ = SUB84(dVar11,0);
          local_3f8._16_8_ =
               local_e8 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               dStack_d0 * dVar7 +
               dStack_e0 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               local_d8 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          local_3f8._28_4_ = (int)((ulonglong)dVar11 >> 0x20);
          pTVar20 = UE::Math::TRotator<double>::TRotator<double>
                              (&local_188,(TQuat<double> *)local_3f8);
          local_470.Pitch = pTVar20->Pitch;
          local_470.Yaw = pTVar20->Yaw;
          local_478 = local_b8 - (this->DeltaStartTransform).Translation.ZW.m128d_f64[0];
          local_470.Roll = pTVar20->Roll;
          local_c8 = local_c8 - (this->DeltaStartTransform).Translation.XY.m128d_f64[0];
          dStack_c0 = dStack_c0 - (this->DeltaStartTransform).Translation.XY.m128d_f64[1];
          local_488._8_4_ = SUB84(dStack_c0,0);
          local_488._0_8_ = local_c8;
          local_488._12_4_ = (int)((ulonglong)dStack_c0 >> 0x20);
        }
      }
      if (*(void **)&this->ActualToBoundConversion == (void *)0x0) {
        uVar29 = SUB84(local_478,0);
        uVar30 = (undefined4)((ulonglong)local_478 >> 0x20);
      }
      else {
        UE::Core::Private::Function::CheckCallable(*(void **)&this->ActualToBoundConversion);
        pcVar2 = *(code **)&this->ActualToBoundConversion;
        plVar1 = *(longlong **)&(this->ActualToBoundConversion).field_0x28;
        plVar27 = (longlong *)&(this->ActualToBoundConversion).field_0x10;
        if (plVar1 != (longlong *)0x0) {
          plVar27 = plVar1;
        }
        uVar22 = (**(code **)(*plVar27 + 8))();
        (*pcVar2)(&local_410,uVar22,local_488);
        uVar29 = (undefined4)local_400;
        uVar30 = (undefined4)((ulonglong)local_400 >> 0x20);
        local_c8 = local_410;
        dStack_c0 = dStack_408;
      }
      pTVar21 = this->BoundTranslation;
      auVar6._8_4_ = SUB84(dStack_c0,0);
      auVar6._0_8_ = local_c8;
      auVar6._12_4_ = (int)((ulonglong)dStack_c0 >> 0x20);
      *(undefined1 (*) [16])&pTVar21->field0_0x0 = auVar6;
      *(ulonglong *)((longlong)&pTVar21->field0_0x0 + 0x10) = CONCAT44(uVar30,uVar29);
      UE::Math::TQuat<double>::MakeFromEuler(&local_398,this->BoundEulerAngles);
      dVar11 = __real_3f1a36e2e0000000;
      pTVar20 = &local_470;
      pTVar23 = UE::Math::TRotator<double>::Quaternion(pTVar20,&local_108);
      dVar7 = pTVar23->Z + local_398.Z;
      dVar12 = pTVar23->W + local_398.W;
      local_398.Z = local_398.Z - pTVar23->Z;
      local_398.W = local_398.W - pTVar23->W;
      dVar9 = pTVar23->X + local_398.X;
      dVar10 = pTVar23->Y + local_398.Y;
      local_398.X = local_398.X - pTVar23->X;
      local_398.Y = local_398.Y - pTVar23->Y;
      lVar28 = -(ulonglong)
                (dVar11 < (double)CONCAT44((uint)((ulonglong)local_398.W >> 0x20) & _UNK_15061cc8c,
                                           SUB84(local_398.W,0) & _UNK_15061cc88));
      auVar3._8_4_ = (int)lVar28;
      auVar3._0_8_ = -(ulonglong)
                      (dVar11 < (double)CONCAT44((uint)((ulonglong)local_398.Z >> 0x20) &
                                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                 SUB84(local_398.Z,0) &
                                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar3._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
      iVar25 = movmskpd((int)pTVar20,auVar3);
      lVar28 = -(ulonglong)
                (dVar11 < (double)CONCAT44((uint)((ulonglong)local_398.Y >> 0x20) & _UNK_15061cc8c,
                                           SUB84(local_398.Y,0) & _UNK_15061cc88));
      auVar4._8_4_ = (int)lVar28;
      auVar4._0_8_ = -(ulonglong)
                      (dVar11 < (double)CONCAT44((uint)((ulonglong)local_398.X >> 0x20) &
                                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                 SUB84(local_398.X,0) &
                                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar4._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
      uVar18 = movmskpd((int)pTVar23,auVar4);
      uVar26 = iVar25 << 2 | uVar18;
      if (uVar26 != 0) {
        lVar28 = -(ulonglong)
                  (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & _UNK_15061cc8c,
                                             SUB84(dVar12,0) & _UNK_15061cc88));
        auVar5._8_4_ = (int)lVar28;
        auVar5._0_8_ = -(ulonglong)
                        (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                   SUB84(dVar7,0) &
                                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar5._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
        uVar26 = movmskpd(uVar26,auVar5);
        lVar28 = -(ulonglong)
                  (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                                             SUB84(dVar10,0) & _UNK_15061cc88));
        auVar8._8_4_ = (int)lVar28;
        auVar8._0_8_ = -(ulonglong)
                        (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                   SUB84(dVar9,0) &
                                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar8._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
        iVar25 = movmskpd(uVar18,auVar8);
        if ((uVar26 & 0x3fffffff) != 0 || iVar25 != 0) {
          pTVar24 = UE::Math::TRotator<double>::Euler(&local_470,local_1e8);
          pTVar21 = this->BoundEulerAngles;
          dVar9 = (pTVar24->field0_0x0)._s_0.Y;
          (pTVar21->field0_0x0)._s_0.X = (pTVar24->field0_0x0)._s_0.X;
          (pTVar21->field0_0x0)._s_0.Y = dVar9;
          (pTVar21->field0_0x0)._s_0.Z = (pTVar24->field0_0x0)._s_0.Z;
        }
      }
      pTVar21 = this->BoundTranslation;
      dVar9 = (pTVar21->field0_0x0)._s_0.Y;
      (this->LastTranslation).field0_0x0._s_0.X = (pTVar21->field0_0x0)._s_0.X;
      (this->LastTranslation).field0_0x0._s_0.Y = dVar9;
      pTVar24 = this->BoundEulerAngles;
      (this->LastTranslation).field0_0x0._s_0.Z = (pTVar21->field0_0x0)._s_0.Z;
      dVar9 = (pTVar24->field0_0x0)._s_0.Y;
      (this->LastEulerAngles).field0_0x0._s_0.X = (pTVar24->field0_0x0)._s_0.X;
      (this->LastEulerAngles).field0_0x0._s_0.Y = dVar9;
      pTVar21 = this->BoundScale;
      (this->LastEulerAngles).field0_0x0._s_0.Z = (pTVar24->field0_0x0)._s_0.Z;
      dVar9 = (pTVar21->field0_0x0)._s_0.Y;
      (this->LastScale).field0_0x0._s_0.X = (pTVar21->field0_0x0)._s_0.X;
      (this->LastScale).field0_0x0._s_0.Y = dVar9;
      (this->LastScale).field0_0x0._s_0.Z = (pTVar21->field0_0x0)._s_0.Z;
    }
  }
  return;
}

