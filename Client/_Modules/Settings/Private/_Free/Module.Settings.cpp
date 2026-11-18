// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Settings
// Functions: 23

// `dynamic_initializer_for_'ModuleRegistrantSettings'' @ 140f41ba0

void __cdecl _dynamic_initializer_for__ModuleRegistrantSettings__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Settings";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Settings",8);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FSettingsModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 142692d40

void * __thiscall ISettingsModule::_scalar_deleting_destructor_(ISettingsModule *this,uint param_1)

{
  *this = (ISettingsModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142693c30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSettingsModule::StartupModule'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142693c80

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSettingsContainer,SharedPointerInternals::DefaultDeleter<FSettingsContainer>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSettingsContainer,SharedPointerInternals::DefaultDeleter<FSettingsContainer>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142693cc0

void * __thiscall FSettingsModule::_scalar_deleting_destructor_(FSettingsModule *this,uint param_1)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ContainerAddedDelegate).field_0x8,
             *(int *)&(this->ContainerAddedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ContainerAddedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ContainerAddedDelegate);
  *(undefined4 *)&(this->ContainerNamesToViewers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ContainerNamesToViewers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,ISettingsViewer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,ISettingsViewer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,ISettingsViewer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ContainerNamesToViewers);
  *(undefined4 *)&(this->ContainerNamesToContainers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ContainerNamesToContainers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FSettingsContainer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FSettingsContainer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FSettingsContainer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ContainerNamesToContainers);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DefaultSettingsContainer).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// AddLambda<`FSettingsModule::StartupModule'::__l2::<lambda_1>_> @ 142693fd0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_FSettingsModule::StartupModule_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FSettingsModule *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FSettingsModule *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1__StartupModule_FSettingsModule__UEAAXXZ___V__6B_
    ;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (FSettingsModule *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FSettingsModule *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pFVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// DestructItems<TSharedPtr<ISettingsCategory,1>,int> @ 142694220

void __cdecl
DestructItems<TSharedPtr<ISettingsCategory,1>,int>
          (TSharedPtr<ISettingsCategory,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<ISettingsSection,1>,int> @ 142694260

void __cdecl
DestructItems<TSharedPtr<ISettingsSection,1>,int>
          (TSharedPtr<ISettingsSection,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Merge<TSharedPtr<ISettingsCategory,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<ISettingsCategory,1>,`FSettingsContainer::GetCategories'::__l2::<lambda_2>_>_> @ 142695020

void __cdecl
AlgoImpl::
Merge<TSharedPtr<ISettingsCategory,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<ISettingsCategory,1>,_FSettingsContainer::GetCategories_::__l2::<lambda_2>_>_>
          (TSharedPtr<ISettingsCategory,1> *param_1,int param_2,int param_3,FIdentityFunctor param_4
          ,TDereferenceWrapper<TSharedPtr<ISettingsCategory,1>,_public:_virtual_int___cdecl_FSettingsContainer::GetCategories(TArray<TSharedPtr<ISettingsCategory,1>,TSizedDefaultAllocator<32>_>_&)const_::_2_::<lambda_2>_>
           param_5)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  ISettingsCategory *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  TSharedPtr<ISettingsCategory,1> *pTVar8;
  TSharedPtr<ISettingsCategory,1> *pTVar10;
  int iVar11;
  TSharedPtr<ISettingsCategory,1> *pTVar12;
  TSharedPtr<ISettingsCategory,1> *pTVar13;
  TSharedPtr<ISettingsCategory,1> *pTVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  FSettingsContainer *local_68;
  FSettingsContainer *local_60;
  longlong local_58;
  TSharedPtr<ISettingsCategory,1> *pTVar9;
  
  if (0 < param_2) {
    iVar16 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      local_58 = (longlong)param_2;
      iVar11 = 0;
      local_60 = (FSettingsContainer *)(param_1 + local_58);
      if (0 < param_2 - iVar16) {
        uVar15 = param_2 - iVar16;
        do {
          local_68 = (param_5.Predicate)->__this;
          iVar6 = (uVar15 >> 1) + iVar11;
          fVar17 = ``FSettingsContainer::GetCategories'::__l2::<lambda_2>::operator()'::__l2::
                   <lambda_1>::operator()(&local_68,(TSharedPtr<ISettingsCategory,1> *)local_60);
          fVar18 = ``FSettingsContainer::GetCategories'::__l2::<lambda_2>::operator()'::__l2::
                   <lambda_1>::operator()(&local_68,param_1 + (longlong)iVar6 + (longlong)iVar16);
          iVar6 = iVar6 + (uVar15 & 1);
          if (fVar17 < fVar18) {
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
          uVar1 = uVar15 >> 1;
          uVar15 = uVar15 >> 1;
        } while (uVar1 != 0);
      }
      lVar5 = local_58;
      iVar16 = iVar16 + iVar11;
      local_68 = (FSettingsContainer *)CONCAT44(local_68._4_4_,iVar16);
      if (param_2 <= iVar16) {
        return;
      }
      uVar15 = param_3 - param_2;
      pTVar12 = param_1 + iVar16;
      iVar11 = 0;
      if (0 < (int)uVar15) {
        do {
          local_60 = (param_5.Predicate)->__this;
          iVar16 = (uVar15 >> 1) + iVar11;
          fVar17 = ``FSettingsContainer::GetCategories'::__l2::<lambda_2>::operator()'::__l2::
                   <lambda_1>::operator()(&local_60,param_1 + iVar16 + lVar5);
          fVar18 = ``FSettingsContainer::GetCategories'::__l2::<lambda_2>::operator()'::__l2::
                   <lambda_1>::operator()(&local_60,pTVar12);
          if (fVar17 < fVar18) {
            iVar11 = iVar16 + (uVar15 & 1);
          }
          uVar1 = uVar15 >> 1;
          uVar15 = uVar15 >> 1;
        } while (uVar1 != 0);
        iVar16 = (int)local_68;
      }
      iVar6 = (iVar11 - iVar16) + param_2;
      iVar7 = param_2 - iVar16;
      if ((iVar7 != 0) && (iVar7 < iVar6)) {
        pTVar8 = pTVar12 + iVar7;
        pTVar13 = pTVar12;
        pTVar9 = pTVar12 + iVar7;
        do {
          while( true ) {
            pTVar10 = pTVar8 + 1;
            pTVar14 = pTVar13 + 1;
            pTVar2 = (pTVar8->SharedReferenceCount).ReferenceController;
            pIVar3 = pTVar13->Object;
            pTVar4 = (pTVar13->SharedReferenceCount).ReferenceController;
            pTVar13->Object = pTVar8->Object;
            (pTVar13->SharedReferenceCount).ReferenceController = pTVar2;
            pTVar8->Object = pIVar3;
            (pTVar8->SharedReferenceCount).ReferenceController = pTVar4;
            pTVar13 = pTVar14;
            if (pTVar10 == pTVar12 + iVar6) break;
            pTVar8 = pTVar10;
            if (pTVar14 == pTVar9) {
              pTVar9 = pTVar10;
            }
          }
          pTVar8 = pTVar9;
        } while (pTVar14 != pTVar9);
      }
      param_2 = param_2 + iVar11;
      iVar16 = iVar16 + iVar11 + 1;
    } while (iVar16 < param_2);
  }
  return;
}

// RotateInternal<TSharedPtr<ISettingsCategory,1>_> @ 1426956f0

int __cdecl
AlgoImpl::RotateInternal<TSharedPtr<ISettingsCategory,1>_>
          (TSharedPtr<ISettingsCategory,1> *param_1,int param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  ISettingsCategory *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<ISettingsCategory,1> *pTVar4;
  TSharedPtr<ISettingsCategory,1> *pTVar6;
  TSharedPtr<ISettingsCategory,1> *pTVar7;
  TSharedPtr<ISettingsCategory,1> *pTVar8;
  TSharedPtr<ISettingsCategory,1> *pTVar5;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pTVar4 = param_1 + param_3;
    pTVar7 = param_1;
    pTVar5 = param_1 + param_3;
    do {
      while( true ) {
        pTVar6 = pTVar4 + 1;
        pTVar8 = pTVar7 + 1;
        pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
        pIVar2 = pTVar7->Object;
        pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
        pTVar7->Object = pTVar4->Object;
        (pTVar7->SharedReferenceCount).ReferenceController = pTVar1;
        pTVar4->Object = pIVar2;
        (pTVar4->SharedReferenceCount).ReferenceController = pTVar3;
        pTVar7 = pTVar8;
        if (pTVar6 == param_1 + param_2) break;
        pTVar4 = pTVar6;
        if (pTVar8 == pTVar5) {
          pTVar5 = pTVar6;
        }
      }
      pTVar4 = pTVar5;
    } while (pTVar8 != pTVar5);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSortInternal<TSharedPtr<ISettingsCategory,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<ISettingsCategory,1>,`FSettingsContainer::GetCategories'::__l2::<lambda_2>_>_> @ 142695780

void __cdecl
AlgoImpl::
StableSortInternal<TSharedPtr<ISettingsCategory,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<ISettingsCategory,1>,_FSettingsContainer::GetCategories_::__l2::<lambda_2>_>_>
          (TSharedPtr<ISettingsCategory,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<ISettingsCategory,1>,_public:_virtual_int___cdecl_FSettingsContainer::GetCategories(TArray<TSharedPtr<ISettingsCategory,1>,TSizedDefaultAllocator<32>_>_&)const_::_2_::<lambda_2>_>
          param_4)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  ISettingsCategory *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  int iVar5;
  TSharedPtr<ISettingsCategory,1> *pTVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  TSharedPtr<ISettingsCategory,1> *pTVar10;
  float fVar11;
  float fVar12;
  FSettingsContainer *local_48 [4];
  
  iVar8 = 0;
  if (0 < param_2) {
    pTVar10 = param_1 + 1;
    pTVar6 = param_1;
    do {
      if (iVar8 + 1 < param_2) {
        local_48[0] = (param_4.Predicate)->__this;
        fVar11 = ``FSettingsContainer::GetCategories'::__l2::<lambda_2>::operator()'::__l2::
                 <lambda_1>::operator()(local_48,pTVar10);
        fVar12 = ``FSettingsContainer::GetCategories'::__l2::<lambda_2>::operator()'::__l2::
                 <lambda_1>::operator()(local_48,pTVar6);
        if (fVar11 < fVar12) {
          pTVar2 = pTVar6[1].SharedReferenceCount.ReferenceController;
          pIVar3 = pTVar6->Object;
          pTVar4 = (pTVar6->SharedReferenceCount).ReferenceController;
          pTVar6->Object = pTVar6[1].Object;
          (pTVar6->SharedReferenceCount).ReferenceController = pTVar2;
          pTVar6[1].Object = pIVar3;
          pTVar6[1].SharedReferenceCount.ReferenceController = pTVar4;
        }
      }
      iVar8 = iVar8 + 2;
      pTVar10 = pTVar10 + 2;
      pTVar6 = pTVar6 + 2;
    } while (iVar8 < param_2);
  }
  iVar8 = 2;
  if (2 < param_2) {
    do {
      iVar1 = iVar8 * 2;
      iVar5 = 0;
      iVar9 = param_2;
      do {
        iVar7 = iVar9;
        if (iVar1 <= iVar9) {
          iVar7 = iVar1;
        }
        Merge<TSharedPtr<ISettingsCategory,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<ISettingsCategory,1>,_FSettingsContainer::GetCategories_::__l2::<lambda_2>_>_>
                  (param_1 + iVar5,iVar8,iVar7,param_3,param_4);
        iVar5 = iVar5 + iVar1;
        iVar9 = iVar9 + iVar8 * -2;
      } while (iVar5 < param_2);
      iVar8 = iVar1;
    } while (iVar1 < param_2);
  }
  return;
}

// Transform<TMap<FName,TSharedPtr<FSettingsCategory,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsCategory,1>,0>_>,TArray<TSharedPtr<ISettingsCategory,1>,TSizedDefaultAllocator<32>_>_&,`FSettingsContainer::GetCategories'::__l2::<lambda_1>_> @ 1426958c0

void __cdecl
Algo::
Transform<TMap<FName,TSharedPtr<FSettingsCategory,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsCategory,1>,0>_>,TArray<TSharedPtr<ISettingsCategory,1>,TSizedDefaultAllocator<32>_>_&,_FSettingsContainer::GetCategories_::__l2::<lambda_1>_>
          (TMap<FName,TSharedPtr<FSettingsCategory,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsCategory,1>,0>_>
           *param_1,TArray<TSharedPtr<ISettingsCategory,1>,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  TMap<FName,TSharedPtr<FSettingsCategory,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsCategory,1>,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  FScriptContainerElement *pFVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined8 local_b0;
  TReferenceControllerBase<1> *local_a8;
  TMap<FName,TSharedPtr<FSettingsCategory,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsCategory,1>,0>_>
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
  TMap<FName,TSharedPtr<FSettingsCategory,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsCategory,1>,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar8 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_98 = 0;
  local_80 = 0;
  uStack_94 = 1;
  iStack_84 = 0;
  if (iVar8 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    while (uVar11 == 0) {
      lVar9 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14269595d;
      uVar11 = puVar14[lVar9 + 1];
    }
    uStack_94 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_84 = (int)lVar9 + -1 + local_80;
    if (iVar8 < iStack_84) {
      iStack_84 = iVar8;
    }
  }
LAB_14269595d:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar15 = uVar11 & 0xffffffe0;
  iStack_78 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar11 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = param_1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar8 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar3) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar15 = uVar15 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_142695a60;
      uVar11 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar3 < (int)uVar11) {
      uVar11 = uVar3;
    }
  }
LAB_142695a60:
  while( true ) {
    pTVar6 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FSettingsCategory,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar11) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    {
      return;
    }
    lVar9 = *(longlong *)pTVar6;
    pTVar4 = *(TReferenceControllerBase<1> **)
              ((longlong)TStack_68.CurrentBitIndex * 0x20 + 0x10 + lVar9);
    local_b0 = *(undefined8 *)((longlong)TStack_68.CurrentBitIndex * 0x20 + 8 + lVar9);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar13 = (param_2->AllocatorInstance).Data;
    local_a8 = pTVar4;
    if (((pFVar13 <= (FScriptContainerElement *)&local_b0) &&
        ((FScriptContainerElement *)&local_b0 < pFVar13 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) break;
    iVar8 = param_2->ArrayNum;
    if (iVar8 == param_2->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar8 + 1;
    pFVar13 = (param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar13 = local_b0;
    *(TReferenceControllerBase<1> **)(pFVar13 + 8) = local_a8;
    local_a8 = (TReferenceControllerBase<1> *)0x0;
    local_b0 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// operator() @ 142696500

float __thiscall
``FSettingsContainer::GetCategories'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<ISettingsCategory,1> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  float *pfVar5;
  float fVar6;
  FName local_res8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&AdvancedCategoryName,"Advanced");
      _Init_thread_footer(&::_TSS0);
    }
  }
  ::FName::FName(&local_res8,GInternalProjectName);
  lVar1 = *(longlong *)this;
  if (param_1->Object == (ISettingsCategory *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  pFVar4 = (FName *)(**(code **)((longlong)*param_1->Object + 0x20))();
  pfVar5 = TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
           Find((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                 *)(lVar1 + 0x88),*pFVar4);
  if (pfVar5 != (float *)0x0) {
    return *pfVar5;
  }
  if (param_1->Object == (ISettingsCategory *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  pFVar4 = (FName *)(**(code **)((longlong)*param_1->Object + 0x20))();
  if (*pFVar4 == local_res8) {
    return __real_bf800000;
  }
  if (param_1->Object == (ISettingsCategory *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  pFVar4 = (FName *)(**(code **)((longlong)*param_1->Object + 0x20))();
  if (*pFVar4 == AdvancedCategoryName) {
    return __real_3f800000;
  }
  return 0.0;
}

// `scalar_deleting_destructor' @ 1426966a0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSettingsCategory,SharedPointerInternals::DefaultDeleter<FSettingsCategory>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSettingsCategory,SharedPointerInternals::DefaultDeleter<FSettingsCategory>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1426966e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSettingsSection,SharedPointerInternals::DefaultDeleter<FSettingsSection>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSettingsSection,SharedPointerInternals::DefaultDeleter<FSettingsSection>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142696720

void * __thiscall
FNamePermissionList::_scalar_deleting_destructor_(FNamePermissionList *this,uint param_1)

{
  ~FNamePermissionList(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142696760

void * __thiscall
FSettingsCategory::_scalar_deleting_destructor_(FSettingsCategory *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  ITextData *pIVar4;
  longlong *plVar5;
  
  FNamePermissionList::~FNamePermissionList(&this->SectionVisibilityPermissionList);
  *(undefined4 *)&(this->Sections).field_0x48 = 0;
  pvVar3 = *(void **)&(this->Sections).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FSettingsSection,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FSettingsSection,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FSettingsSection,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Sections);
  pIVar4 = (this->DisplayName).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar4 = (this->Description).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  this->_padding_ = (longlong)&___7ISettingsCategory__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142696820

void * __thiscall
FSettingsContainer::_scalar_deleting_destructor_(FSettingsContainer *this,uint param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->SectionRemovedDelegate).field_0x8,
             *(int *)&(this->SectionRemovedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->SectionRemovedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SectionRemovedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->CategoryModifiedDelegate).field_0x8,
             *(int *)&(this->CategoryModifiedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->CategoryModifiedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CategoryModifiedDelegate);
  *(undefined4 *)&(this->CategorySortPriorities).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CategorySortPriorities).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CategorySortPriorities);
  pIVar2 = (this->DisplayName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->Description).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  *(undefined4 *)&(this->Categories).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Categories).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FSettingsCategory,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FSettingsCategory,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FSettingsCategory,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Categories);
  this->_padding_ = (longlong)&___7ISettingsContainer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142696930

void * __thiscall
FSettingsSection::_scalar_deleting_destructor_(FSettingsSection *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ITextData *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->SelectDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StatusDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->SaveDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->SaveDefaultsDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ResetDefaultsDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ModifiedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ImportDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ExportDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CanEditDelegate);
  pIVar3 = (this->DisplayName).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar3 = (this->Description).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pTVar4 = (this->CustomWidget).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  pTVar4 = (this->Category).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  this->_padding_ = (longlong)&___7ISettingsSection__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142696a40

void * __thiscall
ISettingsCategory::_scalar_deleting_destructor_(ISettingsCategory *this,uint param_1)

{
  *this = (ISettingsCategory)&___7ISettingsCategory__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142696a80

void * __thiscall
ISettingsContainer::_scalar_deleting_destructor_(ISettingsContainer *this,uint param_1)

{
  *this = (ISettingsContainer)&___7ISettingsContainer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142696ac0

void * __thiscall
ISettingsSection::_scalar_deleting_destructor_(ISettingsSection *this,uint param_1)

{
  *this = (ISettingsSection)&___7ISettingsSection__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_Settings @ 14269aeb0

void __cdecl IMPLEMENT_MODULE_Settings(void)

{
  return;
}

