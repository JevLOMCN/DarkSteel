// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 20

// StaticClass @ 14dc27ec0

UClass * __cdecl UChaosClothAssetSKMClothingSimulationInteractor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothAssetSKMClothingSimulationInteractor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosClothAssetEngine",L"ChaosClothAssetSKMClothingSimulationInteractor",
               &Z_Registration_Info_UClass_UChaosClothAssetSKMClothingSimulationInteractor.
                InnerSingleton,StaticRegisterNativesUChaosClothAssetSKMClothingSimulationInteractor,
               0xa0,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UChaosClothAssetSKMClothingSimulationInteractor>,
               InternalVTableHelperCtorCaller<UChaosClothAssetSKMClothingSimulationInteractor>,
               local_res8,UClothingSimulationInteractor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothAssetSKMClothingSimulationInteractor.InnerSingleton;
}

// UChaosClothAssetSKMClothingSimulationInteractor @ 14dc35480

UChaosClothAssetSKMClothingSimulationInteractor * __thiscall
UChaosClothAssetSKMClothingSimulationInteractor::UChaosClothAssetSKMClothingSimulationInteractor
          (UChaosClothAssetSKMClothingSimulationInteractor *this,FVTableHelper *param_1)

{
  UClothingSimulationInteractor::UClothingSimulationInteractor
            ((UClothingSimulationInteractor *)this,param_1);
  this->_padding_ = (longlong)&___7UChaosClothAssetSKMClothingSimulationInteractor__6B_;
  (this->Commands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Commands).ArrayNum = 0;
  (this->Commands).ArrayMax = 0;
  return this;
}

// UChaosClothAssetSKMClothingSimulationInteractor @ 14dc354c0

UChaosClothAssetSKMClothingSimulationInteractor * __thiscall
UChaosClothAssetSKMClothingSimulationInteractor::UChaosClothAssetSKMClothingSimulationInteractor
          (UChaosClothAssetSKMClothingSimulationInteractor *this,FObjectInitializer *param_1)

{
  UClothingSimulationInteractor::UClothingSimulationInteractor
            ((UClothingSimulationInteractor *)this,param_1);
  this->_padding_ = (longlong)&___7UChaosClothAssetSKMClothingSimulationInteractor__6B_;
  (this->Commands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Commands).ArrayNum = 0;
  (this->Commands).ArrayMax = 0;
  return this;
}

// ~UChaosClothAssetSKMClothingSimulationInteractor @ 14dc365b0

void __thiscall
UChaosClothAssetSKMClothingSimulationInteractor::~UChaosClothAssetSKMClothingSimulationInteractor
          (UChaosClothAssetSKMClothingSimulationInteractor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UChaosClothAssetSKMClothingSimulationInteractor__6B_;
  DestructItems<TDelegate<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy>
              *)(this->Commands).AllocatorInstance.Data,(this->Commands).ArrayNum);
  pFVar1 = (this->Commands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UClothingSimulationInteractor::~UClothingSimulationInteractor
            ((UClothingSimulationInteractor *)this);
  return;
}

// operator() @ 14dc36e40

void __thiscall
`UChaosClothAssetSKMClothingSimulationInteractor::PhysicsAssetUpdated'::__l2::<lambda_1>::operator()
          (void *this,FSKMClothingSimulation *param_1)

{
  TSharedRef<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *pTVar1;
  TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *pTVar2;
  FClothSimulationProxy *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<UE::Chaos::ClothAsset::FClothSimulationProxy,1> local_18;
  
  pTVar1 = MakeShared<UE::Chaos::ClothAsset::FClothSimulationProxy,1,UE::Chaos::ClothAsset::FSKMClothingSimulation_&>
                     (&local_18,param_1);
  local_20.ReferenceController = (pTVar1->SharedReferenceCount).ReferenceController;
  local_28 = pTVar1->Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &param_1->ClothSimulationProxy;
  if (pTVar2 != (TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *)&local_28) {
    pTVar2->Object = local_28;
    local_28 = (FClothSimulationProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->ClothSimulationProxy).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (pTVar2->Object != (FClothSimulationProxy *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dc36eb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar2->Object->_padding_ + 0x30))();
    return;
  }
  return;
}

// operator() @ 14dc36ed0

void __thiscall
`UChaosClothAssetSKMClothingSimulationInteractor::SetMaxNumIterations'::__l2::<lambda_1>::operator()
          (void *this,FSKMClothingSimulation *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FCollectionPropertyFacade *this_00;
  TArray<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  int *piVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  float fVar8;
  undefined1 local_res10 [16];
  TVector<float>_u_0 local_58;
  TVector<float>_u_0 local_4c [3];
  
  if (param_1 != (FSKMClothingSimulation *)0x0) {
    iVar1 = *(int *)this;
    pTVar4 = UE::Chaos::ClothAsset::FSKMClothingSimulation::GetSolverPropertyFacades(param_1);
    iVar2 = pTVar4->ArrayNum;
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    pFVar7 = pFVar6 + (longlong)iVar2 * 0x10;
    while( true ) {
      if (pTVar4->ArrayNum != iVar2) {
        `TCheckedPointerIterator<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar6 == pFVar7) break;
      this_00 = *(FCollectionPropertyFacade **)pFVar6;
      if (((this_00 != (FCollectionPropertyFacade *)0x0) &&
          (piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                    ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                            *)&this_00->field_0x58,
                           Chaos::FClothingSimulationSolver::MaxNumIterationsName),
          piVar5 != (int *)0x0)) && (iVar3 = *piVar5, iVar3 != -1)) {
        fVar8 = (float)iVar1;
        local_58._s_0.X = fVar8;
        local_58._s_0.Y = fVar8;
        local_58._s_0.Z = fVar8;
        Chaos::Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
                  (this_00,iVar3,(TArrayView<UE::Math::TVector<float>,int> *)&this_00->field_0x18,
                   (TVector<float> *)&local_58._s_0);
        local_4c[0]._0_4_ = fVar8;
        local_4c[0]._4_4_ = fVar8;
        local_4c[0]._8_4_ = fVar8;
        Chaos::Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
                  (this_00,iVar3,(TArrayView<UE::Math::TVector<float>,int> *)&this_00->field_0x28,
                   (TVector<float> *)&local_4c[0]._s_0);
      }
      pFVar6 = pFVar6 + 0x10;
    }
  }
  return;
}

// operator() @ 14dc37000

void __thiscall
`UChaosClothAssetSKMClothingSimulationInteractor::SetNumIterations'::__l2::<lambda_1>::operator()
          (void *this,FSKMClothingSimulation *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FCollectionPropertyFacade *this_00;
  TArray<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  int *piVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  float fVar8;
  undefined1 local_res10 [16];
  TVector<float>_u_0 local_58;
  TVector<float>_u_0 local_4c [3];
  
  if (param_1 != (FSKMClothingSimulation *)0x0) {
    iVar1 = *(int *)this;
    pTVar4 = UE::Chaos::ClothAsset::FSKMClothingSimulation::GetSolverPropertyFacades(param_1);
    iVar2 = pTVar4->ArrayNum;
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    pFVar7 = pFVar6 + (longlong)iVar2 * 0x10;
    while( true ) {
      if (pTVar4->ArrayNum != iVar2) {
        `TCheckedPointerIterator<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar6 == pFVar7) break;
      this_00 = *(FCollectionPropertyFacade **)pFVar6;
      if (((this_00 != (FCollectionPropertyFacade *)0x0) &&
          (piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                    ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                            *)&this_00->field_0x58,
                           Chaos::FClothingSimulationSolver::NumIterationsName),
          piVar5 != (int *)0x0)) && (iVar3 = *piVar5, iVar3 != -1)) {
        fVar8 = (float)iVar1;
        local_58._s_0.X = fVar8;
        local_58._s_0.Y = fVar8;
        local_58._s_0.Z = fVar8;
        Chaos::Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
                  (this_00,iVar3,(TArrayView<UE::Math::TVector<float>,int> *)&this_00->field_0x18,
                   (TVector<float> *)&local_58._s_0);
        local_4c[0]._0_4_ = fVar8;
        local_4c[0]._4_4_ = fVar8;
        local_4c[0]._8_4_ = fVar8;
        Chaos::Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
                  (this_00,iVar3,(TArrayView<UE::Math::TVector<float>,int> *)&this_00->field_0x28,
                   (TVector<float> *)&local_4c[0]._s_0);
      }
      pFVar6 = pFVar6 + 0x10;
    }
  }
  return;
}

// operator() @ 14dc37130

void __thiscall
`UChaosClothAssetSKMClothingSimulationInteractor::SetNumSubsteps'::__l2::<lambda_1>::operator()
          (void *this,FSKMClothingSimulation *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FCollectionPropertyFacade *this_00;
  TArray<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  int *piVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  float fVar8;
  undefined1 local_res10 [16];
  TVector<float>_u_0 local_58;
  TVector<float>_u_0 local_4c [3];
  
  if (param_1 != (FSKMClothingSimulation *)0x0) {
    iVar1 = *(int *)this;
    pTVar4 = UE::Chaos::ClothAsset::FSKMClothingSimulation::GetSolverPropertyFacades(param_1);
    iVar2 = pTVar4->ArrayNum;
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    pFVar7 = pFVar6 + (longlong)iVar2 * 0x10;
    while( true ) {
      if (pTVar4->ArrayNum != iVar2) {
        `TCheckedPointerIterator<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar6 == pFVar7) break;
      this_00 = *(FCollectionPropertyFacade **)pFVar6;
      if (((this_00 != (FCollectionPropertyFacade *)0x0) &&
          (piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                    ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                            *)&this_00->field_0x58,Chaos::FClothingSimulationSolver::NumSubstepsName
                          ), piVar5 != (int *)0x0)) && (iVar3 = *piVar5, iVar3 != -1)) {
        fVar8 = (float)iVar1;
        local_58._s_0.X = fVar8;
        local_58._s_0.Y = fVar8;
        local_58._s_0.Z = fVar8;
        Chaos::Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
                  (this_00,iVar3,(TArrayView<UE::Math::TVector<float>,int> *)&this_00->field_0x18,
                   (TVector<float> *)&local_58._s_0);
        local_4c[0]._0_4_ = fVar8;
        local_4c[0]._4_4_ = fVar8;
        local_4c[0]._8_4_ = fVar8;
        Chaos::Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
                  (this_00,iVar3,(TArrayView<UE::Math::TVector<float>,int> *)&this_00->field_0x28,
                   (TVector<float> *)&local_4c[0]._s_0);
      }
      pFVar6 = pFVar6 + 0x10;
    }
  }
  return;
}

// ClothConfigUpdated @ 14dc40cb0

void __thiscall
UChaosClothAssetSKMClothingSimulationInteractor::ClothConfigUpdated
          (UChaosClothAssetSKMClothingSimulationInteractor *this)

{
  int *piVar1;
  TArray<TDelegate<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFSKMClothingSimulation_ClothAsset_Chaos_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::ClothConfigUpdated'::`2'::<lambda_1>_>
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

// CreateClothingInteractor @ 14dc43990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UChaosClothAssetSKMClothingSimulationInteractor::CreateClothingInteractor
          (UChaosClothAssetSKMClothingSimulationInteractor *this,UClothingAssetBase *param_1,
          int param_2)

{
  int iVar1;
  code *pcVar2;
  UObject *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  longlong *plVar6;
  UClothingAssetBase *pUVar7;
  undefined1 auStack_108 [32];
  UObject *local_e8;
  TPairInitializer<FString_&&,UChaosClothAssetSKMClothingInteractor_*_const_&> local_e0;
  FString *local_d0;
  UObject **local_c8;
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (param_1 != (UClothingAssetBase *)0x0) {
    pUVar5 = UChaosClothAssetSKMClothingAsset::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (pUVar7 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar5->_padding_)) goto LAB_14dc439ea;
  }
  pUVar7 = (UClothingAssetBase *)0x0;
LAB_14dc439ea:
  if (pUVar7 != (UClothingAssetBase *)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = UChaosClothAssetSKMClothingInteractor::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar5);
    local_a8._8_8_ = this;
    local_e8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if ((local_e8 == (UObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ClothingInteractor",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetSKMClothingSimulationInteractor.cpp"
                           ,0x88,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar3 = local_e8;
    *(int *)(local_e8 + 1) = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    *(UClothingAssetBase **)&pUVar3[1].field_0x8 = pUVar7;
    local_e0._4_8_ = param_1->_padding_;
    ::FName::ToString((FName *)((longlong)&local_e0.Key + 4),&local_c0);
    local_d0 = &local_c0;
    local_c8 = &local_e8;
    TSet<TTuple<FName,TObjectPtr<UClothingInteractor>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothingInteractor>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,UChaosClothAssetSKMClothingInteractor_*_const_&>_>
              ((TSet<TTuple<FName,TObjectPtr<UClothingInteractor>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothingInteractor>,0>,FDefaultSetAllocator>
                *)&this->_padding_,&local_e0,(bool *)&local_d0);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// DisableGravityOverride @ 14dc452a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UChaosClothAssetSKMClothingSimulationInteractor::DisableGravityOverride
          (UChaosClothAssetSKMClothingSimulationInteractor *this)

{
  if (2 < (byte)LogChaosClothAsset._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosClothAsset);
    return;
  }
  return;
}

// EnableGravityOverride @ 14dc45870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UChaosClothAssetSKMClothingSimulationInteractor::EnableGravityOverride
          (UChaosClothAssetSKMClothingSimulationInteractor *this,TVector<double> *param_1)

{
  if (2 < (byte)LogChaosClothAsset._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosClothAsset);
    return;
  }
  return;
}

// GetPrivateStaticClass @ 14dc4e590

UClass * __cdecl UChaosClothAssetSKMClothingSimulationInteractor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothAssetSKMClothingSimulationInteractor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosClothAssetEngine",L"ChaosClothAssetSKMClothingSimulationInteractor",
               &Z_Registration_Info_UClass_UChaosClothAssetSKMClothingSimulationInteractor.
                InnerSingleton,StaticRegisterNativesUChaosClothAssetSKMClothingSimulationInteractor,
               0xa0,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UChaosClothAssetSKMClothingSimulationInteractor>,
               InternalVTableHelperCtorCaller<UChaosClothAssetSKMClothingSimulationInteractor>,
               local_res8,UClothingSimulationInteractor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothAssetSKMClothingSimulationInteractor.InnerSingleton;
}

// PhysicsAssetUpdated @ 14dc533b0

void __thiscall
UChaosClothAssetSKMClothingSimulationInteractor::PhysicsAssetUpdated
          (UChaosClothAssetSKMClothingSimulationInteractor *this)

{
  int *piVar1;
  TArray<TDelegate<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFSKMClothingSimulation_ClothAsset_Chaos_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::PhysicsAssetUpdated'::`2'::<lambda_1>_>
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

// SetAnimDriveSpringStiffness @ 14dc572e0

void __thiscall
UChaosClothAssetSKMClothingSimulationInteractor::SetAnimDriveSpringStiffness
          (UChaosClothAssetSKMClothingSimulationInteractor *this,float param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  UChaosClothAssetInteractor *this_00;
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14dc5738d;
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
LAB_14dc5738d:
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
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14dc57490;
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
LAB_14dc57490:
  while( true ) {
    if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothingInteractor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) break;
    lVar9 = this->_padding_ + (longlong)TStack_60.CurrentBitIndex * 0x18;
    if (*(longlong *)(this->_padding_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18) != 0) {
      pUVar8 = UChaosClothAssetInteractor::StaticClass();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)(lVar9 + 8),pUVar8);
      if ((bVar5) &&
         (this_00 = *(UChaosClothAssetInteractor **)(lVar9 + 8),
         this_00 != (UChaosClothAssetInteractor *)0x0)) {
        UChaosClothAssetInteractor::SetFloatPropertyValue
                  (this_00,Chaos::Softs::FPBDAnimDriveConstraint::AnimDriveStiffnessName,-1,param_1)
        ;
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// SetMaxNumIterations @ 14dc586b0

void __thiscall
UChaosClothAssetSKMClothingSimulationInteractor::SetMaxNumIterations
          (UChaosClothAssetSKMClothingSimulationInteractor *this,int param_1)

{
  int *piVar1;
  TArray<TDelegate<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFSKMClothingSimulation_ClothAsset_Chaos_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetMaxNumIterations'::`2'::<lambda_1>_>
               ::_vftable_;
    *(int *)(puVar7 + 3) = param_1;
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

// SetNumIterations @ 14dc58b00

void __thiscall
UChaosClothAssetSKMClothingSimulationInteractor::SetNumIterations
          (UChaosClothAssetSKMClothingSimulationInteractor *this,int param_1)

{
  int *piVar1;
  TArray<TDelegate<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFSKMClothingSimulation_ClothAsset_Chaos_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumIterations'::`2'::<lambda_1>_>
               ::_vftable_;
    *(int *)(puVar7 + 3) = param_1;
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

// SetNumSubsteps @ 14dc58e10

void __thiscall
UChaosClothAssetSKMClothingSimulationInteractor::SetNumSubsteps
          (UChaosClothAssetSKMClothingSimulationInteractor *this,int param_1)

{
  int *piVar1;
  TArray<TDelegate<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVFSKMClothingSimulation_ClothAsset_Chaos_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy,`UChaosClothAssetSKMClothingSimulationInteractor::SetNumSubsteps'::`2'::<lambda_1>_>
               ::_vftable_;
    *(int *)(puVar7 + 3) = param_1;
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

// StaticRegisterNativesUChaosClothAssetSKMClothingSimulationInteractor @ 14dc5a830

void __cdecl
UChaosClothAssetSKMClothingSimulationInteractor::
StaticRegisterNativesUChaosClothAssetSKMClothingSimulationInteractor(void)

{
  return;
}

// Sync @ 14dc5a8f0

void __thiscall
UChaosClothAssetSKMClothingSimulationInteractor::Sync
          (UChaosClothAssetSKMClothingSimulationInteractor *this,
          IClothingSimulationInterface *param_1,IClothingSimulationContext *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  UObject *pUVar6;
  TDelegate<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy>
  *pTVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  longlong lVar13;
  longlong *plVar14;
  FScriptContainerElement *this_00;
  uint uVar15;
  uint uVar16;
  int iVar17;
  longlong *plVar18;
  int iVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  IClothingSimulationContext *local_res18;
  int local_res20;
  undefined4 uStack_b4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FReadAccessScope local_80 [2];
  undefined4 local_4c;
  
  local_res18 = param_2;
  if ((param_1 == (IClothingSimulationInterface *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Simulation",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetSKMClothingSimulationInteractor.cpp"
                         ,0x16,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((param_2 == (IClothingSimulationContext *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetSKMClothingSimulationInteractor.cpp"
                         ,0x17,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar4 = (int)this->_padding_;
  plVar14 = &this->_padding_;
  iVar17 = 0;
  iVar19 = 0;
  uVar10 = 1;
  iVar11 = 0;
  if (iVar4 != 0) {
    plVar18 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar18 = plVar14;
    }
    uVar16 = (uint)*plVar18;
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar11 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14dc5a9ed;
      uVar16 = *(uint *)((longlong)plVar18 + lVar13 * 4 + 4);
    }
    uVar10 = -uVar16 & uVar16;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13;
    iVar11 = iVar19 + -1 + local_res20;
    if (iVar4 < iVar11) {
      iVar11 = iVar4;
    }
  }
LAB_14dc5a9ed:
  uVar16 = (uint)this->_padding_;
  uVar15 = uVar16 & 0xffffffe0;
  TStack_a8._padding_ = CONCAT44(uVar10,iVar17);
  TStack_a8.CurrentBitIndex = iVar11;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_a8._28_4_ = local_4c;
  TStack_a8.BaseBitIndex = iVar19;
  uStack_88 = CONCAT44(uStack_b4,(int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4));
  TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar14;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = (uint)this->_padding_;
  if (uVar16 != uVar10) {
    plVar18 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar18 = plVar14;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)plVar18 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar17;
      uVar15 = uVar15 + 0x20;
      iVar17 = iVar17 + 1;
      uVar16 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_14dc5ab00;
      uVar16 = *(uint *)((longlong)plVar18 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar16 = (int)lVar13 + -1 + uVar15;
    if ((int)uVar10 < (int)uVar16) {
      uVar16 = uVar10;
    }
  }
LAB_14dc5ab00:
  do {
    if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != (int)uStack_88) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothingInteractor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_a8.CurrentBitIndex == uVar16) &&
       (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar14)) {
      iVar4 = (this->Commands).ArrayNum;
      this_00 = (this->Commands).AllocatorInstance.Data;
      pFVar2 = this_00 + (longlong)iVar4 * 0x18;
      while( true ) {
        if ((this->Commands).ArrayNum != iVar4) {
          `TCheckedPointerIterator<TDelegate<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (this_00 == pFVar2) break;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,local_80);
        if (*(int *)&this_00[0x10].field_0x0 == 0) {
          plVar14 = (longlong *)0x0;
        }
        else {
          plVar14 = *(longlong **)&this_00[8].field_0x0;
        }
        (**(code **)(*plVar14 + 0x60))(plVar14,param_1);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (local_80);
        this_00 = this_00 + 0x18;
      }
      piVar1 = &(this->Commands).ArrayMax;
      pTVar7 = (TDelegate<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy>
                *)(this->Commands).AllocatorInstance.Data;
      iVar4 = (this->Commands).ArrayNum;
      if ((this->Commands).ArrayMax < 0) {
        DestructItems<TDelegate<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy>,int>
                  (pTVar7,iVar4);
        (this->Commands).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,&(this->Commands).AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<TDelegate<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy>,int>
                  (pTVar7,iVar4);
        (this->Commands).ArrayNum = 0;
      }
      UClothingSimulationInteractor::Sync((UClothingSimulationInteractor *)this,param_1,local_res18)
      ;
      return;
    }
    lVar13 = this->_padding_ + (longlong)TStack_a8.CurrentBitIndex * 0x18;
    if (*(longlong *)(this->_padding_ + 8 + (longlong)TStack_a8.CurrentBitIndex * 0x18) != 0) {
      pUVar12 = UChaosClothAssetSKMClothingInteractor::StaticClass();
      bVar9 = FObjectPtr::IsA((FObjectPtr *)(lVar13 + 8),pUVar12);
      if (((bVar9) && (*(longlong *)(lVar13 + 8) != 0)) &&
         ((lVar5 = *(longlong *)(*(longlong *)(lVar13 + 8) + 0x30), lVar5 != 0 &&
          (*(int *)(lVar5 + 0x40) != -1)))) {
        uVar10 = UE::Chaos::ClothAsset::FSKMClothingSimulation::GetSimulationGroupId
                           ((FSKMClothingSimulation *)(param_1 + 1),
                            *(UChaosClothAssetBase **)(lVar5 + 0x38),*(int *)(lVar5 + 0x40));
        if ((uVar10 == 0xffffffff) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("SimulationGroupId != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetSKMClothingSimulation.cpp"
                               ,0x3b,L"Invalid arguments"), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar15 = 0;
        if ((int)uVar10 < (int)param_1[5]._padding_) {
          uVar15 = ~uVar10 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pUVar6 = *(UObject **)
                  (*(longlong *)&param_1[4].bIsLegacyInterface + 8 + (longlong)(int)uVar10 * 0x30);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        *(UObject **)(lVar13 + 8) = pUVar6;
      }
    }
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  } while( true );
}

