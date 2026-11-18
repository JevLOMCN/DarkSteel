// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 18

// FImgMediaMipMapInfo @ 14ea388a0

FImgMediaMipMapInfo * __thiscall FImgMediaMipMapInfo::FImgMediaMipMapInfo(FImgMediaMipMapInfo *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDataContainer_IMediaOptions__6B_;
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,Never);
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__FDataContainer__;
  (this->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->Objects).ArrayNum = 0;
  (this->Objects).ArrayMax = 0;
  (this->ViewInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewInfos).ArrayNum = 0;
  (this->ViewInfos).ArrayMax = 0;
  (this->DisplayResolutionViewInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayResolutionViewInfos).ArrayNum = 0;
  (this->DisplayResolutionViewInfos).ArrayMax = 0;
  (this->SequenceInfo).Name.ComparisonIndex = 0;
  (this->SequenceInfo).Name.Number = 0;
  (this->SequenceInfo).Dim.field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->SequenceInfo).NumMipLevels = 0;
  (this->SequenceInfo).TilingDescription.TileNum.field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->SequenceInfo).TilingDescription.TileSize.field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->SequenceInfo).TilingDescription.TileBorderSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->InfoCriticalSection,4000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ObjectsCriticalSection,4000);
  *(undefined8 *)&this->CachedVisibleTiles = 0;
  *(undefined8 *)&(this->CachedVisibleTiles).field_0x8 = 0;
  *(undefined8 *)&(this->CachedVisibleTiles).field_0x20 = 0;
  *(undefined4 *)&(this->CachedVisibleTiles).field_0x28 = 0;
  *(undefined4 *)&(this->CachedVisibleTiles).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedVisibleTiles).field_0x34 = 0;
  *(undefined4 *)&(this->CachedVisibleTiles).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedVisibleTiles).field_0x40 = 0;
  *(undefined4 *)&(this->CachedVisibleTiles).field_0x48 = 0;
  this->bIsCacheValid = false;
  (this->OnEndFrameHandle).ID = 0;
  this->bTickEnabled = false;
  return this;
}

// ~FImgMediaMipMapInfo @ 14ea3adf0

void __thiscall FImgMediaMipMapInfo::~FImgMediaMipMapInfo(FImgMediaMipMapInfo *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__FDataContainer__;
  lpCriticalSection = &this->ObjectsCriticalSection;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar7 = (this->Objects).AllocatorInstance.Data;
    iVar2 = (this->Objects).ArrayNum;
    pFVar5 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Objects).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FImgMediaMipMapObjectInfo_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar7 == pFVar5) break;
      puVar3 = *(undefined8 **)pFVar7;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      pFVar7 = pFVar7 + 8;
    }
    piVar1 = &(this->Objects).ArrayMax;
    (this->Objects).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->Objects).AllocatorInstance,0,piVar1);
    }
    if ((this->OnEndFrameHandle).ID != 0) {
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::OnEndFrame,(FDelegateHandle)(this->OnEndFrameHandle).ID);
      (this->OnEndFrameHandle).ID = 0;
      this->bIsCacheValid = false;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    *(undefined4 *)&(this->CachedVisibleTiles).field_0x48 = 0;
    pvVar4 = *(void **)&(this->CachedVisibleTiles).field_0x40;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->CachedVisibleTiles);
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DeleteCriticalSection((LPCRITICAL_SECTION)&this->InfoCriticalSection);
    DestructItems<FImgMediaViewInfo,int>
              ((FImgMediaViewInfo *)(this->DisplayResolutionViewInfos).AllocatorInstance.Data,
               (this->DisplayResolutionViewInfos).ArrayNum);
    pFVar5 = (this->DisplayResolutionViewInfos).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    DestructItems<FImgMediaViewInfo,int>
              ((FImgMediaViewInfo *)(this->ViewInfos).AllocatorInstance.Data,
               (this->ViewInfos).ArrayNum);
    pFVar5 = (this->ViewInfos).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pFVar5 = (this->Objects).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
    this->_padding_ = (longlong)&___7FDataContainer_IMediaOptions__6B_;
    plVar6 = (longlong *)this->_padding_;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddObject @ 14ea41220

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
FImgMediaMipMapInfo::AddObject
          (FImgMediaMipMapInfo *this,AActor *param_1,TWeakPtr<FMediaTextureTrackerObject,1> *param_2
          )

{
  int *piVar1;
  undefined1 *puVar2;
  atomic<int> *paVar3;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined8 uVar9;
  atomic<int> aVar10;
  int iVar11;
  UClass *pUVar12;
  UMeshComponent *pUVar13;
  FImgMediaMipMapObjectInfo *pFVar14;
  UObject *pUVar15;
  FDelegateHandle FVar16;
  int iVar17;
  longlong lVar18;
  FMediaTextureTrackerObject *pFVar19;
  TReferenceControllerBase<1> *pTVar20;
  bool bVar21;
  double dVar22;
  UMeshComponent *local_res20;
  FName local_108;
  FImgMediaMipMapObjectInfo *local_100;
  FImgMediaMipMapObjectInfo *local_f8;
  FImgMediaMipMapObjectInfo *local_f0;
  UMeshComponent *local_e8 [2];
  TWeakPtr<FMediaTextureTrackerObject,1> local_d8;
  FName local_c8;
  FString local_c0;
  FString local_b0;
  code *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  FMediaTextureTrackerObject *local_88;
  
  pTVar20 = (param_2->WeakReferenceCount).ReferenceController;
  pFVar19 = (FMediaTextureTrackerObject *)0x0;
  if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar20->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar20 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ea41276;
      }
      LOCK();
      aVar10 = pTVar20->SharedReferenceCount;
      bVar21 = aVar4 == aVar10;
      if (bVar21) {
        pTVar20->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar10 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar10;
    } while (!bVar21);
    pFVar19 = param_2->Object;
  }
LAB_14ea41276:
  if ((param_1 != (AActor *)0x0) && (pFVar19 != (FMediaTextureTrackerObject *)0x0)) {
    lpCriticalSection = &this->ObjectsCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pcVar5 = *(code **)(param_1->_padding_ + 0x738);
    pUVar12 = Z_Construct_UClass_UMeshComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    pUVar13 = (UMeshComponent *)(*pcVar5)(param_1);
    if (pUVar13 != (UMeshComponent *)0x0) {
      pUVar12 = Z_Construct_UClass_UMeshComponent_NoRegister();
      iVar11 = (int)pUVar12->_padding_;
      if ((iVar11 <= *(int *)(pUVar13->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
          &pUVar12->_padding_)) {
        if (pFVar19->VisibleMipsTilesCalculations == Plane) {
          pFVar14 = ::operator_new(0x48);
          if (pFVar14 == (FImgMediaMipMapObjectInfo *)0x0) {
            pFVar14 = (FImgMediaMipMapObjectInfo *)0x0;
          }
          else {
            local_res20 = (UMeshComponent *)param_2->Object;
            local_108 = (FName)(param_2->WeakReferenceCount).ReferenceController;
            if (local_108 != (FName)0x0) {
              LOCK();
              *(int *)((longlong)local_108 + 0xc) = *(int *)((longlong)local_108 + 0xc) + 1;
              UNLOCK();
            }
            pFVar14->_padding_ = (longlong)&___7FImgMediaMipMapObjectInfo__6B_;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar13);
            }
            (pFVar14->MeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
            local_e8[0] = pUVar13;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar13);
            }
            FWeakObjectPtr::operator=(&(pFVar14->MeshComponent).WeakPtr,(FObjectPtr)local_e8);
            (pFVar14->Tracker).Object = (FMediaTextureTrackerObject *)local_res20;
            (pFVar14->Tracker).WeakReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)local_108;
            pFVar14->_padding_ = (longlong)&FPlaneObjectInfo::_vftable_;
            uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            pFVar14[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
            ;
            pFVar14[1].MeshComponent.WeakPtr = (FWeakObjectPtr)uVar9;
            pFVar14[1].Tracker.Object =
                 (FMediaTextureTrackerObject *)
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            pFVar14[1].Tracker.WeakReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            pFVar14[2]._padding_ = 0;
            bVar21 = TWeakObjectPtr<UMeshComponent,FWeakObjectPtr>::UEOpEquals
                               (&pFVar14->MeshComponent,(void *)0x0);
            if (bVar21) {
              if (1 < (byte)LogImgMedia._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          ((FStaticBasicLogRecord *)&PTR_u_FPlaneImgMediaM_152fe7140,
                           (FLogCategoryBase *)&LogImgMedia);
              }
            }
            else {
              pUVar15 = FWeakObjectPtr::Get(&(pFVar14->MeshComponent).WeakPtr);
              lVar18 = (**(code **)(*(longlong *)pUVar15 + 0x5a0))(pUVar15,&stack0xffffffffffffff88)
              ;
              dVar8 = *(double *)(lVar18 + 0x18) + *(double *)(lVar18 + 0x18);
              dVar22 = *(double *)(lVar18 + 0x20) + *(double *)(lVar18 + 0x20);
              local_88 = (FMediaTextureTrackerObject *)
                         (*(double *)(lVar18 + 0x28) + *(double *)(lVar18 + 0x28));
              auVar7._8_4_ = SUB84(dVar22,0);
              auVar7._0_8_ = dVar8;
              auVar7._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
              pFVar14[1]._padding_ = (longlong)dVar8;
              pFVar14[1].MeshComponent = (TWeakObjectPtr<UMeshComponent,FWeakObjectPtr>)auVar7._8_8_
              ;
              pFVar14[1].Tracker.Object = local_88;
            }
          }
          pFVar6 = (this->Objects).AllocatorInstance.Data;
          local_f0 = pFVar14;
          if (((pFVar6 <= (FScriptContainerElement *)&local_f0) &&
              ((FScriptContainerElement *)&local_f0 <
               pFVar6 + (longlong)(this->Objects).ArrayMax * 8)) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar21)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar11 = (this->Objects).ArrayNum;
          piVar1 = &(this->Objects).ArrayMax;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&(this->Objects).AllocatorInstance,piVar1);
          }
          iVar17 = iVar11 + 1;
          lVar18 = (longlong)iVar11;
          pFVar14 = local_f0;
        }
        else if (pFVar19->VisibleMipsTilesCalculations == Sphere) {
          pFVar14 = ::operator_new(0x28);
          if (pFVar14 == (FImgMediaMipMapObjectInfo *)0x0) {
            pFVar14 = (FImgMediaMipMapObjectInfo *)0x0;
          }
          else {
            local_108 = (FName)param_2->Object;
            local_e8[0] = (UMeshComponent *)(param_2->WeakReferenceCount).ReferenceController;
            if (local_e8[0] != (UMeshComponent *)0x0) {
              LOCK();
              puVar2 = (undefined1 *)((longlong)&local_e8[0]->_padding_ + 4);
              *(int *)puVar2 = *(int *)puVar2 + 1;
              UNLOCK();
            }
            pFVar14->_padding_ = (longlong)&___7FImgMediaMipMapObjectInfo__6B_;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar13);
            }
            (pFVar14->MeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
            local_res20 = pUVar13;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar13);
            }
            FWeakObjectPtr::operator=
                      (&(pFVar14->MeshComponent).WeakPtr,(FObjectPtr)&stack0x00000020);
            (pFVar14->Tracker).Object = (FMediaTextureTrackerObject *)local_108;
            (pFVar14->Tracker).WeakReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)local_e8[0];
            pFVar14->_padding_ = (longlong)&FSphereObjectInfo::_vftable_;
            *(undefined4 *)&pFVar14[1]._padding_ = 0x42480000;
            *(undefined4 *)((longlong)&pFVar14[1]._padding_ + 4) = 0xffffffff;
          }
          pFVar6 = (this->Objects).AllocatorInstance.Data;
          local_f8 = pFVar14;
          if (((pFVar6 <= (FScriptContainerElement *)&local_f8) &&
              ((FScriptContainerElement *)&local_f8 <
               pFVar6 + (longlong)(this->Objects).ArrayMax * 8)) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar21)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar11 = (this->Objects).ArrayNum;
          piVar1 = &(this->Objects).ArrayMax;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&(this->Objects).AllocatorInstance,piVar1);
          }
          iVar17 = iVar11 + 1;
          lVar18 = (longlong)iVar11;
          pFVar14 = local_f8;
        }
        else {
          pFVar14 = ::operator_new(0x20);
          local_100 = (FImgMediaMipMapObjectInfo *)0x0;
          if (pFVar14 != (FImgMediaMipMapObjectInfo *)0x0) {
            local_d8.Object = param_2->Object;
            local_d8.WeakReferenceCount.ReferenceController =
                 (param_2->WeakReferenceCount).ReferenceController;
            if (local_d8.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_d8.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
                   (atomic<int>)
                   ((int)(local_d8.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
              UNLOCK();
            }
            local_100 = FImgMediaMipMapObjectInfo::FImgMediaMipMapObjectInfo
                                  (pFVar14,pUVar13,&local_d8);
          }
          pFVar6 = (this->Objects).AllocatorInstance.Data;
          if (((pFVar6 <= (FScriptContainerElement *)&local_100) &&
              ((FScriptContainerElement *)&local_100 <
               pFVar6 + (longlong)(this->Objects).ArrayMax * 8)) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar21)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar11 = (this->Objects).ArrayNum;
          piVar1 = &(this->Objects).ArrayMax;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&(this->Objects).AllocatorInstance,piVar1);
          }
          iVar17 = iVar11 + 1;
          lVar18 = (longlong)iVar11;
          pFVar14 = local_100;
        }
        (this->Objects).ArrayNum = iVar17;
        *(FImgMediaMipMapObjectInfo **)((this->Objects).AllocatorInstance.Data + lVar18 * 8) =
             pFVar14;
        if (5 < (byte)LogImgMedia._0_1_) {
          local_108 = (FName)param_1->_padding_;
          ::FName::ToString(&local_108,&local_b0);
          local_c8 = (FName)pUVar13->_padding_;
          ::FName::ToString(&local_c8,&local_c0);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    if (this->bTickEnabled == false) {
      FTickableGameObject::SetTickableTickType((FTickableGameObject *)&this->_padding_,Conditional);
      this->bTickEnabled = true;
    }
    if ((this->OnEndFrameHandle).ID == 0) {
      local_d8.WeakReferenceCount.ReferenceController =
           local_d8.WeakReferenceCount.ReferenceController & 0xffffffff00000000;
      local_d8.Object = (FMediaTextureTrackerObject *)OnEndFrame;
      local_98 = OnEndFrame;
      pTStack_90 = local_d8.WeakReferenceCount.ReferenceController;
      FVar16 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
               AddRaw<FImgMediaMipMapInfo>
                         ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                           *)&FCoreDelegates::OnEndFrame,
                          (FImgMediaMipMapInfo *)&stack0xffffffffffffff60,(pmf_54359e09 *)this);
                    /* WARNING: Load size is inaccurate */
      (this->OnEndFrameHandle).ID = *FVar16.ID;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  pTVar20 = (param_2->WeakReferenceCount).ReferenceController;
  if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = &pTVar20->WeakReferenceCount;
    aVar4 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar20->_padding_ + 8))(pTVar20,1);
    }
  }
  return;
}

// AddObjectsUsingThisMediaTexture @ 14ea41880

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
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
FImgMediaMipMapInfo::AddObjectsUsingThisMediaTexture
          (FImgMediaMipMapInfo *this,UMediaTexture *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMediaTextureTrackerObject *pFVar5;
  atomic<int> aVar6;
  FMediaTextureTracker *this_00;
  TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  AActor *pAVar8;
  FMediaTextureTrackerObject *this_01;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  undefined1 local_res10 [8];
  UMediaTexture *local_res18 [2];
  TWeakPtr<FMediaTextureTrackerObject,1> local_48;
  
  this_00 = FMediaTextureTracker::Get();
  local_res18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar7 = FMediaTextureTracker::GetObjects(this_00,(TObjectPtr<UMediaTexture>)local_res18);
  if (pTVar7 != (TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar9 = (pTVar7->AllocatorInstance).Data;
    iVar3 = pTVar7->ArrayNum;
    pFVar10 = pFVar9 + (longlong)iVar3 * 0x10;
    while( true ) {
      if (pTVar7->ArrayNum != iVar3) {
        `TCheckedPointerIterator<TWeakPtr<FMediaTextureTrackerObject,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar9 == pFVar10) break;
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
      pFVar5 = *(FMediaTextureTrackerObject **)pFVar9;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
        aVar2 = pTVar4->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            goto LAB_14ea41993;
          }
          LOCK();
          aVar6 = pTVar4->SharedReferenceCount;
          bVar11 = aVar2 == aVar6;
          if (bVar11) {
            pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar6 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar6;
        } while (!bVar11);
      }
      this_01 = pFVar5;
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        this_01 = (FMediaTextureTrackerObject *)0x0;
      }
      if ((this_01 != (FMediaTextureTrackerObject *)0x0) &&
         (pAVar8 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01), pAVar8 != (AActor *)0x0
         )) {
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
          UNLOCK();
        }
        local_48.Object = pFVar5;
        local_48.WeakReferenceCount.ReferenceController = pTVar4;
        AddObject(this,pAVar8,&local_48);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
LAB_14ea41993:
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))();
        }
      }
      pFVar9 = pFVar9 + 0x10;
    }
  }
  return;
}

// ClearAllObjects @ 14ea45300

void __thiscall FImgMediaMipMapInfo::ClearAllObjects(FImgMediaMipMapInfo *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->ObjectsCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar5 = (this->Objects).AllocatorInstance.Data;
    iVar3 = (this->Objects).ArrayNum;
    pFVar2 = pFVar5 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->Objects).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FImgMediaMipMapObjectInfo_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar2) break;
      puVar4 = *(undefined8 **)pFVar5;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      pFVar5 = pFVar5 + 8;
    }
    piVar1 = &(this->Objects).ArrayMax;
    (this->Objects).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->Objects).AllocatorInstance,0,piVar1);
    }
    if ((this->OnEndFrameHandle).ID != 0) {
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::OnEndFrame,(FDelegateHandle)(this->OnEndFrameHandle).ID);
      (this->OnEndFrameHandle).ID = 0;
      this->bIsCacheValid = false;
    }
                    /* WARNING: Could not recover jumptable at 0x00014ea453e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetMinimumMipLevelToUpscale @ 14ea4d6d0

int __thiscall FImgMediaMipMapInfo::GetMinimumMipLevelToUpscale(FImgMediaMipMapInfo *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->ObjectsCriticalSection;
  iVar4 = 0x7fffffff;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar6 = (this->Objects).AllocatorInstance.Data;
  iVar5 = (this->Objects).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->Objects).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FImgMediaMipMapObjectInfo_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    iVar3 = (**(code **)(**(longlong **)pFVar6 + 0x10))();
    iVar2 = iVar4;
    if ((-1 < iVar3) && (iVar2 = iVar3, iVar4 < iVar3)) {
      iVar2 = iVar4;
    }
    iVar4 = iVar2;
    pFVar6 = pFVar6 + 8;
  }
  iVar5 = -1;
  if (iVar4 != 0x7fffffff) {
    iVar5 = iVar4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return iVar5;
}

// GetStatId @ 14ea4ea20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FImgMediaMipMapInfo::GetStatId(FImgMediaMipMapInfo *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TStatId___cdecl_FImgMediaMipMapInfo::GetStatId(void)const___ptr64'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TStatId___cdecl_FImgMediaMipMapInfo::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TStatId___cdecl_FImgMediaMipMapInfo::GetStatId(void)const___ptr64'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FImgMediaMipMapInfo = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"FImgMediaMipMapInfo");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_struct_TStatId___cdecl_FImgMediaMipMapInfo::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FImgMediaMipMapInfo,*pFVar1,L"FImgMediaMipMapInfo",
               "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_struct_TStatId___cdecl_FImgMediaMipMapInfo::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_FImgMediaMipMapInfo;
  if (_StatPtr_FImgMediaMipMapInfo == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FImgMediaMipMapInfo");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`public:_virtual_struct_TStatId___cdecl_FImgMediaMipMapInfo::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_FImgMediaMipMapInfo,*pFVar1,L"FImgMediaMipMapInfo",
                       "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true
                       ,false,MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

// GetTickableTickType @ 14ea4ed40

ETickableTickType __thiscall FImgMediaMipMapInfo::GetTickableTickType(FImgMediaMipMapInfo *this)

{
  ETickableTickType EVar1;
  
  EVar1 = Never;
  if ((this->CachedVisibleTiles).field_0x48 != '\0') {
    EVar1 = Conditional;
  }
  return EVar1;
}

// GetVisibleTiles @ 14ea4fb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
* __thiscall
FImgMediaMipMapInfo::GetVisibleTiles
          (FImgMediaMipMapInfo *this,
          TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
          *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  atomic<int> aVar7;
  bool bVar8;
  uint uVar9;
  FNameEntryId FVar10;
  atomic<int> aVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ImgMedia_MipMapUpdateCache> FVar13;
  FImgMediaTileSelection *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  byte bVar16;
  FName FVar17;
  bool bVar18;
  undefined1 auStackY_128 [32];
  FName local_c0;
  undefined1 local_b8 [8];
  FName local_b0;
  TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
  *local_a8;
  FName local_a0;
  FImgMediaTileSelection local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_a8 = (TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__;
  uVar9 = GetMinimumMipLevelToUpscale(this);
  iVar1 = (this->SequenceInfo).NumMipLevels;
  FVar10.Value = uVar9;
  if ((1 < iVar1) && (FVar10.Value = iVar1 - 1, (int)uVar9 < (int)FVar10.Value)) {
    FVar10.Value = uVar9;
  }
  if (&this->InfoCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->InfoCriticalSection);
  if (this->bIsCacheValid != false) goto LAB_14ea4fee1;
  FVar13 = StatPtr_STAT_ImgMedia_MipMapUpdateCache;
  if (StatPtr_STAT_ImgMedia_MipMapUpdateCache ==
      (FThreadSafeStaticStat<FStat_STAT_ImgMedia_MipMapUpdateCache>)0x0) {
    pFVar12 = ::FName::FName(&local_b0,"STAT_ImgMedia_MipMapUpdateCache");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ImgMedia_MipMapUpdateCache>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImgMedia_MipMapUpdateCache,
                        *pFVar12,L"ImgMedia MipMap Update Cache","STATGROUP_Media",
                        "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar13;
  bVar5 = false;
  bVar6 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  bVar8 = false;
  bVar18 = false;
  if ((FVar3.ComparisonIndex.Value.Value == 0) && (FVar3.Number == 0)) {
LAB_14ea4fd25:
    bVar6 = bVar18;
    bVar5 = bVar8;
    bVar8 = false;
    local_b0 = local_a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c0 = (FName)((ulonglong)local_c0 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar6 = true;
      bVar8 = false;
      bVar18 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c0 = FVar3;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Assets\\ImgMediaMipMapInfo.cpp"
                   ,0x429);
        bVar5 = true;
        bVar6 = true;
        bVar8 = true;
        bVar18 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ea4fd25;
    local_c0 = FVar3;
    local_b0 = FVar3;
    FThreadStats::AddMessage(FVar3,CycleScopeStart);
    bVar8 = true;
  }
  TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
           *)&this->CachedVisibleTiles);
  if (-1 < (int)FVar10.Value) {
    local_c0.ComparisonIndex.Value = FVar10.Value;
    if ((int)FVar10.Value < (this->SequenceInfo).NumMipLevels) {
      do {
        pFVar14 = FImgMediaTileSelection::CreateForTargetMipLevel
                            (&local_88,&(this->SequenceInfo).Dim,
                             &(this->SequenceInfo).TilingDescription.TileSize,FVar10.Value,true);
        TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
        ::Emplace<int_const_&,FImgMediaTileSelection>
                  ((TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                    *)&this->CachedVisibleTiles,(int *)&local_c0,pFVar14);
        if (local_88.Tiles.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_88.Tiles.AllocatorInstance.SecondaryData);
        }
        FVar10.Value = local_c0.ComparisonIndex.Value + 1;
        local_c0.ComparisonIndex.Value = FVar10.Value;
      } while ((int)FVar10.Value < (this->SequenceInfo).NumMipLevels);
    }
  }
  if (&this->ObjectsCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ObjectsCriticalSection);
  FVar17 = (FName)(this->Objects).AllocatorInstance.Data;
  iVar1 = (this->Objects).ArrayNum;
  FVar3 = (FName)((longlong)FVar17 + (longlong)iVar1 * 8);
  while( true ) {
    local_c0 = FVar17;
    if ((this->Objects).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FImgMediaMipMapObjectInfo_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_b8);
    }
    if (FVar17 == FVar3) break;
    plVar4 = *(longlong **)FVar17;
    pTVar15 = (TReferenceControllerBase<1> *)plVar4[3];
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
LAB_14ea4fe10:
      bVar16 = 1;
    }
    else {
      aVar7 = pTVar15->SharedReferenceCount;
      do {
        if (aVar7 == (atomic<int>)0x0) {
          pTVar15 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14ea4fe10;
        }
        LOCK();
        aVar11 = pTVar15->SharedReferenceCount;
        bVar18 = aVar7 == aVar11;
        if (bVar18) {
          pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
          aVar11 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar11;
      } while (!bVar18);
      if (plVar4[2] == 0) goto LAB_14ea4fe10;
      bVar16 = *(byte *)(plVar4[2] + 0x25);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    iVar2 = (this->DisplayResolutionViewInfos).ArrayNum;
    if (((bVar16 & 1) != 0) || (iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))
                (plVar4,&this->ViewInfos,&this->SequenceInfo,&this->CachedVisibleTiles);
    }
    if (((bVar16 & 2) != 0) && (iVar2 != 0)) {
      (**(code **)(*plVar4 + 8))
                (plVar4,&this->DisplayResolutionViewInfos,&this->SequenceInfo,
                 &this->CachedVisibleTiles);
    }
    FVar17 = (FName)((longlong)local_c0 + 8);
  }
  this->bIsCacheValid = true;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ObjectsCriticalSection);
  FVar3 = local_b0;
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  __return_storage_ptr__ =
       (TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
        *)local_a8;
  if (bVar8) {
    FThreadStats::AddMessage(FVar3,CycleScopeEnd);
    __return_storage_ptr__ =
         (TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
          *)local_a8;
  }
LAB_14ea4fee1:
  *(undefined8 *)
   &((TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
      *)__return_storage_ptr__)->Elements = 0;
  *(undefined8 *)
   &(((TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
       *)__return_storage_ptr__)->Elements).field_0x8 = 0;
  *(undefined8 *)
   &(((TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
       *)__return_storage_ptr__)->Elements).field_0x20 = 0;
  *(undefined4 *)
   &(((TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
       *)__return_storage_ptr__)->Elements).field_0x28 = 0;
  *(undefined4 *)
   &(((TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
       *)__return_storage_ptr__)->Elements).field_0x2c = 0x80;
  *(undefined4 *)
   &(((TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
       *)__return_storage_ptr__)->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)
   &(((TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
       *)__return_storage_ptr__)->Elements).field_0x34 = 0;
  (((TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
     *)__return_storage_ptr__)->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  ((TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
    *)__return_storage_ptr__)->HashSize = 0;
  TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
               *)__return_storage_ptr__,
              (TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
               *)&this->CachedVisibleTiles);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->InfoCriticalSection);
  return (TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
          *)(TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
             *)__return_storage_ptr__;
}

// HasObjects @ 14ea508d0

bool __thiscall FImgMediaMipMapInfo::HasObjects(FImgMediaMipMapInfo *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &this->ObjectsCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->Objects).ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsTickableInEditor @ 14ea51dc0

bool __thiscall FImgMediaMipMapInfo::IsTickableInEditor(FImgMediaMipMapInfo *this)

{
  return true;
}

// OnEndFrame @ 14ea53790

void __thiscall FImgMediaMipMapInfo::OnEndFrame(FImgMediaMipMapInfo *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FModuleManager *this_00;
  longlong *plVar6;
  bool bVar7;
  FName local_res8;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1209,"FImgMediaMipMapInfo::OnEndFrame",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Assets\\ImgMediaMipMapInfo.cpp"
               ,0x4b9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1209);
  }
  lpCriticalSection = &this->InfoCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = &this->ObjectsCriticalSection;
    this->bIsCacheValid = false;
    if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      iVar1 = (this->Objects).ArrayNum;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      if (0 < iVar1) {
        if (`public:_static_class_IImgMediaModule&___ptr64___cdecl_IImgMediaModule::Get(void)'::__l2
            ::ImgMediaModulePtr == (IImgMediaModule *)0x0) {
          pFVar5 = ::FName::FName(&local_res8,"ImgMedia");
          FVar2 = *pFVar5;
          this_00 = FModuleManager::Get();
          `public:_static_class_IImgMediaModule&___ptr64___cdecl_IImgMediaModule::Get(void)'::__l2::
          ImgMediaModulePtr = (IImgMediaModule *)FModuleManager::LoadModule(this_00,FVar2,None);
        }
        plVar6 = (longlong *)
                 (**(code **)(`public:_static_class_IImgMediaModule&___ptr64___cdecl_IImgMediaModule::Get(void)'
                              ::__l2::ImgMediaModulePtr->_padding_ + 0x48))
                           (`public:_static_class_IImgMediaModule&___ptr64___cdecl_IImgMediaModule::Get(void)'
                            ::__l2::ImgMediaModulePtr);
        if (*plVar6 != 0) {
          TArray<FImgMediaViewInfo,TSizedDefaultAllocator<32>_>::operator=
                    (&this->ViewInfos,
                     (TArray<FImgMediaViewInfo,TSizedDefaultAllocator<32>_> *)(*plVar6 + 0x28));
          if ((*plVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          TArray<FImgMediaViewInfo,TSizedDefaultAllocator<32>_>::operator=
                    (&this->DisplayResolutionViewInfos,
                     (TArray<FImgMediaViewInfo,TSizedDefaultAllocator<32>_> *)(*plVar6 + 0x38));
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RemoveObject @ 14ea5a8b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FImgMediaMipMapInfo::RemoveObject(FImgMediaMipMapInfo *this,AActor *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UObject *pUVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  FName local_res20;
  FName local_68;
  undefined8 *local_60;
  FString local_58;
  FString local_48;
  
  if (param_1 != (AActor *)0x0) {
    lpCriticalSection = &this->ObjectsCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar9 = 0;
    if (0 < (this->Objects).ArrayNum) {
      lVar10 = 0;
      do {
        uVar11 = ~uVar9 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar9 < (this->Objects).ArrayNum) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_60 = *(undefined8 **)((this->Objects).AllocatorInstance.Data + lVar10);
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_60 + 1),true);
        if ((pUVar8 != (UObject *)0x0) && (param_1 == *(AActor **)&pUVar8->field_0x20)) {
          if (5 < (byte)LogImgMedia._0_1_) {
            local_res20 = (FName)param_1->_padding_;
            ::FName::ToString(&local_res20,&local_48);
            local_68.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
            local_68.Number = *(uint *)&pUVar8->field_0x1c;
            ::FName::ToString(&local_68,&local_58);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
          uVar6 = 0;
          if ((int)uVar9 < (this->Objects).ArrayNum) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar2 = (this->Objects).ArrayNum;
          pFVar3 = (this->Objects).AllocatorInstance.Data;
          iVar7 = iVar2 + ~uVar9;
          if (1 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            memmove(pFVar3 + (longlong)(int)uVar9 * 8,pFVar3 + (longlong)(iVar2 - iVar7) * 8,
                    (longlong)iVar7 << 3);
          }
          piVar1 = &(this->Objects).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&(this->Objects).AllocatorInstance,(this->Objects).ArrayNum,
                     &(this->Objects).ArrayMax);
          if (local_60 != (undefined8 *)0x0) {
            (**(code **)*local_60)(local_60,1);
          }
          if (((this->Objects).ArrayNum == 0) && ((this->OnEndFrameHandle).ID != 0)) {
            TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)&FCoreDelegates::OnEndFrame,(FDelegateHandle)(this->OnEndFrameHandle).ID);
            (this->OnEndFrameHandle).ID = 0;
            this->bIsCacheValid = false;
          }
          break;
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 8;
      } while ((int)uVar9 < (this->Objects).ArrayNum);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// RemoveObjectsUsingThisMediaTexture @ 14ea5ab90

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
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
FImgMediaMipMapInfo::RemoveObjectsUsingThisMediaTexture
          (FImgMediaMipMapInfo *this,UMediaTexture *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  FMediaTextureTracker *this_00;
  TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  AActor *pAVar7;
  FWeakObjectPtr *this_01;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined1 local_res10 [8];
  UMediaTexture *local_res18 [2];
  
  this_00 = FMediaTextureTracker::Get();
  local_res18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar6 = FMediaTextureTracker::GetObjects(this_00,(TObjectPtr<UMediaTexture>)local_res18);
  if (pTVar6 != (TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar9 = (pTVar6->AllocatorInstance).Data;
    iVar3 = pTVar6->ArrayNum;
    pFVar8 = pFVar9 + (longlong)iVar3 * 0x10;
    while( true ) {
      if (pTVar6->ArrayNum != iVar3) {
        `TCheckedPointerIterator<TWeakPtr<FMediaTextureTrackerObject,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar9 == pFVar8) break;
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
      this_01 = *(FWeakObjectPtr **)pFVar9;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
        aVar2 = pTVar4->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            goto LAB_14ea5ac7b;
          }
          LOCK();
          aVar5 = pTVar4->SharedReferenceCount;
          bVar10 = aVar2 == aVar5;
          if (bVar10) {
            pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar5 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar5;
        } while (!bVar10);
      }
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        this_01 = (FWeakObjectPtr *)0x0;
      }
      if (this_01 != (FWeakObjectPtr *)0x0) {
        pAVar7 = (AActor *)FWeakObjectPtr::Get(this_01);
        RemoveObject(this,pAVar7);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
LAB_14ea5ac7b:
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      pFVar9 = pFVar9 + 0x10;
    }
  }
  return;
}

// SetTextureInfo @ 14ea5bec0

void __thiscall
FImgMediaMipMapInfo::SetTextureInfo
          (FImgMediaMipMapInfo *this,FName param_1,int param_2,TIntPoint<int> *param_3,
          FMediaTextureTilingDescription *param_4)

{
  TIntPoint<int>_u_0 TVar1;
  int iVar2;
  
  (this->SequenceInfo).Name = param_1;
  (this->SequenceInfo).Dim.field0_0x0 = param_3->field0_0x0;
  if (param_2 < 1) {
    param_2 = 1;
  }
  TVar1 = (param_4->TileSize).field0_0x0;
  (this->SequenceInfo).TilingDescription.TileNum.field0_0x0 = (param_4->TileNum).field0_0x0;
  (this->SequenceInfo).TilingDescription.TileSize.field0_0x0 = TVar1;
  (this->SequenceInfo).TilingDescription.TileBorderSize = param_4->TileBorderSize;
  iVar2 = (this->SequenceInfo).TilingDescription.TileNum.field0_0x0._s_0.X;
  (this->SequenceInfo).NumMipLevels = param_2;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  (this->SequenceInfo).TilingDescription.TileNum.field0_0x0._s_0.X = iVar2;
  iVar2 = (this->SequenceInfo).TilingDescription.TileNum.field0_0x0._s_0.Y;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  (this->SequenceInfo).TilingDescription.TileNum.field0_0x0._s_0.Y = iVar2;
  return;
}

// SubscribeEndFrame @ 14ea5c300

void __thiscall FImgMediaMipMapInfo::SubscribeEndFrame(FImgMediaMipMapInfo *this)

{
  FDelegateHandle FVar1;
  
  if ((this->OnEndFrameHandle).ID == 0) {
    FVar1 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddRaw<FImgMediaMipMapInfo>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)&FCoreDelegates::OnEndFrame,(FImgMediaMipMapInfo *)&stack0x00000008,
                       (pmf_54359e09 *)this);
                    /* WARNING: Load size is inaccurate */
    (this->OnEndFrameHandle).ID = *FVar1.ID;
  }
  return;
}

// Tick @ 14ea5c370

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

void __thiscall FImgMediaMipMapInfo::Tick(FImgMediaMipMapInfo *this,float param_1)

{
  void **ppvVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  TConsoleVariableData<bool> *pTVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  FImgMediaMipMapInfo *pFVar6;
  bool bVar7;
  uint uVar8;
  FString *pFVar9;
  longlong lVar10;
  bool *pbVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  int iVar14;
  bool *pbVar15;
  int iVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  uint *puVar19;
  int iVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  uint uVar22;
  int iVar23;
  undefined1 auStackY_278 [32];
  undefined1 local_238 [4];
  uint local_234;
  int local_230;
  FString local_228;
  void **local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_210;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  FString local_1e0;
  void **local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c8;
  int local_1a8;
  int local_1a4;
  int local_1a0 [2];
  void **local_198;
  TBitArray<FDefaultBitArrayAllocator> *local_190;
  LPCRITICAL_SECTION local_188;
  FImgMediaMipMapInfo *local_180;
  FString local_178;
  FString local_168;
  FString local_158;
  void **local_148;
  int iStack_140;
  uint uStack_13c;
  TBitArray<FDefaultBitArrayAllocator> *local_138;
  undefined4 uStack_130;
  int iStack_12c;
  int local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8 [2];
  undefined4 local_ac;
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_278;
  ppvVar1 = (this->InfoCriticalSection).CriticalSection.Opaque3;
  local_180 = this;
  if (ppvVar1 == (void **)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)ppvVar1);
  lVar10 = this->_padding_;
  LeaveCriticalSection((LPCRITICAL_SECTION)ppvVar1);
  pTVar5 = CVarImgMediaMipMapDebugEnable.Ref;
  if (0 < (int)lVar10) {
    bVar7 = IsInParallelGameThread();
    if (((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pTVar5->ShadowedValue[0] != false) && (GEngine != (UEngine *)0x0)) {
      local_188 = (LPCRITICAL_SECTION)&(this->SequenceInfo).NumMipLevels;
      if (local_188 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(local_188);
      local_5c = 0x80;
      pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)
                ((this->ObjectsCriticalSection).CriticalSection.Opaque3 + 2);
      local_88._0_8_ = (void *)0x0;
      local_88._8_8_ = 0;
      local_218 = (this->ObjectsCriticalSection).CriticalSection.Opaque3;
      local_68 = (uint *)0x0;
      uStack_13c = 1;
      iStack_140 = 0;
      local_60 = 0;
      local_54 = 0;
      local_48 = (ForElementType<FSetElementId>)0x0;
      local_128 = 0;
      local_40 = 0;
      local_58 = 0xffffffff;
      iVar16 = *(int *)&(this->CachedVisibleTiles).field_0x10;
      local_230 = 0;
      local_1e8 = 1;
      iStack_12c = iStack_140;
      if (iVar16 != 0) {
        pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)&(this->CachedVisibleTiles).field_0x8;
        if (pTVar18 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar18 = pTVar21;
        }
        uVar13 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
        local_128 = 0;
        iStack_140 = 0;
        while (uVar13 == 0) {
          lVar10 = (longlong)iStack_140;
          local_128 = local_128 + 0x20;
          iStack_140 = iStack_140 + 1;
          iStack_12c = iVar16;
          if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_140)
          goto LAB_14ea5c54e;
          uVar13 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar10 * 4 + 4);
        }
        uStack_13c = -uVar13 & uVar13;
        uVar2 = (ulonglong)uStack_13c * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_1a8 = (int)lVar10;
        iStack_12c = local_128 + -1 + local_1a8;
        if (iVar16 < iStack_12c) {
          iStack_12c = iVar16;
        }
      }
LAB_14ea5c54e:
      uStack_124 = local_ac;
      iStack_120 = *(int *)((this->ObjectsCriticalSection).CriticalSection.Opaque3 + 1) -
                   *(int *)&(this->CachedVisibleTiles).field_0x1c;
      uVar13 = *(uint *)&(this->CachedVisibleTiles).field_0x10;
      TStack_210._padding_ = CONCAT44(uStack_13c,iStack_140);
      uVar22 = uVar13 & 0xffffffe0;
      uStack_130 = 0xffffffff;
      TStack_210.CurrentBitIndex = iStack_12c;
      TStack_210.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar13 >> 5;
      TStack_210._28_4_ = local_ac;
      TStack_210.BaseBitIndex = local_128;
      uStack_1f0 = CONCAT44(uStack_11c,iStack_120);
      local_234 = uVar13;
      TStack_210.Array = pTVar21;
      local_198 = local_218;
      local_190 = pTVar21;
      local_148 = local_218;
      local_138 = pTVar21;
      if ((((int)uVar13 < 0) || (iVar16 < (int)uVar13)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar3 = *(uint *)&(this->CachedVisibleTiles).field_0x10;
      uVar8 = local_234;
      iVar16 = local_230;
      if (uVar13 != uVar3) {
        pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)&(this->CachedVisibleTiles).field_0x8;
        pTVar17 = pTVar21;
        if (pTVar18 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar17 = pTVar18;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) &
                 *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
        while (uVar13 == 0) {
          lVar10 = (longlong)iVar14;
          uVar22 = uVar22 + 0x20;
          iVar14 = iVar14 + 1;
          uVar8 = uVar3;
          local_234 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14ea5c680;
          uVar13 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar10 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_1a4 = (int)lVar10;
        uVar8 = local_1a4 + -1 + uVar22;
        local_234 = uVar8;
        if ((int)uVar3 < (int)uVar8) {
          uVar8 = uVar3;
          local_234 = uVar3;
        }
      }
LAB_14ea5c680:
      while( true ) {
        ppvVar1 = local_218;
        if (*(int *)(local_218 + 1) - *(int *)((longlong)local_218 + 0x34) != (int)uStack_1f0) {
          local_238[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_238);
        }
        lpCriticalSection = local_188;
        if (((TStack_210.CurrentBitIndex == uVar8) && (TStack_210.Array == pTVar21)) &&
           (ppvVar1 == local_198)) break;
        pbVar15 = (bool *)((longlong)*ppvVar1 + (longlong)TStack_210.CurrentBitIndex * 0x50);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88,local_1a0,
                   pbVar15);
        iVar14 = 0;
        if (0 < *(int *)(pbVar15 + 0x2c)) {
          iVar20 = iVar14;
          do {
            iVar16 = *(int *)(pbVar15 + 0x28);
            iVar23 = 0;
            if (0 < iVar16) {
              do {
                uVar13 = iVar16 * iVar20 + iVar23;
                if ((((int)uVar13 < 0) || (*(int *)(pbVar15 + 0x20) <= (int)uVar13)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5c6,L""), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pbVar11 = pbVar15 + 8;
                if (*(bool **)(pbVar15 + 0x18) != (bool *)0x0) {
                  pbVar11 = *(bool **)(pbVar15 + 0x18);
                }
                uVar22 = uVar13 & 0x1f;
                if ((int)uVar13 < 0) {
                  uVar13 = uVar13 + 0x1f;
                }
                if ((*(uint *)(pbVar11 + (longlong)((int)uVar13 >> 5) * 4) >> uVar22 & 1) != 0) {
                  iVar14 = iVar14 + 1;
                }
                iVar16 = *(int *)(pbVar15 + 0x28);
                iVar23 = iVar23 + 1;
              } while (iVar23 < iVar16);
            }
            iVar20 = iVar20 + 1;
            uVar8 = local_234;
            iVar16 = local_230;
          } while (iVar20 < *(int *)(pbVar15 + 0x2c));
        }
        TStack_210.UnvisitedBitMask = TStack_210.UnvisitedBitMask & ~TStack_210._padding_._4_4_;
        local_230 = iVar16 + iVar14;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_210);
        pTVar21 = local_190;
        iVar16 = iVar16 + iVar14;
      }
      if (0 < local_88._8_4_ - local_54) {
        iVar16 = 0;
        TStack_210.CurrentBitIndex = 0;
        TStack_210.BaseBitIndex = iVar16;
        if (local_60 == 0) {
LAB_14ea5c84d:
          uVar13 = (uint)local_1e8;
        }
        else {
          puVar19 = (uint *)(local_88 + 0x10);
          if (local_68 != (uint *)0x0) {
            puVar19 = local_68;
          }
          uVar13 = *puVar19;
          while (uVar13 == 0) {
            lVar10 = (longlong)iVar16;
            TStack_210.BaseBitIndex = TStack_210.BaseBitIndex + 0x20;
            iVar16 = iVar16 + 1;
            TStack_210.CurrentBitIndex = local_60;
            if ((int)(local_60 + -1 + (local_60 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16)
            goto LAB_14ea5c84d;
            uVar13 = puVar19[lVar10 + 1];
          }
          uVar13 = -uVar13 & uVar13;
          uVar2 = (ulonglong)uVar13 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          TStack_210.CurrentBitIndex = (int)lVar10 + -1 + TStack_210.BaseBitIndex;
          if (local_60 < TStack_210.CurrentBitIndex) {
            TStack_210.CurrentBitIndex = local_60;
          }
        }
        local_218 = (void **)local_88;
        TStack_210.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
        TStack_210._28_4_ = local_8c;
        TStack_210._padding_ = CONCAT44(uVar13,iVar16);
        TStack_210.UnvisitedBitMask = 0xffffffff;
        TStack_1c8._padding_ = TStack_210._padding_;
        TStack_1c8.UnvisitedBitMask = 0xffffffff;
        TStack_1c8.CurrentBitIndex = TStack_210.CurrentBitIndex;
        local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_1c8.BaseBitIndex = TStack_210.BaseBitIndex;
        TStack_1c8._28_4_ = local_8c;
        local_228.Data.ArrayNum = 0;
        local_228.Data.ArrayMax = 0;
        local_1d0 = local_218;
        TStack_1c8.Array = TStack_210.Array;
        ::FString::AppendInt
                  (&local_228,*(int *)(local_88._0_8_ + (longlong)TStack_210.CurrentBitIndex * 0xc))
        ;
        TStack_1c8.UnvisitedBitMask = ~uVar13;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c8);
        if (TStack_1c8.CurrentBitIndex < (TStack_1c8.Array)->NumBits) {
          do {
            local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1e0.Data.ArrayNum = 0;
            local_1e0.Data.ArrayMax = 0;
            ::FString::AppendInt
                      (&local_1e0,
                       *(int *)((longlong)*local_1d0 + (longlong)TStack_1c8.CurrentBitIndex * 0xc));
            pFVar9 = ::FString::FString(&local_f8,L", ");
            ::FString::ConcatFF(&local_178,pFVar9,&local_1e0);
            iVar16 = local_178.Data.ArrayNum + -1;
            if (local_178.Data.ArrayNum == 0) {
              iVar16 = 0;
            }
            ::FString::AppendChars
                      (&local_228,(wchar_t *)local_178.Data.AllocatorInstance.Data,iVar16);
            if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_178.Data.AllocatorInstance.Data);
            }
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
            if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
            }
            TStack_1c8.UnvisitedBitMask = TStack_1c8.UnvisitedBitMask & ~TStack_1c8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c8);
          } while (TStack_1c8.CurrentBitIndex < (TStack_1c8.Array)->NumBits);
        }
        pFVar6 = local_180;
        ::FName::ToString((FName *)&(local_180->ViewInfos).ArrayNum,&local_e8);
        ::FString::PrintfImpl(&local_168,L"%s Mip Level(s): [%s]");
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_168.Data.ArrayNum != 0) {
          FVar12.Data = local_168.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_118,(wchar_t *)FVar12.Data);
        UEngine::AddOnScreenDebugMessage
                  (GEngine,-1,0.0,FColor::Yellow,&local_118,true,
                   &UE::Math::TVector2<double>::UnitVector);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        ::FName::ToString((FName *)&(pFVar6->ViewInfos).ArrayNum,local_d8);
        ::FString::PrintfImpl(&local_158,L"%s Num Tile(s): %d");
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_158.Data.ArrayNum != 0) {
          FVar12.Data = local_158.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_108,(wchar_t *)FVar12.Data);
        UEngine::AddOnScreenDebugMessage
                  (GEngine,-1,0.0,FColor::Yellow,&local_108,true,
                   &UE::Math::TVector2<double>::UnitVector);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        if (local_d8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8[0].Data.AllocatorInstance.Data);
        }
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data.AllocatorInstance.Data);
        }
      }
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return;
}

// UnsubscribeEndFrame @ 14ea5ebc0

void __thiscall FImgMediaMipMapInfo::UnsubscribeEndFrame(FImgMediaMipMapInfo *this)

{
  if ((this->OnEndFrameHandle).ID != 0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnEndFrame,(FDelegateHandle)(this->OnEndFrameHandle).ID);
    (this->OnEndFrameHandle).ID = 0;
    this->bIsCacheValid = false;
  }
  return;
}

