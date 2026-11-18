// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 35

// SetSkeleton_WrapperImpl @ 14dc28ad0

void __cdecl UChaosClothAsset::SetSkeleton_WrapperImpl(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014dc28ad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x410))(param_1,*(undefined8 *)param_2);
  return;
}

// StaticClass @ 14dc28b20

UClass * __cdecl UChaosClothAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosClothAssetEngine",L"ChaosClothAsset",
               &Z_Registration_Info_UClass_UChaosClothAsset.InnerSingleton,
               StaticRegisterNativesUChaosClothAsset,0x3d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UChaosClothAsset>,
               InternalVTableHelperCtorCaller<UChaosClothAsset>,local_res8,
               UChaosClothAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothAsset.InnerSingleton;
}

// UChaosClothAsset @ 14dc34c40

UChaosClothAsset * __thiscall
UChaosClothAsset::UChaosClothAsset(UChaosClothAsset *this,FVTableHelper *param_1)

{
  UChaosClothAssetBase::UChaosClothAssetBase((UChaosClothAssetBase *)this,param_1);
  this->bSmoothTransition_DEPRECATED = true;
  this->bUseMultipleInfluences_DEPRECATED = false;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowContentOwner__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowInstanceInterface__;
  (this->Skeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  (this->PhysicsAsset).field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  (this->AssetGuid).B = 0;
  (this->AssetGuid).C = 0;
  (this->AssetGuid).D = 0;
  (this->ClothCollections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClothCollections).ArrayNum = 0;
  (this->ClothCollections).ArrayMax = 0;
  (this->ClothSimulationModel).Object = (FChaosClothSimulationModel *)0x0;
  (this->ClothSimulationModel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->SkinningKernelRadius_DEPRECATED = 30.0;
  (this->AssetGuid).A = 0;
  return this;
}

// UChaosClothAsset @ 14dc34ce0

UChaosClothAsset * __thiscall
UChaosClothAsset::UChaosClothAsset(UChaosClothAsset *this,FObjectInitializer *param_1)

{
  TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FName *pFVar4;
  FName local_res8;
  TSharedRef<FManagedArrayCollection,1> local_38;
  undefined1 local_28 [32];
  
  UChaosClothAssetBase::UChaosClothAssetBase((UChaosClothAssetBase *)this,param_1);
  this->bSmoothTransition_DEPRECATED = true;
  this->bUseMultipleInfluences_DEPRECATED = false;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  pTVar1 = &this->ClothCollections;
  this->SkinningKernelRadius_DEPRECATED = 30.0;
  (this->AssetGuid).A = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowContentOwner__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowInstanceInterface__;
  (this->Skeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  (this->PhysicsAsset).field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  (this->AssetGuid).B = 0;
  (this->AssetGuid).C = 0;
  (this->AssetGuid).D = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ClothCollections).ArrayNum = 0;
  (this->ClothCollections).ArrayMax = 0;
  (this->ClothSimulationModel).Object = (FChaosClothSimulationModel *)0x0;
  (this->ClothSimulationModel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar4 = ::FName::FName(&local_res8,L"ClothAssetTerminal");
  FDataflowInstance::SetDataflowTerminal((FDataflowInstance *)&this->_padding_,*pFVar4);
  MakeShared<FManagedArrayCollection,1>(&local_38);
  UE::Chaos::ClothAsset::FCollectionClothFacade::FCollectionClothFacade
            ((FCollectionClothFacade *)local_28,&local_38);
  UE::Chaos::ClothAsset::FCollectionClothFacade::DefineSchema
            ((FCollectionClothFacade *)local_28,None);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x800000000,ReadWrite)
  ;
  iVar3 = (this->ClothCollections).ArrayNum;
  if (iVar3 == (this->ClothCollections).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&(this->ClothCollections).ArrayMax);
  }
  (this->ClothCollections).ArrayNum = iVar3 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(FManagedArrayCollection **)(pFVar2 + (longlong)iVar3 * 0x10) = local_38.Object;
  *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar3 * 0x10 + 8) =
       local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._16_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return this;
}

// ~UChaosClothAsset @ 14dc362f0

void __thiscall UChaosClothAsset::~UChaosClothAsset(UChaosClothAsset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowContentOwner__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowInstanceInterface__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClothSimulationModel).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<FManagedArrayCollection_const_,1>,int>
            ((TSharedRef<FManagedArrayCollection_const_,1> *)
             (this->ClothCollections).AllocatorInstance.Data,(this->ClothCollections).ArrayNum);
  pFVar1 = (this->ClothCollections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UChaosClothAssetBase::~UChaosClothAssetBase((UChaosClothAssetBase *)this);
  return;
}

// BeginPostLoadInternal @ 14dc39e70

void __thiscall
UChaosClothAsset::BeginPostLoadInternal
          (UChaosClothAsset *this,FSkinnedAssetPostLoadContext *param_1)

{
  return;
}

// Build @ 14dc39e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UChaosClothAsset::Build
          (UChaosClothAsset *this,
          TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FChaosClothAssetLodTransitionDataCache,TSizedDefaultAllocator<32>_> *param_2,
          FText *param_3,FText *param_4)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  byte *pbVar2;
  FName *pFVar3;
  TSharedRef<FManagedArrayCollection_const_,1> *pTVar4;
  code *pcVar5;
  FManagedArrayCollection *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  ForAnyElementType *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  FText *pFVar15;
  FTextFormat *pFVar16;
  FText *pFVar17;
  TArrayView<FSoftObjectPath,int> *pTVar18;
  UObject *pUVar19;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar20;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_01;
  FSoftObjectPath *pFVar21;
  undefined8 uVar22;
  FReferenceSkeleton *pFVar23;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *pTVar24;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar25;
  UPhysicsAsset *pUVar26;
  UClass *pUVar27;
  TRefCountPtr<ITextData> TVar28;
  ulonglong uVar29;
  FScriptContainerElement *pFVar30;
  longlong lVar31;
  longlong lVar32;
  ForAnyElementType FVar33;
  TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *pTVar34;
  uint uVar35;
  uint uVar36;
  FFormatArgumentValue_u_8 FVar37;
  uint uVar38;
  UChaosClothAsset *pUVar39;
  int *piVar40;
  uint uVar41;
  UPhysicsAsset *pUVar42;
  undefined1 auStackY_b58 [32];
  undefined1 local_b18;
  undefined1 local_b17 [3];
  uint local_b14;
  uint local_b10;
  TSharedRef<FManagedArrayCollection,1> local_b08;
  TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *local_af8;
  UChaosClothAsset *local_af0;
  longlong local_ae8;
  FFormatArgumentValue_u_8 local_ae0;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_ad8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_ac8;
  FSoftObjectPath local_ab8;
  int local_a98;
  longlong local_a90;
  FCollectionClothConstFacade local_a88;
  FName local_a70;
  FText *local_a68;
  ForAnyElementType *local_a60;
  TArray<FName,TSizedDefaultAllocator<32>_> local_a58;
  TSharedRef<FManagedArrayCollection,1> local_a48;
  FCollectionClothConstFacade local_a38;
  undefined1 local_a20 [8];
  FText *local_a18;
  longlong local_a10;
  int *local_a08;
  TArray<FChaosClothAssetLodTransitionDataCache,TSizedDefaultAllocator<32>_> *local_a00;
  FText local_9f8;
  TSharedPtr<FManagedArrayCollection_const_,1> local_9e8;
  FCollectionClothSelectionConstFacade local_9d8;
  TSharedPtr<FManagedArrayCollection,1> local_9b8;
  FTextFormat local_9a8;
  FText local_998;
  FTextFormat local_988;
  FText local_978;
  FFormatArgumentValue local_968;
  undefined1 local_948 [32];
  FFormatArgumentValue local_928;
  undefined4 local_908;
  FFormatArgumentValue_u_8 local_900;
  longlong *local_8f8;
  undefined4 local_8f0;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_8e8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_8d8;
  undefined1 local_8c8 [24];
  FText local_8b0;
  FText local_8a0;
  FText local_890;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_878;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_868;
  FTextFormat local_858;
  FTextFormat local_848;
  TArrayView<FSoftObjectPath,int> local_838;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_828;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_818;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_808;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_7f8;
  FEmbeddedSpringBaseFacade local_7e8;
  FEmbeddedSpringBaseFacade local_4b8;
  FCollectionPropertyConstFacade local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_b58;
  local_a68 = param_4;
  local_af8 = param_1;
  local_af0 = this;
  local_a18 = param_3;
  local_a00 = param_2;
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x800000000,ReadWrite)
  ;
  uVar41 = param_1->ArrayNum;
  pTVar34 = &this->ClothCollections;
  if ((int)uVar41 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar41);
  }
  pTVar4 = (TSharedRef<FManagedArrayCollection_const_,1> *)(pTVar34->AllocatorInstance).Data;
  iVar11 = (this->ClothCollections).ArrayNum;
  piVar40 = &(this->ClothCollections).ArrayMax;
  if (*piVar40 < (int)uVar41) {
    DestructItems<TSharedRef<FManagedArrayCollection_const_,1>,int>(pTVar4,iVar11);
    (this->ClothCollections).ArrayNum = 0;
    if (*piVar40 != uVar41) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar41,&pTVar34->AllocatorInstance,0,piVar40);
    }
  }
  else {
    DestructItems<TSharedRef<FManagedArrayCollection_const_,1>,int>(pTVar4,iVar11);
    (this->ClothCollections).ArrayNum = 0;
  }
  pUVar42 = (UPhysicsAsset *)0x0;
  pFVar13 = (ForAnyElementType *)(**(code **)(this->_padding_ + 0x3c8))(this);
  iVar11 = *(int *)((longlong)&pFVar13[1].Data + 4);
  uVar41 = 0;
  *(undefined4 *)&pFVar13[1].Data = 0;
  piVar40 = (int *)((longlong)&pFVar13[1].Data + 4);
  local_a60 = pFVar13;
  local_a08 = piVar40;
  if (iVar11 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,pFVar13,0,piVar40);
  }
  pTVar7 = _UNK_150651568;
  pFVar6 = ___xmm_00000000000000000000000000000010;
  local_ab8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_ab8.AssetPath.PackageName.Number = 0;
  local_ab8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_ab8.AssetPath.AssetName.Number = 0;
  local_ab8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ab8.SubPathString.Data.ArrayNum = 0;
  local_ab8.SubPathString.Data.ArrayMax = 0;
  local_b14 = 0;
  if (0 < param_1->ArrayNum) {
    local_a90 = 0;
    pUVar26 = pUVar42;
    do {
      pTVar14 = ::operator_new(0xc0);
      if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
        local_b08.Object = pFVar6;
        local_b08.SharedReferenceCount.ReferenceController = pTVar7;
      }
      else {
        pTVar14->SharedReferenceCount = (atomic<int>)0x1;
        pTVar14->WeakReferenceCount = (atomic<int>)0x1;
        pTVar14->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFManagedArrayCollection___00_SharedPointerInternals__6B_
        ;
        FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)(pTVar14 + 1));
        local_b08.Object = (FManagedArrayCollection *)(pTVar14 + 1);
        local_b08.SharedReferenceCount.ReferenceController = pTVar14;
        if ((local_b08.Object == (FManagedArrayCollection *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      UE::Chaos::ClothAsset::FCollectionClothFacade::FCollectionClothFacade
                ((FCollectionClothFacade *)&local_a38,&local_b08);
      UE::Chaos::ClothAsset::FCollectionClothFacade::DefineSchema
                ((FCollectionClothFacade *)&local_a38,None);
      uVar36 = (uint)pUVar26;
      uVar35 = ~uVar36 >> 0x1f;
      uVar38 = uVar41;
      if ((int)uVar36 < param_1->ArrayNum) {
        uVar38 = uVar35;
      }
      local_b10 = uVar35;
      if ((uVar38 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar37 = (FFormatArgumentValue_u_8)(longlong)(int)uVar36;
      lVar32 = FVar37.IntValue * 0x10;
      local_ae0 = FVar37;
      local_a10 = lVar32;
      UE::Chaos::ClothAsset::FCollectionClothConstFacade::FCollectionClothConstFacade
                (&local_a88,
                 (TSharedRef<FManagedArrayCollection_const_,1> *)
                 ((local_af8->AllocatorInstance).Data + lVar32));
      bVar8 = UE::Chaos::ClothAsset::FCollectionClothConstFacade::HasValidRenderData(&local_a88);
      pFVar17 = local_a18;
      if (bVar8) {
        UE::Chaos::ClothAsset::FCollectionClothFacade::Initialize
                  ((FCollectionClothFacade *)&local_a38,&local_a88);
        iVar11 = UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetNumRenderPatterns
                           (&local_a38);
        uVar38 = *(int *)&pFVar13[1].Data + iVar11;
        local_a98 = iVar11;
        if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
        }
        if (*piVar40 < (int)uVar38) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,uVar38,pFVar13,*(int *)&pFVar13[1].Data,piVar40);
        }
        pTVar18 = UE::Chaos::ClothAsset::FCollectionClothFacade::GetRenderMaterialSoftObjectPathName
                            ((FCollectionClothFacade *)&local_a38,&local_838);
        pFVar21 = pTVar18->DataPtr;
        iVar12 = pTVar18->ArrayNum;
        local_ae8 = CONCAT44(local_ae8._4_4_,iVar12);
        pUVar26 = pUVar42;
        if (0 < iVar11) {
          do {
            if ((iVar12 <= (int)pUVar26) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pUVar19 = FSoftObjectPath::TryLoad(pFVar21,(FUObjectSerializeContext *)0x0);
            if (pUVar19 == (UObject *)0x0) {
LAB_14dc3a644:
              iVar12 = *(int *)&pFVar13[1].Data;
              if (iVar12 == *(int *)((longlong)&pFVar13[1].Data + 4)) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x830,pFVar13,(int *)((longlong)&pFVar13[1].Data + 4));
              }
              *(int *)&pFVar13[1].Data = iVar12 + 1;
              lVar32 = (longlong)iVar12;
              pFVar30 = pFVar13->Data;
              *(undefined8 *)(pFVar30 + lVar32 * 0x30) = 0;
              *(undefined8 *)(pFVar30 + lVar32 * 0x30 + 8) = 0;
              *(undefined8 *)(pFVar30 + lVar32 * 0x30 + 0x10) = 0;
              *(undefined8 *)(pFVar30 + lVar32 * 0x30 + 0x10 + 8) = 0;
              *(undefined4 *)(pFVar30 + lVar32 * 0x30 + 0x20) = 0;
              *(undefined8 *)(pFVar30 + lVar32 * 0x30 + 0x28) = 0;
            }
            else {
              pUVar27 = Z_Construct_UClass_UMaterialInterface_NoRegister();
              iVar12 = (int)pUVar27->_padding_;
              if ((*(int *)(*(longlong *)&pUVar19->field_0x10 + 0x38) < iVar12) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar19->field_0x10 + 0x30) + (longlong)iVar12 * 8)
                  != &pUVar27->_padding_)) goto LAB_14dc3a644;
              iVar11 = *(int *)&pFVar13[1].Data;
              uVar22 = *(undefined8 *)&pUVar19->field_0x18;
              if (iVar11 == *(int *)((longlong)&pFVar13[1].Data + 4)) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x830,pFVar13,(int *)((longlong)&pFVar13[1].Data + 4));
              }
              *(int *)&pFVar13[1].Data = iVar11 + 1;
              pFVar30 = pFVar13->Data + (longlong)iVar11 * 0x30;
              *(UObject **)pFVar30 = pUVar19;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar19);
              }
              *(undefined8 *)(pFVar30 + 8) = uVar22;
              *(undefined8 *)(pFVar30 + 0x10) = 0;
              *(undefined8 *)(pFVar30 + 0x18) = 0;
              *(undefined4 *)(pFVar30 + 0x20) = 0;
              *(undefined8 *)(pFVar30 + 0x28) = 0;
              pFVar13 = local_a60;
              iVar11 = local_a98;
            }
            uVar38 = (int)pUVar26 + 1;
            pFVar21 = pFVar21 + 1;
            lVar32 = local_a10;
            pUVar26 = (UPhysicsAsset *)(ulonglong)uVar38;
            uVar35 = local_b10;
            iVar12 = (int)local_ae8;
          } while ((int)uVar38 < iVar11);
        }
        local_9b8.Object = local_b08.Object;
        local_9b8.SharedReferenceCount.ReferenceController =
             local_b08.SharedReferenceCount.ReferenceController;
        if (local_b08.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_b08.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_b08.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        Chaos::Softs::FCollectionPropertyMutableFacade::FCollectionPropertyMutableFacade
                  ((FCollectionPropertyMutableFacade *)&local_188,&local_9b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_9b8.SharedReferenceCount.ReferenceController);
        pTVar34 = local_af8;
        uVar38 = local_b14;
        uVar36 = uVar41;
        if ((int)local_b14 < local_af8->ArrayNum) {
          uVar36 = uVar35;
        }
        if ((uVar36 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar30 = (pTVar34->AllocatorInstance).Data;
        lVar31 = local_a90 * 0x10;
        local_9e8.Object = *(FManagedArrayCollection **)(pFVar30 + lVar31);
        local_9e8.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar30 + lVar31 + 8);
        if (local_9e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_9e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_9e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_ae8 = lVar31;
        Chaos::Softs::FCollectionPropertyMutableFacade::Append
                  ((FCollectionPropertyMutableFacade *)&local_188,&local_9e8,false);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_9e8.SharedReferenceCount.ReferenceController);
        UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::FCollectionClothSelectionFacade
                  ((FCollectionClothSelectionFacade *)local_948,&local_b08);
        uVar36 = uVar41;
        if ((int)uVar38 < pTVar34->ArrayNum) {
          uVar36 = uVar35;
        }
        if ((uVar36 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::
        FCollectionClothSelectionConstFacade
                  (&local_9d8,
                   (TSharedRef<FManagedArrayCollection_const_,1> *)
                   ((pTVar34->AllocatorInstance).Data + lVar32));
        bVar8 = UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::IsValid(&local_9d8);
        if (bVar8) {
          UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::DefineSchema
                    ((FCollectionClothSelectionFacade *)local_948);
          UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::GetNames
                    (&local_9d8,&local_a58);
          iVar11 = local_a58.ArrayNum;
          uVar29 = (ulonglong)local_a58.ArrayNum;
          pFVar3 = (FName *)(local_a58.AllocatorInstance.Data + uVar29 * 8);
          FVar33.Data = local_a58.AllocatorInstance.Data;
          while( true ) {
            if ((uint)uVar29 != iVar11) {
              local_b18 = 0;
              `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_b18);
            }
            if ((FName *)FVar33.Data == pFVar3) break;
            UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::GetSelectionGroup
                      (&local_9d8,&local_a70);
            if ((local_a70 == UE::Chaos::ClothAsset::ClothCollectionGroup::SimVertices3D) ||
               (local_a70 == UE::Chaos::ClothAsset::ClothCollectionGroup::SimFaces)) {
              pTVar20 = UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::GetSelectionSet
                                  (&local_9d8,(FName *)FVar33.Data);
              this_01 = UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::
                        FindOrAddSelectionSet
                                  ((FCollectionClothSelectionFacade *)local_948,(FName *)FVar33.Data
                                   ,&local_a70);
              if (this_01 != pTVar20) {
                UE::Core::Private::
                CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                          (&this_01->Hash,&this_01->HashSize,&pTVar20->Hash,pTVar20->HashSize);
                iVar12 = *(int *)&(pTVar20->Elements).field_0x8;
                TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::Empty(&this_01->Elements,iVar12);
                UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,iVar12,(ForAnyElementType *)this_01,
                           (int *)&(this_01->Elements).field_0x8,
                           (int *)&(this_01->Elements).field_0xc);
                puVar1 = &(pTVar20->Elements).field_0x10;
                this_00 = &(this_01->Elements).field_0x10;
                *(undefined4 *)&(this_01->Elements).field_0x30 =
                     *(undefined4 *)&(pTVar20->Elements).field_0x30;
                *(undefined4 *)&(this_01->Elements).field_0x34 =
                     *(undefined4 *)&(pTVar20->Elements).field_0x34;
                if (this_00 != puVar1) {
                  TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                            ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                             (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
                }
                if (iVar12 != 0) {
                  memcpy(*(void **)&this_01->Elements,*(void **)&pTVar20->Elements,
                         (longlong)iVar12 * 0xc);
                }
              }
            }
            uVar29 = (ulonglong)(uint)local_a58.ArrayNum;
            FVar33.Data = FVar33.Data + 8;
          }
          lVar31 = local_ae8;
          pTVar34 = local_af8;
          uVar35 = local_b10;
          uVar38 = local_b14;
          if ((FName *)local_a58.AllocatorInstance.Data != (FName *)0x0) {
            FMemory::Free(local_a58.AllocatorInstance.Data);
            lVar31 = local_ae8;
            pTVar34 = local_af8;
            uVar35 = local_b10;
            uVar38 = local_b14;
          }
        }
        Chaos::Softs::FEmbeddedSpringBaseFacade::FEmbeddedSpringBaseFacade
                  (&local_4b8,local_b08.Object,
                   &UE::Chaos::ClothAsset::ClothCollectionGroup::SimVertices3D);
        uVar36 = uVar41;
        if ((int)uVar38 < pTVar34->ArrayNum) {
          uVar36 = uVar35;
        }
        if ((uVar36 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        Chaos::Softs::FEmbeddedSpringBaseFacade::FEmbeddedSpringBaseFacade
                  (&local_7e8,
                   *(FManagedArrayCollection **)((pTVar34->AllocatorInstance).Data + lVar31),
                   &UE::Chaos::ClothAsset::ClothCollectionGroup::SimVertices3D);
        bVar8 = Chaos::Softs::FEmbeddedSpringBaseFacade::IsValid(&local_7e8);
        if (bVar8) {
          Chaos::Softs::FEmbeddedSpringBaseFacade::DefineSchema(&local_4b8);
          Chaos::Softs::FEmbeddedSpringFacade::Append
                    ((FEmbeddedSpringFacade *)&local_4b8,(FEmbeddedSpringFacade *)&local_7e8,0);
        }
        pUVar39 = local_af0;
        if (uVar38 == 0) {
          pFVar21 = UE::Chaos::ClothAsset::FCollectionClothConstFacade::
                    GetPhysicsAssetSoftObjectPathName(&local_a88);
          local_ab8.AssetPath.PackageName = (pFVar21->AssetPath).PackageName;
          local_ab8.AssetPath.AssetName = (pFVar21->AssetPath).AssetName;
          if (&local_ab8.SubPathString != &pFVar21->SubPathString) {
            iVar11 = (pFVar21->SubPathString).Data.ArrayNum;
            pFVar30 = (pFVar21->SubPathString).Data.AllocatorInstance.Data;
            local_ab8.SubPathString.Data.ArrayNum = iVar11;
            if ((iVar11 == 0) && (local_ab8.SubPathString.Data.ArrayMax == 0)) {
              local_ab8.SubPathString.Data.ArrayNum = 0;
              local_ab8.SubPathString.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,iVar11,local_ab8.SubPathString.Data.ArrayMax,
                         (ForAnyElementType *)&local_ab8.SubPathString,iVar11,
                         &local_ab8.SubPathString.Data.ArrayMax);
              if (iVar11 != 0) {
                memcpy(local_ab8.SubPathString.Data.AllocatorInstance.Data,pFVar30,(longlong)iVar11)
                ;
              }
            }
          }
          pFVar21 = UE::Chaos::ClothAsset::FCollectionClothConstFacade::
                    GetSkeletalMeshSoftObjectPathName(&local_a88);
          pUVar19 = FSoftObjectPath::TryLoad(pFVar21,(FUObjectSerializeContext *)0x0);
          if (pUVar19 != (UObject *)0x0) {
            pUVar27 = Z_Construct_UClass_USkeletalMesh_NoRegister();
            pUVar39 = local_af0;
            iVar11 = (int)pUVar27->_padding_;
            if ((iVar11 <= *(int *)(*(longlong *)&pUVar19->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar19->field_0x10 + 0x30) + (longlong)iVar11 * 8) ==
                &pUVar27->_padding_)) {
              pcVar5 = *(code **)(local_af0->_padding_ + 0x410);
              uVar22 = (**(code **)(*(longlong *)pUVar19 + 0x408))(pUVar19);
              (*pcVar5)(pUVar39,uVar22);
              pFVar23 = (FReferenceSkeleton *)(**(code **)(*(longlong *)pUVar19 + 800))(pUVar19);
              UChaosClothAssetBase::SetReferenceSkeleton((UChaosClothAssetBase *)pUVar39,pFVar23);
              goto LAB_14dc3ab22;
            }
          }
          pUVar39 = local_af0;
          (**(code **)(local_af0->_padding_ + 0x410))(local_af0,0);
          UChaosClothAssetBase::SetReferenceSkeleton
                    ((UChaosClothAssetBase *)pUVar39,(FReferenceSkeleton *)0x0);
        }
LAB_14dc3ab22:
        pFVar23 = (FReferenceSkeleton *)(**(code **)(pUVar39->_padding_ + 800))(pUVar39);
        pTVar24 = UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimBoneWeights
                            (&local_a88,&local_828);
        local_878.DataPtr = pTVar24->DataPtr;
        local_878.ArrayNum = pTVar24->ArrayNum;
        local_878._12_4_ = *(undefined4 *)&pTVar24->field_0xc;
        pTVar25 = UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimBoneIndices
                            (&local_a88,&local_818);
        local_868.DataPtr = pTVar25->DataPtr;
        local_868.ArrayNum = pTVar25->ArrayNum;
        local_868._12_4_ = *(undefined4 *)&pTVar25->field_0xc;
        bVar8 = UE::Chaos::ClothAsset::Private::HasValidSkinweights(&local_868,&local_878,pFVar23);
        pFVar23 = (FReferenceSkeleton *)(**(code **)(pUVar39->_padding_ + 800))(pUVar39);
        pTVar24 = UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderBoneWeights
                            (&local_a88,&local_7f8);
        local_8e8.DataPtr = pTVar24->DataPtr;
        local_8e8.ArrayNum = pTVar24->ArrayNum;
        local_8e8._12_4_ = *(undefined4 *)&pTVar24->field_0xc;
        pTVar25 = UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderBoneIndices
                            (&local_a88,&local_808);
        local_8d8.DataPtr = pTVar25->DataPtr;
        local_8d8.ArrayNum = pTVar25->ArrayNum;
        local_8d8._12_4_ = *(undefined4 *)&pTVar25->field_0xc;
        bVar9 = UE::Chaos::ClothAsset::Private::HasValidSkinweights(&local_8d8,&local_8e8,pFVar23);
        if ((!bVar8) || (!bVar9)) {
          local_b17[0] = 0;
          bVar10 = `UChaosClothAsset::Build'::__l41::<lambda_1>::operator()(local_b17);
          if (!bVar10) {
            UE::Chaos::ClothAsset::FClothGeometryTools::BindMeshToRootBone(&local_b08,!bVar8,!bVar9)
            ;
          }
        }
        pTVar34 = &pUVar39->ClothCollections;
        iVar11 = (pUVar39->ClothCollections).ArrayNum;
        if (iVar11 == (pUVar39->ClothCollections).ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar34->AllocatorInstance,
                              &(pUVar39->ClothCollections).ArrayMax);
        }
        pFVar30 = (pTVar34->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
        (pUVar39->ClothCollections).ArrayNum = iVar11 + 1;
        *(FManagedArrayCollection **)pFVar30 = local_b08.Object;
        *(TReferenceControllerBase<1> **)(pFVar30 + 8) =
             local_b08.SharedReferenceCount.ReferenceController;
        if (local_b08.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_b08.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_b08.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_9d8.ManagedArrayCollection.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_948._16_8_);
        Chaos::Softs::FCollectionPropertyConstFacade::~FCollectionPropertyConstFacade(&local_188);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a88.ClothCollection.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a38.ClothCollection.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b08.SharedReferenceCount.ReferenceController);
        pFVar13 = local_a60;
        piVar40 = local_a08;
      }
      else {
        if (local_a18 != (FText *)0x0) {
          bVar8 = FText::IsEmpty(local_a18);
          pFVar15 = local_a68;
          if (bVar8) {
            pFVar15 = FText::AsLocalizable_Advanced_LocText
                                (&local_8b0,L"ChaosClothAsset",L"BuildErrorText",L"Invalid LOD.");
            FText::operator=(pFVar17,pFVar15);
            if (local_8b0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_8b0.TextData.Reference + 0x10))();
            }
            pFVar17 = local_a68;
            if (local_a68 != (FText *)0x0) {
              pFVar15 = FText::AsLocalizable_Advanced_LocText
                                  (&local_8a0,L"ChaosClothAsset",L"BuildVerboseTextFirstError",
                                   L"LOD {0} has no valid data.");
              pFVar16 = FTextFormat::FTextFormat(&local_858,pFVar15,Default);
              local_968.Type = Int;
              local_968.TextValue.field0_0x0.TypedValue.TextData.Reference =
                   (TRefCountPtr<ITextData>)(ITextData *)0x0;
              local_968.TextValue.field0_0x0.TypedValue.Flags = 0;
              local_ad8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_ad8.ArrayNum = 1;
              local_968.field1_0x8 = FVar37;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,1,0,&local_ad8.AllocatorInstance,1,&local_ad8.ArrayMax);
              ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                        (local_ad8.AllocatorInstance.Data,&local_968,1);
              local_9a8.TextFormatData.Object = (pFVar16->TextFormatData).Object;
              local_9a8.TextFormatData.SharedReferenceCount.ReferenceController =
                   (pFVar16->TextFormatData).SharedReferenceCount.ReferenceController;
              if (local_9a8.TextFormatData.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_9a8.TextFormatData.SharedReferenceCount.ReferenceController)->
                SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_9a8.TextFormatData.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              FText::Format(&local_998,&local_9a8,&local_ad8);
              DestructItems<FFormatArgumentValue,int>
                        ((FFormatArgumentValue *)local_ad8.AllocatorInstance.Data,local_ad8.ArrayNum
                        );
              if ((FFormatArgumentValue *)local_ad8.AllocatorInstance.Data !=
                  (FFormatArgumentValue *)0x0) {
                FMemory::Free(local_ad8.AllocatorInstance.Data);
              }
              if (local_968.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)
              {
                (**(code **)((longlong)
                             *(ITextData *)
                              local_968.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
                          ();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((pFVar16->TextFormatData).SharedReferenceCount.ReferenceController);
              FText::operator=(pFVar17,&local_998);
              TVar28.Reference = local_8a0.TextData.Reference;
              if (local_998.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_998.TextData.Reference + 0x10))();
                TVar28.Reference = local_8a0.TextData.Reference;
              }
LAB_14dc3a477:
              if (TVar28.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*TVar28.Reference + 0x10))();
              }
            }
          }
          else if (local_a68 != (FText *)0x0) {
            local_9f8.TextData.Reference = (local_a68->TextData).Reference;
            if (local_9f8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_9f8.TextData.Reference + 8))
                        (local_9f8.TextData.Reference,local_a20);
            }
            local_9f8.Flags = pFVar15->Flags;
            pFVar17 = FText::AsLocalizable_Advanced_LocText
                                (&local_890,L"ChaosClothAsset",L"BuildVerboseTextThereafter",
                                 L"{0}\nLOD {1} has no valid data.");
            pFVar16 = FTextFormat::FTextFormat(&local_848,pFVar17,Default);
            local_928.Type = Text;
            FText::FText((FText *)&local_928.TextValue,&local_9f8);
            if ((local_928.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
               && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0xbd,
                                      L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                     ), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_908 = 0;
            local_8f8 = (longlong *)0x0;
            local_8f0 = 0;
            local_ac8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_ac8.ArrayNum = 2;
            local_900 = FVar37;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,2,0,&local_ac8.AllocatorInstance,2,&local_ac8.ArrayMax);
            ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                      (local_ac8.AllocatorInstance.Data,&local_928,2);
            local_988.TextFormatData.Object = (pFVar16->TextFormatData).Object;
            local_988.TextFormatData.SharedReferenceCount.ReferenceController =
                 (pFVar16->TextFormatData).SharedReferenceCount.ReferenceController;
            if (local_988.TextFormatData.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_988.TextFormatData.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_988.TextFormatData.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            FText::Format(&local_978,&local_988,&local_ac8);
            DestructItems<FFormatArgumentValue,int>
                      ((FFormatArgumentValue *)local_ac8.AllocatorInstance.Data,local_ac8.ArrayNum);
            if ((FFormatArgumentValue *)local_ac8.AllocatorInstance.Data !=
                (FFormatArgumentValue *)0x0) {
              FMemory::Free(local_ac8.AllocatorInstance.Data);
            }
            if (local_8f8 != (longlong *)0x0) {
              (**(code **)(*local_8f8 + 0x10))();
            }
            if (local_928.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)
                           *(ITextData *)
                            local_928.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((pFVar16->TextFormatData).SharedReferenceCount.ReferenceController);
            if (local_9f8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_9f8.TextData.Reference + 0x10))();
            }
            FText::operator=(pFVar15,&local_978);
            TVar28.Reference = local_890.TextData.Reference;
            if (local_978.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_978.TextData.Reference + 0x10))();
              TVar28.Reference = local_890.TextData.Reference;
            }
            goto LAB_14dc3a477;
          }
        }
        pUVar39 = local_af0;
        pTVar34 = &local_af0->ClothCollections;
        iVar11 = (local_af0->ClothCollections).ArrayNum;
        if (iVar11 == (local_af0->ClothCollections).ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar34->AllocatorInstance,
                              &(local_af0->ClothCollections).ArrayMax);
        }
        pFVar30 = (pTVar34->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
        (pUVar39->ClothCollections).ArrayNum = iVar11 + 1;
        *(FManagedArrayCollection **)pFVar30 = local_b08.Object;
        *(TReferenceControllerBase<1> **)(pFVar30 + 8) =
             local_b08.SharedReferenceCount.ReferenceController;
        if (local_b08.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_b08.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_b08.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a88.ClothCollection.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a38.ClothCollection.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b08.SharedReferenceCount.ReferenceController);
        uVar38 = local_b14;
      }
      local_b14 = uVar38 + 1;
      pUVar26 = (UPhysicsAsset *)(ulonglong)local_b14;
      local_a90 = local_a90 + 1;
      param_1 = local_af8;
    } while ((int)local_b14 < local_af8->ArrayNum);
  }
  if (pTVar34->ArrayNum < 1) {
    MakeShared<FManagedArrayCollection,1>(&local_a48);
    UE::Chaos::ClothAsset::FCollectionClothFacade::FCollectionClothFacade
              ((FCollectionClothFacade *)local_8c8,&local_a48);
    UE::Chaos::ClothAsset::FCollectionClothFacade::DefineSchema
              ((FCollectionClothFacade *)local_8c8,None);
    iVar11 = pTVar34->ArrayNum;
    if (iVar11 == pTVar34->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar34->AllocatorInstance,&pTVar34->ArrayMax);
    }
    pFVar30 = (pTVar34->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
    pTVar34->ArrayNum = iVar11 + 1;
    *(FManagedArrayCollection **)pFVar30 = local_a48.Object;
    *(TReferenceControllerBase<1> **)(pFVar30 + 8) =
         local_a48.SharedReferenceCount.ReferenceController;
    if (local_a48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_8c8._16_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a48.SharedReferenceCount.ReferenceController);
  }
  pUVar26 = (UPhysicsAsset *)FSoftObjectPath::TryLoad(&local_ab8,(FUObjectSerializeContext *)0x0);
  if (pUVar26 != (UPhysicsAsset *)0x0) {
    pUVar27 = Z_Construct_UClass_UPhysicsAsset_NoRegister();
    iVar11 = (int)pUVar27->_padding_;
    if ((iVar11 <= *(int *)(pUVar26->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar26->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
        &pUVar27->_padding_)) goto LAB_14dc3ad7e;
  }
  pUVar26 = pUVar42;
LAB_14dc3ad7e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar26 != (UPhysicsAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar26);
  }
  pUVar39 = local_af0;
  (local_af0->PhysicsAsset).field0_0x0.DebugPtr = pUVar26;
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)local_af0,4,ReadWrite);
  pbVar2 = (byte *)((longlong)&pUVar39->_padding_ + 4);
  *pbVar2 = *pbVar2 | 1;
  Build(pUVar39,local_a00);
  if (local_ab8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ab8.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// Build @ 14dc3ae30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UChaosClothAsset::Build
          (UChaosClothAsset *this,
          TArray<FChaosClothAssetLodTransitionDataCache,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  FSkeletalMeshRenderData *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FGuid *pFVar10;
  FReferenceSkeleton *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  wchar_t *pwVar13;
  uint uVar14;
  FChaosClothSimulationModel *pFVar15;
  FChaosClothSimulationModel *local_98;
  FSharedReferencer<1> FStack_90;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_88;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_78;
  FGuid local_68;
  FMultiComponentReregisterContext local_58;
  FMultiComponentReregisterContext local_40;
  
  pTVar9 = UChaosClothAssetBase::GetDependentComponents((UChaosClothAssetBase *)this,&local_78);
  FMultiComponentReregisterContext::FMultiComponentReregisterContext(&local_40,pTVar9);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  this_00 = (FSkeletalMeshRenderData *)this->_padding_;
  if ((this_00 != (FSkeletalMeshRenderData *)0x0) && (this_00->bInitialized != false)) {
    FSkeletalMeshRenderData::ReleaseResources(this_00);
    FRenderCommandFence::BeginFence((FRenderCommandFence *)&this->_padding_,RenderThread);
  }
  pFVar10 = FGuid::NewGuid(&local_68);
  uVar14 = pFVar10->B;
  uVar8 = pFVar10->C;
  uVar7 = pFVar10->D;
  (this->AssetGuid).A = pFVar10->A;
  (this->AssetGuid).B = uVar14;
  (this->AssetGuid).C = uVar8;
  (this->AssetGuid).D = uVar7;
  UChaosClothAssetBase::CalculateInvRefMatrices((UChaosClothAssetBase *)this);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x800000000,ReadWrite)
  ;
  plVar3 = &this->_padding_;
  uVar14 = 1;
  if (1 < (this->ClothCollections).ArrayNum) {
    uVar14 = (this->ClothCollections).ArrayNum;
  }
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  iVar6 = (int)this->_padding_;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  plVar2 = &this->_padding_;
  if ((int)*puVar1 < (int)uVar14) {
    DestructItems<FSkeletalMeshLODInfo,int>((FSkeletalMeshLODInfo *)*plVar3,iVar6);
    *(undefined4 *)plVar2 = 0;
    if (*puVar1 != uVar14) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd8,8,uVar14,(ForAnyElementType *)plVar3,0,(int *)puVar1);
    }
  }
  else {
    DestructItems<FSkeletalMeshLODInfo,int>((FSkeletalMeshLODInfo *)*plVar3,iVar6);
    *(undefined4 *)plVar2 = 0;
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xd8,8,uVar14,(ForAnyElementType *)plVar3,(int *)plVar2,(int *)puVar1);
  DefaultConstructItems<FSkeletalMeshLODInfo,int>((void *)(*plVar3 + (longlong)iVar6 * 0xd8),uVar14)
  ;
  pFVar11 = (FReferenceSkeleton *)(**(code **)(this->_padding_ + 800))(this);
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x800000000,ReadOnly);
  pTVar12 = ::operator_new(0x48);
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
    local_98 = ___xmm_00000000000000000000000000000010;
    pFVar15 = (FChaosClothSimulationModel *)&DAT_00000010;
    FStack_90.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFChaosClothSimulationModel___00_SharedPointerInternals__6B_
    ;
    FChaosClothSimulationModel::FChaosClothSimulationModel
              ((FChaosClothSimulationModel *)(pTVar12 + 1),&this->ClothCollections,pFVar11,param_1);
    pFVar15 = (FChaosClothSimulationModel *)(pTVar12 + 1);
    if ((pFVar15 == (FChaosClothSimulationModel *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    FStack_90.ReferenceController = pTVar12;
    local_98 = pFVar15;
  }
  uVar14 = 0;
  if (&this->ClothSimulationModel != (TSharedPtr<FChaosClothSimulationModel,1> *)&local_98) {
    (this->ClothSimulationModel).Object = pFVar15;
    local_98 = (FChaosClothSimulationModel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ClothSimulationModel).SharedReferenceCount,&FStack_90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_90.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar13 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar13,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    UChaosClothAssetBase::InitResources((UChaosClothAssetBase *)this);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  FMultiComponentReregisterContext::FMultiComponentReregisterContext(&local_58,&local_88);
  uVar8 = uVar14;
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  while( true ) {
    if (((int)uVar8 < 0) || (local_58.ComponentsPair.ArrayNum <= (int)uVar8)) {
      if (local_58.ComponentsPair.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.ComponentsPair.AllocatorInstance.Data);
      }
      while( true ) {
        if (((int)uVar14 < 0) || (local_40.ComponentsPair.ArrayNum <= (int)uVar14)) {
          if (local_40.ComponentsPair.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_40.ComponentsPair.AllocatorInstance.Data);
          }
          return;
        }
        uVar8 = 0;
        if ((int)uVar14 < local_40.ComponentsPair.ArrayNum) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) break;
        if (*(UActorComponent **)
             (local_40.ComponentsPair.AllocatorInstance.Data + (longlong)(int)uVar14 * 0x10) !=
            (UActorComponent *)0x0) {
          FComponentReregisterContextBase::ReRegister
                    ((FComponentReregisterContextBase *)&local_40,
                     *(UActorComponent **)
                      (local_40.ComponentsPair.AllocatorInstance.Data + (longlong)(int)uVar14 * 0x10
                      ),*(UWorld **)
                         (local_40.ComponentsPair.AllocatorInstance.Data +
                         (longlong)(int)uVar14 * 0x10 + 8));
        }
        uVar14 = uVar14 + 1;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = 0;
    if ((int)uVar8 < local_58.ComponentsPair.ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    if (*(UActorComponent **)
         (local_58.ComponentsPair.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10) !=
        (UActorComponent *)0x0) {
      FComponentReregisterContextBase::ReRegister
                ((FComponentReregisterContextBase *)&local_58,
                 *(UActorComponent **)
                  (local_58.ComponentsPair.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10),
                 *(UWorld **)
                  (local_58.ComponentsPair.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10 + 8)
                );
    }
    uVar8 = uVar8 + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// BuildClothSimulationModel @ 14dc3b280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UChaosClothAsset::BuildClothSimulationModel
          (UChaosClothAsset *this,
          TArray<FChaosClothAssetLodTransitionDataCache,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FReferenceSkeleton *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FChaosClothSimulationModel *pFVar5;
  FChaosClothSimulationModel *local_18;
  FSharedReferencer<1> FStack_10;
  
  pFVar3 = (FReferenceSkeleton *)(**(code **)(this->_padding_ + 800))();
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x800000000,ReadOnly);
  pTVar4 = ::operator_new(0x48);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18 = ___xmm_00000000000000000000000000000010;
    pFVar5 = (FChaosClothSimulationModel *)&DAT_00000010;
    FStack_10.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFChaosClothSimulationModel___00_SharedPointerInternals__6B_
    ;
    FChaosClothSimulationModel::FChaosClothSimulationModel
              ((FChaosClothSimulationModel *)(pTVar4 + 1),&this->ClothCollections,pFVar3,param_1);
    pFVar5 = (FChaosClothSimulationModel *)(pTVar4 + 1);
    if (pFVar5 == (FChaosClothSimulationModel *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FStack_10.ReferenceController = pTVar4;
    local_18 = pFVar5;
  }
  if (&this->ClothSimulationModel != (TSharedPtr<FChaosClothSimulationModel,1> *)&local_18) {
    (this->ClothSimulationModel).Object = pFVar5;
    local_18 = (FChaosClothSimulationModel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ClothSimulationModel).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// CopySimMeshToRenderMesh @ 14dc412b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UChaosClothAsset::CopySimMeshToRenderMesh(UChaosClothAsset *this,UMaterialInterface *param_1)

{
  int *piVar1;
  longlong *plVar2;
  FManagedArrayCollection *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  FManagedArrayCollection *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  FString *pFVar12;
  ulonglong uVar13;
  TReferenceControllerBase<1> *pTVar14;
  UObject *pUVar15;
  UClass *pUVar16;
  undefined8 *puVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  uint local_res8 [2];
  uint local_res10;
  TSharedRef<FManagedArrayCollection,1> local_d8;
  FSoftObjectPath local_c8;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TSharedRef<FManagedArrayCollection_const_,1> local_98;
  TStringView<wchar_t> local_88;
  FString local_78;
  FString local_68;
  longlong local_58;
  TReferenceControllerBase<1> *pTStack_50;
  
  local_res8[0] = 0;
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x800000000,ReadWrite)
  ;
  if ((this->ClothCollections).ArrayNum == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetClothCollectionsInternal().Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAsset.cpp"
                       ,0x385,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  bVar9 = param_1 == (UMaterialInterface *)0x0;
  if (bVar9) {
    pFVar12 = ::FString::FString(&local_78,
                                 L"/Engine/EditorMaterials/Cloth/CameraLitDoubleSided.CameraLitDoubleSided"
                                );
  }
  else {
    pFVar12 = UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)param_1,&local_68,(UObject *)0x0);
  }
  local_c8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_c8.AssetPath.PackageName.Number = 0;
  local_c8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_c8.AssetPath.AssetName.Number = 0;
  local_c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.SubPathString.Data.ArrayNum = 0;
  local_c8.SubPathString.Data.ArrayMax = 0;
  local_a8 = (pFVar12->Data).AllocatorInstance.Data;
  iVar11 = (pFVar12->Data).ArrayNum;
  iStack_a0 = iVar11 + -1;
  if (iVar11 == 0) {
    iStack_a0 = 0;
  }
  local_88._12_4_ = uStack_9c;
  local_88.Size = iStack_a0;
  local_88.DataPtr = (wchar_t *)local_a8;
  FSoftObjectPath::SetPath(&local_c8,&local_88);
  if (bVar9) {
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (!bVar9) {
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = false;
  bVar9 = false;
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x800000000,ReadWrite)
  ;
  pTVar8 = _UNK_150651568;
  pFVar7 = ___xmm_00000000000000000000000000000010;
  local_res10 = (this->ClothCollections).ArrayNum;
  uVar13 = (ulonglong)(int)local_res10;
  pFVar19 = (this->ClothCollections).AllocatorInstance.Data;
  pFVar18 = pFVar19 + uVar13 * 0x10;
  do {
    if ((this->ClothCollections).ArrayNum != (int)uVar13) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      `TCheckedPointerIterator<TSharedRef<FManagedArrayCollection_const_,1>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar19 == pFVar18) {
      plVar2 = &this->_padding_;
      iVar11 = *(int *)((longlong)&this->_padding_ + 4);
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      *(undefined4 *)&this->_padding_ = 0;
      if (iVar11 < 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,1,(ForAnyElementType *)plVar2,0,piVar1);
      }
      if (bVar9) {
        pUVar15 = FSoftObjectPath::TryLoad(&local_c8,(FUObjectSerializeContext *)0x0);
        if (pUVar15 != (UObject *)0x0) {
          pUVar16 = Z_Construct_UClass_UMaterialInterface_NoRegister();
          iVar11 = (int)pUVar16->_padding_;
          if ((iVar11 <= *(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar11 * 8) ==
              &pUVar16->_padding_)) {
            iVar11 = (int)this->_padding_;
            uVar4 = *(undefined8 *)&pUVar15->field_0x18;
            if (iVar11 == *piVar1) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x830,(ForAnyElementType *)plVar2,piVar1);
            }
            *(int *)&this->_padding_ = iVar11 + 1;
            puVar17 = (undefined8 *)(*plVar2 + (longlong)iVar11 * 0x30);
            *puVar17 = pUVar15;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar15);
            }
            puVar17[1] = uVar4;
            puVar17[2] = 0;
            puVar17[3] = 0;
            *(undefined4 *)(puVar17 + 4) = 0;
            puVar17[5] = 0;
          }
        }
      }
      if (local_c8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.SubPathString.Data.AllocatorInstance.Data);
      }
      return;
    }
    pFVar3 = *(FManagedArrayCollection **)pFVar19;
    pTVar14 = ::operator_new(0xc0);
    if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
      local_d8.Object = pFVar7;
      local_d8.SharedReferenceCount.ReferenceController = pTVar8;
    }
    else {
      pTVar14->SharedReferenceCount = (atomic<int>)0x1;
      pTVar14->WeakReferenceCount = (atomic<int>)0x1;
      pTVar14->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFManagedArrayCollection___00_SharedPointerInternals__6B_
      ;
      FManagedArrayCollection::FManagedArrayCollection
                ((FManagedArrayCollection *)(pTVar14 + 1),pFVar3);
      local_d8.Object = (FManagedArrayCollection *)(pTVar14 + 1);
      local_d8.SharedReferenceCount.ReferenceController = pTVar14;
      if (local_d8.Object == (FManagedArrayCollection *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    UE::Chaos::ClothAsset::FClothGeometryTools::CopySimMeshToRenderMesh(&local_d8,&local_c8,true);
    if (bVar9) {
LAB_14dc414dd:
      bVar9 = true;
    }
    else {
      local_98.Object = local_d8.Object;
      local_98.SharedReferenceCount.ReferenceController =
           local_d8.SharedReferenceCount.ReferenceController;
      if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar6 = true;
      bVar9 = UE::Chaos::ClothAsset::FClothGeometryTools::HasRenderMesh(&local_98);
      if (bVar9) goto LAB_14dc414dd;
      bVar9 = false;
    }
    if (bVar6) {
      bVar6 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
    }
    if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58 = *(longlong *)pFVar19;
    pTStack_50 = *(TReferenceControllerBase<1> **)(pFVar19 + 8);
    *(FManagedArrayCollection **)pFVar19 = local_d8.Object;
    *(TReferenceControllerBase<1> **)(pFVar19 + 8) =
         local_d8.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
    uVar13 = (ulonglong)local_res10;
    pFVar19 = pFVar19 + 0x10;
  } while( true );
}

// ExecutePostLoadInternal @ 14dc45ca0

void __thiscall
UChaosClothAsset::ExecutePostLoadInternal
          (UChaosClothAsset *this,FSkinnedAssetPostLoadContext *param_1)

{
  return;
}

// FinishPostLoadInternal @ 14dc47f90

void __thiscall
UChaosClothAsset::FinishPostLoadInternal
          (UChaosClothAsset *this,FSkinnedAssetPostLoadContext *param_1)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar1 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar1,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    UChaosClothAssetBase::InitResources((UChaosClothAssetBase *)this);
    UChaosClothAssetBase::CalculateInvRefMatrices((UChaosClothAssetBase *)this);
    return;
  }
  USkinnedAsset::UpdateUVChannelData((USkinnedAsset *)this,false);
  UChaosClothAssetBase::CalculateInvRefMatrices((UChaosClothAssetBase *)this);
  return;
}

// GetAssetGuid @ 14dc4a220

FGuid * __thiscall
UChaosClothAsset::GetAssetGuid(UChaosClothAsset *this,FGuid *__return_storage_ptr__,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (this->AssetGuid).B;
  uVar2 = (this->AssetGuid).C;
  uVar3 = (this->AssetGuid).D;
  __return_storage_ptr__->A = (this->AssetGuid).A;
  __return_storage_ptr__->B = uVar1;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// GetAsyncPropertyName @ 14dc4a4d0

FString * __thiscall
UChaosClothAsset::GetAsyncPropertyName
          (UChaosClothAsset *this,FString *__return_storage_ptr__,ulong64 param_1)

{
  UPackage *pUVar1;
  FName this_00;
  undefined1 local_res10 [24];
  
  if (Z_Registration_Info_UEnum_EClothAssetAsyncProperties.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosClothAssetEngine();
    Z_Registration_Info_UEnum_EClothAssetAsyncProperties.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosClothAssetEngine_EClothAssetAsyncProperties,
                       (UObject *)pUVar1,L"EClothAssetAsyncProperties");
  }
  this_00 = UEnum::GetNameByValue
                      (Z_Registration_Info_UEnum_EClothAssetAsyncProperties.OuterSingleton,
                       (long64)local_res10);
  ::FName::ToString((FName *)this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetClothSimulationModel @ 14dc4ad20

TSharedPtr<FChaosClothSimulationModel_const_,1> * __thiscall
UChaosClothAsset::GetClothSimulationModel
          (UChaosClothAsset *this,
          TSharedPtr<FChaosClothSimulationModel_const_,1> *__return_storage_ptr__,int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->ClothSimulationModel).Object;
  pTVar1 = (this->ClothSimulationModel).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetClothSimulationModelName @ 14dc4b080

FName __thiscall UChaosClothAsset::GetClothSimulationModelName(UChaosClothAsset *this,int param_1)

{
  FName FVar1;
  uint in_register_00000014;
  
  *(longlong *)CONCAT44(in_register_00000014,param_1) = this->_padding_;
  FVar1.Number = in_register_00000014;
  FVar1.ComparisonIndex.Value = param_1;
  return FVar1;
}

// GetCollections @ 14dc4b1a0

TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> * __thiscall
UChaosClothAsset::GetCollections(UChaosClothAsset *this,int param_1)

{
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x800000000,ReadOnly);
  return &this->ClothCollections;
}

// GetNumClothSimulationModels @ 14dc4d920

int __thiscall UChaosClothAsset::GetNumClothSimulationModels(UChaosClothAsset *this)

{
  return (int)((this->ClothSimulationModel).Object != (FChaosClothSimulationModel *)0x0);
}

// GetPhysicsAsset @ 14dc4df70

UPhysicsAsset * __thiscall UChaosClothAsset::GetPhysicsAsset(UChaosClothAsset *this)

{
  return (this->PhysicsAsset).field0_0x0.DebugPtr;
}

// GetPhysicsAssetForModel @ 14dc4df80

UPhysicsAsset * __thiscall
UChaosClothAsset::GetPhysicsAssetForModel(UChaosClothAsset *this,int param_1)

{
  return (this->PhysicsAsset).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14dc4e110

UClass * __cdecl UChaosClothAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosClothAssetEngine",L"ChaosClothAsset",
               &Z_Registration_Info_UClass_UChaosClothAsset.InnerSingleton,
               StaticRegisterNativesUChaosClothAsset,0x3d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UChaosClothAsset>,
               InternalVTableHelperCtorCaller<UChaosClothAsset>,local_res8,
               UChaosClothAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothAsset.InnerSingleton;
}

// GetSkeleton @ 14dc4f980

USkeleton * __thiscall UChaosClothAsset::GetSkeleton(UChaosClothAsset *this)

{
  return (this->Skeleton).field0_0x0.DebugPtr;
}

// GetSkeleton @ 14dc4f990

USkeleton * __thiscall UChaosClothAsset::GetSkeleton(UChaosClothAsset *this)

{
  return (this->Skeleton).field0_0x0.DebugPtr;
}

// HasValidClothSimulationModels @ 14dc51900

bool __thiscall UChaosClothAsset::HasValidClothSimulationModels(UChaosClothAsset *this)

{
  FChaosClothSimulationModel *pFVar1;
  
  pFVar1 = (this->ClothSimulationModel).Object;
  if ((pFVar1 != (FChaosClothSimulationModel *)0x0) &&
     ((pFVar1->ClothSimulationLodModels).ArrayNum != 0)) {
    return true;
  }
  return false;
}

// PostLoad @ 14dc53830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UChaosClothAsset::PostLoad(UChaosClothAsset *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  FSkeletalMeshRenderData *this_00;
  longlong *plVar7;
  ForElementType<FPSOPrecacheVertexFactoryData> _Dst;
  TRefCountPtr<FBaseGraphTask> *pTVar8;
  ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex> FVar9;
  ForElementType<FPSOPrecacheVertexFactoryData> *pFVar10;
  Type TVar11;
  ForElementType<FPSOPrecacheVertexFactoryData> _Src;
  longlong lVar12;
  undefined1 auStackY_1e8 [32];
  undefined2 auStack_1a8 [2];
  undefined1 auStack_1a4 [4];
  ulonglong uStack_1a0;
  void *pvStack_198;
  undefined8 uStack_190;
  short sStack_188;
  ForElementType<FPSOPrecacheVertexFactoryData> FStack_180;
  int iStack_158;
  int iStack_154;
  TRefCountPtr<FBaseGraphTask> aTStack_150 [4];
  TRefCountPtr<FBaseGraphTask> *pTStack_130;
  int iStack_128;
  TArray<FPSOPrecacheVertexFactoryDataPerMaterialIndex,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  TStack_120;
  ulonglong uStack_30;
  
  uStack_30 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  UObject::PostLoad((UObject *)this);
  auStack_1a8[0] = 0;
  (**(code **)(this->_padding_ + 0x4a0))(this,auStack_1a8);
  (**(code **)(this->_padding_ + 0x4a8))(this,auStack_1a8);
  (**(code **)(this->_padding_ + 0x4b0))(this,auStack_1a8);
  bVar3 = IsResourcePSOPrecachingEnabled();
  if ((bVar3) && (lVar6 = (**(code **)(this->_padding_ + 0x398))(this), lVar6 != 0)) {
    lVar6 = (**(code **)(this->_padding_ + 0x180))(this);
    TVar11 = GMaxRHIFeatureLevel;
    if (lVar6 != 0) {
      lVar6 = (**(code **)(this->_padding_ + 0x180))(this);
      TVar11 = (uint)*(byte *)(lVar6 + 0x188);
    }
    iVar4 = (**(code **)(this->_padding_ + 0x448))(this,0);
    TStack_120.AllocatorInstance.SecondaryData =
         (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)0x0;
    TStack_120.ArrayNum = 0;
    TStack_120.ArrayMax = 4;
    USkinnedAsset::GetVertexFactoryTypesPerMaterialIndex
              ((USkinnedAsset *)this,&TStack_120,(USkinnedMeshComponent *)0x0,iVar4,false,TVar11);
    this_00 = (FSkeletalMeshRenderData *)(**(code **)(this->_padding_ + 0x398))(this);
    bVar3 = FSkeletalMeshRenderData::AnyRenderSectionCastsShadows(this_00,iVar4);
    plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x3c8))(this);
    iVar4 = TStack_120.ArrayNum;
    lVar6 = (longlong)TStack_120.ArrayNum;
    pvStack_198 = (void *)0x0;
    uStack_1a0 = (ulonglong)bVar3 << 0xd | (ulonglong)((uint)uStack_1a0 & 0x8000) | 0x411c00;
    uStack_190 = 0;
    FVar9 = (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)&TStack_120;
    if (TStack_120.AllocatorInstance.SecondaryData !=
        (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)0x0) {
      FVar9 = TStack_120.AllocatorInstance.SecondaryData;
    }
    pFVar10 = (ForElementType<FPSOPrecacheVertexFactoryData> *)((longlong)FVar9 + 0x28);
    while( true ) {
      if (TStack_120.ArrayNum != iVar4) {
        auStack_1a4[0] = 0;
        `TCheckedPointerIterator<FPSOPrecacheVertexFactoryDataPerMaterialIndex,int,0>::operator!='::
        __l2::<lambda_1>::operator()(auStack_1a4);
      }
      if ((FPSOPrecacheVertexFactoryDataPerMaterialIndex *)(pFVar10 + -5) ==
          (FPSOPrecacheVertexFactoryDataPerMaterialIndex *)(lVar6 * 0x38 + (longlong)FVar9)) break;
      iStack_158 = *(int *)(pFVar10 + 1);
      lVar12 = (longlong)iStack_158;
      sStack_188 = ((FPSOPrecacheVertexFactoryDataPerMaterialIndex *)(pFVar10 + -5))->MaterialIndex;
      _Src = *pFVar10;
      if (*pFVar10 == (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
        _Src = (ForElementType<FPSOPrecacheVertexFactoryData>)(pFVar10 + -4);
      }
      FStack_180.SecondaryData = (ForElementType<FPSOPrecacheVertexFactoryData>)0x0;
      if (iStack_158 == 0) {
        iStack_154 = 2;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                  (0x10,8,iStack_158,0,&FStack_180,iStack_158,&iStack_154);
        _Dst = (ForElementType<FPSOPrecacheVertexFactoryData>)&FStack_180;
        if (FStack_180.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
          _Dst = FStack_180.SecondaryData;
        }
        memcpy((void *)_Dst,(void *)_Src,lVar12 << 4);
      }
      lVar12 = (longlong)sStack_188;
      uVar5 = 0;
      if ((int)sStack_188 < (int)plVar7[1]) {
        uVar5 = (uint)~(int)sStack_188 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)(*plVar7 + lVar12 * 0x30);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x3b0))(plVar1,aTStack_150,&FStack_180);
        pTVar8 = aTStack_150;
        if (pTStack_130 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
          pTVar8 = pTStack_130;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar8,iStack_128);
        if (pTStack_130 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
          FMemory::Free(pTStack_130);
        }
      }
      if (FStack_180.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
        FMemory::Free((void *)FStack_180.SecondaryData);
      }
      pFVar10 = pFVar10 + 7;
    }
    if (pvStack_198 != (void *)0x0) {
      FMemory::Free(pvStack_198);
    }
    FVar9 = (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)&TStack_120;
    if (TStack_120.AllocatorInstance.SecondaryData !=
        (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)0x0) {
      FVar9 = TStack_120.AllocatorInstance.SecondaryData;
    }
    DestructItems<FPSOPrecacheVertexFactoryDataPerMaterialIndex,int>
              ((FPSOPrecacheVertexFactoryDataPerMaterialIndex *)FVar9,TStack_120.ArrayNum);
    if (TStack_120.AllocatorInstance.SecondaryData !=
        (ForElementType<FPSOPrecacheVertexFactoryDataPerMaterialIndex>)0x0) {
      FMemory::Free((void *)TStack_120.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// Serialize @ 14dc567e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UChaosClothAsset::Serialize(UChaosClothAsset *this,FArchive *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  FManagedArrayCollection *this_00;
  FSkeletalMeshRenderData *this_01;
  code *pcVar5;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> TVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FReferenceSkeleton *pFVar10;
  FString *pFVar11;
  FChaosArchiveContext *pFVar12;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *pTVar13;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar14;
  FSkeletalMeshRenderData *pFVar15;
  UPackage *pUVar16;
  TReferenceControllerBase<1> *pTVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  TSharedPtr<FChaosClothSimulationModel,1> *pTVar20;
  TSharedRef<FManagedArrayCollection_const_,1> *pTVar21;
  TSharedRef<FManagedArrayCollection_const_,1> *pTVar22;
  FChaosClothSimulationModel *pFVar23;
  bool local_res18;
  undefined1 local_res20 [8];
  undefined1 local_2b8 [4];
  uint local_2b4;
  FLLMScope local_2b0;
  FLLMScope local_2ac;
  TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> local_2a8;
  byte *local_298;
  FChaosClothSimulationModel *local_290;
  FSharedReferencer<1> FStack_288;
  TSharedRef<FManagedArrayCollection,1> local_280;
  FCollectionClothConstFacade local_270;
  FMemScope local_258;
  FMemScope local_250;
  undefined8 local_248 [2];
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_238;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_228;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_218;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_1c8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_1b8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_1a8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_198;
  FChaosArchive local_188;
  FChaosArchive local_e8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name230,L"Physics/Cloth");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_2ac,LLMScope_Name230,false,None,Default,true);
  FMemScope::FMemScope(&local_250,&LLMScope_Name230,true);
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (0xb9 < iVar9) {
    pFVar10 = (FReferenceSkeleton *)(**(code **)(this->_padding_ + 800))(this);
    ::operator<<(param_1,pFVar10);
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    local_res18 = false;
  }
  else {
    local_res18 = true;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x28;
  piVar2 = (int *)*puVar4 + 1;
  local_298 = puVar1;
  if ((int *)puVar4[1] < piVar2) {
    local_2b4 = 0;
    if ((*puVar1 & 1) == 0) {
      local_2b4 = (uint)local_res18;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_2b4,4);
    if (1 < local_2b4) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar1 & 1) != 0) {
      local_res18 = local_2b4 != 0;
      local_298 = puVar1;
    }
  }
  else {
    local_res18 = *(int *)*puVar4 != 0;
    *puVar4 = (ulonglong)piVar2;
  }
  if ((local_res18 == false) || ((*puVar1 & 4) == 0)) {
    FArchiveProxy::FArchiveProxy((FArchiveProxy *)&local_e8,param_1);
    local_e8._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
    pFVar12 = ::operator_new(0x158);
    local_e8.Context.Ptr = (FChaosArchiveContext *)0x0;
    if (pFVar12 != (FChaosArchiveContext *)0x0) {
      local_e8.Context.Ptr = Chaos::FChaosArchiveContext::FChaosArchiveContext(pFVar12);
    }
    USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
              ((USkinnedAsset *)this,0x800000000,ReadWrite);
    UE::Chaos::ClothAsset::Private::Serialize(&local_e8,&this->ClothCollections);
    TVar6.Ptr = local_e8.Context.Ptr;
    if (local_e8.Context.Ptr != (FChaosArchiveContext *)0x0) {
      Chaos::FChaosArchiveContext::~FChaosArchiveContext(local_e8.Context.Ptr);
      ::operator_delete(TVar6.Ptr,0x158);
    }
    FArchiveProxy::~FArchiveProxy((FArchiveProxy *)&local_e8);
  }
  else {
    USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
              ((USkinnedAsset *)this,0x800000000,ReadWrite);
    pFVar11 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_1d8,(UObject *)0x0);
    iVar9 = (this->ClothCollections).ArrayNum;
    pFVar18 = (this->ClothCollections).AllocatorInstance.Data;
    pFVar19 = pFVar18 + (longlong)iVar9 * 0x10;
    while( true ) {
      if ((this->ClothCollections).ArrayNum != iVar9) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TSharedRef<FManagedArrayCollection_const_,1>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar18 == pFVar19) break;
      pTVar17 = *(TReferenceControllerBase<1> **)(pFVar18 + 8);
      this_00 = *(FManagedArrayCollection **)pFVar18;
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (3 < (byte)LogChaosClothAsset._0_1_) {
        FManagedArrayCollection::GetAllocatedSize(this_00);
        UE::Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)&PTR_u_TrimOnCook__OFF_152ca70f0,
                   (FLogCategoryBase *)&LogChaosClothAsset);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
      pFVar18 = pFVar18 + 0x10;
    }
    iVar9 = (this->ClothCollections).ArrayNum;
    pTVar21 = (TSharedRef<FManagedArrayCollection_const_,1> *)
              (this->ClothCollections).AllocatorInstance.Data;
    local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a8.ArrayNum = iVar9;
    if (iVar9 == 0) {
      local_2a8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar9,0,&local_2a8.AllocatorInstance,iVar9,&local_2a8.ArrayMax);
      ConstructItems<TSharedRef<FManagedArrayCollection_const_,1>,TSharedRef<FManagedArrayCollection_const_,1>,int>
                (local_2a8.AllocatorInstance.Data,pTVar21,iVar9);
    }
    pFVar18 = (pFVar11->Data).AllocatorInstance.Data;
    if (pFVar18 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar18);
    }
    FArchiveProxy::FArchiveProxy((FArchiveProxy *)&local_188,param_1);
    local_188._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
    pFVar12 = ::operator_new(0x158);
    local_188.Context.Ptr = (FChaosArchiveContext *)0x0;
    if (pFVar12 != (FChaosArchiveContext *)0x0) {
      local_188.Context.Ptr = Chaos::FChaosArchiveContext::FChaosArchiveContext(pFVar12);
    }
    UE::Chaos::ClothAsset::Private::Serialize(&local_188,&local_2a8);
    TVar6.Ptr = local_188.Context.Ptr;
    if (local_188.Context.Ptr != (FChaosArchiveContext *)0x0) {
      Chaos::FChaosArchiveContext::~FChaosArchiveContext(local_188.Context.Ptr);
      ::operator_delete(TVar6.Ptr,0x158);
    }
    FArchiveProxy::~FArchiveProxy((FArchiveProxy *)&local_188);
    DestructItems<TSharedRef<FManagedArrayCollection_const_,1>,int>
              ((TSharedRef<FManagedArrayCollection_const_,1> *)local_2a8.AllocatorInstance.Data,
               local_2a8.ArrayNum);
    if ((TSharedRef<FManagedArrayCollection_const_,1> *)local_2a8.AllocatorInstance.Data !=
        (TSharedRef<FManagedArrayCollection_const_,1> *)0x0) {
      FMemory::Free(local_2a8.AllocatorInstance.Data);
    }
  }
  iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (iVar9 < 0xba) {
    pFVar10 = (FReferenceSkeleton *)(**(code **)(this->_padding_ + 800))(this);
    ::operator<<(param_1,pFVar10);
  }
  iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (iVar9 < 0xc6) {
    USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal
              ((USkinnedAsset *)this,0x800000000,ReadWrite);
    iVar9 = (this->ClothCollections).ArrayNum;
    pTVar21 = (TSharedRef<FManagedArrayCollection_const_,1> *)
              (this->ClothCollections).AllocatorInstance.Data;
    pTVar22 = pTVar21 + iVar9;
    while( true ) {
      if ((this->ClothCollections).ArrayNum != iVar9) {
        local_2b8[0] = 0;
        `TCheckedPointerIterator<TSharedRef<FManagedArrayCollection_const_,1>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_2b8);
      }
      if (pTVar21 == pTVar22) break;
      UE::Chaos::ClothAsset::FCollectionClothConstFacade::FCollectionClothConstFacade
                (&local_270,pTVar21);
      bVar7 = UE::Chaos::ClothAsset::FCollectionClothConstFacade::IsValid(&local_270,None);
      if (bVar7) {
        pFVar10 = (FReferenceSkeleton *)(**(code **)(this->_padding_ + 800))(this);
        pTVar13 = UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimBoneWeights
                            (&local_270,&local_1c8);
        local_238.DataPtr = pTVar13->DataPtr;
        local_238.ArrayNum = pTVar13->ArrayNum;
        local_238._12_4_ = *(undefined4 *)&pTVar13->field_0xc;
        pTVar14 = UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimBoneIndices
                            (&local_270,&local_1b8);
        local_228.DataPtr = pTVar14->DataPtr;
        local_228.ArrayNum = pTVar14->ArrayNum;
        local_228._12_4_ = *(undefined4 *)&pTVar14->field_0xc;
        bVar7 = UE::Chaos::ClothAsset::Private::HasValidSkinweights(&local_228,&local_238,pFVar10);
        pFVar10 = (FReferenceSkeleton *)(**(code **)(this->_padding_ + 800))(this);
        pTVar13 = UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderBoneWeights
                            (&local_270,&local_1a8);
        local_218.DataPtr = pTVar13->DataPtr;
        local_218.ArrayNum = pTVar13->ArrayNum;
        local_218._12_4_ = *(undefined4 *)&pTVar13->field_0xc;
        pTVar14 = UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderBoneIndices
                            (&local_270,&local_198);
        local_208.DataPtr = pTVar14->DataPtr;
        local_208.ArrayNum = pTVar14->ArrayNum;
        local_208._12_4_ = *(undefined4 *)&pTVar14->field_0xc;
        bVar8 = UE::Chaos::ClothAsset::Private::HasValidSkinweights(&local_208,&local_218,pFVar10);
        if ((!bVar7) || (!bVar8)) {
          MakeShared<FManagedArrayCollection,1,FManagedArrayCollection_const_&>
                    (&local_280,pTVar21->Object);
          UE::Chaos::ClothAsset::FClothGeometryTools::BindMeshToRootBone(&local_280,!bVar7,!bVar8);
          if (local_280.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_280.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_280.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          pTVar17 = (pTVar21->SharedReferenceCount).ReferenceController;
          pTVar21->Object = local_280.Object;
          (pTVar21->SharedReferenceCount).ReferenceController =
               local_280.SharedReferenceCount.ReferenceController;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar17);
          if (2 < (byte)LogChaosClothAsset._0_1_) {
            if (!bVar7) {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this,&local_1f8,(UObject *)0x0,None);
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogChaosClothAsset);
              if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
              }
            }
            if ((2 < (byte)LogChaosClothAsset._0_1_) && (!bVar8)) {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this,&local_1e8,(UObject *)0x0,None);
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogChaosClothAsset);
              if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
              }
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_280.SharedReferenceCount.ReferenceController);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_270.ClothCollection.SharedReferenceCount.ReferenceController);
      pTVar21 = pTVar21 + 1;
    }
  }
  if (((local_res18 == false) ||
      (bVar7 = UObjectBaseUtility::IsTemplate
                         ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject),
      bVar7)) || ((param_1->field_0x2b & 4) != 0)) goto LAB_14dc57188;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&LLMScope_Name290,L"Physics/ClothRendering");
    _Init_thread_footer(&::_TSS2);
  }
  FLLMScope::FLLMScope(&local_2b0,LLMScope_Name290,false,None,Default,true);
  FMemScope::FMemScope(&local_258,&LLMScope_Name290,true);
  if ((*local_298 & 1) != 0) {
    pFVar15 = ::operator_new(0x30);
    if (pFVar15 == (FSkeletalMeshRenderData *)0x0) {
      pFVar15 = (FSkeletalMeshRenderData *)0x0;
    }
    else {
      pFVar15 = FSkeletalMeshRenderData::FSkeletalMeshRenderData(pFVar15);
    }
    USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,1,ReadWrite);
    plVar3 = &this->_padding_;
    if (plVar3 == local_248) {
      if (pFVar15 != (FSkeletalMeshRenderData *)0x0) {
        FSkeletalMeshRenderData::~FSkeletalMeshRenderData(pFVar15);
        goto LAB_14dc57003;
      }
    }
    else {
      this_01 = (FSkeletalMeshRenderData *)*plVar3;
      *plVar3 = (longlong)pFVar15;
      if (this_01 != (FSkeletalMeshRenderData *)0x0) {
        FSkeletalMeshRenderData::~FSkeletalMeshRenderData(this_01);
        pFVar15 = this_01;
LAB_14dc57003:
        ::operator_delete(pFVar15,0x30);
      }
    }
  }
  pFVar15 = (FSkeletalMeshRenderData *)(**(code **)(this->_padding_ + 0x398))(this);
  FSkeletalMeshRenderData::Serialize(pFVar15,param_1,(USkinnedAsset *)this);
  FMemScope::~FMemScope(&local_258);
  FLLMScope::~FLLMScope(&local_2b0);
  pTVar20 = &this->ClothSimulationModel;
  if (pTVar20->Object == (FChaosClothSimulationModel *)0x0) {
    FStack_288.ReferenceController = ::operator_new(0x48);
    pTVar17 = (TReferenceControllerBase<1> *)0x0;
    if (FStack_288.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_290 = ___xmm_00000000000000000000000000000010;
      pFVar23 = (FChaosClothSimulationModel *)&DAT_00000010;
      FStack_288.ReferenceController = _UNK_150651568;
    }
    else {
      (FStack_288.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pFVar23 = (FChaosClothSimulationModel *)(FStack_288.ReferenceController + 1);
      (FStack_288.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FStack_288.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFChaosClothSimulationModel___00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)((longlong)&FStack_288.ReferenceController[4]._padding_ + 4) = 0;
      FStack_288.ReferenceController[1]._padding_ = 0;
      FStack_288.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      FStack_288.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      FStack_288.ReferenceController[2]._padding_ = 0;
      FStack_288.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
      FStack_288.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
      FStack_288.ReferenceController[3]._padding_ = 0;
      FStack_288.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
      FStack_288.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&FStack_288.ReferenceController[4]._padding_ = 0xffffffff;
      if ((pFVar23 == (FChaosClothSimulationModel *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      LOCK();
      (FStack_288.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_288.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar17 = FStack_288.ReferenceController;
      local_290 = pFVar23;
    }
    if (pTVar20 != (TSharedPtr<FChaosClothSimulationModel,1> *)&local_290) {
      local_290 = (FChaosClothSimulationModel *)0x0;
      pTVar20->Object = pFVar23;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ClothSimulationModel).SharedReferenceCount,&FStack_288);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_288.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosClothSimulationModel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar16 = Z_Construct_UPackage__Script_ChaosClothAssetEngine();
    Z_Registration_Info_UScriptStruct_FChaosClothSimulationModel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothSimulationModel,(UObject *)pUVar16,
                         L"ChaosClothSimulationModel");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FChaosClothSimulationModel.OuterSingleton,
             param_1,(uchar *)pTVar20->Object,
             (UStruct *)Z_Registration_Info_UScriptStruct_FChaosClothSimulationModel.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
LAB_14dc57188:
  FMemScope::~FMemScope(&local_250);
  FLLMScope::~FLLMScope(&local_2ac);
  return;
}

// Serialize @ 14dc571c0

void __thiscall UChaosClothAsset::Serialize(UChaosClothAsset *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetClothCollections @ 14dc57b20

void __thiscall
UChaosClothAsset::SetClothCollections
          (UChaosClothAsset *this,
          TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x800000000,WriteOnly)
  ;
  pTVar1 = &this->ClothCollections;
  if (pTVar1 != param_1) {
    DestructItems<TSharedRef<FManagedArrayCollection_const_,1>,int>
              ((TSharedRef<FManagedArrayCollection_const_,1> *)(pTVar1->AllocatorInstance).Data,
               (this->ClothCollections).ArrayNum);
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ClothCollections).ArrayNum = param_1->ArrayNum;
    (this->ClothCollections).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  UChaosClothAssetBase::OnPropertyChanged((UChaosClothAssetBase *)this);
  return;
}

// SetPhysicsAsset @ 14dc59130

void __thiscall UChaosClothAsset::SetPhysicsAsset(UChaosClothAsset *this,UPhysicsAsset *param_1)

{
  (this->PhysicsAsset).field0_0x0.DebugPtr = param_1;
  return;
}

// SetReferenceSkeleton @ 14dc591f0

void __thiscall
UChaosClothAsset::SetReferenceSkeleton
          (UChaosClothAsset *this,FReferenceSkeleton *param_1,bool param_2,bool param_3)

{
  UChaosClothAssetBase::SetReferenceSkeleton((UChaosClothAssetBase *)this,param_1);
  if (param_2) {
    Build(this,(TArray<FChaosClothAssetLodTransitionDataCache,TSizedDefaultAllocator<32>_> *)0x0);
  }
  return;
}

// SetReferenceSkeleton @ 14dc59230

void __thiscall
UChaosClothAsset::SetReferenceSkeleton(UChaosClothAsset *this,FReferenceSkeleton *param_1)

{
  int *piVar1;
  TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> *this_00;
  int iVar3;
  FScriptContainerElement *_Src;
  TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *this_01;
  FName *pFVar4;
  bool bVar5;
  FName FStackX_10;
  FMeshBoneInfo FStack_38;
  FReferenceSkeletonModifier FStack_28;
  
  this_01 = (TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *)
            (**(code **)(this->_padding_ + 800))();
  if (param_1 == (FReferenceSkeleton *)0x0) {
    this_01->ArrayNum = 0;
    if (this_01->ArrayMax != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,1,(ForAnyElementType *)this_01,0,&this_01->ArrayMax);
    }
    this_01[1].ArrayNum = 0;
    if (this_01[1].ArrayMax != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,1,&this_01[1].AllocatorInstance,0,&this_01[1].ArrayMax);
    }
    this_01[2].ArrayNum = 0;
    if (this_01[2].ArrayMax != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,1,&this_01[2].AllocatorInstance,0,&this_01[2].ArrayMax);
    }
    this_01[3].ArrayNum = 0;
    if (this_01[3].ArrayMax != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,1,&this_01[3].AllocatorInstance,0,&this_01[3].ArrayMax);
    }
    bVar5 = this_01[8].ArrayNum != 1;
    if (!bVar5) {
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      UnhashElements((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                      *)(this_01 + 4));
    }
    this_01[4].ArrayNum = 0;
    if (this_01[4].ArrayMax != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,1,&this_01[4].AllocatorInstance,0,&this_01[4].ArrayMax);
    }
    *(undefined4 *)&this_01[7].AllocatorInstance.Data = 0xffffffff;
    *(undefined4 *)((longlong)&this_01[7].AllocatorInstance.Data + 4) = 0;
    this_01[6].ArrayNum = 0;
    if ((this_01[6].ArrayMax < 0x20) || (0x80 < this_01[6].ArrayMax)) {
      this_01[6].ArrayMax = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(this_01 + 5),0);
    }
    if (bVar5) {
      this_01[8].ArrayNum = 1;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Rehash
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)(this_01 + 4));
    }
    this_00 = (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
               *)(this_01 + 9);
    bVar5 = this_01[0xd].ArrayNum != 1;
    if (!bVar5) {
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      UnhashElements(this_00);
    }
    this_01[9].ArrayNum = 0;
    if (this_01[9].ArrayMax != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,1,(ForAnyElementType *)this_00,0,&this_01[9].ArrayMax);
    }
    *(undefined4 *)&this_01[0xc].AllocatorInstance.Data = 0xffffffff;
    *(undefined4 *)((longlong)&this_01[0xc].AllocatorInstance.Data + 4) = 0;
    this_01[0xb].ArrayNum = 0;
    if ((this_01[0xb].ArrayMax < 0x20) || (0x80 < this_01[0xb].ArrayMax)) {
      this_01[0xb].ArrayMax = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(this_01 + 10),0);
    }
    if (bVar5) {
      this_01[0xd].ArrayNum = 1;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Rehash
                (this_00);
    }
    iVar3 = *(int *)((longlong)&this_01[0x11].AllocatorInstance.Data + 4);
    *(undefined4 *)&this_01[0x11].AllocatorInstance.Data = 0;
    if (iVar3 != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,1,(ForAnyElementType *)&this_01[0x10].ArrayNum,0,
                 (int *)((longlong)&this_01[0x11].AllocatorInstance.Data + 4));
    }
    FStack_28.RefSkeleton = (FReferenceSkeleton *)(**(code **)(this->_padding_ + 800))(this);
    FStack_28.Skeleton = (USkeleton *)0x0;
    FStack_38.ParentIndex = -1;
    pFVar4 = ::FName::FName(&FStackX_10,L"Root");
    FStack_38.Name = *pFVar4;
    FReferenceSkeletonModifier::Add
              (&FStack_28,&FStack_38,&UE::Math::TTransform<double>::Identity,false);
    FReferenceSkeletonModifier::~FReferenceSkeletonModifier(&FStack_28);
  }
  else {
    TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_>::operator=(this_01,&param_1->RawRefBoneInfo);
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(this_01 + 1),
               &param_1->RawRefBonePose);
    TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_>::operator=
              (this_01 + 2,&param_1->FinalRefBoneInfo);
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(this_01 + 3),
               &param_1->FinalRefBonePose);
    TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::operator=
              ((TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *)
               (this_01 + 4),&param_1->RawNameToIndexMap);
    TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::operator=
              ((TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *)
               (this_01 + 9),&param_1->FinalNameToIndexMap);
    TArray<unsigned_short,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(this_01 + 0xe),
               &param_1->RequiredVirtualBones);
    pTVar2 = this_01 + 0xf;
    if (pTVar2 != (TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *)&param_1->UsedVirtualBoneData
       ) {
      iVar3 = (param_1->UsedVirtualBoneData).ArrayNum;
      piVar1 = &this_01[0xf].ArrayMax;
      _Src = (param_1->UsedVirtualBoneData).AllocatorInstance.Data;
      this_01[0xf].ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0xc);
        }
      }
    }
    *(bool *)&this_01[0x10].AllocatorInstance.Data = param_1->bOnlyOneRootAllowed;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this_01[0x10].ArrayNum,
               &param_1->CachedEndOfBranchIndicesRaw);
  }
  return;
}

// SetSkeleton @ 14dc59670

void __thiscall UChaosClothAsset::SetSkeleton(UChaosClothAsset *this,USkeleton *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->Skeleton).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->Skeleton).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticRegisterNativesUChaosClothAsset @ 14dc5a740

void __cdecl UChaosClothAsset::StaticRegisterNativesUChaosClothAsset(void)

{
  return;
}

// UpdateSkeletonFromCollection @ 14dc5e7d0

void __thiscall UChaosClothAsset::UpdateSkeletonFromCollection(UChaosClothAsset *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FSoftObjectPath *this_00;
  UObject *pUVar4;
  UClass *pUVar5;
  undefined8 uVar6;
  FReferenceSkeleton *pFVar7;
  FCollectionClothConstFacade local_28;
  
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x800000000,ReadWrite)
  ;
  if ((this->ClothCollections).ArrayNum == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetClothCollectionsInternal().Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAsset.cpp"
                       ,0x377,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  USkinnedAsset::WaitUntilAsyncPropertyReleasedInternal((USkinnedAsset *)this,0x800000000,ReadWrite)
  ;
  pFVar7 = (FReferenceSkeleton *)0x0;
  if ((this->ClothCollections).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::Chaos::ClothAsset::FCollectionClothConstFacade::FCollectionClothConstFacade
            (&local_28,
             (TSharedRef<FManagedArrayCollection_const_,1> *)
             (this->ClothCollections).AllocatorInstance.Data);
  bVar3 = UE::Chaos::ClothAsset::FCollectionClothConstFacade::IsValid(&local_28,None);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ClothFacade.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAsset.cpp"
                       ,0x379,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSkeletalMeshSoftObjectPathName
                      (&local_28);
  pUVar4 = FSoftObjectPath::TryLoad(this_00,(FUObjectSerializeContext *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      pcVar2 = *(code **)(this->_padding_ + 0x410);
      uVar6 = (**(code **)(*(longlong *)pUVar4 + 0x408))(pUVar4);
      (*pcVar2)(this,uVar6);
      pFVar7 = (FReferenceSkeleton *)(**(code **)(*(longlong *)pUVar4 + 800))(pUVar4);
      goto LAB_14dc5e93e;
    }
  }
  (**(code **)(this->_padding_ + 0x410))(this,0);
LAB_14dc5e93e:
  UChaosClothAssetBase::SetReferenceSkeleton((UChaosClothAssetBase *)this,pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.ClothCollection.SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 15058aea0

bool __thiscall `UChaosClothAsset::Build'::__l41::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8325958604838403457>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8325958604838403457>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

