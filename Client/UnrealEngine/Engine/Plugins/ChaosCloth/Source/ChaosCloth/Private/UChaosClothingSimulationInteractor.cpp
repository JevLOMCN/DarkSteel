// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 16

// StaticClass @ 14db77240

UClass * __cdecl UChaosClothingSimulationInteractor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothingSimulationInteractor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCloth",L"ChaosClothingSimulationInteractor",
               &Z_Registration_Info_UClass_UChaosClothingSimulationInteractor.InnerSingleton,
               StaticRegisterNativesUChaosClothingSimulationInteractor,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UChaosClothingSimulationInteractor>,
               InternalVTableHelperCtorCaller<UChaosClothingSimulationInteractor>,local_res8,
               UClothingSimulationInteractor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothingSimulationInteractor.InnerSingleton;
}

// UChaosClothingSimulationInteractor @ 14db9d9c0

UChaosClothingSimulationInteractor * __thiscall
UChaosClothingSimulationInteractor::UChaosClothingSimulationInteractor
          (UChaosClothingSimulationInteractor *this,FVTableHelper *param_1)

{
  UClothingSimulationInteractor::UClothingSimulationInteractor
            ((UClothingSimulationInteractor *)this,param_1);
  this->_padding_ = (longlong)&___7UChaosClothingSimulationInteractor__6B_;
  (this->Commands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Commands).ArrayNum = 0;
  (this->Commands).ArrayMax = 0;
  (this->ConfigCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigCommands).ArrayNum = 0;
  (this->ConfigCommands).ArrayMax = 0;
  return this;
}

// UChaosClothingSimulationInteractor @ 14db9da10

UChaosClothingSimulationInteractor * __thiscall
UChaosClothingSimulationInteractor::UChaosClothingSimulationInteractor
          (UChaosClothingSimulationInteractor *this,FObjectInitializer *param_1)

{
  UClothingSimulationInteractor::UClothingSimulationInteractor
            ((UClothingSimulationInteractor *)this,param_1);
  this->_padding_ = (longlong)&___7UChaosClothingSimulationInteractor__6B_;
  (this->Commands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Commands).ArrayNum = 0;
  (this->Commands).ArrayMax = 0;
  (this->ConfigCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigCommands).ArrayNum = 0;
  (this->ConfigCommands).ArrayMax = 0;
  return this;
}

// ~UChaosClothingSimulationInteractor @ 14dba0840

void __thiscall
UChaosClothingSimulationInteractor::~UChaosClothingSimulationInteractor
          (UChaosClothingSimulationInteractor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UChaosClothingSimulationInteractor__6B_;
  DestructItems<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>
              *)(this->ConfigCommands).AllocatorInstance.Data,(this->ConfigCommands).ArrayNum);
  pFVar1 = (this->ConfigCommands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegate<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy>
              *)(this->Commands).AllocatorInstance.Data,(this->Commands).ArrayNum);
  pFVar1 = (this->Commands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UClothingSimulationInteractor::~UClothingSimulationInteractor
            ((UClothingSimulationInteractor *)this);
  return;
}

// ClothConfigUpdated @ 14dbc3bf0

void __thiscall
UChaosClothingSimulationInteractor::ClothConfigUpdated(UChaosClothingSimulationInteractor *this)

{
  int *piVar1;
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  longlong lVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  pTVar2 = &this->Commands;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_30);
  local_18 = &local_70;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_70);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulation_Chaos__PEBVFClothingSimulationContextCommon___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::ClothConfigUpdated'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_78) &&
     ((FScriptContainerElement *)&local_78 < pFVar3 + (longlong)(this->Commands).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Commands).ArrayNum;
  piVar1 = &(this->Commands).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  lVar9 = (longlong)iVar6;
  (this->Commands).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar3 + lVar9 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  if (*(void **)(pFVar3 + lVar9 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar3 + lVar9 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar3 + lVar9 * 0x18 + 8) = local_70.DelegateAllocator
  ;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar3 + lVar9 * 0x18 + 0x10) = local_70.DelegateSize;
  local_70.DelegateSize = 0;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return;
}

// CreateClothingInteractor @ 14dbc6b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UClothingInteractor * __thiscall
UChaosClothingSimulationInteractor::CreateClothingInteractor
          (UChaosClothingSimulationInteractor *this)

{
  UClass *pUVar1;
  UClothingInteractor *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UChaosClothingInteractor::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = this;
  pUVar2 = (UClothingInteractor *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// DisableGravityOverride @ 14dbd4a10

void __thiscall
UChaosClothingSimulationInteractor::DisableGravityOverride(UChaosClothingSimulationInteractor *this)

{
  int *piVar1;
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  longlong lVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  pTVar2 = &this->Commands;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_30);
  local_18 = &local_70;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_70);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulation_Chaos__PEBVFClothingSimulationContextCommon___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::DisableGravityOverride'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_78) &&
     ((FScriptContainerElement *)&local_78 < pFVar3 + (longlong)(this->Commands).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Commands).ArrayNum;
  piVar1 = &(this->Commands).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  lVar9 = (longlong)iVar6;
  (this->Commands).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar3 + lVar9 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  if (*(void **)(pFVar3 + lVar9 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar3 + lVar9 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar3 + lVar9 * 0x18 + 8) = local_70.DelegateAllocator
  ;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar3 + lVar9 * 0x18 + 0x10) = local_70.DelegateSize;
  local_70.DelegateSize = 0;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return;
}

// EnableGravityOverride @ 14dbef700

void __thiscall
UChaosClothingSimulationInteractor::EnableGravityOverride
          (UChaosClothingSimulationInteractor *this,TVector<double> *param_1)

{
  int *piVar1;
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  longlong lVar10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  FDelegateAllocation local_80;
  double local_70;
  FMRSWRecursiveAccessDetector *pFStack_68;
  bool local_60;
  FDestructionSentinel local_58;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  double local_20;
  FMRSWRecursiveAccessDetector *pFStack_18;
  double local_10;
  
  local_70 = (param_1->field0_0x0)._s_0.X;
  pFStack_68 = (FMRSWRecursiveAccessDetector *)(param_1->field0_0x0)._s_0.Y;
  pTVar2 = &this->Commands;
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_80.DelegateSize = 0;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  local_20 = local_70;
  pFStack_18 = pFStack_68;
  local_10 = dVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_40);
  local_28 = &local_80;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_80);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulation_Chaos__PEBVFClothingSimulationContextCommon___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::EnableGravityOverride'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar8[3] = local_70;
    puVar8[4] = pFStack_68;
    puVar8[5] = dVar3;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar4 <= (FScriptContainerElement *)&local_88) &&
     ((FScriptContainerElement *)&local_88 < pFVar4 + (longlong)(this->Commands).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->Commands).ArrayNum;
  piVar1 = &(this->Commands).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  lVar10 = (longlong)iVar7;
  (this->Commands).ArrayNum = iVar7 + 1;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar10 * 0x18) = 0;
  *(undefined8 *)(pFVar4 + lVar10 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar4 + lVar10 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_70);
  if (*(void **)(pFVar4 + lVar10 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar4 + lVar10 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar4 + lVar10 * 0x18 + 8) =
       local_80.DelegateAllocator;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar4 + lVar10 * 0x18 + 0x10) = local_80.DelegateSize;
  local_80.DelegateSize = 0;
  if (local_60 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_68,(FDestructionSentinel *)&local_70);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_58);
  if ((local_80.DelegateSize != 0) &&
     (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_80.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_80,0,0,0x10);
    local_80.DelegateSize = 0;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_80.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  return;
}

// GetPrivateStaticClass @ 14dbfefc0

UClass * __cdecl UChaosClothingSimulationInteractor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothingSimulationInteractor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCloth",L"ChaosClothingSimulationInteractor",
               &Z_Registration_Info_UClass_UChaosClothingSimulationInteractor.InnerSingleton,
               StaticRegisterNativesUChaosClothingSimulationInteractor,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UChaosClothingSimulationInteractor>,
               InternalVTableHelperCtorCaller<UChaosClothingSimulationInteractor>,local_res8,
               UClothingSimulationInteractor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothingSimulationInteractor.InnerSingleton;
}

// PhysicsAssetUpdated @ 14dc083e0

void __thiscall
UChaosClothingSimulationInteractor::PhysicsAssetUpdated(UChaosClothingSimulationInteractor *this)

{
  int *piVar1;
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  longlong lVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  pTVar2 = &this->Commands;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_30);
  local_18 = &local_70;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_70);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulation_Chaos__PEBVFClothingSimulationContextCommon___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::PhysicsAssetUpdated'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_78) &&
     ((FScriptContainerElement *)&local_78 < pFVar3 + (longlong)(this->Commands).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Commands).ArrayNum;
  piVar1 = &(this->Commands).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  lVar9 = (longlong)iVar6;
  (this->Commands).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar3 + lVar9 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  if (*(void **)(pFVar3 + lVar9 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar3 + lVar9 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar3 + lVar9 * 0x18 + 8) = local_70.DelegateAllocator
  ;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar3 + lVar9 * 0x18 + 0x10) = local_70.DelegateSize;
  local_70.DelegateSize = 0;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return;
}

// SetAnimDriveSpringStiffness @ 14dc10fc0

void __thiscall
UChaosClothingSimulationInteractor::SetAnimDriveSpringStiffness
          (UChaosClothingSimulationInteractor *this,float param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  UChaosClothingInteractor *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = (int)this->_padding_;
  plVar1 = &this->_padding_;
  iVar12 = 0;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    plVar13 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar13 = plVar1;
    }
    uVar11 = (uint)*plVar13;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14dc1106d;
      uVar11 = *(uint *)((longlong)plVar13 + lVar9 * 4 + 4);
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar7 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14dc1106d:
  uVar11 = (uint)this->_padding_;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,(int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4));
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = (uint)this->_padding_;
  if (uVar11 != uVar6) {
    plVar13 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar13 = plVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)((longlong)plVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14dc11170;
      uVar11 = *(uint *)((longlong)plVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_14dc11170:
  while( true ) {
    if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothingInteractor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) break;
    lVar9 = this->_padding_ + (longlong)TStack_60.CurrentBitIndex * 0x18;
    if (*(longlong *)(this->_padding_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18) != 0) {
      pUVar8 = UChaosClothingInteractor::StaticClass();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)(lVar9 + 8),pUVar8);
      if ((bVar5) &&
         (this_00 = *(UChaosClothingInteractor **)(lVar9 + 8),
         this_00 != (UChaosClothingInteractor *)0x0)) {
        UChaosClothingInteractor::SetAnimDriveLinear(this_00,param_1);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// SetMaxNumIterations @ 14dc12ee0

void __thiscall
UChaosClothingSimulationInteractor::SetMaxNumIterations
          (UChaosClothingSimulationInteractor *this,int param_1)

{
  int *piVar1;
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  longlong lVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  pTVar2 = &this->ConfigCommands;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_30);
  local_18 = &local_70;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_70);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetMaxNumIterations'::`2'::<lambda_1>_>
               ::_vftable_;
    *(int *)(puVar7 + 3) = param_1;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_78) &&
     ((FScriptContainerElement *)&local_78 <
      pFVar3 + (longlong)(this->ConfigCommands).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ConfigCommands).ArrayNum;
  piVar1 = &(this->ConfigCommands).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  lVar9 = (longlong)iVar6;
  (this->ConfigCommands).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar3 + lVar9 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  if (*(void **)(pFVar3 + lVar9 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar3 + lVar9 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar3 + lVar9 * 0x18 + 8) = local_70.DelegateAllocator
  ;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar3 + lVar9 * 0x18 + 0x10) = local_70.DelegateSize;
  local_70.DelegateSize = 0;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return;
}

// SetNumIterations @ 14dc13900

void __thiscall
UChaosClothingSimulationInteractor::SetNumIterations
          (UChaosClothingSimulationInteractor *this,int param_1)

{
  int *piVar1;
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  longlong lVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  pTVar2 = &this->ConfigCommands;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_30);
  local_18 = &local_70;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_70);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumIterations'::`2'::<lambda_1>_>
               ::_vftable_;
    *(int *)(puVar7 + 3) = param_1;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_78) &&
     ((FScriptContainerElement *)&local_78 <
      pFVar3 + (longlong)(this->ConfigCommands).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ConfigCommands).ArrayNum;
  piVar1 = &(this->ConfigCommands).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  lVar9 = (longlong)iVar6;
  (this->ConfigCommands).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar3 + lVar9 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  if (*(void **)(pFVar3 + lVar9 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar3 + lVar9 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar3 + lVar9 * 0x18 + 8) = local_70.DelegateAllocator
  ;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar3 + lVar9 * 0x18 + 0x10) = local_70.DelegateSize;
  local_70.DelegateSize = 0;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return;
}

// SetNumSubsteps @ 14dc13b10

void __thiscall
UChaosClothingSimulationInteractor::SetNumSubsteps
          (UChaosClothingSimulationInteractor *this,int param_1)

{
  int *piVar1;
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  longlong lVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  pTVar2 = &this->ConfigCommands;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_30);
  local_18 = &local_70;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_70);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingSimulationInteractor::SetNumSubsteps'::`2'::<lambda_1>_>
               ::_vftable_;
    *(int *)(puVar7 + 3) = param_1;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_78) &&
     ((FScriptContainerElement *)&local_78 <
      pFVar3 + (longlong)(this->ConfigCommands).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ConfigCommands).ArrayNum;
  piVar1 = &(this->ConfigCommands).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  lVar9 = (longlong)iVar6;
  (this->ConfigCommands).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar3 + lVar9 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  if (*(void **)(pFVar3 + lVar9 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar3 + lVar9 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar3 + lVar9 * 0x18 + 8) = local_70.DelegateAllocator
  ;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar3 + lVar9 * 0x18 + 0x10) = local_70.DelegateSize;
  local_70.DelegateSize = 0;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return;
}

// StaticRegisterNativesUChaosClothingSimulationInteractor @ 14dc1ba70

void __cdecl
UChaosClothingSimulationInteractor::StaticRegisterNativesUChaosClothingSimulationInteractor(void)

{
  return;
}

// Sync @ 14dc1be90

void __thiscall
UChaosClothingSimulationInteractor::Sync
          (UChaosClothingSimulationInteractor *this,IClothingSimulationInterface *param_1,
          IClothingSimulationContext *param_2)

{
  int *piVar1;
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  TDelegate<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy>
  *pTVar6;
  TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy> *pTVar7
  ;
  code *pcVar8;
  bool bVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  IClothingSimulationContext *local_res18;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  local_res18 = param_2;
  if ((param_1 == (IClothingSimulationInterface *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Simulation",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationInteractor.cpp"
                         ,0xf5,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((param_2 == (IClothingSimulationContext *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationInteractor.cpp"
                         ,0xf6,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar2 = &this->Commands;
  iVar5 = (this->Commands).ArrayNum;
  pFVar11 = (pTVar2->AllocatorInstance).Data;
  pFVar4 = pFVar11 + (longlong)iVar5 * 0x18;
  while( true ) {
    if ((this->Commands).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TDelegate<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar4) break;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pFVar11,&local_68);
    plVar10 = (longlong *)0x0;
    if (*(int *)(pFVar11 + 0x10) != 0) {
      plVar10 = *(longlong **)(pFVar11 + 8);
    }
    (**(code **)(*plVar10 + 0x60))(plVar10,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    pFVar11 = pFVar11 + 0x18;
  }
  piVar1 = &(this->Commands).ArrayMax;
  pTVar6 = (TDelegate<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy>
            *)(pTVar2->AllocatorInstance).Data;
  iVar5 = (this->Commands).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TDelegate<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy>,int>
              (pTVar6,iVar5);
    (this->Commands).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TDelegate<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy>,int>
              (pTVar6,iVar5);
    (this->Commands).ArrayNum = 0;
  }
  pTVar3 = &this->ConfigCommands;
  iVar5 = (this->ConfigCommands).ArrayNum;
  pFVar11 = (pTVar3->AllocatorInstance).Data;
  pFVar4 = pFVar11 + (longlong)iVar5 * 0x18;
  while( true ) {
    if ((this->ConfigCommands).ArrayNum != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar11 == pFVar4) break;
    if ((**(char **)(*(longlong *)&param_1[2].bIsLegacyInterface + 0xb0) == '\0') &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6241408434021859070>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationInteractor.cpp"
                           ,0x102,
                           "static_cast<Chaos::FClothingSimulation*>(Simulation)->GetSolver()->GetConfig()->IsLegacySingleLOD()"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pFVar11,&local_50);
    if (*(int *)(pFVar11 + 0x10) == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = *(longlong **)(pFVar11 + 8);
    }
    (**(code **)(*plVar10 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    pFVar11 = pFVar11 + 0x18;
  }
  piVar1 = &(this->ConfigCommands).ArrayMax;
  pTVar7 = (TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>
            *)(pTVar3->AllocatorInstance).Data;
  iVar5 = (this->ConfigCommands).ArrayNum;
  if ((this->ConfigCommands).ArrayMax < 0) {
    DestructItems<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,int>
              (pTVar7,iVar5);
    (this->ConfigCommands).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,int>
              (pTVar7,iVar5);
    (this->ConfigCommands).ArrayNum = 0;
  }
  UClothingSimulationInteractor::Sync
            ((UClothingSimulationInteractor *)this,(IClothingSimulation *)param_1,local_res18);
  return;
}

