// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 2

// StaticStruct @ 14dc275c0

UScriptStruct * __cdecl FChaosClothSimulationProperties::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosClothSimulationProperties.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosClothAssetEngine();
    Z_Registration_Info_UScriptStruct_FChaosClothSimulationProperties.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothSimulationProperties,(UObject *)pUVar1
                         ,L"ChaosClothSimulationProperties");
  }
  return Z_Registration_Info_UScriptStruct_FChaosClothSimulationProperties.OuterSingleton;
}

// Initialize @ 14dc51c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FChaosClothSimulationProperties::Initialize
          (FChaosClothSimulationProperties *this,
          TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  TSharedPtr<FManagedArrayCollection_const_,1> *pTVar3;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  FManagedArrayCollection *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  TReferenceControllerBase<1> *pTVar13;
  UObject *pUVar14;
  UClass *pUVar15;
  UChaosClothAssetInteractor *pUVar16;
  longlong *plVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  FCollectionPropertyMutableFacade *this_00;
  FScriptContainerElement *pFVar20;
  undefined1 auStackY_138 [32];
  undefined1 local_108;
  undefined1 local_107 [3];
  uint local_104;
  TSharedPtr<FManagedArrayCollection,1> local_100;
  TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *local_f0;
  FScriptContainerElement *local_e8;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar2 = param_1->ArrayNum;
  local_f0 = param_1;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  iVar10 = (this->PropertyCollections).ArrayNum;
  piVar1 = &(this->PropertyCollections).ArrayMax;
  pTVar3 = (TSharedPtr<FManagedArrayCollection_const_,1> *)
           (this->PropertyCollections).AllocatorInstance.Data;
  if (*piVar1 < (int)uVar2) {
    DestructItems<TSharedPtr<FManagedArrayCollection_const_,1>,int>(pTVar3,iVar10);
    (this->PropertyCollections).ArrayNum = 0;
    if (*piVar1 != uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar2,&(this->PropertyCollections).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FManagedArrayCollection_const_,1>,int>(pTVar3,iVar10);
    (this->PropertyCollections).ArrayNum = 0;
  }
  uVar2 = param_1->ArrayNum;
  if (-1 < (int)uVar2) {
    piVar1 = &(this->CollectionPropertyFacades).ArrayMax;
    pTVar4 = (TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *)
             (this->CollectionPropertyFacades).AllocatorInstance.Data;
    iVar10 = (this->CollectionPropertyFacades).ArrayNum;
    if (*piVar1 < (int)uVar2) {
      DestructItems<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>,int>(pTVar4,iVar10);
      (this->CollectionPropertyFacades).ArrayNum = 0;
      if (*piVar1 != uVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar2,&(this->CollectionPropertyFacades).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>,int>(pTVar4,iVar10);
      (this->CollectionPropertyFacades).ArrayNum = 0;
    }
    pTVar8 = _UNK_150651568;
    pFVar7 = ___xmm_00000000000000000000000000000010;
    local_104 = param_1->ArrayNum;
    uVar12 = (ulonglong)(int)local_104;
    pFVar19 = (param_1->AllocatorInstance).Data;
    local_e8 = pFVar19 + uVar12 * 0x10;
    while( true ) {
      pFVar20 = local_e8;
      if (param_1->ArrayNum != (int)uVar12) {
        local_108 = 0;
        `TCheckedPointerIterator<TSharedRef<FManagedArrayCollection_const_,1>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_108);
      }
      if (pFVar19 == pFVar20) break;
      pTVar13 = ::operator_new(0xc0);
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        local_100.Object = pFVar7;
        local_100.SharedReferenceCount.ReferenceController = pTVar8;
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar13->SharedReferenceCount = (atomic<int>)0x1;
        pTVar13->WeakReferenceCount = (atomic<int>)0x1;
        pTVar13->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFManagedArrayCollection___00_SharedPointerInternals__6B_
        ;
        FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)(pTVar13 + 1));
        if ((FManagedArrayCollection *)(pTVar13 + 1) == (FManagedArrayCollection *)0x0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
        local_100.Object = (FManagedArrayCollection *)(pTVar13 + 1);
        local_100.SharedReferenceCount.ReferenceController = pTVar13;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      pTVar13 = ::operator_new(0x128);
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        this_00 = (FCollectionPropertyMutableFacade *)&DAT_00000010;
        Chaos::Softs::FCollectionPropertyMutableFacade::Copy
                  ((FCollectionPropertyMutableFacade *)&DAT_00000010,
                   *(FManagedArrayCollection **)pFVar19);
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar13->SharedReferenceCount = (atomic<int>)0x1;
        pTVar13->WeakReferenceCount = (atomic<int>)0x1;
        pTVar13->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFCollectionPropertyMutableFacade_Softs_Chaos___00_SharedPointerInternals__6B_
        ;
        Chaos::Softs::FCollectionPropertyMutableFacade::FCollectionPropertyMutableFacade
                  ((FCollectionPropertyMutableFacade *)(pTVar13 + 1),&local_100);
        this_00 = (FCollectionPropertyMutableFacade *)(pTVar13 + 1);
        if (this_00 == (FCollectionPropertyMutableFacade *)0x0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        Chaos::Softs::FCollectionPropertyMutableFacade::Copy
                  (this_00,*(FManagedArrayCollection **)pFVar19);
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar10 = (this->CollectionPropertyFacades).ArrayNum;
      if (iVar10 == (this->CollectionPropertyFacades).ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this->CollectionPropertyFacades).AllocatorInstance,
                            &(this->CollectionPropertyFacades).ArrayMax);
      }
      (this->CollectionPropertyFacades).ArrayNum = iVar10 + 1;
      pFVar20 = (this->CollectionPropertyFacades).AllocatorInstance.Data;
      *(FCollectionPropertyMutableFacade **)(pFVar20 + (longlong)iVar10 * 0x10) = this_00;
      *(TReferenceControllerBase<1> **)(pFVar20 + (longlong)iVar10 * 0x10 + 8) = pTVar13;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      iVar10 = (this->PropertyCollections).ArrayNum;
      if (iVar10 == (this->PropertyCollections).ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this->PropertyCollections).AllocatorInstance,
                            &(this->PropertyCollections).ArrayMax);
      }
      pFVar20 = (this->PropertyCollections).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
      (this->PropertyCollections).ArrayNum = iVar10 + 1;
      *(FManagedArrayCollection **)pFVar20 = local_100.Object;
      *(TReferenceControllerBase<1> **)(pFVar20 + 8) =
           local_100.SharedReferenceCount.ReferenceController;
      if (local_100.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_100.SharedReferenceCount.ReferenceController);
      uVar12 = (ulonglong)local_104;
      pFVar19 = pFVar19 + 0x10;
      param_1 = local_f0;
    }
    pUVar16 = (this->ClothOutfitInteractor).field0_0x0.DebugPtr;
    if (pUVar16 == (UChaosClothAssetInteractor *)0x0) {
      pUVar14 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar14,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar15 = UChaosClothAssetInteractor::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_d8,pUVar15);
      local_d8._8_8_ = pUVar14;
      pUVar16 = (UChaosClothAssetInteractor *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
      if (local_d8._64_8_ != 0) {
        plVar17 = (longlong *)(local_d8 + 0x50);
        if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
          plVar17 = (longlong *)local_d8._104_8_;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar16 != (UChaosClothAssetInteractor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar16);
      }
      (this->ClothOutfitInteractor).field0_0x0.DebugPtr = pUVar16;
    }
    TArray<TWeakPtr<Chaos::Softs::FCollectionPropertyFacade,1>,TSizedDefaultAllocator<32>_>::Reset
              (&pUVar16->CollectionPropertyFacades,(this->CollectionPropertyFacades).ArrayNum);
    iVar10 = (this->CollectionPropertyFacades).ArrayNum;
    pFVar19 = (this->CollectionPropertyFacades).AllocatorInstance.Data;
    pFVar20 = pFVar19 + (longlong)iVar10 * 0x10;
    while( true ) {
      if ((this->CollectionPropertyFacades).ArrayNum != iVar10) {
        `TCheckedPointerIterator<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_107);
      }
      if (pFVar19 == pFVar20) break;
      iVar11 = (pUVar16->CollectionPropertyFacades).ArrayNum;
      piVar1 = &(pUVar16->CollectionPropertyFacades).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(pUVar16->CollectionPropertyFacades).AllocatorInstance,piVar1);
      }
      (pUVar16->CollectionPropertyFacades).ArrayNum = iVar11 + 1;
      pFVar18 = (pUVar16->CollectionPropertyFacades).AllocatorInstance.Data +
                (longlong)iVar11 * 0x10;
      *(undefined8 *)pFVar18 = *(undefined8 *)pFVar19;
      lVar5 = *(longlong *)(pFVar19 + 8);
      *(longlong *)(pFVar18 + 8) = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
        UNLOCK();
      }
      pFVar19 = pFVar19 + 0x10;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

