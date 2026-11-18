// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 30

// <lambda_invoker_cdecl> @ 14dfe4e80

EQueuedWorkPriority __cdecl
`FGroomBindingCompilingManager::GetThreadPool'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (EQueuedWorkPriority param_1)

{
  return Low;
}

// FGroomBindingCompilingManager @ 14dfed580

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FGroomBindingCompilingManager * __thiscall
FGroomBindingCompilingManager::FGroomBindingCompilingManager(FGroomBindingCompilingManager *this)

{
  FText *pFVar1;
  FDelegateHandle FVar2;
  bool bVar3;
  FTextFormat local_28;
  FText local_18;
  
  this->bHasShutdown = false;
  this->_padding_ = (longlong)&___7FGroomBindingCompilingManager__6B_;
  *(undefined8 *)&(this->GroomBindingWithPendingDependencies).Elements = 0;
  *(undefined8 *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x34 = 0;
  (this->GroomBindingWithPendingDependencies).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->GroomBindingWithPendingDependencies).HashSize = 0;
  *(undefined8 *)&(this->RegisteredGroomBindingAssets).Elements = 0;
  *(undefined8 *)&(this->RegisteredGroomBindingAssets).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredGroomBindingAssets).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredGroomBindingAssets).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredGroomBindingAssets).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredGroomBindingAssets).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredGroomBindingAssets).Elements.field_0x34 = 0;
  (this->RegisteredGroomBindingAssets).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RegisteredGroomBindingAssets).HashSize = 0;
  *(undefined8 *)&this->RegisteredSkeletalMeshes = 0;
  *(undefined8 *)&(this->RegisteredSkeletalMeshes).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredSkeletalMeshes).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredSkeletalMeshes).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredSkeletalMeshes).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredSkeletalMeshes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredSkeletalMeshes).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredSkeletalMeshes).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredSkeletalMeshes).field_0x48 = 0;
  *(undefined8 *)&this->RegisteredGroomAssets = 0;
  *(undefined8 *)&(this->RegisteredGroomAssets).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredGroomAssets).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredGroomAssets).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredGroomAssets).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredGroomAssets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredGroomAssets).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredGroomAssets).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredGroomAssets).field_0x48 = 0;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"GroomBindingCompiler",L"GroomBindingNameFormat",
                      L"{0}|plural(one=Groom Binding,other=Groom Bindings)");
  FTextFormat::FTextFormat(&local_28,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  (this->Notification).AssetNameFormat.TextFormatData.Object = local_28.TextFormatData.Object;
  (this->Notification).NotificationHandle.Id = -1;
  (this->Notification).AssetNameFormat.TextFormatData.SharedReferenceCount.ReferenceController =
       local_28.TextFormatData.SharedReferenceCount.ReferenceController;
  if (local_28.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.TextFormatData.SharedReferenceCount.ReferenceController);
  bVar3 = bIsInitialized == false;
  (this->PostReachabilityAnalysisHandle).ID = 0;
  if (bVar3) {
    bIsInitialized = true;
  }
  FVar2 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddRaw<FGroomBindingCompilingManager>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreUObjectDelegates::PostReachabilityAnalysis,
                     (FGroomBindingCompilingManager *)&stack0x00000008,(pmf_cb634298)this);
                    /* WARNING: Load size is inaccurate */
  (this->PostReachabilityAnalysisHandle).ID = *FVar2.ID;
  return this;
}

// ~FGroomBindingCompilingManager @ 14dff1630

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FGroomBindingCompilingManager::~FGroomBindingCompilingManager(FGroomBindingCompilingManager *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Notification).AssetNameFormat.TextFormatData.SharedReferenceCount.
             ReferenceController);
  *(undefined4 *)&(this->RegisteredGroomAssets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RegisteredGroomAssets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UGroomAsset_*,UGroomBindingAsset_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UGroomAsset_*,UGroomBindingAsset_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UGroomAsset_*,UGroomBindingAsset_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredGroomAssets);
  *(undefined4 *)&(this->RegisteredSkeletalMeshes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RegisteredSkeletalMeshes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredSkeletalMeshes);
  (this->RegisteredGroomBindingAssets).HashSize = 0;
  FVar2 = (this->RegisteredGroomBindingAssets).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<UGroomBindingAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UGroomBindingAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RegisteredGroomBindingAssets).Elements);
  (this->GroomBindingWithPendingDependencies).HashSize = 0;
  FVar2 = (this->GroomBindingWithPendingDependencies).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<UGroomBindingAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UGroomBindingAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->GroomBindingWithPendingDependencies).Elements);
  this->_padding_ = (longlong)&___7IAssetCompilingManager__6B_;
  return;
}

// AddGroomBindings @ 14dff76f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FGroomBindingCompilingManager::AddGroomBindings
          (FGroomBindingCompilingManager *this,TArrayView<UGroomBindingAsset_*_const,int> *param_1)

{
  TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator> *this_00;
  int iVar1;
  UGroomBindingAsset *this_01;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
  *this_02;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  undefined1 *puVar11;
  bool bVar12;
  TPairInitializer<USkeletalMesh_*_const_&,UGroomBindingAsset_*_const_&> local_res18;
  UGroomBindingAsset *local_c8;
  TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
  *local_c0;
  UGroomBindingAsset **local_b8;
  TPairInitializer<UGroomAsset_*_const_&,UGroomBindingAsset_*_const_&> local_b0;
  USkeletalMesh *local_a0;
  UGroomAsset *local_98;
  UGroomBindingAsset **local_90;
  FSparseArrayAllocationInfo local_88;
  UGroomBindingAsset ***local_78;
  UGroomBindingAsset **local_70;
  USkeletalMesh **local_68;
  UGroomBindingAsset **local_60;
  UGroomAsset **local_58;
  UGroomBindingAsset **local_50;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId368,"FGroomBindingCompilingManager::AddGroomBindings",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingCompiler.cpp"
               ,0x170);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId368);
  }
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingCompiler.cpp"
                         ,0x171,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_b8 = param_1->DataPtr;
  local_90 = local_b8 + param_1->ArrayNum;
  if (local_b8 != local_90) {
    local_c0 = (TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
                *)&this->RegisteredSkeletalMeshes;
    this_00 = &this->RegisteredGroomBindingAssets;
    do {
      puVar11 = &(this->RegisteredGroomBindingAssets).Elements.field_0x8;
      this_01 = *local_b8;
      if (*(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x8 !=
          *(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x34) {
        uVar7 = ((uint)((ulonglong)this_01 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_01 >> 4)) *
                -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        FVar2 = (this->GroomBindingWithPendingDependencies).Hash.SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&(this->GroomBindingWithPendingDependencies).Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        iVar10 = *(int *)((longlong)FVar9 +
                         ((longlong)(this->GroomBindingWithPendingDependencies).HashSize - 1U &
                         (longlong)(int)(uVar7 >> 0x10 ^ uVar7)) * 4);
        if (iVar10 != -1) {
          lVar3 = *(longlong *)&(this->GroomBindingWithPendingDependencies).Elements;
          do {
            if (*(UGroomBindingAsset **)(lVar3 + (longlong)iVar10 * 0x10) == this_01) {
              TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>
              ::RemoveByIndex(&this->GroomBindingWithPendingDependencies,iVar10);
              break;
            }
            iVar10 = *(int *)(lVar3 + 8 + (longlong)iVar10 * 0x10);
          } while (iVar10 != -1);
        }
      }
      if (((this_01->AsyncTask).Ptr == (FGroomBindingAsyncBuildTask *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("GroomBindingAsset->AsyncTask != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingCompiler.cpp"
                             ,0x178,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = *(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x34;
      if (iVar10 == 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,1,(ForAnyElementType *)this_00,(int *)puVar11,
                           (int *)&(this->RegisteredGroomBindingAssets).Elements.field_0xc);
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->RegisteredGroomBindingAssets).Elements.field_0x10,false);
      }
      else {
        iVar8 = *(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x30;
        lVar3 = *(longlong *)&this_00->Elements;
        iVar1 = *(int *)(lVar3 + 4 + (longlong)iVar8 * 0x10);
        iVar10 = iVar10 + -1;
        *(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x30 = iVar1;
        *(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x34 = iVar10;
        if (iVar10 != 0) {
          *(undefined4 *)(lVar3 + (longlong)iVar1 * 0x10) = 0xffffffff;
        }
      }
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,&local_88,iVar8);
      if (local_88.Pointer != (TSparseSetElement<UGroomBindingAsset_*> *)0x0) {
        *(UGroomBindingAsset **)local_88.Pointer = this_01;
        *(undefined4 *)((longlong)local_88.Pointer + 8) = 0xffffffff;
      }
      uVar4 = *(ulonglong *)local_88.Pointer;
      uVar7 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      iVar10 = *(int *)puVar11;
      iVar8 = *(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x34;
      uVar7 = uVar7 >> 0x10 ^ uVar7;
      if ((iVar10 - iVar8 != 1) && (iVar10 != iVar8)) {
        FVar2 = (this->RegisteredGroomBindingAssets).Hash.SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&(this->RegisteredGroomBindingAssets).Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        iVar10 = *(int *)((longlong)FVar9 +
                         (ulonglong)((this->RegisteredGroomBindingAssets).HashSize - 1U & uVar7) * 4
                         );
        if (iVar10 != -1) {
          do {
            if (*(ulonglong *)(*(longlong *)&this_00->Elements + (longlong)iVar10 * 0x10) == uVar4)
            {
              if (iVar10 != -1) {
                *(ulonglong *)(*(longlong *)&this_00->Elements + (longlong)iVar10 * 0x10) = uVar4;
                TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)this_00,local_88.Index,1);
                goto LAB_14dff79d6;
              }
              break;
            }
            iVar10 = *(int *)(*(longlong *)&this_00->Elements + 8 + (longlong)iVar10 * 0x10);
          } while (iVar10 != -1);
        }
      }
      TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>::
      RehashOrLink(this_00,uVar7,local_88.Pointer,local_88.Index);
LAB_14dff79d6:
      local_c8 = this_01;
      local_b0.Value = (UGroomBindingAsset **)UGroomBindingAsset::GetTargetSkeletalMesh(this_01);
      this_02 = local_c0;
      if ((USkeletalMesh *)local_b0.Value != (USkeletalMesh *)0x0) {
        local_78 = &local_b0.Value;
        local_70 = &local_c8;
        TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<USkeletalMesh_*_const_&,UGroomBindingAsset_*_const_&>_>
                  (local_c0,&local_res18,(bool *)&local_78);
      }
      local_a0 = UGroomBindingAsset::GetSourceSkeletalMesh(local_c8);
      if (local_a0 != (USkeletalMesh *)0x0) {
        local_68 = &local_a0;
        local_60 = &local_c8;
        TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<USkeletalMesh_*_const_&,UGroomBindingAsset_*_const_&>_>
                  (this_02,(TPairInitializer<USkeletalMesh_*_const_&,UGroomBindingAsset_*_const_&> *
                           )&local_res18.Value,(bool *)&local_68);
      }
      local_98 = UGroomBindingAsset::GetGroom(local_c8);
      if (local_98 != (UGroomAsset *)0x0) {
        local_58 = &local_98;
        local_50 = &local_c8;
        TSet<TTuple<UGroomAsset_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UGroomAsset_*_const_&,UGroomBindingAsset_*_const_&>_>
                  ((TSet<TTuple<UGroomAsset_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
                    *)&this->RegisteredGroomAssets,&local_b0,(bool *)&local_58);
      }
      local_b8 = local_b8 + 1;
    } while (local_b8 != local_90);
  }
  UpdateCompilationNotification(this);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AddGroomBindingsWithPendingDependencies @ 14dff7b00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FGroomBindingCompilingManager::AddGroomBindingsWithPendingDependencies
          (FGroomBindingCompilingManager *this,TArrayView<UGroomBindingAsset_*_const,int> *param_1)

{
  undefined1 *puVar1;
  UGroomBindingAsset **ppUVar2;
  int iVar3;
  UGroomBindingAsset *pUVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator> *this_00;
  int iVar13;
  UGroomBindingAsset **ppUVar14;
  bool bVar15;
  FSparseArrayAllocationInfo local_48;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId355,
               "FGroomBindingCompilingManager::AddGroomBindingsWithPendingDependencies",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingCompiler.cpp"
               ,0x163);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId355);
  }
  bVar9 = IsInGameThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingCompiler.cpp"
                         ,0x164,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  ppUVar14 = param_1->DataPtr;
  ppUVar2 = ppUVar14 + param_1->ArrayNum;
  if (ppUVar14 != ppUVar2) {
    this_00 = &this->GroomBindingWithPendingDependencies;
    puVar1 = &(this->GroomBindingWithPendingDependencies).Elements.field_0x8;
    do {
      iVar13 = *(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x34;
      pUVar4 = *ppUVar14;
      if (iVar13 == 0) {
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,1,(ForAnyElementType *)this_00,(int *)puVar1,
                            (int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0xc);
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->GroomBindingWithPendingDependencies).Elements.field_0x10,false);
      }
      else {
        iVar10 = *(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x30;
        lVar5 = *(longlong *)&this_00->Elements;
        iVar3 = *(int *)(lVar5 + 4 + (longlong)iVar10 * 0x10);
        iVar13 = iVar13 + -1;
        *(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x30 = iVar3;
        *(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x34 = iVar13;
        if (iVar13 != 0) {
          *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x10) = 0xffffffff;
        }
      }
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,&local_48,iVar10);
      if (local_48.Pointer != (TSparseSetElement<UGroomBindingAsset_*> *)0x0) {
        *(UGroomBindingAsset **)local_48.Pointer = pUVar4;
        *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
      }
      uVar6 = *(ulonglong *)local_48.Pointer;
      uVar11 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      iVar13 = *(int *)puVar1;
      iVar10 = *(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x34;
      uVar11 = uVar11 >> 0x10 ^ uVar11;
      if ((iVar13 - iVar10 != 1) && (iVar13 != iVar10)) {
        FVar7 = (this->GroomBindingWithPendingDependencies).Hash.SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&(this->GroomBindingWithPendingDependencies).Hash;
        if (FVar7 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar7;
        }
        iVar13 = *(int *)((longlong)FVar12 +
                         (ulonglong)
                         ((this->GroomBindingWithPendingDependencies).HashSize - 1U & uVar11) * 4);
        if (iVar13 != -1) {
          do {
            if (*(ulonglong *)(*(longlong *)&this_00->Elements + (longlong)iVar13 * 0x10) == uVar6)
            {
              if (iVar13 != -1) {
                *(ulonglong *)(*(longlong *)&this_00->Elements + (longlong)iVar13 * 0x10) = uVar6;
                TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)this_00,local_48.Index,1);
                goto LAB_14dff7d24;
              }
              break;
            }
            iVar13 = *(int *)(*(longlong *)&this_00->Elements + 8 + (longlong)iVar13 * 0x10);
          } while (iVar13 != -1);
        }
      }
      TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>::
      RehashOrLink(this_00,uVar11,local_48.Pointer,local_48.Index);
LAB_14dff7d24:
      ppUVar14 = ppUVar14 + 1;
    } while (ppUVar14 != ppUVar2);
  }
  UpdateCompilationNotification(this);
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// AttachDependencies @ 14dff85e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FGroomBindingCompilingManager::AttachDependencies
          (FGroomBindingCompilingManager *this,UGroomBindingAsset *param_1)

{
  UGroomBindingAsset *local_res10;
  TPairInitializer<USkeletalMesh_*_const_&,UGroomBindingAsset_*_const_&> local_res18;
  UGroomBindingAsset ***local_28;
  UGroomBindingAsset **local_20;
  
  local_res10 = param_1;
  local_res18.Value = (UGroomBindingAsset **)UGroomBindingAsset::GetTargetSkeletalMesh(param_1);
  if ((USkeletalMesh *)local_res18.Value != (USkeletalMesh *)0x0) {
    local_28 = &local_res18.Value;
    local_20 = &local_res10;
    TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<USkeletalMesh_*_const_&,UGroomBindingAsset_*_const_&>_>
              ((TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
                *)&this->RegisteredSkeletalMeshes,&local_res18,(bool *)&local_28);
  }
  local_res18.Value = (UGroomBindingAsset **)UGroomBindingAsset::GetSourceSkeletalMesh(local_res10);
  if ((USkeletalMesh *)local_res18.Value != (USkeletalMesh *)0x0) {
    local_28 = &local_res18.Value;
    local_20 = &local_res10;
    TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<USkeletalMesh_*_const_&,UGroomBindingAsset_*_const_&>_>
              ((TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
                *)&this->RegisteredSkeletalMeshes,&local_res18,(bool *)&local_28);
  }
  local_res18.Value = (UGroomBindingAsset **)UGroomBindingAsset::GetGroom(local_res10);
  if ((UGroomAsset *)local_res18.Value != (UGroomAsset *)0x0) {
    local_28 = &local_res18.Value;
    local_20 = &local_res10;
    TSet<TTuple<UGroomAsset_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UGroomAsset_*_const_&,UGroomBindingAsset_*_const_&>_>
              ((TSet<TTuple<UGroomAsset_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
                *)&this->RegisteredGroomAssets,
               (TPairInitializer<UGroomAsset_*_const_&,UGroomBindingAsset_*_const_&> *)&local_res18,
               (bool *)&local_28);
  }
  return;
}

// DetachDependencies @ 14e00a5a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FGroomBindingCompilingManager::DetachDependencies
          (FGroomBindingCompilingManager *this,UGroomBindingAsset *param_1)

{
  USkeletalMesh *pUVar1;
  UGroomAsset *pUVar2;
  TBaseKeyIterator<0> local_28;
  
  pUVar1 = UGroomBindingAsset::GetTargetSkeletalMesh(param_1);
  if (pUVar1 != (USkeletalMesh *)0x0) {
    TMultiMap<USkeletalMesh_*,UGroomBindingAsset_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>_>
    ::Remove(&this->RegisteredSkeletalMeshes,pUVar1,param_1);
  }
  pUVar1 = UGroomBindingAsset::GetSourceSkeletalMesh(param_1);
  if (pUVar1 != (USkeletalMesh *)0x0) {
    TMultiMap<USkeletalMesh_*,UGroomBindingAsset_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>_>
    ::Remove(&this->RegisteredSkeletalMeshes,pUVar1,param_1);
  }
  pUVar2 = UGroomBindingAsset::GetGroom(param_1);
  if (pUVar2 != (UGroomAsset *)0x0) {
    TSet<TTuple<UGroomAsset_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
    ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
              (&local_28,
               (TSet<TTuple<UGroomAsset_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
                *)&this->RegisteredGroomAssets,pUVar2);
joined_r0x00014e00a61f:
    if (local_28.Index != -1) {
      if (*(UGroomBindingAsset **)
           (*(longlong *)&(local_28.Set)->Elements + 8 + (longlong)local_28.Index * 0x18) == param_1
         ) {
        TSet<TTuple<UGroomAsset_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
        ::RemoveByIndex(local_28.Set,local_28.Index);
      }
      if (local_28.NextIndex == -1) {
        return;
      }
      local_28.Index = local_28.NextIndex;
      do {
        local_28.NextIndex =
             *(int *)(*(longlong *)&(local_28.Set)->Elements + 0x10 +
                     (longlong)local_28.Index * 0x18);
        if (*(UGroomAsset **)
             (*(longlong *)&(local_28.Set)->Elements + (longlong)local_28.Index * 0x18) ==
            local_28.Key) break;
        local_28.Index = local_28.NextIndex;
      } while (local_28.NextIndex != -1);
      goto joined_r0x00014e00a61f;
    }
  }
  return;
}

// FinishAllCompilation @ 14e010d80

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FGroomBindingCompilingManager::FinishAllCompilation(FGroomBindingCompilingManager *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<UGroomBindingAsset_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArrayView<UGroomBindingAsset_*_const,int> *pTVar4;
  TArrayView<UGroomBindingAsset_*_const,int> local_38;
  TArray<UGroomBindingAsset_*,TSizedDefaultAllocator<32>_> local_28;
  TArrayView<UGroomBindingAsset_*_const,int> local_18;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingCompiler.cpp"
                         ,499,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId500,"FGroomBindingCompilingManager::FinishAllCompilation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingCompiler.cpp"
               ,500);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId500);
  }
  if (((*(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x8 -
       *(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x34) -
      *(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x34) +
      *(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x8 != 0) {
    pTVar3 = TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>
             ::Array(&this->RegisteredGroomBindingAssets,&local_28);
    pTVar4 = TArrayView<UGroomBindingAsset_*_const,int>::
             TArrayView<UGroomBindingAsset_*_const,int><TArray<UGroomBindingAsset_*,TSizedDefaultAllocator<32>_>,TArray<UGroomBindingAsset_*,TSizedDefaultAllocator<32>_>_>
                       (&local_18,pTVar3);
    local_38.DataPtr = pTVar4->DataPtr;
    local_38.ArrayNum = pTVar4->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&pTVar4->field_0xc;
    FinishCompilation(this,&local_38);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FinishCompilation @ 14e010e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FGroomBindingCompilingManager::FinishCompilation
          (FGroomBindingCompilingManager *this,TArrayView<UGroomBindingAsset_*_const,int> *param_1)

{
  UGroomBindingAsset *pUVar1;
  ForElementType<FSetElementId> FVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  USkeletalMesh *pUVar9;
  ulonglong uVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  ulonglong uVar13;
  longlong lVar14;
  ForElementType<FSetElementId> FVar15;
  FGroomBindingCompilingManager *pFVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  undefined4 uVar21;
  ForElementType<unsigned_int> FVar22;
  FGroomBindingCompilingManager *pFVar23;
  bool bVar24;
  undefined1 auStackY_238 [32];
  FObjectCacheContextScope local_1f7 [7];
  FGroomBindingCompilingManager *local_1f0;
  ForAnyElementType local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8 [96];
  TObjectPtr<UGeometryCache>_u_0 local_178;
  TObjectPtr<UGeometryCache>_u_0 TStack_170;
  int local_168;
  int local_164;
  FNameEntryId local_160;
  uint local_15c;
  ForAnyElementType local_158;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_150;
  undefined1 local_148 [20];
  int iStack_134;
  TNode *pTStack_130;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_128;
  undefined1 local_120 [32];
  FSparseArrayAllocationInfo local_100;
  FSparseArrayAllocationInfo local_f0;
  code *local_e0;
  undefined1 *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TArrayView<UGroomBindingAsset_*_const,int> local_a8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  bVar24 = -1 < CpuChannel->Enabled;
  local_158.Data = (FScriptContainerElement *)this;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId387,"FGroomBindingCompilingManager::FinishCompilation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingCompiler.cpp"
               ,0x183);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId387);
  }
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingCompiler.cpp"
                         ,0x185,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar16 = (FGroomBindingCompilingManager *)param_1->DataPtr;
  local_1d8._24_4_ = param_1->ArrayNum;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_98.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  pFVar23 = (FGroomBindingCompilingManager *)
            ((pFVar16->GroomBindingWithPendingDependencies).Hash.InlineData +
            (longlong)(int)local_1d8._24_4_ * 8 + -0x48);
  local_98.AllocationFlags.NumBits = 0;
  local_98.AllocationFlags.MaxBits = 0x80;
  local_98.FirstFreeIndex = -1;
  local_98.NumFreeIndices = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_1f0 = pFVar23;
  local_1d8._40_8_ = pFVar16;
  if (pFVar16 != pFVar23) {
    do {
      pUVar1 = (UGroomBindingAsset *)pFVar16->_padding_;
      local_1d8._32_8_ = pUVar1;
      pUVar9 = UGroomBindingAsset::GetTargetSkeletalMesh(pUVar1);
      if (pUVar9 != (USkeletalMesh *)0x0) {
        pUVar9 = UGroomBindingAsset::GetTargetSkeletalMesh(pUVar1);
        cVar6 = (**(code **)(pUVar9->_padding_ + 0x10))();
        if (cVar6 != '\0') {
          pUVar9 = UGroomBindingAsset::GetTargetSkeletalMesh(pUVar1);
          if (local_98.NumFreeIndices == 0) {
            iVar7 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,1,(ForAnyElementType *)&local_98,&local_98.Data.ArrayNum,
                               &local_98.Data.ArrayMax);
            TBitArray<FDefaultBitArrayAllocator>::Add(&local_98.AllocationFlags,false);
            iVar8 = local_98.FirstFreeIndex;
          }
          else {
            local_98.NumFreeIndices = local_98.NumFreeIndices + -1;
            iVar8 = *(int *)(local_98.Data.AllocatorInstance.Data +
                            (longlong)local_98.FirstFreeIndex * 0x10 + 4);
            iVar7 = local_98.FirstFreeIndex;
            if (local_98.NumFreeIndices != 0) {
              *(undefined4 *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar8 * 0x10) =
                   0xffffffff;
            }
          }
          local_98.FirstFreeIndex = iVar8;
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex(&local_98,&local_100,iVar7);
          if (local_100.Pointer != (FGroomBindingAsyncBuildTask *)0x0) {
            *(USkeletalMesh **)local_100.Pointer = pUVar9;
            *(undefined4 *)((longlong)local_100.Pointer + 8) = 0xffffffff;
          }
          uVar13 = *(ulonglong *)local_100.Pointer;
          uVar11 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
          uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
          uVar11 = uVar11 >> 0x10 ^ uVar11;
          if ((local_98.Data.ArrayNum - local_98.NumFreeIndices != 1) &&
             (local_98.Data.ArrayNum != local_98.NumFreeIndices)) {
            FVar12.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar12.Data = local_58.Data;
            }
            for (iVar8 = *(int *)(FVar12.Data + (ulonglong)(local_50 - 1 & uVar11) * 4); iVar8 != -1
                ; iVar8 = *(int *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8
                                  )) {
              if (*(ulonglong *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar8 * 0x10) ==
                  uVar13) {
                if (iVar8 != -1) {
                  *(ulonglong *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar8 * 0x10) =
                       uVar13;
                  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized(&local_98,local_100.Index,1);
                  pFVar23 = local_1f0;
                  goto LAB_14e01144b;
                }
                break;
              }
            }
          }
          uVar18 = local_98.Data.ArrayNum - local_98.NumFreeIndices;
          uVar17 = 1;
          if (3 < uVar18) {
            uVar13 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
            lVar14 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            local_168 = (int)lVar14;
            uVar17 = 1 << ((byte)lVar14 & 0x1f);
          }
          if (((int)uVar18 < 1) || ((int)uVar17 <= (int)local_50)) {
            uVar11 = local_50 - 1 & uVar11;
            *(uint *)((longlong)((longlong)local_100.Pointer + 8) + 4) = uVar11;
            FVar12.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar12.Data = local_58.Data;
            }
            uVar13 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar11;
            *(undefined4 *)((longlong)local_100.Pointer + 8) =
                 *(undefined4 *)(FVar12.Data + uVar13 * 4);
            *(int *)(FVar12.Data + uVar13 * 4) = local_100.Index;
            pFVar23 = local_1f0;
          }
          else {
            local_50 = uVar17;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
            }
            if (uVar17 != 0) {
              uVar11 = uVar17;
              if (uVar17 < 2) {
                if (local_58.Data != (FScriptContainerElement *)0x0) {
                  uVar11 = 0;
                  goto LAB_14e01121f;
                }
              }
              else {
LAB_14e01121f:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_58,0,uVar11,4);
              }
              if (0 < (int)uVar17) {
                uVar19 = (ulonglong)uVar17;
                uVar13 = 0;
                do {
                  FVar12.Data = local_60;
                  if (local_58.Data != (FScriptContainerElement *)0x0) {
                    FVar12.Data = local_58.Data;
                  }
                  uVar10 = uVar13 & (longlong)(int)uVar17 - 1U;
                  uVar13 = uVar13 + 1;
                  *(undefined4 *)(FVar12.Data + uVar10 * 4) = 0xffffffff;
                  uVar19 = uVar19 - 1;
                } while (uVar19 != 0);
              }
            }
            pFVar23 = local_1f0;
            if (local_50 != 0) {
              local_1d8._56_8_ = &local_98.AllocationFlags;
              local_1d8._52_4_ = 1;
              local_1d8._48_4_ = 0;
              local_1d8._68_4_ = 0;
              local_1d8._72_4_ = 0;
              if (local_98.AllocationFlags.NumBits != 0) {
                FVar22 = (ForElementType<unsigned_int>)&local_98.AllocationFlags;
                if (local_98.AllocationFlags.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar22 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
                }
                uVar11 = *(uint *)FVar22;
                local_1d8._72_4_ = 0;
                local_1d8._48_4_ = 0;
                while (uVar11 == 0) {
                  local_1d8._72_4_ = local_1d8._72_4_ + 0x20;
                  lVar14 = (longlong)(int)local_1d8._48_4_;
                  local_1d8._48_4_ = local_1d8._48_4_ + 1;
                  if ((int)(local_98.AllocationFlags.NumBits + -1 +
                           (local_98.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 <
                      (int)local_1d8._48_4_) goto LAB_14e01133d;
                  uVar11 = *(uint *)((uchar *)((longlong)FVar22 + 4) + lVar14 * 4);
                }
                local_1d8._52_4_ = -uVar11 & uVar11;
                uVar13 = (ulonglong)(uint)local_1d8._52_4_ * 2 + 1;
                lVar14 = 0x3f;
                if (uVar13 != 0) {
                  for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                  }
                }
                local_164 = (int)lVar14;
                local_1d8._68_4_ = local_1d8._72_4_ + -1 + local_164;
                if (local_98.AllocationFlags.NumBits < (int)local_1d8._68_4_) {
LAB_14e01133d:
                  local_1d8._68_4_ = local_98.AllocationFlags.NumBits;
                }
              }
              local_1d8._64_4_ = 0xffffffff;
              local_150 = &local_98;
              local_148._0_8_ = CONCAT44(local_1d8._52_4_,local_1d8._48_4_);
              unique0x100007fc = (TNode *)CONCAT44(local_1d8._68_4_,0xffffffff);
              pTStack_130 = (TNode *)CONCAT44(local_1d8._76_4_,local_1d8._72_4_);
              iVar8 = local_1d8._68_4_;
              local_148._8_8_ = local_1d8._56_8_;
              if ((int)local_1d8._68_4_ < local_98.AllocationFlags.NumBits) {
                do {
                  pFVar20 = (local_150->Data).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
                  uVar11 = ((uint)(*(ulonglong *)pFVar20 >> 0x14) & 0xffff ^
                           (uint)(*(ulonglong *)pFVar20 >> 4)) * -0x7a143595;
                  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
                  uVar11 = (uVar11 >> 0x10 ^ uVar11) & local_50 - 1;
                  *(uint *)(pFVar20 + 0xc) = uVar11;
                  FVar12.Data = local_60;
                  if (local_58.Data != (FScriptContainerElement *)0x0) {
                    FVar12.Data = local_58.Data;
                  }
                  uVar13 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar11;
                  *(undefined4 *)(pFVar20 + 8) = *(undefined4 *)(FVar12.Data + uVar13 * 4);
                  *(int *)(FVar12.Data + uVar13 * 4) = iVar8;
                  stack0xfffffffffffffec8 =
                       (TNode *)CONCAT44(iStack_134,local_148._16_4_ & ~local_148._4_4_);
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_148);
                  pFVar23 = local_1f0;
                  iVar8 = iStack_134;
                } while (iStack_134 < *(int *)(local_148._8_8_ + 0x18));
              }
            }
          }
        }
      }
LAB_14e01144b:
      uVar4 = local_1d8._32_8_;
      pUVar9 = UGroomBindingAsset::GetSourceSkeletalMesh((UGroomBindingAsset *)local_1d8._32_8_);
      if (pUVar9 != (USkeletalMesh *)0x0) {
        pUVar9 = UGroomBindingAsset::GetSourceSkeletalMesh((UGroomBindingAsset *)uVar4);
        cVar6 = (**(code **)(pUVar9->_padding_ + 0x10))();
        if (cVar6 != '\0') {
          pUVar9 = UGroomBindingAsset::GetSourceSkeletalMesh((UGroomBindingAsset *)uVar4);
          if (local_98.NumFreeIndices == 0) {
            iVar7 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,1,(ForAnyElementType *)&local_98,&local_98.Data.ArrayNum,
                               &local_98.Data.ArrayMax);
            TBitArray<FDefaultBitArrayAllocator>::Add(&local_98.AllocationFlags,false);
            iVar8 = local_98.FirstFreeIndex;
          }
          else {
            local_98.NumFreeIndices = local_98.NumFreeIndices + -1;
            iVar8 = *(int *)(local_98.Data.AllocatorInstance.Data +
                            (longlong)local_98.FirstFreeIndex * 0x10 + 4);
            iVar7 = local_98.FirstFreeIndex;
            if (local_98.NumFreeIndices != 0) {
              *(undefined4 *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar8 * 0x10) =
                   0xffffffff;
            }
          }
          local_98.FirstFreeIndex = iVar8;
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex(&local_98,&local_f0,iVar7);
          if (local_f0.Pointer != (ulonglong *)0x0) {
            *(USkeletalMesh **)local_f0.Pointer = pUVar9;
            *(undefined4 *)((longlong)local_f0.Pointer + 8) = 0xffffffff;
          }
          uVar13 = *(ulonglong *)local_f0.Pointer;
          uVar11 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
          uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
          uVar11 = uVar11 >> 0x10 ^ uVar11;
          if ((local_98.Data.ArrayNum - local_98.NumFreeIndices != 1) &&
             (local_98.Data.ArrayNum != local_98.NumFreeIndices)) {
            FVar12.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar12.Data = local_58.Data;
            }
            for (iVar8 = *(int *)(FVar12.Data + (ulonglong)(local_50 - 1 & uVar11) * 4); iVar8 != -1
                ; iVar8 = *(int *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8
                                  )) {
              if (*(ulonglong *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar8 * 0x10) ==
                  uVar13) {
                if (iVar8 != -1) {
                  *(ulonglong *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar8 * 0x10) =
                       uVar13;
                  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized(&local_98,local_f0.Index,1);
                  pFVar23 = local_1f0;
                  goto LAB_14e0118db;
                }
                break;
              }
            }
          }
          uVar18 = local_98.Data.ArrayNum - local_98.NumFreeIndices;
          uVar17 = 1;
          if (3 < uVar18) {
            uVar13 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
            lVar14 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            local_160.Value = (uint)lVar14;
            uVar17 = 1 << ((byte)lVar14 & 0x1f);
          }
          if (((int)uVar18 < 1) || ((int)uVar17 <= (int)local_50)) {
            uVar11 = local_50 - 1 & uVar11;
            *(uint *)((longlong)local_f0.Pointer + 0xc) = uVar11;
            FVar12.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar12.Data = local_58.Data;
            }
            uVar13 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar11;
            *(undefined4 *)((longlong)local_f0.Pointer + 8) =
                 *(undefined4 *)(FVar12.Data + uVar13 * 4);
            *(int *)(FVar12.Data + uVar13 * 4) = local_f0.Index;
            pFVar23 = local_1f0;
          }
          else {
            local_50 = uVar17;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
            }
            if (uVar17 != 0) {
              uVar11 = uVar17;
              if (uVar17 < 2) {
                if (local_58.Data != (FScriptContainerElement *)0x0) {
                  uVar11 = 0;
                  goto LAB_14e0116b2;
                }
              }
              else {
LAB_14e0116b2:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_58,0,uVar11,4);
              }
              if (0 < (int)uVar17) {
                uVar19 = (ulonglong)uVar17;
                uVar13 = 0;
                do {
                  FVar12.Data = local_60;
                  if (local_58.Data != (FScriptContainerElement *)0x0) {
                    FVar12.Data = local_58.Data;
                  }
                  uVar10 = uVar13 & (longlong)(int)uVar17 - 1U;
                  uVar13 = uVar13 + 1;
                  *(undefined4 *)(FVar12.Data + uVar10 * 4) = 0xffffffff;
                  uVar19 = uVar19 - 1;
                } while (uVar19 != 0);
              }
            }
            pFVar23 = local_1f0;
            if (local_50 != 0) {
              local_1d8._88_8_ = &local_98.AllocationFlags;
              local_1d8._84_4_ = 1;
              local_1d8._80_4_ = 0;
              local_178._4_4_ = 0;
              TStack_170._0_4_ = 0;
              if (local_98.AllocationFlags.NumBits != 0) {
                FVar22 = (ForElementType<unsigned_int>)&local_98.AllocationFlags;
                if (local_98.AllocationFlags.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar22 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
                }
                uVar11 = *(uint *)FVar22;
                TStack_170._0_4_ = 0;
                local_1d8._80_4_ = 0;
                while (uVar11 == 0) {
                  TStack_170._0_4_ = TStack_170._0_4_ + 0x20;
                  lVar14 = (longlong)(int)local_1d8._80_4_;
                  local_1d8._80_4_ = local_1d8._80_4_ + 1;
                  if ((int)(local_98.AllocationFlags.NumBits + -1 +
                           (local_98.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 <
                      (int)local_1d8._80_4_) goto LAB_14e0117cd;
                  uVar11 = *(uint *)((uchar *)((longlong)FVar22 + 4) + lVar14 * 4);
                }
                local_1d8._84_4_ = -uVar11 & uVar11;
                uVar13 = (ulonglong)(uint)local_1d8._84_4_ * 2 + 1;
                lVar14 = 0x3f;
                if (uVar13 != 0) {
                  for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                  }
                }
                local_15c = (uint)lVar14;
                local_178._4_4_ = (local_15c - 1) + TStack_170._0_4_;
                if (local_98.AllocationFlags.NumBits < (int)local_178._4_4_) {
LAB_14e0117cd:
                  local_178._4_4_ = local_98.AllocationFlags.NumBits;
                }
              }
              local_178._0_4_ = 0xffffffff;
              local_128 = &local_98;
              local_120._0_8_ = CONCAT44(local_1d8._84_4_,local_1d8._80_4_);
              local_120._20_4_ = local_178._4_4_;
              local_120._16_4_ = 0xffffffff;
              local_120._28_4_ = TStack_170._4_4_;
              local_120._24_4_ = TStack_170._0_4_;
              uVar21 = local_178._4_4_;
              local_120._8_8_ = local_1d8._88_8_;
              if ((int)local_178._4_4_ < local_98.AllocationFlags.NumBits) {
                do {
                  pFVar20 = (local_128->Data).AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10;
                  uVar11 = ((uint)(*(ulonglong *)pFVar20 >> 0x14) & 0xffff ^
                           (uint)(*(ulonglong *)pFVar20 >> 4)) * -0x7a143595;
                  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
                  uVar11 = (uVar11 >> 0x10 ^ uVar11) & local_50 - 1;
                  *(uint *)(pFVar20 + 0xc) = uVar11;
                  FVar12.Data = local_60;
                  if (local_58.Data != (FScriptContainerElement *)0x0) {
                    FVar12.Data = local_58.Data;
                  }
                  uVar13 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar11;
                  *(undefined4 *)(pFVar20 + 8) = *(undefined4 *)(FVar12.Data + uVar13 * 4);
                  *(undefined4 *)(FVar12.Data + uVar13 * 4) = uVar21;
                  local_120._16_4_ = local_120._16_4_ & ~local_120._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_120);
                  pFVar23 = local_1f0;
                  uVar21 = local_120._20_4_;
                } while ((int)local_120._20_4_ < *(int *)(local_120._8_8_ + 0x18));
              }
            }
          }
        }
      }
LAB_14e0118db:
      pFVar16 = (FGroomBindingCompilingManager *)&pFVar16->bHasShutdown;
      this = (FGroomBindingCompilingManager *)local_158.Data;
    } while (pFVar16 != pFVar23);
  }
  pFVar16 = (FGroomBindingCompilingManager *)local_1d8._40_8_;
  uVar21 = local_1d8._24_4_;
  SchedulePendingCompilations(this);
  local_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0 = 0;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)uVar21);
  }
  iVar8 = 0;
  FVar12.Data = local_1e8.Data;
  uVar4 = local_1e0;
  if (0 < (int)uVar21) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar21,&local_1e8,0,(int *)((longlong)&local_1e0 + 4));
    iVar8 = (int)local_1e0;
    FVar12.Data = local_1e8.Data;
    uVar4 = local_1e0;
  }
  do {
    local_1e8.Data = FVar12.Data;
    local_1e0 = uVar4;
    if (pFVar16 == pFVar23) {
      if (iVar8 != 0) {
        local_1d8._0_8_ = (FCompilableGroomBindingAsset *)0x0;
        local_1d8._8_4_ = iVar8;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar8,0,(ForAnyElementType *)local_1d8,iVar8,(int *)(local_1d8 + 0xc));
        ConstructItems<_FGroomBindingCompilingManager::FinishCompilation_::__l29::FCompilableGroomBindingAsset,UGroomBindingAsset_*,int>
                  ((void *)local_1d8._0_8_,(UGroomBindingAsset **)FVar12.Data,iVar8);
        FObjectCacheContextScope::FObjectCacheContextScope(local_1f7);
        local_d8 = local_1d8 + 0x28;
        local_e0 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FGroomBindingCompilingManager::FinishCompilation'::__l29::<lambda_2>,void,AsyncCompilationHelpers::ICompilable_*>
                   ::Call;
        local_1d8._32_8_ = local_1d8;
        local_c8 = local_1d8 + 0x20;
        local_d0 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FGroomBindingCompilingManager::FinishCompilation'::__l29::<lambda_1>,AsyncCompilationHelpers::ICompilable_&,int>
                   ::Call;
        local_1d8._40_8_ = this;
        AsyncCompilationHelpers::FinishCompilation
                  ((TFunctionRef<AsyncCompilationHelpers::ICompilable_&___cdecl(int)> *)&local_d0,
                   local_1d8._8_4_,
                   (TFunctionRef<void___cdecl(AsyncCompilationHelpers::ICompilable_*)> *)&local_e0);
        iStack_b0 = (int)local_1e0;
        local_b8 = local_1e8.Data;
        if (((int)local_1e0 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_a8._12_4_ = uStack_ac;
        local_a8.ArrayNum = iStack_b0;
        local_a8.DataPtr = (UGroomBindingAsset **)local_b8;
        PostCompilation(this,&local_a8);
        UpdateCompilationNotification(this);
        FObjectCacheContextScope::~FObjectCacheContextScope(local_1f7);
        DestructItems<_FGroomBindingCompilingManager::FinishCompilation_::__l29::FCompilableGroomBindingAsset,int>
                  ((FCompilableGroomBindingAsset *)local_1d8._0_8_,local_1d8._8_4_);
        if ((FCompilableGroomBindingAsset *)local_1d8._0_8_ != (FCompilableGroomBindingAsset *)0x0)
        {
          FMemory::Free((void *)local_1d8._0_8_);
        }
      }
      if (local_1e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data);
      }
      local_50 = 0;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      TSparseArray<TSparseSetElement<USkinnedAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<USkinnedAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<USkinnedAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_98);
      if (bVar24) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    pUVar1 = (UGroomBindingAsset *)pFVar16->_padding_;
    uVar11 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
             -0x7a143595;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    if (*(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x8 !=
        *(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x34) {
      FVar2 = (this->RegisteredGroomBindingAssets).Hash.SecondaryData;
      FVar15 = (ForElementType<FSetElementId>)&(this->RegisteredGroomBindingAssets).Hash;
      if (FVar2 != (ForElementType<FSetElementId>)0x0) {
        FVar15 = FVar2;
      }
      iVar7 = *(int *)((longlong)FVar15 +
                      (ulonglong)
                      ((this->RegisteredGroomBindingAssets).HashSize - 1U &
                      (uVar11 >> 0x10 ^ uVar11)) * 4);
      if (iVar7 != -1) {
        lVar14 = *(longlong *)&(this->RegisteredGroomBindingAssets).Elements;
        do {
          if (*(UGroomBindingAsset **)(lVar14 + (longlong)iVar7 * 0x10) == pUVar1) {
            local_1e0._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
            bVar5 = iVar8 == local_1e0._4_4_;
            if (bVar5) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_1e8,(int *)((longlong)&local_1e0 + 4));
            }
            local_1e0 = CONCAT44(local_1e0._4_4_,iVar8 + 1);
            *(UGroomBindingAsset **)(local_1e8.Data + (longlong)iVar8 * 8) = pUVar1;
            iVar8 = iVar8 + 1;
            break;
          }
          iVar7 = *(int *)(lVar14 + 8 + (longlong)iVar7 * 0x10);
        } while (iVar7 != -1);
      }
    }
    pFVar16 = (FGroomBindingCompilingManager *)&pFVar16->bHasShutdown;
    FVar12.Data = local_1e8.Data;
    uVar4 = local_1e0;
  } while( true );
}

// FinishCompilationForObjects @ 14e011bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FGroomBindingCompilingManager::FinishCompilationForObjects
          (FGroomBindingCompilingManager *this,TArrayView<UObject_*_const,int> *param_1)

{
  uint *puVar1;
  code *pcVar2;
  TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
  *pTVar3;
  TSet<TTuple<UGroomAsset_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
  *pTVar4;
  UGroomAsset *pUVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  UClass *pUVar9;
  ulong64 uVar10;
  ulonglong uVar11;
  TArray<UGroomBindingAsset_*,TSizedDefaultAllocator<32>_> *pTVar12;
  byte bVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  USkeletalMesh *pUVar22;
  ulonglong uVar23;
  USkeletalMesh *pUVar24;
  ulonglong *puVar25;
  FScriptContainerElement *pFVar26;
  bool bVar27;
  undefined1 auStackY_1d8 [32];
  int local_1a0;
  uint uStack_19c;
  int iStack_18c;
  int iStack_188;
  USkeletalMesh *local_180;
  TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
  *local_178;
  USkeletalMesh *pUStack_170;
  undefined8 local_168;
  TSet<TTuple<UGroomAsset_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
  *local_160;
  UGroomAsset *pUStack_158;
  undefined8 local_150;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_130;
  UGroomBindingAsset *local_110;
  undefined4 local_108;
  int local_104;
  undefined1 local_100 [8];
  FSparseArrayAllocationInfo local_f8;
  TBaseKeyIterator<0> local_e8;
  TBaseKeyIterator<0> local_d0;
  TArrayView<UGroomBindingAsset_*_const,int> local_b8;
  TArray<UGroomBindingAsset_*,TSizedDefaultAllocator<32>_> local_a8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId510,
               "FGroomBindingCompilingManager::FinishCompilationForObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingCompiler.cpp"
               ,0x1fe);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId510);
  }
  pFVar26 = (FScriptContainerElement *)param_1->DataPtr;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_148 = pFVar26 + (longlong)param_1->ArrayNum * 8;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (pFVar26 != local_148) {
    do {
      pUVar22 = *(USkeletalMesh **)pFVar26;
      if (pUVar22 != (USkeletalMesh *)0x0) {
        pUVar9 = Z_Construct_UClass_UGroomBindingAsset_NoRegister();
        iVar20 = (int)pUVar9->_padding_;
        if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar20) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar20 * 8) !=
            &pUVar9->_padding_)) goto LAB_14e011cfb;
        local_180 = pUVar22;
        TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>::
        Emplace<UGroomBindingAsset_*_const_&>
                  ((TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>
                    *)local_98,&local_110,(bool *)&local_180);
        goto LAB_14e012428;
      }
LAB_14e011cfb:
      local_180 = (USkeletalMesh *)0x0;
      if (pUVar22 == (USkeletalMesh *)0x0) {
LAB_14e01229e:
        pUVar24 = (USkeletalMesh *)0x0;
LAB_14e0122a1:
        if (pUVar24 == (USkeletalMesh *)0x0) {
          if (pUVar22 == (USkeletalMesh *)0x0) {
LAB_14e012385:
            pUVar22 = (USkeletalMesh *)0x0;
          }
          else {
            pUVar9 = Z_Construct_UClass_UGroomAsset_NoRegister();
            iVar20 = (int)pUVar9->_padding_;
            if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar20) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar20 * 8) !=
                &pUVar9->_padding_)) goto LAB_14e012385;
          }
          if (pUVar22 != (USkeletalMesh *)0x0) {
            TSet<TTuple<UGroomAsset_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
            ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
                      (&local_d0,
                       (TSet<TTuple<UGroomAsset_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
                        *)&this->RegisteredGroomAssets,(UGroomAsset *)pUVar22);
            pUVar5 = local_d0.Key;
            pTVar4 = local_d0.Set;
            local_150 = CONCAT44(local_d0.NextIndex,local_d0.Index);
            local_160 = local_d0.Set;
            pUStack_158 = local_d0.Key;
            iVar20 = local_d0.NextIndex;
            iVar7 = local_d0.Index;
            if (local_d0.Index != -1) {
              while( true ) {
                TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>
                ::Emplace<UGroomBindingAsset_*_const_&>
                          ((TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>
                            *)local_98,(UGroomBindingAsset **)(local_100 + 4),
                           (bool *)(*(longlong *)&pTVar4->Elements + ((longlong)iVar7 * 3 + 1) * 8))
                ;
                local_150 = CONCAT44(local_150._4_4_,iVar20);
                if (iVar20 == -1) break;
                lVar19 = *(longlong *)&pTVar4->Elements;
                iVar7 = iVar20;
                while( true ) {
                  iVar20 = *(int *)(lVar19 + 0x10 + (longlong)iVar7 * 0x18);
                  local_150 = CONCAT44(iVar20,(undefined4)local_150);
                  if (*(UGroomAsset **)(lVar19 + (longlong)iVar7 * 0x18) == pUVar5) break;
                  local_150 = CONCAT44(iVar20,iVar20);
                  iVar7 = iVar20;
                  if (iVar20 == -1) goto LAB_14e012428;
                }
              }
            }
          }
        }
        else {
          TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
          ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
                    (&local_e8,
                     (TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
                      *)&this->RegisteredSkeletalMeshes,pUVar24);
          pUVar22 = local_e8.Key;
          pTVar3 = local_e8.Set;
          local_168 = CONCAT44(local_e8.NextIndex,local_e8.Index);
          local_178 = local_e8.Set;
          pUStack_170 = local_e8.Key;
          iVar20 = local_e8.NextIndex;
          iVar7 = local_e8.Index;
          if (local_e8.Index != -1) {
            while( true ) {
              TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>
              ::Emplace<UGroomBindingAsset_*_const_&>
                        ((TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>
                          *)local_98,(UGroomBindingAsset **)local_100,
                         (bool *)(*(longlong *)&pTVar3->Elements + ((longlong)iVar7 * 3 + 1) * 8));
              local_168 = CONCAT44(local_168._4_4_,iVar20);
              if (iVar20 == -1) break;
              lVar19 = *(longlong *)&pTVar3->Elements;
              iVar7 = iVar20;
              while( true ) {
                iVar20 = *(int *)(lVar19 + 0x10 + (longlong)iVar7 * 0x18);
                local_168 = CONCAT44(iVar20,(undefined4)local_168);
                if (*(USkeletalMesh **)(lVar19 + (longlong)iVar7 * 0x18) == pUVar22) break;
                local_168 = CONCAT44(iVar20,iVar20);
                iVar7 = iVar20;
                if (iVar20 == -1) goto LAB_14e012428;
              }
            }
          }
        }
      }
      else {
        pUVar9 = UGroomComponent::StaticClass();
        iVar20 = (int)pUVar9->_padding_;
        if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar20) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar20 * 8) !=
            &pUVar9->_padding_)) {
          pUVar9 = Z_Construct_UClass_USkeletalMesh_NoRegister();
          iVar20 = (int)pUVar9->_padding_;
          if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar20) ||
             (pUVar24 = pUVar22,
             (longlong *)
             *(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar20 * 8) !=
             &pUVar9->_padding_)) goto LAB_14e01229e;
          goto LAB_14e0122a1;
        }
        uVar18 = pUVar22[1]._padding_;
        if (uVar18 != 0) {
          if (local_64 == 0) {
            iVar7 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                               (int *)(local_98 + 0xc));
            iVar20 = local_70;
            if ((local_70 == 0) ||
               ((int)(local_70 + (local_70 >> 0x1f & 0x1fU)) >> 5 !=
                (int)((local_70 + -1 >> 0x1f & 0x1fU) + local_70 + -1) >> 5)) {
              if (local_6c < local_70 + 1) {
                uVar14 = local_6c + 0x1fU >> 5;
                uVar17 = local_70 + 0x20U >> 5;
                if (uVar17 < 5) {
                  local_6c = 4;
                }
                else {
                  uVar23 = (ulonglong)uVar17;
                  if (uVar14 < 5) {
                    uVar14 = 0;
                  }
                  if (uVar14 == 0) {
                    uVar11 = 4;
                    if (4 < uVar23) {
                      uVar11 = uVar23;
                    }
                  }
                  else {
                    uVar11 = ((ulonglong)uVar17 * 3 >> 3) + 0x10 + uVar23;
                  }
                  uVar10 = FMemory::QuantizeSize(uVar11 * 4,0);
                  local_6c = (int)(uVar10 >> 2);
                  if (local_6c < (int)uVar17) {
                    local_6c = 0x7fffffff;
                  }
                }
                local_6c = local_6c << 5;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),local_70);
              }
              local_70 = local_70 + 1;
              uVar17 = local_70 >> 0x1f & 0x1f;
              uVar14 = local_70 + uVar17;
              iVar8 = (uVar14 & 0x1f) - uVar17;
              if (iVar8 != 0) {
                FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
                if (local_78 != (ForElementType<unsigned_int>)0x0) {
                  FVar15 = local_78;
                }
                puVar1 = (uint *)((longlong)FVar15 + (longlong)((int)uVar14 >> 5) * 4);
                *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
              }
            }
            else {
              local_70 = local_70 + 1;
            }
            FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
            if (local_78 != (ForElementType<unsigned_int>)0x0) {
              FVar15 = local_78;
            }
            bVar13 = (byte)iVar20 & 0x1f;
            if (iVar20 < 0) {
              iVar20 = iVar20 + 0x1f;
              bVar13 = bVar13 - 0x20;
            }
            puVar1 = (uint *)((longlong)FVar15 + (longlong)(iVar20 >> 5) * 4);
            *puVar1 = *puVar1 & ~(1 << (bVar13 & 0x1f));
            iVar20 = local_68;
          }
          else {
            local_64 = local_64 + -1;
            iVar20 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0x10 + 4);
            iVar7 = local_68;
            if (local_64 != 0) {
              *(undefined4 *)(local_98._0_8_ + (longlong)iVar20 * 0x10) = 0xffffffff;
            }
          }
          local_68 = iVar20;
          puVar25 = (ulonglong *)0x0;
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_98,&local_f8,iVar7);
          if (local_f8.Pointer != (ulonglong *)0x0) {
            *(ulonglong *)local_f8.Pointer = uVar18;
            *(undefined4 *)((longlong)local_f8.Pointer + 8) = 0xffffffff;
            puVar25 = local_f8.Pointer;
          }
          uVar18 = *puVar25;
          uVar14 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
          uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
          uVar14 = uVar14 >> 0x10 ^ uVar14;
          if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
            FVar16.Data = (FScriptContainerElement *)local_60;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar16.Data = local_58.Data;
            }
            for (iVar20 = *(int *)((longlong)FVar16.Data + (ulonglong)(local_50 - 1 & uVar14) * 4);
                iVar20 != -1; iVar20 = *(int *)(local_98._0_8_ + (longlong)iVar20 * 0x10 + 8)) {
              if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar20 * 0x10) == uVar18) {
                if (iVar20 != -1) {
                  *(ulonglong *)(local_98._0_8_ + (longlong)iVar20 * 0x10) = uVar18;
                  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_98,local_f8.Index,1);
                  goto LAB_14e012428;
                }
                break;
              }
            }
          }
          uVar21 = 1;
          uVar17 = local_98._8_4_ - local_64;
          if (3 < uVar17) {
            uVar18 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
            lVar19 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            local_108 = (undefined4)lVar19;
            uVar21 = 1 << ((byte)lVar19 & 0x1f);
          }
          if (((int)uVar17 < 1) || ((int)uVar21 <= (int)local_50)) {
            uVar14 = local_50 - 1 & uVar14;
            *(uint *)((longlong)puVar25 + 0xc) = uVar14;
            FVar16.Data = (FScriptContainerElement *)local_60;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar16.Data = local_58.Data;
            }
            lVar19 = (longlong)(int)(local_50 - 1 & uVar14);
            *(undefined4 *)(puVar25 + 1) = *(undefined4 *)((longlong)FVar16.Data + lVar19 * 4);
            *(int *)((longlong)FVar16.Data + lVar19 * 4) = local_f8.Index;
          }
          else {
            local_50 = uVar21;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
            }
            if (uVar21 != 0) {
              uVar14 = uVar21;
              if (uVar21 < 2) {
                if ((ForElementType<FSetElementId>)local_58.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  uVar14 = 0;
                  goto LAB_14e012044;
                }
              }
              else {
LAB_14e012044:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_58,0,uVar14,4);
              }
              uVar18 = 0;
              if (0 < (int)uVar21) {
                uVar23 = (ulonglong)uVar21;
                do {
                  FVar16.Data = (FScriptContainerElement *)local_60;
                  if ((ForElementType<FSetElementId>)local_58.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar16.Data = local_58.Data;
                  }
                  uVar11 = (longlong)(int)uVar21 - 1U & uVar18;
                  uVar18 = uVar18 + 1;
                  *(undefined4 *)((longlong)FVar16.Data + uVar11 * 4) = 0xffffffff;
                  uVar23 = uVar23 - 1;
                } while (uVar23 != 0);
              }
            }
            if (local_50 != 0) {
              local_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
              local_1a0 = 0;
              uStack_19c = 1;
              iStack_18c = 0;
              iStack_188 = 0;
              if (local_70 != 0) {
                FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
                if (local_78 != (ForElementType<unsigned_int>)0x0) {
                  FVar15 = local_78;
                }
                uVar14 = *(uint *)FVar15;
                while (uVar14 == 0) {
                  iStack_188 = iStack_188 + 0x20;
                  lVar19 = (longlong)local_1a0;
                  local_1a0 = local_1a0 + 1;
                  if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1a0) {
                    iStack_18c = local_70;
                    goto LAB_14e012156;
                  }
                  uVar14 = ((uint *)((longlong)FVar15 + 4))[lVar19];
                }
                uStack_19c = -uVar14 & uVar14;
                uVar18 = (ulonglong)uStack_19c * 2 + 1;
                lVar19 = 0x3f;
                if (uVar18 != 0) {
                  for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                  }
                }
                local_104 = (int)lVar19;
                iStack_18c = local_104 + -1 + iStack_188;
                if (local_70 < iStack_18c) {
                  iStack_18c = local_70;
                }
              }
LAB_14e012156:
              local_138 = (longlong *)local_98;
              local_130._padding_ = CONCAT44(uStack_19c,local_1a0);
              local_130.UnvisitedBitMask = 0xffffffff;
              local_130.CurrentBitIndex = iStack_18c;
              local_130.BaseBitIndex = iStack_188;
              if (iStack_18c < local_70) {
                do {
                  puVar25 = (ulonglong *)((longlong)local_130.CurrentBitIndex * 0x10 + *local_138);
                  uVar14 = ((uint)(*puVar25 >> 0x14) & 0xffff ^ (uint)(*puVar25 >> 4)) * -0x7a143595
                  ;
                  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
                  uVar14 = (uVar14 >> 0x10 ^ uVar14) & local_50 - 1;
                  *(uint *)((longlong)puVar25 + 0xc) = uVar14;
                  FVar16.Data = (FScriptContainerElement *)local_60;
                  if ((ForElementType<FSetElementId>)local_58.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar16.Data = local_58.Data;
                  }
                  lVar19 = (longlong)(int)(local_50 - 1 & uVar14);
                  *(undefined4 *)(puVar25 + 1) = *(undefined4 *)((longlong)FVar16.Data + lVar19 * 4)
                  ;
                  *(int *)((longlong)FVar16.Data + lVar19 * 4) = local_130.CurrentBitIndex;
                  local_130.UnvisitedBitMask =
                       local_130.UnvisitedBitMask & ~local_130._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_130);
                } while (local_130.CurrentBitIndex < (local_130.Array)->NumBits);
              }
            }
          }
        }
      }
LAB_14e012428:
      pFVar26 = pFVar26 + 8;
    } while (pFVar26 != local_148);
  }
  if (local_98._8_4_ != local_64) {
    pTVar12 = TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>
              ::Array((TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>
                       *)local_98,&local_a8);
    local_148 = (pTVar12->AllocatorInstance).Data;
    iStack_140 = pTVar12->ArrayNum;
    if ((iStack_140 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_b8._12_4_ = uStack_13c;
    local_b8.ArrayNum = iStack_140;
    local_b8.DataPtr = (UGroomBindingAsset **)local_148;
    FinishCompilation(this,&local_b8);
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
  }
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<UGroomBindingAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UGroomBindingAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UGroomBindingAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FinishCompilationsForGame @ 14e012530

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FGroomBindingCompilingManager::FinishCompilationsForGame(FGroomBindingCompilingManager *this)

{
  return;
}

// Get @ 14e012e10

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FGroomBindingCompilingManager * __cdecl FGroomBindingCompilingManager::Get(void)

{
  FDelegateHandle FVar1;
  FText *pFVar2;
  FTextFormat local_28;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_18,L"GroomBindingCompiler",L"GroomBindingNameFormat",
                          L"{0}|plural(one=Groom Binding,other=Groom Bindings)");
      FTextFormat::FTextFormat(&local_28,pFVar2,Default);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      ::Singleton.Notification.NotificationHandle.Id = -1;
      ::Singleton.Notification.AssetNameFormat.TextFormatData.Object =
           local_28.TextFormatData.Object;
      ::Singleton.Notification.AssetNameFormat.TextFormatData.SharedReferenceCount.
      ReferenceController = local_28.TextFormatData.SharedReferenceCount.ReferenceController;
      if (local_28.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.TextFormatData.SharedReferenceCount.ReferenceController);
      ::Singleton.PostReachabilityAnalysisHandle.ID = 0;
      if (bIsInitialized == false) {
        bIsInitialized = true;
      }
      FVar1 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
              AddRaw<FGroomBindingCompilingManager>
                        ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                          *)&FCoreUObjectDelegates::PostReachabilityAnalysis,
                         (FGroomBindingCompilingManager *)&stack0x00000008,(pmf_cb634298)0x154da7d00
                        );
                    /* WARNING: Load size is inaccurate */
      ::Singleton.PostReachabilityAnalysisHandle.ID = *FVar1.ID;
      atexit(`FGroomBindingCompilingManager::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__
            );
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// GetAssetNameFormat @ 14e013340

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextFormat * __thiscall
FGroomBindingCompilingManager::GetAssetNameFormat
          (FGroomBindingCompilingManager *this,FTextFormat *__return_storage_ptr__)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"GroomBindingCompiler",L"GroomBindingNameFormat",
                      L"{0}|plural(one=Groom Binding,other=Groom Bindings)");
  FTextFormat::FTextFormat(__return_storage_ptr__,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetAssetTypeName @ 14e0133e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FName __thiscall
FGroomBindingCompilingManager::GetAssetTypeName(FGroomBindingCompilingManager *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"UE-GroomBinding");
  return in_RDX;
}

// GetBasePriority @ 14e0135b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

EQueuedWorkPriority __thiscall
FGroomBindingCompilingManager::GetBasePriority
          (FGroomBindingCompilingManager *this,UGroomBindingAsset *param_1)

{
  return Low;
}

// GetDependentTypeNames @ 14e014730

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TArrayView<FName,int> * __thiscall
FGroomBindingCompilingManager::GetDependentTypeNames
          (FGroomBindingCompilingManager *this,TArrayView<FName,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FName *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetNumRemainingAssets @ 14e018930

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

int __thiscall
FGroomBindingCompilingManager::GetNumRemainingAssets(FGroomBindingCompilingManager *this)

{
  return ((*(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x8 -
          *(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x34) -
         *(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x34) +
         *(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x8;
}

// GetNumRemainingJobs @ 14e018950

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

int __thiscall
FGroomBindingCompilingManager::GetNumRemainingJobs(FGroomBindingCompilingManager *this)

{
  return ((*(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x8 -
          *(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x34) -
         *(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x34) +
         *(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x8;
}

// GetThreadPool @ 14e0197a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FQueuedThreadPool * __thiscall
FGroomBindingCompilingManager::GetThreadPool(FGroomBindingCompilingManager *this)

{
  FAssetCompilingManager *pFVar1;
  FQueuedThreadPool *pFVar2;
  FQueuedThreadPoolWrapper *this_00;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_c8 [32];
  code *local_a8;
  longlong local_98 [3];
  longlong *local_80;
  code *local_78 [2];
  code *local_68 [3];
  undefined8 local_50;
  code *local_48;
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (GGroomBindingAssetThreadPool == (FQueuedThreadPoolDynamicWrapper *)0x0) {
    pFVar1 = FAssetCompilingManager::Get();
    pFVar2 = FAssetCompilingManager::GetThreadPool(pFVar1);
    if (pFVar2 == (FQueuedThreadPool *)0x0) {
      return (FQueuedThreadPool *)GGroomBindingAssetThreadPool;
    }
    local_38 = &
               ___7__TFunction_OwnedObject_P6A_AW4EQueuedWorkPriority__W41__Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_20 = (undefined ***)0x0;
    local_30 = `FGroomBindingCompilingManager::GetThreadPool'::__l5::<lambda_1>::
               <lambda_invoker_cdecl>;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<enum_EQueuedWorkPriority_(__cdecl*)(enum_EQueuedWorkPriority),enum_EQueuedWorkPriority,enum_EQueuedWorkPriority>
               ::Call;
    this_00 = ::operator_new(0x160);
    if (this_00 == (FQueuedThreadPoolWrapper *)0x0) {
      this_00 = (FQueuedThreadPoolWrapper *)0x0;
    }
    else {
      local_a8 = local_48;
      local_80 = (longlong *)0x0;
      if (local_48 != (code *)0x0) {
        pppuVar4 = &local_38;
        if (local_20 != (undefined ***)0x0) {
          pppuVar4 = local_20;
        }
        (*(code *)**pppuVar4)(pppuVar4,local_98);
      }
      pFVar1 = FAssetCompilingManager::Get();
      pFVar2 = FAssetCompilingManager::GetThreadPool(pFVar1);
      local_78[0] = local_a8;
      local_50 = 0;
      if (local_a8 != (code *)0x0) {
        plVar3 = local_98;
        if (local_80 != (longlong *)0x0) {
          plVar3 = local_80;
        }
        (**(code **)*plVar3)(plVar3,local_78 + 2);
      }
      FQueuedThreadPoolWrapper::FQueuedThreadPoolWrapper
                (this_00,pFVar2,-1,
                 (TFunction<EQueuedWorkPriority___cdecl(EQueuedWorkPriority)> *)local_78);
      *(undefined ***)this_00 = &___7FQueuedThreadPoolDynamicWrapper__6B_;
      if (local_a8 != (code *)0x0) {
        plVar3 = local_98;
        if (local_80 != (longlong *)0x0) {
          plVar3 = local_80;
        }
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    GGroomBindingAssetThreadPool = (FQueuedThreadPoolDynamicWrapper *)this_00;
    if (local_48 != (code *)0x0) {
      pppuVar4 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar4 = local_20;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return (FQueuedThreadPool *)GGroomBindingAssetThreadPool;
}

// IsAsyncCompilationAllowed @ 14e020a80

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FGroomBindingCompilingManager::IsAsyncCompilationAllowed
          (FGroomBindingCompilingManager *this,UGroomBindingAsset *param_1)

{
  return this->bHasShutdown == false;
}

// IsAsyncCompilationEnabled @ 14e020a90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FGroomBindingCompilingManager::IsAsyncCompilationEnabled(FGroomBindingCompilingManager *this)

{
  return this->bHasShutdown == false;
}

// OnPostReachabilityAnalysis @ 14e021430

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGroomBindingCompilingManager::OnPostReachabilityAnalysis(FGroomBindingCompilingManager *this)

{
  TMultiMap<USkeletalMesh_*,UGroomBindingAsset_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>_>
  *pTVar1;
  TMultiMap<UGroomAsset_*,UGroomBindingAsset_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>_>
  *pTVar2;
  FGroomBindingAsyncBuildTask *pFVar3;
  longlong lVar4;
  code *pcVar5;
  UGroomBindingAsset *pUVar6;
  longlong *plVar7;
  bool bVar8;
  int iVar9;
  FUObjectItem *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  FName local_res18 [2];
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  UGroomBindingAsset *local_1b8 [2];
  longlong *local_1a8;
  undefined1 auStack_1a0 [16];
  uint uStack_190;
  uint uStack_18c;
  longlong local_188;
  TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
  *pTStack_180;
  TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
  *local_178;
  char local_170;
  char cStack_16f;
  longlong *local_168;
  undefined1 auStack_160 [16];
  uint uStack_150;
  uint uStack_14c;
  longlong local_148;
  TSet<TTuple<UGroomAsset_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
  *pTStack_140;
  TSet<TTuple<UGroomAsset_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
  *local_138;
  char local_130;
  char cStack_12f;
  FString local_128;
  undefined1 local_118 [12];
  uint local_10c;
  longlong local_108;
  uint local_100;
  int local_fc;
  TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator> *local_f0;
  undefined1 local_e8 [12];
  uint local_dc;
  longlong local_d8;
  uint local_d0;
  int local_cc;
  TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator> *local_c0;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TArrayView<UGroomBindingAsset_*_const,int> local_a8;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
  *pTStack_70;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<UGroomAsset_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
  *pTStack_40;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId106,
               "FGroomBindingCompilingManager::CancelUnreachableGroomBindings",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingCompiler.cpp"
               ,0x6a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId106);
  }
  uVar12 = ((*(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x8 -
            *(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x34) -
           *(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x34) +
           *(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x8;
  local_1c8.Data = (FScriptContainerElement *)0x0;
  local_1c0 = 0;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (0 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar12,&local_1c8,0,(int *)((longlong)&local_1c0 + 4));
  }
  TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>::TIterator
  ::TIterator((TIterator *)local_118,&this->GroomBindingWithPendingDependencies);
  if (local_fc < *(int *)(local_108 + 0x18)) {
    do {
      iVar13 = local_fc;
      pFVar10 = FUObjectArray::IndexToObject
                          (&GUObjectArray,
                           *(int *)(*(longlong *)
                                     (*(longlong *)local_118._0_8_ + (longlong)local_fc * 0x10) +
                                   0xc));
      if (((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
        TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>::
        RemoveByIndex(local_f0,iVar13);
      }
      local_100 = local_100 & ~local_10c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_118 + 8));
    } while (local_fc < *(int *)(local_108 + 0x18));
  }
  TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>::TIterator
  ::TIterator((TIterator *)local_e8,&this->RegisteredGroomBindingAssets);
  iVar13 = 1;
  if (local_cc < *(int *)(local_d8 + 0x18)) {
    do {
      iVar9 = local_cc;
      local_1b8[0] = *(UGroomBindingAsset **)
                      (*(longlong *)local_e8._0_8_ + (longlong)local_cc * 0x10);
      pFVar10 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&local_1b8[0]->_padding_ + 4));
      if (((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
        if (5 < (byte)LogHairStrands._0_1_) {
          local_res18[0] = (FName)local_1b8[0]->_padding_;
          ::FName::ToString(local_res18,&local_128);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
        }
        pUVar6 = local_1b8[0];
        pFVar3 = (local_1b8[0]->AsyncTask).Ptr;
        if (pFVar3 != (FGroomBindingAsyncBuildTask *)0x0) {
          if (((FThreadSafeCounter *)&pFVar3->_padding_)->Counter == 0) {
            FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar3,false);
          }
          else {
            bVar8 = FAsyncTaskBase::Cancel((FAsyncTaskBase *)(local_1b8[0]->AsyncTask).Ptr);
            if (!bVar8) goto LAB_14e02165e;
          }
          pFVar3 = (pUVar6->AsyncTask).Ptr;
          if (pFVar3 != (FGroomBindingAsyncBuildTask *)0x0) {
            (pUVar6->AsyncTask).Ptr = (FGroomBindingAsyncBuildTask *)0x0;
            (**(code **)(pFVar3->_padding_ + 0x28))(pFVar3,1);
          }
        }
LAB_14e02165e:
        if ((pUVar6->AsyncTask).Ptr == (FGroomBindingAsyncBuildTask *)0x0) {
          TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>::
          RemoveByIndex(local_c0,iVar9);
          DetachDependencies(this,local_1b8[0]);
        }
        else {
          if (((local_1c8.Data <= (FScriptContainerElement *)local_1b8) &&
              ((FScriptContainerElement *)local_1b8 < local_1c8.Data + (longlong)local_1c0._4_4_ * 8
              )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = (int)local_1c0;
          if ((int)local_1c0 == local_1c0._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_1c8,(int *)((longlong)&local_1c0 + 4));
          }
          local_1c0 = CONCAT44(local_1c0._4_4_,iVar9 + 1);
          *(UGroomBindingAsset **)(local_1c8.Data + (longlong)iVar9 * 8) = local_1b8[0];
        }
      }
      local_d0 = local_d0 & ~local_dc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_e8 + 8));
    } while (local_cc < *(int *)(local_d8 + 0x18));
  }
  pTVar1 = &this->RegisteredSkeletalMeshes;
  TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
              *)pTVar1);
  local_170 = '\0';
  cStack_16f = '\0';
  stack0xfffffffffffffe68 = local_98._16_16_;
  local_1a8 = (longlong *)local_98._0_8_;
  auStack_1a0._0_8_ = local_98._8_8_;
  local_188 = local_78;
  pTStack_180 = pTStack_70;
  uVar11 = local_98._24_8_ >> 0x20;
  uVar12 = local_98._28_4_;
  local_178 = (TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
               *)pTVar1;
  if ((int)uVar12 < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      plVar7 = local_1a8;
      pFVar10 = FUObjectArray::IndexToObject
                          (&GUObjectArray,
                           *(int *)(*(longlong *)(*local_1a8 + (longlong)(int)uVar11 * 0x18) + 0xc))
      ;
      if ((((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) ||
         (pFVar10 = FUObjectArray::IndexToObject
                              (&GUObjectArray,
                               *(int *)(*(longlong *)(*plVar7 + 8 + (longlong)(int)uVar12 * 0x18) +
                                       0xc)),
         ((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0)) {
        TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_180,uVar12);
        local_170 = '\x01';
      }
      uStack_190 = uStack_190 & ~auStack_1a0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1a0);
      uVar11 = (ulonglong)uStack_18c;
      uVar12 = uStack_18c;
    } while ((int)uStack_18c < *(int *)(auStack_1a0._8_8_ + 0x18));
    if ((local_170 != '\0') && (cStack_16f != '\0')) {
      uVar12 = *(int *)&(local_178->Elements).field_0x8 - *(int *)&(local_178->Elements).field_0x34;
      if (uVar12 < 4) {
        iVar9 = 1;
      }
      else {
        uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar9 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((0 < (int)uVar12) && (local_178->HashSize < iVar9)) || (iVar9 < local_178->HashSize)) {
        local_178->HashSize = iVar9;
        TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
        ::Rehash(local_178);
      }
    }
  }
  pTVar2 = &this->RegisteredGroomAssets;
  TSet<TTuple<UGroomAsset_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_68,
             (TSet<TTuple<UGroomAsset_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
              *)pTVar2);
  local_130 = '\0';
  cStack_12f = '\0';
  stack0xfffffffffffffea8 = local_68._16_16_;
  local_168 = (longlong *)local_68._0_8_;
  auStack_160._0_8_ = local_68._8_8_;
  local_148 = local_48;
  pTStack_140 = pTStack_40;
  uVar11 = local_68._24_8_ >> 0x20;
  uVar12 = local_68._28_4_;
  local_138 = (TSet<TTuple<UGroomAsset_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
               *)pTVar2;
  if ((int)uVar12 < *(int *)(local_68._16_8_ + 0x18)) {
    do {
      plVar7 = local_168;
      pFVar10 = FUObjectArray::IndexToObject
                          (&GUObjectArray,
                           *(int *)(*(longlong *)(*local_168 + (longlong)(int)uVar11 * 0x18) + 0xc))
      ;
      if ((((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) ||
         (pFVar10 = FUObjectArray::IndexToObject
                              (&GUObjectArray,
                               *(int *)(*(longlong *)(*plVar7 + 8 + (longlong)(int)uVar12 * 0x18) +
                                       0xc)),
         ((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0)) {
        TSet<TTuple<UGroomAsset_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_140,uVar12);
        local_130 = '\x01';
      }
      uStack_150 = uStack_150 & ~auStack_160._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_160);
      uVar11 = (ulonglong)uStack_14c;
      uVar12 = uStack_14c;
    } while ((int)uStack_14c < *(int *)(auStack_160._8_8_ + 0x18));
    if ((local_130 != '\0') && (cStack_12f != '\0')) {
      uVar12 = *(int *)&(local_138->Elements).field_0x8 - *(int *)&(local_138->Elements).field_0x34;
      if (3 < uVar12) {
        uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar13 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((0 < (int)uVar12) && (local_138->HashSize < iVar13)) || (iVar13 < local_138->HashSize)) {
        local_138->HashSize = iVar13;
        TSet<TTuple<UGroomAsset_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
        ::Rehash(local_138);
      }
    }
  }
  iVar13 = (int)local_1c0;
  if ((int)local_1c0 != 0) {
    local_b8 = local_1c8.Data;
    if (((int)local_1c0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iStack_b0 = iVar13;
    local_a8._12_4_ = uStack_ac;
    local_a8.ArrayNum = iVar13;
    local_a8.DataPtr = (UGroomBindingAsset **)local_b8;
    FinishCompilation(this,&local_a8);
  }
  if (local_1c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PostCompilation @ 14e021db0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGroomBindingCompilingManager::PostCompilation
          (FGroomBindingCompilingManager *this,UGroomBindingAsset *param_1)

{
  FGroomBindingAsyncBuildTask *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  FObjectCacheContextScope local_res10 [8];
  FName local_res18;
  FGroomBindingAsyncBuildScope local_res20;
  FString local_28;
  
  if ((param_1->AsyncTask).Ptr != (FGroomBindingAsyncBuildTask *)0x0) {
    bVar2 = IsInGameThread();
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingCompiler.cpp"
                           ,0x12a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = -1 < CpuChannel->Enabled;
    if (bVar2) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&::__CpuProfilerEventSpecId299,"FGroomBindingCompilingManager::PostCompilation",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingCompiler.cpp"
                 ,299);
      FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId299);
    }
    if (5 < (byte)LogHairStrands._0_1_) {
      local_res18 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res18,&local_28);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    FObjectCacheContextScope::FObjectCacheContextScope(local_res10);
    this_00 = (param_1->AsyncTask).Ptr;
    (param_1->AsyncTask).Ptr = (FGroomBindingAsyncBuildTask *)0x0;
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this_00,true,false);
    FGroomBindingAsyncBuildScope::FGroomBindingAsyncBuildScope(&local_res20,param_1);
    FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)this_00);
    if ((char)this_00->_padding_ != '\0') {
      FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)this_00);
      if (((char)this_00->_padding_ == '\0') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UGroomBindingAsset::FinishCacheDerivedDatas
                (param_1,(FGroomBindingBuildContext *)&this_00->_padding_);
      FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)this_00);
      if ((char)this_00->_padding_ != '\0') {
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->_padding_);
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)&this_00->_padding_);
        DestructItems<TRefCountPtr<FSkeletalMeshLODRenderData>,int>
                  ((TRefCountPtr<FSkeletalMeshLODRenderData> *)this_00->_padding_,
                   (int)this_00->_padding_);
        if ((void *)this_00->_padding_ != (void *)0x0) {
          FMemory::Free((void *)this_00->_padding_);
        }
        *(undefined1 *)&this_00->_padding_ = 0;
      }
    }
    FGroomBindingAsyncBuildScope::~FGroomBindingAsyncBuildScope(&local_res20);
    if (this_00 != (FGroomBindingAsyncBuildTask *)0x0) {
      (**(code **)(this_00->_padding_ + 0x28))(this_00,1);
    }
    FObjectCacheContextScope::~FObjectCacheContextScope(local_res10);
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// PostCompilation @ 14e021fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FGroomBindingCompilingManager::PostCompilation
          (FGroomBindingCompilingManager *this,TArrayView<UGroomBindingAsset_*_const,int> *param_1)

{
  TMulticastDelegate<void___cdecl(TArray<FAssetCompileData,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
  *this_00;
  undefined1 *puVar1;
  FWeakObjectPtr *pFVar2;
  UGroomBindingAsset *pUVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  FAssetCompilingManager *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  ForElementType<FSetElementId> FVar15;
  uint uVar16;
  UGroomBindingAsset **ppUVar17;
  ulonglong *puVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStackY_f8 [32];
  UGroomBindingAsset *local_c8;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  FWeakObjectPtr local_b0;
  undefined4 local_a8;
  UGroomBindingAsset **local_a0;
  FSparseArrayAllocationInfo local_98;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [8];
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar13 = param_1->ArrayNum;
  if (uVar13 != 0) {
    bVar20 = -1 < CpuChannel->Enabled;
    if (bVar20) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId275,"OnAssetPostCompileEvent",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingCompiler.cpp"
                 ,0x113);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId275);
    }
    local_5c = 0x80;
    local_88._8_8_ = 0;
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_54 = 0;
    local_68 = (ForElementType<unsigned_int>)0x0;
    local_60 = 0;
    local_58 = -1;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_b8 = 0;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if (0 < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar13,&local_c0,0,(int *)((longlong)&local_b8 + 4));
    }
    ppUVar17 = param_1->DataPtr;
    local_a0 = ppUVar17 + (int)uVar13;
    if (ppUVar17 != local_a0) {
      do {
        puVar18 = (ulonglong *)0x0;
        pUVar3 = *ppUVar17;
        if (local_54 == 0) {
          iVar10 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                              (int *)(local_88 + 0xc));
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),false);
          iVar11 = local_58;
        }
        else {
          local_54 = local_54 + -1;
          iVar11 = *(int *)(local_88._0_8_ + (longlong)local_58 * 0x10 + 4);
          iVar10 = local_58;
          if (local_54 != 0) {
            *(undefined4 *)(local_88._0_8_ + (longlong)iVar11 * 0x10) = 0xffffffff;
          }
        }
        local_58 = iVar11;
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_88,&local_98,iVar10);
        if (local_98.Pointer != (ulonglong *)0x0) {
          *(UGroomBindingAsset **)local_98.Pointer = pUVar3;
          *(undefined4 *)((longlong)local_98.Pointer + 8) = 0xffffffff;
          puVar18 = local_98.Pointer;
        }
        uVar14 = *puVar18;
        local_c8 = (UGroomBindingAsset *)CONCAT44(local_c8._4_4_,local_98.Index);
        uVar13 = ((uint)(uVar14 >> 0x14) & 0xffff ^ (uint)(uVar14 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        uVar13 = uVar13 >> 0x10 ^ uVar13;
        if ((local_88._8_4_ - local_54 != 1) && (local_88._8_4_ != local_54)) {
          FVar15 = (ForElementType<FSetElementId>)local_50;
          if (local_48 != (ForElementType<FSetElementId>)0x0) {
            FVar15 = local_48;
          }
          for (iVar11 = *(int *)((longlong)FVar15 + (ulonglong)(local_40 - 1U & uVar13) * 4);
              iVar11 != -1; iVar11 = *(int *)(local_88._0_8_ + (longlong)iVar11 * 0x10 + 8)) {
            if (*(ulonglong *)(local_88._0_8_ + (longlong)iVar11 * 0x10) == uVar14) {
              if (iVar11 != -1) {
                *(ulonglong *)(local_88._0_8_ + (longlong)iVar11 * 0x10) = uVar14;
                TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_88,local_98.Index,1);
                goto LAB_14e0222d2;
              }
              break;
            }
          }
        }
        uVar16 = local_88._8_4_ - local_54;
        if (uVar16 < 4) {
          iVar11 = 1;
        }
        else {
          uVar14 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
          lVar19 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_a8 = (undefined4)lVar19;
          iVar11 = 1 << ((byte)lVar19 & 0x1f);
        }
        if (((int)uVar16 < 1) || (iVar11 <= local_40)) {
          uVar13 = local_40 - 1U & uVar13;
          *(uint *)((longlong)puVar18 + 0xc) = uVar13;
          FVar15 = (ForElementType<FSetElementId>)local_50;
          if (local_48 != (ForElementType<FSetElementId>)0x0) {
            FVar15 = local_48;
          }
          uVar14 = (longlong)local_40 - 1U & (longlong)(int)uVar13;
          *(undefined4 *)(puVar18 + 1) = *(undefined4 *)((longlong)FVar15 + uVar14 * 4);
          *(int *)((longlong)FVar15 + uVar14 * 4) = local_98.Index;
        }
        else {
          local_40 = iVar11;
          TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>::
          Rehash((TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>
                  *)local_88);
        }
LAB_14e0222d2:
        iVar11 = (int)local_b8;
        if ((int)local_b8 == local_b8._4_4_) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_c0,(int *)((longlong)&local_b8 + 4));
        }
        local_b8 = CONCAT44(local_b8._4_4_,iVar11 + 1);
        pFVar2 = (FWeakObjectPtr *)(local_c0.Data + (longlong)iVar11 * 8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar3 != (UGroomBindingAsset *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        local_b0.ObjectIndex = 0;
        local_b0.ObjectSerialNumber = 0;
        local_c8 = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar3 != (UGroomBindingAsset *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_c8);
        ppUVar17 = ppUVar17 + 1;
        *pFVar2 = local_b0;
      } while (ppUVar17 != local_a0);
    }
    pFVar12 = FAssetCompilingManager::Get();
    this_00 = &pFVar12->AssetPostCompileEvent;
    if ((this_00 ==
         (TMulticastDelegate<void___cdecl(TArray<FAssetCompileData,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
          *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this_00);
    puVar1 = &(pFVar12->AssetPostCompileEvent).field_0x3c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar7 = false;
    uVar13 = *(int *)&(pFVar12->AssetPostCompileEvent).field_0x30 - 1;
    if (-1 < (int)uVar13) {
      lVar19 = (longlong)(int)uVar13 << 4;
      bVar7 = false;
      do {
        uVar16 = 0;
        if ((int)uVar13 < *(int *)&(pFVar12->AssetPostCompileEvent).field_0x30) {
          uVar16 = ~uVar13 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar4 = *(longlong *)&(pFVar12->AssetPostCompileEvent).field_0x28;
        if (((*(int *)(lVar4 + 8 + lVar19) == 0) ||
            (plVar5 = *(longlong **)(lVar4 + lVar19), plVar5 == (longlong *)0x0)) ||
           (cVar9 = (**(code **)(*plVar5 + 0x68))(), cVar9 == '\0')) {
          bVar7 = true;
        }
        lVar19 = lVar19 + -0x10;
        uVar13 = uVar13 - 1;
      } while (-1 < (int)uVar13);
    }
    puVar1 = &(pFVar12->AssetPostCompileEvent).field_0x3c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar7) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_00,false);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<UGroomBindingAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UGroomBindingAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UGroomBindingAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
    if (bVar20) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// ProcessAsyncTasks @ 14e022b30

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FGroomBindingCompilingManager::ProcessAsyncTasks(FGroomBindingCompilingManager *this,bool param_1)

{
  FObjectCacheContextScope local_res18 [16];
  
  FObjectCacheContextScope::FObjectCacheContextScope(local_res18);
  SchedulePendingCompilations(this);
  ProcessGroomBindingAssets(this,param_1,1);
  UpdateCompilationNotification(this);
  FObjectCacheContextScope::~FObjectCacheContextScope(local_res18);
  return;
}

// ProcessGroomBindingAssets @ 14e022e10

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FGroomBindingCompilingManager::ProcessGroomBindingAssets
          (FGroomBindingCompilingManager *this,bool param_1,int param_2)

{
  FGroomBindingAsyncBuildTask *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  LARGE_INTEGER local_res8;
  FObjectCacheContextScope local_res10 [8];
  UGroomBindingAsset *local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<UGroomBindingAsset_*_const,int> local_78;
  undefined1 local_68 [12];
  uint local_5c;
  longlong local_58;
  uint local_50;
  int local_4c;
  TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator> *local_40;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId551,
               "FGroomBindingCompilingManager::ProcessGroomBindingAssets",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingCompiler.cpp"
               ,0x227);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId551);
  }
  iVar6 = ((*(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x8 -
           *(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x34) -
          *(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x34) +
          *(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x8;
  if (param_1) {
    iVar7 = iVar6 / 10;
    if (iVar6 / 10 < 0x40) {
      iVar7 = 0x40;
    }
  }
  else {
    iVar7 = 0x7fffffff;
  }
  FObjectCacheContextScope::FObjectCacheContextScope(local_res10);
  if ((iVar6 != 0) && (param_2 <= iVar6)) {
    bVar9 = -1 < CpuChannel->Enabled;
    if (bVar9) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId559,"ProcessFinishedGroomBindingAssets",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingCompiler.cpp"
                 ,0x22f);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId559);
    }
    QueryPerformanceCounter(&local_res8);
    iVar6 = 0;
    local_a0.Data = (FScriptContainerElement *)0x0;
    local_98 = 0;
    TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>::
    TIterator::TIterator((TIterator *)local_68,&this->RegisteredGroomBindingAssets);
    if (local_4c < *(int *)(local_58 + 0x18)) {
      do {
        iVar3 = local_4c;
        local_a8 = *(UGroomBindingAsset **)(*(longlong *)local_68._0_8_ + (longlong)local_4c * 0x10)
        ;
        pFVar1 = (local_a8->AsyncTask).Ptr;
        if ((pFVar1 == (FGroomBindingAsyncBuildTask *)0x0) || ((int)pFVar1->_padding_ == 0)) {
          PostCompilation(this,local_a8);
          if ((local_a0.Data <= (FScriptContainerElement *)&local_a8) &&
             (((FScriptContainerElement *)&local_a8 < local_a0.Data + (longlong)local_98._4_4_ * 8
              && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)))) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar5 = (int)local_98;
          if ((int)local_98 == local_98._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_a0,(int *)((longlong)&local_98 + 4));
          }
          local_98 = CONCAT44(local_98._4_4_,iVar5 + 1);
          *(UGroomBindingAsset **)(local_a0.Data + (longlong)iVar5 * 8) = local_a8;
          TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>::
          RemoveByIndex(local_40,iVar3);
          iVar6 = iVar6 + 1;
          if (iVar7 < iVar6) break;
        }
        local_50 = local_50 & ~local_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_68 + 8));
      } while (local_4c < *(int *)(local_58 + 0x18));
    }
    iVar6 = (int)local_98;
    local_88 = local_a0.Data;
    if (((int)local_98 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iStack_80 = iVar6;
    local_78._12_4_ = uStack_7c;
    local_78.ArrayNum = iVar6;
    local_78.DataPtr = (UGroomBindingAsset **)local_88;
    PostCompilation(this,&local_78);
    if (local_a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data);
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  FObjectCacheContextScope::~FObjectCacheContextScope(local_res10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Reschedule @ 14e026020

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FGroomBindingCompilingManager::Reschedule(FGroomBindingCompilingManager *this)

{
  return;
}

// SchedulePendingCompilations @ 14e027110

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FGroomBindingCompilingManager::SchedulePendingCompilations(FGroomBindingCompilingManager *this)

{
  FScriptContainerElement *pFVar1;
  UGroomBindingAsset *this_00;
  int iVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  ForAnyElementType FVar6;
  undefined1 local_res8 [8];
  ForAnyElementType local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  ForAnyElementType local_70;
  ulonglong local_68;
  FOnGroomBindingAssetBuildComplete local_60;
  undefined1 local_48 [12];
  uint uStack_3c;
  bool local_38;
  undefined7 uStack_37;
  uint local_30;
  int local_2c;
  TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator> *local_20;
  
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>::TIterator
  ::TIterator((TIterator *)local_48,&this->GroomBindingWithPendingDependencies);
  if (local_2c < *(int *)(CONCAT71(uStack_37,local_38) + 0x18)) {
    do {
      iVar2 = local_2c;
      this_00 = *(UGroomBindingAsset **)(*(longlong *)local_48._0_8_ + (longlong)local_2c * 0x10);
      bVar3 = UGroomBindingAsset::HasAnyDependenciesCompiling(this_00);
      if (!bVar3) {
        iVar4 = (int)local_80;
        if ((int)local_80 == local_80._4_4_) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_88,(int *)((longlong)&local_80 + 4));
        }
        local_80 = CONCAT44(local_80._4_4_,iVar4 + 1);
        *(UGroomBindingAsset **)(local_88.Data + (longlong)iVar4 * 8) = this_00;
        TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>::
        RemoveByIndex(local_20,iVar2);
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_48 + 8));
    } while (local_2c < *(int *)(CONCAT71(uStack_37,local_38) + 0x18));
  }
  iVar2 = (int)local_80;
  uVar5 = (ulonglong)(int)local_80;
  pFVar1 = local_88.Data + uVar5 * 8;
  FVar6.Data = local_88.Data;
  while( true ) {
    if ((int)uVar5 != iVar2) {
      `TCheckedPointerIterator<UGroomBindingAsset_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar6.Data == pFVar1) break;
    local_68 = 0;
    local_78 = (undefined1  [8])0x0;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_60._0_8_ = 0;
    local_60._8_8_ = 0;
    local_60._16_8_ = 0;
    UGroomBindingAsset::BeginCacheDerivedDatas
              (*(UGroomBindingAsset **)FVar6.Data,&local_60,
               (TDelegate<void___cdecl(UGroomBindingAsset_*,EGroomBindingAssetBuildResult),FDefaultDelegateUserPolicy>
                *)local_78);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&local_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
               (FWriteAccessScope *)local_48);
    if (((int)local_68 != 0) && (local_70.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_70.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_70,0,0,0x10);
      local_68 = local_68 & 0xffffffff00000000;
    }
    if (local_38 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_3c,local_48._8_4_),
                 (FDestructionSentinel *)local_48);
    }
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_78);
    uVar5 = local_80 & 0xffffffff;
    FVar6.Data = FVar6.Data + 8;
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

// Shutdown @ 14e0293f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FGroomBindingCompilingManager::Shutdown(FGroomBindingCompilingManager *this)

{
  int iVar1;
  int iVar2;
  UGroomBindingAsset *pUVar3;
  FGroomBindingAsyncBuildTask *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  TArray<UGroomBindingAsset_*,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined4 uStack_6c;
  TArrayView<UGroomBindingAsset_*_const,int> local_68;
  TArray<UGroomBindingAsset_*,TSizedDefaultAllocator<32>_> local_58;
  undefined1 local_48 [12];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator> *local_20;
  
  this->bHasShutdown = true;
  if (((*(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x8 -
       *(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x34) -
      *(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x34) +
      *(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x8 != 0) {
    bVar7 = IsInGameThread();
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingCompiler.cpp"
                           ,0xe1,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId226,"FGroomBindingCompilingManager::Shutdown",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingCompiler.cpp"
                 ,0xe2);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId226);
    }
    TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>::
    TIterator::TIterator((TIterator *)local_48,&this->RegisteredGroomBindingAssets);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        iVar2 = local_2c;
        pUVar3 = *(UGroomBindingAsset **)(*(longlong *)local_48._0_8_ + (longlong)local_2c * 0x10);
        pFVar4 = (pUVar3->AsyncTask).Ptr;
        if ((pFVar4 != (FGroomBindingAsyncBuildTask *)0x0) && ((int)pFVar4->_padding_ != 0)) {
          pFVar4 = (pUVar3->AsyncTask).Ptr;
          plVar5 = (longlong *)pFVar4->_padding_;
          if (plVar5 != (longlong *)0x0) {
            cVar8 = (**(code **)(*plVar5 + 0x20))(plVar5,pFVar4);
            iVar1 = (int)pFVar4->_padding_;
            if (cVar8 == '\0') {
              if (iVar1 != 0) {
                (**(code **)(pFVar4->_padding_ + 0x40))(pFVar4);
              }
            }
            else {
              if ((iVar1 != 1) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("WorkNotFinishedCounter.GetValue() == 1",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                                     ,0x1e8,L""), bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              LOCK();
              *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + -1;
              UNLOCK();
              FAsyncTaskBase::FinishThreadedWork((FAsyncTaskBase *)pFVar4);
              pFVar4->_padding_ = 0;
              pFVar4 = (pUVar3->AsyncTask).Ptr;
              if (pFVar4 != (FGroomBindingAsyncBuildTask *)0x0) {
                (pUVar3->AsyncTask).Ptr = (FGroomBindingAsyncBuildTask *)0x0;
                (**(code **)(pFVar4->_padding_ + 0x28))(pFVar4,1);
              }
            }
          }
        }
        if ((pUVar3->AsyncTask).Ptr == (FGroomBindingAsyncBuildTask *)0x0) {
          TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>::
          RemoveByIndex(local_20,iVar2);
          DetachDependencies(this,pUVar3);
        }
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_48 + 8));
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    pTVar10 = TSet<UGroomBindingAsset_*,DefaultKeyFuncs<UGroomBindingAsset_*,0>,FDefaultSetAllocator>
              ::Array(&this->RegisteredGroomBindingAssets,&local_58);
    local_68.DataPtr = (UGroomBindingAsset **)(pTVar10->AllocatorInstance).Data;
    iVar2 = pTVar10->ArrayNum;
    if ((iVar2 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_68._12_4_ = uStack_6c;
    local_68.ArrayNum = iVar2;
    FinishCompilation(this,&local_68);
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// UpdateCompilationNotification @ 14e02bb90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FGroomBindingCompilingManager::UpdateCompilationNotification(FGroomBindingCompilingManager *this)

{
  ushort uVar1;
  longlong lVar2;
  
  lVar2 = (longlong)
          (((*(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x8 -
            *(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x34) -
           *(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x34) +
          *(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x8);
  if ((__GTraceCounterQueuedGroomBindingAssetCompilation.Value != lVar2) &&
     (__GTraceCounterQueuedGroomBindingAssetCompilation.Value = lVar2, -1 < CountersChannel->Enabled
     )) {
    if (__GTraceCounterQueuedGroomBindingAssetCompilation.CounterId == (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterQueuedGroomBindingAssetCompilation.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterQueuedGroomBindingAssetCompilation.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterQueuedGroomBindingAssetCompilation.CounterId == (atomic<unsigned_int>)0x0)
      {
        __GTraceCounterQueuedGroomBindingAssetCompilation.CounterId._2_2_ = 0;
        __GTraceCounterQueuedGroomBindingAssetCompilation.CounterId._0_2_ = uVar1;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterQueuedGroomBindingAssetCompilation.CounterId._0_2_,
               __GTraceCounterQueuedGroomBindingAssetCompilation.Value);
  }
  FAsyncCompilationNotification::Update
            (&this->Notification,
             ((*(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x8 -
              *(int *)&(this->RegisteredGroomBindingAssets).Elements.field_0x34) -
             *(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x34) +
             *(int *)&(this->GroomBindingWithPendingDependencies).Elements.field_0x8);
  return;
}

